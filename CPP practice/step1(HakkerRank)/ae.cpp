#include<iostream>
using namespace std;


void changeArr(int arr[],int size){
    cout<<"in function";
    for(int i =0;i <size;i++){
        arr[i]=2*arr[i];
    }
}
 int main(){
int arr[]={2,3,4};
for(int i =0;i <3;i++){
        arr[i]=2*arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;



 }