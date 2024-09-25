from itertools import permutations
x = str(input())
l = x.split(" ")
string = l[0]
n = int(l[1])

fin = list(permutations(string, n))
fin.sort()
for i in fin:
    l = [x for x in i]
    s = ""
    for j in l:
        s = s+j
    print(s)    