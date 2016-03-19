l = "0123456789ABCDEFGHIJKLMNOPQRSTUV"

while True:
    n = int(input())
    a = ''
    r = ''

    if n == 0:
        print(n)
        break

    while (n > 0):
        a = a + l[int(n % 32)]
        n = int(n / 32)

    tam = len(a)

    while (True):
        r += a[tam-1]
        tam = tam - 1
        if tam == 0:
            break
    print(r)
