/* Copyright (C) 2013 Palmer Dabbelt <palmer@dabbelt.com> */
/* SPDX-License-Identifier: GPL-2.0+ OR Apache-2.0 OR BSD-3-Clause */

#include <gitdate.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    unsigned long out;
    int err;

    out = gitdate::approxidate_careful("Thu, 2 Jan 2014 08:42:47 -0500", &err);
    fprintf(stderr, "\n\noutput: %lu\n\n", out);

    if (err != 0)
        abort();

    if (out != 1388670167UL)
        abort();

    return 0;
}
