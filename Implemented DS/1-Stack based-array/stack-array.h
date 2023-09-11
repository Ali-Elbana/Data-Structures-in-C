#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

/***************************************************************/
/*                           Macros                            */
/***************************************************************/
#define ElEMENTS_TYPE int
#define MAX_SIZE 10
#define TRUE 1
#define FALSE 0

/***************************************************************/
/*                    Create Data structure                    */
/***************************************************************/
struct stack {

  void (*init)(struct stack *);
  char (*isFull)(struct stack *);
  void (*push)(ElEMENTS_TYPE, struct stack *);
  void (*pop)(ElEMENTS_TYPE *, struct stack *);
  char (*isEmpty)(struct stack *);
  void (*getTop)(ElEMENTS_TYPE *, struct stack *);
  int (*getSize)(struct stack *);
  void (*clear)(struct stack *);
  void (*disp)(struct stack *, void (*pDisp)(ElEMENTS_TYPE element));

  int top;
  ElEMENTS_TYPE entry[MAX_SIZE];
};

typedef struct stack Stack;

/***************************************************************/
/*                     Methods Declarations                    */
/***************************************************************/
void init_vStack(Stack *myStack);
/***************************************************************/
char is_vStackFull(Stack *myStack);
/***************************************************************/
void push_vStack(ElEMENTS_TYPE element, Stack *myStack);
/***************************************************************/
void pop_vStack(ElEMENTS_TYPE *element, Stack *myStack);
/***************************************************************/
char is_vStackEmpty(Stack *myStack);
/***************************************************************/
void get_vStackTop(ElEMENTS_TYPE *element, Stack *myStack);
/***************************************************************/
int get_vStackSize(Stack *myStack);
/***************************************************************/
void clear_vStack(Stack *myStack);
/***************************************************************/
void disp_vStack(Stack *myStack, void (*pDisp)(ElEMENTS_TYPE element));
/***************************************************************/

#endif
