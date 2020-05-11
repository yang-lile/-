#include <iomanip>
#include <iostream>
#include <algorithm>
#define N 10
using namespace std;

int main(int argc, char const *argv[]) {
    size_t i, j;
    float arr[10] = {float(0)};
    for (i = 0; i < N; i++) {
        cin >> arr[i];
    }
    float *minp, *maxp;
    minp = maxp = arr;
    for (i = 0; i < N / 2; i++) {
        for (j = i; j < N - i; j++) {
            if (abs(*minp) > abs(arr[j])) {
                minp = arr + j;
            }
            if (abs(*maxp) < abs(arr[j])) {
                maxp = arr + j;
            }
        }
        swap(*maxp, arr[i]);
        swap(*minp, arr[N - i - 1]);
        minp = maxp = arr + i + 1;
    }
    cout << fixed;
    for (i = N - 1; i > 0; i--) {
        cout << setprecision(2) << arr[i] << ',';
    }
    cout << setprecision(2) << arr[i] << endl;
    return 0;
}
