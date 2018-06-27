#include <iostream>
#include <string>
#include <random>
#include <vector>

using namespace std;

void selection_sort(vector<int>&);

void swap(int&, int&);

int main(int argc, char** argv) {
	random_device generator;
	uniform_int_distribution<int> dist(0, 1000);
	vector <int> list;
	for (int i = 0; i < 10; ++i) {
		list.push_back(dist(generator));
		cout << list[i] << ", ";
	}
	cout << endl;
	selection_sort(list);
	for (int i = 0; i < 10; ++i) {
		cout << list[i] << ", ";
	}
	selection_sort(list);
	system("pause");
	return 0;
}
void selection_sort(vector<int>& in) {
	int mindex = 0;
	for (int i = 0; i < in.size(); ++i) {
		mindex = 0;
		for (int j = i + 1; j < in.size(); ++j) {
			if (in[j] < in[mindex]) {
				mindex = j;
			}
		}
		if (mindex != i) {
			swap(in[i], in[mindex]);
		}
	}
}
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}