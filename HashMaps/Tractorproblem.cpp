#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<long long, int> memo;

// Function to calculate the number of points Bessie can reach
int countPoints(long long a, long long b, int n) {
    if (a < 0 || b < 0) return 0;

    long long key = a * 1000000000 + b;
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    if (n == 0) return 1;

    int ans = 1 + countPoints(a - (1LL << (n - 1)), b, n - 1) + countPoints(a, b - (1LL << (n - 1)), n - 1);
    memo[key] = ans;
    return ans;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        long long A, B;
        cin >> A >> B;

        int n = 0;
        while ((1LL << n) <= max(A, B)) {
            ++n;
        }

        int points = countPoints(A, B, n);
        cout << points << endl;
    }

    return 0;
}
