/*
 * thd_cdev_custom.h: thermal engine custom cdev class interface
 *
 * Copyright (C) 2012 Intel Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 *
 * Author Name <Srinivas.Pandruvada@linux.intel.com>
 *
 * This interface allows to overide per cdev read data from sysfs for buggy BIOS. 
 */

#ifndef THD_CDEV_CUSTOM_H
#define THD_CDEV_CUSTOM_H

#include "thd_cdev.h"

class cthd_cdev_custom :  public cthd_cdev {
private:

public:
	cthd_cdev_custom(int index) : cthd_cdev(index) {}

	void set_curr_state(int state);
	int get_curr_state();
	int get_max_state();
	int update();
};

#endif
