marks=['sacin',50,55,67,76,89]      #declares an list 'marks' to store of 'sachin's
my_mark=[]          #dynamic initialization
for number in range(5):
    newmark=int(input("enter the marks:"))
    my_mark.append(newmark)

print("list elements are:")
for i in range(len(my_mark)):
    print(my_mark[i])