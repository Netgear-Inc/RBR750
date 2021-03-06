#ifndef _PROJECT_CONFIG_H
#define _PROJECT_CONFIG_H

#define LINUX_VERSION   "4.4.60"

#ifdef ORBI_AX_HW_HE_V2 /* For HE_V2 5G_High is wifi 2, 5G_Low is wifi 1 */

#define WIFI_DEVICE_5GH "wifi2"
#define WIFI_DEVICE_5GL "wifi0"
#define WIFI_DEVICE_2G  "wifi1"

#define BH_2G_CLI_IFNAME ""
#define BH_5G_CLI_IFNAME ""
#define NMRP_2G_CLI_IFNAME ""

#define BH_2G_AP_IFNAME "ath11"
#define BH_5G_AP_IFNAME "ath2"

#define FH_2G_AP_IFNAME "ath1"
#define FH_5G_AP_IFNAME "ath0"

#define GUEST_2G_AP_IFNAME "ath12"
#define GUEST_5G_AP_IFNAME "ath01"

#ifdef SMART_MONITOR_INTERFACE
#define SMART_MONITOR_2G_IFNAME "ath13"
#define SMART_MONITOR_5G_IFNAME "ath02"
#endif
#define FH_5GHIGH_AP_IFNAME "ath21"

#define BASE_GUEST_NETWORK_INTERFACE_NAME   "ath12;ath01"
#define NODE_GUEST_NETWORK_INTERFACE_NAME   "ath13;ath01"

#define BASE_BACKHAUL_INTERFACE_NAME   "ath11;ath2"
#define BASE_BACKHAUL_GUEST_VLAN_INTERFACE_NAME   "ath11;ath2;ath11.4094;ath11.4093;ath2.4094;ath2.4093"
#define NODE_BACKHAUL_INTERFACE_NAME   "ath2;ath21;ath11;ath12"
#define NODE_BACKHAUL_GUEST_VLAN_INTERFACE_NAME   "ath2;ath21;ath11;ath12;ath2.4094;ath2.4093;ath21.4094;ath21.4093;ath11.4094;ath11.4093;ath12.4094;ath12.4093"

#define BASE_ALL_WIFI_INTERFACE_NAME    "ath0;ath1;ath11;ath2"                  /* this is used to check if wifi interfaces are ready or not in heartbeat. */
#define NODE_ALL_WIFI_INTERFACE_NAME    "ath2;ath21;ath1;ath11;ath12;ath0"      /* this is used to check if wifi interfaces are ready or not in heartbeat. */

#else

#define WIFI_DEVICE_5GH "wifi0"
#define WIFI_DEVICE_5GL "wifi2"
#define WIFI_DEVICE_2G  "wifi1"


#define BH_2G_CLI_IFNAME ""
#define BH_5G_CLI_IFNAME ""
#define NMRP_2G_CLI_IFNAME ""

#define BH_2G_AP_IFNAME "ath11"
#define BH_5G_AP_IFNAME "ath0"

#define FH_2G_AP_IFNAME "ath1"
#define FH_5G_AP_IFNAME "ath2"

#define GUEST_2G_AP_IFNAME "ath12"
#define GUEST_5G_AP_IFNAME "ath21"

#ifdef SMART_MONITOR_INTERFACE
#define SMART_MONITOR_2G_IFNAME "ath13"
#define SMART_MONITOR_5G_IFNAME "ath22"
#endif
#define FH_5GHIGH_AP_IFNAME "ath21"

#define BASE_GUEST_NETWORK_INTERFACE_NAME   "ath12;ath21"
#define NODE_GUEST_NETWORK_INTERFACE_NAME   "ath13;ath21"

#define BASE_BACKHAUL_INTERFACE_NAME   "ath11;ath0"
#define NODE_BACKHAUL_INTERFACE_NAME   "ath0;ath01;ath11;ath12"

#define BASE_ALL_WIFI_INTERFACE_NAME    "ath0;ath1;ath11;ath2"                  /* this is used to check if wifi interfaces are ready or not in heartbeat. */
#define NODE_ALL_WIFI_INTERFACE_NAME    "ath0;ath01;ath1;ath11;ath12;ath2"      /* this is used to check if wifi interfaces are ready or not in heartbeat. */

#endif

#define BACK_HAUL_2G_CLI_INTERFACE   "/sys/class/net/ath01"
#define BACK_HAUL_5G_CLI_INTERFACE   "/sys/class/net/ath1"

#define BACK_HAUL_2G_AP_INTERFACE    "/sys/class/net/ath02"
#define BACK_HAUL_5G_AP_INTERFACE    "/sys/class/net/ath11"

