#include<iostream>
#include<set>
using namespace std;


int main(){
	set<int> s;
	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);
	s.insert(10);
	s.insert(100);

	set<int>::iterator it = s.begin();
	for(; it != s.end(); it++){
		cout<<*it<<endl;
	}

	cout<<"Size:"<<s.size()<<endl;
	cout<<"MAx_size: "<<s.max_size()<<endl;
	if(s.empty())
		cout<<"set is empty\n";
	else
		cout<<"set is not empty\n";
}