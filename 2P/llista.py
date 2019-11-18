l=[1,2,3,4,5,6]
aux=l[:]
try:
    aux.remove(44)
except:
    print("no existeix")

print(aux)
print(l)
print (l[0:3])
print (l.index(3))

while True:
    try:
        x = int(input("Please enter a number: "))
        break
    except ValueError:
        print("Oops!  That was no valid number.  Try again...")
print("x=",x)