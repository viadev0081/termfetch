#include <stdio.h>
#include <stdlib.h>
#include "../colors.h"
#include "../terminals.h"

void konsole() {
    printf ( "\n" );
    printf ( white " ███████████████████ Name: " reset "Konsole\n" );
    printf ( white " █                 █ Type: " reset "Common terminal emulator\n" );
    printf ( white " █    ██           █ Crossplatfom: " reset "Linux, FreeBSD, NetBSD, OpenBSD\n" );
    printf ( white " █      ██         █ Configuring: "  reset "From conf files or GUI\n" );
    printf ( white " █        ██       █ Nerd Fonts support: " reset "true\n" );
    printf ( white " █          ███    █ ANSI support: " reset "true\n" );
    printf ( white " █        ██       █ 256 colors support: " reset "true\n" );
    printf ( white " █      ██         █ Config file type: " reset "ini\n" );
    printf ( white " █    ██           █ \n" );
    printf ( white " █                 █ " red "██" green "██" yellow "██" blue "██" magenta "██" reset "\n" );
    printf ( white " ███████████████████ \n" );
    printf ( "\n" );
}
