#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    int n, refer = 0, counter = 0, sum = 0;
    cin >> n;
    vector<int> container;
    vector<int> vect(n), car(n);
    for (int i = 0; i < n; i++) {
        cin >> vect[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            car = vect;
            for (int l = i; l <= j; l++) {

                car[l] = abs(1 - car[l]);
            }
            container.push_back(count(car.begin(), car.end(), 1));
        }
    }
    cout << "\n" << *max_element(container.begin(), container.end());
    return 0;
}

