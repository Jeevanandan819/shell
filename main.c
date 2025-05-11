#include <stdio.h>
#include "commands/commands.h"

int main()
{
    st_shell_add_command_group(command_database);
    st_shell_init();
}