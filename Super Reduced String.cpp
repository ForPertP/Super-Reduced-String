#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s)
{
    int n = s.length();
    int top = 0;

    for (int i = 0; i < n; ++i)
    {
        if (top == 0 || s[top-1] != s[i])
        {
            s[top++] = s[i];
        }
        else
        {
            --top;
        }
    }

    return top == 0 ? "Empty String" : s.substr(0, top);
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
