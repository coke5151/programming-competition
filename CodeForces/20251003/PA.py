t = int(input())
while t > 0:
    n = input()
    st = set(map(int, input().split()))
    # print("len", len(st))
    # print(st)
    print(len(st) * 2 - 1)
    t -= 1
