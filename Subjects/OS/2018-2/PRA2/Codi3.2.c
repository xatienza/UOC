#include <unistd.h>
#include <fcntl.h>

#define FILE "out.txt"

int main () {
  // Creates an empty file
  close(open(FILE, O_WRONLY | O_TRUNC | O_CREAT , 0600));
  
  fork();
  
  close(1);
  open(FILE, O_WRONLY);
  
  sleep(25);
  execlp("date", "date", NULL);

  
}