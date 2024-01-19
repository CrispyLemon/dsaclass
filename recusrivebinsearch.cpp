#include <bits/stdc++.h>
int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Element not found
    }
    
    int mid = low + (high - low) / 2;
    
    if (arr[mid] == target) {
        return mid; // Element found at mid index
    } else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target); // Search in the left half
    } else {
        return binarySearch(arr, mid + 1, high, target); // Search in the right half
    }
}


