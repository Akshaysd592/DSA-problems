#include <bits/stdc++.h>
using namespace std;
vector<int> reverse_array(vector<int> s){
    int start= 0;
    int end = s.size()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}

void show_data(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector <int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector <int> ans = reverse_array(v);
    show_data(ans);
    return 0;
}