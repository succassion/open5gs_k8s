/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_SchedulingRequestResourceConfig_H_
#define	_ASN_RRC_SchedulingRequestResourceConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_SchedulingRequestResourceId.h"
#include "ASN_RRC_SchedulingRequestId.h"
#include "ASN_RRC_PUCCH-ResourceId.h"
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR {
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_NOTHING,	/* No components present */
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sym2,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sym6or7,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl1,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl2,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl4,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl5,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl8,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl10,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl16,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl20,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl40,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl80,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl160,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl320,
	ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR_sl640
} ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR;

/* ASN_RRC_SchedulingRequestResourceConfig */
typedef struct ASN_RRC_SchedulingRequestResourceConfig {
	ASN_RRC_SchedulingRequestResourceId_t	 schedulingRequestResourceId;
	ASN_RRC_SchedulingRequestId_t	 schedulingRequestID;
	struct ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset {
		ASN_RRC_SchedulingRequestResourceConfig__periodicityAndOffset_PR present;
		union ASN_RRC_SchedulingRequestResourceConfig__ASN_RRC_periodicityAndOffset_u {
			NULL_t	 sym2;
			NULL_t	 sym6or7;
			NULL_t	 sl1;
			long	 sl2;
			long	 sl4;
			long	 sl5;
			long	 sl8;
			long	 sl10;
			long	 sl16;
			long	 sl20;
			long	 sl40;
			long	 sl80;
			long	 sl160;
			long	 sl320;
			long	 sl640;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *periodicityAndOffset;
	ASN_RRC_PUCCH_ResourceId_t	*resource;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_SchedulingRequestResourceConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SchedulingRequestResourceConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SchedulingRequestResourceConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_SchedulingRequestResourceConfig_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_SchedulingRequestResourceConfig_H_ */
#include <asn_internal.h>