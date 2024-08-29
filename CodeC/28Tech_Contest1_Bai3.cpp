/*
[Kiểu dữ liệu-if else]. Bài 3. Đổi nhiệt độ
Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32.
Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6
thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. In ra kết quả với 2 chữ số sau dấu phẩy thập phân

Đầu vào
Nhiệt độ ở độ C là một số nguyên không âm.

Ràng buộc
0 ≤ C ≤ 10^6

Đầu ra
Kết quả đổi từ độ C sang độ F

Input 01
24

Output 01
75.20
*/

#include<stdio.h>
int main(){
	int c;
	scanf("%d", &c);
	// double res = ((double)c * 9 / 5) + 32;
	double res = (1.0 * c * 9 / 5) + 32;
	printf("%.2lf", res);
	return 0;
}