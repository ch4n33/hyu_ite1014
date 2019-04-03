import random
num_list = [1]*50
maxim = 0
minim = 1000
for a in range(0,50):
    num_list[a] = random.randint(0, 1000)
    if(maxim<num_list[a]):
        maxim = num_list[a]
    
    if(minim>num_list[a]):
        minim = num_list[a]
print("max value : ", maxim,"\nmin value : ",minim)


switchcount = 1
while(switchcount):
    switchcount = 0
    
    for a in range(0, 49):
        if(num_list[a]>num_list[a+1]):
            intercept = num_list[a]
            num_list[a] = num_list[a+1]
            num_list[a+1] = intercept
            switchcount += 1
print(num_list)
