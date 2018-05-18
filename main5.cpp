#include <iostream>
#include <vector>


int main(int argc, char *argv[]) {
	vector<int> arr;
	int poz = -1;
	for (unsigned int i = 1; i < argc; i++)
	arr.insert(arr.end(), atoi(argv[i]));
	for (int i = arr.size() - 1; i > -1; i--)
		if (arr[i] == 1)
			if (arr[i - 1] == 0)
				poz = i - 1;
	std::cout << "i = " << poz;
}
