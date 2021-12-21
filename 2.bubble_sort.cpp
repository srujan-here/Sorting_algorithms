/*Repetedly swap two elements if they are in wrong order*/

#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int b[],int n){
int cont=1;
while(cont<n){
    for(int i=0;i<n-cont;i++){
        if(b[i]>b[i+1]){
            int temp=b[i];
            b[i]=b[i+1];
            b[i+1]=temp;
        }
    }
    cont++;

}
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    bubble_sort(b,a);
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }cout<<endl;
}


/*
Time complexity:O(n^2)
Space Complexity:O(1)


*/