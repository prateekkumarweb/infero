#include <iostream>

using namespace std;

bool isPrime(long n)
{
    if (n <= 1)
        return false;
    else if (n <=3)
        return true;
    else if (n%2 == 0 || n%3 == 0)
        return false;
    else
    {
        long i = 5;
        while (i*i <= n)
        {
            if (n%i == 0 || n%(i+2) == 0)
                return false;
            i+=6;
        }
        return true;
    }
}

int main()
{
    int test;
    cin >> test;
    for (int t=0; t<test; t++)
    {
        long s, l;
        cin >> s >> l;
        for (long i=s; i<=l; i++)
        {
            if (isPrime(i))
                cout << i << endl;
        }
        cout << endl;
    }
    return 0;
}
