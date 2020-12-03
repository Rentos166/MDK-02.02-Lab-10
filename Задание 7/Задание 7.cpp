﻿// Задание 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

//Пытался делать с fstream, когда файл может быть входным и выходным потоком, но с ним никак не получалось, а таким способом заработало
int main()
{
	ifstream in("f.txt"); //входной поток для 1 файла
	ofstream out("h.txt"); //выходной поток для вспомогательного файла
	string n; //строка для передачи данных из файла
	while (in.peek() != EOF) //пока не достигнут конец 1 файла
	{
		getline(in, n); //передаем данные из 1 файла в строку
		out << n << endl; //далле записываем эту строку в вспомогательную строку
	}
	in.close();//закрываем файлы
	out.close();
	ifstream in1("g.txt"); //входной поток для 2 файла
	ofstream out1("f.txt"); //выходной поток для 1 файла
	while (in1.peek() != EOF) //пока не достигнут конец 2 файла
	{
		getline(in1, n); //передаем данные из 2 файла в строку
		out1 << n << endl; //переносим строку в 1 файл
	}
	in1.close(); //закрываем файлы
	out1.close();
	ifstream in2("h.txt"); //входной поток для вспомогательного файла
	ofstream out2("g.txt"); //выходной поток для 2 файла
	while (in2.peek() != EOF) //пока не достигнут конец вспомогательного файла
	{
		getline(in2, n); //передаем данные из вспомогательного файла в строку
		out2 << n << endl; //записываем эту строку во 2 файл
	}
	out2.close(); //закрываем файлы
	in2.close();
    system("pause");
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
