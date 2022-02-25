#include<bits/stdc++.h>

using namespace std;

int main()
{
int N;
int sum=0;
string s;
cin>>N;

for( int i=0;i<N;i++){

cin>>s;

if(s=="++X"){
  sum++;
}

if(s=="X++"){
  sum++;
}

if(s=="--X"){
  sum--;
}

if(s=="X--"){
  sum--;
}

}

cout<<sum;




}