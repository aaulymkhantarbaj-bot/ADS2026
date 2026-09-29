# F-Robin Hood stealing the Gold
n, h = map(int, input().split())
bars = list(map(int, input().split()))

def hours_needed(k):
    total = 0
    for b in bars:
        total += (b + k - 1) // k  # ceil(b / k)
    return total

lo, hi = 1, max(bars)

while lo < hi:
    mid = (lo + hi) // 2
    if hours_needed(mid) <= h:
        hi = mid       # mid подходит, пробуем меньше
    else:
        lo = mid + 1   # mid не хватает, нужна скорость больше

print(lo)