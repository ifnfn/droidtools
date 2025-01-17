/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _MAKE_EXT4FS_H_
#define _MAKE_EXT4FS_H_

#include "ext4_utils.h"
#include "ext4.h"

void reset_ext4fs_info();
int make_ext4fs(const char *filename, const char *directory,
                char *mountpoint, int android, int gzip, int sparse, int extent);

#endif
