#include <iostream>
#include <unistd.h>

int main()
{

    std::cout << "Prints from custom service 1" << std::endl;

    char* argument_list[] = {"/usr/bin/tree", "-L","1", NULL};
    execvp("/usr/bin/tree", argument_list);
    std::cout << "Prints from custom service" << std::endl;
    
    return 0;
}

