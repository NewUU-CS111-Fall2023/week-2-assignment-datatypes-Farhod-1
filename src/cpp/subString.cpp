/*
 * Author:Farxod Qarshiyev
 * Date:25.10.2023
 */
#include <iostream>
using namespace std;

int main() {
    string s, subS;
    cin >> s >> subS;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s.substr(i, subS.size()) == subS) {
            ans += s.substr(i, subS.size());
        }
    }
    if (ans == "") {
        cout << "no match" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
