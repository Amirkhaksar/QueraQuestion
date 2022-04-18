'''
Language: Python
ID: 2530
QLink: https://quera.org/problemset/2530/
Author: AmirZoyber
'''
word=list(input())
t=0
for i in word:
    for j in ['F','L','D','T']:
        if (i==j):t+=1
print(2**t)
