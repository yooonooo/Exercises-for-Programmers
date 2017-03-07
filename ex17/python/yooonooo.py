A = int(input("A"))
W = int(input("W"))
r = 0.73 if input("r") == "M" else 0.6
H = int(input("H"))

BAC = (A * 5.14/W * r) - .015 * H
print(f"Your BAC is {BAC}")
if BAC >= 0.08:
    print("It is not legal for you to drive")
else:
    print("It is legal for you to drive")
