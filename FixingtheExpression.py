for _ in range(int(input())):
    s = input()
    a, b, c = int(s[0]), s[1], int(s[2])
    print(f"{a}<{c}" if a < c else f"{a}>{c}" if a > c else f"{a}={c}")
