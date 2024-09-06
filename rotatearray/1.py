l = [1,2,3,4,5,6,7]
k = 3
n = len(l)
# trying middle reversal
l.reverse()
l[0:k] = reversed(l[0:k])
l[k:n] = reversed(l[k:n])
print(l)