/*
 * Copyright (c) 2014, 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef MESSAGECHAR_FIFO_H
#define MESSAGECHAR_FIFO_H
#include "fifo.h"
#include "message.h"
#include "hw-adaptation.h"
typedef Fifo<MessageChar *> MessageCharFifo;
#endif
