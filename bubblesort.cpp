#include<iostream>
using namespace std;


int arr[] = {7,3,5,6,2,9};

int bubble_sort(){

    int size = sizeof(arr)/4;
    int i = 0;
    for(i =0 ;i<size;i++){
        if(arr[i+1]<arr[i]){
            int temp  = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            cout<<arr[i]<<" replace with "<<arr[i+1]<<endl;
            // i=-1;
        }
        if(arr[i-1]>>arr[i]){
            i-1;
        }
    }

}
int main(){
    cout<<"hey";
    bubble_sort();
    int size = sizeof(arr)/4;
    for(int i =0 ;i<size;i++){
    cout<<arr[i];
    }

}