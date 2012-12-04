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

void btd_event_device_found(bdaddr_t *local, bdaddr_t *peer,
				uint8_t bdaddr_type, int8_t rssi,
				bool confirm_name, bool legacy,
				uint8_t *data, uint8_t data_len);
void btd_event_remote_name(const bdaddr_t *local, bdaddr_t *peer,
							const char *name);
void btd_event_conn_complete(bdaddr_t *local, bdaddr_t *peer,
					uint8_t bdaddr_type, const char *name,
					uint32_t class);
void btd_event_conn_failed(bdaddr_t *local, bdaddr_t *peer, uint8_t status);
void btd_event_disconn_complete(bdaddr_t *local, bdaddr_t *peer);
void btd_event_returned_link_key(bdaddr_t *local, bdaddr_t *peer);
int btd_event_user_passkey(bdaddr_t *sba, bdaddr_t *dba);
int btd_event_user_notify(bdaddr_t *sba, bdaddr_t *dba, uint32_t passkey,
							uint8_t entered);
void btd_event_device_blocked(bdaddr_t *local, bdaddr_t *peer);
void btd_event_device_unblocked(bdaddr_t *local, bdaddr_t *peer);
void btd_event_device_unpaired(bdaddr_t *local, bdaddr_t *peer);
int btd_event_link_key_notify(bdaddr_t *local, bdaddr_t *peer, uint8_t *key,
					uint8_t key_type, uint8_t pin_length);
int btd_event_ltk_notify(bdaddr_t *local, bdaddr_t *peer, uint8_t bdaddr_type,
				uint8_t *key, uint8_t master,
				uint8_t authenticated, uint8_t enc_size,
				uint16_t ediv, uint8_t rand[8]);
