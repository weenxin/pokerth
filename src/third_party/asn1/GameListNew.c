/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "GameListNew.h"

static int
memb_playerIds_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size <= 10)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_playerIds_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_playerIds_tags_4[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_playerIds_specs_4 = {
	sizeof(struct playerIds),
	offsetof(struct playerIds, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_playerIds_4 = {
	"playerIds",
	"playerIds",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_playerIds_tags_4,
	sizeof(asn_DEF_playerIds_tags_4)
		/sizeof(asn_DEF_playerIds_tags_4[0]), /* 1 */
	asn_DEF_playerIds_tags_4,	/* Same as above */
	sizeof(asn_DEF_playerIds_tags_4)
		/sizeof(asn_DEF_playerIds_tags_4[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_playerIds_4,
	1,	/* Single element */
	&asn_SPC_playerIds_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_GameListNew_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GameListNew, gameMode),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetGameMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GameListNew, isPrivate),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"isPrivate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GameListNew, playerIds),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_playerIds_4,
		memb_playerIds_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerIds"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GameListNew, adminPlayerId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"adminPlayerId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GameListNew, gameInfo),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NetGameInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameInfo"
		},
};
static ber_tlv_tag_t asn_DEF_GameListNew_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GameListNew_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 1, 0, 0 }, /* isPrivate at 165 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, 0, 0 }, /* adminPlayerId at 167 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 }, /* gameMode at 164 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, 0, 1 }, /* playerIds at 166 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -1, 0 } /* gameInfo at 169 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GameListNew_specs_1 = {
	sizeof(struct GameListNew),
	offsetof(struct GameListNew, _asn_ctx),
	asn_MAP_GameListNew_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GameListNew = {
	"GameListNew",
	"GameListNew",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GameListNew_tags_1,
	sizeof(asn_DEF_GameListNew_tags_1)
		/sizeof(asn_DEF_GameListNew_tags_1[0]), /* 1 */
	asn_DEF_GameListNew_tags_1,	/* Same as above */
	sizeof(asn_DEF_GameListNew_tags_1)
		/sizeof(asn_DEF_GameListNew_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GameListNew_1,
	5,	/* Elements count */
	&asn_SPC_GameListNew_specs_1	/* Additional specs */
};

