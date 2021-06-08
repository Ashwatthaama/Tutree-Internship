#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

vector<int> ans;

void solve(int arr[], int n)
{
   int leader = arr[n - 1];

   ans.push_back(leader);

   for (int i = n - 2; i >= 0; i--)
   {
      if (leader < arr[i])
      {
         leader = arr[i];
         ans.push_back(leader);
      }
   }
}


int main()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; ++i)
      cin >> arr[i];

   solve(arr, n);

   reverse(ans.begin(), ans.end());

   for (auto leader : ans)
      cout << leader << " ";


   return 0;
}
