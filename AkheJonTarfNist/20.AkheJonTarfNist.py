li = ['shanbe', '1shanbe', '2shanbe', '3shanbe', '4shanbe', '5shanbe', 'jome']
score = [0, 0, 0, 0, 0, 0, 0]
diction = dict(zip(li, score))

for count in range(0, 3):
    size = int(input())
    day = str(input())
    li = day.split(' ', size)
    for i in li:
        diction[i] = diction.get(i, 0) + 1

i = 0
lis = diction.values()
for j in lis:
    if j == 0:
        i += 1


if i == 0:
    print(0)
else:
    print(i)
