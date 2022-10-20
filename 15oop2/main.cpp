#include <iostream>
#include "List.h"
int main()
{
	setlocale(LC_ALL, "Rus");
    List l;
	int k=0,a=0;
	std::cout << "Введите кол-во элементов: "; std::cin >> k;
	if (k > 0)
	{
		std::cout << "Заполните список: \n";
		std::cin >> a;
		l.initList(a);
		for (int i = 0; i < k - 1; ++i) {
			l.print();
			std::cin >> a;
			l.add(a);
		}
	}
	else { std::cout << "Неправильно введено количество элементов, производится завершение программы\n"; return 0; }
	//std::cout<<"Оригинальный список: "; 
	l.print();
	return 0;
}