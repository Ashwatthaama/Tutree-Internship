#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007


void solve(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      int index = arr[i] % n;
      arr[index] += n;
   }

   for (int i = 0; i < n; i++)
   {
      if ((arr[i] / n) >= 2)
         cout << i << ", ";
   }

}


int main()
{
   int n;
   cin >> n;
   int arr[n];

   for (int i = 0; i < n; i++)
      cin >> arr[i];


   solve(arr, n);

   return 0;
}

