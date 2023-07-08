#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int val;
    node *next;
    node(int v){
        val = v;
        next=NULL;
    }

};
void add_node(node * head,int val){
    node *n = new node(val);

    while(head->next!=NULL){
        head = head->next;
    }
    head->next = n;
}

int print_node(node * head,int n){
    int i=0;
    cout<<"----"<<endl;
    while(i!=n && head->next!=NULL){
        head = head->next;
        cout<<head->val<<endl;
        i++;
    }
    return head->val;
}
void delete_node(node * head,int n ){
    int i=0;
    while(i!=n-1 && head->next!=NULL){
        head = head->next;
        // cout<<head->val<<endl;
        i++;
    }
    head->next = head->next->next;
}

int main(){
    node * head = new node(0);
    add_node(head,1);
    add_node(head,2);
    add_node(head,3);
    add_node(head,4);
    add_node(head,5);
    add_node(head,6);
    add_node(head,7);
    add_node(head,8);

    cout<<print_node(head,8)<<endl;
    delete_node(head,3);
    cout<<print_node(head,8);
    
}
