from datetime import date

age = int(input("What is your current age?"))
retire = int(input("At what age whould you like to retire?"))

print(f"You have {retire - age} years left until you can retire")
print(f"It's {date.today().year}, so you can retire in {date.today().year + (retire - age)}.")