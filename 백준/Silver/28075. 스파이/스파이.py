import sys
from collections import deque
input = sys.stdin.readline


N, M = map(int, input().split())
lst = []
for i in range(2):
    tempt_list = list(map(int, input().split()))
    lst.append(tempt_list)

q = deque([])
for i in range(2):
    for j in range(3):
        q.append((i,j,j,lst[i][j]))
        
for t in range(N-1):
    length = len(q)
    for _ in range(length):
        x, y, before, point = q.popleft()
        for i in range(2):
            for j in range(3):
                if j == before:
                    q.append((i,j,j, point+lst[i][j]//2))
                else:
                    q.append((i,j,j, point+lst[i][j]))
answer = 0
while len(q) > 0:
    x,y,before, point = q.popleft()
    if point >= M:
        answer += 1
print(answer)