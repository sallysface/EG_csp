#EG 7th calc 

income = int(input("What is your income?: \n$"))
rent = int(input("How much is your rent?: \n$"))
utilities = int(input("How much do your utilities cost?: \n$"))
groceries = int(input("How much do you spend on groceries?: \n$"))
trans = int(input("How much do you spend on transportation?: \n$"))
spending = income-(rent+utilities+groceries+trans+(income/10))
print ("Your rent costs", rent, "dollars. that's", round(rent/income, 2)*100, "% of your income.")
print ("Your utilities cost", utilities, "dollars. that's", round(utilities/income, 2)*100, "% of your income.")
print ("Your groceries cost", groceries, "dollars. that's", round(groceries/income, 2)*100, "% of your income.")
print ("Your transportation costs", trans, "dollars. that's", round(trans/income, 2)*100, "% of your income.")
print ("You should save 10% of your income. Thats",round (income/10, 2), "a month" )
print ("That means you have",round(spending, 2), "dollars of spending money a month" )