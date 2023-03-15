#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void swap_my(T num1,T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}


template <typename T>
void p_swap(T* pnum1, T* pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}


template <typename T>
void print_arr(T arr, int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\b\b]\n';
}
template <typename T>
void fill_arr(T arr, int length, int left, int rigth) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (rigth - left) + left;
}


int main() {
	setlocale(LC_ALL, "Ru");
	int n, m;

	//��������� �� ����������
	
	n = 10; m = 20;
	std::cout << " n = " << n << std::endl;
	std::cout << " &n = " << &n << std::endl; // & - ��������� ������ �������;
	
	int* pn = &n; // ��������� ����������� ��������, ������������� �� ���������� n 
	std::cout << " pn = " << pn << std::endl; // ����� ������ ����������� � ��������� 

	std::cout << " *pn = " << *pn << std::endl; // ����� n ����� ������������� pn
	*pn = 15;
	std::cout << " ����� n = " << n << std::endl;

	pn = &m; // ��������������� ��������� �� ����� ���������� m 
	std::cout << " m = " << m << std::endl;
	std::cout << " &m = " << &m << std::endl;
	std::cout << " pn = " << pn << std::endl;
	std::cout << " *pn = " << *pn << std::endl;
	int* pm = &m;
	std::cout << " pm = " << pm << std::endl;
	

	// ��������� � ������� 
	const int size = 5;
	int arr[size]{ 10 , 9, 50, 30, 14 };
	int* pa2 = &arr[2];
	std::cout << " *pa2 = " << *pa2 << std::endl;
	pa2++;
	std::cout << " *pa2 = " << *pa2 << std::endl;
	pa2 -= 2;
	std::cout << " *pa2 = " << *pa2 << std::endl;

	pa2 = &arr[0];
	std::cout << " ������\n";
	for (int i = 0; i < size; i++)
		std::cout << *(pa2 + i) << ' ';
	std::cout << std::endl;

	std::cout << " arr = " << arr << std::endl;
	std::cout << " arr + 1 = " << (arr + 1) << std::endl;
	//arr++; // ������!!! 
	
	// ��������� � �������
	n = 7; m = 15;
	std::cout << n << ' ' << m << std::endl;
	//swap_my(n, m); // �� �������� ��� ��� ��������� ��� �����
	p_swap(&n, &m);
	std::cout << n << ' ' << m << std::endl;

	










	return 0;
}