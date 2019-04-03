#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

std::vector<int> quickSort(std::vector<int> array)
{
	int h;
	int i;
	int j;
	int n = array.size();
	for(h = n / 2; h > 0; h /= 2)
	{
		for(i = 0; i < n - h; ++i)
		{
			for(j = i; j >= 0; j -= h)
			{
				if(array[j] > array[j + h])
				{
					std::swap(array[j], array[j + h]);
				}
				else
				{
					j = 0;
				}
			}
		}
	}
	return array;
}

int main()
{
	std::vector<int> a {1, 2, 5, 5, 5, 9, 3, 1, 4, 5, 7, 1, 54, 123, 54, 1, 45, 6};
	std::vector<int> b {2, 5, 7};
	std::vector<int> res;

	std::set_difference(a.begin(), a.end(), b.begin(), b.end(), std::inserter(res, res.begin()));

	res = quickSort(res);

	for(auto i = res.begin(); i < res.end(); ++i)
	{
		std::cout << *i << ' ';
	}
}
