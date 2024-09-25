x = str(input())
y = str(input())

xtup = tuple([int(i) for i in x.split(" ")])
ytup = tuple([int(j) for j in y.split(" ")])

fin = []
for i in xtup:
    for j in ytup:
        fin.append((i,j))

for _ in fin:
    print(_, end=" ")