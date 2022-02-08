#include<iostream>
using namespace std;

char toLower(char ch){
	int count = 0;
	if(ch >= 'a' && ch <='z')
		return ch;
	else{
		char temp = ch - 'A' + 'a';
	}
	return count;
}

bool checkPalindrome(char a[], int n){
	int s = 0;
	int e = n-1;
	while(s<=e){
		if(a[s]!=a[e]){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}



void reverse(char name[], int n){
	int s = 0;
	int e = n-1;

	while(s<e){
		swap(name[s++], name[e--]);
	}
}


int getLength(char name[]){
	int count = 0;
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	return count++;
}

char getMaxOcc(string s){
	int arr[26] = {0};
	//create an array of count of alphabets
	for(int i=0;i<s.length();i++){
		char ch = s[i];
		//lowercase
		int number = 0;
		if(ch >= 'a' && ch <= 'z'){
			number = ch - 'a';
		}
		else{
			number = ch - 'A';
		}
		arr[number]++;
	}
}

int main(){

	char name[20];
	cout<<"Enter your name "<<endl;
	cin>>name;

	cout<<"Your name is ";
	cout<<name<<endl;

	int len = getLength(name);


	cout<<"Length: "<<getLength(name)<<endl;
	reverse(name, len);
	cout<<name<<endl;
	cout<<"Palindrome or Not "<<checkPalindrome(name, len)<<endl;



	return 0;
}