from typing import List
def solve(colors: List[List[int]]) -> int:
    diff_shoes = len(colors)-len(set(colors))
    return diff_shoes

if __name__ == '__main__':
    colors = list(map(int,input().split()))
    print(solve(colors))