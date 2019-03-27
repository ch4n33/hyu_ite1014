import random

# 1-1
n = input()
a = 0
while (++a <= n):
    print (a)

#1-2
n = input()
a = 0
while (++a <= n):
    if (a%4 != 0):
        print (a)

#2-1
def comp(var1, var2):
    if (var1 > var2):
        return 1
    elif (var1 < var2):
        return -1
    else:
        return 0
#2-2
var1 = random.randint(0,100)
while (1):
    print ("Number=?")
    var2 = int(input())
    
    if (comp(var1,var2) == 1):
        print ("Larger than ", var2,".")
    elif (comp(var1,var2) == -1):
        print ("Smaller than ", var2, ".")
    else:
        print ("Yes, Right")
        break

#3
def printLine(n):
    a = 1
    while(a <= n):
        b = 1
        while(b <= a):
            print(b, end = ' ')
            b += 1
        print("")
        a += 1
    a -= 1
    while(a >= 1):
        b = 1
        while(b <= a):
            print(b, end = ' ')
            b += 1
        print("")
        a -= 1
        
n = int(input())
printLine(n)

#4
while(1):
    val = random.randint(0,2)
    user = input()
    if (user == "rock"): uval = 2
    elif (user == "paper"):uval = 0
    elif (user == "scissors"):uval = 1
    else: uval = 3
    if (uval == val): print ("You win!")
    else: print ("You Lose!")
    if(input("Play again?") != "yes"): break

#5
num = int(input())
n = num
p = 2*n-1
a = 0
line = ""
while(a < p):
    line = line +"*"
    a += 1
print(line)
while(n>1):
    a = 1
    line = ""
    while(a < n):
        line = line + "*"
        a += 1
    b = (num - n)*2 + 1
    while(b > 0):
        line = line + " "
        b -= 1
    a = 1
    while(a < n):
        line = line + "*"
        a += 1
    n -= 1
    print(line)
n += 2

while(n<=num):
    a = 1
    line = ""
    while(a < n):
        line = line + "*"
        a += 1
    b = (num - n)*2 + 1
    while(b > 0):
        line = line + " "
        b -= 1
    a = 1
    while(a < n):
        line = line + "*"
        a += 1
    n += 1
    print(line)

    

a = 0
line = ""
while(a < p):
    line = line +"*"
    a += 1
print (line)
