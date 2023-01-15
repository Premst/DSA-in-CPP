#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
};
int main()
{
    node *temp;
    node *start = NULL;
    node *ptr = NULL;
    int data;
    char ch;
    cout<<"Do you want to insert data (y/n) : ";
    cin>>ch;
    while(ch=='Y' || ch=='y'){
        ptr = new node;
        cout<<"Enter a data : ";
        cin>>data;
        ptr -> info = data;
        ptr -> next = NULL;
        if(start == NULL){
            start = ptr;
        }
        else{
            ptr -> next = start;
            start = ptr;
        }
        cout<<"\n Do you want to insert / push more node (y/n) : ";
        cin>>ch;
    }
    cout<<"\nDisplaying elements \n";
    temp = start;
    while(temp -> next != NULL){
        cout<<temp -> info<<"\t";
        temp = temp -> next;
    }
    return 0;
}