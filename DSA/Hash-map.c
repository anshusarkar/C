#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Hash maps or graphs ...
// Definition of the KeyValue struct
struct KeyValue {
    char* key;               // Pointer to the key (string)
    int value;              // Integer value associated with the key
    struct KeyValue *next;   // Pointer to the next KeyValue for chaining (linked list)
};

// Definition of the HashMap struct
struct HashMap {
    struct KeyValue *table[10]; // Array of pointers to KeyValue structs
}; // This is to covert values in to an integer array .

// Function to create a new KeyValue 

// above structs are used to create a Dictionary of arrarys in terms of python ...

struct KeyValue* create_key_value_pair(const char* key, int value) {
    struct KeyValue* pair = (struct KeyValue*)malloc(sizeof(struct KeyValue)); // Allocate memory for KeyValue pair
    if (pair == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL; // Return NULL if memory allocation fails
    }
    pair->key = strdup(key); // Duplicate the key string
    pair->value = value;     // Set the value
    pair->next = NULL;       // Initialize the next pointer to NULL
    return pair;             // Return the created KeyValue pair
}

int main() {
    // Create an instance of HashMap
    struct HashMap H;
    for (int i = 0; i < 10; i++) {
        H.table[i] = NULL; // Initialize the table to NULL
    }

    // Create a new KeyValue pair
    struct KeyValue* pair = create_key_value_pair("A", 100);
    
    // Check if memory allocation was successful
    if (pair == NULL) {
        return 1; // Exit if memory allocation failed
    }

    // Add the pair to the HashMap (this example does not handle collisions)
    H.table[0] = pair; // Insert into the first bucket (index 0)

    // Printing the contents of the pair
    printf("%s : ", pair->key);
    printf("%d\n", pair->value);

    // Freeing allocated memory
    free(pair->key); // Free the duplicated key string
    free(pair);      // Free the KeyValue pair itself

    return 0;
}
