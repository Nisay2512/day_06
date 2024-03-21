#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> odd;
    ll sum = 0;

    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if (x % 2 == 0){
            sum += x;
        }
        else{
            odd.push_back(x);
        }
    }
    sort(odd.begin(), odd.end(), greater<int>());

    int sz = odd.size();

    if (sz % 2 == 0){
        for(auto y:odd){
            sum += y;
        }
    }
    else{
        odd.pop_back();
        for(auto y:odd){
            sum += y;
        }
    }

    cout << sum << endl;
    return 0;
}
