void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

/*Time Complexity:
The time complexity of insertion sort is O(n^2) in the worst case, O(n) in best case (when the array is already sorted) and O(n^2) in average case.

Space Complexity:
The space complexity of insertion sort is O(1), as it only uses a single temporary variable to store the current element and does not use any additional data structures.

Insertion sort is useful for small datasets, or when the data is almost sorted. It is efficient when the data is already sorted and simple to implement.*/
