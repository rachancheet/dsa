#include<iostream>
#include<vector>
using namespace std;
int func(int arr[],int size){
 
};
int main(){
 int arr[]={1,2,4532,3,23,432,3,3,3412,35,13,2,42,42,4,2424,412,4,24,23,23,2,43,5};
 int s = sizeof(arr)/4 -1;
 for(int i=0;i<s;i++ ){
   if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            if(i>=1){
            if(arr[i-1]>arr[i]){
                i=-1;
            }
            }
 }
}
 for(int i=0;i<s;i++ ){
    cout<<arr[i]<<" , ";
}
}