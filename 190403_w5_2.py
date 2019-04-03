def fibo(n):
    fi = [0] * (n+2)
    fi[0] = 0
    fi[1] = 1
    for a in range(0, n-1):
        fi[a+2] = fi[a] + fi[a+1]

    return fi[n]
print("fibonazzi : ")
print(fibo(int(input())))

