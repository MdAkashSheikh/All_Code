test = int(input())
for i in range(0, test):
    num = int(input())
    binary = str(bin(num)).replace('0', '').replace('b','')
    print(len(binary))
