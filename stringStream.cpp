// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?h_r=next-challenge&h_v=zen
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    int temp;
    char ch;
    stringstream ss(str);
    vector<int> result;
    while(ss>>temp){ //extracts number from str 
        result.push_back(temp); // add temp to the result vector
        ss>>ch; // extracts , from the str
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}