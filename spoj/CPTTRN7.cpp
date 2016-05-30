#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int test, r, c, s;
    cin >> test;
    for (int t=0; t<test; t++) 
    {
        cin >> r >> c >> s;
        r = r*s*2;
        c = c*s*2;
        for (int i=0; i<r; i++) 
        {
            for (int j=0; j<c; j++) 
            {
                int h = i%s;
                int w = j%s;
                int hi = i/s;
                int wi = j/s;
                if ((hi%2 == 0 && wi%2 == 0) || (hi%2 != 0 && wi%2 != 0))
                {
                    if (h+w == s-1) cout << "/";
                    else cout << ".";
                }
                else
                {
                    if (h == w) cout << "\\";
                    else cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
