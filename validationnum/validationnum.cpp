// validationnum.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    int num,dnum; int done=0; //0 is false, 1 is true
	do{
		try{
          cout<<"Enter a number ";
		  cin>>num;
		  if(!cin || (num<50)|| (num>100))
			  throw dnum;
             done=1;   //done becomes true
		}
		   catch (int d)
		   {
              cout<<"Number only must be between 50 to 100!!! "<<endl;
			  cin.clear();
			  cin.ignore(100,'\n');
		   }
	}while(!done);
	cout<<"The number entered is  "<<num<<endl;
system("pause");
}
