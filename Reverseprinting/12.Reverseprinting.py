li = []
while(True):
    inp = int(input(""))
    if inp != 0:
        li.append(inp)
    else:
        li.reverse()
        for i in li:
            print(i)
        break

