#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'commonChild' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int commonChild(string s1, string s2) {
    int row = s1.size();
    int pillar= s2.size();
    vector<vector<int>> check(row + 1, vector<int>(pillar + 1, 0));
    for (int i = 1; i <= row; ++i) {
        for (int j = 1; j <= pillar; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                check[i][j] = check[i - 1][j - 1] + 1;
            } else {
                check[i][j] = max(check[i - 1][j], check[i][j - 1]);
            }
        }
    }
    return check[row][pillar];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
