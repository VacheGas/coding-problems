#include <iostream>
#include <vector>
#include <unordered_map>

void zero_row(int row, std::vector<std::vector<int>> &matrix, int size) {

	int col = 0;
	while (col < size) {
		matrix[row][col] = 0;
		++col;
	}
}

void zero_col(int col, std::vector<std::vector<int>> &matrix, int size) {

	int row = 0;
	while (row < size) {
		matrix[row][col] = 0;
		++row;
	}
}

void zero_matrix(std::vector<std::vector<int>> &matrix) {
	std::vector<int> rows;
	std::vector<int> cols;

	int i = 0;
	int j = 0;
	int idx  = 0;
	int row = matrix.size();
	int col = matrix[0].size();
	while (i < row) {
		j = 0;
		while (j < col) {
			if (matrix[i][j] == 0) {
				rows.push_back(i);
				cols.push_back(j);
				++idx;
			}
			++j;
		}
		++i;
   }
   int size_vec = idx;
   idx = 0;
   while (idx < size_vec) {
		zero_row(rows[idx], matrix, col);
		zero_col(cols[idx], matrix, row);
		++idx;
   }
}
