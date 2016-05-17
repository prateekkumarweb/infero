#include <iostream>
#include <string>

using namespace std;

int p = 0;

string convert(string s)
{
    int l = s.length();
    p++;
    char o = ' ';
    string r = "";
    while (p<l && s[p] != ')')
    {
        if(s[p] == '+' || s[p] == '-' || s[p] == '*' || s[p] == '/' || s[p] == '^')
        {
            o = s[p];
        }
        else if (s[p] == '(')
        {
            r+=convert(s);
        }
        else
        {
            r+=s[p];
        }
        p++;
    }
    r+=o;
    return r;
}

int main (int argc, char const* argv[])
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t += 1)
    {
        string s;
        cin >> s;
        p = 0;
        string ans = convert(s);
        cout << ans << endl;
    }
    return 0;
}
