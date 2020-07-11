#include<iostream>
using namespace std;
int main(){
    int n,n1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>n1;
        int rem,even_sum=0,odd_sum=0;
        while(n1>0){
            rem = n1%10;
            if(rem%2==0) even_sum+=rem;
            else odd_sum+=rem;
            n1 = n1/10;
        }
        if(even_sum%4==0 || odd_sum%3==0){
            cout<<"Yes\n";
        }else cout<<"No\n";
    }    
    return 0;
}