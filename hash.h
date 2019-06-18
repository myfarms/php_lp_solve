#ifndef HEADER_hash
#define HEADER_hash

typedef struct _hashelem
{
  char             *name;
  int               index;
  struct _hashelem *next;
  struct _hashelem *nextelem;
} hashelem;

typedef struct _hashtable
{
  hashelem         **table;
  int              size;
  int              base;
  int              count;
  struct _hashelem *first;
  struct _hashelem *last;
} hashtable;

#ifdef __cplusplus
extern "C" {
#endif

static inline hashtable *create_hash_table(int size, int base);
static inline void      free_hash_table(hashtable *ht);
static inline hashelem  *findhash(const char *name, hashtable *ht);
static inline hashelem  *puthash(const char *name, int index, hashelem **list, hashtable *ht);
static inline void      drophash(const char *name, hashelem **list, hashtable *ht);
static inline void      free_hash_item(hashelem **hp);
static inline hashtable *copy_hash_table(hashtable *ht, hashelem **list, int newsize);
static inline int       hashval(const char *string, int size);

#ifdef __cplusplus
 }
#endif

#endif /* HEADER_lp_hash */
