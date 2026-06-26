from typing import List
from collections import deque
def solve(points: List[List[int]]) -> int:
    n = len(points)
    number_of_spectral_points = 0

    sorted_x = sorted(points, key = lambda x: x[0])
    sorted_y = sorted(points, key = lambda x: x[1])

    is_right = lambda x1,y1,x2,y2 : x1 > x2 and y1 == y2
    is_left = lambda x1,y1,x2,y2 : x1 < x2 and y1 == y2
    is_upper = lambda x1,y1,x2,y2 : x1 == x2 and y1 > y2
    is_lower = lambda x1,y1,x2,y2 : x1 == x2 and y1 < y2

    for index in range(1,n-1):
        # for right neighbor look at right
        if is_upper(sorted_x[index][0],sorted_x[index][1],sorted_x[index+1][0], sorted_x[index+1][1]) and is_lower(sorted_x[index][0],sorted_x[index][1],sorted_x[index-1][0], sorted_x[index-1][1]):
            if is_right(sorted_y[index][0],sorted_y[index][1],sorted_y[index+1][0], sorted_y[index+1][1]) and is_left(sorted_y[index][0],sorted_y[index][1],sorted_y[index-1][0], sorted_y[index-1][1]):
                number_of_spectral_points += 1
            

    return number_of_spectral_points

if __name__ == '__main__':
    n = int(input())
    points = [[0]*2]*n
    for index in range(n):
        points[index] =  list(map(int,input().split()))
    # print(sorted(points,key = lambda x: x[1]))
    print(solve(points))