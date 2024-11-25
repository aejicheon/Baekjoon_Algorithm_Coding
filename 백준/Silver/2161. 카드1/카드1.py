import sys
from collections import deque
input = sys.stdin.readline

N = int(input())

q = deque([])
for i in range(1,N+1):
    q.append(i)
answer = []
while len(q) > 1:
    tempt = q.popleft()
    answer.append(tempt)
    rever_tempt = q.popleft()
    q.append(rever_tempt)
answer.append(q.popleft())

for i in answer:
    print(i, end=' ')
