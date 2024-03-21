#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ar[n+1];
    memset(ar, 0, sizeof(ar));

    for (int i = 1; i < n+1; i++){
        int x;
        cin >> x;

        ar[x] = 1;
    }
    for (int i = 1; i < n+1; i++){
        if(ar[i]==0){
            cout << i << endl;
            break;
        }
    }

        return 0;
}