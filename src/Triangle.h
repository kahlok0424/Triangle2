#ifndef _TRIANGLE_H
#define _TRIANGLE_H

typedef struct Triangle Triangle;

struct Triangle{
  int short1;
  int short2;
  int longest;
};

char *getTriangle_type(int a ,int b ,int c);
char *getTriangleName(int l1,int l2,int l3);
void determine_length(Triangle *Triangle ,int a,int b ,int c);

#endif // _TRIANGLE_H
