#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

// Time complexity: O(N + q)
// Space complexity: O(N)

void prefixSum (vector<long long> &v){
    for (int i = 1; i < (int)v.size(); i++){
        v[i] += v[i-1];
    }
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    prefixSum(v);
    
    int q; cin >> q;
    while(q--){
        int left, right;
        cin >> left >> right;
        if (left == 0){
            cout << v[right] << '\n';
        }
        else{
            cout << v[right] - v[left - 1] << '\n';
        }
    }

    return 0;
}
