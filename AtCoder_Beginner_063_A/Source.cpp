/*
��蕶
��̐��� A, B �����͂���܂��BA+B �̒l���o�͂��Ă��������B
�������AA+B �� 10 �ȏ�̏ꍇ�́A����� error �Əo�͂��Ă��������B
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