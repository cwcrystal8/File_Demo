#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
  printf("Testing open(\"newfile.txt\", O_CREAT, S_IRUSR | S_IWUSR)\n"); //Creating a new file using open
  int file_descriptor = open("newfile.txt", O_CREAT, S_IRUSR | S_IWUSR);
  printf("File descriptor: %d\n", file_descriptor);
  printf("Testing close(file_descriptor)\n");
  int return_value = close(file_descriptor);
  printf("Return value of close: %d\n\n", return_value);

  file_descriptor = open("example.txt", O_RDONLY | O_APPEND); //Reading and appending to an existing file using open
  printf("Testing open(\"example.txt\", O_RDONLY | O_APPEND)\n");
  printf("File descriptor: %d\n", file_descriptor);

  /*
    YOUR CODE HERE
  */

  printf("Testing close(file_descriptor)\n");
  return_value = close(file_descriptor);
  printf("Return value of close: %d\n", return_value);


  close(file_descriptor);
  return 0;
}
