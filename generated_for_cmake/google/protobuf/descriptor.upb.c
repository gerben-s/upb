/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/descriptor.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "google/protobuf/descriptor.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const google_protobuf_FileDescriptorSet_submsgs[1] = {
  &google_protobuf_FileDescriptorProto_msginit,
};

static const upb_msglayout_field google_protobuf_FileDescriptorSet__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_FileDescriptorSet_msginit = {
  &google_protobuf_FileDescriptorSet_submsgs[0],
  &google_protobuf_FileDescriptorSet__fields[0],
  UPB_SIZE(8, 8), 1, false, 8,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_prm_1bt_max192b, UPB_SIZE(10, 10)},
  },
};

static const upb_msglayout *const google_protobuf_FileDescriptorProto_submsgs[6] = {
  &google_protobuf_DescriptorProto_msginit,
  &google_protobuf_EnumDescriptorProto_msginit,
  &google_protobuf_FieldDescriptorProto_msginit,
  &google_protobuf_FileOptions_msginit,
  &google_protobuf_ServiceDescriptorProto_msginit,
  &google_protobuf_SourceCodeInfo_msginit,
};

static const upb_msglayout_field google_protobuf_FileDescriptorProto__fields[12] = {
  {1, UPB_SIZE(4, 8), 1, 0, 12, 1},
  {2, UPB_SIZE(12, 24), 2, 0, 12, 1},
  {3, UPB_SIZE(36, 72), 0, 0, 12, 3},
  {4, UPB_SIZE(40, 80), 0, 0, 11, 3},
  {5, UPB_SIZE(44, 88), 0, 1, 11, 3},
  {6, UPB_SIZE(48, 96), 0, 4, 11, 3},
  {7, UPB_SIZE(52, 104), 0, 2, 11, 3},
  {8, UPB_SIZE(28, 56), 4, 3, 11, 1},
  {9, UPB_SIZE(32, 64), 5, 5, 11, 1},
  {10, UPB_SIZE(56, 112), 0, 0, 5, 3},
  {11, UPB_SIZE(60, 120), 0, 0, 5, 3},
  {12, UPB_SIZE(20, 40), 3, 0, 12, 1},
};

