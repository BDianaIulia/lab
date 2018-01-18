print("We have a 2-nd degree equation aX^2 + bX + c =0.")
a = input("Enter a: ")
b = input("Enter b: ")
c = input("Enter c: ")
delta = b*b - 4*a*c
import math
rootOfDelta = math.sqrt(delta)
x1 = ( -b + rootOfDelta ) / 2*a
x2 = ( -b - rootOfDelta ) / 2*a
print("First solution is : " , x1 )
print("Second solution is : " , x2 )
