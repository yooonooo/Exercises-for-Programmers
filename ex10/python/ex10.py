item1 = int(input("Price of item 1: "))
quantity1 = int(input("Quantity of item 1: "))
item2 = int(input("Price of item 2: "))
quantity2 = int(input("Quantity of item 2: "))
item3 = int(input("Price of item 3: "))
quantity3 = int(input("Quantity of item 3: "))

subtotal = item1 * quantity1 + item2 * quantity2 + item3 * quantity3
print(f"Subtotal: ${subtotal}")

tax = subtotal * 0.055
print(f"Tax : ${tax}")

total = subtotal + tax
print(f"Total : ${total}")