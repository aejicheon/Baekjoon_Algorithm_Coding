n = int(input())
inp = input()

score = 0
bonus = 0
for default_score, val in enumerate(inp, 1):
    if val == "O":
        score += default_score + bonus
        bonus += 1
    else:
        bonus = 0
print(score)