def fact():
   fac=1
   n=int(input("Enter the no."))
   for i  in range(1,n+1):
       fac=fac*i
   print(fac)
   
fact()

def fact(n):
   fac=1
   for i  in range(1,n+1):
       fac=fac*i
   print("factorial",fac)
    
n=int(input("Enter the no."))
fact(n)

def fact(m,n):
   fac=1
   for i  in range(m,n+1):
       fac=fac*i
       return fac
m=int(input("Enter the no."))
n=int(input("Enter the no."))
print(fact(m,n))