/*
	cfgfile.h
	misc reads from the config file

	$Id: cfgfile.h 3862 2010-12-30 20:51:57Z sezero $

	Copyright (C) 2008-2010  O.Sezer <sezero@users.sourceforge.net>

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

	See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to:

		Free Software Foundation, Inc.
		51 Franklin Street, Fifth Floor,
		Boston, MA  02110-1301  USA
*/

#ifndef __CFGFILE_H
#define __CFGFILE_H

int CFG_OpenConfig (const char *cfg_name);
// opens the given config file and keeps it open
// until CFG_CloseConfig is called

void CFG_CloseConfig (void);
// closes the currently open config file

void CFG_ReadCvars (const char **vars, int num_vars);
// reads the values of cvars in the given list
// from the currently open config file

void CFG_ReadCvarOverrides (const char **vars, int num_vars);
// reads the "+" command line override values of cvars
// in the given list.  doesn't care about the config file.
// call this after CFG_ReadCvars() and before locking your
// cvars.

#endif	/* __CFGFILE_H */

