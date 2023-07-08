#include<iostream>
#include<stdlib.h>
using namespace std;


class dynamic_array{
    public:
    int *adress;
    int buffer;
    int size;//endindex
    dynamic_array(int arr[], int size_){
        //  setting buffer as n;
        // cout<<arr[2];
        // cout<<size<<endl;
        size = size_;
        buffer = 2*(size);
        adress  = (int *)malloc(buffer*4);
        for(int i =0;i<size;i++){
            *(adress+i) = arr[i];
        }


        cout<<endl<<adress<<endl;
       }
    void show_all(){
        cout<<endl<<adress<<endl;
        for(int i=0;i<size;i++){
        cout<<(*(adress+i)); 
        cout<<" , ";
        }
    }
    
    void show_at(int at){
        cout<<*(adress+at); 
    }

    void get_at(int n){
        cout<<*(adress + n);
    }
    void insert_at_end(int num){
        if(buffer<=size){
            buffer = (size)*2;
            cout<<"loda";
            int *newadress = (int *)realloc(adress,buffer*4);
            adress = newadress;
            cout<<"wuigdiuwd : : "<<adress<<"   :"<<buffer<<endl<<size<<endl;
            if(adress == NULL){
                cout<<"fuck duck";
                return;
            }
            show_all();
            *(adress+size) = num;
            size++;

        }
        else{
            *(adress+size) = num;
            size++;
        }
    }
    void swap(int num,int at){
            *(adress+at) = num;
    }
    void shifting(int at ){
        if(at >= size){
            return;
        }
        for(int i=size;i>at;i--){
            *(adress+i) = *(adress+i-1);
        }
     
        
    }
    void insert_at(int num ,int at){
        if(buffer - (size - num)>0){
            adress = (int *)realloc(adress,size*2);
            if(adress == NULL){
                cout<<"fuck duck";
                return;
            }
            *(adress+size) = num;
            size *= 2;
        }else{[=]
            *(adress+at) = num;
            shifting(at);
        }
    }


};



int main(){
    int arr[] = {1,2,4,5,67};
    int size = sizeof(arr)/4;

    dynamic_array myarr(arr,size);
    myarr.insert_at_end(45);
    myarr.insert_at(45,2);


    cout<<endl<<"---------"<<myarr.size<<","<<myarr.buffer;
    myarr.show_all();
    free(myarr.adress);
    
}