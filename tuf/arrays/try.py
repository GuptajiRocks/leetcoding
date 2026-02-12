ll = ["admin", "guest", "guest", "user"]

for u in ll:
    print(u)
    if u == "guest":
        print(u)
        ll.remove(u)
        print(ll)
    print(ll)


print(ll)