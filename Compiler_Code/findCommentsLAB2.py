def isComment(line):
    if line.find("//") == 0 or line.find("/*") == 0:
        print("This is a comment.")
    else:
        print("This is not a comment.")
while True:
    try:
        line = input()
        isComment(line)
    except EOFError:
        break