#include<iostream>
#include <climits>
using namespace std ;
int main(){
// loops an asrray 
// find the largest /smallest in array
int nums[]={5,15,22,1,-15,-24};
int size=6;
int smallest=INT_MAX;
for(int i=0;i<size;i++){
    if(nums[i]<smallest){
        smallest=nums[i];
    }
}
cout<<smallest;

}