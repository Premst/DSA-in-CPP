// Program for linear search in array

#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int list[size],item, flag=0, i;
    cout<<"Enter 5 array element : ";
    for(i=0; i<size; i++){
        cin>>list[i];
    }
    cout<<"Displaying array element : ";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    cout<<"\nEnter an item for search : ";
    cin>>item;
    for(i=0; i<size; i++){
        if(list[i]==item){
            flag=1; 
            break;
        }
    }
    if(flag==0)
    cout<<"Not Exist";
    else
    cout<<"Exit";
    return 0;
}