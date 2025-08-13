#include<iostream>
#include<vector>
using namespace std;

 void printVector(vector<int>&v){
          for( auto x:v){
                    cout<<x<<" ";


          }
          cout<<endl;
 }

int main(){
          
          //creating a vetctor five elements initializer list
          vector<int>v1={1,5,3,4,2};
     

          //creating a vector of five elements default value 
          vector<int> v2(5,9);

          printVector(v1);
          printVector(v2);

          return 0;

}