line2 = input().split()
line_res = []
for i in range(0, len(line1)):
    temp_line = int(line1[i])^int(line2[i])