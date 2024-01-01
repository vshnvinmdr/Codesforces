#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char ch[3][3];
        unordered_map <char,int> mp;
        for(int i =0;i<3;i++){
            for(int j =0;j<3;j++){
                cin>>ch[i][j];
                mp[ch[i][j]]++;
            }
        }
        for(auto it:mp){
            if(it.second ==2){
                cout<<it.first<<endl;
            }
        }
    }
}
