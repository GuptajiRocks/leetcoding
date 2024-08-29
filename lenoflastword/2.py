def les():
    l = x.split(" ")
    count = 0

    l.reverse()
    global temp

    for i in l:
        if i != "":
            temp = i
            break

    return len(temp)


x = "   fly me to   the moon   "

leeng = les(x)

