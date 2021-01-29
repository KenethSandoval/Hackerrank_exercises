#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
	int n, q, i, j, q_count, k;
	std::cin >> n >> q;
	std::vector<std::vector <int> > a(n);
	for(i = 0; i < n; ++i) {
		std::cin >> k;
		a[i].resize(k);
		for(j = 0; j < k; ++j) {
			std::cin >> a[i][j];
		}
	}

	for(q_count = 0; q_count < q; ++q_count) {
		std::cin >> i >> j;
		std::cout << a[i][j] << std::endl;	
	}

	return 0;
}
