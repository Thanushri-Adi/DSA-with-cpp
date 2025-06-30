#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void pairs() {
    pair <int, int> p = {1,2};
    cout << p.first << endl;
    pair <int, pair<int,float>> x = {3, {5 , 6.7}};
    cout << x.second.first << endl;
    pair <float, float> arr[] = {{3.4,6.7}, {4.7,7.9}, {2,2.7}};
    cout << arr[2].first << endl;
} 

int vectors() {
    //creation
   vector <int> v(5,8); // {8,8,8,8,8}
   v.push_back(9); // insert from the back
   v.emplace_back(6); // same process, bit faster
   vector <int> v1(v); // duplicate of v

   //iteration
   cout << v[6]; // method 1 to access elements
   //method 2 (iterator)
   vector <int> :: iterator i = v.begin();
   i++;
   cout << *(i);
   //complete vector
   for (auto i = v.begin(); i != v.end();i++) {
    cout << *(i) << ' ';
   }
   //deletion (erase function)
   v.erase(v.begin()+2); // removes 3rd element
   v.erase(v.begin()+2,v.begin()+5); // removes 3rd, 4th and 5th elements
    // v = {8 ,8 ,6} 

   //insertion
   vector <int> v2(3,40); // {40,40,40}
   v2.insert(v2.begin(),20); //{20,40,40,40}
   v2.insert(v2.begin(),2,50); // {50,50,20,40,40,40}
   cout << v.size();
   cout << v2.size();
   v.pop_back();  // v = {8,8}
   v.swap(v2);
   v.clear();
   cout << v2.empty(); // 0 or 1 = true or false  (now true)

   return 0;
}
