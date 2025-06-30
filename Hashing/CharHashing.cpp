#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int lowercase() {
    string s;
    cin >> s;

//pre-computing
int hash[26] = {0};
for(int i=0; i<s.size();i++){
         hash[s[i] - 'a'] += 1;  
}
//fetching
 int q;
 cin >> q;
 while(q--){
    char ch;
    cin >> ch;
    cout << hash[ch - 'a'] << endl;

 }
    return 0;
}

int mix(){
    string s;
    cin >> s;

int hash[256] = {0};
for(char c : s ){
    hash[c] += 1;
}

int q;
cin >> q;
while(q--){
    char ch;
    cin >> ch;
    cout << hash[ch] << endl;
}

    return 0;
}

int main(){
    string s;
    cin >> s;

    map<char,int>mp;
    for(char c:s){
        mp[c] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << mp[ch] << endl;
    }

    return 0;
}