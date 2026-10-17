#Problem C. Azat likes sorting
s = input().strip()
cnt = [0] * 26
for c in s:
    cnt[ord(c) - 97] += 1
print("".join(chr(97 + i) * cnt[i] for i in range(26)))
