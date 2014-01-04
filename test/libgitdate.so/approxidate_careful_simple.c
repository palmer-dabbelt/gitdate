
/*
 * Copyright (C) 2013 Palmer Dabbelt
 *   <palmer@dabbelt.com>
 *
 * This file is part of gitdate.
 *
 * gitdate is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * gitdate is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with gitdate.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gitdate.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    unsigned long out;
    int err;

    out = approxidate_careful("Thu, 2 Jan 2014 08:42:47 -0500", &err);
    fprintf(stderr, "\n\noutput: %lu\n\n", out);

    if (err != 0)
        abort();

    if (out != 1388670167UL)
        abort();

    return 0;
}
