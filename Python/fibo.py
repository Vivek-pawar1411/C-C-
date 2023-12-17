#fibonacchi series
a=0
b=1

n=int(input("Enter the number"))
print(a)
print(b)

for i in range(3,n):
    c=a+b 
    a=b
    b=c
    print(c)  