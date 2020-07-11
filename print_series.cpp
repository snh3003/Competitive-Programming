#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int prd = 1;
    for(int n=1;n<=n1;n++){
        int term = 3*n+2;
        if(term%n2==0){
            n1++;
            continue;            
        } 
        else{
            cout<<term<<"\n";            
        } 
    }
    return 0;
}