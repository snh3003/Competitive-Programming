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
    int row,index,b,c;
    for(int a=0;a<n;a++)
    {    
        for(c=0;c<q;c++){
            for(b=0;b<q;b++){
                cin>>row>>index;
            }
            cout<<arr[row][index]<<endl;
        }
    }
    return 0;
}