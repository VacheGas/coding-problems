#include <iostream>
#include <vector>

void rotate_image(std::vector<std::vector<std::string>> &img) {
	int i = img.size() - 1;
	int j = img[0].size() - 1;

	while (i >= 0 && j >= 0) {
		int tmp_i = i;
		int tmp_j = j;
		while (tmp_i != i) {
			std::swap(img[tmp_i][j], img[i][tmp_j]);
			++i;
			++j;
		}
		--i;
		--j;
	}
	int col_begin = 0;
	int col_end = img.size() - 1;
	int size_row = img[0].size();
	while (col_begin < col_end) {
		int row = 0;
		while (row < size_row) {
			std::cout << img[col_begin][row] << ' ' << ' ' << img[col_end][row] << std::endl;
			std::swap(img[col_begin][row], img[col_end][row]);
			++row;
		}
		++col_begin;
		--col_end;
	}	
}