# x = str(input())

# l = x.split(" ")

# for i in l:
#     print(i[0])

# x = 'a'
# print(chr(ord(x)-32))

x = str(input())

res = ""

l = x.split(" ")
j = 0
for i in l:
    res = res+(i.capitalize())+" "
    
    j+=1

    

print(res)



