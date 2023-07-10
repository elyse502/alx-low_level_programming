# 0x18. C - Dynamic libraries
## 0-hash_table_create.c
A function that creates a hash table.
* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
  * where `size` is the size of the array
* Returns a pointer to the newly created hash table
* If something went wrong, your function should return `NULL`

## 1-djb2.c
A hash function implementing the djb2 algorithm.
* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
* You are allowed to copy and paste the function from [**this page**](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

## 2-key_index.c
A function that gives you the index of a key.
* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
  * where `key` is the key
  * and `size` is the size of the array of the hash table
* This function should use the `hash_djb2` function that you wrote earlier
* Returns the index at which the key/value pair should be stored in the array of the hash table
* You will have to use this hash function for all the next tasks

## 3-hash_table_set.c
A function that adds an element to the hash table.
* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
  * Where `ht` is the hash table you want to add or update the key/value to
  * `key` is the key. `key` can not be an empty string
  * and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
* Returns: `1` if it succeeded, `0` otherwise
* In case of collision, add the new node at the beginning of the list

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:
* **hetairas** collides with **mentioner**
* **heliotropes** collides with **neurospora**
* **depravement** collides with **serafins**
* **stylist** collides with **subgenera**
* **joyful** collides with **synaphea**
* **redescribed** collides with **urites**
* **dram** collides with **vivency**
