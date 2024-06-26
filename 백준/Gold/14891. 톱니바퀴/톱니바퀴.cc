#include <stdio.h>
#include <queue>
using namespace std;

queue<pair<int, int>> que;
void rotate(int *wheel, int dir)
{
	int temp;
	if (dir == 1) {
		temp = wheel[0];
		for (int i = 0, temp2; i < 7; i++)
		{
			temp2 = wheel[i + 1];
			wheel[i + 1] = temp;
			temp = temp2;
		}
		wheel[0] = temp;
	}
	else
	{
		temp = wheel[7];
		for (int i = 7, temp2; i > 0; i--)
		{
			temp2 = wheel[i - 1];
			wheel[i - 1] = temp;
			temp = temp2;
		}
		wheel[7] = temp;
	}
}

int main()
{
	int wheel1[8];
	int wheel2[8];
	int wheel3[8];
	int wheel4[8];
	int n, isrotate[3];

	for (int i = 0; i < 8; i++)
		scanf("%1d", &wheel1[i]);

	for (int i = 0; i < 8; i++)
		scanf("%1d", &wheel2[i]);

	for (int i = 0; i < 8; i++)
		scanf("%1d", &wheel3[i]);

	for (int i = 0; i < 8; i++)
		scanf("%1d", &wheel4[i]);

	scanf("%d", &n);

	for (int i = 0, x, y; i < n; i++) {
		scanf("%d %d", &x, &y);
		que.push({ x,y });
	}

	while (!que.empty()) {
		auto now = que.front();
		que.pop();
		int num = now.first, dir = now.second;

		if (wheel1[2] != wheel2[6])
			isrotate[0] = 1;
		else
			isrotate[0] = 0;

		if (wheel2[2] != wheel3[6])
			isrotate[1] = 1;
		else
			isrotate[1] = 0;

		if (wheel3[2] != wheel4[6])
			isrotate[2] = 1;
		else
			isrotate[2] = 0;

		if (num == 1) {
			rotate(wheel1, dir);
			if (isrotate[0]) {
				rotate(wheel2, -dir);
				if (isrotate[1]) {
					rotate(wheel3, dir);
					if (isrotate[2])
						rotate(wheel4, -dir);
				}
			}
		}
		else if (num == 2) {
			rotate(wheel2, dir);

			if (isrotate[0])
				rotate(wheel1, -dir);

			if (isrotate[1]) {
				rotate(wheel3, -dir);
				if (isrotate[2])
					rotate(wheel4, dir);
			}

		}
		else if (num == 3) {

			rotate(wheel3, dir);

			if (isrotate[2])
				rotate(wheel4, -dir);

			if (isrotate[1]) {
				rotate(wheel2, -dir);
				if (isrotate[0])
					rotate(wheel1, dir);
			}
		}
		else {
			rotate(wheel4, dir);
			if (isrotate[2]) {
				rotate(wheel3, -dir);
				if (isrotate[1]) {
					rotate(wheel2, dir);
					if (isrotate[0])
						rotate(wheel1, -dir);
				}
			}
		}
	}


	printf("%d", wheel1[0] + wheel2[0] * 2 + wheel3[0] * 4 + wheel4[0] * 8);

	return 0;

}
