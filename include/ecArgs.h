/** @file ecArgs.h
 *
 * @brief A description of the module's purpose. *****CHANGE ME*****
 *
 */

#ifndef ECARGS_H
#define ECARGS_H

#include <stdbool.h>

typedef struct CliOption
{
    char        short_opt;
    const char *long_opt;
    const char *description;
    bool        has_arg;
    void (*action)(const char *arg);
} CliOption;

void parse_cli_args(int argc, char *argv[], const CliOption *options);
void print_usage(const char *program_name, const CliOption *options);

#endif // CLI_WRAPPER_H
