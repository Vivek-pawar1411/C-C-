set={""}
print(len(set))
set.add(20)
print(set)
set.add(0)
print(set)



Days1 = {"Monday","Tuesday", "Wednesday", "Thursday"}    
Days2 = {"Monday","Tuesday","Sunday", "Friday"}    
print(Days1.intersection(Days2))

Days1 = {"jan","feb","mar","apr", "may"}    
Days2 = {"apr","may","jun"}    
print(Days1|Days2)

Days1 = {1,2,3,4,5,6,7, }    
Days2 = {1,2,3,4,5,6,7,8,9}    
Days3 = {1,2,3,4,5,6,7,8,9}       
print (Days1>Days2)         
print (Days1<Days2)     
print (Days2 == Days3) 

#my_set = {1,2,3,4,5,6,12,24}  
#n = int(input("Enter the number you want to add"))  
#my_set.add(n)  
#print("After Adding:",my_set) 