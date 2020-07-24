#include<iostream>
using namespace std;

int main(){
    int number, digit;
    cin>>number;
    cin>>digit;
    int arr[9], i=0, count = 0;
    while(number>0){
        int rem = number % 10;
        number /= 10;
        arr[i] = rem;
        if(digit == arr[i]){
            count ++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}