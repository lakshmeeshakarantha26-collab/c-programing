# you need to process a single student data name,rollno,mobilenumber,email ,5 subject marks,and get yhe subject total
#implemented n using nested list 

# def student_data():
#     list=[[]]
#     total=
#     name=input("enter the name: ")
#     rollno=int(input("enter the roll number"))
#     subject1=int(input("enter the subject 1 : "))
#     subject2=int(input("enter the subject 2 : "))
#     subject3=int(input("enter the subject 3 : "))
#     subject4=int(input("enter the subject 4 : "))
#     subject5=int(input("enter the subject 5 : "))
#     email=input("Enter the email: ")
#     phone=int(input("Enter the phone: "))
#     list.append(name)
#     list.append(rollno)
#     list.append(email)
#     list.append(phone)
#     list.append([subject1])
#     list.append([subject2])
#     list.append([subject3])
#     list.append([subject4])
#     list.append([subject5])
    
# def calculate_total(subject1,subject2,subject3,subject4,subject5):
#     total=subject1+subject2+subject3+subject4+subject5

# def display_student_data(name,rollno,subject1,subject2,subject3,subject4,subject5,email,phone,total):
#     print("Name\t:",name)
#     print("Roll No\t:",rollno)
#     print("Subject 1\t:",subject1)
#     print("Subject 2\t:",subject2)
#     print("Subject 3\t:",subject3)
#     print("Subject 4\t:",subject4)
#     print("Subject 5\t:",subject5)
#     print("Email\t:",email)
#     print("Phone\t:",phone)
#     print("total\t:",total)

# student_data()
# calculate_total()
# display_student_data()



# Initialize student data using a nested list
# Structure: [Name, Roll No, Mobile, Email, [Subject Marks]]
# Main list containing 3 nested student lists
# Each student: [Name, Roll No, Mobile, Email, [5 Subject Marks]]
students_database = [
    ["Alice Smith", 101, "9876543210", "alice@email.com", [85, 90, 78, 92, 88]],
    ["Bob Jones", 102, "9876543211", "bob@email.com", [70, 65, 80, 75, 72]],
    ["Charlie Brown", 103, "9876543212", "charlie@email.com", [95, 98, 92, 96, 94]]
]

print("--- 3 Students table ---\n")


for student in students_database:
    
    name = student[0]
    roll_no = student[1]
    mobile = student[2]
    email = student[3]
    marks = student[4]  

    
    total_marks = sum(marks)
    
 
    print("Name: ",        name)
    print("Roll No: ",     roll_no)
    print("Mobile: ",      mobile)
    print("Email: ",       email)
    print("Subject Marks:",marks)
    print("Total Marks: ",total_marks)




# print(f"Name:"          ,student_name)
# print(f"Roll No:     ",  roll_no)
# print(f"Mobile Number: ",mobile)
# print(f"Email ID:   ",   email)

# print(f"Subject Marks:",marks_list)
# print(f"Total Marks: " , total_marks/500)

