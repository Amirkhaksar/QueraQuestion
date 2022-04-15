clock = list(map(int,input().split()))
if(clock[0]==0):h=clock[0]
else:h=12-clock[0]

if(clock[1]==0):m=clock[1]
else: m=60-clock[1]

if(not((10-h)<=0)):h="0"+str(h)
if(not((10-m)<=0)):m="0"+str(m)
print("%s:%s"%(h,m))
