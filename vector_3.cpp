#include<iostream>
#include<vector>
using namespace std;

  int main(){
          vector<char> v = {'a', 'd', 'f'};

          v.push_back('z');
          
          v.insert(v.begin() +1, 'c');

          for(int i=0; i<v.size(); i++)
          cout<<v[i]<<" ";

          return 0;


  }

