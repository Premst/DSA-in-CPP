
// Program for selection sort

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
    cout<<"\nDisplaying 5 array element before sorting : \n";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(list[i]>list[j]){
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }
    cout<<"\nDisplaying array element after sorting : \n";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }

    return 0;
}