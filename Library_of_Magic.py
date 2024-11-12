import sys
import math

n = 0
num1 = 0
num2 = 0

def req(left, right, num):
    if left > n:
        return 0
    if right > n:
        right = n

    res = int(input("xor {} {}\n".format(left, right)))
    sys.stdout.flush

    if num > 1 and left <= num1 and num1 <= right:
        res = res ^ num1

    if num > 2 and left <= num2 and num2 <= right:
        res = res ^ num2

    return res

t = int(input())

while bool(t):
    t = t - 1

    n = int(input())

    start = 1 << int(math.log2(n))

    i = start

    while i > 0:
        res = req(num1 | i, num1 | (i * 2 - 1), 1)

        if bool(res):
            num1 = num1 | i

        i = i >> 1

    i = start

    while i > 0:
        res = req(num2 | i, num2 | (i * 2 - 1), 2)

        if bool(res):
            num2 = num2 | i

        i = i >> 1

    print("ans {} {} {}".format(num1, num2, req(1, n, 3)))
    sys.stdout.flush

    num1 = 0
    num2 = 0

        