#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    ll arr[n+1];    /////////////here/////////////////////

    for (int i = 1; i <= n; i++)
    {
      arr[i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
      ll x;
      string s;
      cin >> s >> x;
      arr[x]++;
    }

    ll bad = 0;

    ll pos = 1;

    for (int i = 1; i <= n; i++)
    {
      while (arr[i])
      {
        bad += abs(pos - i);
        pos++;
        arr[i]--;
      }
    }

    cout << bad << endl;
  }
}
