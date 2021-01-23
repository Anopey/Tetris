#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int noTetromino = 7;

wstring tetromino[noTetromino];

void PopulateAssets();

int main() {

	PopulateAssets();

	return 0;
}

void PopulateAssets() {

	for (int i = 0; i < noTetromino; i++) {

		ifstream infile("../Assets/Tetromino" + to_string(i) + ".TETROMINO");

		if (!infile.is_open()) {
			cerr << "Could not find file " << "../Assets/Tetromino" + to_string(i) + ".TETROMINO";
			exit(1);
		}

	}

}