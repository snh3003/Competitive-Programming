//https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,k;
    cin>>n>>q;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        cin>>k;
        arr[i]= new int[k];
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    int row,index,b;
    int *arr2=new int[q];              
    for(b=0;b<q;b++){
        cin>>row>>index;
        arr2[b]=arr[row][index];
    }
    for(int a=0;a<q;a++){
        cout<<arr2[a]<<endl;
    }
    return 0;
}