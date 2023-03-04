#include "cmake.h"
#include "vector/Vector.h"

static void add_element(Vector *ptr, const char *str, int first_slash_position, int dot_position);
static void print_cmake(Vector *ptr, const char *str);
static void free_cmake(Vector *ptr);

void cmake(const char *str) {
    CMake cmake;
    vectorInit( &cmake.src ,START_VECTOR_SIZE);
    vectorInit( &cmake.include ,START_VECTOR_SIZE);

    int first_slash_position = 0;
    int dot_position = 0;

    for(int i = 0 ; i <= (int)strlen(str) + 1; i++){
        if (str[i] == '/' && first_slash_position == 0){
            first_slash_position = i;
        }
        else if (str[i] == '.'){
            dot_position = i;
        }
        else if (str[i] == ' ' || str[i] == '\0'){
            Vector *cmake_element = str[dot_position+1] == 'c' ? &cmake.src : &cmake.include;
            add_element(cmake_element, str, first_slash_position , dot_position);
            first_slash_position = 0;
            dot_position = 0;
        }
    }

    print_cmake(&cmake.include , "${INC_DIR}");
    print_cmake(&cmake.src , "${SRC_DIR}");
    free_cmake(&cmake.include);
    free_cmake(&cmake.src);

}

void add_element(Vector *ptr, const char *str, int first_slash_position, int dot_position){
    if(first_slash_position && dot_position) {
        int len = dot_position - first_slash_position + 2;
        char *new_str = malloc((len) * sizeof(char));

        for (int i = 0; i != len; i++) {
            new_str[i] = str[i + first_slash_position];
        }
        vectorPush(ptr, new_str);
    }
}

void print_cmake(Vector *ptr, const char *str){

    for (int i = 0 ; i != ptr->size; i++){
        printf("%s%s\n", str, (char*)ptr->items[i]);
    }
}
void free_cmake(Vector *ptr){
    for (int i = 0 ; i != ptr->size; i++){
        free(ptr->items[i]);
    }
    free(ptr->items);
}