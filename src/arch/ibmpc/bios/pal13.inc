;*****************************************************************************
;* pce                                                                       *
;*****************************************************************************

;*****************************************************************************
;* File name:     src/arch/ibmpc/bios/pal13.inc                              *
;* Created:       2004-03-26 by Hampa Hug <hampa@hampa.ch>                   *
;* Last modified: 2004-03-26 by Hampa Hug <hampa@hampa.ch>                   *
;* Copyright:     (C) 2004 Hampa Hug <hampa@hampa.ch>                        *
;*****************************************************************************

;*****************************************************************************
;* This program is free software. You can redistribute it and / or modify it *
;* under the terms of the GNU General Public License version 2 as  published *
;* by the Free Software Foundation.                                          *
;*                                                                           *
;* This program is distributed in the hope  that  it  will  be  useful,  but *
;* WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
;* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
;* Public License for more details.                                          *
;*****************************************************************************

; $Id$


  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x2a
  db      0x00, 0x2a, 0x00
  db      0x00, 0x2a, 0x2a
  db      0x2a, 0x00, 0x00
  db      0x2a, 0x00, 0x2a
  db      0x2a, 0x15, 0x00
  db      0x2a, 0x2a, 0x2a
  db      0x15, 0x15, 0x15
  db      0x15, 0x15, 0x3f
  db      0x15, 0x3f, 0x15
  db      0x15, 0x3f, 0x3f
  db      0x3f, 0x15, 0x15
  db      0x3f, 0x15, 0x3f
  db      0x3f, 0x3f, 0x15
  db      0x3f, 0x3f, 0x3f
  db      0x00, 0x00, 0x00
  db      0x05, 0x05, 0x05
  db      0x08, 0x08, 0x08
  db      0x0b, 0x0b, 0x0b
  db      0x0e, 0x0e, 0x0e
  db      0x11, 0x11, 0x11
  db      0x14, 0x14, 0x14
  db      0x18, 0x18, 0x18
  db      0x1c, 0x1c, 0x1c
  db      0x20, 0x20, 0x20
  db      0x24, 0x24, 0x24
  db      0x28, 0x28, 0x28
  db      0x2d, 0x2d, 0x2d
  db      0x32, 0x32, 0x32
  db      0x38, 0x38, 0x38
  db      0x3f, 0x3f, 0x3f
  db      0x00, 0x00, 0x3f
  db      0x10, 0x00, 0x3f
  db      0x1f, 0x00, 0x3f
  db      0x2f, 0x00, 0x3f
  db      0x3f, 0x00, 0x3f
  db      0x3f, 0x00, 0x2f
  db      0x3f, 0x00, 0x1f
  db      0x3f, 0x00, 0x10
  db      0x3f, 0x00, 0x00
  db      0x3f, 0x10, 0x00
  db      0x3f, 0x1f, 0x00
  db      0x3f, 0x2f, 0x00
  db      0x3f, 0x3f, 0x00
  db      0x2f, 0x3f, 0x00
  db      0x1f, 0x3f, 0x00
  db      0x10, 0x3f, 0x00
  db      0x00, 0x3f, 0x00
  db      0x00, 0x3f, 0x10
  db      0x00, 0x3f, 0x1f
  db      0x00, 0x3f, 0x2f
  db      0x00, 0x3f, 0x3f
  db      0x00, 0x2f, 0x3f
  db      0x00, 0x1f, 0x3f
  db      0x00, 0x10, 0x3f
  db      0x1f, 0x1f, 0x3f
  db      0x27, 0x1f, 0x3f
  db      0x2f, 0x1f, 0x3f
  db      0x37, 0x1f, 0x3f
  db      0x3f, 0x1f, 0x3f
  db      0x3f, 0x1f, 0x37
  db      0x3f, 0x1f, 0x2f
  db      0x3f, 0x1f, 0x27
  db      0x3f, 0x1f, 0x1f
  db      0x3f, 0x27, 0x1f
  db      0x3f, 0x2f, 0x1f
  db      0x3f, 0x37, 0x1f
  db      0x3f, 0x3f, 0x1f
  db      0x37, 0x3f, 0x1f
  db      0x2f, 0x3f, 0x1f
  db      0x27, 0x3f, 0x1f
  db      0x1f, 0x3f, 0x1f
  db      0x1f, 0x3f, 0x27
  db      0x1f, 0x3f, 0x2f
  db      0x1f, 0x3f, 0x37
  db      0x1f, 0x3f, 0x3f
  db      0x1f, 0x37, 0x3f
  db      0x1f, 0x2f, 0x3f
  db      0x1f, 0x27, 0x3f
  db      0x2d, 0x2d, 0x3f
  db      0x31, 0x2d, 0x3f
  db      0x36, 0x2d, 0x3f
  db      0x3a, 0x2d, 0x3f
  db      0x3f, 0x2d, 0x3f
  db      0x3f, 0x2d, 0x3a
  db      0x3f, 0x2d, 0x36
  db      0x3f, 0x2d, 0x31
  db      0x3f, 0x2d, 0x2d
  db      0x3f, 0x31, 0x2d
  db      0x3f, 0x36, 0x2d
  db      0x3f, 0x3a, 0x2d
  db      0x3f, 0x3f, 0x2d
  db      0x3a, 0x3f, 0x2d
  db      0x36, 0x3f, 0x2d
  db      0x31, 0x3f, 0x2d
  db      0x2d, 0x3f, 0x2d
  db      0x2d, 0x3f, 0x31
  db      0x2d, 0x3f, 0x36
  db      0x2d, 0x3f, 0x3a
  db      0x2d, 0x3f, 0x3f
  db      0x2d, 0x3a, 0x3f
  db      0x2d, 0x36, 0x3f
  db      0x2d, 0x31, 0x3f
  db      0x00, 0x00, 0x1c
  db      0x07, 0x00, 0x1c
  db      0x0e, 0x00, 0x1c
  db      0x15, 0x00, 0x1c
  db      0x1c, 0x00, 0x1c
  db      0x1c, 0x00, 0x15
  db      0x1c, 0x00, 0x0e
  db      0x1c, 0x00, 0x07
  db      0x1c, 0x00, 0x00
  db      0x1c, 0x07, 0x00
  db      0x1c, 0x0e, 0x00
  db      0x1c, 0x15, 0x00
  db      0x1c, 0x1c, 0x00
  db      0x15, 0x1c, 0x00
  db      0x0e, 0x1c, 0x00
  db      0x07, 0x1c, 0x00
  db      0x00, 0x1c, 0x00
  db      0x00, 0x1c, 0x07
  db      0x00, 0x1c, 0x0e
  db      0x00, 0x1c, 0x15
  db      0x00, 0x1c, 0x1c
  db      0x00, 0x15, 0x1c
  db      0x00, 0x0e, 0x1c
  db      0x00, 0x07, 0x1c
  db      0x0e, 0x0e, 0x1c
  db      0x11, 0x0e, 0x1c
  db      0x15, 0x0e, 0x1c
  db      0x18, 0x0e, 0x1c
  db      0x1c, 0x0e, 0x1c
  db      0x1c, 0x0e, 0x18
  db      0x1c, 0x0e, 0x15
  db      0x1c, 0x0e, 0x11
  db      0x1c, 0x0e, 0x0e
  db      0x1c, 0x11, 0x0e
  db      0x1c, 0x15, 0x0e
  db      0x1c, 0x18, 0x0e
  db      0x1c, 0x1c, 0x0e
  db      0x18, 0x1c, 0x0e
  db      0x15, 0x1c, 0x0e
  db      0x11, 0x1c, 0x0e
  db      0x0e, 0x1c, 0x0e
  db      0x0e, 0x1c, 0x11
  db      0x0e, 0x1c, 0x15
  db      0x0e, 0x1c, 0x18
  db      0x0e, 0x1c, 0x1c
  db      0x0e, 0x18, 0x1c
  db      0x0e, 0x15, 0x1c
  db      0x0e, 0x11, 0x1c
  db      0x14, 0x14, 0x1c
  db      0x16, 0x14, 0x1c
  db      0x18, 0x14, 0x1c
  db      0x1a, 0x14, 0x1c
  db      0x1c, 0x14, 0x1c
  db      0x1c, 0x14, 0x1a
  db      0x1c, 0x14, 0x18
  db      0x1c, 0x14, 0x16
  db      0x1c, 0x14, 0x14
  db      0x1c, 0x16, 0x14
  db      0x1c, 0x18, 0x14
  db      0x1c, 0x1a, 0x14
  db      0x1c, 0x1c, 0x14
  db      0x1a, 0x1c, 0x14
  db      0x18, 0x1c, 0x14
  db      0x16, 0x1c, 0x14
  db      0x14, 0x1c, 0x14
  db      0x14, 0x1c, 0x16
  db      0x14, 0x1c, 0x18
  db      0x14, 0x1c, 0x1a
  db      0x14, 0x1c, 0x1c
  db      0x14, 0x1a, 0x1c
  db      0x14, 0x18, 0x1c
  db      0x14, 0x16, 0x1c
  db      0x00, 0x00, 0x10
  db      0x04, 0x00, 0x10
  db      0x08, 0x00, 0x10
  db      0x0c, 0x00, 0x10
  db      0x10, 0x00, 0x10
  db      0x10, 0x00, 0x0c
  db      0x10, 0x00, 0x08
  db      0x10, 0x00, 0x04
  db      0x10, 0x00, 0x00
  db      0x10, 0x04, 0x00
  db      0x10, 0x08, 0x00
  db      0x10, 0x0c, 0x00
  db      0x10, 0x10, 0x00
  db      0x0c, 0x10, 0x00
  db      0x08, 0x10, 0x00
  db      0x04, 0x10, 0x00
  db      0x00, 0x10, 0x00
  db      0x00, 0x10, 0x04
  db      0x00, 0x10, 0x08
  db      0x00, 0x10, 0x0c
  db      0x00, 0x10, 0x10
  db      0x00, 0x0c, 0x10
  db      0x00, 0x08, 0x10
  db      0x00, 0x04, 0x10
  db      0x08, 0x08, 0x10
  db      0x0a, 0x08, 0x10
  db      0x0c, 0x08, 0x10
  db      0x0e, 0x08, 0x10
  db      0x10, 0x08, 0x10
  db      0x10, 0x08, 0x0e
  db      0x10, 0x08, 0x0c
  db      0x10, 0x08, 0x0a
  db      0x10, 0x08, 0x08
  db      0x10, 0x0a, 0x08
  db      0x10, 0x0c, 0x08
  db      0x10, 0x0e, 0x08
  db      0x10, 0x10, 0x08
  db      0x0e, 0x10, 0x08
  db      0x0c, 0x10, 0x08
  db      0x0a, 0x10, 0x08
  db      0x08, 0x10, 0x08
  db      0x08, 0x10, 0x0a
  db      0x08, 0x10, 0x0c
  db      0x08, 0x10, 0x0e
  db      0x08, 0x10, 0x10
  db      0x08, 0x0e, 0x10
  db      0x08, 0x0c, 0x10
  db      0x08, 0x0a, 0x10
  db      0x0b, 0x0b, 0x10
  db      0x0c, 0x0b, 0x10
  db      0x0d, 0x0b, 0x10
  db      0x0f, 0x0b, 0x10
  db      0x10, 0x0b, 0x10
  db      0x10, 0x0b, 0x0f
  db      0x10, 0x0b, 0x0d
  db      0x10, 0x0b, 0x0c
  db      0x10, 0x0b, 0x0b
  db      0x10, 0x0c, 0x0b
  db      0x10, 0x0d, 0x0b
  db      0x10, 0x0f, 0x0b
  db      0x10, 0x10, 0x0b
  db      0x0f, 0x10, 0x0b
  db      0x0d, 0x10, 0x0b
  db      0x0c, 0x10, 0x0b
  db      0x0b, 0x10, 0x0b
  db      0x0b, 0x10, 0x0c
  db      0x0b, 0x10, 0x0d
  db      0x0b, 0x10, 0x0f
  db      0x0b, 0x10, 0x10
  db      0x0b, 0x0f, 0x10
  db      0x0b, 0x0d, 0x10
  db      0x0b, 0x0c, 0x10
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00
  db      0x00, 0x00, 0x00