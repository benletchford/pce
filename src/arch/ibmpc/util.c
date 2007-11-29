/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     src/arch/ibmpc/util.c                                      *
 * Created:       2004-06-23 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 2004-2007 Hampa Hug <hampa@hampa.ch>                   *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id$ */


#include "main.h"


int str_istail (const char *str, const char *tail)
{
	unsigned i, j;

	i = strlen (str);
	j = strlen (tail);

	while ((i > 0) && (j > 0)) {
		i -= 1;
		j -= 1;

		if (str[i] != tail[j]) {
			return (0);
		}
	}

	return (j == 0);
}

int str_isarg (const char *str, const char *arg1, const char *arg2)
{
	if (*str != '-') {
		return (0);
	}

	if (arg1 != NULL) {
		if (str[0] == '-') {
			if (strcmp (str + 1, arg1) == 0) {
				return (1);
			}
		}
	}

	if (arg2 != NULL) {
		if ((str[0] == '-') && (str[1] == '-')) {
			if (strcmp (str + 2, arg2) == 0) {
				return (1);
			}
		}
	}

	return (0);
}

ini_sct_t *pce_load_config (const char *fname)
{
	ini_sct_t *ini;
	char      *home;
	char      buf[1024];

	if (fname != NULL) {
		ini = ini_read (fname);
		if (ini != NULL) {
			pce_log_tag (MSG_INF,
				"PCE:", "using config file \"%s\"\n", fname
			);
			return (ini);
		}
	}

	home = getenv ("HOME");
	if (home != NULL) {
		sprintf (buf, "%s/.pce.cfg", home);
		ini = ini_read (buf);
		if (ini != NULL) {
			pce_log_tag (MSG_INF,
				"PCE:", "using config file \"%s\"\n", buf
			);
			return (ini);
		}
	}

	return (NULL);
}
