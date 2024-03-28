void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/*Time Complexity:
The time complexity of bubble sort is O(n^2) in the worst and average case, and O(n) in the best case (when the array is already sorted). The worst and average case happens when the array is in reverse order.

Space Complexity:
The space complexity of bubble sort is O(1), as it only uses a single temporary variable to swap elements, and does not use any additional data structures.

Note that there is a variation of bubble sort called "cocktail sort" which has a best case of O(n) and an average case of O(n^2) which is less worse than O(n^2) but still not suitable for large datasets.*/
