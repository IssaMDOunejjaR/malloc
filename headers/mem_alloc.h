#ifndef MEM_ALLOC
#define MEM_ALLOC

#include <unistd.h>

typedef struct {
  void *ptr;
  size_t size;
} Chunk_t;

typedef struct {
  Chunk_t *chunks;
  size_t length;
} Chunks_t;

typedef struct {
  Chunks_t allocated;
  Chunks_t freed;
} Heap_t;

void *ft_malloc(size_t size);
void ft_free(void *_Nullable ptr);
void *ft_realloc(void *_Nullable ptr, size_t size);

#endif
