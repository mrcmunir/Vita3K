// Vita3K emulator project
// Copyright (C) 2025 Vita3K team
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

#pragma once

#include <cpu/common.h>

struct MemState;
struct KernelState;
typedef int SceUID;
typedef std::function<void(CPUState &cpu, uint32_t nid, SceUID thread_id)> CallImportFunc;

struct CPUProtocol : public CPUProtocolBase {
    CPUProtocol(KernelState &kernel, MemState &mem, const CallImportFunc &func);
    ~CPUProtocol() override = default;
    void call_svc(CPUState &cpu, uint32_t svc, Address pc, ThreadState &thread) override;
    Address get_watch_memory_addr(Address addr) override;
    ExclusiveMonitorPtr get_exclusive_monitor() override;

private:
    CallImportFunc call_import;
    KernelState *kernel;
    MemState *mem;
};
