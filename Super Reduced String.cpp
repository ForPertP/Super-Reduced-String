string superReducedString(string s)
{
   int n = s.length();
   int i = 0;

   for (int j = 0; j < n; ++j)
   {
     if (i <= 0 || s[i-1] != s[j])
     {
         s[i++] = s[j];
     }
     else
     {
         --i;
     }
   }
    
   return i <= 0 ? "Empty String" : s.substr(0, i);
}


std::string superReducedString(std::string s)
{
    int n = s.length();
    std::string result = "";

    for (int i = 0; i < n; ++i) {
        if (result.empty() || result.back() != s[i])
        {
            result += s[i];
        }
        else
        {
            result.pop_back();
        }
    }

    return result.empty() ? "Empty String" : result;
}

