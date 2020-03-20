//ordered map/map pair implementation
//map by default sort the keys
#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int,int>mp;
	
	mp.insert(make_pair(1,100));
	mp.insert(make_pair(2,2000));
	mp.insert(make_pair(5,250));
	
	for(auto it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	// your code goes here
	return 0;
}