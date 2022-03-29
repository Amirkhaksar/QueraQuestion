import string
import random
line = int(input())
al = list(string.ascii_lowercase)
for i in range(0, line):
    output = ''
    size = random.randint(0,25)
    for i in range(0, size):
        r = random.randint(0,25)
        output += al[r]
    print('s'+output)
