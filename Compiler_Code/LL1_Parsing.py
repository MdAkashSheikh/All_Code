#reading input files
input = open("LL1_Parser_Input.txt", "r").read()
input = input.replace("Îµ","ε")
equations = input.split()
heades = []
facts = []
equations_dict = {}

#finding firsts
first = {}
for i in range(0, len(equations)):
    if(equations[i][1] == "'"):
        heades.append(equations[i][:2])
        facts.append(equations[i][4:]) 
    else:
        heades.append(equations[i][0])
        facts.append(equations[i][3:])

    equations_dict[heades[i]] = facts[i] 
print(equations_dict)

for i in range(0, len(heades)):
    n = 0
    fs = set()
    for j in range(0, len(equations_dict[heades[i]])):
        if equations_dict[heades[i]][j] == '|':
            n = j + 1
        f = equations_dict[heades[i]][n]
        if not f.isupper():
            if f == 'i' and equations_dict[heades[i]][n+1] == 'd':
                f ='id'
            fs.add(f)
        
    first[heades[i]] = fs
for k in range(0, len(heades)):
    for i in range(0, len(heades)):
        n = 0
        if first[heades[i]] == set():
            for j in range(0, len(equations_dict[heades[i]])):
                if equations_dict[heades[i]][j] == '|':
                    n = j + 1
                try:
                    temp = set(first[equations_dict[heades[i]][n]])  
                    temp2 = set(first[heades[i]])
                except KeyError:
                    print("",end = "")
                temp1 = temp2.union(temp)
                first[heades[i]] = temp1


for i in range(0, len(heades)):
        for j in range(0, len(equations_dict[heades[i]])):
            if equations_dict[heades[i]][j] == '|' and equations_dict[heades[i]][j+1].isupper():
                try:
                    if equations_dict[heades[i]][j+2] == "'":
                        first[heades[i]] = first[heades[i]].union(first[equations_dict[heades[i]][j+1]+"'"]) 
                    else:
                        first[heades[i]] = first[heades[i]].union(first[equations_dict[heades[i]][j+1]])       
                except IndexError:
                    first[heades[i]] = first[heades[i]].union(first[equations_dict[heades[i]][j+1]])
print(first)
#finding follows
follow = {}
fullEqn = ""
for i in range(0, len(heades)):
    fullEqn += equations[i]
    fullEqn += '\n'
print(fullEqn)
for i in range(0, len(heades)):
    premiar = []
    if i == 0: premiar.append("$")
    for j in range(1, len(fullEqn)):
        if len(heades[i]) == 1:
            if heades[i] == fullEqn[j] and fullEqn[j+1] != "'" and fullEqn[j+1] != "|" and fullEqn[j+1] != "\n" and not (fullEqn[j+1]>='A' and fullEqn[j+1] <='Z'):
                premiar.append(fullEqn[j+1])
            elif heades[i] == fullEqn[j] and fullEqn[j+1]>='A' and fullEqn[j+1] <='Z':
                #premiar.append(first[fullEqn[j+1]])
                for t in first[fullEqn[j+1]]:
                    premiar.append(t)
        if len(heades[i]) == 2:
            if heades[i][0] == fullEqn[j] and fullEqn[j+1] == "'" and fullEqn[j+2] != "|" and fullEqn[j+2] != "\n" and not (fullEqn[j+2]>='A' and fullEqn[j+2] <='Z'):
                premiar.append(fullEqn[j+2])
            elif heades[i][0] == fullEqn[j] and fullEqn[j+1] == "'" and fullEqn[j+2]>='A' and fullEqn[j+2] <='Z':
                #premiar.append(first[fullEqn[j+1]+"'"])
                for t in first[fullEqn[j+1]+"'"]:
                    premiar.append(t)
    follow[heades[i]] = set(premiar)
print(follow) 
