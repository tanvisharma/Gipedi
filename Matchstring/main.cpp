/*
 * main.cpp
 *
 *  Created on: 07-Jun-2016
 *      Author: tanvi
 */

/*
 * main.cpp
 *
 *  Created on: 26-May-2016
 *      Author: tanvi
 */

/*! This is the main program testing the outputs.
 *
 */

#include <iostream>
#include <string>
// #include <matchstring.h>
using namespace std;
bool strmatch(string str1, string str2);
int main(){
	string stra("Ta*i");
	string strb("Tanvi");
	cout<<stra<<endl;
	cout<<strb<<endl;
//	bool tmp = true;
//	cout<<tmp;
	cout<<"Result is:"<<strmatch(stra, strb)<<endl;
	return 0;
}






