#include <iostream>
#include <string>


using namespace std;

int main (int argc, char const* argv[])
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t += 1)
    {
        string s;
        cin >> s;
        long l = s.length();
        long m = l/2-1;
        bool isPalin = true;
        for (long i = m; i >= 0; i -= 1)
        {
            long c = l-i-1;
            if (s[i] != s[c])
            {
                isPalin = false;
                break;
            }
        }
        if (isPalin)
        {
            for (long i = l-1; i >= 0; i -= 1)
            {
                if (s[i] != '9')
                {
                    s[i]++;
                    break;
                }
                else s[i] = '0';
                if (i == 0)
                {
                    s[0] = '1';
                    s+='1';
                    l++;
                    m = l/2-1;
                }
            }
        }
        isPalin = true;
        for (long i = m; i >= 0; i -= 1)
        {
            long c = l-i-1;
            if (s[i] < s[c])
            {
                isPalin = false;
                break;
            }
        }
        if (l%2 == 1) m++;
        for (long i = m; i >= 0 && isPalin == false; i -= 1)
        {
            if (s[i] != '9')
            {
                s[i]++;
                break;
            }
            else s[i] = '0';
        }
        if (l%2 == 1) m--;
        for (long i = 0; i <= m; i += 1)
        {
            cout << s[i];
        }
        for (long i = m+1; i < l; i += 1)
        {
            long c = l-i-1;
            cout << s[c];
        }
        cout << endl;
    }
    return 0;
}
