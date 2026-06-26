from typing import List
def solve(dubbed: str) -> str:
    original = dubbed.replace("WUB"," ")
    original = original.lstrip()
    original = original.rstrip()
    return original


if __name__ == '__main__':
    dubbed_string = input()
    print(solve(dubbed_string))