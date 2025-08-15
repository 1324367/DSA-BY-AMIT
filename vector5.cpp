#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
          vector<char>v={'a','b','c','d','e','f' };
          
          //delete last element
          v.pop_back();

          //delete specific element
          v.erase(find(v.begin(), v.end(), 'c'));

          for(int i=0; i<v.size(); i++){
                    cout<<v[i]<<" ";

          }
return 0;

}