#define FRONT_HAUL_2G_INTERFACE      "/sys/class/net/ath0"
#define FRONT_HAUL_5G_INTERFACE      "/sys/class/net/ath2"

/*BDF*/
#define IPQ8074_BOARDDATA_PATH_MD5 "/usr/bin/md5sum /lib/firmware/IPQ8074/bdwlan.bin | awk '{print $1}'"
#define IPQ8074_BOARDDATA_REGULATORY_PATH_MD5 "/usr/bin/md5sum /lib/firmware/IPQ8074/%s/bdwlan.bin | awk '{print $1}'"
#define DAKOTA_2G_BOARDDATA_PATH_MD5 "/usr/bin/md5sum /lib/firmware/IPQ4019/hw.1/boardData_1_0_IPQ4019_DK04_2G.bin | awk '{print $1}'"
#define DAKOTA_2G_BOARDDATA_REGULATORY_PATH_MD5 "/usr/bin/md5sum /lib/firmware/IPQ4019/hw.1/%s/boardData_1_0_IPQ4019_DK04_2G.bin | awk '{print $1}'"
/*mapping product default BDF here*/
#define PRODUCT_DEFAULT_BOARDDATA_PATH_MD5 IPQ8074_BOARDDATA_PATH_MD5
#define PRODUCT_DEFAULT_BOARDDATA_REGULATORY_PATH_MD5 IPQ8074_BOARDDATA_REGULATORY_PATH_MD5

#define IPQ8074_BOARDDATA_REGULATORY_PATH "cp -f /lib/firmware/IPQ8074/%s/* /lib/firmware/IPQ8074/"
#define DAKOTA_BOARDDATA_REGULATORY_PATH "cp -f /lib/firmware/IPQ4019/hw.1/%s/*.bin /lib/firmware/IPQ4019/hw.1/"
#define BERSA_BOARDDATA_REGULATORY_PATH "cp -f /lib/firmware/QCA9888/hw.2/%s/*.bin /lib/firmware/QCA9888/hw.2/"
/*mapping product default BDF here*/
#define PRODUCT_DEFAULT_BDF1 IPQ8074_BOARDDATA_REGULATORY_PATH
#define PRODUCT_DEFAULT_BDF2 ""


#define KERNEL_MODULE_PATH          "/lib/modules/"LINUX_VERSION

#define FXCN_BR_HIJACK_CLI_MAJOR_NUM            131
#define FXCN_IPV6_SPI_CLI_MAJOR_NUM             132
#define FXCN_ATT_DEV_CLI_MAJOR_NUM				133
#define FXCN_PKT_FILTER_CLI_MAJOR_NUM        134

#define MAX_INTERFACE_NAME_LENGTH   16

#define FXCN_MAX_GUEST_NETWORK_NUM                      16
#define FXCN_MAX_GUEST_NETWORK_INTERFACE_NAME_LENGTH    MAX_INTERFACE_NAME_LENGTH

#define FXCN_ACCESS_CONTROL_MAX_NUM_DEVICES     256
#define FXCN_MAX_BACKHAUL_INTERFACE_NUM             16
#define FXCN_MAX_BACHHAUL_INTERFACE_NAME_LENGTH     MAX_INTERFACE_NAME_LENGTH

#define MAX_WIFI_INTERFACE_NUM          6   /* In the case of node, 1(2g front)+2(2g backhaul, ap and client)+1(5g fronthaul) +2(5g backhaul, ap and client) */ 

#if defined(ORBI_AX_HW_HE_V2)
#define LAN_IF_NAME_NUM             "eth0 eth1 eth2 eth3"
#define LAN_ETH_IF_AG                  "eth1 eth2 eth3"
#define WAN_AGR_SLAVES              "eth4 eth0"
#else
#define LAN_IF_NAME_NUM             "eth1 eth2 eth3 eth4"
#endif

#define MAIN_VID                    "4094"
#define GUEST_VID                   "4093"

#define LAN_NETWORK_IF_NAME         "eth0 eth1 eth2 eth3 ath11.4094 ath2.4094 ath2"
#define GUEST_NETWORK_IF_NAME       "eth1.4093 eth2.4093 eth3.4093 eth0.4093 ath11.4093 ath2.4093"
#define LAN_NETWORK_IF_NAME_AG         "eth1 eth2 eth3 ath0 ath1 ath11.4094 ath2.4094 ath2"
#define GUEST_NETWORK_IF_NAME_AG       "eth1.4093 eth2.4093 eth3.4093 ath01 ath12 ath11.4093 ath2.4093"
#define GUEST_NETWORK_WAN_IF_NAME   "eth4.4093"

