#include "a_function.h"
#include "more_functions.h"
#include <stdio.h>

int main() {
  char message[] = "Hello World\n";
  printf("message: %s", message);

  a_function(message);
  another_function();
  yet_another_function();

  printf("message is stored at memory address: %zx\n", (size_t)&message[0]);
  printf("message values:\n");
  printf("char\tdec\thex\n");
  for (size_t c = 0; c < 13; ++c) {
    printf("%c\t%d\t%02x\n", message[c], message[c], message[c]);
  }
  
  const int startValue = 65;
  for (int i = 0; i < 26; i++) {
    printf("%c\n", (startValue+i));
  }

  return 0;
}
