print("Input Dan")
num=input()
print("********"+num+"dan********")
num=int(num)
for coe in range (1,10):
    stprd=str(coe*num)
    stnum=str(num)
    stcoe=str(coe)
    print(stnum+"*"+stcoe+"="+stprd)
print("************\n")

i=5
j=1
while(i>0):
    a=b=1
    blank=""
    star="*"
    while(a<i):
        blank=blank+" "
        a+=1
    while(b<j):
        star=star+"**"
        b+=1
    print(blank+star)
    i-=1
    j+=1
print("\n")

i=1
j=5
while(j>0):
    a=b=1
    blank=""
    star="*"
    while(a<i):
        blank=blank+" "
        a+=1
    while(b<j):
        star=star+"**"
        b+=1
    print(blank+star)
    i+=1
    j-=1
i=4
j=2
while(i>0):
    a=b=1
    blank=""
    star="*"
    while(a<i):
        blank=blank+" "
        a+=1
    while(b<j):
        star=star+"**"
        b+=1
    print(blank+star)
    i-=1
    j+=1
print("\n")

import time
timeA=time.time()
for i in range(0,200):
    print("*",end="")
timeB=time.time()
print(timeB-timeA)


timeA=time.time()
s=""
for i in range(0,200):
    s+='*'
print(s)
timeB=time.time()
print(timeB-timeA)
