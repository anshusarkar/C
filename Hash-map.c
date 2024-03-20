#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Contains issues in memory allocation .

struct KeyValue {

    char* key;
    int value;

    struct KeyValue *next; // self referance to make the KeyValue pair a single construct you know beacuse of this
                               // each instance call would actually forming a singular structure .

}KeyValuePair; // KeyValue is an instance of KeyValuePair struct i.e. a custom data structure 

struct HashMap {

    KeyValuePair *table[10]; // Here we are defining a custom data structure using custom data type KeyValuePair called hash map
                             // Where we are making it an array of key/value pairs of size 10 to avoide colisions 

}H; // An instance of HashMap struct where each instance call will initialize an amount of memory

// Python's equivalent of Hashmap is dictionaries here due to implementation of an array
// in the struct HasMap, it's python equivalent would be a dic of lists
// How ever Insted of making a whole new struct 'HashMap' for solving colision the array initalization can be done in the Keyvalue struct 
// by making int value ; to int *value[] i.e. an integer array .

int main(){
// Now allocating memory for HashMap struct instance H of data type Keyvalue


KeyValuePair* pair = (KeyValuePair*)malloc(sizeof(KeyValuePair));

    // Check if memory allocation was successful
    if (pair == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

// Now linking the key value pairs with pair instance

pair->key = strdup("Hello, mom I created a hashmap in C !"); // strdup()is used as key is of char type look for strdup in geek for geeks

pair->value = 100 ;

pair->next = NULL; // Now using a while condtion and using multiple instances multiple hasmaps can be created .





// Printing the conatains of the pair 

printf("%s ",pair->key);
printf("%d ",pair->value);

free(pair->key);

free(pair->value);

free(pair);

return 0 ;
}


