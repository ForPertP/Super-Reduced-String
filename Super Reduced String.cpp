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
   int i = 0;

   for (int j = 0; j < n; ++j)
   {
     if (i == 0 || s[i-1] != s[j])
     {
         s[i++] = s[j];
     }
     else
     {
         --i;
     }
   }
    
    
   return i == 0 ? "Empty String" : s.substr(0, i);
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
