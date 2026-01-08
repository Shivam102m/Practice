#include<bits/stdc++.h>

using namespace std;

void explainPair(){
  pair<int, int> p ={1,3};

  cout<<p.first<<" "<<p.second;

  pair<int, pair<int,int>> p2 = {1,{3,4}};

  cout<<p2.second.first;

  pair<int, int> arr[] = {{1,2}, {5,6}};

  cout<< arr[1].second;
}

void explainVector(){

  vector<int> v;
  v.push_back(5);
  v.emplace_back(10);

  vector<pair<int,int>> v2;

  v2.push_back({2,3});
  v2.emplace_back(4,5);

  vector<int> v3(5,69);

  vector<int> v4(v3);

  for(auto it = v3.begin(); it!=v3.end(); it++){
    cout<<*(it)<<" ";
  }



}

int main(){
  explainVector();
  return 0;
}