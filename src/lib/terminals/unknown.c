#include <stdio.h>
#include <stdlib.h>
#include "../colors.h"
#include "../terminals.h"

void unknown() {
    printf ( "\n" );
    printf ( white " █████████████████████████████████ Name: " reset "Unknown\n" );
    printf ( white " █                               █ Type: " reset "Generic\n" );
    printf ( white " █  ▜█▙                          █ Crossplatfom: " reset "Linux (BSD?)\n" );
    printf ( white " █   ▜█▙                         █ Configuring: "  reset "idk (from GUI or from conf files?)\n" );
    printf ( white " █    ▜█▙                        █ Nerd Fonts support: " reset "true\n" );
    printf ( white " █     ███                       █ ANSI support: " reset "true\n" );
    printf ( white " █    ▟█▛                        █ 256 colors support: " reset "true\n" );
    printf ( white " █   ▟█▛                         █ Config file type: " reset "idk\n" );
    printf ( white " █  ▟█▛   █████████████          █ \n" );
    printf ( white " █                               █ " red "██" green "██" yellow "██" blue "██" magenta "██"  reset "\n" );
    printf ( white " █████████████████████████████████ \n" );
    printf ( "\n" );
}
