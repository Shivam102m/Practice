#include<bits/stdc++.h>

using namespace std;

void Pattern_11(){
  int n=5;
  for(int i=0;i<n;i++){
    for(int j=0; j<i+1;j++){
      if((i+j)%2==0){
        cout<<" 1";
      }else{
        cout<<" 0";
      }
    }
    cout<<endl;
  }
}

void Pattern_10(){
  int n=5;
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int i=n-1;i>=0;i--){
    for(int j=0;j<i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void Pattern_9(){
  int n=5;
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << "  ";
    }
    for(int k=0; k<2*i+1;k++){
      cout<<"* ";
    }
    cout<<endl;
  }  
  for(int i=n; i>0;i--){
    for(int j=0 ; j<n-i; j++){
      cout<<"  ";
    }
    for(int k=0; k<2*i-1;k++){
      cout<<"* ";
    }cout<<endl;
  }
}

void Pattern_8(){
  int n=5;
  for(int i=n; i>0;i--){
    for(int j=0 ; j<n-i; j++){
      cout<<"  ";
    }
    for(int k=0; k<2*i-1;k++){
      cout<<"* ";
    }cout<<endl;
  }
}

void Pattern_7(){
  int n=5;
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << "  ";
    }
    for(int k=0; k<2*i+1;k++){
      cout<<"* ";
    }
    cout<<endl;
  }  
}

void Pattern_6(){
  int n=5;
  for(int i=n; i>=0;i--){
    for(int j=0; j<i; j++){
      cout<<j+1<<" ";
    }
    cout<<endl;
  }
}

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
  Pattern_11();
  return 0;
}
