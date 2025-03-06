#include <stdio.h>

typedef struct{
    int x;
    int y;
} Point;

struct PointStruct{
    int x;
    int y;
};






void printPoint(Point p)
{
    printf("%d %d\n",p.x,p.y);
}

void printStructPoint(struct PointStruct p)
{
    printf("%d %d\n",p.x,p.y);
}

Point translatePoint(Point* point, int x, int y)
{
    Point p = *point;
    p.x +=x;
    p.y +=y;
    return p;
}

int main (void)
{
    Point p = {1,2};
    struct PointStruct p1 = {3,5};
    p = translatePoint(&p,3,3);
    printPoint(p);
    printStructPoint(p1);
}

