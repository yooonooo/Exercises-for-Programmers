people_count = int(input("How many people?"))
pizza_count = int(input("How mnay pizzas do you have?"))
piece_count = int(input("How many pieces area in a pizza?"))

print(f"{people_count} people with {pizza_count} pizzas")
print(f"Each persion gets {piece_count} pieces of pizza")
print(f"There area {piece_count * pizza_count % people_count} leftover pieces.")