#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int input = 0;
    cin >> input;
    
    map<string, int> phoneBook;
    
    for (int i = 0; i < input; i++) {
        string key;
        int value;
        
        cin >> key >> value;
        
        phoneBook.insert({key, value});
    }
    
    while(cin >> key) {
        if (phoneBook.find(key) != phoneBook.end()) {
            cout << name << "=" << phoneBook.find(name)=>second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    
    return 0;
}
