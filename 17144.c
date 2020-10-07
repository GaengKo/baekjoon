int main() {
	int** a;
	int** b;
	int** temp;
	int air = 0;
	int r, c, T;

	scanf_s("%d %d %d", &r, &c, &T);
	a = (int**)malloc(sizeof(int*) * r + 1);
	b = (int**)malloc(sizeof(int*) * r + 1);

	for (int i = 0; i < r; i++)
	{
		a[i] = (int*)malloc(sizeof(int) * c + 1);
		b[i] = (int*)malloc(sizeof(int) * c + 1);
		for (int j = 0; j < c; j++)
		{
			scanf_s("%d", &a[i][j]);
			if (a[i][j] == -1) {
				air = i;
			}
			b[i][j] = 0;
		}
	}
	for (int z = 0; z < T; z++)
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (a[i][j] > 0)
				{
					int count = 0;
					int k = a[i][j] / 5;

					if (i > 0 && a[i - 1][j] != -1)
					{
						b[i - 1][j] += k;
						count++;
					}
					if (i < r - 1 && a[i + 1][j] != -1)
					{
						b[i + 1][j] += k;
						count++;
					}
					if (j > 0 && a[i][j - 1] != -1)
					{
						b[i][j - 1] += k;
						count++;
					}
					if (j < c - 1) {
						b[i][j + 1] += k;
						count++;
					}
					b[i][j] += a[i][j] - count * k;
					a[i][j] = 0;
				}
				else if (a[i][j] == -1) {
					b[i][j] = a[i][j];
				}

			}

		}

		for (int i = air-2; i > 0; i--)
		{
			b[i][0] = b[i-1][0];
		}
		for (int i = 0; i < c-1; i++)
		{
			b[0][i] = b[0][i + 1];
		}
		for (int i = 0; i < air-1; i++)
		{
			b[i][c - 1] = b[i + 1][c - 1];
		}
		for (int i = c-2; i > 0; i--)
		{
			b[air - 1][i + 1] = b[air - 1][i];
		}
		b[air - 1][1] = 0;


		for (int i = air + 1; i < r-1; i++)
		{
			b[i][0] = b[i + 1][0];
		}
		for (int i = 0; i < c - 1; i++)
		{
			b[r-1][i] = b[r-1][i + 1];
		}
		for (int i = r-1; i > air; i--)
		{
			b[i][c - 1] = b[i - 1][c - 1];
		}
		for (int i = c - 2; i > 0; i--)
		{
			b[air][i + 1] = b[air][i];
		}
		b[air][1] = 0;

		temp = a;
		a = b;
		b = temp;

	}
	int result = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] > 0)
				result += a[i][j];
		}
	}
	printf("%d",result);

	return 0;
}