#include "util.h"

/*
	Just board. 

	This is just a simple type writer animation function, nothing special.
	
	Basically the function takes in 3 params.
	
	The first param is your string	
	seccond param is your type animation speed
	and the last param is a bool, set that to true if you want to end your line .. vice versa. 

	example usages:

		util::type_writer( "your str here", 60, true );
		util::type_writer( "your str here" );
	

	Text Color example usage:
		std::cout << util::blue << "Hello world! << std::endl;

*/

int main( int argc, char **argv[] )
{
	util::type_writer( "Hello world!", 60, true );
	std::cout << util::red << "[red] Hello world!" << std::endl;

	std::cin.get( );
}