#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    int a=0; //ans for unique number;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        a=a^arr[i];
        //cout<<a<<endl;
    }
    cout<<"Unique num: "<<a;
    return 0;
}