def printnum(a):
    target = ['3','6','9']
    a = str(a)
    clap = ''
    for n in a:
        if n in target:
            clap += 'clap '
    if (clap == ''):
        print(a)
    else:
        print(clap)
def main():
    print("Please input the last number")
    a = int(input())
    print("------START------")
    for n in range(1, a+1):
        printnum(n)

main()