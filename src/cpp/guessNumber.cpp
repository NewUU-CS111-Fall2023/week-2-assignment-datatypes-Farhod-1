/*
 * Author:Farxod Qarshiyev
 * Date:25.10.2023
 */
#include <bits/stdc++.h>
using namespace std;

int main() {

    int number = rand() % 100 + 1;
    int guess;
    int tries = 0;
    do {
        cout << "Guess: ";
        cin >> guess;
        tries++;
        if (guess > number) {
            cout << "Too high!" << endl;
        } else if (guess < number) {
            cout << "Too low!" << endl;
        } else {
            cout << "You found in " << tries << endl;
        }
    } while (guess != number);
    return 0;
 }
