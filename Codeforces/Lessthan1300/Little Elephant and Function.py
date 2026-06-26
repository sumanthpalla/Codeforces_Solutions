from typing import List

def solve(n:int) -> str:
    permutation = ""
    for index in range(1,n):
        permutation +=  str(index) + " "
    
    permutation = str(n) + " " + permutation
    return permutation

if __name__ == '__main__':
    n = int(input())
    print(solve(n))