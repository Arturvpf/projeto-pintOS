#define FLOAT_SHIFT_AMOUNT 17
#define F mypow(14)
#define Q 14
int mypow(int p);
typedef int float_type;
#define FLOAT_CONST(A) ((float_type)(A * F))
#define FLOAT_ADD(A,B) (A + B)
#define FLOAT_ADD_MIX(A,B) (A + (B * F))
#define FLOAT_SUB(A,B) (A - B)
#define FLOAT_SUB_MIX(A,B) (A - (B * F))
#define FLOAT_MULT_MIX(A,B) (A * B)
#define FLOAT_DIV_MIX(A,B) (A / B)
#define FLOAT_MULT(A,B) ((float_type)(((int64_t) A)* B / F))
#define FLOAT_DIV(A,B) ((float_type)((((int64_t) A) * F) / B))
#define FLOAT_INT_PART(A) (A >> FLOAT_SHIFT_AMOUNT)
#define FLOAT_ROUND(A) (A >= 0 ? ((A + (1 * mypow(Q - 1))) / F) : ((A - (1 * mypow(Q - 1)))/F))
