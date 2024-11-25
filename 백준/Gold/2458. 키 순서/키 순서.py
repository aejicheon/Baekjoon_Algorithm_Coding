import sys
from collections import deque
input = sys.stdin.readline

N, M = map(int, input().split())

lst = []
rever_lst = []
for i in range(N+1):
    tempt_list = []
    tempt_list2 = []
    lst.append(tempt_list)
    rever_lst.append(tempt_list2)
for i in range(M):
    a, b = map(int, input().split())
    lst[a].append(b)
    rever_lst[b].append(a)
    
answer = 0
for i in range(1, N+1):
    q = deque([]) 
    q.append(i)
    count = 0
    visited = set()
    visited.add(i)
    while len(q) > 0:
        x = q.popleft()
        for j in lst[x]:
            if j not in visited:
                visited.add(j)
                count += 1
                q.append(j)
    q.append(i)
    visited = set()
    visited.add(i)
    while len(q) > 0:
        x = q.popleft()
        for j in rever_lst[x]:
            if j not in visited:
                visited.add(j)
                count += 1
                q.append(j)
    if count == N-1:
        answer += 1
print(answer)
                