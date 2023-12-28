#include "print.h"

void ft_putchar(char c) { write(1, &c, 1); }

void ft_putstr(char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    write(1, &str[i], 1);
  }
}

void ft_putendl(char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    write(1, &str[i], 1);
  }

  write(1, "\n", 1);
}

void ft_putchar_fd(int fd, char c) { write(fd, &c, 1); }

void ft_putstr_fd(int fd, char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    write(fd, &str[i], 1);
  }
}

void ft_putendl_fd(int fd, char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    write(fd, &str[i], 1);
  }

  write(fd, "\n", 1);
}
