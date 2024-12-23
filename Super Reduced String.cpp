string superReducedString(string s)
{
   int i = 0;

    for (int j = 0; j < s.length(); ++j)
    {
        if (i > 0 && s[i-1] == s[j])
        {
            --i;
        }
        else
        {
            s[i++] = s[j];
        }
    }

    return i == 0 ? "Empty String" : s.substr(0, i);
}

std::string superReducedString2(std::string s) {
    std::string result = "";

    for (int j = 0; j < s.length(); ++j) {
        if (!result.empty() && result.back() == s[j])
        {
            result.pop_back();
        }
        else
        {
            result += s[j];
        }
    }

    return result.empty() ? "Empty String" : result;
}
