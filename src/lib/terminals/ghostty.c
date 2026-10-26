#include <stdio.h>
#include <stdlib.h>
#include "../colors.h"
#include "../terminals.h"

void ghostty() {
    printf ( "\n" );
    printf ( white "  ▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂▂  \n" );
    printf ( white " ▟█████████████████████▙ Name: " reset "Ghostty\n" );
    printf ( white " █                     █ Type: " reset "GPU accelerated\n" );
    printf ( white " █                     █ Crossplatfom: " reset "Linux, MacOS, Windows, FreeBSD\n" );
    printf ( white " █   ▜█▙               █ Configuring: "  reset "From configuration files\n" );
    printf ( white " █    ███  █████████   █ Nerd Fonts support: " reset "true\n" );
    printf ( white " █   ▟█▛               █ ANSI support: " reset "true\n" );
    printf ( white " █                     █ 256 colors support: " reset "true\n" );
    printf ( white " █                     █ Config file type: " reset "Ghostty config format\n" );
    printf ( white " █                     █ \n" );
    printf ( white " █    ▟█▙       ▟█▙    █ " red "██" green "██" yellow "██" blue "██" magenta "██" reset "\n" );
    printf ( white "  ▜███▛ ▜███████▛ ▜███▛  \n" );
    printf ( "\n" );
}
