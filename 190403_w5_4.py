print("User input :", end = ' ')
n = int(input())
p = n - 1
coordinate = [[0,0]] * n * n
order = [1] * n * n
b = 1
while(p>0):
    num = 0
    while(num<p):
        coordinate[b][0] = coordinate[b-1][0] + 1
        order[coordinate[b][0]+coordinate[b][1]*n] = b+1
        b+=1
        num +=1
    num = 0
    while(num<p):
        coordinate[b][1] = coordinate[b-1][1] + 1
        order[coordinate[b][0]+coordinate[b][1]*n] = b+1
        b += 1
        num += 1
    num = 0
    while(num<p):
        coordinate[b][0] = coordinate[b-1][0] - 1
        order[coordinate[b][0]+coordinate[b][1]*n] =b+1
        b += 1
        num += 1
    if p<2: break
    num = 0
    while(num<p-1):
        coordinate[b][1] = coordinate[b-1][1] - 1
        order[coordinate[b][0]+coordinate[b][1]*n] = b+1
        b += 1
        num += 1
    coordinate[b][0] = coordinate[b][0] + 1
    order[coordinate[b][0]+coordinate[b][1]*n] = b+1
    b += 1
    p -= 2
a = 0
while(a<n):
    b = 0
    while(b<n):
        print(order[n*a + b], end = " ")
        b += 1
    print()
    a += 1
