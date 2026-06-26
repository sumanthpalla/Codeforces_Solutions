from typing import List
from collections import Counter

def solve(k: int, given_str: str) -> str:
    is_kstring = "-1"
    frequency = Counter(given_str)
    if len(frequency) == k:
        k_string = ""
        for character in frequency.keys():
            if frequency[character] == k:
                k_string += character
            else:
                return "-1"
        is_kstring = k_string*k
    
    return is_kstring




if __name__ == '__main__':
    k = int(input())
    given_str = input()
    print(solve(k,given_str))