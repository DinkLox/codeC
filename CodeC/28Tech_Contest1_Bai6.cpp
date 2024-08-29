/*
Kiểu dữ liệu-if else]. Bài 6. Luyện tập viết câu điều kiện
Cho một số nguyên không âm N. Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :
1. N có phải là số chẵn? (Kiểm tra số dư của n với 2 xem có bằng 0 hay không)
2. N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? // Kết hợp 2 điều kiện chia hết bằng toán tử AND
3. N có phải là số chia hết 3 nhưng không chia hết cho 7? // Kết hợp 2 điều kiện bằng toán tử AND
4. N có phải là số chia hết cho 3 hoặc 7? // Dùng toán tử OR
5. N là số lớn hơn 30 và nhỏ hơn 50? // Dùng toán tử AND
6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? // if(n >= 30 &&())
7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? // Kiểm tra n nằm trong đoạn [10, 99], kiểm tra chữ số hàng đơn vị là 2, 3, 5 hoặc 7
8. N có phải là số không vượt quá 100 và chia hết cho 23?
9. N không thuộc đoạn [10, 20]?
10. N có chữ số tận cùng là bội số của 3?

Đầu vào
Số nguyên dương N

Ràng buộc
1<= N <=10^6

Đầu ra
In ra 10 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 10 điều kiện. 
Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.

Input 01
263

Output 01
NO
NO
NO
NO
NO
NO
NO
NO
YES
YES

Input 02
36

Output 02
YES
NO
YES
YES
YES
YES
NO
NO
YES
YES
*/

#include<stdio.h>
#include<math.h>
int main(){
	int a = 100;

	printf("%d", a++);
	printf("%d", ++a);
	return 0;
}