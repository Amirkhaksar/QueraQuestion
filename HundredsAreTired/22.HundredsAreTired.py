def rev(num):
    reverse=0
    while num > 0:
        rem = num % 10
        reverse = reverse * 10 + rem
        num //= 10 
    return reverse
n1 = int(input())
n2 = int(input())
if (rev(n1)>rev(n2)):
    print(n2,"<",n1)
elif(rev(n2)>rev(n1)):
    print(n1,"<",n2)
else:
    print(n1,"=",n2)