from typing import List
def solve(name_1: str, name_2:str, changed_name: str) -> str:
    frequency = [0]*26
    for char in name_1:
        frequency[ord(char) - ord('A')] += 1
    for char in name_2:
        frequency[ord(char) - ord('A')] += 1
    
    for char in changed_name:
        frequency[ord(char) - ord('A')] -= 1
    
    for index in range(26):
        if frequency[index]:
            return "NO"
    return "YES"

if __name__ == '__main__':
    name_1 = input()
    name_2 = input()
    changed_name = input()
    print(solve(name_1,name_2,changed_name))