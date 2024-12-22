#include <iostream>
#include <vector>

using namespace std;

bool linearSearch(vector<int>& array, int target) {
	for (int i = 0; i < array.size(); ++i) {
		if (array[i] == target) {
			cout << "the value " << array[i] << " existed at index " << i << " " << endl;
			return true;
		}
	}
	cout << "not found value: " << target <<endl;
	return false;
};

int main() {
	vector<int> array;
	array.push_back(1);
	array.push_back(20);
	array.push_back(10);
	array.push_back(99);
	array.push_back(85);
	array.push_back(81);
	array.push_back(23);

	linearSearch(array, 99);
	linearSearch(array, 22);
}