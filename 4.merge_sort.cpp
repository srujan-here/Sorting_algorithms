#include<bits/stdc++.h>
using namespace std;
void combine(int b[],int l,int mid,int r){
    int a1=mid-l+1;
    int a2=r-mid;
    int a[a1];
    int n[a2];
    for(int i=0;i<a1;i++){
        a[i]=b[l+i];

    }
    for(int i=0;i<a2;i++){
        n[i]=b[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<a1&&j<a2){
        if(a[i]<n[j]){
            b[k]=a[i];
            k++;
            i++;
        }
        else{
            b[k]=n[j];
            k++;
            j++;
        }

    }
while(i<a1){
        b[k]=a[i];
        k++;
        i++;
    }
    while(j<a2){
        b[k]=n[j];
        k++;
        j++;
    }
}
void merge_sort(int b[],int l,int r ){
    if(l<r){
        int mid=(l+r)/2;
        merge_sort(b,l,mid);
        merge_sort(b,mid+1,r);

        combine(b,l,mid,r);

    }
}
int main(){
   int a;
   cin>>a;
   int b[a];
   for(int i=0;i<a;i++){
       cin>>b[i];
   }
    merge_sort(b,0,a-1);
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}


/*
T(n) = 2T(n/2) + θ(n)
Time Complexity:O(nlog(n))
Space Complexity:O(n)
*/