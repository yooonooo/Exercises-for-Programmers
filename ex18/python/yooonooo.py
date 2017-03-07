print("Press C to convert from Fahrenheit to Celsius")
print("Press F to convert from Celsius to Fahrenheit")

choice = input("Your choice").upper()

choice_dict = dict(F=dict(name="Fahrenheit", convert_name="Celsius", convert_func=lambda F: (F - 32) * 5 / 9),
                   C=dict(name="Celsius", convert_name="Fahrenheit", convert_func=lambda C: (C * 9 / 5) + 32))

choice_values = choice_dict[choice]

value = input(f"Please enter the tenoeratyre in {choice_values['convert_name']}:")
print(f"The temperature in {choice_values['name']} is {choice_values['convert_func'](int(value))}.")