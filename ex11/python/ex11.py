import math
euro = int(input("How many Euros are you exchanging?"))
euro_rate = float(input("What is the exchange rate?"))
dollar_rate = 100

dollars = math.ceil(euro * euro_rate / dollar_rate * 100)/100
print(f"{euro} Euros at an exchange rate of {euro_rate} is\n{dollars}")