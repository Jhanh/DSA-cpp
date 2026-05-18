#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::abs;

// Time complexity: O(r * r)
// Space complexity: O(1)

void diamond (int r){
    // Oy chạy từ r đến -r theo hướng từ trên xuống
    for (int y = r; y >= -r; y--){

        // Ox chạy từ trái qua phải
        for (int x = -r; x <= r; x++){
            if (abs(x) + abs(y) <= r){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << '\n';
    }
}

int main(){
    int R; cin >> R;
    diamond(R);

    return 0;
}
