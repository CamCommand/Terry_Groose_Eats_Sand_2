#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <windows.h>

//Made by Cameron Drummond for some reason
int main() {
    int sand = 1;
    int ch;
    int math = 0;
    int i = INT_MAX;
    printf("              Welcome to Terry Groose Eats Sand\n");
    printf("_________________________________________________________________\n");
    printf("                    Press Enter to start\n");
    getchar();
    system("CLS");
    printf("         Terry's gonna eat Sand!                   \n");
    printf("                 /\\                       \n");
    printf("                /WW\\                      \n");
    printf("               /WWWWW\\                   \n");
    printf("              /WWW   ~ \\                 \n");
    printf("             /  ~     0 |                 \n");
    printf("             |  0   P   |                 \n");
    printf("              \\     u   )                 \n");
    printf("                \\      /                   \n");
    printf("            ___/       \___               \n");
    printf("          /                 \\           \n");
    printf("          \\   v          v  \\           \n");
    printf("           \\   \\ .     ./    \\            \n");
    printf("           |\\   \\      /    /            \n");
    printf("           | :::::::::::::: |            \n");
    printf("           |::::::::::::::::|            \n");
    printf("          ::::::::::::::::::::           \n");
    printf("         ::::::::::::::::::::::          \n");
    printf("         ::::::::::::::::::::::          \n");
    printf("        [::::::::::::::::::::::]         \n");
    printf("________[                      ]_________\n");
    printf("         \\____________________/          \n");
    printf("Press Enter to eat sand\n");
    while (sand < i) {
        printf("Sand eaten \n%"
               "d", sand);
        ch = fgetc(stdin);
        if (ch == 0x0A) {
            Sleep(250);
            system("CLS");
            if (sand == 50) {
                printf("         Terry drinking milk                     \n");
                printf("                 /\\                       \n");
                printf("                /WW\\                      \n");
                printf("               /WWWWW\\                   \n");
                printf("              /WWW   ~ \\                 \n");
                printf("             /  ~     0 |                 \n");
                printf("             |  0   P   |                 \n");
                printf("              \\     o   |   milk             \n");
                printf("                \\      /      time             \n");
                printf("            ___/       \___               \n");
                printf("          /                \\           \n");
                printf("         \\   v          n   \\                         \n");
                printf("          \\   \\      .   \\   \\                        \n");
                printf("           \\   \\          \\   \\                          \n");
                printf("           | :::::::::::::: |  \\ \\                       \n");
                printf("           |::::::::::::::::|     \\ \\                      \n");
                printf("          ::::::::::::::::::::     /   \\                   \n");
                printf("         ::::::::::::::::::::::     ( ||||)                   \n");
                printf("         ::::::::::::::::::::::               /\\           \n");
                printf("        [::::::::::::::::::::::]             | M |          \n");
                printf("________[                      ]_________    |___|\n");
                printf("         \\____________________/                          \n");
                Sleep(1000);
                system("CLS");
                printf("                       sip                     \n");
                printf("                 /\\                       \n");
                printf("                /WW\\                      \n");
                printf("               /WWWWW\\                   \n");
                printf("              /WWW   ~ \\                 \n");
                printf("             /  ~     - |_____----                \n");
                printf("             |  -   P  / |||||    )           \n");
                printf("              \\     < \\__|_|   /           \n");
                printf("                \\      /   /   /              \n");
                printf("            ___/       \___/  /             \n");
                printf("          /                  /              \n");
                printf("         \\   v          U /                     \n");
                printf("          \\   \\      .   |                        \n");
                printf("           \\   \\         |                          \n");
                printf("           | :::::::::::::: |                         \n");
                printf("           |::::::::::::::::|                           \n");
                printf("          ::::::::::::::::::::                        \n");
                printf("         ::::::::::::::::::::::                        \n");
                printf("         ::::::::::::::::::::::                         \n");
                printf("        [::::::::::::::::::::::]                       \n");
                printf("________[                      ]_________\n");
                printf("         \\____________________/                          \n");
                Sleep(3000);
                system("CLS");

            }
            if ((math % 2) == 1) {
                printf("         Terry eating Sand                      \n");
                printf("                 /\\                       \n");
                printf("                /WW\\                      \n");
                printf("               /WWWWW\\                   \n");
                printf("              /WWW   ~ \\                 \n");
                printf("             /  ~     0 |                 \n");
                printf("             |  0   P   |                 \n");
                printf("              \\     <~  |                 \n");
                printf("                \\      /                   \n");
                printf("            ___/       \___               \n");
                printf("          /                \\           \n");
                printf("          \\   v          v  \\           \n");
                printf("           \\   \\ .     ./    )            \n");
                printf("           |\\   \\      /    /            \n");
                printf("           | :::::::::::::: |            \n");
                printf("           |::::::::::::::::|            \n");
                printf("          ::::::::::::::::::::           \n");
                printf("         ::::::::::::::::::::::          \n");
                printf("         ::::::::::::::::::::::          \n");
                printf("        [::::::::::::::::::::::]         \n");
                printf("________[                      ]_________\n");
                printf("         \\____________________/          \n");
                math = 0;
            } else {
                printf("         Terry eating Sand                      \n");
                printf("                 /\\                       \n");
                printf("                /WW\\                      \n");
                printf("               /WWWWW\\                   \n");
                printf("              /WWW   ~ \\                 \n");
                printf("             /  ~     0 |                 \n");
                printf("             |  0   P   |                 \n");
                printf("              \\     ~   |   munch              \n");
                printf("                \\      /      chew             \n");
                printf("           ____/       \___               \n");
                printf("         /                \\           \n");
                printf("         \\   v         v  \\           \n");
                printf("          \\   \\       /   \\            \n");
                printf("           \\   \\     /   )            \n");
                printf("           | :::::::::::::: |            \n");
                printf("           |::::::::::::::::|            \n");
                printf("          ::::::::::::::::::::           \n");
                printf("         ::::::::::::::::::::::          \n");
                printf("         ::::::::::::::::::::::          \n");
                printf("        [::::::::::::::::::::::]         \n");
                printf("________[                      ]_________\n");
                printf("         \\____________________/          \n");
                math = 1;
            }
            if (sand <= 49) {
                sand++;
            }
            if (sand >= 50) {
                sand++;
                sand++;
            }
        }
    }
    return 0;
}
