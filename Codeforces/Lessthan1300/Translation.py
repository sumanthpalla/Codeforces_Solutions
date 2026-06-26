from typing import List

def solve(original: str, translation: str)->str:
    """
    returns whether the original is equal to translation or not.
    """
    o = len(original)
    t = len(translation)
    if o!=t:
        return "NO"
    is_translated = "YES"
    for index in range(o):
        if original[index] != translation[t-1-index]:
            is_translated = "NO"
            break
    return is_translated

if __name__ == '__main__':
    original = input()
    translation = input()
    print(solve(original,translation))
