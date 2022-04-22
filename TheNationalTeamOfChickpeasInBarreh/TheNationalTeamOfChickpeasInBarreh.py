'''
Language: Python
ID: 10163
QLink: https://quera.org/problemset/10163/
Author: AmirZoyber
'''

abc = list(map(int,input().split()))

sf = list(map(int,input().split()))
sn = list(map(int,input().split()))
sd = list(map(int,input().split()))
arr=[]
for i in (sf[0],sn[0],sd[0]):           # False = means in <--
    arr.append((i,False))               # True = means out -->
for i in (sf[1],sn[1],sd[1]):
    arr.append((i,True))
arr.sort()
s=0;t=-1

for i in range(len(arr)-1):
    if(arr[i][1]==False):t+=1
    else: t-=1
    s+=[abc[0],abc[1],abc[2]][t] * (arr[i+1][0] - arr[i][0]) * (t+1)

print(s)