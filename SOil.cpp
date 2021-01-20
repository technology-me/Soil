#include <fstream>
#include <iostream>
#include <string>
#include <json\json.h>

using namespace std;

void read(string path) {
	ifstream file(path, ifstream::binary);
	Json::Value data;
	file >> data;
	cout << data["name"].asString() << endl;
	file.close();
}

int main() {
	read("../test.soil");
	return 0;
}