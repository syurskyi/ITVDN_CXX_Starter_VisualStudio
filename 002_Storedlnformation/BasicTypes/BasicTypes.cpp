// BasicTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	#pragma region 
    
	//----------------- 16 bit -----------------
	// “ипу short соответствуют типы short int, signed short, signed short int 
	// ÷елое со знаком
	
	short		a = -32768;
	short int	b = +32767;
	
	// ÷елое без знака
	
	unsigned short		c = 0;
	unsigned short int	d = 65535;

	//----------------- 32 bit -----------------
	// “ипу int соответствуют типы signed, signed int
	// ÷елое со знаком

	int		e = -2147483648;
	int		f = +2147483647;

	// “ипу unsigned соответствуют типы unsigned int, unsigned, unsigned int
	// ÷елое без знака

	unsigned		g = 0;
	unsigned int	h = 4294967295;

	//----------------- 64 bit -----------------
	// “ипу long long соответствуют типы long int, signed long, signed long int 
	// ÷елое со знаком

	long		i = -9223372036854775808;
	long int	j = +9223372036854775807;

	// ÷елое без знака
	
	unsigned long		k = 0;
	unsigned long int	l = 18446744073709551615;

	#pragma endregion

	#pragma region

	//----------------- 32 bit ----------------- 

	float m = 1.8E-38f;
	float n = 3.4E+38f;

	//----------------- 64 bit -----------------

	double o = 2.2E-308;
	double p = 1.8E+307;	
	
	#pragma endregion

	#pragma region
	//----------------- 8 bit -----------------

	// Ћогическа¤ величина »стина\Ћожь

	bool s = true;   // 0000 0001
	bool t = false;  // 0000 0000
	
	#pragma endregion

	#pragma region
	//----------------- 16 bit -----------------
	
	char u = 'A';

	#pragma endregion
	
	#pragma region

	// —трока в формате UNICODE

	string w = "Hello world!";

	#pragma endregion


    return 0;
}

