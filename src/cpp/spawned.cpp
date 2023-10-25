/*
 * Author:Farxod Qarshiyev
 * Date:25.10.2023
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y, x1, y1;
    vector<pair<int, int>> coordinates;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        coordinates.push_back(make_pair(x, y));
    }

    for(int i = 0; i < n; i++){
        cin >> x1 >> y1;
        if(x1 == coordinates[i].first && y1 == coordinates[i].second){
            cout << "You died" << endl;
        } else {
            cout << "You are alive" << endl;
        }
    }




}