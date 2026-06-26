from typing import List
from collections import deque
def solve(m:int, chocolates: List[int]) -> int:
    n = len(chocloates)
    chocloates_with_position = [[value,index+1] for index,value in enumerate(chocloates)]
    while len(chocloates_with_position) > 1:
        if chocloates_with_position[0][0] > m:
            chocloates_with_position.append([chocloates_with_position[0][0]-m,chocloates_with_position[0][1]])
        chocloates_with_position.pop(0)
    last_position_index = chocloates_with_position[0][1]
    return last_position_index

if __name__ == '__main__':
    n,m = tuple(map(int,input().split()))
    chocloates = list(map(int,input().split()))
    print(solve(m, chocloates))