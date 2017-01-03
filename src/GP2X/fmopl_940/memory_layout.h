/*
 memory layout for OPL2+OPL3
*/

#define OPL2_MSG_BASE  0x200000
#define OPL2_MSG_SIZE  0x100000
#define OPL2_DAT_BASE  0x14C000
#define OPL2_DAT_SIZE   0x14000

#define OPL3_MSG_BASE  0x300000
#define OPL3_MSG_SIZE  0x100000
#define OPL3_DAT_BASE  0x160000
#define OPL3_DAT_SIZE   0x40000

#undef BUFF_BASE_ADDRESS
#undef NSUB_OFFSET
#undef NEX_OFFSET
#undef MSG_BUF_OFFSET
#undef BUFPOS_OFFSET
#undef READPOS_OFFSET
#undef DATA_OFFSET
#undef FNTAB_OFFSET
#undef END_OFFSET

#undef DATA_BASE_ADDRESS
#undef NUMCHIP_OFFSET
#undef TL_TAB_OFFSET
#undef SIN_TAB_OFFSET
#undef OPL_OFFSET
#undef END_OFFSET2

#undef MSG_BUF_SIZE
#undef SHARED_BUF_SIZE
#undef OPL_SIZE
