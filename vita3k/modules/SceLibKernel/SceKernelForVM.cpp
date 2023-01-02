// Vita3K emulator project
// Copyright (C) 2023 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "SceKernelForVM.h"
#include "../SceKernelThreadMgr/SceThreadmgr.h"

#include <util/tracy.h>
TRACY_MODULE_NAME(SceKernelForVM);

EXPORT(int, __sceKernelGetThreadContextForVM, SceUID threadId, Ptr<SceKernelThreadCpuRegisterInfo> pCpuRegisterInfo, Ptr<SceKernelThreadVfpRegisterInfo> pVfpRegisterInfo) {
    TRACY_FUNC(__sceKernelGetThreadContextForVM, threadId, pCpuRegisterInfo, pVfpRegisterInfo);
    return CALL_EXPORT(_sceKernelGetThreadContextForVM, threadId, pCpuRegisterInfo, pVfpRegisterInfo);
}

EXPORT(int, _sceKernelResumeThreadForVM, SceUID threadId) {
    TRACY_FUNC(_sceKernelResumeThreadForVM, threadId);
    return CALL_EXPORT(sceKernelResumeThreadForVM, threadId);
}

EXPORT(int, _sceKernelSuspendThreadForVM, SceUID threadId) {
    TRACY_FUNC(_sceKernelSuspendThreadForVM, threadId);
    return CALL_EXPORT(sceKernelSuspendThreadForVM, threadId);
}

BRIDGE_IMPL(__sceKernelGetThreadContextForVM)
BRIDGE_IMPL(_sceKernelResumeThreadForVM)
BRIDGE_IMPL(_sceKernelSuspendThreadForVM)
