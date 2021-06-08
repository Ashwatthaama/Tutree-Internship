#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

vector<int> u, v;

void uni(int arr1[], int arr2[], int m, int n)
{
   int i = 0, j = 0;

   while (i < m && j < n) {
      if (arr1[i] < arr2[j])
      {
         u.push_back(arr1[i]);
         i++;
      }

      else if (arr2[j] < arr1[i])
      {
         u.push_back(arr2[j]);
         j++;
      }

      else {
         u.push_back(arr2[j]);
         j++;
         i++;
      }

   }

   while (i < m)
   {
      u.push_back(arr1[i]);
      i++;
   }
   while (j < n)
   {
      u.push_back(arr2[j]);
      j++;
   }
}

void inter(int arr1[], int arr2[], int m, int n)
{
   int i = 0, j = 0;
   while (i < m && j < n) {
      if (arr1[i] < arr2[j])
         i++;
      else if (arr2[j] < arr1[i])
         j++;
      else
      {
         v.push_back(arr1[i]);
         i++;
         j++;
      }
   }
}


int main()
{
   int m, n;
   cin >> m >> n;
   int arr1[m], arr2[n];

   for (int i = 0; i < m; i++)
      cin >> arr1[i];
   for (int i = 0; i < n; i++)
      cin >> arr2[i];

   uni(arr1, arr2, m, n);
   inter(arr1, arr2, m, n);

   cout << "Union : " << "{";
   for (auto element : u)
      cout  << element << ",";
   cout << "}" << endl;

   cout << "Intersection : " << "{";
   for (auto element : v)
      cout  << element << ",";
   cout << "}" << endl;


   return 0;
}
