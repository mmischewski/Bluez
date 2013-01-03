/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2006-2010  Nokia Corporation
 *  Copyright (C) 2004-2010  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include <bluetooth/bluetooth.h>
#include <dbus/dbus.h>

void manager_cleanup(void);

struct btd_adapter *manager_find_adapter(const bdaddr_t *sba);
struct btd_adapter *manager_find_adapter_by_id(int id);
struct btd_adapter *manager_get_default_adapter(void);
void manager_foreach_adapter(adapter_cb func, gpointer user_data);
GSList *manager_get_adapters(void);
struct btd_adapter *btd_manager_register_adapter(int id, gboolean powered,
							bool connectable,
							bool discoverable);
int btd_manager_unregister_adapter(int id);
