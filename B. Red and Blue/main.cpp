#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        int n, m, red_max_seq = 0, blue_max_seq = 0, red_prefix = 0, blue_prefix = 0;
        cin >> n;
        for (int j = 0; j < n; ++j) {
            int r;
            cin >> r;
            red_prefix += r;
            red_max_seq = max(red_max_seq, red_prefix);

        }
        cin >> m;
        for (int j = 0; j < m; ++j) {
            int b;
            cin >> b;
            blue_prefix += b;
            blue_max_seq = max(blue_max_seq, blue_prefix);

        }
        cout << red_max_seq + blue_max_seq << endl;
    }

}