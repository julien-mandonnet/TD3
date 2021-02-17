#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void stl();

int main () {
    
  char buffer[1024];
  int nb_read = 1;

  int fd_in = open("message.txt", O_RDONLY);
  int fd_out = open("copie.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

  if (fd_in < 0) {
    printf("Erreur fd_in\n");
    exit(1);
  }

  if (fd_out < 0) {
    printf("Erreur fd_out\n");
    exit(1);
  }

  while (nb_read) {
    nb_read = read(fd_in, buffer, 1024);
    write(fd_out, buffer, nb_read);
  }

  void stl();
  
}

void stl() {
  printf("\n");
  printf("*******");
  printf("\n");
}