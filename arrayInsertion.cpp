
// Program for insertion operaiton in array. 

#include<iostream>
using namespace std;
int main()
{
    const int size=5;
    int list[size], ele, pos, i;
    cout<<"Enter 5 array element : ";
    for(i=0; i<size; i++){
        cin>>list[i];
    }
    cout<<"Display array element before insertion : ";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    cout<<"\nEnter position for insertion : ";
    cin>>pos;
    cout<<"Enter element for insertion : ";
    cin>>ele;
    if(pos>size){
        cout<<"Not Possible";
    }
    else{
        for(i=(size-1); i>=pos; i--){
            list[i+1]=list[i];
        }
        list[pos]=ele;
    }
    if(pos<size){
    cout<<"Display array element before insertion : ";
        for(i=0; i<(size+1); i++){
            cout<<list[i]<<"\t";
        }
    }
    
    return 0;
}