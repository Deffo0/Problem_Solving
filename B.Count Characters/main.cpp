#include <iostream>
using namespace std;
#include <vector>
int main() {
    string input;
    cin >> input;
    vector<int> freq_arr(256);
    fill(freq_arr.begin(), freq_arr.end(), 0);
    for (char i : input) {
        freq_arr[(int)i]++;

    }
    for (int i = 0; i < freq_arr.size(); ++i) {
        if (freq_arr[i] != 0){
            cout << (char)i << " " << freq_arr[i] << endl;
        }

    }
}
