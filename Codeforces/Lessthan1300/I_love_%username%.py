from typing import List
def solve(scores: List[List[int]]) -> int:
    n = len(scores)
    amazing_performances_number = 0
    max_score = scores[0]
    min_score = scores[0]
    for index in range(1,n):
        if scores[index] > max_score:
            max_score = scores[index]
            amazing_performances_number += 1
        if scores[index] < min_score:
            min_score = scores[index]
            amazing_performances_number += 1
    return amazing_performances_number

if __name__ == '__main__':
    n = int(input())
    scores = list(map(int,input().split()))
    print(solve(scores))