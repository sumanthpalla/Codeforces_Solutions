from typing import List

def solve(m:int ,tv_sets_prices: List[int])->int:
    """
    returns maximum profit earned by Bob
    """
    # sort the prices such that we choose the values with maximum profits
    tv_sets_prices.sort()
    max_profits = 0
    for index in range(m):
        if tv_sets_prices[index] < 0:
            max_profits += abs(tv_sets_prices[index])
    
    return max_profits



if __name__ == '__main__':
    n,m = tuple(map(int,input().split()))
    tv_sets_prices = list(map(int,input().split()))
    print(solve(m,tv_sets_prices))