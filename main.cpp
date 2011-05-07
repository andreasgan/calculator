#include <iostream>

using namespace std;

int main() {
    while (true) {
        int num1, num2, ans;
        char plus_or_minus;

        cout << "Please enter two numbers:\n"
             << "Number 1: ";
        cin >> num1;

        cout << "Number 2: ";
        cin >> num2;

        cout << "+ or -? ";
        cin >> plus_or_minus;

        if (plus_or_minus == '+') {
            ans = num1 + num2;
        } else if (plus_or_minus == '-') {
            ans = num1 - num2;
        } else if (plus_or_minus == '*') {
            ans = num1 * num2;
        } else {
            cout << "I don't know " << plus_or_minus << endl << endl
                 << " ----- " << endl << endl;
            continue;
        }

        cout << ans << endl << endl
             << " ----- " << endl << endl;
    }

}
