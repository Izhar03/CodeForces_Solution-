#include<bits/stdc++.h>

using namespace std;

int main()
{
int N,x;
float sum=0;
cin>>N;
  
  for(int i=0;i<N;i++){
    cin>>x;
    sum=sum+x;
  }
  
  cout<<(sum/N);
  

}
