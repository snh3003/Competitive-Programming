//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    string str[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(i=a;i<=b;i++)
        cout<<((i<=9)?str[i]:((i%2==0)?"even":"odd"))<<endl;
}