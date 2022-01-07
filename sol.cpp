#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int row, col;
		cin >> row >> col;
		// view the image in this repository for better understanding
		// first, calculate the total available rows by having one row apart (divide by 2 and take the ceiling value)
		// second, calculate the total available columns having one seat apart per person (divide by 2 and take the ceiling value)
		// lastly, to calculate the total available seats, simply multiply the total no. of available rows to the total no. of available columns
		int total_available_rows = (row + 1) / 2;
		int total_available_columns = (col + 1) / 2;
		int total_available_seats = total_available_rows * total_available_columns;
		cout << total_available_seats << '\n';
	}
	return 0;
}