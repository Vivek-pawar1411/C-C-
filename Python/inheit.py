#single inheirtance
class vehicle:
   
    def ___init__(self,a,b,c,d):
        a.self=a
        b.self=b
        c.self=c
        c.self=c

    def insert (self):
        
        self.a=str(input("Enter the colour : "))
        self.b=str(input("Enter the type : "))
        self.c=str(input("Enter the name : "))
        self.d=str(input("Enter the price : "))

class car(vehicle): 
    def print(self):
        print("colour ",self.a)
        print("type ",self.b) 
        print("Name ",self.c) 
        print(" price ",self.d) 

 
print("Detail of vehicle  -> ")       
c1= car()
c1.insert()
c1.print()


