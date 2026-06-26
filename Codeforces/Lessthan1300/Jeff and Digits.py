from typing import List
from collections import Counter
def solve(cards: List[int])->str:
    max_number = ""
    frequency = Counter(cards)
    if frequency[0] == 0:
        return -1
    else:
        if frequency[5]//9 >= 1:
            max_number = "5"*(frequency[5]//9)*9 + "0"*frequency[0]
        else:
            max_number = "0"
    return max_number

if __name__ == '__main__':
    n = int(input())
    cards = list(map(int,input().split()))
    print(solve(cards))
