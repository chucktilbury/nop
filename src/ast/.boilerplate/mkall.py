#!/usr/bin/env python3
import sys, os, re
#from string import Template
from pprint import pprint as pp
import jinja2
import shutil

#
# Create all of the header files
#
def create_headers(words, camel, locks):
    t = Template(header_template)
    for n in range(len(words)):
        tn = camel[n]
        ln = locks[n]
        fn = words[n] + ".h"
        val = t.substitute({'filename':fn, 'lockname':ln, 'typename':tn})
        with open(os.path.join("../", fn), "w") as fh:
            fh.write(val)

#
# create all of the sources files.
#
def create_srcs(words, camel, locks):
    t = Template(srcs_template)
    for n in range(len(words)):
        tn = camel[n]
        ln = locks[n]
        fn = words[n] + ".c"
        val = t.substitute({'filename':fn, 'lockname':ln, 'typename':tn})
        with open(os.path.join("../", fn), "w") as fh:
            fh.write(val)

#
# Create a list of dependencies for each symbol.
#
def make_depends(fp):

    lst = []
    for line in fp:
        if len(line) > 0:
            tmp = line.strip().split()
            if len(tmp) and tmp[0] == ";":
                break
            else:
                for item in tmp:
                    s = re.search(r"^[a-z_]+$", item)
                    if s:
                        name = s.group(0)
                        if not name in lst:
                            # append unique name
                            lst.append(name)

    return lst

#
# Generate the dictionary of symbols with dependencies
#
def make_symbol_list(infile_name):

    lines = []

    with open(infile_name, "r") as fp:
        for line in fp:
            line = line.strip()
            if line == "%%":
                for line in fp:
                    s = re.search(r"^[a-z_]+$", line)
                    if s:
                        d = {}
                        d['name'] = s.group(0)
                        # Not using the dependencies
                        #d['deps'] = make_depends(fp)
                        lines.append(d)
                    if line == "%%":
                        break;

    return lines

#
# Write out the individual C files that implement the AST.
#
def write_cfiles(lst):

    with open('cfile_template.txt', 'r') as fh:
        txt = fh.read()

    templ = jinja2.Template(txt)
    for item in lst:
        with open(os.path.join('..', item['cfile']), 'w') as fh:
            fh.write(templ.render({'typename':item['symbol'],
                                   'lockname':item['lock'],
                                   'filename':item['cfile']}))

#
# Write out the header files for the AST implementation.
#
def write_hfiles(lst):

    with open('hfile_template.txt', 'r') as fh:
        txt = fh.read()

    templ = jinja2.Template(txt)
    for item in lst:
        with open(os.path.join('..', item['hfile']), 'w') as fh:
            fh.write(templ.render({'typename':item['symbol'],
                                   'lockname':item['lock'],
                                   'filename':item['hfile']}))

#
# Write out the ast_enums header that contains the types of ast data structure.
#
def write_ast_enums(lst):

    with open("ast_enums_template.txt", "r") as fh:
        txt = fh.read()

    templ = jinja2.Template(txt)
    with open(os.path.join('..', 'ast_enums.h'), 'w') as fh:
        fh.write(templ.render({'lines':symlst}))

#
# Write out the ast_includes header that contains the types of ast data structure.
#
def write_ast_headers(lst):

    with open("ast_includes_template.txt", "r") as fh:
        txt = fh.read()

    templ = jinja2.Template(txt)
    with open(os.path.join('..', 'ast_includes.h'), 'w') as fh:
        fh.write(templ.render({'lines':symlst}))

#
# Write a file of stuff that is not that great to template.
def write_other_stuff(lst):

    with open('other_stuff.txt', 'w') as fh:

        fh.write('\n\n')

        for item in symlst:
            outs = item['union']+'\n'
            fh.write(outs)
        fh.write('\n\n')

        for item in symlst:
            outs = item['types']+'\n'
            fh.write(outs)
        fh.write('\n\n')

        for item in symlst:
            outs = "    "+item['cfile']+'\n'
            fh.write(outs)
        fh.write('\n\n')
