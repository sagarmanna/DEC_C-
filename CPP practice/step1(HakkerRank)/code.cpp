#include<iostream>
#include<vector>
using namespace std;
int main(){


vector  <int>vec;
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
//cout<<vec.size()<<endl;
vec.erase(vec.begin()+0);
for(int val : vec){
cout<<val<<" ";
}
cout<<endl;

}