'''
Language: python
ID: 17902
QLink: https://quera.org/problemset/17902/
Author: AmirZoyber
'''
import collections
k = int(input())
passw = [int(a) for a in input()]
l=[];c=0
for i in range(k):
    l.append([int(a) for a in input()])
for i in range(len(l)):
    a_list = collections.deque(l[i])
    if (l[i].index(passw[i])<=4):
        while(list(a_list)[0]!=passw[i]):
            a_list.rotate(-1)
            c+=1
    elif(l[i].index(passw[i])>=5):
        while(list(a_list)[0]!=passw[i]):
            a_list.rotate(1)
            c+=1
print(c)
