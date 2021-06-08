#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007



int main()
{
   int n;
   cin >> n;

   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= i; j++)
      {
         cout << "*";
      }

      for (int j = i + 1; j <= 2 * n - i; j++)
      {
         cout << " ";
      }

      for (int j = 2 * n - i + 1 ; j <= 2 * n; j++)
      {
         cout << "*";
      }

      cout << endl;
   }

   for (int i = n; i >= 1; i--)
   {
      for (int j = 1; j <= i; j++)
      {
         cout << "*";
      }

      for (int j = i + 1; j <= 2 * n - i; j++)
      {
         cout << " ";
      }

      for (int j = 2 * n - i + 1 ; j <= 2 * n; j++)
      {
         cout << "*";
      }

      cout << endl;
   }

   return 0;
}
