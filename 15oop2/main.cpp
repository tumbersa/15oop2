#include <iostream>
#include "List.h"
int main()
{
	setlocale(LC_ALL, "Rus");
    List l1;
	int k=0,a=0;
	std::cout << "������� ���-�� ���������: "; std::cin >> k;
	if (k > 0)
	{
		std::cout << "��������� ������: \n";
		std::cin >> a;
		l1.initList(a);
		for (int i = 0; i < k - 1; ++i) {
			l1.print();
			std::cin >> a;
			l1.add(a);
		}
	}
	else { std::cout << "����������� ������� ���������� ���������, ������������ ���������� ���������\n"; return 0; }
	l1.print();
	//___________________________________________________
	std::cout << "�������� ������������ ����������� \n";
	List l2(l1);
	l2.print();
	//___________________________________________________
	std::cout << "�������� ������������ ������������ \n";
	l2.pop();
	l2.print();
	l2 = l1;
	l2.print();
	//�������� �� ����������������
	l1 = l1;
	//___________________________________________________
	std::cout << "�������� ��������� ����������� \n";
	std::cout << "������� ���-�� ���������: "; std::cin >> k;
	if (k > 0)
	{
		std::cout << "��������� ������: \n";
		for (int i = 0; i < k ; ++i) {
			l2.print();
			std::cin >> a;
			l2.add(a);
		}
	}
	std::cout << "l2 "; l2.print();
	std::cout << "l1 "; l1.print();
	List l3(l1+l2);
	std::cout << "l3 "; l3.print();
	//__________________________________________________
	std::cout << "�������� ��������� ����������� \n";
	List l4(l1 * l2);
	std::cout << "l4 "; l4.print();
	//__________________________________________________
	std::cout << "�������� ��������� �������� \n";
	List l5(l2/l1);
	std::cout << "l5 "; l5.print();
	//__________________________________________________
	std::cout << "�������� ��������� += \n";
	l4 += l5;
	std::cout << "l4+=l5 "; l4.print();
	//__________________________________________________
	std::cout << "�������� ��������� *= \n";
	l4 *= l5;
	std::cout << "l4*=l5 "; l4.print();
	//__________________________________________________
	std::cout << "�������� ��������� /= \n";
	l4 /= l5;
	std::cout << "l4/=l5 "; l4.print();
	//__________________________________________________
	std::cout << "�������� ��������� == \n";
	std::cout << "l5==l2 ";
	if (l5 == l2) std::cout<< 1<<std::endl; else std::cout << 0<<std::endl;
	//__________________________________________________
	std::cout << "�������� ��������� != \n";
	std::cout << "l5!=l1 ";
	if (l5 != l1) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	//___________________________________________________
	std::cout << "�������� ��������� > \n";
	std::cout << "l2>l1 ";
	if (l2 > l1) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	//___________________________________________________
	std::cout << "�������� ��������� < \n";
	std::cout << "l1<l2 ";
	if (l1 < l2) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	//___________________________________________________
	std::cout << "�������� ��������� <= \n";
	std::cout << "l1<=l2 ";
	if (l1 <= l2) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	std::cout << "l1<=l1 ";
	if (l1 <= l1) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	//___________________________________________________
	std::cout << "�������� ��������� <= \n";
	std::cout << "l2>=l1 ";
	if (l2 >= l1) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	std::cout << "l1>=l1 ";
	if (l1 >= l1) std::cout << 1 << std::endl; else std::cout << 0 << std::endl;
	//___________________________________________________
	std::cout << "�������� ��������� << \n";
	std::cout <<"l2 " << l2;
	std::cout << "�������� ��������� >> \n";
	List l6;
	std::cin >> l6;
	std::cout << "l6 " << l6;
	return 0;
}