import math

length = int(input("length?"))
width = int(input("width?"))

PAINT_PER_METER = 9
square = length * width
paint_count = math.ceil(square / PAINT_PER_METER)

print(f"You will need to purchase {paint_count} liters of")
print(f"print to cover {square} square meters.")