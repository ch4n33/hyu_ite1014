str = open("article.txt","r")

dicbyalpha = []
dicbynum= []
alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
for a in alphabets:
    dicbyalpha.append([a,0])

st = str. read()
words = st.split()
str.close()

dummy = 0
for letter in words:
    for a in letter:
        askii = ord(a)
        
        if a not in alphabets:
            dummy += 1
        else:
            if (askii < 123 and askii > 96): #small character
                b = askii - 97
            if (askii < 91 and askii > 64): #big character
                b = askii - 39
                
            dicbyalpha[b][1] += 1
print(dicbyalpha)

def quick(x):
    if(len(x)<2):
        return x
    pivot = x[len(x)//2][1]
    left, equal, right = [],[],[]
    for a in x:
        if a[1] < pivot:
            left.append(a)
        elif a[1] > pivot:
            right.append(a)
        else:
            equal.append(a)
    equal.append(pivot)
    return quick(left) + equal + quick(right)

dicbynum = quick(dicbyalpha)
print(dicbynum)
