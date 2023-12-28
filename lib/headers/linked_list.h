#ifndef LINKED_LIST
#define LINKED_LIST

#include <unistd.h>

typedef struct Lst_s {
  void *data;
  struct Lst_s *next;
} Lst_t;

Lst_t *lst_new(void *data);
size_t lst_len(const Lst_t *lst);
void lst_add_front(Lst_t **lst, Lst_t *node);
void lst_add_back(Lst_t **lst, Lst_t *node);
void lst_del_node(Lst_t **lst, size_t positon);

#endif
