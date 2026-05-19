#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

// Time complexity: O(N + M)
// Space complexity: O(N + M)

int main(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];

    int i = 0, j = 0; // i trỏ vào mảng a còn j trỏ vào mảng b
    vector<int> v;
    while (i < n && j < m){
        if (a[i] <= b[j]){
            v.push_back(a[i]);
            ++i;
        }
        else{
            v.push_back(b[j]);
            ++j;
        }
    }
    while (i < n){
        v.push_back(a[i]);
        ++i;
    }
    while (j < m){
        v.push_back(b[j]);
        ++j;
    }

    for (int x : v)  cout << x << ' ';

    return 0;
}
