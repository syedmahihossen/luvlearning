#include <bits/stdc++.h>
using namespace std;

const int N = 1e6; // Maximum size of the array
int arr[N];        // Global array to store the input

// Function to merge two sorted subarrays
void merge(int l, int r, int mid)
{
    int l_size = mid - l + 1; // Size of the left subarray
    int L[l_size];            // Temporary array for the left subarray
    int r_size = r - mid;     // Size of the right subarray
    int R[r_size];            // Temporary array for the right subarray

    // Copy elements of the left subarray from arr[l...mid] to L
    for (int i = 0; i < l_size; i++)
    {
        L[i] = arr[i + l];
    }

    // Copy elements of the right subarray from arr[mid+1...r] to R
    for (int i = 0; i < r_size; i++)
    {
        R[i] = arr[i + mid + 1];
    }

    L[l_size] == R[r_size] == INT_MAX;
    int l_index = 0;
    int r_index = 0;

    for (int i = l; i <= r; ++i)
    {
        if (L[l_index] <= R[r_index])
        {
            arr[i] = L[l_index];
            l_index++;
        }
        else
        {
            arr[i] = R[r_index];
            r_index++;
        }
    }
}

// Function to recursively divide the array into halves and sort them
void mergeSort(int l, int r)
{
    if (l >= r)
    {
        return; // Base case: If there is one or no element, it's already sorted
    }

    int mid = l + (r - l) / 2; // Calculate the middle index to divide the array
    mergeSort(l, mid);         // Recursively sort the left half
    mergeSort(mid + 1, r);     // Recursively sort the right half
    merge(l, r, mid);          // Merge the two sorted halves
}

// Function to handle input and output
void solve()
{
    int n;
    cin >> n; // Input the number of elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the array
    }

    mergeSort(0, n - 1); // Sort the entire array using merge sort

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Output the sorted array
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); // Optimize input/output operations
    cin.tie(0);                   // Untie cin and cout for faster I/O

    int t;
    t = 1; // Number of test cases (set to 1 here)
    while (t--)
    {
        solve(); // Solve each test case
    }
    return 0;
}