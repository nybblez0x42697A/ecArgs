/** @file main.c
 *
 * @brief A description of the module's purpose. *****CHANGE ME*****
 *
 */

#include <stdio.h>

#include "../include/ecArgs.h"

void
option_a_action(const char *arg)
{
    printf("Option A received: %s\n", arg);
}

void
option_b_action(const char *arg)
{
    printf("Option B received: %s\n", arg);
}

int
main(int argc, char *argv[])
{
    const CliOption options[] = {
        { 'a', "option-a", "Description for option A", true, option_a_action },
        { 'b', "option-b", "Description for option B", true, option_b_action },
        { 0, NULL, NULL, false, NULL } // End marker
    };

    parse_cli_args(argc, argv, options);

    // Your program logic goes here

    return 0;
}
