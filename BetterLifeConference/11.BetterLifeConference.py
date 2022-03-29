c_right = [20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1]
c_left = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
r = [10,9,8,7,6,5,4,3,2,1]
data = input().split()
data = list(map(int,data)) 
print("Right",end=" ") if (data[1]<=10) else print("Left",end=" ")
print(r[data[0]-1],end=" ")
print(c_left[data[1]-1]) if (data[1]<=10) else print(c_right[data[1]-1])
