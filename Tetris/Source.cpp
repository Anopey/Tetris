#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int noTetromino = 7;

string tetromino[noTetromino];

void PopulateAssets();

int Rotate();

int main() {

	PopulateAssets();

	return 0;
}

void PopulateAssets() {

	for (int i = 0; i < noTetromino; i++) {

		ifstream infile("../Assets/Tetromino" + to_string(i) + ".TETROMINO");

		string line;

		if (!infile.is_open()) {
			cerr << "Could not find file " << "../Assets/Tetromino" + to_string(i) + ".TETROMINO";
			exit(1);
		}

		while (getline(infile, line)) {
			tetromino[i].append(line);
		}

	}

}

int Rotate(int px, int py, int r) {
	switch (r % 4) {
	case 0: return py * 4 + px;			// 0 degrees
	case 1: return 12 + py - (px * 4);	// 90 degrees
	case 2: return 15 - (py * 4) - px;	// 180 degrees
	case 3: return 3 - py + (px * 4);	// 270 degrees
	}
}