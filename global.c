/*
 *
 * global.c      Global data
 *
 * Copyright (c) 1996-2001  Hubert Mantel, SuSE GmbH  (mantel@suse.de)
 *
 */

#include "global.h"

#define X_DEFAULT         80
#define Y_DEFAULT         25

int             max_x_ig = X_DEFAULT;
int             max_y_ig = Y_DEFAULT;

config_t config = {
#if defined(__s390__) || defined(__s390x__)
  initrd_has_ldso: 1,
#else
  initrd_has_ldso: 0,
#endif
  color:2,			/* default: 'color'; cf. disp_init(), too! */
  net: {
    use_dhcp: 1
  }
};

colorset_t     *colors_prg;
struct in_addr  ipaddr_rg;
struct in_addr  netmask_rg;
struct in_addr  broadcast_rg;
struct in_addr  gateway_rg;
struct in_addr  network_rg;
struct in_addr  nfs_server_rg;
struct in_addr  ftp_server_rg;
struct in_addr  plip_host_rg;
struct in_addr  nameserver_rg;
char            rootimage_tg [MAX_FILENAME] = "/suse/images/root";
char           *mountpoint_tg = "/var/adm/mount";
char           *inst_mountpoint_tg = "/inst-img";
char            server_dir_tg [MAX_FILENAME] = "/cdrom";
char           *kernellog_tg = "/etc/kernellog";
char           *lastlog_tg = "/etc/lastlog";
char           *bootmsg_tg = "/var/log/boot.msg";
char            installdir_tg [MAX_FILENAME] = "/suse/inst-sys";
char            harddisk_tg [12] = "/dev/XdaX";
char           *fstype_tg;
char            scsi_tg [20];
char            net_tg [20];
char            netdevice_tg [20] = "eth0";
char            cdrom_tg [20];
int             bootmode_ig = BOOTMODE_CD;
int             pcmcia_chip_ig = 0;
uint64_t        memory_ig = 8192000;
int             cpu_ig = 0;
int             force_ri_ig = FALSE;
int             ramdisk_ig = FALSE;
int             explode_win_ig = TRUE;
int             auto_ig = FALSE;
#if defined(__PPC__) || defined(__sparc__)
int             auto2_ig = TRUE;
#else
int             auto2_ig = FALSE;
#endif
int             demo_ig = FALSE;
int             nfsport_ig = 0;
char            machine_name_tg [100];
char            domain_name_tg [100];
int             old_kernel_ig = TRUE;
int             bootp_wait_ig = 0;
int             bootp_timeout_ig = 10;
int             passwd_mode_ig = FALSE;
char            ftp_user_tg [20];
char            ftp_password_tg [20];
char            ftp_proxy_tg [50];
int             ftp_proxyport_ig = -1;
char            ppcd_tg [10];
int             serial_ig = FALSE;
char            console_tg [30] = "/dev/console";
char		console_parms_tg [30] = "";
int             smp_ig = FALSE;
int             guru_ig = FALSE;
int             text_mode_ig = FALSE;
int             yast2_update_ig = FALSE;
int             yast2_serial_ig = FALSE;
int             has_floppy_ig = TRUE;
int             has_kbd_ig = TRUE;
unsigned        frame_buffer_mode_ig = 0;
int             yast_version_ig = 0;
int             valid_net_config_ig = 0;
int             reboot_ig;
int             usb_ig = 0;
char            *usb_mods_ig = NULL;
int             found_suse_cd_ig = FALSE;
char            xkbrules_tg [20] = "";
char            xkbmodel_tg [20] = "";
char            xkblayout_tg [20] = "";
unsigned        yast2_color_ig = 0;
unsigned        action_ig = 0;
int             reboot_wait_ig = FALSE;
char            *braille_ig = NULL;
char            *braille_dev_ig = NULL;
char            *x11i_tg = NULL;
char            livesrc_tg[16] = "";
char            driver_update_dir[16] = "";
int             cdrom_drives = 0;
int             splash_active = FALSE;
char           *fs_types_atg [] = { "minix", "ext2",    "reiserfs", "xfs",
                                    "vfat",  "iso9660", "msdos", "hpfs",  0 };
int             has_modprobe = 0;
