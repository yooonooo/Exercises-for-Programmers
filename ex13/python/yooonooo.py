principal = int(input("Enter the principal"))
interest = float(input("Enter the rate of interest"))
years = int(input("Enter the number of years"))
interest_count = int(input("What is the number of times the interest is compounded per year"))

interest_rate = interest / 100
total = round(principal * pow((1 + interest_rate/interest_count), (years * interest_count)) + 0.005, 2)

print(f"After {years} years at {interest}%, the investment will be worth ${total}")