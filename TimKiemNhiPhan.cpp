#include <bits/stdc++.h>
using namespace std;

int timKiemNhiPhan(int a[], int n, int x) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == x) {
            return mid; 
        } else if (a[mid] < x) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int a[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = 10;
    int x = 23;
    cout << timKiemNhiPhan(a,n,x);
    return 0;
}

