#pragma once
#include<iostream>
#include<fstream>

class Reader {
private:
	ifstream file;
	int opened;
public:
	Reader(string file_path) {
		file.open(file_path);

		file.is_open() ? opened = 1 : opened = 0;
	}

	string Ler() {

	}

	~Reader() {
		file.close();
	}
};
