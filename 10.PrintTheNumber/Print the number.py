num = input()
n = [int(d) for d in str(num)]
for i in n:
    print(i,end="")
    print(":",end=" ")
    for j in range(i):
        print(i,end="")
    print("")