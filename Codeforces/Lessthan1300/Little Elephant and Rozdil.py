from typing import List
from collections import deque
def solve(travel_times: List[int]) -> str:
    elephant_travels = ""
    sorted_travel_times = sorted(travel_times)
    if len(travel_times) > 1  and sorted_travel_times[0] == sorted_travel_times[1]:
        elephant_travels = "Still Rozdil"
    else:
        elephant_travels = str(travel_times.index(sorted_travel_times[0])+1)
    return elephant_travels
if __name__ == '__main__':
    n = int(input())
    travel_times = list(map(int,input().split()))
    print(solve(travel_times))