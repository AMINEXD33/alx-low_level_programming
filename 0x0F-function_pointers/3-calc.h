#ifndef _3_op_functions_H
#define _3_op_functions_H
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif /*_3_op_functions_H*/


#ifndef _3_get_op_func_H
#define _3_get_op_func_H
int (*get_op_func(char *s))(int, int);
#endif /*_3_get_op_func_H*/

/*struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;