minimum = int(input())
maximum = int(input())

for Number in range (minimum, maximum + 1):
    count = 0
    for i in range(2, (Number//2 + 1)):
        if(Number % i == 0):
            count = count + 1
            break


    if (count == 0 and Number != 1):
        print(Number)