#define FXCN_MAX_HIJACK_DOMAIN_NUM      36
#define FXCN_MAX_HIJACK_DOMAIN_LENGTH   64
#define DNS_HIJACK_DOMAIN   "orbilogin.com;"\
                            "orbilogin.net;"\
                            "www.orbilogin.com;"\
                            "www.orbilogin.net;"\
	                        "www.routerlogin.net;"\
	                        "routerlogin.net;"\
	                        "www.routerlogin.com;"\
	                        "routerlogin.com"

#define DNS_NOT_HIJACK_DOMAIN   "updates1.netgear.com;"\
                                "www.google.com;"\
                                "as.xboxlive.com;"\
                                "tgs.xboxlive.com;"\
                                "macs.xboxlive.com;"\
                                "as.xboxlive.com.local;"\
                                "tgs.xboxlive.com.local;"\
                                "macs.xboxlive.com.local;"\
                                "captive.apple.com;"\
                                "www.appleiphonecell.com;"\
                                "www.apple.com;"\
                                "www.itools.info;"\
                                "www.ibook.info;"\
                                "www.airport.us;"\
                                "www.thinkdifferent.us;"\
                                "clients1.google.com;"\
                                "clients3.google.com;"\
                                "connectivitycheck.gstatic.com;"\
                                "detectportal.firefox.com;"\
                                "connectivitycheck.android.com"

#define BOARD_FLASH_SIZE            (512*1024*1024)
#define ROOTFS_MTD_RD               "/dev/mtdblock29"
#define ROOTFS_MTD_WR               "/dev/mtd29"
#define NVRAM_MTD_RD                "/dev/mtdblock19"
#define NVRAM_MTD_WR                "/dev/mtd19"
//#define BD_MTD_RD                   "/dev/mtdblock21"
//#define BD_MTD_WR                   "/dev/mtd21"

#define OPENVPN_MTD                 "mtd25"
#define OPENVPN_MTD_RD              "/dev/mtdblock25"
#define OPENVPN_MTD_WR              "/dev/mtd25"
#define DEBUG_MSG_MTD               "mtd24"
#define DEBUG_MSG_MTD_RD            "/dev/mtdblock24"
#define DEBUG_MSG_MTD_WR            "/dev/mtd24"

#if defined(NAND_TRAFFIC_METER)
#define NAND_TRAFFIC_METER_FOLDER   "/tmp/media/reserved1/traffic_meter/"
#define NAND_TRAFFIC_METER_1_FILE   NAND_TRAFFIC_METER_FOLDER"TF_METER1"
#define NAND_TRAFFIC_METER_2_FILE   NAND_TRAFFIC_METER_FOLDER"TF_METER2"
#endif

#if defined(NAND_POT)
#define NAND_POT_FOLDER             "/tmp/media/reserved1/pot/"
#define NAND_POT_FILE               NAND_POT_FOLDER"POT"
#endif

#ifdef NAND_STRING_TABLE
#define NAND_STRING_FOLDER          "/tmp/media/reserved1/string/"
#define LANG_TBL_MTD_RD             "/dev/mtdblock"
#define LANG_TBL_MTD_WR             NAND_STRING_FOLDER"string_table_"
#else
#define LANG_TBL_MTD_RD             "/dev/mtdblock"
#define LANG_TBL_MTD_WR             "/dev/mtd"
#endif

#ifdef NAND_OPENVPN
#define OPENVPN_FOLDER              "/tmp/media/reserved1/openvpn/"
#endif

/*TODO: Need to modify this to meet file base.*/
#define ST_SUPPORT_NUM              (9)        /* The maxium value can be 2-10. */
#define LANG_TBL_MTD_START          (1)
#define LANG_TBL_MTD_END            (LANG_TBL_MTD_START + ST_SUPPORT_NUM - 1)
#define BUILTIN_LANGUAGE            "English"


#define LANG_TBL1_MTD_RD            "/dev/mtdblock23"
#define LANG_TBL1_MTD_WR            "/dev/mtd23"
#define LANG_TBL2_MTD_RD            "/dev/mtdblock23"
#define LANG_TBL2_MTD_WR            "/dev/mtd23"
#define ML1_MTD_RD                  "/dev/mtdblock23"
#define ML1_MTD_WR                  "/dev/mtd23"
#define ML2_MTD_RD                  "/dev/mtdblock23"
#define ML2_MTD_WR                  "/dev/mtd23"
#define ML3_MTD_RD                  "/dev/mtdblock23"
#define ML3_MTD_WR                  "/dev/mtd23"
#define ML4_MTD_RD                  "/dev/mtdblock23"
#define ML4_MTD_WR                  "/dev/mtd23"
#define ML5_MTD_RD                  "/dev/mtdblock23"
#define ML5_MTD_WR                  "/dev/mtd23"
#define ML6_MTD_RD                  "/dev/mtdblock23"
#define ML6_MTD_WR                  "/dev/mtd23"
#define ML7_MTD_RD                  "/dev/mtdblock23"
#define ML7_MTD_WR                  "/dev/mtd23"
#define ML8_MTD_RD                  "/dev/mtdblock23"
#define ML8_MTD_WR                  "/dev/mtd23"
#define ML9_MTD_RD                  "/dev/mtdblock23"
#define ML9_MTD_WR                  "/dev/mtd23"


