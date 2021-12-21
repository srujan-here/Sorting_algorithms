#include<bits/stdc++.h>
using namespace std;
int partition(int b[],int l,int r){
    int pivot=b[r];
    int i=l-1;
    for(int j=i;j<r;j++){
        if(b[j]<pivot){
            i++;
            swap(b[i],b[j]);
            
        }
    }
    swap(b[i+1],b[r]);
    return i+1;
}
void quick_sort(int b[],int l,int r){
if(l<r){
    int pi=partition(b,l,r);
    quick_sort(b,l,pi-1);
    quick_sort(b,pi+1,r);
}
}
int main(){
    int b[5]={5,4,3,2,1};
    quick_sort(b,0,4);
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
cout<<endl;
}