from typing import List
def solve(cupboards: List[List[int]]) -> int:
    n = len(cupboards)
    max_seconds = 0
    # traverse through column wise and determine the count of 1s
    for col in range(2):
        count_1 = 0
        for row in range(n):
            # determine the count of 1s
            count_1 += cupboards[row][col]
        # count of zeros <= ones
        if n - count_1 <= count_1:
            max_seconds += (n-count_1)
        else:
            max_seconds += count_1
    return max_seconds

if __name__ == '__main__':
    n = int(input())
    cupboards = [[0]*2]*n
    for index in range(n):
        cupboards[index] = list(map(int,input().split()))
    print(solve(cupboards))