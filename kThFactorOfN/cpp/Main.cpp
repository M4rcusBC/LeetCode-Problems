#include <vector>
#include <iostream>

using namespace std;

int kThFactorOfN(int n, int k) {
    vector<int> factors;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    if (k > factors.size()) {
        return -1; // or some error value
    }
    return factors[k - 1];
}

int main() {
    vector<int> nums = {12, 7, 4, 1, 1000, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int k = 3;

    for (int n : nums) {
        cout << "kThFactorOfN(" << n << ", " << k << ") = " << kThFactorOfN(n, k) << endl;
    }
    return 0;
}