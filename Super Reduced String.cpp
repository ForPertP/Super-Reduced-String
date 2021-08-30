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

