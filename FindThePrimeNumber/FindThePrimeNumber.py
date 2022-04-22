#Language:python
#ID:593
#QLink:https://quera.org/problemset/593/
#Author:Amirkhaksar

n = input()
m = int(n)
digit_sum = 0
counter = 0
while counter < 5:
    digit_sum += int(n) % 10
    n = int(n)//10 
    counter+=1
    
b = digit_sum    
def is_prime(num):
    if num> 1:  
        for n in range(2,num):  
            if (num % n) == 0:  
                return False
        return True
    else:
        return False
            
number = m + 1
i = 0

while i < b:
    if is_prime(number):
        i += 1
        if i == b :
            print(number)
    number+= 1
