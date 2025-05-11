#include "math_handler.h"

st_shell_command_entry_t math_add__command = {
    .command = "math.add",
    .arg_count = 2,
    .arg_help = "num1$num2",
    .arg_types = (st_shell_arg_type_t[]){ST_SHELL_ARG_TYPE_UINT32, ST_SHELL_ARG_TYPE_UINT32},
    .handler = math_add_handler,
    .help_text = "adds two numbers"
};

st_shell_command_entry_t math_sub__command = {
    .command = "math.sub",
    .arg_count = 2,
    .arg_help = "num1$num2",
    .arg_types = (st_shell_arg_type_t[]){ST_SHELL_ARG_TYPE_UINT32, ST_SHELL_ARG_TYPE_UINT32},
    .handler = math_sub_handler,
    .help_text = "subtracts two numbers"
};

st_shell_command_entry_t math_mul__command = {
    .command = "math.mul",
    .arg_count = 2,
    .arg_help = "num1$num2",
    .arg_types = (st_shell_arg_type_t[]){ST_SHELL_ARG_TYPE_UINT32, ST_SHELL_ARG_TYPE_UINT32},
    .handler = math_mul_handler,
    .help_text = "multiplies two numbers"
};

