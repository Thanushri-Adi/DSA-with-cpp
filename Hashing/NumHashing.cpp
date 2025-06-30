#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int arrhash(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    //pre-computing
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }
   
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
         //fetching
        cout << hash[num]<< endl;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin >> num;
        cout << mp[num] << endl;
    }

    return 0;
}