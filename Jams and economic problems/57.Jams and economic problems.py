#Language = python
#ID = 20249
#QLink = https://quera.org/problemset/20249/
#Author = AmirKhaksar

n, k = input().split()
moraba = input().split()
sumMoraba = 0
for s in moraba:
    sumMoraba += int(s)

div = sumMoraba/int(k)
print(int(int(n) - div))