#include <iostream>
using namespace std;

int main() {

    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;

    int m = s1.length();
    int n = s2.length();

    int dp[100][100];

    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {

            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << "LCS length = " << dp[m][n];

    return 0;
}
