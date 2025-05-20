# e529. 00482 - Permutation Arrays
# https://zerojudge.tw/ShowProblem?problemid=e529

import sys


def main():
    t = int(sys.stdin.readline())
    while(t > 0):
        t -= 1
        _ = sys.stdin.readline() # 空行
        index = list(map(int, sys.stdin.readline().strip().split()))
        data = sys.stdin.readline().strip().split()

        final = data.copy()
        for i in range(len(index)):
            final[index[i] - 1] = data[i]

        [print(x) for x in final]

main()