#list for python
l=[1,2,3,4,5]
l2=[1,2,"abcd",4,7,8]
print(l)
print(type(l))
print(l[2])
print(l[0:4])
print(l[-1])
print(l[-4:-1])
l3=l+l2
print(l3)
l3.append(14)
print(l3)
l3.remove(2)
print(l3)
del l3
print(l)