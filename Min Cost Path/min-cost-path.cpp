#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

const int row = 3;
const int col = 3;


int main(int argc, char const *argv[])
{
	int cost[row][col] = { {1, 2, 3},
							{4, 8, 2},
							{1, 5, 3} };

	cout << minCost(cost) << endl;
	return 0;
}

// Contributed by Mansimar-Anand TU_2022 p_e_k_k_a Task @ Codechef/Codeforces
