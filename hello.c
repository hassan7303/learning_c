#include <unistd.h>

int main() {
    char message[] = "Hello, World!\n";
    write(1,message ,sizeof(message) -1);
    return 0;  
}
