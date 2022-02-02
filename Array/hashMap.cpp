#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
	unordered_map<string, int> ourMap;
	//insert
	pair<string, int> p("abc", 1);
	ourMap.insert(p);
	ourMap["def"] = 2;

	//find or access
	cout<<ourMap["abc"]<<endl;
	cout<<ourMap.at("abc")<<endl;
	//cout<<ourMap.at("ghi")<<endl;
	cout<<ourMap["ghi"]<<endl;
	cout<<"size :"<<ourMap.size()<<endl;

	//check Presence
	if(ourMap.count("ghi")>0){
		cout<<"ghi is present"<<endl;
	}

	//erase
	//ourMap
}