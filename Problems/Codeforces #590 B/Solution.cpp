#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(auto i=a;i<b;i++)
#define FORI(i,a,b) for(auto i=a;i<=b;i++)
#define RFOR(i,a,b) for(auto i=a;i>=b;i--)
#define FORV(i,a) for(auto i=a.begin();i!=a.end();++i)
#define FORSKIP(i,a,b,c) for(auto i=a;i<b;i+=c)
typedef long long LL;
#define VI vector<int>
#define PB push_back
#define VL vector<long>
#define VLL vector<long long>
#define VS vector<string>
#define VC vector<char>
#define VF vector<float>
#define MII map<int,int>
#define PI pair<int,int>
#define READ(n) int n; cin>>n
#define READARR(a,n) int a[n]; FOR(i,0,n) {cin>>a[i];}
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const LL m=1000000007;
const int ten5=1e5;
 
 
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #else
    #endif
    FAST;
    READ(n);
    READ(k);
    deque<int> s;
    set<int> a;
    FOR(i,0,n) {
        int temp;
        cin>>temp;
        if(a.find(temp)==a.end()) {
        //the set.find() function takes O(logn) time to execute which is much lower than STL count() function.
        a.insert(temp);
        s.push_front(temp);
        }
        if(s.size()>k) {
            int t=s.back();
        s.pop_back();
        a.erase(t);
        }
    }
    cout<<s.size()<<'\n';
    while(!s.empty()) {
        cout<<s.front()<<" ";
        s.pop_front();
    }
    return 0;
}
