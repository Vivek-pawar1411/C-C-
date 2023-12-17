#count digit in number
a=int(input("Enter the number"))
b=0
while(a!=0):
    a=a//10
    b+=1
print(b)