/* GTK dilatory: run GTK+ applications slowly
 * Copyright (C) 2009  Stanislav Brabec, Novell, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtk/gtk.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif

static
gboolean
dilatory (gpointer data)
{
    /* printf ("Dilating.\n"); */
    usleep (2000000);
    return TRUE;
}

void
gtk_module_init (gint *argc, gchar ***argv)
{
    g_timeout_add_full (G_PRIORITY_HIGH, 2200, &dilatory, NULL, NULL);
}
