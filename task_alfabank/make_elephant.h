#pragma once
#include "stdafx.h"
#include <conio.h>
#include <limits.h>
namespace TaskAlphaBank {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text;

	public ref struct words
	{
		String^ start;
		String^ end;
	};

	public ref class make_elephant
	{
	
		public:make_elephant();
		//слова в исходном файле
		words^ new_words;
		//слова в словаре
		List<String^>^ dictionary_words; 
		//результат
		List<String^>^ result; 
		//открытие файла
		int open_words_file(String^ name_of_file);
		//открытие файла-словаря и выборка слова по длине
		int open_dictionary_file(String^ name_of_file);
		//проверка слова
		int check_up_word(String^ word);
		//проверка входных файлов(1-файл со словами, 3-словарь)
		int compare(String^ first, String^ second);
		//формирование цепочки слов
		int make_chain();
		//поиск кратчайшей цепочки
		List<String^>^ find_the_shortest(array<int,2>^,int count);
		//вывод результата
		void print_result();

		
		~make_elephant();
	};
}
#pragma endregion