number = input( "Enter the number: ")
ok = 1
for i in range (2 , number/2 ):
    if number % i == 0:
        ok = 0
        print(i)
if ok == 1:
    print("The number is prime")
else:
    print("The number isn't prime")
    
