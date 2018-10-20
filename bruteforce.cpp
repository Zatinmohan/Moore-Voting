#include<bits/stdc++.h>

using namespace std;

int main()
{
  int size;
  
  cin>>size;
  
  int arr[size];
  
  for(int i=0;i<size;i++)
  {
    cin>>arr[i]; 
  }
  
  int count;
  
  for(int i=0;i<size;i++)
  {
    count=1;
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
    
    if(count>size/2)
    {
      cout<<arr[i];
      break;
    }
  }
  
  
  return 0; 
}
