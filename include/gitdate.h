
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

#ifndef __GITDATE__H
#define __GITDATE__H

#ifdef __cplusplus
namespace gitdate {
#endif

extern int parse_date(const char *date, char *result, int maxlen);

unsigned long approxidate_careful(const char *date, int *error_ret);

#ifdef __cplusplus
}
#endif

#endif
