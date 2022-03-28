a = int(input())
b = int(input())
c = int(input())
if a*a == b*b + c*c:
    print("YES")
elif b*b == c*c + a*a:
    print("YES")
elif c*c == a*a + b*b:
    print("YES")
else:
    print("NO")
