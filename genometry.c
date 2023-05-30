#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BASED 1
#define SQUARED(x) (x) * (x)

typedef struct {
    int x;
    int y;
    int z;
} Point;

void get_origin(Point *origin);
void get_random_point(Point *rand_point);
void change_point(Point *point, int val);
float euclidean_distance(Point **points);

int main() {

    srand(time(NULL));
    Point og_p;
    Point rand_p;

    Point *points[] = {&og_p, &rand_p};

    get_origin(points[0]);
    get_origin(points[1]);

    change_point(points[0], 1);
    change_point(points[1], 3);

    Point *alog = malloc(12);
    get_origin(alog);

    float size = sizeof(og_p);
    printf("%.01f\n", size);

    printf("Origin: x = %d, y = %d, z = %d\n", og_p.x, og_p.y, og_p.z);
    printf("Random Point: x = %d, y = %d, z = %d\n", rand_p.x, rand_p.y, rand_p.z);

    float res = euclidean_distance(points);

    printf("%.03f\n", res);

    free(alog);

    return 0;
}

void get_origin(Point *origin) {
    origin->x = 0;
    origin->y = 0;
    origin->z = 0;
}

void get_random_point(Point *rand_point) {
    rand_point->x = rand();
    rand_point->y = rand();
    rand_point->z = rand();
}

void change_point(Point *point, int val) {
    point->x = point->x + val;
    point->y = point->y + val;
    point->z = point->z + val;
}

float euclidean_distance(Point **points) {
    float x = SQUARED(points[1]->x - points[0]->x);
    float y = SQUARED(points[1]->y - points[0]->y);
    float z = SQUARED(points[1]->z - points[0]->z);
    float res = sqrtf(x + y + z);

    return res;
}
