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


std::string superReducedString2(std::string s)
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


std::string superReducedString3(std::string s) {
    std::string result;
    std::stack<char> st;

    for (int i = 0; i < s.length(); ++i) {
        if (st.empty()) {
            st.push(s[i]);
        } else if (st.top() == s[i]) {
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    if (st.empty()) {
        return "Empty String";
    } else {
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
}
