w = input();c = 1
word = list(w)
for i in range(len(word)):
    out=[]
    if (i==0):
        print(w)
    else:
        for j in range(c+1):
            out.append(word[c])
        out+=w[c+1:];c+=1
        a=""
        for q in out:a+=q
        print(a)