#include<bits/stdc++.h>
using namespace std;

int main() {
    int times;
    cin >> times;
    while (times--) {
        int n;
        cin >> n;
        string t;
        cin >> t;
        if (t.length() != 5) {
              cout << "NO\n";
        }
        else {
          

            list<int> list;
            list.push_back('T');
            list.push_back('i');
            list.push_back('m');
            list.push_back('u');
            list.push_back('r');
            for (int i = 0; i < 5; i++) {
                list.remove(t[i]);
            }
            if (list.empty()) {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }
}