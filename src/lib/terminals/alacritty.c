#include <stdio.h>
#include <stdlib.h>
#include "../colors.h"
#include "../terminals.h"

void alacritty() {
    printf ( "\n" );
    printf ( orange  "         ▂▂▂▂            \n" );
    printf ( orange  "        ▟█▀▀█▙           Name: " reset "Alacritty\n" );
    printf ( orange  "       ▟█▛  ▜█▙          Type: " reset "GPU accelerated\n" );
    printf ( orange  "      ▟█▛    ▜█▙         Crossplatfom: " reset  "Linux, MacOS, Windows, FreeBSD, OpenBSD, NetBSD\n" );
    printf ( orange  "     ▟█▛  ▄▄  ▜█▙        Configuring: "  reset  "From configuration files\n" );
    printf ( orange  "    ▟█▛  ▟██▙  ▜█▙       Nerd Fonts support: "  reset  "true\n" );
    printf ( orange  "   ▟█▛ ▟█▛  ▜█▙ ▜█▙      ANSI support: "        reset  "true\n" );
    printf ( orange  "  ▟█▛ ███    ███ ▜█▙     256 colors support: "  reset  "true\n" );
    printf ( orange  " ▟█▛   ▜▙    ▟▛   ▜█▙    Config file type: "  reset  "TOML\n" );
    printf ( orange  "▟█▛     ▜▙  ▟▛     ▜█▙   \n" );
    printf ( orange  "         ▜██▛            " red "██" green "██" yellow "██" blue "██" magenta "██" reset "\n" );
    printf ( orange  "          ▜▛             \n" );
    printf ( "\n" );
}
