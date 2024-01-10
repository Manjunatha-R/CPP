// C++ program to implement sizeof
// to determine the number of bytes
// taken by different data types
#include <bits/stdc++.h>
using namespace std;

struct gfgg
{
  int z;
  float d;
  char s[20];
  double dd;
} ggg;

class abc
{
};

class GFG
{
  int x;
};

union UN
{
  int z;
  double d;
};
// Driver code
int main()
{
  cout << "No of Bytes taken up by char is " << sizeof(char) << endl;
  cout << "No of Bytes taken up by short int is " << sizeof(short int) << endl;
  cout << "No of Bytes taken up by unsigned int is " << sizeof(unsigned int) << endl;
  cout << "No of Bytes taken up by int is " << sizeof(int) << endl;
  cout << "No of Bytes taken up by float is " << sizeof(float) << endl;
  cout << "No of Bytes taken up by double is " << sizeof(double) << endl;
  cout << "No of Bytes taken up by long is " << sizeof(long) << endl;
  cout << "Size of class " << sizeof(abc) << endl;
  cout << "Size of long long " << sizeof(long long) << endl;
  cout << "Size of long double " << sizeof(long double) << endl;

  // C++ program to implement sizeof
  // to determine the number of bytes
  // taken by an expression:
  int a = 5;
  long x = 9;
  double p = 10.2;
  float g = 2.5;

  cout << "No of Bytes taken up by (a+g) is " << sizeof(a + g) << endl;
  cout << "No of Bytes taken up by (a+x) is " << sizeof(a + x) << endl;
  cout << "No of Bytes taken up by (a+p) is " << sizeof(a + p) << endl;
  cout << "No of Bytes taken up by (x+p) is " << sizeof(x + p) << endl;

  // C++ program to implement sizeof
  // to determine the number of bytes
  // taken by variables of different
  // data types

  int aa;
  float b;
  char gg;
  cout << "No of Bytes taken up by a is " << sizeof(aa) << endl;
  cout << "No of Bytes taken up by b is " << sizeof(b) << endl;
  cout << "No of Bytes taken up by g is " << sizeof(gg) << endl;

  // C++ program to implement sizeof
  // to determine the size of an array
  int xx[] = {1, 2, 3, 5, 6, 7, 8, 9};
  int length = sizeof(xx) / sizeof(xx[0]);
  cout << "Length of the array is " << length << endl;

  // C++ program to implement sizeof
  // to find the size of the class
  GFG gfg;
  cout << "Size of class gfg is in bytes  : " << sizeof(gfg) << endl;
  cout << "Size of class abc is in bytes  : " << sizeof(abc) << endl;

  // C++ program to implement sizeof
  // to find the size of pointers
  int *ac = new int(10);
  char *gc = new char('g');
  double *dc = new double(7.5);
  cout << "size of pointer ac is " << ac << " " << sizeof(ac) << endl;
  cout << "size of pointer *ac is " << sizeof(*ac) << endl;
  cout << "size of pointer gc is " << gc << " " << sizeof(gc) << endl;
  cout << "size of pointer *gc is " << sizeof(*gc) << endl;
  cout << "size of pointer dc is " << dc << " " << sizeof(dc) << endl;
  cout << "size of pointer *dc is " << sizeof(*dc) << endl;

  // C++ program to show the
  // nesting of sizeof operator
  int xa;
  double ya;
  cout << "Nesting of sizeof operator is implemented "
       << "as sizeof(x*sizeof(y)) :" << sizeof(xa * sizeof(ya)) << endl;

  // C++ program to implement the
  // sizeof operator to find the
  // size of structure

  cout << "size of structure is " << sizeof(ggg) << endl;

  // C++ program to implement the
  // sizeof operator to find the
  // size of the union

  cout << "size of union is " << sizeof(UN) << endl;

  // An expression output will be literal ex:(x+y)
  cout << "size of literal 10 is " << sizeof(10) << endl;

  return 0;
}