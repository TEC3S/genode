/*
 * \brief  Specific core implementations
 * \author Stefan Kalkowski
 * \author Josef Soentgen
 * \author Martin Stein
 * \date   2014-02-25
 */

/*
 * Copyright (C) 2014-2017 Genode Labs GmbH
 *
 * This file is part of the Genode OS framework, which is distributed
 * under the terms of the GNU Affero General Public License version 3.
 */

/* core includes */
#include <cpu.h>

Genode::Arm::User_context::User_context() { cpsr = Psr::init_user(); }
