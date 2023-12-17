def palin():
    
     b = 0 
     rem=0
     a= int(input("Enter the number"))
     temp = a
     while (a!= 0):
        rem=a%10
        b=(b*10)+rem
        a=a//10
     print(b)

         
palin()
    
    
    
    