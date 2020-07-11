#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, rem;
    cout<<"Enter binary number: ";
    
    int t;
    cout<<"Enter no of test cases:";
    cin>>t;
    for(int i=0;i<t;i++){
        int sum=0,p=0;
        cin>>n;
        while(n>0){
        rem = n%10; //takes the last digit as remainder
        n=n/10; //removes the last digit 
        sum+=pow(2,p)*rem;
        p++;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}