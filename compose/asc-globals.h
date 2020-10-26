/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2016-2020 Matthias Klumpp <matthias@tenstral.net>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the license, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__APPSTREAM_COMPOSE_H) && !defined (ASC_COMPILATION)
#error "Only <appstream-compose.h> can be included directly."
#endif
#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

const gchar	*asc_globals_get_tmp_dir (void);
const gchar	*asc_globals_get_tmp_dir_create (void);
void		asc_globals_set_tmp_dir (const gchar *path);

gboolean	asc_globals_get_use_optipng (void);
void		asc_globals_set_use_optipng (gboolean enabled);

const gchar	*asc_globals_get_optipng_binary (void);
void		asc_globals_set_optipng_binary (const gchar *path);

GPtrArray	*asc_globals_get_pangrams_for (const gchar *lang);

G_END_DECLS
