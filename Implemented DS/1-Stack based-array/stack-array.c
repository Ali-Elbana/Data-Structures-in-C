/***************************************************************/
/*                          Libraries                          */
/***************************************************************/

#include "stack-array.h"

/***************************************************************/
/*                    Data structure methods                   */
/***************************************************************/
void init_vStack(Stack *myStack) { myStack->top = 0; }
/***************************************************************/
char is_vStackFull(Stack *myStack) {

  char isFull = FALSE;

  if (myStack->top > (MAX_SIZE - 1)) {
    isFull = TRUE;
  } else {
    isFull = FALSE;
  }

  return isFull;
}
/***************************************************************/
void push_vStack(ElEMENTS_TYPE element, Stack *myStack) {
  myStack->entry[myStack->top] = element;
  myStack->top++;
}
/***************************************************************/
void pop_vStack(ElEMENTS_TYPE *element, Stack *myStack) {

  myStack->top--;

  *element = myStack->entry[myStack->top];

  myStack->entry[myStack->top] = 0;
}
/***************************************************************/
char is_vStackEmpty(Stack *myStack) {

  char isEmpty = FALSE;

  if (myStack->top <= 0) {
    isEmpty = TRUE;
  } else {
    isEmpty = FALSE;
  }

  return isEmpty;
}
/***************************************************************/
void get_vStackTop(ElEMENTS_TYPE *element, Stack *myStack) {
  *element = myStack->entry[myStack->top - 1];
}
/***************************************************************/
int get_vStackSize(Stack *myStack) { return myStack->top; }
/***************************************************************/
void clear_vStack(Stack *myStack) {

  for (int i = 0; i < MAX_SIZE; i++) {
    myStack->entry[i] = 0;
  }

  myStack->top = 0;
}
/***************************************************************/
void disp_vStack(Stack *myStack, void (*pDisp)(ElEMENTS_TYPE element)) {
  for (int i = myStack->top; i > 0; i--) {
    pDisp(myStack->entry[i - 1]);
  }
}
/***************************************************************/