#EG 7th Conditionals

#What puts something inside of the “if” statement?
 # tab
homework_done = input("is your homework done?").strip().capitalize()

if homework_done == "No":
    print ("then go do ya homework")
else:
    print ("No, go sweep the chimminies")   

grade = input('What is your grade?')
if grade >= 90:
    print(f'You have{grade}%! thats an A!')
elif grade >= 80:
    print(f'You have{grade}%! thats an !')
else:
    print(f"You have{grade}%! thats a C or lower :(")
#What do if statements do?
 #they check if something it true or false
#What are boolean statements? 
 #Always true or false
#What do else statements do?
 #if its not true, thats what it says
#What kind of statement do you use if you have more than 2 needed outcomes?
#What do each of the different symbols mean in conditionals?
#< less than
#> greater than
#<= less than or equal too
#>= greater that or equal to
#== Question "Are they Equal?"
#! not equal to
#What are the 3 logical operators?
 # and, or, not
name = input("what is your name?")

if name == "Ms. LaRose":
    print('You are the teacher!')
elif name == "Tia" or name == 'Ashley':
    print('You are a TA!')
else:
    print(f"Hello {name}, you are a student")
#What are logical operators for?
 #to clarify
#What does a nested conditional statement do?
 #only runs when the statment it's in is true