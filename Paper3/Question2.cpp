void solve(int arr[], int n)
{
   int temp = arr[0], i;
   for (i = 0; i < n - 1; i++)
      arr[i] = arr[i + 1];

   arr[n - 1] = temp;
}

void rotate(int arr[], int d, int n)
{
   for (int i = 0; i < d; i++)
      solve(arr, n);
}