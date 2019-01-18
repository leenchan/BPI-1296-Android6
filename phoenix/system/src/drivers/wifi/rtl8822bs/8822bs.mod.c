#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfd490ea0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x2984d575, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x3d79757a, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xf6e0b1f2, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xf5954768, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x98cf60b3, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x79e26f07, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x386066c2, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4b09d20b, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x435fee3c, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x781fb719, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xb44790c4, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xab103966, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xd6974eae, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xecb35d63, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xf029e70a, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x1335a58d, __VMLINUX_SYMBOL_STR(wakeup_source_remove) },
	{ 0xd5f7368e, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe03a6a84, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x6d6358a5, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4310adbd, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd6f91ed6, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x36beb31e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa423e8bd, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x28ab0f4, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x3e329838, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x3f98d3e7, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x8cde2aab, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e44a478, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe75b851f, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x23c6050b, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0xf9dde891, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xaa512a5f, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa098359e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf57c4bb, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x78973cf0, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xda700327, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3e22e5c1, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x20e26cd0, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x8b85bb06, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf3a426a4, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xa10b6c6b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xd52a61a5, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xbddbf19a, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6796fe5e, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0x98ec6f6f, __VMLINUX_SYMBOL_STR(__pm_wakeup_event) },
	{ 0xd3259d65, __VMLINUX_SYMBOL_STR(test_and_set_bit) },
	{ 0x136b1151, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc48df9a3, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xc84cfaeb, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x49372c11, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x403547c3, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2ce7e1fe, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xe1b7625b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4da916bf, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x3e1b4b92, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xdf3cbf95, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa55ea25f, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x5bb3092, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xebb58a42, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xfe905d85, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x3df63efb, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xfa7e566d, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0xc9430c67, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfadf58b2, __VMLINUX_SYMBOL_STR(wakeup_source_drop) },
	{ 0xdf046576, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1798a4c2, __VMLINUX_SYMBOL_STR(__vfs_read) },
	{ 0x24ea81f2, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x24ac9a9, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf6888bf9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x83802e6d, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe5875894, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1d41d811, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbb5c9b37, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xe998e81f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x532e0ec5, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb8706fc9, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x28f7fcd6, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1d92d898, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x43d616fc, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xacc5b5d2, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x1f46bcd0, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7feca1b, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0xb1dc039, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x87bac330, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xa51db845, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5be67b0b, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_width_frame) },
	{ 0x7357a240, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbdbc13a1, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xa3f955c0, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xe1bac886, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x11807445, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x450bbfe1, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6fc70ab4, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xfa91eb38, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xd7ce8ec9, __VMLINUX_SYMBOL_STR(proc_get_parent_data) },
	{ 0xddc5cc71, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xf0e3ab92, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xad287242, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7ccc5509, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xf4effbc7, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xad8bedc7, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xdb6ca3e1, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x5a9f1d63, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x28cef6ee, __VMLINUX_SYMBOL_STR(wakeup_source_add) },
	{ 0x47a0bdf4, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0x3e02aae2, __VMLINUX_SYMBOL_STR(netif_receive_skb_sk) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2b50a0c, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4cbdf584, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xf919522b, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd83d39a4, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x526ff02, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xc8661f6a, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x55cbe60f, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xdafb1dd8, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3f81a8a7, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xe0fb97dc, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xeb949a4d, __VMLINUX_SYMBOL_STR(wakeup_source_prepare) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x529f27ce, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x74cd629f, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xb0dc8afd, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc101a83e, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xbeda5bff, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xb1b7937e, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x86ffb722, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd0157bd9, __VMLINUX_SYMBOL_STR(skb_pull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v024CdB822*");

MODULE_INFO(srcversion, "CB1C345A930C674004BCF89");
