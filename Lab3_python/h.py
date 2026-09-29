# H-K-subarray
from bisect import bisect_left

n, k = map(int, input().split())
a = list(map(int, input().split()))

prefix = [0] * (n + 1)
for i in range(n):
    prefix[i+1] = prefix[i] + a[i]

min_len = float('inf')
for l in range(n):
    # ищем минимальный r такой, что prefix[r+1] - prefix[l] >= k
    # т.е. prefix[r+1] >= prefix[l] + k
    target = prefix[l] + k
    idx = bisect_left(prefix, target, l + 1)
    if idx <= n:
        min_len = min(min_len, idx - l)

print(min_len)