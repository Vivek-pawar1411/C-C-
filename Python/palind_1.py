#palindrone
n=input("Enter the data")
i=0
a=len(n)
if(len(n)%2==0):
    a=len(n)
for i in range(a):
    if n[i]!=n[-1-i]:
        print("not")
        break  
else:
        print("it is")