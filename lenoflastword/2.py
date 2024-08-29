x = "   fly me to   the moon   "
l = x.split(" ")
count = 0

l.reverse()
global temp

for i in l:
    if i != "":
        temp = i
        break

print(len(temp))

