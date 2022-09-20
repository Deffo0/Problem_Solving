#include <iostream>
using namespace std;
int dp[5] = {5, 4, 3, 2, 1};
int main()
{
    int n, sum = 0;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        int carry = dp[i];
        dp[i] = n / dp[i];
        n = n - dp[i]*carry;
    }
    for(int i=0;i<5;i++){
        sum += dp[i];
    }
    cout<<sum<<endl;
}