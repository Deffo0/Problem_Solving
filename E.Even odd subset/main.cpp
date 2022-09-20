#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int size, counter = 0;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int snum = 0;
    while(snum<(1 << size)){
        int even_odd_game = 0;
        for(int i=0;i<size;++i){

            if((snum&(1<<i))!=0){
                if ((arr[i] & 1) == 1){
                    even_odd_game--;
                }else{
                    even_odd_game++;
                }
            }
        }
        if (even_odd_game > 0){
            counter++;
        }

        ++snum;
    }
    cout << counter << endl;

}
