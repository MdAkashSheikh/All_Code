#Find the repeted numbers
def RepetedNumbers(list):
    repeted = set()
    for i in range(0, len(list)):
        for j in range(i + 1, len(list)):
            if list[i] == list[j]:
                repeted.add(list[i])
    return repeted

#Find the number repeted how many times
def Repetation(list):
    repeted = dict()
    for i in range(0, len(list)):
        count = 0
        for j in range(0, len(list)):
            if list[i] == list[j]:
                count += 1
        if count != 1:
            repeted[list[i]] = count
    return repeted

#Driver Code
list = [int(i) for i in input().split()]
print("The Repeted Numbers Are: " + str(RepetedNumbers(list)))
print("Repetation of Numbers Are: " + str(Repetation(list)))