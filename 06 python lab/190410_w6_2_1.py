str = open("article.txt","r")



st = str. read()
st = st.replace(".", " ")
st = st.replace(",", " ")
st = st.replace('"', " ")
st = st.replace("'", " ")
st = st.replace('?', " ")
st = st.replace('!', " ")
st = st.replace(':', " ")
st = st.replace('/', " ")
st = st.replace('-', " ")
st = st.replace('[', " ")
st = st.replace(']', " ")
st = st.lower()
words = st.split()
str.close()

dic = {}
keyword = []
for a in words:
    if a not in keyword:
        keyword.append(a)

for a in keyword:
    dic[a] = 0

sum = 0
for b in words:
    for a in keyword:
        if a == b:
            dic[a] += 1
            sum += 1
            
for a in keyword:
    print(a, " : " ,dic[a])
print("\nTOTAL : " ,len(words))
