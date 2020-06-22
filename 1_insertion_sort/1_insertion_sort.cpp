/*
* Insertion sort is efficient algorithm for sorting a small number of elements.
*/

#include <iostream>
#include <array>

template<typename T, const int N>
std::array<T, N> insertion_sort(std::array<T, N> elems)
{
	if (elems.size() < 2U)
	{
		return elems;
	}
	// Start the loop from 2nd index.
	for (auto i = 1; i < elems.size(); ++i) {
		auto key = elems[i];
		auto j = i - 1;

		// Moving key to its place in the beg if small.
		// {
		while (j >= 0 && key < elems[j])
		{
			// Moving value one by one
			elems[j + 1] = elems[j];
			j--;
		}
		elems[j + 1] = key;
		//	}
	}
	return elems;
}

int main() {
	std::array<unsigned int, 11> arr = { 34,12,3,53,12,64,43,123,43,54,34 };
	auto output = insertion_sort<unsigned int, 11>(arr);
    for(auto out: output) {
        std::cout << out << ", ";
    }
	return 0;
}
