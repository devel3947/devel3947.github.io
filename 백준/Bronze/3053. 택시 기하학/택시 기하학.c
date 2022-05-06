#include <stdio.h>
#define PI 3.14159265358979

int main() {
	int r;
	double uklid_geo, taxi_geo;

	scanf("%d", &r);

	uklid_geo = r * r * PI;
	taxi_geo = r * r * 2.0;

	printf("%.6lf\n", uklid_geo);
	printf("%.6lf\n", taxi_geo);

	return 0;
}