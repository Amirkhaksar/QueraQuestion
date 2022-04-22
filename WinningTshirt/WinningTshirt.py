'''
Language: Python
ID: 3107
QLink: https://quera.org/problemset/3107/
Author: AmirZoyber
'''
XL_Size = list(map(int,input().split()))
Winner_Size = list(map(int,input().split()))
print("yes") if(XL_Size[0]>=Winner_Size[0] and XL_Size[1]>=Winner_Size[1]) else print("no")