#include <iostream>
#include <random>
using namespace std;

//1.
void zav1() {
    setlocale(0, "ukr");
    int a, b, c;
    int interval = 23;

    cout << "������ ��� ����� �����: ";
    cin >> a >> b >> c;
    cout << "�����, �� �������� ��������� [1," << interval << "]: ";

    if (a >= 1 && a <= interval) {
        cout << a << " ";
    }
    if (b >= 1 && b <= interval) {
        cout << b << " ";
    }
    if (c >= 1 && c <= interval) {
        cout << c << " ";
    }

    cout << endl;
}

int main()
{
    zav1();

    return 0;
}

//2.
//int main() {
//    setlocale(0, "ukr");
//    int a, b, c;
//    int min, max;
//    
//    cout << "������ ��� �����: ";
//    cin >> a >> b >> c;
//    
//    max = a;
//    if (b > max) {
//        max = b;
//    }
//    if (c > max) {
//        max = c;
//    }
//
//    cout << "���������: " << max << endl;
//
//    return 0;
//}

//3.
//int main()
//{
//	setlocale(0, "ukr");
//
//	int n;
//	double sum = 0;
//	double poto4 = 1;
//	cout << "Rozmir" << endl;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << poto4 << " ";
//		sum += poto4;
//		poto4 /= -2;
//	}
//
//	cout << sum << endl;
//}

//4.
//int main()
//{
//	setlocale(0, "ukr");
//
//	int a;
//
//	cout << "������ �����, �� �� ������ 2 " << endl;
//	cin >> a;
//
//	if (a < 2)
//	{
//		cout << "�������. ����� ������� ���� ����� 2" << endl;
//	}
//	
//	else
//	{
//		int i = 2;
//		while (a % i != 0)
//		{
//			i++;
//		}
//		cout << i << endl;
//	}
//}

//5.
//int main()
//{
//	setlocale(0, "ukr");
//	int a;
//	int b = 0;
//	int c = 1;
//
//	cout << "������ ����� ����������� " << endl;
//	cin >> a;
//
//	cout << b << " " << c << " ";
//
//	for (int i = 2; i < a; i++)
//	{
//		int d = b + c;
//		cout << d << " ";
//		b = c;
//		c = d;
//	}
//}

//6.
//int main()
//{
//	random_device rd;
//	mt19937 gen(rd());
//	uniform_int_distribution<int>dist(0, 20);
//
//	setlocale(0, "ukr");
//	int a;
//	int b = 0;
//	int rand = dist(gen);
//	
//
//	do
//	{
//		cout << "������ ��� ����� ";
//		cin >> a;
//		if (a > 20 || a < 0)
//		{
//			cout << "�����������. " << endl;
//			continue;
//		}
//		if (a > rand)
//		{
//			cout << "������������� ����� ����� ����������" << endl;
//		}
//		if (a < rand)
//		{
//			cout << "������������� ����� ������ ����������" << endl;
//		}
//		b++;
//		
//	} while (rand != a);
//
//	cout << "�� ������� ����� � " << b << " ����" << endl;
//
//}