#include<bits/stdc++.h>

using namespace std;

void Pattern_5(){
  int n=5;
  for(int i=n; i>=0; i--){
    for(int j=0;j<i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void Pattern_4(){
  int n=5;
  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

void Pattern_3(){
  int n=5;
  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
}


void Pattern_2(){
  int n=5;
  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout<<"* ";
    }
    cout <<endl;
  }
}

void Pattern_1(){
  int n=5;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}
int main(){
  Pattern_5();
  return 0;
}
