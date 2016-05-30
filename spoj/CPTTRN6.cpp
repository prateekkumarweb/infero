#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int test, r, c, h, w;
    cin >> test;
    for (int t=0; t<test; t++) 
    {
        cin >> r >> c >> h >> w;
        r = (h+1)*r+h;
        c = (w+1)*c+w;
        for (int i=0; i<r; i++) 
        {
            for (int j=0; j<c; j++) 
            {
                if (i%(h+1) == h && j%(w+1) == w) cout << "+";
                else if (i%(h+1) == h) cout << "-";
                else if (j%(w+1) == w) cout << "|";
                else cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
