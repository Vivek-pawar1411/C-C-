class ABC:
    def __init__(self,a=0,b=0) :
        self.a=a
        self.b=b
    def __str__(self):
        return "({0},{1})".format(self.a,self.b)
    def __add__(self,other):
        a=self.a+other.a
        b=self.b+other.b
        return ABC(a,b)
p1=ABC(2,6)
p2=ABC(2,5)
print(p1+p2)


        