const upb_msglayout google_protobuf_FileDescriptorProto_msginit = {
  &google_protobuf_FileDescriptorProto_submsgs[0],
  &google_protobuf_FileDescriptorProto__fields[0],
  UPB_SIZE(64, 128), 12, false, 120,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899906973706, 2251799813816330)},
    {&upb_pss_1bt, UPB_SIZE(3377699720790034, 6755399441317906)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_prm_1bt_max128b, UPB_SIZE(11258999068426274, 22517998136852514)},
    {&upb_prm_1bt_max128b, UPB_SIZE(12384898975334442, 24769797950603306)},
    {&upb_prm_1bt_max64b, UPB_SIZE(13510798882373682, 27021597764485170)},
    {&upb_prm_1bt_max192b, UPB_SIZE(14636698789085242, 29273397578039354)},
    {&upb_psm_1bt_max256b, UPB_SIZE(7881385247440962, 15762684595339330)},
    {&upb_psm_1bt_max64b, UPB_SIZE(9007289449381962, 18014488704122954)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(5629499534737506, 11258999068950626)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_DescriptorProto_submsgs[7] = {
  &google_protobuf_DescriptorProto_msginit,
  &google_protobuf_DescriptorProto_ExtensionRange_msginit,
  &google_protobuf_DescriptorProto_ReservedRange_msginit,
  &google_protobuf_EnumDescriptorProto_msginit,
  &google_protobuf_FieldDescriptorProto_msginit,
  &google_protobuf_MessageOptions_msginit,
  &google_protobuf_OneofDescriptorProto_msginit,
};

static const upb_msglayout_field google_protobuf_DescriptorProto__fields[10] = {
  {1, UPB_SIZE(4, 8), 1, 0, 12, 1},
  {2, UPB_SIZE(16, 32), 0, 4, 11, 3},
  {3, UPB_SIZE(20, 40), 0, 0, 11, 3},
  {4, UPB_SIZE(24, 48), 0, 3, 11, 3},
  {5, UPB_SIZE(28, 56), 0, 1, 11, 3},
  {6, UPB_SIZE(32, 64), 0, 4, 11, 3},
  {7, UPB_SIZE(12, 24), 2, 5, 11, 1},
  {8, UPB_SIZE(36, 72), 0, 6, 11, 3},
  {9, UPB_SIZE(40, 80), 0, 2, 11, 3},
  {10, UPB_SIZE(44, 88), 0, 0, 12, 3},
};

const upb_msglayout google_protobuf_DescriptorProto_msginit = {
  &google_protobuf_DescriptorProto_submsgs[0],
  &google_protobuf_DescriptorProto__fields[0],
  UPB_SIZE(48, 96), 10, false, 120,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899906973706, 2251799813816330)},
    {&upb_prm_1bt_max192b, UPB_SIZE(4503599627632658, 9007199255003154)},
    {&upb_prm_1bt_max128b, UPB_SIZE(5629499534213146, 11258999068426266)},
    {&upb_prm_1bt_max128b, UPB_SIZE(6755399441252386, 13510798882308130)},
    {&upb_prm_1bt_max64b, UPB_SIZE(7881299347963946, 15762598695862314)},
    {&upb_prm_1bt_max192b, UPB_SIZE(9007199255003186, 18014398509744178)},
    {&upb_psm_1bt_max64b, UPB_SIZE(3377777030266938, 6755476750794810)},
    {&upb_prm_1bt_max64b, UPB_SIZE(10133099161976898, 20266198323560514)},
    {&upb_prm_1bt_max64b, UPB_SIZE(11258999068557386, 22517998136983626)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_DescriptorProto_ExtensionRange_submsgs[1] = {
  &google_protobuf_ExtensionRangeOptions_msginit,
};

static const upb_msglayout_field google_protobuf_DescriptorProto_ExtensionRange__fields[3] = {
  {1, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 5, 1},
  {3, UPB_SIZE(12, 16), 3, 0, 11, 1},
};

const upb_msglayout google_protobuf_DescriptorProto_ExtensionRange_msginit = {
  &google_protobuf_DescriptorProto_ExtensionRange_submsgs[0],
  &google_protobuf_DescriptorProto_ExtensionRange__fields[0],
  UPB_SIZE(16, 24), 3, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psv4_1bt, UPB_SIZE(1125899906973704, 1125899906973704)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813947408, 2251799813947408)},
    {&upb_psm_1bt_max64b, UPB_SIZE(3377781324906522, 4503681231749146)},
  },
};

static const upb_msglayout_field google_protobuf_DescriptorProto_ReservedRange__fields[2] = {
  {1, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 5, 1},
};

