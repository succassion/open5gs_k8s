/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_NRDC_Parameters_H_
#define	_ASN_RRC_NRDC_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_RRC_MeasAndMobParametersMRDC;
struct ASN_RRC_GeneralParametersMRDC_XDD_Diff;
struct ASN_RRC_UE_MRDC_CapabilityAddXDD_Mode;
struct ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode;

/* ASN_RRC_NRDC-Parameters */
typedef struct ASN_RRC_NRDC_Parameters {
	struct ASN_RRC_MeasAndMobParametersMRDC	*measAndMobParametersNRDC;	/* OPTIONAL */
	struct ASN_RRC_GeneralParametersMRDC_XDD_Diff	*generalParametersNRDC;	/* OPTIONAL */
	struct ASN_RRC_UE_MRDC_CapabilityAddXDD_Mode	*fdd_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	struct ASN_RRC_UE_MRDC_CapabilityAddXDD_Mode	*tdd_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	struct ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode	*fr1_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	struct ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode	*fr2_Add_UE_NRDC_Capabilities;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct ASN_RRC_NRDC_Parameters__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_NRDC_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_NRDC_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_NRDC_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_NRDC_Parameters_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_NRDC_Parameters_H_ */
#include <asn_internal.h>
