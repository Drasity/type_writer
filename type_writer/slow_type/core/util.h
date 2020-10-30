#pragma once

#include <string>
#include <thread>
#include <chrono>
#include <iostream>
#include <Windows.h>

namespace util
{
	static void type_writer( std::string msg, unsigned int speed = 70, bool end_line = false )
	{
		for ( auto str: msg )
		{
			std::cout << str;
			std::this_thread::sleep_for( std::chrono::milliseconds( speed ) );
		}

		if ( end_line )
			std::cout << std::endl;
	}

	std::ostream &red( std::ostream &c )
	{
		HANDLE console;
		console = GetStdHandle( STD_OUTPUT_HANDLE );
		FlushConsoleInputBuffer( console );
		SetConsoleTextAttribute( console, FOREGROUND_RED );

		return c;
	}

	std::ostream &green( std::ostream &c )
	{
		HANDLE console;
		console = GetStdHandle( STD_OUTPUT_HANDLE );
		FlushConsoleInputBuffer( console );
		SetConsoleTextAttribute( console, FOREGROUND_GREEN );

		return c;
	}

	std::ostream &blue( std::ostream &c )
	{
		HANDLE console;
		console = GetStdHandle( STD_OUTPUT_HANDLE );
		FlushConsoleInputBuffer( console );
		SetConsoleTextAttribute( console, FOREGROUND_BLUE );

		return c;
	}
}