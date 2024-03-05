#include <random>
#include <iostream>
using namespace std;

//1.
//int main()
//{
//	setlocale(0, "ukr");
//	const int S = 13;
//	int x[S] = { 1, -2, 5, 0, 13, -7, -4, -3, 3, 6, 9, 10, -11 };
//	int y[S] = { 0 };
//	int M;
//
//	cout << "Введіть число М " << endl;
//	cin >> M;
//
//	cout << "Масив Х: ";
//
//	for (int i = 0; i < S; i++)
//	{
//		cout << x[i] << " ";
//	}
//	
//	cout << endl;
//
//	int N = 0;
//	for (int i = 0; i < S; i++)
//	{
//		if (x[i] > M)
//		{
//			y[N] = x[i];
//			N++;
//		}
//	}
//
//	cout << "Масив y: ";
//	for (int i = 0; i < S; i++)
//	{
//		if (y[i] != 0)
//		{
//			cout << y[i] << " ";
//		}
//	}
//  return 0;
//}

//2.
//int main()
//{
//    setlocale(0, "ukr");
//    const int n = 13;
//    int arr[n];
//
//    cout << "Введіть елементи масиву:" << endl;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        if (arr[i] < 0) {
//            arr[i] = -arr[i];
//        }
//    }
//
//    cout << "Mасив: ";
//    for (int i = 0; i < n; ++i) {
//        cout << "  " << arr[i];
//    }
//    cout << " ";
//
//    return 0;
//
//}

//3.
//int main()
//{
//	setlocale(0, "ukr");
//    
//    int a;
//    int arr[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
//    cout << "Введіть суму для видачі: ";
//    cin >> a;
//
//    cout << "Сума " << a << " може бути видана наступними купюрами:" << endl;
//    for (int i = 0; i < 10; ++i) {
//        if (a >= arr[i]) {
//            cout << (a / arr[i]) << " купюр(а) по " << arr[i] << endl;
//            a %= arr[i];
//        }
//    }
//    return 0;
//}
//

//4.
// int main()
//{
//	setlocale(0, "ukr");
//	const int n = 5;
//	const int m = 5;
//
//	int arr1[n] = { 5, 8, 11, 14, 21 };
//	int arr2[m] = { 6, 7, 12, 13, 19 };
//
//	int ind_arr1 = 0;
//	int ind_arr2 = 0;
//
//	int arr3[n + m];
//
//	for (int i = 0; i < n + m; i++)
//	{
//		if (ind_arr1 < n && (ind_arr2 >= m || arr1[ind_arr1] < arr2[ind_arr2]))
//		{
//			arr3[i] = arr1[ind_arr1];
//			ind_arr1++;
//		}
//		else
//		{
//			arr3[i] = arr2[ind_arr2];
//			ind_arr2++;
//		}
//	}
//	cout << "Третій масив: ";
//	
//	for (int i = 0; i < n + m; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//
