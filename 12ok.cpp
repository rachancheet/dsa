 int binary_search(vector<int>& arr,int s ,int e,int k ) {

        int mid;
        while(s<=e){
            mid = s+ (e-s)/2;
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid]>k){
            e = mid-1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
        }
        return -1;
 }



int pivot(vector <int>arr){
    int s =0 ;
    int e= arr.size()-1;
    // cout<<e;
    int mid;
    while (s <e) {
      mid = (e + s)/2;
    //   cout<<mid<<endl;
    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
        return (mid);
    }
    else if(arr[mid]>arr[0]){
        s = mid+1;

    }

    else if (arr[mid]<arr[0]) {
      e = mid;
    }

    }
    return 0;

}
// int loc(vector <int> arr,int k,int pivot){




// }



int search(vector<int>& arr, int n, int k)
{

    int pi = pivot(arr);
    // pi = pi?pi:(n-1);
    if(!pi){
        // pi = n-1;
                return binary_search(arr,0,n-1,k);
    }
    // cout<<"loda"<<pi<<endl;
    int ans=-1;
    if(arr[0]<k<arr[pi]){
        ans = binary_search(arr,0,pi,k);
    }
    if(arr[pi+1]<k<arr[n-1]){
        ans = binary_search(arr,pi+1,n-1,k);
    }
    return ans;
    // Write your code here.
    // Return the position of K in ARR else return -1.
}

#####approch 2

 int binary_search(vector<int> arr,int n ,int k ) {
        int s =0;
        int e = n- 1;
        int mid;
        int cond  ;
        while(s<=e){
            mid = s+ (e-s)/2;
            if(arr[mid] == k){
                return mid;
            }
            if(arr[0]<k){
                if(arr[mid]<arr[0]){
                    e = mid;
                }else{
                    if(arr[mid]<k)
                        s=mid+1;
                    else
                        e=mid;
                }
            }
            else{
                if(arr[mid]>arr[0]){
                    s = mid+1;
                }else{
                    if(arr[mid]<k)
                        s=mid+1;
                    else
                        e=mid;
                }
            }
        }
        return -1;
 }


int search(vector<int>& arr, int n, int k)
{

    // int pi = pivot(arr);
    // // pi = pi?pi:(n-1);
    // if(!pi){
    //     // pi = n-1;
    //             return binary_search(arr,0,n-1,k);
    // }
    // // cout<<"loda"<<pi<<endl;
    // int ans=-1;
    // if(arr[0]<k<arr[pi]){
    //     ans = binary_search(arr,0,pi,k);
    // }
    // if(arr[pi+1]<k<arr[n-1]){
    //     ans = binary_search(arr,pi+1,n-1,k);
    // }
    return binary_search(arr,n,k);
    // Write your code here.
    // Return the position of K in ARR else return -1.
}
