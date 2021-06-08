#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007



int main()
{
   int n; //size of the input array
   cin >> n;
   int arr[n];

   for (int i = 0; i < n; i++)
      cin >> arr[i];

   int smallest = INT_MAX, smallest2 = INT_MAX;

   for (int i = 0; i < n; i++)
   {
      if (arr[i] < smallest)
      {
         smallest2 = smallest;
         smallest = arr[i];
      }

      else if (arr[i] < smallest2 and arr[i] != smallest)
      {
         smallest2 = arr[i];
      }
   }

   cout << "The smallest element is " << smallest << " and second Smallest element is " << smallest2 << endl;

   return 0;
}