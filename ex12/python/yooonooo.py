principal = int(input("Enter the principal"))
interest = float(input("Enter the rate of interest"))
years = int(input("Enter the number of years"))

interest_rate = interest / 100
total = int(round(principal * (1 + interest_rate * years) + 0.005, 2))

print(f"After {years} years at {interest}%, the investment will be worth ${total}")