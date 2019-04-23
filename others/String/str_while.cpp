#include<iostream>
#include<string>

int main()
{
	std::string str1 = "Hello ";
	int i =0;
	while(true){
		if(str1[i] != '\0'){
			std::cout << str1[i] << std::endl;		
		} else if(str1[i] == '\0'){
			break;
		}
		i++;
	}
	return 0;
}
