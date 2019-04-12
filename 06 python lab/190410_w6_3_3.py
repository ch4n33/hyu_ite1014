import imageio


img = imageio.imread("HDR.jpg")

M = img.shape[0]
N = img.shape[1]


hist = []

for a in range(0,256):
    hist.append(0) #   히스토그램 리스트를 만드는 중(bin, count, percentage)

for a in range(0,M):
    for b in range(0,N):
        hist[img[a][b]] += 1

hap = 0
for a in range(0,256):
    hap +=hist[a]
    hist[a] = hap

for a in range(0,256):
    hist[a] = int(256*hist[a]/(M*N))


newImg = img

for a in range(0,M):
    for b in range(0,N):
        newImg[a][b] = hist[img[a][b]]

imageio.imwrite("123.jpg", newImg)
