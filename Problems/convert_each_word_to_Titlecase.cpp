//By: Prakhar

#include<bits/stdc++.h>
using namespace std;

void convert_to_titlecase(string s){
	for(int i=0;i<s.size();i++){
		if(((i==0 && s[i]!=' ')|| s[i-1]==' ') && (s[i]>='a' && s[i]<='z')){
			s[i]=s[i]+'A'-'a';
		}
		cout << s[i];
	}
}

int main(){
	string s="hi I am prakhar";
	convert_to_titlecase(s);
}