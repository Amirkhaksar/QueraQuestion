target = [int(i) for i in input().split(" ")]
persons = [0 for i in range(4)]
counter = 0
while (True):
    if (0 in target):
        break
    else:
        target[0] -= 1
        target.insert(0, target[-1])
        target.pop()
        target.insert(0, target[-1])
        target.pop()
        if (counter == 4):
            counter = 0
        persons[counter] += 1
        counter += 1
persons = [str(i) for i in persons]
print(" ".join(persons))