#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(cap_clear, iFp)
GO(cap_clear_flag, iFpu)
GO(cap_compare, iFpp)
GO(cap_copy_ext, lFppl)
GO(cap_copy_int, pFp)
GO(cap_drop_bound, iFi)
GO(cap_dup, pFp)
GO(cap_free, iFp)
GO(cap_from_name, iFpp)
GO(cap_from_text, pFp)
GO(cap_get_ambient, iFi)
GO(cap_get_bound, iFi)
GO(cap_get_fd, pFi)
GO(cap_get_file, pFp)
GO(cap_get_flag, iFpiup)
GO(cap_get_mode, uFv)
GO(cap_get_nsowner, uFp)
GO(capgetp, iFip)
GO(cap_get_pid, pFi)
GO(cap_get_proc, pFv)
GO(cap_get_secbits, uFv)
GO(cap_iab_fill, iFpupu)
GO(cap_iab_from_text, pFp)
GO(cap_iab_get_proc, pFv)
GO(cap_iab_get_vector, uFpui)
GO(cap_iab_init, pFv)
GO(cap_iab_set_proc, iFp)
GO(cap_iab_set_vector, iFpuiu)
GO(cap_iab_to_text, pFp)
GO(cap_init, pFv)
GO(cap_launch, iFpp)
//GOM(cap_launcher_callback, iFEpp)
GO(cap_launcher_set_chroot, iFpp)
GO(cap_launcher_setgroups, iFpuip)
GO(cap_launcher_set_iab, pFpp)
GO(cap_launcher_set_mode, iFpu)
GO(cap_launcher_setuid, iFpu)
GO(cap_max_bits, iFv)
GO(cap_mode_name, pFu)
GO(cap_new_launcher, pFppp)
GO(cap_reset_ambient, iFv)
GO(cap_set_ambient, iFiu)
GO(cap_set_fd, iFip)
GO(cap_set_file, iFpp)
GO(cap_set_flag, iFpuipu)
GO(cap_setgroups, iFuLp)
GO(cap_set_mode, iFu)
GO(cap_set_nsowner, iFpu)
GO(capsetp, iFip)
GO(cap_set_proc, iFp)
GO(cap_set_secbits, iFu)
//GOM(cap_set_syscall, vFEpp)
GO(cap_setuid, iFu)
GO(cap_size, lFp)
GO(cap_to_name, pFi)
GO(cap_to_text, pFpp)
//GO(_libcap_strdup, 
//GOW(psx_load_syscalls, 
