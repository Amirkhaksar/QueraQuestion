#Language:python
#ID:590
#QLink:https://quera.org/problemset/590/
#Author:pegahghafari
m,n=input().split()
m=int(m)
n=int(n)
if m==1 or n==1:
    gcd=1
    lcm=m*n
else:
    if m<=n:
        smal_number=m
        big_number=n
    else:
        smal_number=n
        big_number=m
    counter=2
    gcd=1
    while counter<=smal_number:
        if big_number%counter==0 and smal_number%counter==0:
            big_number=big_number//counter
            smal_number=smal_number//counter
            gcd*=counter
            counter=1
        counter+=1


    lcm=m*n//gcd

print(gcd,lcm)
