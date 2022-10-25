line = input()
words = line.split()
#print("Number of words: "+str(len(words)))
#print("Without special Characters: "+str(line.replace("!","").replace("#","").replace("$","").replace("%","")
#.replace("^","").replace("&","").replace("*","").replace(".","").replace(",","").replace("@","")))
vowel_c = {}
number_c = {}
lowercase = line.lower().replace(" ","")
for vowel in "aeiou":
    count = lowercase.count(vowel)
    vowel_c[vowel] = count
for number in "0123456789":
    count = lowercase.count(number)
    number_c[number] = count
print("Total Numbers: "+str(sum(number_c.values())))
print("Total Vowels: "+str(sum(vowel_c.values())))
print("Total Consonants: "+str(len(lowercase)-sum(vowel_c.values())-sum(number_c.values())))
print("Number of Spaces: "+str((len(words)-1)))
print("Without Vowels:"+line.replace("a", "").replace("e", "").replace("i", "").replace("o", "").replace("u", "")
.replace("A", "").replace("E", "").replace("I", "").replace("O", "").replace("U", ""))
#print("Different Vowels: "+str(vowel_c))