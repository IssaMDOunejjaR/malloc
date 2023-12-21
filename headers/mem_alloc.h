#ifndef MEM_ALLOC
#define MEM_ALLOC

#include <unistd.h>

typedef struct {
  void *ptr;
  size_t size;
} Chunk;

void *ft_malloc(size_t size);
void ft_free(void *_Nullable ptr);
void *ft_realloc(void *_Nullable ptr, size_t size);

#endif
