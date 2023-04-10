#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;
class Vse {


class File 
{
public:
	bool readFile(string file, string& infor)
	{
		cout << "read file" << endl;

	}

	bool writeFile(string file, const string& infor)
	{
		cout << "запись файла" << endl;

	}

	bool deleteFile(string file)
	{
		cout << "видалення файла" << endl;

	}
};


class Work
{
public:
	bool RealStructur(const string& infor, vector<string>& data)
	{
		cout << "реализация структурирования информации из строки  " << endl;

	}

	bool RealObrab(vector<string>& data)
	{
		cout << "реализация обработки " << endl;
	}
};



};

int main()
{
	setlocale(LC_ALL, "Russian");

	Vse vs;
	

}