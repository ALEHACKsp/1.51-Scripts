#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	float fLocal_118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_120[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_121[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_122[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_123[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_124[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_151[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_152[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	vector3 vLocal_173[175] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_174[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_175[35] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_176 = { 0f, 0f, 0f };
	vector3 vLocal_177 = { 0f, 0f, 0f };
	vector3 vLocal_178 = { 0f, 0f, 0f };
	vector3 vLocal_179 = { 0f, 0f, 0f };
	vector3 vLocal_180 = { 0f, 0f, 0f };
	vector3 vLocal_181 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	vector3 vLocal_183 = { 0f, 0f, 0f };
	vector3 vLocal_184 = { 0f, 0f, 0f };
	char cLocal_185[64] = "";
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_203[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_204[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_205[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 12;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265[4] = { 0, 0, 0, 0 };
	int iLocal_266 = 0;
	var uLocal_267[3] = { 0, 0, 0 };
	int iLocal_268[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275[2] = { 0, 0 };
	int iLocal_276[2] = { 0, 0 };
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280[2] = { 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286[2] = { 0, 0 };
	int iLocal_287 = 0;
	int iLocal_288[2] = { 0, 0 };
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[2] = { 0, 0 };
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	vector3 vLocal_306 = { 0f, 0f, 0f };
	vector3 vLocal_307 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_309 = { 0f, 0f, 0f };
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	vector3 vLocal_316 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	float fLocal_319 = 0f;
	float fLocal_320 = 0f;
	float fLocal_321 = 0f;
	float fLocal_322 = 0f;
	float fLocal_323 = 0f;
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[2] = { 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429[2] = { 0, 0 };
	int iLocal_430[2] = { 0, 0 };
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_436[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[3] = { 0, 0, 0 };
	int iLocal_448[2] = { 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[3] = { 0, 0, 0 };
	int iLocal_466[3] = { 0, 0, 0 };
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487[4] = { 0, 0, 0, 0 };
	int iLocal_488 = 0;
	char* sLocal_489 = NULL;
	var uLocal_490 = 16;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 21;
	var uLocal_663 = 6;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	int iLocal_667[3] = { 0, 0, 0 };
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 0x00000001;
	iLocal_3 = 0x00000086;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000001;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000086;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x0000000C;
	iLocal_11 = 0x0000000C;
	fLocal_14 = 0.001f;
	iLocal_17 = 0xFFFFFFFF;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_55 = 0x00000003;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 0x00000001;
	iLocal_67 = 0x00000041;
	iLocal_68 = 0x00000031;
	iLocal_69 = 0x00000040;
	iLocal_73 = unk_0xAD1355DD1E5D2D9B();
	uLocal_74 = unk_0x817B3657F78A517A();
	bLocal_78 = 0x00000001;
	bLocal_85 = 0x00000001;
	bLocal_107 = 0x00000001;
	fLocal_128 = 120f;
	fLocal_129 = 0f;
	fLocal_131 = 1f;
	fLocal_132 = 0f;
	fLocal_133 = 1f;
	fLocal_134 = 30f;
	fLocal_136 = 1f;
	fLocal_137 = 5f;
	fLocal_138 = 1f;
	fLocal_139 = 1f;
	fLocal_140 = 100f;
	fLocal_141 = 100f;
	fLocal_142 = 0f;
	fLocal_143 = 7000f;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_146 = 0.3f;
	fLocal_147 = 0.5f;
	fLocal_148 = 50f;
	iLocal_159 = 0xFFFFFFFF;
	iLocal_167 = 0xFFFFFFFF;
	iLocal_168 = 0xFFFFFFFF;
	vLocal_306 = { -1024.1f, -485.3321f, 35.9816f };
	vLocal_307 = { -428.0263f, -2153.577f, 9.2997f };
	vLocal_308 = { -498.7f, -2136.5f, 8.4f };
	vLocal_316 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_319 = 209.7233f;
	fLocal_320 = 90.947f;
	fLocal_323 = 46.7161f;
	if (func_432(0x00000000))
	{
		func_425(0x00000018, 0x00000000);
	}
	unk_0x9CBC55A05A07FC47(0x00000000);
	unk_0x8225571BCEE038F8("EXTRASUNNY", 20f);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_423(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xC92DB9682A650680("TRV4_FAIL");
		func_421();
		func_419();
	}
	func_418(0x00000001);
	unk_0x7798376279BB5369(0x00000001);
	iLocal_223 = 0x00000000;
	iLocal_222 = 0x00000000;
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0x00000000);
		if (iLocal_249 > unk_0x1C0640BA9A7327B3())
		{
			unk_0x9501364A300048C6();
		}
		func_414();
		func_413();
		func_411();
		func_407();
		func_406();
		switch (iLocal_222)
		{
			case 0x00000000:
				func_402();
				break;
			
			case 0x00000001:
				func_357();
				break;
			
			case 0x00000002:
				func_351();
				break;
			
			case 0x00000003:
				func_348();
				break;
			
			case 0x00000004:
				func_247();
				break;
			
			case 0x00000005:
				func_235();
				break;
			
			case 0x00000006:
				func_229();
				break;
			
			case 0x00000007:
				func_219();
				break;
			
			case 0x00000008:
				func_5();
				break;
			
			case 0x00000009:
				break;
			
			case 0x0000000A:
				break;
			
			case 0x0000000B:
				break;
		}
		SYSTEM::WAIT(0x00000000);
		func_1();
	}
}

void func_1()
{
	if (iLocal_411 == 0x00000000)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_4(unk_0x16F2683693E537C9(), 0x000001DC);
			iLocal_411 = 0x00000001;
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (iLocal_412 == 0x00000000)
			{
				iLocal_289 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (unk_0xC844350D5D58C99A(iLocal_289))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_289, 0x00000000))
					{
						func_3(iLocal_289, 0xFFFFFFFF);
						func_4(iLocal_289, 0x000001DF);
						iLocal_412 = 0x00000001;
					}
				}
			}
		}
		else
		{
			func_4(0x00000000, 0x000001DF);
			func_3(0x00000000, 0xFFFFFFFF);
			if (iLocal_412 == 0x00000001)
			{
				iLocal_412 = 0x00000000;
			}
		}
	}
	if (iLocal_413[0x00000000] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(uLocal_267[0x00000000]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_267[0x00000000]))
			{
				iLocal_233++;
				iLocal_413[0x00000000] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000001] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(uLocal_267[0x00000001]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_267[0x00000001]))
			{
				iLocal_233++;
				iLocal_413[0x00000001] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000002] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(uLocal_267[0x00000002]))
		{
			if (unk_0xEB6A8945D1AC98A1(uLocal_267[0x00000002]))
			{
				iLocal_233++;
				iLocal_413[0x00000002] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000003] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000000]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000000]))
			{
				iLocal_233++;
				iLocal_413[0x00000003] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000004] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000001]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000001]))
			{
				iLocal_233++;
				iLocal_413[0x00000004] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000005] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000002]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000002]))
			{
				iLocal_233++;
				iLocal_413[0x00000005] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000006] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000003]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000003]))
			{
				iLocal_233++;
				iLocal_413[0x00000006] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000007] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000004]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000004]))
			{
				iLocal_233++;
				iLocal_413[0x00000007] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000008] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000005]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000005]))
			{
				iLocal_233++;
				iLocal_413[0x00000008] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000009] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000006]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000006]))
			{
				iLocal_233++;
				iLocal_413[0x00000009] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x0000000A] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000007]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000007]))
			{
				iLocal_233++;
				iLocal_413[0x0000000A] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x0000000B] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000008]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000008]))
			{
				iLocal_233++;
				iLocal_413[0x0000000B] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x0000000C] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x00000009]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000009]))
			{
				iLocal_233++;
				iLocal_413[0x0000000C] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x0000000D] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x0000000A]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_268[0x0000000A]))
			{
				iLocal_233++;
				iLocal_413[0x0000000D] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x0000000E] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_272))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_272))
			{
				iLocal_233++;
				iLocal_413[0x0000000E] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x0000000F] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_273))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_273))
			{
				iLocal_233++;
				iLocal_413[0x0000000F] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000010] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_274))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_274))
			{
				iLocal_233++;
				iLocal_413[0x00000010] = 0x00000001;
			}
		}
	}
	if (iLocal_413[0x00000011] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_275[0x00000000]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_275[0x00000000]))
			{
				iLocal_233++;
				iLocal_413[0x00000011] = 0x00000001;
			}
		}
	}
	if (iLocal_222 == 0x00000008)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
		{
			if (iLocal_414 == 0x00000000)
			{
				func_2(0x000001E2, 0x00000000);
				iLocal_414 = 0x00000001;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_F052 = iParam0;
	if (!Global_F050)
	{
		Global_F050 = 0x00000001;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_11F88[iVar0 /*9*/] == iParam0)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_F055 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (iParam1 == 0xFFFFFFFF || Global_11F88[iVar0 /*9*/] == iParam1)
		{
			if (Global_11F88[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_11F88[iVar0 /*9*/].f_6 = iParam0;
				Global_11F88[iVar0 /*9*/].f_7 = 0x00000001;
				Global_11F88[iVar0 /*9*/].f_8 = 0x00000000;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0x757EF87A33649210())
	{
		if (unk_0xC844350D5D58C99A(iLocal_285))
		{
			unk_0x611DFA9294B339CA(iLocal_285, 0x00000000, 0x00000000, 0x00000001);
		}
	}
	if (iLocal_223 > 0x00000000)
	{
		func_217();
	}
	if (iLocal_223 == 0x00000000)
	{
		if (iLocal_343 == 0x00000001)
		{
			func_120();
			iLocal_343 = 0x00000000;
		}
		func_25(0x00000003, "STAGE_EVADE_POLICE", 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		iLocal_367 = 0x00000000;
		iLocal_368 = 0x00000000;
		iLocal_369 = 0x00000000;
		iLocal_344 = 0x00000000;
		iLocal_345 = 0x00000000;
		iLocal_346 = 0x00000000;
		iLocal_398 = 0x00000000;
		iLocal_399 = 0x00000000;
		iLocal_400 = 0x00000000;
		iLocal_418 = 0x00000000;
		iLocal_419 = 0x00000000;
		iLocal_423 = 0x00000000;
		iLocal_426 = 0x00000000;
		iLocal_227 = 0x00000000;
		unk_0x3F423BF5B8125A50("Misssolomon_3");
		unk_0x523BCC9DC80CD82F(joaat("oracle2"));
		unk_0x523BCC9DC80CD82F(joaat("baller2"));
		if (unk_0xE4EDC4B0E92C078B(iLocal_297))
		{
			unk_0x142CC44DB769B57E(&iLocal_297);
		}
		if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			unk_0xA19A5ADE229B4734("Trev4_5", 0x00000000, 1f, 1f);
			unk_0x2F3540C2227116A3("Trev4_5");
		}
		if (unk_0xC844350D5D58C99A(iLocal_279))
		{
			unk_0x046C362CF15F1935(&iLocal_279);
		}
		SYSTEM::SETTIMERA(0x00000000);
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_21(0x00000000, 0xFFFFFFFF, 0x00000001);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		if (unk_0xC844350D5D58C99A(iLocal_266))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
			{
				unk_0x25C5402CC10F76CD(iLocal_266, 0x00000001);
				unk_0x11AD11297DC58CC7(iLocal_266, 0x00000000);
			}
		}
		unk_0xC92DB9682A650680("TRV4_LOSE_COPS");
		if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
		{
			unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS");
		}
		unk_0x790015DC92C918E2();
		func_20("TRV4_END1", 0x00001D4C, 0x00000001);
		if (unk_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0x8910D3D58E0132B8("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(0x00000002))
		{
			func_18(0x00000002, 0x00000000);
		}
		iLocal_263 = unk_0x544B74C043CE9948(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0x00000000, 0x00000007);
		if (unk_0xC844350D5D58C99A(iLocal_284))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
			{
				unk_0x9F3D85A3461AB1C3(iLocal_284, 0x00000000);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_285))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_285, 0x00000000))
			{
				unk_0x9F3D85A3461AB1C3(iLocal_285, 0x00000000);
			}
		}
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000003, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0x00000000);
		iLocal_223 = 0x00000001;
	}
	if (iLocal_223 == 0x00000001)
	{
		if (iLocal_418 == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_293[0x00000000]))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("oracle2")))
				{
					iLocal_293[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xE8832A9E16A57A1F(iLocal_293[0x00000000], 0x00000001, 0x00000001);
					unk_0xB9FD7450C0DAB575(iLocal_293[0x00000000], 0x40A00000);
					unk_0x71199B01895C6202(joaat("oracle2"));
					iLocal_418 = 0x00000001;
				}
			}
		}
		if (iLocal_419 == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_293[0x00000001]))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("baller2")))
				{
					iLocal_293[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xE8832A9E16A57A1F(iLocal_293[0x00000001], 0x00000001, 0x00000001);
					unk_0xB9FD7450C0DAB575(iLocal_293[0x00000001], 0x40A00000);
					unk_0x71199B01895C6202(joaat("baller2"));
					iLocal_419 = 0x00000001;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_293[0x00000000]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_293[0x00000000], 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_293[0x00000000], 0x00000000))
				{
					if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x16F2683693E537C9(), iLocal_293[0x00000000], 0x00000001) > 200f || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_293[0x00000000], 0x00000000))
			{
				unk_0x046C362CF15F1935(&(iLocal_293[0x00000000]));
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_293[0x00000001]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_293[0x00000001], 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_293[0x00000001], 0x00000000))
				{
					if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x16F2683693E537C9(), iLocal_293[0x00000001], 0x00000001) > 200f || unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_293[0x00000001], 0x00000000))
			{
				unk_0x046C362CF15F1935(&(iLocal_293[0x00000001]));
			}
		}
		if (iLocal_398 == 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000000]))
			{
				func_14(iLocal_268[0x00000000], "SURROUNDED", 0x00000018);
				iLocal_398 = 0x00000001;
			}
		}
		if (iLocal_367 == 0x00000000)
		{
			if (SYSTEM::TIMERA() > 0x00001F40)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000000], 0x00000000))
				{
					unk_0x4D3C3C0B0DE2663E(iLocal_286[0x00000000], 0x00000044, "BB_Chase", 0x00000001);
					unk_0x7387D280FCEB227F(iLocal_286[0x00000000], 0f, 0f, 0.15f);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000001], 0x00000000))
				{
					unk_0x4D3C3C0B0DE2663E(iLocal_286[0x00000001], 0x00000045, "BB_Chase", 0x00000001);
					unk_0x7387D280FCEB227F(iLocal_286[0x00000001], 0f, 0f, 0.15f);
				}
				iLocal_367 = 0x00000001;
			}
		}
		else
		{
			if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000000], 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_286[0x00000000]))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_286[0x00000000]) > 5000f)
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_286[0x00000000]))
						{
							unk_0xC55F2A0377488064(iLocal_286[0x00000000]);
						}
					}
				}
				else if (iLocal_368 == 0x00000000)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000006]))
					{
						unk_0x11AD11297DC58CC7(iLocal_268[0x00000006], 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000007]))
					{
						unk_0x11AD11297DC58CC7(iLocal_268[0x00000007], 0x00000000);
					}
					iLocal_368 = 0x00000001;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000001], 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_286[0x00000001]))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_286[0x00000001]) > 5000f)
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_286[0x00000001]))
						{
							unk_0xC55F2A0377488064(iLocal_286[0x00000001]);
						}
					}
				}
				else if (iLocal_369 == 0x00000000)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000008]))
					{
						unk_0x11AD11297DC58CC7(iLocal_268[0x00000008], 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000009]))
					{
						unk_0x11AD11297DC58CC7(iLocal_268[0x00000009], 0x00000000);
					}
					iLocal_369 = 0x00000001;
				}
			}
		}
		func_12();
		if (iLocal_423 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_285))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_285, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_285, 0x00000000))
					{
						unk_0xC92DB9682A650680("TRV4_JET_ENTERED");
						if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x8B4C4CA774181102(4f, 15f, 0x00000004);
						unk_0x046C362CF15F1935(&iLocal_285);
						iLocal_423 = 0x00000001;
					}
					else if (func_16(unk_0x16F2683693E537C9(), iLocal_285, 0x00000001) > 200f)
					{
						unk_0x046C362CF15F1935(&iLocal_285);
					}
				}
			}
		}
		if (iLocal_423 == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_285))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_285, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_285, 0x00000000))
					{
						if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0xC92DB9682A650680("TRV4_LOSE_COPS");
						iLocal_423 = 0x00000000;
					}
				}
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (iLocal_426 == 0x00000000)
			{
				iLocal_235 = unk_0x1C0640BA9A7327B3();
				iLocal_426 = 0x00000001;
			}
		}
		if (iLocal_426 == 0x00000001)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_235 + 3500)
				{
					if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS");
					}
					if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0xC92DB9682A650680("TRV4_COPS_LOST");
					func_11(0x00000000, 0xFFFFFFFF);
					func_6();
				}
			}
			else
			{
				iLocal_426 = 0x00000000;
			}
		}
	}
}

void func_6()
{
	func_10(0x000001E1, iLocal_233, 0x00000000);
	func_7(0x00000000, 0x00000000);
	func_419();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_F04A)
	{
		Global_F04A = iParam1;
	}
	if (bParam0)
	{
		if ((func_432(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_9(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_432(0x00000000))
	{
		iVar0 = func_8();
		iVar1 = Global_15D98[iVar0 /*5*/];
		uVar2 = Global_12C5B.f_6D[iVar1 /*4*/];
		if (iVar0 == 0xFFFFFFFF)
		{
			if (Global_1B416.f_2378)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000004))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000005))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000004);
		unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000001);
		Global_12C56 = uVar2;
		Global_12C57 = unk_0x1C0640BA9A7327B3();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000002))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000047:
			return 0x00000001;
			break;
		
		case 0x00000056:
			return 0x00000001;
			break;
		
		case 0x0000005B:
			return 0x00000001;
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_11F88[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_11F88[iVar0 /*9*/].f_1 = (Global_11F88[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_11F88[iVar0 /*9*/] != 0xFFFFFFFF)
	{
		if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000003)
		{
			if (Global_11F88[iVar0 /*9*/].f_1 > 0x00000001)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000001;
			}
			if (Global_11F88[iVar0 /*9*/].f_1 < 0x00000000)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_F050)
	{
	}
	Global_F050 = 0x00000000;
	if (bParam0)
	{
		Global_F051 = 0x00000001;
	}
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000004)
			{
				Global_11F88[iVar0 /*9*/].f_5 = 0x00000000;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_11F88[iVar0 /*9*/] > 0x00000000)
			{
				if (Global_11F88[iVar0 /*9*/] == iParam1)
				{
					Global_11F88[iVar0 /*9*/].f_5 = 0x00000000;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_231 = 0x00000000;
	while (iLocal_231 <= 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[iLocal_231]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_268[iLocal_231]))
			{
				if (!unk_0x405E212DDE472467(iLocal_268[iLocal_231], 0x00000000))
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (func_13(unk_0x16F2683693E537C9(), iLocal_268[iLocal_231]) > 200f)
						{
							unk_0xA3BF0AA5A2608191(iLocal_268[iLocal_231]);
							unk_0x6DAD7906B73F064D(&(iLocal_268[iLocal_231]));
						}
						else if (func_13(unk_0x16F2683693E537C9(), iLocal_268[iLocal_231]) > 20f)
						{
							if (unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0xB80BFB24) != 0x00000001 && unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0xB80BFB24) != 0x00000000)
							{
								unk_0x161356BF7864C47B(iLocal_268[iLocal_231], unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 0x00000001, 15f, 20f, 0x00000000, 0x00000000, 0xD6FF6D61);
							}
						}
						else if (unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0x2E85A751) != 0x00000001 && unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0x2E85A751) != 0x00000000)
						{
							unk_0x6C3AE6E278DB3D0E(iLocal_268[iLocal_231], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0xAFF39FB306F8E232(iLocal_268[iLocal_231], 0x00000032, 0x00000001);
						}
					}
					else if (func_13(unk_0x16F2683693E537C9(), iLocal_268[iLocal_231]) > 200f)
					{
						unk_0x6DAD7906B73F064D(&(iLocal_268[iLocal_231]));
					}
					else if (func_13(unk_0x16F2683693E537C9(), iLocal_268[iLocal_231]) > 5f)
					{
						if (unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0xB80BFB24) != 0x00000001 && unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0xB80BFB24) != 0x00000000)
						{
							unk_0x161356BF7864C47B(iLocal_268[iLocal_231], unk_0x16F2683693E537C9(), unk_0x16F2683693E537C9(), 2f, 0x00000001, 15f, 20f, 0x00000000, 0x00000000, 0xD6FF6D61);
						}
					}
					else if (unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0x2E85A751) != 0x00000001 && unk_0xD1960163A3042274(iLocal_268[iLocal_231], 0x2E85A751) != 0x00000000)
					{
						unk_0x6C3AE6E278DB3D0E(iLocal_268[iLocal_231], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0xAFF39FB306F8E232(iLocal_268[iLocal_231], 0x00000032, 0x00000001);
					}
				}
			}
		}
		iLocal_231++;
	}
	if (iLocal_367 == 0x00000001)
	{
		if (iLocal_344 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_286[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000000], 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_286[0x00000000]))
					{
					}
					else
					{
						if (unk_0xC844350D5D58C99A(iLocal_268[0x00000006]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000006]))
							{
								unk_0x11AD11297DC58CC7(iLocal_268[0x00000006], 0x00000000);
								unk_0xA3BF0AA5A2608191(iLocal_268[0x00000006]);
								unk_0xDD353D0E9C789D0E(&iLocal_304);
								unk_0x45F014B3D0466974(0x00000000, iLocal_286[0x00000000], 0x00000100);
								unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								unk_0x75ABDC5F81978924(iLocal_304);
								unk_0x78ADC381772E3D54(iLocal_268[0x00000006], iLocal_304);
								unk_0xF82EA857DA10E0CD(&iLocal_304);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_268[0x00000007]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000007]))
							{
								unk_0x11AD11297DC58CC7(iLocal_268[0x00000007], 0x00000000);
								unk_0xA3BF0AA5A2608191(iLocal_268[0x00000007]);
								unk_0xDD353D0E9C789D0E(&iLocal_304);
								unk_0x45F014B3D0466974(0x00000000, iLocal_286[0x00000000], 0x00000100);
								unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								unk_0x75ABDC5F81978924(iLocal_304);
								unk_0x78ADC381772E3D54(iLocal_268[0x00000007], iLocal_304);
								unk_0xF82EA857DA10E0CD(&iLocal_304);
							}
						}
						iLocal_344 = 0x00000001;
					}
				}
			}
		}
		else if (iLocal_399 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_286[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000000], 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_268[0x00000006]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000006]))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_268[0x00000006], iLocal_286[0x00000000], 0x00000000))
							{
								if (func_13(unk_0x16F2683693E537C9(), iLocal_268[0x00000006]) < 20f)
								{
									func_14(iLocal_268[0x00000006], "DRAW_GUN", 0x00000018);
									iLocal_399 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_345 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_286[0x00000001]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_286[0x00000001], 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_286[0x00000001]))
					{
					}
					else
					{
						if (unk_0xC844350D5D58C99A(iLocal_268[0x00000008]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000008]))
							{
								unk_0x11AD11297DC58CC7(iLocal_268[0x00000008], 0x00000000);
								unk_0xA3BF0AA5A2608191(iLocal_268[0x00000008]);
								unk_0xDD353D0E9C789D0E(&iLocal_304);
								unk_0x45F014B3D0466974(0x00000000, iLocal_286[0x00000001], 0x00000100);
								unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								unk_0x75ABDC5F81978924(iLocal_304);
								unk_0x78ADC381772E3D54(iLocal_268[0x00000008], iLocal_304);
								unk_0xF82EA857DA10E0CD(&iLocal_304);
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_268[0x00000009]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000009]))
							{
								unk_0x11AD11297DC58CC7(iLocal_268[0x00000009], 0x00000000);
								unk_0xA3BF0AA5A2608191(iLocal_268[0x00000009]);
								unk_0xDD353D0E9C789D0E(&iLocal_304);
								unk_0x45F014B3D0466974(0x00000000, iLocal_286[0x00000001], 0x00000100);
								unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								unk_0x75ABDC5F81978924(iLocal_304);
								unk_0x78ADC381772E3D54(iLocal_268[0x00000009], iLocal_304);
								unk_0xF82EA857DA10E0CD(&iLocal_304);
							}
						}
						iLocal_345 = 0x00000001;
					}
				}
			}
		}
	}
	if (iLocal_346 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_268[0x0000000A]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x0000000A]))
			{
				if (func_13(unk_0x16F2683693E537C9(), iLocal_268[0x0000000A]) > 200f)
				{
					unk_0x6DAD7906B73F064D(&(iLocal_268[iLocal_231]));
					unk_0x8D17794CE3273D70("misssolomon_3");
				}
				else if (unk_0xB4AE0788C1587752("misssolomon_3"))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x0000000A]))
						{
							unk_0xA3BF0AA5A2608191(iLocal_268[0x0000000A]);
							unk_0xDD353D0E9C789D0E(&iLocal_304);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "misssolomon_3", "plyr_roll_left", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_304);
							unk_0x78ADC381772E3D54(iLocal_268[0x0000000A], iLocal_304);
							unk_0xF82EA857DA10E0CD(&iLocal_304);
							iLocal_346 = 0x00000001;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 0x00000001);
}

void func_14(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_15(iParam2), 0x00000001);
}

int func_15(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

float func_16(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 0x00000001;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0x00000000)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000000);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000001);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0x00000000)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000000);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000001);
			}
		}
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_78CE, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0674E58A79778E99(&Global_78CE, iParam0);
			StringCopy(&(Global_78CF[iParam0 /*6*/]), "NULL", 24);
			Global_7906[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_78CE, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_181B3 != 0x00000006)
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x21387C9EECC2B220(0x00000000);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 0x3F800000);
							unk_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0x00000000);
						}
					}
				}
			}
		}
		if (iParam2 == 0x00000001)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
		}
		unk_0x17EFA7496495F972();
		func_22(0x00000000);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000D);
	}
}

int func_23()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 0x00000001)
	{
		if (!unk_0x7F8A39872A07D2CE("FinaleC2", unk_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0x00000000;
	if (iParam3 == 0x00000001)
	{
		if (iParam0 != Global_181DD)
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iParam0 > Global_181DD)
	{
		iVar0 = 0x00000001;
	}
	if (iVar0 == 0x00000001)
	{
		func_119(0x00000001);
		if (iParam0 <= Global_181DD)
		{
		}
		iVar1 = func_117(unk_0xBB0808A181D4745C(), 0x00000001);
		if (iVar1 != 0xFFFFFFFF && iVar1 != 0x0000005E)
		{
			Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1 = 0x00000000;
			iVar2 = func_115(iVar1);
			cVar3 = { Global_15DBC[iVar1 /*34*/].f_8 };
			if (iVar1 == 0x0000005A)
			{
				switch (Global_1B416.f_2378.f_63.f_CD[0x00000007])
				{
					case 0x00000001:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 0x00000002:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x353729B0A07DC11A(&cVar3, iVar2, Global_181DD, iParam0);
		}
		else
		{
			iVar4 = func_110(unk_0xBB0808A181D4745C(), 0x00000001);
			if (iVar4 != 0xFFFFFFFF)
			{
				Global_1B416.f_4889[iVar4 /*6*/].f_4 = 0x00000000;
				MemCopy(&uVar5, {func_109(iVar4)}, 0x00000004);
				unk_0x353729B0A07DC11A(&uVar5, 0x00000000, Global_181DD, iParam0);
			}
			else
			{
				iVar6 = func_108(&(Global_181B8.f_3));
				if (iVar6 > 0xFFFFFFFF)
				{
					Global_1B416.f_6195.f_4[iVar6] = 0x00000000;
				}
			}
		}
		Global_16AFA = iParam2;
		Global_181DD = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_181DD)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_19AE3, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_107();
	uParam0->f_1 = func_96();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_68(&(uParam0->f_B44), 0x00000000);
		func_67(unk_0x16F2683693E537C9());
		func_60(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 0x00000001);
		if (uParam0->f_2 == 0x00000000 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		uParam0->f_11[iVar1] = Global_1B416.f_936.f_21B.f_126[iVar1];
		if (iVar1 == func_57())
		{
			func_50(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_180A5[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_180A5[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_180A5[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_180A5[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_180A5[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_180A5[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_180A5[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_180A5[iVar1 /*65*/].f_40;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000009)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_180A5[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_180A5[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0x00000000:
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000001:
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000002:
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
		}
		uParam0->f_9[iVar1] = Global_1B416.f_504F.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_E53E[iVar1];
		uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			uParam0->f_B16[iVar1 /*15*/][iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_5[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_A[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			uParam0->f_929[iVar1 /*164*/][iVar0] = Global_1B416.f_936[iVar1 /*164*/][iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_10[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_14[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_18[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_1C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_20[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_24[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_28[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_2C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_30[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_34[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_38[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_3C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_40[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_44[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_48[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_50[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_54[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_58[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_5C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_60[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_64[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_68[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_6C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_70[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_74[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_78[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_7C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_80[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_84[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_88[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_90[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_94[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_98[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_9C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_A0[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &(uParam0->f_925[0x00000000]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &(uParam0->f_925[0x00000001]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &(uParam0->f_925[0x00000002]), 0xFFFFFFFF);
	uParam0->f_5 = 0x00000091;
	if (iParam4 == 0x00000001)
	{
		func_29(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_28(&(uParam0->f_BA4));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 0x00000001;
		}
		else
		{
			uParam1->f_3 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (Global_181B8.f_16[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_35(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_33(iParam1);
		}
	}
	if (iParam2 == 0x00000001)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_12A3A == iParam1)
		{
			uParam0->f_9 = 0x00000001;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_8 = 0x00000001;
	}
	else
	{
		uParam0->f_8 = 0x00000000;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if (iParam0 == Global_126B1.f_1E4[iVar0])
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000091;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000091;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				return Global_17755[iVar0];
			}
		}
		iVar0++;
	}
	return 0x00000091;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000091 || iParam1 == Global_17755[iVar0])
				{
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_36(iParam1, iParam2))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_37(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 0x00000001;
	uParam1->f_54 = 0x000000FF;
	uParam1->f_55 = 0x000000FF;
	uParam1->f_56 = 0x000000FF;
	uParam1->f_61 = 0x00000001;
	uParam1->f_3 = 0x000003E8;
	uParam1->f_1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[0x00000080] && !Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0x00000000;
					uParam1->f_9 = 0x00000001;
					uParam1->f_B[0x00000000] = 0x00000001;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 0x0000002B;
					uParam1->f_6 = 0x0000002B;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_9 = 0x00000000;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 0x00000020;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[0x00000077])
					{
						uParam1->f_B[0x00000001] = 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (iParam2 == 0x00000001)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 0x00000002)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000076])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 0x00000035;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000003B;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_A = 0x00000001;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0x00000000] = 0x00000001;
					uParam1->f_B[0x00000001] = 0x00000001;
					uParam1->f_B[0x00000002] = 0x00000001;
					uParam1->f_B[0x00000003] = 0x00000001;
					uParam1->f_B[0x00000004] = 0x00000001;
					uParam1->f_B[0x00000005] = 0x00000001;
					uParam1->f_B[0x00000006] = 0x00000001;
					uParam1->f_B[0x00000007] = 0x00000001;
					uParam1->f_B[0x00000008] = 0x00000001;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_38(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_43(uParam1);
		uParam1->f_42 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_43 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_45 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_46 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0x812A93B166D97C60(iParam0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001F);
		}
		if (uParam1->f_41 == 0xFFFFFFFF && !func_42(uParam1->f_42))
		{
			uParam1->f_41 = 0x00000000;
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			uParam1->f_44 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_42))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 0x00000003:
					case 0x00000000:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000004:
					case 0x00000001:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000005:
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000009);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000A);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000D);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000C);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000000B);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000001B);
		}
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000002;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000006;
			break;
		
		case 0x00000008:
			return 0x00000007;
			break;
		
		case 0x00000009:
			return 0x00000008;
			break;
		
		case 0x0000000A:
			return 0x00000018;
			break;
		
		case 0x0000000B:
			return 0x00000019;
			break;
		
		case 0x0000000C:
			return 0x0000001A;
			break;
	}
	return 0x00000000;
}

int func_41(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			(*uParam1)[iVar0] = 0x00000000;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000016)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 0x000000FF:
						(*uParam1)[iVar0] = 0x00000001;
						break;
					
					case 0x00000000:
						(*uParam1)[iVar0] = 0x00000002;
						break;
					
					case 0x00000001:
						(*uParam1)[iVar0] = 0x00000003;
						break;
					
					case 0x00000002:
						(*uParam1)[iVar0] = 0x00000004;
						break;
					
					case 0x00000003:
						(*uParam1)[iVar0] = 0x00000005;
						break;
					
					case 0x00000004:
						(*uParam1)[iVar0] = 0x00000006;
						break;
					
					case 0x00000005:
						(*uParam1)[iVar0] = 0x00000007;
						break;
					
					case 0x00000006:
						(*uParam1)[iVar0] = 0x00000008;
						break;
					
					case 0x00000007:
						(*uParam1)[iVar0] = 0x00000009;
						break;
					
					case 0x00000008:
						(*uParam1)[iVar0] = 0x0000000A;
						break;
					
					case 0x00000009:
						(*uParam1)[iVar0] = 0x0000000B;
						break;
					
					case 0x0000000A:
						(*uParam1)[iVar0] = 0x0000000C;
						break;
					
					case 0x0000000B:
						(*uParam1)[iVar0] = 0x0000000D;
						break;
					
					case 0x0000000C:
						(*uParam1)[iVar0] = 0x0000000E;
						break;
					
					case 0x0000000D:
						(*uParam1)[iVar0] = 0x0000000F;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0x00000000;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 0x00000017)
			{
				(*uParam2)[0x00000000] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 0x00000018)
			{
				(*uParam2)[0x00000001] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case 0xC4810400:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0x00000000;
	uParam0->f_4D = 0x00000000;
	uParam0->f_41 = 0x00000000;
	uParam0->f_3E = 0x00000000;
	uParam0->f_3F = 0x00000000;
	uParam0->f_40 = 0x00000000;
	uParam0->f_4A = 0x00000000;
	uParam0->f_4B = 0x00000000;
	uParam0->f_4C = 0x00000000;
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000031)
	{
		uParam0->f_9[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		uParam0->f_3B[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_43 = 0x00000000;
	uParam0->f_44 = 0x00000000;
	uParam0->f_45 = 0x00000000;
	uParam0->f_46 = 0x00000001;
	uParam0->f_47 = 0x00000000;
	uParam0->f_48 = 0x00000000;
	uParam0->f_49 = 0x00000000;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 0x00000001);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0x00000000))
				{
					if (iParam2 == 0x00000000 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, joaat("taxi")))
						{
							if (unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != iParam0 && unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != 0x00000000)
							{
								return 0x00000000;
							}
						}
						if (func_45(*uParam1, func_107(), 0x00000001))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0x00000000;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 0x00000001))
							{
								return 0x00000000;
							}
						}
						if (iParam3 == 0x00000001)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0x00000000;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, joaat("blimp")))
						{
							return 0x00000000;
						}
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_46(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0x00000000))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0x00000000;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 0x00000005;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 0x00000003;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000002)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_49(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_50(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_56(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_55(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_3B = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_54(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_51(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_51(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_51(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_51(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_54(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_51(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_51(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_52(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_53();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

int func_53()
{
	return Global_1407E9;
}

int func_54(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_52(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0x00000000)
	{
		return;
	}
	if (iParam1 == 0x00000000)
	{
		if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
		{
			if (iParam0 != 0x00000000)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != 0xFFFFFFFF)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000007)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			else if (iParam1 == 0x00000001)
			{
				if (*uParam2 == 0x00000001)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000040 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000002)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000004)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000006)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000011)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000014)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x00000008 && *uParam2 <= 0x0000000E)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000009)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if ((*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014) || *uParam2 == 0x00000002)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
	}
}

void func_56(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0x00000000)
	{
		return;
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x0000000F)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000003 || *uParam2 == 0x00000016)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000008)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000001 || *uParam2 == 0x0000000A)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000013)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000003)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (*uParam2 >= 0x00000005 && *uParam2 <= 0x00000007)
				{
					if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
	}
}

int func_57()
{
	func_58();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_48(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_47(unk_0x16F2683693E537C9());
			if (func_38(iVar0) && (!func_59(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_38(Global_1B416.f_936.f_21B.f_10E1))
				{
					Global_1B416.f_936.f_21B.f_10E2 = Global_1B416.f_936.f_21B.f_10E1;
				}
				Global_1B416.f_936.f_21B.f_10E3 = iVar0;
				Global_1B416.f_936.f_21B.f_10E1 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_10E1 != 0x00000091)
			{
				Global_1B416.f_936.f_21B.f_10E3 = Global_1B416.f_936.f_21B.f_10E1;
			}
			return;
		}
	}
	Global_1B416.f_936.f_21B.f_10E1 = 0x00000091;
}

bool func_59(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_61(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
			iVar2 = 0x00000000;
			while (iVar2 <= (0x00000008 - 0x00000001))
			{
				Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_1B416.f_936.f_21B.f_6E3 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0x00000000)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp0_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000001)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp1_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000002)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp2_parachute_current_tint"), iVar3, 0x00000001);
			}
		}
	}
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			iVar3 = func_66(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_66(iVar0));
				Var4.f_1 = 0x00000000;
				Var4.f_2 = 0x00000000;
				Var4.f_3 = 0x00000000;
				Var4.f_4 = 0x00000000;
				if (Var4 != 0x00000000 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 0x00000001;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0x00000000;
					iVar2 = func_64(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_64(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000032)
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0x00000000;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0x00000000;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_63(Var7.f_1)) && iVar9 < 0x00000033)
			{
				if (!unk_0x232048AB4B0E0259(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0x00000000;
					Var4.f_2 = 0x00000000;
					Var4.f_3 = 0x00000000;
					Var4.f_4 = 0x00000000;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, iVar1, &Var8))
						{
							if (!func_62(Var8.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var8.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0x00000000)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4 = 0x00000000;
						Var4.f_1 = 0x00000000;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0xB4FC92B0:
		case 0x1A1F1260:
		case 0xE4E00B70:
		case 0x2C298B2B:
		case 0xDFB79725:
		case 0x6BD7228C:
		case 0x9DDBCF8C:
		case 0xB319A52C:
		case 0xC6836E12:
		case 0x43B1B173:
		case 0x4ABDA3FA:
		case 0xE7EE68EA:
		case 0x29366D21:
		case 0x3ADE514B:
		case 0xE64513E9:
		case 0xCD7AEB9A:
		case 0xFA7B27A6:
		case 0xE285CA9A:
		case 0x2B904B19:
		case 0x22C24F9C:
		case 0x8D0D5ECD:
		case 0x1F07150A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_63(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0x00000000;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0x00000000;
				break;
			
			case 0xC78D71B4:
			case 0xDDE2A27C:
			case 0x176898A6:
			case 0xA52E2957:
			case 0x8210D4D5:
			case 0xD866ACD1:
			case 0x8F796EC9:
			case 0xCE1A1A4D:
			case 0xEB779748:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 0x12E82D3D:
			case 0xBD248B55:
			case 0x0781FE4A:
			case 0xCD274149:
			case 0xBA45E8B8:
			case 0x94117305:
			case 0x19044EE0:
			case 0x97EA20B8:
			case 0x476BF155:
			case 0xB62D1F67:
			case 0xAF3696A1:
			case 0x917F6C8C:
			case 0x2B5EF5EC:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000009:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x84C8B2D3;
					break;
				
				case 0x00000001:
					iVar0 = 0x937ED0B7;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0x00000000)
			{
				iVar1 = func_65(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_62(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_65(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x76D04710;
			break;
		
		case 0x00000001:
			iVar0 = 0x4C1DA136;
			break;
		
		case 0x00000002:
			iVar0 = 0x378DDAD7;
			break;
		
		case 0x00000003:
			iVar0 = 0xD6D57281;
			break;
		
		case 0x00000004:
			iVar0 = 0xA9066703;
			break;
		
		case 0x00000005:
			iVar0 = 0x0BAB693A;
			break;
		
		case 0x00000006:
			iVar0 = 0xE5D87BED;
			break;
		
		case 0x00000007:
			iVar0 = 0x3573FB94;
			break;
		
		case 0x00000008:
			iVar0 = 0x1D838821;
			break;
		
		case 0x00000009:
			iVar0 = 0xBB200985;
			break;
		
		case 0x0000000A:
			iVar0 = 0xE14402F7;
			break;
		
		case 0x0000000B:
			iVar0 = 0xCC07A8AD;
			break;
		
		case 0x0000000C:
			iVar0 = 0xAF5E8908;
			break;
		
		case 0x0000000D:
			iVar0 = 0xDFA31A8F;
			break;
		
		case 0x0000000E:
			iVar0 = 0x644B237F;
			break;
		
		case 0x0000000F:
			iVar0 = 0xCCC586AE;
			break;
		
		case 0x00000010:
			iVar0 = 0x8150911E;
			break;
		
		case 0x00000011:
			iVar0 = 0x7B37201A;
			break;
		
		case 0x00000012:
			iVar0 = 0xDFEC2248;
			break;
		
		case 0x00000013:
			iVar0 = 0x6A4A26BC;
			break;
		
		case 0x00000014:
			iVar0 = 0x1A378022;
			break;
		
		case 0x00000015:
			iVar0 = 0xFE852271;
			break;
		
		case 0x00000016:
			iVar0 = 0x74300D78;
			break;
		
		case 0x00000017:
			iVar0 = 0x8C4B2ADF;
			break;
		
		case 0x00000018:
			iVar0 = 0xC26535F0;
			break;
		
		case 0x00000019:
			iVar0 = 0x131AA6B3;
			break;
		
		case 0x0000001A:
			iVar0 = 0xD6909BE9;
			break;
		
		case 0x0000001B:
			iVar0 = 0xEF3FD8A1;
			break;
		
		case 0x0000001C:
			iVar0 = 0xD7119454;
			break;
		
		case 0x0000001D:
			iVar0 = 0x14B69421;
			break;
		
		case 0x0000001E:
			iVar0 = 0x697229C1;
			break;
		
		case 0x0000001F:
			iVar0 = 0x0B522FBC;
			break;
		
		case 0x00000021:
			iVar0 = 0x0ED4684E;
			break;
		
		case 0x00000022:
			iVar0 = 0x170AFF96;
			break;
		
		case 0x00000023:
			iVar0 = 0xF6A12136;
			break;
		
		case 0x00000024:
			iVar0 = 0x1A0BDEFC;
			break;
		
		case 0x00000025:
			iVar0 = 0xFD243A87;
			break;
		
		case 0x00000026:
			iVar0 = 0x22541EBE;
			break;
	}
	return iVar0;
}

void func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0x00000000)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000004))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000005))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000006))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000007))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_72(&iVar0))
		{
			if (func_70(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_107();
			if (iVar3 == 0x00000000)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 0x00000001)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 0x00000002)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_69(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_69(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam2, sParam1);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0x00000000;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_70(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 0x00000001:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 0x00000002:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 0x00000005:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 0x00000006:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 0x00000007:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 0x00000009:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 0x0000000B:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 0x00000010:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 0x00000011:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 0x00000012:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 0x00000013:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 0x00000014:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 0x00000015:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 0x00000016:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 0x00000017:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 0x00000018:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 0x00000019:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 0x0000001A:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 0x0000001B:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 0x0000001C:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 0x0000001D:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 0x0000001E:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 0x0000001F:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 0x00000020:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 0x00000021:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 0x00000022:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 0x00000023:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 0x00000024:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 0x00000025:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 0x00000026:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 0x00000027:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 0x00000028:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 0x00000029:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 0x0000002A:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 0x0000002B:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 0x0000002C:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 0x0000002D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000030:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000031:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000034:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000032:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000033:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_71(*uParam1, 0f, 0f, 0f, 0x00000000);
}

bool func_71(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_72(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_95())
		{
			*uParam0 = func_78(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_77(*uParam0) && !func_73(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, 0x00000000, 0x00000001);
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_76() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_51(func_75(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000033B;
			break;
		
		case 0x00000001:
			return 0x0000033C;
			break;
		
		case 0x00000002:
			return 0x0000033D;
			break;
		
		case 0x00000003:
			return 0x0000033E;
			break;
		
		case 0x00000004:
			return 0x0000033F;
			break;
		
		case 0x00000005:
			return 0x00000340;
			break;
		
		case 0x00000006:
			return 0x00000341;
			break;
		
		case 0x00000007:
			return 0x00000342;
			break;
		
		case 0x00000008:
			return 0x00000343;
			break;
		
		case 0x00000009:
			return 0x00000344;
			break;
		
		case 0x0000000A:
			return 0x00000345;
			break;
		
		case 0x0000000B:
			return 0x00000346;
			break;
		
		case 0x0000000C:
			return 0x00000347;
			break;
		
		case 0x0000000D:
			return 0x00000348;
			break;
		
		case 0x0000000E:
			return 0x00000349;
			break;
		
		case 0x0000000F:
			return 0x0000034B;
			break;
		
		case 0x00000010:
			return 0x0000034C;
			break;
		
		case 0x00000011:
			return 0x0000034D;
			break;
		
		case 0x00000012:
			return 0x0000034E;
			break;
		
		case 0x00000013:
			return 0x0000034F;
			break;
		
		case 0x00000014:
			return 0x00000350;
			break;
		
		case 0x00000015:
			return 0x00000351;
			break;
		
		case 0x00000016:
			return 0x00000352;
			break;
		
		case 0x00000017:
			return 0x00000353;
			break;
		
		case 0x00000018:
			return 0x00000354;
			break;
		
		case 0x00000019:
			return 0x00000355;
			break;
		
		case 0x0000001A:
			return 0x00000356;
			break;
		
		case 0x0000001B:
			return 0x00000357;
			break;
		
		case 0x0000001C:
			return 0x00000358;
			break;
		
		case 0x0000001D:
			return 0x00000359;
			break;
		
		case 0x0000001E:
			return 0x0000035A;
			break;
		
		case 0x0000001F:
			return 0x0000035B;
			break;
		
		case 0x00000020:
			return 0x0000035C;
			break;
		
		case 0x00000021:
			return 0x0000035D;
			break;
		
		case 0x00000022:
			return 0x0000035E;
			break;
		
		case 0x00000023:
			return 0x0000035F;
			break;
		
		case 0x00000024:
			return 0x00000360;
			break;
		
		case 0x00000025:
			return 0x00000361;
			break;
		
		case 0x00000026:
			return 0x00000362;
			break;
		
		case 0x00000027:
			return 0x00000363;
			break;
		
		case 0x00000028:
			return 0x00000367;
			break;
		
		case 0x00000029:
			return 0x00000368;
			break;
		
		case 0x0000002A:
			return 0x00000369;
			break;
		
		case 0x0000002B:
			return 0x0000036A;
			break;
		
		case 0x0000002C:
			return 0x000026F9;
			break;
		
		case 0x0000002D:
			return 0x00000EE0;
			break;
		
		case 0x0000002E:
			return 0x00001507;
			break;
		
		case 0x0000002F:
			return 0x0000180B;
			break;
		
		case 0x00000030:
			return 0x00001C40;
			break;
		
		case 0x00000031:
			return 0x00001EC6;
			break;
		
		case 0x00000034:
			return 0x000022D0;
			break;
		
		case 0x00000032:
			return 0x00002049;
			break;
		
		case 0x00000033:
			return 0x0000204B;
			break;
		
		default:
			break;
	}
	return 0x00002CF7;
}

int func_76()
{
	return Global_7830;
}

int func_77(int iParam0)
{
	return func_74(iParam0, 0x00000005, 0x00000001);
}

int func_78(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_94(iVar0))
		{
			if (!bParam3 || func_93(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_79(iVar0, 0x00000000), 0x00000001);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF)) && (iParam4 || iVar0 != 0x00000015)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_79(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0f, 0f, 0f;
			break;
		
		case 0x00000000:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 0x00000001:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 0x00000002:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 0x00000003:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 0x00000004:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 0x00000005:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 0x00000006:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 0x00000007:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 0x00000008:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 0x00000009:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 0x0000000A:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 0x0000000B:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 0x0000000C:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 0x0000000D:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 0x0000000E:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 0x0000000F:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 0x00000010:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 0x00000011:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 0x00000012:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 0x00000013:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 0x00000014:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 0x00000015:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 0x00000016:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 0x00000017:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 0x00000018:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 0x00000019:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 0x0000001A:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 0x0000001B:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 0x0000001C:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 0x0000001D:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 0x0000001E:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 0x0000001F:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 0x00000020:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 0x00000021:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 0x00000022:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 0x00000023:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 0x00000024:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 0x00000025:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 0x00000026:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 0x00000027:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 0x00000028:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 0x00000029:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 0x0000002A:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 0x0000002B:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 0x0000002C:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 0x0000002D:
			return func_90(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_89())
			{
				if (func_88(Global_184466))
				{
					return func_81(0x00000002, 0x00000002);
				}
				else if (func_80(Global_184466))
				{
					return func_81(0x0000002D, 0x00000003);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 0x0000002F:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 0x00000030:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 0x00000031:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 0x00000034:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 0x00000032:
			return Global_19E130;
			break;
		
		case 0x00000033:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_80(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_81(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_89())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_82(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_82(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_82(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_82(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_87(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_87(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_85(iParam0) };
	}
	else
	{
		Var2 = { func_84(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_83(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_83(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_83(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_84(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000001:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000002:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x00000003:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x00000004:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000005:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000006:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000008:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_85(int iParam0)
{
	return func_86(iParam0);
}

struct<6> func_86(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000001:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000013:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000014:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000002:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 0x00000005:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 0x00000006:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 0x00000008:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 0x00000009:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000A:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 0x0000000B:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000C:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003D:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003E:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000D:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 0x0000000E:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000F:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003F:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000010:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 0x00000011:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000012:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000041:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000042:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002C:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000015:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000016:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000017:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000018:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000019:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x0000001A:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001B:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001C:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001D:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001E:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x0000001F:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000020:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000021:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000022:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000023:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000024:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000025:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000026:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000027:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 0x00000028:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000029:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000002A:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002B:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002D:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002E:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002F:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000030:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000031:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000032:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000033:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 0x00000034:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 0x00000035:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 0x00000036:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000037:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000038:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000039:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003A:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003B:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003C:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000043:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000044:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000047:
		case 0x00000045:
		case 0x00000046:
		case 0x00000049:
		case 0x00000048:
		case 0x0000004A:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_87(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_88(int iParam0)
{
	if (iParam0 != func_89())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_89()
{
	return 0xFFFFFFFF;
}

Vector3 func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000002:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000003:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 0x00000006:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 0x00000007:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 0x00000008:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 0x00000009:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 0x00000004:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 0x00000005:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 0x0000000A:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 0x0000000B:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 0x0000000C:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 0x0000000D:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 0x0000000E:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 0x0000000F:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 0x00000010:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 0x00000011:
			if (func_91() == 0x00000000)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_91()
{
	return func_92(unk_0xD803B885F5E47A62());
}

int func_92(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_93(int iParam0)
{
	return func_74(iParam0, 0x00000000, 0x00000000);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
			break;
		
		case 0x00000010:
			return 0x00000001;
			break;
		
		case 0x00000011:
			return 0x00000001;
			break;
		
		case 0x00000012:
			return 0x00000001;
			break;
		
		case 0x00000013:
			return 0x00000001;
			break;
		
		case 0x00000014:
			return 0x00000001;
			break;
		
		case 0x00000015:
			return 0x00000001;
			break;
		
		case 0x00000016:
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

bool func_95()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_96()
{
	var uVar0;
	
	func_106(&uVar0, unk_0x4460E481B9E33ADA());
	func_105(&uVar0, unk_0x8D199E381D262EEF());
	func_104(&uVar0, unk_0xD8A54335F18763BA());
	func_99(&uVar0, unk_0x972A296334C9D57B());
	func_98(&uVar0, unk_0x118229AD063C3C1D());
	func_97(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_97(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_98(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_99(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_103(*uParam0);
	iVar1 = func_101(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_100(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_100(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

int func_101(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_102(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_102(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_103(int iParam0)
{
	return iParam0 & 0x0000000F;
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_105(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_107()
{
	func_58();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_108(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0x00000000;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 0x00000002;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 0x00000003;
	}
	return 0xFFFFFFFF;
}

struct<2> func_109(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_110(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x12AB0310C2281427(sParam0);
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000003F)
	{
		iVar0 = iVar3;
		func_111(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0x00000000)
	{
	}
	return 0xFFFFFFFF;
}

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_112(uParam1, "Abigail1", func_114(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_112(uParam1, "Abigail2", func_114(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_112(uParam1, "Barry1", func_114(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_112(uParam1, "Barry2", func_114(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_112(uParam1, "Barry3", func_114(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_112(uParam1, "Barry3A", func_114(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_112(uParam1, "Barry3C", func_114(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_112(uParam1, "Barry4", func_114(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_112(uParam1, "Dreyfuss1", func_114(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_112(uParam1, "Epsilon1", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_112(uParam1, "Epsilon2", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_112(uParam1, "Epsilon3", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_112(uParam1, "Epsilon4", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_112(uParam1, "Epsilon5", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_112(uParam1, "Epsilon6", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_112(uParam1, "Epsilon7", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_112(uParam1, "Epsilon8", func_114(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_112(uParam1, "Extreme1", func_114(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_112(uParam1, "Extreme2", func_114(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_112(uParam1, "Extreme3", func_114(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_112(uParam1, "Extreme4", func_114(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_112(uParam1, "Fanatic1", func_114(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_112(uParam1, "Fanatic2", func_114(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_112(uParam1, "Fanatic3", func_114(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_112(uParam1, "Hao1", func_114(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_112(uParam1, "Hunting1", func_114(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_112(uParam1, "Hunting2", func_114(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_112(uParam1, "Josh1", func_114(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_112(uParam1, "Josh2", func_114(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_112(uParam1, "Josh3", func_114(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_112(uParam1, "Josh4", func_114(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_112(uParam1, "Maude1", func_114(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_112(uParam1, "Minute1", func_114(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_112(uParam1, "Minute2", func_114(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_112(uParam1, "Minute3", func_114(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_112(uParam1, "MrsPhilips1", func_114(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_112(uParam1, "MrsPhilips2", func_114(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_112(uParam1, "Nigel1", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_112(uParam1, "Nigel1A", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_112(uParam1, "Nigel1B", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_112(uParam1, "Nigel1C", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_112(uParam1, "Nigel1D", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_112(uParam1, "Nigel2", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_112(uParam1, "Nigel3", func_114(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_112(uParam1, "Omega1", func_114(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_112(uParam1, "Omega2", func_114(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_112(uParam1, "Paparazzo1", func_114(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_112(uParam1, "Paparazzo2", func_114(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_112(uParam1, "Paparazzo3", func_114(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_112(uParam1, "Paparazzo3A", func_114(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_112(uParam1, "Paparazzo3B", func_114(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_112(uParam1, "Paparazzo4", func_114(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_112(uParam1, "Rampage1", func_114(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_112(uParam1, "Rampage3", func_114(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_112(uParam1, "Rampage4", func_114(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_112(uParam1, "Rampage5", func_114(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_112(uParam1, "Rampage2", func_114(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_113(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_112(uParam1, "TheLastOne", func_114(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_112(uParam1, "Tonya1", func_114(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_112(uParam1, "Tonya2", func_114(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_112(uParam1, "Tonya3", func_114(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_112(uParam1, "Tonya4", func_114(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_112(uParam1, "Tonya5", func_114(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_113(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_112(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000000;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000000;
			break;
		
		case 0x00000010:
			return 0x00000001;
			break;
		
		case 0x00000011:
			return 0x00000001;
			break;
		
		case 0x00000012:
			return 0x00000001;
			break;
		
		case 0x00000013:
			return 0x00000001;
			break;
		
		case 0x00000014:
			return 0x00000001;
			break;
		
		case 0x00000015:
			return 0x00000001;
			break;
		
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000001;
			break;
		
		case 0x00000018:
			return 0x00000001;
			break;
		
		case 0x00000019:
			return 0x00000001;
			break;
		
		case 0x0000001A:
			return 0x00000001;
			break;
		
		case 0x0000001B:
			return 0x00000000;
			break;
		
		case 0x0000001C:
			return 0x00000001;
			break;
		
		case 0x0000001D:
			return 0x00000001;
			break;
		
		case 0x0000001E:
			return 0x00000001;
			break;
		
		case 0x0000001F:
			return 0x00000000;
			break;
		
		case 0x00000020:
			return 0x00000001;
			break;
		
		case 0x00000021:
			return 0x00000001;
			break;
		
		case 0x00000022:
			return 0x00000001;
			break;
		
		case 0x00000023:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000025:
			return 0x00000000;
			break;
		
		case 0x00000026:
			return 0x00000001;
			break;
		
		case 0x00000027:
			return 0x00000001;
			break;
		
		case 0x00000028:
			return 0x00000001;
			break;
		
		case 0x00000029:
			return 0x00000001;
			break;
		
		case 0x0000002A:
			return 0x00000001;
			break;
		
		case 0x0000002B:
			return 0x00000001;
			break;
		
		case 0x0000002C:
			return 0x00000000;
			break;
		
		case 0x0000002D:
			return 0x00000000;
			break;
		
		case 0x0000002E:
			return 0x00000001;
			break;
		
		case 0x0000002F:
			return 0x00000001;
			break;
		
		case 0x00000030:
			return 0x00000000;
			break;
		
		case 0x00000031:
			return 0x00000001;
			break;
		
		case 0x00000032:
			return 0x00000001;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
		
		case 0x00000034:
			return 0x00000001;
			break;
		
		case 0x00000036:
			return 0x00000001;
			break;
		
		case 0x00000037:
			return 0x00000001;
			break;
		
		case 0x00000038:
			return 0x00000001;
			break;
		
		case 0x00000035:
			return 0x00000001;
			break;
		
		case 0x00000039:
			return 0x00000001;
			break;
		
		case 0x0000003A:
			return 0x00000001;
			break;
		
		case 0x0000003B:
			return 0x00000001;
			break;
		
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000001;
			break;
		
		case 0x0000003E:
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

struct<2> func_114(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_109(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000045:
		case 0x00000046:
			return func_116(Global_1B416.f_2378.f_63.f_CD[0x0000000A]);
			break;
		
		case 0x0000004A:
		case 0x0000004B:
			return func_116(Global_1B416.f_2378.f_63.f_CD[0x00000008]);
			break;
		
		case 0x00000054:
		case 0x00000055:
			return func_116(Global_1B416.f_2378.f_63.f_CD[0x0000000B]);
			break;
		
		case 0x0000005A:
			return func_116(Global_1B416.f_2378.f_63.f_CD[0x00000007]);
			break;
		
		case 0x0000005D:
			return func_116(Global_1B416.f_2378.f_63.f_CD[0x00000009]);
			break;
	}
	return 0x00000000;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
			return 0x00000000;
			break;
		
		case 0x00000002:
		case 0x00000004:
		case 0x00000007:
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0xFFFFFFFF;
}

int func_117(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_118(iVar0, 0x00000001);
	if (iVar1 == 0xFFFFFFFF && !bParam1)
	{
	}
	return iVar1;
}

int func_118(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000005E)
	{
		if (Global_15DBC[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return 0xFFFFFFFF;
}

void func_119(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_120()
{
	unk_0x25A28F88B27F5218("EXTRASUNNY");
	func_216();
	func_188();
	func_122();
	if (!func_24())
	{
		func_121();
	}
	iLocal_349 = 0x00000001;
	unk_0x2FB9A57162E54BAB(0f);
}

void func_121()
{
	switch (iLocal_222)
	{
		case 0x00000002:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1019.579f, -484.872f, 36.0795f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 93.7701f);
			break;
		
		case 0x00000003:
			if (unk_0xDF1306B443CD3D15(iLocal_279, 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_279, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_279, 0xFFFFFFFF);
				}
				unk_0xD458AC1C1D29C3B4(iLocal_279, 0x00000BB8, 0x00000000);
				unk_0xAA6B3A4292417750(iLocal_279, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000005:
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -935.4413f, -2928.061f, 12.9451f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 178.466f);
			unk_0xE8832A9E16A57A1F(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
			break;
		
		case 0x00000008:
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -937.5466f, -2968.713f, 12.9451f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 111.5016f);
			unk_0xE8832A9E16A57A1F(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
			break;
	}
}

void func_122()
{
	switch (iLocal_222)
	{
		case 0x00000002:
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x536F1BE96C726C4B(-1026.8f, -492.1f, 36f, 18f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0xE342F209E49C5314(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0x00000000, 0x00000001);
			unk_0x21688103CC7F9B19(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0x00000000);
			unk_0x523BCC9DC80CD82F(joaat("rapidgt"));
			unk_0x523BCC9DC80CD82F(joaat("surano"));
			unk_0x523BCC9DC80CD82F(joaat("carbonizzare"));
			while ((!unk_0xB87F6CF6E5628C67(joaat("rapidgt")) || !unk_0xB87F6CF6E5628C67(joaat("surano"))) || !unk_0xB87F6CF6E5628C67(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_279))
			{
				unk_0x536F1BE96C726C4B(vLocal_306, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), vLocal_306, fLocal_319, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
				unk_0xD458AC1C1D29C3B4(iLocal_279, 0x00000BB8, 0x00000000);
				unk_0xD5A0214B20BCBAD8(iLocal_279, 0x00000001);
				unk_0x71199B01895C6202(joaat("rapidgt"));
				unk_0xAB8E2DDC7AF955E0(joaat("rapidgt"), 0x00000001);
				unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
				unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_290))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("surano")))
				{
					unk_0x536F1BE96C726C4B(-1037.398f, -491.6539f, 35.5545f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					iLocal_290 = unk_0x122AAB0B1D6F55AD(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xC002508A277213DE(iLocal_290, 0x00000000, 0x00000000);
					unk_0xD458AC1C1D29C3B4(iLocal_290, 0x00000BB8, 0x00000000);
					unk_0xD5A0214B20BCBAD8(iLocal_290, 0x00000001);
					unk_0x71199B01895C6202(joaat("surano"));
					unk_0xAB8E2DDC7AF955E0(joaat("surano"), 0x00000001);
					unk_0x44A200C9B6E1CEA6(iLocal_290, 0x00000001);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_291))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("carbonizzare")))
				{
					unk_0x536F1BE96C726C4B(vLocal_306, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					iLocal_291 = unk_0x122AAB0B1D6F55AD(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xC002508A277213DE(iLocal_291, 0x00000059, 0x00000059);
					unk_0xD458AC1C1D29C3B4(iLocal_291, 0x00000BB8, 0x00000000);
					unk_0xD5A0214B20BCBAD8(iLocal_291, 0x00000001);
					unk_0x71199B01895C6202(joaat("carbonizzare"));
					unk_0xAB8E2DDC7AF955E0(joaat("carbonizzare"), 0x00000001);
					unk_0x44A200C9B6E1CEA6(iLocal_291, 0x00000001);
				}
			}
			break;
		
		case 0x00000003:
			unk_0x13896FDECC859926("TRV4_CHASE");
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			func_185();
			unk_0x536F1BE96C726C4B(vLocal_307, 200f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			if (!unk_0xC844350D5D58C99A(iLocal_278))
			{
				iLocal_278 = unk_0x122AAB0B1D6F55AD(joaat("cogcabrio"), vLocal_307, fLocal_320, 0x00000001, 0x00000001, 0x00000000);
				unk_0xAA6B3A4292417750(iLocal_278, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC002508A277213DE(iLocal_278, 0x0000001B, 0x0000001B);
				unk_0x71199B01895C6202(joaat("cogcabrio"));
				unk_0x2E1E5367A885F9B7(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_264))
			{
				iLocal_264 = unk_0x852A19533F896693(iLocal_278, 0x0000001A, joaat("ig_molly"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_264, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0xE121AE1BBF90E186(iLocal_264, 0x00000001);
				unk_0x25C5402CC10F76CD(iLocal_264, 0x00000000);
				unk_0x71199B01895C6202(joaat("ig_molly"));
				unk_0x6DF7BF67E86AAE86(iLocal_264, 0x6F0783F5);
			}
			if (func_23())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_279))
				{
					if (func_184())
					{
						if (!unk_0xAFB8495D36825275(func_183()) && !unk_0xC41A9202669A24C4(func_183()))
						{
							iLocal_279 = func_143(vLocal_316, fLocal_323);
							unk_0x71199B01895C6202(func_183());
							unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
						}
						else
						{
							iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), vLocal_316, fLocal_323, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
						}
					}
					else
					{
						iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), vLocal_316, fLocal_323, 0x00000001, 0x00000001, 0x00000000);
						unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
					}
					unk_0xD458AC1C1D29C3B4(iLocal_279, 0x00000BB8, 0x00000000);
					unk_0xD5A0214B20BCBAD8(iLocal_279, 0x00000001);
					unk_0xAA6B3A4292417750(iLocal_279, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
					unk_0x71199B01895C6202(joaat("rapidgt"));
					unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
				}
			}
			else if (!unk_0xC844350D5D58C99A(iLocal_279))
			{
				iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), vLocal_316, fLocal_323, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
				unk_0x71199B01895C6202(joaat("rapidgt"));
				unk_0xD458AC1C1D29C3B4(iLocal_279, 0x00000BB8, 0x00000000);
				unk_0xD5A0214B20BCBAD8(iLocal_279, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_279, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
				unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
			}
			break;
		
		case 0x00000005:
			iLocal_350 = 0x00000000;
			unk_0x536F1BE96C726C4B(-973.3f, -2967.7f, 13.5f, 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			SYSTEM::SETTIMERA(0x00000000);
			unk_0x523BCC9DC80CD82F(joaat("jet"));
			unk_0x523BCC9DC80CD82F(joaat("shamal"));
			unk_0x29398344B9E5B8A7("BB_MOLLY_2");
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_airworker"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
			unk_0x523BCC9DC80CD82F(joaat("police3"));
			unk_0x523BCC9DC80CD82F(joaat("ig_molly"));
			unk_0x523BCC9DC80CD82F(joaat("cogcabrio"));
			unk_0x523BCC9DC80CD82F(joaat("rapidgt"));
			unk_0x523BCC9DC80CD82F(joaat("prop_cs_film_reel_01"));
			unk_0x36187931D29E5BBE(0x00000044, "BB_Chase");
			unk_0x36187931D29E5BBE(0x00000045, "BB_Chase");
			unk_0x29398344B9E5B8A7("Trev4_5");
			unk_0x9E5E60D8C63FD9D1();
			unk_0x3F423BF5B8125A50("move_f@film_reel_arms");
			unk_0x3F423BF5B8125A50("misssolomon_3");
			while (((((((((((((((!unk_0xB87F6CF6E5628C67(joaat("jet")) || !unk_0xB87F6CF6E5628C67(joaat("shamal"))) || !unk_0x1C2E18E9C63BEB77("BB_MOLLY_2")) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_airworker"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_cop_01"))) || !unk_0xB87F6CF6E5628C67(joaat("police3"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_molly"))) || !unk_0xB87F6CF6E5628C67(joaat("cogcabrio"))) || !unk_0xB87F6CF6E5628C67(joaat("rapidgt"))) || !unk_0xB87F6CF6E5628C67(joaat("prop_cs_film_reel_01"))) || !unk_0x3DDA6C6A285628E4(0x00000044, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000045, "BB_Chase")) || !unk_0x1C2E18E9C63BEB77("Trev4_5")) || !unk_0x25F7A4D42AF2AB93()) || !unk_0xB4AE0788C1587752("move_f@film_reel_arms")) || !unk_0xB4AE0788C1587752("misssolomon_3"))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_264))
			{
				iLocal_264 = unk_0x36F2404464202779(0x0000001A, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 0x00000001, 0x00000001);
				unk_0xE121AE1BBF90E186(iLocal_264, 0x00000001);
				unk_0x25C5402CC10F76CD(iLocal_264, 0x00000000);
				unk_0x11AD11297DC58CC7(iLocal_264, 0x00000001);
				unk_0x71199B01895C6202(joaat("ig_molly"));
				unk_0xE8832A9E16A57A1F(iLocal_264, 0x00000001, 0x00000001);
				unk_0x6DF7BF67E86AAE86(iLocal_264, 0x6F0783F5);
			}
			iLocal_295 = unk_0x7707E48765093646(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 0x00000001, 0x00000001, 0x00000000);
			unk_0x9F528B1B53FBC5D9(iLocal_295, iLocal_264, unk_0x4A089F2B762B8D33(iLocal_264, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			if (!unk_0xC844350D5D58C99A(iLocal_284))
			{
				iLocal_284 = unk_0x122AAB0B1D6F55AD(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x446EA2500F021666(iLocal_284, 0x00000002);
				unk_0x05EC10F460C3A4AF(iLocal_284, 0x00000000);
				unk_0x1E9649458B15960F(iLocal_284, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_284, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x71199B01895C6202(joaat("jet"));
				unk_0x25BD67336EA4AECE(iLocal_284, 0x000001F4);
			}
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						SYSTEM::WAIT(0x00000000);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_279))
				{
					if (func_184())
					{
						iLocal_279 = func_143(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
						unk_0x71199B01895C6202(func_183());
						unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
					}
					else
					{
						iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
						unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
						unk_0x71199B01895C6202(joaat("rapidgt"));
						unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
					}
				}
			}
			else if (!unk_0xC844350D5D58C99A(iLocal_279))
			{
				iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
				unk_0x71199B01895C6202(joaat("rapidgt"));
				unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
				unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_278))
			{
				iLocal_278 = unk_0x122AAB0B1D6F55AD(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_278, 0x0000001B, 0x0000001B);
				unk_0x71199B01895C6202(joaat("cogcabrio"));
			}
			if (!unk_0xC844350D5D58C99A(iLocal_281))
			{
				iLocal_281 = unk_0x122AAB0B1D6F55AD(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 0x00000001, 0x00000001, 0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_272))
			{
				iLocal_272 = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 0x00000001, 0x00000001);
				unk_0x262EF6C6306BEA6C(iLocal_272, joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
				func_127(iLocal_272, 0x00000000);
				unk_0x71199B01895C6202(joaat("s_m_y_cop_01"));
			}
			SYSTEM::SETTIMERA(0x00000000);
			func_126(0x00000002, 0x00000001);
			iLocal_358 = 0x00000001;
			break;
		
		case 0x00000008:
			unk_0x536F1BE96C726C4B(-973.3f, -2967.7f, 13.5f, 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_350 = 0x00000000;
			iLocal_358 = 0x00000000;
			iLocal_337 = 0x00000000;
			unk_0x523BCC9DC80CD82F(joaat("jet"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_airworker"));
			unk_0x523BCC9DC80CD82F(joaat("shamal"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
			unk_0x523BCC9DC80CD82F(joaat("police3"));
			unk_0x523BCC9DC80CD82F(joaat("cogcabrio"));
			unk_0x523BCC9DC80CD82F(joaat("rapidgt"));
			unk_0x523BCC9DC80CD82F(joaat("prop_jet_bloodsplat_01"));
			unk_0x36187931D29E5BBE(0x00000044, "BB_Chase");
			unk_0x36187931D29E5BBE(0x00000045, "BB_Chase");
			unk_0x9E5E60D8C63FD9D1();
			while ((((((((((!unk_0xB87F6CF6E5628C67(joaat("jet")) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_airworker"))) || !unk_0xB87F6CF6E5628C67(joaat("shamal"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_cop_01"))) || !unk_0xB87F6CF6E5628C67(joaat("police3"))) || !unk_0xB87F6CF6E5628C67(joaat("cogcabrio"))) || !unk_0xB87F6CF6E5628C67(joaat("rapidgt"))) || !unk_0xB87F6CF6E5628C67(joaat("prop_jet_bloodsplat_01"))) || !unk_0x3DDA6C6A285628E4(0x00000044, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000045, "BB_Chase")) || !unk_0x25F7A4D42AF2AB93())
			{
				SYSTEM::WAIT(0x00000000);
			}
			func_125();
			if (func_23())
			{
				if (func_184())
				{
					func_141();
					while (!func_128())
					{
						SYSTEM::WAIT(0x00000000);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_279))
				{
					if (func_184())
					{
						iLocal_279 = func_143(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
						unk_0x71199B01895C6202(func_183());
						unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
					}
					else
					{
						iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
						unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
						unk_0x71199B01895C6202(joaat("rapidgt"));
						unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
					}
				}
			}
			else if (!unk_0xC844350D5D58C99A(iLocal_279))
			{
				iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
				unk_0x71199B01895C6202(joaat("rapidgt"));
				unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
				unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_278))
			{
				iLocal_278 = unk_0x122AAB0B1D6F55AD(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_278, 0x0000001B, 0x0000001B);
				unk_0x71199B01895C6202(joaat("cogcabrio"));
			}
			if (!unk_0xC844350D5D58C99A(iLocal_281))
			{
				iLocal_281 = unk_0x122AAB0B1D6F55AD(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 0x00000001, 0x00000001, 0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_272))
			{
				iLocal_272 = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 0x00000001, 0x00000001);
				unk_0x262EF6C6306BEA6C(iLocal_272, joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
				func_127(iLocal_272, 0x00000000);
				unk_0x71199B01895C6202(joaat("s_m_y_cop_01"));
			}
			if (!unk_0xC844350D5D58C99A(iLocal_294))
			{
				iLocal_294 = unk_0x7707E48765093646(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_294, 0f, 0f, -121.5948f, 0x00000002, 0x00000001);
				unk_0xC4C7FD0EF3FEAB0B(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x71199B01895C6202(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0xC844350D5D58C99A(iLocal_284))
			{
				iLocal_284 = unk_0x122AAB0B1D6F55AD(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x446EA2500F021666(iLocal_284, 0x00000002);
				unk_0x05EC10F460C3A4AF(iLocal_284, 0x00000000);
				unk_0x1E9649458B15960F(iLocal_284, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_284, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x71199B01895C6202(joaat("jet"));
				iLocal_672 = unk_0xC1879030EB463216("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x25BD67336EA4AECE(iLocal_284, 0x000001F4);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_266))
			{
				iLocal_266 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 0x00000001, 0x00000001);
				func_17(&uLocal_490, 0x00000004, iLocal_266, "HangerWorker", 0x00000000, 0x00000001);
				unk_0x71199B01895C6202(joaat("s_m_y_airworker"));
				unk_0x25C5402CC10F76CD(iLocal_266, 0x00000001);
				unk_0x11AD11297DC58CC7(iLocal_266, 0x00000001);
				unk_0xF3268524E9BE6D6E(iLocal_266, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_266, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_266, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x6DAD7906B73F064D(&iLocal_266);
			}
			if (func_124(0x00000000) == 0x00000000 || func_124(0x00000000) == joaat("weapon_unarmed"))
			{
				func_123(0x00000001);
			}
			break;
	}
}

void func_123(bool bParam0)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0xE939991717D9E39F(unk_0x16F2683693E537C9(), 0x00000000);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iVar0, bParam0);
		}
	}
}

int func_124(int iParam0)
{
	if (Global_181DD > 0x00000000)
	{
		return Global_19AE3.f_15[iParam0];
	}
	return Global_18F3B.f_15[iParam0];
}

void func_125()
{
	if (iLocal_337 == 0x00000000)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_286[0x00000000]))
		{
			iLocal_286[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 0x00000001, 0x00000001, 0x00000000);
			unk_0x626D5ADA3EFAE431(iLocal_286[0x00000000], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x00000000]))
		{
			iLocal_268[0x00000000] = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_268[0x00000000], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_268[0x00000000], 0x00000014);
			unk_0xE8832A9E16A57A1F(iLocal_268[0x00000000], 0x00000001, 0x00000001);
			unk_0x9BE7E7B6B488CC55(iLocal_268[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000001);
			func_127(iLocal_268[0x00000000], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_285))
		{
			iLocal_285 = unk_0x122AAB0B1D6F55AD(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xB9FD7450C0DAB575(iLocal_285, 0x40A00000);
			unk_0x71199B01895C6202(joaat("shamal"));
			unk_0xD458AC1C1D29C3B4(iLocal_285, 0x000007D0, 0x00000000);
			unk_0x611DFA9294B339CA(iLocal_285, 0x00000000, 0x00000000, 0x00000001);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x00000006]))
		{
			iLocal_268[0x00000006] = unk_0x852A19533F896693(iLocal_286[0x00000000], 0x00000006, joaat("s_m_y_cop_01"), 0x00000000, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_268[0x00000006], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_268[0x00000006], 0x00000014);
			unk_0xE8832A9E16A57A1F(iLocal_268[0x00000006], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_268[0x00000006], 0x00000001);
			func_127(iLocal_268[0x00000006], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x00000007]))
		{
			iLocal_268[0x00000007] = unk_0x852A19533F896693(iLocal_286[0x00000000], 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_268[0x00000007], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_268[0x00000007], 0x00000014);
			unk_0xE8832A9E16A57A1F(iLocal_268[0x00000007], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_268[0x00000007], 0x00000001);
			func_127(iLocal_268[0x00000007], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_286[0x00000001]))
		{
			iLocal_286[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 0x00000001, 0x00000001, 0x00000000);
			unk_0x626D5ADA3EFAE431(iLocal_286[0x00000001], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x00000008]))
		{
			iLocal_268[0x00000008] = unk_0x852A19533F896693(iLocal_286[0x00000001], 0x00000006, joaat("s_m_y_cop_01"), 0x00000000, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_268[0x00000008], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_268[0x00000008], 0x00000014);
			unk_0xE8832A9E16A57A1F(iLocal_268[0x00000008], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_268[0x00000008], 0x00000001);
			func_127(iLocal_268[0x00000008], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x00000009]))
		{
			iLocal_268[0x00000009] = unk_0x852A19533F896693(iLocal_286[0x00000001], 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_268[0x00000009], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_268[0x00000009], 0x00000014);
			unk_0xE8832A9E16A57A1F(iLocal_268[0x00000009], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_268[0x00000009], 0x00000001);
			func_127(iLocal_268[0x00000009], 0x00000000);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x0000000A]))
		{
			iLocal_268[0x0000000A] = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 0x00000001, 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_268[0x0000000A], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
			unk_0x298903DD96203C2C(iLocal_268[0x0000000A], 0x00000014);
			unk_0xE8832A9E16A57A1F(iLocal_268[0x0000000A], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_268[0x0000000A], 0x00000001);
			func_127(iLocal_268[0x0000000A], 0x00000000);
			unk_0xDB4B1656BA06B94E(iLocal_268[0x0000000A], 0x00000001);
		}
		iLocal_337 = 0x00000001;
	}
}

void func_126(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_78CE, iParam0);
	StringCopy(&(Global_78CF[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_7906[iParam0] = iParam1;
}

void func_127(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000040)
		{
			if (Global_F066[iVar0 /*2*/] != 0x00000000)
			{
				if (Global_F066[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (0x00000040 == Global_F065)
	{
		return;
	}
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar1 == 0xFFFFFFFF && iVar2 != 0x00000040)
	{
		if (Global_F066[iVar2 /*2*/] == 0x00000000)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == 0xFFFFFFFF)
	{
		return;
	}
	Global_F066[iVar1 /*2*/] = iParam0;
	Global_F066[iVar1 /*2*/].f_1 = 0x00000007;
	Global_F065++;
}

bool func_128()
{
	return func_129(&(Global_19AE3.f_B4A));
}

int func_129(var uParam0)
{
	if (func_130(uParam0))
	{
		if (unk_0xB87F6CF6E5628C67(uParam0->f_C.f_42))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_130(var uParam0)
{
	if (uParam0->f_C.f_42 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_132(uParam0->f_C.f_42, 0x00000000))
	{
		return 0x00000000;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_131(*uParam0, 1694.62f, 3276.27f, 41.31f, 0x3F000000, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_131(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0x00000000;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_140())
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0x00000000;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_139() && !func_138()) && !func_137()) && !func_136()) && !func_140())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_137())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_135(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_133(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_133(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_134())
	{
		return 0x00000001;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 0x00000004)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 0x00000001;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_134()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x4992196C)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAC33179C)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2AE524A8)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC575DF11)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x36B4A8A9)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0D4E5F4D)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x59A9E570)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7397224C)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x097E5533)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x19DD9ED1)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x96E24857)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD35698EF)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC5DD6967)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9A9EB7DE)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8983F9F)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E2E4F8A)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAD6065C0)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D56F01B)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3DC92356)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFE0A508C)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD707EDE)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x89BA59F5)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC3F25753)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA52F6866)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x52FF9437)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC4810400)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB5EF4C33)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6DBD6C0A)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7A2EF5E4)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x586765FB)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x34DBA661)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9B16A3B4)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD6BC7523)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAA6F980A)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x46699F47)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58CDAF30)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF34DFB25)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1AAD0DED)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D1903F9)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x91CA96EE)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x67D2B389)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x41D149AA)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F946279)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5097F589)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xED552C74)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8408F33A)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x23CA25F2)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE78CC3D9)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x33B98FE2)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4D99B7D)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x35DED0DD)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4A4E453)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x00E83C17)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x276D98A3)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3201DD49)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8A8BA94)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF8C2E0E7)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x71CBEA98)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6068AD86)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB472D2B5)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x378236E1)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E5BD8D9)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB4F32118)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42836BE5)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3D7C6410)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE99011C2)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC52C6B93)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC5DC07E)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8198AEDC)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF330CB6A)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC514AAE0)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4ABEBF23)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD4AE63D9)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x897AFC65)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x149BD32A)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73F4110E)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6290F15B)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1DD4C0FF)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79DD18AE)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD9F0503D)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64DE07A1)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7B54A9D3)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE6E967F8)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1324E960)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFCC2F483)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEDA4ED97)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x669EB40A)
	{
	}
	else if (iParam0 == 0xD039510B)
	{
	}
	else if (iParam0 == 0x287FA449)
	{
	}
	else if (iParam0 == 0x71D3B6F0)
	{
	}
	else if (iParam0 == 0x7F81A829)
	{
	}
	else if (iParam0 == 0x8F49AE28)
	{
	}
	else if (iParam0 == 0x798682A2)
	{
	}
	else if (iParam0 == 0xBBA2A2F7)
	{
	}
	else if (iParam0 == 0x5BEB3CE0)
	{
	}
	else if (iParam0 == 0xDD71BFEB)
	{
	}
	else if (iParam0 == 0x1A861243)
	{
	}
	else if (iParam0 == 0x619C1B82)
	{
	}
	else if (iParam0 == 0xD2F77E37)
	{
	}
	else if (iParam0 == 0x20314B42)
	{
	}
	else if (iParam0 == 0xBE11EFC6)
	{
	}
	else if (iParam0 == 0xA7DCC35C)
	{
	}
	else if (iParam0 == 0x83070B62)
	{
	}
	else if (iParam0 == 0x5EE005DA)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBA5334AC)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA29F78B0)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEC3E3404)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C3FFF49)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD128DFD)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56D42971)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE1C03AB0)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEEF345EC)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E3D1F59)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x28EAB80F)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC7E55211)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x92F5024E)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD757D97D)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2B0C4DCD)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6E8DA4F7)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F039A67)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCB642637)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEA6A047F)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x127E90D5)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x36A167E0)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9472CD24)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x734C5E50)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF966F3C)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF38C4245)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xECA6B6A3)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD86A0247)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4EE74355)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9F6ED5A2)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE550775B)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42ACA95F)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x18619B7E)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x97553C28)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79178F0A)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64F49967)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3ADB9758)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3404691C)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x185E2FF3)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2C1FEA99)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE44C4B9)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x11F58A5A)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3944D5A0)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C8DBA51)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x177DA45C)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73920F8E)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB53C6C52)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1446590A)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8B213907)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC7C0A00)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x04F48FC4)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56CDEE7D)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x817AFAAD)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x82E47E85)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7F3415E3)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0409D787)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4201A843)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC98BBAD6)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xDA5EC7DA)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE0B9F22)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x94114926)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF0B8D48)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58F77553)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4669D038)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x98F65A5E)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x665F785D)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6B73A9BE)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_136()
{
	return 0x00000000;
}

int func_137()
{
	return 0x00000001;
}

int func_138()
{
	return 0x00000001;
}

int func_139()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_140()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_141()
{
	func_142(&(Global_19AE3.f_B4A));
}

void func_142(var uParam0)
{
	if (func_130(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_C.f_42);
	}
}

int func_143(vector3 vParam0, float fParam1)
{
	return func_144(&(Global_19AE3.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_144(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_130(uParam0))
	{
		if (func_71(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_42 == joaat("monster") || uParam0->f_C.f_42 == joaat("marshall"))
		{
			if (unk_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0x00000000, 0x00000001))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_129(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_182(vParam1, 5f, 0x00000000);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_C.f_42, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0x00000000, 0x00000000, 0x00000001);
				}
				func_165(iVar0, &(uParam0->f_C), 0x00000000, 0x00000001);
				bVar2 = 0x00000001;
				if (unk_0xA7082C42B8809BF2(uParam0->f_C.f_42) || unk_0x83496B932152D4D4(uParam0->f_C.f_42))
				{
					if (!unk_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = 0x00000000;
					}
				}
				if (bVar2)
				{
					unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
				}
				if (uParam0->f_7 == 0x00000001)
				{
					if (bParam3)
					{
						if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_164(uParam0->f_B, 0x00000001);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_164(uParam0->f_B, 0x00000002);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0x00000000);
					unk_0x626D5ADA3EFAE431(iVar0, 0x00000000);
					unk_0x44A200C9B6E1CEA6(iVar0, 0x00000001);
					func_163(iVar0, uParam0->f_B);
				}
				else if ((!func_161(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_160(iVar0);
					if (iVar4 == 0xFFFFFFFF)
					{
						uParam0->f_A = 0x00000000;
					}
					else
					{
						func_155(iVar4);
					}
				}
				if (((Global_181B8 != 0x0000000D && Global_181B8 != 0x0000000A) && Global_181B8 != 0x0000000B) && Global_181B8 != 0x0000000C)
				{
					if (unk_0x12AB0310C2281427(&(Global_181B8.f_3)) == Global_12A8D)
					{
						if (uParam0->f_C.f_42 == Global_1B416.f_7FE8.f_45[0x00000015 /*78*/].f_42)
						{
							func_152(0x00000018, 0x00000000);
							func_155(0x00000018);
						}
					}
				}
				if (uParam0->f_9 == 0x00000001)
				{
					func_145(iVar0, uParam0->f_B);
				}
				unk_0x71199B01895C6202(uParam0->f_C.f_42);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_146(iParam0))
	{
		return;
	}
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, 0xFFFFFFFF);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_one"))
			{
				iParam1 = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_two"))
			{
				iParam1 = 0x00000002;
			}
		}
		if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
		{
			iParam1 = Global_1B416.f_936.f_21B.f_10E1;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000002)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0x00000000;
						Global_1B416.f_7FE8.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42 = 0x00000000;
				}
			}
		}
		iVar1++;
	}
	Global_1B416.f_7FE8.f_15D6 = iParam1;
	Global_12A3A = iParam0;
	Global_1B416.f_7FE8.f_15D4 = 0x00000001;
	func_39(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_146(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_45(iParam0, 0x00000000, 0x00000000)) || func_45(iParam0, 0x00000001, 0x00000000)) || func_45(iParam0, 0x00000002, 0x00000000)) || func_34(iParam0) != 0x00000091) || func_151(iParam0)) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || !func_147(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_150(iParam0))
		{
		}
		if (func_150(iParam0))
		{
		}
		if (func_45(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_45(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_45(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_34(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_147(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_132(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 0x73920F8E:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_148(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_132(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Global_17769[iVar0]))
		{
			if (Global_17769[iVar0] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar0], 0x00000000))
			{
				if (Global_1774B[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000018]))
	{
		if (iParam0 == Global_126B1.f_1E4[0x00000018])
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 0x00000018 && iVar0 != 0x00000015) && iVar0 != 0x00000016) && iVar0 != 0x00000017) && iVar0 != 0x0000001B) && iVar0 != 0x0000001E) && iVar0 != 0x00000021) && iVar0 != 0x0000001C) && iVar0 != 0x0000001F) && iVar0 != 0x00000022) && iVar0 != 0x0000001A) && iVar0 != 0x0000001D) && iVar0 != 0x00000020)
			{
				if (iParam0 == Global_126B1.f_1E4[iVar0])
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_152(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_154(iParam0, 0x00000000))
		{
			func_153(iParam0, 0x00000001, 0x00000000);
			func_153(iParam0, 0x00000002, 0x00000000);
			func_153(iParam0, 0x00000003, 0x00000000);
			func_153(iParam0, 0x00000004, 0x00000000);
			func_153(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_153(iParam0, 0x00000000, 0x00000000);
	}
}

void func_153(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
}

bool func_154(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_155(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_159(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			bVar0 = 0x00000001;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_8B[iParam0], 0x00000000))
					{
						bVar0 = 0x00000000;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
				unk_0xA954465BA6FDEFE2(&(Global_126B1.f_8B[iParam0]));
			}
		}
		Global_126B1[iParam0] = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			if (((((iParam0 == 0x00000018 && func_154(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_157(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_157(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_156(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_152(iParam0, 0x00000000);
		}
	}
}

void func_156(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iParam0 < 0x00000000 || iParam0 >= func_158(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_132(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_158(var uParam0)
{
	return *uParam0;
}

int func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0x00000000;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000091;
	uParam0->f_D = 0xFFFFFFFF;
	uParam0->f_E = 0x00000000;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000000:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_36(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000B:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000C:
			uParam0->f_E = 0x00000000;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_E = 0x00000001;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			uParam0->f_E = 0x00000002;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			uParam0->f_E = 0x00000003;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			uParam0->f_E = 0x00000004;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			uParam0->f_E = 0x00000005;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			uParam0->f_E = 0x00000006;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			uParam0->f_E = 0x00000007;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			uParam0->f_E = 0x00000008;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000168;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			uParam0->f_E = 0x00000009;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			uParam0->f_E = 0x0000000A;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			uParam0->f_E = 0x0000000B;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
			iVar1 = (iParam1 - 0x0000001A);
			uParam0->f_E = (0x0000000C + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
			iVar1 = (iParam1 - 0x0000001D);
			uParam0->f_E = (0x0000000F + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
			iVar1 = (iParam1 - 0x00000020);
			uParam0->f_E = (0x00000012 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			uParam0->f_E = 0x00000015;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			uParam0->f_E = 0x00000016;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 0x0000007E;
			uParam0->f_B = 0x0000007E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 0x0000009D;
			uParam0->f_B = 0x0000009D;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 0x73920F8E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000037:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000038:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000039:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 0x00000194;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_140())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_140())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x0000000A))
	{
		uParam0->f_4 = Global_1B416.f_7FE8.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 0x0000000E)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_71(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_1B416.f_7FE8.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_1B416.f_7FE8.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000013))
	{
		if (!func_71(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_71(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]) && !unk_0x437347B10A200C4B(Global_126B1.f_1E4[iVar0], 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[iVar0], 0x00000000))
		{
			unk_0x9412F17E127D9759(iParam0, &iVar1, &iVar2);
			unk_0x9412F17E127D9759(Global_126B1.f_1E4[iVar0], &iVar3, &iVar4);
			if (((unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[iVar0]) && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_161(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_162(iParam0, Global_126B1.f_8B[0x00000026], 0x00000000))
			{
				func_155(0x00000026);
				return 0x00000001;
			}
			break;
		
		case 0x73920F8E:
			if (func_162(iParam0, Global_126B1.f_8B[0x0000002B], 0x00000001))
			{
				func_155(0x0000002B);
				return 0x00000001;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0x00000000;
			while (iVar3 <= (iVar2 - 0x00000001))
			{
				if (func_162(iParam0, uVar1[iVar3], 0x00000001) && func_131(unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 2136.133f, 4780.563f, 39.9702f, 5f, 0x00000000))
				{
					if ((!bParam2 || func_71(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
					{
						unk_0xA954465BA6FDEFE2(&iParam0);
						return 0x00000001;
					}
					else
					{
						return 0x00000000;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x0000000E]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x0000000E], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x0000000E]) == joaat("luxor2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x0000000E]))
				{
					func_155(0x0000000E);
					return 0x00000001;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x00000014]))
				{
					func_155(0x00000014);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000)) && unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		if (bParam2)
		{
			unk_0x9412F17E127D9759(iParam0, &iVar0, &iVar1);
			unk_0x9412F17E127D9759(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (!unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			Global_1774B[iVar0] = iParam0;
			Global_17755[iVar0] = iParam1;
			Global_1775F[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_1775F[iVar0]))
			{
				Global_1777B[iParam1 /*3*/][0x00000000] = 0xFFFFFFFF;
			}
			else
			{
				Global_1777B[iParam1 /*3*/][0x00000001] = 0xFFFFFFFF;
			}
			iVar0 = 0x00000009;
		}
		if (iVar0 == 0x00000008)
		{
		}
		iVar0++;
	}
}

void func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (iParam0 == 0x00000091 || Global_17755[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000000 || unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1774B[iVar0], 0x00000000))
					{
						unk_0x73270B3C9CC833FD(Global_1774B[iVar0], 0x00000000, 0x00000001);
						unk_0xA954465BA6FDEFE2(&(Global_1774B[iVar0]));
						Global_17755[iVar0] = 0x00000091;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_165(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_174(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0x00000000)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0x00000000 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 0x0000006F;
			uParam1->f_6 = 0x0000006F;
			uParam1->f_7 = 0x0000006F;
		}
		else if (uParam1->f_42 == joaat("casco"))
		{
			iVar0 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_40(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_40(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_42 == 0x4669D038)
		{
			iVar4 = 0x00000001;
			while (iVar4 <= 0x0000000B)
			{
				if (iVar4 != 0x00000009 && iVar4 != 0x0000000A)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_40(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_42 == 0x98F65A5E)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) != 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000000);
			}
		}
		if (uParam1->f_42 == 0x19DD9ED1)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000000);
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000005) != 0xFFFFFFFF)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000001);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000D))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000C))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != 0xFFFFFFFF && uParam1->f_6 != 0xFFFFFFFF)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0x00000000)
		{
			uParam1->f_7 = 0x00000000;
		}
		if (uParam1->f_8 < 0x00000000)
		{
			uParam1->f_8 = 0x00000000;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_173(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_172())
		{
			uParam1->f_3E = 0x00000000;
			uParam1->f_3F = 0x00000000;
			uParam1->f_40 = 0x00000000;
		}
		else if ((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000)
		{
			uParam1->f_3E = 0x000000FF;
			uParam1->f_3F = 0x000000FF;
			uParam1->f_40 = 0x000000FF;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == 0xFFFFFFFF && !func_42(uParam1->f_42))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_41);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000009));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_46);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		unk_0x7726E33AC3B60544(iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001C));
		unk_0x7726E33AC3B60544(iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001D));
		unk_0x7726E33AC3B60544(iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001E));
		unk_0x7726E33AC3B60544(iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001F));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000A));
		if (unk_0x579935D850368851(iParam0) > 0x00000001 && uParam1->f_43 >= 0x00000000)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > 0xFFFFFFFF && uParam1->f_45 < 0x000000FF)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_45 == 0x00000006)
					{
						func_171(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_171(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			if ((uParam1->f_44 == 0x00000000 || uParam1->f_44 == 0x00000003) || uParam1->f_44 == 0x00000005)
			{
				unk_0x429C172A00A5F89B(iParam0, 0x00000001);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 0x00000001);
			}
		}
		if (bParam3)
		{
			func_166(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_40(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000000);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000001);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == joaat("sheava") || unk_0x134B62B726CEC8E6(iParam0) == joaat("omnis")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("le7b"))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000000) == 0xFFFFFFFF)
			{
				unk_0xD3421E391490133B(iParam0, 0x00000001, 0x00000000);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_42) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, 0x81BD2ED0)) && !((((Global_440000.f_127B9 == 0x00000006 || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000012) || Global_440000.f_127B9 == 0x00000013) && Global_440000.f_2 == 0x00000014))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000017))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000016))
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000002);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000003);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 0x00000004);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001B))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000001);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000000);
		}
	}
}

int func_166(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	unk_0xF95FF0A179413A39(*iParam0, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0x00000000);
		}
		else if (iVar1 == 0x00000016)
		{
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000001);
				if ((*uParam1)[iVar0] == 0x00000001)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 0x000000FF);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 0x00000002));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000000);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 0x00000001))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				if (iVar0 == 0x00000017)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000000] > 0x00000000);
				}
				else if (iVar0 == 0x00000018)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000001] > 0x00000000);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (func_170(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_169(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_169(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_168(iParam0);
	if (func_167(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000031)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015) || iVar1 == 0x00000016)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != 0xFFFFFFFF)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0x00000000)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 0x00000001;
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_168(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case 0x9A9EB7DE:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 0x00000004) == 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 0x0000000D, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 0x0000000D);
			}
			break;
	}
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0x00000000:
						return 0x00000000;
						break;
					
					case 0x00000001:
						return 0x00000001;
						break;
					
					case 0x00000002:
						return 0x00000002;
						break;
					
					case 0x00000003:
						return 0x00000003;
						break;
					
					case 0x00000004:
						return 0x00000004;
						break;
					
					case 0x00000005:
						return 0x00000004;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 0x00000003;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 0x00000026);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 0x00000018);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 0x00000001);
		if (iVar3 < 0x00000000)
		{
			iVar3 = 0x00000000;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 0x00000001);
		}
		return iVar3;
	}
	return 0x00000000;
}

int func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0x00000001;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x50D4D19F:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8D4B7A8A:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8526E2F5:
		case 0x163F8520:
		case 0x67D52852:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x256E92BA:
		case 0x5BA0FF1E:
		case 0x49E25BA1:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x3C26BD0C:
		case 0x8D45DF49:
		case 0x9804F4C7:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xFE5F0722:
		case 0x93F09558:
		case 0xAE12C99C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xD6FB0F30:
		case 0xAE0A3D4F:
		case 0xB2E046FB:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x27D79225:
		case 0x9B065C9E:
		case 0x8644331A:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x6B73A9BE:
		case 0x817AFAAD:
		case 0x0409D787:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x665F785D:
		case 0x4201A843:
		case 0xC98BBAD6:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 0x00000018);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 0x00000018);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("tornado6") || unk_0x134B62B726CEC8E6(iParam0) == 0x9472CD24)
		{
			return;
		}
		if (iVar0 == 0xFFFFFFFF)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 0x00000018);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 0x00000018, iVar0, iVar1 == 0x00000001);
		}
	}
}

bool func_172()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004);
			}
		}
	}
	return 0x00000000;
}

int func_174(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_180(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_176(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_175(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_175(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return 0xFFFFFFFF;
}

int func_176(int iParam0)
{
	if (func_179(iParam0) == 0x000000E9)
	{
		return func_177(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_177(int iParam0)
{
	if (func_178(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_178(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_179(int iParam0)
{
	if (func_178(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_181(iParam0, 0x00000001, 0x00000001))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_181(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_182(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_159(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_155(iVar0);
			}
		}
		iVar0++;
	}
}

var func_183()
{
	return Global_19AE3.f_B4A.f_C.f_42;
}

bool func_184()
{
	return func_130(&(Global_19AE3.f_B4A));
}

void func_185()
{
	iLocal_305 = unk_0xB01F55A0FD1CFD49("BREAKING_NEWS");
	unk_0x523BCC9DC80CD82F(joaat("jet"));
	unk_0x523BCC9DC80CD82F(joaat("police3"));
	unk_0x523BCC9DC80CD82F(joaat("maverick"));
	unk_0x523BCC9DC80CD82F(joaat("bison"));
	unk_0x523BCC9DC80CD82F(joaat("blista"));
	unk_0x523BCC9DC80CD82F(joaat("ig_molly"));
	unk_0x523BCC9DC80CD82F(joaat("cogcabrio"));
	unk_0x523BCC9DC80CD82F(joaat("rapidgt"));
	unk_0x36187931D29E5BBE(0x0000002D, "BB_Chase");
	unk_0x36187931D29E5BBE(0x00000023, "BB_Chase");
	unk_0x36187931D29E5BBE(0x00000002, "BB_Chase");
	unk_0x36187931D29E5BBE(0x00000036, "BB_Chase");
	unk_0x36187931D29E5BBE(0x00000037, "BB_Chase");
	unk_0x36187931D29E5BBE(0x00000043, "BB_Chase");
	func_187(0x00000001, "BB_Chase");
	if (func_23())
	{
		if (func_184())
		{
			if (!unk_0xAFB8495D36825275(func_183()) && !unk_0xC41A9202669A24C4(func_183()))
			{
				func_141();
				while (!func_128())
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
	}
	while (((((((!unk_0xB87F6CF6E5628C67(joaat("jet")) || !unk_0xB87F6CF6E5628C67(joaat("police3"))) || !unk_0xB87F6CF6E5628C67(joaat("maverick"))) || !unk_0xB87F6CF6E5628C67(joaat("bison"))) || !unk_0xB87F6CF6E5628C67(joaat("blista"))) || !unk_0xB87F6CF6E5628C67(joaat("ig_molly"))) || !unk_0xB87F6CF6E5628C67(joaat("cogcabrio"))) || !unk_0xB87F6CF6E5628C67(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (!unk_0x83D8570832F172A7(iLocal_305) || !func_186(0x00000001, "BB_Chase"))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (((((!unk_0x3DDA6C6A285628E4(0x0000002D, "BB_Chase") || !unk_0x3DDA6C6A285628E4(0x00000023, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000002, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000036, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000037, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000043, "BB_Chase"))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

bool func_186(int iParam0, char* sParam1)
{
	return unk_0x3DDA6C6A285628E4(iParam0, sParam1);
}

void func_187(int iParam0, char* sParam1)
{
	unk_0x36187931D29E5BBE(iParam0, sParam1);
}

void func_188()
{
	func_214();
	func_212();
	unk_0x790015DC92C918E2();
	unk_0xB975E4541DDAB1F5(0x00000000);
	unk_0x5C2EBB66AD2EA5FF(0x00000000);
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	if (unk_0x76395FF5E8D5E643(iLocal_262))
	{
		unk_0xA4A8625CC710BC1F(iLocal_262);
	}
	if (unk_0x49083FDB78AC0509(iLocal_263))
	{
		unk_0xDDABC98CFF1A4C60(iLocal_263);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1019.579f, -484.872f, 36.0795f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 93.7701f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_279))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_279, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_279))
			{
				unk_0xC55F2A0377488064(iLocal_279);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_278))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
		{
			unk_0x06FF977AA95DCCE3(iLocal_278, 0x00000000);
			if (unk_0x20D6474D5F4B9FC6(iLocal_278))
			{
				unk_0xC55F2A0377488064(iLocal_278);
			}
		}
	}
	if (unk_0x83A8177D302E1A7E(iLocal_668))
	{
		unk_0xF7E25143642732EA(iLocal_668, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_669))
	{
		unk_0xF7E25143642732EA(iLocal_669, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_670))
	{
		unk_0xF7E25143642732EA(iLocal_670, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_671))
	{
		unk_0xF7E25143642732EA(iLocal_671, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_672))
	{
		unk_0xF7E25143642732EA(iLocal_672, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_667[0x00000000]))
	{
		unk_0xF7E25143642732EA(iLocal_667[0x00000000], 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_667[0x00000001]))
	{
		unk_0xF7E25143642732EA(iLocal_667[0x00000001], 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_667[0x00000002]))
	{
		unk_0xF7E25143642732EA(iLocal_667[0x00000002], 0x00000000);
	}
	unk_0x29D7581AEF4440C2();
	if (unk_0xC844350D5D58C99A(iLocal_264))
	{
		unk_0xEBA53F35D0085654(&iLocal_264);
	}
	if (unk_0xC844350D5D58C99A(iLocal_266))
	{
		unk_0xEBA53F35D0085654(&iLocal_266);
	}
	if (unk_0xC844350D5D58C99A(iLocal_269))
	{
		unk_0xEBA53F35D0085654(&iLocal_269);
	}
	if (unk_0xC844350D5D58C99A(iLocal_270))
	{
		unk_0xEBA53F35D0085654(&iLocal_270);
	}
	if (unk_0xC844350D5D58C99A(iLocal_271))
	{
		unk_0xEBA53F35D0085654(&iLocal_271);
	}
	if (unk_0xC844350D5D58C99A(iLocal_272))
	{
		unk_0xEBA53F35D0085654(&iLocal_272);
	}
	if (unk_0xC844350D5D58C99A(iLocal_273))
	{
		unk_0xEBA53F35D0085654(&iLocal_273);
	}
	if (unk_0xC844350D5D58C99A(iLocal_274))
	{
		unk_0xEBA53F35D0085654(&iLocal_274);
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000000]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_265[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000001]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_265[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000002]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_265[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000003]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_265[0x00000003]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_267[0x00000000]))
	{
		unk_0xEBA53F35D0085654(&(uLocal_267[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_267[0x00000001]))
	{
		unk_0xEBA53F35D0085654(&(uLocal_267[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_267[0x00000002]))
	{
		unk_0xEBA53F35D0085654(&(uLocal_267[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000000]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000001]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000002]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000003]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000003]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000004]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000004]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000005]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000005]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000006]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000006]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000007]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000007]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000008]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000008]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000009]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x00000009]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x0000000A]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_268[0x0000000A]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_275[0x00000000]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_275[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_276[0x00000000]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_276[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_276[0x00000001]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_276[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_278))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_278);
	}
	if (unk_0xC844350D5D58C99A(iLocal_279))
	{
		if (!unk_0xAF6690C489CC6203(iLocal_279))
		{
			unk_0x73270B3C9CC833FD(iLocal_279, 0x00000001, 0x00000000);
		}
		unk_0xA954465BA6FDEFE2(&iLocal_279);
	}
	if (unk_0xC844350D5D58C99A(iLocal_282))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_282);
	}
	if (unk_0xC844350D5D58C99A(iLocal_283))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_283);
	}
	if (unk_0xC844350D5D58C99A(iLocal_284))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_284);
	}
	if (unk_0xC844350D5D58C99A(iLocal_285))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_285);
	}
	if (unk_0xC844350D5D58C99A(iLocal_287))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_287);
	}
	if (unk_0xC844350D5D58C99A(iLocal_289))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_289);
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_293[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000001]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_293[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_280[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_280[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_280[0x00000001]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_280[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_293[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000001]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_293[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_286[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_286[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_286[0x00000001]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_286[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_288[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_288[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_281))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_281);
	}
	if (unk_0xC844350D5D58C99A(iLocal_294))
	{
		unk_0xF690C84DADBB3551(&iLocal_294);
	}
	if (unk_0xC844350D5D58C99A(iLocal_295))
	{
		unk_0xF690C84DADBB3551(&iLocal_295);
	}
	if (unk_0xC844350D5D58C99A(iLocal_296))
	{
		unk_0xF690C84DADBB3551(&iLocal_296);
	}
	unk_0x8C26F31DFF77D124();
	if (unk_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_MAIN_CHASE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_HELI_TAKEOFF"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0x8910D3D58E0132B8("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x55D0A2DB35045A35(iLocal_253);
	unk_0x55D0A2DB35045A35(iLocal_255);
	unk_0x55D0A2DB35045A35(iLocal_256);
	unk_0x55D0A2DB35045A35(iLocal_257);
	unk_0x55D0A2DB35045A35(iLocal_258);
	unk_0x55D0A2DB35045A35(iLocal_259);
	unk_0x55D0A2DB35045A35(iLocal_260);
	unk_0x55D0A2DB35045A35(iLocal_261);
	unk_0x55D0A2DB35045A35(iLocal_254);
	func_210(&uLocal_28, 0x00000000, 0x00000000);
	if (unk_0x9F4FE516EAACCFC5(iLocal_301))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_301, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_302))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_302, 0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_303))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_303, 0x00000000);
	}
	func_189(0x00000001, 0x00000001);
	unk_0x8D17794CE3273D70("misssolomon_3");
	unk_0x8D17794CE3273D70("amb@world_human_clipboard@male@base");
	unk_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
	unk_0xDB8844D4B7C60440(0x00000001, "BB_CHASE");
	unk_0xDB8844D4B7C60440(0x00000002, "BB_Chase");
	unk_0xDB8844D4B7C60440(0x00000009, "BB_CHASE");
	unk_0xDB8844D4B7C60440(0x00000023, "BB_Chase");
	unk_0xDB8844D4B7C60440(0x0000002D, "BB_Chase");
	unk_0xDB8844D4B7C60440(0x00000036, "BB_Chase");
	unk_0xDB8844D4B7C60440(0x00000037, "BB_Chase");
	unk_0xDB8844D4B7C60440(0x0000003D, "BB_CHASE");
	unk_0xDB8844D4B7C60440(0x0000003F, "BB_CHASE");
	unk_0xDB8844D4B7C60440(0x00000040, "BB_CHASE");
	unk_0xDB8844D4B7C60440(0x00000043, "BB_Chase");
	unk_0xDB8844D4B7C60440(0x00000044, "BB_CHASE");
	unk_0xDB8844D4B7C60440(0x00000045, "BB_Chase");
	unk_0xE17FDF9E3068281B(&iLocal_305);
	unk_0xF5A41F3D3B38EFE3("digitalOverlay");
}

void func_189(bool bParam0, bool bParam1)
{
	if (!unk_0xEA6BC48857E0AC4C(&cLocal_185))
	{
		iLocal_91 = 0x00000000;
		func_209();
		unk_0x51732B934211201A(iLocal_194);
		unk_0xF5894FEB702E7E76(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x85089606511D395B(unk_0xD803B885F5E47A62(), 1f);
			unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
			unk_0x060F249A9A3E3F4E(0x00000001);
		}
		if (bLocal_107)
		{
			unk_0x71199B01895C6202(func_208());
		}
		unk_0x71199B01895C6202(func_207());
		unk_0x71199B01895C6202(func_206());
		unk_0x71199B01895C6202(func_205());
		if (!unk_0x757EF87A33649210() && !bParam0)
		{
			func_204();
			func_203();
			func_200();
		}
		else
		{
			func_196();
			func_195();
		}
		if (bParam1)
		{
			func_190(0x00000000);
		}
	}
}

void func_190(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_191(iVar0, bParam0);
		iVar0++;
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 0x00000002, 0x00000001))
		{
			func_194(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_74(iParam0, 0x00000002, 0x00000001))
	{
		func_192(iParam0, 0x00000002, 0x00000001);
	}
}

void func_192(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_76() == 0x00000000)
		{
			iVar0 = func_51(func_75(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_193(func_75(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_52(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_194(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_76() == 0x00000000)
		{
			iVar0 = func_51(func_75(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_193(func_75(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_195()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000AF)
	{
		iLocal_201[iVar0] = 0x00000000;
		vLocal_173[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_149[iVar0] = 0x00000000;
		fLocal_113[iVar0] = 0f;
		iLocal_150[iVar0] = 0x00000000;
		iLocal_195[iVar0] = 0x00000000;
		iLocal_151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		iLocal_202[iVar0] = 0x00000000;
		iVar0++;
	}
	iLocal_156 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		iLocal_203[iVar0] = 0x00000000;
		vLocal_174[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_155[iVar0] = 0x00000000;
		iLocal_196[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		iLocal_205[iVar0] = 0x00000000;
		iVar0++;
	}
	iLocal_158 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		iLocal_204[iVar0] = 0x00000000;
		vLocal_175[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_118[iVar0] = 0f;
		fLocal_119[iVar0] = 0f;
		fLocal_120[iVar0] = 0f;
		fLocal_121[iVar0] = 0f;
		iLocal_152[iVar0] = 0x00000000;
		fLocal_122[iVar0] = 0f;
		iLocal_153[iVar0] = 0x00000000;
		iLocal_197[iVar0] = 0x00000000;
		iLocal_154[iVar0] = 0x00000000;
		iVar0++;
	}
	iLocal_157 = 0x00000000;
	iLocal_160 = 0x00000000;
	iLocal_163 = 0x00000000;
	iLocal_164 = 0x00000000;
	iLocal_165 = 0x00000000;
}

void func_196()
{
	func_199();
	func_198();
	func_197();
}

void func_197()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_204[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_204[iVar0]);
				}
				iVar1 = unk_0xA30B8362589C124A(iLocal_204[iVar0], 0xFFFFFFFF, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						unk_0xEBA53F35D0085654(&iVar1);
					}
				}
			}
			if (unk_0xAF6690C489CC6203(iLocal_204[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_204[iVar0]));
			}
		}
		iLocal_153[iVar0] = 0x00000000;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0x00000000)
			{
				unk_0xDB8844D4B7C60440(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (!iLocal_197[iVar0] == 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_197[iVar0]);
		}
		iVar0++;
	}
}

void func_198()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xC844350D5D58C99A(iLocal_203[iVar0]))
		{
			if (unk_0xAF6690C489CC6203(iLocal_203[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_203[iVar0]));
			}
		}
		iLocal_155[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (!iLocal_196[iVar0] == 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0x00000000;
	iLocal_158 = 0x00000000;
}

void func_199()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000AF)
	{
		if (unk_0xC844350D5D58C99A(iLocal_201[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_201[iVar0], 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_201[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_201[iVar0]);
				}
				iVar1 = unk_0xA30B8362589C124A(iLocal_201[iVar0], 0xFFFFFFFF, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						unk_0xEBA53F35D0085654(&iVar1);
					}
				}
			}
			if (unk_0xAF6690C489CC6203(iLocal_201[iVar0]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_201[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0x00000000)
			{
				unk_0xDB8844D4B7C60440(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iLocal_150[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000AF)
	{
		if (!iLocal_195[iVar0] == 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0x00000000;
	iLocal_156 = 0x00000000;
}

void func_200()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[iVar0]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_204[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_204[iVar0]);
				}
			}
			func_202(iLocal_204[iVar0]);
			func_201(iLocal_204[iVar0]);
		}
		iLocal_153[iVar0] = 0x00000000;
		iLocal_154[iVar0] = 0x00000000;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_152[iVar0] > 0x00000000)
			{
				unk_0xDB8844D4B7C60440(iLocal_152[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		if (!iLocal_197[iVar0] == 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_197[iVar0]);
		}
		iVar0++;
	}
	iLocal_162 = 0x00000000;
}

void func_201(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x046C362CF15F1935(&iParam0);
	}
}

void func_202(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar1 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (!iVar1 == unk_0x16F2683693E537C9())
			{
				fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x60274E99F9B27DEA(iVar1, iParam0, 0x00000000, 0x00000001, fVar0, 0x000C00AB, 5f, 5f, 0x00000001);
				unk_0xBAFED2F6486F771A(iVar1, 0x00002000, 0x00000001);
				if (bLocal_108)
				{
					unk_0xBAFED2F6486F771A(iVar1, 0x00010000, 0x00000001);
					unk_0xBAFED2F6486F771A(iVar1, 0x00000002, 0x00000000);
				}
				unk_0xAFF39FB306F8E232(iVar1, 0x00000006, 0x00000000);
			}
		}
	}
}

void func_203()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xC844350D5D58C99A(iLocal_203[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_203[iVar0], 0x00000000))
			{
				unk_0x20641932E5104B25(iLocal_203[iVar0], 0x00000001, 0x00000000);
			}
			func_201(iLocal_203[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (!iLocal_196[iVar0] == 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_196[iVar0]);
		}
		iVar0++;
	}
	iLocal_161 = 0x00000000;
	iLocal_158 = 0x00000000;
}

void func_204()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000AF)
	{
		if (unk_0xC844350D5D58C99A(iLocal_201[iVar0]))
		{
			if (!unk_0x437347B10A200C4B(iLocal_201[iVar0], 0x00000000))
			{
				unk_0x20641932E5104B25(iLocal_201[iVar0], 0x00000001, 0x00000000);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_201[iVar0], 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_201[iVar0]))
				{
					unk_0xC55F2A0377488064(iLocal_201[iVar0]);
				}
			}
			func_202(iLocal_201[iVar0]);
			func_201(iLocal_201[iVar0]);
		}
		iLocal_150[iVar0] = 0x00000000;
		iLocal_151[iVar0] = 0x00000000;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_149[iVar0] > 0x00000000)
			{
				unk_0xDB8844D4B7C60440(iLocal_149[iVar0], &cLocal_185);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x000000AF)
	{
		if (!iLocal_195[iVar0] == 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_195[iVar0]);
		}
		iVar0++;
	}
	iLocal_160 = 0x00000000;
	iLocal_156 = 0x00000000;
}

int func_205()
{
	return joaat("s_m_y_cop_01");
}

int func_206()
{
	return joaat("police");
}

int func_207()
{
	return joaat("sultan");
}

int func_208()
{
	if (iLocal_198 == 0x00000000)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_198;
}

void func_209()
{
	unk_0xCE7D0828D683D536();
	unk_0xEF7906595D9044B8(0xFFFFFFFF);
	unk_0xD980FF3526C8CB9E(0x00000001);
	unk_0xE9B51BC60A3B47D9(0x00000001);
	unk_0xD60411959D5D930B(1f);
	unk_0xC83E7A5E408DF68C(0x00000003);
	unk_0xFF42993F8A095C58(0x00000003);
}

void func_210(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	uParam0->f_1 = 0x00000000;
	*uParam0 = 0x00000000;
	uParam0->f_2 = 0xFFFFFFFF;
	uParam0->f_8 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_211(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_211(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_211(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_212()
{
	Global_4CD7 = 0x00000000;
	func_213();
}

void func_213()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_214()
{
	Global_4CD7 = 0x00000000;
	func_215();
}

void func_215()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 0x00000009) || Global_4C1D == 0x00000001)
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
		Global_4C1E.f_1 = 0x00000003;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_216()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_297))
	{
		unk_0x142CC44DB769B57E(&iLocal_297);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_298))
	{
		unk_0x142CC44DB769B57E(&iLocal_298);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_299))
	{
		unk_0x142CC44DB769B57E(&iLocal_299);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_300))
	{
		unk_0x142CC44DB769B57E(&iLocal_300);
	}
}

void func_217()
{
	if (iLocal_486 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_266))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_266, unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_486 = 0x00000001;
				}
			}
		}
	}
	if (iLocal_486 == 0x00000000)
	{
		if (iLocal_456 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_266))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
				{
					if (unk_0xC844350D5D58C99A(iLocal_264))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
						{
							if (unk_0xB72E131222E66495(iLocal_264))
							{
								if (unk_0x4E496981D6BC4CA4(iLocal_264) > 0x00000012)
								{
									if (unk_0xC844350D5D58C99A(iLocal_296))
									{
										if (unk_0xD59B17D2DFF98E26(iLocal_296))
										{
											unk_0x15AFB6CBDE990FB6(iLocal_296, 0x00000001, 0x00000001);
										}
									}
									iLocal_252 = unk_0xE9744DB7B8CA6965(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 0x00000002);
									unk_0x915804B434753CBD(iLocal_266, iLocal_252, "misssolomon_3", "_action", 1000f, -1000f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
									unk_0x0C8C0C840C2D1AD2(iLocal_266, unk_0x16F2683693E537C9(), 0x00002328, 0x00000400, 0x00000003);
									iLocal_456 = 0x00000001;
									iLocal_457 = 0x00000000;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_456 == 0x00000001 && iLocal_458 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_266))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
				{
					if (unk_0x69DF961355195C3C(iLocal_252))
					{
						if (!iLocal_457)
						{
							if (unk_0xA45992A6CE82FB43(iLocal_252) > 0.25f)
							{
								func_17(&uLocal_490, 0x00000004, iLocal_266, "HangerWorker", 0x00000000, 0x00000001);
								func_218(iLocal_266, "T1M4_BCAA", "HangerWorker", 0x0000000B);
								iLocal_457 = 0x00000001;
							}
						}
						if (unk_0xA45992A6CE82FB43(iLocal_252) > 0.99f)
						{
							iLocal_252 = unk_0xE9744DB7B8CA6965(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 0x00000002);
							unk_0x915804B434753CBD(iLocal_266, iLocal_252, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 0x00000003, 0x00000010, 0x447A0000, 0x00000000);
							iLocal_458 = 0x00000001;
						}
					}
				}
			}
		}
		if (iLocal_458 == 0x00000001 && iLocal_461 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_266))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
				{
					if (unk_0x69DF961355195C3C(iLocal_252))
					{
						if (unk_0xDDCA9A4E51DADA2B(iLocal_266, unk_0x12AB0310C2281427("ENDS_IN_RUN")))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_304);
							unk_0x818303F509839F80(0x00000000, 0xBD8817DB, 0x00000000);
							unk_0x80AA372E04ED318D(0x00000000, -1001.9f, -2954.3f, 13.1f, 3f, 0xFFFFFFFF, 40000f, 3f);
							unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_304);
							unk_0x78ADC381772E3D54(iLocal_266, iLocal_304);
							unk_0xF82EA857DA10E0CD(&iLocal_304);
							unk_0xBD453909DC26A85D(iLocal_266, 0xBD8817DB, 0x00000000, 0x00000000, 0x00000000);
							iLocal_461 = 0x00000001;
						}
					}
				}
			}
		}
	}
	else if (iLocal_461 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_266))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_304);
				unk_0x80AA372E04ED318D(0x00000000, -1001.9f, -2954.3f, 13.1f, 3f, 0xFFFFFFFF, 40000f, 3f);
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_304);
				unk_0x78ADC381772E3D54(iLocal_266, iLocal_304);
				unk_0xF82EA857DA10E0CD(&iLocal_304);
				iLocal_461 = 0x00000001;
			}
		}
	}
}

void func_218(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_15(iParam3), 0x00000000);
}

void func_219()
{
	if (iLocal_223 == 0x00000000)
	{
		iLocal_225 = 0x00000000;
		iLocal_253 = unk_0xD68EA767274B7444();
		unk_0xAE1670DD12E839C3("TRV_4_MCS_2", 0x00000008);
		unk_0x523BCC9DC80CD82F(joaat("prop_jet_bloodsplat_01"));
		if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			unk_0xA19A5ADE229B4734("Trev4_5", 0x00000000, 0.5f, 1f);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		iLocal_223 = 0x00000001;
	}
	if (iLocal_223 == 0x00000001)
	{
		switch (iLocal_225)
		{
			case 0x00000000:
				while (!unk_0x62A1F4500E8F07E0())
				{
					SYSTEM::WAIT(0x00000000);
				}
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					unk_0x29E8331978B73E7F(iLocal_264, "Molly", 0x00000001, joaat("ig_molly"), 0x00000000);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
				{
					unk_0x29E8331978B73E7F(iLocal_266, "Airworker_Tackle_trevor", 0x00000000, joaat("s_m_y_airworker"), 0x00000000);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
				{
					unk_0x29E8331978B73E7F(iLocal_284, "JET_TRV4", 0x00000000, joaat("jet"), 0x00000000);
				}
				func_220(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC92DB9682A650680("TRV4_SUCK_CS");
				unk_0x4C902758BEA97C68(0x00000000);
				iLocal_225++;
				break;
			
			case 0x00000001:
				func_125();
				if (unk_0x3148AE92ED70DC30("JET_TRV4", joaat("jet")))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
					{
						if (!unk_0x437347B10A200C4B(iLocal_284, 0x00000000))
						{
							unk_0x1E9649458B15960F(iLocal_284, 0x00000001);
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
					{
						unk_0x11AD11297DC58CC7(iLocal_266, 0x00000001);
						unk_0xF3268524E9BE6D6E(iLocal_266, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xE121AE1BBF90E186(iLocal_266, 0x00000000);
						unk_0x25C5402CC10F76CD(iLocal_266, 0x00000001);
						unk_0xAA6B3A4292417750(iLocal_266, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				if (unk_0x3148AE92ED70DC30("Michael", 0x00000000))
				{
					func_125();
					func_123(0x00000001);
				}
				if (!unk_0x39B7A3CCD2467CAB())
				{
					iLocal_336 = 0x00000001;
					if (!unk_0xC844350D5D58C99A(iLocal_294))
					{
						if (unk_0xB87F6CF6E5628C67(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_294 = unk_0x7707E48765093646(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 0x00000001, 0x00000001, 0x00000000);
							unk_0xC023D1C4BF532815(iLocal_294, 0f, 0f, -121.5948f, 0x00000002, 0x00000001);
							unk_0xC4C7FD0EF3FEAB0B(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x71199B01895C6202(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0x2D23BE319D971F4C(0x00000000);
					func_220(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 0x00000000, 0x00000002))
					{
						unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_smg"), 0x00000096, 0x00000001, 0x00000001);
					}
					iLocal_223 = 0x00000002;
				}
				break;
			}
	}
	if (iLocal_223 == 0x00000002)
	{
		iLocal_223 = 0x00000000;
		iLocal_222 = 0x00000008;
	}
}

void func_220(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_228(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_227())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_226(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_228(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_226(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_224(unk_0xD803B885F5E47A62())) && !func_222(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_221()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_224(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_221()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_222(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_223(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_53();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_224(int iParam0)
{
	if (func_222(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_225())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_225()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_226(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

int func_227()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_228(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000D);
	}
}

void func_229()
{
	if (iLocal_442 == 0x00000000)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_442 = 0x00000001;
		}
	}
	else if (iLocal_446 == 0x00000000)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 0f);
		}
		else
		{
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.975f);
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), fLocal_324);
		}
	}
	if (iLocal_223 > 0x00000000)
	{
		func_217();
	}
	if (iLocal_223 == 0x00000000)
	{
		iLocal_337 = 0x00000000;
		iLocal_338 = 0x00000000;
		iLocal_339 = 0x00000000;
		iLocal_340 = 0x00000000;
		iLocal_342 = 0x00000000;
		iLocal_358 = 0x00000000;
		iLocal_420 = 0x00000000;
		iLocal_421 = 0x00000000;
		iLocal_422 = 0x00000000;
		iLocal_428 = 0x00000000;
		iLocal_443 = 0x00000000;
		iLocal_444 = 0x00000000;
		iLocal_445 = 0x00000000;
		iLocal_446 = 0x00000000;
		iLocal_447[0x00000000] = 0x00000000;
		iLocal_448[0x00000000] = 0x00000000;
		iLocal_447[0x00000001] = 0x00000000;
		iLocal_448[0x00000001] = 0x00000000;
		iLocal_447[0x00000002] = 0x00000000;
		iLocal_456 = 0x00000000;
		iLocal_458 = 0x00000000;
		iLocal_459 = 0x00000000;
		iLocal_460 = 0x00000000;
		iLocal_461 = 0x00000000;
		iLocal_464 = 0x00000000;
		iLocal_484 = 0x00000000;
		iLocal_486 = 0x00000000;
		iLocal_487[0x00000003] = 0x00000000;
		unk_0x523BCC9DC80CD82F(joaat("prop_jet_bloodsplat_01"));
		unk_0xB8842F7C7761A196("V_60_HangerRm");
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000003, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_264))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
			{
				if (unk_0xB72E131222E66495(iLocal_264))
				{
					unk_0xFD2107656FB54C9D(iLocal_264, 3f, 0x00000001);
				}
			}
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		iLocal_223 = 0x00000001;
	}
	if (iLocal_223 == 0x00000001)
	{
		if (iLocal_428 == 0x00000000)
		{
			if (unk_0xAE317D00A5A55DF6("Trv_4_747", 0x00000000, 0xFFFFFFFF))
			{
				iLocal_428 = 0x00000001;
			}
		}
		if (iLocal_420 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_264))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					if (unk_0xB72E131222E66495(iLocal_264))
					{
						if (unk_0x4E496981D6BC4CA4(iLocal_264) > 0x00000014)
						{
							if (unk_0xC844350D5D58C99A(iLocal_284))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
								{
									func_234(&iLocal_284);
									unk_0xEB819BD1E585E9CB(iLocal_253, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x56FDC9ADE35F7DB0(iLocal_284, 0x00000001, 0x00000000, 0x00000000);
									iLocal_420 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_443 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_264))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					if (unk_0xB72E131222E66495(iLocal_264))
					{
						if (unk_0x4E496981D6BC4CA4(iLocal_264) > 0x00000017)
						{
							unk_0xA3BF0AA5A2608191(iLocal_264);
							if (unk_0xC844350D5D58C99A(iLocal_284))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
								{
									if (!unk_0x562F77A7F33D2E46("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0x8BC9595FD2792B5D("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_251 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
									unk_0x6BE2EAE992FD7C26(iLocal_251, iLocal_284, unk_0xF653B9B22DA806A9(iLocal_284, "chassis_Control"));
									unk_0x915804B434753CBD(iLocal_264, iLocal_251, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
									unk_0xEFC3DF9D33E248D8(iLocal_251, 0x00000001);
									iLocal_443 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_444 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_264))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					if (iLocal_443 == 0x00000001)
					{
						vLocal_318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						if (vLocal_318.y < -2965f)
						{
							unk_0xC0B0B9E466C0ED17(iLocal_264, 0f, 0f, 0f, 0x00000001, 0x00001770, 0x000003E8, 0x000007D0, 0x00000000);
							unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
							unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_264, 0x00000000);
							unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_264, 0x00000FA0, 0x00000030, 0x00000004);
							iLocal_444 = 0x00000001;
						}
					}
				}
			}
		}
		else if (iLocal_445 == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_264))
			{
				unk_0x29D5132FBDCF2B1E(0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				if (unk_0xC844350D5D58C99A(iLocal_268[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000000]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_268[0x00000000]);
						unk_0x11AD11297DC58CC7(iLocal_268[0x00000000], 0x00000000);
					}
				}
				iLocal_445 = 0x00000001;
			}
		}
		if (iLocal_422 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_264))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					if (unk_0xC844350D5D58C99A(iLocal_295))
					{
						if (unk_0x50B5F6F3C29E9380(iLocal_295, iLocal_264))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "MISSSOLOMON_3", "molly_death", 0x00000003))
							{
								if (unk_0xA45992A6CE82FB43(iLocal_251) > 0.59f)
								{
									unk_0x15AFB6CBDE990FB6(iLocal_295, 0x00000001, 0x00000001);
									if (unk_0xE4EDC4B0E92C078B(iLocal_297))
									{
										unk_0x142CC44DB769B57E(&iLocal_297);
									}
									if (!unk_0xE4EDC4B0E92C078B(iLocal_300))
									{
										func_218(iLocal_264, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 0x0000000B);
										if (unk_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0x8910D3D58E0132B8("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x562F77A7F33D2E46("SOL_3_LOSE_COPS"))
										{
											unk_0x8BC9595FD2792B5D("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0x00000000);
										iLocal_422 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_446 == 0x00000000)
		{
			if (iLocal_422 == 0x00000001 && SYSTEM::TIMERB() > 0x000009C4)
			{
				iLocal_300 = func_231(iLocal_295);
				func_20("SOL3_GOD1", 0x00001D4C, 0xFFFFFFFF);
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_446 = 0x00000001;
			}
		}
		if (iLocal_487[0x00000003] == 0x00000000)
		{
			if (iLocal_446 == 0x00000001 && iLocal_445 == 0x00000001)
			{
				if (SYSTEM::TIMERB() > 0x000009C4)
				{
					unk_0x8B4C4CA774181102(10f, 2f, 0x00000003);
					iLocal_487[0x00000003] = 0x00000001;
				}
			}
		}
		if (iLocal_421 == 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "MISSSOLOMON_3", "molly_death", 0x00000003))
				{
					if (unk_0xA45992A6CE82FB43(iLocal_251) > 0.89f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_284))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
							{
								unk_0xEBA53F35D0085654(&iLocal_264);
								unk_0xE81656B429E5C4B5("scr_trev4_747_blood_impact", iLocal_284, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000);
								iLocal_673 = unk_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000);
								unk_0xEB819BD1E585E9CB(iLocal_254, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_234 = unk_0x1C0640BA9A7327B3();
								iLocal_421 = 0x00000001;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_234 + 574)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_294))
				{
					if (unk_0xB87F6CF6E5628C67(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_294 = unk_0x7707E48765093646(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 0x00000001, 0x00000001, 0x00000000);
						unk_0xC023D1C4BF532815(iLocal_294, 0f, 0f, -121.5948f, 0x00000002, 0x00000001);
						unk_0xC4C7FD0EF3FEAB0B(iLocal_294, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x71199B01895C6202(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_484 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_284))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
						{
							unk_0xE81656B429E5C4B5("scr_trev4_747_engine_debris", iLocal_284, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000);
							unk_0x56FDC9ADE35F7DB0(iLocal_284, 0x00000000, 0x00000000, 0x00000000);
							func_230();
							unk_0x55D0A2DB35045A35(iLocal_253);
							iLocal_484 = 0x00000001;
						}
					}
				}
			}
			if (iLocal_447[0x00000000] == 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_234 + 300)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_673))
					{
						unk_0xF7E25143642732EA(iLocal_673, 0x00000000);
					}
					iLocal_447[0x00000000] = 0x00000001;
				}
			}
			else if (iLocal_448[0x00000000] == 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_234 + 700)
				{
					if (unk_0xC844350D5D58C99A(iLocal_284))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
						{
							iLocal_673 = unk_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000);
							iLocal_448[0x00000000] = 0x00000001;
						}
					}
				}
			}
			else if (iLocal_447[0x00000001] == 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_234 + 1000)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_673))
					{
						unk_0xF7E25143642732EA(iLocal_673, 0x00000000);
					}
					iLocal_447[0x00000001] = 0x00000001;
				}
			}
			else if (iLocal_448[0x00000001] == 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_234 + 1400)
				{
					if (unk_0xC844350D5D58C99A(iLocal_284))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
						{
							iLocal_673 = unk_0xC1879030EB463216("scr_trev4_747_exhaust_plane_misfire", iLocal_284, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000);
							iLocal_672 = unk_0xC1879030EB463216("scr_trev4_747_engine_damage", iLocal_284, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_448[0x00000001] = 0x00000001;
						}
					}
				}
			}
			else if (iLocal_447[0x00000002] == 0x00000000)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_234 + 3500)
				{
					if (unk_0x83A8177D302E1A7E(iLocal_673))
					{
						unk_0xF7E25143642732EA(iLocal_673, 0x00000000);
					}
					if (unk_0xC844350D5D58C99A(iLocal_284))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_284, 0x00000000))
						{
							unk_0xAA6B3A4292417750(iLocal_284, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					iLocal_447[0x00000002] = 0x00000001;
				}
			}
		}
		if (iLocal_459 == 0x00000000)
		{
			if (iLocal_422 == 0x00000001)
			{
				if (iLocal_460 == 0x00000000)
				{
					if (!unk_0xE934758D273C899A(iLocal_295))
					{
						iLocal_244 = unk_0x1C0640BA9A7327B3();
						iLocal_460 = 0x00000001;
					}
				}
				else if (unk_0x1C0640BA9A7327B3() > iLocal_244 + 2000)
				{
					unk_0x1E9649458B15960F(iLocal_295, 0x00000001);
					iLocal_459 = 0x00000001;
				}
			}
		}
		if (iLocal_464 == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_264))
			{
				if (unk_0xC844350D5D58C99A(iLocal_284))
				{
					unk_0x1E9649458B15960F(iLocal_284, 0x00000000);
					iLocal_464 = 0x00000001;
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_295))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_300))
			{
				if (func_16(unk_0x16F2683693E537C9(), iLocal_295, 0x00000001) < 1.5f && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					unk_0x142CC44DB769B57E(&iLocal_300);
					unk_0xF690C84DADBB3551(&iLocal_295);
					func_125();
					iLocal_223 = 0x00000000;
					iLocal_222 = 0x00000008;
				}
			}
		}
	}
}

void func_230()
{
	if (unk_0x83A8177D302E1A7E(iLocal_668))
	{
		unk_0xF7E25143642732EA(iLocal_668, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_669))
	{
		unk_0xF7E25143642732EA(iLocal_669, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_670))
	{
		unk_0xF7E25143642732EA(iLocal_670, 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_671))
	{
		unk_0xF7E25143642732EA(iLocal_671, 0x00000000);
	}
}

int func_231(int iParam0)
{
	return func_232(iParam0, 0x00000001, 0x00000000);
}

int func_232(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 0x00000002);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_233(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_234(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
	{
		vVar0 = { 22.6057f, -2.10018f, -6.22841f };
		vVar1 = { 12.6349f, 7.89711f, -7.09742f };
		vVar2 = { -22.5879f, -2.2931f, -6.22542f };
		vVar3 = { -12.6675f, 8.15519f, -6.98833f };
		vVar4 = { 180f, 0f, 0f };
		iLocal_668 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar0, vVar4, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_669 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar1, vVar4, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_670 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar2, vVar4, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_671 = unk_0xC1879030EB463216("scr_trev4_747_engine_heathaze", *iParam0, vVar3, vVar4, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
	}
}

void func_235()
{
	if (unk_0xC844350D5D58C99A(iLocal_264))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
		{
			if (unk_0xB72E131222E66495(iLocal_264))
			{
				if (func_16(unk_0x16F2683693E537C9(), iLocal_264, 0x00000001) < 17f)
				{
					unk_0xFD2107656FB54C9D(iLocal_264, 3f, 0x00000001);
				}
				if (func_16(unk_0x16F2683693E537C9(), iLocal_264, 0x00000001) < 22f && func_16(unk_0x16F2683693E537C9(), iLocal_264, 0x00000001) > 17f)
				{
					unk_0xFD2107656FB54C9D(iLocal_264, 2f, 0x00000001);
				}
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -921.7f, -2946.4f, 13.4f, 0x00000001) > 8f && !unk_0x0A059E0DB9253280(iLocal_264))
				{
					if (func_16(unk_0x16F2683693E537C9(), iLocal_264, 0x00000001) > 22f)
					{
						unk_0xFD2107656FB54C9D(iLocal_264, 1f, 0x00000001);
					}
				}
				else if (func_16(unk_0x16F2683693E537C9(), iLocal_264, 0x00000001) > 22f)
				{
					unk_0xFD2107656FB54C9D(iLocal_264, 2f, 0x00000001);
				}
			}
		}
	}
	if (iLocal_223 > 0x00000000)
	{
		if (iLocal_442 == 0x00000000)
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0x00000000, 0x00000001, 0x00000000))
			{
				iLocal_442 = 0x00000001;
			}
		}
		else
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
			if (fLocal_324 < 1f)
			{
				fLocal_324 = 1f;
			}
			fLocal_324 = (fLocal_324 * 0.98f);
			unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), fLocal_324);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_284))
		{
			unk_0x523BCC9DC80CD82F(joaat("jet"));
			if (unk_0xB87F6CF6E5628C67(joaat("jet")))
			{
				iLocal_284 = unk_0x122AAB0B1D6F55AD(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x446EA2500F021666(iLocal_284, 0x00000002);
				unk_0x05EC10F460C3A4AF(iLocal_284, 0x00000000);
				unk_0x1E9649458B15960F(iLocal_284, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_284, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x71199B01895C6202(joaat("jet"));
				unk_0x25BD67336EA4AECE(iLocal_284, 0x000001F4);
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_266))
		{
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_airworker"));
			unk_0x3F423BF5B8125A50("misssolomon_3");
			unk_0x523BCC9DC80CD82F(joaat("p_amb_clipboard_01"));
			if ((unk_0xB87F6CF6E5628C67(joaat("s_m_y_airworker")) && unk_0xB4AE0788C1587752("misssolomon_3")) && unk_0xB87F6CF6E5628C67(joaat("p_amb_clipboard_01")))
			{
				iLocal_266 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 0x00000001, 0x00000001);
				unk_0xAA6B3A4292417750(iLocal_266, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x25C5402CC10F76CD(iLocal_266, 0x00000000);
				unk_0x11AD11297DC58CC7(iLocal_266, 0x00000001);
				func_17(&uLocal_490, 0x00000004, iLocal_266, "HangerWorker", 0x00000000, 0x00000001);
				iLocal_296 = unk_0x7707E48765093646(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x9F528B1B53FBC5D9(iLocal_296, iLocal_266, unk_0x4A089F2B762B8D33(iLocal_264, 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				iLocal_252 = unk_0xE9744DB7B8CA6965(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 0x00000002);
				unk_0x915804B434753CBD(iLocal_266, iLocal_252, "misssolomon_3", "_start_loop", 1000f, -8f, 0x00000044, 0x00000000, 0x447A0000, 0x00000000);
				unk_0x71199B01895C6202(joaat("s_m_y_airworker"));
				unk_0x71199B01895C6202(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_268[0x00000000]))
		{
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
			if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_cop_01")))
			{
				iLocal_268[0x00000000] = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 0x00000001, 0x00000001);
				unk_0x262EF6C6306BEA6C(iLocal_268[0x00000000], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
				unk_0x298903DD96203C2C(iLocal_268[0x00000000], 0x00000014);
				unk_0xE8832A9E16A57A1F(iLocal_268[0x00000000], 0x00000001, 0x00000001);
				unk_0x11AD11297DC58CC7(iLocal_268[0x00000000], 0x00000001);
				unk_0x9BE7E7B6B488CC55(iLocal_268[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000001);
				func_127(iLocal_268[0x00000000], 0x00000000);
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_285))
		{
			unk_0x523BCC9DC80CD82F(joaat("shamal"));
			if (unk_0xB87F6CF6E5628C67(joaat("shamal")))
			{
				iLocal_285 = unk_0x122AAB0B1D6F55AD(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x611DFA9294B339CA(iLocal_285, 0x00000000, 0x00000000, 0x00000001);
				unk_0xB9FD7450C0DAB575(iLocal_285, 0x40A00000);
				unk_0x71199B01895C6202(joaat("shamal"));
				unk_0xD458AC1C1D29C3B4(iLocal_285, 0x000007D0, 0x00000000);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_285))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_285, 0x00000000))
			{
				if (func_16(unk_0x16F2683693E537C9(), iLocal_285, 0x00000001) > 5f)
				{
					unk_0x611DFA9294B339CA(iLocal_285, 0x00000000, 0x00000000, 0x00000000);
				}
			}
		}
	}
	if (iLocal_223 == 0x00000000)
	{
		func_25(0x00000002, "STAGE_ON_FOOT_CHASE", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
		if (iLocal_343 == 0x00000001)
		{
			if (!unk_0x757EF87A33649210())
			{
				unk_0x53491B90E4FD0E56(0x00000000);
			}
			func_120();
			func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
			iLocal_343 = 0x00000000;
		}
		iLocal_400 = 0x00000000;
		iLocal_401 = 0x00000000;
		iLocal_442 = 0x00000000;
		fLocal_324 = 3f;
		iLocal_227 = 0x00000000;
		func_189(0x00000000, 0x00000001);
		unk_0xDB8844D4B7C60440(0x0000002D, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x00000023, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x00000002, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x00000036, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x00000001, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x00000009, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x0000003D, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x0000003F, "BB_CHASE");
		unk_0xDB8844D4B7C60440(0x00000040, "BB_CHASE");
		unk_0xE17FDF9E3068281B(&iLocal_305);
		unk_0xF5A41F3D3B38EFE3("digitalOverlay");
		if (unk_0xC844350D5D58C99A(iLocal_278))
		{
			unk_0x06FF977AA95DCCE3(iLocal_278, 0x00000000);
			unk_0x046C362CF15F1935(&iLocal_278);
		}
		if (unk_0xC844350D5D58C99A(iLocal_287))
		{
			unk_0xA954465BA6FDEFE2(&iLocal_287);
		}
		if (unk_0xC844350D5D58C99A(iLocal_276[0x00000000]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_276[0x00000000]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_280[0x00000000]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_280[0x00000000]));
		}
		unk_0xE801AB3C8990A86C(0x00000000);
		unk_0xC0FB48F966BB7D11(0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_297))
			{
				iLocal_297 = unk_0x5C3B41825F6AC5A0(iLocal_264);
				unk_0x321E019A46034F39(iLocal_297, 0x00000001);
			}
		}
		unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0x00000001);
		if (iLocal_363[0x00000002] == 0x00000001)
		{
			if (!unk_0x8AA6DC470ABA63A2(iLocal_261))
			{
				unk_0x55D0A2DB35045A35(iLocal_261);
			}
			unk_0x43A06902454A1172(iLocal_261);
			iLocal_390 = 0x00000000;
			iLocal_363[0x00000002] = 0x00000000;
		}
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000003, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC92DB9682A650680("TRV4_RUN");
		if (!unk_0xC844350D5D58C99A(iLocal_284))
		{
			unk_0x523BCC9DC80CD82F(joaat("jet"));
		}
		if (!unk_0xC844350D5D58C99A(iLocal_266))
		{
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_airworker"));
		}
		unk_0x523BCC9DC80CD82F(joaat("shamal"));
		unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
		unk_0x523BCC9DC80CD82F(joaat("police3"));
		unk_0x523BCC9DC80CD82F(joaat("p_amb_clipboard_01"));
		unk_0x36187931D29E5BBE(0x00000044, "BB_Chase");
		unk_0x36187931D29E5BBE(0x00000045, "BB_Chase");
		unk_0x3F423BF5B8125A50("misssolomon_3");
		SYSTEM::SETTIMERA(0x00000000);
		if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
		{
			unk_0xA19A5ADE229B4734("Trev4_5", 0x00000001, 1f, 1f);
		}
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_21(0x00000000, 0xFFFFFFFF, 0x00000001);
			func_20("TRV4_CHASE1", 0x00001D4C, 0x00000001);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		iLocal_223 = 0x00000001;
	}
	if (iLocal_223 == 0x00000001)
	{
		iLocal_223 = 0x00000002;
	}
	if (iLocal_223 == 0x00000002)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_236("TRV4_FAIL1");
		}
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_236("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 0x00003A98)
		{
			func_236("TRV4_FAIL1");
		}
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
			{
				if (!unk_0xB72E131222E66495(iLocal_264))
				{
					unk_0xF44B0E19CAC31C33(iLocal_264, "BB_MOLLY_2", 0x0000000A, 0x00000004, 0xFFFFFFFF);
					unk_0xC6EB89C59F2AF6B8(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_223 = 0x00000003;
		}
	}
	if (iLocal_223 == 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
		{
			if (unk_0xB72E131222E66495(iLocal_264))
			{
				if (unk_0x4E496981D6BC4CA4(iLocal_264) > 0x00000012 && iLocal_405 == 0x00000000)
				{
					iLocal_350 = 0x00000000;
					unk_0xFD2107656FB54C9D(iLocal_264, 3f, 0x00000001);
					iLocal_223 = 0x00000000;
					iLocal_222 = 0x00000006;
				}
			}
		}
		if (SYSTEM::TIMERA() > 0x0000C350)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
			{
				unk_0x327AAEE25F323797(iLocal_264);
				unk_0xA47B46945FF6DE74(iLocal_264, -932.5f, -2964.1f, 13.4f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xF44B0E19CAC31C33(iLocal_264, "BB_MOLLY_2", 0x00000012, 0x00000004, 0xFFFFFFFF);
				unk_0xC6EB89C59F2AF6B8(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_350 = 0x00000000;
				iLocal_223 = 0x00000000;
				iLocal_222 = 0x00000006;
			}
		}
	}
}

void func_236(char* sParam0)
{
	if (iLocal_405 == 0x00000000)
	{
		if (iLocal_334)
		{
			func_226(0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0xE3BB8E05FCEB3FBE(iLocal_301, 0x00000000);
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0xBFE31971E49FA500(0x00000001);
			if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
			{
				unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
			}
			unk_0x55D0A2DB35045A35(iLocal_261);
			func_246();
			unk_0xC0FB48F966BB7D11(0x00000001);
			iLocal_363[0x00000002] = 0x00000000;
			iLocal_334 = 0x00000000;
		}
		unk_0xC92DB9682A650680("TRV4_FAIL");
		sLocal_489 = sParam0;
		unk_0x790015DC92C918E2();
		func_214();
		func_212();
		func_237(sLocal_489);
		iLocal_405 = 0x00000001;
	}
}

void func_237(char* sParam0)
{
	func_245(sParam0);
	func_238(0x00000000);
}

void func_238(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_432(0x00000000))
	{
		iVar0 = func_8();
		if (!func_239(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_244();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_243(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_240(&(Global_1B416.f_936.f_21B), iVar1);
	if (Global_16AF7 == Global_181DD)
	{
		Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_15DBC[iVar1 /*34*/].f_F, 0x00000001))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0x00000000);
		}
	}
	Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_2++;
	Global_16AF7 = Global_181DD;
	if (iParam0 == 0xFFFFFFFF)
	{
		if (Global_1B416.f_2378)
		{
		}
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iParam0 /*5*/].f_1, 0x00000004))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iParam0 /*5*/].f_1, 0x00000005))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_240(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 0x0000005E)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = Global_1B416.f_4860[iVar0];
		if ((((iVar1 == 0x00000008 || iVar1 == 0x00000009) || iVar1 == 0x0000000A) || (((iVar1 == 0x0000000B || iVar1 == 0x00000022) || iVar1 == 0x00000048) || iVar1 == 0x00000049)) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0x00000000], 0x00000009))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_242(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_241(&(uParam0->f_8F8[iVar0]));
				uParam0->f_8FC[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_906[iVar0] = 0f;
				uParam0->f_90A[iVar0] = 0x00000000;
				uParam0->f_90E[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_918[iVar0] = 0x00000000;
				Global_17786[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_9 = 0f;
				Global_17786[iVar0 /*29*/].f_C = 0f;
				Global_17786[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_A = 0f;
				Global_17786[iVar0 /*29*/].f_D = 0f;
				Global_17786[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_B = 0f;
				Global_17786[iVar0 /*29*/].f_E = 0f;
				Global_17786[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1A = 0f;
				Global_17786[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1B = 0f;
				Global_17786[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_241(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_242(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0x0000000B:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_242(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_242(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000D:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

void func_243(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 0x00000058 && iParam0 != 0x00000059) && iParam0 != 0x0000005C)
		{
			Global_16A39[iParam0 /*2*/] = 0x00000001;
		}
	}
	else
	{
		Global_16A39[iParam0 /*2*/] = 0x00000000;
	}
}

void func_244()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_107())
			{
				case 0x00000000:
					StringCopy(&Global_12C36, "CMN_MARRE", 16);
					break;
				
				case 0x00000001:
					StringCopy(&Global_12C36, "CMN_FARRE", 16);
					break;
				
				case 0x00000002:
					StringCopy(&Global_12C36, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0x00000000;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_107())
			{
				case 0x00000000:
					StringCopy(&Global_12C36, "CMN_MDIED", 16);
					break;
				
				case 0x00000001:
					StringCopy(&Global_12C36, "CMN_FDIED", 16);
					break;
				
				case 0x00000002:
					StringCopy(&Global_12C36, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000019);
	}
}

void func_245(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 0x00000010)
		{
			StringCopy(&Global_12C36, sParam0, 16);
			StringCopy(&Global_12C3A, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_246()
{
	Global_F04F = 0x00000000;
}

void func_247()
{
	if (!unk_0xC844350D5D58C99A(iLocal_284))
	{
		if (unk_0xC844350D5D58C99A(iLocal_278))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 30000f)
					{
						unk_0x523BCC9DC80CD82F(joaat("jet"));
						if (unk_0xB87F6CF6E5628C67(joaat("jet")))
						{
							iLocal_284 = unk_0x122AAB0B1D6F55AD(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 0x00000001, 0x00000001, 0x00000000);
							unk_0x446EA2500F021666(iLocal_284, 0x00000002);
							unk_0x05EC10F460C3A4AF(iLocal_284, 0x00000000);
							unk_0x1E9649458B15960F(iLocal_284, 0x00000001);
							unk_0xAA6B3A4292417750(iLocal_284, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							unk_0x71199B01895C6202(joaat("jet"));
							unk_0x25BD67336EA4AECE(iLocal_284, 0x000001F4);
						}
					}
				}
			}
		}
	}
	func_347();
	if (unk_0xE4EDC4B0E92C078B(iLocal_297))
	{
		func_346(iLocal_297, iLocal_264, 300f, 0.9f, 0x00000000);
	}
	if (iLocal_223 == 0x00000000)
	{
		if (iLocal_224 < 0x00000002)
		{
			unk_0x87F7E6A954466069(unk_0x16F2683693E537C9(), 0x00000000);
		}
		func_345();
		func_313();
		if (iLocal_395 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x00000014]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000014], 0x00000000))
				{
					unk_0x56FDC9ADE35F7DB0(iLocal_204[0x00000014], 0x00000001, 0x00000001, 0x00000000);
					unk_0x873BCADC75FF6D20(iLocal_204[0x00000014]);
					iLocal_395 = 0x00000001;
				}
			}
		}
		func_312();
		func_311();
		if (iLocal_347 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_278))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						func_310(iLocal_301, iLocal_287, "BB_Chase", 0x00000001);
						iLocal_347 = 0x00000001;
					}
				}
			}
		}
		else if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_278))
			{
				func_309(iLocal_301, iLocal_287, fLocal_321);
				unk_0x5818C8D5303DCCF8(iLocal_301, 45f);
			}
		}
		if (iLocal_335 == 0x00000000)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if ((unk_0x9901AABAC4D4C590(iLocal_278) > 15000f && unk_0x9901AABAC4D4C590(iLocal_278) < 125464f) && func_301(0x00000001, 0x00000000, 0x00000000))
					{
						iLocal_350 = 0x00000001;
						if (iLocal_405 == 0x00000000)
						{
							unk_0xA37A90C62806D848(0x00000001);
							func_300("TRV4_HELP1", 0xFFFFFFFF);
							func_293(0x00000001);
							func_210(&uLocal_28, 0x00000000, 0x00000000);
							unk_0xF3039DE1FDB4F6FD(0x00000000);
							iLocal_335 = 0x00000001;
						}
					}
				}
			}
		}
		else if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_278))
			{
				if (unk_0x83D8570832F172A7(iLocal_305) && func_186(0x00000001, "BB_Chase"))
				{
					if (((unk_0x9901AABAC4D4C590(iLocal_278) > 15000f && unk_0x9901AABAC4D4C590(iLocal_278) < 125464f) && iLocal_405 == 0x00000000) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						func_271();
					}
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 125464f || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (iLocal_334)
						{
							unk_0xA37A90C62806D848(0x00000001);
							func_226(0x00000000, 0x00000001, 0x00000001, 0x00000000);
							unk_0xE3BB8E05FCEB3FBE(iLocal_301, 0x00000000);
							unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
							unk_0xBFE31971E49FA500(0x00000001);
							if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
							{
								unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
							}
							unk_0x55D0A2DB35045A35(iLocal_261);
							func_246();
							unk_0xC0FB48F966BB7D11(0x00000001);
							iLocal_363[0x00000002] = 0x00000000;
							iLocal_334 = 0x00000000;
						}
					}
				}
			}
		}
		switch (iLocal_224)
		{
			case 0x00000000:
				if (iLocal_487[0x00000000] == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 44255f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -1187.3f, -2847.8f, 13.6f, 0x00000001) < 100f)
							{
								unk_0x8B4C4CA774181102(10f, 2f, 0x00000003);
								iLocal_487[0x00000000] = 0x00000001;
							}
						}
					}
				}
				if (iLocal_487[0x00000001] == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 52875f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -1349f, -2720f, 14f, 0x00000001) < 50f)
							{
								unk_0x8B4C4CA774181102(6f, 2f, 0x00000003);
								iLocal_487[0x00000001] = 0x00000001;
							}
						}
					}
				}
				if (iLocal_487[0x00000002] == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 87085f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -1507f, -2520f, 14f, 0x00000001) < 70f)
							{
								unk_0x8B4C4CA774181102(10f, 2f, 0x00000003);
								iLocal_487[0x00000002] = 0x00000001;
							}
						}
					}
				}
				func_270();
				func_269();
				if (!unk_0x562F77A7F33D2E46("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 64280f && unk_0x9901AABAC4D4C590(iLocal_278) < 72000f)
								{
									if (unk_0x0EB28750412C3A5A(-1149.6f, -2323.7f, 22.5f, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001) < 130f)
									{
										unk_0x8BC9595FD2792B5D("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 72500f)
							{
								unk_0x8910D3D58E0132B8("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x562F77A7F33D2E46("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 78000f && unk_0x9901AABAC4D4C590(iLocal_278) < 85000f)
								{
									unk_0x8BC9595FD2792B5D("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 85500f)
							{
								unk_0x8910D3D58E0132B8("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x562F77A7F33D2E46("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 100000f && unk_0x9901AABAC4D4C590(iLocal_278) < 107000f)
								{
									unk_0x8BC9595FD2792B5D("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 107500f)
							{
								unk_0x8910D3D58E0132B8("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) < 10000f)
							{
								func_268();
							}
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_278) < 30000f)
						{
							func_267(iLocal_278, unk_0x9901AABAC4D4C590(iLocal_278));
						}
					}
				}
				if (iLocal_408 == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 22000f)
							{
								unk_0x13896FDECC859926("TRV4_AIRPORT_ENTERED");
								iLocal_408 = 0x00000001;
							}
						}
					}
				}
				else if (iLocal_409 == 0x00000000)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0x00000000, 0x00000001, 0x00000000))
					{
						unk_0xC92DB9682A650680("TRV4_AIRPORT_ENTERED");
						iLocal_409 = 0x00000001;
					}
				}
				if (iLocal_341 == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (func_16(iLocal_278, unk_0x16F2683693E537C9(), 0x00000001) < 170f && unk_0x0A059E0DB9253280(iLocal_278))
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_299))
							{
								unk_0x142CC44DB769B57E(&iLocal_299);
							}
							if (unk_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0x8910D3D58E0132B8("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
							{
								unk_0x8BC9595FD2792B5D("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xE4EDC4B0E92C078B(iLocal_297))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
								{
									iLocal_297 = unk_0x5C3B41825F6AC5A0(iLocal_264);
									unk_0x321E019A46034F39(iLocal_297, 0x00000001);
								}
							}
							unk_0x053C926E5E341906();
							if (!unk_0xD17F06053799A7CA())
							{
								func_20("TRV4_CHASE2", 0x00001D4C, 0x00000001);
								func_25(0x00000001, "STAGE_CHASE_START", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
								unk_0xC92DB9682A650680("TRV4_CHASE");
								iLocal_341 = 0x00000001;
							}
						}
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_299))
						{
							unk_0x142CC44DB769B57E(&iLocal_299);
						}
						if (!unk_0xE4EDC4B0E92C078B(iLocal_297))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
							{
								iLocal_297 = unk_0x5C3B41825F6AC5A0(iLocal_264);
								unk_0x321E019A46034F39(iLocal_297, 0x00000001);
							}
						}
						unk_0x053C926E5E341906();
						if (!unk_0xD17F06053799A7CA())
						{
							func_20("TRV4_CHASE2", 0x00001D4C, 0x00000001);
							func_25(0x00000001, "STAGE_CHASE_START", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
							unk_0xC92DB9682A650680("TRV4_CHASE");
							iLocal_341 = 0x00000001;
						}
					}
				}
				else if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_278) < 15000f)
						{
						}
					}
				}
				if (iLocal_326 == 0x00000000)
				{
					unk_0x523BCC9DC80CD82F(joaat("jet"));
					if (unk_0xB87F6CF6E5628C67(joaat("jet")))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 18490f)
								{
									iLocal_280[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 0x00000001, 0x00000001, 0x00000000);
									unk_0x4D3C3C0B0DE2663E(iLocal_280[0x00000001], 0x00000002, "BB_Chase", 0x00000001);
									unk_0x71199B01895C6202(joaat("jet"));
									iLocal_326 = 0x00000001;
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_280[0x00000001]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_280[0x00000001], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_280[0x00000001]))
						{
							unk_0xA9FBE21EB8701B34(iLocal_280[0x00000001], fLocal_321);
							if (unk_0x9901AABAC4D4C590(iLocal_280[0x00000001]) > 20000f)
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_280[0x00000001], 0x00000001) > 200f && !unk_0x0A059E0DB9253280(iLocal_280[0x00000001]))
								{
									unk_0xC55F2A0377488064(iLocal_280[0x00000001]);
									if (unk_0xC844350D5D58C99A(iLocal_276[0x00000001]))
									{
										unk_0xEBA53F35D0085654(&(iLocal_276[0x00000001]));
									}
									unk_0xA954465BA6FDEFE2(&(iLocal_280[0x00000001]));
									iLocal_249 = unk_0x1C0640BA9A7327B3() + 1000;
								}
							}
							if (unk_0xC844350D5D58C99A(iLocal_280[0x00000001]))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_280[0x00000001]) > 31543f)
								{
									unk_0xC55F2A0377488064(iLocal_280[0x00000001]);
									unk_0x1E9649458B15960F(iLocal_280[0x00000001], 0x00000001);
								}
							}
						}
						else if (func_16(unk_0x16F2683693E537C9(), iLocal_280[0x00000001], 0x00000001) > 200f && !unk_0x0A059E0DB9253280(iLocal_280[0x00000001]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_276[0x00000001]))
							{
								unk_0xEBA53F35D0085654(&(iLocal_276[0x00000001]));
							}
							unk_0xA954465BA6FDEFE2(&(iLocal_280[0x00000001]));
							iLocal_249 = unk_0x1C0640BA9A7327B3() + 1000;
						}
					}
				}
				if (iLocal_432 == 0x00000000)
				{
					if (!unk_0xC844350D5D58C99A(iLocal_283))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 23000f)
								{
									unk_0x523BCC9DC80CD82F(joaat("tanker"));
									if (unk_0xB87F6CF6E5628C67(joaat("tanker")))
									{
										iLocal_283 = unk_0x122AAB0B1D6F55AD(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 0x00000001, 0x00000001, 0x00000000);
										unk_0x71199B01895C6202(joaat("tanker"));
										unk_0xC002508A277213DE(iLocal_283, 0x00000039, 0x00000039);
										iLocal_432 = 0x00000001;
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_204[0x00000001]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000001], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000001]))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_204[0x00000001]) > 13000f)
							{
								if (iLocal_370 == 0x00000000)
								{
									fLocal_123[0x00000001] = 0.5f;
									iLocal_269 = unk_0xA30B8362589C124A(iLocal_204[0x00000001], 0xFFFFFFFF, 0x00000000);
									iLocal_370 = 0x00000001;
								}
							}
						}
					}
				}
				if (iLocal_332 == 0x00000000)
				{
					unk_0xA0D09682534C2176(-1325f, -2779f, 14f);
					if (unk_0xC844350D5D58C99A(iLocal_204[0x00000001]))
					{
						if (iLocal_361 == 0x00000000)
						{
							unk_0xC002508A277213DE(iLocal_204[0x00000001], 0x00000039, 0x00000039);
							iLocal_361 = 0x00000001;
						}
						if (unk_0xC844350D5D58C99A(iLocal_283))
						{
							if (!unk_0x437347B10A200C4B(iLocal_204[0x00000001], 0x00000000))
							{
								if (!unk_0x437347B10A200C4B(iLocal_283, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000001]))
									{
										unk_0xC74DAD25331A5425(iLocal_204[0x00000001], iLocal_283, 0x3F800000);
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_283))
					{
						if (unk_0xC844350D5D58C99A(iLocal_278))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_278))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 41430f)
									{
										unk_0x15AFB6CBDE990FB6(iLocal_283, 0x00000001, 0x00000001);
										iLocal_332 = 0x00000001;
									}
								}
							}
						}
					}
				}
				else if (iLocal_373 == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000001], 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 42700f)
								{
									if (unk_0xC844350D5D58C99A(iLocal_269))
									{
										if (!unk_0xEB6A8945D1AC98A1(iLocal_269))
										{
											unk_0xD458AC1C1D29C3B4(iLocal_269, 0x00000000, 0x00000000);
										}
									}
									if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000001]))
									{
										unk_0xC55F2A0377488064(iLocal_204[0x00000001]);
										iLocal_373 = 0x00000001;
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (iLocal_467 == 0x00000000)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 38000f)
								{
									if (unk_0xC844350D5D58C99A(iLocal_204[0x00000001]) && unk_0xDF1306B443CD3D15(iLocal_204[0x00000001], 0x00000000))
									{
										unk_0xCEAA091B490F8407(0xFFFFFFFF, "Trevor_4_747_Tanker_Horn", iLocal_204[0x00000001], 0x00000000, 0x00000000, 0x00000000);
										iLocal_467 = 0x00000001;
									}
								}
							}
							if (iLocal_363[0x00000001] == 0x00000000)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 39000f)
								{
									if (!unk_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x8BC9595FD2792B5D("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										unk_0xAA6B3A4292417750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									}
									iLocal_363[0x00000001] = 0x00000001;
								}
							}
							if (iLocal_403 == 0x00000000)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 41611f)
								{
									if (unk_0xC844350D5D58C99A(iLocal_283))
									{
										if (!unk_0x437347B10A200C4B(iLocal_283, 0x00000000))
										{
											if (unk_0xC844350D5D58C99A(iLocal_204[0x00000007]))
											{
												if (!unk_0x437347B10A200C4B(iLocal_204[0x00000007], 0x00000000))
												{
													unk_0xCEAA091B490F8407(0xFFFFFFFF, "Trevor_4_747_Tanker_Explosion", iLocal_283, 0x00000000, 0x00000000, 0x00000000);
													unk_0xC55F2A0377488064(iLocal_204[0x00000007]);
													unk_0x0DC87D17DC2658DC(iLocal_204[0x00000007], 0x00000001, 0x00000000);
													unk_0x0DC87D17DC2658DC(iLocal_283, 0x00000001, 0x00000000);
													unk_0xDA55CDFB97015579(-1221f, -2852f, 17f, 0x0000000E, 1f, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
													unk_0xDA55CDFB97015579(-1212f, -2855f, 14.34f, 0x0000000E, 1f, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
													unk_0x046C362CF15F1935(&iLocal_283);
													unk_0x046C362CF15F1935(&(iLocal_204[0x00000001]));
													iLocal_403 = 0x00000001;
												}
											}
										}
									}
								}
							}
							if (iLocal_364[0x00000001] == 0x00000000)
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 43204f)
								{
									if (unk_0x562F77A7F33D2E46("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x8910D3D58E0132B8("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x42740B44BA8D7B43("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										unk_0xAA6B3A4292417750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									}
									iLocal_364[0x00000001] = 0x00000001;
								}
							}
						}
					}
				}
				if (!unk_0x562F77A7F33D2E46("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_204[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_278))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_278))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 36000f && unk_0x9901AABAC4D4C590(iLocal_278) < 40000f)
										{
											unk_0x8BC9595FD2792B5D("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_204[0x00000000]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000000], 0x00000000))
					{
						if (unk_0xC844350D5D58C99A(iLocal_278))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_278))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 43204f)
									{
										unk_0x8910D3D58E0132B8("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_325 == 0x00000000)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 60500f)
							{
								unk_0x523BCC9DC80CD82F(joaat("jet"));
							}
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 66500f)
							{
								if (unk_0xB87F6CF6E5628C67(joaat("jet")))
								{
									iLocal_280[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 0x00000001, 0x00000001, 0x00000000);
									unk_0xE121AE1BBF90E186(iLocal_280[0x00000000], 0x00000001);
									unk_0x446EA2500F021666(iLocal_280[0x00000000], 0x00000002);
									unk_0x4D3C3C0B0DE2663E(iLocal_280[0x00000000], 0x00000023, "BB_Chase", 0x00000001);
									unk_0xF12C1D85AFEE8FAD(iLocal_280[0x00000000], 3491f);
									unk_0x71199B01895C6202(joaat("jet"));
									iLocal_325 = 0x00000001;
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_280[0x00000000]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_280[0x00000000], 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_280[0x00000000]))
								{
									unk_0xA9FBE21EB8701B34(iLocal_280[0x00000000], fLocal_321);
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 80000f)
									{
										if (func_16(iLocal_280[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) > 200f)
										{
											unk_0xC55F2A0377488064(iLocal_280[0x00000000]);
										}
									}
								}
								else if (unk_0x9901AABAC4D4C590(iLocal_278) > 80000f)
								{
									if (func_16(iLocal_280[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) > 200f && !unk_0x0A059E0DB9253280(iLocal_280[0x00000000]))
									{
										if (unk_0xC844350D5D58C99A(iLocal_276[0x00000000]))
										{
											unk_0xEBA53F35D0085654(&(iLocal_276[0x00000000]));
										}
										unk_0xA954465BA6FDEFE2(&(iLocal_280[0x00000000]));
										iLocal_249 = unk_0x1C0640BA9A7327B3() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_392 == 0x00000000)
				{
					if (iLocal_391 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_278))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_278))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 50000f)
									{
										unk_0x523BCC9DC80CD82F(joaat("s_m_y_airworker"));
										unk_0x3F423BF5B8125A50("misstrevor4");
										if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_airworker")))
										{
											iLocal_270 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 0x00000001, 0x00000001);
											iLocal_271 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 0x00000001, 0x00000001);
											unk_0x11AD11297DC58CC7(iLocal_270, 0x00000001);
											unk_0x11AD11297DC58CC7(iLocal_271, 0x00000001);
											unk_0x71199B01895C6202(joaat("s_m_y_airworker"));
											iLocal_391 = 0x00000001;
										}
									}
								}
							}
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 58000f)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_270))
									{
										if (unk_0xB4AE0788C1587752("misstrevor4"))
										{
											if (!unk_0xB4ECF989E2C1DAC8(iLocal_270, "misstrevor4", "dive_clear_goon1", 0x00000003))
											{
												unk_0xC6EB89C59F2AF6B8(iLocal_270, "misstrevor4", "dive_clear_goon1", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											}
										}
									}
									if (!unk_0xEB6A8945D1AC98A1(iLocal_271))
									{
										if (unk_0xB4AE0788C1587752("misstrevor4"))
										{
											if (!unk_0xB4ECF989E2C1DAC8(iLocal_271, "misstrevor4", "dive_clear_goon2", 0x00000003))
											{
												unk_0xC6EB89C59F2AF6B8(iLocal_271, "misstrevor4", "dive_clear_goon2", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											}
										}
									}
									iLocal_392 = 0x00000001;
								}
							}
						}
					}
				}
				else if (unk_0xC844350D5D58C99A(iLocal_270))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_270))
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_270, "misstrevor4", "dive_clear_goon1", 0x00000003))
						{
							if (unk_0xC844350D5D58C99A(iLocal_271))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_271))
								{
									if (!unk_0xB4ECF989E2C1DAC8(iLocal_271, "misstrevor4", "dive_clear_goon2", 0x00000003))
									{
										unk_0x8D17794CE3273D70("misstrevor4");
										unk_0x6DAD7906B73F064D(&iLocal_270);
										unk_0x6DAD7906B73F064D(&iLocal_271);
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_204[0x00000008]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000008]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_278))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_278))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 50200f)
										{
											if (iLocal_328 == 0x00000000)
											{
												unk_0xA9FBE21EB8701B34(iLocal_204[0x00000008], 1f);
												if (func_16(unk_0x16F2683693E537C9(), iLocal_204[0x00000008], 0x00000001) < 100f)
												{
													unk_0x9A82EEAF6CA12AEE(0.3f);
													iLocal_366 = 0x00000000;
													if (!unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0x8BC9595FD2792B5D("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xB9BBC76CD5A81754(iLocal_204[0x00000008], 0f, 0f, 0f, 0x00000001, 0x000005DC, 0x000001F4, 0x00000064);
												}
												unk_0xE8832A9E16A57A1F(iLocal_204[0x00000008], 0x00000001, 0x00000001);
												unk_0x44C45BC1FDF14D14(iLocal_204[0x00000008], 0x00000001, 0x00000000);
												unk_0xCEAA091B490F8407(iLocal_255, "Trevor_4_747_Flying_Car", iLocal_204[0x00000008], 0x00000000, 0x00000000, 0x00000000);
												SYSTEM::SETTIMERB(0x00000000);
												iLocal_328 = 0x00000001;
											}
										}
										if (iLocal_328 == 0x00000001)
										{
											if (SYSTEM::TIMERB() > 0x00000296)
											{
												if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x9A82EEAF6CA12AEE(1f);
												iLocal_366 = 0x00000001;
											}
											if (SYSTEM::TIMERB() > 0x00000750)
											{
												unk_0xC55F2A0377488064(iLocal_204[0x00000008]);
											}
										}
									}
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(iLocal_278))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_278))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 50200f)
									{
										if (!unk_0xE934758D273C899A(iLocal_204[0x00000008]))
										{
											if (iLocal_378 == 0x00000000)
											{
												unk_0xCEAA091B490F8407(iLocal_255, "Trevor_4_747_Carsplosion", iLocal_204[0x00000008], 0x00000000, 0x00000000, 0x00000000);
												unk_0x0DC87D17DC2658DC(iLocal_204[0x00000008], 0x00000001, 0x00000000);
												iLocal_378 = 0x00000001;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_366 == 0x00000000)
					{
						if (iLocal_328 == 0x00000001)
						{
							if (SYSTEM::TIMERB() > 0x00000296)
							{
								if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x9A82EEAF6CA12AEE(1f);
								iLocal_366 = 0x00000001;
							}
						}
					}
				}
				else if (iLocal_366 == 0x00000000)
				{
					if (iLocal_328 == 0x00000001)
					{
						if (SYSTEM::TIMERB() > 0x00000296)
						{
							if (unk_0x562F77A7F33D2E46("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0x8910D3D58E0132B8("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x9A82EEAF6CA12AEE(1f);
							iLocal_366 = 0x00000001;
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000B]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000B], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x0000000B]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_278))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_278))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 82683f)
										{
											if (iLocal_329 == 0x00000000)
											{
												unk_0xCEAA091B490F8407(iLocal_257, "Trevor_4_747_Flying_Car", iLocal_204[0x0000000B], 0x00000000, 0x00000000, 0x00000000);
												iLocal_329 = 0x00000001;
												SYSTEM::SETTIMERB(0x00000000);
											}
											if (iLocal_329 == 0x00000001)
											{
												if (SYSTEM::TIMERB() > 0x00000750)
												{
													if (!unk_0xE934758D273C899A(iLocal_204[0x0000000B]))
													{
														unk_0xC55F2A0377488064(iLocal_204[0x0000000B]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_329 == 0x00000001)
						{
							if (iLocal_379 == 0x00000000)
							{
								if (!unk_0xE934758D273C899A(iLocal_204[0x0000000B]))
								{
									unk_0xCEAA091B490F8407(iLocal_257, "Trevor_4_747_Carsplosion", iLocal_204[0x0000000B], 0x00000000, 0x00000000, 0x00000000);
									unk_0x0DC87D17DC2658DC(iLocal_204[0x0000000B], 0x00000001, 0x00000000);
									iLocal_379 = 0x00000001;
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000C]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000C], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x0000000C]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_278))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_278))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 82463f)
										{
											if (iLocal_330 == 0x00000000)
											{
												unk_0xCEAA091B490F8407(iLocal_258, "Trevor_4_747_Flying_Car", iLocal_204[0x0000000C], 0x00000000, 0x00000000, 0x00000000);
												iLocal_330 = 0x00000001;
												SYSTEM::SETTIMERB(0x00000000);
											}
											if (iLocal_330 == 0x00000001)
											{
												if (SYSTEM::TIMERB() > 0x000003E8)
												{
													if (!unk_0xE934758D273C899A(iLocal_204[0x0000000C]))
													{
														unk_0xC55F2A0377488064(iLocal_204[0x0000000C]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_463 == 0x00000000)
							{
								if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x0000000C]))
								{
									if (unk_0x9901AABAC4D4C590(iLocal_204[0x0000000C]) > 22216f && func_16(iLocal_279, iLocal_204[0x0000000C], 0x00000001) < 90f)
									{
										unk_0x9A82EEAF6CA12AEE(0.3f);
										unk_0xB9BBC76CD5A81754(iLocal_204[0x0000000C], 0f, 0f, 0f, 0x00000001, 0x000007D0, 0x000003E8, 0x000001F4);
										iLocal_245 = unk_0x1C0640BA9A7327B3();
										iLocal_463 = 0x00000001;
									}
								}
							}
						}
						else if (iLocal_330 == 0x00000001)
						{
							if (iLocal_380 == 0x00000000)
							{
								if (!unk_0xE934758D273C899A(iLocal_204[0x0000000C]))
								{
									unk_0xCEAA091B490F8407(iLocal_258, "Trevor_4_747_Carsplosion", iLocal_204[0x0000000C], 0x00000000, 0x00000000, 0x00000000);
									unk_0x0DC87D17DC2658DC(iLocal_204[0x0000000C], 0x00000001, 0x00000000);
									iLocal_380 = 0x00000001;
								}
							}
						}
					}
				}
				if (iLocal_463 == 0x00000001)
				{
				}
				if (iLocal_462 == 0x00000000 && iLocal_463 == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000C]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000C], 0x00000000))
						{
							vLocal_317 = { unk_0x68F4C0EC296D3901(iLocal_204[0x0000000C], 0x00000001) };
						}
					}
					vLocal_318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
					if (unk_0x1C0640BA9A7327B3() > iLocal_245 + 1579 || vLocal_318.y < vLocal_317.y)
					{
						unk_0x9A82EEAF6CA12AEE(1f);
						unk_0x29D5132FBDCF2B1E(0x00000000);
						iLocal_462 = 0x00000001;
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 105000f && unk_0x9901AABAC4D4C590(iLocal_278) < 113000f)
							{
								unk_0xA0D09682534C2176(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000D]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000D], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x0000000D]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_278))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_278))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 108830f)
										{
											unk_0x9BAC3470A92767CB(iLocal_204[0x0000000D], 0x00000000);
											unk_0xE8832A9E16A57A1F(iLocal_204[0x0000000D], 0x00000001, 0x00000001);
											unk_0x120A395B0ECB8EA5(iLocal_204[0x0000000D], 0x00000000);
											SYSTEM::SETTIMERA(0x00000000);
											iLocal_431 = 0x00000001;
										}
									}
								}
							}
						}
						else if (iLocal_431 == 0x00000001)
						{
							unk_0xD458AC1C1D29C3B4(iLocal_204[0x0000000D], 0x00000000, 0x00000000);
							unk_0x5A751CC648EB6940(iLocal_204[0x0000000D], 0x00000001);
							unk_0xD458AC1C1D29C3B4(unk_0xA30B8362589C124A(iLocal_204[0x0000000D], 0xFFFFFFFF, 0x00000000), 0x00000000, 0x00000000);
						}
					}
				}
				if (iLocal_427 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_204[0x00000005]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000005], 0x00000000))
						{
							unk_0x446EA2500F021666(iLocal_204[0x00000005], 0x00000000);
							unk_0xE121AE1BBF90E186(iLocal_204[0x00000005], 0x00000001);
							iLocal_427 = 0x00000001;
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000F]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000F], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x0000000F]))
						{
							if (unk_0xC844350D5D58C99A(iLocal_278))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
								{
									if (unk_0x20D6474D5F4B9FC6(iLocal_278))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 104989f)
										{
											unk_0xC55F2A0377488064(iLocal_204[0x0000000F]);
											func_265(iLocal_204[0x0000000F], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 0x00000001);
											func_265(iLocal_204[0x0000000F], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 0x00000001);
											unk_0x0DC87D17DC2658DC(iLocal_204[0x0000000F], 0x00000001, 0x00000000);
											unk_0x8B4C4CA774181102(4f, 4f, 0x00000004);
											unk_0xCEAA091B490F8407(0xFFFFFFFF, "Trevor_4_747_Carsplosion", iLocal_204[0x0000000F], 0x00000000, 0x00000000, 0x00000000);
											unk_0x42740B44BA8D7B43("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_278))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) > 112000f)
							{
								unk_0x29398344B9E5B8A7("BB_MOLLY_2");
								unk_0x3F423BF5B8125A50("misssolomon_3");
								unk_0x3F423BF5B8125A50("move_f@film_reel_arms");
								iLocal_224 = 0x00000001;
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				if (iLocal_439 == 0x00000000)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_439 = 0x00000001;
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_288[0x00000000]))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_288[0x00000000], 0x00000000))
					{
						unk_0x06FF977AA95DCCE3(iLocal_288[0x00000000], 0x00000000);
						unk_0x046C362CF15F1935(&(iLocal_288[0x00000000]));
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_275[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_275[0x00000000]))
					{
						unk_0xA3BF0AA5A2608191(iLocal_275[0x00000000]);
						unk_0x6DAD7906B73F064D(&(iLocal_275[0x00000000]));
					}
				}
				if (iLocal_394 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 115000f)
								{
									unk_0x29398344B9E5B8A7("Trev4_5");
									unk_0x523BCC9DC80CD82F(joaat("prop_cs_film_reel_01"));
									if (!unk_0xEB880D98B5988D0C())
									{
										unk_0x9E632F16E887F781(-930.7f, -2916.9f, 13.4f, 10f, 0x00000000);
									}
									iLocal_394 = 0x00000001;
								}
							}
						}
					}
				}
				if (iLocal_405 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 120000f)
								{
									if (!unk_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0x8BC9595FD2792B5D("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x8F741CB9D8AB80F4(iLocal_278);
								}
								if (unk_0x9901AABAC4D4C590(iLocal_278) > 125513f)
								{
									unk_0xC55F2A0377488064(iLocal_278);
									unk_0x1E9649458B15960F(iLocal_278, 0x00000001);
									func_264();
									unk_0xEFED0CD6E25037B9();
									unk_0x17E8C6920A1E386F(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0x00000001, 0x00000000);
									unk_0x8910D3D58E0132B8("TREVOR_4_MAIN_CHASE");
									if (!unk_0x9F4FE516EAACCFC5(iLocal_303))
									{
										iLocal_303 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
									}
									if (!unk_0x9F4FE516EAACCFC5(iLocal_302))
									{
										iLocal_302 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
									}
									iLocal_236 = unk_0x1C0640BA9A7327B3();
									unk_0xF3039DE1FDB4F6FD(0x00000001);
									unk_0xB975E4541DDAB1F5(0x00000000);
									iLocal_224 = 0x00000002;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000002:
				vLocal_318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				unk_0x8F741CB9D8AB80F4(iLocal_278);
				if (iLocal_439 == 0x00000000)
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_439 = 0x00000001;
					}
				}
				if (iLocal_405 == 0x00000000)
				{
					if (unk_0x0EB28750412C3A5A(vLocal_318, -930.7f, -2916.9f, 13.4f, 0x00000001) < 45f)
					{
						iLocal_224 = 0x00000003;
					}
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0x0A059E0DB9253280(iLocal_278))
						{
							if (iLocal_439 == 0x00000001)
							{
								iLocal_224 = 0x00000003;
							}
						}
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_236 + 5000 && iLocal_439 == 0x00000001)
					{
						iLocal_224 = 0x00000003;
					}
				}
				break;
			
			case 0x00000003:
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				unk_0x8F741CB9D8AB80F4(iLocal_278);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
					{
					}
				}
				if (iLocal_415 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (!unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (unk_0xB4AE0788C1587752("misssolomon_3"))
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
									{
										if (!unk_0xC844350D5D58C99A(iLocal_295))
										{
											if (unk_0xB87F6CF6E5628C67(joaat("prop_cs_film_reel_01")))
											{
												iLocal_295 = unk_0x7707E48765093646(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 0x00000001, 0x00000001, 0x00000000);
												unk_0x9F528B1B53FBC5D9(iLocal_295, iLocal_264, unk_0x4A089F2B762B8D33(iLocal_264, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
											}
										}
										if (!unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
										{
											unk_0x1E9649458B15960F(iLocal_278, 0x00000000);
											iLocal_250 = unk_0xE9744DB7B8CA6965(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 0x00000002);
											unk_0xE14EC663EED44AD5(iLocal_278, iLocal_250, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0x00000000, 1000f);
											unk_0x915804B434753CBD(iLocal_264, iLocal_250, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 0x00000005, 0x00000000, 0x447A0000, 0x00000000);
											unk_0xEFC3DF9D33E248D8(iLocal_250, 0x00000000);
											unk_0xC92DB9682A650680("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_415 = 0x00000001;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_417 == 0x00000000)
				{
					if (iLocal_415 == 0x00000001)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
						{
							if (unk_0x3D1053F9EB43B7AD(iLocal_264, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
								{
									unk_0x1BF8B16C32704027(iLocal_264, -1000f, 0x00000001);
								}
								unk_0x327AAEE25F323797(iLocal_264);
								unk_0x11AD11297DC58CC7(iLocal_264, 0x00000001);
								unk_0xA47B46945FF6DE74(iLocal_264, -934.8388f, -2932.831f, 12.9649f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(iLocal_264, 236.5739f);
								unk_0xF44B0E19CAC31C33(iLocal_264, "BB_MOLLY_2", 0x00000001, 0x00000004, 0xFFFFFFFF);
								if (unk_0xB4AE0788C1587752("move_f@film_reel_arms"))
								{
									unk_0xC6EB89C59F2AF6B8(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								iLocal_417 = 0x00000001;
							}
						}
					}
				}
				if (iLocal_405 == 0x00000000)
				{
					if (iLocal_425 == 0x00000000)
					{
						if (iLocal_424 == 0x00000000)
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
								{
									if (unk_0xA45992A6CE82FB43(iLocal_250) > 0.18f || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -930.7f, -2916.9f, 13.4f, 0x00000001) < 10f)
									{
										iLocal_225 = 0x00000000;
										iLocal_424 = 0x00000001;
									}
								}
							}
						}
						while (iLocal_424 == 0x00000001)
						{
							unk_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0x00000000);
							switch (iLocal_225)
							{
								case 0x00000000:
									unk_0x86F44313DFA8F00C(iLocal_303, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
									unk_0x86F44313DFA8F00C(iLocal_302, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
									unk_0xF1E4C781086FABC1(iLocal_302, iLocal_303, 0x00000FA0, 0x00000001, 0x00000001);
									unk_0xBFE31971E49FA500(0x00000000);
									unk_0x8BCB70EB440DED83(0x00000000);
									unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
									if (unk_0xC844350D5D58C99A(iLocal_287))
									{
										unk_0xA954465BA6FDEFE2(&iLocal_287);
									}
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										unk_0xA47B46945FF6DE74(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), -918.6157f, -2926.646f, 12.9667f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
										unk_0xD8F6A53F4799FAFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 47.9465f);
									}
									else
									{
										unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -918.6157f, -2926.646f, 12.9667f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
										unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 47.9465f);
									}
									if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
									{
										func_17(&uLocal_490, 0x00000002, iLocal_264, "MOLLY", 0x00000000, 0x00000001);
										unk_0xC46BC31D2529AD8C(iLocal_264, 0x00000001);
									}
									unk_0x8B4C4CA774181102(4f, 0f, 0x00000003);
									unk_0x420FE818E70BB523(0x00000004);
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
									iLocal_451 = 0x00000000;
									iLocal_225++;
									break;
								
								case 0x00000001:
									if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
									{
										if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
										{
											if (iLocal_451 == 0x00000000)
											{
												if (unk_0xA45992A6CE82FB43(iLocal_250) > 0.3f)
												{
													if (func_263(&uLocal_490, "T1M4AUD", "SOL3_GETOUT", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
													{
														unk_0x8B4C4CA774181102(6f, 7f, 0x00000004);
														iLocal_451 = 0x00000001;
													}
												}
											}
											if (unk_0xA45992A6CE82FB43(iLocal_250) > 0.5f)
											{
												unk_0x86F44313DFA8F00C(iLocal_303, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
												unk_0x86F44313DFA8F00C(iLocal_302, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
												unk_0xF1E4C781086FABC1(iLocal_302, iLocal_303, 0x00000FA0, 0x00000001, 0x00000001);
												iLocal_248 = unk_0x1C0640BA9A7327B3();
												iLocal_225++;
											}
										}
									}
									break;
								
								case 0x00000002:
									if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
									{
										if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
										{
											if ((iLocal_248 != 0xFFFFFFFF && unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004) && (unk_0x1C0640BA9A7327B3() - iLocal_248) >= 0x000008B6)
											{
												unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
												unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
												iLocal_248 = 0xFFFFFFFF;
											}
											if (unk_0xA45992A6CE82FB43(iLocal_250) > 0.85f)
											{
												unk_0x8BCB70EB440DED83(0x00000001);
												unk_0xBFE31971E49FA500(0x00000001);
												unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
												unk_0x2FB9A57162E54BAB(0f);
												iLocal_262 = 0x14AAB82B;
												unk_0x8010B3127F058F0F(iLocal_262, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 0x00000001, 0x00000001, 0x00000000);
												unk_0x838CC054A9235BEC(iLocal_262, 1f, 0x00000000, 0x00000001);
												unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
												if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
												{
													unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
													if (unk_0xA4FD7964FEE91ED8(0x00000001) != 0x00000004 && unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
													{
														unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
													}
												}
												unk_0xC46BC31D2529AD8C(iLocal_264, 0x00000000);
												unk_0xBF40D896CA4BDBE7();
												unk_0x8B4C4CA774181102(0f, 4f, 0x00000003);
												iLocal_237 = unk_0x1C0640BA9A7327B3();
												iLocal_424 = 0x00000000;
												iLocal_425 = 0x00000001;
												iLocal_225++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0x00000000);
						}
					}
				}
				if (iLocal_425 == 0x00000001)
				{
					unk_0x1BA7FCEAFCE8D46E(iLocal_262, 0x00000005, 0x00000000, 0x00000001);
					if (iLocal_468 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_264))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_264, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0x00000000, 0x00000001, 0x00000000))
								{
									unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									iLocal_468 = 0x00000001;
								}
							}
						}
					}
				}
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x562F77A7F33D2E46("SOL_3_MAIN_CHASE"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_MAIN_CHASE");
					}
					if (unk_0x562F77A7F33D2E46("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0x8910D3D58E0132B8("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x562F77A7F33D2E46("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0x8BC9595FD2792B5D("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					func_248();
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0x00000000, 0x00000001, 0x00000001))
				{
					if (iLocal_417 == 0x00000000)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_264, "misssolomon_3", "molly_escapes_car_mol", 0x00000003))
							{
								unk_0x1BF8B16C32704027(iLocal_264, -1000f, 0x00000001);
							}
							unk_0x327AAEE25F323797(iLocal_264);
							unk_0x11AD11297DC58CC7(iLocal_264, 0x00000001);
							unk_0xA47B46945FF6DE74(iLocal_264, -934.8388f, -2932.831f, 12.9649f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iLocal_264, 236.5739f);
							unk_0xF44B0E19CAC31C33(iLocal_264, "BB_MOLLY_2", 0x00000001, 0x00000004, 0xFFFFFFFF);
							if (unk_0xB4AE0788C1587752("move_f@film_reel_arms"))
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_264, "move_f@film_reel_arms", "run", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_417 = 0x00000001;
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_284))
					{
						unk_0xA954465BA6FDEFE2(&iLocal_284);
					}
					iLocal_223 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_222 = 0x00000005;
				}
				break;
			}
	}
}

void func_248()
{
	if (iLocal_401 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000E]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000E], 0x00000000))
			{
				iLocal_272 = unk_0xA30B8362589C124A(iLocal_204[0x0000000E], 0xFFFFFFFF, 0x00000000);
				unk_0x262EF6C6306BEA6C(iLocal_272, joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
				unk_0x73270B3C9CC833FD(iLocal_272, 0x00000001, 0x00000000);
				unk_0x11AD11297DC58CC7(iLocal_272, 0x00000001);
				unk_0x298903DD96203C2C(iLocal_272, 0x00000005);
				unk_0xD458AC1C1D29C3B4(iLocal_272, 0x00000096, 0x00000000);
				func_17(&uLocal_490, 0x00000003, iLocal_272, "TREV4POLICE3", 0x00000000, 0x00000001);
			}
		}
		iLocal_401 = 0x00000001;
	}
	else if (iLocal_400 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_272))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_272))
			{
				unk_0xA3BF0AA5A2608191(iLocal_272);
				unk_0xED253B8DDB3FFB77(iLocal_272, unk_0x68F4C0EC296D3901(iLocal_272, 0x00000001), 5f, 0x00000000, 0x00000000);
				unk_0xDD353D0E9C789D0E(&iLocal_304);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0x5DA3F35E3BFDEE66(0x00000000, unk_0x16F2683693E537C9(), 0x00001388, 0x00000001);
				unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0x75ABDC5F81978924(iLocal_304);
				unk_0x78ADC381772E3D54(iLocal_272, iLocal_304);
				unk_0xF82EA857DA10E0CD(&iLocal_304);
				iLocal_400 = 0x00000001;
			}
		}
	}
	else if (iLocal_434 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_272))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_272))
			{
				if (!unk_0x405E212DDE472467(iLocal_272, 0x00000000) && func_13(unk_0x16F2683693E537C9(), iLocal_272) < 20f)
				{
					if (!func_262())
					{
						if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
						{
							func_17(&uLocal_490, 0x00000004, iLocal_272, "SOL3COP", 0x00000000, 0x00000001);
							if (func_249(&uLocal_490, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 0x00000007, 0x00000000, 0x00000000))
							{
								iLocal_434 = 0x00000001;
							}
						}
					}
				}
			}
		}
	}
}

bool func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000001;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_250(sParam2, iParam4, 0x00000000);
}

int func_250(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
					Global_5150 = 0x00000000;
					Global_514F = 0x00000000;
					Global_4C1D = 0x00000000;
				}
				else
				{
					func_215();
					return 0x00000000;
				}
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0x00000000;
		}
		if (func_260(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_259();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam2)
			{
				func_258();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam1 == 0x0000000D)
					{
					}
					else
					{
						return 0x00000000;
					}
				}
				if (Global_4C1E.f_1 > 0x00000003)
				{
					return 0x00000000;
				}
			}
			if (Global_4BFC == 0x00000001)
			{
				return 0x00000000;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (func_257())
				{
					return 0x00000000;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0x00000000;
				}
				if (!Global_12B4E)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0x00000000;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						return 0x00000000;
					}
				}
			}
			if (func_227())
			{
				return 0x00000000;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 0x00000007:
						return 0x00000000;
						break;
					
					case 0x00000008:
						return 0x00000000;
						break;
					
					case 0x00000009:
						break;
					
					case 0x0000000A:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000009))
				{
					return 0x00000000;
				}
			}
			func_256();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_255();
		func_251();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000002)
	{
	}
	else
	{
		func_215();
	}
	return 0x00000000;
}

void func_251()
{
	if (!func_252())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 0x00000004);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

int func_252()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_89())
	{
		return 0x00000000;
	}
	if (func_253(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_253(int iParam0)
{
	return func_254(iParam0, 0x00000014);
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_255()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000045)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0x00000000);
	Global_5145 = 0x00000001;
}

void func_256()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0x00000000;
	Global_5176 = 0x00000000;
	Global_5177 = 0x00000000;
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000010);
}

int func_257()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000000;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 0x00000001;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_258()
{
	if (func_59(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				Global_4C1E = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				Global_4C1E = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				Global_4C1E = 0x00000002;
			}
			else
			{
				Global_4C1E = 0x00000000;
			}
		}
	}
	else
	{
		Global_4C1E = func_107();
		if (Global_4C1E == 0x00000091)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_4C1E > 0x00000003)
		{
			Global_4C1E = 0x00000003;
		}
	}
}

void func_259()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000F)
	{
		Global_4E7E[iVar0 /*10*/] = 0x00000000;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0x00000000;
		Global_4E7E[iVar0 /*10*/].f_8 = 0x00000000;
		iVar0++;
	}
	Global_4E7E.f_A1 = 0xFFFFFF9D;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_261(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
	if (iParam3 == 0x00000000)
	{
		Global_5520 = 0x00000001;
		Global_551E = 0x00000000;
	}
	else
	{
		Global_5520 = 0x00000000;
		Global_551E = 0x00000001;
	}
	if (iParam4 == 0x00000000)
	{
		Global_5521 = 0x00000001;
		Global_551F = 0x00000000;
	}
	else
	{
		Global_5521 = 0x00000000;
		Global_551F = 0x00000001;
	}
}

int func_262()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_263(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_261(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_514E = 0x00000000;
	Global_5153 = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	return func_250(sParam2, iParam3, 0x00000000);
}

void func_264()
{
	if (unk_0x83A8177D302E1A7E(iLocal_667[0x00000000]))
	{
		unk_0xF7E25143642732EA(iLocal_667[0x00000000], 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_667[0x00000001]))
	{
		unk_0xF7E25143642732EA(iLocal_667[0x00000001], 0x00000000);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_667[0x00000002]))
	{
		unk_0xF7E25143642732EA(iLocal_667[0x00000002], 0x00000000);
	}
	if (iLocal_381 == 0x00000001)
	{
		unk_0x43A06902454A1172(iLocal_259);
		iLocal_389 = 0x00000000;
	}
}

void func_265(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			unk_0xC55F2A0377488064(iParam0);
		}
		vVar1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
		if (bParam4)
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, vParam1) };
		}
		else
		{
			vVar0 = { vParam1 };
		}
		vVar2 = { func_266(vVar0 - vVar1) };
		vVar2 = { vVar2 * Vector(fParam3, fParam3, fParam3) };
		unk_0xDFC6BA855748EB10(iParam0, 0x00000003, vVar2, vParam2, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
	}
}

Vector3 func_266(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_267(int iParam0, float fParam1)
{
	int iVar0;
	vector3 vVar1;
	
	if (iLocal_166 < 0x0000000F)
	{
		if (iLocal_166 == 0x00000000)
		{
			vLocal_181 = { 99999.9f, 99999.9f, 99999.9f };
			vLocal_182 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				iVar0 = unk_0x60755EFECF81FC68(iParam0);
				vVar1 = { unk_0xAA8A22FF67DFFDCD(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_166 - 0x00000001)) * 2000f))) };
				if (vVar1.x < vLocal_181.x)
				{
					vLocal_181.x = vVar1.x;
				}
				if (vVar1.y < vLocal_181.y)
				{
					vLocal_181.y = vVar1.y;
				}
				if (vVar1.z < vLocal_181.z)
				{
					vLocal_181.z = vVar1.z;
				}
				if (vVar1.x > vLocal_182.x)
				{
					vLocal_182.x = vVar1.x;
				}
				if (vVar1.y > vLocal_182.y)
				{
					vLocal_182.y = vVar1.y;
				}
				if (vVar1.z > vLocal_182.z)
				{
					vLocal_182.z = vVar1.z;
				}
			}
		}
		iLocal_166++;
	}
	else if (!bLocal_106)
	{
		unk_0xF5894FEB702E7E76(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 0x00000001);
		vLocal_181 = { vLocal_181 + Vector((fLocal_148 * -1f), (fLocal_148 * -1f), (fLocal_148 * -1f)) };
		vLocal_182 = { vLocal_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
		vLocal_179 = { vLocal_181 };
		vLocal_180 = { vLocal_182 };
		unk_0xF858EFDE1871B5F2(vLocal_179, vLocal_180, 0x00000000, 0x00000000);
		iLocal_166 = 0x00000000;
	}
}

void func_268()
{
	iLocal_89 = 0x00000001;
}

void func_269()
{
	if (iLocal_331 == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_278))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_278))
			{
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 55000f)
				{
					unk_0x523BCC9DC80CD82F(0x73920F8E);
					unk_0x523BCC9DC80CD82F(joaat("s_m_y_fireman_01"));
					unk_0x3F423BF5B8125A50("missheist_agency3aig_lift_waitped_a");
					if ((unk_0xB87F6CF6E5628C67(0x73920F8E) && unk_0xB87F6CF6E5628C67(joaat("s_m_y_fireman_01"))) && unk_0xB4AE0788C1587752("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0xC844350D5D58C99A(iLocal_282))
						{
							unk_0x536F1BE96C726C4B(-1129.566f, -2319.888f, 12.9445f, 10f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_282 = unk_0x122AAB0B1D6F55AD(0x73920F8E, -1129.566f, -2319.888f, 12.9445f, 16.5423f, 0x00000001, 0x00000001, 0x00000000);
						}
						iLocal_667[0x00000000] = unk_0xB055A4268B938F30("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (iLocal_381 == 0x00000000)
						{
							unk_0xEB819BD1E585E9CB(iLocal_259, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_381 = 0x00000001;
						}
						iLocal_667[0x00000001] = unk_0xB055A4268B938F30("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_667[0x00000002] = unk_0xB055A4268B938F30("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (!unk_0xC844350D5D58C99A(iLocal_265[0x00000000]))
						{
							iLocal_265[0x00000000] = unk_0x852A19533F896693(iLocal_282, 0x00000015, joaat("s_m_y_fireman_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000000], 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000000], 0x00000001);
							unk_0xC857FDE2E17345F2(iLocal_265[0x00000000], -1147.07f, -2320.65f, 18.93f, 0x41A00000);
						}
						if (!unk_0xC844350D5D58C99A(iLocal_265[0x00000001]))
						{
							iLocal_265[0x00000001] = unk_0x36F2404464202779(0x00000015, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 0x00000001, 0x00000001);
							unk_0xC6EB89C59F2AF6B8(iLocal_265[0x00000001], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000001], 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000001], 0x00000001);
						}
						if (!unk_0xC844350D5D58C99A(iLocal_265[0x00000002]))
						{
							iLocal_265[0x00000002] = unk_0x36F2404464202779(0x00000015, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 0x00000001, 0x00000001);
							unk_0xC6EB89C59F2AF6B8(iLocal_265[0x00000002], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000002], 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000002], 0x00000001);
						}
						if (!unk_0xC844350D5D58C99A(iLocal_265[0x00000003]))
						{
							iLocal_265[0x00000003] = unk_0x36F2404464202779(0x00000015, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 0x00000001, 0x00000001);
							unk_0xC6EB89C59F2AF6B8(iLocal_265[0x00000003], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000003], 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000003], 0x00000001);
						}
						unk_0x71199B01895C6202(joaat("s_m_y_fireman_01"));
						unk_0x71199B01895C6202(0x73920F8E);
						iLocal_331 = 0x00000001;
					}
				}
			}
		}
	}
	if (iLocal_331 == 0x00000001)
	{
		if (iLocal_465[0x00000000] == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_265[0x00000001]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000001]))
				{
					if (iLocal_466[0x00000000] == 0x00000000)
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_265[0x00000001], "missheist_agency3aig_lift_waitped_a", "idle_b", 0x00000003))
						{
							iLocal_466[0x00000000] = 0x00000001;
						}
					}
					if (iLocal_466[0x00000000] == 0x00000001)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_265[0x00000001], "missheist_agency3aig_lift_waitped_a", "idle_b", 0x00000003))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_265[0x00000001], 0xFFFFFFFF);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000001], 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000001], 0x00000000);
							iLocal_465[0x00000000] = 0x00000001;
						}
					}
				}
			}
		}
		if (iLocal_465[0x00000001] == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_265[0x00000002]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000002]))
				{
					if (iLocal_466[0x00000001] == 0x00000000)
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_265[0x00000002], "missheist_agency3aig_lift_waitped_a", "idle_a", 0x00000003))
						{
							iLocal_466[0x00000001] = 0x00000001;
						}
					}
					if (iLocal_466[0x00000001] == 0x00000001)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_265[0x00000002], "missheist_agency3aig_lift_waitped_a", "idle_a", 0x00000003))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_265[0x00000002], 0xFFFFFFFF);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000002], 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000002], 0x00000000);
							iLocal_465[0x00000001] = 0x00000001;
						}
					}
				}
			}
		}
		if (iLocal_465[0x00000002] == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_265[0x00000003]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000003]))
				{
					if (iLocal_466[0x00000002] == 0x00000000)
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_265[0x00000003], "missheist_agency3aig_lift_waitped_a", "idle_c", 0x00000003))
						{
							iLocal_466[0x00000002] = 0x00000001;
						}
					}
					if (iLocal_466[0x00000002] == 0x00000001)
					{
						if (!unk_0xB4ECF989E2C1DAC8(iLocal_265[0x00000003], "missheist_agency3aig_lift_waitped_a", "idle_c", 0x00000003))
						{
							unk_0x8BE3D040D15AEA1D(iLocal_265[0x00000003], 0xFFFFFFFF);
							unk_0xFADC0A217229F6B5(iLocal_265[0x00000003], 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_265[0x00000003], 0x00000000);
							iLocal_465[0x00000002] = 0x00000001;
						}
					}
				}
			}
		}
	}
}

void func_270()
{
	if (iLocal_402 == 0x00000000)
	{
		unk_0x523BCC9DC80CD82F(joaat("police3"));
		unk_0x523BCC9DC80CD82F(joaat("s_m_y_cop_01"));
		unk_0x36187931D29E5BBE(0x00000001, "BB_AIChase");
		if (unk_0xB87F6CF6E5628C67(joaat("police3")) && unk_0xB87F6CF6E5628C67(joaat("s_m_y_cop_01")))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 15500f)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						iLocal_288[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 0x00000001, 0x00000001, 0x00000000);
						iLocal_275[0x00000000] = unk_0x852A19533F896693(iLocal_288[0x00000000], 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x11AD11297DC58CC7(iLocal_275[0x00000000], 0x00000001);
						unk_0x2E1E5367A885F9B7(iLocal_288[0x00000000], "SOL_3_POLICE_CARS_Group", 0x00000000);
						func_127(iLocal_275[0x00000000], 0x00000000);
						unk_0x56FDC9ADE35F7DB0(iLocal_288[0x00000000], 0x00000001, 0x00000001, 0x00000000);
						unk_0x4D3C3C0B0DE2663E(iLocal_288[0x00000000], 0x00000001, "BB_AIChase", 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_275[0x00000000], joaat("weapon_pistol"), 0x000003E8, 0x00000001, 0x00000001);
						unk_0xAA280AF45BCCCF21(iLocal_288[0x00000000], 0x00000001);
						unk_0x71199B01895C6202(joaat("police3"));
						unk_0x71199B01895C6202(joaat("s_m_y_cop_01"));
						iLocal_402 = 0x00000001;
					}
				}
			}
		}
	}
	if (iLocal_402 == 0x00000001)
	{
		if (iLocal_429[0x00000000] == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_288[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_288[0x00000000], 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_288[0x00000000]))
					{
						unk_0xA9FBE21EB8701B34(iLocal_288[0x00000000], fLocal_321);
						if (unk_0x9901AABAC4D4C590(iLocal_288[0x00000000]) > 13000f)
						{
							unk_0xC55F2A0377488064(iLocal_288[0x00000000]);
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_275[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_275[0x00000000]))
						{
							unk_0x11AD11297DC58CC7(iLocal_275[0x00000000], 0x00000001);
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x0D88E2F7C05BF3A2(iLocal_275[0x00000000], unk_0x16F2683693E537C9());
								unk_0xFADC0A217229F6B5(iLocal_275[0x00000000], 0x00000001);
							}
							else
							{
								unk_0x6C3AE6E278DB3D0E(iLocal_275[0x00000000], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								unk_0xFADC0A217229F6B5(iLocal_275[0x00000000], 0x00000001);
							}
							unk_0xDB8844D4B7C60440(0x00000001, "BB_AIChase");
							iLocal_238 = unk_0x1C0640BA9A7327B3();
							iLocal_429[0x00000000] = 0x00000001;
						}
					}
				}
			}
		}
		if (iLocal_430[0x00000000] == 0x00000000)
		{
			if (iLocal_429[0x00000000] == 0x00000001)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_238 + 500)
				{
					if (unk_0xC844350D5D58C99A(iLocal_275[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_275[0x00000000]))
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x91CF06FFB63510D4(iLocal_275[0x00000000], 0x00000010, 0x00000001);
								unk_0x91CF06FFB63510D4(iLocal_275[0x00000000], 0x00000001, 0x00000001);
								iLocal_430[0x00000000] = 0x00000001;
							}
							else
							{
								iLocal_430[0x00000000] = 0x00000001;
							}
						}
					}
				}
			}
		}
	}
}

void func_271()
{
	if (!iLocal_333)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000014], 0x00000000))
		{
			iLocal_301 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
			unk_0xE3BB8E05FCEB3FBE(iLocal_301, 0x00000001);
			iLocal_334 = 0x00000000;
			iLocal_333 = 0x00000001;
		}
	}
	else if (func_286(&uLocal_28, 0x00000001, 0x00000000, 0x00000000) && iLocal_405 == 0x00000000)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		if (func_262())
		{
			unk_0x790015DC92C918E2();
			func_212();
		}
		if (iLocal_363[0x00000002] == 0x00000000)
		{
			if (!unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
			{
				unk_0x8BC9595FD2792B5D("SOL_3_CHOPPER_CAM");
			}
			unk_0x4D7F4CC43D4D0DE3(iLocal_261, "Trevor_4_747_TV", 0x00000000, 0x00000001);
			iLocal_363[0x00000002] = 0x00000001;
		}
		func_277(0x00000001, 0x00000001, 0x0000001E, 0x00000005, 0x00000000);
		if (iLocal_352 == 0x00000000)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_TEXT");
			func_276("TRV4_NEWS1");
			func_276("");
			unk_0x7E60D21B163E9D56();
			iLocal_352 = 0x00000001;
		}
		if (iLocal_353 == 0x00000000)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(1f);
			unk_0x7C19E5E4784BD7CF(0f);
			func_276("TRV4_NEWS2");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(0f);
			func_276("TRV4_NEWS6");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(1f);
			func_276("TRV4_NEWS7");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(2f);
			func_276("TRV4_NEWS8");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(3f);
			func_276("TRV4_NEWS9");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7C19E5E4784BD7CF(4f);
			func_276("TRV4_NEWS10");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iLocal_305, "DISPLAY_SCROLL_TEXT");
			unk_0x7C19E5E4784BD7CF(1f);
			unk_0x7C19E5E4784BD7CF(0f);
			unk_0x7E60D21B163E9D56();
			iLocal_243 = (unk_0x1C0640BA9A7327B3() - 0x00001388);
			iLocal_353 = 0x00000001;
		}
		if (unk_0x1C0640BA9A7327B3() > iLocal_243 + 5000)
		{
			func_275();
			iLocal_243 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_354 == 0x00000000)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 25000f && unk_0x9901AABAC4D4C590(iLocal_278) < 50000f)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(1f);
						func_276("TRV4_NEWS5");
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7E60D21B163E9D56();
						iLocal_354 = 0x00000001;
					}
				}
			}
		}
		if (iLocal_355 == 0x00000000)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 77600f && unk_0x9901AABAC4D4C590(iLocal_278) < 115000f)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(2f);
						func_276("TRV4_NEWS3");
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(2f);
						unk_0x7E60D21B163E9D56();
						iLocal_355 = 0x00000001;
					}
				}
			}
		}
		if (iLocal_356 == 0x00000000)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 115000f)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_305, "SET_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(3f);
						func_276("TRV4_NEWS4");
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(iLocal_305, "DISPLAY_SCROLL_TEXT");
						unk_0x7C19E5E4784BD7CF(1f);
						unk_0x7C19E5E4784BD7CF(3f);
						unk_0x7E60D21B163E9D56();
						iLocal_356 = 0x00000001;
					}
				}
			}
		}
		unk_0x3039591AD3E735CE(iLocal_226);
		unk_0x6567AE843FADBA94(iLocal_305, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
		if (iLocal_334 == 0x00000000)
		{
			func_226(0x00000001, 0x00000001, 0x00000001, 0x00000000);
			unk_0x91F5B0244AAE6222(iLocal_301, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0xE3BB8E05FCEB3FBE(iLocal_301, 0x00000001);
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0xBFE31971E49FA500(0x00000000);
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
			func_274();
			iLocal_334 = 0x00000001;
		}
		func_272();
		unk_0x3584F71E5CA29322(0x00000006);
		unk_0x3584F71E5CA29322(0x00000007);
		unk_0x3584F71E5CA29322(0x00000008);
		unk_0x3584F71E5CA29322(0x00000009);
		unk_0x3584F71E5CA29322(0x00000001);
		unk_0x3584F71E5CA29322(0x00000002);
		unk_0x3584F71E5CA29322(0x0000000F);
		unk_0x3584F71E5CA29322(0x00000003);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000055, 0x00000001);
		unk_0xC0FB48F966BB7D11(0x00000000);
	}
	else if (iLocal_334)
	{
		func_226(0x00000000, 0x00000001, 0x00000001, 0x00000000);
		unk_0xE3BB8E05FCEB3FBE(iLocal_301, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xBFE31971E49FA500(0x00000001);
		if (unk_0x562F77A7F33D2E46("SOL_3_CHOPPER_CAM"))
		{
			unk_0x8910D3D58E0132B8("SOL_3_CHOPPER_CAM");
		}
		unk_0x55D0A2DB35045A35(iLocal_261);
		func_246();
		unk_0xC0FB48F966BB7D11(0x00000001);
		iLocal_363[0x00000002] = 0x00000000;
		iLocal_334 = 0x00000000;
	}
}

void func_272()
{
	unk_0xC2127C0F64D6A3B9();
	func_273();
}

void func_273()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_274()
{
	Global_F04F = 0x00000001;
}

void func_275()
{
	if (iLocal_228 > 0x00000004)
	{
		iLocal_228 = 0x00000000;
	}
	unk_0x7E60C62A7CE58FC8(iLocal_305, "DISPLAY_SCROLL_TEXT");
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x3CAEA85DA607305E(iLocal_228);
	unk_0x7E60D21B163E9D56();
	iLocal_228++;
}

void func_276(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_277(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iParam4 == 0x00000001)
		{
			if (iLocal_50 <= 0x000000E1 && iLocal_44 == 0x00000000)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 0x000000E1)
				{
					iLocal_44 = 0x00000001;
				}
			}
			else if (iLocal_50 >= 0x0000001E)
			{
				iLocal_50 = (iLocal_50 - 0x0000001E);
				if (iLocal_50 <= 0x0000001E)
				{
					iLocal_44 = 0x00000000;
				}
			}
		}
		func_284(0x00000001, 0x000000C8);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0x00000000)
		{
			iLocal_48++;
			func_281(0x00000001, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 0x00000001;
				iLocal_49 = unk_0x09AC81E49EA267F7(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0x00000000)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 0x00000001);
				func_281(0x00000001, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0x00000000;
				}
			}
		}
		if (bParam1)
		{
			func_278(0x00000001, 0x00000028, 0x00000001, 0x00000001, 0x00000001);
		}
	}
}

void func_278(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_280(0x00000000))
			{
				func_279(0x00000000);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_280(0x00000001))
			{
				func_279(0x00000001);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_280(0x00000002))
			{
				func_279(0x00000002);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_279(int iParam0)
{
	if (iParam0 < 0x00000020)
	{
		unk_0x5D96D8530B3D0904(&iLocal_54, iParam0);
	}
}

int func_280(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_54, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_281(bool bParam0, int iParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		iLocal_46 = func_283(0x00000005);
		iLocal_45 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_283(0x00000005);
		}
		if (iLocal_46 == 0x00000000)
		{
			if (!func_280(0x00000003))
			{
				func_279(0x00000003);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
		}
		if (iLocal_46 == 0x00000001)
		{
			if (!func_280(0x00000004))
			{
				func_279(0x00000004);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
		}
		if (iLocal_46 == 0x00000002)
		{
			if (!func_280(0x00000005))
			{
				func_279(0x00000005);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
		}
		if (iLocal_46 == 0x00000003)
		{
			if (!func_280(0x00000006))
			{
				func_279(0x00000006);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
		}
		if (iLocal_46 == 0x00000004)
		{
			if (!func_280(0x00000007))
			{
				func_279(0x00000007);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_282(bLocal_40)), (1f * func_282(bLocal_41)), 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
		}
	}
}

float func_282(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_283(int iParam0)
{
	if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000032) > 0x00000019)
	{
		bLocal_40 = 0x00000001;
	}
	else
	{
		bLocal_40 = 0x00000000;
	}
	if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000032) > 0x00000019)
	{
		bLocal_41 = 0x00000001;
	}
	else
	{
		bLocal_41 = 0x00000000;
	}
	return unk_0x09AC81E49EA267F7(0x00000000, iParam0);
}

void func_284(bool bParam0, int iParam1)
{
	if (!func_285())
	{
		func_285();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_280(0x00000008))
			{
				func_279(0x00000008);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
			iLocal_42 = 0x00000000;
		}
		else
		{
			if (!func_280(0x00000008))
			{
				func_279(0x00000008);
			}
			else
			{
				unk_0x539E86AE011A8B38("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam1, 0x00000000);
			}
			iLocal_42 = 0x00000001;
		}
	}
}

int func_285()
{
	unk_0x0D3BE1DE0262A012("digitalOverlay", 0x00000000);
	if (unk_0x27117E2CDD4D67C3("digitalOverlay"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_286(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	switch (uParam0->f_5)
	{
		case 0x00000000:
			uParam0->f_7 = 0x00000000;
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_290(uParam0))
			{
				uParam0->f_7 = 0x00000001;
				uParam0->f_5 = 0x00000004;
			}
			break;
		
		case 0x00000001:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (!func_292(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
			}
			else
			{
				uParam0->f_5 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_291(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_291(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
				{
					uParam0->f_5 = 0x00000000;
				}
				else if (!func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (func_289(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_288(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
					{
						uParam0->f_5 = 0x00000000;
					}
					else if (func_289(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_290(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_301(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_287();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

void func_287()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

int func_288(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_289(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_290(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0x00000000)
	{
		iVar0 = (uParam0->f_A / 0x00000002);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_292(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_293(bool bParam0)
{
	if (bParam0)
	{
		func_299();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_298(0x00000000))
		{
			func_294(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_294(int iParam0)
{
	if (func_297())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_296())
		{
			func_295(0x00000001, 0x00000001);
		}
		else
		{
			func_295(0x00000000, 0x00000000);
		}
	}
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
	}
	Global_5145 = 0x00000005;
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001E);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001E);
	}
	if (!func_227())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_295(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_298(0x00000000))
		{
			Global_4CD0 = 0x00000001;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 0x00000001)
	{
		Global_4CD0 = 0x00000000;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_296()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_297()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_298(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_299()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_300(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_301(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (bParam2)
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000000;
	}
	if (func_298(0x00000000))
	{
		return 0x00000000;
	}
	if (func_308())
	{
		return 0x00000000;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_E545)
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				return 0x00000000;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0x00000000;
			}
		}
	}
	if ((func_307() || func_306(Global_440000.f_38DB3)) || func_305())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_304(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_303(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_302(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_302(int iParam0)
{
	if (iParam0 != func_89())
	{
		if (func_181(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_181(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_303(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			switch (iParam1)
			{
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
					return 0x00000001;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0x00000000)
					{
						return 0x00000001;
					}
					break;
				}
			}
	}
	return 0x00000000;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 0x00000001)
				{
					iVar3 = 0xFFFFFFFF;
					return iVar3;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 0x00000001);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0x00000000) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_305()
{
	return Global_2564C8.f_11;
}

bool func_306(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_307()
{
	return Global_2564C8.f_10;
}

bool func_308()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_309(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam1))
		{
			unk_0xA9FBE21EB8701B34(iParam1, fParam2);
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
			vVar1 = { unk_0x835730A2D89F6093(iParam1, 0x00000002) };
			unk_0x608A456FDD8A83D8(iParam0, vVar0);
			unk_0x5F3CBA6EB9341C90(iParam0, vVar1, 0x00000002);
		}
	}
}

void func_310(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		unk_0x4A4806F9D471E491(iParam1, 0x00000000, 0x00000000);
		unk_0x20641932E5104B25(iParam1, 0x00000000, 0x00000000);
		unk_0xE121AE1BBF90E186(iParam1, 0x00000001);
		unk_0xAA6B3A4292417750(iParam1, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x4D3C3C0B0DE2663E(iParam1, iParam3, sParam2, 0x00000001);
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		unk_0x608A456FDD8A83D8(iParam0, vVar0);
		unk_0x5F3CBA6EB9341C90(iParam0, unk_0x835730A2D89F6093(iParam1, 0x00000002), 0x00000002);
	}
}

void func_311()
{
	if (iLocal_260 != 0xFFFFFFFF)
	{
		if (iLocal_382 == 0x00000001)
		{
			if (iLocal_374 == 0x00000000)
			{
				unk_0x43A06902454A1172(iLocal_260);
				iLocal_384 = 0x00000000;
				iLocal_374 = 0x00000001;
			}
		}
	}
	if (iLocal_255 != 0xFFFFFFFF)
	{
		if (iLocal_378 == 0x00000001)
		{
			if (iLocal_376 == 0x00000000)
			{
				unk_0x43A06902454A1172(iLocal_255);
				iLocal_385 = 0x00000000;
				iLocal_376 = 0x00000001;
			}
		}
	}
	if (iLocal_256 != 0xFFFFFFFF)
	{
		if (iLocal_383 == 0x00000001)
		{
			if (iLocal_365 == 0x00000000)
			{
				unk_0x43A06902454A1172(iLocal_256);
				iLocal_386 = 0x00000000;
				iLocal_365 = 0x00000001;
			}
		}
	}
	if (iLocal_257 != 0xFFFFFFFF)
	{
		if (iLocal_379 == 0x00000001)
		{
			if (iLocal_375 == 0x00000000)
			{
				unk_0x43A06902454A1172(iLocal_257);
				iLocal_387 = 0x00000000;
				iLocal_375 = 0x00000001;
			}
		}
	}
	if (iLocal_258 != 0xFFFFFFFF)
	{
		if (iLocal_380 == 0x00000001)
		{
			if (iLocal_377 == 0x00000000)
			{
				unk_0x43A06902454A1172(iLocal_258);
				iLocal_388 = 0x00000000;
				iLocal_377 = 0x00000001;
			}
		}
	}
}

void func_312()
{
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000013]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x00000013], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x00000013]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x00000013], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000007]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x00000007], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x00000007]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x00000007], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000008]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x00000008], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x00000008]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x00000008], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000009]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x00000009], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x00000009]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x00000009], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000A]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x0000000A], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x0000000A]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x0000000A], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000B]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x0000000B], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x0000000B]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x0000000B], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000D]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x0000000D], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x0000000D]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x0000000D], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000E]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x0000000E], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x0000000E]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x0000000E], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000F]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x0000000F], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x0000000F]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x0000000F], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000010]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x00000010], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x00000010]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x00000010], 0x00000001);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000011]))
	{
		if (!unk_0x437347B10A200C4B(iLocal_204[0x00000011], 0x00000000))
		{
			if (!unk_0xB9F5AD0599FD42F7(iLocal_204[0x00000011]))
			{
				unk_0xAA280AF45BCCCF21(iLocal_204[0x00000011], 0x00000001);
			}
		}
	}
}

void func_313()
{
	if (func_344())
	{
		fLocal_322 = 0.5f;
	}
	else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xD890711CFD5AF100(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 40f)
		{
			fLocal_322 = 0.85f;
		}
		else
		{
			fLocal_322 = 0.9f;
		}
	}
	else
	{
		fLocal_322 = 0.9f;
	}
	if (!unk_0x437347B10A200C4B(iLocal_278, 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_278))
			{
				if (iLocal_357 == 0x00000000)
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) < 10000f)
					{
						if (func_16(unk_0x16F2683693E537C9(), iLocal_278, 0x00000001) < 100f || unk_0x0A059E0DB9253280(iLocal_278))
						{
							func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
						else
						{
							func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
					}
				}
				else if (func_16(unk_0x16F2683693E537C9(), iLocal_278, 0x00000001) > 175f)
				{
					fLocal_321 = 0.6f;
					unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
					func_314(iLocal_278, fLocal_321);
				}
				else if (unk_0x9901AABAC4D4C590(iLocal_278) < 10000f)
				{
					func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_322, 0x00000000);
					unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
					func_314(iLocal_278, fLocal_321);
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 10000f && unk_0x9901AABAC4D4C590(iLocal_278) < 23000f)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
					{
						func_340(iLocal_204[0x00000008], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_322, 0x00000001);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
					else
					{
						func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_322, 0x00000001);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 23000f && unk_0x9901AABAC4D4C590(iLocal_278) < 32000f)
				{
					if (unk_0xC844350D5D58C99A(iLocal_204[0x00000007]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000))
						{
							func_340(iLocal_204[0x00000007], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
						else if (unk_0xC844350D5D58C99A(iLocal_204[0x00000008]))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
							{
								func_340(iLocal_204[0x00000008], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0x00000000);
								unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
								func_314(iLocal_278, fLocal_321);
							}
							else
							{
								func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
								unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
								func_314(iLocal_278, fLocal_321);
							}
						}
						else
						{
							func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
					}
					else if (unk_0xC844350D5D58C99A(iLocal_204[0x00000008]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
						{
							func_340(iLocal_204[0x00000008], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
						else
						{
							func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 32000f && unk_0x9901AABAC4D4C590(iLocal_278) < 39000f)
				{
					if (unk_0xC844350D5D58C99A(iLocal_204[0x00000007]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000))
						{
							func_340(iLocal_204[0x00000007], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_322, 0x00000001);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
						else
						{
							func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 0x00000001);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_322, 0x00000001);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 39000f && unk_0x9901AABAC4D4C590(iLocal_278) < 56000f)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
					{
						func_340(iLocal_204[0x00000008], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
					else
					{
						func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_322, 0x00000000);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 56000f && unk_0x9901AABAC4D4C590(iLocal_278) < 65000f)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000B], 0x00000000))
					{
						func_340(iLocal_204[0x0000000B], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
					else
					{
						func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_322, 0x00000000);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 65000f && unk_0x9901AABAC4D4C590(iLocal_278) < 90000f)
				{
					if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000D]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000D], 0x00000000))
						{
							func_340(iLocal_204[0x0000000D], unk_0x16F2683693E537C9(), &fLocal_321, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
						else
						{
							func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0x00000000);
							unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
							func_314(iLocal_278, fLocal_321);
						}
					}
					else
					{
						func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_322, 0x00000000);
						unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
						func_314(iLocal_278, fLocal_321);
					}
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 90000f && unk_0x9901AABAC4D4C590(iLocal_278) < 110000f)
				{
					func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_322, 0x00000001);
					unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
					func_314(iLocal_278, fLocal_321);
				}
				if (unk_0x9901AABAC4D4C590(iLocal_278) > 110000f)
				{
					func_340(iLocal_278, unk_0x16F2683693E537C9(), &fLocal_321, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_322, 0x00000000);
					unk_0xA9FBE21EB8701B34(iLocal_278, fLocal_321);
					func_314(iLocal_278, fLocal_321);
				}
			}
		}
	}
}

void func_314(int iParam0, float fParam1)
{
	float fVar0;
	vector3 vVar1;
	int iVar2;
	
	fVar0 = unk_0x6117725E0134737F();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = 0x00000000;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_339();
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				unk_0x536F1BE96C726C4B(vVar1, 1000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			}
			bLocal_88 = 0x00000001;
		}
	}
	else if (!bLocal_87)
	{
		func_209();
		bLocal_88 = 0x00000000;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0xD60411959D5D930B(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_133 = 0f;
		}
		else
		{
			fLocal_133 = 1f;
		}
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					if (func_338(unk_0x16F2683693E537C9(), iParam0))
					{
						iLocal_86 = 0x00000001;
					}
					else
					{
						iLocal_86 = 0x00000000;
					}
				}
				fLocal_130 = unk_0x9901AABAC4D4C590(iParam0);
				unk_0xA9FBE21EB8701B34(iParam0, ((fParam1 * fLocal_131) * fLocal_133));
				if (bLocal_85)
				{
					func_337(iParam0, fLocal_130);
					func_336(iParam0, fLocal_140);
					if (fLocal_135 > 1000f)
					{
						if (iLocal_172 == 0x00000000)
						{
							func_335(iParam0, fLocal_140);
						}
						fVar0 = ((fLocal_130 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_172) * 2000f));
						func_334(iParam0, fVar0, fLocal_134);
						iLocal_172++;
						if (iLocal_172 > 0x00000002)
						{
							fLocal_135 = 0f;
						}
					}
					else
					{
						iLocal_172 = 0x00000000;
						fLocal_135 = (fLocal_135 + (unk_0x6117725E0134737F() * 1000f));
					}
				}
			}
		}
		iVar2 = 0x00000000;
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iParam0))
			{
				iVar2 = 0x00000001;
			}
		}
		if (fLocal_130 == 0f || unk_0x757EF87A33649210())
		{
			iVar2 = 0x00000001;
		}
		if (iVar2 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_331(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0x00000000);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0x00000000;
			}
			if (bLocal_78)
			{
				func_330(iParam0);
			}
			if (!iLocal_75)
			{
				func_317(iParam0, ((fParam1 * fLocal_131) * fLocal_133), 0x00000000);
			}
		}
		if (iLocal_83)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_206 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					vLocal_176 = { unk_0x68F4C0EC296D3901(iLocal_206, 0x00000001) };
					unk_0xAB6708C4A38AE038(iLocal_206, &fLocal_114, &fLocal_115, &fLocal_116, &fLocal_117);
				}
			}
			iLocal_83 = 0x00000000;
		}
		if (iLocal_82)
		{
			if (unk_0xC844350D5D58C99A(iLocal_206))
			{
				func_201(iLocal_207);
				iLocal_207 = iLocal_206;
			}
			if (unk_0xDF1306B443CD3D15(iLocal_207, 0x00000000))
			{
				unk_0xA47B46945FF6DE74(iLocal_207, vLocal_176, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xC4C7FD0EF3FEAB0B(iLocal_207, fLocal_114, fLocal_115, fLocal_116, fLocal_117);
			}
			fLocal_129 = fLocal_132;
			iLocal_75 = 0x00000001;
			iLocal_82 = 0x00000000;
		}
		if (iLocal_75)
		{
			while (!func_315(&iParam0, fLocal_129))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_76 = 0x00000001;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0x00000000;
		}
	}
}

int func_315(int iParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 0x00000001;
		func_196();
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xC55F2A0377488064(*iParam0);
				unk_0x51B954DAB1BCAF73(*iParam0);
			}
			if (!iLocal_159 == 0xFFFFFFFF)
			{
				while (!func_316(iParam0, iLocal_159, fParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 0x00000001;
					fLocal_133 = 0f;
					iLocal_160 = 0x00000000;
					iLocal_162 = 0x00000000;
					iLocal_161 = 0x00000000;
					iLocal_156 = 0x00000000;
					iLocal_157 = 0x00000000;
					iLocal_158 = 0x00000000;
					iLocal_163 = 0x00000000;
					iLocal_164 = 0x00000000;
					iLocal_165 = 0x00000000;
				}
			}
		}
		iLocal_90 = 0x00000001;
	}
	else
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xA9FBE21EB8701B34(*iParam0, ((1f * fLocal_131) * fLocal_133));
				func_316(iParam0, iLocal_159, fParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		fLocal_130 = fParam1;
		iLocal_166 = 0x00000000;
		iLocal_169 = 0x00000000;
		fLocal_145 = 0f;
		fLocal_144 = 0f;
		func_317(*iParam0, ((1f * fLocal_131) * fLocal_133), 0x00000001);
		func_331(*iParam0, ((1f * fLocal_131) * fLocal_133), 0x00000001);
		func_330(*iParam0);
		if ((iLocal_163 == 0x00000000 && iLocal_164 == 0x00000000) && iLocal_165 == 0x00000000)
		{
			iLocal_76 = 0x00000000;
			iLocal_75 = 0x00000000;
			iLocal_90 = 0x00000000;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_316(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0x00000000)
	{
		unk_0x36187931D29E5BBE(iParam1, &cLocal_185);
		if (unk_0x3DDA6C6A285628E4(iParam1, &cLocal_185))
		{
			if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
			{
				if (!unk_0x20D6474D5F4B9FC6(*uParam0))
				{
					unk_0x1E9649458B15960F(*uParam0, 0x00000000);
					if (bParam4)
					{
						unk_0xC3C6B5ABAB3277F5(*uParam0, iParam1, &cLocal_185, 10f, 0x000C00AB);
					}
					else
					{
						if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
						{
							if (bParam7)
							{
								unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_185, 0x00000002 | 0x00000004, 0x00000000, 0x000C00AB);
							}
							else if (bParam6)
							{
								unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_185, 0x00000001 | 0x00000004, 0x00000000, 0x000C00AB);
							}
							else
							{
								unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_185, 0x00000001);
							}
						}
						else
						{
							unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_185, 0x00000001);
						}
						unk_0xF12C1D85AFEE8FAD(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x9C8F7A2F15781E10(*uParam0, 0x00000001);
						}
						return 0x00000001;
					}
				}
				else if (unk_0x60755EFECF81FC68(*uParam0) == unk_0x1A2511CB22B86C17(iParam1, &cLocal_185))
				{
					fVar0 = unk_0x9901AABAC4D4C590(*uParam0);
					unk_0xF12C1D85AFEE8FAD(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0xC55F2A0377488064(*uParam0);
						unk_0x36187931D29E5BBE(iParam1, &cLocal_185);
					}
					if (bParam5)
					{
						unk_0x9C8F7A2F15781E10(*uParam0, 0x00000001);
					}
					return 0x00000001;
				}
				else
				{
					unk_0xC55F2A0377488064(*uParam0);
					unk_0x1E9649458B15960F(*uParam0, 0x00000000);
					if (bParam4)
					{
						unk_0xC3C6B5ABAB3277F5(*uParam0, iParam1, &cLocal_185, 10f, 0x000C00AB);
					}
					else if (iParam1 != iLocal_167 && iParam1 != iLocal_168)
					{
						if (bParam7)
						{
							unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_185, 0x00000002 | 0x00000004, 0x00000000, 0x000C00AB);
						}
						else if (bParam6)
						{
							unk_0x0CB57CDDC76DA8E0(*uParam0, iParam1, &cLocal_185, 0x00000001 | 0x00000004, 0x00000000, 0x000C00AB);
						}
						else
						{
							unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_185, 0x00000001);
						}
					}
					else
					{
						unk_0x4D3C3C0B0DE2663E(*uParam0, iParam1, &cLocal_185, 0x00000001);
					}
					unk_0xF12C1D85AFEE8FAD(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x9C8F7A2F15781E10(*uParam0, 0x00000001);
					}
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_317(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	
	bVar9 = unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
	uVar10 = unk_0x5C45F6B29A99E47E();
	uVar11 = unk_0x1E3C51C9DE5100B7();
	bVar12 = 0x00000000;
	if (bVar9)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar2 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
		vVar5 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = iLocal_162;
		while (iVar0 < 0x00000023)
		{
			if (iLocal_153[iVar0] != 0x00000063)
			{
				if (iLocal_153[iVar0] == 0x00000000)
				{
					if (iLocal_152[iVar0] > 0x00000000)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 > (fLocal_122[iVar0] - (7000f * fParam1)))
							{
								if (func_329(iLocal_197[iVar0]))
								{
									unk_0x5D96D8530B3D0904(&(iLocal_154[iVar0]), 0x00000000);
								}
								else if (unk_0x7D8B2A8F9EA82DB7(iLocal_197[iVar0]))
								{
									unk_0x5D96D8530B3D0904(&(iLocal_154[iVar0]), 0x00000002);
								}
								unk_0x0674E58A79778E99(&(iLocal_154[iVar0]), 0x00000001);
								iLocal_153[iVar0]++;
								iLocal_164++;
							}
						}
						else
						{
							fVar6 = (fLocal_130 - fLocal_122[iVar0]);
							fVar6 = (fVar6 * fLocal_123[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_328(iLocal_152[iVar0]))
								{
									if (func_329(iLocal_197[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_154[iVar0]), 0x00000000);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_197[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_154[iVar0]), 0x00000002);
									}
									unk_0x0674E58A79778E99(&(iLocal_154[iVar0]), 0x00000001);
									iLocal_153[iVar0]++;
									iLocal_164++;
								}
								else
								{
									iLocal_153[iVar0] = 0x00000063;
								}
							}
						}
					}
					else
					{
						iLocal_153[iVar0] = 0x00000063;
					}
				}
				else if (iLocal_153[iVar0] == 0x00000001)
				{
					bVar8 = 0x00000000;
					unk_0x36187931D29E5BBE(iLocal_152[iVar0], &cLocal_185);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000000))
					{
						unk_0x523BCC9DC80CD82F(func_205());
						bVar8 = unk_0xB87F6CF6E5628C67(func_205());
					}
					else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000002) && uVar10) || (unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000002) && uVar11)))
					{
						bVar8 = 0x00000001;
					}
					else
					{
						unk_0x523BCC9DC80CD82F(func_208());
						bVar8 = unk_0xB87F6CF6E5628C67(func_208());
					}
					if (bVar8)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_204[iVar0]))
						{
							unk_0x523BCC9DC80CD82F(iLocal_197[iVar0]);
							if (unk_0xB87F6CF6E5628C67(iLocal_197[iVar0]) && unk_0x3DDA6C6A285628E4(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 >= (fLocal_122[iVar0] - (fLocal_143 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_327(vLocal_175[iVar0 /*3*/], vVar5, 5f, fLocal_141)))
									{
										if (bLocal_85)
										{
											func_326(vLocal_175[iVar0 /*3*/], vVar5, fLocal_134);
										}
										iLocal_204[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_197[iVar0], vLocal_175[iVar0 /*3*/], 0f, 0x00000000, 0x00000000, 0x00000000);
										if (iLocal_197[iVar0] == joaat("polmav"))
										{
											unk_0x446EA2500F021666(iLocal_204[iVar0], 0x00000000);
										}
										if (uLocal_98 && !unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000000))
										{
											func_325(iLocal_204[iVar0]);
										}
										if (unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000003))
										{
											unk_0x120A395B0ECB8EA5(iLocal_204[iVar0], 0x00000001);
										}
										unk_0x08841CDB215AE18F(iLocal_204[iVar0], vLocal_175[iVar0 /*3*/], 0x00000000, 0x00000000, 0x00000001);
										unk_0xC4C7FD0EF3FEAB0B(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
										if (unk_0x8E39AC3C76C8AA58(iLocal_197[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_197[iVar0]))
										{
											unk_0xB9FD7450C0DAB575(iLocal_204[iVar0], 0x40A00000);
										}
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000000))
										{
											unk_0x56FDC9ADE35F7DB0(iLocal_204[iVar0], 0x00000001, 0x00000001, 0x00000000);
											if (unk_0xD8A54335F18763BA() > 0x00000013 || unk_0xD8A54335F18763BA() < 0x00000007)
											{
												unk_0x0882E3DC0C991680(iLocal_204[iVar0], 0x00000003);
											}
										}
										unk_0x1E9649458B15960F(iLocal_204[iVar0], 0x00000001);
										unk_0x71199B01895C6202(iLocal_197[iVar0]);
										iLocal_164 = (iLocal_164 - 0x00000001);
										iLocal_153[iVar0]++;
										bLocal_106 = 0x00000001;
									}
								}
							}
						}
						else if (!unk_0x437347B10A200C4B(iLocal_204[iVar0], 0x00000000) && unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
						{
							unk_0x08841CDB215AE18F(iLocal_204[iVar0], vLocal_175[iVar0 /*3*/], 0x00000000, 0x00000000, 0x00000001);
							unk_0xC4C7FD0EF3FEAB0B(iLocal_204[iVar0], fLocal_118[iVar0], fLocal_119[iVar0], fLocal_120[iVar0], fLocal_121[iVar0]);
							if (unk_0x8E39AC3C76C8AA58(iLocal_197[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_197[iVar0]))
							{
								unk_0xB9FD7450C0DAB575(iLocal_204[iVar0], 0x40A00000);
							}
							unk_0x1E9649458B15960F(iLocal_204[iVar0], 0x00000001);
							unk_0x71199B01895C6202(iLocal_197[iVar0]);
							iLocal_164 = (iLocal_164 - 0x00000001);
							iLocal_153[iVar0]++;
						}
					}
				}
				else if (iLocal_153[iVar0] == 0x00000002)
				{
					unk_0x36187931D29E5BBE(iLocal_152[iVar0], &cLocal_185);
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001))
					{
						bVar8 = 0x00000000;
						if (unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000000))
						{
							unk_0x523BCC9DC80CD82F(func_205());
							bVar8 = unk_0xB87F6CF6E5628C67(func_205());
							iVar13 = 0x00000002;
						}
						else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000002) && uVar10) || (unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000002) && uVar11)))
						{
							bVar8 = 0x00000001;
							iVar13 = 0x00000001;
						}
						else
						{
							unk_0x523BCC9DC80CD82F(func_208());
							bVar8 = unk_0xB87F6CF6E5628C67(func_208());
							iVar13 = 0x00000000;
						}
						if (!unk_0x437347B10A200C4B(iLocal_204[iVar0], 0x00000000))
						{
							if (!bLocal_106 && unk_0xBBA8A868118C90ED(iLocal_204[iVar0], 0xFFFFFFFF, 0x00000000))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_204[iVar0], 0x00000001), vVar5) < 10000f || bParam2) || iLocal_89)
									{
										func_323(&(iLocal_204[iVar0]), iVar13, 0x00000001);
										unk_0x5D96D8530B3D0904(&(iLocal_154[iVar0]), 0x00000001);
									}
								}
							}
						}
					}
					if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
					{
						if (fLocal_130 >= fLocal_122[iVar0])
						{
							if (0x0000000E > iLocal_157)
							{
								fVar6 = (fLocal_130 - fLocal_122[iVar0]);
								fVar6 = (fVar6 * fLocal_123[iVar0]);
								if (unk_0x3DDA6C6A285628E4(iLocal_152[iVar0], &cLocal_185))
								{
									if (fVar6 < unk_0x1C8FE65729F6E371(iLocal_152[iVar0], &cLocal_185))
									{
										vVar3 = { unk_0x68F4C0EC296D3901(iLocal_204[iVar0], 0x00000001) };
										vVar4 = { unk_0x87A3DA08ACDE0189(iLocal_152[iVar0], fVar6, &cLocal_185) };
										if (((!func_327(vVar3, vVar5, 5f, fLocal_141) && func_327(vVar4, vVar5, 5f, fLocal_141)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001))
											{
												func_323(&(iLocal_204[iVar0]), iVar13, 0x00000001);
											}
											iLocal_157++;
											iLocal_153[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001)) || iLocal_89) || bParam2)
										{
											if (func_316(&(iLocal_204[iVar0]), iLocal_152[iVar0], fVar6, 0x00000001, 0x00000000, 0x00000000, bLocal_104, bLocal_103))
											{
												unk_0xA9FBE21EB8701B34(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
												if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
												{
													if (unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000000))
													{
														unk_0x56FDC9ADE35F7DB0(iLocal_204[iVar0], 0x00000001, 0x00000001, 0x00000000);
														unk_0xAA280AF45BCCCF21(iLocal_204[iVar0], 0x00000001);
														unk_0x0882E3DC0C991680(iLocal_204[iVar0], 0x00000002);
														if (!unk_0x7D8B2A8F9EA82DB7(iLocal_197[iVar0]))
														{
															unk_0x21CBAD8B56E628F6(iLocal_204[iVar0], 0x00000001);
														}
													}
												}
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001))
												{
													func_323(&(iLocal_204[iVar0]), iVar13, 0x00000001);
												}
												iLocal_157++;
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001))
										{
											func_323(&(iLocal_204[iVar0]), iVar13, 0x00000001);
										}
										iLocal_157++;
										iLocal_153[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001))
								{
									func_323(&(iLocal_204[iVar0]), iVar13, 0x00000001);
								}
								iLocal_157++;
								iLocal_153[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_154[iVar0], 0x00000001))
						{
							func_323(&(iLocal_204[iVar0]), iVar13, 0x00000001);
						}
						iLocal_157++;
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 0x00000003)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_204[iVar0]))
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_204[iVar0], 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_204[iVar0])) || func_322(iLocal_204[iVar0])))
									{
										if (unk_0xC844350D5D58C99A(iVar2))
										{
											bVar8 = 0x00000000;
											if (bLocal_97)
											{
												bVar8 = 0x00000001;
											}
											else
											{
												fVar7 = unk_0x9C66D99E63E8E24C(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = 0x00000001;
												}
												else if (unk_0x755FF954DAE327E1((fVar7 - unk_0x9C66D99E63E8E24C(iLocal_204[iVar0]))) > 15f)
												{
													bVar8 = 0x00000001;
												}
												else if (!func_321(iLocal_204[iVar0], iVar2, 45f))
												{
													bVar8 = 0x00000001;
												}
												else if (func_319(iVar2, iLocal_204[iVar0], 0x00000000))
												{
													bVar8 = 0x00000001;
												}
											}
											if (bVar8)
											{
												func_318(iLocal_204[iVar0]);
												iLocal_153[iVar0]++;
											}
										}
									}
									else
									{
										unk_0xA9FBE21EB8701B34(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
									}
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_204[iVar0]);
							}
						}
						else
						{
							iLocal_153[iVar0]++;
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 0x00000004)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_204[iVar0]))
						{
							iLocal_153[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_204[iVar0], 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								unk_0xA9FBE21EB8701B34(iLocal_204[iVar0], (fParam1 * fLocal_123[iVar0]));
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_204[iVar0]);
							}
							if (unk_0x3DDA6C6A285628E4(iLocal_152[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_122[iVar0] + unk_0x1C8FE65729F6E371(iLocal_152[iVar0], &cLocal_185)))
								{
									unk_0xC55F2A0377488064(iLocal_204[iVar0]);
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_204[iVar0]);
							}
						}
					}
					else
					{
						iLocal_153[iVar0]++;
					}
				}
				else if (iLocal_153[iVar0] == 0x00000005)
				{
					if (!iLocal_204[iVar0] == iLocal_208)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_204[iVar0], 0x00000000))
						{
							iVar1 = unk_0xA30B8362589C124A(iLocal_204[iVar0], 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iVar1))
							{
								iVar14 = unk_0xD1960163A3042274(iVar1, 0x0E763797);
								if (iVar14 == 0x00000007)
								{
									fVar7 = unk_0x9C66D99E63E8E24C(iLocal_204[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									unk_0x06736587AE5BE33B(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_152[iVar0] > 0x00000000)
							{
								unk_0xDB8844D4B7C60440(iLocal_152[iVar0], &cLocal_185);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_201(iLocal_204[iVar0]);
							}
						}
						else if (unk_0xC844350D5D58C99A(iLocal_204[iVar0]))
						{
							unk_0xA954465BA6FDEFE2(&(iLocal_204[iVar0]));
						}
					}
					iLocal_157 = (iLocal_157 - 0x00000001);
					iLocal_153[iVar0] = 0x00000063;
				}
				if (!bVar12)
				{
					iLocal_162 = iVar0;
					bVar12 = 0x00000001;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_200();
	}
}

void func_318(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_202(iParam0);
		unk_0xFCA4899C6BBAD48F(iParam0, 0x000C00AB);
	}
}

int func_319(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		if (bParam2)
		{
			vVar5 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
			vVar4 = { vVar5 / FtoV(SYSTEM::VMAG(vVar5)) };
		}
		else
		{
			vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
			vVar4 = { vVar2 - vVar1 };
		}
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	if (func_320(vVar3, vVar4) < 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_320(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_321(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(iParam0, 0x00000000) };
	}
	else
	{
		return 0x00000000;
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x698705F356FA8F72(iParam1, 0x00000000) };
	}
	else
	{
		return 0x00000000;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_320(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0x00000000;
	}
	fVar2 = unk_0x07AB02F3C4AE2B04(vVar0.x, vVar0.y, vVar1.x, vVar1.y);
	if (!fVar2 < fParam2)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_101)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			iVar2 = unk_0x134B62B726CEC8E6(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0x6CFEA4CFD9C496C8(iVar1))
				{
					if (unk_0x565509D116400807(iVar1, &iVar0))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
						{
							if (unk_0x1B3D109B39CC2C89(iVar0, iParam0))
							{
								return 0x00000001;
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_323(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(*uParam0, 0x00000000))
	{
		if (unk_0xBBA8A868118C90ED(*uParam0, 0xFFFFFFFF, 0x00000000))
		{
			if (iParam1 == 0x00000002)
			{
				iVar0 = unk_0x852A19533F896693(*uParam0, 0x00000006, func_205(), 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x6DF7BF67E86AAE86(iVar0, iLocal_194);
				unk_0x71199B01895C6202(func_205());
			}
			else if (iParam1 == 0x00000001)
			{
				iVar0 = unk_0x0268AF082D60F2AE(*uParam0, 0x00000001);
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(*uParam0)))
				{
					unk_0x83F619A03CDDE284(iVar0, 0x00000001, 0x00001000, 0xFFFFFFFF);
				}
			}
			else
			{
				iVar0 = unk_0x852A19533F896693(*uParam0, 0x00000004, func_208(), 0xFFFFFFFF, 0x00000000, 0x00000000);
				if (bLocal_107)
				{
					unk_0x71199B01895C6202(func_208());
				}
			}
			if (bParam2)
			{
				unk_0x7980D72D61BEF4D5(iVar0, 0x00000001);
				unk_0x00A6D36F507FD6EA(iVar0, 0x00000000);
				unk_0x4E885A246A9D983A(iVar0, 0x00000020, 0x00000000);
			}
			if (bLocal_108)
			{
				unk_0xBAFED2F6486F771A(iVar0, 0x00002000, 0x00000001);
				unk_0xBAFED2F6486F771A(iVar0, 0x00010000, 0x00000001);
				unk_0xBAFED2F6486F771A(iVar0, 0x00000002, 0x00000000);
				unk_0xDC2C59BD0989562B(*uParam0, 0x00000001);
			}
			unk_0x11AD11297DC58CC7(iVar0, 0x00000001);
			func_324(iVar0);
			bLocal_106 = 0x00000001;
			return 0x00000001;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_324(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x6DAD7906B73F064D(&iParam0);
	}
}

void func_325(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000C);
	if (iLocal_199 >= 0xFFFFFFFF && iLocal_200 >= 0xFFFFFFFF)
	{
		while (iVar0 == iLocal_199 || iVar0 == iLocal_200)
		{
			iVar0++;
		}
	}
	else if (iLocal_199 >= 0xFFFFFFFF)
	{
		if (iVar0 == iLocal_199)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0x00000000:
			unk_0xC002508A277213DE(iParam0, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0xC002508A277213DE(iParam0, 0x00000002, 0x00000002);
			break;
		
		case 0x00000002:
			unk_0xC002508A277213DE(iParam0, 0x00000004, 0x00000004);
			break;
		
		case 0x00000003:
			unk_0xC002508A277213DE(iParam0, 0x0000001B, 0x0000001B);
			break;
		
		case 0x00000004:
			unk_0xC002508A277213DE(iParam0, 0x00000007, 0x00000007);
			break;
		
		case 0x00000005:
			unk_0xC002508A277213DE(iParam0, 0x00000049, 0x00000049);
			break;
		
		case 0x00000006:
			unk_0xC002508A277213DE(iParam0, 0x00000044, 0x00000044);
			break;
		
		case 0x00000007:
			unk_0xC002508A277213DE(iParam0, 0x0000003E, 0x0000003E);
			break;
		
		case 0x00000008:
			unk_0xC002508A277213DE(iParam0, 0x00000084, 0x00000084);
			break;
		
		case 0x00000009:
			unk_0xC002508A277213DE(iParam0, 0x00000075, 0x00000000);
			break;
		
		case 0x0000000A:
			unk_0xC002508A277213DE(iParam0, 0x00000034, 0x00000034);
			break;
		
		case 0x0000000B:
			unk_0xC002508A277213DE(iParam0, 0x00000058, 0x00000058);
			break;
		
		case 0x0000000C:
			unk_0xC002508A277213DE(iParam0, 0x00000001, 0x00000001);
			break;
		
		case 0x0000000D:
			unk_0xC002508A277213DE(iParam0, 0x00000024, 0x00000024);
			break;
		
		case 0x0000000E:
			unk_0xC002508A277213DE(iParam0, 0x0000005F, 0x0000005F);
			break;
		
		default:
			unk_0xC002508A277213DE(iParam0, 0x00000049, 0x00000049);
			break;
	}
}

void func_326(vector3 vParam0, vector3 vParam1, float fParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000001;
	if (!bLocal_88)
	{
		if (!func_327(vParam0, vParam1, fParam2, 200f))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				iVar1 = unk_0x728870EB733D12A1();
				if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
				{
					if (unk_0x5A91F08DF773C39D(iVar1, vParam0, fParam2, fParam2, fParam2, 0x00000000, 0x00000001, 0x00000000))
					{
						bVar0 = 0x00000000;
					}
				}
			}
			if (bVar0)
			{
				unk_0x28F5E4DA506AC0CA(vParam0, fParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

int func_327(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3)
{
	if (!unk_0x757EF87A33649210())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (SYSTEM::VMAG2(vParam1 - vParam0) - fParam2) < (fParam3 * fParam3)
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam2))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

float func_328(int iParam0)
{
	float fVar0;
	
	unk_0x36187931D29E5BBE(iParam0, &cLocal_185);
	while (!unk_0x3DDA6C6A285628E4(iParam0, &cLocal_185))
	{
		SYSTEM::WAIT(0x00000000);
	}
	fVar0 = unk_0x1C8FE65729F6E371(iParam0, &cLocal_185);
	unk_0xDB8844D4B7C60440(iParam0, &cLocal_185);
	return fVar0;
}

int func_329(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_330(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		bVar3 = 0x00000000;
		bVar4 = 0x00000000;
		iVar0 = iLocal_161;
		while (iVar0 < 0x0000000F)
		{
			switch (iLocal_155[iVar0])
			{
				case 0x00000000:
					if (!iLocal_196[iVar0] == 0x00000000)
					{
						if (unk_0x5A91F08DF773C39D(iParam0, vLocal_174[iVar0 /*3*/], fLocal_128, fLocal_128, fLocal_128, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_163++;
							iLocal_155[iVar0]++;
						}
					}
					else
					{
						iLocal_155[iVar0] = 0x00000063;
					}
					break;
				
				case 0x00000001:
					if (0x00000006 > iLocal_158)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_203[iVar0]))
						{
							unk_0x523BCC9DC80CD82F(iLocal_196[iVar0]);
							if (unk_0xB87F6CF6E5628C67(iLocal_196[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_327(vLocal_174[iVar0 /*3*/], vVar1, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_326(vLocal_174[iVar0 /*3*/], vVar1, fLocal_134);
									}
									iLocal_203[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_196[iVar0], vLocal_174[iVar0 /*3*/], 0f, 0x00000000, 0x00000000, 0x00000000);
									if (iLocal_196[iVar0] == joaat("polmav"))
									{
										unk_0x446EA2500F021666(iLocal_203[iVar0], 0x00000000);
									}
									unk_0xC4C7FD0EF3FEAB0B(iLocal_203[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									unk_0x71199B01895C6202(iLocal_196[iVar0]);
									if (unk_0x4906F8A34E9F4814(iLocal_203[iVar0], func_206()))
									{
										unk_0xAA280AF45BCCCF21(iLocal_203[iVar0], 0x00000001);
										if (!unk_0x7D8B2A8F9EA82DB7(iLocal_196[iVar0]))
										{
											unk_0x21CBAD8B56E628F6(iLocal_203[iVar0], 0x00000001);
										}
									}
									if (unk_0x4906F8A34E9F4814(iLocal_203[iVar0], func_207()))
									{
										unk_0xC002508A277213DE(iLocal_203[iVar0], 0x00000000, 0x00000000);
									}
									unk_0x120A395B0ECB8EA5(iLocal_203[iVar0], 0x00000001);
									iLocal_163 = (iLocal_163 - 0x00000001);
									iLocal_158++;
									iLocal_155[iVar0]++;
									bLocal_106 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_163 = (iLocal_163 - 0x00000001);
							iLocal_158++;
							iLocal_155[iVar0]++;
						}
					}
					break;
				
				case 0x00000002:
					if (!bVar3)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_203[iVar0], 0x00000000))
						{
							vVar2 = { unk_0x68F4C0EC296D3901(iLocal_203[iVar0], 0x00000001) };
						}
						if (fLocal_142 == 0f || SYSTEM::VDIST2(vVar1, vVar2) < (fLocal_142 * fLocal_142))
						{
							if (!func_319(iLocal_203[iVar0], iParam0, 0x00000000))
							{
								if (!bLocal_77)
								{
									func_201(iLocal_203[iVar0]);
								}
								else
								{
									unk_0xA954465BA6FDEFE2(&(iLocal_203[iVar0]));
								}
								iLocal_158 = (iLocal_158 - 0x00000001);
								iLocal_155[iVar0] = 0x00000063;
								bVar3 = 0x00000001;
							}
						}
					}
					break;
			}
			if (iLocal_155[iVar0] != 0x00000063)
			{
				if (!bVar4)
				{
					iLocal_161 = iVar0;
					bVar4 = 0x00000001;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_203();
	}
}

void func_331(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	vector3 vVar19;
	
	iVar5 = 0x00000000;
	bVar12 = unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
	uVar13 = unk_0x5C45F6B29A99E47E();
	uVar14 = unk_0x1E3C51C9DE5100B7();
	if (bVar12)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar5 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
		vVar8 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	iVar1 = 0x00000000;
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			fLocal_130 = unk_0x9901AABAC4D4C590(iParam0);
		}
		iVar16 = 0xFFFFFFFF;
		bVar17 = 0x00000000;
		bVar18 = 0x00000000;
		iVar0 = iLocal_160;
		while (iVar0 < 0x000000AF && !bVar17)
		{
			if (iLocal_150[iVar0] != 0x00000063)
			{
				if (iLocal_150[iVar0] == 0x00000000)
				{
					if (iLocal_149[iVar0] > 0x00000000 && iLocal_195[iVar0] != 0x00000000)
					{
						if (!iLocal_75)
						{
							if (fLocal_130 < (fLocal_113[iVar0] + 20000f))
							{
								if (fLocal_130 >= (fLocal_113[iVar0] - (7000f * fParam1)))
								{
									if (func_329(iLocal_195[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_151[iVar0]), 0x00000000);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_195[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_151[iVar0]), 0x00000002);
									}
									unk_0x0674E58A79778E99(&(iLocal_151[iVar0]), 0x00000001);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else if (iVar1 > 0x00000002)
								{
									bVar17 = 0x00000001;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_333(iVar0, 0x41000000);
							}
						}
						else
						{
							fVar9 = (fLocal_130 - fLocal_113[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_328(iLocal_149[iVar0]))
								{
									if (func_329(iLocal_195[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_151[iVar0]), 0x00000000);
									}
									else if (unk_0x7D8B2A8F9EA82DB7(iLocal_195[iVar0]))
									{
										unk_0x5D96D8530B3D0904(&(iLocal_151[iVar0]), 0x00000002);
									}
									unk_0x0674E58A79778E99(&(iLocal_151[iVar0]), 0x00000001);
									iLocal_165++;
									iLocal_150[iVar0]++;
								}
								else
								{
									func_333(iVar0, 0x41000000);
								}
							}
						}
					}
					else
					{
						func_333(iVar0, 0x41000000);
					}
				}
				else if (iLocal_150[iVar0] == 0x00000001)
				{
					unk_0x36187931D29E5BBE(iLocal_149[iVar0], &cLocal_185);
					bVar11 = 0x00000000;
					if (unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000000))
					{
						unk_0x523BCC9DC80CD82F(func_205());
						if (unk_0xB87F6CF6E5628C67(func_205()))
						{
							bVar11 = 0x00000001;
						}
					}
					else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000002) && uVar13) || (unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000002) && uVar14)))
					{
						bVar11 = 0x00000001;
					}
					else
					{
						unk_0x523BCC9DC80CD82F(func_208());
						bVar11 = unk_0xB87F6CF6E5628C67(func_208());
					}
					if (!unk_0xC844350D5D58C99A(iLocal_201[iVar0]))
					{
						unk_0x523BCC9DC80CD82F(iLocal_195[iVar0]);
						if ((unk_0xB87F6CF6E5628C67(iLocal_195[iVar0]) && unk_0x3DDA6C6A285628E4(iLocal_149[iVar0], &cLocal_185)) && bVar11)
						{
							if (fLocal_130 >= (fLocal_113[iVar0] - (fLocal_143 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_327(vLocal_173[iVar0 /*3*/], vVar8, 5f, fLocal_141)))
								{
									if (bLocal_85)
									{
										func_326(vLocal_173[iVar0 /*3*/], vVar8, fLocal_134);
									}
									iLocal_201[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_195[iVar0], vLocal_173[iVar0 /*3*/], 0f, 0x00000000, 0x00000000, 0x00000000);
									if (iLocal_195[iVar0] == joaat("polmav"))
									{
										unk_0x446EA2500F021666(iLocal_201[iVar0], 0x00000000);
									}
									if (uLocal_98 && !unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000000))
									{
										func_325(iLocal_201[iVar0]);
									}
									unk_0x08841CDB215AE18F(iLocal_201[iVar0], vLocal_173[iVar0 /*3*/], 0x00000000, 0x00000000, 0x00000001);
									unk_0xC4C7FD0EF3FEAB0B(iLocal_201[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
									if (unk_0x8E39AC3C76C8AA58(iLocal_195[iVar0]) || unk_0x7D8B2A8F9EA82DB7(iLocal_195[iVar0]))
									{
										unk_0xB9FD7450C0DAB575(iLocal_201[iVar0], 0x40A00000);
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000003))
									{
										unk_0x120A395B0ECB8EA5(iLocal_201[iVar0], 0x00000001);
									}
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000000))
									{
										unk_0x56FDC9ADE35F7DB0(iLocal_201[iVar0], 0x00000001, 0x00000001, 0x00000000);
										if (unk_0xD8A54335F18763BA() > 0x00000013 || unk_0xD8A54335F18763BA() < 0x00000007)
										{
											unk_0x0882E3DC0C991680(iLocal_201[iVar0], 0x00000003);
										}
									}
									unk_0x1E9649458B15960F(iLocal_201[iVar0], 0x00000001);
									unk_0x7980D72D61BEF4D5(iLocal_201[iVar0], 0x00000001);
									unk_0x71199B01895C6202(iLocal_195[iVar0]);
									iLocal_165 = (iLocal_165 - 0x00000001);
									iLocal_150[iVar0]++;
									bLocal_106 = 0x00000001;
								}
								else if (fLocal_130 > fLocal_113[iVar0])
								{
									iLocal_165 = (iLocal_165 - 0x00000001);
									func_333(iVar0, 0x41000000);
								}
							}
						}
					}
				}
				else if (iLocal_150[iVar0] == 0x00000002)
				{
					bVar11 = 0x00000000;
					if (((iVar3 < 0x00000008 && (iVar0 > iLocal_171 || iLocal_171 == 0x00000000)) || iLocal_89) || iParam2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
						{
							if (unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000000))
							{
								unk_0x523BCC9DC80CD82F(func_205());
								bVar11 = unk_0xB87F6CF6E5628C67(func_205());
								iVar15 = 0x00000002;
							}
							else if (!bLocal_102 && ((!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000002) && uVar13) || (unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000002) && uVar14)))
							{
								bVar11 = 0x00000001;
								iVar15 = 0x00000001;
							}
							else
							{
								unk_0x523BCC9DC80CD82F(func_208());
								bVar11 = unk_0xB87F6CF6E5628C67(func_208());
								iVar15 = 0x00000000;
							}
							if (!unk_0x437347B10A200C4B(iLocal_201[iVar0], 0x00000000))
							{
								if (!bLocal_106 && unk_0xBBA8A868118C90ED(iLocal_201[iVar0], 0xFFFFFFFF, 0x00000000))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_201[iVar0], 0x00000001), vVar8) < 10000f || iParam2) || iLocal_89)
										{
											func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
											unk_0x5D96D8530B3D0904(&(iLocal_151[iVar0]), 0x00000001);
										}
									}
								}
							}
						}
						if (unk_0xDF1306B443CD3D15(iLocal_201[iVar0], 0x00000000))
						{
							unk_0x36187931D29E5BBE(iLocal_149[iVar0], &cLocal_185);
							if (fLocal_130 >= fLocal_113[iVar0])
							{
								if (0x0000000C > iLocal_156)
								{
									fVar9 = (fLocal_130 - fLocal_113[iVar0]);
									if (unk_0x3DDA6C6A285628E4(iLocal_149[iVar0], &cLocal_185))
									{
										if (fVar9 < unk_0x1C8FE65729F6E371(iLocal_149[iVar0], &cLocal_185))
										{
											vVar6 = { unk_0x68F4C0EC296D3901(iLocal_201[iVar0], 0x00000001) };
											vVar7 = { unk_0x87A3DA08ACDE0189(iLocal_149[iVar0], fVar9, &cLocal_185) };
											if (!func_327(vVar6, vVar8, 5f, fLocal_141) && func_327(vVar7, vVar8, 5f, fLocal_141))
											{
												if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
												{
													func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
												}
												func_333(iVar0, 0x41000000);
											}
											else if (((!bLocal_106 || unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001)) || iLocal_89) || iParam2)
											{
												if (func_316(&(iLocal_201[iVar0]), iLocal_149[iVar0], fVar9, 0x00000001, 0x00000000, 0x00000000, 0x00000001, bLocal_103))
												{
													if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
													{
														func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
													}
													unk_0x20641932E5104B25(iLocal_201[iVar0], 0x00000001, 0x00000000);
													unk_0xA9FBE21EB8701B34(iLocal_201[iVar0], fParam1);
													iLocal_156++;
													iLocal_150[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
											{
												func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
											}
											func_333(iVar0, 0x41000000);
										}
									}
									else if (fVar9 > unk_0x1C8FE65729F6E371(iLocal_149[iVar0], &cLocal_185))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
										{
											func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
										}
										func_333(iVar0, 0x41000000);
									}
								}
								else
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
									{
										func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
									}
									func_333(iVar0, 0x41000000);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
								{
									func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
								}
								func_333(iVar0, 0x41000000);
							}
						}
						else
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000001))
							{
								func_323(&(iLocal_201[iVar0]), iVar15, 0x00000000);
							}
							func_333(iVar0, 0x41000000);
						}
						iVar3++;
						iLocal_171 = iVar0;
					}
				}
				else if (iLocal_150[iVar0] == 0x00000003)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_201[iVar0], 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_201[iVar0]))
						{
							iVar4 = unk_0xA30B8362589C124A(iLocal_201[iVar0], 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iVar4))
							{
								if (bVar12)
								{
									bVar18 = 0x00000000;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_322(iLocal_201[iVar0]))
										{
											if (iVar2 < 0x00000003 && (iVar0 > iLocal_170 || iLocal_170 == 0x00000000))
											{
												if (!unk_0x437347B10A200C4B(iVar5, 0x00000000))
												{
													bVar11 = 0x00000000;
													if (!func_332(iLocal_201[iVar0], iVar5) || func_319(iVar5, iLocal_201[iVar0], 0x00000000))
													{
														bVar18 = 0x00000001;
													}
												}
												iLocal_170 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0xEAE0D21A50E6C7F4(iLocal_151[iVar0], 0x00000004)) && iVar2 < 0x00000003) && (iVar0 > iLocal_170 || iLocal_170 == 0x00000000))
										{
											vVar19 = { unk_0x5293C88BD2F4DE13(iParam0, unk_0x68F4C0EC296D3901(iLocal_201[iVar0], 0x00000001)) };
											if (vVar19.y < 0f)
											{
												if (unk_0x755FF954DAE327E1(vVar19.y) > unk_0x755FF954DAE327E1(vVar19.x))
												{
													bVar18 = 0x00000001;
												}
											}
											iVar2++;
											iLocal_170 = iVar0;
										}
									}
									if (bVar18)
									{
										func_318(iLocal_201[iVar0]);
										iLocal_150[iVar0]++;
									}
									else
									{
										unk_0xA9FBE21EB8701B34(iLocal_201[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_201[iVar0]);
							}
						}
						else
						{
							iLocal_150[iVar0]++;
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 0x00000004)
				{
					if (unk_0xDF1306B443CD3D15(iLocal_201[iVar0], 0x00000000))
					{
						if (!unk_0x20D6474D5F4B9FC6(iLocal_201[iVar0]))
						{
							iLocal_150[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xA30B8362589C124A(iLocal_201[iVar0], 0xFFFFFFFF, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iVar4))
							{
								unk_0xA9FBE21EB8701B34(iLocal_201[iVar0], fParam1);
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_201[iVar0]);
							}
							if (unk_0x3DDA6C6A285628E4(iLocal_149[iVar0], &cLocal_185))
							{
								if (fLocal_130 > (fLocal_113[iVar0] + unk_0x1C8FE65729F6E371(iLocal_149[iVar0], &cLocal_185)))
								{
									unk_0xC55F2A0377488064(iLocal_201[iVar0]);
								}
							}
							else
							{
								unk_0xC55F2A0377488064(iLocal_201[iVar0]);
							}
						}
					}
					else
					{
						iLocal_150[iVar0]++;
					}
				}
				else if (iLocal_150[iVar0] == 0x00000005)
				{
					if (!unk_0x437347B10A200C4B(iLocal_201[iVar0], 0x00000000))
					{
						fVar10 = unk_0x9C66D99E63E8E24C(iLocal_201[iVar0]);
					}
					iLocal_156 = (iLocal_156 - 0x00000001);
					func_333(iVar0, fVar10);
				}
				if (iVar16 == 0xFFFFFFFF)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != 0xFFFFFFFF)
		{
			iLocal_160 = iVar16;
		}
		if (iVar2 < 0x00000003)
		{
			iLocal_170 = 0x00000000;
		}
		if (iVar3 < 0x00000008)
		{
			iLocal_171 = 0x00000000;
		}
	}
	else
	{
		func_204();
	}
}

int func_332(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(iParam0, 0x00000000) };
	}
	else
	{
		return 0x00000000;
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x698705F356FA8F72(iParam1, 0x00000000) };
	}
	else
	{
		return 0x00000000;
	}
	vVar0.z = 0f;
	vVar1.z = 0f;
	fVar2 = func_320(vVar0, vVar1);
	if (fVar2 < 0f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_333(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_195[iParam0] == 0x00000000)
	{
		unk_0x71199B01895C6202(iLocal_195[iParam0]);
	}
	if (!unk_0x437347B10A200C4B(iLocal_201[iParam0], 0x00000000))
	{
		unk_0x20641932E5104B25(iLocal_201[iParam0], 0x00000001, 0x00000000);
		unk_0x1E9649458B15960F(iLocal_201[iParam0], 0x00000000);
		iVar0 = unk_0xA30B8362589C124A(iLocal_201[iParam0], 0xFFFFFFFF, 0x00000000);
		if (!unk_0xEB6A8945D1AC98A1(iVar0) && iVar0 != unk_0x16F2683693E537C9())
		{
			unk_0x11AD11297DC58CC7(iVar0, 0x00000000);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x60274E99F9B27DEA(iVar0, iLocal_201[iParam0], 0x00000000, 0x00000001, fParam1, 0x000C00AB, 5f, 5f, 0x00000001);
			unk_0xBAFED2F6486F771A(iVar0, 0x00002000, 0x00000001);
			if (bLocal_108)
			{
				unk_0xBAFED2F6486F771A(iVar0, 0x00010000, 0x00000001);
				unk_0xBAFED2F6486F771A(iVar0, 0x00000002, 0x00000000);
			}
			unk_0xAFF39FB306F8E232(iVar0, 0x00000006, 0x00000000);
			unk_0x06736587AE5BE33B(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_324(iVar0);
			func_201(iLocal_201[iParam0]);
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0xEBA53F35D0085654(&iVar0);
		}
		if (unk_0xC844350D5D58C99A(iLocal_201[iParam0]))
		{
			unk_0xA954465BA6FDEFE2(&(iLocal_201[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_149[iParam0] > 0x00000000)
		{
			unk_0xDB8844D4B7C60440(iLocal_149[iParam0], &cLocal_185);
		}
	}
	iLocal_150[iParam0] = 0x00000063;
}

void func_334(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar4 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x20D6474D5F4B9FC6(iParam0))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			vVar1 = { unk_0xAA8A22FF67DFFDCD(iVar0, fParam1) };
			vVar2 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			vVar3 = { vVar2 - vVar1 };
			fVar5 = SYSTEM::VMAG(vVar3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_326(vVar1, vVar4, fVar5);
		}
	}
}

void func_335(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > (fParam1 * fParam1))
				{
					unk_0xC83E7A5E408DF68C(0x00000001);
				}
				else
				{
					unk_0xC83E7A5E408DF68C(0x00000000);
				}
			}
		}
	}
}

void func_336(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > (fParam1 * fParam1))
				{
					unk_0xD60411959D5D930B(1f);
				}
				else
				{
					unk_0xD60411959D5D930B(0f);
				}
			}
		}
	}
}

void func_337(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && unk_0x20D6474D5F4B9FC6(iParam0))
	{
		fVar1 = (fLocal_144 + 2000f);
		fVar2 = (fLocal_145 + 2000f);
		bVar4 = 0x00000000;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			if (fVar1 <= unk_0x9FC30AC87F925DDF(iVar0))
			{
				if (iLocal_166 == 0x00000000)
				{
					vLocal_181 = { unk_0xAA8A22FF67DFFDCD(iVar0, fLocal_144) };
					iLocal_166++;
				}
				else if (iLocal_166 == 0x00000001)
				{
					vLocal_182 = { unk_0xAA8A22FF67DFFDCD(iVar0, fVar1) };
					iLocal_166++;
				}
				else if (!bLocal_106)
				{
					if (vLocal_181.x > vLocal_182.x)
					{
						fVar3 = vLocal_181.x;
						vLocal_181.x = vLocal_182.x;
						vLocal_182.x = fVar3;
					}
					if (vLocal_181.y > vLocal_182.y)
					{
						fVar3 = vLocal_181.y;
						vLocal_181.y = vLocal_182.y;
						vLocal_182.y = fVar3;
					}
					if (vLocal_181.z > vLocal_182.z)
					{
						fVar3 = vLocal_181.z;
						vLocal_181.z = vLocal_182.z;
						vLocal_182.z = fVar3;
					}
					vLocal_181 = { vLocal_181 - Vector(fLocal_148, fLocal_148, fLocal_148) };
					vLocal_182 = { vLocal_182 + Vector(fLocal_148, fLocal_148, fLocal_148) };
					unk_0xF858EFDE1871B5F2(vLocal_181, vLocal_182, 0x00000000, 0x00000000);
					fLocal_144 = fVar1;
					iLocal_166 = 0x00000000;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x60755EFECF81FC68(iParam0);
			if (iLocal_169 == 0x00000000)
			{
				vLocal_183 = { unk_0xAA8A22FF67DFFDCD(iVar0, fLocal_145) };
				iLocal_169++;
			}
			else if (iLocal_169 == 0x00000001)
			{
				vLocal_184 = { unk_0xAA8A22FF67DFFDCD(iVar0, fVar2) };
				iLocal_169++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (vLocal_183.x > vLocal_184.x)
				{
					fVar3 = vLocal_183.x;
					vLocal_183.x = vLocal_184.x;
					vLocal_184.x = fVar3;
				}
				if (vLocal_183.y > vLocal_184.y)
				{
					fVar3 = vLocal_183.y;
					vLocal_183.y = vLocal_184.y;
					vLocal_184.y = fVar3;
				}
				if (vLocal_183.z > vLocal_184.z)
				{
					fVar3 = vLocal_183.z;
					vLocal_183.z = vLocal_184.z;
					vLocal_184.z = fVar3;
				}
				vLocal_183 = { vLocal_183 - Vector(fLocal_148, fLocal_148, fLocal_148) };
				vLocal_184 = { vLocal_184 + Vector(fLocal_148, fLocal_148, fLocal_148) };
				unk_0xF5894FEB702E7E76(vLocal_183, vLocal_184, 0x00000001);
				fLocal_145 = fVar2;
				iLocal_169 = 0x00000000;
			}
		}
	}
}

int func_338(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0x00000000))
			{
				return 0x00000000;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_320(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_339()
{
	unk_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0x00000000, 0x00000001);
	unk_0xEF7906595D9044B8(0x00000000);
	unk_0xD980FF3526C8CB9E(0x00000000);
	unk_0xE9B51BC60A3B47D9(0x00000000);
	unk_0xD60411959D5D930B(0f);
	unk_0xC83E7A5E408DF68C(0x00000000);
	unk_0xFF42993F8A095C58(0x00000003);
}

void func_340(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_91 == 0x00000000)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 0x00000001;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_139;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_343(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (func_338(iParam1, iParam0))
		{
			if (unk_0x405E212DDE472467(iParam1, 0x00000000))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_342(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_341(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_92 = 0x00000001;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0x00000000;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x6117725E0134737F();
		fVar8 = ((fLocal_146 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x6117725E0134737F();
		fVar8 = ((fLocal_147 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x405E212DDE472467(iParam1, 0x00000000))
			{
				iVar9 = unk_0x6937EA2286828455(iParam1, 0x00000000);
				if (!unk_0x437347B10A200C4B(iVar9, 0x00000000))
				{
					iVar10 = unk_0x134B62B726CEC8E6(iVar9);
					if (unk_0x8E39AC3C76C8AA58(iVar10) || unk_0x7D8B2A8F9EA82DB7(iVar10))
					{
						if (unk_0xDF1306B443CD3D15(iVar9, 0x00000000))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_137 - fLocal_138));
							fVar1 = (fVar1 + fLocal_138);
							fLocal_136 = fVar1;
							if (fLocal_136 < fLocal_138)
							{
								fLocal_136 = fLocal_138;
							}
							if (fLocal_136 > fLocal_137)
							{
								fLocal_136 = fLocal_137;
							}
							unk_0x85089606511D395B(unk_0xD803B885F5E47A62(), fLocal_136);
						}
					}
				}
			}
		}
	}
}

float func_341(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		Var0 = unk_0x5045843AAD2F36F7(iParam0);
		Var0.f_1 = unk_0x580A699989F7AD54(iParam0);
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		if (unk_0x405E212DDE472467(iParam1, 0x00000000))
		{
			iVar5 = unk_0x6937EA2286828455(iParam1, 0x00000000);
			vVar3.x = unk_0x5045843AAD2F36F7(iVar5);
			vVar3.y = unk_0x580A699989F7AD54(iVar5);
		}
		else
		{
			vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
			vVar3 = { vVar2 - vVar1 };
		}
	}
	fVar4 = unk_0x07AB02F3C4AE2B04(Var0, Var0.f_1, vVar3.x, vVar3.y);
	return fVar4;
}

float func_342(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	vVar2 = { vVar1 - vVar0 };
	vVar2.z = 0f;
	fVar3 = SYSTEM::VMAG(vVar2);
	return fVar3;
}

float func_343(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		Var0 = unk_0x5045843AAD2F36F7(iParam0);
		Var0.f_1 = unk_0x580A699989F7AD54(iParam0);
		vVar2 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	vVar1 = { vVar3 - vVar2 };
	fVar4 = unk_0x07AB02F3C4AE2B04(vVar1.x, vVar1.y, Var0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	vVar1.z = 0f;
	return (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(fVar4));
}

int func_344()
{
	if (unk_0xC844350D5D58C99A(iLocal_278))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
		{
			if (!unk_0x0A059E0DB9253280(iLocal_278))
			{
				iLocal_396 = 0x00000001;
			}
			else
			{
				iLocal_396 = 0x00000000;
			}
		}
		else
		{
			iLocal_396 = 0x00000001;
		}
	}
	else
	{
		iLocal_396 = 0x00000001;
	}
	iLocal_232 = 0x00000000;
	while (iLocal_232 <= 0x00000018)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[iLocal_232]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[iLocal_232], 0x00000000))
			{
				if (!unk_0x0A059E0DB9253280(iLocal_204[iLocal_232]))
				{
					iLocal_397[iLocal_232] = 0x00000001;
				}
				else
				{
					iLocal_397[iLocal_232] = 0x00000000;
				}
			}
			else
			{
				iLocal_397[iLocal_232] = 0x00000001;
			}
		}
		else
		{
			iLocal_397[iLocal_232] = 0x00000001;
		}
		iLocal_232++;
	}
	if (((((((((((((((((((((((((iLocal_396 == 0x00000001 && iLocal_397[0x00000000] == 0x00000001) && iLocal_397[0x00000001] == 0x00000001) && iLocal_397[0x00000002] == 0x00000001) && iLocal_397[0x00000003] == 0x00000001) && iLocal_397[0x00000004] == 0x00000001) && iLocal_397[0x00000005] == 0x00000001) && iLocal_397[0x00000006] == 0x00000001) && iLocal_397[0x00000007] == 0x00000001) && iLocal_397[0x00000008] == 0x00000001) && iLocal_397[0x00000009] == 0x00000001) && iLocal_397[0x0000000A] == 0x00000001) && iLocal_397[0x0000000B] == 0x00000001) && iLocal_397[0x0000000C] == 0x00000001) && iLocal_397[0x0000000D] == 0x00000001) && iLocal_397[0x0000000E] == 0x00000001) && iLocal_397[0x0000000F] == 0x00000001) && iLocal_397[0x00000010] == 0x00000001) && iLocal_397[0x00000011] == 0x00000001) && iLocal_397[0x00000012] == 0x00000001) && iLocal_397[0x00000013] == 0x00000001) && iLocal_397[0x00000014] == 0x00000001) && iLocal_397[0x00000015] == 0x00000001) && iLocal_397[0x00000016] == 0x00000001) && iLocal_397[0x00000017] == 0x00000001) && iLocal_397[0x00000018] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_345()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000004]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000004], 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000004]))
			{
				vLocal_309 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				vVar1 = { unk_0x68F4C0EC296D3901(iLocal_204[0x00000004], 0x00000001) };
				if (vLocal_309.x < (vVar1.x - 10f) && !unk_0x0A059E0DB9253280(iLocal_204[0x00000004]))
				{
					unk_0xC55F2A0377488064(iLocal_204[0x00000004]);
					unk_0x046C362CF15F1935(&(iLocal_204[0x00000004]));
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000003]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000003], 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000003]))
			{
				vLocal_309 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_204[0x00000003], 0x00000001) };
				if (vLocal_309.x < (vVar0.x - 10f) && !unk_0x0A059E0DB9253280(iLocal_204[0x00000003]))
				{
					unk_0xC55F2A0377488064(iLocal_204[0x00000003]);
					unk_0x046C362CF15F1935(&(iLocal_204[0x00000003]));
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000015]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000015], 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000015]))
			{
				vLocal_309 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				vVar2 = { unk_0x68F4C0EC296D3901(iLocal_204[0x00000015], 0x00000001) };
				if (vLocal_309.x < (vVar2.x - 10f) && !unk_0x0A059E0DB9253280(iLocal_204[0x00000015]))
				{
					unk_0xC55F2A0377488064(iLocal_204[0x00000015]);
					unk_0x046C362CF15F1935(&(iLocal_204[0x00000015]));
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000000]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000000], 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(iLocal_278))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_278) > 50000f && !unk_0x0A059E0DB9253280(iLocal_204[0x00000000]))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_204[0x00000000]))
							{
								unk_0xC55F2A0377488064(iLocal_204[0x00000000]);
							}
							unk_0x046C362CF15F1935(&(iLocal_204[0x00000000]));
						}
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_282))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_282, 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(iLocal_278))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_278) > 90000f && !unk_0x0A059E0DB9253280(iLocal_282))
						{
							unk_0xF7E25143642732EA(iLocal_667[0x00000000], 0x00000000);
							unk_0xF7E25143642732EA(iLocal_667[0x00000001], 0x00000000);
							unk_0xF7E25143642732EA(iLocal_667[0x00000002], 0x00000000);
							if (unk_0xC844350D5D58C99A(iLocal_265[0x00000000]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000000]));
							}
							if (unk_0xC844350D5D58C99A(iLocal_265[0x00000001]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000001]));
							}
							if (unk_0xC844350D5D58C99A(iLocal_265[0x00000002]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000002]));
							}
							if (unk_0xC844350D5D58C99A(iLocal_265[0x00000003]))
							{
								unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000003]));
							}
							unk_0x046C362CF15F1935(&iLocal_282);
							unk_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_346(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xE2F1E99DD161A861(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam1), 0x00000000))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000001);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0x00000000)
						{
							iVar0 = 0x00000000;
						}
						if (iVar0 >= 0x000000FF)
						{
							iVar0 = 0x000000FF;
						}
						unk_0xF412DD40DE84CE72(iParam0, 0x00000001);
						unk_0x7F010F50CE03A8AF(iParam0, (0x000000FF - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0x00000000);
						unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
					}
				}
			}
			else if (unk_0xEC560E589DF8370E(iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam1)))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000001);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0x00000000)
						{
							iVar0 = 0x00000000;
						}
						if (iVar0 >= 0x000000FF)
						{
							iVar0 = 0x000000FF;
						}
						unk_0xF412DD40DE84CE72(iParam0, 0x00000001);
						unk_0x7F010F50CE03A8AF(iParam0, (0x000000FF - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0x00000000);
						unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
					}
				}
			}
		}
	}
}

void func_347()
{
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000002]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000002], 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(iLocal_278))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_278) < 50530f)
						{
							if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_204[0x00000002]))
							{
								unk_0x56FDC9ADE35F7DB0(iLocal_204[0x00000002], 0x00000001, 0x00000001, 0x00000000);
							}
						}
						else if (unk_0x2F6DBDA9ACD7D3AB(iLocal_204[0x00000002]))
						{
							unk_0x56FDC9ADE35F7DB0(iLocal_204[0x00000002], 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_204[0x00000005]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000005], 0x00000000))
		{
			if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_204[0x00000005]))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_204[0x00000005], 0x00000001, 0x00000001, 0x00000000);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_280[0x00000000]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_280[0x00000000], 0x00000000))
		{
			if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_280[0x00000000]))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_280[0x00000000], 0x00000001, 0x00000001, 0x00000000);
			}
			if (unk_0xBBA8A868118C90ED(iLocal_280[0x00000000], 0xFFFFFFFF, 0x00000000))
			{
				if (!unk_0xC844350D5D58C99A(iLocal_276[0x00000000]))
				{
					unk_0x523BCC9DC80CD82F(joaat("s_m_m_gentransport"));
					if (unk_0xB87F6CF6E5628C67(joaat("s_m_m_gentransport")))
					{
						iLocal_276[0x00000000] = unk_0x852A19533F896693(iLocal_280[0x00000000], 0x0000001A, joaat("s_m_m_gentransport"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x71199B01895C6202(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_280[0x00000001]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_280[0x00000001], 0x00000000))
		{
			if (!unk_0x2F6DBDA9ACD7D3AB(iLocal_280[0x00000001]))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_280[0x00000001], 0x00000001, 0x00000001, 0x00000000);
			}
			if (unk_0xBBA8A868118C90ED(iLocal_280[0x00000001], 0xFFFFFFFF, 0x00000000))
			{
				if (!unk_0xC844350D5D58C99A(iLocal_276[0x00000001]))
				{
					unk_0x523BCC9DC80CD82F(joaat("s_m_m_gentransport"));
					if (unk_0xB87F6CF6E5628C67(joaat("s_m_m_gentransport")))
					{
						iLocal_276[0x00000001] = unk_0x852A19533F896693(iLocal_280[0x00000001], 0x0000001A, joaat("s_m_m_gentransport"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x71199B01895C6202(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_348()
{
	if (iLocal_223 == 0x00000000)
	{
		unk_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Cop_Cars", 0x00000000, 0xFFFFFFFF);
		unk_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Plane_Explosion", 0x00000000, 0xFFFFFFFF);
		unk_0xAE317D00A5A55DF6("SCRIPT\Trv_4_747_Tanker_Explosion", 0x00000000, 0xFFFFFFFF);
		unk_0xAE317D00A5A55DF6("SCRIPT\TV_Monitors", 0x00000000, 0xFFFFFFFF);
		if (iLocal_385 == 0x00000000)
		{
			iLocal_255 = unk_0xD68EA767274B7444();
			iLocal_385 = 0x00000001;
		}
		if (iLocal_386 == 0x00000000)
		{
			iLocal_256 = unk_0xD68EA767274B7444();
			iLocal_386 = 0x00000001;
		}
		if (iLocal_387 == 0x00000000)
		{
			iLocal_257 = unk_0xD68EA767274B7444();
			iLocal_387 = 0x00000001;
		}
		if (iLocal_388 == 0x00000000)
		{
			iLocal_258 = unk_0xD68EA767274B7444();
			iLocal_388 = 0x00000001;
		}
		if (iLocal_389 == 0x00000000)
		{
			iLocal_259 = unk_0xD68EA767274B7444();
			iLocal_389 = 0x00000001;
		}
		if (iLocal_384 == 0x00000000)
		{
			iLocal_260 = unk_0xD68EA767274B7444();
			iLocal_384 = 0x00000001;
		}
		if (iLocal_390 == 0x00000000)
		{
			iLocal_261 = unk_0xD68EA767274B7444();
			iLocal_390 = 0x00000001;
		}
		if (iLocal_343 == 0x00000001)
		{
			func_120();
			iLocal_343 = 0x00000000;
		}
		if (!unk_0x9F4FE516EAACCFC5(iLocal_301))
		{
			iLocal_301 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000001);
			unk_0x5818C8D5303DCCF8(iLocal_301, 40f);
		}
		iLocal_341 = 0x00000000;
		iLocal_335 = 0x00000000;
		iLocal_347 = 0x00000000;
		iLocal_331 = 0x00000000;
		iLocal_326 = 0x00000000;
		iLocal_332 = 0x00000000;
		iLocal_325 = 0x00000000;
		iLocal_361 = 0x00000000;
		iLocal_363[0x00000000] = 0x00000000;
		iLocal_364[0x00000000] = 0x00000000;
		iLocal_363[0x00000001] = 0x00000000;
		iLocal_364[0x00000001] = 0x00000000;
		iLocal_363[0x00000002] = 0x00000000;
		iLocal_365 = 0x00000000;
		iLocal_366 = 0x00000000;
		iLocal_329 = 0x00000000;
		iLocal_330 = 0x00000000;
		iLocal_328 = 0x00000000;
		iLocal_370 = 0x00000000;
		iLocal_373 = 0x00000000;
		iLocal_374 = 0x00000000;
		iLocal_375 = 0x00000000;
		iLocal_377 = 0x00000000;
		iLocal_376 = 0x00000000;
		iLocal_378 = 0x00000000;
		iLocal_379 = 0x00000000;
		iLocal_380 = 0x00000000;
		iLocal_381 = 0x00000000;
		iLocal_382 = 0x00000000;
		iLocal_383 = 0x00000000;
		iLocal_391 = 0x00000000;
		iLocal_392 = 0x00000000;
		iLocal_394 = 0x00000000;
		iLocal_395 = 0x00000000;
		iLocal_402 = 0x00000000;
		iLocal_403 = 0x00000000;
		iLocal_467 = 0x00000000;
		iLocal_349 = 0x00000001;
		iLocal_350 = 0x00000001;
		iLocal_358 = 0x00000001;
		iLocal_408 = 0x00000000;
		iLocal_409 = 0x00000000;
		iLocal_415 = 0x00000000;
		iLocal_417 = 0x00000000;
		iLocal_424 = 0x00000000;
		iLocal_425 = 0x00000000;
		iLocal_427 = 0x00000000;
		iLocal_429[0x00000000] = 0x00000000;
		iLocal_429[0x00000001] = 0x00000000;
		iLocal_430[0x00000000] = 0x00000000;
		iLocal_430[0x00000001] = 0x00000000;
		iLocal_431 = 0x00000000;
		iLocal_432 = 0x00000000;
		iLocal_434 = 0x00000000;
		iLocal_439 = 0x00000000;
		iLocal_440 = 0x00000000;
		iLocal_441 = 0x00000000;
		iLocal_462 = 0x00000000;
		iLocal_463 = 0x00000000;
		iLocal_468 = 0x00000000;
		iLocal_227 = 0x00000000;
		iLocal_240 = 0x00000000;
		iLocal_231 = 0x00000000;
		while (iLocal_231 <= 0x00000002)
		{
			iLocal_465[iLocal_231] = 0x00000000;
			iLocal_466[iLocal_231] = 0x00000000;
			iLocal_231++;
		}
		iLocal_231 = 0x00000000;
		while (iLocal_231 <= 0x00000002)
		{
			iLocal_487[iLocal_231] = 0x00000000;
			iLocal_231++;
		}
		iLocal_231 = 0x00000000;
		while (iLocal_231 <= 0x00000006)
		{
			iLocal_435[iLocal_231] = 0x00000000;
			iLocal_436[iLocal_231] = 0x00000000;
			iLocal_231++;
		}
		unk_0x9E5E60D8C63FD9D1();
		iLocal_89 = 0x00000001;
		bLocal_95 = 0x00000001;
		func_285();
		iLocal_226 = unk_0x1D14FD94FCD601B4();
		unk_0x536F1BE96C726C4B(-823.71f, -2548.2f, 13.75f, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x10F3BFFADF2CE3DA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0x17E8C6920A1E386F(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0x00000000, 0x00000000);
		unk_0xF858EFDE1871B5F2(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0x00000000, 0x00000001);
		func_126(0x00000002, 0x00000001);
		func_350("BB_Chase", 0x0000002D, 0x00000000, 0x00000001);
		unk_0x34D79252800B23FF(0x00000003);
		func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_21(iLocal_279, 0xFFFFFFFF, 0x00000001);
		}
		iLocal_224 = 0x00000000;
		iLocal_223 = 0x00000001;
	}
	if (iLocal_223 == 0x00000001)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		func_349();
		iLocal_223 = 0x00000002;
	}
	if (iLocal_223 == 0x00000002)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_287))
		{
			iLocal_287 = unk_0x122AAB0B1D6F55AD(joaat("blista"), 0f, 0f, 1f, 0f, 0x00000001, 0x00000001, 0x00000000);
		}
		while (!unk_0x3DDA6C6A285628E4(0x0000002D, "BB_Chase"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		if (unk_0x757EF87A33649210())
		{
			if (unk_0xDF1306B443CD3D15(iLocal_279, 0x00000000))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_279, 0x00000001, 0x00000001, 0x00000000);
				unk_0x1AEF7184B203A58D(iLocal_279, 30f);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_278))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				unk_0x4D3C3C0B0DE2663E(iLocal_278, 0x0000002D, "BB_Chase", 0x00000001);
				SYSTEM::SETTIMERB(0x00000000);
				func_268();
				unk_0xB975E4541DDAB1F5(0x00000002);
				if (unk_0xC844350D5D58C99A(iLocal_279))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_279, 0x00000000))
					{
						unk_0x046C362CF15F1935(&iLocal_279);
					}
				}
				if (!unk_0x0F1CCD77290EE12F())
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
				iLocal_223 = 0x00000000;
				iLocal_222 = 0x00000004;
			}
		}
	}
}

void func_349()
{
	vLocal_174[0x00000000 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_124[0x00000000] = -0.0003f;
	fLocal_125[0x00000000] = -0.0085f;
	fLocal_126[0x00000000] = 0.9998f;
	fLocal_127[0x00000000] = 0.0158f;
	iLocal_196[0x00000000] = joaat("blista");
	vLocal_173[0x00000004 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[0x00000004] = 0.0004f;
	fLocal_110[0x00000004] = -0.0003f;
	fLocal_111[0x00000004] = -0.2526f;
	fLocal_112[0x00000004] = 0.9676f;
	iLocal_149[0x00000004] = 0x00000032;
	fLocal_113[0x00000004] = 20310f;
	iLocal_195[0x00000004] = joaat("manana");
	vLocal_174[0x00000001 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_124[0x00000001] = 0.0032f;
	fLocal_125[0x00000001] = -0.0003f;
	fLocal_126[0x00000001] = -0.0255f;
	fLocal_127[0x00000001] = 0.9997f;
	iLocal_196[0x00000001] = joaat("bison2");
	vLocal_175[0x00000000 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_118[0x00000000] = 0.0018f;
	fLocal_119[0x00000000] = 0.0123f;
	fLocal_120[0x00000000] = 0.9644f;
	fLocal_121[0x00000000] = 0.2642f;
	iLocal_152[0x00000000] = 0x00000009;
	fLocal_122[0x00000000] = 22357f;
	fLocal_123[0x00000000] = 1f;
	iLocal_197[0x00000000] = joaat("buzzard");
	vLocal_175[0x00000001 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_118[0x00000001] = -0.0012f;
	fLocal_119[0x00000001] = 0.0013f;
	fLocal_120[0x00000001] = 0.8439f;
	fLocal_121[0x00000001] = -0.5365f;
	iLocal_152[0x00000001] = 0x0000000A;
	fLocal_122[0x00000001] = 27135f;
	fLocal_123[0x00000001] = 1f;
	iLocal_197[0x00000001] = joaat("packer");
	vLocal_175[0x00000002 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_118[0x00000002] = 0.0057f;
	fLocal_119[0x00000002] = -0.0014f;
	fLocal_120[0x00000002] = -0.2451f;
	fLocal_121[0x00000002] = 0.9695f;
	iLocal_152[0x00000002] = 0x0000000B;
	fLocal_122[0x00000002] = 35135f;
	fLocal_123[0x00000002] = 1f;
	iLocal_197[0x00000002] = joaat("jet");
	vLocal_175[0x00000003 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_118[0x00000003] = 0.0065f;
	fLocal_119[0x00000003] = 0.0191f;
	fLocal_120[0x00000003] = -0.2629f;
	fLocal_121[0x00000003] = 0.9646f;
	iLocal_152[0x00000003] = 0x00000003;
	fLocal_122[0x00000003] = 6764f;
	fLocal_123[0x00000003] = 1f;
	iLocal_197[0x00000003] = joaat("bus");
	vLocal_175[0x00000004 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_118[0x00000004] = 0.0043f;
	fLocal_119[0x00000004] = 0.0331f;
	fLocal_120[0x00000004] = -0.3125f;
	fLocal_121[0x00000004] = 0.9493f;
	iLocal_152[0x00000004] = 0x00000004;
	fLocal_122[0x00000004] = 2102f;
	fLocal_123[0x00000004] = 1f;
	iLocal_197[0x00000004] = joaat("bison");
	vLocal_175[0x00000005 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_118[0x00000005] = 0.0056f;
	fLocal_119[0x00000005] = 0.0029f;
	fLocal_120[0x00000005] = 0.4915f;
	fLocal_121[0x00000005] = 0.8708f;
	iLocal_152[0x00000005] = 0x00000015;
	fLocal_122[0x00000005] = 92500f;
	fLocal_123[0x00000005] = 1f;
	iLocal_197[0x00000005] = joaat("jet");
	vLocal_175[0x00000007 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_118[0x00000007] = 0.0072f;
	fLocal_119[0x00000007] = 0.0176f;
	fLocal_120[0x00000007] = 0.9739f;
	fLocal_121[0x00000007] = -0.2263f;
	iLocal_152[0x00000007] = 0x00000036;
	fLocal_122[0x00000007] = 0f;
	fLocal_123[0x00000007] = 1f;
	iLocal_197[0x00000007] = joaat("police3");
	vLocal_175[0x00000008 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_118[0x00000008] = -0.027f;
	fLocal_119[0x00000008] = 0.0016f;
	fLocal_120[0x00000008] = 0.9169f;
	fLocal_121[0x00000008] = -0.3981f;
	iLocal_152[0x00000008] = 0x0000006C;
	fLocal_122[0x00000008] = 150f;
	fLocal_123[0x00000008] = 1f;
	iLocal_197[0x00000008] = joaat("police3");
	vLocal_175[0x0000000B /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_118[0x0000000B] = -0.0022f;
	fLocal_119[0x0000000B] = -0.0019f;
	fLocal_120[0x0000000B] = 0.928f;
	fLocal_121[0x0000000B] = -0.3726f;
	iLocal_152[0x0000000B] = 0x0000006F;
	fLocal_122[0x0000000B] = 36000f;
	fLocal_123[0x0000000B] = 1f;
	iLocal_197[0x0000000B] = joaat("police3");
	vLocal_175[0x0000000C /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_118[0x0000000C] = -0.0083f;
	fLocal_119[0x0000000C] = -0.0054f;
	fLocal_120[0x0000000C] = 0.55f;
	fLocal_121[0x0000000C] = 0.8351f;
	iLocal_152[0x0000000C] = 0x00000070;
	fLocal_122[0x0000000C] = 60000f;
	fLocal_123[0x0000000C] = 1f;
	iLocal_197[0x0000000C] = joaat("police3");
	vLocal_175[0x0000000D /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_118[0x0000000D] = -0.0086f;
	fLocal_119[0x0000000D] = -0.005f;
	fLocal_120[0x0000000D] = 0.5052f;
	fLocal_121[0x0000000D] = 0.8629f;
	iLocal_152[0x0000000D] = 0x00000071;
	fLocal_122[0x0000000D] = 60000f;
	fLocal_123[0x0000000D] = 1f;
	iLocal_197[0x0000000D] = joaat("police3");
	vLocal_175[0x0000000E /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_118[0x0000000E] = -0.0083f;
	fLocal_119[0x0000000E] = -0.0057f;
	fLocal_120[0x0000000E] = 0.6469f;
	fLocal_121[0x0000000E] = 0.7625f;
	iLocal_152[0x0000000E] = 0x0000003D;
	fLocal_122[0x0000000E] = 80000f;
	fLocal_123[0x0000000E] = 1f;
	iLocal_197[0x0000000E] = joaat("police3");
	vLocal_175[0x0000000F /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_118[0x0000000F] = -0.0041f;
	fLocal_119[0x0000000F] = -0.0091f;
	fLocal_120[0x0000000F] = 0.9133f;
	fLocal_121[0x0000000F] = 0.4072f;
	iLocal_152[0x0000000F] = 0x0000003E;
	fLocal_122[0x0000000F] = 80000f;
	fLocal_123[0x0000000F] = 1f;
	iLocal_197[0x0000000F] = joaat("police3");
	vLocal_175[0x00000013 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_118[0x00000013] = 0.0002f;
	fLocal_119[0x00000013] = 0.0018f;
	fLocal_120[0x00000013] = 0.9611f;
	fLocal_121[0x00000013] = -0.2763f;
	iLocal_152[0x00000013] = 0x00000042;
	fLocal_122[0x00000013] = 55125f;
	fLocal_123[0x00000013] = 1f;
	iLocal_197[0x00000013] = 0x73920F8E;
	vLocal_175[0x00000014 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_118[0x00000014] = -0.0005f;
	fLocal_119[0x00000014] = 0.0018f;
	fLocal_120[0x00000014] = 0.9559f;
	fLocal_121[0x00000014] = 0.2938f;
	iLocal_152[0x00000014] = 0x00000043;
	fLocal_122[0x00000014] = 0f;
	fLocal_123[0x00000014] = 1f;
	iLocal_197[0x00000014] = joaat("maverick");
	vLocal_175[0x00000015 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_118[0x00000015] = -0.0252f;
	fLocal_119[0x00000015] = -0.0034f;
	fLocal_120[0x00000015] = 0.9369f;
	fLocal_121[0x00000015] = 0.3487f;
	iLocal_152[0x00000015] = 0x00000005;
	fLocal_122[0x00000015] = 3834f;
	fLocal_123[0x00000015] = 1f;
	iLocal_197[0x00000015] = joaat("blista");
	vLocal_175[0x00000016 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_118[0x00000016] = 0.001f;
	fLocal_119[0x00000016] = -0.0004f;
	fLocal_120[0x00000016] = 0.8616f;
	fLocal_121[0x00000016] = 0.5075f;
	iLocal_152[0x00000016] = 0x00000006;
	fLocal_122[0x00000016] = 20176f;
	fLocal_123[0x00000016] = 1f;
	iLocal_197[0x00000016] = joaat("airtug");
	vLocal_175[0x00000017 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_118[0x00000017] = 0.001f;
	fLocal_119[0x00000017] = -0.0001f;
	fLocal_120[0x00000017] = 0.9749f;
	fLocal_121[0x00000017] = -0.2228f;
	iLocal_152[0x00000017] = 0x00000007;
	fLocal_122[0x00000017] = 48538f;
	fLocal_123[0x00000017] = 1f;
	iLocal_197[0x00000017] = joaat("airtug");
	vLocal_175[0x00000018 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_118[0x00000018] = -0.0001f;
	fLocal_119[0x00000018] = 0.0018f;
	fLocal_120[0x00000018] = 0.5344f;
	fLocal_121[0x00000018] = 0.8452f;
	iLocal_152[0x00000018] = 0x00000008;
	fLocal_122[0x00000018] = 75112f;
	fLocal_123[0x00000018] = 1f;
	iLocal_197[0x00000018] = joaat("airtug");
}

void func_350(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	StringCopy(&cLocal_185, sParam0, 64);
	bLocal_85 = 0x00000001;
	iLocal_90 = 0x00000000;
	iLocal_156 = 0x00000000;
	iLocal_157 = 0x00000000;
	iLocal_158 = 0x00000000;
	iLocal_159 = iParam1;
	iLocal_160 = 0x00000000;
	iLocal_161 = 0x00000000;
	iLocal_162 = 0x00000000;
	iLocal_166 = 0x00000000;
	iLocal_169 = 0x00000000;
	iLocal_167 = 0xFFFFFFFF;
	iLocal_168 = 0xFFFFFFFF;
	iLocal_170 = 0x00000000;
	iLocal_171 = 0x00000000;
	fLocal_144 = 0f;
	fLocal_145 = 0f;
	fLocal_130 = 0f;
	iLocal_91 = 0x00000000;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		vLocal_177.x = (vVar0.x - 100f);
		vLocal_177.y = (vVar0.y - 100f);
		vLocal_177.z = (vVar0.z - 100f);
		vLocal_178.x = (vVar0.x + 100f);
		vLocal_178.y = (vVar0.y + 100f);
		vLocal_178.z = (vVar0.z + 100f);
		unk_0xF858EFDE1871B5F2(vLocal_177, vLocal_178, 0x00000000, 0x00000000);
		if (bParam2)
		{
			unk_0x28F5E4DA506AC0CA(vVar0, 500f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	unk_0xF63400DBE3303D26("rgh_traffic", &iLocal_194);
	func_339();
	if (bParam3)
	{
		func_190(0x00000001);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0x060F249A9A3E3F4E(0x00000000);
	}
	func_195();
}

void func_351()
{
	if (iLocal_223 == 0x00000000)
	{
		unk_0x8B4C4CA774181102(0f, 14f, 0x00000004);
		if (iLocal_343 == 0x00000001)
		{
			func_120();
			iLocal_343 = 0x00000000;
		}
		iLocal_357 = 0x00000000;
		iLocal_358 = 0x00000000;
		iLocal_360 = 0x00000000;
		iLocal_362 = 0x00000000;
		iLocal_372 = 0x00000000;
		iLocal_325 = 0x00000000;
		iLocal_326 = 0x00000000;
		iLocal_329 = 0x00000000;
		iLocal_331 = 0x00000000;
		iLocal_332 = 0x00000000;
		iLocal_333 = 0x00000000;
		iLocal_334 = 0x00000000;
		iLocal_335 = 0x00000000;
		iLocal_336 = 0x00000000;
		iLocal_341 = 0x00000000;
		iLocal_350 = 0x00000000;
		iLocal_348 = 0x00000000;
		iLocal_407 = 0x00000000;
		iLocal_410 = 0x00000000;
		iLocal_449 = 0x00000000;
		iLocal_371 = 0x00000000;
		iLocal_349 = 0x00000001;
		iLocal_227 = 0x00000000;
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iLocal_359 = 0x00000001;
		}
		else
		{
			iLocal_359 = 0x00000000;
		}
		func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		unk_0x5C2EBB66AD2EA5FF(0x00000001);
		unk_0xF858EFDE1871B5F2(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0x00000000, 0x00000001);
		iLocal_230 = unk_0x1C0640BA9A7327B3();
		if (unk_0x757EF87A33649210())
		{
			if (!func_24())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_21(0x00000000, 0xFFFFFFFF, 0x00000001);
			unk_0x046C362CF15F1935(&iLocal_279);
			unk_0x046C362CF15F1935(&iLocal_290);
			unk_0x046C362CF15F1935(&iLocal_291);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		if (!unk_0xE4EDC4B0E92C078B(iLocal_299))
		{
			iLocal_299 = func_356(vLocal_308, 0x00000000);
		}
		unk_0xC92DB9682A650680("TRV4_GAMEPLAY_START");
		vLocal_318 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		iLocal_223 = 0x00000001;
	}
	if (iLocal_223 == 0x00000001)
	{
		if (iLocal_348 == 0x00000000 && iLocal_362 == 0x00000001)
		{
			if (!func_262() || !unk_0x04E6B3EAA8742BFA())
			{
				func_20("TRV4_GO1", 0x00001D4C, 0x00000001);
				iLocal_348 = 0x00000001;
			}
		}
		if (iLocal_371 == 0x00000000 && !func_355())
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_308, 0x00000001) < 800f)
			{
				iLocal_229 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
				if (iLocal_229 == 0x00000000)
				{
					unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x8B4C4CA774181102(0f, 6f, 0x00000003);
					iLocal_371 = 0x00000001;
				}
				if (iLocal_229 == 0x00000001)
				{
					unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x8B4C4CA774181102(0f, 6f, 0x00000003);
					iLocal_371 = 0x00000001;
				}
			}
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_308, 0x00000001) < 600f)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_278))
			{
				unk_0x523BCC9DC80CD82F(joaat("cogcabrio"));
				if (unk_0xB87F6CF6E5628C67(joaat("cogcabrio")))
				{
					iLocal_278 = unk_0x122AAB0B1D6F55AD(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xAA6B3A4292417750(iLocal_278, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC002508A277213DE(iLocal_278, 0x0000001B, 0x0000001B);
					unk_0x71199B01895C6202(joaat("cogcabrio"));
					unk_0x2E1E5367A885F9B7(iLocal_278, "SOL_3_MOLLY_CAR_Group", 0x00000000);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_264))
			{
				unk_0x523BCC9DC80CD82F(joaat("ig_molly"));
				if (unk_0xB87F6CF6E5628C67(joaat("ig_molly")))
				{
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							iLocal_264 = unk_0x852A19533F896693(iLocal_278, 0x0000001A, joaat("ig_molly"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0xE121AE1BBF90E186(iLocal_264, 0x00000001);
							unk_0x25C5402CC10F76CD(iLocal_264, 0x00000000);
							unk_0x71199B01895C6202(joaat("cogcabrio"));
							unk_0x71199B01895C6202(joaat("ig_molly"));
							unk_0x6DF7BF67E86AAE86(iLocal_264, 0x6F0783F5);
							iLocal_358 = 0x00000001;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xC844350D5D58C99A(iLocal_264))
			{
				unk_0xEBA53F35D0085654(&iLocal_264);
			}
			if (unk_0xC844350D5D58C99A(iLocal_278))
			{
				unk_0xA954465BA6FDEFE2(&iLocal_278);
			}
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_308, 0x00000001) < 500f)
		{
			if (iLocal_360 == 0x00000000)
			{
				iLocal_305 = unk_0xB01F55A0FD1CFD49("BREAKING_NEWS");
				unk_0x523BCC9DC80CD82F(joaat("police3"));
				unk_0x523BCC9DC80CD82F(joaat("maverick"));
				unk_0x523BCC9DC80CD82F(joaat("bison"));
				unk_0x523BCC9DC80CD82F(joaat("blista"));
				unk_0x36187931D29E5BBE(0x0000002D, "BB_Chase");
				unk_0x36187931D29E5BBE(0x00000023, "BB_Chase");
				unk_0x36187931D29E5BBE(0x00000002, "BB_Chase");
				unk_0x36187931D29E5BBE(0x00000036, "BB_Chase");
				unk_0x36187931D29E5BBE(0x00000037, "BB_Chase");
				unk_0x36187931D29E5BBE(0x00000043, "BB_Chase");
				func_187(0x00000001, "BB_Chase");
				unk_0x13896FDECC859926("TRV4_CHASE");
				iLocal_360 = 0x00000001;
			}
		}
		else if (iLocal_360 == 0x00000001)
		{
			unk_0x71199B01895C6202(joaat("police3"));
			unk_0x71199B01895C6202(joaat("maverick"));
			unk_0x71199B01895C6202(joaat("bison"));
			unk_0x71199B01895C6202(joaat("blista"));
			unk_0xDB8844D4B7C60440(0x0000002D, "BB_Chase");
			unk_0xDB8844D4B7C60440(0x00000023, "BB_Chase");
			unk_0xDB8844D4B7C60440(0x00000002, "BB_Chase");
			unk_0xDB8844D4B7C60440(0x00000036, "BB_Chase");
			unk_0xDB8844D4B7C60440(0x00000037, "BB_Chase");
			unk_0xDB8844D4B7C60440(0x00000043, "BB_Chase");
			func_354(0x00000001, "BB_Chase");
			unk_0x38DC636F3D2D2FA8("TRV4_CHASE");
			iLocal_360 = 0x00000000;
		}
		if (iLocal_372 == 0x00000000)
		{
			if (unk_0x1C0640BA9A7327B3() > (iLocal_230 + 0x00020F58))
			{
				unk_0x790015DC92C918E2();
				func_20("TRV4_WARN1", 0x00001D4C, 0x00000001);
				iLocal_230 = unk_0x1C0640BA9A7327B3();
				iLocal_372 = 0x00000001;
			}
		}
		if (iLocal_372 == 0x00000001)
		{
			if (unk_0x1C0640BA9A7327B3() > (iLocal_230 + 0x00020F58))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0x562F77A7F33D2E46("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0x8BC9595FD2792B5D("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_407 == 0x00000000)
			{
				unk_0xC92DB9682A650680("TRV4_CAR_ENTERED");
				iLocal_407 = 0x00000001;
			}
			if (!unk_0xC844350D5D58C99A(iLocal_279))
			{
				iLocal_279 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0xAA6B3A4292417750(iLocal_279, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x2F625BED8BF7F26A(iLocal_279);
				unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
			}
		}
		else if (unk_0xC844350D5D58C99A(iLocal_279))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_279, 0x00000000))
			{
				if (iLocal_359 == 0x00000000)
				{
					unk_0xAA6B3A4292417750(iLocal_279, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_359 = 0x00000001;
				}
				if (iLocal_351 == 0x00000001)
				{
					unk_0x7AA3AFA47C4179D1(iLocal_279);
					iLocal_351 = 0x00000000;
				}
				if (unk_0x9C77D2D0559097F0(iLocal_279, 0x00000001))
				{
					unk_0x046C362CF15F1935(&iLocal_279);
				}
			}
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (iLocal_410 == 0x00000000)
			{
				unk_0xB7EA504773B19E4E(0x0000009C, 0x00000001, 0x00000000);
				unk_0x69028CD9C862B137(-244f, -1842.74f, 28.48f);
				unk_0x69028CD9C862B137(-1.5f, -2014.4f, 11.5f);
				unk_0x69028CD9C862B137(-498.7f, -2136.5f, 8.4f);
				unk_0xB8C3D2D6C4AAEF18(0x00000001);
				iLocal_410 = 0x00000001;
			}
		}
		else if (iLocal_410 == 0x00000001)
		{
			unk_0xB8C3D2D6C4AAEF18(0x00000000);
			iLocal_410 = 0x00000000;
		}
		if ((iLocal_360 == 0x00000001 && unk_0xC844350D5D58C99A(iLocal_278)) && unk_0xC844350D5D58C99A(iLocal_264))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x54648B774DB42A3A(iLocal_278, func_353(unk_0x16F2683693E537C9()), 0x00000000))
				{
					func_352();
					iLocal_223 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_222 = 0x00000003;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_278))
				{
					func_352();
					iLocal_223 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_222 = 0x00000003;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iLocal_278, 0x00000001), 200f, 132f, 100f, 0x00000000, 0x00000001, 0x00000000))
				{
					iLocal_357 = 0x00000000;
					func_352();
					iLocal_223 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_222 = 0x00000003;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0x00000000, 0x00000001, 0x00000000))
				{
					iLocal_357 = 0x00000001;
					func_352();
					iLocal_223 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_222 = 0x00000003;
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x053C926E5E341906();
					unk_0x5C2EBB66AD2EA5FF(0x00000000);
					iLocal_357 = 0x00000001;
					func_352();
					iLocal_223 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_222 = 0x00000003;
				}
			}
		}
	}
}

void func_352()
{
	while (((!unk_0xB87F6CF6E5628C67(joaat("police3")) || !unk_0xB87F6CF6E5628C67(joaat("maverick"))) || !unk_0xB87F6CF6E5628C67(joaat("bison"))) || !unk_0xB87F6CF6E5628C67(joaat("blista")))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (((((!unk_0x3DDA6C6A285628E4(0x0000002D, "BB_Chase") || !unk_0x3DDA6C6A285628E4(0x00000023, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000002, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000036, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000037, "BB_Chase")) || !unk_0x3DDA6C6A285628E4(0x00000043, "BB_Chase"))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

var func_353(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

void func_354(int iParam0, char* sParam1)
{
	unk_0xDB8844D4B7C60440(iParam0, sParam1);
}

int func_355()
{
	if (Global_5145 == 0x00000004)
	{
		if (unk_0x1EE04CEA36EF313B())
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_356(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_233(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

void func_357()
{
	if (iLocal_223 == 0x00000000)
	{
		iLocal_336 = 0x00000001;
		iLocal_416 = 0x00000000;
		iLocal_433 = 0x00000000;
		iLocal_437 = 0x00000000;
		while (iLocal_336 == 0x00000001)
		{
			unk_0x1A6DFFFEEC27BF4F("M_LegalTrouble", 0x00000000);
			switch (iLocal_225)
			{
				case 0x00000000:
					unk_0xAE1670DD12E839C3("sol_3_int", 0x00000008);
					if (func_401())
					{
						while (!func_373(0x0000003D, &uLocal_655, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
						{
							SYSTEM::WAIT(0x00000000);
						}
						iLocal_406 = 0x00000000;
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						func_220(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "Michael", 0x00000000, 0x00000000, 0x00000000);
						if (unk_0xC844350D5D58C99A(Global_17409[0x00000000]))
						{
							if (unk_0xDF1306B443CD3D15(Global_17409[0x00000000], 0x00000000))
							{
								unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
								iLocal_279 = Global_17409[0x00000000];
							}
						}
						if (unk_0xC844350D5D58C99A(Global_17409[0x00000001]))
						{
							if (unk_0xDF1306B443CD3D15(Global_17409[0x00000001], 0x00000000))
							{
								unk_0x73270B3C9CC833FD(Global_17409[0x00000001], 0x00000001, 0x00000001);
								iLocal_290 = Global_17409[0x00000001];
							}
						}
						if (unk_0xC844350D5D58C99A(Global_17409[0x00000002]))
						{
							if (unk_0xDF1306B443CD3D15(Global_17409[0x00000002], 0x00000000))
							{
								unk_0x73270B3C9CC833FD(Global_17409[0x00000002], 0x00000001, 0x00000001);
								iLocal_291 = Global_17409[0x00000002];
							}
						}
						if (unk_0xC844350D5D58C99A(Global_17409[0x00000003]))
						{
							if (unk_0xDF1306B443CD3D15(Global_17409[0x00000003], 0x00000000))
							{
								unk_0x73270B3C9CC833FD(Global_17409[0x00000003], 0x00000001, 0x00000001);
								iLocal_292 = Global_17409[0x00000003];
							}
						}
						unk_0x4C902758BEA97C68(0x00000000);
						unk_0x420FE818E70BB523(0x00000004);
						func_372();
						if (!unk_0x0F1CCD77290EE12F())
						{
							unk_0x82E51BCA72537B6C(0x000000FA);
						}
						iLocal_225++;
					}
					break;
				
				case 0x00000001:
					if (iLocal_416 == 0x00000000)
					{
						if (unk_0x39B7A3CCD2467CAB())
						{
							if (iLocal_437 == 0x00000000)
							{
								if (unk_0xC844350D5D58C99A(iLocal_292))
								{
									if (unk_0xDF1306B443CD3D15(iLocal_292, 0x00000000))
									{
										if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_292)))
										{
											unk_0xB58CA658A628ED02(iLocal_292, 0x00000002);
											unk_0xA47B46945FF6DE74(iLocal_292, -1048.722f, -506.8387f, 35.0386f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
											unk_0xD8F6A53F4799FAFE(iLocal_292, 357.1288f);
											unk_0x05CA0E7946B27A19(iLocal_292, 0x00000001);
											unk_0xB9FD7450C0DAB575(iLocal_292, 0x40A00000);
											func_362(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0x00000000, 0x00000091);
											iLocal_437 = 0x00000001;
										}
										if (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iLocal_292)) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_292))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iLocal_292))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iLocal_292)))
										{
											if ((((((((unk_0x134B62B726CEC8E6(iLocal_292) != joaat("bus") && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("pounder")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("packer")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("airbus")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("ambulance")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("barracks")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("barracks2")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("benson")) && unk_0x134B62B726CEC8E6(iLocal_292) != joaat("biff"))
											{
												unk_0xA47B46945FF6DE74(iLocal_292, -1027.657f, -486.6945f, 35.9571f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
												unk_0xD8F6A53F4799FAFE(iLocal_292, 207.7515f);
												unk_0xB9FD7450C0DAB575(iLocal_292, 0x40A00000);
												func_362(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0x00000000, 0x00000091);
												iLocal_437 = 0x00000001;
											}
										}
										if ((((!unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iLocal_292)) && !unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iLocal_292))) && !unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iLocal_292))) && !unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iLocal_292))) && !unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iLocal_292)))
										{
											unk_0xA954465BA6FDEFE2(&iLocal_292);
											iLocal_437 = 0x00000001;
										}
									}
								}
							}
							func_360(&uLocal_655, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
							iLocal_416 = 0x00000001;
						}
					}
					if (iLocal_406 == 0x00000000)
					{
						unk_0xF63400DBE3303D26("SecGuards", &iLocal_488);
						unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_488);
						unk_0x0E2400AB9174FA81(0x00000005, iLocal_488, 0x6F0783F5);
						unk_0xD7992BEF7A9D109E("TREV4", 0x00000000);
						iLocal_406 = 0x00000001;
					}
					if (iLocal_433 == 0x00000000)
					{
						if (unk_0x22A8E52414415B76())
						{
							unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
							unk_0xADCFE13F048E110C(unk_0x16F2683693E537C9());
							unk_0x759A5E1D0F0A31A1(unk_0x16F2683693E537C9());
							if (unk_0x8F677B1F58B4741C() > 0x0001D4C0)
							{
								unk_0xC92DB9682A650680("TRV4_START");
								iLocal_433 = 0x00000001;
							}
						}
					}
					if (unk_0x3148AE92ED70DC30("Michael", 0x00000000))
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1012.268f, -480.0742f, 38.9757f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 121.4087f);
						unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 2f, 0x00000BB8, 0x00000000, 0x00000001, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xFFF7E7A4, 0x00000000, 0x00000000, 0x00000000);
					}
					if (unk_0xEABED1927EFB48CA(0x00000000))
					{
						unk_0x2FB9A57162E54BAB(0f);
					}
					if (!unk_0x39B7A3CCD2467CAB())
					{
						func_359(0x0000003D);
						if (iLocal_433 == 0x00000000)
						{
							unk_0xC92DB9682A650680("TRV4_START_CS_SKIP");
							iLocal_433 = 0x00000001;
						}
						unk_0xBF40D896CA4BDBE7();
						func_220(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						iLocal_225++;
					}
					break;
				
				case 0x00000002:
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					if (unk_0xC844350D5D58C99A(iLocal_279))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_279, 0x00000000))
						{
							if (unk_0x9C77D2D0559097F0(iLocal_279, 0x00000001))
							{
								unk_0x046C362CF15F1935(&iLocal_279);
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_290))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_290, 0x00000000))
						{
							if (unk_0x9C77D2D0559097F0(iLocal_290, 0x00000001))
							{
								unk_0x046C362CF15F1935(&iLocal_290);
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_291))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_291, 0x00000000))
						{
							if (unk_0x9C77D2D0559097F0(iLocal_291, 0x00000001))
							{
								unk_0x046C362CF15F1935(&iLocal_291);
							}
						}
					}
					func_358();
					iLocal_336 = 0x00000000;
					iLocal_225 = 0x00000000;
					iLocal_223 = 0x00000000;
					iLocal_222 = 0x00000002;
					break;
			}
			SYSTEM::WAIT(0x00000000);
		}
	}
}

void func_358()
{
	Global_F04E = 0x00000000;
}

void func_359(int iParam0)
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		if (iParam0 == Global_175B2)
		{
			Global_175B6 = 0x00000001;
			return;
		}
	}
}

void func_360(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 0x00000001)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()), 0x00000040);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), !bParam1, 0x00000000);
	}
	if (bParam7)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0x00000001);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 0x00000001, 0x00000000, 0x00000000);
	}
	if (bParam1)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	else
	{
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			if (unk_0xFBB4F23D534EB790(uParam0->f_4))
			{
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000000);
			}
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000001);
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
		}
		iVar0 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0x4A4806F9D471E491(iVar0, 0x00000001, 0x00000000);
		}
		unk_0x42740B44BA8D7B43("TIME_LAPSE");
		if (unk_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
		{
			unk_0x55D0A2DB35045A35(uParam0->f_A);
			unk_0x42740B44BA8D7B43("TIME_LAPSE");
			unk_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
		}
	}
	func_220(bParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_361();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x71592C07333285FE(uParam0->f_7, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x71592C07333285FE(uParam0->f_8, 0x00000000, 0x00000000);
		}
	}
	if (!bParam1)
	{
		if (unk_0x757EF87A33649210())
		{
			unk_0x82E51BCA72537B6C(0x000000FA);
		}
	}
	if (!bParam1)
	{
		if (Global_1B416.f_7FE8.f_12C1 != 0xFFFFFFF1)
		{
			Global_1B416.f_7FE8.f_12C1 = func_96();
		}
	}
}

void func_361()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

void func_362(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0xC844350D5D58C99A(Global_18F3B.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_18F3B.f_4, 0x00000000))
		{
			if (func_371(0x00000018) != Global_18F3B.f_4)
			{
				if (iParam2 == 0x00000001)
				{
					if (func_368(unk_0x68F4C0EC296D3901(Global_18F3B.f_4, 0x00000001), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_363(Global_18F3B.f_4, vParam0, fParam1, 0x00000018, 0x00000000);
			}
		}
	}
}

void func_363(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (iParam3 != 0x00000018 && iParam3 != 0x00000019)
		{
			return;
		}
		if (iParam3 == 0x00000018)
		{
			if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000019]) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000019], 0x00000000))
			{
				if (Global_126B1.f_1E4[0x00000019] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x56E1CD81AE700E98(iParam0) || unk_0x134B62B726CEC8E6(iParam0) == joaat("bus")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_367(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_39(iParam0, &Var0);
		if (func_71(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			fParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
		if (iParam3 == 0x00000018)
		{
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != joaat("vehicle_gen_controller"))
			{
				Global_12A8D = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
			}
		}
		func_365(iParam3, &Var0, vParam1, fParam2, func_34(iParam0));
		func_364(iParam3, iParam0, 0x00000000);
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_159(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000C) && !unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
	{
		if (Global_126B1.f_22B[0x00000000 /*21*/].f_4 != unk_0x134B62B726CEC8E6(iParam1))
		{
			return;
		}
	}
	if (Global_12A3C != 0xFFFFFFFF && Global_12A3C != iParam0)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			if (!unk_0xAF6690C489CC6203(iParam1))
			{
				unk_0x73270B3C9CC833FD(iParam1, 0x00000001, 0x00000001);
			}
			if (iParam0 == 0x00000018)
			{
				Global_1B416.f_7FE8.f_12C1 = func_96();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_371(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_145(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_365(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_159(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_366(iParam0);
			func_156(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
			if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000B))
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*3*/] = { vParam2 };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = -1f;
			}
			Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = iParam4 + 1;
			func_152(iParam0, 0x00000001);
		}
	}
}

void func_366(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_159(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_152(iParam0, 0x00000000);
		}
	}
}

void func_367(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_366(iParam0);
	func_152(iParam0, 0x00000000);
}

int func_368(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_369(vParam0, iParam1, 0x00000001);
	switch (iVar0)
	{
		case 0x00000000:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 0x00000001;
			break;
		
		case 0x00000001:
		case 0x00000002:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_369(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0x0000000A;
	iVar0 = 0x00000000;
	while (iVar0 <= (0x0000000A - 0x00000001))
	{
		if (Global_16E56[iVar0 /*10*/].f_7 != 0x00000107)
		{
			if (Global_16E56[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 0x00000091)
			{
				if (func_370(iVar0) || iParam2 == 0x00000000)
				{
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_16E56[iVar0 /*10*/].f_3, 0x00000001);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_370(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_371(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

void func_372()
{
	Global_F04E = 0x00000001;
}

bool func_373(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_400(iParam0, &Var0);
	func_399(iParam0, &Var0, &(Var0.f_1));
	return func_374(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_374(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_432(0x00000000) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0x71592C07333285FE(uParam0->f_7, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x71592C07333285FE(uParam0->f_8, 0x00000000, 0x00000000);
		}
		return 0x00000001;
	}
	if (uParam0->f_2 == 0x00000000)
	{
		if (uParam0->f_7 != 0xFFFFFFFF && uParam0->f_8 != 0xFFFFFFFF)
		{
			if (bParam2 || !func_397(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x64F604CF561734A9("TIME_LAPSE", 0x00000000, 0xFFFFFFFF))
				{
					uParam0->f_6 = 0x00000000;
					uParam0->f_2 = 0x00000001;
				}
			}
			else
			{
				uParam0->f_2 = 0xFFFFFFFF;
				return 0x00000001;
			}
		}
		else
		{
			uParam0->f_2 = 0xFFFFFFFF;
			return 0x00000001;
		}
	}
	unk_0x3FC8DBCC154CA56B();
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x6A36BC55C7F6D023(0f);
	if (uParam0->f_2 == 0x00000001)
	{
		if (bParam2)
		{
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000000);
			uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
			unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
			if (uParam1->f_11 < 0x00000000)
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 0x00000003, 0x00000002);
			}
			else
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
			}
			unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_E);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000001);
			if (!bParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				}
				iVar0 = unk_0x728870EB733D12A1();
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
					}
					unk_0x4A4806F9D471E491(iVar0, 0x00000000, 0x00000000);
				}
			}
			fVar1 = unk_0x94AE88F396FEBF6C(uParam0->f_4);
			unk_0xBAF1FC9E86FF7F91();
			unk_0x0002EE0323037BB6(uParam1->f_2, fVar1, 0x00000000);
			unk_0xD7AD2803AD9697F7(uParam1->f_2, fVar1);
			unk_0x58B5D6A0F1D7754D(uParam1->f_2, fVar1);
			if (bParam3)
			{
				unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			func_396(&(uParam0->f_1), 0x00000000, 0x00000000, 0x00000000, unk_0x972A296334C9D57B(), unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02());
			func_360(uParam0, 0x00000001, 0x00000000, 0x000007D0, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			uParam0->f_2 = 0x00000002;
		}
		else if (!func_397(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000000);
				uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
				if (uParam1->f_11 < 0x00000000)
				{
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 0x00000003, 0x00000002);
				}
				else
				{
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
				}
				unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_E);
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000001);
				if (!bParam6)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					iVar2 = unk_0x728870EB733D12A1();
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						if (!unk_0xAF6690C489CC6203(iVar2))
						{
							unk_0x73270B3C9CC833FD(iVar2, 0x00000001, 0x00000000);
						}
						unk_0x4A4806F9D471E491(iVar2, 0x00000000, 0x00000000);
					}
				}
				fVar3 = unk_0x94AE88F396FEBF6C(uParam0->f_4);
				unk_0xBAF1FC9E86FF7F91();
				unk_0x0002EE0323037BB6(uParam1->f_2, fVar3, 0x00000000);
				unk_0xD7AD2803AD9697F7(uParam1->f_2, fVar3);
				unk_0x58B5D6A0F1D7754D(uParam1->f_2, fVar3);
				if (bParam3)
				{
					unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				}
				func_396(&(uParam0->f_1), 0x00000000, 0x00000000, 0x00000008, unk_0x972A296334C9D57B(), unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02());
				func_360(uParam0, 0x00000001, 0x00000000, 0x000007D0, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
				uParam0->f_2 = 0x00000002;
			}
			else
			{
				unk_0x42740B44BA8D7B43("TIME_LAPSE");
				uParam0->f_2 = 0xFFFFFFFF;
				return 0x00000001;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000000);
			uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
			unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
			if (uParam1->f_11 < 0x00000000)
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 0x00000003, 0x00000002);
			}
			else
			{
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
			}
			unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_E);
			unk_0x34570E685597AE09(uParam0->f_4, 0x00000003);
			unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000001);
			if (!bParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				}
				iVar4 = unk_0x728870EB733D12A1();
				if (unk_0xC844350D5D58C99A(iVar4))
				{
					if (!unk_0xAF6690C489CC6203(iVar4))
					{
						unk_0x73270B3C9CC833FD(iVar4, 0x00000001, 0x00000000);
					}
					unk_0x4A4806F9D471E491(iVar4, 0x00000000, 0x00000000);
				}
			}
			fVar5 = unk_0x94AE88F396FEBF6C(uParam0->f_4);
			unk_0xBAF1FC9E86FF7F91();
			unk_0x0002EE0323037BB6(uParam1->f_2, fVar5, 0x00000000);
			unk_0xD7AD2803AD9697F7(uParam1->f_2, fVar5);
			unk_0x58B5D6A0F1D7754D(uParam1->f_2, fVar5);
			if (bParam3)
			{
				unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			}
			func_396(&(uParam0->f_1), 0x00000000, 0x00000000, 0x00000000, unk_0x972A296334C9D57B(), unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02());
			func_360(uParam0, 0x00000001, 0x00000000, 0x000007D0, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			uParam0->f_2 = 0x00000002;
		}
		else
		{
			unk_0x42740B44BA8D7B43("TIME_LAPSE");
			uParam0->f_2 = 0xFFFFFFFF;
			return 0x00000001;
		}
	}
	if (uParam0->f_2 == 0x00000002)
	{
		if (bParam3)
		{
			unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		}
		if (!uParam0->f_5)
		{
			if (func_377(uParam0->f_8, 0x00000000, &(uParam1->f_12), &(uParam1->f_16), uParam0, 0xBF800000, 0x00000000, 0x00000001, 0x3F800000))
			{
				if (uParam1->f_11 < 0x00000000)
				{
					uParam0->f_9 = unk_0x1C0640BA9A7327B3();
					uParam0->f_2 = 0x00000003;
				}
				else
				{
					uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
					unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 0x00000003, 0x00000002);
					unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_E);
					unk_0x34570E685597AE09(uParam0->f_4, 0x00000003);
					unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000001);
					uParam0->f_9 = unk_0x1C0640BA9A7327B3();
					uParam0->f_2 = 0x00000016;
				}
			}
		}
		else if (func_377(uParam0->f_7, 0x00000000, &(uParam1->f_12), &(uParam1->f_16), uParam0, 0xBF800000, 0x00000000, 0x00000001, 0x3F800000))
		{
			if (uParam1->f_11 < 0x00000000)
			{
				uParam0->f_9 = unk_0x1C0640BA9A7327B3();
				uParam0->f_2 = 0x00000003;
			}
			else
			{
				uParam0->f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_F, 0x00000003, 0x00000002);
				unk_0xB2ABBA6B919F5CE7(uParam0->f_4, uParam1->f_8, uParam1->f_B, uParam1->f_F, 0x00000003, 0x00000002);
				unk_0x5818C8D5303DCCF8(uParam0->f_4, uParam1->f_E);
				unk_0x34570E685597AE09(uParam0->f_4, 0x00000003);
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000001);
				uParam0->f_9 = unk_0x1C0640BA9A7327B3();
				uParam0->f_2 = 0x00000016;
			}
		}
		if (!bParam5)
		{
			if (func_375(0x000003E8) || uParam0->f_6)
			{
				uParam0->f_6 = 0x00000001;
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(0x000000FA);
				}
				if (!unk_0x757EF87A33649210())
				{
					unk_0x3FC8DBCC154CA56B();
					unk_0x3584F71E5CA29322(0x00000007);
					return 0x00000000;
				}
				if (uParam0->f_3 != 0x00000000)
				{
					func_377(uParam0->f_7, 0x00000000, &(uParam1->f_12), &(uParam1->f_16), uParam0, 1f, 0x00000000, 0x00000001, 0x3F800000);
				}
				uParam0->f_2 = 0x00000004;
			}
		}
	}
	if (uParam0->f_2 == 0x00000016)
	{
		if (bParam3)
		{
			unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_4) && unk_0xFA06B985B30FB0FC(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x1C0640BA9A7327B3();
			uParam0->f_2 = 0x00000003;
		}
		if (!bParam5)
		{
			if (func_375(0x000003E8) || uParam0->f_6)
			{
				uParam0->f_6 = 0x00000001;
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(0x000000FA);
				}
				if (!unk_0x757EF87A33649210())
				{
					unk_0x3FC8DBCC154CA56B();
					unk_0x3584F71E5CA29322(0x00000007);
					return 0x00000000;
				}
				uParam0->f_2 = 0x00000004;
			}
		}
	}
	if (uParam0->f_2 == 0x00000003)
	{
		if (bParam3)
		{
			unk_0x536F1BE96C726C4B(uParam1->f_2, 5000f, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		}
		if (uParam0->f_9 + 1000 > unk_0x1C0640BA9A7327B3())
		{
			uParam0->f_2 = 0x00000004;
		}
	}
	if (uParam0->f_2 == 0x00000004)
	{
		uParam0->f_6 = 0x00000000;
		uParam0->f_2 = 0xFFFFFFFF;
		return 0x00000001;
	}
	if (uParam0->f_2 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_375(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x1C0640BA9A7327B3();
		}
		Global_1C = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_1B) > iParam0)
		{
			if (func_376())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_376()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000012) || unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_377(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0x00000000:
			*uParam4 = func_96();
			iVar5 = func_96();
			func_104(&iVar5, iParam0);
			func_105(&iVar5, iParam1);
			func_106(&iVar5, 0x00000000);
			if (func_394(*uParam4, iVar5))
			{
				func_393(&iVar5, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			}
			func_391(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_B = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_384((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			if (bParam7)
			{
				unk_0x25CDE70818786F1F(0.6f);
				unk_0x365391E40B6BA75B(0x00000000);
				unk_0x9B84ADFFC9CAC31A(0x00000000);
			}
			func_383();
			uParam4->f_A = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(uParam4->f_A, "TIME_LAPSE_MASTER", 0x00000000, 0x00000001);
			unk_0x8BC9595FD2792B5D("TOD_SHIFT_SCENE");
			func_361();
			uParam4->f_3++;
			break;
		
		case 0x00000001:
		case 0x00000002:
			if ((unk_0x9F4FE516EAACCFC5(uParam4->f_4) && unk_0xFA06B985B30FB0FC(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x9F4FE516EAACCFC5(uParam4->f_4) && unk_0xFA06B985B30FB0FC(uParam4->f_4))
				{
					fVar0 = unk_0xEDD067DFFB8D5784(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(sParam2) != 0x00000000)
						{
							unk_0x8225571BCEE038F8(sParam2, fParam8);
						}
						if (unk_0x12AB0310C2281427(sParam3) != 0x00000000)
						{
							unk_0xF1662D1948765623();
							unk_0xCD7E6F59323AEBCB(sParam3, 0x00000000);
						}
						uParam4->f_3 = 0x00000002;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_393(&iVar5, uParam4->f_B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x71592C07333285FE(func_382(iVar5), func_381(iVar5), func_380(iVar5));
				if (bParam7)
				{
					unk_0xF8041E6992430151();
				}
				unk_0x55D0A2DB35045A35(uParam4->f_A);
				unk_0x42740B44BA8D7B43("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x9B84ADFFC9CAC31A(0x00000001);
					unk_0x365391E40B6BA75B(0x00000001);
				}
				return 0x00000001;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_379(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar12));
			iVar5 = *uParam4;
			func_393(&iVar5, iVar4, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x71592C07333285FE(func_382(iVar5), func_381(iVar5), func_380(iVar5));
			if (func_378(iVar5) != unk_0x972A296334C9D57B())
			{
				unk_0xD3A9F3BA3F4248BA(func_378(iVar5), func_103(iVar5), func_101(iVar5));
			}
			func_272();
			unk_0xF99F2927BEBB5EE7(0x00000006);
			break;
	}
	return 0x00000000;
}

int func_378(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

float func_379(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_380(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_381(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_382(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_383()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	unk_0x3CBF2C83A68C1611(iVar0, "OFF");
	return 0x00000001;
}

void func_384(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (func_390(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5)))
		{
			func_385(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000006)
	{
		if (func_390(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/])))
		{
			func_385(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x9911B88AFCF2F6D2();
}

void func_385(int iParam0, float fParam1)
{
	if (func_390(iParam0))
	{
		func_386(iParam0, (func_388(iParam0) + fParam1));
	}
}

void func_386(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_387(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

float func_387(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

float func_388(var uParam0)
{
	if (func_390(uParam0))
	{
		if (func_389(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_387(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_389(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_390(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_391(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_394(iParam0, iParam1))
	{
		iVar0 = func_103(iParam1);
		iVar1 = func_101(iParam0);
		iVar2 = (func_101(iParam0) - func_101(iParam1));
		iVar3 = (func_103(iParam0) - func_103(iParam1));
		iVar4 = (func_378(iParam0) - func_378(iParam1));
		iVar5 = (func_382(iParam0) - func_382(iParam1));
		iVar6 = (func_381(iParam0) - func_381(iParam1));
		iVar7 = (func_380(iParam0) - func_380(iParam1));
	}
	else
	{
		iVar0 = func_103(iParam0);
		iVar1 = func_101(iParam1);
		iVar2 = (func_101(iParam1) - func_101(iParam0));
		iVar3 = (func_103(iParam1) - func_103(iParam0));
		iVar4 = (func_378(iParam1) - func_378(iParam0));
		iVar5 = (func_382(iParam1) - func_382(iParam0));
		iVar6 = (func_381(iParam1) - func_381(iParam0));
		iVar7 = (func_380(iParam1) - func_380(iParam0));
	}
	while (iVar7 < 0x00000000)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 0x00000001);
	}
	while (iVar7 > 0x0000003B)
	{
		iVar7 = (iVar7 - 0x0000003C);
		iVar6++;
	}
	while (iVar6 < 0x00000000)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 0x00000001);
	}
	while (iVar6 > 0x0000003B)
	{
		iVar6 = (iVar6 - 0x0000003C);
		iVar5++;
	}
	while (iVar5 < 0x00000000)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 0x00000001);
	}
	while (iVar5 > 0x00000017)
	{
		iVar5 = (iVar5 - 0x00000018);
		iVar4++;
	}
	while (iVar4 < 0x00000000)
	{
		while (iVar3 < 0x00000000)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 0x00000001);
		}
		iVar4 = (iVar4 + func_100(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_392(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0x00000000)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 0x00000001);
	}
	while (iVar3 > 0x0000000C)
	{
		iVar3 = (iVar3 - 0x0000000C);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_392(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_101(*iParam0);
	iVar1 = func_103(*iParam0);
	iVar2 = func_378(*iParam0);
	iVar3 = func_382(*iParam0);
	iVar4 = func_381(*iParam0);
	iVar5 = func_380(*iParam0);
	if (((((iParam6 == 0x00000000 && iParam5 == 0x00000000) && iParam4 == 0x00000000) && iParam3 == 0x00000000) && iParam2 == 0x00000000) && iParam1 == 0x00000000)
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	if (iParam2 < 0x00000000)
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam4 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x00000000)
	{
		return;
	}
	if (iParam6 < 0x00000000)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 0x0000003C)
	{
		iParam2++;
		iVar5 = (iVar5 - 0x0000003C);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 0x0000003C)
	{
		iParam3++;
		iVar4 = (iVar4 - 0x0000003C);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 0x00000018)
	{
		iParam4++;
		iVar3 = (iVar3 - 0x00000018);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_100(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_100(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_396(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_394(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_395(iParam1) || !func_395(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_103(iParam0);
	iVar1 = func_103(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_395(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	iVar0 = func_380(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_381(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_382(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_101(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_103(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_378(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_100(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(uParam0, iParam1);
	func_105(uParam0, iParam2);
	func_104(uParam0, iParam3);
	func_98(uParam0, iParam5);
	func_99(uParam0, iParam4);
	func_97(uParam0, iParam6);
}

bool func_397(int iParam0, int iParam1)
{
	return func_398(unk_0xD8A54335F18763BA(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0x00000018)
	{
		iParam1 = 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000018)
	{
		iParam2 = 0x00000000;
	}
	if (iParam2 < 0x00000000 || iParam2 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam1 == iParam2)
	{
		return 0x00000001;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 0x00000018;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	if (!bVar0)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_399(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000041:
			*uParam1 = 0x00000014;
			*uParam2 = 0x00000016;
			break;
		
		case 0x0000001B:
			*uParam1 = 0x00000014;
			*uParam2 = 0x00000014;
			break;
		
		default:
			*uParam1 = Global_15DBC[iParam0 /*34*/].f_E;
			*uParam2 = Global_15DBC[iParam0 /*34*/].f_D;
			break;
	}
}

void func_400(int iParam0, var uParam1)
{
	uParam1->f_11 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_B = { 18.4907f, 0f, 2.0628f };
			uParam1->f_E = 40.0256f;
			uParam1->f_F = 0x00000FA0;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000011:
		case 0x00000012:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_B = { 17.9f, 0f, -75.4f };
			uParam1->f_E = 47.9931f;
			uParam1->f_F = 0x000019C8;
			uParam1->f_10 = 0x00000000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			break;
		
		case 0x00000015:
		case 0x00000016:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_B = { 11.8134f, 0f, 95.7284f };
			uParam1->f_E = 46.7255f;
			uParam1->f_F = 0x0000157C;
			uParam1->f_10 = 0x00000000;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			break;
		
		case 0x00000014:
			switch (func_107())
			{
				case 0x00000000:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_B = { 4.202f, 0f, -111.2882f };
					uParam1->f_E = 47f;
					uParam1->f_F = 0x0000157C;
					uParam1->f_10 = 0x00000000;
					break;
				
				case 0x00000002:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_B = { 4.202f, 0f, -111.2882f };
					uParam1->f_E = 47f;
					uParam1->f_F = 0x0000157C;
					uParam1->f_10 = 0x00000000;
					break;
			}
			break;
		
		case 0x00000028:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_B = { 13.3776f, 0f, 4.513f };
			uParam1->f_E = 39.9659f;
			uParam1->f_F = 0x00001C20;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000001B:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_B = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_E = 40f;
			uParam1->f_F = 0x00001C20;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000002B:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_B = { 9.3776f, 0f, 11.4737f };
			uParam1->f_E = 38.5265f;
			uParam1->f_F = 0x00001388;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000003D:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_B = { 4.8242f, 0f, -118.3167f };
			uParam1->f_E = 37f;
			uParam1->f_F = 0x00001388;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000005B:
		case 0x0000005D:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_B = { 18.4979f, 0f, 55.9579f };
			uParam1->f_E = 56.3199f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000045:
		case 0x00000056:
		case 0x0000005A:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_B = { 17.19917f, 0f, 44.21184f };
			uParam1->f_E = 47.56362f;
			uParam1->f_F = 0x00001770;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000046:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_B = { -0.2f, 0f, -169.6f };
			uParam1->f_E = 47.6f;
			uParam1->f_F = 0x00001388;
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
			uParam1->f_10 = 0x00000001;
			break;
		
		case 0x0000002D:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_B = { 14.5f, 0f, -18.5f };
			uParam1->f_E = 50f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000031:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_B = { 2.0429f, 0f, -101.5132f };
			uParam1->f_E = 45f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000009:
			switch (func_107())
			{
				case 0x00000002:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_B = { 21.9916f, 0f, -135.2969f };
					uParam1->f_E = 47.1057f;
					uParam1->f_F = 0x00001770;
					uParam1->f_10 = 0x00000000;
					break;
				
				case 0x00000001:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_B = { 2.5107f, 0f, 51.1167f };
					uParam1->f_E = 35.9859f;
					uParam1->f_F = 0x00001770;
					uParam1->f_10 = 0x00000000;
					break;
			}
			break;
		
		case 0x0000001E:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_B = { 61.9f, 0f, -63.8f };
			uParam1->f_E = 46.6f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000027:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_B = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_E = 34.1544f;
			uParam1->f_F = 0x00000BB8;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000047:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_B = { 9.4f, 0f, -78.5f };
			uParam1->f_E = 30.4f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000004A:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_B = { 10.4f, 0f, 81.4f };
			uParam1->f_E = 48.1095f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000054:
		case 0x00000055:
		case 0x00000041:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_B = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_E = 39.4027f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000003E:
		case 0x0000000F:
		case 0x00000010:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_B = { 5.9088f, 0f, 89.1989f };
			uParam1->f_E = 36.8186f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			if (iParam0 == 0x0000003E)
			{
				if (func_107() != 0x00000002)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_B = { 0f, 0f, 0f };
					uParam1->f_E = -1f;
					uParam1->f_F = 0xFFFFFFFF;
					uParam1->f_10 = 0x00000000;
				}
			}
			break;
		
		case 0x0000003F:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_B = { -4.3f, 0f, -124.1f };
			uParam1->f_E = 50f;
			uParam1->f_F = 0x00001F40;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000040:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_B = { 1.6f, 0f, -124.6f };
			uParam1->f_E = 34.7f;
			uParam1->f_F = 0x00001F40;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000018:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_B = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_E = 25.66f;
			uParam1->f_F = 0x00001F40;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000019:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_B = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_E = 35.31843f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x0000001A:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_B = { 5.8327f, 0f, 89.6405f };
			uParam1->f_E = 32.7f;
			uParam1->f_F = 0x00001964;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000003:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_B = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_E = 29.9555f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000004:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_B = { -20.6093f, 0f, 32.1888f };
			uParam1->f_E = 30f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000005:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_B = { -13.9263f, 0f, 140.7092f };
			uParam1->f_E = 35f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000006:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_B = { -5.7232f, 0f, 6.6362f };
			uParam1->f_E = 35f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		case 0x00000007:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_B = { -10.7685f, 0f, -38.1705f };
			uParam1->f_E = 35f;
			uParam1->f_F = 0x00001770;
			uParam1->f_10 = 0x00000000;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_B = { 0f, 0f, 0f };
			uParam1->f_E = -1f;
			uParam1->f_F = 0xFFFFFFFF;
			uParam1->f_10 = 0x00000000;
			break;
	}
	if (unk_0x12AB0310C2281427("RAIN") == unk_0x99910ECF8C64BEC6())
	{
		if (unk_0xEA6BC48857E0AC4C(&(uParam1->f_12)))
		{
			StringCopy(&(uParam1->f_12), "EXTRASUNNY", 16);
		}
		if (unk_0xEA6BC48857E0AC4C(&(uParam1->f_16)))
		{
			StringCopy(&(uParam1->f_16), "cirrocumulus", 16);
		}
	}
}

bool func_401()
{
	bool bVar0;
	
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_12B4D)
	{
		if (!bVar0)
		{
			Global_12B4D = 0x00000001;
		}
	}
	return bVar0;
}

void func_402()
{
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	if (!func_23())
	{
		if (func_432(0x00000000))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x523BCC9DC80CD82F(joaat("rapidgt"));
			unk_0x523BCC9DC80CD82F(joaat("surano"));
			unk_0x523BCC9DC80CD82F(joaat("carbonizzare"));
			while ((!unk_0xB87F6CF6E5628C67(joaat("rapidgt")) || !unk_0xB87F6CF6E5628C67(joaat("surano"))) || !unk_0xB87F6CF6E5628C67(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_279))
			{
				unk_0x536F1BE96C726C4B(vLocal_306, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_279 = unk_0x122AAB0B1D6F55AD(joaat("rapidgt"), vLocal_306, fLocal_319, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC002508A277213DE(iLocal_279, 0x00000070, 0x00000070);
				unk_0xD458AC1C1D29C3B4(iLocal_279, 0x00000BB8, 0x00000000);
				unk_0xD5A0214B20BCBAD8(iLocal_279, 0x00000001);
				unk_0x71199B01895C6202(joaat("rapidgt"));
				unk_0xAB8E2DDC7AF955E0(joaat("rapidgt"), 0x00000001);
				unk_0x120A395B0ECB8EA5(iLocal_279, 0x00000001);
				unk_0x44A200C9B6E1CEA6(iLocal_279, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_290))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("surano")))
				{
					unk_0x536F1BE96C726C4B(-1037.398f, -491.6539f, 35.5545f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					iLocal_290 = unk_0x122AAB0B1D6F55AD(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xC002508A277213DE(iLocal_290, 0x00000000, 0x00000000);
					unk_0xD458AC1C1D29C3B4(iLocal_290, 0x00000BB8, 0x00000000);
					unk_0xD5A0214B20BCBAD8(iLocal_290, 0x00000001);
					unk_0x71199B01895C6202(joaat("surano"));
					unk_0xAB8E2DDC7AF955E0(joaat("surano"), 0x00000001);
					unk_0x44A200C9B6E1CEA6(iLocal_290, 0x00000001);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_291))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("carbonizzare")))
				{
					unk_0x536F1BE96C726C4B(vLocal_306, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					iLocal_291 = unk_0x122AAB0B1D6F55AD(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xC002508A277213DE(iLocal_291, 0x00000059, 0x00000059);
					unk_0xD458AC1C1D29C3B4(iLocal_291, 0x00000BB8, 0x00000000);
					unk_0xD5A0214B20BCBAD8(iLocal_291, 0x00000001);
					unk_0x71199B01895C6202(joaat("carbonizzare"));
					unk_0xAB8E2DDC7AF955E0(joaat("carbonizzare"), 0x00000001);
					unk_0x44A200C9B6E1CEA6(iLocal_291, 0x00000001);
				}
			}
		}
		iLocal_223 = 0x00000000;
		iLocal_225 = 0x00000000;
		iLocal_343 = 0x00000000;
		iLocal_222 = 0x00000001;
	}
	else
	{
		unk_0xF63400DBE3303D26("SecGuards", &iLocal_488);
		unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_488);
		unk_0x0E2400AB9174FA81(0x00000005, iLocal_488, 0x6F0783F5);
		if (Global_16AF9 == 0x00000001)
		{
			if (func_405() == 0x00000000)
			{
				func_404(vLocal_316, fLocal_323, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_222 = 0x00000003;
			}
			if (func_405() == 0x00000001)
			{
				func_404(-935.4413f, -2928.061f, 12.9451f, 178.466f, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 0x00000005;
			}
			if (func_405() == 0x00000002)
			{
				func_404(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_EVADE_RT");
				iLocal_222 = 0x00000008;
			}
			if (func_405() == 0x00000003)
			{
				func_404(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 0x00000001, 0x00000000);
				func_403();
			}
		}
		else
		{
			if (func_405() == 0x00000000)
			{
				func_404(-1019.579f, -484.872f, 36.0795f, 93.7701f, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_222 = 0x00000002;
			}
			if (func_405() == 0x00000001)
			{
				func_404(vLocal_316, fLocal_323, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_START_RT");
				iLocal_222 = 0x00000003;
			}
			if (func_405() == 0x00000002)
			{
				func_404(-935.4413f, -2928.061f, 12.9451f, 178.466f, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_FOOT_CHASE_RT");
				iLocal_222 = 0x00000005;
			}
			if (func_405() == 0x00000003)
			{
				func_404(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 0x00000001, 0x00000000);
				iLocal_223 = 0x00000000;
				iLocal_343 = 0x00000001;
				unk_0xC92DB9682A650680("TRV4_EVADE_RT");
				iLocal_222 = 0x00000008;
			}
		}
		unk_0xD7992BEF7A9D109E("TREV4", 0x00000000);
		while (!unk_0x67C1D9E5B91B2E37(0x00000000))
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

void func_403()
{
	if (iLocal_223 == 0x00000000)
	{
		unk_0x536F1BE96C726C4B(-920.0547f, -2744.662f, 12.8434f, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		iLocal_223++;
	}
	if (iLocal_223 == 0x00000001)
	{
		unk_0x90CECE08EA8E77CC(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0x0F1CCD77290EE12F())
		{
			func_21(0x00000000, 0xFFFFFFFF, 0x00000001);
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		func_6();
	}
}

void func_404(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_23())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000002);
		unk_0x21387C9EECC2B220(0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		Global_181B4 = { vParam0 };
		Global_181B7 = fParam1;
		Global_181B3 = 0x00000001;
		if (iParam2 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000E);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000E);
		}
		if (iParam3 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000018);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000018);
		}
		func_22(0x00000001);
	}
}

int func_405()
{
	if (!Global_181B8 == 0x0000000A && !Global_181B8 == 0x00000009)
	{
		return 0x00000000;
	}
	return Global_181B8.f_2;
}

void func_406()
{
	if (iLocal_435[0x00000000] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x00000007]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x00000007], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000000] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000000] == 0x00000000)
	{
		if (iLocal_435[0x00000000] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x00000007]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x00000007], 0x00000000);
					iLocal_436[0x00000000] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x00000007], 0x00000000);
					iLocal_436[0x00000000] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000000] = 0x00000001;
			}
		}
	}
	if (iLocal_435[0x00000001] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x00000008]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x00000008], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000001] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000001] == 0x00000000)
	{
		if (iLocal_435[0x00000001] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x00000008]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x00000008], 0x00000000);
					iLocal_436[0x00000001] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x00000008], 0x00000000);
					iLocal_436[0x00000001] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000001] = 0x00000001;
			}
		}
	}
	if (iLocal_435[0x00000002] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000B]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000B], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x0000000B], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000002] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000002] == 0x00000000)
	{
		if (iLocal_435[0x00000002] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000B]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x0000000B], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000B], 0x00000000);
					iLocal_436[0x00000002] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000B], 0x00000000);
					iLocal_436[0x00000002] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000002] = 0x00000001;
			}
		}
	}
	if (iLocal_435[0x00000003] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000C]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000C], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x0000000C], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000003] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000003] == 0x00000000)
	{
		if (iLocal_435[0x00000003] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000C]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x0000000C], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000C], 0x00000000);
					iLocal_436[0x00000003] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000C], 0x00000000);
					iLocal_436[0x00000003] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000003] = 0x00000001;
			}
		}
	}
	if (iLocal_435[0x00000004] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000D]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000D], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x0000000D], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000004] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000004] == 0x00000000)
	{
		if (iLocal_435[0x00000004] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000D]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x0000000D], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000D], 0x00000000);
					iLocal_436[0x00000004] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000D], 0x00000000);
					iLocal_436[0x00000004] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000004] = 0x00000001;
			}
		}
	}
	if (iLocal_435[0x00000005] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000E]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000E], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x0000000E], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000005] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000005] == 0x00000000)
	{
		if (iLocal_435[0x00000005] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000E]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x0000000E], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000E], 0x00000000);
					iLocal_436[0x00000005] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000E], 0x00000000);
					iLocal_436[0x00000005] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000005] = 0x00000001;
			}
		}
	}
	if (iLocal_435[0x00000006] == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000F]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_204[0x0000000F], 0x00000000))
			{
				unk_0x2E1E5367A885F9B7(iLocal_204[0x0000000F], "SOL_3_POLICE_CARS_Group", 0x00000000);
				iLocal_435[0x00000006] = 0x00000001;
			}
		}
	}
	if (iLocal_436[0x00000006] == 0x00000000)
	{
		if (iLocal_435[0x00000006] == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000F]))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_204[0x0000000F], 0x00000000))
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000F], 0x00000000);
					iLocal_436[0x00000006] = 0x00000001;
				}
				else if (iLocal_222 == 0x00000005)
				{
					unk_0x06FF977AA95DCCE3(iLocal_204[0x0000000F], 0x00000000);
					iLocal_436[0x00000006] = 0x00000001;
				}
			}
			else
			{
				iLocal_436[0x00000006] = 0x00000001;
			}
		}
	}
}

void func_407()
{
	switch (iLocal_222)
	{
		case 0x00000002:
			if (iLocal_223 > 0x00000000)
			{
				if (iLocal_227 == 0x00000000)
				{
					iLocal_362 = 0x00000000;
					iLocal_449 = 0x00000000;
					iLocal_472 = 0x00000000;
					iLocal_473 = 0x00000000;
					func_17(&uLocal_490, 0x00000001, 0x00000000, "Devin", 0x00000000, 0x00000001);
					func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "Michael", 0x00000000, 0x00000001);
					iLocal_227 = 0x00000001;
				}
				if (iLocal_227 == 0x00000001)
				{
					if (iLocal_362 == 0x00000000)
					{
						if (unk_0x0EB28750412C3A5A(vLocal_318, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001) > 2f)
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_362 = 0x00000001;
								}
							}
						}
					}
					if (iLocal_449 == 0x00000000)
					{
						if (unk_0x0EB28750412C3A5A(vLocal_318, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001) > 100f)
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								if (func_410(&uLocal_490, 0x0000001D, "T1M4AUD", "SOL3_DEVCALL", 0x00000007, 0x00000000, 0x00000000, 0x00000001))
								{
									unk_0x8B4C4CA774181102(4f, 10f, 0x00000004);
									iLocal_449 = 0x00000001;
								}
							}
						}
					}
					if (iLocal_472 == 0x00000000 && iLocal_449 == 0x00000001)
					{
						if (func_409())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_490, "T1M4AUD", "T1M4_REACT", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_472 = 0x00000001;
								}
							}
						}
					}
					if (iLocal_473 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_278))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_278, 0x00000001) < 200f && unk_0x0A059E0DB9253280(iLocal_278))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
											{
												unk_0x8B4C4CA774181102(3f, 12f, 0x00000004);
												iLocal_473 = 0x00000001;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (iLocal_223 >= 0x00000000)
			{
				if (iLocal_227 == 0x00000000)
				{
					iLocal_450[0x00000000] = 0x00000000;
					iLocal_450[0x00000001] = 0x00000000;
					iLocal_450[0x00000002] = 0x00000000;
					iLocal_450[0x00000003] = 0x00000000;
					iLocal_469 = 0x00000000;
					iLocal_470 = 0x00000000;
					iLocal_471 = 0x00000000;
					iLocal_474 = 0x00000000;
					iLocal_475 = 0x00000000;
					iLocal_476 = 0x00000000;
					iLocal_477 = 0x00000000;
					iLocal_478 = 0x00000000;
					iLocal_241 = unk_0x1C0640BA9A7327B3();
					func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "Michael", 0x00000000, 0x00000001);
					func_17(&uLocal_490, 0x00000004, 0x00000000, "SOL3COP", 0x00000000, 0x00000001);
					iLocal_227 = 0x00000001;
				}
				if (iLocal_227 == 0x00000001)
				{
					if (iLocal_473 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_278))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_278, 0x00000001) < 200f && unk_0x0A059E0DB9253280(iLocal_278))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE2", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_473 = 0x00000001;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_278))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
						{
							if (unk_0x20D6474D5F4B9FC6(iLocal_278))
							{
								if (iLocal_450[0x00000000] == 0x00000000)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000) || unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 7000f && unk_0x9901AABAC4D4C590(iLocal_278) < 28000f)
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_490, "T1M4AUD", "T1M4_POLICE", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
													{
														iLocal_450[0x00000000] = 0x00000001;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[0x00000001] == 0x00000000)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000) || unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 28000f && unk_0x9901AABAC4D4C590(iLocal_278) < 34500f)
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_490, "T1M4AUD", "T1M4_POLICE2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
													{
														unk_0x8B4C4CA774181102(4f, 4f, 0x00000004);
														iLocal_450[0x00000001] = 0x00000001;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[0x00000002] == 0x00000000)
								{
									if (unk_0xDF1306B443CD3D15(iLocal_204[0x00000007], 0x00000000) || unk_0xDF1306B443CD3D15(iLocal_204[0x00000008], 0x00000000))
									{
										if (unk_0x9901AABAC4D4C590(iLocal_278) > 36000f && unk_0x9901AABAC4D4C590(iLocal_278) < 41000f)
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_490, "T1M4AUD", "T1M4_POLICE3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
													{
														unk_0x8B4C4CA774181102(2f, 4f, 0x00000004);
														iLocal_450[0x00000002] = 0x00000001;
													}
												}
											}
										}
									}
								}
								if (iLocal_470 == 0x00000000)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 41000f && unk_0x9901AABAC4D4C590(iLocal_278) < 43500f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_283) && unk_0x0A059E0DB9253280(iLocal_283))
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_490, "T1M4AUD", "T1M4_BOOM", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
													{
														unk_0x8B4C4CA774181102(4f, 4f, 0x00000004);
														iLocal_470 = 0x00000001;
													}
												}
											}
										}
									}
								}
								if (iLocal_471 == 0x00000000)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 50509f && unk_0x9901AABAC4D4C590(iLocal_278) < 50872f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_283) && unk_0x0A059E0DB9253280(iLocal_283))
										{
											if (!func_262())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_263(&uLocal_490, "T1M4AUD", "T1M4_BLOW", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
													{
														iLocal_471 = 0x00000001;
													}
												}
											}
										}
									}
								}
								if (iLocal_450[0x00000003] == 0x00000000)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 58000f && unk_0x9901AABAC4D4C590(iLocal_278) < 68000f)
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_490, "T1M4AUD", "T1M4_POLICE4", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
												{
													iLocal_450[0x00000003] = 0x00000001;
												}
											}
										}
									}
								}
								if (iLocal_474 == 0x00000000 && iLocal_450[0x00000003] == 0x00000001)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) < 76000f)
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
												{
													iLocal_474 = 0x00000001;
												}
											}
										}
									}
								}
								if (iLocal_469 == 0x00000000)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 80000f && unk_0x9901AABAC4D4C590(iLocal_278) < 82000f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_280[0x00000000]))
										{
											if (unk_0xDF1306B443CD3D15(iLocal_280[0x00000000], 0x00000000))
											{
												if (unk_0x0A059E0DB9253280(iLocal_280[0x00000000]))
												{
													if (!func_262())
													{
														if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
														{
															if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE4", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
															{
																unk_0x8B4C4CA774181102(3f, 10f, 0x00000004);
																iLocal_469 = 0x00000001;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_475 == 0x00000000)
								{
									if (unk_0x9901AABAC4D4C590(iLocal_278) > 82100f && unk_0x9901AABAC4D4C590(iLocal_278) < 83500f)
									{
										if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000B]))
										{
											if (unk_0x0A059E0DB9253280(iLocal_204[0x0000000B]))
											{
												if (!func_262())
												{
													if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
													{
														if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
														{
															iLocal_475 = 0x00000001;
														}
													}
												}
											}
										}
										else if (unk_0xC844350D5D58C99A(iLocal_204[0x0000000C]))
										{
											if (unk_0x0A059E0DB9253280(iLocal_204[0x0000000C]))
											{
												if (!func_262())
												{
													if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
													{
														if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE5", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
														{
															iLocal_475 = 0x00000001;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_478 == 0x00000000)
								{
									if ((unk_0x9901AABAC4D4C590(iLocal_278) > 101891f && unk_0x9901AABAC4D4C590(iLocal_278) < 105000f) && unk_0x0A059E0DB9253280(iLocal_278))
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE7", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
												{
													unk_0x8B4C4CA774181102(3f, 10f, 0x00000004);
													iLocal_478 = 0x00000001;
												}
											}
										}
									}
								}
								if (((unk_0x9901AABAC4D4C590(iLocal_278) > 105500f && unk_0x9901AABAC4D4C590(iLocal_278) < 119000f) && unk_0x1C0640BA9A7327B3() > iLocal_241 + 7000) && iLocal_477 == 0x00000000)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_241 = unk_0x1C0640BA9A7327B3();
												iLocal_477 = 0x00000001;
											}
										}
									}
								}
								if (iLocal_476 == 0x00000000 && iLocal_477 == 0x00000001)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_CHASE6", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_476 = 0x00000001;
											}
										}
									}
								}
								if (((unk_0x9901AABAC4D4C590(iLocal_278) > 105500f && unk_0x9901AABAC4D4C590(iLocal_278) < 119000f) && unk_0x1C0640BA9A7327B3() > iLocal_241 + 7000) && iLocal_476 == 0x00000001)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_POLICE5", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_241 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			if (iLocal_223 > 0x00000000)
			{
				if (iLocal_227 == 0x00000000)
				{
					iLocal_452 = 0x00000000;
					iLocal_479 = 0x00000000;
					iLocal_485 = 0x00000000;
					iLocal_480 = 0x00000001;
					iLocal_246 = unk_0x1C0640BA9A7327B3();
					func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "Michael", 0x00000000, 0x00000001);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
					{
						func_17(&uLocal_490, 0x00000002, iLocal_264, "MOLLY", 0x00000000, 0x00000001);
					}
					iLocal_227 = 0x00000001;
				}
				if (iLocal_227 == 0x00000001)
				{
					if (iLocal_485 == 0x00000000)
					{
						unk_0xCAB39E12D9493B73("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_485 = 0x00000001;
					}
					if (iLocal_480 == 0x00000001)
					{
						if (iLocal_452 == 0x00000000)
						{
							if (!func_262())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										unk_0x8B4C4CA774181102(4f, 6f, 0x00000004);
										iLocal_242 = unk_0x1C0640BA9A7327B3();
										iLocal_452 = 0x00000001;
										iLocal_479 = 0x00000001;
										iLocal_480 = 0x00000000;
									}
								}
							}
						}
						if (unk_0x1C0640BA9A7327B3() > iLocal_242 + 5000)
						{
							if (!func_262())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_490, "T1M4AUD", "SOL3_RUNS", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										unk_0x8B4C4CA774181102(4f, 6f, 0x00000004);
										iLocal_242 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_479 == 0x00000001 && unk_0x1C0640BA9A7327B3() > iLocal_246 + 4000)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_490, "T1M4AUD", "T1M4_SHOUT1", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									unk_0x8B4C4CA774181102(4f, 6f, 0x00000004);
									iLocal_246 = unk_0x1C0640BA9A7327B3();
									iLocal_480 = 0x00000001;
									iLocal_479 = 0x00000000;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (iLocal_223 > 0x00000000)
			{
				if (iLocal_227 == 0x00000000)
				{
					iLocal_453 = 0x00000000;
					iLocal_454 = 0x00000000;
					iLocal_455 = 0x00000000;
					iLocal_481 = 0x00000000;
					iLocal_482 = 0x00000000;
					func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "Michael", 0x00000000, 0x00000001);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
					{
						func_17(&uLocal_490, 0x00000002, iLocal_264, "MOLLY", 0x00000000, 0x00000001);
					}
					iLocal_227 = 0x00000001;
				}
				if (iLocal_227 == 0x00000001)
				{
					if (iLocal_453 == 0x00000000)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_490, "T1M4AUD", "SOL3_PAST", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_453 = 0x00000001;
								}
							}
						}
					}
					if (iLocal_453 == 0x00000001 && iLocal_455 == 0x00000000)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_490, "T1M4AUD", "SOL3_WATCH", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_455 = 0x00000001;
								}
							}
						}
					}
					if (iLocal_454 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_264))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
							{
								if (unk_0x69DF961355195C3C(iLocal_251))
								{
									if (unk_0xA45992A6CE82FB43(iLocal_251) > 0.65f && unk_0xA45992A6CE82FB43(iLocal_251) < 0.835f)
									{
										if (!func_262())
										{
											if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
											{
												if (func_263(&uLocal_490, "T1M4AUD", "SOL3_SUCKS", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
												{
													unk_0x8B4C4CA774181102(8f, 8f, 0x00000004);
													iLocal_454 = 0x00000001;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_481 == 0x00000000)
					{
						if (!unk_0xC844350D5D58C99A(iLocal_264))
						{
							if (!func_262())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									if (func_263(&uLocal_490, "T1M4AUD", "T1M4_SMUSH", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_481 = 0x00000001;
									}
								}
							}
						}
					}
					if (iLocal_481 == 0x00000001 && iLocal_482 == 0x00000000)
					{
						if (!func_262())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_263(&uLocal_490, "T1M4AUD", "T1M4_SMUSH2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_482 = 0x00000001;
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000008:
			if (iLocal_223 > 0x00000000)
			{
				if (iLocal_227 == 0x00000000)
				{
					iLocal_483 = 0x00000000;
					iLocal_247 = unk_0x1C0640BA9A7327B3();
					func_17(&uLocal_490, 0x00000000, unk_0x16F2683693E537C9(), "Michael", 0x00000000, 0x00000001);
					iLocal_227 = 0x00000001;
				}
				if (iLocal_227 == 0x00000001)
				{
					if (iLocal_483 == 0x00000000)
					{
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iLocal_277 = func_408(unk_0x16F2683693E537C9(), 0xA49E591C, 0x00000000, 0x00000000, 0x0000001C);
							if (unk_0xC844350D5D58C99A(iLocal_277))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_277, 0x00000001) < 40f)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_COPS", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_483 = 0x00000001;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_483 == 0x00000001 && unk_0x1C0640BA9A7327B3() > iLocal_247 + 5000)
					{
						if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iLocal_277 = func_408(unk_0x16F2683693E537C9(), 0xA49E591C, 0x00000000, 0x00000000, 0x0000001C);
							if (unk_0xC844350D5D58C99A(iLocal_277))
							{
								if (func_16(unk_0x16F2683693E537C9(), iLocal_277, 0x00000001) < 40f)
								{
									if (!func_262())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_263(&uLocal_490, "T1M4AUD", "T1M4_COPS", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_247 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x263615A674FCA6E9(iParam0, &iVar0, iParam4);
		iVar1 = 0x00000000;
		while (iVar1 <= (iVar0 - 0x00000001))
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar1]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar0[iVar1]))
				{
					if (unk_0xD09DF7101876AFB8(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0x00000000)
						{
							if (iParam3 == 0x00000001)
							{
								if (unk_0x0A059E0DB9253280(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 0x00000001)
						{
							if (unk_0xC844350D5D58C99A(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0xD09DF7101876AFB8(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 0x00000001)
										{
											if (unk_0x0A059E0DB9253280(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0x00000000;
}

int func_409()
{
	if (Global_5145 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_410(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_261(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000001;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
	return func_250(sParam3, iParam4, bParam7);
}

void func_411()
{
	if (((iLocal_222 == 0x00000004 || iLocal_222 == 0x00000005) || iLocal_222 == 0x00000008) || iLocal_222 == 0x00000006)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_412(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000002, 0x000000C8, 0x00000000))
			{
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
				unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
			}
		}
	}
	if (iLocal_441 == 0x00000000)
	{
		if (iLocal_222 == 0x00000004)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_412(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000002, 0x000000C8, 0x00000000))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000003, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					iLocal_441 = 0x00000001;
				}
			}
		}
	}
}

int func_412(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000001:
			vVar0[0x00000000 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0x00000000 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0x00000000] = 171.25f;
			vVar0[0x00000001 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[0x00000001 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[0x00000001] = 132f;
			vVar0[0x00000002 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[0x00000002 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[0x00000002] = 132f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000002:
			vVar0[0x00000000 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0x00000000 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 247f;
			vVar0[0x00000001 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[0x00000001 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 149f;
			vVar0[0x00000002 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[0x00000002 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 185.5f;
			vVar0[0x00000003 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[0x00000003 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 250f;
			vVar0[0x00000004 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[0x00000004 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 193.5f;
			vVar0[0x00000005 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[0x00000005 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 234.5f;
			vVar0[0x00000006 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[0x00000006 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[0x00000006] = 16f;
			vVar0[0x00000007 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[0x00000007 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 80f;
			vVar0[0x00000008 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[0x00000008 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 142f;
			vVar0[0x00000009 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[0x00000009 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000009] = 30.75f;
			vVar0[0x0000000A /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[0x0000000A /*3*/] = { -896.3734f, -3505.715f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000A] = 150f;
			vVar0[0x0000000B /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[0x0000000B /*3*/] = { -1685.626f, -2720.364f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000B] = 29.25f;
			vVar0[0x0000000C /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[0x0000000C /*3*/] = { -1110.198f, -3493.617f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000C] = 43f;
			iVar3 = 0x0000000D;
			break;
		
		case 0x00000003:
			vVar0[0x00000000 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0x00000000 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 255f;
			vVar0[0x00000001 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[0x00000001 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 180f;
			vVar0[0x00000002 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[0x00000002 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 205f;
			vVar0[0x00000003 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[0x00000003 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 86.25f;
			vVar0[0x00000004 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[0x00000004 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 150.5f;
			vVar0[0x00000005 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[0x00000005 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 140.5f;
			vVar0[0x00000006 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[0x00000006 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000006] = 90f;
			vVar0[0x00000007 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[0x00000007 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 100f;
			vVar0[0x00000008 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[0x00000008 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 248.75f;
			vVar0[0x00000009 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[0x00000009 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[0x00000009] = 128f;
			vVar0[0x0000000A /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[0x0000000A /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[0x0000000A] = 140f;
			vVar0[0x0000000B /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[0x0000000B /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[0x0000000B] = 16f;
			vVar0[0x0000000C /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[0x0000000C /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[0x0000000C] = 214.25f;
			vVar0[0x0000000D /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[0x0000000D /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[0x0000000D] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0x00000000;
			}
			vVar1[0x00000009 /*3*/].f_2 = (vVar1[0x00000009 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000A /*3*/].f_2 = (vVar1[0x0000000A /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000B /*3*/].f_2 = (vVar1[0x0000000B /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000C /*3*/].f_2 = (vVar1[0x0000000C /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000D /*3*/].f_2 = (vVar1[0x0000000D /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 0x0000000E;
			break;
		
		case 0x00000004:
			vVar0[0x00000000 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0x00000000 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000000] = 114f;
			vVar0[0x00000001 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[0x00000001 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000001] = 88.5f;
			vVar0[0x00000002 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[0x00000002 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000002] = 133.25f;
			vVar0[0x00000003 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[0x00000003 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000003] = 104.5f;
			vVar0[0x00000004 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[0x00000004 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000004] = 121.75f;
			vVar0[0x00000005 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[0x00000005 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000005] = 84.5f;
			vVar0[0x00000006 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[0x00000006 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000006] = 103.75f;
			vVar0[0x00000007 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[0x00000007 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000007] = 104.25f;
			vVar0[0x00000008 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[0x00000008 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000008] = 91f;
			vVar0[0x00000009 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[0x00000009 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000009] = 51.25f;
			iVar3 = 0x0000000A;
			break;
		
		case 0x00000005:
			vVar0[0x00000000 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0x00000000 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000000] = 45.75f;
			vVar0[0x00000001 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[0x00000001 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000001] = 99f;
			vVar0[0x00000002 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[0x00000002 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000002] = 81.5f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000006:
			vVar0[0x00000000 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0x00000000 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((0x0000000A + iParam2)) };
			fVar2[0x00000000] = 120f;
			vVar0[0x00000001 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[0x00000001 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[0x00000001] = 170f;
			vVar0[0x00000002 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[0x00000002 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[0x00000002] = 12.5f;
			vVar0[0x00000003 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[0x00000003 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[0x00000003] = 9.75f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000007:
			vVar0[0x00000000 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0x00000000 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000000] = 162f;
			vVar0[0x00000001 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[0x00000001 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000001] = 124f;
			vVar0[0x00000002 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[0x00000002 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000002] = 55f;
			vVar0[0x00000003 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[0x00000003 /*3*/] = { -1073.333f, -498.717f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000003] = 142f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000008:
			vVar0[0x00000000 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0x00000000 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0x00000000] = 7.75f;
			vVar0[0x00000001 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[0x00000001 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[0x00000001] = 14.75f;
			vVar0[0x00000002 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[0x00000002 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[0x00000002] = 31.5f;
			vVar0[0x00000003 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[0x00000003 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[0x00000003] = 30.5f;
			vVar0[0x00000004 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[0x00000004 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[0x00000004] = 6.75f;
			iVar3 = 0x00000005;
			break;
	}
	iVar4 = 0x00000000;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 0x00000001))
		{
			return 0x00000001;
		}
		iVar4++;
	}
	return 0x00000000;
}

void func_413()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iLocal_279 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
}

void func_414()
{
	if (iLocal_349 == 0x00000001)
	{
		if (iLocal_222 == 0x00000004)
		{
			if (iLocal_224 > 0x00000001 && iLocal_424 == 0x00000000)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 0x00000006)
		{
			if (unk_0xC844350D5D58C99A(iLocal_295))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_300))
				{
					if (func_16(unk_0x16F2683693E537C9(), iLocal_295, 0x00000001) > 100f)
					{
						func_236("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_222 == 0x00000004)
		{
			if (iLocal_224 == 0x00000002)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_236 + 7000 && iLocal_439 == 0x00000000)
				{
					func_236("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_222 == 0x00000004)
		{
			if (unk_0xC844350D5D58C99A(iLocal_278))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_278))
					{
						if (unk_0x9901AABAC4D4C590(iLocal_278) > 62000f && unk_0x9901AABAC4D4C590(iLocal_278) < 77000f)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -1219f, -2570f, 13f, 0x00000001) < 210f)
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									if (unk_0xD9522BA9E27E1349(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 200f && unk_0xD9522BA9E27E1349(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 125f)
									{
										if (iLocal_438 == 0x00000000)
										{
											iLocal_239 = unk_0x1C0640BA9A7327B3();
											iLocal_438 = 0x00000001;
										}
										if (iLocal_438 == 0x00000001 && unk_0x1C0640BA9A7327B3() > iLocal_239 + 4000)
										{
											func_236("TRV4_FAIL1");
										}
									}
									else if (iLocal_438 == 0x00000001)
									{
										iLocal_438 = 0x00000000;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 0x00000005 || iLocal_222 == 0x00000006)
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -928.9f, -2935f, 13f, 0x00000001) < 5f && !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 0x00000002 || iLocal_222 == 0x00000004)
		{
			if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (func_412(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000002, 0x000000C8, 0x00000000))
				{
					func_236("TRV4_FAIL2");
				}
				else if (!func_211("TRV4_HELP3"))
				{
					func_417("TRV4_HELP3");
				}
			}
			else if (func_211("TRV4_HELP3"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_278))
		{
			if (!unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(iLocal_264))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
					{
						unk_0xE121AE1BBF90E186(iLocal_264, 0x00000000);
						unk_0xD458AC1C1D29C3B4(iLocal_264, 0x00000000, 0x00000000);
					}
				}
			}
		}
		if (iLocal_358 == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_264))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					func_236("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_222 == 0x00000004)
		{
			if (iLocal_350 == 0x00000001)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
				{
					if (func_13(unk_0x16F2683693E537C9(), iLocal_264) > 300f)
					{
						if (iLocal_404 == 0x00000001)
						{
							unk_0x790015DC92C918E2();
							func_20("TRV4_WARN1", 0x00001D4C, 0x00000001);
							iLocal_404 = 0x00000000;
						}
					}
					else if (iLocal_404 == 0x00000000)
					{
						iLocal_404 = 0x00000001;
					}
					if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_278))
						{
							if (unk_0x9901AABAC4D4C590(iLocal_278) < 40000f)
							{
								if (func_13(unk_0x16F2683693E537C9(), iLocal_264) > 400f)
								{
									func_236("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0x16F2683693E537C9(), iLocal_264) > 350f)
							{
								func_236("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_224 == 0x00000003)
			{
				if (iLocal_425 == 0x00000001)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -934.4f, -2927.2f, 13.2f, 0x00000001) > 25f || unk_0x1C0640BA9A7327B3() > iLocal_237 + 12000)
					{
						func_236("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_222 == 0x00000002 || iLocal_222 == 0x00000004)
		{
			if (unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_222 == 0x00000004)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_278, 0x00000000))
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_278))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 111509f)
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							func_236("TRV4_FAIL1");
						}
					}
					if (unk_0x9901AABAC4D4C590(iLocal_278) > 122000f)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (unk_0x377BE9A1BF38C7CE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
							{
								if (iLocal_440 == 0x00000000)
								{
									iLocal_240 = unk_0x1C0640BA9A7327B3();
									iLocal_440 = 0x00000001;
								}
								if (iLocal_440 == 0x00000001)
								{
									if (unk_0x1C0640BA9A7327B3() > iLocal_240 + 4000)
									{
										func_236("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_440 = 0x00000000;
							}
						}
					}
				}
			}
		}
		if (iLocal_222 == 0x00000002)
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_236("TRV4_FAIL1");
			}
		}
		if (iLocal_405 == 0x00000001)
		{
			if (func_416())
			{
				func_415();
			}
		}
	}
}

void func_415()
{
	func_423(unk_0x16F2683693E537C9(), 0x00000000);
	func_419();
}

int func_416()
{
	if (Global_3)
	{
		return 0x00000001;
	}
	if (Global_181B8 == 0x00000007 || Global_181B8 == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_417(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_1B066, unk_0xBB0808A181D4745C(), 24);
		Global_1B060 = 0x00000001;
	}
	else
	{
		StringCopy(&Global_1B066, "NULL", 24);
		Global_1B060 = 0x00000000;
	}
}

void func_419()
{
	func_425(0x00000018, 0x00000001);
	unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0x00000000);
	unk_0xE342F209E49C5314(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0x00000001, 0x00000001);
	func_420();
	func_210(&uLocal_28, 0x00000000, 0x00000000);
	unk_0xB975E4541DDAB1F5(0x00000000);
	unk_0x5C2EBB66AD2EA5FF(0x00000000);
	unk_0x8C26F31DFF77D124();
	if (unk_0xC844350D5D58C99A(iLocal_287))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_287);
	}
	func_418(0x00000000);
	if (unk_0x49083FDB78AC0509(iLocal_263))
	{
		unk_0xDDABC98CFF1A4C60(iLocal_263);
	}
	if (unk_0xC844350D5D58C99A(iLocal_264))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_264))
		{
			unk_0xFADC0A217229F6B5(iLocal_264, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_264);
	}
	if (unk_0xC844350D5D58C99A(iLocal_266))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_266))
		{
			unk_0xFADC0A217229F6B5(iLocal_266, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_266);
	}
	if (unk_0xC844350D5D58C99A(iLocal_269))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_269))
		{
			unk_0xFADC0A217229F6B5(iLocal_269, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_269);
	}
	if (unk_0xC844350D5D58C99A(iLocal_270))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_270))
		{
			unk_0xFADC0A217229F6B5(iLocal_270, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_270);
	}
	if (unk_0xC844350D5D58C99A(iLocal_271))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_271))
		{
			unk_0xFADC0A217229F6B5(iLocal_271, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_271);
	}
	if (unk_0xC844350D5D58C99A(iLocal_272))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_272))
		{
			unk_0xFADC0A217229F6B5(iLocal_272, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_272);
	}
	if (unk_0xC844350D5D58C99A(iLocal_273))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_273))
		{
			unk_0xFADC0A217229F6B5(iLocal_273, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_273);
	}
	if (unk_0xC844350D5D58C99A(iLocal_274))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_274))
		{
			unk_0xFADC0A217229F6B5(iLocal_274, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_274);
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000000]))
		{
			unk_0xFADC0A217229F6B5(iLocal_265[0x00000000], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000001]))
		{
			unk_0xFADC0A217229F6B5(iLocal_265[0x00000001], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000002]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000002]))
		{
			unk_0xFADC0A217229F6B5(iLocal_265[0x00000002], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_265[0x00000003]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_265[0x00000003]))
		{
			unk_0xFADC0A217229F6B5(iLocal_265[0x00000003], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_265[0x00000003]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_267[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_267[0x00000000]))
		{
			unk_0xFADC0A217229F6B5(uLocal_267[0x00000000], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(uLocal_267[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_267[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_267[0x00000001]))
		{
			unk_0xFADC0A217229F6B5(uLocal_267[0x00000001], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(uLocal_267[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(uLocal_267[0x00000002]))
	{
		if (!unk_0xEB6A8945D1AC98A1(uLocal_267[0x00000002]))
		{
			unk_0xFADC0A217229F6B5(uLocal_267[0x00000002], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(uLocal_267[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000000]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000000], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000001]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000001], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000002]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000002]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000002], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000003]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000003]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000003], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000003]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000004]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000004]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000004], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000004]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000005]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000005]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000005], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000005]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000006]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000006]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000006], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000006]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000007]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000007]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000007], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000007]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000008]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000008]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000008], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000008]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x00000009]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x00000009]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x00000009], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x00000009]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_268[0x0000000A]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_268[0x0000000A]))
		{
			unk_0xFADC0A217229F6B5(iLocal_268[0x0000000A], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_268[0x0000000A]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_275[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_275[0x00000000]))
		{
			unk_0xFADC0A217229F6B5(iLocal_275[0x00000000], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_275[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_276[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_276[0x00000000]))
		{
			unk_0xFADC0A217229F6B5(iLocal_276[0x00000000], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_276[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_276[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_276[0x00000001]))
		{
			unk_0xFADC0A217229F6B5(iLocal_276[0x00000001], 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&(iLocal_276[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_278))
	{
		unk_0x046C362CF15F1935(&iLocal_278);
	}
	if (unk_0xC844350D5D58C99A(iLocal_279))
	{
		if (unk_0x9C77D2D0559097F0(iLocal_279, 0x00000000))
		{
			unk_0x046C362CF15F1935(&iLocal_279);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_282))
	{
		unk_0x046C362CF15F1935(&iLocal_282);
	}
	if (unk_0xC844350D5D58C99A(iLocal_283))
	{
		unk_0x046C362CF15F1935(&iLocal_283);
	}
	if (unk_0xC844350D5D58C99A(iLocal_284))
	{
		unk_0x046C362CF15F1935(&iLocal_284);
	}
	if (unk_0xC844350D5D58C99A(iLocal_285))
	{
		unk_0x046C362CF15F1935(&iLocal_285);
	}
	if (unk_0xC844350D5D58C99A(iLocal_287))
	{
		unk_0x046C362CF15F1935(&iLocal_287);
	}
	if (unk_0xC844350D5D58C99A(iLocal_289))
	{
		if (unk_0x9C77D2D0559097F0(iLocal_289, 0x00000000))
		{
			unk_0x046C362CF15F1935(&iLocal_289);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000000]))
	{
		unk_0x046C362CF15F1935(&(iLocal_293[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000001]))
	{
		unk_0x046C362CF15F1935(&(iLocal_293[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_280[0x00000000]))
	{
		unk_0x046C362CF15F1935(&(iLocal_280[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_280[0x00000001]))
	{
		unk_0x046C362CF15F1935(&(iLocal_280[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000000]))
	{
		unk_0x046C362CF15F1935(&(iLocal_293[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_293[0x00000001]))
	{
		unk_0x046C362CF15F1935(&(iLocal_293[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_286[0x00000000]))
	{
		unk_0x046C362CF15F1935(&(iLocal_286[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_286[0x00000001]))
	{
		unk_0x046C362CF15F1935(&(iLocal_286[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_288[0x00000000]))
	{
		unk_0x046C362CF15F1935(&(iLocal_288[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_281))
	{
		unk_0x046C362CF15F1935(&iLocal_281);
	}
	unk_0x38DC636F3D2D2FA8("TRV4_START");
	unk_0x38DC636F3D2D2FA8("TRV4_GAMEPLAY_START");
	unk_0x38DC636F3D2D2FA8("TRV4_START_CS_SKIP");
	unk_0x38DC636F3D2D2FA8("TRV4_START_RT");
	unk_0x38DC636F3D2D2FA8("TRV4_FOOT_CHASE_RT");
	unk_0x38DC636F3D2D2FA8("TRV4_EVADE_RT");
	unk_0x38DC636F3D2D2FA8("TRV4_CAR_ENTERED");
	unk_0x38DC636F3D2D2FA8("TRV4_AIRPORT_ENTERED");
	unk_0x38DC636F3D2D2FA8("TRV4_CHASE");
	unk_0x38DC636F3D2D2FA8("TRV4_JET_ENTERED");
	if (unk_0x76395FF5E8D5E643(iLocal_262))
	{
		unk_0xA4A8625CC710BC1F(iLocal_262);
	}
	if (unk_0x83A8177D302E1A7E(iLocal_672))
	{
		unk_0xB2C7809F92540947(iLocal_672, 0x00000000);
	}
	unk_0x053C926E5E341906();
	unk_0xE17FDF9E3068281B(&iLocal_305);
	unk_0xF5A41F3D3B38EFE3("digitalOverlay");
	unk_0xF858EFDE1871B5F2(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0x00000001, 0x00000001);
	unk_0xF858EFDE1871B5F2(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0x00000001, 0x00000001);
	if (unk_0x1C2E18E9C63BEB77("Trev4_5"))
	{
		unk_0xA19A5ADE229B4734("Trev4_5", 0x00000000, 0.5f, 1f);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0x8D17794CE3273D70("missheist_agency3aig_lift_waitped_a");
	func_293(0x00000000);
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	if (func_19(0x00000002))
	{
		func_18(0x00000002, 0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_420()
{
	int iVar0;
	
	Global_F065 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000040)
	{
		Global_F066[iVar0 /*2*/] = 0x00000000;
		iVar0++;
	}
}

void func_421()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_432(0x00000000))
	{
		if (!func_422())
		{
			iVar0 = func_8();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_239(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_244();
		}
	}
}

int func_422()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_423(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000000))
		{
			if (iVar0 != 0x00000000 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_424(iParam1, iVar0))
				{
					iVar0 = 0x00000000;
				}
			}
		}
	}
	if (Global_181DD > 0x00000000)
	{
		Global_19AE3.f_15[iParam1] = iVar0;
	}
	else
	{
		Global_18F3B.f_15[iParam1] = iVar0;
	}
}

int func_424(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_181DD > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			if (Global_19AE3.f_32C[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_19AE3.f_32C[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			if (Global_19AE3.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_19AE3.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			if (Global_18F3B.f_32C[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_18F3B.f_32C[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			if (Global_18F3B.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_18F3B.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_425(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0x00000000;
	sVar0 = func_429(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_428(iParam0, 0x00000001);
				return;
			}
		}
		else
		{
			if (!unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_426(iParam0))
			{
				func_428(iParam0, 0x00000000);
			}
		}
		unk_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_426(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_427(iParam0) };
	if (Var0.f_1 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_9158[Var0.f_1], Var0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<2> func_427(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	Var3 = 0xFFFFFFFF;
	Var3.f_1 = 0xFFFFFFFF;
	while (iVar1 < 0x00000007)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_428(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_427(iParam0) };
	if (Var0.f_1 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9158[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9158[Var0.f_1]), Var0);
	}
}

var func_429(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_430(iParam0) };
	*iParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_430(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000001:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000002:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000003:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000004:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000005:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000006:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000007:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000008:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 0x00000009:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 0x0000000A:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 0x0000000B:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000C:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000D:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000E:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000F:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000010:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000011:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000012:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000013:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000014:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000017:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000015:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000018:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000019:
			vVar1 = { func_431(0x00000001, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 0x0000001A:
			vVar1 = { func_431(0x00000002, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 0x0000001B:
			vVar1 = { func_431(0x00000003, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 0x0000001C:
			vVar1 = { func_431(0x00000004, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 0x0000001D:
			vVar1 = { func_431(0x00000005, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 0x0000001E:
			vVar1 = { func_431(0x00000006, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 0x0000001F:
			vVar1 = { func_431(0x00000007, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 0x00000020:
			Var0 = { Global_100542[0x00000022 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 0x00000021:
			vVar1 = { func_431(0x00000023, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 0x00000022:
			vVar1 = { func_431(0x00000024, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 0x00000023:
			vVar1 = { func_431(0x00000025, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 0x00000024:
			vVar1 = { func_431(0x00000026, 0x00000000) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 0x00000025:
			vVar1 = { func_431(0x00000027, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 0x00000026:
			vVar1 = { func_431(0x00000028, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 0x00000027:
			vVar1 = { func_431(0x00000029, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 0x00000028:
			vVar1 = { func_431(0x0000002A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 0x00000029:
			vVar1 = { func_431(0x0000002B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 0x0000002A:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 0x0000002B:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 0x0000002C:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 0x00000031:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 0x00000032:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 0x00000033:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 0x00000034:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 0x00000035:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 0x00000036:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 0x00000037:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 0x00000038:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 0x00000039:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 0x0000003A:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 0x0000002D:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 0x0000002E:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 0x0000002F:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000030:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003C:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003D:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003E:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003F:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000040:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000041:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000042:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000043:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000044:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000045:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000046:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000047:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000048:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000049:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004A:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004B:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004C:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004D:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004E:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004F:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000050:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000051:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000052:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000053:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000054:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000055:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000056:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000057:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000058:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000059:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005A:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005B:
			vVar1 = { func_431(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005C:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005D:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005E:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005F:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000060:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000061:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000062:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000063:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000064:
			vVar1 = { func_431(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000065:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000066:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000067:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000068:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000069:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006A:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006B:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006C:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006D:
			vVar1 = { func_431(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006E:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006F:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000070:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000071:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000072:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000073:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000074:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000075:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000076:
			vVar1 = { func_431(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000077:
			vVar1 = { func_431(0x0000005B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000078:
			vVar1 = { func_431(0x00000061, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000079:
			vVar1 = { func_431(0x00000067, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007A:
			vVar1 = { func_431(0x00000068, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007B:
			vVar1 = { func_431(0x00000069, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007C:
			vVar1 = { func_431(0x0000006A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007D:
			vVar1 = { func_431(0x0000006B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007E:
			vVar1 = { func_431(0x0000006C, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007F:
			vVar1 = { func_431(0x0000006D, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000080:
			vVar1 = { func_431(0x0000006E, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000081:
			vVar1 = { func_431(0x0000006F, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000082:
			vVar1 = { func_431(0x00000070, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000083:
			vVar1 = { func_431(0x00000071, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000084:
			vVar1 = { func_431(0x00000072, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000085:
			vVar1 = { func_431(0x00000067, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000086:
			vVar1 = { func_431(0x0000006A, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000087:
			vVar1 = { func_431(0x0000006D, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000088:
			vVar1 = { func_431(0x00000070, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000089:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008A:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008B:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008C:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008D:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008E:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008F:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000090:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000091:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000092:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000093:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000094:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000095:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000096:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000097:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000098:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000099:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009A:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009B:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009C:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009D:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009E:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009F:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A0:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A1:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A2:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A3:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A4:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A5:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A6:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A7:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A8:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A9:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AA:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AB:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AC:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AD:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AE:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AF:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B0:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B1:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B2:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B3:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B4:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B5:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B6:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B7:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B8:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B9:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BA:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BB:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BC:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BD:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BE:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BF:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C0:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C1:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C2:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C3:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C4:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 0x000000C5:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C6:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C7:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C8:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C9:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CA:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CB:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CC:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CD:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CE:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CF:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D0:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D1:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D2:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D3:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D4:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D5:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_431(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000001:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000002:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000003D:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000005:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000006:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 0x00000007:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000022:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x0000003E:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000023:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 0x00000024:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 0x00000025:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 0x00000026:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000027:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000041:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 0x00000028:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 0x00000029:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 0x0000003F:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 0x0000002A:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000002B:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000049:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 0x0000004A:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 0x0000004B:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 0x0000004C:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 0x0000004D:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 0x0000004E:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 0x0000004F:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 0x00000050:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 0x00000051:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000052:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 0x00000053:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000054:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000055:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000056:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000057:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 0x00000058:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 0x00000059:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 0x0000005A:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000067:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000068:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000069:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x0000006A:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006B:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006C:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006D:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006E:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006F:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x00000070:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000071:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000072:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_432(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

