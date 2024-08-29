# x = str(input("Enter your string: "))
x = "   fly me to   the moon   "
tempa = []
print(len(x))
for i in range(len(x)-1, 0, -1):
    try:
        if ((int(x[i])).isnum):
            tempa.append(i)
    except Exception:
        continue
        
print(tempa)

