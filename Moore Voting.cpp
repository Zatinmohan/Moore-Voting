#include<bits/stdc++.h>

using namespace std;

int main()
{
  int size;
  
  cin>>size;
  
  int arr[size];
  
  //input in array;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  
  int count=1,index=0;
  //checking
  for(int i=1;i<size;i++)
  {
    if(arr[i]==arr[index])
      count++;
      
     if(count==0)
     {
      count=1;
      index=i;
     }
     
     else
      count--;
  }
  
  count=0;
  //checking that weather the found element is the right one or not.
  for(i=0;i<size;i++)
  {
    if(arr[i]==arr[index])
      count++;
  }
  
  if(count==size/2)
    cout<<arr[i];
    
   else
    cout<<"not available";
    
   return 0;
}
