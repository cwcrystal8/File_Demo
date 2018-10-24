#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

  char buf[50];
  size_t n;

  int file_descriptor = open("example.txt", O_RDONLY | O_APPEND); //Reading and appending to an existing file using open
  printf("Testing open(\"example.txt\", O_RDONLY | O_APPEND)\n");
  printf("File descriptor: %d\n\n", file_descriptor);

  printf("Testing read(file_descriptor, buf, 49)\n");
  n = read(file_descriptor, buf, 49);
  buf[49] = 0;
  printf("Printing buf:\n%s\n", buf);
  printf("Printing returned value n: %ld\n\n", n);

  printf("Testing close(file_descriptor)\n");
  int return_value = close(file_descriptor);
  printf("Return value of close: %d\n", return_value);

  printf("Testing open(\"newfile.txt\", O_CREAT|O_WRONLY, S_IRUSR)\n"); //Creating a new file using open
  file_descriptor = open("newfile.txt", O_CREAT|O_WRONLY, S_IRUSR);
  printf("File descriptor: %d\n\n", file_descriptor);

  n = write(file_descriptor, buf, 40);
  printf("Printing returned value n after write in \"newfile.txt\": %ld\n\n", n);

  printf("Testing close(file_descriptor)\n");
  return_value = close(file_descriptor);
  printf("Return value of close: %d\n\n", return_value);


  close(file_descriptor);
  return 0;
}
