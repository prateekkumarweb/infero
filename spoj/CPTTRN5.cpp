#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int test, r, c, s;
    cin >> test;
    for (int t=0; t<test; t++) 
    {
        cin >> r >> c >> s;
        r = (s+1)*r+1;
        c = (s+1)*c+1;
        for (int i=0; i<r; i++) 
        {
            for (int j=0; j<c; j++) 
            {
                if (i%(s+1) == 0 || j%(s+1)==0) cout << "*";
                else
                {
                    int h = i/(s+1);
                    int w = j/(s+1);
                    int hi = i%(s+1);
                    int wi = j%(s+1);
                    if ((h%2 == 0 && w%2 == 0) || (h%2 != 0 && w%2 != 0))
                    {
                        if (hi == wi) cout << "\\";
                        else cout << ".";
                    }
                    else
                    {
                        if (hi + wi == s+1) cout << "/";
                        else cout << ".";
                    }
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
