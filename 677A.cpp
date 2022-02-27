#include<bits/stdc++.h>

using namespace std;

int main()
{
  int x;
  int sum=0;

  int no_of_friends,height_of_fence;

  cin>>no_of_friends;
  cin>>height_of_fence;

  for(int i=0;i<no_of_friends;i++)
  {
    cin>>x;
    if(x>height_of_fence){
      sum=sum+2;
    }
      else{
        sum=sum+1;
      }
      
  }

  cout<<sum;

}

