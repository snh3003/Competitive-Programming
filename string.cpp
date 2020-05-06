// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    string c,d;
    c=a;
    d=b;
    c[0]=b[0];
    d[0]=a[0];
    cout<<c<<" "<<d;
  
    return 0;
}