#include<iostream>

void printMsg()
{
	std::cout << "Hello World!\n";
	exit(0);
}

void execute() noexcept
{
	if(noexcept(execute())) throw "Ha !";
}

int main()
{
	std::set_terminate(&printMsg);
	execute();
}
