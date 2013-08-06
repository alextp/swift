// Types.

enum FooEnum1 { FooEnum1X };
enum FooEnum2 { FooEnum2X, FooEnum2Y };
enum FooEnum3 { FooEnum3X = 10, FooEnum3Y = 20 };

struct FooStruct1 {
  int x;
  double y;
};

typedef struct FooStruct2 {
  int x;
  double y;
} FooStructTypedef1;

typedef struct {
  int x;
  double y;
} FooStructTypedef2;

typedef int FooTypedef1;

extern int fooIntVar;

int fooFunc1(int a);
int fooFunc1AnonymousParam(int);
int fooFunc3(int a, float b, double c, int *d);

int redeclaredInMultipleModulesFunc1(int a);

#define FOO_MACRO_1 0
#define FOO_MACRO_2 1
#define FOO_MACRO_3 (-1)
#define FOO_MACRO_4 0xffffffffu
#define FOO_MACRO_5 0xffffffffffffffffull

