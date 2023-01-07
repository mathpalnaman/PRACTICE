#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */
int makingAnagrams(string s1, string s2) {
    vector<int>a(26,0);
    vector<int>b(26,0);
    int count=0;
    for(int i=0;i<s1.length();i++)
    {
        a[s1[i]-'a']++;
    } 
    for(int i=0;i<s2.length();i++)
    {
        b[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        count+=abs(a[i]-b[i]);
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
