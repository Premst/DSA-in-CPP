
// Program for binary search in array

#include<iostream>
using namespace std;
int main()
{
    const int size = 5;
    int list[size], beg, last, mid, item, i, flag=0;
    cout<<"Enter 5 array element : ";
    for(i=0; i<size; i++){
        cin>>list[i];
    }
    cout<<"Displaying array element : ";
    for(i=0; i<size; i++){
        cout<<list[i]<<"\t";
    }
    cout<<"\nEnter an item for serach : ";
    cin>>item;
    beg=0, last=(size-1);
    while(beg<=last){
        mid=(beg+last)/2;
        if(list[mid]==item){
            flag=1; 
            break;
        }
        if(list[mid]<item){
            beg = mid+1;
        }
        else{
            last = mid-1;
        }
    }
    if(flag==0){
        cout<<"Not exist";
    }
    else{
        cout<<"exist";
    }
    return 0;
}
