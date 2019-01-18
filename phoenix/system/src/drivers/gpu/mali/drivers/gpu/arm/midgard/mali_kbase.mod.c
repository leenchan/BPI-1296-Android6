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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x9b4da327, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xee8bcf54, __VMLINUX_SYMBOL_STR(power_control_get) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x1a4752a5, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x6951b788, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x65aad4a6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xf33847d3, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x35ccaaf, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x467f68db, __VMLINUX_SYMBOL_STR(devfreq_resume_device) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2b50a0c, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xc6a4a872, __VMLINUX_SYMBOL_STR(__clk_is_enabled) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xe9a45fa8, __VMLINUX_SYMBOL_STR(remap_vmalloc_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xae8aa931, __VMLINUX_SYMBOL_STR(dev_pm_opp_get_voltage) },
	{ 0x6fc70ab4, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x18fef9cb, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0xf5954768, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x60d3deaa, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x736799e5, __VMLINUX_SYMBOL_STR(dev_pm_opp_find_freq_ceil) },
	{ 0xa6e595b5, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x4c786991, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x37e98fef, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xcc4488e0, __VMLINUX_SYMBOL_STR(sync_fence_wait_async) },
	{ 0x7aeb3658, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xf6f0ffed, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x557c0e3, __VMLINUX_SYMBOL_STR(power_control_power_off) },
	{ 0x7357a240, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x6fe3d8cf, __VMLINUX_SYMBOL_STR(ktime_add_safe) },
	{ 0x6d86876d, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xf6b4f894, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xeb3c19ab, __VMLINUX_SYMBOL_STR(sync_fence_fdget) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x36beb31e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xef62e001, __VMLINUX_SYMBOL_STR(devfreq_suspend_device) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa87cf413, __VMLINUX_SYMBOL_STR(clear_bit) },
	{ 0x5f3bbc68, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe8144966, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xfe905d85, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xb86f83cb, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x230ec0fa, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xdf046576, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xd65a397d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcd64dac5, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7fe32873, __VMLINUX_SYMBOL_STR(rb_replace_node) },
	{ 0x11b3f30, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0xc2d64c6a, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x342cd2, __VMLINUX_SYMBOL_STR(sync_timeline_signal) },
	{ 0x570ede5c, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x2378f5f9, __VMLINUX_SYMBOL_STR(sync_fence_install) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb0c948c9, __VMLINUX_SYMBOL_STR(dev_pm_opp_get_opp_count) },
	{ 0xeb4e322c, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xbf4110fa, __VMLINUX_SYMBOL_STR(reset_control_get) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xc8e2fb04, __VMLINUX_SYMBOL_STR(power_control_power_on) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xdcb764ad, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5b27ee28, __VMLINUX_SYMBOL_STR(dma_buf_kunmap) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x484a2a4, __VMLINUX_SYMBOL_STR(xen_dma_ops) },
	{ 0xa10b6c6b, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8974c179, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0xac964567, __VMLINUX_SYMBOL_STR(dma_buf_kmap) },
	{ 0xdf3cbf95, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x617d5f35, __VMLINUX_SYMBOL_STR(sync_pt_free) },
	{ 0x1f46bcd0, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb2f24c92, __VMLINUX_SYMBOL_STR(devfreq_unregister_opp_notifier) },
	{ 0xf777b99a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xc75bf639, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x8fb415f5, __VMLINUX_SYMBOL_STR(debugfs_create_size_t) },
	{ 0x96a86d00, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xce21d770, __VMLINUX_SYMBOL_STR(of_init_opp_table) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xf8e398fc, __VMLINUX_SYMBOL_STR(memstart_addr) },
	{ 0xcea89084, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xddaaa688, __VMLINUX_SYMBOL_STR(dma_buf_get) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5d3d3fba, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb2210d64, __VMLINUX_SYMBOL_STR(reset_control_deassert) },
	{ 0x360ff19f, __VMLINUX_SYMBOL_STR(down) },
	{ 0x72d8fe19, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x16d0d57f, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x926c6cc4, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x886f5ca5, __VMLINUX_SYMBOL_STR(sync_timeline_destroy) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xbee4e1c1, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x2724ba66, __VMLINUX_SYMBOL_STR(__ioremap) },
	{ 0x430630ba, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xef761b7f, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x1fd49227, __VMLINUX_SYMBOL_STR(devfreq_remove_device) },
	{ 0xe4755540, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x8ebfef6a, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x92a8274, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x8eafe1fb, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xa95e6987, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xac70b0fa, __VMLINUX_SYMBOL_STR(vm_stat) },
	{ 0xf5826950, __VMLINUX_SYMBOL_STR(sync_fence_cancel_async) },
	{ 0xff4c3e76, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0x8ed5bdcd, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x2c375241, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x9de613d1, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x84bb7182, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xd266133e, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x9b287cc2, __VMLINUX_SYMBOL_STR(sync_pt_create) },
	{ 0x63f9c80, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x16f8cf7b, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xabbbd444, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0x244d12af, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xfae3f4cb, __VMLINUX_SYMBOL_STR(anon_inode_getfd) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x40603e36, __VMLINUX_SYMBOL_STR(regulator_get_optional) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x5cbe78ed, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x233327af, __VMLINUX_SYMBOL_STR(devfreq_add_device) },
	{ 0x24ea81f2, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xd8d525c5, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0x949fa7d1, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5cd885d5, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x536100cb, __VMLINUX_SYMBOL_STR(sync_fence_put) },
	{ 0x744e0f81, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x53bb4db5, __VMLINUX_SYMBOL_STR(sync_fence_create) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x80b3b881, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x6c73f209, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0x3749f37, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x31ed8d0b, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xed566be1, __VMLINUX_SYMBOL_STR(sync_timeline_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x93ed6ea, __VMLINUX_SYMBOL_STR(of_free_opp_table) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xcb128141, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd683231c, __VMLINUX_SYMBOL_STR(zap_vma_ptes) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x7596f5a8, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0xf6888bf9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x41876147, __VMLINUX_SYMBOL_STR(dma_buf_mmap) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xc32906ed, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x25ad9738, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0x40f97005, __VMLINUX_SYMBOL_STR(devfreq_recommended_opp) },
	{ 0x2a8c7c2b, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x37c4790c, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x324b3877, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf03514f1, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x5ebe2eb3, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x45a55ec8, __VMLINUX_SYMBOL_STR(__iounmap) },
	{ 0x9c5bc552, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5b56860c, __VMLINUX_SYMBOL_STR(vm_munmap) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xb55a639d, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x8de8658d, __VMLINUX_SYMBOL_STR(rtk_bus_sync) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x526ff02, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x499ab9bb, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0xfdb2313, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7a7bf43c, __VMLINUX_SYMBOL_STR(devfreq_cooling_unregister) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xb338871d, __VMLINUX_SYMBOL_STR(devfreq_register_opp_notifier) },
	{ 0xf8937ca4, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xe64fa2d7, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xecf40a9b, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe099825d, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x63c581bf, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0x445c37, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xcaef312a, __VMLINUX_SYMBOL_STR(vm_insert_pfn) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc06eb7b4, __VMLINUX_SYMBOL_STR(of_devfreq_cooling_register) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Carm,malit6xx*");
MODULE_ALIAS("of:N*T*Carm,mali-midgard*");

MODULE_INFO(srcversion, "533BB7E5866E52F63B9ACCB");
