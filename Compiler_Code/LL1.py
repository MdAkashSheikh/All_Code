def getFirst(e, ed):
    demo = ed
    first = {}
    for i in range(0,len(demo)):
        temp = demo[i].split("|")
        temp_first = set()
        for j in range(0, len(temp)):
            if temp[j][0] >= 'A' or temp[j][0] <= 'Z':
                print()
            else:
                temp_first.add(temp[j][0])
        first[heades[i]] = temp_first 
    print(first)







inputs = open("LL1_Parser_input.txt", "r").read().replace("Îµ", "ε")
equations = inputs.split()
equation_dict = {}
for eqn in equations:
    if eqn[1] == "'":
        equation_dict[eqn[0:2]] = eqn[4:]
    else:
        equation_dict[eqn[0]] = eqn[3:]
heades = list(equation_dict.keys())
terminal_found = []
print(equation_dict)
print(len(equation_dict))
for i in range(0, len(equation_dict)):
    temp = equation_dict[heades[i]]
    temp = temp.split("|")
    c = 0
firsts = getFirst(equations, equation_dict)
            
print(terminal_found)
