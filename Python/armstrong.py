#armstrong number
a=int(input("Enter the number"))
c=0
b=0
d=0
temp=a
while(a!=0):
    d=a%10
    b=d*d*d
    c=c+b
    a=a//10
if(temp==c):
    print("it is arm",c)
else:
    print("it is not",a)
