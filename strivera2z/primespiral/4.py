# bubble sort in python

def bubosort(arr, n):
    swapp = True
    for i in range(0,n-1):
        for j in range(0,n-1-i):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                swapp = True
        
        if swapp == False:
            break

    print(arr)


arr = [10,2,45,100,3,5]
bubosort(arr, len(arr))