/*
 * Automatically generated header file: don't edit
 */

#define AUTOCONF_INCLUDED

/* Version Number */
#define BB_VER "1.00-pre8"
#define BB_BT "2005.09.16-02:21+0000"

#define HAVE_DOT_CONFIG 1

/*
 * General Configuration
 */
#undef CONFIG_FEATURE_BUFFERS_USE_MALLOC
#undef CONFIG_FEATURE_BUFFERS_GO_ON_STACK
#define CONFIG_FEATURE_BUFFERS_GO_IN_BSS 1
#undef CONFIG_FEATURE_VERBOSE_USAGE
#undef CONFIG_FEATURE_INSTALLER
#undef CONFIG_LOCALE_SUPPORT
#undef CONFIG_FEATURE_DEVFS
#undef CONFIG_FEATURE_DEVPTS
#undef CONFIG_FEATURE_CLEAN_UP
#undef CONFIG_FEATURE_SUID
#undef CONFIG_SELINUX

/*
 * Build Options
 */
#undef CONFIG_STATIC
#undef CONFIG_LFS
#define USING_CROSS_COMPILER 1
#define CROSS_COMPILER_PREFIX "mips-uclibc-"
#define EXTRA_CFLAGS_OPTIONS ""

/*
 * Installation Options
 */
#undef CONFIG_INSTALL_NO_USR
#define PREFIX "./_install"

/*
 * Archival Utilities
 */
#undef CONFIG_AR
#define CONFIG_BUNZIP2 1
#undef CONFIG_CPIO
#undef CONFIG_DPKG
#undef CONFIG_DPKG_DEB
#undef CONFIG_GUNZIP
#undef CONFIG_GZIP
#undef CONFIG_RPM2CPIO
#undef CONFIG_RPM
#undef CONFIG_TAR
#undef CONFIG_UNCOMPRESS
#undef CONFIG_UNZIP

/*
 * Coreutils
 */
#undef CONFIG_BASENAME
#undef CONFIG_CAL
#define CONFIG_CAT 1
#undef CONFIG_CHGRP
#undef CONFIG_CHMOD
#undef CONFIG_CHOWN
#undef CONFIG_CHROOT
#undef CONFIG_CMP
#undef CONFIG_CP
#define CONFIG_CUT 1
#define CONFIG_DATE 1
#undef CONFIG_FEATURE_DATE_ISOFMT
#undef CONFIG_DD
#undef CONFIG_DF
#define CONFIG_DIRNAME 1
#undef CONFIG_DOS2UNIX
#undef CONFIG_DU
#define CONFIG_ECHO 1
#undef CONFIG_FEATURE_FANCY_ECHO
#undef CONFIG_ENV
#define CONFIG_EXPR 1
#undef CONFIG_FALSE
#undef CONFIG_FOLD
#define CONFIG_HEAD 1
#undef CONFIG_FEATURE_FANCY_HEAD
#undef CONFIG_HOSTID
#define CONFIG_ID 1
#undef CONFIG_INSTALL
#undef CONFIG_LENGTH
#undef CONFIG_LN
#undef CONFIG_LOGNAME
#undef CONFIG_LS
#undef CONFIG_MD5SUM
#undef CONFIG_MKDIR
#undef CONFIG_MKFIFO
#undef CONFIG_MKNOD
#undef CONFIG_MV
#undef CONFIG_OD
#undef CONFIG_PRINTF
#undef CONFIG_PWD
#undef CONFIG_REALPATH
#define CONFIG_RM 1
#undef CONFIG_RMDIR
#undef CONFIG_SEQ
#undef CONFIG_SHA1SUM
#define CONFIG_SLEEP 1
#undef CONFIG_FEATURE_FANCY_SLEEP
#define CONFIG_SORT 1
#undef CONFIG_STTY
#undef CONFIG_SYNC
#define CONFIG_TAIL 1
#undef CONFIG_FEATURE_FANCY_TAIL
#undef CONFIG_TEE
#define CONFIG_TEST 1

/*
 * test (forced enabled for use with shell)
 */
