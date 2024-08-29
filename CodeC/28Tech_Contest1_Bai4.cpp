/*
[Kiểu dữ liệu-if else]. Bài 4. Chu vi & diện tích hình tròn
Cho bán kính R của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó. Lấy PI = 3.14
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Đầu vào
1 dòng chứa bán kính R là số nguyên dương.

Ràng buộc
1 ≤R≤ 1000

Đầu ra
In ra chu vi và diện tích trên 1 dòng, kết quả lấy độ chính xác 4 số sau dấu phẩy.

Input 01
10

Output 01
62.8000 314.0000
*/

#include<stdio.h>
int main(){
	double PI = 3.14;
	int r;
	scanf("%d", &r);
	double chuVi = 2 * PI * r;
	double dienTich = PI * r * r;
	printf("%.4lf %.4lf", chuVi, dienTich);
	return 0;
}

#include<stdio.h>
int main(){
	int r;
	scanf("%d", &r);
	double chuVi = 2 * 3.14 * r;
	double dienTich = 3.14 * r * r;
	printf("%.4lf %.4lf", chuVi, dienTich);
	return 0;
}