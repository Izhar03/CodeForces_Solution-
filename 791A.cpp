#include<bits/stdc++.h>

using namespace std;

int main()
{
int a,b;
int min_year=0;
cin>>a;
cin>>b;

if(a>b){
  cout<<"0"<<endl;
}

if(a==b){
  cout<<"1"<<endl;
}

else if(a<b)
{

  while(a<=b)
  {
    a=a*3;
    b=b*2;
    min_year++;
  }

  cout<<min_year<<endl;


}



}