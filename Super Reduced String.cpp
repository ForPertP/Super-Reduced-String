string superReducedString(string s)
{
    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i] == s[i+1])
        {
            s.erase(i, 2);
            i = -1;
            
            if (s.empty())
            {
                s = "Empty String";
                break;
            }
        }
    }
    
    return s;
}


// Exercise Code for std::stack, std::reverse
string superReducedString2(string s)
{
    string result;
    std::stack<char> st;

    for (int i = 0; i < s.length(); ++i)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {
            if (st.top() == s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }

    if (st.empty())
    {
        result = "Empty String";
    }
    else
    {
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }

        std::reverse(result.begin(), result.end());
    }

    return result;
}