#define TF1_MTD_RD                  "/dev/mtdblock26"
#define TF1_MTD_WR                  "/dev/mtd26"
#define TF2_MTD_RD                  "/dev/mtdblock26"
#define TF2_MTD_WR                  "/dev/mtd26"

#define ART_MTD_PARTITION_NAME			"0:ART"
#define NVRAM_MTD_PARTITION_NAME		"nvram"
#define BD_MTD_PARTITION_NAME           "board_data"
#define ROOTFS_INDEX_PARTITION_NAME     "latest_rootfs"
#define DEBUGMSG_INDEX_PARTITION_NAME   "DebugMsg"

#define RESERVED1_MTD_PARTITION_NAME       "Reserved1"
#define RESERVED2_MTD_PARTITION_NAME       "Reserved2"

/**/
#if defined(ORBI_AX_HW_HE_V2)
#define CPU_PORT_IDX               	(0)
#define WAN_PORT_IDX               	(5)
#define LAN1_PORT_IDX              	(1)
#define LAN2_PORT_IDX              	(2)
#define LAN3_PORT_IDX              	(3)
#define LAN4_PORT_IDX              	(4)
#define LAN_PORT_IDX_START     		(1)
#define LAN_PORT_IDX_END       		(4)
#define TOTAL_LAN_NUMS              (4)
#define MAX_LAN_NUMS       			(4)
#define LAN1_PORT_IDX_HEX           "0x01"
#define LAN2_PORT_IDX_HEX           "0x02"
#define LAN3_PORT_IDX_HEX           "0x03"
#define LAN4_PORT_IDX_HEX           "0x04"


#define WAN_PORT_IFACE				"eth4"
#define LAN_PORT1_IFACE				"eth0"
#define LAN_PORT2_IFACE				"eth1"
#define LAN_PORT3_IFACE				"eth2"
#define LAN_PORT4_IFACE				"eth3"
#define LAN_PORT1_IFACE_GUEST		"eth0.4093"
#define LAN_PORT2_IFACE_GUEST		"eth1.4093"
#define LAN_PORT3_IFACE_GUEST		"eth2.4093"
#define LAN_PORT4_IFACE_GUEST		"eth3.4093"
#define WAN_LINK_AGR                "bond1"
#else
#define CPU_PORT_IDX               	(0)
#define WAN_PORT_IDX               	(1)
#define LAN1_PORT_IDX              	(2)
#define LAN2_PORT_IDX              	(3)
#define LAN3_PORT_IDX              	(4)
#define LAN4_PORT_IDX              	(5)
#define LAN_PORT_IDX_START     		(2)
#define LAN_PORT_IDX_END       		(5)
#define TOTAL_LAN_NUMS              (4)
#define MAX_LAN_NUMS       			(4)
#define LAN1_PORT_IDX_HEX           "0x02"
#define LAN2_PORT_IDX_HEX           "0x03"
#define LAN3_PORT_IDX_HEX           "0x04"
#define LAN4_PORT_IDX_HEX           "0x05"


#define WAN_PORT_IFACE				"eth0"
#define LAN_PORT1_IFACE				"eth1"
#define LAN_PORT2_IFACE				"eth2"
#define LAN_PORT3_IFACE				"eth3"
#define LAN_PORT4_IFACE				"eth4"
#define LAN_PORT1_IFACE_GUEST		"eth1.4093"
#define LAN_PORT2_IFACE_GUEST		"eth2.4093"
#define LAN_PORT3_IFACE_GUEST		"eth3.4093"
#define LAN_PORT4_IFACE_GUEST		"eth4.4093"

#endif


#define WAN_BR_IFACE				"br-wan"
#define LAN_BR_IFACE				"br-lan"
#define GUEST_BR_IFACE				"br-guest"
#define GUI_PORT_1					0x01
#define GUI_PORT_2					0x02
#define GUI_PORT_3					0x04
#define GUI_PORT_4					0x08
#endif  /* _PROJECT_CONFIG_H */
