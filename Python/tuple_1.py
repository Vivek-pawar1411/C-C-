#add element in tuple
t=(1,2,3,4,5)
y=list(t)
y[0]=8
t=tuple(y)
print(t)