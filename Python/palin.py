# #palindrone number
# a=int(input("Enter the number"))
# b=0
# r=0
# temp=a
# while(a>0):
#     b=a%10
#     r=(r*10+b)
#     a=a//10
    
# print(r)
# if(temp==r):
#     print("it is palindrone")
# else:
#     print("not palindrone")
    
    
r=input("Enter")
temp=r[::-1]

if(temp==r):
    print("it is palindrone")
else:
    print("not palindrone")