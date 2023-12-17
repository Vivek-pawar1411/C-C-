# def prime(n):
#     for i in range(2,n):
#         if n%i==0:
#             return False
#         else:
#             return True
# n=int(input("Enter the number"))
# if prime(n)==True:
#     print(" prime number")
# else:
#     print("not prime")
    
    
# str1=input("Enter the str")
# num=len(str1)
# total=0
# for i in str1:
#     total=total+int(i)**3
# print(total)
d1={4:4,5:7,6:8}
d2={5:6,8:9}
d3={}
d3.update(d1)

d3.update(d2)
print(d3)