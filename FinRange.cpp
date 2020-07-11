#include<iostream>
using namespace std;
int main(){
    int minF,maxF,interval;
    cin>>minF;
    cin>>maxF;
    cin>>interval;
    for(int i=minF;i<=maxF;i+=interval){
        int C = (5*(i-32))/9;
        cout<<i<<" "<<C<<endl;
    }
    return 0;
}