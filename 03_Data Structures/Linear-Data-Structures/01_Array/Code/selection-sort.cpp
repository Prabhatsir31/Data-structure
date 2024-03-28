void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // swap arr[minIndex] and arr[i]
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

/*Time Complexity:
The time complexity of selection sort is O(n^2) in the worst and average case, and O(n^2) in the best case.

Space Complexity:
The space complexity of selection sort is O(1), as it only uses a single temporary variable to swap elements, and does not use any additional data structures.

Selection sort is not suitable for large datasets because of its O(n^2) time complexity, but it is useful for small datasets and for educational purposes.*/
