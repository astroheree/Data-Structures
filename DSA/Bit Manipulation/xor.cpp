#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int arr[9] = {1,2,3,4,5,4,3,2,1};
  int ans = 0;
  for(int i = 0 ; i < 9 ; i++)
    {
      ans = ans^arr[i];
    }
  cout<<ans<<endl;
}