/* Copyright (C) 2013 Palmer Dabbelt <palmer@dabbelt.com> */
/* SPDX-License-Identifier: GPL-2.0+ OR Apache-2.0 OR BSD-3-Clause */

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
