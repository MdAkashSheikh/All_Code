def findHeades():
    head = []
    for i in range(0, len(equations)):
        head.append(equations[i][0])
    return head


def makeSubstitutionValue(se, h, subs):
    for i in range(0, len(se)):
        if h in se[i]:
            remove = se[i]
            for j in range(0, len(se[i])):
                remove = remove.replace(h,"")
    demo_subs = subs
    demo_subs_list = list(demo_subs)
    var = 0
    for i in range(0, len(demo_subs_list)):
        if demo_subs_list[i] == "|" and var!=i:
            demo_subs_list.insert(i, remove)
            var = i+1
             
    demo_subs = ""
    for i in demo_subs_list:
        demo_subs+=i
    return demo_subs


def substituteValue(se, subs, h):
    se = se[3:]
    se = se.split("|")
    
    for i in range(0, len(se)):
        if h in se[i]:
            se[i] = se[i].replace(h, makeSubstitutionValue(se, h, subs))
    ses = ""
    for i in range(0, len(se)):
        ses += se[i]+"|"
    ses = ses[0:len(ses)-1]
    return ses



def updateEquation(se, allHead, equation_dict):
    head = se[0]
    u = 0
    if len(allHead) == 0:
        return se
    else:
        for i in range(0, len(allHead)):
            for j in range(1, len(se)):
                if se[j] == allHead[i]:
                    u = 1
                    substitutedEqn = substituteValue(se, equation_dict[allHead[i]], allHead[i])
        if u == 1:
            substitutedEqn = head+"->"+substitutedEqn
            return substitutedEqn
        else:
            return se

def getEquation(se):
    eqn = se.split("|")
    head = se[0]
    eqn[0] = eqn[0][3:]
    for i in range(0, len(eqn)):
        eqn[i] += head
        eqn[i] += "'"
    se_ret = head+"->"
    for srtn in eqn:
        if srtn[0] != head:
            se_ret += srtn+"|"
    se_ret = se_ret[0:len(se_ret)-1]
    return se_ret


def getRecurtion(se):
    eqn = se.split("|")
    head = se[0]
    eqn[0] = eqn[0][3:]
    rec_ret = head+"'->"
    for i in range(0, len(eqn)):
        if eqn[i][0] == head:
            rec_ret += eqn[i] + "|"
    return rec_ret + "ε"


def removeRecurtion(se):
    rec = 0
    for i in range(1, len(se)):
        if (se[i] == '>' or se[i] == '|') and se[i+1] == se[0]:
            rec = 1
            return getEquation(se), getRecurtion(se)
    if rec == 0:
        return se, ""

inputs = open("LRR.txt", "r").read()
equations = inputs.split()
equation_dict = {}
heades = findHeades()
updated_equation = []
recursive = []
non_recursive = []
for i in range(0, len(equations)):
    equation_dict[equations[i][0]] = equations[i][3:] 
for i in range(0, len(equations)):
    temp_updated_equation = updateEquation(equations[i], heades[0:i], equation_dict)
    equation_dict[heades[i]] = temp_updated_equation[3:]
    real_equ, recur_equ = removeRecurtion(heades[i]+"->"+equation_dict[heades[i]])
    recursive.append(recur_equ)
    equation_dict[heades[i]] = real_equ[3:] 

for i in range(0, len(equation_dict)):
    non_recursive.append(heades[i]+"->"+equation_dict[heades[i]])

print(inputs, end = "\n\n***Solution***\n\n")
for i in range(0, len(non_recursive)):
    try:
        print(non_recursive[i])
    except IndexError:
        print("",end="")
    if recursive[i] != "":
        print(recursive[i])
