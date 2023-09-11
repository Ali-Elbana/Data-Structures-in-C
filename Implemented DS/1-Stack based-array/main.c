
/***************************************************************/
/*                          Libraries                          */
/***************************************************************/
#include "stack-array.h"
#include <stdio.h>

/***************************************************************/
/*                         Application                         */
/***************************************************************/

void display(ElEMENTS_TYPE element) { printf("Element: %d\n", element); }

int main(void) {

  Stack myStack;
  ElEMENTS_TYPE stackElement = 0;

  myStack.init = init_vStack;
  myStack.push = push_vStack;
  myStack.isFull = is_vStackFull;
  myStack.pop = pop_vStack;
  myStack.isEmpty = is_vStackEmpty;
  myStack.getTop = get_vStackTop;
  myStack.getSize = get_vStackSize;
  myStack.clear = clear_vStack;
  myStack.disp = disp_vStack;

  myStack.init(&myStack);

  printf("\n---------------PUSH-------------\n");

  for (int i = 0; i < MAX_SIZE; i++) {

    if (myStack.isFull(&myStack) == FALSE) {
      myStack.push(i + 1, &myStack);
      printf("Stack element%d = %d\n", i + 1, myStack.entry[i]);
    }
  }

  printf("\n---------------PRINT-------------\n");

  myStack.disp(&myStack, display);

  printf("\n---------------POP-------------\n");

  for (int i = 0; i < MAX_SIZE; i++) {

    if (myStack.isEmpty(&myStack) == FALSE) {
      myStack.pop(&stackElement, &myStack);
      printf("Element%d = %d\n", i + 1, stackElement);
    }
  }

  printf("\n---------------SIZE-------------\n");

  printf("Stack size = %d\n", myStack.getSize(&myStack));

  printf("\n---------------CLS-------------\n");

  myStack.clear(&myStack);

  printf("Stack size = %d\n", myStack.getSize(&myStack));

  return 0;
}
/***************************************************************/
/***************************************************************/
