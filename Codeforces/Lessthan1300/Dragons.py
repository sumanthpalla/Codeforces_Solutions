from typing import List, Dict

def solve(s: int, dragons_strength: List[tuple[int,int]]) :
    n = len(dragons_strength)
    dragons_strength = sorted(dragons_strength,key = lambda x: x[0])
    can_defeat = "YES"
    for index in range(len(dragons_strength)):
        if dragons_strength[index][0] < s:
            s += dragons_strength[index][1]
        else:
            can_defeat = "NO"
            break
    return can_defeat

if __name__ == '__main__':
    s,n = tuple(map(int,input().split()))
    dragons_strength = []
    for index in range(n):
        ds,si = tuple(map(int,input().split()))
        dragons_strength.append((ds,si))
    print(solve(s,dragons_strength))