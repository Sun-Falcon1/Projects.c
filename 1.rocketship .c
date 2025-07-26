#include <stdio.h>

//prototype
  void printCap();
  void printBody();
  void printBoosters();
  void printFlames();



#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define WHITE "\033[1;37m"
#define RESET "\033[0m"


void printCap() {
    printf(YELLOW "    ^    \n" RESET);
    printf(YELLOW "   / \\   \n" RESET);

}

void printBody() {
    printf (YELLOW "   |#|  \n"RESET);
    printf (YELLOW "   |#|  \n"RESET);
    printf (YELLOW "   |#|  \n"RESET);

}

void printBoosters() {
    printf(RED " /|   |\\ \n" RESET);
    printf(RED "/_|   |_\\\n" RESET);
}
void printFlames (){
        printf(RED "  ***** \n"RESET);
        printf(RED "   *** \n"RESET);
        printf(RED "    ** \n"RESET);
        printf(RED "     * \n"RESET);
}

 int main (){
 printf (WHITE  "Colorful Rocket ship: Volcano !\n\n"RESET);

    printCap();
    printBody();
    printBoosters();
    printFlames();

return 0;

}
