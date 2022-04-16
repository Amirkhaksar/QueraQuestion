#Language = python
#ID = 2705
#QLink = https://quera.org/problemset/2705/
#Author = AmirKhaksar

p, d = [int(i) for i in input().split()]

x = 1
while True:
    if 0 <= (x * d) % p <= p/2:
        print(x * d)
        break
    x += 1