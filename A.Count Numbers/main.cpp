#include <iostream>
using namespace std;
#include <vector>

int main() {
    pair<int, int> first_line;
    cin >> first_line.first >> first_line.second;
    vector<int> freq_arr(first_line.first + 1);
    fill(freq_arr.begin(), freq_arr.end(), 0);
    pair<int, int> queries[first_line.second];
    for (int i = 0; i < first_line.second; ++i) {
        cin >> queries[i].first >> queries[i].second;

    }
    for (int i = 0; i < first_line.second; ++i) {
        if (queries[i].first == 1){
            freq_arr[queries[i].second]++;
        }else if(queries[i].first == 2){
            cout << freq_arr[queries[i].second] << endl;
        }

    }
}
