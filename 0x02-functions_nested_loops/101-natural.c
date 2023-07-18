#include <stdio.h>

int main(void)
{
	int result;
	int target;
	int var[2] = {3, 5};
	int x;
	int y;
	int tracker;

	result = 0;
	target = 1023;
	for (x = 0; x <= 1; x++)
	{
		tracker = 0;
		y = 0;
		for (y = 0; y < target; y++)
		{
			tracker = var[x] * y;
			if (tracker < target)
			{
				result += tracker;
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
