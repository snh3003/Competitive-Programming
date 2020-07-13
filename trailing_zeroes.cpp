#include<iostream>
using namespace std;

int countZeroes(int n){
    int count = 0, fact=1;
    for(int d=5;(n/d) >=1;d*=5){
        count+=n/d;
    }
    return count;
}
int main(){
    long long int n;
    cin>>n;
    cout<<countZeroes(n)<<endl;
    return 0;
}