/** @file ecArgs.h
 *
 * @brief A description of the module's purpose. *****CHANGE ME*****
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include "../include/ecArgs.h"

void
parse_cli_args(int argc, char *argv[], const CliOption *options)
{
    struct option *long_options;
    char *         short_options;
    int            long_options_count  = 0;
    int            short_options_count = 0;

    // Count options and allocate memory
    for (; options[long_options_count].short_opt != 0; long_options_count++)
    {
        if (options[long_options_count].has_arg)
        {
            short_options_count += 2;
        }
        else
        {
            short_options_count++;
        }
    }

    long_options  = calloc(long_options_count + 1, sizeof(struct option));
    short_options = calloc(short_options_count + 1, sizeof(char));

    // Fill in long_options and short_options
    for (int i = 0; i < long_options_count; i++)
    {
        long_options[i].name = options[i].long_opt;
        long_options[i].has_arg
            = options[i].has_arg ? required_argument : no_argument;
        long_options[i].flag = NULL;
        long_options[i].val  = options[i].short_opt;

        short_options[i] = options[i].short_opt;
        if (options[i].has_arg)
        {
            short_options[i + 1] = ':';
        }
    }

    int c;
    while ((c = getopt_long(argc, argv, short_options, long_options, NULL))
           != -1)
    {
        for (int i = 0; i < long_options_count; i++)
        {
            if (c == options[i].short_opt)
            {
                options[i].action(optarg);
                break;
            }
        }
    }

    free(long_options);
    free(short_options);
}

void
print_usage(const char *program_name, const CliOption *options)
{
    printf("Usage: %s [OPTIONS] [ARGS]\n\n", program_name);
    printf("Options:\n");

    for (int i = 0; options[i].short_opt != 0; i++)
    {
        printf("  -%c, --%-10s %s\n",
               options[i].short_opt,
               options[i].long_opt,
               options[i].description);
    }
}
