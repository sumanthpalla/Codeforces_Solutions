from typing import List
def solve(n:int, fingers: List[int]) -> int:
    total_fingers_sum = sum(fingers)
    count_of_numbers_to_be_shown = 0
    for i in range(1,6):
        if  (i + total_fingers_sum)%(n+1) != 1:
            count_of_numbers_to_be_shown += 1
    
    return count_of_numbers_to_be_shown

if __name__ == '__main__':
    n = int(input())
    fingers = list(map(int,input().split()))
    print(solve(n,fingers))