// 2sem_lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
int main()
{
	int cout1=0;
	int cout_number=0;
	int cout_char=0;
	int cout_special=0;
	//char line[80];
	//char* line = (char*)malloc(80);
	char* line;
	line = new char[80];
	cout << "ENTER THE LINE:   ";
	cin.getline(line, 80);
	//cout << "\n" << line;
	for (int i = 0; i < 80; i++)
	{
		if (line[i] == '\0') break;
		if (line[i] == '0' || line[i] == '1' || line[i] == '0' || line[i] == '2' || line[i] == '3' || line[i] == '4' || line[i] == '5' || line[i] == '6' || line[i] == '7' || line[i] == '8' || line[i] == '9') cout_number++;
		else if ((line[i] >= 0) && (line[i] <= 32)) cout_special++;
		else cout_char++;
	
		cout1++;
	}
	cout << "\n" << "Total number of characters:" << cout1 << "\n";
	cout << "\n" << "Number of digits:" << cout_number << "\n";
	cout << "\n" << "Number of letters:" << cout_char << "\n";
	cout << "\n" << "Number of special characters:" << cout_special << "\n";
	delete[] line;
	//free(line);
	return 0;
}

