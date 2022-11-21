#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int l, t;
	cin >> l >> t;

	cout << 2 * t - l;

	return 0;
}