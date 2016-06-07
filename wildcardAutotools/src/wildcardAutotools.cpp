/*
 ============================================================================
 Name        : wildcardAutotools.cpp
 Author      : Tanvi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>
#include <string>

using namespace std;
bool strmatch(string str1, string str2);

int main(void) {
	string stra("Ta*i");
		string strb("Tanvi");
		cout<<stra<<endl;
		cout<<strb<<endl;
	//	bool tmp = true;
	//	cout<<tmp;
		cout<<"Result is:"<<strmatch(stra, strb)<<endl;
	return 0;
}

bool strmatch(string str1, string str2){
	int i=0,j =0;
//	cout<<"(i,j)="<<i<<j;
	bool match = true;
	int size1 = str1.length();
	int size2 = str2.length();
	while(i< size1){
		if((str1[i] == str2[j]) || (str1[i] == '?')){
			i++;
			j++;
//			cout<<"char1 "<<i<<", char2 "<<j<<"passed\n";
		}else if(str1[i] == '*'){
			if(i+1< size1-1){
				int tmp = str2.find_first_of(str1[i+1],j);
				if (tmp == -1){
					match = false; j =-1;
					break;
				}else{
					j = tmp; i++;
				}
			}else {
				match =true;
				j = str2[size2-1];
				break;
			}
		}else {
			match = false; j = -1;
			break;
		}
	}
	if(j < size2 -1){
		return false;
	}else
		return match;

}
