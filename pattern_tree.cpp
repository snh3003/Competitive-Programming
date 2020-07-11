#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cout<<"Enter N: ";
    cin>>n;
    while(row<=n){
        int col=1;
        //odd rows
        if(row%2!=0){
            
            while(col<=row){
                cout<<1;
                col += 1;
            }
        } else{ //even rows
            cout<<1; //starting 1
            while(col<=row-2){ // print middle zeros
                cout<<0; 
                col += 1;
            }
            cout<<1;
        }
        
        cout<<endl; // move to next line after every iteration
        row += 1; // row increment
    }
    return 0;
}