#
# Do all of the transforms and store them in the data structure.
#
def create_things(lst):

    for item in lst:
        #outs = "    AST_"+item['name'].upper()+","
        item['enum'] = item['name'].upper()
        tmp = item['name'].split('_')
        item['symbol'] = ''.join([x.capitalize() for x in tmp])
        item['lock'] = "%s"%(item['name'].upper())
        item['union'] = "    %s* _%s_;"%(item['symbol'], item['name'])
        item['types'] = "%%type<_%s_> %s"%(item['name'], item['name'])
        item['cfile'] = "%s.c"%(item['name'])
        item['hfile'] = "%s.h"%(item['name'])
        item['incls'] = "#include \"%s\""%(item['hfile'])


if __name__ == '__main__':
    # Comment this in to make it safer.
    #exit()

    if len(sys.argv) < 2:
        print("need qualified path to parser file")
        exit()
    else:
        infile = os.path.abspath(sys.argv[1])
        print("parsing file: "+ infile)

    symlst = make_symbol_list(infile)
    create_things(symlst)

    write_ast_enums(symlst)
    write_ast_headers(symlst)
    write_hfiles(symlst)
    write_cfiles(symlst)
    write_other_stuff(symlst)

    shutil.copy('ast.h', '..')
    shutil.copy('ast.c', '..')

    #pp(symlst)

    exit()







    fp = open("list.txt", "r")
    words = [x.strip() for x in fp if len(x) > 0]
    fp.close()

    camel = []
    for x in words:
        tmp = x.split('_')
        camel.append(''.join([x.capitalize() for x in tmp]))
    #pp(camel)

    locks = []
    for x in words:
        locks.append("%s"%(x.upper()))
    #pp(locks)

    # copy this into parser.y inside the %union
    print("    /* type list automatically generated by boilerplate */")
    for n in range(len(camel)):
        print("    %s* _%s_;"%(camel[n], words[n]))
    print("\n\n")

    # copy this into the parser.y after token definitions
    print("    /* token list automatically generated by boilerplate */")
    for n in range(len(camel)):
        print("%%type<_%s_> %s"%(words[n], words[n]))
    print("\n\n")

    # copy this into the ast.h
    rl = words
    rl.reverse()
    print("// header list automatically generated by boilerplate")
    for x in rl:
        print("#include \"%s.h\""%(x))
    print("\n\n")

    # copy this into the CMakeLists.txt
    print("    # list generated automatically by boilerplate")
    for x in words:
        print("    %s.c"%(x))
    print("\n\n")

    # copy this into ast.h
    print("// enums automatically generated by boilerplate")
    print("typedef enum {")
    for x in locks:
        print("    AST_%s,"%(x))
    print("} AstType;\n\n")

    #create_headers(words, camel, locks)
    #create_srcs(words, camel, locks)


#
# Swap two elements in a list
#
def swap(lst, first, last):

    get = (lst[first], lst[last])
    (lst[last], lst[first]) = get

    return lst # not really required

#
# Search the list and find the index where the symbol is defined.
#
def find_symbol_index(lst, symbol):

    for idx, item in enumerate(lst):
        if item['name'] == symbol:
            return idx

    # Should never happen, but if it does, look for a missing ';' in the parser.
    raise(Exception("Symbol \"%s\" is not defined in the list!"%(symbol)))

#
# Create the ordered list of symbols that is sorted by dependencies. In other
# words, a symbol must be defined at a lower index than an item in the list of
# dependencies. Note that for recursive rules, it depends on itself.
#
# The reason this list needs to be sorted by dependency is that the header
# files refer to other data structures and if they are not already defined,
# then it will not compile.
#
def sort_by_depends(lst):

    symlst = lst
    for idx, item in enumerate(symlst):

        sys.stderr.write(str(idx))
        sys.stderr.write('. ')

        sys.stderr.write('(')
        sys.stderr.write(item['name'])
        sys.stderr.write(') ')

        #sys.stderr.write('. (')
        #sys.stderr.write(str(item['deps']))
        #sys.stderr.write(') ')

        if len(item['deps']) > 0:
            for thing in item['deps']:

                index = find_symbol_index(symlst, thing)
                sys.stderr.write(str(index))
                if index <= idx:
                    sys.stderr.write(", ")
                else:
                    sys.stderr.write("*, ")

        sys.stderr.write('\n')
