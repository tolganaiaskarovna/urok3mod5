#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

#define sizeArr 20
void main()
{
	setlocale(LC_ALL, "Rus");
	int nz = 0;
	cout << "������� ����� �������";
	cin >> nz;
	if (nz == 2)
	{
		//2.	������ ������������� ������, ��������� �� 17-�� ���������
		//(���������� ����� �����). ��������� ����� ���� ����� �������

		srand(time(NULL));
		int a[17]; int summ = 0;
		for (int i = 0; i < 17; i++) {
		a[i] = 1 + rand() % 99;


		summ = summ + a[i];
		}

		cout << "���� ���� ����� ������� -" << summ << endl;

	}
	else if (nz == 3) {
		//3.	������ ��� ������� X � Y, ��������� �� 10 - �� ��������� 
		//������ ����.������������ ������ S, ��������� �� ���������� ��������� �������� ��������

		srand(time(NULL));
		int X[10], Y[10], S[10] = { 0 };
		for (int i = 0; i < 10; i++)
		{
			X[i] = 1 + rand() % 4;
			Y[i] = 1 + rand() % 4;
			cout << X[i] << " - " << Y[i] << endl;
			for (int i = 0; i < 10; i++)
			{
				if (X[i] == Y[i])
				{
					S[i] = X[i];
				}

			}



		}
	}
	else if (nz == 4) {
		//4.	��� ������ ������������ ����� Z(16) .
		//���������� �������� ����� ������ ��������� c ������� ��������� � ������ ���������, ������� ������� ������ ����
		srand(time(NULL));
		float Z[16];
		float summchet = 0;

		float summkrat3 = 0;
		for (int i = 0; i < 16; i++) {
			Z[i] = 1 + rand() % 99;
			cout << Z[i] << " - "  << endl;
		}
		
		for (int i = 0; i < 16; i++)
		{
			if (i % 2 == 0) 
				summchet = summchet + Z[i];
			if (i%3==0)
				summkrat3 = summkrat3 + Z[i];
			cout << Z[i] << " - " << endl;

		}
		cout << "summchet=" << summchet << endl;
		cout << "summkrat3=" << summkrat3 << endl;
	}
	else if (nz == 5) {

		//5.	������ ������, ��������� �� 12 ��������� ��������������� ����. 
		//����������� �������� � ������� ��������.
		//���������� ����������  ����������� ��� ���� ������������.

		srand(time(NULL));
		int mas[12];
		int max; int temp;
		for (int i = 0; i < 12; i++)
		{

			mas[i] = 1 + rand() % 10;

			cout << mas[i]  << endl;
		}
		cout << "______" << endl;
		for (int i = 0; i < 11; i++)
		{
			max = i;
			for (int j = i + 1; j < 12; j++)
			{
				if (mas[j] > mas[max])
					max = j;
			}
			temp = mas[i];
			mas[i] = mas[max];
			mas[max] = temp;
		}
		for (int i = 0; i < 12; i++)
		cout << mas[i]  << endl;
	}
	else if (nz == 6) 
	{

		//6.	������ � ���������� ������������� ������, ��������� �� 11 ���������.
		//	��������� ����� �������� �� �������� ������������� ��������� � �������� �������� ������� ���� �� ��� �����.

		srand(time(NULL));
		int mas[11];
		int summa=0; 
		for (int i = 0; i < 11; i++)
		{

			mas[i] = -99 + rand() % 99;

			cout << mas[i] << endl;
		}
		cout << "______" << endl;
		for (int i = 0; i < 11; i++)
		{
			if (mas[i] % 2 != 0 && mas[i] < 0)
				summa += mas[i];
			cout << mas[i] << endl;
		}
		for (int i = 0; i < 11; i++)
		{
			if (mas[i] % 3 == 0 )
				mas[i]= summa;
		}
		cout << "  " << summa << endl;
	}

}