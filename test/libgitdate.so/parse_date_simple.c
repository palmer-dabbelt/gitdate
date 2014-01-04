
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
    char output[1024];

    parse_date("Thu, 2 Jan 2014 08:42:47 -0500", output, 1024);

    if (strcmp(output, "1388670167 -0500") != 0)
        abort();

    fprintf(stderr, "\n\noutput: '%s'\n\n", output);

    return 0;
}
