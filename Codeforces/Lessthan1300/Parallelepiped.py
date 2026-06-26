from typing import List
from collections import deque
def solve(ab: int, bc: int, ca: int) -> int:
    a,b,c = 0,0,0
    b = ((ab*bc)//(ca))**0.5
    a = ab // b
    c = bc // b
    all_edges_length = int(4*(a+b+c))
    return all_edges_length

if __name__ == '__main__':
    ab,bc,ca = tuple(map(int,input().split()))
    print(solve(ab,bc,ca))