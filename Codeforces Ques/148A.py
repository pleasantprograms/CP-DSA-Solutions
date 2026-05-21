k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())

w = {}
i=1
while i<=d: 
    if (i%k==0 or i%l==0 or i%m==0 or i%n==0 and i!=0):
        w[i]=1
    i+=1

print(len(w))