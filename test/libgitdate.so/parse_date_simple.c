/* Copyright (C) 2013 Palmer Dabbelt <palmer@dabbelt.com> */
/* SPDX-License-Identifier: GPL-2.0+ OR Apache-2.0 OR BSD-3-Clause */

#include <gitdate.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char output[1024];

    parse_date("Thu, 2 Jan 2014 08:42:47 -0500", output, 1024);

    if (strcmp(output, "1388670167 -0500") != 0)
        abort();

    fprintf(stderr, "\n\noutput: '%s'\n\n", output);

    return 0;
}