#undef CONFIG_TOUCH
#define CONFIG_TR 1
#undef CONFIG_TRUE
#undef CONFIG_TTY
#define CONFIG_UNAME 1
#undef CONFIG_UNIQ
#undef CONFIG_USLEEP
#undef CONFIG_UUDECODE
#undef CONFIG_UUENCODE
#undef CONFIG_WATCH
#define CONFIG_WC 1
#undef CONFIG_WHO
#undef CONFIG_WHOAMI
#undef CONFIG_YES

/*
 * Console Utilities
 */
#undef CONFIG_CHVT
#undef CONFIG_CLEAR
#undef CONFIG_DEALLOCVT
#undef CONFIG_DUMPKMAP
#undef CONFIG_LOADFONT
#undef CONFIG_LOADKMAP
#undef CONFIG_OPENVT
#undef CONFIG_RESET
#undef CONFIG_SETKEYCODES

/*
 * Debian Utilities
 */
#undef CONFIG_MKTEMP
#undef CONFIG_PIPE_PROGRESS
#undef CONFIG_READLINK
#undef CONFIG_RUN_PARTS
#undef CONFIG_START_STOP_DAEMON
#undef CONFIG_WHICH

/*
 * Editors
 */
#undef CONFIG_AWK
#undef CONFIG_PATCH
#define CONFIG_SED 1
#undef CONFIG_VI

/*
 * Finding Utilities
 */
#undef CONFIG_FIND
#define CONFIG_GREP 1
#define CONFIG_FEATURE_GREP_EGREP_ALIAS 1
#undef CONFIG_FEATURE_GREP_FGREP_ALIAS
#undef CONFIG_FEATURE_GREP_CONTEXT
#undef CONFIG_XARGS

/*
 * Init Utilities
 */
#define CONFIG_INIT 1
#undef CONFIG_FEATURE_USE_INITTAB
#undef CONFIG_FEATURE_INITRD
#undef CONFIG_FEATURE_INIT_COREDUMPS
#undef CONFIG_FEATURE_EXTRA_QUIET
#undef CONFIG_HALT
#undef CONFIG_POWEROFF
#define CONFIG_REBOOT 1
#undef CONFIG_MESG

/*
 * Login/Password Management Utilities
 */
#undef CONFIG_USE_BB_PWD_GRP
#undef CONFIG_ADDGROUP
#undef CONFIG_DELGROUP
#undef CONFIG_ADDUSER
#undef CONFIG_DELUSER
#undef CONFIG_GETTY
#undef CONFIG_LOGIN
#undef CONFIG_PASSWD
#undef CONFIG_SU
#undef CONFIG_SULOGIN
#undef CONFIG_VLOCK

/*
 * Miscellaneous Utilities
 */
#undef CONFIG_ADJTIMEX
#undef CONFIG_CROND
#undef CONFIG_CRONTAB
#undef CONFIG_DC
#undef CONFIG_DEVFSD
#undef CONFIG_LAST
#undef CONFIG_HDPARM
#undef CONFIG_MAKEDEVS
#undef CONFIG_MT
#undef CONFIG_RX
#undef CONFIG_STRINGS
#undef CONFIG_TIME
#undef CONFIG_WATCHDOG

/*
 * Linux Module Utilities
 */
#undef CONFIG_INSMOD
#undef CONFIG_LSMOD
#undef CONFIG_MODPROBE
#undef CONFIG_RMMOD

/*
 * Networking Utilities
 */
#undef CONFIG_FEATURE_IPV6
#undef CONFIG_ARPING
#undef CONFIG_FTPGET
#undef CONFIG_FTPPUT
#define CONFIG_HOSTNAME 1
#undef CONFIG_HTTPD
#define CONFIG_IFCONFIG 1
#define CONFIG_FEATURE_IFCONFIG_STATUS 1
#undef CONFIG_FEATURE_IFCONFIG_SLIP
#undef CONFIG_FEATURE_IFCONFIG_MEMSTART_IOADDR_IRQ
#define CONFIG_FEATURE_IFCONFIG_HW 1
#undef CONFIG_FEATURE_IFCONFIG_BROADCAST_PLUS
#undef CONFIG_IFUPDOWN
#undef CONFIG_INETD
#undef CONFIG_IP
#undef CONFIG_IPCALC
#undef CONFIG_IPADDR
#undef CONFIG_IPLINK
#undef CONFIG_IPROUTE
#undef CONFIG_IPTUNNEL
#undef CONFIG_NAMEIF
#undef CONFIG_NC
#define CONFIG_NETSTAT 1
#undef CONFIG_NSLOOKUP
#undef CONFIG_PING
#define CONFIG_ROUTE 1
#undef CONFIG_TELNET
#undef CONFIG_TELNETD
#undef CONFIG_TFTP
#undef CONFIG_TRACEROUTE
#undef CONFIG_VCONFIG
#undef CONFIG_WGET

