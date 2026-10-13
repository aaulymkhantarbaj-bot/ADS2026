#Experiment with Mixtures
n,m=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
b=[]
i=j=0
cnt=0
INF=10**30
def get_min():
    global i,j
    x=a[i] if i<n else INF
    y=b[j] if j<len(b) else INF
    if x<=y:
        i+=1
        return x
    else:
        j+=1
        return y
while True:
    x=get_min()
    if x>=m:
        print(cnt)
        break