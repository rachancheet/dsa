#include<iostream>
using namespace std;

int main(){
    
    int *adress  = (int *) malloc(6*4);
    int arr[] = {1,2,34,5,6,89};
    int arr2[] = {1,2,3,12,21,32,21,321,3,23,21,21};
    // for(int i=0;i<6;i++){
    //     *(adress+i) = arr[i];
    //     }
    // for(int i=0;i<12;i++){
    //     cout<<*(adress+i)<<" , ";
    // }
    adress = (int *)realloc(adress,12*4);
    
    for(int i=0;i<12;i++){
        *(adress+i) = arr2[i];
        }
    
    for(int i=0;i<12;i++){

        cout<<*(adress+i)<<" , ";
        }
    

}
