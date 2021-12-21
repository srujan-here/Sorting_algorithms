/*Insert an element form unsorted array to its correct position in sorted array*/

#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int b[],int n){
    for(int i=1;i<n;i++){
        int curr=b[i];
        int j=i-1;
        while(b[j]>curr && j>=0){
            b[j+1]=b[j];
            j--;
        }
b[j+1]=curr;
    }

}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    insertion_sort(b,a);
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}

/*
Time Complexity:O(n^2)
Space Complexity:O(1)
*/