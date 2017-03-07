


def input_height():
    try:
        return int(input("height: "))
    except:
        input_height()


def input_weight():
    try:
        return int(input("weight: "))
    except:
        input_weight()


height= input_height()
weight= input_weight()

bmi = (weight/(height*height))*703

print(f"Your BMI is {bmi}")
if 18.5 <= bmi <= 25:
    print("You are within the ideal weight range.")
elif bmi < 18.5:
    print("You are underweight. You should see your doctor")
elif bmi > 25:
    print("You are overweight. You should see your doctor")