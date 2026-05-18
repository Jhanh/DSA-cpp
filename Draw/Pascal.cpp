#include <iostream>
using std::cin;
using std::cout;

/*
Nếu chỉ dùng công thức nguyên thủy:
C(n, k) = n! / (k! * (n-k)!)
khi gặp số quá lớn sẽ khiến code không thể chạy nổi

Còn nếu ta dùng công thức dựa vào tam giác Pascal (n <= 1000):
C(n, k) = C(n-1, k-1) + C(n-1, k)
thì tốn O(N*N) không gian lưu trữ

Ta chỉ đơn giản dựa vào phần tử trước nó trên cùng hàng:
Bằng cách chia phần tử tiếp theo cho phần tử hiện tại:
C(k+1, n) / C(k, n) = (n - k) / (k + 1)
*/
// Time complexity: O(N*N)
// Space complexity: O(1)

void pascalPyramid (int row){
    for (int n = 0; n < row; n++){
        for (int space = 0; space < row-n-1; space++){
            cout << ' ';
        }

        long long val = 1;
        for (int k = 0; k <= n; k++){
            cout << val << ' ';
            val = val * (n - k) / (k + 1);
        }

        cout << '\n';
    }
}

int main(){
    int n; cin >> n;
    pascalPyramid(n);

    return 0;
}
