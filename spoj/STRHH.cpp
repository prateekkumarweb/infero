#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  int test;
  cin >> test;
  for (int t=0; t<test; t++) {
    cin >> s;
    for (int i = 0; i < s.length()/2; i+=2) {
      cout << s[i];
    }
    cout << endl;
  }
  return 0;
}
