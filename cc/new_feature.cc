#include <print>

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (auto i : arr)
		std::print("{}\n", i);
}
