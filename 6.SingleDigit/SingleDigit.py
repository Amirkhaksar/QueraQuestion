import math
a = str(input())
A = 1


def splitnumber(num):
    spn = []
    for i in range(0, len(str(num)), A):
        spn.append(int(a[i: i + A]))
    return spn


def plusnumber(listnumber):
    result = 0
    for i in range(0, len(splitnumber(a))):
        result += listnumber[i]
    return result


while(True):
    sum = plusnumber(splitnumber(a))
    if len(str(sum)) == 1:
        print(sum)
        break
    else:   
        a = str(sum) 
        