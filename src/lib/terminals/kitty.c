#include <stdio.h>
#include <stdlib.h>
#include "../colors.h"
#include "../terminals.h"

void kitty() {
    printf ( "\n" );
    printf ( white " ████████████████████████████████████████ Name: " reset "Kitty\n" );
    printf ( white " █                                      █ Type: " reset "GPU accelerated\n" );
    printf ( white " █ ▜█▙      █   █ █ █████ █████ █     █ █ Crossplatfom: " reset "Linux, MacOS, Windows, FreeBSD, NetBSD, OpenBSD\n" );
    printf ( white " █  ▜█▙     █  █  █   █     █    █   █  █ Configuring: "  reset "From configuration files\n" );
    printf ( white " █   ▜█▙    █ █   █   █     █     █ █   █ Nerd Fonts support: " reset "true\n" );
    printf ( white " █    ███   ██    █   █     █      █    █ ANSI support: " reset "true\n" );
    printf ( white " █   ▟█▛    █ █   █   █     █      █    █ 256 colors support: " reset "true\n" );
    printf ( white " █  ▟█▛     █  █  █   █     █      █    █ Config file type: " reset "Kitty config format\n" );
    printf ( white " █ ▟█▛      █   █ █   █     █      █    █ \n" );
    printf ( white " █                                      █ " red "██" green "██" yellow "██" blue "██" magenta "██" reset "\n" );
    printf ( white " ████████████████████████████████████████ \n" );
    printf ( "\n" );
}

