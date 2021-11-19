/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>
#include "nrf_delay.h"

void main(void)
{
	while (true)
	{
		printk("Hello Oslo! %s\n", VERSION_BUILD_INFO);
		nrf_delay_ms(1000);
	}
	

}
