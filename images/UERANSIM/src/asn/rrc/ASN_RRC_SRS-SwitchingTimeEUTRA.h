/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_SRS_SwitchingTimeEUTRA_H_
#define	_ASN_RRC_SRS_SwitchingTimeEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL {
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n0	= 0,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n0dot5	= 1,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n1	= 2,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n1dot5	= 3,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n2	= 4,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n2dot5	= 5,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n3	= 6,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n3dot5	= 7,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n4	= 8,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n4dot5	= 9,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n5	= 10,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n5dot5	= 11,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n6	= 12,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n6dot5	= 13,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL_n7	= 14
} e_ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeDL;
typedef enum ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL {
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n0	= 0,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n0dot5	= 1,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n1	= 2,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n1dot5	= 3,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n2	= 4,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n2dot5	= 5,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n3	= 6,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n3dot5	= 7,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n4	= 8,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n4dot5	= 9,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n5	= 10,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n5dot5	= 11,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n6	= 12,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n6dot5	= 13,
	ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL_n7	= 14
} e_ASN_RRC_SRS_SwitchingTimeEUTRA__switchingTimeUL;

/* ASN_RRC_SRS-SwitchingTimeEUTRA */
typedef struct ASN_RRC_SRS_SwitchingTimeEUTRA {
	long	*switchingTimeDL;	/* OPTIONAL */
	long	*switchingTimeUL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_SRS_SwitchingTimeEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_switchingTimeDL_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_switchingTimeUL_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_SRS_SwitchingTimeEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_SRS_SwitchingTimeEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_SRS_SwitchingTimeEUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_SRS_SwitchingTimeEUTRA_H_ */
#include <asn_internal.h>
