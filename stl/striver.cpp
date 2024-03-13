#include<bits/stdc++.h>//it includes all the libraries you dont have to include any other 
//header file

using namespace std;

int main(){
     // //pairs
    // // pair<int,int>s = {2,3};
   // // cout<<s.first<<" "<<s.second<<endl;
    // // //hybrid pairn
   // // pair<int,pair <int,int>> b = {1,{3,4}};
  // // cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;
 // // array pair
// // pair <int,int> arr[]={{1,2},{1,3},{5,6}};




// vectors in C++
    vector<int> v;
    v.push_back(3);
    v.emplace_back(21);
    v.emplace_back(41);
    v.emplace_back(11);
    //both pushback and emplace back works same
    // BUT IMPLACE BACK IS FASTER
    // for(int i:v){
    //     cout<<i<<" ";
    // }

    vector<int>a(3);
    // here 3 is size and 100 is assigned to all

    // for(int i:a){
    //     cout<<i<<" ";
    // }

    // PAIR IN VECTOR
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,5);
    
    // iterator
    // vector<int>::iterator it = v.begin();
    // it = it + 2;
    // cout<<*(it);


//  loop by iterator
// for(vector<int>::iterator it= v.begin(); it != v.end(); it++){
//     cout<<*(it)<<" ";
// }
// BOTH WORKS THE SAME ITS JUST THE SYNTAX
for(auto it = v.begin(); it != v.end(); it++){
     cout<<*(it)<<" ";
}
}