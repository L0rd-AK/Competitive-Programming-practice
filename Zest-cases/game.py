from collections import Counter

def largest_cluster_size(test_cases):
    results = []
    for test_case in test_cases:
        N, A = test_case
        bucket_count = Counter(A)  # Count frequency of frogs in each bucket
        results.append(max(bucket_count.values()))  # Find the maximum frequency
    return results
def main():
    T = int(input())  # Read number of test cases
    test_cases = []

    for _ in range(T):
        N = int(input())  # Read the number of frogs
        A = list(map(int, input().split()))  # Read the list of positions
        test_cases.append((N, A))

    results = largest_cluster_size(test_cases)

    for result in results:
        print(result)
if __name__ == "__main__":
    main()