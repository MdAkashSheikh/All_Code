#find non repeted numbers
def NonRepeted(list):
    not_repeted = dict()
    for i in range(0, len(list)):
        count = 0
        for j in range(0, len(list)):
            if list[i] == list[j]:
                count += 1
        if count == 1:
            not_repeted[list[i]] = count
    return not_repeted

#find floating numbers
def floatingNumbers(list):
    float_values = []
    for i in list:
        if i.find(".") != -1:
            float_values.append(i)
    return float_values


#fint the 4 polar velues
def polarValues(list):
    list.sort()
    print("Lowest Values: "+str(list[0])+" & "+str(list[1]))
    list.sort(reverse = True)
    print("Heighest Values: "+str(list[0])+" & "+str(list[1]))



#================DriverCode=========================
list = [int(i) for i in input().split()]
#nonRepeted = NonRepeted(list)
#print("Non Repeted Numbers Are: " + str(NonRepeted(list).keys()).replace("dict_keys",""))
#floatNumbers = floatingNumbers(list)
#print("Floating Numbers Are: " + str(floatNumbers).replace("['","").replace("'","").replace("]","."))
polarValues(list)