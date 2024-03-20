#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
     vector<int> freq;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == -1) {
            continue;
        }
        int matches = 0;
        for(int j = i + 1; j < s.size(); ++j) {
            if(s[i] == s[j]) {
                ++matches;
                s[j] = -1;
            }
            if(s[i] == -1) {
                break;
            }
            if(s[j] == -1) {
                continue;
            }
        }
        s[i] = -1;
        freq.push_back(matches + 1);
    }
    for(int i = 0; i < freq.size(); ++i) {
        cout << freq[i] << ' ';
    }
    if(freq.size() == 1) {
        return "YES";
    }
    int k = 2;
    int m = 0;
    bool v = false;
    bool g = false;
    for(int i = 1; i < freq.size(); ++i) {
        if(freq[0] != freq[i]) {
            --k;
            m = freq[0] - freq[i];
            if (freq[i]==1)
                v = true;
            if (freq[0]==1)
                g = true;    
        }
    }
     
    if(k < 1) {
        return "NO";
    }
    else if (abs(m) == 1 || v) {
        return "YES";
    }
    else {
        return "NO";
    } 
    
   

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}