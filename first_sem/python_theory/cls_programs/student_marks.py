rollnumber=0
name=''
marks1=0
marks2=0
marks3=0
total=0.0
per=0.0
def read_data():
    rollnumber=int(input("enter the roll number:"))
    name=input("enter the name:")
    marks1=int(input("enter the first subject marks1:"))
    marks2=int(input("enter the first subject marks2:"))
    marks3=int(input("enter the first subject marks3:"))
    return rollnumber,name,marks1,marks2,marks3

def gettotal(marks1,marks2,marks3):
    total=marks1+marks2+marks3
    return total
   
def getaverage(total):
    average=total/3
    return average
   
def percentage(total):
    per=(total/300*100)
    return per

def findgrade(per):
    if(per>85):
        print("grade:distinction")
    elif(per>70 and per<85):
        print("grade:firstcls")
    elif(per>50 and per<70):
        print("grade:secondcls")
    else:
       print("grade:fail")

def displayresult():
   print("total:",total)
   print("average:",average)
   print("percentage:",per)

name,rollno,m1,m2,m3=read_data()
total=gettotal(m1,m2,m3)
average=getaverage(total)
per=percentage(total)
displayresult()
findgrade(per)