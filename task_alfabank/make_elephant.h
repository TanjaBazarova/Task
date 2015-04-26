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
		//����� � �������� �����
		words^ new_words;
		//����� � �������
		List<String^>^ dictionary_words; 
		//���������
		List<String^>^ result; 
		//�������� �����
		int open_words_file(String^ name_of_file);
		//�������� �����-������� � ������� ����� �� �����
		int open_dictionary_file(String^ name_of_file);
		//�������� �����
		int check_up_word(String^ word);
		//�������� ������� ������(1-���� �� �������, 3-�������)
		int compare(String^ first, String^ second);
		//������������ ������� ����
		int make_chain();
		//����� ���������� �������
		List<String^>^ find_the_shortest(array<int,2>^,int count);
		//����� ����������
		void print_result();

		
		~make_elephant();
	};
}
#pragma endregion