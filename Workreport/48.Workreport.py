#Language = python
#ID = 49535
#QLink = https://quera.org/problemset/49535/
#Author = AmirKhaksar
n,k = input().split()
n,k = int(n),int(k)
total = 0
for _ in range(n):
    total +=int(input())

if total>=k:
    print("YES")
else:
    print("NO")