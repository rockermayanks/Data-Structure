#include<iostream>
using namespace std;
int searchNumber(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5};
    int k;
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=searchNumber(arr,n,k);
    if (res==-1){
        cout << "item not found";
    }else{
        cout<<"item found";
    }
    

}