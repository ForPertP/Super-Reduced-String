using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'superReducedString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static string superReducedString(string s)
    {
        StringBuilder sb = new StringBuilder();
        
        foreach (char c in s)
        {
            if (sb.Length == 0 || sb[sb.Length-1] != c)
            {
                sb.Append(c);
            }
            else
            {
                sb.Remove(sb.Length - 1, 1);
            }
        }
        
        return sb.Length == 0 ? "Empty String" : sb.ToString();
    }

    
    public static string superReducedString2(string s)
    {
        int n = s.Length;
        int top = 0;
        char[] stack = s.ToCharArray();

        for (int i = 0; i < n; ++i)
        {
            if (top == 0 || stack[top - 1] != stack[i])
            {
                stack[top++] = stack[i];
            }
            else
            {
                --top;
            }
        }

        return top == 0 ? "Empty String" : new string(stack, 0, top);
    }    

    
    public static string superReducedString3(string s)
    {
        Stack<char> st = new Stack<char>();
        foreach (char c in s)
        {
            if (st.Count == 0 || st.Peek() != c)
                st.Push(c);
            else
                st.Pop();
        }

        List<char> result = new List<char>();
        while (st.Count > 0)
        {
            result.Add(st.Pop());
        }
        result.Reverse();
        
        return result.Count == 0 ? "Empty String" : new string(result.ToArray());
    }
}


class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string s = Console.ReadLine();

        string result = Result.superReducedString(s);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
