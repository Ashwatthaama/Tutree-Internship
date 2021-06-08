#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007


void solve(int arr[], int n)
{

   int tmp, sum = INT_MAX;
   int l = 0, r = n - 1;

   int lmin = l, rmin = n - 1;

   if (n < 2)
   {
      cout << "Pair not possible. Invalid input";
      return;
   }

   while (l < r)
   {
      tmp = arr[l] + arr[r];
      if (abs(tmp) < abs(sum))
      {
         sum = tmp;
         lmin = l;
         rmin = r;
      }
      if (tmp < 0)
         l++;
      else
         r--;
   }

   cout << "Pair with closest sum to zero is "
        << arr[lmin] << " and " << arr[rmin];
}
int main()
{
   int n;
   cin >> n;
   int arr[n];

   for (int i = 0; i < n; i++)
      cin >> arr[i];

   sort(arr, arr + n);

   solve(arr, n);

   return 0;
}

