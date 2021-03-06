#include "stdafx.h"
#include <iostream>
using namespace std;



int palindrome(long num)
{
	long number = 0, digit = 0, reverse = 0, counter=0;
	number = num;
	while (num != 0)
	{
		digit = num % 10;
		reverse = (reverse * 10) + digit;
		num = num / 10;
	}
	if (number == reverse)
	{
		counter++;
	}
	return counter;
}

int main()
{
	int array1[10];
	int start = 0;
	int end = 2;
	long digit = 0;
	int count=0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number: ";
		cin >> array1[i];
	}
	while (start != 8)
	{
		for (int i = start; i <= end; i++)
		{
			digit = (digit * 10) + array1[i];
		}
		count = count + palindrome(digit);
		digit = 0;
		if (end == 9)
		{
			start++;
			end = start + 2;
		}
		else
		{
			end++;
		}
	}
	cout << "\nTotal number of Palindromes:  " << count << endl;
    return 0;
}

