def checkhappy(x):
    temp = 0
    while (temp != 1):
        for i in range(len(x)):
            temp = int(x[0])**2
        if temp == 1:
            return "Happy"
        else:
            temp = 0
            return calcpower(int(x[i]))
        

def calcpower(y):
    return y**2

x = str(input("Enter the number: "))
res = checkhappy(x)
print(res)
