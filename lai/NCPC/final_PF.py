import sys

sys.setrecursionlimit(1000000000)

dp = {0: 0, 1: 1}


def fabb(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        if n in dp:
            return dp[n]
        fabb1 = fabb(n - 1) % 1000000000
        dp[n - 1] = fabb1
        fabb2 = fabb(n - 2) % 1000000000
        dp[n - 2] = fabb2
        cal = (fabb1 + fabb2) % 1000000000
        dp[n] = cal
        return cal


def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        print(fabb(7 ** (7 ** (7**n))))


main()
