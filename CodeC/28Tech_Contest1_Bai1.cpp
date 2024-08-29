/*
[Kiểu dữ liệu-if else]. Bài 1. Tính toán giá trị của biểu thức
Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Đầu vào
Số nguyên x

Ràng buộc
-10^5 ≤x ≤10^5

Đầu ra
In ra kết quả cùa biểu thức

Input 01 
2

Output 01
23
*/

#include<stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	//x có giới hạn là 10^5 nên khả năng khi nhân bị tràn số 
	//vì vậy sử dụng kiểu dữ liệu long long để lưu giá trị và có thể ép kiểu hoặc nhân với long long ở biểu thức
	long long res = 1ll * x * x * x + 3ll * x * x + x + 1;
	printf("%lld", res);
	return 0;
}