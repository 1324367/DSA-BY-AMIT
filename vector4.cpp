#include<iostream>
#include<vector>
using namespace std;

int main(){
          vector<char>v={'a', 'd','e', 'f','g','h'};
          
          //Access element and printṇ
          cout<<v[3]<<endl;
          cout<<v.at(2)<<endl;

          //Update current element 3 and 2
      v[3]='F';
      v.at(2)='E';

      cout<<v[3]<<endl;
      cout<<v.at(2)<<endl;

      return 0;
}