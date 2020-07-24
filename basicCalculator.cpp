#include<iostream>
using namespace std;

int main(){
    char ch;
    bool x1 = true;
    while(x1){
        int n1,n2;
        cin>>ch;
        switch(ch){
            case '+':
                
                cin>>n1>>n2;
                cout<<n1+n2<<endl;
                continue;
            case '-':
                
                cin>>n1>>n2;
                cout<<n1-n2<<endl;
                continue;
            case '/':
                
                cin>>n1>>n2;
                cout<<n1/n2<<endl;
                continue;
            case '*':
                
                cin>>n1>>n2;
                cout<<n1*n2<<endl;
                continue;
            case 'X':
                x1=false;
                break;
            case 'x':
                x1=false;
                break;
            default:
                cout<<"Invalid operation. Try again."<<endl;
                continue;
        }
    }
    return 0;
}