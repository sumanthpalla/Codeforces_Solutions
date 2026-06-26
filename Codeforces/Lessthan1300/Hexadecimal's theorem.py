from typing import List

def solve(n: int)->str:
    sum_of_three_fibonacci_numbers = ""

    # generate fibonacci numbers upto n:
    fibo = []
    fibo.extend([0,1,1])
    while fibo[-1] < n:
        fibo.append(fibo[-1] + fibo[-2])

    if n > 3:
        sum_of_three_fibonacci_numbers = str(fibo[-2]) + " " + str(fibo[-4]) + " " + str(fibo[-5])
    
    elif n == 2:
        sum_of_three_fibonacci_numbers = "0 1 1"
    
    elif n == 1:
        sum_of_three_fibonacci_numbers = "0 0 1"
    
    elif n == 3:
        sum_of_three_fibonacci_numbers = "1 1 1"
    
    else:
        sum_of_three_fibonacci_numbers = "0 0 0"

    return sum_of_three_fibonacci_numbers

if __name__ == '__main__':
    n = int(input())
    print(solve(n))

