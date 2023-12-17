#multiple inheirtance
class A:
    def sum(self):
        print("hello")
class B:
    def mul(self):
        print("wolrd")
class C(A,B):
    def sub(self):
        print("hey")
     
c1=C()
print(c1.sum())
#print(c1.mul())
#print(c1.sub())