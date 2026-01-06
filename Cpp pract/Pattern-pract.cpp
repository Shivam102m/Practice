#include<bits/stdc++.h>

using namespace std;

void Pattern_22(){
  int n=5;
  for(int i=0; i<2*n-1; i++){
    for(int j=0; j<2*n-1; j++){
      int top=i;
      int down=2*n-2-i;
      int right=2*n-2-j;
      int left=j;
      cout<<(n-min(min(top,down), min(right, left)))<<" ";
    }
    cout<<endl;
  }
}

void Pattern_21(){
    int n=5;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i == 0 || i == n-1 || j==0 || j==n-1 ){
          cout<<"* ";
        }else{
          cout<<"  ";
        }
      }cout<<endl;
    }
}

void Pattern_20(){
  int n=5;
  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout<<"* ";
    }
    for(int k=0; k<2*(n-i); k++){
      cout<<"  ";
    }
    for(int l=0; l<i; l++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int i=1; i<n; i++){
    for(int j=0; j<n-i; j++){
      cout<<"* ";
    }
    for(int k=0; k<2*i; k++){
      cout<<"  ";
    }
    for(int l=0; l<n-i; l++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void Pattern_19(){
  int n=5;
  for(int i=0;i<n;i++){
    for(int j=0; j<n-i; j++){
      cout<<"* ";
    }
    for(int k=0; k<2*i; k++){
      cout << "  ";
    }
    for(int j=0; j<n-i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }

  for(int i=n-1;i>0; i--){
    for(int j=0;j<n-i;j++){
      cout<<"* ";
    }
    for(int k=0;k<2*i;k++){
      cout<<"  ";
    }
    for(int l=0; l<n-i;l++){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void Pattern_18(){
  char ch;
  int n = 5;

  for(int i=1; i<=n; i++){
    ch='A';
    ch+=(5-i);
    for(int j=0; j<i; j++){
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }
}

void Pattern_17(){
  int n=5;
  char ch;

  for(int i=1; i<=n; i++){
    ch='A';
    for(int j=0; j<n-i; j++){
      cout<<"  ";
    }
    for(int k=0; k<i; k++){
      cout<<ch<<" ";
      ch++;
    }
    ch--;
    for(int l=0; l<i-1; l++){
      ch--;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}

void Pattern_16(){
  int n=5;
  char ch='A';

  for(int i=1; i<=n; i++){
    for(int j=0;j<i;j++){
      cout<<ch<<" ";
    }ch++;
    cout<<endl;
  }
}

void Pattern_15(){
  int n=5;
  char ch;

  for(int i=n; i>0; i--){
    ch='A';
    for(int j=0; j<i; j++){
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }
}

void Pattern_14(){
  char ch;
  int n=5;
  for(int i=1;i<=n;i++){
    ch='A';
    for(int j=0;j<i;j++){
      cout<<ch<<" ";
      ch++;
    }
    cout<<endl;
  }
}

void Pattern_13(){
  int count=1;
  int n=5;
  for(int i=1;i<=5;i++){
    for(int j=0;j<i;j++){
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }
}

void Pattern_12(){
  int n=5;
  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      cout<<j+1<<" ";
    }
    for(int k=0; k<2*(n-1-i); k++){
      cout << "  ";
    }
    for(int l=i+1; l>0; l--){
      cout << l<<" ";
    }
    cout<<endl;
  }
}

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
  Pattern_22();
  return 0;
}
