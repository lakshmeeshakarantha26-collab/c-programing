
age=int(input("enter your age:"))
day=(input("enter the day:"))
time=(input("enter the timing:"))
ticket_price= 250

if day == "sunday" or day == "saturday":
    
    day="weekend"
    print("day is ",day)
    
else:
    day=="weekday"
    print("day is ",day)

if day == "weekend":
     ticket_price=ticket_price + (ticket_price * 25/100)
else:
     day =="weekday"
     ticket_price=ticket_price


if time == "morning":
    time="morning_section"
    ticket_price=ticket_price

elif time == "afternoon":
    time="afternoon_section"
    ticket_price=ticket_price + (ticket_price * 10/100)

else:
    time="evening_section"
    ticket_price=ticket_price + (ticket_price * 30/100)
    

if(age <= 5):
    print("child")
    ticket_price=ticket_price -(ticket_price * 50/100)
    
elif(age >=5 and age<= 59):
    print("adult")
    ticket_price=ticket_price 

    
else:
    print("senior citizen")
    ticket_price=ticket_price - (ticket_price * 10/100)

print("ticekt_price:",ticket_price)

  

    
