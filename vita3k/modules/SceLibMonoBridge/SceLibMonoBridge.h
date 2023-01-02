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

#pragma once

#include <module/module.h>

BRIDGE_DECL(__aeabi_unwind_cpp_pr0)
BRIDGE_DECL(__aeabi_unwind_cpp_pr1)
BRIDGE_DECL(__ashldi3)
BRIDGE_DECL(__divdi3)
BRIDGE_DECL(__divsi3)
BRIDGE_DECL(__lshrdi3)
BRIDGE_DECL(__moddi3)
BRIDGE_DECL(__modsi3)
BRIDGE_DECL(__sce_aeabi_idiv1)
BRIDGE_DECL(__sce_aeabi_ldiv1)
BRIDGE_DECL(__udivdi3)
BRIDGE_DECL(__udivsi3)
BRIDGE_DECL(__umoddi3)
BRIDGE_DECL(__umodsi3)
BRIDGE_DECL(environ)
BRIDGE_DECL(g_ascii_strcasecmp)
BRIDGE_DECL(g_file_vita_get_current_dir)
BRIDGE_DECL(g_file_vita_get_full_path)
BRIDGE_DECL(g_file_vita_set_current_dir)
BRIDGE_DECL(getenv)
BRIDGE_DECL(monoeg_assertion_message)
BRIDGE_DECL(monoeg_g_array_append_vals)
BRIDGE_DECL(monoeg_g_array_free)
BRIDGE_DECL(monoeg_g_array_insert_vals)
BRIDGE_DECL(monoeg_g_array_new)
BRIDGE_DECL(monoeg_g_ascii_strdown)
BRIDGE_DECL(monoeg_g_ascii_strncasecmp)
BRIDGE_DECL(monoeg_g_ascii_tolower)
BRIDGE_DECL(monoeg_g_ascii_xdigit_value)
BRIDGE_DECL(monoeg_g_build_path)
BRIDGE_DECL(monoeg_g_convert)
BRIDGE_DECL(monoeg_g_dir_close)
BRIDGE_DECL(monoeg_g_dir_open)
BRIDGE_DECL(monoeg_g_dir_read_name)
BRIDGE_DECL(monoeg_g_direct_equal)
BRIDGE_DECL(monoeg_g_direct_hash)
BRIDGE_DECL(monoeg_g_error_free)
BRIDGE_DECL(monoeg_g_file_get_contents)
BRIDGE_DECL(monoeg_g_file_open_tmp)
BRIDGE_DECL(monoeg_g_file_test)
BRIDGE_DECL(monoeg_g_filename_from_uri)
BRIDGE_DECL(monoeg_g_filename_from_utf8)
BRIDGE_DECL(monoeg_g_filename_to_uri)
BRIDGE_DECL(monoeg_g_find_program_in_path)
BRIDGE_DECL(monoeg_g_free)
BRIDGE_DECL(monoeg_g_get_charset)
BRIDGE_DECL(monoeg_g_get_current_dir)
BRIDGE_DECL(monoeg_g_get_home_dir)
BRIDGE_DECL(monoeg_g_get_tmp_dir)
BRIDGE_DECL(monoeg_g_get_user_name)
BRIDGE_DECL(monoeg_g_getenv)
BRIDGE_DECL(monoeg_g_hash_table_destroy)
BRIDGE_DECL(monoeg_g_hash_table_foreach)
BRIDGE_DECL(monoeg_g_hash_table_foreach_remove)
BRIDGE_DECL(monoeg_g_hash_table_foreach_steal)
BRIDGE_DECL(monoeg_g_hash_table_insert_replace)
BRIDGE_DECL(monoeg_g_hash_table_iter_init)
BRIDGE_DECL(monoeg_g_hash_table_iter_next)
BRIDGE_DECL(monoeg_g_hash_table_lookup)
BRIDGE_DECL(monoeg_g_hash_table_lookup_extended)
BRIDGE_DECL(monoeg_g_hash_table_new)
BRIDGE_DECL(monoeg_g_hash_table_new_full)
BRIDGE_DECL(monoeg_g_hash_table_remove)
BRIDGE_DECL(monoeg_g_hash_table_size)
BRIDGE_DECL(monoeg_g_list_alloc)
BRIDGE_DECL(monoeg_g_list_append)
BRIDGE_DECL(monoeg_g_list_copy)
BRIDGE_DECL(monoeg_g_list_delete_link)
BRIDGE_DECL(monoeg_g_list_find)
BRIDGE_DECL(monoeg_g_list_foreach)
BRIDGE_DECL(monoeg_g_list_free)
BRIDGE_DECL(monoeg_g_list_insert_before)
BRIDGE_DECL(monoeg_g_list_length)
BRIDGE_DECL(monoeg_g_list_nth)
BRIDGE_DECL(monoeg_g_list_nth_data)
BRIDGE_DECL(monoeg_g_list_prepend)
BRIDGE_DECL(monoeg_g_list_remove)
BRIDGE_DECL(monoeg_g_list_remove_link)
BRIDGE_DECL(monoeg_g_list_reverse)
BRIDGE_DECL(monoeg_g_list_sort)
BRIDGE_DECL(monoeg_g_locale_from_utf8)
BRIDGE_DECL(monoeg_g_locale_to_utf8)
BRIDGE_DECL(monoeg_g_log)
BRIDGE_DECL(monoeg_g_log_set_always_fatal)
BRIDGE_DECL(monoeg_g_log_set_fatal_mask)
BRIDGE_DECL(monoeg_g_logv)
BRIDGE_DECL(monoeg_g_markup_parse_context_end_parse)
BRIDGE_DECL(monoeg_g_markup_parse_context_free)
BRIDGE_DECL(monoeg_g_markup_parse_context_new)
BRIDGE_DECL(monoeg_g_markup_parse_context_parse)
BRIDGE_DECL(monoeg_g_memdup)
BRIDGE_DECL(monoeg_g_path_get_basename)
BRIDGE_DECL(monoeg_g_path_get_dirname)
BRIDGE_DECL(monoeg_g_path_is_absolute)
BRIDGE_DECL(monoeg_g_print)
BRIDGE_DECL(monoeg_g_printerr)
BRIDGE_DECL(monoeg_g_ptr_array_add)
BRIDGE_DECL(monoeg_g_ptr_array_free)
BRIDGE_DECL(monoeg_g_ptr_array_new)
BRIDGE_DECL(monoeg_g_ptr_array_remove)
BRIDGE_DECL(monoeg_g_ptr_array_remove_fast)
BRIDGE_DECL(monoeg_g_ptr_array_remove_index)
BRIDGE_DECL(monoeg_g_ptr_array_remove_index_fast)
BRIDGE_DECL(monoeg_g_ptr_array_sized_new)
BRIDGE_DECL(monoeg_g_queue_free)
BRIDGE_DECL(monoeg_g_queue_is_empty)
BRIDGE_DECL(monoeg_g_queue_new)
BRIDGE_DECL(monoeg_g_queue_pop_head)
BRIDGE_DECL(monoeg_g_queue_push_head)
BRIDGE_DECL(monoeg_g_set_prgname)
BRIDGE_DECL(monoeg_g_setenv)
BRIDGE_DECL(monoeg_g_shell_quote)
BRIDGE_DECL(monoeg_g_slist_append)
BRIDGE_DECL(monoeg_g_slist_concat)
BRIDGE_DECL(monoeg_g_slist_copy)
BRIDGE_DECL(monoeg_g_slist_delete_link)
BRIDGE_DECL(monoeg_g_slist_find)
BRIDGE_DECL(monoeg_g_slist_foreach)
BRIDGE_DECL(monoeg_g_slist_free)
BRIDGE_DECL(monoeg_g_slist_free_1)
BRIDGE_DECL(monoeg_g_slist_insert_sorted)
BRIDGE_DECL(monoeg_g_slist_last)
BRIDGE_DECL(monoeg_g_slist_length)
BRIDGE_DECL(monoeg_g_slist_nth)
BRIDGE_DECL(monoeg_g_slist_nth_data)
BRIDGE_DECL(monoeg_g_slist_prepend)
BRIDGE_DECL(monoeg_g_slist_remove)
BRIDGE_DECL(monoeg_g_slist_reverse)
BRIDGE_DECL(monoeg_g_snprintf)
BRIDGE_DECL(monoeg_g_spaced_primes_closest)
BRIDGE_DECL(monoeg_g_spawn_async_with_pipes)
BRIDGE_DECL(monoeg_g_str_equal)
BRIDGE_DECL(monoeg_g_str_has_prefix)
BRIDGE_DECL(monoeg_g_str_hash)
BRIDGE_DECL(monoeg_g_strchomp)
BRIDGE_DECL(monoeg_g_strchug)
BRIDGE_DECL(monoeg_g_strconcat)
BRIDGE_DECL(monoeg_g_strdup_printf)
BRIDGE_DECL(monoeg_g_strdup_vprintf)
BRIDGE_DECL(monoeg_g_strerror)
BRIDGE_DECL(monoeg_g_strfreev)
BRIDGE_DECL(monoeg_g_string_append)
BRIDGE_DECL(monoeg_g_string_append_c)
BRIDGE_DECL(monoeg_g_string_append_len)
BRIDGE_DECL(monoeg_g_string_append_printf)
BRIDGE_DECL(monoeg_g_string_free)
BRIDGE_DECL(monoeg_g_string_new)
BRIDGE_DECL(monoeg_g_string_printf)
BRIDGE_DECL(monoeg_g_strjoin)
BRIDGE_DECL(monoeg_g_strlcpy)
BRIDGE_DECL(monoeg_g_strndup)
BRIDGE_DECL(monoeg_g_strreverse)
BRIDGE_DECL(monoeg_g_strsplit)
BRIDGE_DECL(monoeg_g_timer_destroy)
BRIDGE_DECL(monoeg_g_timer_elapsed)
BRIDGE_DECL(monoeg_g_timer_new)
BRIDGE_DECL(monoeg_g_timer_start)
BRIDGE_DECL(monoeg_g_timer_stop)
BRIDGE_DECL(monoeg_g_ucs4_to_utf16)
BRIDGE_DECL(monoeg_g_unichar_tolower)
BRIDGE_DECL(monoeg_g_unichar_type)
BRIDGE_DECL(monoeg_g_unichar_xdigit_value)
BRIDGE_DECL(monoeg_g_unsetenv)
BRIDGE_DECL(monoeg_g_usleep)
BRIDGE_DECL(monoeg_g_utf16_to_ucs4)
BRIDGE_DECL(monoeg_g_utf16_to_utf8)
BRIDGE_DECL(monoeg_g_utf8_strdown)
BRIDGE_DECL(monoeg_g_utf8_to_utf16)
BRIDGE_DECL(monoeg_g_utf8_validate)
BRIDGE_DECL(monoeg_malloc)
BRIDGE_DECL(monoeg_malloc0)
BRIDGE_DECL(monoeg_realloc)
BRIDGE_DECL(monoeg_try_malloc)
BRIDGE_DECL(monoeg_try_realloc)
BRIDGE_DECL(pss_alloc_mem)
BRIDGE_DECL(pss_alloc_raw)
BRIDGE_DECL(pss_app_exit_liveboard)
BRIDGE_DECL(pss_code_mem_alloc)
BRIDGE_DECL(pss_code_mem_flush_icache)
BRIDGE_DECL(pss_code_mem_free)
BRIDGE_DECL(pss_code_mem_initialize)
BRIDGE_DECL(pss_code_mem_lock)
BRIDGE_DECL(pss_code_mem_terminate)
BRIDGE_DECL(pss_code_mem_unlock)
BRIDGE_DECL(pss_create_semaphore)
BRIDGE_DECL(pss_crypto_close)
BRIDGE_DECL(pss_crypto_fread)
BRIDGE_DECL(pss_crypto_open)
BRIDGE_DECL(pss_crypto_read)
BRIDGE_DECL(pss_delay_thread)
BRIDGE_DECL(pss_delete_semaphore)
BRIDGE_DECL(pss_disable_ftz)
BRIDGE_DECL(pss_errno_loc)
BRIDGE_DECL(pss_free_mem)
BRIDGE_DECL(pss_free_prng_provider)
BRIDGE_DECL(pss_free_raw)
BRIDGE_DECL(pss_get_errnoloc)
BRIDGE_DECL(pss_get_prng_provider)
BRIDGE_DECL(pss_get_thread_context)
BRIDGE_DECL(pss_get_ticks_32)
BRIDGE_DECL(pss_get_ticks_64)
BRIDGE_DECL(pss_get_ticks_since_111)
BRIDGE_DECL(pss_get_win32_filetime)
BRIDGE_DECL(pss_getpagesize)
BRIDGE_DECL(pss_getpid)
BRIDGE_DECL(pss_gettimeofday)
BRIDGE_DECL(pss_io_chstat)
BRIDGE_DECL(pss_io_close)
BRIDGE_DECL(pss_io_dclose)
BRIDGE_DECL(pss_io_dopen)
BRIDGE_DECL(pss_io_getstat)
BRIDGE_DECL(pss_io_lseek)
BRIDGE_DECL(pss_io_mkdir)
BRIDGE_DECL(pss_io_open)
BRIDGE_DECL(pss_io_read)
BRIDGE_DECL(pss_io_remove)
BRIDGE_DECL(pss_io_rename)
BRIDGE_DECL(pss_io_rmdir)
BRIDGE_DECL(pss_io_write)
BRIDGE_DECL(pss_nanosleep)
BRIDGE_DECL(pss_net_accept)
BRIDGE_DECL(pss_net_bind)
BRIDGE_DECL(pss_net_connect)
BRIDGE_DECL(pss_net_epoll_create)
BRIDGE_DECL(pss_net_epoll_ctl)
BRIDGE_DECL(pss_net_epoll_destroy)
BRIDGE_DECL(pss_net_epoll_wait)
BRIDGE_DECL(pss_net_gethostname)
BRIDGE_DECL(pss_net_getpeername)
BRIDGE_DECL(pss_net_getsockname)
BRIDGE_DECL(pss_net_getsockopt)
BRIDGE_DECL(pss_net_htonl)
BRIDGE_DECL(pss_net_htons)
BRIDGE_DECL(pss_net_init)
BRIDGE_DECL(pss_net_listen)
BRIDGE_DECL(pss_net_ntohl)
BRIDGE_DECL(pss_net_ntohs)
BRIDGE_DECL(pss_net_recv)
BRIDGE_DECL(pss_net_recvfrom)
BRIDGE_DECL(pss_net_resolver_create)
BRIDGE_DECL(pss_net_resolver_start_aton)
BRIDGE_DECL(pss_net_resolver_start_ntoa)
BRIDGE_DECL(pss_net_send)
BRIDGE_DECL(pss_net_sendto)
BRIDGE_DECL(pss_net_setsockopt)
BRIDGE_DECL(pss_net_shutdown)
BRIDGE_DECL(pss_net_socket)
BRIDGE_DECL(pss_net_socket_close)
BRIDGE_DECL(pss_prng_fill)
BRIDGE_DECL(pss_resume_thread)
BRIDGE_DECL(pss_set_thread_context)
BRIDGE_DECL(pss_set_win32_filetime)
BRIDGE_DECL(pss_signal_semaphore)
BRIDGE_DECL(pss_supports_fast_tls)
BRIDGE_DECL(pss_suspend_thread)
BRIDGE_DECL(pss_threads_initialize)
BRIDGE_DECL(pss_usb_transport_close1)
BRIDGE_DECL(pss_usb_transport_close2)
BRIDGE_DECL(pss_usb_transport_connect)
BRIDGE_DECL(pss_usb_transport_recv)
BRIDGE_DECL(pss_usb_transport_send)
BRIDGE_DECL(pss_wait_semaphore)
BRIDGE_DECL(pthread_attr_init)
BRIDGE_DECL(pthread_attr_setstacksize)
BRIDGE_DECL(pthread_cleanup_pop_)
BRIDGE_DECL(pthread_cleanup_push_)
BRIDGE_DECL(pthread_cond_broadcast)
BRIDGE_DECL(pthread_cond_destroy)
BRIDGE_DECL(pthread_cond_init)
BRIDGE_DECL(pthread_cond_signal)
BRIDGE_DECL(pthread_cond_timedwait)
BRIDGE_DECL(pthread_cond_wait)
BRIDGE_DECL(pthread_create)
BRIDGE_DECL(pthread_detach)
BRIDGE_DECL(pthread_equal)
BRIDGE_DECL(pthread_exit)
BRIDGE_DECL(pthread_getspecific)
BRIDGE_DECL(pthread_getspecific_for_thread)
BRIDGE_DECL(pthread_join)
BRIDGE_DECL(pthread_key_create)
BRIDGE_DECL(pthread_key_delete)
BRIDGE_DECL(pthread_mutex_destroy)
BRIDGE_DECL(pthread_mutex_init)
BRIDGE_DECL(pthread_mutex_lock)
BRIDGE_DECL(pthread_mutex_trylock)
BRIDGE_DECL(pthread_mutex_unlock)
BRIDGE_DECL(pthread_mutexattr_destroy)
BRIDGE_DECL(pthread_mutexattr_init)
BRIDGE_DECL(pthread_mutexattr_settype)
BRIDGE_DECL(pthread_self)
BRIDGE_DECL(pthread_setspecific)
BRIDGE_DECL(pthread_vita_tls_create_np)
BRIDGE_DECL(pthread_vita_tls_get_np)
BRIDGE_DECL(pthread_vita_tls_set_np)
BRIDGE_DECL(sched_yield)
BRIDGE_DECL(unlink)
