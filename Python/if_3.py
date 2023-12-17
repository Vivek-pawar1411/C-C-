a=int(input("Enter the value 1"))
b=int(input("Enter the value 2"))
c=int(input("Enter the value 3"))
if((a>b)and(a>c)):
      print("a is greater")
elif((b>a)and(b>c)):
    print("b is greater")
elif((c>a)and(c>b)):
    print("c is greater")
else:
    print("all  are equal")