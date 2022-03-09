#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char kata [100];
	cout<<"Nama : ";
	gets(kata);
	strupr(kata); //mengubah huruf menjadi besar
	cout<<endl;
	cout<<"Hasil: "<<kata;
	return 0;
}

