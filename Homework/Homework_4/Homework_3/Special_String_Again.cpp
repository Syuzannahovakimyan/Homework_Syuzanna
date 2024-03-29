#include <bits/stdc++.h>

using namespace std;


// Complete the substrCount function below.
long substrCount(int n, string s) {
    long out = n;
    for(int i = 0; i < n; ++i){
        int j = 1;
        while (s[i] == s[i+j]){
            ++out;
            ++j;
        }
        if(j == 1){
            while (s[i+j] == s[i-j] && s[i+j] == s[i+1]){
                ++out;
                ++j;
            } 
        }   
    }
    return out;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
