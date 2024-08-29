/*
[Kiểu dữ liệu-if else]. Bài 4. Bài 5. Khoảng cách Euclid
Có nhiều khoảng cách giữa 2 điểm trong hệ tọa độ ví dụ như khoảng cách Manhattan, Euclid, Minkowski. 
Nhưng trong chương trình toán phổ thông các bạn sử dụng nhiều nhất là khoảng cách Euclid.
Vì vậy bạn hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Đầu vào
Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên

Ràng buộc
-10^6 ≤xi,yi ≤ 10^6

Đầu ra
In ra khoảng cách giữa 2 điểm, lấy độ chính xác 2 số sau dấu phẩy.
Input 01
1 4 4 8

Output 01
5.00
*/

#include<stdio.h>
#include<math.h>
int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    // double res = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.2lf\n", res);
    return 0;
}