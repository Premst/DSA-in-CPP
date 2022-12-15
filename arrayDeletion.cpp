// Program for deletion operation in array

#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int list[size], i, pos;
    cout<<"Enter 5 array element : ";
    for(i=0; i<size; i++){
        cin>>list[i];
    }
    cout<<"\nDisplaying array element before deletion : ";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    cout<<"\nEnter position for deletion : ";
    cin>>pos;
    if(pos>size){
        cout<<"Not possible";
    }
    else {
        for(i=pos; i<(size-1); i++){
            list[i] = list[i+1];
        }
    }
    if(pos<size){
        cout<<"Displaying array element after deletion : ";
        for(i=0; i<(size-1); i++){
            cout<<list[i]<<"\t";
        }
    }
    return 0;
}