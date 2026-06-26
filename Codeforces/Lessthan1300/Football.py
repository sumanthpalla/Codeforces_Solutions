from typing import List

from collections import Counter
def solve(goals_scored: List[str])->str:
    """
    returns which team had scored major goals
    """
    frequency = Counter(goals_scored) #
    team_scored_more_goals = max(frequency,key=frequency.get) # O(n) worst case
    return team_scored_more_goals


if __name__ == '__main__':
    n = int(input())
    goals_scored = [""]*n
    for index in range(n):
        team = input()
        goals_scored[index] = team
    print(solve(goals_scored))
