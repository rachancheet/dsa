#include<iostream>
using namespace std;
// void swap_alternate(int *arr,int size){
//     cout<<size<<endl;
//     for(int i =0;i<size-1;i+=2){
//         // cout<<(arr[i])<<endl;
//         int temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1] = temp;
//     }
    

// }


int unique_check(int arr[],int size){
    int ans=0;
    for(int i =0;i<size;i++){
        ans ^= arr[i];
            // cout<<(arr[i])<<endl;
        }
        return ans;

}
int main(){
    int arr[] = {1,23,4323,21,45};
    if(unique_check(arr,sizeof(arr)/4))
    cout<<"yes unique";
    // for(int i =0;i<sizeof(arr)/4;i++)
    // cout<<arr[i]<<endl;

}