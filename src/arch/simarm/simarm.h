/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     src/arch/simarm/simarm.h                                   *
 * Created:       2004-11-04 by Hampa Hug <hampa@hampa.ch>                   *
 * Last modified: 2004-11-15 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 2004 Hampa Hug <hampa@hampa.ch>                        *
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


#ifndef PCE_SIMARM_SIMARM_H
#define PCE_SIMARM_SIMARM_H 1


#include <config.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef HAVE_LIMITS_H
#include <limits.h>
#endif


#define PCE_BRK_STOP  1
#define PCE_BRK_ABORT 2
#define PCE_BRK_SNAP  3


typedef void (*seta_uint8_f) (void *ext, unsigned long addr, unsigned char val);
typedef void (*seta_uint16_f) (void *ext, unsigned long addr, unsigned short val);
typedef unsigned char (*geta_uint8_f) (void *ext, unsigned long addr);
typedef unsigned short (*geta_uint16_f) (void *ext, unsigned long addr);

typedef void (*set_uint8_f) (void *ext, unsigned char val);
typedef void (*set_uint16_f) (void *ext, unsigned short val);
typedef unsigned char (*get_uint8_f) (void *ext);
typedef unsigned short (*get_uint16_f) (void *ext);


struct simarm_t;


extern char *par_terminal;
extern char *par_video;
extern char *par_cpu;


void pce_dump_hex (FILE *fp, void *buf, unsigned long n,
  unsigned long addr, unsigned cols, char *prefix, int ascii
);


#include <devices/memory.h>
#include <devices/nvram.h>
#include <devices/serport.h>

#include <cpu/arm/arm.h>

#include <libini/libini.h>

#include <lib/log.h>
#include <lib/brkpt.h>
#include <lib/load.h>


/*****************************************************************************
 * @short The simarm context struct
 *****************************************************************************/
typedef struct simarm_s {
  arm_t              *cpu;

  memory_t           *mem;

  nvram_t            *nvr;

  ixp_intc_t         *intc;

  ixp_timer_t        *timer;

  serport_t          *serport[2];

  breakpoint_t       *brkpt;

  unsigned long long clk_cnt;
  unsigned long      clk_div[4];

  unsigned           brk;
} simarm_t;


/*****************************************************************************
 * @short Create a new simarm context
 * @param ini A libini simarm section. Can be NULL.
 *****************************************************************************/
simarm_t *sarm_new (ini_sct_t *ini);

/*****************************************************************************
 * @short Delete a simarm context
 *****************************************************************************/
void sarm_del (simarm_t *sim);

/*****************************************************************************
 * @short  Get the number of clock cycles
 * @return The number of clock cycles the simarm went through since the last
 *         initialization
 *****************************************************************************/
unsigned long long sarm_get_clkcnt (simarm_t *sim);

/*****************************************************************************
 * @short Reset the simulator
 *****************************************************************************/
void sarm_reset (simarm_t *sim);

/*****************************************************************************
 * @short Clock the simulator
 * @param n The number of clock cycles. Must not be 0.
 *****************************************************************************/
void sarm_clock (simarm_t *sim, unsigned n);

/*****************************************************************************
 * @short Interrupt the emulator
 * @param val The type of break (see PCE_BRK_* constants)
 *
 * This is a hack
 *****************************************************************************/
void sarm_break (simarm_t *sim, unsigned char val);

/*****************************************************************************
 * Don't use.
 *****************************************************************************/
void sarm_set_keycode (simarm_t *sim, unsigned char val);

void sarm_set_msg (simarm_t *sim, const char *msg, const char *val);


#endif