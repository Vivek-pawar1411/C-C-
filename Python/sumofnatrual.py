# #sum of natural number
# a=int(input("Enter "))
# i=0
# sum=0
# while(i<a):
#     i+=1   #i=i+1
#     sum+=i #sum=i+sum
    
# print(sum)

a=int(input("Enter "))
sum=0
for i in range(1,a):
    sum+=i
if sum==a:
    print("y")
else:
    print("n")
    