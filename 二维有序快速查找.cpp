//在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
	const vector<vector<int>>&  matrix = {  {1, 4, 7, 11, 15},
											{2, 5, 8, 12, 19},
											{3, 6, 9, 16, 22},
											{10, 13, 14, 17, 24},
											{18, 21, 23, 26, 30}};
	int target = 10;
	if (matrix.empty())
		return false;
	int lines = matrix.size();
	int rows = matrix[0].size();
	//左下角和右上角的周围数字是有顺序的，从这里起步就行
	//以左下角为例
	int i = lines;
	int j = 0;

	while (i > 0 && j < rows) {
		if (matrix[i][j] > target)
			i--;
		else if (matrix[i][j] < target)
			j++;
		else if (matrix[i][j] == target)
			return true;
	}
	return false;
