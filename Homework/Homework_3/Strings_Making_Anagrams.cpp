#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(string a, string b) {
    int match = 0;
    int deletion = 0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] == -1)
            continue;
        for(int j = 0; j < b.size(); ++j){
        if(a[i] == b[j]){
            a[i]=b[j]=-1; 
            ++ match;
        }    
        if(a[i] == -1)
            break;
        if(b[j] == -1)
            continue;      
        }        
    }
    deletion = a.size()+b.size()-2*match;
    return deletion;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
