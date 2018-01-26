/*
問題文
二つの整数 A, B が入力されます。A+B の値を出力してください。
ただし、A+B が 10 以上の場合は、代わりに error と出力してください。
*/

#include<iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	if (a + b < 10) {
		std::cout << a + b  << std::endl;
	}
	else {
		std::cout <<"error" << std::endl;
	}

	return 0;
}