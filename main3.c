#include <stdio.h>
struct Point_t {
	int x;
	int y;
	struct Point_t *p1;

};

int main()
{
	struct Point_t p1;
	p1.x=50;
	p1.y=60;
	printf("%d \n",p1.x);
	printf("%d \n",p1.y);
	return 0;

}
