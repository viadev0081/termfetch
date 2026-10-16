#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "./lib/terminals.h"
#include "./lib/colors.h"

void get_process_name(  
    int pid,
    char * buffer,
    size_t len
) {
    char path[64];
    snprintf(path, sizeof(path), "/proc/%d/comm", pid);
    FILE * file = fopen(path, "r");
    if (file) {
        if (fgets(buffer, len, file)) {
            buffer[strcspn(buffer, "\n")] = 0;
        }

        fclose(file);
    }
    else {
        buffer[0] = '\0';
    }
}


void detect_and_run() {
    char * term_env = getenv("TERM");
    if (term_env) {
        if (strstr(term_env, "alacritty")) { 
            alacritty(); 
            return; 
        }
        if (strstr(term_env, "kitty")) { 
            kitty(); 
            return; 
        }
        if (strstr(term_env, "ghostty")) { 
            ghostty(); 
            return; 
        }
        if (strstr(term_env, "wezterm")) { 
            wezterm(); 
            return; 
        }
    }

    int pid = getppid(); 
    char proc_name[256];

    for (int i = 0; i < 3; i++) {
        if (pid <= 1) break;
        
        get_process_name(pid, proc_name, sizeof(proc_name));
        
        if (strcmp(proc_name, "alacritty") == 0) { 
            alacritty();
            return; 
        }
        if (strcmp(proc_name, "kitty") == 0) { 
            kitty(); 
            return; 
        }
        if (strcmp(proc_name, "ghostty") == 0) { 
            ghostty(); 
            return; 
        }
        if (strcmp(proc_name, "wezterm") == 0) { 
            wezterm();
            return; 
        }
        if (strcmp(proc_name, "konsole") == 0) {
            konsole();
            return; 
        }
        
        break; 
    }

    unknown();
}

int main() {
    detect_and_run();
    return 0;
}
