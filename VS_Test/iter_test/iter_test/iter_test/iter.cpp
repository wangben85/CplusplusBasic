// find example
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector

int main() {
	// using std::find with array and pointer:
	int myints[] = { 10, 20, 30, 40 };
	int * p;
	int index;

	p = std::find(myints, myints + 4, 30);
	if (p != myints + 4)
		std::cout << "Element found in myints: " << *p << '\n';
	else
		std::cout << "Element not found in myints\n";

	// using std::find with vector and iterator:
	std::vector<int> myvector(myints, myints + 4);
	std::vector<int>::iterator it;

	it = find(myvector.begin(), myvector.end(), 40);
	if (it != myvector.end())
	{ 
		index = static_cast<int>(it - myvector.begin());
		std::cout << "Element found in myvector: " << *it << '\n';
		std::cout << "The index of iterator " << index << '\n';
	}
		
	else
		std::cout << "Element not found in myvector\n";

	system("pause");
	return 0;
}