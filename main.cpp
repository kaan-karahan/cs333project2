#include <iostream>
#include <string>
#include <algorithm>

const int MAX_N = 50;
std::string outlets[MAX_N];
std::string lamps[MAX_N];
int dp[MAX_N + 1][MAX_N + 1];

int main() {

    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> outlets[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> lamps[i];
    }
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            if (outlets[i - 1] != lamps[j - 1]) {
                dp[i][j] = std::max(dp[i + 1][j], dp[i][j + 1]);
            }
            else {
                dp[i][j] = dp[i + 1][j + 1] + 1;
            }
        }
    }
    std::cout << dp[1][1] << std::endl;
    int i = 1;
    int j = 1;
    while (i <= n && j <= n) {
        if (outlets[i - 1] == lamps[j - 1]) {
            std::cout << lamps[j - 1] << " ";
            i++;
            j++;
        }
        else if (dp[i + 1][j] > dp[i][j + 1]) {
            i++;
        }
        else {
            j++;
        }
    }
    return 0;
}
