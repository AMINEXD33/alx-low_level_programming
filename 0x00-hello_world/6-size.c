#include <stdio.h>
/**
 * main - Entry point
 * 
 * Description: 'print all the size of the variable , depending on the system 
 *(32 or 64)'
 * 
 * Return: Always 0 (Success)
 */
int main(void) {
  int sizes[] = {sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float)};
  char *sentences[] = {"a char", "an int", "a long int", "a long long int", "a float"};
  int size_ = sizeof(sizes) / sizeof(int);

  for (int x = 0; x <= size_; x++) {
    printf("Size of %s : %d byte(s)\n", sentences[x], sizes[x]);
  }

  return 0;
}
