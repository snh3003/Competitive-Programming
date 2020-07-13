#include<iostream>
using namespace std;

void printABCD(int n){
    for(int i=1;i<=n;i++){
        int cntAlphabet = n-i+1;
        char alphabet='A';
        for(int j=1;j<=cntAlphabet;j++){
            cout<<alphabet;
            alphabet+=1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printABCD(n);
    return 0;
}