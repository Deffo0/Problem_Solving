#include <iostream>
using namespace std;
int main() {
    int lemik,bob,flag=1, year_counter=0;
    cin  >> lemik >> bob;
    while (flag){
        lemik*=3;
        bob*=2;
        year_counter++;
        if (lemik>bob){
            flag=0;
        }
    }

    cout << year_counter ;
    return 0;
}
