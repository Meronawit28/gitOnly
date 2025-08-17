#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void generate_random_array(int arr[], long n) {
    for (long i = 0; i < n; i++) {
        if (rand() % 4 == 0)
            arr[i] = rand() % 100 * -1;
        else
            arr[i] = rand() % 100 + 1;
    }
}


long maxSubsequenceSum1(int arr[], long n) {
    long maxSum = 0;
    for (long i = 0; i < n; i++) {
        for (long j = i; j < n; j++) {
            long thisSum = 0;
            for (long k = i; k <= j; k++)
                thisSum += arr[k];
            maxSum = max(maxSum, thisSum);
        }
    }
    return maxSum;
}

long maxSubsequenceSum2(int arr[], long n) {
    long maxSum = 0;
    for (long i = 0; i < n; i++) {
        long thisSum = 0;
        for (long j = i; j < n; j++) {
            thisSum += arr[j];
            maxSum = max(maxSum, thisSum);
        }
    }
    return maxSum;
}


long maxSubsequenceSum3(int arr[], long n) {
    long thisSum = 0, maxSum = 0;
    for (long j = 0; j < n; j++) {
        thisSum += arr[j];
        maxSum = max(maxSum, thisSum);
        if (thisSum < 0)
            thisSum = 0;
    }
    return maxSum;
}


double measure_time(long (*algorithm)(int[], long), int arr[], long n) {
    clock_t start = clock();
    algorithm(arr, n);
    clock_t end = clock();
    return double(end - start) / CLOCKS_PER_SEC;
}

int main() {
    srand(time(0));

    long n_values[] = {5000};


    cout << "n\tAlgo1 (O(n^3))\tAlgo2 (O(n^2))\tAlgo3 (O(n))\n";

    for (long n : n_values) {
        int* arr = new int[n];
        generate_random_array(arr, n);

        double time1 = measure_time(maxSubsequenceSum1, arr, n);
        double time2 = measure_time(maxSubsequenceSum2, arr, n);
        double time3 = measure_time(maxSubsequenceSum3, arr, n);

        cout << n << "\t" << time1 << "s\t" << time2 << "s\t" << time3 << "s\n";

        delete[] arr;
    }

    return 0;
}
