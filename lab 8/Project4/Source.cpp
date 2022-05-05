
//find_first_of
//to_lowercase()

#include <map>
#include <string>
#include <iostream>
#include <queue>

using std::string;
using std::map;
using std::cin;
using std::count;
using std::priority_queue;


int main() {
	string s, word;
	map <string, int> m;

	getline(cin, s);
	auto found = s.find_last_of(" .,?!");
	
	while(found!=std::string::npos) {
		if(found==s.size()-1){
			s.pop_back();
			found = s.find_last_of(" .,?!");
		}
		else {
			word.append(s, found, s.size());
			m[word] += 1;
			word.erase();
			for (int i = s.size(); i > found; i--) {
				s.pop_back();
			}
			found = s.find_last_of(" .,?!");
		}
	}

	std::priority_queue<int> q;

	for (auto i = m.begin(); i != m.end(); i++) {
		q.push(i->second);
	}

	for (int i = q.top(); i != 0; i--) {
		for (auto it = m.begin(); it != m.end(); it++) {
			if (it->second == i) {
				std::cout << it->first << " => " << it->second<<'\n';
			}
		}
	}

	

}