amount = int(input("What is the order amount?"))
state = input("What is the state?")

if state == "WI":
    print("The subtotal is $%.2f" % amount)
    print("The tax is $%.2f" % (amount * 0.055))
print("The total is $%.2f" % (amount * 1.055))