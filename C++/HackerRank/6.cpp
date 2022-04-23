#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int input;
    cin >> input;
    
    vector<string> arr(input);
    
    for (int i = 0; i < input; i++) {
        string temp;
        cin >> temp;
        arr[i] = temp;
    }
    
    for (int i = 0; i < input; i++) {
        string mainStr = arr[i];
        string temp1;
        string temp2;
     
        for (int j = 0; j < mainStr.length(); j++) {
            if (j % 2 == 1) {
                temp2 += mainStr.at(j);
            } else {
                temp1 += mainStr.at(j);
            }
        }
             
        cout << temp1 << " " << temp2 << endl;
    }
    
    return 0;
}
