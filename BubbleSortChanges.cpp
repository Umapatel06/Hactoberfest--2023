#include <iostream>
#include <algorithm> // Include the algorithm library for sort
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Use the sort() function to sort the array
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
