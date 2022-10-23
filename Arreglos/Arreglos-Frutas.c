#include <stdio.h>
int main() {
    char *frutas[5];
    
    frutas[0] = "🍓Frutilla";
    frutas[1] = "🥝Kiwi";
    frutas[2] = "🥭Mango";
    frutas[3] = "🍋Limon";
    frutas[4] = "🍍Anana";

    for (int i = 0; i < 5; i++)
    {
        printf(frutas[i]);
    }

    return 0;
}