// cpp-learning.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


void operators(int* a, int* b, int* res); void printBtwAddr(int* a, int* b);
int main()
{

    //const int arrSize = 8;
    //int intArr[arrSize] = { 1, 2, 3, 4, 5, 6, 7, 8 }, * pIntArr = intArr;


    //char initCharArr[arrSize] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
    //char* pcharArr = (char*)malloc(8);

    //for (int i = 0; i < arrSize; i++) {
    //    *(pcharArr + i) = initCharArr[i];
    //}
    //cout << pcharArr << endl;

    //string str = "test123";
    //for (int i = 0; i <= str.length(); i++) {
    //    cout << "str[" << i << "] = " << str[i] << endl;
    //}


    ////char charArr[arrSize + 1] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0' }, * pCharArr = charArr;
    ////cout << charArSize << endl << pArr << endl << endl;

    //string strArr[arrSize] = { "test1", "test2", "test3", "test4", "test5", "test6", "test7", "test8" }, * pStrArr = strArr;
    ////cout << *strArr << endl << *pStrArr << endl;


    //int num = 5;
    //int* pnum = &num;
    ////cout << *pnum;

    //cout << "int: " << pnum << endl;
    //cout << "int Arr: " << intArr << endl;
    ////cout << "char Arr: " << charArr << endl;
    //cout << "str Arr: " << strArr << endl;

    //cout << "\v" << "test";





    //const int arrSize = 6;
    //char arr[arrSize] = { 'a', 'b', 'c', 'd', 'e', 'f' }, * pArr = arr;
    //cout << pArr;

    //char a[asize] = { 'a','b','c','d','e','f','g','o' }, * pa = a;

    //cout << *a << endl << *pa << endl << endl;
    //char* pNewArr[arrSize / 2] = {};



    //int j = 0;
    //for (int i = 0; i < arrSize; i++) {
    //    cout << i << j << endl;
    //    if (i % 2 == 1) {
    //        *(pNewArr + j) = (pArr + i);
    //        j++;

    //        cout << "el:" << *(pArr + i) << endl;
    //    }
    //}


    //cout << *pNewArr << endl;


    //int a = 3; 
    //int b = 3;
    //int res = 0;

    //cout << res << endl;
    //operators(&a, &b, &res);
    //cout << res;



    int a = 0;
    int b = 0;
    //int hexNum = 0xF;

    //uintptr_t aDecAddress = reinterpret_cast <uintptr_t> (&a);
    //uintptr_t bDecAddress = reinterpret_cast <uintptr_t> (&b);

    int arr[2] = { 0, 0 };
    //cout << dec << &b;
    //cout << reinterpret_cast <uintptr_t> (&a) << " " << reinterpret_cast <uintptr_t> (&b) << endl;
    cout << &a << " " << &b << endl;
    printBtwAddr(&a, &b);
    //cout << sizeof(uintptr_t) << endl;
    //cout << reinterpret_cast <uintptr_t> (&arr[0]) << " " << reinterpret_cast <uintptr_t> (&arr[1]);

    system("pause");
    return 0;
}


void operators(int* a, int* b, int* res) {
    *res = *a << *b;
}


void printBtwAddr(int* a, int* b) {
    //uintptr_t paddress1 = reinterpret_cast <uintptr_t> (&a);
    //uintptr_t paddress2 = reinterpret_cast <uintptr_t> (&b);
    cout << *&a << " " << *&b << endl;
    //cout << paddress1 << " " << paddress2 << endl;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
