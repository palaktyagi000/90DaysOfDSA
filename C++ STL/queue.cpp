#include<iostream>
#include<queue>
using namespace std;

int main(){

	queue<string> q;
	q.push("love");
	q.push("Babbar");
	q.push("kumar");

	q.pop();
	cout<<q.size()<<endl;
	


	return 0;
}