const upb_msglayout google_protobuf_DescriptorProto_ReservedRange_msginit = {
  NULL,
  &google_protobuf_DescriptorProto_ReservedRange__fields[0],
  UPB_SIZE(16, 16), 2, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psv4_1bt, UPB_SIZE(1125899906973704, 1125899906973704)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813947408, 2251799813947408)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_ExtensionRangeOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_ExtensionRangeOptions__fields[1] = {
  {999, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_ExtensionRangeOptions_msginit = {
  &google_protobuf_ExtensionRangeOptions_submsgs[0],
  &google_protobuf_ExtensionRangeOptions__fields[0],
  UPB_SIZE(8, 8), 1, false, 0,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_FieldDescriptorProto_submsgs[1] = {
  &google_protobuf_FieldOptions_msginit,
};

static const upb_msglayout_field google_protobuf_FieldDescriptorProto__fields[11] = {
  {1, UPB_SIZE(36, 40), 6, 0, 12, 1},
  {2, UPB_SIZE(44, 56), 7, 0, 12, 1},
  {3, UPB_SIZE(24, 24), 3, 0, 5, 1},
  {4, UPB_SIZE(8, 8), 1, 0, 14, 1},
  {5, UPB_SIZE(16, 16), 2, 0, 14, 1},
  {6, UPB_SIZE(52, 72), 8, 0, 12, 1},
  {7, UPB_SIZE(60, 88), 9, 0, 12, 1},
  {8, UPB_SIZE(76, 120), 11, 0, 11, 1},
  {9, UPB_SIZE(28, 28), 4, 0, 5, 1},
  {10, UPB_SIZE(68, 104), 10, 0, 12, 1},
  {17, UPB_SIZE(32, 32), 5, 0, 8, 1},
};

const upb_msglayout google_protobuf_FieldDescriptorProto_msginit = {
  &google_protobuf_FieldDescriptorProto_submsgs[0],
  &google_protobuf_FieldDescriptorProto__fields[0],
  UPB_SIZE(80, 128), 11, false, 248,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(10133099165777930, 11258999072620554)},
    {&upb_pss_1bt, UPB_SIZE(12384898983657490, 15762598704185362)},
    {&upb_psv4_1bt, UPB_SIZE(6755399441580056, 6755399441580056)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813816352, 2251799813816352)},
    {&upb_psv4_1bt, UPB_SIZE(4503599627632680, 4503599627632680)},
    {&upb_pss_1bt, UPB_SIZE(14636698805731378, 20266198339944498)},
    {&upb_pss_1bt, UPB_SIZE(16888498636193850, 24769797984092218)},
    {&upb_psm_1bt_max64b, UPB_SIZE(21392214194126914, 33777113169395778)},
    {&upb_psv4_1bt, UPB_SIZE(7881299348947016, 7881299348947016)},
    {&upb_pss_1bt, UPB_SIZE(19140298483433554, 29273397645017170)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_2bt, UPB_SIZE(9007199256838536, 9007199256838536)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_OneofDescriptorProto_submsgs[1] = {
  &google_protobuf_OneofOptions_msginit,
};

static const upb_msglayout_field google_protobuf_OneofDescriptorProto__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 12, 1},
  {2, UPB_SIZE(12, 24), 2, 0, 11, 1},
};

const upb_msglayout google_protobuf_OneofDescriptorProto_msginit = {
  &google_protobuf_OneofDescriptorProto_submsgs[0],
  &google_protobuf_OneofDescriptorProto__fields[0],
  UPB_SIZE(16, 32), 2, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899906973706, 2251799813816330)},
    {&upb_psm_1bt_max64b, UPB_SIZE(3377777029939218, 6755476750467090)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_EnumDescriptorProto_submsgs[3] = {
  &google_protobuf_EnumDescriptorProto_EnumReservedRange_msginit,
  &google_protobuf_EnumOptions_msginit,
  &google_protobuf_EnumValueDescriptorProto_msginit,
};

static const upb_msglayout_field google_protobuf_EnumDescriptorProto__fields[5] = {
  {1, UPB_SIZE(4, 8), 1, 0, 12, 1},
  {2, UPB_SIZE(16, 32), 0, 2, 11, 3},
  {3, UPB_SIZE(12, 24), 2, 1, 11, 1},
  {4, UPB_SIZE(20, 40), 0, 0, 11, 3},
  {5, UPB_SIZE(24, 48), 0, 0, 12, 3},
};

const upb_msglayout google_protobuf_EnumDescriptorProto_msginit = {
  &google_protobuf_EnumDescriptorProto_submsgs[0],
  &google_protobuf_EnumDescriptorProto__fields[0],
  UPB_SIZE(32, 64), 5, false, 56,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899906973706, 2251799813816330)},
    {&upb_prm_1bt_max64b, UPB_SIZE(4503599627501586, 9007199254872082)},
    {&upb_psm_1bt_max64b, UPB_SIZE(3377777030004762, 6755476750532634)},
    {&upb_prm_1bt_max64b, UPB_SIZE(5629499534213154, 11258999068426274)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout_field google_protobuf_EnumDescriptorProto_EnumReservedRange__fields[2] = {
  {1, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {2, UPB_SIZE(8, 8), 2, 0, 5, 1},
};

const upb_msglayout google_protobuf_EnumDescriptorProto_EnumReservedRange_msginit = {
  NULL,
  &google_protobuf_EnumDescriptorProto_EnumReservedRange__fields[0],
  UPB_SIZE(16, 16), 2, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psv4_1bt, UPB_SIZE(1125899906973704, 1125899906973704)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813947408, 2251799813947408)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_EnumValueDescriptorProto_submsgs[1] = {
  &google_protobuf_EnumValueOptions_msginit,
};

static const upb_msglayout_field google_protobuf_EnumValueDescriptorProto__fields[3] = {
  {1, UPB_SIZE(8, 8), 2, 0, 12, 1},
  {2, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {3, UPB_SIZE(16, 24), 3, 0, 11, 1},
};

const upb_msglayout google_protobuf_EnumValueDescriptorProto_msginit = {
  &google_protobuf_EnumValueDescriptorProto_submsgs[0],
  &google_protobuf_EnumValueDescriptorProto__fields[0],
  UPB_SIZE(24, 32), 3, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(2251799813947402, 2251799813947402)},
    {&upb_psv4_1bt, UPB_SIZE(1125899906973712, 1125899906973712)},
    {&upb_psm_1bt_max64b, UPB_SIZE(4503681231749146, 6755481045434394)},
  },
};

static const upb_msglayout *const google_protobuf_ServiceDescriptorProto_submsgs[2] = {
  &google_protobuf_MethodDescriptorProto_msginit,
  &google_protobuf_ServiceOptions_msginit,
};

static const upb_msglayout_field google_protobuf_ServiceDescriptorProto__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 12, 1},
  {2, UPB_SIZE(16, 32), 0, 0, 11, 3},
  {3, UPB_SIZE(12, 24), 2, 1, 11, 1},
};

