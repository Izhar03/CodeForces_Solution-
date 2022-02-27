#include<bits/stdc++.h>

using namespace std;

int main(){
  int N,x;
  int sumx=0;
  int sumy=0;
  int sumz=0;
  cin>>N;
  int A[N][3];

  for(int i=0;i<N;i++){
    for(int j=0;j<3;j++){
      cin>>A[i][j];
    }
  }


for(int z=0;z<N;z++){
  sumx=sumx+A[z][0];
}
for(int z=0;z<N;z++){
  sumy=sumy+A[z][1];
}
for(int z=0;z<N;z++){
  sumz=sumz+A[z][2];
}

if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}


