#include <stdbool.h>
#include <stddef.h>

/************** Data structure declarations ****************/
typedef struct list_ele {
    char *value;
    struct list_ele *next;
} list_ele_t; // this is the alias for struct list_ele, size of list_ele_t is 16 bytes

// struct list_ele {
//     char *value;
//     struct list_ele *next;
// };
// typedef struct list_ele list_ele_t;


typedef struct {
    list_ele_t *head;
    list_ele_t *tail;
    size_t size;
} queue_t;

/************** Operations on queue ************************/

/* Create empty queue. */
queue_t *queue_new(void);

/* Free ALL storage used by queue. */
void queue_free(queue_t *q);

/* Attempt to insert element at head of queue. */
bool queue_insert_head(queue_t *q, const char *s);

/* Attempt to insert element at tail of queue. */
bool queue_insert_tail(queue_t *q, const char *s);

/* Attempt to remove element from head of queue. */
bool queue_remove_head(queue_t *q, char *sp, size_t bufsize);

/* Return number of elements in queue. */
size_t queue_size(queue_t *q);

/* Reverse elements in queue */
void queue_reverse(queue_t *q);
