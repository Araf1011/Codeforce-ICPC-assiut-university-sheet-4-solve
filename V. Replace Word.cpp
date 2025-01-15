#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    while (S.find("EGYPT") != string::npos) {
        S.replace(S.find("EGYPT"), 5, " ");
    }

    cout << S << endl;
    return 0;
}
