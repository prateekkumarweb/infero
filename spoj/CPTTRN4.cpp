#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int test, r, c, h, w;
    cin >> test;
    for (int t=0; t<test; t++) 
    {
        cin >> r >> c >> h >> w;
        r = (h+1)*r+1;
        c = (w+1)*c+1;
        for (int i=0; i<r; i++) 
        {
            for (int j=0; j<c; j++) 
            {
                if (i%(h+1) == 0 || j%(w+1)==0) cout << "*";
                else cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
