#Vowels and consonants
n = int(input())
s = input().strip()
cnt = [0] * 26
for c in s:
    cnt[ord(c) - 97] += 1
v = "aeiou"
res = ""
for i in range(26):
    if chr(97 + i) in v:
        res += chr(97 + i) * cnt[i]
for i in range(26):
    if chr(97 + i) not in v:
        res += chr(97 + i) * cnt[i]
print(res)