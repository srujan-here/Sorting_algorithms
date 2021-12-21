/*Find the minimum element in the unsorted array and  swap it with element at begining */

#include<bits/stdc++.h>
using namespace std;
void selection_sort(int m[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(m[j]<m[i]){
            int temp=m[j];
            m[j]=m[i];
            m[i]=temp;
        }
    }
}
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    selection_sort(b,a);
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}




/*
Therefore, the selection sort algorithm takes the time complexity of O(n2) and a space complexity of O(1) because it necessitates some extra memory space for temp variable for swapping.

*/