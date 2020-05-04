// HackerRank https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include<iostream>
using namespace std;
int main(){
    int n;
    string a[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    //Ternary operator is used instead of traditional if-else statement as it minizes both our codes nd effort
    cout<<((n>9) ? a[0]:a[n]); // (statement) ? (Implements this if True) : (Implements this otherwise)
    return 0;
}
