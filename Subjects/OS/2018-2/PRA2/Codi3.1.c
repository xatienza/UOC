#include <unistd.h>
#include <fcntl.h>

#define FILE "out.txt"

int main () {
  // Creates an empty file
  close(open(FILE, O_WRONLY | O_TRUNC | O_CREAT , 0600)); 
  
  
  close(1);
  open(FILE, O_WRONLY);

  fork ();
  
  sleep(15);
  execlp("date", "date", NULL);
}