class Solution {
    public:
    


    int unique(int *arr3,int *arr4,int size){


        int *okarr = (int *)calloc(1001,4);
    
        for(int i =0 ;i<1001;i++){
            cout<<i<<endl;
                cout<<i;
                *(okarr+arr3[i]) +=1;
                *(okarr+arr4[i]) +=1;
            }
        for(int i = 1 ;i<50;i++){
                cout<<(*(okarr + i))<<endl;
            }
            cout<<endl;


        cout<<"loda";
        int ans = 0;
        for(int i =1;i<1001;i++){
            cout<< *(okarr+i)<<endl;
            if(*(okarr+i)>1){
                free(okarr);
                return false;
            }
        }
        free(okarr);
        return true;
    }

    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        cout<<n<<endl;
        int *parr = (int *)calloc(1001,4);
        int *narr = (int *)calloc(1001,4);


            

            for(auto i:arr){
            cout<<i<<endl;
                cout<<i;
                if(i<0){
                *(narr-i) +=1;
                cout<<*(narr-i)<<endl;
                }
                else{
                *(parr+ i) +=1;
                cout<<*(parr+i)<<endl;
                }
            }
            for(int i =0;i<1001;i++){
                if(*(parr+i) > 0)
                    cout<<i<<" : "<<(*(parr+i))<<endl;
            }
            
        for(int i =0;i<1001;i++){
                if(*(narr+i) > 0)
                    cout<<"-"<<i<<" : "<<(*(narr+i))<<endl;
            }

            if(unique(parr,narr,1001)){
            // cout<<"loda";
                free(narr);
                free(parr);
                return true;
            }
            free(narr);
            free(parr);
            return false;
        
    }

    
};