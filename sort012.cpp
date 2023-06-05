#include<iostream>
#include<vector>
using namespace std;



#include <bits/stdc++.h> 


// 1,2,0,1,0,2,0,0,0,1

void sort012(int *arr, int n)
{
  int i= 0;
  int j=n-1;
   int k=0;
//   iteration 

while(k<=j && i<j){
//     for(int f =0 ;f<sizeof(arr)/4;f++){
//     cout<<arr[f]<<" , ";
// }
    cout<<endl<<"-----" <<endl;
    cout<<i<<" : "<<arr[i]<<endl;
    cout<<j<<" : "<<arr[j]<<endl;
    cout<<k<<" : "<<arr[k]<<endl;


    if(arr[j] == 2){
      j--;
      continue;
   }
   // if(arr[i] == 0){
   //    i++;
   //    continue;
   // }
   if(arr[k]==2){
      arr[k] =arr[j];
      arr[j] = 2;
      j--;
      // k++;
      continue;
   }
   

   if(k==i){
   k++;
   continue;
   }
   


   if(arr[k]==0){
      arr[k] =arr[i];
      arr[i] = 0;
      i++;
      // k++;
      continue;
   }
   if(arr[k] == 1){
      k++;
   continue;
   }

//    if(arr[i]==0){
//       i++;
//    }
//    if(arr[j]==1){
//       j--;
//    }
//       if(arr[k]==2){
//          k--;
//       }
   
//    if(arr[i]==1 && (arr[j]==0)){
//          arr[j] = 1;
//          arr[i] = 0;
// }


     
//    // if(k==-1 && (arr[i]==2||arr[j]==2)){
//    //    k=n-1;
//    // }
//    // if(k!=-1){

//       if(arr[k]==1 && (arr[i]==2)&& (arr[j]==0)){
//          arr[k] = 2;
//          arr[j] = 1;
//          arr[i] = 0;
// }
//       if(arr[k]==0 && (arr[i]==2)){
//          arr[k] = 2;
//          arr[i] = 0;
// }
//       if(arr[k]==1 && (arr[j]==2)){
//          arr[k] = 2;
//          arr[j] = 1;
// }
            
            

   // }
}
//   return arr;

}


int main(){
// 1,2,0,1,0,2,0,0,0,1
 int arr[] = {0 ,1, 2, 1 ,2, 1, 2};
 sort012(arr,sizeof(arr)/4);
//  sort(arr,arr+sizeof(arr)/4);
 for(int i =0 ;i<sizeof(arr)/4;i++)
    cout<<arr[i]<<endl;
}
