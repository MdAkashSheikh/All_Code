import math
'''
def swapTwoNumbers(a, b):
    a, b = b, a
    return a, b

def swapThreeNumbers(a, b, c):
    a, c = c, a
    b, c = c, b
    return a, b, c

def shortingGame(list):
    list.sort()
    print(list)
    negative_list = []
    positive_list = []
    for i in list:
        if i < 0:
            negative_list.append(i)
        else:
            positive_list.append(i)
    negative_list.sort()
    positive_list.sort(reverse=True)
    hlen = max(len(negative_list), len(positive_list))
    for i in range(hlen):
        try:
            print(negative_list[i], end = " ")
            #print(negative_list[i+1], end = " ")
        except IndexError:
            print("", end = "")
        try:
            print(positive_list[i], end = " ")
            #print(positive_list[i+1], end = " ")
        except IndexError:
            print("", end = "")




a, b = input().split()
print(swapTwoNumbers(a, b))

a, b, c = input().split()
print(swapThreeNumbers(a, b, c))

print("Enter some random numbers: ", end = "")
input_list = [int(i) for i in input().split()]
shortingGame(input_list)

def swapValues(list):
    l = len(list)
    for i in range(0, math.ceil(l/2)):
        l -= 1
        list[i], list[l] = list[l], list[i]
    return list

list = [int(i) for i in input().split()]
list_swaped = swapValues(list)
print(list_swaped)


def isPrime(num):
    val = True
    for i in range(2, math.ceil(num/2)+1):
        if(num%i==0):
            val = False
            break
    return val

list = [int(i) for i in input().split()]
print("Prime Numbers Are: ", end = "")
for i in range(0, len(list)):
    if isPrime(list[i]):
        print(list[i], end = " ")
'''
list = [int(i) for i in input().split()]
list.reverse()
print(list)