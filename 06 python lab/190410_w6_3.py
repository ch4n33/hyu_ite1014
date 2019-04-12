import imageio

def quick(x):
    bubblecount = 1
    while (bubblecount):
        bubblecount = 0
        k=0
        while(a<len(x)):
            if(x[k][1]>x[k+1][1]):
                l = x[k+1]
                x[k+1] = x[k]
                x[k] = l
                bubblecount += 1
    return x


img = imageio.imread("carry.jpg")
print(img.shape)

M = img.shape[0]
N = img.shape[1]

maximum = 0
minimum = 257

sumofvalue = 0
sumofperc = 0
distances = 0

hist = []

for a in range(0,256):
    hist.append([a,0,0]) #   히스토그램 리스트를 만드는 중(bin, count, percentage)




for a in range(0,M):
    for b in range(0,N):
        value = img[a][b]
        num = a * M + b
        if (maximum<value):
            maximum = value
        if (minimum>value):
            minimum = value#    max, min을 구하는 과정
        hist[img[a][b]][1] += 1
        sumofvalue += value

sorthist = quick(hist)

median = sorthist[len(sorthist)//2][0]
mean = sumofvalue/(M*N)

for a in range(0,M):
    for b in range(0,N):
        value = img[a][b]
        distances += (value-mean)*(value-mean)

variance = distances / (M*N)

print("Max : ", maximum, " Min :" ,minimum, " Median : ", median , " Mean : ", mean, " Variance : " , variance)
#  max, min ,median, mean, variance를 출력함.


for a in range(0,256):
    hist[a][2] = 100* hist[a][1]/(M*N)
    sumofperc += hist[a][2]

#   퍼센티지를 구하는 과정 

print("Sum of percentage : ", sumofperc)

print("binary      count     percentage(%)")
for a in range(0,256):
    print(hist[a][0],"      ",hist[a][1],"      ",hist[a][2])
