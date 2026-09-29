#G-Cutting the Ropes
n, k = map(int, input().split())
ropes = list(map(int, input().split()))

def pieces_count(x):
    total = 0
    for r in ropes:
        total += int(r / x)  # floor(r / x)
    return total

lo, hi = 0.0, max(ropes)

for _ in range(100):
    mid = (lo + hi) / 2
    if pieces_count(mid) >= k:
        lo = mid    # mid подходит, пробуем больше
    else:
        hi = mid    # mid не хватает, нужно меньше

print(f"{lo:.9f}")