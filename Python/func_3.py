def arm():
    a=int(input("Enter the number"))
    c=0
    b=0
    d=0
    temp = a
    while(a!=0):
      d=a%10
      b=d*d*d
      c=c+b
      a=a//10
    if(temp==c):
         print("it is arm",c)
    else:
        print("it is not",a)
    
    
arm()

def strong(a):
    c=0
    b=0
    d=0
    temp = a
    while(a!=0):
      d=a%10
      b=d*d*d
      c=c+b
      a=a//10
    if(temp==c):
         print("it is arm",c)
    else:
        print("it is not",a)
    
    
a=int(input("Enter the number"))
strong(a)



def strong(a):
    c=0
    b=0
    d=0
    temp = a
    while(a!=0):
      d=a%10
      b=d*d*d
      c=c+b
      a=a//10
    return c
    
    
a=int(input("Enter the number"))
print(strong(a))