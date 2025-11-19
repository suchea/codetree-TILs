a, b, c = map(int, input().split())
if a > b:
    if b > c:
        print(b) # a > b > c
    elif c > a:
        print(a) # c > a > b
    else:
        print(c) # a > c > b
elif b > a:
    if c > b:
        print(b) # c > b > a
    elif a > c:
        print(a) # b > a > c
    else:
        print(c) # b > c > a