const upb_msglayout google_protobuf_ServiceDescriptorProto_msginit = {
  &google_protobuf_ServiceDescriptorProto_submsgs[0],
  &google_protobuf_ServiceDescriptorProto__fields[0],
  UPB_SIZE(24, 48), 3, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899906973706, 2251799813816330)},
    {&upb_prm_1bt_max128b, UPB_SIZE(4503599627370514, 9007199254741010)},
    {&upb_psm_1bt_max64b, UPB_SIZE(3377777030004762, 6755476750532634)},
  },
};

static const upb_msglayout *const google_protobuf_MethodDescriptorProto_submsgs[1] = {
  &google_protobuf_MethodOptions_msginit,
};

static const upb_msglayout_field google_protobuf_MethodDescriptorProto__fields[6] = {
  {1, UPB_SIZE(4, 8), 3, 0, 12, 1},
  {2, UPB_SIZE(12, 24), 4, 0, 12, 1},
  {3, UPB_SIZE(20, 40), 5, 0, 12, 1},
  {4, UPB_SIZE(28, 56), 6, 0, 11, 1},
  {5, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {6, UPB_SIZE(2, 2), 2, 0, 8, 1},
};

const upb_msglayout google_protobuf_MethodDescriptorProto_msginit = {
  &google_protobuf_MethodDescriptorProto_submsgs[0],
  &google_protobuf_MethodDescriptorProto__fields[0],
  UPB_SIZE(32, 64), 6, false, 56,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899907366922, 2251799814209546)},
    {&upb_pss_1bt, UPB_SIZE(3377699721576466, 6755399442104338)},
    {&upb_pss_1bt, UPB_SIZE(5629499536310298, 11258999070523418)},
    {&upb_psm_1bt_max64b, UPB_SIZE(7881393837178914, 15762693185077282)},
    {&upb_psb1_1bt, UPB_SIZE(281474976841768, 281474976841768)},
    {&upb_psb1_1bt, UPB_SIZE(562949953683504, 562949953683504)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_FileOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_FileOptions__fields[21] = {
  {1, UPB_SIZE(28, 32), 11, 0, 12, 1},
  {8, UPB_SIZE(36, 48), 12, 0, 12, 1},
  {9, UPB_SIZE(8, 8), 1, 0, 14, 1},
  {10, UPB_SIZE(16, 16), 2, 0, 8, 1},
  {11, UPB_SIZE(44, 64), 13, 0, 12, 1},
  {16, UPB_SIZE(17, 17), 3, 0, 8, 1},
  {17, UPB_SIZE(18, 18), 4, 0, 8, 1},
  {18, UPB_SIZE(19, 19), 5, 0, 8, 1},
  {20, UPB_SIZE(20, 20), 6, 0, 8, 1},
  {23, UPB_SIZE(21, 21), 7, 0, 8, 1},
  {27, UPB_SIZE(22, 22), 8, 0, 8, 1},
  {31, UPB_SIZE(23, 23), 9, 0, 8, 1},
  {36, UPB_SIZE(52, 80), 14, 0, 12, 1},
  {37, UPB_SIZE(60, 96), 15, 0, 12, 1},
  {39, UPB_SIZE(68, 112), 16, 0, 12, 1},
  {40, UPB_SIZE(76, 128), 17, 0, 12, 1},
  {41, UPB_SIZE(84, 144), 18, 0, 12, 1},
  {42, UPB_SIZE(24, 24), 10, 0, 8, 1},
  {44, UPB_SIZE(92, 160), 19, 0, 12, 1},
  {45, UPB_SIZE(100, 176), 20, 0, 12, 1},
  {999, UPB_SIZE(108, 192), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_FileOptions_msginit = {
  &google_protobuf_FileOptions_submsgs[0],
  &google_protobuf_FileOptions__fields[0],
  UPB_SIZE(112, 208), 21, false, 248,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(7881299482116106, 9007199388958730)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(10133099430019138, 13510799150547010)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813816392, 2251799813816392)},
    {&upb_psb1_1bt, UPB_SIZE(4503599627632720, 4503599627632720)},
    {&upb_pss_1bt, UPB_SIZE(12384899512139866, 18014399046352986)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_2bt, UPB_SIZE(4785074604605824, 4785074604605824)},
    {&upb_psb1_2bt, UPB_SIZE(5066549581840776, 5066549581840776)},
    {&upb_psb1_2bt, UPB_SIZE(5348024559600016, 5348024559600016)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_2bt, UPB_SIZE(5629499538407840, 5629499538407840)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_2bt, UPB_SIZE(5910974519312824, 5910974519312824)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_2bt, UPB_SIZE(6192449504412120, 6192449504412120)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_2bt, UPB_SIZE(6473924497900024, 6473924497900024)},
  },
};

