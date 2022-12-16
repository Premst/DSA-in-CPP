
// Program for bubble sort 

#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int list[size], i, j, temp;
    cout<<"Enter 5 array element : ";
    for(i=0; i<size; i++){
        cin>>list[i];
    }
    cout<<"\nDisplaying array element before sorting : \n";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    for(i=0; i<size; i++){
        for(j=0; j<(size-1); j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    cout<<"\nDisplay array element after arranging : \n";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    return 0;
}