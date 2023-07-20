#include<iostream>
#include<vector>
using namespace std;

int right_occ(vector <int> arr,int k ){
    int s= 0;
    int e =arr.size();
    int mid  = (s+e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s=mid+1;
        }
        if(arr[mid]>k){
            e = mid -1;

        }
    if(arr[mid]<k)
    s=mid+1;

    mid = (s+e)/2;

    }
    return ans;
}

int left_occ(vector <int> arr,int k ){
    int s= 0;
    int e =arr.size();
    int mid  = (s+e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid -1;
        }
        if(arr[mid]>k){
            e = mid -1;

        }
    if(arr[mid]<k)
    s=mid+1;

    mid = (s+e)/2;

    }
    return ans;
}


int main(){
 vector <int> arr={1,2,2,3,3,4,8,9};
cout<<left_occ(arr,3);
cout<<right_occ(arr,3);
cout<< "num of 3s : "<<(right_occ(arr,3)-left_occ(arr,3));
    // cout<<arr.si();


}
