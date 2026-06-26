from typing import List
def solve(heights: List[int]) -> int:
    n = len(heights)
    max_seconds = 0
    if len(heights)==1:
        return max_seconds
    min_position = 0
    max_position = 0
    # determine the min and max position
    # if max and min needs to cross, then answer = (max - min + 1)
    # get the minimum index of the maximum value if there are duplicate values (left most occurence of maximum value)
    # get the maximum index of the minimum value if there are duplicate values (right most occurence of minimum value)

    for index in range(n):
        # find the left most occurence of maximum height
        if heights[index] > heights[max_position]:
            max_position = index
        if heights[index] <= heights[min_position]:
            min_position = index

    if max_position > min_position:
        max_seconds = (max_position + (n-1 - min_position) - 1)
    else:
        max_seconds = max_position + (n-1-min_position)
    return max_seconds

if __name__ == '__main__':
    n = int(input())
    heights = list(map(int,input().split()))
    print(solve(heights))