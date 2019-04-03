def add(a, b): return a + b
def sub(a, b): return a - b
def mul(a, b): return a * b
def div(a, b): return a / b
def result(a): print ("result\n------------------\n",a,"\n------------------")
n = 0
print("first operand is 0")
def main(n):
    print("operator(+, -, *, /, exit)")
    operator = str(input())
    if(operator == "exit"):
        print("terminate")
        return 0
    if(operator !="+" and operator !="-" and operator !="*" and operator !="/" ):
        print ("wrong input")
        result(n)
        main(n)
    print("operand")
    operand = float(input())
    
    if(operator == "+"): n = add(n, operand)
    if(operator == "-"): n = sub(n, operand)
    if(operator == "*"): n = mul(n, operand)
    if(operator == "/"): n = div(n, operand)

    result(n)
    main(n)
main(n)
