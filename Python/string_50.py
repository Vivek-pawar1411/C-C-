# Sample=['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
# n=(input("Enter the string"))
# for n in Sample:   
#   Sample.remove(n)
# print(Sample)

data=["p",20,"R",10,"S",30]
times=0
alpha=""
add=0
for c in range(1,6,2):
  times=times+c
  alpha=alpha+data[c-1]+"$"
  add=add+data[c]
  print(times,add,alpha)