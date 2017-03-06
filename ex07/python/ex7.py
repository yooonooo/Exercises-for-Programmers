length = int(input("What is the length of the room in feet?"))
width = int(input("What is the width of the room in feet?"))

print(f"You entered dimensions of {length} feet by {width} feet")
print("The area is ")

square_feet = length * width
print(f"{square_feet} square feet")

METER_PER_FEET = 0.09290304
square_meter = round(square_feet * METER_PER_FEET, 3)
print(f"{square_meter} square meters")
