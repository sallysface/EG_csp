#EG 7th Old Enough

age = int(input("How old are you?"))

if age >= 4 and age < 15:
    print("You are old enough to go to school!")
elif age == 15:
    print("You are old enough to get a learners permit!")
elif age >= 16 and age < 18:
    print("You are old enough to drive!")
else:
    print("You are old enough to vote!")