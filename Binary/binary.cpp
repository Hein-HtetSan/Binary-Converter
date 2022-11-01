#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <conio.h>
#include <algorithm>

using namespace std;

void str_to_binary(string x);
void dec_to_binary(int a);
void hexa_to_binary(string b);
void oct_to_binary(int c);

int main()
{
	char choice;
	string s1, s2;
	while(true)
	{
		cout<<"\n\n1)- text to binary\n";
		cout<<"2)- decimal to binary\n";
		cout<<"3)- hexadecimal to binary\n";
		cout<<"4)- octadecimal to binary\n";
		cout<<"\n Enter 0 to exit!\n";

		cout<<"\n\n____Enter your choice____\n\n";
		choice = getch();

		system("cls");

		switch(choice)
		{
			case '1':
				cout<<"Enter text : ";
				getline(cin, s1);
				str_to_binary(s1);
				break;
			case '2': 
				int dec;
				cout<<"Enter Decimal : ";
				cin>>dec;
				dec_to_binary(dec);
				break;
			case '3':
				// int hex;
				cout<<"Enter HexaDecmial - ";
				getline(cin, s2);
				hexa_to_binary(s2);
				break;
			case '4': 
				int oct;
				cout<<"Enter Octal decimal - ";
				cin>>oct;
				oct_to_binary(oct);
				break;
		}

		if (choice == '0') break;
	}
	return 0;
}


// String to binary
void str_to_binary(string x)
{
	int n = x.length();

	for(int i = 0; i < n; i++)
	{

		//1 char to ASCII code
		int val = int(x[i]);

		string bin ="";

		while(val > 0)
		{
			if(val % 2 == 0)
			{
				bin.push_back('0');
			}
			else
			{
				bin.push_back('1');
			}
			val /= 2;
		}

		reverse(bin.begin(), bin.end());
		cout<<bin<<" ";
	}
}

void dec_to_binary(int a)
{
	string bin = "";
	// convert to binary code
	while(a > 0)
	{
		if(a % 2 == 0) 
		{
			bin.push_back('0');
		}
		else 
		{
			bin.push_back('1');
		}
		a /= 2;
	}
	reverse(bin.begin(), bin.end());
	cout<<"Binary - "<<bin;
}

// hex to binary
void hexa_to_binary(string b)
{
	int n = b.length();
	for(int i=0; i<n; i++)
	{	
		int val;
		if(b[i] == 'A' || b[i] == 'B' || b[i] == 'C' || b[i] == 'D' || b[i] == 'E' || b[i] == 'F')
		{
			val = int(b[i]) - 55;
		} else {
			val = int(b[i]) - 48;
		}

		string bin = "";
		while(val > 0)
		{
			if(val % 2 == 0)
			{
				bin.push_back('0');
			} else {
				bin.push_back('1');
			}
			val /= 2;
		}
		int len2 = bin.length();
		if(len2 == 1){
			bin.push_back('0');
			bin.push_back('0');
			bin.push_back('0');
		} else if (len2 == 2){
			bin.push_back('0');
			bin.push_back('0');
		} else if (len2 == 1){
			bin.push_back('0');
		}
		reverse(bin.begin(), bin.end());
		cout<<bin<<" ";
	}
}

// octal number to binary
void oct_to_binary(int c)
{
	bool is_continue = true;
	int n = to_string(c).length();
	for(int i=0; i<n; i++)
	{
		string d = to_string(c);
		if(d[i] == '8' || d[i] == '9')
		{
			cout<<"\n____Error____\n";
			is_continue = false;
			break;
		}
	}
	string bin = "";
	while(c > 0 && is_continue == true)
	{
		if(c % 2 == 0)
		{
			bin.push_back('0');
		} else {
			bin.push_back('1');
		}
		c /= 2;
	}
	int len2 = bin.length();
	if(len2 == 1){
		bin.push_back('0');
		bin.push_back('0');
	} else if(len2 == 2) 
	{
		bin.push_back('0');
	}
	reverse(bin.begin(), bin.end());
	cout<<bin;
}