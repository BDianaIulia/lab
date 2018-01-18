nr = input("Enter the last number: ")
contor = 1
vector = []

def nonPrimeNumber( x ) :
    nonPrimeNr = 0
    for i in range ( 2, x/2 + 1 ):
        if x % i == 0:
            return x
    return 0  
    
while contor <= nr:
    for k in range ( 1 , contor + 1 ):
        vector.append(k)
        
    for nrAppear in range ( 1 , contor ):
        vector.append(contor)

    contor = contor + 1
    while nonPrimeNumber( contor ) == 0:
        contor = contor + 1

print("The sequence looks like: " )
print vector
