inp = str(input())
redCount = 0
greenCount = 0
yellowCount = 0
for i in inp:
    if i == 'R':
        redCount += 1
    if i == 'G':
        greenCount += 1
    if i == 'Y':
        yellowCount += 1
if (redCount >= 3 or redCount >= 2 and yellowCount >= 2 or redCount == 5 or yellowCount == 5 or greenCount == 0):
    print("nakhor lite")
else:
    print("rahat baash")
