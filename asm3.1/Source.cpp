#include <iostream>
using namespace std;


int main() {

	int a, result;
	cin >> a;

	_asm {
		mov eax, a
		mov ecx, 11

		loop1:
		imul eax, a
		loop loop1

		mov ebx, a
		mov ecx, 7

		loop2:

		imul ebx, a
		loop loop2

		add eax, a
		add eax, ebx
		mov result, eax
	}

	cout << result;

	return 0;
}