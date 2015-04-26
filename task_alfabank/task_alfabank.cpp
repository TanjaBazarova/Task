// task_alfabank.cpp : main project file.

#include "stdafx.h"
#include <conio.h>
#include "make_elephant.h"

using namespace TaskAlphaBank;


int main(array<System::String ^> ^args)
{
	String^ words_file;
	String^ dictionary_file;
	make_elephant^ new_elephant = gcnew make_elephant();
	Console::WriteLine("Введите название файла с начальным и конечным словами:");
	words_file = Console::ReadLine();
	Console::WriteLine("Введите название файла со словарем:");
	dictionary_file = Console::ReadLine();
	Console::Clear();
	if(new_elephant->open_words_file(words_file) && new_elephant->open_dictionary_file(dictionary_file))
	{
		if(new_elephant->make_chain())
			new_elephant->print_result();
		else Console::WriteLine("Ошибка!Нет необходимых слов в словаре!");
	}
	else Console::WriteLine("Ошибка!");
	_getch();
    return 0;
}



