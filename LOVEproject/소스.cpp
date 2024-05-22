#include<iostream>
#include<string>
using namespace std;

int main() {
	string findLove = "";
	while (1) {
		char newChar= rand() % 26 + 65;
		findLove += newChar;
		cout << newChar;
		if (findLove.size()>=4&&findLove.substr(findLove.size() - 4)=="LOVE") {
			break;
		}
	}

	cout << "\n\nLOVE found in " << findLove.size() << " letters\n";
}
