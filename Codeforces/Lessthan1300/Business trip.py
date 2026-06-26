from typing import List
def solve(k:int, months_height: List[int]) -> int:
    min_months_required = 0
    if k == 0:
        return min_months_required

    months_height.sort(reverse=True)
    index = 0
    curr_height = 0
    while curr_height < k and index < 12:
        curr_height += months_height[index]
        index += 1
        min_months_required += 1
    if curr_height < k:
        min_months_required = -1
    return min_months_required

if __name__ == '__main__':
    k = int(input())
    months_height = list(map(int,input().split()))
    print(solve(k, months_height))