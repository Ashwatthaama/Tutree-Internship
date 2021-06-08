#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007



int solve(int arr[], int n, int x, int y)
{

   int prev = -1, dist = INT_MAX;

   for (int i = 0 ; i < n ; i++)
   {
      if (arr[i] == x || arr[i] == y)
      {
         if ( prev != -1 && arr[i] != arr[prev])
            dist = min(dist , i - prev);

         prev = i;
      }
   }

   if (dist == INT_MAX)
      return -1;

   return dist;
}


int main()
{
   int n, x, y;
   cin >> n >> x >> y;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];

   cout << "Minimum distance between " << x << " and " << y << " is " << solve(arr, n, x, y);


   return 0;
}

