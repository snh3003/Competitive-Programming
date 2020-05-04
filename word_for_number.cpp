#include<iostream>
using namespace std;
int main(){
    int n;
    string a[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    cout<<((n>9) ? a[0]:a[n]);
    return 0;
}