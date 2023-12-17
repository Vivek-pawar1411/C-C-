#multiple inheirtance
class A:
    def sum(self,a,b):
        return a+b
class B:
    def mul(self,a,b):
        return a*b
class C(A,B):
    def sub(self,a,b):
        return a-b 
     
c1=C()
print(c1.sum(10,20))
print(c1.mul(10,20))
print(c1.sub(10,20))

        