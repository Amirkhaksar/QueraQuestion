#Language:python
#ID:52542
#QLink:https://quera.org/problemset/52542/
#Author:Amirkhaksar
groups = int(input())
members =input()
member_list = member_list = members.split()

for i in member_list:
    number =int(i)
    if number <= 3:
        print("*" * number)
    else:
        print("*")
