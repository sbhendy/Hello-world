
#include<iostream> //#include is a compiler directive, iostream is a library inlcuding input/output commands

//this is your main fumction, inside which your main code goes.the compiler reads from this main funtion first
int main(void) //putiing the keyword "void" inside the parentheses is optional
{
	std::cout << "Hello World!" << std::endl;

	/*
	std is a namespace accessed via the iostream library
	cout is a stream object
	endl keyword ends the line printed to the screen
	*/

	using namespace std; //hence if i declare that im going to use the namespace anywhere before use
	cout << "Hello user" << endl; //i could then do this

	system("pause"); //pause the program (so you can see the output window)
	return 0; //returm 0 or success to the CPU; same as "return EXIT_SUCCESS"

}

// This is a single line comment as is done like this

/* this is a multi-line comment
and is done like this. Comments dont interfere with your program.
It is never read by the compiler.
*/

/*
	What is the compiler?
	The compiler is what that converts your code to machine language during runtime. 
	Your CPU only understands machine code/language. Your CPU is fundamentally made up of
	registers that process data encoded as 1's and 0's (building blocks of machine language)
*/