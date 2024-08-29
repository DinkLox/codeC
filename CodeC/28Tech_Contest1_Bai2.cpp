/*
[Kiểu dữ liệu-if else]. Bài 1. Tính toán giá trị của biểu thức 2
Yêu cầu: Cho ba số nguyên a , b và c, hãy tính S = a(b+c)+b(a+c).
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên

Đầu vào
3 số a, b, c trên 1 dòng.

Ràng buộc
-10^8 ≤ a,b,c ≤ 10^8

Đầu ra
In ra giá trị của biểu thức.

Input 01 
1 2 3

Output 01
13
*/

#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//a, b, c có giới hạn là 10^8 nên khả năng khi nhân bị tràn số 
	//vì vậy sử dụng kiểu dữ liệu long long để lưu giá trị và có thể ép kiểu hoặc nhân với long long ở biểu thức
	long long res = 1ll * a * (b + c) + 1ll * b * (a + c);
	printf("%lld", res);
	return 0;
}
