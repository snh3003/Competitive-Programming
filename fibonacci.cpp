#include<iostream>
using namespace std;

int fib(int n){
    int ans,a=0,b=1;
    for(int i=0;i<=n-1;i++){
        ans=a+b;
        a=b;
        b=ans;
    }

    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}