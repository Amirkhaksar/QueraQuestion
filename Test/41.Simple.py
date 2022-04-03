li = []
for i in range(0, 4):
    inp = int(input())
    li.append(inp)
sumnum = 0
avg = 0
product = 1

for i in li:
    sumnum += i
    product *= i

avg = sumnum / 4
maxnum = max(li)
minnum = min(li)
print("Sum : " , format(sumnum,'.6f'))
print("Average : " , format(avg,'.6f'))
print("Product : " , format(product,'.6f'))
print("MAX : " , format(maxnum,'.6f'))
print("MIN : " , format(minnum,'.6f'))
