num = int(input())

rev = 0
orig = num
while num>0:
    rem = num%10
    rev = rem + (rev*10)
    num = int(num/10)

if orig==rev:
    print("YES")
else:
    print("NO")