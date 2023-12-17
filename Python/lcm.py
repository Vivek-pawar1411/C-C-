import math

def num():   
    a = int(input("Enter the sum"))
    n = int(input("Enter the num"))
    sum=(math.lcm(n,a))
    hum=(math.gcd(n,a))
    print("the lcm is ",sum)
    print("the gcd is ",hum)


