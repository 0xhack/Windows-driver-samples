//---------------------------------------------------------------------------
//
// Copyright (c) 2015 Realtek Semiconductor, Inc. All rights reserved.
// 
//---------------------------------------------------------------------------
// Description:
//		Defines values specified in the WFA P2P Specification.
//

#ifndef __INC_P2P_PROTOCOL_SPEC_H
#define __INC_P2P_PROTOCOL_SPEC_H

#define P2P_WILDCARD_SSID "DIRECT-"
#define P2P_WILDCARD_SSID_LEN 7

#define P2P_MAX_GO_INTENT 15

typedef	enum _P2P_ATTR_ID 
{
	P2P_ATTR_STATUS = 0,
	P2P_ATTR_MINOR_REASON_CODE = 1,
	P2P_ATTR_CAPABILITY = 2,
	P2P_ATTR_DEVICE_ID = 3,
	P2P_ATTR_GROUP_OWNER_INTENT = 4,
	P2P_ATTR_CONFIGURATION_TIMEOUT = 5,
	P2P_ATTR_LISTEN_CHANNEL = 6,
	P2P_ATTR_GROUP_BSSID = 7,
	P2P_ATTR_EXT_LISTEN_TIMING = 8,
	P2P_ATTR_INTENDED_INTERFACE_ADDRESS = 9,
	P2P_ATTR_MANAGEABILITY = 10,
	P2P_ATTR_CHANNEL_LIST = 11,
	P2P_ATTR_NOTICE_OF_ABSENCE = 12,
	P2P_ATTR_DEVICE_INFO = 13,
	P2P_ATTR_GROUP_INFO = 14,
	P2P_ATTR_GROUP_ID = 15,
	P2P_ATTR_INTERFACE = 16,
	P2P_ATTR_OP_CHANNEL= 17,
	P2P_ATTR_INVITATION_FLAGS = 18,
	//-----------------------------------------
	// P2P service addendum
	P2P_ATTR_RSVD_19 = 19,
	P2P_ATTR_RSVD_20 = 20,
	P2P_ATTR_SVC_HASH = 21,
	P2P_ATTR_SESSION_INFO_DATA_INFO = 22,
	P2P_ATTR_CONN_CAP_INFO = 23,
	P2P_ATTR_ADV_ID_INFO = 24,
	P2P_ATTR_ADV_SVC_INFO = 25,
	P2P_ATTR_SESSION_ID_INFO = 26,
	P2P_ATTR_FEATURE_CAP_INFO = 27,
	
	P2P_ATTR_VENDOR_SPECIFIC = 221
}P2P_ATTR_ID, *PP2P_ATTR_ID;


// Invitation Flags
#define P2P_INVITATION_FLAGS_TYPE 	0x01

// P2P Capability
#define P2P_DEV_CAP_SERVICE_DISCOVERY 			BIT0
#define P2P_DEV_CAP_CLIENT_DISCOVERABILITY 		BIT1
#define P2P_DEV_CAP_CONCURRENT_OPER 			BIT2
#define P2P_DEV_CAP_INFRA_MANAGED 				BIT3
#define P2P_DEV_CAP_DEVICE_LIMIT 				BIT4
#define P2P_DEV_CAP_INVITATION_PROCEDURE 		BIT5

// P2P Capability
#define P2P_GROUP_CAP_GROUP_OWNER 				BIT0
#define P2P_GROUP_CAP_PERSISTENT_GROUP 			BIT1
#define P2P_GROUP_CAP_GROUP_LIMIT 				BIT2
#define P2P_GROUP_CAP_INTRA_BSS_DIST 			BIT3
#define P2P_GROUP_CAP_CROSS_CONN 				BIT4
#define P2P_GROUP_CAP_PERSISTENT_RECONN 		BIT5
#define P2P_GROUP_CAP_GROUP_FORMATION 			BIT6
#define P2P_GROUP_CAP_IP_ADDR_ALLOCATION 		BIT7

// P2P action frames
typedef enum _P2P_ACTION_FRAME_TYPES
{
	P2P_NOA = 0,
	P2P_PRESENCE_REQ = 1,
	P2P_PRESENCE_RSP = 2,
	P2P_GO_DISC_REQ = 3
}P2P_ACTION_FRAME_TYPES, *PP2P_ACTION_FRAME_TYPES;

// P2P public action frames
typedef enum _P2P_PUBLIC_ACTION_FRAME_TYPES 
{
	P2P_GO_NEG_REQ = 0,
	P2P_GO_NEG_RSP = 1,
	P2P_GO_NEG_CONF = 2,
	P2P_INVITATION_REQ = 3,
	P2P_INVITATION_RSP = 4,
	P2P_DEV_DISC_REQ = 5,
	P2P_DEV_DISC_RSP = 6,
	P2P_PROV_DISC_REQ = 7,
	P2P_PROV_DISC_RSP = 8
}P2P_PUBLIC_ACTION_FRAME_TYPES, *PP2P_PUBLIC_ACTION_FRAME_TYPES;

#define OUI_WFA 					0x506F9A
#define P2P_IE_VENDOR_TYPE 			0x506f9a09

#define P2P_SC_SUCCESS 								(u1Byte)0
#define P2P_SC_FAIL_INFO_CURRENTLY_UNAVAILABLE 		(u1Byte)1
#define P2P_SC_FAIL_INCOMPATIBLE_PARAMS 			(u1Byte)2
#define P2P_SC_FAIL_LIMIT_REACHED 					(u1Byte)3
#define P2P_SC_FAIL_INVALID_PARAMS 					(u1Byte)4
#define P2P_SC_FAIL_UNABLE_TO_ACCOMMODATE 			(u1Byte)5
#define P2P_SC_FAIL_PREV_PROTOCOL_ERROR 			(u1Byte)6
#define P2P_SC_FAIL_NO_COMMON_CHANNELS 				(u1Byte)7
#define P2P_SC_FAIL_UNKNOWN_GROUP 					(u1Byte)8
#define P2P_SC_FAIL_BOTH_GO_INTENT_15 				(u1Byte)9
#define P2P_SC_FAIL_INCOMPATIBLE_PROV_METHOD		(u1Byte)10
#define P2P_SC_FAIL_REJECTED_BY_USER 				(u1Byte)11

#define P2P_SC_FAIL_COMMON_CHANNEL_NOT_ARRIVED		(u1Byte)200
#define P2P_SC_FAIL_TIMEOUT_WAITING_FOR_GON_RSP		(u1Byte)201
#define P2P_SC_FAIL_TIMEOUT_WAITING_FOR_GON_CONFIRM	(u1Byte)202
#define P2P_SC_FAIL_TIMEOUT_WAITING_FOR_GO_BEACON	(u1Byte)203
#define P2P_SC_FAIL_TIMEOUT_WAITING_FOR_DEVICE_DISCOVERABILITY_RSP (u1Byte)204
#define P2P_SC_FAIL_TIMEOUT_WAITING_FOR_PROVISION_DISCOVERY_RSP (u1Byte)205
#define P2P_SC_FAIL_TIMEOUT_WAITING_FOR_INVITATION_RSP (u1Byte)206
#define P2P_SC_FAIL_FAIL_PROVISION_DISCOVERY_FAILED	(u1Byte)207
#define P2P_SC_FAIL_FAIL_SERVICE_DISCOVERY_FAILED	(u1Byte)208

#endif	// #ifndef __INC_P2P_PROTOCOL_SPEC_H