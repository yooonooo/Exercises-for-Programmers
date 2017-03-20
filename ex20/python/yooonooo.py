amount = int(input("what is the order amout?"))
state = input("What state do you live in?").lower()


country = ""
state_tax_rate = 0.055
county_tax_rate = 0
if state == "wisconsin":
    county = input("What country do you live in?").lower()
    if county == "eau claire":
        county_tax_rate = 0.005
    elif county == "dunn":
        county_tax_rate = 0.004
elif state == "ili":
    state_tax_rate = 0.08

print_text = f"""
    "The state tax is ${round(amount * state_tax_rate)}"
    "The county tax is ${round(amount * county_tax_rate)}"
    "The total tax is ${round(amount * (state_tax_rate + county_tax_rate))}"
    "The total is ${round(amount * (1 + state_tax_rate + county_tax_rate))}"
"""

print(print_text)