static const upb_msglayout *const google_protobuf_MessageOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_MessageOptions__fields[5] = {
  {1, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {2, UPB_SIZE(2, 2), 2, 0, 8, 1},
  {3, UPB_SIZE(3, 3), 3, 0, 8, 1},
  {7, UPB_SIZE(4, 4), 4, 0, 8, 1},
  {999, UPB_SIZE(8, 8), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_MessageOptions_msginit = {
  &google_protobuf_MessageOptions_submsgs[0],
  &google_protobuf_MessageOptions__fields[0],
  UPB_SIZE(16, 16), 5, false, 56,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_1bt, UPB_SIZE(281474976841736, 281474976841736)},
    {&upb_psb1_1bt, UPB_SIZE(562949953683472, 562949953683472)},
    {&upb_psb1_1bt, UPB_SIZE(844424930656280, 844424930656280)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_1bt, UPB_SIZE(1125899907891256, 1125899907891256)},
  },
};

static const upb_msglayout *const google_protobuf_FieldOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_FieldOptions__fields[7] = {
  {1, UPB_SIZE(8, 8), 1, 0, 14, 1},
  {2, UPB_SIZE(24, 24), 3, 0, 8, 1},
  {3, UPB_SIZE(25, 25), 4, 0, 8, 1},
  {5, UPB_SIZE(26, 26), 5, 0, 8, 1},
  {6, UPB_SIZE(16, 16), 2, 0, 14, 1},
  {10, UPB_SIZE(27, 27), 6, 0, 8, 1},
  {999, UPB_SIZE(28, 32), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_FieldOptions_msginit = {
  &google_protobuf_FieldOptions_submsgs[0],
  &google_protobuf_FieldOptions__fields[0],
  UPB_SIZE(32, 40), 7, false, 120,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813816328, 2251799813816328)},
    {&upb_psb1_1bt, UPB_SIZE(6755399441580048, 6755399441580048)},
    {&upb_psb1_1bt, UPB_SIZE(7036874418815000, 7036874418815000)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_1bt, UPB_SIZE(7318349396574248, 7318349396574248)},
    {&upb_psv4_1bt, UPB_SIZE(4503599627632688, 4503599627632688)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_1bt, UPB_SIZE(7599824375382096, 7599824375382096)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_OneofOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_OneofOptions__fields[1] = {
  {999, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_OneofOptions_msginit = {
  &google_protobuf_OneofOptions_submsgs[0],
  &google_protobuf_OneofOptions__fields[0],
  UPB_SIZE(8, 8), 1, false, 0,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_EnumOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_EnumOptions__fields[3] = {
  {2, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {3, UPB_SIZE(2, 2), 2, 0, 8, 1},
  {999, UPB_SIZE(4, 8), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_EnumOptions_msginit = {
  &google_protobuf_EnumOptions_submsgs[0],
  &google_protobuf_EnumOptions__fields[0],
  UPB_SIZE(8, 16), 3, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_1bt, UPB_SIZE(281474976841744, 281474976841744)},
    {&upb_psb1_1bt, UPB_SIZE(562949953683480, 562949953683480)},
  },
};

static const upb_msglayout *const google_protobuf_EnumValueOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_EnumValueOptions__fields[2] = {
  {1, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {999, UPB_SIZE(4, 8), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_EnumValueOptions_msginit = {
  &google_protobuf_EnumValueOptions_submsgs[0],
  &google_protobuf_EnumValueOptions__fields[0],
  UPB_SIZE(8, 16), 2, false, 8,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_psb1_1bt, UPB_SIZE(281474976841736, 281474976841736)},
  },
};

static const upb_msglayout *const google_protobuf_ServiceOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_ServiceOptions__fields[2] = {
  {33, UPB_SIZE(1, 1), 1, 0, 8, 1},
  {999, UPB_SIZE(4, 8), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_ServiceOptions_msginit = {
  &google_protobuf_ServiceOptions_submsgs[0],
  &google_protobuf_ServiceOptions__fields[0],
  UPB_SIZE(8, 16), 2, false, 0,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_MethodOptions_submsgs[1] = {
  &google_protobuf_UninterpretedOption_msginit,
};

static const upb_msglayout_field google_protobuf_MethodOptions__fields[3] = {
  {33, UPB_SIZE(16, 16), 2, 0, 8, 1},
  {34, UPB_SIZE(8, 8), 1, 0, 14, 1},
  {999, UPB_SIZE(20, 24), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_MethodOptions_msginit = {
  &google_protobuf_MethodOptions_submsgs[0],
  &google_protobuf_MethodOptions__fields[0],
  UPB_SIZE(24, 32), 3, false, 0,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_UninterpretedOption_submsgs[1] = {
  &google_protobuf_UninterpretedOption_NamePart_msginit,
};

static const upb_msglayout_field google_protobuf_UninterpretedOption__fields[7] = {
  {2, UPB_SIZE(56, 80), 0, 0, 11, 3},
  {3, UPB_SIZE(32, 32), 4, 0, 12, 1},
  {4, UPB_SIZE(8, 8), 1, 0, 4, 1},
  {5, UPB_SIZE(16, 16), 2, 0, 3, 1},
  {6, UPB_SIZE(24, 24), 3, 0, 1, 1},
  {7, UPB_SIZE(40, 48), 5, 0, 12, 1},
  {8, UPB_SIZE(48, 64), 6, 0, 12, 1},
};

const upb_msglayout google_protobuf_UninterpretedOption_msginit = {
  &google_protobuf_UninterpretedOption_submsgs[0],
  &google_protobuf_UninterpretedOption__fields[0],
  UPB_SIZE(64, 96), 7, false, 120,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_prm_1bt_max64b, UPB_SIZE(15762598695796754, 22517998136852498)},
    {&upb_pss_1bt, UPB_SIZE(9007199255789594, 9007199255789594)},
    {&upb_psv8_1bt, UPB_SIZE(2251799813816352, 2251799813816352)},
    {&upb_psv8_1bt, UPB_SIZE(4503599627632680, 4503599627632680)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(11258999070523450, 13510798884208698)},
    {&upb_pss_1bt, UPB_SIZE(13510798886305858, 18014398513676354)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout_field google_protobuf_UninterpretedOption_NamePart__fields[2] = {
  {1, UPB_SIZE(4, 8), 2, 0, 12, 2},
  {2, UPB_SIZE(1, 1), 1, 0, 8, 2},
};

const upb_msglayout google_protobuf_UninterpretedOption_NamePart_msginit = {
  NULL,
  &google_protobuf_UninterpretedOption_NamePart__fields[0],
  UPB_SIZE(16, 32), 2, false, 24,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899907104778, 2251799813947402)},
    {&upb_psb1_1bt, UPB_SIZE(281474976841744, 281474976841744)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_SourceCodeInfo_submsgs[1] = {
  &google_protobuf_SourceCodeInfo_Location_msginit,
};

static const upb_msglayout_field google_protobuf_SourceCodeInfo__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_SourceCodeInfo_msginit = {
  &google_protobuf_SourceCodeInfo_submsgs[0],
  &google_protobuf_SourceCodeInfo__fields[0],
  UPB_SIZE(8, 8), 1, false, 8,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_prm_1bt_max128b, UPB_SIZE(10, 10)},
  },
};

static const upb_msglayout_field google_protobuf_SourceCodeInfo_Location__fields[5] = {
  {1, UPB_SIZE(20, 40), 0, 0, 5, _UPB_LABEL_PACKED},
  {2, UPB_SIZE(24, 48), 0, 0, 5, _UPB_LABEL_PACKED},
  {3, UPB_SIZE(4, 8), 1, 0, 12, 1},
  {4, UPB_SIZE(12, 24), 2, 0, 12, 1},
  {6, UPB_SIZE(28, 56), 0, 0, 12, 3},
};

const upb_msglayout google_protobuf_SourceCodeInfo_Location_msginit = {
  NULL,
  &google_protobuf_SourceCodeInfo_Location__fields[0],
  UPB_SIZE(32, 64), 5, false, 56,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(1125899906973722, 2251799813816346)},
    {&upb_pss_1bt, UPB_SIZE(3377699720790050, 6755399441317922)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

static const upb_msglayout *const google_protobuf_GeneratedCodeInfo_submsgs[1] = {
  &google_protobuf_GeneratedCodeInfo_Annotation_msginit,
};

static const upb_msglayout_field google_protobuf_GeneratedCodeInfo__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout google_protobuf_GeneratedCodeInfo_msginit = {
  &google_protobuf_GeneratedCodeInfo_submsgs[0],
  &google_protobuf_GeneratedCodeInfo__fields[0],
  UPB_SIZE(8, 8), 1, false, 8,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_prm_1bt_max64b, UPB_SIZE(10, 10)},
  },
};

static const upb_msglayout_field google_protobuf_GeneratedCodeInfo_Annotation__fields[4] = {
  {1, UPB_SIZE(20, 32), 0, 0, 5, _UPB_LABEL_PACKED},
  {2, UPB_SIZE(12, 16), 3, 0, 12, 1},
  {3, UPB_SIZE(4, 4), 1, 0, 5, 1},
  {4, UPB_SIZE(8, 8), 2, 0, 5, 1},
};

const upb_msglayout google_protobuf_GeneratedCodeInfo_Annotation_msginit = {
  NULL,
  &google_protobuf_GeneratedCodeInfo_Annotation__fields[0],
  UPB_SIZE(24, 48), 4, false, 56,
  {
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&upb_pss_1bt, UPB_SIZE(3377699721052178, 4503599627894802)},
    {&upb_psv4_1bt, UPB_SIZE(1125899906973720, 1125899906973720)},
    {&upb_psv4_1bt, UPB_SIZE(2251799813947424, 2251799813947424)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
    {&fastdecode_generic, UPB_SIZE(0, 0)},
  },
};

#include "upb/port_undef.inc"

