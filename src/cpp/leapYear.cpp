/*
 * Author:Farxod Qarshiyev
 * Date:25.10.2023
 */
#include <iostream>
using namespace std;

int main() {
    
    int year;
    cout << "Yilni kirit: ";
    cin >> year;
    if (year % 4 == 0) {
        cout << "yes it is leap year" << endl;
    } else {
        cout << "No it is not leap year" << endl;
    }
    return 0;
  
}
