#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int test, r, c;
  cin >> test;
  for (int t=0; t<test; t++) {
    cin >> r >> c;
    for (int i=0; i<r; i++) {
      for (int j=0; j<c; j++) {
        if (i%2 == 0) {
          if (j%2 == 0) cout << "*";
          else cout << ".";
        }
        else {
          if (j%2 == 0) cout << ".";
          else cout << "*";
        }
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
