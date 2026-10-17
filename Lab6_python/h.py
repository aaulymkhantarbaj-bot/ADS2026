#Problem 8
n = int(input())
a = input().split()
x = input().strip()
print(next((c for c in a if c > x), a[0]))