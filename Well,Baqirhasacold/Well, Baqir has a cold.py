l=[]
for i in range(5):
    w=input()
    if(("MOLANA" in w) or ("HAFEZ" in w)):
        l.append(i+1)
print(*l)