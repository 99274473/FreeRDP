/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * RemoteFX USB Redirection
 *
 * Copyright 2012 Atrust corp.
 * Copyright 2012 Alfred Liu <alfred.liu@atruscorp.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_CHANNEL_URBDRC_CLIENT_DATA_TRANSFER_H
#define FREERDP_CHANNEL_URBDRC_CLIENT_DATA_TRANSFER_H

#include "urbdrc_main.h"

#define DEVICE_CTX(dev) ((dev)->ctx)
#define HANDLE_CTX(handle) (DEVICE_CTX((handle)->dev))
#define TRANSFER_CTX(transfer) (HANDLE_CTX((transfer)->dev_handle))
#define ITRANSFER_CTX(transfer) \
	(TRANSFER_CTX(__USBI_TRANSFER_TO_LIBUSB_TRANSFER(transfer)))

void *urbdrc_process_udev_data_transfer(void* arg);
#define write_out(channel, size, data) write_out_((channel), (size), (data), __FUNCTION__, __FILE__, __LINE__)
UINT write_out_(IWTSVirtualChannel* channel, size_t size, const void* data, const char* fkt, const char* file, int line);

#endif /* FREERDP_CHANNEL_URBDRC_CLIENT_DATA_TRANSFER_H */

