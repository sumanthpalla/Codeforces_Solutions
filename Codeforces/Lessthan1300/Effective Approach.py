from typing import List
def solve(array: List[int], queries: List[int]) -> str:
    cache_positions = {}
    n = len(array)
    m = len(queries)
    for index in range(n):
        cache_positions[array[index]] = index+1
    vasya_counts = 0
    petya_counts = 0

    for query in queries:
        vasya_counts += cache_positions[query]
        petya_counts += (n - cache_positions[query] + 1)

    return str(vasya_counts) + " " + str(petya_counts)

if __name__ == '__main__':
    n = int(input())
    array = list(map(int,input().split()))
    m = int(input())
    queries = list(map(int,input().split()))
    print(solve(array,queries))