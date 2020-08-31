#include <iostream>
#include <cstring>
#include <climits>
#include <vector>
#include <cmath>
#define ll long long
#define INF 100000000
using namespace std;

ll findMinCost(vector<int> &cost, vector<int> &weight, int n, int s)
{
    ll dp[s+1];
    dp[0]=0;
    for(int i=1;i<=s;i++){
        dp[i]=INF;
        for(int j=0;j<n;j++){
            if(weight[j]<=i){
                dp[i]=min(dp[i],dp[i-weight[j]]+cost[j]);
            }
        }
    }
    return dp[s]==INF?-1:dp[s];
}

int main()
{
    int n, s;
    cin >> n >> s;

    vector<int> cost;
    vector<int> weight;

    for (int i = 0; i < s; i++)
    {
        int currcost;
        cin >> currcost;
        if (currcost != -1)
        {
            cost.push_back(currcost);
            weight.push_back(i + 1);
        }
    }
    cout << findMinCost(cost, weight, cost.size(), s) << endl;
}
