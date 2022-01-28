#include<iostream>
#include<list>
using namespace std;

int main(){

	list<int> l;

	//Initialize
	list<int> l1{1,2,3,10,8,5};
	//Different Datatype
	list<string> l2{"apple", "guava", "mango", "banana"};
	l2.push_back("pineapple");

	//sort
	l2.sort();

	//reverse 
	l2.reverse();

	//pop_front
	cout<<l2.front()<<endl;
	l2.pop_front();

	//add to the front the list
	l2.push_front("kiwi");
	cout<<l2.back()<<endl;
	l2.pop_back();

	//some more functions in the list 
	l2.push_back("orange");
	l2.push_back("lemon");

	string f;
	cin>>f;
	l2.remove(f);

	//erase one or more elements
	//to it = l2.b en() + 3;
	auto it = l2.begin();
	it++;
	it++;
	l2.erase(it);

	//we can insert elements in the list
	it = l2.begin();
	it++;
	l2.insert(it,"FruitJuice");


	//Iterate over the list and print the data
    for(auto it=l2.begin();it!=l2.end();it++){
    	cout<<(*it)<<"->";
    	 }


	for(string s:l2){
		cout<<s<<"-->";
	} 
	return 0;

}