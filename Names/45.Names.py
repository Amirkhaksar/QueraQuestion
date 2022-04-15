#Language = python
#ID = 2529
#QLink = https://quera.org/problemset/2529/
#Author = AmirKhaksar


n = int(input())

lister = []
for i in range(n):
    lister.append(input())

print(max([len(set(i)) for i in lister]))