#to demo stret bank operation by using list and tupels  
#bank_account_data():
name=input("enter your name:")
pan=input("enter your pan number:")
accountnumber=int(input("enter account number:"))
doc=input("enetr your date of birth:")

email=input("enter your emailid:")
address=input("enetr your adress place:")
contactnum=int(input("enter your contact num:"))
curentbalance=float(input("curent balace:"))

curentbalance += curentbalance  
bank_account_data=[email,address,contactnum,curentbalance,(name,pan,accountnumber,doc)]

print("bank details:",bank_account_data)