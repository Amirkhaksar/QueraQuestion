def get_input_point():
    return [int(x) for x in input().split()]

# Input points
p1 = get_input_point()
p2 = get_input_point()
p3 = get_input_point()

# Find the fourth point
p4 = [0, 0]

if p1[0] == p2[0]:
    p4 = [p3[0], p1[1] if p3[1] == p2[1] else p2[1]]
elif p2[0] == p3[0]:
    p4 = [p1[0], p2[1] if p1[1] == p3[1] else p3[1]]
elif p3[0] == p1[0]:
    p4 = [p2[0], p1[1] if p2[1] == p3[1] else p3[1]]

print(*p4)