/*
 * udhcp Server/Client
 */
#undef CONFIG_UDHCPD
#undef CONFIG_UDHCPC

/*
 * Process Utilities
 */
#undef CONFIG_FREE
#define CONFIG_KILL 1
#define CONFIG_KILLALL 1
#undef CONFIG_PIDOF
#define CONFIG_PS 1
#undef CONFIG_RENICE
#undef CONFIG_TOP
#undef CONFIG_UPTIME
#undef CONFIG_SYSCTL

/*
 * Another Bourne-like Shell
 */
#define CONFIG_FEATURE_SH_IS_ASH 1
#undef CONFIG_FEATURE_SH_IS_HUSH
#undef CONFIG_FEATURE_SH_IS_LASH
#undef CONFIG_FEATURE_SH_IS_MSH
#undef CONFIG_FEATURE_SH_IS_NONE
#define CONFIG_ASH 1

/*
 * Ash Shell Options
 */
#define CONFIG_ASH_JOB_CONTROL 1
#undef CONFIG_ASH_ALIAS
#undef CONFIG_ASH_MATH_SUPPORT
#undef CONFIG_ASH_GETOPTS
#undef CONFIG_ASH_CMDCMD
#undef CONFIG_ASH_MAIL
#define CONFIG_ASH_OPTIMIZE_FOR_SIZE 1
#undef CONFIG_HUSH
#undef CONFIG_LASH
#undef CONFIG_MSH

/*
 * Bourne Shell Options
 */
#undef CONFIG_FEATURE_SH_EXTRA_QUIET
#undef CONFIG_FEATURE_SH_STANDALONE_SHELL
#define CONFIG_FEATURE_COMMAND_EDITING 1
#define CONFIG_FEATURE_COMMAND_HISTORY 15
#undef CONFIG_FEATURE_COMMAND_SAVEHISTORY
#define CONFIG_FEATURE_COMMAND_TAB_COMPLETION 1
#undef CONFIG_FEATURE_COMMAND_USERNAME_COMPLETION
#undef CONFIG_FEATURE_SH_FANCY_PROMPT

/*
 * System Logging Utilities
 */
#define CONFIG_SYSLOGD 1
#define CONFIG_FEATURE_ROTATE_LOGFILE 1
#define CONFIG_FEATURE_REMOTE_LOG 1
#define CONFIG_FEATURE_IPC_SYSLOG 1
#define CONFIG_FEATURE_IPC_SYSLOG_BUFFER_SIZE 16
#undef CONFIG_LOGREAD
#define CONFIG_KLOGD 1
#define CONFIG_LOGGER 1

/*
 * Linux System Utilities
 */
#undef CONFIG_DMESG
#undef CONFIG_FBSET
#undef CONFIG_FDFLUSH
#undef CONFIG_FDFORMAT
#undef CONFIG_FDISK
#undef CONFIG_FREERAMDISK
#undef CONFIG_FSCK_MINIX
#undef CONFIG_MKFS_MINIX
#undef CONFIG_GETOPT
#undef CONFIG_HEXDUMP
#undef CONFIG_HWCLOCK
#undef CONFIG_LOSETUP
#undef CONFIG_MKSWAP
#undef CONFIG_MORE
#undef CONFIG_PIVOT_ROOT
#undef CONFIG_RDATE
#undef CONFIG_SWAPONOFF
#undef CONFIG_MOUNT
#undef CONFIG_UMOUNT

/*
 * Debugging Options
 */
#undef CONFIG_DEBUG
