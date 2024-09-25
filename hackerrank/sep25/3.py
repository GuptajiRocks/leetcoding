from itertools import combinations
x = str(input())
l = x.split(" ")
string = l[0]
n = int(l[1])

sorter = string
l = [x for x in sorter]
l.sort()
jesus = ""
for _ in l:
    print(_)
    jesus = jesus+_

fin = list(combinations(jesus, n))
fin.sort()



for i in fin:
    l = [x for x in i]
    s = ""
    for j in l:
        s = s+j
    print(s)
