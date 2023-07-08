#include<iostream>
using namespace std;

int arr[] = {1,2,4,2,3,1};

int main(){
    int ans =0;
    for(int i =0 ;i<sizeof(arr)/4;i++){
        ans = ans^arr[i];
    }
    cout<<ans;

}