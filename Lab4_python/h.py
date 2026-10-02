#Greater Sum Tree
n = int(input())
a = sorted(map(int, input().split()), reverse=True)

s = 0
ans = []

for x in a:
    s += x
    ans.append(s)

print(*ans)