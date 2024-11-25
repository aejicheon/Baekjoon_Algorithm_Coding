import sys
import heapq
input = sys.stdin.readline

N, M = map(int, input().split())
lst = []
for i in range(N):
    tempt = input()
    lst.append(tempt)
dic = dict()
for s in lst:
    if len(s) <= M: # 개행문자 고려 모든 문자열 길이 +1
        continue
    if s not in dic:
        dic[s] = [-1,-len(s),s]
    else:
        dic[s][0] -= 1


answer = []
for i in dic:
    answer.append(dic[i])
answer.sort()
for i in answer:
    print(i[2], end='')


    
    

a = '''
7 4 
apple
ant
sand
apple
append
sand
sand
'''