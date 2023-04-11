#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;



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

	/*bool RealObrab(vector<string>& data)
	{
		cout << "реализация обработки " << endl;
	}*/
};




int main()
{
	setlocale(LC_ALL, "Russian");

	File file;
	Work work;
	string Name = "Finik.txt";
	string procs = "go process.";
	if (file.writeFile(Name, procs)) {
		cout << "запись файла." << endl;
	}
	else {
		cout << "ups" << endl;

	}
	string fileReal;
	string fileReal2;


	if (file.readFile(Name, fileReal)) {


		if (work.RealStructur(fileReal)) {

			cout << "реализация структурирования информации из строки" << endl;

		}
		else {

			cout << "ups+1." << endl;

		}


	}
	else {

		cout << "ups+1." << endl;

	}

	if (file.deleteFile(Name)) {

		cout << "deleted" << endl;
	}
	else {

		cout << "ups+1" << endl;

	}

}