n = int(input())
sor_ls = list(map(int, input().split()))
mx = max(sor_ls)


print(sum(list(map(lambda x:x/mx*100, sor_ls)))/n)