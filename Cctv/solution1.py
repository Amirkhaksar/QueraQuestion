from collections import Counter

x = []
y = []
x1 = input().split()
x.append(x1[0])
y.append(x1[1])
x2 = input().split()
x.append(x2[0])
y.append(x2[1])
x3 = input().split()
x.append(x3[0])
y.append(x3[1])

counter = Counter(x)
non_duplicates_x = [item for item, count in counter.items() if count == 1]

counter = Counter(y)
non_duplicates_y = [item for item, count in counter.items() if count == 1]

for i in non_duplicates_x:
    print(int(i),end='')
    for i in non_duplicates_y:
        print('',int(i))