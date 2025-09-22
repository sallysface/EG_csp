#VL 7th loops notes

foods = ["chocolate", "pasta", "appy cider"]

#for loop
#loops repeat the code inside for a specified amount of time
for food in foods:
    print(f'{food} is my favorite food')

for x in range (1, 20):
    print(x)
#3 key parts of a while loop, 1. iterator, how many times loop runs 2. stopping point 3. increase iterator
'''i = 0 
while True:
    print(i)
    i+=5'''
i = 1
while i >= 20:
    print(i)
    i+=1
#iteration is 1 loop of the same code
x=1
while x < 21:
    if x % 2 == 0:
          print(f'{x} is even')
    else:
       print(f'{x} is an odd number')
    print(x)
    x+=1
d = 1
while True:
    if d == end:
        print("Goose")
        break
    else:
        print('duck')
        d+=1