#Language:python
#ID:14580
#QLink:https://quera.org/problemset/14580/
#Author:Amirkhaksar

inp = input().split()
n,i,k = inp[0],inp[1],inp[2]
name_network = []
for d in range(0,int(n)):
     inp = input()
     name_network.append(inp)
for j in range(0,int(k)):
     i = (int(i)+1) % int(n)
print(name_network[i-1])
