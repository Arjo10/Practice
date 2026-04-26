#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<char,int>a,pair<char,int>b){
        if(a.second!=b.second)
            return(a.second>b.second);
        return(a.first<b.first);
        }
class Solution {
public:
    string frequencySort(string s) {
        int freq[256]={0};
        for(char c:s){
            freq[c]++;
        }
        vector<pair<char,int>>v;
        for(int i=0;i<256;i++){
            if(freq[i]>0){
                v.push_back({char(i),freq[i]});
            }
        }
        sort(v.begin(),v.end(),cmp);
        string res;
        for(auto p:v)
            res.append(p.second,p.first);
        return res;
    }
};

int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin,s);
    Solution S;
    string s1=S.frequencySort(s);
    cout<<s1<<endl;
    return 0;
}
