#find the missing number:
def missingNumbers(list,n):
    list = [0]*n
    for i in range (len(input_list)):
        list[input_list[i]] = 1
    print("Missing Numbers Are: ", end = "")
    for i in range(n):
        if list[i] == 0:
            print(i, end = " ")

#Short the list
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
    positive_list.sort()
    hlen = max(len(negative_list), len(positive_list))
    for i in range(hlen):
        try:
            print(negative_list[i], end = " ")
        except IndexError:
            print("", end = "")
        try:
            print(positive_list[i], end = " ")
        except IndexError:
            print("", end = "")


#Driver Code for Missing Number 

n = int(input("Enter the number of array size: "))
input_list = [int(i) for i in input().split()]
missingNumbers(input_list,n)

#Driver Code For Shorting Game
'''
print("Enter some random numbers: ", end = "")
input_list = [int(i) for i in input().split()]
shortingGame(input_list)
'''