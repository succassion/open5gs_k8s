/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_PUSCH_PowerControl_H_
#define	_ASN_RRC_PUSCH_PowerControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "ASN_RRC_Alpha.h"
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "ASN_RRC_PUSCH-PathlossReferenceRS-Id.h"
#include "ASN_RRC_SRI-PUSCH-PowerControlId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_PUSCH_PowerControl__tpc_Accumulation {
	ASN_RRC_PUSCH_PowerControl__tpc_Accumulation_disabled	= 0
} e_ASN_RRC_PUSCH_PowerControl__tpc_Accumulation;
typedef enum ASN_RRC_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates {
	ASN_RRC_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates_twoStates	= 0
} e_ASN_RRC_PUSCH_PowerControl__twoPUSCH_PC_AdjustmentStates;
typedef enum ASN_RRC_PUSCH_PowerControl__deltaMCS {
	ASN_RRC_PUSCH_PowerControl__deltaMCS_enabled	= 0
} e_ASN_RRC_PUSCH_PowerControl__deltaMCS;

/* Forward declarations */
struct ASN_RRC_P0_PUSCH_AlphaSet;
struct ASN_RRC_PUSCH_PathlossReferenceRS;
struct ASN_RRC_SRI_PUSCH_PowerControl;

/* ASN_RRC_PUSCH-PowerControl */
typedef struct ASN_RRC_PUSCH_PowerControl {
	long	*tpc_Accumulation;	/* OPTIONAL */
	ASN_RRC_Alpha_t	*msg3_Alpha;	/* OPTIONAL */
	long	*p0_NominalWithoutGrant;	/* OPTIONAL */
	struct ASN_RRC_PUSCH_PowerControl__p0_AlphaSets {
		A_SEQUENCE_OF(struct ASN_RRC_P0_PUSCH_AlphaSet) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p0_AlphaSets;
	struct ASN_RRC_PUSCH_PowerControl__pathlossReferenceRSToAddModList {
		A_SEQUENCE_OF(struct ASN_RRC_PUSCH_PathlossReferenceRS) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToAddModList;
	struct ASN_RRC_PUSCH_PowerControl__pathlossReferenceRSToReleaseList {
		A_SEQUENCE_OF(ASN_RRC_PUSCH_PathlossReferenceRS_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSToReleaseList;
	long	*twoPUSCH_PC_AdjustmentStates;	/* OPTIONAL */
	long	*deltaMCS;	/* OPTIONAL */
	struct ASN_RRC_PUSCH_PowerControl__sri_PUSCH_MappingToAddModList {
		A_SEQUENCE_OF(struct ASN_RRC_SRI_PUSCH_PowerControl) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sri_PUSCH_MappingToAddModList;
	struct ASN_RRC_PUSCH_PowerControl__sri_PUSCH_MappingToReleaseList {
		A_SEQUENCE_OF(ASN_RRC_SRI_PUSCH_PowerControlId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sri_PUSCH_MappingToReleaseList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_PUSCH_PowerControl_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_tpc_Accumulation_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_twoPUSCH_PC_AdjustmentStates_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_deltaMCS_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_PUSCH_PowerControl;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_PUSCH_PowerControl_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_PUSCH_PowerControl_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_PUSCH_PowerControl_H_ */
#include <asn_internal.h>
