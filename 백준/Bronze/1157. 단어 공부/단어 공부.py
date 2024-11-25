st = list(input())

arr = [0]*26
al = 'abcdefghijklmnopqrstuvwxyz'
al2 = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

arr2 = list(al)
arr3 = list(al2)

for n in st:
    if n in arr2:
        idx = arr2.index(n)
        arr[idx] += 1
    if n in arr3:
        idx = arr3.index(n)
        arr[idx] += 1
        
max_index = max(arr)
 
if arr.count(max_index) > 1:
    print("?")
else:
    iid = arr.index(max_index)
    print(arr3[iid])