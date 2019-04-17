import random

def match(a,b):
    lista = []
    listb = []

    strike = 0
    lista.append(a//100)
    lista.append((a//10)%10)
    lista.append(a%10)

    for n in b:
        listb.append(n)

    for n in range(0,3):
        if(lista[n] == int(listb[n])):
            strike += 1
    return strike
def finish():
    inp = input()
    if (inp == "yes"):
        main()
    if (inp != "no"):
        finish()

def game(a):
    print("====================\n\nGuess Numbers(000 ~999):")
    b = input()
    num = match(a,b)
    print(num , "strike, " , 3-num, " ball.")
    if(num == 3):
        print('Yes! The secret number is "', a,'"! You have Won!\nDo you want to play again?(yes or no)')
        finish()

    else:
        game(a)

def main():
    print("S T A R T")
    a = random.randint(12, 988)
    print ("**Answer : ",a)
    game(a)

main()



