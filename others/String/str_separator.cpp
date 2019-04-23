#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str = "Hello World!";
	string Fword = "";
	string word = "";
	int Fcount = 0;
	int count = 0;
	int index = 0;
	bool flag = true;
	while(true){
		if(str[index] != ' '){
			word += str[index];
			count++;
		} else if (str[index] == '\0'){
			
			break;
		}
		else{
			if(flag == true){
				Fcount = count;
				Fword = word;
				flag = false;
			};
			if(Fcount < count){
				Fcount = count;
				Fword = word;
			}else{
				count = 0;
				word= "";
			}
		}
		index++;
	}
	cout << "The Longest word " << Fword << " of length " << Fcount << endl;
	return 0;
}
