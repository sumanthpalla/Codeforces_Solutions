def solve(n: int, games: str) -> str:
    won_by = ""
    a_count = 0
    d_count = 0
    for char in games:
        if char == 'A':
            a_count += 1
        else:
            d_count += 1
    if a_count > d_count:
        result = "Anton"
    elif a_count < d_count:
        result = "Danik"
    else:
        result = "Friendship"
    return result


if __name__ == '__main__':
    n = int(input())
    games = input()
    print(solve(n,games))