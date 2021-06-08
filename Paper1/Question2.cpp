#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007


void solve(int arr[], int n)
{

   priority_queue<int> pq1;
   priority_queue<int, vector<int>, greater<int> > pq2;

   double med = arr[0];

   pq1.push(arr[0]);

   cout << "After reading 1st element of stream " << med << endl;

   for (int i = 1; i < n; i++)
   {
      int x = arr[i];

      if (pq1.size() > pq2.size())
      {
         if (x < med)
         {
            pq2.push(pq1.top());
            pq1.pop();
            pq1.push(x);
         }
         else
            pq2.push(x);

         med = (pq1.top() + pq2.top()) / 2.0;
      }

      else if (pq1.size() == pq2.size())
      {
         if (x < med)
         {
            pq1.push(x);
            med = pq2.top();
         }
         else
         {
            pq2.push(x);
            med = pq2.top();
         }
      }

      else
      {
         if (x > med)
         {
            pq1.push(pq2.top());
            pq2.pop();
            pq2.push(x);
         }
         else
            pq1.push(x);

         med = (pq1.top() + pq2.top()) / 2.0;
      }

      cout << "After reading " << i + 1 << "th element of stream " << med << endl;
   }
}


int main()
{
   int arr[] = {5, 15, 1, 3};
   int n = sizeof(arr) / sizeof(arr[0]);
   solve(arr, n);

   return 0;
}
