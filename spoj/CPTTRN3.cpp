#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) 
{
    int test, r, c;
    cin >> test;
    for (int t=0; t<test; t++) 
    {
        cin >> r >> c;
        r = 3*r+1;
        c = 3*c+1;
        for (int i=0; i<r; i++) 
        {
            for (int j=0; j<c; j++) 
            {
                if (i%3 == 0 || j%3==0) cout << "*";
                else cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
