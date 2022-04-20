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
    
    for (int i = 0; i < input; i++) {
        string key;
        
        cin >> key;
        
        if (phoneBook.find(key) != phoneBook.end()) {
            cout << key << "=" << phoneBook[key] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    
    
    return 0;
}
