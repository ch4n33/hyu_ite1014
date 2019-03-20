import time
import random
def ran():
    return random.randint (0,9)

#피라미드 3 문제
n = input()
n = int(n)
a=1
while(n>a):
    pyramid = "*"
    blank = a
    internalblank = 2 * blank - 3
    if(a>1):
        inter = 0
        while(internalblank > inter):
            pyramid = " " + pyramid
            inter += 1
        pyramid = "*" + pyramid
    blank = a
    while(n>blank):
        pyramid = " " + pyramid
        blank += 1
    a += 1
    print(pyramid)
floor = "*"
floorn = 2 * n - 1
n = 1
while (floorn > n):
    floor = floor + "*"
    n += 1
print(floor)


#구구단 출력 2-1 문제
print("*******START*******")
n=3
while (n > 0):
    a = ran()
    b = ran()
    c= a*b
    print(a , " * " , b , " = ?")
    inp = input()
    inp = int(inp)
    if(inp == c):
        print ("Correct!")
    if(inp != c):
        print ("Wrong Anwer, ",a , " * " , b , " = ", c)
    n -= 1


print("*******START*******")
n=3
while(n>0):
    a = ran()
    b = ran()
    c = ran()
    d = ran()
    result = a * b + c - d
    print(a, " * ", b, " + ", c, " - ",d, " = ?")
    tim = 1
    while (tim <4):
        print(tim, ",", end = " ")
        time.sleep(1)
        tim += 1
    inpu=input(": ")
    inpu = int(inpu)
    if(inpu == result):
        print ("Correct Answer")
    if(inpu != result):
        print ("Wrong Answer, ", a, " * ", b, " + ", c, " - ",d, " = ", result)
    n -= 1
