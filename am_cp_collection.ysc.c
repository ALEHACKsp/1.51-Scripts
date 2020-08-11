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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_86[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90[4] = { 0, 0, 0, 0 };
	var uLocal_91[4] = { 0, 0, 0, 0 };
	int iLocal_92[4] = { 0, 0, 0, 0 };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	vector3 vLocal_102[130] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_114 = 0;
	int iLocal_115[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	struct<2> Local_118 = { -1, -1 } ;
	struct<730> Local_119 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<535> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = -1082130432;
	var uLocal_164 = 3;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = -1;
	var uLocal_181 = 0;
	var uLocal_182 = -1;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = -1082130432;
	var uLocal_206 = 3;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
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
	var uLocal_222 = -1;
	var uLocal_223 = 0;
	var uLocal_224 = -1;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = -1082130432;
	var uLocal_248 = 3;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = -1;
	var uLocal_265 = 0;
	var uLocal_266 = -1;
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = -1082130432;
	var uLocal_290 = 3;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = -1;
	var uLocal_309 = -1;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = -1082130432;
	var uLocal_332 = 3;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = -1;
	var uLocal_349 = 0;
	var uLocal_350 = -1;
	var uLocal_351 = -1;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = -1082130432;
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = -1;
	var uLocal_391 = 0;
	var uLocal_392 = -1;
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = -1082130432;
	var uLocal_416 = 3;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = -1;
	var uLocal_433 = 0;
	var uLocal_434 = -1;
	var uLocal_435 = -1;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = -1082130432;
	var uLocal_458 = 3;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = -1;
	var uLocal_475 = 0;
	var uLocal_476 = -1;
	var uLocal_477 = -1;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = -1082130432;
	var uLocal_500 = 3;
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
	var uLocal_516 = -1;
	var uLocal_517 = 0;
	var uLocal_518 = -1;
	var uLocal_519 = -1;
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
	var uLocal_541 = -1082130432;
	var uLocal_542 = 3;
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
	var uLocal_558 = -1;
	var uLocal_559 = 0;
	var uLocal_560 = -1;
	var uLocal_561 = -1;
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
	var uLocal_583 = -1082130432;
	var uLocal_584 = 3;
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
	var uLocal_600 = -1;
	var uLocal_601 = 0;
	var uLocal_602 = -1;
	var uLocal_603 = -1;
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
	var uLocal_625 = -1082130432;
	var uLocal_626 = 3;
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
	var uLocal_642 = -1;
	var uLocal_643 = 0;
	var uLocal_644 = -1;
	var uLocal_645 = -1;
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
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = -1082130432;
	var uLocal_668 = 3;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = -1;
	var uLocal_685 = 0;
	var uLocal_686 = -1;
	var uLocal_687 = -1;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = -1082130432;
	var uLocal_710 = 3;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = -1;
	var uLocal_727 = 0;
	var uLocal_728 = -1;
	var uLocal_729 = -1;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = -1082130432;
	var uLocal_752 = 3;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = -1;
	var uLocal_769 = 0;
	var uLocal_770 = -1;
	var uLocal_771 = -1;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = -1082130432;
	var uLocal_794 = 3;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = -1;
	var uLocal_811 = 0;
	var uLocal_812 = -1;
	var uLocal_813 = -1;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = -1082130432;
	var uLocal_836 = 3;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = -1;
	var uLocal_853 = 0;
	var uLocal_854 = -1;
	var uLocal_855 = -1;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = -1082130432;
	var uLocal_878 = 3;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = -1;
	var uLocal_895 = 0;
	var uLocal_896 = -1;
	var uLocal_897 = -1;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = -1082130432;
	var uLocal_920 = 3;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = -1;
	var uLocal_937 = 0;
	var uLocal_938 = -1;
	var uLocal_939 = -1;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = -1082130432;
	var uLocal_962 = 3;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = -1;
	var uLocal_979 = 0;
	var uLocal_980 = -1;
	var uLocal_981 = -1;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = -1082130432;
	var uLocal_1004 = 3;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = -1;
	var uLocal_1021 = 0;
	var uLocal_1022 = -1;
	var uLocal_1023 = -1;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = -1082130432;
	var uLocal_1046 = 3;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = -1;
	var uLocal_1063 = 0;
	var uLocal_1064 = -1;
	var uLocal_1065 = -1;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = -1082130432;
	var uLocal_1088 = 3;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = -1;
	var uLocal_1105 = 0;
	var uLocal_1106 = -1;
	var uLocal_1107 = -1;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = -1082130432;
	var uLocal_1130 = 3;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = -1;
	var uLocal_1147 = 0;
	var uLocal_1148 = -1;
	var uLocal_1149 = -1;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = -1082130432;
	var uLocal_1172 = 3;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = -1;
	var uLocal_1189 = 0;
	var uLocal_1190 = -1;
	var uLocal_1191 = -1;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = -1082130432;
	var uLocal_1214 = 3;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = -1;
	var uLocal_1231 = 0;
	var uLocal_1232 = -1;
	var uLocal_1233 = -1;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = -1082130432;
	var uLocal_1256 = 3;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = -1;
	var uLocal_1273 = 0;
	var uLocal_1274 = -1;
	var uLocal_1275 = -1;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = -1082130432;
	var uLocal_1298 = 3;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = -1;
	var uLocal_1315 = 0;
	var uLocal_1316 = -1;
	var uLocal_1317 = -1;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = -1082130432;
	var uLocal_1340 = 3;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = -1;
	var uLocal_1357 = 0;
	var uLocal_1358 = -1;
	var uLocal_1359 = -1;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = -1082130432;
	var uLocal_1382 = 3;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = -1;
	var uLocal_1399 = 0;
	var uLocal_1400 = -1;
	var uLocal_1401 = -1;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = -1082130432;
	var uLocal_1424 = 3;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = -1;
	var uLocal_1441 = 0;
	var uLocal_1442 = -1;
	var uLocal_1443 = -1;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = -1082130432;
	var uLocal_1466 = 3;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = -1;
	var uLocal_1483 = 0;
	var uLocal_1484 = -1;
	struct<12> Local_1485 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1486[32];
	struct<21> Local_1487 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x8CD06866876216F2())
	{
		if (!func_722(ScriptParam_1487))
		{
			func_684();
		}
	}
	while (0x00000001)
	{
		func_683();
		if (func_676() || func_674())
		{
			func_684();
		}
		func_647();
		switch (func_646(unk_0x6E61BE9E61434AC1()))
		{
			case 0x00000000:
				if (func_645() == 0x00000001)
				{
					if (func_643())
					{
						func_642(unk_0x6E61BE9E61434AC1(), 0x00000001);
					}
				}
				break;
			
			case 0x00000001:
				if (func_645() == 0x00000001)
				{
					func_137();
					func_125();
				}
				else if (func_645() == 0x00000003)
				{
					func_642(unk_0x6E61BE9E61434AC1(), 0x00000003);
				}
				break;
			
			case 0x00000003:
				func_684();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_645())
			{
				case 0x00000000:
					if (func_108())
					{
						func_107(0x00000001);
					}
					break;
				
				case 0x00000001:
					if (Local_119.f_8 == 0x00000006)
					{
						func_107(0x00000002);
					}
					else
					{
						func_3();
					}
					break;
				
				case 0x00000002:
					if (func_1(&uLocal_100, 0x000003E8, 0x00000000))
					{
						func_107(0x00000003);
					}
					break;
				
				case 0x00000003:
					func_684();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_2(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

void func_3()
{
	if (func_35(0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
		{
			Local_119.f_1 = unk_0x2B6E0A53779D29EA();
			unk_0x5D96D8530B3D0904(&(Local_119.f_2), 0x00000002);
		}
	}
	switch (Local_119.f_8)
	{
		case 0x00000000:
			if (func_34())
			{
				if (func_24())
				{
					func_23(0x00000001);
				}
			}
			else
			{
				func_23(0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_1(&(Local_119.f_29B), Global_40001.f_2B6A, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
			{
				func_23(0x00000002);
			}
			func_24();
			break;
		
		case 0x00000002:
			Local_119.f_9 = unk_0x2B6E0A53779D29EA();
			func_23(0x00000003);
			break;
		
		case 0x00000003:
			if ((func_22() || func_1(&(Local_119.f_295), Global_40001.f_2B69, 0x00000000)) || unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000001) && func_21())
				{
					func_20(&(Local_119.f_295), 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Local_119.f_2), 0x00000001);
				}
				else
				{
					func_23(0x00000004);
					Local_119.f_1 = unk_0x2B6E0A53779D29EA();
				}
			}
			func_8();
			iLocal_81++;
			if (iLocal_81 >= Local_119.f_2C5)
			{
				iLocal_81 = 0x00000000;
			}
			func_24();
			break;
		
		case 0x00000004:
			if (func_1(&(Local_119.f_297), 0x00004E20, 0x00000000) || func_5())
			{
				if (func_34())
				{
					func_20(&(Local_119.f_29D), 0x00000000, 0x00000000);
					func_23(0x00000005);
				}
				else
				{
					func_23(0x00000006);
				}
			}
			func_24();
			break;
		
		case 0x00000005:
			if (func_4())
			{
				func_23(0x00000006);
			}
			break;
		
		case 0x00000006:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xE5DBF9B6126856CA(Local_119.f_2D9[iVar0 /*2*/].f_1) && !unk_0x437347B10A200C4B(unk_0xA5FBBC2F619A4DE2(Local_119.f_2D9[iVar0 /*2*/].f_1), 0x00000000))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (!func_6(iVar1))
			{
				if ((!unk_0xEAE0D21A50E6C7F4(Local_1486[iVar0 /*5*/].f_2, 0x00000000) || Local_1486[iVar0 /*5*/].f_3 != 0x00000006) || (unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_1486[iVar0 /*5*/].f_2, 0x00000001)))
				{
					return 0x00000000;
				}
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

bool func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008);
}

bool func_7(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000002);
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0x00000000;
	while (iVar2 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar2)))
		{
			unk_0x5D96D8530B3D0904(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < unk_0x54EABC0DD106045B())
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			unk_0x5D96D8530B3D0904(&(Local_119.f_2A1), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_119.f_2D7)
	{
		Local_119.f_2D7 = iVar0;
	}
	else
	{
		Local_119.f_2D6 = (Local_119.f_2D7 - iVar0);
	}
	if (iVar1 > Local_119.f_2D8)
	{
		Local_119.f_2D8 = iVar1;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1486[iParam0 /*5*/].f_4;
	iVar2 = 0xFFFFFFFE;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		if (Local_119.f_2A2[iVar1] == iParam0)
		{
			iVar1 = 0x00000020;
		}
		else if (iVar2 >= 0xFFFFFFFF)
		{
			if (iVar2 >= 0x00000000)
			{
				func_14(&(Local_119.f_2A2[iVar1]), &iVar2);
			}
		}
		else if (Local_119.f_2A2[iVar1] < 0x00000000 || iVar0 > Local_1486[Local_119.f_2A2[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_119.f_2A2[iVar1];
			if (iVar0 != 0x00000000)
			{
				func_10(Local_119.f_2A2[iVar1], iParam0, iVar1);
			}
			Local_119.f_2A2[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 0x0000001F)
			{
				if (Local_119.f_2A2[iVar3] == iParam0)
				{
					Local_119.f_2A2[iVar3] = 0xFFFFFFFF;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iParam1));
	if (iParam2 == 0x00000000)
	{
		Var0.f_2 = 0xEAAA70D2;
		Var0.f_A = iVar1;
		func_11(Var0, func_12(0x00000001));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 0x75BF07BC;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Param0, 0x0000000E, iParam13);
	}
}

int func_12(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_13(iVar2, 0x00000000, 0x00000000))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
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

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iParam0));
	iVar0 = iVar3;
	if (Global_26B66F.f_136C.f_26[iVar0] >= 0x00000000)
	{
		iVar4 = Global_26B66F.f_136C.f_26[iVar0];
		iVar1 = Global_26B66F.f_136C.f_5[iVar0];
		if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_136C[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_98, 0x000002EE, 0x00000000))
				{
					if (iVar1 != 0x00000000)
					{
						if (iVar1 < iVar2 || iVar2 == 0x00000000)
						{
							iVar2 = iVar1;
							Local_119.f_A[iVar4 /*5*/].f_3 = iParam0;
							Global_26B66F.f_136C.f_26[iVar0] = 0xFFFFFFFF;
							unk_0x5D96D8530B3D0904(&(Local_119.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_119.f_2C4 = (Local_119.f_2C4 - 0x00000001);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 < 0x0000001F)
	{
		return iParam0;
	}
	else if (iParam0 < 0x0000003E)
	{
		return (iParam0 - 0x0000001F);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)
{
	if (iParam0 < 0x0000001F)
	{
		return 0x00000000;
	}
	else if (iParam0 < 0x0000003E)
	{
		return 0x00000001;
	}
	return (iParam0 / 0x0000001F);
}

int func_18(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000020)
	{
		return Local_1486[iParam0 /*5*/].f_4 > 0x00000000;
	}
	return 0x00000000;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_119.f_2A1, iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (Local_119.f_2A2[iVar0] == iParam0)
			{
				Local_119.f_2A2[iVar0] = 0xFFFFFFFF;
				iVar0 = 0x00000020;
			}
			iVar0++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Local_119.f_2C5)
		{
			if (Local_119.f_A[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_119.f_A[iVar1 /*5*/].f_3 = 0xFFFFFFFF;
			}
			iVar1++;
		}
		unk_0x0674E58A79778E99(&(Local_119.f_2A1), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 0x00000001;
}

int func_21()
{
	return 0x00000000;
}

int func_22()
{
	if (Local_119.f_2C4 > 0x00000000)
	{
		return 0x00000000;
	}
	if (func_1(&(Local_119.f_29F), 0x000002EE, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Local_119.f_2), 0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_23(int iParam0)
{
	Local_119.f_8 = iParam0;
}

int func_24()
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_34())
	{
		Var0 = { Local_119.f_2D9[iLocal_83 /*2*/] };
		if (func_33(Var0))
		{
			if (!unk_0xE9F78D191AD5EDBA(Var0.f_1))
			{
				if (func_32(iLocal_83, &vVar1, &fVar2))
				{
					Local_119.f_2C9[iLocal_83] = func_29(iLocal_83);
					if (unk_0xEAE0D21A50E6C7F4(Local_1486[Local_119.f_2C9[iLocal_83] /*5*/].f_1, iLocal_83))
					{
						if (func_26(&(Local_119.f_2D9[iLocal_83 /*2*/].f_1), Var0, vVar1, fVar2, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0x71EDC33E5A423750(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), 0x00000001);
							unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), 0x00000001);
							unk_0x67E3D6EA8D96FD85(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), 0x00000000);
							func_25(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), 0x00000001);
							if (unk_0xF1D385D359D58F72("Not_Allow_As_Saved_Veh", 0x00000003))
							{
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 0x00000001);
							}
							if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
							{
								if (unk_0x30F813723591D02E(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x1E2DFB0EF4BB4566(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), "MPBitset");
								}
								unk_0x5D96D8530B3D0904(&iVar3, 0x0000000A);
								unk_0x5D96D8530B3D0904(&iVar3, 0x0000000B);
								unk_0xB7E567188872123E(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_83 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_119.f_2C9[iLocal_83] = 0xFFFFFFFF;
						}
					}
				}
			}
			iLocal_83++;
			if (iLocal_83 >= 0x0000000A)
			{
				iLocal_83 = 0x00000000;
				return 0x00000001;
			}
		}
		return 0x00000000;
	}
	return 0x00000001;
}

void func_25(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000D);
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, 0x0000000D);
		}
		unk_0xB7E567188872123E(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_27(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_27(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_28(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_28(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_32(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (unk_0x54EABC0DD106045B() - 0x00000001))
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar6 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (func_13(iVar6, 0x00000001, 0x00000001))
				{
					fVar3 = func_30(func_31(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_30(vector3 vParam0, vector3 vParam1)
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_31(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_32(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 0x00000001:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 0x00000002:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 0x00000005:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 0x00000006:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 0x00000007:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 0x00000008:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 0x00000009:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0x00000000;
	}
	return 0x00000001;
}

bool func_33(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

bool func_34()
{
	return Local_119.f_2C3;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_106(unk_0xD803B885F5E47A62(), 0x00000000) || func_103(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (func_102(unk_0xD803B885F5E47A62()) || func_100(unk_0xD803B885F5E47A62()))
		{
			bParam2 = 0x00000000;
		}
	}
	if (unk_0x981819F6C45DDB49() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0x00000001);
		}
		if (func_42(0x0000001A, 0xFFFFFFFF))
		{
			func_39(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (func_38(&(Global_1806FA.f_12)))
	{
		if (!func_1(&(Global_1806FA.f_12), 0x00001D4C, 0x00000000))
		{
			return 0x00000000;
		}
		func_37(&(Global_1806FA.f_12));
	}
	if (func_36())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0x00000000);
		}
		if (func_42(0x0000001A, 0xFFFFFFFF))
		{
			func_39(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	if (iParam1 && unk_0x0DC0B2DBBD52B0C0() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0x00000001);
		}
		if (func_42(0x0000001A, 0xFFFFFFFF))
		{
			func_39(0x0000001A, 0xFFFFFFFF);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_36()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000);
}

void func_37(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

bool func_38(var uParam0)
{
	return uParam0->f_1;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_41();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x25C34E9F657F1C79(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_40(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0x25C34E9F657F1C79(iVar0, iParam1);
			}
			break;
	}
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_41();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x0000038D;
			break;
		
		case 0x00000001:
			iVar0 = 0x0000038E;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000038F;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000390;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000391;
			break;
	}
	return iVar0;
}

int func_41()
{
	return Global_1407E9;
}

bool func_42(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_41();
	}
	iVar0 = func_40(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000002) && !func_7(unk_0xD803B885F5E47A62())) && !func_6(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xEA6BC48857E0AC4C(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_44(0x00000042, sParam0, sParam1, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000002);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_99(iParam0, &Var0, 0xFFFFFFFF, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0x00000000)
	{
		func_97(&(Var0.f_45), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 0x00000001)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0x00000000;
		}
	}
	func_60(uParam0, uParam0->f_11);
	func_57(uParam0);
	if (func_56())
	{
		func_57(uParam0);
	}
	if (func_55(uParam0->f_1))
	{
		func_48();
		if (Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/] = { *uParam0 };
			return 0x00000001;
		}
		if (((Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000000D || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000035) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x00000036) || Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == 0x0000003A)
		{
			Global_2537E2.f_AA3[0x00000000 /*80*/].f_2 = 0x00000005;
		}
		iVar0 = 0x00000002;
		while (iVar0 >= 0x00000001)
		{
			Global_2537E2.f_AA3[iVar0 + 1 /*80*/] = { Global_2537E2.f_AA3[iVar0 /*80*/] };
			iVar0 = (iVar0 + 0xFFFFFFFF);
		}
		Global_2537E2.f_AA3[0x00000001 /*80*/] = { *uParam0 };
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 == 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0x00000000)
			{
				func_48();
			}
			return 0x00000001;
		}
		else
		{
			if (uParam0->f_1 == 0x00000001)
			{
				func_97(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000002);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			}
			if (uParam0->f_1 == 0x00000056 && !func_47(uParam0->f_45, 0x00000080))
			{
				if (func_46(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
					func_97(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000058:
		case 0x00000057:
		case 0x0000005B:
		case 0x0000005C:
		case 0x00000056:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_48()
{
	bool bVar0;
	
	if (Global_2537E2.f_BE6)
	{
		return;
	}
	if (!Global_12C5A)
	{
		Global_12C5A = 0x00000001;
		bVar0 = 0x00000001;
	}
	func_49();
	if (bVar0)
	{
		Global_12C5A = 0x00000000;
	}
}

void func_49()
{
	Global_2537E2.f_BE7 = 0x00000000;
	Global_2537E2.f_BE7.f_242 = 0x00000000;
	func_53(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0x00000000;
	func_50(&(Global_2537E2.f_BE7.f_1));
}

void func_50(var uParam0)
{
	if (uParam0->f_1 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0x00000000;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0x00000000)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0x00000000;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(0x00000000);
		uParam0->f_234 = 0x00000000;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_52(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_51(0x00000000);
}

void func_51(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_53(var uParam0)
{
	func_54(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_54(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0x00000000;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0x00000000;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0x00000000;
	uParam0->f_233 = 0x00000000;
	uParam0->f_23C = 0x00000000;
	uParam0->f_234 = 0x00000000;
	uParam0->f_235 = 0x00000000;
	uParam0->f_236 = 0x00000000;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_23E = 0x00000000;
	uParam0->f_23F = 0x00000000;
	uParam0->f_23D = 1f;
}

int func_55(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 0x00000003 || iParam0 == 0x00000004) || iParam0 == 0x00000005) || iParam0 == 0x00000006) || iParam0 == 0x0000000B) || iParam0 == 0x0000000C) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E) || iParam0 == 0x00000018) || iParam0 == 0x00000020) || iParam0 == 0x0000001F) || iParam0 == 0x0000001A) || iParam0 == 0x00000019) || iParam0 == 0x00000038) || iParam0 == 0x00000007) || iParam0 == 0x00000008) || iParam0 == 0x00000009) || iParam0 == 0x0000000A) || iParam0 == 0x00000068) || iParam0 == 0x00000064) || iParam0 == 0x00000067) || iParam0 == 0x00000069) || iParam0 == 0x0000006E)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_56()
{
	return Global_2564C8.f_11;
}

void func_57(var uParam0)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_48 = func_58();
	}
}

int func_58()
{
	return 0x00000015;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_60(var uParam0, int iParam1)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_49 = 0x00000001;
	}
	if (iParam1 == func_96() || !func_13(iParam1, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_47 == 0x00000001)
		{
			uParam0->f_49 = func_61(iParam1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

int func_61(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_92(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (iParam1 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000004)
		{
			if (Global_440000.f_2E673[iVar0] != 0xFFFFFFFF)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_92(unk_0xD803B885F5E47A62()) || (func_91() && func_90())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001F)) && !bParam4)
	{
		iVar1 = func_89();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 0xFFFFFFFF)
				{
					if (func_13(unk_0x83FACCC48B68F9D1(iVar1), 0x00000000, 0x00000001))
					{
						if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
						{
							if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
							{
								return func_87(iParam1, iParam0, 0x00000000);
							}
							else
							{
								return func_74(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
			{
				if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
				{
					return func_87(iParam1, iParam0, 0x00000000);
				}
				else
				{
					return func_62(0x00000000, 0xFFFFFFFF, 0x00000000);
				}
			}
			else
			{
				return func_62(0x00000000, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
	if ((iParam1 > 0xFFFFFFFF && unk_0xA14BB9332558B949()) && iParam1 < 0x00000004)
	{
		if (Global_440000.f_2E673[iParam1] != 0xFFFFFFFF)
		{
			return func_87(iParam1, iParam0, 0x00000000);
		}
		else
		{
			return func_74(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)
{
	return func_63(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_63(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 0x00000003;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_73() || (func_72() && func_70())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_69(iParam2, iVar0);
		}
		else
		{
			return func_69(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 0xFFFFFFFF)
		{
			if (func_68(iVar0, iParam2, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012))
			{
				if (iVar0 == iParam2)
				{
					return func_67(0x00000001);
				}
				else
				{
					return func_67(0x00000000);
				}
			}
			else if (bParam3)
			{
				return 0x0000001C;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000014))
			{
				return func_64(iVar0, iParam2, 0x00000001, 0x00000004);
			}
			else
			{
				return func_64(iVar0, iParam2, 0x00000000, 0x00000004);
			}
		}
		return 0x0000001C;
	}
	if (iVar0 == iParam2 || iParam2 == 0xFFFFFFFF)
	{
		return func_67(0x00000001);
	}
	return func_67(0x00000000);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_66(iParam0, iParam1, iParam3);
	if (func_65(Global_440000.f_2F9AE, 0x00000001))
	{
		if (iVar0 == 0x00000001)
		{
			iVar0 = 0x00000000;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			
			case 0x00000003:
				return 0x0000001F;
			
			case 0x00000004:
				return 0x00000020;
			
			case 0x00000005:
				return 0x00000021;
			
			case 0x00000006:
				return 0x00000022;
			
			case 0x00000007:
				return 0x00000023;
			
			case 0x00000008:
				return 0x00000024;
			
			case 0x00000009:
				return 0x00000025;
			
			case 0x0000000A:
				return 0x00000026;
			
			case 0x0000000B:
				return 0x00000027;
			
			case 0x0000000C:
				return 0x00000028;
			
			case 0x0000000D:
				return 0x00000029;
			
			case 0x0000000E:
				return 0x0000002A;
			
			case 0x0000000F:
				return 0x0000002B;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return 0x0000001C;
			
			case 0x00000001:
				return 0x0000001D;
			
			case 0x00000002:
				return 0x0000001E;
			}
		
		default:
	}
	return 0x0000001C;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_68(iParam0, iVar0, 0x00000000))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_67(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000076;
	}
	return 0x00000074;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0x00000001)
	{
		if (iParam0 == iParam1)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	if ((iParam0 > 0xFFFFFFFF && iParam1 > 0xFFFFFFFF) && iParam0 == iParam1)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000000);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000001);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000002);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000003);
				
				default:
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000004);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000005);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000006);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000007);
				
				default:
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000008);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x00000009);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000A);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000B);
				
				default:
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000C);
				
				case 0x00000001:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000D);
				
				case 0x00000002:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000E);
				
				case 0x00000003:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0x0000000F);
				
				default:
			}
			break;
	}
	return 0x00000000;
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_66(iParam1, iParam0, 0x00000004);
	}
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		default:
	}
	return 0x0000001C;
}

bool func_70()
{
	if (func_71())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000004);
}

bool func_71()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_72()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0x00000000) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0x00000000);
}

int func_73()
{
	if (func_71() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 0xFFFFFFFE)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094)
	{
		bVar1 = 0x00000001;
	}
	iVar2 = iParam0;
	if (iVar2 > 0xFFFFFFFF)
	{
		if (Global_184507[iVar2 /*876*/] == 0x00000094)
		{
			bVar1 = 0x00000001;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 0xFFFFFFFF)
		{
			if (func_83())
			{
				iVar3 = func_79(iParam0);
				if (!iVar3 == 0xFFFFFFFF)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(iParam1, iParam0, iVar0, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)) || ((func_68(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000017)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x00000012)))
			{
				return func_67(0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A))
			{
				return func_75(0x00000001);
			}
			else
			{
				return func_63(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0x00000000)
		{
			if (iParam0 == iParam1 || (Global_18060A == 0x00000001 && Global_180614 == 0x00000000))
			{
				return func_67(0x00000001);
			}
			else
			{
				return func_63(iParam1, 0x00000001, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 0x0000001C;
		}
	}
	iVar4 = func_79(iParam0);
	if (!iVar4 == 0xFFFFFFFF)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 0x00000077;
	}
	return 0x00000074;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0xFFFFFFFE)
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && unk_0x08067D4957B73C02(iParam1) == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0x00000000)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 0xFFFFFFFF && iParam2 == 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_78(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_78(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_96())
	{
		if (func_81(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_80(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

int func_80(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_96();
}

bool func_81(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_96();
}

int func_82(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_96())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_83()
{
	if (((func_86() || func_85()) || func_56()) || func_84())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_84()
{
	return Global_2564C8.f_13;
}

var func_85()
{
	return Global_2564C8.f_10;
}

var func_86()
{
	return Global_2564C8.f_F;
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_83())
	{
		iVar2 = func_79(iParam1);
		if (!iVar2 == 0xFFFFFFFF)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > 0xFFFFFFFF && iVar1 < 0x00000011)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 0x00000018))
		{
			return 0x00000012;
		}
	}
	if (iParam0 > 0xFFFFFFFF && iParam1 != func_96())
	{
		if (Global_440000.f_2E673[iParam0] != 0xFFFFFFFF && Global_440000.f_2E673[iParam0] <= 0x00000004)
		{
			if (Global_440000.f_2E673[iParam0] == 0x00000000)
			{
				iVar0 = 0x0000000F;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000001)
			{
				iVar0 = 0x00000012;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000002)
			{
				iVar0 = 0x00000018;
			}
			else if (Global_440000.f_2E673[iParam0] == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001D))
				{
					iVar0 = 0x00000015;
				}
				else
				{
					iVar0 = 0x00000006;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_63(iParam1, !bParam2, iParam0, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 0x0000000D))
		{
			iVar0 = func_88(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 0x0000001D))
		{
			iVar0 = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 0x0000001A) && !func_68(iParam0, unk_0x08067D4957B73C02(iParam1), 0x00000000))
		{
			iVar0 = func_75(0x00000001);
		}
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 0x00000001:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 0x00000002:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 0x00000003:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0x00000000:
			return 0x0000000F;
		
		case 0x00000001:
			return 0x00000015;
		
		case 0x00000002:
			return 0x00000018;
		
		case 0x00000003:
			return 0x00000012;
		
		case 0x00000004:
			return 0x00000006;
		
		case 0x00000005:
			return 0x00000009;
		
		case 0x00000006:
			return 0x00000003;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000C;
		
		case 0x00000009:
			return 0x00000002;
		
		default:
	}
	return 0x00000002;
}

var func_89()
{
	return Global_240006.f_2;
}

bool func_90()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000004);
}

bool func_91()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

int func_92(int iParam0)
{
	if (func_94(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_93())
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

bool func_93()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_95(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_41();
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

int func_96()
{
	return 0xFFFFFFFF;
}

void func_97(var uParam0, int iParam1)
{
	func_98(uParam0, iParam1);
}

void func_98(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_99(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_96();
	uParam1->f_12 = func_96();
	uParam1->f_13 = func_96();
	uParam1->f_14 = func_96();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 0x00000001;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 0x00000001;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 0x00000001;
	uParam1->f_4A = 0x00000001;
	uParam1->f_4B = 0x00000001;
	uParam1->f_4C = 0x00000000;
	uParam1->f_4D = 0x00000000;
	uParam1->f_49 = 0x00000000;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

bool func_100(int iParam0)
{
	return func_101(iParam0, 0x00000014);
}

bool func_101(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_101(iParam0, 0x00000009);
	}
	return 0x00000000;
}

int func_103(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF && func_104(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 0x00000001;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF)
	{
		if (func_104(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000009B:
		case 0x000000A0:
		case 0x00000099:
		case 0x000000A2:
		case 0x0000009A:
		case 0x000000A3:
		case 0x000000AB:
		case 0x000000AC:
		case 0x000000F0:
		case 0x000000EF:
			return 0x00000001;
		
		default:
	}
	return func_105(iParam0, 0x00000000);
	return 0x00000000;
}

int func_105(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	if (iParam1 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x000000C2:
			case 0x000000C1:
			case 0x000000BD:
			case 0x00000099:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

int func_106(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107(int iParam0)
{
	Local_119 = iParam0;
}

int func_108()
{
	int iVar0;
	
	if (func_1(&(Local_119.f_299), 0x000002EE, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			Local_119.f_2A2[iVar0] = 0xFFFFFFFF;
			iVar0++;
		}
		func_37(&(Local_119.f_295));
		func_111();
		if (func_34())
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				Local_119.f_2C9[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_109();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_109()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Local_119.f_2D9[iVar0 /*2*/] = func_110();
		iVar0++;
	}
}

int func_110()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
	switch (iVar0)
	{
		case 0x00000000:
			return joaat("maverick");
		
		case 0x00000001:
			return joaat("mammatus");
		
		default:
	}
	return 0x00000000;
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_119.f_2C5 = func_124();
	Local_119.f_2C4 = Local_119.f_2C5;
	Local_119.f_2C8 = func_120();
	Local_119.f_2C3 = func_117();
	iVar0 = func_116();
	if (Local_119.f_2C3)
	{
		iVar1 = 0x00000001;
	}
	func_113(func_115(0x00000084, Local_119.f_2C8, iVar1, 0x00000000));
	if (Local_119.f_2C8 == 0x00000001 && !Local_119.f_2C3)
	{
		Local_119.f_2C6 = 0x00000001;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Local_119.f_2C5)
	{
		Local_119.f_A[iVar2 /*5*/].f_4 = iVar2;
		Local_119.f_A[iVar2 /*5*/] = { func_112(Local_119.f_2C8, Local_119.f_2C3, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_112(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 0x00000001:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 0x00000002:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 0x00000003:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 0x00000004:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 0x00000005:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 0x00000006:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 0x00000007:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 0x00000008:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 0x00000009:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 0x0000000A:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 0x0000000B:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 0x0000000C:
								return 561.767f, -2100.675f, 60.143f;
							
							case 0x0000000D:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 0x0000000E:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 0x0000000F:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 0x00000010:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 0x00000011:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 0x00000012:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 0x00000013:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 0x00000014:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 0x00000015:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 0x00000016:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 0x00000017:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 0x00000018:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 0x00000019:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 0x0000001A:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 0x0000001B:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 0x0000001C:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 0x0000001D:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 0x0000001E:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 0x0000001F:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 0x00000020:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 0x00000021:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 0x00000022:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 0x00000023:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 0x00000024:
								return 1872.035f, -761.149f, 105f;
							
							case 0x00000025:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 0x00000026:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 0x00000027:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 0x00000028:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 0x00000029:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 0x0000002A:
								return 2117.316f, 1024.085f, 197f;
							
							case 0x0000002B:
								return 727.6708f, -452.6442f, 25f;
							
							case 0x0000002C:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 0x0000002D:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 0x0000002E:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 0x0000002F:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 0x00000030:
								return 2021.578f, -1993.689f, 120f;
							
							case 0x00000031:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 0x00000032:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 0x00000033:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 0x00000034:
								return 2344.084f, -406.1672f, 91f;
							
							case 0x00000035:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 0x00000036:
								return 1251.541f, -1883.809f, 50f;
							
							case 0x00000037:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 0x00000038:
								return 288.3698f, -1601.346f, 52f;
							
							case 0x00000039:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 0x0000003A:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 0x0000003B:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 0x0000003C:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 0x0000003D:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 0x0000003E:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 0x0000003F:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 0x00000040:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 0x00000041:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 0x00000042:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 0x00000043:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 0x00000044:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 0x00000045:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 0x00000046:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 0x00000047:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 0x00000048:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 0x00000049:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 0x0000004A:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 0x0000004B:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 0x0000004C:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 0x0000004D:
								return 775.8362f, -852.0386f, 31f;
							
							case 0x0000004E:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case 0x0000004F:
								return 970.9194f, -2510.112f, 64f;
							
							case 0x00000050:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 0x00000051:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 0x00000052:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 0x00000053:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 0x00000054:
								return 798.097f, -1194.02f, 32f;
							
							case 0x00000055:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 0x00000056:
								return 672.1725f, -1745.012f, 16f;
							
							case 0x00000057:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 0x00000058:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 0x00000059:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 0x0000005A:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 0x0000005B:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 0x0000005C:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 0x0000005D:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 0x0000005E:
								return 638.4819f, -1021f, 43.5236f;
							
							case 0x0000005F:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 0x00000060:
								return 1613.985f, -2243.761f, 136f;
							
							case 0x00000061:
								return 2947.746f, 792.9475f, 45f;
							
							case 0x00000062:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 0x00000063:
								return 1357.208f, 674.4443f, 100f;
							
							case 0x00000064:
								return 978.4934f, -2073.071f, 1000f;
							
							case 0x00000065:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 0x00000066:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 0x00000067:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 0x00000068:
								return 2052.692f, -252.931f, 228.334f;
							
							case 0x00000069:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 0x0000006A:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 0x0000006B:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 0x0000006C:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 0x0000006D:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 0x0000006E:
								return 1551.579f, -685.6392f, 126f;
							
							case 0x0000006F:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 0x00000070:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 0x00000071:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 0x00000072:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 0x00000073:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 0x00000074:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 0x00000075:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 0x00000076:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 0x00000077:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 0x00000001:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 0x00000002:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 0x00000003:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 0x00000004:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 0x00000005:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 0x00000006:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 0x00000007:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 0x00000008:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 0x00000009:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 0x0000000A:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 0x0000000B:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 0x0000000C:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 0x0000000D:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 0x0000000E:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 0x0000000F:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 0x00000010:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 0x00000011:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 0x00000012:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 0x00000013:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 0x00000014:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 0x00000015:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 0x00000016:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 0x00000017:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 0x00000018:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 0x00000019:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 0x0000001A:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 0x0000001B:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 0x0000001C:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 0x0000001D:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 0x0000001E:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 0x0000001F:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 0x00000020:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 0x00000021:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 0x00000022:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 0x00000023:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 0x00000024:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 0x00000025:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 0x00000026:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 0x00000027:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 0x00000028:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 0x00000029:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 0x0000002A:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 0x0000002B:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 0x0000002C:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 0x0000002D:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 0x0000002E:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 0x0000002F:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 0x00000030:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 0x00000031:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 0x00000032:
								return 800.149f, -109.5107f, 79.533f;
							
							case 0x00000033:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 0x00000034:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 0x00000035:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 0x00000036:
								return 709.3f, -2285f, 33.8f;
							
							case 0x00000037:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 0x00000038:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 0x00000039:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 0x0000003A:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 0x0000003B:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 0x0000003C:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 0x0000003D:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 0x0000003E:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 0x0000003F:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 0x00000040:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 0x00000041:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 0x00000042:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 0x00000043:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 0x00000044:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 0x00000045:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 0x00000046:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 0x00000047:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 0x00000048:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 0x00000049:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 0x0000004A:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 0x0000004B:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 0x0000004C:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 0x0000004D:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 0x0000004E:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case 0x0000004F:
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 0x00000050:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 0x00000051:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 0x00000052:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 0x00000053:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 0x00000054:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 0x00000055:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 0x00000056:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 0x00000057:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 0x00000058:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 0x00000059:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 0x0000005A:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 0x0000005B:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 0x0000005C:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 0x0000005D:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 0x0000005E:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 0x0000005F:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 0x00000060:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 0x00000061:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 0x00000062:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 0x00000063:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 0x00000064:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 0x00000065:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 0x00000066:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 0x00000067:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 0x00000068:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 0x00000069:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 0x0000006A:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 0x0000006B:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 0x0000006C:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 0x0000006D:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 0x0000006E:
								return 2937.12f, 1471.532f, 0f;
							
							case 0x0000006F:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 0x00000070:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 0x00000071:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 0x00000072:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 0x00000073:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 0x00000074:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 0x00000075:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 0x00000076:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 0x00000077:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return -915.445f, -2520.007f, 58f;
							
							case 0x00000001:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 0x00000002:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 0x00000003:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 0x00000004:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 0x00000005:
								return -2166.629f, 1607.567f, 260f;
							
							case 0x00000006:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 0x00000007:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 0x00000008:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 0x00000009:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 0x0000000A:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 0x0000000B:
								return -94.2512f, 880.448f, 265f;
							
							case 0x0000000C:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 0x0000000D:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 0x0000000E:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 0x0000000F:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 0x00000010:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 0x00000011:
								return -971.361f, -1305.368f, 50f;
							
							case 0x00000012:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 0x00000013:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 0x00000014:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 0x00000015:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 0x00000016:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 0x00000017:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 0x00000018:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 0x00000019:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 0x0000001A:
								return 219.492f, -2318.923f, 43.917f;
							
							case 0x0000001B:
								return 18.8233f, -1504f, 54.686f;
							
							case 0x0000001C:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 0x0000001D:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 0x0000001E:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 0x0000001F:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 0x00000020:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 0x00000021:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 0x00000022:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 0x00000023:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 0x00000024:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 0x00000025:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 0x00000026:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 0x00000027:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 0x00000028:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 0x00000029:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 0x0000002A:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 0x0000002B:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 0x0000002C:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 0x0000002D:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 0x0000002E:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 0x0000002F:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 0x00000030:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 0x00000031:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 0x00000032:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 0x00000033:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 0x00000034:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 0x00000035:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 0x00000036:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 0x00000037:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 0x00000038:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 0x00000039:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 0x0000003A:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 0x0000003B:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 0x0000003C:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 0x0000003D:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 0x0000003E:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 0x0000003F:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 0x00000040:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 0x00000041:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 0x00000042:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 0x00000043:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 0x00000044:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 0x00000045:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 0x00000046:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 0x00000047:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 0x00000048:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 0x00000049:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 0x0000004A:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 0x0000004B:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 0x0000004C:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 0x0000004D:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 0x0000004E:
								return -1100.793f, -2846.705f, 53.132f;
							
							case 0x0000004F:
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 0x00000050:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 0x00000051:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 0x00000052:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 0x00000053:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 0x00000054:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 0x00000055:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 0x00000056:
								return 93.563f, -1189.746f, 51.969f;
							
							case 0x00000057:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 0x00000058:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 0x00000059:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 0x0000005A:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 0x0000005B:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 0x0000005C:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 0x0000005D:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 0x0000005E:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 0x0000005F:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 0x00000060:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 0x00000061:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 0x00000062:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 0x00000063:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 0x00000064:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 0x00000065:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 0x00000066:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 0x00000067:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 0x00000068:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 0x00000069:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 0x0000006A:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 0x0000006B:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 0x0000006C:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 0x0000006D:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 0x0000006E:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 0x0000006F:
								return 392.4507f, -1204.239f, 50f;
							
							case 0x00000070:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 0x00000071:
								return 470.8737f, -2451.431f, 30f;
							
							case 0x00000072:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 0x00000073:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 0x00000074:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 0x00000075:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 0x00000076:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 0x00000077:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 0x00000001:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 0x00000002:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 0x00000003:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 0x00000004:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 0x00000005:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 0x00000006:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 0x00000007:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 0x00000008:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 0x00000009:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 0x0000000A:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 0x0000000B:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 0x0000000C:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 0x0000000D:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 0x0000000E:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 0x0000000F:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 0x00000010:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 0x00000011:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 0x00000012:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 0x00000013:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 0x00000014:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 0x00000015:
								return 188.8895f, 300.349f, 104.515f;
							
							case 0x00000016:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 0x00000017:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 0x00000018:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 0x00000019:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 0x0000001A:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 0x0000001B:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 0x0000001C:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 0x0000001D:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 0x0000001E:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 0x0000001F:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 0x00000020:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 0x00000021:
								return -1133.934f, -1447.037f, 4f;
							
							case 0x00000022:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 0x00000023:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 0x00000024:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 0x00000025:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 0x00000026:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 0x00000027:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 0x00000028:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 0x00000029:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 0x0000002A:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 0x0000002B:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 0x0000002C:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 0x0000002D:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 0x0000002E:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 0x0000002F:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 0x00000030:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 0x00000031:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 0x00000032:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 0x00000033:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 0x00000034:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 0x00000035:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 0x00000036:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 0x00000037:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 0x00000038:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 0x00000039:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 0x0000003A:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 0x0000003B:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 0x0000003C:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 0x0000003D:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 0x0000003E:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 0x0000003F:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 0x00000040:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 0x00000041:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 0x00000042:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 0x00000043:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 0x00000044:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 0x00000045:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 0x00000046:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 0x00000047:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 0x00000048:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 0x00000049:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 0x0000004A:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 0x0000004B:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 0x0000004C:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 0x0000004D:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 0x0000004E:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case 0x0000004F:
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 0x00000050:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 0x00000051:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 0x00000052:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 0x00000053:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 0x00000054:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 0x00000055:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 0x00000056:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 0x00000057:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 0x00000058:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 0x00000059:
								return -630.6f, -1071.2f, 21.7f;
							
							case 0x0000005A:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 0x0000005B:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 0x0000005C:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 0x0000005D:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 0x0000005E:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 0x0000005F:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 0x00000060:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 0x00000061:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 0x00000062:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 0x00000063:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 0x00000064:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 0x00000065:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 0x00000066:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 0x00000067:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 0x00000068:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 0x00000069:
								return -186.476f, 25.015f, 63.554f;
							
							case 0x0000006A:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 0x0000006B:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 0x0000006C:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 0x0000006D:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 0x0000006E:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 0x0000006F:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 0x00000070:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 0x00000071:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 0x00000072:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 0x00000073:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 0x00000074:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 0x00000075:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 0x00000076:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 0x00000077:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 0x00000001:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 0x00000002:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 0x00000003:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 0x00000004:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 0x00000005:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 0x00000006:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 0x00000007:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 0x00000008:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 0x00000009:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 0x0000000A:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 0x0000000B:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 0x0000000C:
								return 180.018f, 2272.227f, 109.032f;
							
							case 0x0000000D:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 0x0000000E:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 0x0000000F:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 0x00000010:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 0x00000011:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 0x00000012:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 0x00000013:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 0x00000014:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 0x00000015:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 0x00000016:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 0x00000017:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 0x00000018:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 0x00000019:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 0x0000001A:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 0x0000001B:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 0x0000001C:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 0x0000001D:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 0x0000001E:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 0x0000001F:
								return -409.327f, 2963.414f, 38.182f;
							
							case 0x00000020:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 0x00000021:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 0x00000022:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 0x00000023:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 0x00000024:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 0x00000025:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 0x00000026:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 0x00000027:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 0x00000028:
								return -368.4536f, 6104.72f, 53f;
							
							case 0x00000029:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 0x0000002A:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 0x0000002B:
								return -2064f, 3361.181f, 48.6443f;
							
							case 0x0000002C:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 0x0000002D:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 0x0000002E:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 0x0000002F:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 0x00000030:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 0x00000031:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 0x00000032:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 0x00000033:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 0x00000034:
								return 391.3682f, 5485.655f, 1000f;
							
							case 0x00000035:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 0x00000036:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 0x00000037:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 0x00000038:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 0x00000039:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 0x0000003A:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 0x0000003B:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 0x0000003C:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 0x0000003D:
								return -821f, 5419.5f, 58.4f;
							
							case 0x0000003E:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 0x0000003F:
								return -2664.1f, 2594f, 3.8f;
							
							case 0x00000040:
								return -897.3f, 2797.5f, 28.3f;
							
							case 0x00000041:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 0x00000042:
								return 618f, 6426.7f, 103.2f;
							
							case 0x00000043:
								return 435.1f, 6772.9f, 18.9f;
							
							case 0x00000044:
								return -677.8f, 6035f, 27.3f;
							
							case 0x00000045:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 0x00000046:
								return -384.2f, 4711.1f, 278.4f;
							
							case 0x00000047:
								return 911.8f, 4338.1f, 61.8f;
							
							case 0x00000048:
								return 518.5f, 5944.8f, 525.2f;
							
							case 0x00000049:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 0x0000004A:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 0x0000004B:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 0x0000004C:
								return -540.3f, 4190.5f, 203.6f;
							
							case 0x0000004D:
								return -166.9f, 4250.2f, 61.7f;
							
							case 0x0000004E:
								return -88.2f, 4579f, 135.4f;
							
							case 0x0000004F:
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 0x00000050:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 0x00000051:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 0x00000052:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 0x00000053:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 0x00000054:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 0x00000055:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 0x00000056:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 0x00000057:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 0x00000058:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 0x00000059:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 0x0000005A:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 0x0000005B:
								return -1269.523f, 4386.938f, 1000f;
							
							case 0x0000005C:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 0x0000005D:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 0x0000005E:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 0x0000005F:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 0x00000060:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 0x00000061:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 0x00000062:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 0x00000063:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 0x00000064:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 0x00000065:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 0x00000066:
								return -2092.081f, 2518.016f, 800f;
							
							case 0x00000067:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 0x00000068:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 0x00000069:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 0x0000006A:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 0x0000006B:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 0x0000006C:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 0x0000006D:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 0x0000006E:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 0x0000006F:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 0x00000070:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 0x00000071:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 0x00000072:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 0x00000073:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 0x00000074:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 0x00000075:
								return -1542.398f, 2886.044f, 1000f;
							
							case 0x00000076:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 0x00000077:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 0x00000001:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 0x00000002:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 0x00000003:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 0x00000004:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 0x00000005:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 0x00000006:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 0x00000007:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 0x00000008:
								return 327f, 2858f, 42.4386f;
							
							case 0x00000009:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 0x0000000A:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 0x0000000B:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 0x0000000C:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 0x0000000D:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 0x0000000E:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 0x0000000F:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 0x00000010:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 0x00000011:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 0x00000012:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 0x00000013:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 0x00000014:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 0x00000015:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 0x00000016:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 0x00000017:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 0x00000018:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 0x00000019:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 0x0000001A:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 0x0000001B:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 0x0000001C:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 0x0000001D:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 0x0000001E:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 0x0000001F:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 0x00000020:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 0x00000021:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 0x00000022:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 0x00000023:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 0x00000024:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 0x00000025:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 0x00000026:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 0x00000027:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 0x00000028:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 0x00000029:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 0x0000002A:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 0x0000002B:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 0x0000002C:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 0x0000002D:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 0x0000002E:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 0x0000002F:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 0x00000030:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 0x00000031:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 0x00000032:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 0x00000033:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 0x00000034:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 0x00000035:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 0x00000036:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 0x00000037:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 0x00000038:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 0x00000039:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 0x0000003A:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 0x0000003B:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 0x0000003C:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 0x0000003D:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 0x0000003E:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 0x0000003F:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 0x00000040:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 0x00000041:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 0x00000042:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 0x00000043:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 0x00000044:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 0x00000045:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 0x00000046:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 0x00000047:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 0x00000048:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 0x00000049:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 0x0000004A:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 0x0000004B:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 0x0000004C:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 0x0000004D:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 0x0000004E:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case 0x0000004F:
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 0x00000050:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 0x00000051:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 0x00000052:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 0x00000053:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 0x00000054:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 0x00000055:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 0x00000056:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 0x00000057:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 0x00000058:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 0x00000059:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 0x0000005A:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 0x0000005B:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 0x0000005C:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 0x0000005D:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 0x0000005E:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 0x0000005F:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 0x00000060:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 0x00000061:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 0x00000062:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 0x00000063:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 0x00000064:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 0x00000065:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 0x00000066:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 0x00000067:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 0x00000068:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 0x00000069:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 0x0000006A:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 0x0000006B:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 0x0000006C:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 0x0000006D:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 0x0000006E:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 0x0000006F:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 0x00000070:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 0x00000071:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 0x00000072:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 0x00000073:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 0x00000074:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 0x00000075:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 0x00000076:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 0x00000077:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return 867.3339f, 4198.743f, 75f;
							
							case 0x00000001:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 0x00000002:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 0x00000003:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 0x00000004:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 0x00000005:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 0x00000006:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 0x00000007:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 0x00000008:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 0x00000009:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 0x0000000A:
								return 3492.801f, 4619.894f, 65f;
							
							case 0x0000000B:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 0x0000000C:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 0x0000000D:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 0x0000000E:
								return 3296.121f, 3365.198f, 125f;
							
							case 0x0000000F:
								return 3290f, 3140.437f, 275.7202f;
							
							case 0x00000010:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 0x00000011:
								return 1597.427f, 2599.171f, 95f;
							
							case 0x00000012:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 0x00000013:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 0x00000014:
								return 753.2642f, 2581.414f, 161f;
							
							case 0x00000015:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 0x00000016:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 0x00000017:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 0x00000018:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 0x00000019:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 0x0000001A:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 0x0000001B:
								return 2559.717f, 6155.792f, 171f;
							
							case 0x0000001C:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 0x0000001D:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 0x0000001E:
								return 772.3428f, 5523.894f, 600f;
							
							case 0x0000001F:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 0x00000020:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 0x00000021:
								return 587.414f, 5114.912f, 405f;
							
							case 0x00000022:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 0x00000023:
								return 754.4042f, 6466f, 49f;
							
							case 0x00000024:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 0x00000025:
								return 1779.115f, 5662.172f, 274f;
							
							case 0x00000026:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 0x00000027:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 0x00000028:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 0x00000029:
								return 1563.065f, 3572.822f, 41f;
							
							case 0x0000002A:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 0x0000002B:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 0x0000002C:
								return 543.5116f, 3080.709f, 63f;
							
							case 0x0000002D:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 0x0000002E:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 0x0000002F:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 0x00000030:
								return 3073.721f, 2084.079f, 30f;
							
							case 0x00000031:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 0x00000032:
								return 2822.12f, 4977.335f, 70f;
							
							case 0x00000033:
								return 1299.971f, 4219.281f, 41f;
							
							case 0x00000034:
								return 503.1913f, 4450.17f, 112f;
							
							case 0x00000035:
								return 2489.62f, 3760.053f, 53f;
							
							case 0x00000036:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 0x00000037:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 0x00000038:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 0x00000039:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 0x0000003A:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 0x0000003B:
								return 2061.36f, 3941.451f, 200f;
							
							case 0x0000003C:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 0x0000003D:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 0x0000003E:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 0x0000003F:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 0x00000040:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 0x00000041:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 0x00000042:
								return 2504.338f, 4418.758f, 55f;
							
							case 0x00000043:
								return 1552.003f, 2186.406f, 96f;
							
							case 0x00000044:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 0x00000045:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 0x00000046:
								return 3257.82f, 4308.541f, 140f;
							
							case 0x00000047:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 0x00000048:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 0x00000049:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 0x0000004A:
								return 3356.059f, 5696.29f, 20f;
							
							case 0x0000004B:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 0x0000004C:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 0x0000004D:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 0x0000004E:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case 0x0000004F:
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 0x00000050:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 0x00000051:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 0x00000052:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 0x00000053:
								return 1522.466f, 6617.973f, 8f;
							
							case 0x00000054:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 0x00000055:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 0x00000056:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 0x00000057:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 0x00000058:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 0x00000059:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 0x0000005A:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 0x0000005B:
								return 931.8565f, 2446.375f, 59f;
							
							case 0x0000005C:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 0x0000005D:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 0x0000005E:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 0x0000005F:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 0x00000060:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 0x00000061:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 0x00000062:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 0x00000063:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 0x00000064:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 0x00000065:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 0x00000066:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 0x00000067:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 0x00000068:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 0x00000069:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 0x0000006A:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 0x0000006B:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 0x0000006C:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 0x0000006D:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 0x0000006E:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 0x0000006F:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 0x00000070:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 0x00000071:
								return 194.6948f, 7393.709f, 1000f;
							
							case 0x00000072:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 0x00000073:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 0x00000074:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 0x00000075:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 0x00000076:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 0x00000077:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam3)
						{
							case 0x00000000:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 0x00000001:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 0x00000002:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 0x00000003:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 0x00000004:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 0x00000005:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 0x00000006:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 0x00000007:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 0x00000008:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 0x00000009:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 0x0000000A:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 0x0000000B:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 0x0000000C:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 0x0000000D:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 0x0000000E:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 0x0000000F:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 0x00000010:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 0x00000011:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 0x00000012:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 0x00000013:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 0x00000014:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 0x00000015:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 0x00000016:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 0x00000017:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 0x00000018:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 0x00000019:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 0x0000001A:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 0x0000001B:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 0x0000001C:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 0x0000001D:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 0x0000001E:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 0x0000001F:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 0x00000020:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 0x00000021:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 0x00000022:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 0x00000023:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 0x00000024:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 0x00000025:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 0x00000026:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 0x00000027:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 0x00000028:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 0x00000029:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 0x0000002A:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 0x0000002B:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 0x0000002C:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 0x0000002D:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 0x0000002E:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 0x0000002F:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 0x00000030:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 0x00000031:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 0x00000032:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 0x00000033:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 0x00000034:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 0x00000035:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 0x00000036:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 0x00000037:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 0x00000038:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 0x00000039:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 0x0000003A:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 0x0000003B:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 0x0000003C:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 0x0000003D:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 0x0000003E:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 0x0000003F:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 0x00000040:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 0x00000041:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 0x00000042:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 0x00000043:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 0x00000044:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 0x00000045:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 0x00000046:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 0x00000047:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 0x00000048:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 0x00000049:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 0x0000004A:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 0x0000004B:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 0x0000004C:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 0x0000004D:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 0x0000004E:
								return 1719.677f, 3692.743f, 33.513f;
							
							case 0x0000004F:
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 0x00000050:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 0x00000051:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 0x00000052:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 0x00000053:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 0x00000054:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 0x00000055:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 0x00000056:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 0x00000057:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 0x00000058:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 0x00000059:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 0x0000005A:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 0x0000005B:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 0x0000005C:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 0x0000005D:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 0x0000005E:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 0x0000005F:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 0x00000060:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 0x00000061:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 0x00000062:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 0x00000063:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 0x00000064:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 0x00000065:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 0x00000066:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 0x00000067:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 0x00000068:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 0x00000069:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 0x0000006A:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 0x0000006B:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 0x0000006C:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 0x0000006D:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 0x0000006E:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 0x0000006F:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 0x00000070:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 0x00000071:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 0x00000072:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 0x00000073:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 0x00000074:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 0x00000075:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 0x00000076:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 0x00000077:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_113(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 0x76289B27;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = uParam0;
	iVar1 = func_114(0x00000001, 0x00000001);
	if (!iVar1 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000003, iVar1);
	}
}

var func_114(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_13(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x0000008B:
		case 0x0000008D:
		case 0x00000085:
		case 0x0000008A:
		case 0x00000090:
		case 0x000000EC:
		case 0x00000096:
			return iParam1;
		
		case 0x00000084:
			switch (iParam2)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						case 0x00000003:
							return 0x00000003;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000004;
						
						case 0x00000001:
							return 0x00000005;
						
						case 0x00000002:
							return 0x00000006;
						
						case 0x00000003:
							return 0x00000007;
						
						default:
					}
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam3)
			{
				case 0x00000000:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000000;
								
								case 0x00000001:
									return 0x00000001;
								
								case 0x00000002:
									return 0x00000002;
								
								case 0x00000003:
									return 0x00000003;
								
								case 0x00000004:
									return 0x00000004;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000005;
								
								case 0x00000001:
									return 0x00000006;
								
								case 0x00000002:
									return 0x00000007;
								
								case 0x00000003:
									return 0x00000008;
								
								case 0x00000004:
									return 0x00000009;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000A;
								
								case 0x00000001:
									return 0x0000000B;
								
								case 0x00000002:
									return 0x0000000C;
								
								case 0x00000003:
									return 0x0000000D;
								
								case 0x00000004:
									return 0x0000000E;
								
								default:
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000F;
								
								case 0x00000001:
									return 0x00000010;
								
								case 0x00000002:
									return 0x00000011;
								
								case 0x00000003:
									return 0x00000012;
								
								case 0x00000004:
									return 0x00000013;
								
								default:
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000014;
								
								case 0x00000001:
									return 0x00000015;
								
								case 0x00000002:
									return 0x00000016;
								
								case 0x00000003:
									return 0x00000018;
								
								case 0x00000004:
									return 0x00000019;
								
								default:
							}
							break;
						
						case 0x00000005:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000001A;
								
								case 0x00000001:
									return 0x0000001B;
								
								case 0x00000002:
									return 0x0000001C;
								
								case 0x00000003:
									return 0x0000001D;
								
								case 0x00000004:
									return 0x0000001E;
								
								default:
							}
							break;
						
						case 0x00000006:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000001F;
								
								case 0x00000001:
									return 0x00000020;
								
								case 0x00000002:
									return 0x00000021;
								
								case 0x00000003:
									return 0x00000022;
								
								case 0x00000004:
									return 0x00000023;
								
								default:
							}
							break;
					}
					break;
				
				case 0x00000001:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000000;
								
								case 0x00000001:
									return 0x00000001;
								
								case 0x00000002:
									return 0x00000002;
								
								case 0x00000003:
									return 0x00000003;
								
								case 0x00000004:
									return 0x00000004;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000005;
								
								case 0x00000001:
									return 0x00000006;
								
								case 0x00000002:
									return 0x00000007;
								
								case 0x00000003:
									return 0x00000008;
								
								case 0x00000004:
									return 0x00000009;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x0000000A;
								
								case 0x00000001:
									return 0x0000000B;
								
								case 0x00000002:
									return 0x0000000C;
								
								case 0x00000003:
									return 0x0000000D;
								
								case 0x00000004:
									return 0x0000000E;
								
								default:
							}
							break;
					}
					break;
				
				case 0x00000002:
					switch (iParam1)
					{
						case 0x00000000:
							switch (iParam2)
							{
								case 0x00000000:
									return 0x00000029;
								
								default:
							}
							break;
						
						case 0x00000001:
							switch (iParam2)
							{
								case 0x00000001:
									return 0x0000002A;
								
								default:
							}
							break;
						
						case 0x00000002:
							switch (iParam2)
							{
								case 0x00000002:
									return 0x0000002B;
								
								default:
							}
							break;
						
						case 0x00000003:
							switch (iParam2)
							{
								case 0x00000003:
									return 0x0000002C;
								
								default:
							}
							break;
						
						case 0x00000004:
							switch (iParam2)
							{
								case 0x00000004:
									return 0x0000002D;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						case 0x00000003:
							return 0x00000003;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000004;
						
						case 0x00000001:
							return 0x00000005;
						
						case 0x00000002:
							return 0x00000006;
						
						case 0x00000003:
							return 0x00000007;
						
						case 0x00000004:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000000C;
						
						case 0x00000001:
							return 0x0000000D;
						
						case 0x00000002:
							return 0x0000000E;
						
						case 0x00000003:
							return 0x0000000F;
						
						case 0x00000004:
							return 0x00000010;
						
						default:
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000011;
						
						case 0x00000001:
							return 0x00000012;
						
						case 0x00000002:
							return 0x00000013;
						
						case 0x00000003:
							return 0x00000014;
						
						case 0x00000004:
							return 0x00000015;
						
						default:
					}
					break;
				
				case 0x00000005:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000016;
						
						case 0x00000001:
							return 0x00000018;
						
						case 0x00000002:
							return 0x00000019;
						
						case 0x00000003:
							return 0x0000001A;
						
						default:
					}
					break;
				
				case 0x00000006:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000001B;
						
						case 0x00000001:
							return 0x0000001C;
						
						case 0x00000002:
							return 0x0000001D;
						
						default:
					}
					break;
				
				case 0x00000007:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000001E;
						
						case 0x00000001:
							return 0x0000001F;
						
						case 0x00000002:
							return 0x00000020;
						
						default:
					}
					break;
				
				case 0x00000008:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000021;
						
						case 0x00000001:
							return 0x00000022;
						
						case 0x00000002:
							return 0x00000023;
						
						case 0x00000003:
							return 0x00000024;
						
						default:
					}
					break;
				
				case 0x00000009:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000025;
						
						case 0x00000001:
							return 0x00000026;
						
						case 0x00000002:
							return 0x00000027;
						
						case 0x00000003:
							return 0x00000028;
						
						default:
					}
					break;
			}
			break;
		
		case 0x0000008C:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000003;
						
						case 0x00000001:
							return 0x00000004;
						
						case 0x00000002:
							return 0x00000005;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000006;
						
						case 0x00000001:
							return 0x00000007;
						
						case 0x00000002:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
				
				case 0x00000004:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x0000000C;
						
						case 0x00000001:
							return 0x0000000D;
						
						case 0x00000002:
							return 0x0000000E;
						
						default:
					}
					break;
			}
			break;
		
		case 0x00000092:
			switch (iParam1)
			{
				case 0x00000000:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000000;
						
						case 0x00000001:
							return 0x00000001;
						
						case 0x00000002:
							return 0x00000002;
						
						default:
					}
					break;
				
				case 0x00000001:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000003;
						
						case 0x00000001:
							return 0x00000004;
						
						case 0x00000002:
							return 0x00000005;
						
						default:
					}
					break;
				
				case 0x00000002:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000006;
						
						case 0x00000001:
							return 0x00000007;
						
						case 0x00000002:
							return 0x00000008;
						
						default:
					}
					break;
				
				case 0x00000003:
					switch (iParam2)
					{
						case 0x00000000:
							return 0x00000009;
						
						case 0x00000001:
							return 0x0000000A;
						
						case 0x00000002:
							return 0x0000000B;
						
						default:
					}
					break;
			}
			break;
	}
	return 0xFFFFFFFF;
}

int func_116()
{
	return unk_0x09AC81E49EA267F7(0x00000000, 0x00000001);
}

bool func_117()
{
	if (func_119(Local_119.f_2C8))
	{
		return 0x00000000;
	}
	else if (func_118(Local_119.f_2C8))
	{
		return 0x00000001;
	}
	return unk_0x09AC81E49EA267F7(0x00000000, 0x00000002) == 0x00000001;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return (Global_40001.f_2B75 || Global_40001.f_2B6D);
		
		case 0x00000001:
			return (Global_40001.f_2B74 || Global_40001.f_2B6D);
		
		case 0x00000002:
			return (Global_40001.f_2B72 || Global_40001.f_2B6D);
		
		case 0x00000003:
			return (Global_40001.f_2B73 || Global_40001.f_2B6D);
		
		default:
	}
	return 0x00000000;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return (Global_40001.f_2B71 || Global_40001.f_2B6C);
		
		case 0x00000001:
			return (Global_40001.f_2B70 || Global_40001.f_2B6C);
		
		case 0x00000002:
			return (Global_40001.f_2B6E || Global_40001.f_2B6C);
		
		case 0x00000003:
			return (Global_40001.f_2B6F || Global_40001.f_2B6C);
		
		default:
	}
	return 0x00000000;
}

int func_120()
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_94 = 0x00000001;
	switch (iLocal_94)
	{
		case 0x00000000:
			return unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
			break;
		
		case 0x00000001:
			iVar1 = func_121(&uVar0);
			iVar2 = unk_0x09AC81E49EA267F7(0x00000000, iVar1);
			iVar3 = 0x00000000;
			while (iVar3 < 0x00000004)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
	}
	return unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
}

int func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar4 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			iVar6 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
			if (func_13(iVar6, 0x00000001, 0x00000001))
			{
				iVar7 = unk_0x9539D44F3E4492F6(iVar6);
				if (!unk_0xEB6A8945D1AC98A1(iVar7))
				{
					iVar5 = 0x00000000;
					while (iVar5 < 0x00000004)
					{
						if (!func_123(iVar5))
						{
							if (func_122(iVar5, &vVar2, &vVar3))
							{
								if (unk_0x62438065F1C29508(iVar7, vVar2, vVar3, 0x00000000, 0x00000000, 0x00000000))
								{
									bVar4 = 0x00000000;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0x00000000;
		while (iVar5 < 0x00000004)
		{
			if (!func_123(iVar5))
			{
				(*uParam0)[iVar5] = 0x00000001;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_122(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 0x00000001;
		
		case 0x00000003:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_123(int iParam0)
{
	return (func_119(iParam0) && func_118(iParam0));
}

var func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar2 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_40001.f_2B7A)
	{
		return Global_40001.f_2B08;
	}
	if (iVar1 >= Global_40001.f_2B79)
	{
		return Global_40001.f_2B07;
	}
	if (iVar1 >= Global_40001.f_2B78)
	{
		return Global_40001.f_27D3;
	}
	return Global_40001.f_27D3;
}

void func_125()
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (Local_119.f_2C9[iVar0] == unk_0x57270EE11514DC67())
			{
				if (func_126(iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_1, iVar0))
					{
						unk_0x5D96D8530B3D0904(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_1), iVar0);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_1, iVar0))
				{
					unk_0x0674E58A79778E99(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_1), iVar0);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_1, iVar0))
			{
				unk_0x0674E58A79778E99(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_126(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	if (func_32(iParam0, &vVar0, &uVar1))
	{
		if (func_127(vVar0, 10f, 0x3F800000, 5f, 0x40A00000, 0x00000001, 0x00000001, 0x00000001, 0x42F00000, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_127(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_24B2D0.f_2 = 0x00000000;
	if (fParam1 > 0f)
	{
		if (unk_0x558ADED8B93EA0F6(vParam0, fParam1))
		{
			return 0x00000000;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xEA19D5D9230DBB67(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xEA19D5D9230DBB67(vParam0, fParam2))
		{
			return 0x00000000;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x9DD97B5335E52CB9(vParam0, fParam3, iParam16))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam11)
	{
		if (unk_0xA4F4A1E4DDB4728B(vParam0, 2.5f) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (fParam12 > 0f)
	{
		if (func_132(vParam0, fParam12, 0x00000001, 0x00000001, bParam13, bParam15, bParam9, bParam13))
		{
			return 0x00000000;
		}
	}
	Global_24B2D0.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_128(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0x00000000;
			}
		}
	}
	Global_24B2D0.f_2++;
	return 0x00000001;
}

int func_128(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (!unk_0x757EF87A33649210())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x0EB28750412C3A5A(func_130(unk_0xD803B885F5E47A62()), vParam0, 0x00000001) <= (fVar2 + fParam1))
				{
					if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if (func_13(iVar1, 0x00000001, 0x00000001))
		{
			if (!func_94(iVar1, 0x00000000) && unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
			{
				if (iParam2 == 0x00000001 || (iParam2 == 0x00000000 && iVar1 != unk_0xD803B885F5E47A62()))
				{
					if ((func_129(iVar1) || !bParam8) && !Global_25033E[iVar1 /*421*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0x00000000 && unk_0x08067D4957B73C02(iVar1) != unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()))) || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
							{
								if (unk_0x0EB28750412C3A5A(func_130(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
								{
									if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
									{
										return 0x00000001;
									}
								}
							}
						}
						else if (unk_0x08067D4957B73C02(iVar1) != iParam6 || unk_0x08067D4957B73C02(iVar1) == 0xFFFFFFFF)
						{
							if (unk_0x0EB28750412C3A5A(func_130(iVar1), vParam0, 0x00000001) <= (fVar2 + fParam1))
							{
								if (unk_0xAA451564CBFD3413(iVar1, vParam0, fParam1))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_129(int iParam0)
{
	if (unk_0x62FA787159F264AC(unk_0x9539D44F3E4492F6(iParam0)) || Global_25033E[iParam0 /*421*/].f_F5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_56() && Global_184507[iVar0 /*876*/].f_34F) && !func_131(Global_184507[iVar0 /*876*/].f_350))
	{
		return Global_184507[iVar0 /*876*/].f_350;
	}
	return func_31(iParam0);
}

int func_131(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_132(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar1 = iVar0;
		if ((iParam6 == 0x00000001 && unk_0xD803B885F5E47A62() != iVar1) || iParam6 == 0x00000000)
		{
			if (func_13(iVar1, bParam2, bParam3))
			{
				if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iVar1))
				{
					if (!bParam5 || (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)) && func_129(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 0x00000001 && unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar1))) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF)
						{
							if (((unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 0xFFFFFFFF && uParam7) && bParam4) && func_133(iVar1))
							{
							}
							else if (unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar1)))
							{
								if (unk_0x0EB28750412C3A5A(func_31(iVar1), vParam0, 0x00000001) < fParam1)
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_133(int iParam0)
{
	if (func_136(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	Global_265942 = { func_135(iParam0) };
	if (unk_0x04A104F429E6CBB0(&Global_265942))
	{
		return 0x00000001;
	}
	if (func_134(unk_0xD803B885F5E47A62(), iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (!iVar0 == func_96())
	{
		if (iVar0 == func_80(iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<13> func_135(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_136(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_135(iParam0) };
		Global_26594F = { func_135(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 0x00000023, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 0x00000023, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_137()
{
	int iVar0;
	int iVar1;
	
	func_639();
	if (func_637())
	{
		func_521();
	}
	if (func_520(unk_0xD803B885F5E47A62()) || func_519(unk_0xD803B885F5E47A62()))
	{
		func_518();
	}
	if ((!func_6(unk_0xD803B885F5E47A62()) && !func_517(0x00000000)) && !func_517(func_516(0x00000084)))
	{
		if (func_491(0x00000000, 0x00000001, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000003))
			{
				unk_0x0674E58A79778E99(&iLocal_84, 0x00000003);
			}
			switch (Local_1486[unk_0x57270EE11514DC67() /*5*/].f_3)
			{
				case 0x00000000:
					if (Local_119.f_8 == 0x00000001)
					{
						func_490(0x00000001);
						func_489(0x00000001);
					}
					else if (Local_119.f_8 >= 0x00000002)
					{
						func_489(0x00000001);
					}
					break;
				
				case 0x00000001:
					func_485(0x00000006);
					if (Local_119.f_8 >= 0x00000002)
					{
						func_489(0x00000002);
					}
					func_485(0x00000002);
					func_483(0x00000000);
					func_481((Global_40001.f_2B6A - func_482(&(Local_119.f_29B), 0x00000000, 0x00000000)));
					func_478(func_480((Global_40001.f_2B6A - func_482(&(Local_119.f_29B), 0x00000000, 0x00000000)), 0x00000000), func_479(0xFFFFFFFF));
					func_456();
					break;
				
				case 0x00000002:
					if (Local_119.f_8 > 0x00000002)
					{
						func_490(0x00000000);
						func_437(0x00000084, 0x3F800000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (!func_6(unk_0xD803B885F5E47A62()))
						{
							func_436();
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000005);
						}
						if (Local_119.f_2C6)
						{
							func_435();
						}
						if (Local_119.f_2C3)
						{
							Global_26B66F.f_13B3 = 0x00000001;
						}
						else
						{
							Global_26B66F.f_13B3 = 0x00000000;
						}
						func_434();
						if (!func_6(unk_0xD803B885F5E47A62()))
						{
							if (func_34())
							{
								func_419(678f, 794f, 206f, 8f, 0x00000000);
								func_419(1911.3f, 4714.6f, 41.1f, 8f, 0x00000000);
								func_419(688.5021f, 735.4581f, 181.296f, 8f, 0x00000000);
							}
						}
						func_489(0x00000003);
					}
					break;
				
				case 0x00000003:
					if (Local_119.f_8 > 0x00000003)
					{
						func_489(0x00000004);
					}
					else
					{
						if (!iLocal_104)
						{
							if (func_418())
							{
								iLocal_104 = 0x00000001;
							}
						}
						iVar1 = 0x00000000;
						while (iVar1 < Local_119.f_2C5)
						{
							if (uLocal_86[iVar1] || iLocal_104)
							{
								func_316(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000003)
						{
							uLocal_86[iLocal_80] = func_315(iLocal_80);
							uLocal_85[iLocal_80] = func_313(iLocal_80);
							if (!uLocal_85[iLocal_80])
							{
								func_316(iLocal_80);
							}
							iLocal_80++;
							if (iLocal_80 >= Local_119.f_2C5)
							{
								iLocal_80 = 0x00000000;
							}
							iVar0++;
						}
						func_483(0x00000000);
						func_485(0x00000004);
						func_485(0x00000005);
						if (func_311(0x00000000) && !func_310(0x00000000))
						{
							func_309();
						}
						if ((!func_308(unk_0xD803B885F5E47A62()) && !unk_0x798A3F1296751F46()) && !unk_0x8FA469D9C5F1A01F())
						{
							func_307();
						}
						func_306();
					}
					func_303();
					func_302();
					func_436();
					func_284();
					func_456();
					break;
				
				case 0x00000004:
					func_191();
					func_175();
					func_174();
					func_483(0x00000001);
					func_173();
					func_284();
					if (func_162(&uLocal_106, !unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
					{
						if (func_34())
						{
							func_489(0x00000005);
						}
						else
						{
							func_489(0x00000006);
						}
					}
					break;
				
				case 0x00000005:
					if (Local_119.f_8 > 0x00000005)
					{
						func_489(0x00000006);
					}
					break;
				
				case 0x00000006:
					break;
			}
		}
		else
		{
			func_157();
		}
	}
	else
	{
		func_518();
		func_157();
	}
	func_144();
	func_139();
	func_138();
}

void func_138()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_34())
	{
		Var0 = { Local_119.f_2D9[iLocal_95 /*2*/] };
		if (unk_0xE9F78D191AD5EDBA(Var0.f_1))
		{
			iVar1 = unk_0xB177666FAB6F4417(Var0.f_1);
			if (unk_0xAFE0D3608EDA7039(iVar1))
			{
				if (!unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					unk_0x046C362CF15F1935(&iVar1);
				}
			}
		}
		iLocal_95++;
		if (iLocal_95 >= 0x0000000A)
		{
			iLocal_95 = 0x00000000;
			iLocal_117 = iLocal_116;
			iLocal_116 = 0x00000000;
		}
	}
}

void func_139()
{
	if (Local_119.f_8 == 0x00000005)
	{
		if (func_38(&(Local_119.f_29D)))
		{
			if (unk_0xE9F78D191AD5EDBA(Local_119.f_2D9[iLocal_95 /*2*/].f_1))
			{
				if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_95 /*2*/].f_1), 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_114, iLocal_95))
					{
						unk_0x5D96D8530B3D0904(&iLocal_114, iLocal_95);
						iLocal_115[iLocal_95] = unk_0xD68EA767274B7444();
						unk_0xCEAA091B490F8407(iLocal_115[iLocal_95], "Explosion_Countdown", unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_95 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0x00000000, 0x00000000);
						unk_0x6F6BA3FE885E6C91(iLocal_115[iLocal_95], "Time", 30f);
					}
					if ((0x00007530 - func_482(&(Local_119.f_29D), 0x00000000, 0x00000000)) >= 0x00000000)
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_95 /*2*/].f_1), 0x00000000))
						{
							func_485(0x00000003);
							iLocal_116 = 0x00000001;
						}
					}
					else if (unk_0x526BC32A660C89E6(Local_119.f_2D9[iLocal_95 /*2*/].f_1))
					{
						unk_0xE910A68AA670B4AA(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_95 /*2*/].f_1));
						unk_0xCCB891029A74A633(unk_0xB177666FAB6F4417(Local_119.f_2D9[iLocal_95 /*2*/].f_1), 0x00000001, 0x00000000, 0xFFFFFFFF);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_114, iLocal_95) && !unk_0x8AA6DC470ABA63A2(iLocal_115[iLocal_95]))
				{
					unk_0x55D0A2DB35045A35(iLocal_115[iLocal_95]);
				}
			}
			if (iLocal_117)
			{
				if (!func_92(unk_0xD803B885F5E47A62()))
				{
					func_141(func_480((0x00007530 - func_482(&(Local_119.f_29D), 0x00000000, 0x00000000)), 0x00000000), "HTV_DESTR", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					func_140();
				}
			}
		}
	}
}

void func_140()
{
	Global_150976.f_46A = 0x00000001;
}

void func_141(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_143(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_142(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = uParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_142(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_143(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_144()
{
	char* sVar0;
	
	if (((func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && !func_6(unk_0xD803B885F5E47A62())) && !func_519(unk_0xD803B885F5E47A62())) && func_491(0x00000000, 0x00000001, 0x00000001))
	{
		if (Local_1486[unk_0x57270EE11514DC67() /*5*/].f_3 == 0x00000001)
		{
			if (Local_119.f_2C3)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_34() && !unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
			{
				func_145("CPC_PREPAIR", sVar0, func_156(), 0x00000000);
			}
			else
			{
				func_145("CPC_PREP", sVar0, func_156(), 0x00000000);
			}
		}
		else
		{
			func_434();
		}
	}
	else
	{
		func_434();
	}
}

int func_145(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 0x00000017)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 0x00000017)
	{
		return 0x00000000;
	}
	if (func_155(sParam0, sParam1, sParam2))
	{
		return 0x00000000;
	}
	func_149();
	Global_140749 = 0x00000004;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	StringCopy(&(Global_140749.f_20), sParam2, 64);
	func_148();
	func_147(bParam3);
	func_146();
	return 0x00000001;
}

void func_146()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_147(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_148()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

void func_149()
{
	func_151();
	func_150(0x00000000);
}

void func_150(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_151()
{
	if (!func_154())
	{
	}
	if (func_153())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_152();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_152()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_153()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_154()
{
	if (!func_153())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_152();
	return unk_0xB165082A56EE6E7F();
}

bool func_155(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_153())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0x00000000;
	}
	if (!unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10)))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam2) == unk_0x12AB0310C2281427(&(Global_140749.f_20));
}

char* func_156()
{
	switch (Local_119.f_2C8)
	{
		case 0x00000000:
			return "CPC_WARN0";
			break;
		
		case 0x00000001:
			return "CPC_WARN1";
			break;
		
		case 0x00000002:
			return "CPC_WARN2";
			break;
		
		case 0x00000003:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_157()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000003))
	{
		iLocal_104 = 0x00000001;
		func_174();
		unk_0xC6436D1B1063CD1D();
		func_483(0x00000001);
		func_161();
		func_159();
		unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000003);
		func_158();
	}
}

void func_158()
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = 0x00000000;
}

void func_159()
{
	if (Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
	{
		func_160();
	}
}

void func_160()
{
	struct<28> Var0;
	
	if (unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		if (!Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	Var0.f_7 = 0x00000001;
	Var0.f_8 = 0x00000001;
	Var0.f_15 = 0x42820000;
	Var0.f_1B = 0xBF800000;
	Global_24D54B = { Var0 };
	Global_24D54B.f_6 = 0xFFFFFFFF;
}

void func_161()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

int func_162(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0x00000000 && !func_172()) && !(func_106(unk_0xD803B885F5E47A62(), 0x00000000) && (func_102(unk_0xD803B885F5E47A62()) || func_171(unk_0xD803B885F5E47A62())))) && !func_169(unk_0xD803B885F5E47A62()))
	{
		func_168();
	}
	switch (*uParam0)
	{
		case 0x00000000:
			if (!func_38(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0x00000000, 0x00000000);
			}
			else if (func_1(&(uParam0->f_3), 0x000003E8, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000019);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000000);
					func_2(&(uParam0->f_5), 0x00000000, 0x00000000);
				}
				func_2(&(uParam0->f_1), 0x00000000, 0x00000000);
				func_167(uParam0, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (func_38(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 0x00000BB8, 0x00000000))
				{
					bVar0 = 0x00000001;
				}
			}
			else
			{
				bVar0 = 0x00000001;
			}
			if (bVar0)
			{
				func_164();
				func_167(uParam0, 0x00000002);
			}
			break;
		
		case 0x00000002:
			func_164();
			if (func_1(&(uParam0->f_1), 0x00003A98, 0x00000000))
			{
				if (func_163("AMEV_LBD_HELP"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_167(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			if (func_1(&(uParam0->f_1), 0x00005BCC, 0x00000000))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
				func_167(uParam0, 0x00000004);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000001);
			return 0x00000001;
	}
	return 0x00000000;
}

bool func_163(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_164()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210())
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0x00000001);
			func_166("AMEV_LBD_HELP", 0xFFFFFFFF);
			func_165(0x00000001);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0x00000000);
		}
	}
}

void func_165(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
	if (iParam0 && !func_172())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

void func_166(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_168()
{
	Global_25920E = 0x00000001;
}

int func_169(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000002;
			}
		}
	}
	return 0x00000000;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

bool func_171(int iParam0)
{
	return func_101(iParam0, 0x00000013);
}

bool func_172()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

void func_173()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000001);
	}
	if (Global_26B66F.f_1361 > 0x00000000)
	{
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_KILL");
		unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
		unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xBEF52C1D400C0A44(0x00000001);
		Global_26B66F.f_1361 = 0x00000000;
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
		if (!unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "am_pi_menu"))
		{
			if (Global_26B66F.f_136B > 0xFFFFFFFF)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 0xFFFFFFFF;
			}
		}
	}
}

void func_174()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_119.f_2C5)
	{
		if (unk_0xE4EDC4B0E92C078B(vLocal_102[iVar0 /*3*/]))
		{
			unk_0x142CC44DB769B57E(&(vLocal_102[iVar0 /*3*/]));
			unk_0xE223EB8FE6F8CC15(vLocal_102[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iLocal_92[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_175()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2, 0x00000000) && (func_190() || unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002)))
	{
		if (func_59(func_189()))
		{
			func_188();
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
		{
			if (func_311(0x00000000))
			{
				if (func_310(0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000000))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_187(0x00000040, Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4, sVar0, "AMCH_WIN", 0x00000001, 0x00003A98, 0xBF800000, 0x00000002);
				}
				else
				{
					iVar1 = unk_0xF4FB3A22FC4991C8(Local_119.f_2A2[0x00000000]);
					if (unk_0x81A93C8315C28F58(iVar1))
					{
						iVar2 = unk_0x4B2BFE4A3BC248ED(iVar1);
						if (func_310(0x00000001))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000000))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_187(0x00000043, Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4, sVar0, "CPC_OVER", 0x00000001, 0x00003A98, 0xBF800000, 0x00000002);
						}
						else if (func_310(0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000000))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_187(0x00000043, Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4, sVar0, "CPC_OVER", 0x00000001, 0x00003A98, 0xBF800000, 0x00000002);
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000000) && Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 >= Global_40001.f_2C0A)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = unk_0x6E524813889AECF8(iVar2);
							if (func_81(iVar2, 0x00000001))
							{
								sVar3 = func_178(iVar2);
							}
							func_177(0x00000042, Local_1486[Local_119.f_2A2[0x00000000] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 0x00000001, 0x00003A98, 0x00000002);
						}
					}
				}
			}
			else
			{
				func_44(0x00000042, "CPC_OVER", "CPC_NOWIN", 0x00000001, 0x00003A98, 0x00000002, 0x00000001, 0x00000000);
			}
		}
		else
		{
			func_43("", "", 0x00000001);
		}
		unk_0x5D96D8530B3D0904(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2), 0x00000000);
		func_176(0x00000084);
	}
}

void func_176(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_177(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_99(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_19), sParam3, 64);
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	return func_45(&Var0);
}

char* func_178(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_186(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_181(iParam0, 0x00000000);
		return sVar0;
	}
	if (((func_101(iParam0, 0x0000001C) || func_101(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_180(iParam0)) && !func_179(iParam0))
	{
		return func_181(iParam0, 0x00000000);
	}
	iVar1 = func_80(iParam0);
	if (iVar1 != func_96())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_181(iVar1, 0x00000000);
			}
		}
	}
	if (iVar1 != func_96())
	{
		sVar0 = func_186(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_181(iVar1, 0x00000000);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_179(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_135(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_180(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_96())
	{
		Var0 = { func_135(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				return 0x00000000;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

char* func_181(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_183(iParam0, 0x00000001))
		{
			return func_182();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_182()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_183(int iParam0, bool bParam1)
{
	return func_184(iParam0, bParam1, 0x00000001);
}

int func_184(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_185(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_96() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_185(int iParam0, int iParam1)
{
	if (iParam0 != func_96())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_96())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

var func_186(var uParam0)
{
	return uParam0;
}

int func_187(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_6 = 0xFFFFFFFF;
	Var0.f_7 = 0xBF800000;
	Var0.f_10 = 0x00000001;
	Var0.f_47 = 0x00000001;
	Var0.f_48 = 0x00000002;
	Var0.f_4F = 0xFFFFFFFF;
	func_99(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_48 = iParam7;
	return func_45(&Var0);
}

void func_188()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0x00000000)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_97(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

int func_189()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1;
}

bool func_190()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000019);
}

void func_191()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2, 0x00000001))
	{
		if (func_6(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2), 0x00000001);
			return;
		}
		if (func_519(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2), 0x00000001);
			return;
		}
		if (Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 >= Global_40001.f_2C0A)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_119.f_1 - iLocal_82)) / 60f) / 1000f));
			if (iVar3 > Global_40001.f_2CAB)
			{
				iVar3 = Global_40001.f_2CAB;
			}
			else if (iVar3 < 0x00000001)
			{
				iVar3 = 0x00000001;
			}
			iVar2 = (func_283() * iVar3);
			iVar1 = (func_282() * iVar3);
		}
		else
		{
			func_280(0x00000000);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
		{
			if (Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 >= Global_40001.f_2C0A)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000000))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_279()) * Global_40001.f_2CB6)));
				}
			}
			if (func_310(0x00000000))
			{
				Local_1485.f_5 = 0x00000001;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_278()) * Global_40001.f_2CB7)));
			}
			if ((Local_119.f_2A2[0x00000000] != unk_0x57270EE11514DC67() && Local_119.f_2A2[0x00000001] != unk_0x57270EE11514DC67()) && Local_119.f_2A2[0x00000002] != unk_0x57270EE11514DC67())
			{
				if (Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 >= Global_40001.f_2C0A)
				{
					func_280(0x00000001);
				}
			}
		}
		func_259(&iVar0, 0x00000001);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0x00000000)
		{
			if (func_258())
			{
				func_246(0xFC71898E, iVar0, &uVar4, 0x00000000, 0x00000001, 0x00000000);
			}
			else
			{
				unk_0x9AC21D04D5646532(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1485.f_6 = iVar0;
		if (!Global_40001.f_2CEB)
		{
			if (Local_1485.f_6 > 0x00000000)
			{
				func_245(0x00000008, Local_1485.f_6);
			}
		}
		Global_2594A0 = iVar0;
		func_244();
		func_192(0x00000000, unk_0x16F2683693E537C9(), "", 0x9E79F1A6, 0xB549C072, iVar1, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		Local_1485.f_7 = (Local_1485.f_7 + iVar1);
		unk_0x5D96D8530B3D0904(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2), 0x00000001);
	}
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_193(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_203(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 0xDCB673B3 || iParam4 == 0x8DD87E4F)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_199(unk_0x64430C979F516F7A(iVar1, 0x0000796E, 0f, 0f, 0f), iVar0, 0x00000000, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_194(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_194(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_197(iParam0, 0x00000001) };
	if (iParam0 == func_196(unk_0x16F2683693E537C9()))
	{
		func_195(0x00000001);
	}
	func_199(vVar0, iParam1, 0x00000000, sParam2, iParam3);
}

void func_195(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_196(int iParam0)
{
	return iParam0;
}

Vector3 func_197(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(0x00000002) };
	}
	if (iParam0 == func_198(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0x00000000)
	{
		iVar1 = 0xFFFFFFFF;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000014)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000000 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0x00000007)
			{
				iVar1 = iVar0;
				iVar0 = 0x00000014;
			}
			iVar0++;
		}
		if (iVar1 != 0xFFFFFFFF)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 0x00000001;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_202(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_201();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_200();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_200()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0x00000000;
		return 0x00000001;
	}
	Global_2537E2.f_763 = 0x00000000;
	return 0x00000000;
}

var func_201()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 0x00000001;
	return uVar0;
}

float func_202(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, 0x00000001);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_203(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_204(iParam0, 0x00000000, sParam1, iParam4, iParam5, 0x00000000, iParam6, 0x00000001, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_204(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_243(unk_0xD803B885F5E47A62()) || func_242(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_240() || func_237(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 0x00003E80)
		{
			iVar2 = 0x00003E80;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 0x00003A98)
	{
		iVar2 = 0x00003A98;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_236(sParam2))
	{
	}
	if (func_235())
	{
		if (iParam4 < 0x00000001)
		{
			iParam4 = 0x00000001;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_233(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_232(&iVar1);
		}
		if (iParam1 == 0x00000000)
		{
			switch (iParam0)
			{
				case 0x00000002:
					func_230(0x00000000, &iVar1);
					break;
				
				case 0x00000003:
					func_230(0x00000001, &iVar1);
					break;
				
				case 0x00000001:
					func_228(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 0x00000001)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_225(0x0000048C, iVar1, 0xFFFFFFFF);
			if (iParam1 == 0x00000000)
			{
				func_214((func_224(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0x00000000);
				if (iParam8 == 0x00000000)
				{
				}
				if (iParam9 == 0x00000000)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 0xFFFFFFFF)
				{
					func_225(0x0000048D, iVar1, 0xFFFFFFFF);
				}
				func_209(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 0xFFFFFFFF)
			{
				func_205((func_207(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_205((func_207(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_205(int iParam0)
{
	if (func_235())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_206(joaat("mpply_globalxp"), iParam0);
	}
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_207(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_13(iParam0, 0x00000000, 0x00000001))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_208(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_208(joaat("mpply_globalxp"));
		}
	}
	return 0x00000000;
}

int func_208(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_209(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_135(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_212(func_213(&Var0));
			if (iVar1 == 0x00000000)
			{
				func_211(&Global_152D8B, iParam0);
				func_210(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 0x00000001)
			{
				func_211(&Global_152D8C, iParam0);
				func_210(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 0x00000002)
			{
				func_211(&Global_152D8D, iParam0);
				func_210(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 0x00000003)
			{
				func_211(&Global_152D8E, iParam0);
				func_210(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 0x00000004)
			{
				func_211(&Global_152D8F, iParam0);
				func_210(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_212(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_152D87)
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_152D88)
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_152D89)
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 0x00000004;
	}
	else
	{
		return 0xFFFFFFFF;
	}
	return 0xFFFFFFFF;
}

int func_213(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

void func_214(int iParam0, int iParam1, int iParam2)
{
	if (func_235())
	{
		if (iParam0 >= 0x6A8C4212)
		{
			iParam0 = 0x6A8C4212;
		}
		if (Global_40001.f_2583 == 0x00000000 && iParam1 != 0xBFCF576C)
		{
			if (iParam2 == 0x00000000)
			{
				if (iParam0 < Global_152E1C[func_223(0xFFFFFFFF)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 0xE0C5CB02, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_223(0xFFFFFFFF)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xBAEFBC23, 0xAFCE7619);
				if (iParam2 == 0x00000000)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0x00000000)
		{
			if (iParam0 < 0x00000000)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 0xA169804B, iParam1);
				return;
			}
		}
		if (func_222(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_220(iParam0, 0x00000001);
		}
		func_219(0x0000027F, iParam0, 0xFFFFFFFF, 0x00000001);
		func_218(0x00000280, func_220(iParam0, 0x00000001), 0xFFFFFFFF, 0x00000001, 0x00000000);
		Global_152E1C[func_223(0xFFFFFFFF)] = iParam0;
		func_215(0xBDDC2B6E, 0x00000007, 0x00000000);
	}
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_217(iParam1, iParam2))
	{
		iVar0 = func_216();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_216()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_217(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_223(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_223(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_220(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_221(iParam0, 0x00000000);
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_222(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

int func_223(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_41();
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

int func_224(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_223(0xFFFFFFFF)];
			}
			else if (func_222(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_223(0xFFFFFFFF)];
	}
	return 0x00000000;
}

void func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_227(iParam0, func_223(iParam2), 0x00000000);
	iVar0 = (iVar0 + iParam1);
	if (!func_226(iParam0))
	{
		func_218(iParam0, iVar0, iParam2, 0x00000001, 0x00000000);
	}
	else
	{
		func_219(iParam0, iVar0, iParam2, 0x00000001);
	}
}

int func_226(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 0xFFFFFFFF)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_68(unk_0x08067D4957B73C02(iVar5), iVar1, 0x00000000))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_136(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = 0x00000001;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_229(*iParam0, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 0x00000004)
	{
		iVar2 = 0x00000004;
	}
	if (iVar2 >= 0x00000002)
	{
		iVar7 = SYSTEM::ROUND((func_229(*iParam0, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_229(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_230(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_13(iVar4, 0x00000000, 0x00000001))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_136(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			iVar4 = iVar0;
			if (func_13(iVar4, 0x00000001, 0x00000001))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_231(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_136(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = 0x00000001;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_229(*iParam1, 0x00000064) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 0x00000004)
	{
		iVar1 = 0x00000004;
	}
	if (iVar1 >= 0x00000001)
	{
		iVar6 = SYSTEM::ROUND((func_229(*iParam1, 0x00000064) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_231(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_31(iParam0), func_31(iParam1));
	return 0f;
}

int func_232(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 0x00000003)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_229(*iParam0, 0x00000064) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_233(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_224(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_224(unk_0xD803B885F5E47A62());
		}
	}
	if (func_234(0x00001F40, 0x00000000, 0x00000000) > 0x00000000)
	{
		if (func_234(0x00001F40, 0x00000000, 0x00000000) < (iParam0 + func_224(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_234(0x00001F40, 0x00000000, 0x00000000) - func_224(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_234(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0x00000000)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 0x00001F40)
	{
		iParam0 = 0x00001F40;
	}
	return Global_4713D[iParam0];
}

int func_235()
{
	return 0x00000001;
}

int func_236(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_237(int iParam0)
{
	return func_238(func_239(iParam0));
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0x000000E9:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_239(int iParam0)
{
	if (func_106(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

bool func_240()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_56();
	}
	return func_241(Global_440000.f_2F9AE);
}

int func_241(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_242(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_243(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

void func_244()
{
	Global_25920D = 0x00000001;
}

void func_245(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		if (Global_40001.f_5BC1 == 0x00000000 || Global_40001.f_5BC1 == 0x00000001)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 0x00000001)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0x00000000;
			}
		}
	}
}

void func_246(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_258())
	{
		return;
	}
	iVar0 = 0x00000001;
	if (bParam4)
	{
		iVar0 = 0x00000004;
	}
	else if (bParam3)
	{
		iVar0 = 0x00000002;
	}
	else if (bParam5)
	{
		iVar0 = 0x00000008;
	}
	switch (iParam0)
	{
		case 0x9DEFCB5B:
		case 0xDD16A585:
		case 0xAEF994E9:
		case 0x1B14F96B:
		case 0xC571DB3D:
		case 0x61F840EB:
		case 0x847B5E8A:
		case 0x26C85CA3:
		case 0x62A4B6CC:
		case 0xCBBC5D1E:
		case 0x040E0F34:
		case 0x8180486D:
		case 0x15DAFB97:
		case 0x10E398B4:
		case 0x11611C06:
		case 0x467E2916:
		case 0xE13B1F5A:
		case 0x3DC70F44:
		case 0x108CD6EE:
		case 0x79D2BE32:
		case 0x6DA50854:
		case 0x3CF098E4:
		case 0x73AF3590:
		case 0xAD32107E:
		case 0x2A6B291E:
		case 0x6597C63C:
		case 0x5A58E3BD:
		case 0x45F48C05:
		case 0xCA5E1B40:
		case 0xD86D0371:
		case 0x48090EBA:
		case 0xDB72FD6E:
		case 0xD80064A4:
		case 0xE7BA9A2C:
		case 0xD30E80F5:
		case 0x8F9E64E9:
		case 0x7323DAB3:
		case 0x3F79E8B3:
		case 0xF54343EF:
		case 0x7F096F7D:
		case 0x601646D2:
		case 0xE1286116:
		case 0x741DADD0:
		case 0x421452FF:
		case 0x92AEAB9C:
		case 0xB62639D4:
		case 0xF2BEFF3E:
		case 0xB3E76D2C:
		case 0x5D40F1F0:
		case 0xFA3E19A3:
		case 0x2C41A631:
		case 0x7A31F111:
		case 0x978B277B:
		case 0x25CFCEFF:
		case 0x6E53C312:
		case 0x2D80114E:
		case 0x73BA02A6:
		case 0x27A4C3FB:
		case 0xB0AE4A42:
		case 0x75CD3B70:
		case 0x10077806:
		case 0x6F6E2AEA:
		case 0xEBECC7F6:
		case 0xABCC04E3:
		case 0x24D87C9E:
		case 0x3A732240:
		case 0x1A108B80:
		case 0xF7E7A848:
		case 0xC88FBB63:
		case 0xAB4EA4F8:
		case 0x98AE71E5:
		case 0x8F2EC53A:
		case 0xA3DDECA8:
		case 0x798D498F:
		case 0x17FDC07D:
		case 0xBBD76B5A:
		case 0x6405F5A6:
		case 0x31F23149:
		case 0xA4A86838:
		case 0x6C36F5BD:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_247(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0xFE249573:
		case 0xC2C5E339:
		case 0xACA75AAE:
		case 0x628502B3:
		case 0xFC8D0020:
		case 0xB77DD8B4:
		case 0xFD389995:
		case 0xEAFF75BD:
		case 0xC4F96E65:
		case 0x2195C3D1:
		case 0x676706D3:
		case 0x381AE70B:
		case 0xB94DDB9B:
		case 0x89AD02CE:
		case 0xBCD304B8:
		case 0xF97DB87A:
		case 0x129A5B6E:
		case 0x762D6BF6:
		case 0xD89979EE:
		case 0x4D8C639E:
		case 0xA174F633:
		case 0x176D9D54:
		case 0x016B1CDE:
		case 0xBFCBE6B6:
		case 0x6A22D039:
		case 0x862FB02E:
		case 0x8D682613:
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0x506A6AF5:
		case 0x60988977:
		case 0x74EC47CE:
		case 0x0C92ECEF:
		case 0xFC71898E:
		case 0x67878154:
		case 0xA87819A3:
		case 0x06A679FE:
		case 0x5AEF7C87:
		case 0x39B3A1A7:
		case 0x5E0B0A1C:
		case 0xC84D30CC:
		case 0xB8D124BE:
		case 0xF353DF93:
		case 0xCF63BF45:
		case 0x3E7AA93E:
		case 0x21ECDA63:
		case 0xCCFA5F2D:
		case 0x328CD5AA:
		case 0xFD2A7DE7:
		case 0xEE884170:
		case 0x1B9AFE05:
		case 0x5C66709A:
		case 0xF9F62A7C:
		case 0xD8630BC3:
		case 0x23C04B23:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
		case 0x50503398:
		case 0x3EBB7442:
		case 0x8107BB89:
		case 0xB6D37A76:
		case 0x6F225978:
		case 0x0CD9EBA6:
		case 0xCBC91B24:
		case 0xD4E9820B:
		case 0x53E15D9D:
		case 0xA1DC5A42:
		case 0xFE5D3D39:
		case 0x46521174:
		case 0x370A42A5:
		case 0xED97AFC1:
		case 0x23F59C7C:
		case 0xFF3F6FB2:
		case 0xED74CC1D:
		case 0x33E1D8F6:
		case 0xC5ED889C:
		case 0xFFC0D962:
		case 0xB99C11F6:
		case 0x8DACDD38:
		case 0x32537662:
		case 0x7353182D:
		case 0x6E63A5AC:
		case 0x7D1FD84C:
		case 0x7462F9E7:
		case 0xBA16F44B:
		case 0x87DF725B:
		case 0xA2228687:
		case 0xC6B7C57F:
		case 0x43ADDE78:
		case 0x4B6A869C:
		case 0xDA2AD714:
		case 0x29849CDA:
		case 0x180D054D:
		case 0xCB511DC2:
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
		case 0xDE8FA2AB:
			func_247(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
	switch (iParam0)
	{
		case 0xB001B7EB:
		case 0x9B0E293D:
		case 0x6F581424:
		case 0xD670D38D:
		case 0xB2C78A3D:
		case 0x367BBE86:
		case 0x178D16AE:
		case 0xEC365EEC:
		case 0x63A19A7F:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_247(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0x49F3549B:
		case 0x4A05F619:
		case 0xBE60A029:
		case 0xE285893D:
		case 0x314FB8B0:
		case 0x9145F938:
		case 0x653BCC2D:
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
		case 0x87B8E853:
		case 0x6374FB50:
		case 0x86DA0F67:
		case 0xB703ED29:
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
		case 0x69D9B7DA:
		case 0xCDCF2380:
			func_247(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_258())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_41()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam3 == 0x3FA29128 || iParam3 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar3 = 0x00000001;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000005;
	iVar4 = 0x7FFFFFFF;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_254(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 0xFFFFFFFF)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 0x00000001;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 0x00000001;
				}
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		if (iParam7 & 0x00000002 != 0x00000000)
		{
			Global_411257 = 0x00000001;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		if (iParam7 & 0x00000008 != 0x00000000)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		bVar5 = 0x00000000;
		if (bVar5)
		{
			func_253(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_248(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_249(iParam0);
	}
}

void func_249(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_258())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_252(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_250(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_250(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_251(&(uParam0->f_E));
	func_251(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_251(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_252(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_253(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_258())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && iParam10)
			{
				func_255(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_255(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_257(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_256();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_256()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_257(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_258()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

void func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0x00000000)
	{
		if (!func_277())
		{
			if (func_276(0x00000000))
			{
				if (!func_275(0x00000000))
				{
					if (unk_0x40B8C182D63932FC(func_274()))
					{
						if (func_273() == 0x00000064)
						{
							iVar0 = *iParam0;
							*iParam0 = 0x00000000;
						}
						else
						{
							iVar0 = ((*iParam0 / 0x00000064) * func_273());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_271(&iVar0, 0x00000000);
						if (iParam1 == 0x00000001)
						{
							func_264("GB_BCUT_TICK1", func_274(), iVar0, 0x00000000, 0x00000000, 0x00000001);
						}
						func_263(0x00000014);
						func_260(func_274(), iVar0, 0x00000001);
					}
				}
			}
		}
	}
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_13(iParam0, 0x00000000, 0x00000001))
	{
		Var0 = 0xB2D63074;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_262(iParam0);
		func_261(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000008, func_257(iParam0));
	}
}

void func_261(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_262(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 0x00000020);
	iVar1 = (iParam0 % 0x00000020);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_264(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0xFFFFFFFF;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_61(iParam1, 0xFFFFFFFE, 0x00000001, 0x00000000, 0x00000000));
		unk_0xD06AC7C87A34A6AD(func_269(&Var1));
		if (!iParam3 == 0x00000000)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0x00000000, 0x00000001);
		func_265(0x0000001B, sParam0, 0x00000001, &Var1, iParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	return iVar0;
}

void func_265(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_268() || !unk_0xA14BB9332558B949()) || !func_94(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return;
	}
	iVar0 = func_266(iParam2);
	if (iVar0 >= 0x00000000 && iVar0 < 0x00000005)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000000] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000001] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0x00000002] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000000 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000001 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0x00000002 /*6*/]), sParam11, 24);
	}
}

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (Global_197EBE - 0x00000001))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_267(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 0x00000005)
	{
		Global_197EBE = 0x00000005;
		return Global_197EBE;
	}
	return (Global_197EBE - 0x00000001);
}

void func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000004;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 0x00000001) /*53*/] };
		iVar0 = (iVar0 + 0xFFFFFFFF);
	}
}

bool func_268()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

var func_269(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_270(&cVar0);
}

var func_270(char[4] cParam0)
{
	return cParam0;
}

void func_271(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_272(0x00000001);
	}
	else
	{
		iVar1 = func_272(0x00000000);
	}
	iVar0 = ((*iParam0 / 0x00000064) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_272(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_273()
{
	return Global_40001.f_3065;
}

int func_274()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_275(bool bParam0)
{
	return func_183(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_276(bool bParam0)
{
	return func_81(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_277()
{
	return func_82(unk_0xD803B885F5E47A62());
}

int func_278()
{
	return Global_40001.f_2BF9;
}

int func_279()
{
	return Global_40001.f_2BF8;
}

void func_280(bool bParam0)
{
	if (bParam0)
	{
		if (func_281(0x00000001))
		{
			unk_0x5D96D8530B3D0904(&Global_180713, 0x00000001);
		}
	}
	else if (func_281(0x00000002))
	{
		unk_0x5D96D8530B3D0904(&Global_180713, 0x00000002);
	}
}

int func_281(int iParam0)
{
	int iVar0;
	
	iVar0 = func_227(0x000009E6, 0xFFFFFFFF, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
		{
			return 0x00000000;
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if ((unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A)) && unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_282()
{
	return Global_40001.f_2C0C;
}

int func_283()
{
	return Global_40001.f_2C0B;
}

void func_284()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000005))
	{
		func_285();
	}
	func_521();
}

void func_285()
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (Local_119.f_2A2[0x00000000] > 0xFFFFFFFF)
	{
		iVar9 = 0x00000000;
		iVar7 = 0x00000000;
		while (iVar7 < 0x00000003)
		{
			iVar0[iVar7] = func_96();
			iVar7++;
		}
		iVar7 = 0x00000000;
		while (iVar7 < 0x00000003)
		{
			if (Local_119.f_2A2[iVar7] > 0xFFFFFFFF)
			{
				iVar12 = unk_0xF4FB3A22FC4991C8(Local_119.f_2A2[iVar7]);
				if (unk_0x81A93C8315C28F58(iVar12))
				{
					iVar1 = unk_0x4B2BFE4A3BC248ED(iVar12);
					if (func_13(iVar1, 0x00000000, 0x00000001))
					{
						if (!func_94(iVar1, 0x00000000))
						{
							iVar0[iVar7] = iVar1;
							uVar2[iVar7] = Local_1486[Local_119.f_2A2[iVar7] /*5*/].f_4;
							if (func_276(0x00000001))
							{
								if (func_81(iVar1, 0x00000001))
								{
									uVar11[iVar7] = func_61(iVar1, 0xFFFFFFFE, 0x00000000, 0x00000000, 0x00000000);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x57270EE11514DC67();
		if (func_92(unk_0xD803B885F5E47A62()))
		{
			iVar13 = func_300();
			iVar14 = unk_0x83FACCC48B68F9D1(iVar13);
			if (unk_0x40B8C182D63932FC(iVar14))
			{
				iVar15 = unk_0x7B9C1F53FE442D06(iVar14);
				if (unk_0x81A93C8315C28F58(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_480(0x00000000, Local_119.f_2C4);
		iVar4 = Local_119.f_2C5;
		iVar5 = func_480(0x00000000, Local_1486[iVar8 /*5*/].f_4);
		iVar6 = func_480(0x00000000, (Global_40001.f_2B69 - func_482(&(Local_119.f_295), 0x00000000, 0x00000000)));
		func_299(iVar6);
		if (iVar6 > 0x00007530)
		{
			iVar10 = 0x00000001;
		}
		else
		{
			iVar10 = 0x00000006;
		}
		func_286(iVar0[0x00000000], iVar0[0x00000001], iVar0[0x00000002], uVar2[0x00000000], uVar2[0x00000001], uVar2[0x00000002], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_296(), uVar11[0x00000000], uVar11[0x00000001], uVar11[0x00000002]);
	}
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_293(0x00000000) == 0x00000000)
	{
		return;
	}
	func_292();
	iVar1 = 0x00000000;
	if (((Global_259033[0x00000000] != iParam0 || Global_259033[0x00000001] != iParam1) || Global_259033[0x00000002] != iParam2) || *iParam10)
	{
		iVar1 = 0x00000001;
	}
	Global_259033[0x00000000] = iParam0;
	Global_259033[0x00000001] = iParam1;
	Global_259033[0x00000002] = iParam2;
	Global_259033[0x00000003] = 0x00000000;
	Global_259033[0x00000004] = 0x00000000;
	if (Global_259033[0x00000000] != func_96())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000000]);
			Global_259039[0x00000000 /*16*/] = { func_291(0x00000001, sVar0) };
		}
		if (iParam3 > 0x00000000)
		{
			func_288(iParam3, &(Global_259039[0x00000000 /*16*/]), 0xFFFFFFFF, 0x0000006D, 0x00000008, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam13, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000001] != func_96())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000001]);
			Global_259039[0x00000001 /*16*/] = { func_291(0x00000002, sVar0) };
		}
		if (iParam4 > 0x00000000)
		{
			func_288(iParam4, &(Global_259039[0x00000001 /*16*/]), 0xFFFFFFFF, 0x0000006C, 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam14, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	if (Global_259033[0x00000002] != func_96())
	{
		if (iVar1 == 0x00000001)
		{
			sVar0 = unk_0x6E524813889AECF8(Global_259033[0x00000002]);
			Global_259039[0x00000002 /*16*/] = { func_291(0x00000003, sVar0) };
		}
		if (iParam5 > 0x00000000)
		{
			func_288(iParam5, &(Global_259039[0x00000002 /*16*/]), 0xFFFFFFFF, 0x0000006B, 0x00000006, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, uParam15, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
	}
	func_287(iParam6, iParam7, "HUD_CHECKPOINTS", 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x000000FF, 0x00000000);
	if (func_519(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		func_288(iParam8, "HUD_USCORE", 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_236(sParam12))
	{
		sVar2 = sParam12;
	}
	func_141(iParam9, sVar2, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, iParam11, 0x00000000, 0x00000000, 0x00000000, iParam11, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	*iParam10 = 0x00000000;
	func_140();
}

void func_287(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_143(0x00000004, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_142(0x00000004, iVar0);
		Global_150976.f_CC8[iVar0] = iParam0;
		Global_150976.f_CC8.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_CC8.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_CC8.f_B7[iVar0] = iParam3;
		Global_150976.f_CC8.f_D8[iVar0] = iParam5;
		Global_150976.f_CC8.f_C2[iVar0] = iParam4;
		Global_150976.f_CC8.f_E3[iVar0] = iParam6;
		Global_150976.f_CC8.f_10E[iVar0] = iParam7;
		Global_150976.f_CC8.f_119[iVar0] = iParam8;
		Global_150976.f_CC8.f_124[iVar0] = iParam9;
		Global_150976.f_CC8.f_12F[iVar0] = iParam10;
		Global_150976.f_CC8.f_13A[iVar0] = iParam11;
		Global_150976.f_CC8.f_145[iVar0] = iParam13;
		Global_150976.f_CC8.f_150[iVar0] = iParam14;
		Global_150976.f_CC8.f_15B[iVar0] = iParam15;
		if (((iParam0 > 0x00000009 && iParam1 > 0x00000009) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_150976.f_46A = 0x00000001;
		}
	}
}

void func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_143(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_142(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = iParam8;
		Global_150976.f_F68.f_1F1[iVar0] = iParam9;
		Global_150976.f_F68.f_1FC[iVar0] = iParam10;
		Global_150976.f_F68.f_CD[iVar0] = iParam11;
		Global_150976.f_F68.f_D8[iVar0] = iParam12;
		Global_150976.f_F68.f_E3[iVar0] = iParam13;
		Global_150976.f_F68.f_EE[iVar0] = iParam14;
		Global_150976.f_F68.f_F9[iVar0] = iParam15;
		Global_150976.f_F68.f_207[iVar0] = iParam16;
		Global_150976.f_F68.f_212[iVar0] = iParam17;
		Global_150976.f_F68.f_21D[iVar0] = iParam18;
		Global_150976.f_F68.f_228[iVar0] = iParam19;
		Global_150976.f_F68.f_233[iVar0] = iParam20;
		Global_150976.f_F68.f_23E[iVar0] = iParam21;
		Global_150976.f_F68.f_249[iVar0] = iParam22;
		Global_150976.f_F68.f_254[iVar0] = iParam23;
		Global_150976.f_F68.f_25F[iVar0] = iParam24;
		Global_150976.f_F68.f_C2[iVar0] = iParam25;
		if (iParam15 == 0x00000005 && func_290())
		{
			Global_150976.f_46A = 0x00000001;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0x00000000;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 0x00000500 && iVar4 >= 0x000003C0)
			{
				iVar2 = 0x00000001;
			}
			if (iParam0 > 0x05F5E0FF)
			{
				Global_150976.f_46E = 0x00000001;
			}
			else if (iParam0 > 0x0098967F || iVar2)
			{
				Global_150976.f_46D = 0x00000001;
			}
			else if (iParam0 > 0x000003E7)
			{
				Global_150976.f_46A = 0x00000001;
			}
			if (func_289())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_289()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 0x00000400)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_290()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<16> func_291(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 0x00000001:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIRST"), 64);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSSECOND"), 64);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSTHIRD"), 64);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFOURTH"), 64);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, unk_0x19C9F30A7697B43C("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_292()
{
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	Global_259211 = 0x00000001;
}

int func_293(bool bParam0)
{
	if (func_295())
	{
		return 0x00000000;
	}
	if (func_294())
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) == 0x00000000)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_294()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

bool func_295()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x0000000C);
}

char* func_296()
{
	return "HUD_COUNTDOWN";
	switch (func_298(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
			return "AET_HOT_TARG";
		
		case 0x00000084:
			return "AET_CHK_COLL";
		
		case 0x00000085:
			switch (func_297())
			{
				case 0x00000000:
					return "AET_CHALL_LJ";
				
				case 0x00000001:
					return "AET_CHALL_LS";
				
				case 0x00000002:
					return "AET_CHALL_HS";
				
				case 0x00000003:
					return "AET_CHALL_LST";
				
				case 0x00000004:
					return "AET_CHALL_LW";
				
				case 0x00000005:
					return "AET_CHALL_NC";
				
				case 0x00000006:
					return "AET_CHALL_LP";
				
				case 0x00000007:
					return "AET_CHALL_VS";
				
				case 0x00000008:
					return "AET_CHALL_NM";
				
				case 0x00000009:
					return "AET_CHALL_RD";
				
				case 0x0000000A:
					return "AET_CHALL_LF";
				
				case 0x0000000B:
					return "AET_CHALL_LFL";
				
				case 0x0000000C:
					return "AET_CHALL_LFI";
				
				case 0x0000000D:
					return "AET_CHALL_LB";
				
				case 0x0000000E:
					return "AET_CHALL_MB";
				
				case 0x0000000F:
					return "AET_CHALL_HSH";
				
				case 0x00000010:
					return "AET_CHALL_DB";
				
				case 0x00000011:
					return "AET_CHALL_ML";
				
				case 0x00000012:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "AET_PENNED";
		
		case 0x0000008A:
			return "AET_PARCEL";
		
		case 0x0000008B:
			return "AET_PROPERTY";
		
		case 0x0000008C:
			return "AET_DDROP";
		
		case 0x0000008D:
			return "AET_KCASTLE";
		
		case 0x00000090:
			return "AET_BLAST";
		
		case 0x00000081:
			return "AET_UWARF";
		
		case 0x00000092:
			return "AET_BEAST";
	}
	return "";
}

int func_297()
{
	if (func_298(unk_0xD803B885F5E47A62()) == 0x00000085)
	{
		return Global_26B66F.f_13B5;
	}
	return 0xFFFFFFFF;
}

int func_298(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 0xFFFFFFFF;
}

void func_299(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_1363)))
			{
				unk_0xA6C13961116F9033(&(Global_26B66F.f_1363));
			}
			unk_0xBEF52C1D400C0A44(0x00000001);
			unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
			unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
			if (Global_26B66F.f_136B > 0xFFFFFFFF)
			{
				unk_0x43A06902454A1172(Global_26B66F.f_136B);
				Global_26B66F.f_136B = 0xFFFFFFFF;
			}
			Global_26B66F.f_1361 = 0x00000000;
		}
	}
	else if (iParam0 < 0x00007530)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000004))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000002))
				{
					if (unk_0x3133F8A3F91571F1())
					{
						if ((!unk_0x7F8A39872A07D2CE(unk_0xE4B65163E4129619(unk_0xFC21F7E0F4D92523()), "OFF") && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0xEA6BC48857E0AC4C(&(Global_26B66F.f_1363)))
						{
							StringCopy(&(Global_26B66F.f_1363), "", 32);
							unk_0xC92DB9682A650680("FM_COUNTDOWN_30S_FIRA");
							unk_0x8910D3D58E0132B8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
							unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
							unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000000);
							unk_0xBEF52C1D400C0A44(0x00000001);
							unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
						}
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000005))
				{
					unk_0xA6C13961116F9033("OFF");
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
			{
				if (iParam0 < 0x00002710)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 0x00004E20)
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0xC92DB9682A650680("FM_COUNTDOWN_30S");
				}
				unk_0x8BC9595FD2792B5D("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000001);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000004))
			{
				if (iParam0 < 0x00006B6C)
				{
					if (unk_0x0931E02856C8B6A4() != 0x00000000)
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x3F02B7BDF1B316D6())
						{
							StringCopy(&(Global_26B66F.f_1363), unk_0x04DF2A8CF5EBE3B0(), 32);
							unk_0xA6C13961116F9033("OFF");
						}
						unk_0xBEF52C1D400C0A44(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000004);
					}
				}
			}
			if (iParam0 < 0x00002710)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000003))
				{
					Global_26B66F.f_136B = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Global_26B66F.f_136B, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000003);
				}
			}
		}
		else if (iParam0 > 0x00002710)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
			{
				Global_26B66F.f_1361 = 0x00000000;
				Global_26B66F.f_136B = 0xFFFFFFFF;
				unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
				unk_0xBEF52C1D400C0A44(0x00000000);
				unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
				unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
				unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
				unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000000);
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000002))
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000005);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000005);
					unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000002);
				}
			}
		}
	}
	else if (iParam0 < 0x00009C40 && iParam0 > 0x00007530)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000000))
		{
			Global_26B66F.f_1361 = 0x00000000;
			Global_26B66F.f_136B = 0xFFFFFFFF;
			unk_0x13896FDECC859926("FM_COUNTDOWN_30S_KILL");
			unk_0xBEF52C1D400C0A44(0x00000000);
			unk_0xC92DB9682A650680("FM_PRE_COUNTDOWN_30S");
			unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
			unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
			unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000000);
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000002);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000005);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000002);
				unk_0x0674E58A79778E99(&(Global_26B66F.f_1361), 0x00000005);
			}
		}
	}
}

var func_300()
{
	if (unk_0xC844350D5D58C99A(func_301()))
	{
		return func_301();
	}
	return func_89();
}

var func_301()
{
	return Global_240006.f_3;
}

void func_302()
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Var1 = 0xFFFFFFFF;
	Var1.f_16 = 0xBF800000;
	Var1.f_17 = 0x00000003;
	Var1.f_27 = 0xFFFFFFFF;
	Var1.f_29 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		Local_140.f_216[iVar0 /*42*/] = { Var1 };
		Local_140.f_216[iVar0 /*42*/].f_1 = func_96();
		if (Local_119.f_2A2[iVar0] > 0xFFFFFFFF)
		{
			iVar3 = unk_0xF4FB3A22FC4991C8(Local_119.f_2A2[iVar0]);
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar2 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (!func_94(iVar2, 0x00000000))
				{
					Local_140.f_216[iVar0 /*42*/] = Local_119.f_2A2[iVar0];
					Local_140.f_216[iVar0 /*42*/].f_1 = iVar2;
					uVar4 = Local_1486[Local_119.f_2A2[iVar0] /*5*/].f_4;
					Local_140.f_216[iVar0 /*42*/].f_9 = uVar4;
					Local_140.f_216[iVar0 /*42*/].f_1F = 0xFFFFFFFF;
				}
			}
		}
		iVar0++;
	}
}

void func_303()
{
	if (Local_118 != 0xFFFFFFFF && Local_118.f_1 != 0xFFFFFFFF)
	{
		if (unk_0x0D03A641486A2001() != func_305() && unk_0x81A93C8315C28F58(unk_0x0D03A641486A2001()))
		{
			func_304(Local_118.f_1, Local_118, func_257(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())));
			Local_118 = 0xFFFFFFFF;
			Local_118.f_1 = 0xFFFFFFFF;
		}
	}
}

void func_304(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = 0xCB14B6C0;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000004, iParam2);
	}
}

int func_305()
{
	return 0xFFFFFFFF;
}

void func_306()
{
	if (func_310(0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000004))
		{
			if (func_275(0x00000001))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0x00000000);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Enter_1st", "GTAO_FM_Events_Soundset", 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000004);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000004))
	{
		if (func_275(0x00000001))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0x00000000);
		}
		else
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lose_1st", "GTAO_FM_Events_Soundset", 0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_84, 0x00000004);
	}
}

void func_307()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x0000001A);
}

int func_308(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000009) && !(unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000006) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000007))) || ((unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000007)) && !unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_44.f_2, 0x00000009)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_309()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C6), 0x00000013);
}

int func_310(int iParam0)
{
	if (iParam0 >= 0x00000000)
	{
		if (Local_119.f_2A2[iParam0] == unk_0x57270EE11514DC67() && Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 > 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0x00000000)
	{
		iVar0 = Local_119.f_2A2[iParam0];
		if (iVar0 >= 0x00000000)
		{
			if (func_312(Local_1486[iVar0 /*5*/].f_4, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_312(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

bool func_313(int iParam0)
{
	return func_314(unk_0x16F2683693E537C9(), Local_119.f_A[iParam0 /*5*/], 0x00000001) < 500f;
}

float func_314(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

bool func_315(int iParam0)
{
	return func_314(unk_0x16F2683693E537C9(), Local_119.f_A[iParam0 /*5*/], 0x00000001) < 750f;
}

void func_316(int iParam0)
{
	func_349(&(vLocal_102[iParam0 /*3*/]), Local_119.f_A[iParam0 /*5*/], iParam0);
	if (uLocal_85[iParam0])
	{
		func_344(Local_119.f_A[iParam0 /*5*/], iParam0);
		func_317(Local_119.f_A[iParam0 /*5*/], iParam0);
	}
}

void func_317(struct<4> Param0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == unk_0x57270EE11514DC67() && !unk_0xEAE0D21A50E6C7F4(uLocal_91[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4++;
		if (iLocal_82 == 0x00000000)
		{
			iLocal_82 = unk_0x2B6E0A53779D29EA();
		}
		iVar0 = func_342(SYSTEM::CEIL((IntToFloat(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4) / func_343())));
		iVar1 = func_340(SYSTEM::CEIL((IntToFloat(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4) / func_341())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_40001.f_2CB6));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_40001.f_2CB7));
		if (func_34())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_339()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_338()));
		}
		if (func_258())
		{
			func_246(0xFC71898E, iVar0, &uVar2, 0x00000000, 0x00000001, 0x00000000);
		}
		else
		{
			unk_0x9AC21D04D5646532(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_244();
		func_192(0x00000000, unk_0x16F2683693E537C9(), "", 0xCBCDA251, 0x60F15A9E, iVar1, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		iLocal_93 = (iLocal_93 + iVar0);
		Global_2594A0 = iVar0;
		Local_1485.f_7 = (Local_1485.f_7 + iVar1);
		unk_0x5D96D8530B3D0904(&(uLocal_91[func_17(iParam2)]), func_16(iParam2));
		if (Local_1485.f_B == 0x00000000)
		{
			Local_1485.f_B = unk_0xDD0E7998AE8AD485();
		}
		func_318();
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

void func_318()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2, 0x00000002))
	{
		unk_0x5D96D8530B3D0904(&(Local_1486[unk_0x57270EE11514DC67() /*5*/].f_2), 0x00000002);
		func_319(0x00000001);
	}
}

void func_319(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
		{
			if (((!func_100(unk_0xD803B885F5E47A62()) && !func_6(unk_0xD803B885F5E47A62())) && !func_519(unk_0xD803B885F5E47A62())) && !func_337(unk_0xD803B885F5E47A62()))
			{
				if (func_336())
				{
					func_329(0x00000002, 0x00000000, 0x00000001);
					func_328();
				}
				if (func_517(0x00000000))
				{
					uVar0 = func_227(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&uVar0, 0x00000000);
					func_328();
				}
				if (func_517(func_516(func_298(unk_0xD803B885F5E47A62()))))
				{
					uVar0 = func_227(0x000009B0, 0xFFFFFFFF, 0x00000000);
					unk_0x0674E58A79778E99(&uVar0, func_516(func_298(unk_0xD803B885F5E47A62())));
					func_328();
				}
				if (func_327())
				{
					func_328();
				}
				if (func_298(unk_0xD803B885F5E47A62()) > 0xFFFFFFFF)
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
					if (func_326(unk_0xD803B885F5E47A62()))
					{
						func_325();
					}
					func_322(func_324(func_298(unk_0xD803B885F5E47A62())));
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000007);
		func_320();
	}
}

void func_320()
{
	if (func_321())
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

bool func_321()
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000011);
}

void func_322(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_200000[func_323() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 0xFFFFFFFF)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 0x00000001;
				return;
			}
		}
		iVar0++;
	}
}

int func_323()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000096:
			return 0x00000043;
		
		case 0x000000EC:
			return 0x00000043;
		
		case 0x00000085:
			return 0x00000045;
		
		default:
	}
	return 0x00000044;
}

void func_325()
{
	if (!func_321())
	{
		Global_26B66F.f_19B1 = unk_0x2B6E0A53779D29EA();
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000011);
	}
}

int func_326(int iParam0)
{
	if (func_298(iParam0) == 0x000000EC || func_298(iParam0) == 0x00000096)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_327()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_328()
{
	if (func_327())
	{
		Global_2537E2.f_484.f_10 = 0x00000001;
	}
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	if (func_336())
	{
		if (iParam1 == 0x00000001)
		{
			if (Global_26B66F.f_112B == 0xFFFFFFFF)
			{
				Global_26B66F.f_112B = Global_40001.f_6719;
			}
			func_20(&(Global_26B66F.f_1129), 0x00000000, 0x00000000);
			if (bParam2)
			{
				if (Global_26B66F.f_112E == 0xFFFFFFFF)
				{
					Global_26B66F.f_112E = Global_40001.f_671A;
				}
				func_20(&(Global_26B66F.f_112C), 0x00000000, 0x00000000);
			}
			else
			{
				Global_1406A2 = 0x00000000;
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
				func_335(0x00000001);
			}
		}
		else
		{
			Global_1406A2 = 0x00000000;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_8 = 0x00000000;
			func_335(0x00000001);
		}
		if ((!unk_0xA14BB9332558B949() && !func_334()) && !func_330(unk_0xD803B885F5E47A62()))
		{
			Global_EC6CC = 0x00000000;
		}
		unk_0x6EC9FBED3024FDF5(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, iParam0);
	}
}

int func_330(int iParam0)
{
	if (func_331(iParam0, 0x00000001, 0x00000000))
	{
		if (Global_184507[iParam0 /*876*/] != 0x00000006)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_331(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_332(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_332(int iParam0)
{
	return func_333(iParam0);
}

bool func_333(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

bool func_334()
{
	return Global_2564C8.f_2E4;
}

void func_335(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_336())
		{
			if (func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000000);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000000);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0x00000000);
			unk_0xDC4BBCD7EBECDC32(0x00000001);
			if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
			{
				Global_1406A2.f_2 = 0x00000000;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0x00000000, 0x00000000);
				}
			}
		}
		else
		{
			if (func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000156, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x0000007A, 0x00000001);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0x00000000 || Global_1406A2.f_2 == 0x00000001)
				{
					unk_0x03718F4C6E876DE6(0x00000001, 0x00000000);
				}
			}
			unk_0x2F82E0AC5EC27DF2(0x00000001);
			unk_0xDC4BBCD7EBECDC32(0x00000000);
		}
	}
}

bool func_336()
{
	return Global_1406A2;
}

int func_337(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

float func_338()
{
	return Global_40001.f_2BFB;
}

float func_339()
{
	return Global_40001.f_2BFA;
}

var func_340(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_40001.f_2C06;
		
		case 0x00000002:
			return Global_40001.f_2C07;
		
		case 0x00000003:
			return Global_40001.f_2C08;
		
		case 0x00000004:
			return Global_40001.f_2C09;
		
		default:
	}
	return Global_40001.f_2C09;
}

float func_341()
{
	return Global_40001.f_2B0A;
}

var func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_40001.f_2BFC;
		
		case 0x00000002:
			return Global_40001.f_2BFD;
		
		case 0x00000003:
			return Global_40001.f_2BFE;
		
		case 0x00000004:
			return Global_40001.f_2BFF;
		
		case 0x00000005:
			return Global_40001.f_2C00;
		
		case 0x00000006:
			return Global_40001.f_2C01;
		
		case 0x00000007:
			return Global_40001.f_2C02;
		
		case 0x00000008:
			return Global_40001.f_2C03;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return Global_40001.f_2C04;
		
		default:
	}
	return Global_40001.f_2C05;
}

float func_343()
{
	return Global_40001.f_2B09;
}

void func_344(vector3 vParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_119.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uLocal_90[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_345())
				{
					iLocal_89 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_119.f_9);
					if (unk_0x0D03A641486A2001() != func_305() && unk_0x81A93C8315C28F58(unk_0x0D03A641486A2001()))
					{
						func_304(iLocal_89, iParam3, func_257(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())));
						Local_118 = 0xFFFFFFFF;
						Local_118.f_1 = 0xFFFFFFFF;
					}
					else
					{
						Local_118 = iParam3;
						Local_118.f_1 = iLocal_89;
					}
					unk_0x5D96D8530B3D0904(&(uLocal_90[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_96, 0x000000FA, 0x00000000))
		{
			if (unk_0x0D03A641486A2001() != func_305() && unk_0x81A93C8315C28F58(unk_0x0D03A641486A2001()))
			{
				func_304(iLocal_89, iParam3, func_257(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())));
				Local_118.f_1 = 0xFFFFFFFF;
				Local_118 = 0xFFFFFFFF;
			}
			else
			{
				Local_118 = iParam3;
				Local_118.f_1 = iLocal_89;
			}
			func_37(&uLocal_96);
		}
	}
}

int func_345()
{
	if (!func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	if (func_519(unk_0xD803B885F5E47A62()))
	{
		if (((func_336() && !func_348()) || func_347(unk_0xD803B885F5E47A62(), 0x00000015)) || func_347(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			func_485(0x00000000);
		}
		else
		{
			func_485(0x00000007);
		}
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (func_346(unk_0x16F2683693E537C9(), 0x00000000) != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	if (func_94(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	if (!func_34())
	{
		if (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
		{
			func_485(0x00000001);
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_346(int iParam0, int iParam1)
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

bool func_347(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_348()
{
	return Global_1406A2.f_1;
}

void func_349(int iParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	vVar0 = { vParam1 };
	unk_0xA402F6C87C08815C(0x0000000C, &iVar1, &iVar2, &iVar3, &uVar4);
	if (!unk_0xEAE0D21A50E6C7F4(uLocal_90[func_17(iParam4)], func_16(iParam4)) && !unk_0xEAE0D21A50E6C7F4(Local_119.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			if (!func_417(vVar0, 0f, 0f, 0f, 0x00000000) && !func_417(vVar0, 0f, 0f, -2000f, 0x00000000))
			{
				*iParam0 = unk_0x6CC513A908911CF0(vVar0);
				unk_0xBC8E0A7390523199(*iParam0, 0x000001AF);
				unk_0x2A065371C9D96655(*iParam0, 0x00000009);
				unk_0xDC5B2F9D0CCE3A10(*iParam0, "CPC_BLIP");
				func_356(*iParam0, 0x00000019, 0x44AF0000, 0x43C80000);
				func_354(iParam0, 0x0000000C);
				unk_0xF2D30B8ACAF12A39(*iParam0, 0x00000001);
			}
		}
		else if (unk_0x798A3F1296751F46())
		{
			unk_0x7F010F50CE03A8AF(*iParam0, 0x000000FF);
		}
		else
		{
			func_356(*iParam0, 0x00000019, 0x44AF0000, 0x43C80000);
		}
		if (uLocal_86[iParam4])
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 0x00000036;
				if (func_34())
				{
					iParam0->f_1 = unk_0x1B26E47E3E30075B(iVar5, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, iVar1, iVar2, iVar3, iParam0->f_2, 0x00000000);
					unk_0x39BB9CA9BC90525F(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = unk_0x1B26E47E3E30075B(iVar5, vVar0 + Vector(2.8f, 0f, 0f), vVar0, 5f, iVar1, iVar2, iVar3, iParam0->f_2, 0x00000000);
					unk_0x39BB9CA9BC90525F(iParam0->f_1, 5f, 5f, 100f);
				}
				unk_0x5D96D8530B3D0904(&(iLocal_92[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_353(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_352(&vParam1);
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_92[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_351(&(iParam0->f_1), &(iParam0->f_2)))
			{
				unk_0xE223EB8FE6F8CC15(iParam0->f_1);
				unk_0x0674E58A79778E99(&(iLocal_92[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_92[func_17(iParam4)], func_16(iParam4)))
	{
		func_350(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_350(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (*uParam0 != 0x00000000)
	{
		*uParam1 = (*uParam1 - 0x00000019);
		if (*uParam1 > 0x00000000)
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0xF0B0A50DF3EA0E70(*uParam0, iVar0, iVar1, iVar2, *uParam1);
			unk_0xF08C5AE8AC5C7427(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(*iParam2))
			{
				unk_0x142CC44DB769B57E(iParam2);
			}
			unk_0xE223EB8FE6F8CC15(*uParam0);
			*uParam0 = 0x00000000;
			unk_0x0674E58A79778E99(&(iLocal_92[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_351(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 0x0000000A);
	if (*uParam1 > 0x00000000)
	{
		unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xF0B0A50DF3EA0E70(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		unk_0xF08C5AE8AC5C7427(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0x00000000;
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000001;
}

void func_352(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 0x000000EF;
	iVar1 = 0x000000FA;
	iVar2 = 0x000000BB;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_131(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		unk_0x5340B21729EE0AD2(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_353(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (*uParam1 < 0x000000AF)
	{
		*uParam1 += 10;
		unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xF0B0A50DF3EA0E70(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		unk_0xF08C5AE8AC5C7427(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		return 0x00000000;
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000001;
}

void func_354(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		iVar0 = func_355(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, iVar0);
	}
}

int func_355(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000004;
		
		case 0x00000000:
			return 0x00000004;
		
		case 0x00000006:
			return 0x0000003B;
		
		case 0x00000012:
			return 0x00000002;
		
		case 0x0000000D:
			return 0x00000005;
		
		case 0x00000074:
			return 0x00000026;
		
		case 0x0000001C:
			return 0x00000006;
		
		case 0x0000001D:
			return 0x00000007;
		
		case 0x0000001E:
			return 0x00000008;
		
		case 0x0000001F:
			return 0x00000009;
		
		case 0x00000020:
			return 0x0000000A;
		
		case 0x00000021:
			return 0x0000000B;
		
		case 0x00000022:
			return 0x0000000C;
		
		case 0x00000023:
			return 0x0000000D;
		
		case 0x00000024:
			return 0x0000000E;
		
		case 0x00000025:
			return 0x0000000F;
		
		case 0x00000026:
			return 0x00000010;
		
		case 0x00000027:
			return 0x00000011;
		
		case 0x00000028:
			return 0x00000012;
		
		case 0x00000029:
			return 0x00000013;
		
		case 0x0000002A:
			return 0x00000014;
		
		case 0x0000002B:
			return 0x00000015;
		
		case 0x0000002C:
			return 0x00000016;
		
		case 0x0000002D:
			return 0x00000017;
		
		case 0x0000002E:
			return 0x00000018;
		
		case 0x0000002F:
			return 0x00000019;
		
		case 0x00000030:
			return 0x0000001A;
		
		case 0x00000031:
			return 0x0000001B;
		
		case 0x00000032:
			return 0x0000001C;
		
		case 0x00000033:
			return 0x0000001D;
		
		case 0x00000034:
			return 0x0000001E;
		
		case 0x00000035:
			return 0x0000001F;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000021;
		
		case 0x00000038:
			return 0x00000022;
		
		case 0x00000039:
			return 0x00000023;
		
		case 0x0000003A:
			return 0x00000024;
		
		case 0x0000003B:
			return 0x00000025;
		
		case 0x00000009:
			return 0x00000039;
		
		case 0x0000000A:
			return 0x00000035;
		
		case 0x00000076:
			return 0x00000039;
		
		case 0x0000000E:
			return 0x00000038;
		
		case 0x00000003:
			return 0x00000037;
		
		case 0x00000015:
			return 0x00000032;
		
		case 0x0000000F:
			return 0x00000033;
		
		case 0x00000014:
			return 0x00000034;
		
		case 0x0000000B:
			return 0x00000036;
		
		case 0x00000017:
			return 0x0000003A;
		
		case 0x0000000C:
			return 0x0000003C;
		
		case 0x00000018:
			return 0x0000003D;
		
		case 0x00000004:
			return 0x0000003E;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 0x01000000) + (iVar1 * 0x00010000)) + iVar2 * 256) + iVar3);
	return 0x00000000;
}

void func_356(int iParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0x7F010F50CE03A8AF(iParam0, func_357(iParam0, iParam1, fParam2, fParam3));
}

int func_357(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_308(Global_2537E2) && !func_73())
	{
		fVar0 = func_362(iParam0, fParam3, fParam2);
		if (iParam1 == 0x00000000)
		{
			iParam1 = func_358();
		}
		return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((0x000000FF - iParam1)) * fVar0)) + iParam1);
	}
	return 0x000000FF;
}

int func_358()
{
	if (func_359(Global_2537E2, 0x00000001))
	{
		return 0x00000032;
	}
	return 0x00000000;
}

bool func_359(int iParam0, bool bParam1)
{
	if (func_361() != 0x00000000)
	{
		return func_360(iParam0) != 0x00000000;
	}
	return func_331(iParam0, bParam1, 0x00000000);
}

int func_360(int iParam0)
{
	if (func_13(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_361()
{
	return Global_7830;
}

float func_362(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_2537E2;
	vVar2 = { func_416(iParam0) };
	vVar2.z = 0f;
	if (Global_1420C7 || func_412())
	{
		if (func_411(iVar0))
		{
			vVar3 = { func_365(iVar0) };
		}
		else if (func_364(iVar0))
		{
			vVar3 = { func_363(iVar0) };
		}
	}
	else
	{
		vVar3 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iVar0), 0x00000000) };
	}
	vVar3.z = 0f;
	fVar1 = SYSTEM::VMAG(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_363(int iParam0)
{
	int iVar0;
	
	if (func_364(iParam0))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			return unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	return 0f, 0f, 0f;
}

int func_364(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			iVar0 = unk_0x9539D44F3E4492F6(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (unk_0x5A91F08DF773C39D(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

Vector3 func_365(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam0 == func_96())
	{
	}
	if (func_410(iParam0))
	{
		iVar0 = func_409(iParam0);
		if (iVar0 != func_96())
		{
			if (!func_408(iVar0))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_295[iVar0 /*3*/][0x00000001]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_295[iVar0 /*3*/][0x00000001], 0x00000000);
				}
				else
				{
					return Global_25033E[func_409(iParam0) /*421*/].f_136.f_9;
				}
			}
			else
			{
				iVar1 = func_404(iVar0);
				if (!iVar1 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_403(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_26B66F.f_131))
		{
			return unk_0x68F4C0EC296D3901(Global_26B66F.f_131, 0x00000000);
		}
	}
	else if (func_402(iParam0) && !func_401(iParam0))
	{
		iVar2 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar2 != func_96())
		{
			iVar3 = func_404(iVar2);
			if (!iVar3 == 0xFFFFFFFF)
			{
				return Global_199459.f_1E8[iVar3 /*3*/];
			}
		}
	}
	else if (func_400(iParam0) && !func_399(iParam0))
	{
		if (func_411(iParam0) && func_398())
		{
			return Global_199459.f_1E8[Global_25033E[iParam0 /*421*/].f_136.f_5 /*3*/];
		}
		iVar4 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar4 != func_96())
		{
			if (func_397(iVar4))
			{
				iVar5 = func_393(iVar4);
				if (iVar5 != 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_392(iParam0))
	{
		iVar6 = func_391(iParam0);
		if (iVar6 != func_96())
		{
			if (!func_390(iVar6))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_2F6[iVar6]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_2F6[iVar6], 0x00000000);
				}
				else
				{
					return Global_25033E[func_391(iParam0) /*421*/].f_136.f_10;
				}
			}
			else
			{
				iVar7 = func_393(iVar6);
				if (!iVar7 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_389(iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_26B66F.f_133))
		{
			return unk_0x68F4C0EC296D3901(Global_26B66F.f_133, 0x00000000);
		}
	}
	else if (func_388(iParam0) && !func_387(iParam0))
	{
		iVar8 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar8 != func_96())
		{
			if (func_386(iVar8))
			{
				iVar9 = func_382(iVar8);
				if (iVar9 != 0xFFFFFFFF)
				{
					return func_381(iVar9);
				}
			}
		}
	}
	else if (func_380(iParam0) && !func_379(iParam0))
	{
		iVar10 = Global_25033E[iParam0 /*421*/].f_136.f_8;
		if (iVar10 != func_96())
		{
			if (func_378(iVar10))
			{
				iVar11 = func_374(iVar10);
				if (iVar11 != 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_373(iParam0, 0x00000000))
	{
		iVar12 = func_372(iParam0);
		if (iVar12 != func_96())
		{
			if (!func_371(iVar12))
			{
				if (unk_0xC844350D5D58C99A(Global_2537E2.f_317[iVar12]))
				{
					return unk_0x68F4C0EC296D3901(Global_2537E2.f_317[iVar12], 0x00000000);
				}
				else
				{
					return Global_18D84D[func_372(iParam0) /*615*/].f_258;
				}
			}
			else
			{
				iVar13 = func_374(iVar12);
				if (!iVar13 == 0xFFFFFFFF)
				{
					return Global_199459.f_1E8[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_370(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_388(iParam0))
	{
		return func_381(Global_25033E[iParam0 /*421*/].f_136.f_5);
	}
	if (func_366(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_199459.f_1E8[Global_25033E[iParam0 /*421*/].f_136.f_5 /*3*/];
}

int func_366(int iParam0)
{
	if ((func_369(iParam0) || func_368(iParam0)) || func_367(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_367(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_368(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000010;
			}
		}
	}
	return 0x00000000;
}

int func_369(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

int func_370(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_371(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x00000004);
	}
	return 0x00000000;
}

int func_372(int iParam0)
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_373(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0x134B62B726CEC8E6(iVar0) == 0x897AFC65)
			{
				return 0x00000001;
			}
		}
	}
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_96())
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000C;
			}
		}
	}
	return 0x00000000;
}

int func_374(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		iVar0 = func_377(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_375(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_375(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_170(iVar0) == 0x0000000B)
		{
			if (func_376(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 0x00000001;
		
		case 0x00000067:
			return 0x00000002;
		
		case 0x00000068:
			return 0x00000003;
		
		case 0x00000069:
			return 0x00000004;
		
		case 0x0000006A:
			return 0x00000005;
		
		case 0x0000006B:
			return 0x00000006;
		
		case 0x0000006C:
			return 0x00000007;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000009;
		
		case 0x0000006F:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_377(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_119;
	}
	return 0x00000000;
}

int func_378(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_119 != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_379(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_380(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_380(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

Vector3 func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 0x00000067:
			return 331.9f, -974.9f, 30f;
		
		case 0x00000068:
			return -146f, -1270f, 28.3088f;
		
		case 0x00000069:
			return -17.7f, 225.7f, 106.7566f;
		
		case 0x0000006A:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 0x0000006B:
			return -668f, -2431.5f, 12.9444f;
		
		case 0x0000006C:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 0x0000006D:
			return 366.6f, 237.6f, 104.9f;
		
		case 0x0000006E:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 0x0000006F:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_199459.f_1E8[iParam0 /*3*/];
}

int func_382(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_96())
	{
		iVar0 = func_385(iParam0);
		if (iVar0 != 0x00000000)
		{
			return func_383(iVar0);
		}
	}
	return 0xFFFFFFFF;
}

int func_383(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_170(iVar0) == 0x0000000B)
		{
			if (func_384(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000066:
			return 0x00000001;
		
		case 0x00000067:
			return 0x00000002;
		
		case 0x00000068:
			return 0x00000003;
		
		case 0x00000069:
			return 0x00000004;
		
		case 0x0000006A:
			return 0x00000005;
		
		case 0x0000006B:
			return 0x00000006;
		
		case 0x0000006C:
			return 0x00000007;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000009;
		
		case 0x0000006F:
			return 0x0000000A;
		
		default:
	}
	return 0x00000000;
}

int func_385(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142;
	}
	return 0x00000000;
}

int func_386(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0x00000000;
	}
	return 0x00000000;
}

int func_387(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_388(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_388(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000B;
			}
		}
	}
	return 0x00000000;
}

int func_389(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000A;
			}
		}
	}
	return 0x00000000;
}

int func_390(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_2, 0x00000006);
	}
	return 0x00000000;
}

int func_391(int iParam0)
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_392(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_96())
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000008;
			}
		}
	}
	return 0x00000000;
}

int func_393(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_396(iParam0);
	if (!iVar0 == 0x00000000)
	{
		return func_394(iVar0);
	}
	return 0xFFFFFFFF;
}

int func_394(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_170(iVar0) == 0x00000009)
		{
			if (func_395(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000059:
			return 0x00000001;
			break;
		
		case 0x0000005A:
			return 0x00000002;
			break;
		
		case 0x0000005B:
			return 0x00000003;
			break;
		
		case 0x0000005C:
			return 0x00000004;
			break;
		
		case 0x0000005D:
			return 0x00000005;
			break;
		
		case 0x0000005E:
			return 0x00000006;
			break;
		
		case 0x0000005F:
			return 0x00000007;
			break;
		
		case 0x00000060:
			return 0x00000008;
			break;
		
		case 0x00000061:
			return 0x00000009;
			break;
	}
	return 0x00000000;
}

int func_396(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_10F;
}

int func_397(int iParam0)
{
	if (iParam0 != func_96())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0x00000000;
	}
	return 0x00000000;
}

int func_398()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_2, 0x0000000D) || Global_199459.f_BC7)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_399(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	if (func_400(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_400(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000009;
			}
		}
	}
	return 0x00000000;
}

int func_401(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	if (func_402(iParam0) && Global_25033E[iParam0 /*421*/].f_136.f_8 == iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_402(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000004;
			}
		}
	}
	return 0x00000000;
}

int func_403(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000006;
			}
		}
	}
	return 0x00000000;
}

int func_404(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_407(iParam0);
	if (!iVar0 == 0x00000000)
	{
		return func_405(iVar0);
	}
	return 0xFFFFFFFF;
}

int func_405(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000092)
	{
		if (func_406(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000003;
			break;
		
		case 0x00000019:
			return 0x00000004;
			break;
		
		case 0x0000001A:
			return 0x00000005;
			break;
		
		case 0x0000001B:
			return 0x00000006;
			break;
		
		case 0x0000001C:
			return 0x00000007;
			break;
		
		case 0x0000001D:
			return 0x00000008;
			break;
		
		case 0x0000001E:
			return 0x00000009;
			break;
		
		case 0x0000001F:
			return 0x0000000A;
			break;
		
		case 0x00000020:
			return 0x0000000B;
			break;
		
		case 0x00000021:
			return 0x0000000C;
			break;
		
		case 0x00000022:
			return 0x0000000D;
			break;
		
		case 0x00000023:
			return 0x0000000E;
			break;
		
		case 0x00000024:
			return 0x0000000F;
			break;
		
		case 0x00000025:
			return 0x00000010;
			break;
		
		case 0x00000026:
			return 0x00000011;
			break;
		
		case 0x00000027:
			return 0x00000012;
			break;
		
		case 0x00000028:
			return 0x00000013;
			break;
		
		case 0x00000029:
			return 0x00000014;
			break;
		
		case 0x00000046:
			return 0x00000015;
			break;
		
		case 0x00000047:
			return 0x00000016;
			break;
		
		case 0x00000048:
			return 0x00000017;
			break;
		
		case 0x00000049:
			return 0x00000018;
			break;
		
		case 0x0000004A:
			return 0x00000019;
			break;
		
		case 0x0000004B:
			return 0x0000001A;
			break;
		
		case 0x0000004C:
			return 0x0000001B;
			break;
		
		case 0x0000004D:
			return 0x0000001C;
			break;
		
		case 0x0000004E:
			return 0x0000001D;
			break;
		
		case 0x0000004F:
			return 0x0000001E;
			break;
		
		case 0x00000050:
			return 0x0000001F;
			break;
	}
	return 0x00000000;
}

int func_407(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[0x00000005 /*12*/];
}

int func_408(int iParam0)
{
	if (iParam0 != func_96())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000006);
	}
	return 0x00000000;
}

int func_409(int iParam0)
{
	if (iParam0 == func_96())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_410(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_96())
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000005;
			}
		}
	}
	return 0x00000000;
}

int func_411(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_13(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_412()
{
	if ((func_415() || func_414()) || func_413(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_413(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D38C[iParam0 /*38*/].f_1D, 0x00000014);
}

bool func_414()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C086, 0x00000001);
}

bool func_415()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

Vector3 func_416(int iParam0)
{
	int iVar0;
	
	switch (unk_0xDC7D2B8A563DB482(iParam0))
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			iVar0 = unk_0x63EC65B0F6B7C26F(iParam0);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				return unk_0x68F4C0EC296D3901(iVar0, 0x00000000);
			}
			break;
	}
	return unk_0xAC14F6E4B17D7835(iParam0);
}

bool func_417(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_418()
{
	if (func_308(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000002);
			return 0x00000001;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000002))
	{
		unk_0x0674E58A79778E99(&iLocal_84, 0x00000002);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_419(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_433() < 0x0000000A)
	{
		iVar0 = func_432();
		func_420(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_420(vector3 vParam0, var uParam1, int iParam2, var uParam3)
{
	func_421(vParam0, 0f, 0f, 0f, uParam1, 0x00000000, iParam2, uParam3);
}

void func_421(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_429(unk_0xD803B885F5E47A62()) || uParam5)
	{
		if (Var0.f_A == 0x00000001)
		{
			func_428(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_423(Var0))
		{
			Global_24B2D0.f_2D.f_40 = func_360(unk_0xD803B885F5E47A62());
			func_422(Var0, iParam4);
		}
	}
}

void func_422(struct<12> Param0, int iParam1)
{
	Global_24B2D0.f_16D[iParam1 /*12*/] = { Param0 };
	Global_24B2D0.f_16D[iParam1 /*12*/].f_9 = 0x00000001;
}

int func_423(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0x00000000 /*12*/] = { Param0 };
	Var0[0x00000000 /*12*/].f_9 = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (Global_24B2D0.f_2D[iVar1 /*12*/].f_9 == 0x00000001)
		{
			if (!func_424(Global_24B2D0.f_2D[iVar1 /*12*/], &Var0))
			{
				return 0x00000000;
			}
		}
		iVar1++;
	}
	return 0x00000001;
}

int func_424(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_A)
			{
				case 0x00000000:
					switch (vParam0.f_A)
					{
						case 0x00000000:
							if (func_427(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000001:
							if (func_425(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x00000001:
					switch (vParam0.f_A)
					{
						case 0x00000000:
							if (func_427(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000001:
							if (func_425(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0x00000000;
							}
							break;
						
						case 0x00000002:
							break;
					}
					break;
				
				case 0x00000002:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_425(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_426(vParam0, vParam1, vVar0, vVar1);
}

int func_426(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_427(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_428(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_429(int iParam0)
{
	if (((func_359(iParam0, 0x00000001) || func_431(iParam0)) || func_106(iParam0, 0x00000000)) || func_430(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_430(int iParam0)
{
	if (!func_13(iParam0, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

int func_432()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (!Global_24B2D0.f_16D[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_433()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (Global_24B2D0.f_16D[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_434()
{
	if (!func_153())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_149();
}

void func_435()
{
	Global_19824D = 0x00000001;
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0x00000000);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0x00000001))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0x00000001);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0x00000001);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0x00000005))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0x00000005);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0x00000005);
	}
	if (unk_0x76395FF5E8D5E643(0xEACBE1C2))
	{
		unk_0x1BA7FCEAFCE8D46E(0xEACBE1C2, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xDD5EF4CE))
	{
		unk_0x1BA7FCEAFCE8D46E(0xDD5EF4CE, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xAAFA1005))
	{
		unk_0x1BA7FCEAFCE8D46E(0xAAFA1005, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0x2C6E2BFC))
	{
		unk_0x1BA7FCEAFCE8D46E(0x2C6E2BFC, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xB232A0B6))
	{
		unk_0x1BA7FCEAFCE8D46E(0xB232A0B6, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xA405045B))
	{
		unk_0x1BA7FCEAFCE8D46E(0xA405045B, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0x76395FF5E8D5E643(0xCF9D5B8B))
	{
		unk_0x1BA7FCEAFCE8D46E(0xCF9D5B8B, 0x00000000, 0x00000000, 0x00000000);
	}
}

void func_436()
{
	char* sVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_84, 0x00000005) && !unk_0x0178C60FEA5C5A75())
	{
		if (Local_119.f_2C3)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_44(0x0000003F, sVar0, "CPC_START", func_58(), 0xFFFFFFFF, func_58(), 0x00000001, 0x00000000);
		unk_0x4A51D2E4732BD556();
		unk_0x5D96D8530B3D0904(&iLocal_84, 0x00000005);
	}
}

void func_437(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000001);
	if (iParam0 != 0x00000085)
	{
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000001);
	}
	Global_26B66F.f_136B = 0xFFFFFFFF;
	bVar0 = (func_106(unk_0xD803B885F5E47A62(), 0x00000000) && func_102(unk_0xD803B885F5E47A62()));
	if (bParam6)
	{
		func_454(func_455(iParam0), 0x00000001);
	}
	else
	{
		func_453(iParam0, 0xFFFFFFFF);
		if (func_7(unk_0xD803B885F5E47A62()))
		{
			Global_1806FA.f_3 = iParam0;
		}
		else
		{
			func_452(iParam0);
		}
		Global_1806FA.f_4 = 0xFFFFFFFF;
		if (func_7(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000005);
		}
		if (((func_336() && !func_348()) || func_347(unk_0xD803B885F5E47A62(), 0x00000015)) || func_347(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000004);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000014);
		if (func_451(iParam0))
		{
			func_450();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_447(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x51B096AAC60548C1(fParam2);
			if (iParam0 == 0x00000092)
			{
				unk_0x34D79252800B23FF(0x00000000);
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
		if (func_445(iParam0))
		{
			unk_0x34D79252800B23FF(0x00000000);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000008);
		}
		if (bParam3)
		{
			if (!Global_247C05)
			{
				func_443(0x00000001);
				if (func_281(0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
				}
				if (!bParam6)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
				}
			}
		}
		if (bParam4)
		{
			func_441(0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (bParam5)
		{
			func_440();
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
		}
		if (!bParam6)
		{
			if (func_438(iParam0))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
			}
		}
	}
	Global_2658D5 = 0x00000001;
}

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000081:
		case 0x00000083:
		case 0x0000008D:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x00000090:
		case 0x00000092:
		case 0x000000EC:
		case 0x00000096:
			return 0x00000001;
		
		default:
	}
	if (func_439())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_439()
{
	switch (func_297())
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_440()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1362), 0x00000000);
}

void func_441(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 0x00000001;
	}
	else
	{
		Global_181EC.f_8 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_442(iVar0);
		iVar0++;
	}
}

void func_442(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_443(int iParam0)
{
	if (func_444() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0x00000000;
	Global_247C08 = 0x00000000;
}

int func_444()
{
	if ((((Global_EC6CD != 0xFFFFFFFF && Global_EC6CD != 0x00000021) && Global_EC6CD != 0x00000023) && Global_EC6CD != 0x00000025) && Global_EC6CD != 0x00000015)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
		case 0x00000090:
		case 0x00000081:
			return 0x00000001;
		
		case 0x0000008D:
			if (func_446(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

void func_447(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_448())
	{
		return;
	}
	fVar0 = (Global_26B66F.f_13FF - fParam0);
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26B66F.f_13FF = fParam0;
	Global_26B66F.f_1400 = unk_0x0D0A574C76D769AC();
}

int func_448()
{
	switch (func_361())
	{
		case 0x00000000:
			return func_449();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_449()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_450()
{
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_C8 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11D1), 0x00000001);
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000088:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_452(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/] = iParam0;
}

void func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF || iParam1 != 0xFFFFFFFF)
	{
		iVar0 = iParam0;
		if (iVar0 == 0xFFFFFFFF)
		{
			iVar0 = iParam1;
		}
		if (func_517(0x00000000) || func_517(func_516(iVar0)))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000002);
		}
	}
}

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000086:
			return 0x00000015;
		
		case 0x000000FE:
			return 0x00000019;
		
		default:
	}
	return 0x00000000;
}

void func_456()
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	vector3 vVar10;
	float fVar11;
	
	if (func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if ((!func_294() && !func_473(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000)) && !func_472(unk_0xD803B885F5E47A62()))
		{
			fVar3 = 2.147484E+09f;
			iVar4 = 0xFFFFFFFF;
			vVar6 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			bVar7 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
			bVar8 = func_471();
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000A)
			{
				iVar9 = Local_119.f_2D9[iVar2 /*2*/].f_1;
				if (unk_0xE5DBF9B6126856CA(iVar9) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iVar9), 0x00000000))
				{
					if (!bVar8)
					{
						if (bVar7 && unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) == unk_0xB177666FAB6F4417(iVar9))
						{
							func_319(0x00000001);
						}
					}
					if (func_32(iVar2, &vVar0, &uVar1))
					{
						vVar10 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(iVar9), 0x00000001) };
						if (SYSTEM::VDIST(vVar10, vVar0) <= 10f)
						{
							if (func_470(vVar10))
							{
								unk_0x5D96D8530B3D0904(&uVar5, iVar2);
							}
							if (func_468(vVar10, vVar6))
							{
								if (!func_466(vVar0, 100f))
								{
									fVar11 = SYSTEM::VDIST(vVar10, vVar6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_7 = uVar5;
			if ((unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()) || (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))) || Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 > 0x00000000)
			{
				if ((fVar3 < 2.147484E+09f && iVar4 >= 0x00000000) && iVar4 < 0x0000000A)
				{
					if (func_32(iVar4, &vVar0, &uVar1))
					{
						iLocal_105 = 0x00000001;
						func_465(vVar0, 0f, 60f, 0x00000001, 20f, 0x00000000, 0x00000000, 10f, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xBF800000);
						func_464(vVar0, 0x00000001, 0x00000000);
						func_458(0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			else
			{
				func_457();
			}
		}
		else
		{
			func_457();
		}
	}
}

void func_457()
{
	if (iLocal_105)
	{
		func_161();
		func_159();
		iLocal_105 = 0x00000000;
	}
}

void func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_96())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0x00000000) && func_459())
		{
			iParam0 = 0x00000017;
		}
	}
	if (iParam0 != 0x00000012 && iParam0 != 0x00000011)
	{
		Global_24D062 = 0x00000000;
	}
	Global_24B2D0.f_1E7 = iParam0;
	Global_24B2D0.f_1E7.f_1 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_1E7.f_2 = iParam1;
	Global_24B2D0.f_1E7.f_3 = iParam2;
	Global_24B2D0.f_1E7.f_4 = iParam3;
	Global_24B2D0.f_1E7.f_5 = iParam4;
}

int func_459()
{
	if ((((((func_239(unk_0xD803B885F5E47A62()) == 0x000000E5 || func_239(unk_0xD803B885F5E47A62()) == 0x000000BF) || func_463()) || func_462()) || func_337(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 0x00000001) || (Global_24B2D0.f_6D1 && func_460(unk_0xD803B885F5E47A62())))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_460(int iParam0)
{
	if (func_461(iParam0))
	{
		return 0x00000001;
	}
	if (func_100(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_461(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000007);
	}
	return 0x00000000;
}

bool func_462()
{
	return Global_180605;
}

int func_463()
{
	if (Global_440000 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_464(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

void func_465(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 0x00000001;
	Var0.f_8 = 0x00000001;
	Var0.f_15 = 0x42820000;
	Var0.f_1B = 0xBF800000;
	if (unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		if (!Global_24D54B.f_6 == unk_0x0D0A574C76D769AC())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!unk_0x1727A44C562FBED2(Global_24D54B.f_6))
	{
		Global_24D54B.f_6 = unk_0x0D0A574C76D769AC();
	}
	Var0.f_6 = Global_24D54B.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_A = 0x00000000;
	Var0.f_B = { 0f, 0f, 0f };
	Var0.f_E = { 0f, 0f, 0f };
	Var0.f_11 = 0f;
	Var0.f_15 = fParam7;
	Var0.f_16 = iParam8;
	if (func_429(unk_0xD803B885F5E47A62()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_17 = 0x00000001;
		}
		else
		{
			Var0.f_17 = 0x00000000;
		}
	}
	else
	{
		Var0.f_17 = 0x00000000;
	}
	if (Var0.f_15 < 1f)
	{
		Var0.f_15 = 1f;
	}
	Var0.f_18 = iParam9;
	Var0.f_1A = iParam10;
	Var0.f_1B = iParam12;
	Global_24D54B = { Var0 };
}

bool func_466(vector3 vParam0, float fParam1)
{
	return func_467(vParam0, fParam1, unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
}

int func_467(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (!iParam2 == iVar0 || iParam3 == 0x00000001)
		{
			iVar1 = iVar0;
			bVar2 = 0x00000000;
			if (bParam4)
			{
				if (func_13(iVar1, 0x00000000, 0x00000001) && func_13(iParam2, 0x00000000, 0x00000001))
				{
					if (unk_0x08067D4957B73C02(iVar1) == unk_0x08067D4957B73C02(iParam2))
					{
						bVar2 = 0x00000001;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(iVar1, 0x00000000, 0x00000001) && func_13(iParam2, 0x00000000, 0x00000001))
				{
					if (Global_24E4E9.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E4E9.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 0x00000001;
						}
					}
					else if (SYSTEM::VDIST(func_31(iVar1), vParam0) < 1f)
					{
						return 0x00000001;
					}
				}
				else if (Global_24E4E9.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E4E9.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 0x00000001;
					}
				}
				else if (func_13(iVar1, 0x00000000, 0x00000001))
				{
					if (SYSTEM::VDIST(func_31(iVar1), vParam0) < 1f)
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

int func_468(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	if (Local_119.f_8 == 0x00000003)
	{
		vVar0 = { func_469(Local_119.f_2C8) };
		if (SYSTEM::VDIST(vParam1, vVar0) < 3500f)
		{
			if (SYSTEM::VDIST(vParam0, vVar0) > 3500f)
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000001;
}

Vector3 func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 0x00000001:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 0x00000002:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 0x00000003:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_470(vector3 vParam0)
{
	vector3 vVar0;
	
	if (Local_119.f_8 == 0x00000003)
	{
		vVar0 = { func_469(Local_119.f_2C8) };
		if (SYSTEM::VDIST(vParam0, vVar0) > 2500f)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_471()
{
	if ((((((func_461(unk_0xD803B885F5E47A62()) || func_336()) || func_348()) || func_347(unk_0xD803B885F5E47A62(), 0x00000015)) || func_347(unk_0xD803B885F5E47A62(), 0x00000019)) || func_7(unk_0xD803B885F5E47A62())) || func_6(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_472(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000E))
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_473(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
		if (func_477(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam3)
	{
		if (func_169(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam4)
	{
		if (func_476(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam5)
	{
		if (func_402(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam6)
	{
		if (func_475(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam7)
	{
		if (func_400(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam8)
	{
		if (func_392(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam9)
	{
		if (func_388(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam10)
	{
		if (func_380(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam11)
	{
		if (func_373(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (!bParam12)
	{
		if (func_370(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam13)
	{
		if (func_369(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam14)
	{
		if (func_367(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam15)
	{
		if (func_368(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam16)
	{
		if (func_474(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_474(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000011;
			}
		}
	}
	return 0x00000000;
}

int func_475(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000007;
			}
		}
	}
	return 0x00000000;
}

int func_476(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_477(int iParam0)
{
	if (iParam0 != func_96())
	{
		if (func_13(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_170(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x00000000;
			}
		}
	}
	return 0x00000000;
}

void func_478(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_293(0x00000000) == 0x00000000)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_236(sParam1))
	{
		sVar0 = sParam1;
	}
	func_141(uParam0, sVar0, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
}

char* func_479(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	return "HUD_STARTING";
	if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return "AST_CHALL_LJ";
			
			case 0x00000001:
				return "AST_CHALL_LS";
			
			case 0x00000002:
				return "AST_CHALL_HS";
			
			case 0x00000003:
				return "AST_CHALL_LST";
			
			case 0x00000004:
				return "AST_CHALL_LW";
			
			case 0x00000005:
				return "AST_CHALL_NC";
			
			case 0x00000006:
				return "AST_CHALL_LP";
			
			case 0x00000007:
				return "AST_CHALL_VS";
			
			case 0x00000008:
				return "AST_CHALL_NM";
			
			case 0x00000009:
				return "AST_CHALL_RD";
			
			case 0x0000000A:
				return "AST_CHALL_LF";
			
			case 0x0000000B:
				return "AST_CHALL_LFL";
			
			case 0x0000000C:
				return "AST_CHALL_LFI";
			
			case 0x0000000D:
				return "AST_CHALL_LB";
			
			case 0x0000000E:
				return "AST_CHALL_MB";
			
			case 0x0000000F:
				return "AST_CHALL_HSH";
			
			case 0x00000010:
				return "AST_CHALL_DB";
			
			case 0x00000011:
				return "AST_CHALL_ML";
			
			case 0x00000012:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_480(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_481(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		Global_26B66F.f_1361 = 0x00000000;
	}
	else if (iParam0 < 0x00001770)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 0x00000001))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0x00000000);
			Global_26B66F.f_1361 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 0x00000001);
		}
	}
}

int func_482(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_483(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (func_34())
	{
		if (func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				if (((!bParam0 && unk_0xE5DBF9B6126856CA(Local_119.f_2D9[iVar0 /*2*/].f_1)) && unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(Local_119.f_2D9[iVar0 /*2*/].f_1), 0x00000000)) && unk_0xBBA8A868118C90ED(unk_0xB177666FAB6F4417(Local_119.f_2D9[iVar0 /*2*/].f_1), 0xFFFFFFFF, 0x00000000))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_113[iVar0]))
					{
						iLocal_113[iVar0] = unk_0x5C3B41825F6AC5A0(unk_0xA5FBBC2F619A4DE2(Local_119.f_2D9[iVar0 /*2*/].f_1));
						unk_0x2A065371C9D96655(iLocal_113[iVar0], 0x00000009);
						unk_0xDC5B2F9D0CCE3A10(iLocal_113[iVar0], "AMCH_AC");
						unk_0xBC8E0A7390523199(iLocal_113[iVar0], func_484(iVar0));
						func_354(&(iLocal_113[iVar0]), 0x00000009);
					}
					else
					{
						vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						if (SYSTEM::VDIST(vVar1, unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_119.f_2D9[iVar0 /*2*/].f_1), 0x00000001)) <= 150f)
						{
							unk_0xF2D30B8ACAF12A39(iLocal_113[iVar0], 0x00000001);
						}
						else
						{
							unk_0xF2D30B8ACAF12A39(iLocal_113[iVar0], 0x00000000);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_113[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(iLocal_113[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_484(int iParam0)
{
	switch (Local_119.f_2D9[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 0x00000040;
		
		case joaat("mammatus"):
			return 0x000001A7;
		
		default:
	}
	return 0xFFFFFFFF;
}

void func_485(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!unk_0x0178C60FEA5C5A75())
	{
		switch (iParam0)
		{
			case 0x00000000:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (!unk_0x798A3F1296751F46())
					{
						func_488("CPC_PASSIVE", 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000001:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (!unk_0x798A3F1296751F46())
					{
						func_488("CPC_NOAIR", 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000002:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if ((!unk_0x798A3F1296751F46() && !unk_0xFEBC1E4EC9E001F0()) && func_34())
					{
						func_488("AMCH_AIRAV", 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000003:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (!unk_0x798A3F1296751F46())
					{
						func_488("AMCH_BLOW", 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000004:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (!unk_0x798A3F1296751F46() && !func_487(0x0000003F))
					{
						if (Local_119.f_2C3)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_488(sVar0, 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000005:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (((!unk_0x798A3F1296751F46() && !func_487(0x0000003F)) && !unk_0xFEBC1E4EC9E001F0()) && unk_0xEAE0D21A50E6C7F4(iLocal_103, 0x00000004))
					{
						if (Local_119.f_2C3)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_488(sVar1, 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000006:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (((!unk_0x798A3F1296751F46() && !func_487(0x0000003F)) && !unk_0xFEBC1E4EC9E001F0()) && unk_0xEAE0D21A50E6C7F4(iLocal_103, 0x00000005))
					{
						if (Local_119.f_2C3)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_486(sVar2, func_156(), 0x00007530);
						func_165(0x00000001);
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			
			case 0x00000007:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iParam0))
				{
					if (!unk_0x798A3F1296751F46())
					{
						func_488("CPC_PASSIV1", 0x00007530);
						func_165(0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_103, iParam0);
					}
				}
				break;
			}
	}
}

void func_486(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam2);
}

bool func_487(int iParam0)
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 == iParam0;
}

void func_488(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_489(int iParam0)
{
	Local_1486[unk_0x57270EE11514DC67() /*5*/].f_3 = iParam0;
}

void func_490(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x00000004);
	}
}

int func_491(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_515(unk_0xD803B885F5E47A62(), 0x0000001D))
	{
		return 0x00000000;
	}
	if (func_347(unk_0xD803B885F5E47A62(), 0x00000015))
	{
		return 0x00000000;
	}
	if (func_347(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		return 0x00000000;
	}
	if (unk_0x09BE1E6DF7B80B43())
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0x00000000;
		}
	}
	if (func_330(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_514())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		if (func_513(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (func_512())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (func_100(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	else if (func_505(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_504(unk_0xD803B885F5E47A62()) != func_96() && func_504(unk_0xD803B885F5E47A62()) == func_80(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_503(func_189()) && !func_326(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_502())
	{
		return 0x00000000;
	}
	if (func_294())
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	if (func_332(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!func_500())
	{
		return 0x00000000;
	}
	if (func_347(unk_0xD803B885F5E47A62(), 0x00000000) || func_347(unk_0xD803B885F5E47A62(), 0x00000003))
	{
		return 0x00000000;
	}
	if ((func_347(unk_0xD803B885F5E47A62(), 0x0000000C) || func_347(unk_0xD803B885F5E47A62(), 0x0000000E)) || func_347(unk_0xD803B885F5E47A62(), 0x0000000D))
	{
		return 0x00000000;
	}
	if (func_499(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		if (!func_415() && !Global_265A4F)
		{
			return 0x00000000;
		}
	}
	if (func_498(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_497())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (func_430(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_496())
	{
		return 0x00000000;
	}
	if (func_494(unk_0xD803B885F5E47A62()) && Global_1843A8.f_AB)
	{
		return 0x00000000;
	}
	if (func_493())
	{
		return 0x00000000;
	}
	if (func_337(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (Global_26B2C2)
	{
		return 0x00000000;
	}
	if (Global_19D9BB)
	{
		return 0x00000000;
	}
	if (!func_461(unk_0xD803B885F5E47A62()))
	{
		if (func_492(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_492(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0x00000000;
	}
	return 0x00000000;
}

bool func_493()
{
	return Global_199459.f_1DA;
}

int func_494(int iParam0)
{
	if (func_495(Global_184507[iParam0 /*876*/].f_112.f_1C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_496()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_497()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_498(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000000B);
}

int func_499(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000000))
	{
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_500()
{
	if (func_501() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_501()
{
	return Global_1406D3.f_12;
}

bool func_502()
{
	return Global_14086D;
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x0000005A:
		case 0x0000006E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_504(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_505(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0x00000002;
	bVar1 = ((func_431(iParam0) && !func_7(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000008));
	bVar2 = func_100(iParam0);
	uVar3 = func_336();
	uVar4 = func_506();
	if ((bVar1 && (func_461(iParam0) || func_446(iParam0))) || uVar4)
	{
		iVar0 = 0x00000000;
	}
	else if (uVar3 || ((!bVar2 && !func_102(iParam0)) && !func_171(iParam0)))
	{
		iVar0 = 0x00000002;
	}
	else
	{
		iVar0 = 0x00000003;
	}
	if (Global_26B66F.f_1404.f_D8 != iVar0)
	{
		Global_26B66F.f_1404.f_D8 = iVar0;
	}
	return iVar0;
}

int func_506()
{
	if ((func_101(unk_0xD803B885F5E47A62(), 0x00000015) || func_101(unk_0xD803B885F5E47A62(), 0x00000016)) || func_510())
	{
		return 0x00000001;
	}
	if (func_508())
	{
		func_507(0x00000016);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_507(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_508()
{
	if (func_106(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (((func_336() && !func_348()) || func_347(unk_0xD803B885F5E47A62(), 0x00000015)) || func_347(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		else
		{
			func_509(0x0000001B);
		}
	}
	return 0x00000000;
}

void func_509(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_510()
{
	return func_511(0x00000166, 0xFFFFFFFF);
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_223(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

bool func_512()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

int func_513(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0x00000000 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_514()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x00000000);
}

bool func_515(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
			return 0x0000000A;
		
		case 0x00000084:
			return 0x00000001;
		
		case 0x00000085:
			return 0x00000002;
		
		case 0x00000088:
			return 0x0000000B;
		
		case 0x0000008A:
			return 0x00000005;
		
		case 0x0000008B:
			return 0x00000006;
		
		case 0x00000081:
			return 0x00000008;
		
		case 0x0000008C:
			return 0x00000004;
		
		case 0x0000008D:
			return 0x00000009;
		
		case 0x00000090:
			return 0x00000003;
		
		case 0x00000092:
			return 0x00000007;
		
		case 0x000000EC:
			return 0x0000000C;
		
		case 0x00000096:
			return 0x0000000C;
		
		default:
	}
	return Global_40001.f_5C52;
}

bool func_517(int iParam0)
{
	int iVar0;
	
	iVar0 = func_227(0x000009B0, 0xFFFFFFFF, 0x00000000);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_518()
{
	if (Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 != 0x00000000)
	{
		Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4 = 0x00000000;
	}
}

bool func_519(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		if (((func_336() && !func_348()) || func_347(unk_0xD803B885F5E47A62(), 0x00000015)) || func_347(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			return 0x00000001;
		}
		if (func_38(&(Global_1806FA.f_D)))
		{
			if (!func_1(&(Global_1806FA.f_D), Global_40001.f_E, 0x00000000))
			{
				return 0x00000001;
			}
			func_37(&(Global_1806FA.f_D));
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A))
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009);
}

bool func_520(int iParam0)
{
	return func_94(iParam0, 0x00000000);
}

void func_521()
{
	func_522(&(Local_140.f_216), &Local_140, 0x0000001B, &(Local_140.f_1), &(Local_140.f_75), 0xFFFFFFFF, 0x00000000, 0x00000000);
}

void func_522(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_636(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar14 = 0x00000000;
	iVar15 = 0x00000000;
	uParam3->f_24 = 0x00000000;
	if (func_634() || iParam2 == 0x0000001C)
	{
		if (func_589(iParam1, iParam2, uParam3, Global_180529, 0x00000000, func_637(), sParam7))
		{
			func_588(0x00000001);
			if ((!func_587() && !func_586()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
			{
				if (func_585())
				{
					func_584();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
					if (uParam3->f_1B == 0x00000000)
					{
						func_583(0x00000001);
						Global_180529 = 0x00000000;
						iVar19 = 0xFFFFFFFF;
						if (Global_180606 != 0x00000001)
						{
							func_582(iParam1, 0x00000000, 0x00000000);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
							}
						}
						if (iParam2 == 0x0000001C)
						{
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								iVar1[iVar17] = 0xFFFFFFFF;
								iVar17++;
							}
							iVar17 = 0x00000000;
							while (iVar17 < 0x00000020)
							{
								if (func_13(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_94(iVar3, 0x00000000))
									{
										if ((func_581(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 0xFFFFFFFF) || func_580(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_577(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_103(unk_0xD803B885F5E47A62(), 0x00000000) && func_239(unk_0xD803B885F5E47A62()) != 0x000000BC)
						{
							bVar2 = iVar0 > 0x00000000;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							if (func_576())
							{
								if (func_13(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_96();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_575(iVar3) && func_572(iVar3, iParam2)) && func_13(iVar3, 0x00000000, 0x00000001))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_567(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_135(iVar3) };
								iVar5 = func_561(iVar3);
								sVar4 = "";
								if (iVar5 != 0x00000000)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 0xFFFFFFFF)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 0xFFFFFFFF || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 0xFFFFFFFF)
								{
									if (!func_576())
									{
										iVar15 = 0x00000001;
									}
								}
								if (iParam5 != 0xFFFFFFFF)
								{
									func_556(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_555(iParam5, 0x00000001, 0x00000000, 0x00000000), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 0xFFFFFFFE;
									}
								}
								iVar16 = func_554(iVar3, 0x00000000);
								if (bVar2)
								{
									if (func_81(iVar3, 0x00000001) && iVar1[iVar9] != 0xFFFFFFFF)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 0xFFFFFFFF)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_553(iParam5))
								{
									func_552(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_552(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0x00000000;
						while (iVar17 < 0x00000020)
						{
							iVar3 = unk_0x117658E336116132(iVar17);
							if (func_13(iVar3, 0x00000000, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_96();
							}
							if (func_575(iVar3))
							{
								if (func_13(unk_0x117658E336116132(iVar17), 0x00000000, 0x00000001))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_567(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_135(iVar3) };
									iVar5 = func_561(iVar3);
									sVar4 = "";
									if (iVar5 != 0x00000000)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_554(iVar3, 0x00000001);
									if (bVar2)
									{
										if (func_81(iVar3, 0x00000001))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_535(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							func_532(uParam3, iParam1, iParam2);
						}
						func_37(&(uParam3->f_15));
						func_531();
						uParam3->f_1B = 0x00000002;
					}
					if (uParam3->f_1B == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
						{
							func_530(uParam3, iParam1);
							func_529(iParam1, 0x00000000, 0x00000001);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x00000007);
						}
						func_530(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000B))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 0x0000000B);
						}
						if (func_525(uParam3))
						{
							Global_180606 = 0x00000001;
						}
						func_523(uParam3);
						if (Global_180606 == 0x00000001)
						{
							uParam3->f_1B = 0x00000000;
						}
						if (Global_180606 == 0x00000002)
						{
							uParam3->f_1B = 0x00000000;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(0x00000007);
						unk_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
						unk_0xD9ACBBA59FD5A09E(0x00000004);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0x00000000;
			func_531();
			func_583(0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000007))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x00000007);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x0000000A))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 0x0000000A);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_523(var uParam0)
{
	if (!func_38(&(uParam0->f_15)))
	{
		func_2(&(uParam0->f_15), 0x00000000, 0x00000000);
	}
	else if (func_1(&(uParam0->f_15), 0x000000FA, 0x00000000))
	{
		func_37(&(uParam0->f_15));
		func_524(0x00000000);
	}
}

void func_524(bool bParam0)
{
	if (bParam0)
	{
		if (Global_180606 != 0x00000002)
		{
			Global_180606 = 0x00000002;
		}
	}
	else
	{
		switch (Global_180606)
		{
			case 0x00000000:
				Global_180606 = 0x00000001;
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000002:
				break;
			}
	}
}

int func_525(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0x00000000;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_96() && func_13(iVar3, 0x00000000, 0x00000001))
	{
		Var2 = { func_135(iVar3) };
		iVar1 = func_528(uParam0, uParam0->f_25);
		if (func_527(Var2))
		{
			switch (iVar1)
			{
				case 0x00000000:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_526(uParam0, iVar0, 0x00000002);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_526(uParam0, iVar0, 0x00000001);
					}
					break;
				
				case 0x00000002:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 0x00000001;
							func_526(uParam0, iVar0, 0x00000000);
						}
					}
					else
					{
						iVar4 = 0x00000001;
						func_526(uParam0, iVar0, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 0x00000001;
							func_526(uParam0, iVar0, 0x00000000);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 0x00000001;
						func_526(uParam0, iVar0, 0x00000000);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 0x00000020)
	{
		uParam0->f_25 = 0x00000000;
	}
	return iVar4;
}

void func_526(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_527(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

var func_528(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_529(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 0x00000001)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_530(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x0000000A))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 0x0000000A);
	}
}

void func_531()
{
	if (Global_180606 != 0x00000000)
	{
		Global_180606 = 0x00000000;
	}
}

void func_532(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_96())
		{
			if (func_13(iVar2, 0x00000000, 0x00000001))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 0xFFFFFFFF)
				{
					iVar1 = func_534(uParam0->f_26[iVar0 /*2*/], 0x00000000, iParam2);
					func_533(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_533(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 0x00000041)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_534(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000041;
	switch (iParam2)
	{
		case 0x00000015:
			iVar0 = 0x00000000;
			break;
	}
	if (bParam1)
	{
		iVar0 = 0x00000074;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 0x0000002F;
		
		case 0x00000001:
			return 0x00000031;
		
		default:
	}
	return iVar0;
}

void func_535(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_551() && iParam4 < func_550())
	{
		iParam4 = (iParam4 % 0x00000010);
		iVar0 = iParam4 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 0x00000008) || uParam3->f_6C == 0x00000006)
			{
				func_549("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_549(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 0x00000006)
			{
				func_549("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000041);
			}
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			func_549("");
			if (uParam3->f_6C == 0x00000006)
			{
				func_549("");
			}
			else
			{
				func_549(&sParam5);
			}
			func_540(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_539(uParam3))
			{
				func_538("DPAD_FRIEND");
			}
			else if (func_537(uParam3))
			{
				func_538("DPAD_FRIEND");
			}
			else if (func_536(uParam3))
			{
				func_538("DPAD_CREW");
			}
			else
			{
				func_538("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_536(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000006);
}

bool func_537(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 0x00000005);
}

void func_538(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_539(var uParam0)
{
	if (func_537(uParam0) && func_536(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_540(var uParam0, int iParam1)
{
	if (func_548(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x00000079);
	}
	else if (func_544(iParam1))
	{
		unk_0x3CAEA85DA607305E(0x0000007A);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 0x0000000F) && iParam1 > 0xFFFFFFFF) && iParam1 < 0x00000020) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0x00000000))
	{
		unk_0x3CAEA85DA607305E(0x0000007B);
	}
	else
	{
		if (func_541())
		{
			uParam0->f_24 = 0x00000000;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_541()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_542() || func_86())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_542()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_86();
	}
	return func_543(Global_440000.f_2F9AE);
}

int func_543(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_40001.f_137E[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_544(int iParam0)
{
	if ((func_13(iParam0, 0x00000000, 0x00000001) && func_545()) && func_183(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_545()
{
	if (func_431(unk_0xD803B885F5E47A62()) || func_547())
	{
		if (!func_546(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_546(int iParam0)
{
	if (func_298(iParam0) == 0x000000EC || func_298(iParam0) == 0x00000096)
	{
		return func_461(iParam0);
	}
	return 0x00000000;
}

int func_547()
{
	switch (func_239(unk_0xD803B885F5E47A62()))
	{
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C7:
		case 0x000000CD:
		case 0x000000D2:
		case 0x000000BC:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_548(int iParam0)
{
	if (func_541())
	{
		if (func_13(iParam0, 0x00000000, 0x00000001))
		{
			return func_82(iParam0);
		}
	}
	if ((func_13(iParam0, 0x00000000, 0x00000001) && func_545()) && func_185(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_549(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_550()
{
	int iVar0;
	
	if (Global_18052B)
	{
		iVar0 = 0x00000020;
	}
	else
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

int func_551()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_18052B)
	{
		iVar0 = 0x00000010;
	}
	return iVar0;
}

void func_552(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_551() && iParam3 < func_550())
	{
		iParam3 = (iParam3 % 0x00000010);
		iVar0 = iParam3 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 0xFFFFFFFE)
			{
				iParam10 = 0xFFFFFFFF;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 0x00000001)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000008) || uParam2->f_6C == 0x00000006)
				{
					func_549("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_538(sParam16);
				}
				else
				{
					func_549(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 0x00000006)
				{
					func_549("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000041);
				}
				if (iParam12 == 0x00000001)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0xFFFFFFFF);
				}
				if (func_576())
				{
					func_549("");
				}
				else if (uParam2->f_6C == 0x00000006 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000005 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000007 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000008 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 0x00000001);
					}
					if (iParam10 != 0xFFFFFFFF)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_68));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x00000009)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 0x0000000A)
				{
					if (iParam10 == 0x00000000)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 0x00000001);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > 0xFFFFFFFF)
				{
					if (iParam15 == 0x00000000 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
					{
						func_538(&(uParam2->f_68));
					}
					else
					{
						func_549("");
					}
				}
				else if (iParam14 != 0xFFFFFFFF)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 0x00000006);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 0x00000001);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != 0xFFFFFFFF)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_549("");
				}
				if (uParam2->f_6C == 0x00000006)
				{
					func_549("");
				}
				else
				{
					func_549(&sParam4);
				}
				func_540(uParam2, iParam0);
				if (iParam12 == 0x00000001 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_549("");
					func_549("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_539(uParam2))
				{
					func_538("DPAD_FRIEND");
				}
				else if (func_537(uParam2))
				{
					func_538("DPAD_FRIEND");
				}
				else if (func_536(uParam2))
				{
					func_538("DPAD_CREW");
				}
				else
				{
					func_538("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_553(int iParam0)
{
	return 0x00000000;
	switch (iParam0)
	{
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_554(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000074;
	if ((!bParam1 && func_431(iParam0)) && !func_100(iParam0))
	{
		iVar0 = func_58();
	}
	iVar1 = func_79(iParam0);
	if (!iVar1 == 0xFFFFFFFF)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

char* func_555(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 0x00000007:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 0x00000001)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_556(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_560(iParam3))
	{
		*fParam1 = (func_557(iParam3, iParam2) / 10f);
		return 0x00000001;
	}
	if (func_553(iParam3))
	{
		*fParam1 = (func_557(iParam3, iParam2) / 1000f);
		return 0x00000001;
	}
	*uParam0 = iParam2;
	return 0x00000000;
}

float func_557(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_559(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 0x00000002:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_558(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_558(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_559(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
		case 0x00000001:
		case 0x00000006:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_561(int iParam0)
{
	int iVar0;
	
	iVar0 = func_564(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_562(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_562(int iParam0, bool bParam1)
{
	if (!func_13(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_564(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_563(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_563(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_564(int iParam0)
{
	int iVar0;
	
	if (!func_13(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_565(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_565(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_566(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_566(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_96();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_567(int iParam0)
{
	char cVar0[32];
	
	if (func_13(iParam0, 0x00000000, 0x00000001))
	{
		Global_265942 = { func_135(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_527(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			return cVar0;
		}
		if (func_571(&Global_265942))
		{
			Global_2658FC = { func_569(iParam0) };
			func_568(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_568(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 0x00000023, sParam1);
}

struct<35> func_569(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_570(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_135(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 0x00000023, &Var0);
	return Var1;
}

int func_570(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_571(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_572(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000001B)
	{
		if ((func_7(iParam0) || func_574(iParam0)) || func_6(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_573(iParam0))
	{
		return 0x00000000;
	}
	if ((!func_581(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 0xFFFFFFFF) && !func_580(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_573(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000016);
}

int func_574(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000009));
	}
	return 0x00000000;
}

int func_575(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	if (func_94(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_8E, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_576()
{
	switch (func_239(unk_0xD803B885F5E47A62()))
	{
		case 0x000000B3:
		case 0x000000B4:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B8:
		case 0x000000B9:
		case 0x000000BA:
		case 0x000000BD:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C3:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000C8:
		case 0x000000C9:
		case 0x000000CA:
		case 0x000000CB:
		case 0x000000CC:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
			return 0x00000001;
		
		default:
	}
	switch (func_298(unk_0xD803B885F5E47A62()))
	{
		case 0x00000083:
		case 0x0000008C:
		case 0x0000008A:
		case 0x00000092:
			return 0x00000001;
			break;
	}
	if (func_100(unk_0xD803B885F5E47A62()))
	{
		switch (func_239(unk_0xD803B885F5E47A62()))
		{
			case 0x00000094:
			case 0x00000097:
			case 0x00000098:
			case 0x00000099:
			case 0x0000009D:
			case 0x0000009F:
			case 0x000000A2:
			case 0x000000A4:
			case 0x0000008E:
				return 0x00000001;
				break;
			}
	}
	if (func_546(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_577(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (func_13(unk_0x117658E336116132(iVar0), 0x00000000, 0x00000001))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_94(iVar1, 0x00000000))
			{
				if ((func_581(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 0xFFFFFFFF) || func_580(iVar1))
				{
					if (func_578(iVar1, iParam1, 0x00000000))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_578(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_96())
	{
		if (!bParam2)
		{
			if (func_579(iParam0, iParam1))
			{
				return 0x00000000;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_96())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0x00000000;
}

int func_579(int iParam0, int iParam1)
{
	if (iParam1 != func_96())
	{
		if (iParam0 != func_96())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_96())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_580(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

int func_581(int iParam0)
{
	if (func_13(iParam0, 0x00000000, 0x00000001))
	{
		if (func_13(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000001))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_239(iParam0) == 0x000000E9)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_582(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_583(bool bParam0)
{
	if (bParam0)
	{
		if (Global_15038F.f_2 == 0x00000000)
		{
			Global_15038F.f_2 = 0x00000001;
		}
	}
	else if (Global_15038F.f_2 == 0x00000001)
	{
		Global_15038F.f_2 = 0x00000000;
	}
}

void func_584()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001))
	{
		if (func_172())
		{
			func_188();
		}
	}
}

int func_585()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000000) && func_172())
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0x00000001) && func_172())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_586()
{
	if (func_172())
	{
		if (func_46(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_587()
{
	if (func_172())
	{
		if (func_59(Global_2537E2.f_AA3[0x00000000 /*80*/].f_1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_588(int iParam0)
{
	if (Global_15038F.f_1 != Global_15038F)
	{
		Global_15038F.f_1 = Global_15038F;
	}
	if (Global_15038F != iParam0)
	{
		Global_15038F = iParam0;
	}
}

int func_589(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 0x00000014;
	bVar3 = func_633(iParam1);
	fVar4 = func_632();
	iVar5 = 0xFFFFFFFF;
	if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
	{
		if (func_631())
		{
			if (func_630() > 0x00000000 && Global_18052B)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar4);
				unk_0x3584F71E5CA29322(0x00000012);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(0x0000000A);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_619())
		{
			func_618(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
	{
		func_618(iParam0, uParam2, 0x00000001);
		return 0x00000000;
	}
	if (!func_38(&(uParam2->f_13)))
	{
		if (func_630() == 0x00000001)
		{
			func_617(bVar3, iParam0, 0x00000000);
			func_2(&(uParam2->f_13), 0x00000000, 0x00000000);
			func_618(iParam0, uParam2, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (func_38(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(0x0000000A);
		if (func_1(&(uParam2->f_13), 0x00002710, 0x00000000) || (func_630() == 0x00000000 && !bParam5))
		{
			func_618(iParam0, uParam2, 0x00000001);
			return 0x00000000;
		}
		else
		{
			if (bVar2 == 0x00000000)
			{
				func_616();
				if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(0x00000012);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				if (bVar2 == 0x00000000)
				{
					func_616();
					if (iParam1 == 0x0000001B || iParam1 == 0x0000001C)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(0x00000012);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_617(bVar3, iParam0, 0x00000000))
				{
					func_582(iParam0, 0x00000000, 0x00000000);
					sVar1 = func_614(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_612(iParam1) };
					if (bParam4)
					{
						func_609(iParam0, sVar1, "", 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
					}
					else if (iParam1 == 0x0000001B)
					{
						func_603(iParam0, func_606(uParam2), func_604(uParam2), 0xFFFFFFFF);
					}
					else if (iParam1 == 0x0000001C)
					{
						sVar6 = func_597(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_595(iParam0, sVar6, func_596(), 0xFFFFFFFF);
					}
					else if (func_541())
					{
						uParam2->f_22 = Global_18052A;
						func_609(iParam0, sVar1, &Var0, 0x00000001, 0xFFFFFFFF, Global_18052A, 0x00000001);
					}
					else if (bVar2)
					{
						iVar5 = func_590(iParam1);
						uParam2->f_22 = Global_18052A;
						func_609(iParam0, sVar1, "", 0x00000000, iVar5, Global_18052A, 0x00000001);
					}
					else
					{
						iVar5 = func_590(iParam1);
						func_609(iParam0, sVar1, &Var0, 0x00000001, iVar5, 0xFFFFFFFF, 0x00000001);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_21), 0x00000000);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0x00000000))
			{
				Global_180529 = uParam3;
				Global_180528 = 0x00000001;
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_18052A)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_21), 0x00000000);
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_590(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	if (func_594())
	{
		iVar0 = 0x00000002;
	}
	switch (iParam0)
	{
		case 0x00000028:
			iVar0 = 0x00000016;
			break;
		
		case 0x00000000:
		case 0x0000001F:
		case 0x0000001E:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000006;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000005;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000015;
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000011;
			break;
		
		case 0x00000010:
			iVar0 = 0x00000012;
			break;
		
		case 0x00000012:
			if (func_593(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000014;
			}
			if (func_592(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 0x00000013;
			}
			break;
	}
	if (func_591(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000002;
	}
	if (func_240())
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

bool func_591(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000004;
}

bool func_592(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_593(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

bool func_594()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_595(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_538(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_538("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_596()
{
	switch (func_239(unk_0xD803B885F5E47A62()))
	{
		case 0x000000A3:
			return "BD_SORT_1";
			break;
		
		case 0x000000A0:
			return "BD_SORT_4";
			break;
		
		case 0x0000009A:
			return "BD_SORT_3";
			break;
		
		case 0x0000009B:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_597(var uParam0)
{
	switch (uParam0->f_70)
	{
		case 0x00000000:
			return "GR_DPD_E";
			break;
		
		case 0x00000001:
			return "GR_DPD_F";
			break;
		
		case 0x00000002:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0x00000000:
			return "GR_DPD_A";
			break;
		
		case 0x00000001:
			return "GR_DPD_B";
			break;
		
		case 0x00000002:
			return "GR_DPD_C";
			break;
		
		case 0x00000003:
			return "GR_DPD_D";
			break;
	}
	switch (func_239(unk_0xD803B885F5E47A62()))
	{
		case 0x000000E9:
			return "H2_DPAD_SET";
			break;
		
		case 0x000000B4:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 0x000000B6:
			return "DEAL_DEALN";
			break;
		
		case 0x000000C2:
			return "PI_BIK_13_0";
			break;
		
		case 0x000000BD:
			return "PI_BIK_4_1";
			break;
		
		case 0x000000C1:
			return "PI_BIK_13_1";
			break;
		
		case 0x000000CD:
			return "PI_BIK_13_3";
			break;
		
		case 0x000000BA:
			return "CELL_BIKER_CK";
			break;
		
		case 0x000000CF:
			return "DV_SH_TITLE";
			break;
		
		case 0x000000D0:
			return "BA_SH_TITLE";
			break;
		
		case 0x000000D1:
			return "SHU_SH_TITLE";
			break;
		
		case 0x000000D2:
			return "PI_BIK_13_4";
			break;
		
		case 0x000000B7:
			return "CELL_BIKER_RESC";
			break;
		
		case 0x000000C7:
			return "CELL_BIKER_SEAR";
			break;
		
		case 0x000000C9:
			return "CELL_BIKER_STAN";
			break;
		
		case 0x0000008E:
			return "PIM_MAGM210";
			break;
		
		case 0x000000A3:
			return "PIM_MAGM608";
			break;
		
		case 0x000000A0:
			return "PIM_MAGM604";
			break;
		
		case 0x0000009A:
			return "PIM_MAGM602";
			break;
		
		case 0x0000009B:
			return "PIM_MAGM603";
			break;
		
		case 0x00000094:
			if (func_599())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 0x00000097:
			if (func_275(0x00000001))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 0x00000098:
			return "PIM_MAGM204";
			break;
		
		case 0x00000099:
			if (func_275(0x00000001))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 0x0000009D:
			return "PIM_MAGM207";
			break;
		
		case 0x0000009F:
			return "PIM_MAGM206";
			break;
		
		case 0x000000A2:
			return "PIM_MAGM607";
			break;
		
		case 0x000000A4:
			return "PIM_MAGM212";
			break;
		
		case 0x000000A6:
			return "GB_DPAD_HEAD";
		
		case 0x000000A7:
			return "GB_DPAD_BUY";
		
		case 0x000000A8:
			return "GB_DPAD_SELL";
		
		case 0x000000A9:
			return "GB_DPAD_DEF";
		
		case 0x000000AA:
			return "GB_DPAD_AIR";
		
		case 0x000000AB:
			return "GB_DPAD_CASH";
		
		case 0x000000AC:
			return "GB_DPAD_SAL";
		
		case 0x000000AD:
			return "GB_DPAD_FRA";
		
		case 0x000000B2:
			return "VEX_TITLEa";
		
		case 0x000000BC:
			return "VEX_TITLEb";
		
		case 0x000000DA:
			return "FRT_MODE";
		
		case 0x000000D9:
			return "FRT_TRNS";
		
		case 0x000000D6:
			return "MODE_PLW";
		
		case 0x000000D7:
			return "MODE_FUL";
		
		case 0x000000D8:
			return "MODE_AA";
		
		case 0x000000DB:
			return "MODE_VEL";
		
		case 0x000000DC:
			return "MODE_RMP";
		
		case 0x000000DD:
			return "MODE_STK";
		
		case 0x000000E1:
			return "GR_TITLEL";
		
		case 0x000000E2:
			return "GRS_TITLEL";
		
		case 0x000000E3:
			return "GRD_TITLEL";
		
		case 0x000000C3:
			return "GB_STEAL_T";
		
		case 0x000000C6:
			return "SC_MENU_TITLE";
		
		case 0x000000BE:
			return "GB_DPAD_BSEL";
		
		case 0x000000BF:
			return "GB_DPAD_BDEF";
		
		case 0x000000B9:
			return "GB_DPAD_GFH";
		
		case 0x000000C5:
			return "GB_DPAD_JB";
		
		case 0x000000B3:
			return "CELL_JOUST";
		
		case 0x000000C8:
			return "CAG_BLIP";
		
		case 0x000000C0:
			if (func_598(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

bool func_599()
{
	return (func_602() && func_600(func_601()));
}

int func_600(int iParam0)
{
	return func_185(iParam0, 0x00000001);
}

int func_601()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

bool func_602()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

void func_603(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_538(sParam1);
		}
		else if (func_298(unk_0xD803B885F5E47A62()) == 0x00000085)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_538("");
		if (iParam3 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_604(var uParam0)
{
	int iVar0;
	
	iVar0 = func_298(unk_0xD803B885F5E47A62());
	if (func_605())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "";
		
		case 0x00000084:
			return "FM_AE_SORT_5";
		
		case 0x00000085:
			switch (func_297())
			{
				case 0x00000000:
					return "FM_AE_SORT_2";
				
				case 0x00000001:
					return "FM_AE_SORT_2";
				
				case 0x00000002:
					return "FM_AE_SORT_3";
				
				case 0x00000003:
					return "FM_AE_SORT_2";
				
				case 0x00000004:
					return "FM_AE_SORT_2";
				
				case 0x00000005:
					return "FM_AE_SORT_2";
				
				case 0x00000006:
					return "FM_AE_SORT_2";
				
				case 0x00000007:
					return "FM_AE_SORT_13";
				
				case 0x00000008:
					return "FM_AE_SORT_4";
				
				case 0x00000009:
					return "FM_AE_SORT_2";
				
				case 0x0000000A:
					return "FM_AE_SORT_2";
				
				case 0x0000000B:
					return "FM_AE_SORT_2";
				
				case 0x0000000C:
					return "FM_AE_SORT_2";
				
				case 0x0000000D:
					return "FM_AE_SORT_2";
				
				case 0x0000000E:
					return "FM_AE_SORT_5";
				
				case 0x0000000F:
					return "FM_AE_SORT_9";
				
				case 0x00000010:
					return "FM_AE_SORT_9";
				
				case 0x00000011:
					return "FM_AE_SORT_9";
				
				case 0x00000012:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "";
		
		case 0x0000008A:
			return "";
		
		case 0x0000008B:
			return "FM_AE_SORT_10";
		
		case 0x0000008C:
			return "";
		
		case 0x0000008D:
			return "FM_AE_SORT_5";
		
		case 0x00000090:
			return "FM_AE_SORT_1";
		
		case 0x00000081:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_605()
{
	return Global_184488;
}

char* func_606(var uParam0)
{
	int iVar0;
	
	iVar0 = func_298(unk_0xD803B885F5E47A62());
	if (func_605())
	{
		if (uParam0->f_67 != 0xFFFFFFFF)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 0x00000083:
			return "PIM_TA9";
		
		case 0x00000084:
			if (func_608() == 0x00000000)
			{
				return "CPC_TILEL";
			}
			else if (func_608() == 0x00000001)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 0x00000085:
			switch (func_297())
			{
				case 0x00000000:
					return "AMCH_0SLC";
				
				case 0x00000001:
					return "AMCH_1SLC";
				
				case 0x00000002:
					return "AMCH_2SLC";
				
				case 0x00000003:
					return "AMCH_3SLC";
				
				case 0x00000004:
					return "AMCH_4SLC";
				
				case 0x00000005:
					return "AMCH_5SLC";
				
				case 0x00000006:
					return "AMCH_6SLC";
				
				case 0x00000007:
					return "AMCH_7SLC";
				
				case 0x00000008:
					return "AMCH_8SLC";
				
				case 0x00000009:
					return "AMCH_12SLC";
				
				case 0x0000000A:
					return "AMCH_13SLC";
				
				case 0x0000000B:
					return "AMCH_15SLC";
				
				case 0x0000000C:
					return "AMCH_16SLC";
				
				case 0x0000000D:
					return "AMCH_23SLC";
				
				case 0x0000000E:
					return "AMCH_9SLC";
				
				case 0x0000000F:
					return "AMCH_19SLC";
				
				case 0x00000010:
					return "AMCH_20SLC";
				
				case 0x00000011:
					return "AMCH_21SLC";
				
				case 0x00000012:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 0x00000088:
			return "PIM_TA10";
		
		case 0x0000008A:
			return "PIM_TA4";
		
		case 0x0000008B:
			return "PIM_TA5";
		
		case 0x0000008C:
			return "PIM_TA3";
		
		case 0x0000008D:
			return "PIM_TA8";
		
		case 0x00000090:
			return "PIM_TA2";
		
		case 0x00000081:
			if (func_607() == 0x00000001)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 0x00000092:
			return "PIM_TA6";
	}
	return "";
}

int func_607()
{
	return Global_26B66F.f_13B8;
}

int func_608()
{
	if (func_298(unk_0xD803B885F5E47A62()) == 0x00000084)
	{
		return Global_26B66F.f_13B3;
	}
	return 0xFFFFFFFF;
}

void func_609(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_549(sParam1);
		}
		else if (iParam5 != 0xFFFFFFFF)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_538(sParam1);
		}
		if (func_631() && iParam6)
		{
			if (func_611())
			{
				iVar0 = 0x00000002;
				iVar1 = 0x00000002;
			}
			else
			{
				iVar0 = 0x00000001;
				iVar1 = 0x00000002;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_538(sParam2);
		}
		if (iParam4 != 0xFFFFFFFF)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_610(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(0x000000A6);
			}
			else if (func_56())
			{
				unk_0x3CAEA85DA607305E(0x000000DC);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_610(int iParam0)
{
	if (func_593(iParam0) || func_592(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_611()
{
	return Global_18052B;
}

struct<4> func_612(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_613(unk_0xD803B885F5E47A62()) || func_591(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000012:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_CC, 16);
			break;
	}
	if (func_541() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_613(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000005;
}

char* func_614(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 0x00000014 && (!func_541() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_615();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 0x00000019)
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_180619 == 0x00000001)
		{
			Global_180619 = 0x00000000;
		}
		return sParam1;
	}
	else
	{
		if (Global_180619 == 0x00000000)
		{
			Global_180619 = 0x00000001;
		}
		switch (iParam0)
		{
			case 0x00000000:
			case 0x0000001F:
				return "HUD_LBD_DM";
				break;
			
			case 0x00000001:
				return "HUD_LBD_TDM";
				break;
			
			case 0x00000005:
				return "HUD_LBD_GRCE";
				break;
			
			case 0x00000004:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
			case 0x0000001A:
			case 0x0000000B:
				return "HUD_LBD_RCE";
				break;
			
			case 0x00000007:
				return "HUD_LBD_BRCE";
				break;
			
			case 0x00000012:
			case 0x0000000E:
			case 0x00000011:
			case 0x0000000F:
			case 0x0000000D:
			case 0x0000000C:
			case 0x00000010:
			case 0x00000013:
				return "HUD_TITLEMC";
				break;
			
			case 0x00000003:
				return "HUD_LBD_HRD";
				break;
			
			case 0x00000016:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_615()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_616()
{
	Global_A56F = 0x00000001;
}

bool func_617(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_618(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000007);
	Global_180529 = 0x00000000;
	func_531();
	Global_180528 = 0x00000000;
	uParam1->f_1B = 0x00000000;
	if (bParam2)
	{
		if (func_38(&(uParam1->f_13)))
		{
			func_37(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 0x00000005);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0x00000000);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_619()
{
	if (func_629())
	{
		return 0x00000000;
	}
	if (func_512())
	{
		return 0x00000000;
	}
	if (!func_627())
	{
		return 0x00000000;
	}
	if (!func_500())
	{
		return 0x00000000;
	}
	if (func_626(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000000;
	}
	if (func_630() == 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0x00000000;
	}
	if (func_294())
	{
		return 0x00000000;
	}
	else if (!func_331(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && Global_1403E4[0x00000000 /*4*/] > 0x00000000)
	{
		return 0x00000000;
	}
	if (((func_625(0x00000001) || func_623(0x00000001)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (func_622() && Global_19DEEC == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_92(unk_0xD803B885F5E47A62()) && !func_622())
	{
		return 0x00000000;
	}
	if (Global_195C36)
	{
		return 0x00000000;
	}
	if (Global_195C3B)
	{
		return 0x00000000;
	}
	if (func_621(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x00000004))
	{
		return 0x00000000;
	}
	if (Global_14E876)
	{
		return 0x00000000;
	}
	if ((Global_19C478.f_2CE.f_5 || Global_19CF82.f_2CE.f_5) || Global_19C0AC.f_2CE.f_5)
	{
		return 0x00000000;
	}
	if ((Global_19E2B1.f_2D4.f_5 || Global_19E2B1.f_2E8.f_2D4.f_5) || Global_19E2B1.f_5D9.f_2D4.f_5)
	{
		return 0x00000000;
	}
	if (func_620(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_620(int iParam0)
{
	if (iParam0 == func_96())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 0x00000006);
}

bool func_621(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

bool func_622()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_623(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_624(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000019) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000044))
				{
					return 0x00000000;
				}
			}
		}
	}
	if (Global_56C3.f_82)
	{
		return 0x00000000;
	}
	if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000013) || (!bParam0 && unk_0x7FEE810EE9E768EB(0x00000000, 0x00000013)))
	{
		return 0x00000001;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0x00000000, 0x000000A6) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A7)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A8)) || unk_0x06F8112AA79C53D9(0x00000000, 0x000000A9))
		{
			return 0x00000001;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A6) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A7)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A8)) || unk_0x7FEE810EE9E768EB(0x00000000, 0x000000A9))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_624(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 0x0A914799)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_625(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

bool func_626(int iParam0, int iParam1)
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

int func_627()
{
	if (func_628())
	{
		return 0x00000001;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0x00000000;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0x00000000;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_628()
{
	return Global_1406B8;
}

bool func_629()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_630()
{
	return Global_150392.f_44;
}

int func_631()
{
	if (Global_18052A > 0x00000010)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_632()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000014:
		case 0x00000015:
		case 0x0000001B:
		case 0x0000001C:
		case 0x00000028:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_634()
{
	if (func_637())
	{
		return 0x00000001;
	}
	if (func_6(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (func_605())
	{
		return 0x00000001;
	}
	if (func_431(unk_0xD803B885F5E47A62()))
	{
		switch (func_298(unk_0xD803B885F5E47A62()))
		{
			case 0x00000083:
			case 0x00000084:
			case 0x00000085:
			case 0x00000088:
			case 0x0000008A:
			case 0x0000008B:
			case 0x0000008D:
			case 0x00000090:
			case 0x00000092:
				return 0x00000001;
				break;
			
			case 0x0000008C:
				if (!func_635(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000081:
				if (!func_635(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AE:
				if (!func_635(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
				break;
			
			case 0x000000AF:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

bool func_635(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x00000004);
}

int func_636(int iParam0)
{
	if (iParam0 == 0x0000001C)
	{
		if ((func_431(unk_0xD803B885F5E47A62()) && !func_100(unk_0xD803B885F5E47A62())) && !func_546(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x0000001B)
	{
		if (func_106(unk_0xD803B885F5E47A62(), 0x00000000) && func_100(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
		if (func_505(unk_0xD803B885F5E47A62()) == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_637()
{
	if (func_638(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0x00000000;
}

int func_638(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_94(iParam0, 0x00000000))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0x00000000;
}

void func_639()
{
	int iVar0;
	
	if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_88)))
	{
		iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_88));
		if (unk_0x40B8C182D63932FC(iVar0))
		{
			func_640(iVar0, 0x00000002);
		}
	}
	iLocal_88++;
	if (iLocal_88 >= unk_0x54EABC0DD106045B())
	{
		iLocal_88 = 0x00000000;
	}
}

void func_640(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000000))
	{
		return;
	}
	if (func_38(&(Global_1806FA.f_12)))
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_2, iParam0))
	{
		if (Global_1806FA < iParam1 && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000000);
			return;
		}
		if (Global_1806FA != 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000001);
		}
		Global_1806FA = 0x00000000;
		Global_1806FA.f_2 = 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1806FA.f_2), iParam0);
	bVar0 = 0x00000001;
	if (func_7(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (func_641(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (func_94(iParam0, 0x00000000))
	{
		bVar0 = 0x00000000;
	}
	if (func_6(iParam0))
	{
		bVar0 = 0x00000000;
	}
	if (bVar0)
	{
		Global_1806FA++;
	}
}

bool func_641(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 0x0000000A);
}

void func_642(int iParam0, int iParam1)
{
	Local_1486[iParam0 /*5*/] = iParam1;
}

int func_643()
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 0x00000004;
	Var0.f_5 = 0x00000020;
	Var0.f_26 = 0x00000020;
	Global_26B66F.f_136C = { Var0 };
	iVar1 = 0x00000000;
	while (iVar1 < func_644())
	{
		Global_26B66F.f_136C.f_26[iVar1] = 0xFFFFFFFF;
		iVar1++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000020)
	{
		Local_140.f_216[iVar2 /*42*/].f_1 = func_96();
		iVar2++;
	}
	return 0x00000001;
}

int func_644()
{
	if (Global_25818D)
	{
		return 0x00000020;
	}
	return (0x00000020 - Global_25818E);
}

int func_645()
{
	return Local_119;
}

int func_646(int iParam0)
{
	return Local_1486[iParam0 /*5*/];
}

void func_647()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000006))
	{
		func_671();
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000006);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000007))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000010))
		{
			if (((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_172()) && func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000007);
				func_166("FME_PASINT", 0x00007530);
				func_165(0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000011))
		{
			if (func_336() && !func_348())
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000011);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000017))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002)) && func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !Global_12061) && !Global_E545) && !unk_0xFEBC1E4EC9E001F0())
		{
			if (func_669())
			{
				func_166("AMEV_GA_RP", 0xFFFFFFFF);
				if (func_239(unk_0xD803B885F5E47A62()) != 0x000000C8)
				{
					func_165(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000017);
			}
		}
	}
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 0x0000000F)
	{
		if (func_446(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(0x502431FB))
			{
				unk_0x8134AB7E30C9809E(0x502431FB);
			}
		}
		else if (unk_0x70305AA977EFE679(0x502431FB))
		{
			unk_0x64366F76B4845277(0x502431FB);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000009))
	{
		if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_172()) && func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && !func_347(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_347(unk_0xD803B885F5E47A62(), 0x00000019))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000009);
			func_668(0x00000000);
			func_166("FME_TBL00", 0xFFFFFFFF);
			func_165(0x00000001);
		}
	}
	if (func_431(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if ((func_347(unk_0xD803B885F5E47A62(), 0x00000015) && unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000014)) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000013))
			{
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000012);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000012))
		{
			if (((((!unk_0x0178C60FEA5C5A75() && !unk_0xFEBC1E4EC9E001F0()) && !func_172()) && func_13(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001)) && unk_0x0F1CCD77290EE12F()) && !Global_26B66F.f_13C1)
			{
				unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000012);
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000013);
				func_166("AMTT_RPAS", 0xFFFFFFFF);
				func_165(0x00000001);
			}
		}
	}
	if (((((func_431(unk_0xD803B885F5E47A62()) && !func_7(unk_0xD803B885F5E47A62())) && func_298(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_6(unk_0xD803B885F5E47A62())) && !func_519(unk_0xD803B885F5E47A62())) && !func_658())
	{
		if (func_445(func_298(unk_0xD803B885F5E47A62())))
		{
			unk_0x25A1F489CCEE528A(unk_0xD803B885F5E47A62());
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016))
		{
			unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000016);
		}
		if (func_461(unk_0xD803B885F5E47A62()) || func_439())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A))
			{
				if (func_656(func_298(unk_0xD803B885F5E47A62())))
				{
					if (func_281(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					if (!Global_247C05)
					{
						func_443(0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000A);
			}
		}
		if (func_446(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B))
			{
				if (!Global_181EC.f_8)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000C);
					func_441(0x00000001);
				}
				if (!func_655())
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000D);
					func_440();
				}
				if (!Global_247C05)
				{
					unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000E);
					if (func_281(0x00000000) && !Global_247C05)
					{
						unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000009);
					}
					func_443(0x00000001);
				}
				unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000000B);
			}
		}
		else
		{
			func_653(0x00000000);
		}
	}
	else
	{
		func_653(0x00000001);
	}
	func_648();
	if (func_438(func_298(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000015);
	}
	if (((func_336() && !func_348()) || func_347(unk_0xD803B885F5E47A62(), 0x00000015)) || func_347(unk_0xD803B885F5E47A62(), 0x00000019))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000A);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000A))
	{
		unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000A);
	}
}

void func_648()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_172())
	{
		iVar2 = 0x0000003F;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000053)
		{
			if (func_487(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 0x0000003F || iVar0 >= 0x00000051)
				{
					iVar1 = 0x00003A98;
				}
				else
				{
					iVar1 = 0x00000BB8;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
				{
					unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000001A);
				}
				func_649(iVar0, iVar1);
				iVar2 = 0x00000053;
			}
			iVar2++;
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000001A))
	{
		func_37(&(Global_1806FA.f_16));
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x0000001A);
	}
}

void func_649(int iParam0, int iParam1)
{
	if (!func_38(&(Global_1806FA.f_16)))
	{
		func_2(&(Global_1806FA.f_16), 0x00000000, 0x00000000);
	}
	else if (func_1(&(Global_1806FA.f_16), iParam1, 0x00000000))
	{
		if (func_630() > 0x00000000)
		{
			func_652(iParam0);
			if (func_163("AMEV_LBD_HELP"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			func_37(&(Global_1806FA.f_16));
		}
	}
	else
	{
		func_651(0x00000000);
		func_650();
	}
}

void func_650()
{
	Global_26B66F.f_11B4 = 0x00000000;
}

void func_651(int iParam0)
{
	Global_150392.f_44 = iParam0;
}

void func_652(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 0x00000005;
			func_97(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 0x00000001);
		}
		iVar0++;
	}
}

void func_653(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000B) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000A) && iParam0)) || (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000016) && iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000C))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000C);
			func_441(0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000D);
			func_654();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x0000000E) && !func_106(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000E);
			func_443(0x00000000);
		}
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000B);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x0000000A);
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000016);
	}
}

void func_654()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1362), 0x00000000);
}

bool func_655()
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1362, 0x00000000);
}

int func_656(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000081:
		case 0x00000084:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
			return 0x00000001;
		
		case 0x00000083:
		case 0x00000092:
			return func_446(unk_0xD803B885F5E47A62());
		
		case 0x00000085:
			return (func_439() || func_657(func_297()));
		
		default:
	}
	return 0x00000000;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x0000000A:
		case 0x00000006:
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_658()
{
	if (((((((((func_667() || func_666()) || func_665()) || func_294()) || (func_664() && !unk_0xA14BB9332558B949())) || (func_661() && !func_660())) || Global_248A6D) || Global_248A6D.f_1 != 0x00000000) || Global_248AB7 != 0x00000000) || (func_659() == 0x00000002 && !unk_0xA14BB9332558B949()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_659()
{
	return Global_EC6CD;
}

bool func_660()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000001B);
}

int func_661()
{
	if (func_663() || func_662())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 0x00000008;
	}
	return 0x00000000;
}

var func_662()
{
	return Global_2564C8.f_27B;
}

bool func_663()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_664()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000005);
}

bool func_665()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

bool func_666()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

bool func_667()
{
	return Global_2564C8.f_256;
}

void func_668(int iParam0)
{
	int iVar0;
	
	iVar0 = func_227(0x000009E6, 0xFFFFFFFF, 0x00000000);
	if (iParam0 == 0x00000000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000007);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000008))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000009))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000009);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000A))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000A);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x0000000B))
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x0000000B);
		}
	}
	func_218(0x000009E6, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_669()
{
	int iVar0;
	
	if (!func_38(&(Global_1806FA.f_F)))
	{
		func_2(&(Global_1806FA.f_F), 0x00000000, 0x00000000);
		Global_1806FA.f_11 = 0x00000000;
	}
	else if (func_1(&(Global_1806FA.f_F), 0x000003E8, 0x00000000))
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(Global_1806FA.f_11));
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (func_13(iVar0, 0x00000001, 0x00000001) && func_670(iVar0, 0x00000006))
				{
					if (SYSTEM::VDIST(func_31(unk_0xD803B885F5E47A62()), func_31(iVar0)) < 80f)
					{
						return 0x00000001;
					}
				}
			}
		}
		Global_1806FA.f_11++;
		if (Global_1806FA.f_11 >= 0x00000020)
		{
			Global_1806FA.f_11 = 0x00000000;
			func_37(&(Global_1806FA.f_F));
		}
	}
	return 0x00000000;
}

int func_670(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_361() != 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_222(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_671()
{
	unk_0x34D79252800B23FF(0x00000005);
	func_673();
	unk_0x51B096AAC60548C1(1f);
	unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000008);
	func_672();
}

void func_672()
{
	if (Global_19824D)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000000))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000000);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000001))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0x00000005))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0x00000005);
		}
		if (unk_0x76395FF5E8D5E643(0xEACBE1C2))
		{
			unk_0x1BA7FCEAFCE8D46E(0xEACBE1C2, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xDD5EF4CE))
		{
			unk_0x1BA7FCEAFCE8D46E(0xDD5EF4CE, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xAAFA1005))
		{
			unk_0x1BA7FCEAFCE8D46E(0xAAFA1005, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0x2C6E2BFC))
		{
			unk_0x1BA7FCEAFCE8D46E(0x2C6E2BFC, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xB232A0B6))
		{
			unk_0x1BA7FCEAFCE8D46E(0xB232A0B6, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xA405045B))
		{
			unk_0x1BA7FCEAFCE8D46E(0xA405045B, 0x00000001, 0x00000000, 0x00000000);
		}
		if (unk_0x76395FF5E8D5E643(0xCF9D5B8B))
		{
			unk_0x1BA7FCEAFCE8D46E(0xCF9D5B8B, 0x00000001, 0x00000000, 0x00000000);
		}
		Global_19824E = 0x00000000;
	}
	Global_19824D = 0x00000000;
}

void func_673()
{
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && Global_26B66F.f_13FF < 1f)
		{
			return;
		}
	}
	Global_26B66F.f_1400 = 0xFFFFFFFF;
	Global_26B66F.f_13FF = 1f;
}

int func_674()
{
	if (func_675())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_675()
{
	return Global_1806FA.f_18;
}

int func_676()
{
	var uVar0;
	
	func_680(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_679())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_678())
	{
		return 0x00000001;
	}
	if (func_677(0x0000009F))
	{
		if (!func_667())
		{
			return 0x00000001;
		}
	}
	if (func_677(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_448() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_448()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_677(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_678()
{
	return Global_258C08;
}

bool func_679()
{
	return Global_2564C8.f_251;
}

void func_680(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_681(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_681(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_13(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_682(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_682(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_683()
{
	SYSTEM::WAIT(0x00000000);
}

void func_684()
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_174();
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_114, iVar1) && !unk_0x8AA6DC470ABA63A2(iLocal_115[iVar1]))
		{
			unk_0x55D0A2DB35045A35(iLocal_115[iVar1]);
			unk_0x43A06902454A1172(iLocal_115[iVar1]);
		}
		iVar1++;
	}
	func_434();
	func_490(0x00000000);
	func_688(0x00000084, 0x00000000, Local_119.f_8 == 0x00000006);
	func_454(0x00000016, 0x00000000);
	Global_26B66F.f_13B3 = 0xFFFFFFFF;
	uVar0[0x00000000] = Local_119.f_3[0x00000000];
	uVar0[0x00000001] = Local_119.f_3[0x00000001];
	uVar0[0x00000002] = Local_119.f_3[0x00000002];
	uVar0[0x00000003] = Local_119.f_3[0x00000003];
	func_687(&(uVar0[0x00000000]));
	func_687(&(uVar0[0x00000001]));
	func_687(&(uVar0[0x00000002]));
	func_687(&(uVar0[0x00000003]));
	if (func_676())
	{
		Local_1485.f_5 = 0x00000005;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_119.f_2, 0x00000002))
	{
		Local_1485.f_5 = 0x00000006;
	}
	else if (Local_1485.f_5 != 0x00000001)
	{
		Local_1485.f_5 = 0x00000002;
	}
	Local_1485 = Local_119.f_2D4;
	Local_1485.f_1 = Local_119.f_2D5;
	Local_1485.f_4 = Local_119.f_2D6;
	Local_1485.f_3 = Local_119.f_2D8;
	Local_1485.f_A = (unk_0xDD0E7998AE8AD485() - Local_1485.f_9);
	uVar2 = Local_119.f_2C8;
	if (Local_119.f_2C3)
	{
		uVar2 = Local_119.f_2C8 + 4;
	}
	if (!Global_40001.f_2CEB)
	{
		if (Local_1485.f_6 > 0x00000000)
		{
		}
	}
	Local_1485.f_6 = (Local_1485.f_6 + iLocal_93);
	if (unk_0x57270EE11514DC67() != 0xFFFFFFFF)
	{
		func_685(Local_1485, uVar2, Local_1486[unk_0x57270EE11514DC67() /*5*/].f_4, uVar0[0x00000000], uVar0[0x00000001], uVar0[0x00000002], uVar0[0x00000003]);
	}
	func_483(0x00000001);
	unk_0x10FAF14A60A0DBE1();
}

void func_685(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (Param0.f_9 == 0x00000000)
	{
		Param0.f_A = 0x00000000;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_12B4E)
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_C = uParam1;
			unk_0x9534DF96382FA79D(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, func_686()))
		{
			Var2 = { Param0 };
			Var2.f_C = uParam1;
			Var2.f_D = iParam2;
			unk_0x68F74D8294339590(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_C = uParam1;
			Var3.f_D = iParam2;
			Var3.f_E = iParam3;
			Var3.f_F = uParam4;
			Var3.f_10 = uParam5;
			Var3.f_11 = uParam6;
			unk_0xB4378BE34ED99E2A(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_C = uParam1;
			Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 0x00000001)
			{
				Var4.f_D = (Var4.f_D / 10f);
			}
			unk_0xE20208601F5C75BD(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
		{
			unk_0xAE4A25D32825E179(&Param0);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_C = uParam1;
			unk_0xAD412B113AE8E374(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_C = uParam1;
			Var6.f_D = iParam2;
			unk_0xAFD26850D8F9D951(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_C = uParam1;
			Var7.f_D = iParam2;
			unk_0x2320D6A9337F16FD(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_C = uParam1;
			Var8.f_D = iParam2;
			Var8.f_E = iParam3;
			Var8.f_F = uParam4;
			unk_0x8EFE08564F2B2A96(&Var8);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_C = uParam1;
			unk_0x99DAD54B2D0F4291(&Var9);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0x00000000)
			{
				Var10 = { Param0 };
				Var10.f_C = uParam1;
				Var10.f_D = iParam2;
				unk_0xC6463777F834DA6F(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_C = uParam1;
				Var11.f_D = iParam2;
				unk_0x9563472595C7B3E7(&Var11);
			}
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_C = uParam1;
			unk_0x9BF192C4E1EF8A54(&Var12);
		}
	}
}

char* func_686()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_687(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, iVar0))
		{
			unk_0x0674E58A79778E99(iParam0, iVar0);
		}
		else
		{
			unk_0x5D96D8530B3D0904(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_688(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
	}
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000D))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000D);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x0000000E))
		{
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 0x0000000E);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 0x00000015))
	{
		unk_0x0674E58A79778E99(&(Global_1806FA.f_1), 0x00000015);
	}
	func_718();
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
	if (bParam1)
	{
		uVar0 = func_717(func_298(unk_0xD803B885F5E47A62()));
		func_454(func_455(iParam0), 0x00000000);
	}
	else
	{
		if ((bParam2 && unk_0xD803B885F5E47A62() != 0xFFFFFFFF) && func_716(unk_0xD803B885F5E47A62()) >= 0x0000000C)
		{
			func_715(0x000009F2, 0xFFFFFFFF);
			iVar1 = func_227(0x000009F2, 0xFFFFFFFF, 0x00000000);
			if (iVar1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000000);
			}
			else if (iVar1 == 0x00000004)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000001);
			}
			else if (iVar1 == 0x00000006)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000002);
			}
			else if (iVar1 == 0x00000008)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000003);
			}
			else if (iVar1 == 0x0000000A)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000004);
			}
			else if (iVar1 == 0x0000000C)
			{
				unk_0x5D96D8530B3D0904(&Global_180714, 0x00000005);
			}
		}
		func_714();
		func_713();
		func_712();
		if ((!func_102(unk_0xD803B885F5E47A62()) && !func_171(unk_0xD803B885F5E47A62())) && !func_462())
		{
			func_696();
		}
		func_695();
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0x00000001))
		{
			func_671();
		}
		func_694();
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6D2), 0x00000002);
		func_173();
		func_158();
	}
	if (unk_0x70305AA977EFE679(0x502431FB))
	{
		unk_0x64366F76B4845277(0x502431FB);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0xD803B885F5E47A62() != 0xFFFFFFFF && !func_347(unk_0xD803B885F5E47A62(), 0x00000015)) && !func_347(unk_0xD803B885F5E47A62(), 0x00000019)) && !func_106(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_443(0x00000000);
			func_441(0x00000000);
			if (!bParam1)
			{
				func_693();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_42(0x0000001A, 0xFFFFFFFF))
		{
			Global_259486 = 0xFFFFFFFF;
			func_39(0x0000001A, 0xFFFFFFFF);
		}
	}
	if (!func_689())
	{
		Global_2658D5 = 0x00000001;
	}
}

int func_689()
{
	if ((((((!func_610(unk_0xD803B885F5E47A62()) && !func_591(unk_0xD803B885F5E47A62())) && func_298(unk_0xD803B885F5E47A62()) != 0x00000092) && !func_692()) && !func_691()) && !func_690(Global_440000.f_38DB3)) && !func_84())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_690(int iParam0)
{
	return iParam0 == 0x00000039;
}

int func_691()
{
	if (Global_440000.f_2F9AE == Global_40001.f_257C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_692()
{
	if ((Global_440000 == 0x00000000 && unk_0xA14BB9332558B949()) && (((((((Global_440000.f_5 != 0x00000000 || Global_440000.f_38DB3 > 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000000F)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000012)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x00000013)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001D)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 0x0000001C)) || unk_0xEAE0D21A50E6C7F4(Global_440000.f_5, 0x00000017)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_693()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_C, 0x0000000B))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar0 /*26*/].f_D, 0x0000001A))
			{
				unk_0x0674E58A79778E99(&(Global_2401A9[iVar0 /*26*/].f_D), 0x0000001A);
			}
		}
		iVar0++;
	}
}

void func_694()
{
	struct<25> Var0;
	
	Var0.f_3 = 0xFFFFFFFF;
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_5 = 0xFFFFFFFF;
	Var0.f_15 = 0xFFFFFFFF;
	Global_1806FA = { Var0 };
}

void func_695()
{
	var uVar0;
	
	Global_1420BD = uVar0;
}

void func_696()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 0x00000002);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 0x00000013);
	func_710();
	func_699(0x00000001, 0x00000001, 0x00000000);
	func_697();
}

void func_697()
{
	func_698(0x00000000, 0x00000000);
}

void func_698(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_699(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2D), &Global_24C384, 0x00000140);
	}
	else
	{
		Global_24B2D0.f_2D = { Global_24C384 };
		Global_24B2D0.f_2D.f_31 = { Global_24C384.f_31 };
		Global_24B2D0.f_2D.f_34 = Global_24C384.f_34;
		Global_24B2D0.f_2D.f_35 = Global_24C384.f_35;
	}
	if (bParam0)
	{
		func_709();
	}
	if (!bParam2)
	{
		func_701(0x00000000, 0x00000001, 0x00000000, 0x3F333333, 0x40C00000, 0x3F800000, 0x40E00000, 0x40A00000, 0x00000000, 0x3F8CCCCD, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x42200000);
	}
	func_700(0x00000000);
	func_161();
}

void func_700(bool bParam0)
{
	if (bParam0)
	{
		Global_24B2D0.f_2C1 = 0x00000000;
	}
	else
	{
		Global_24B2D0.f_2C1 = 0x00000001;
	}
}

void func_701(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_708())
		{
			func_707();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_705();
		func_458(0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_2C2.f_1FB = iParam11;
		Global_24B2D0.f_2C2.f_200 = iParam3;
		Global_24B2D0.f_2C2.f_201 = iParam4;
		Global_24B2D0.f_2C2.f_1FE = iParam5;
		Global_24B2D0.f_2C2.f_1FF = iParam6;
		Global_24B2D0.f_2C2.f_202 = iParam7;
		Global_24B2D0.f_2C2.f_203 = iParam8;
		Global_24B2D0.f_2C2.f_204 = iParam9;
		Global_24B2D0.f_2C2.f_205 = iParam14;
		Global_24B2D0.f_2C2.f_1FC = iParam12;
		Global_24B2D0.f_2C2.f_1FD = iParam13;
		Global_24B2D0.f_6D1 = 0x00000001;
	}
	else
	{
		func_702();
	}
}

void func_702()
{
	if (func_708() && !func_704())
	{
		func_707();
	}
	if (func_704())
	{
		func_703();
	}
	else
	{
		func_705();
		func_458(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_24B2D0.f_6D1 = 0x00000000;
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

void func_703()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 0x00000207);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0x00000000;
	}
}

int func_704()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_705()
{
	if (func_708() && !func_704())
	{
		func_707();
	}
	func_706();
	Global_24B2D0.f_2C2 = 0x00000000;
}

void func_706()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 0x3F800000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000064)
	{
		Global_24B2D0.f_2C2.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_707()
{
	if (func_704())
	{
		if (Global_24B2D0.f_2C2.f_206 == Global_24B2D0.f_4C9.f_206)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_4C9), &(Global_24B2D0.f_2C2), 0x00000207);
		Global_24B2D0.f_1ED = { Global_24B2D0.f_1E7 };
		Global_24B2D0.f_6D0 = 0x00000001;
	}
}

int func_708()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_709()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 0x00000079);
}

void func_710()
{
	func_711();
	Global_24B2D0.f_8CE = 0x00000000;
}

void func_711()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000032)
	{
		Global_24B2D0.f_8CF[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_712()
{
	Global_26B66F.f_1362 = 0x00000000;
}

void func_713()
{
	if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1 = 0x00000000;
	}
}

void func_714()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != 0xFFFFFFFF)
	{
		Global_18D84D[iVar0 /*615*/] = 0xFFFFFFFF;
	}
}

void func_715(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_227(iParam0, func_223(iParam1), 0x00000000);
	iVar0++;
	if (!func_226(iParam0))
	{
		func_218(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_219(iParam0, iVar0, iParam1, 0x00000001);
	}
}

int func_716(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000084:
		case 0x0000008A:
		case 0x00000090:
		case 0x0000008C:
		case 0x0000008B:
		case 0x00000083:
		case 0x0000008D:
		case 0xFFFFFFFF:
			return 0x00000001;
		
		case 0x00000092:
			if (func_446(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_718()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000004))
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000005))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000005);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000003))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000003);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C7, 0x00000004))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_6C7), 0x00000004);
	}
	func_721(0x00000000);
	func_720(0x00000000);
	func_719(0x00000000);
}

void func_719(int iParam0)
{
	if (Global_26B66F.f_11A8 != iParam0)
	{
		Global_26B66F.f_11A8 = iParam0;
	}
}

void func_720(bool bParam0)
{
	if (Global_26B66F.f_11A7 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_26B66F.f_11A7 = bParam0;
	}
}

void func_721(int iParam0)
{
	if (Global_26B66F.f_11A5 != iParam0)
	{
		Global_26B66F.f_11A5 = iParam0;
	}
}

int func_722(struct<21> Param0)
{
	func_730(func_731(Param0), Param0);
	unk_0x3A4967AE7C71F999(0x00000000);
	unk_0x28E5F00F131890E3(func_729(0x00000008));
	func_726(0x00000000, 0xFFFFFFFF, 0x00000000);
	func_724(0x00000084);
	unk_0x9752E7BAEABA939E(&Local_119, 0x000002EE);
	unk_0x35B62793EAE9ADDF(&Local_1486, 0x000000A1);
	unk_0x256D93AFAE851A7A(0x00000000);
	if (!func_723())
	{
		func_684();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		unk_0xCB466C2A425A9168(&(Local_119.f_2D4), &(Local_119.f_2D5));
	}
	Local_1485.f_2 = unk_0x981819F6C45DDB49();
	Local_1485.f_9 = unk_0xDD0E7998AE8AD485();
	Local_1485.f_8 = unk_0xDD0E7998AE8AD485();
	func_454(0x00000016, 0x00000001);
	return 0x00000001;
}

int func_723()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_679())
		{
			return 0x00000000;
		}
		if (func_677(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

void func_724(int iParam0)
{
	func_694();
	func_725();
	func_712();
	Global_1806FA.f_4 = iParam0;
	Global_1806FA.f_5 = iParam0;
	func_453(iParam0, 0xFFFFFFFF);
	func_20(&(Global_1806FA.f_12), 0x00000000, 0x00000000);
	Global_26B66F.f_11EC = 0x00000000;
	Global_259033[0x00000000] = func_96();
	Global_259033[0x00000001] = func_96();
	Global_259033[0x00000002] = func_96();
	Global_259033[0x00000003] = func_96();
	Global_259033[0x00000004] = func_96();
	func_158();
	if (!func_503(func_189()))
	{
		func_188();
	}
	if (func_336() && !func_348())
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000010);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1806FA.f_1), 0x00000011);
	}
}

void func_725()
{
	var uVar0;
	
	Global_180713 = uVar0;
}

int func_726(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_728();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_727())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_728();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_679())
				{
					if (!bParam2)
					{
						func_728();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_677(0x0000009D))
				{
					if (!bParam2)
					{
						func_728();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_728();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_728();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_728();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_727()
{
	return Global_140856;
}

void func_728()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
		
		case 0x00000001:
			return 0x00000001;
		
		case 0x00000002:
			return 0x00000001;
		
		case 0x00000003:
			return 0x00000001;
		
		case 0x00000004:
			return 0x00000001;
		
		case 0x00000005:
			return 0x00000001;
		
		case 0x00000006:
			return 0x00000000;
		
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
			return 0x0000000A;
		
		case 0x00000009:
			return 0x0000000A;
		
		case 0x0000000A:
			return 0x00000001;
		
		case 0x0000000B:
			return 0x00000006;
		
		case 0x0000000C:
			return 0x00000000;
		
		case 0x0000000D:
			return 0x00000001;
		
		case 0x0000000E:
			return 0x00000000;
		
		case 0x0000000F:
			return 0x00000000;
		
		case 0x00000010:
			return 0x00000000;
		
		case 0x00000011:
			return 0x00000000;
		
		case 0x00000012:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000000;
		
		case 0x00000014:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

void func_730(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_728();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0x00000000, Param1.f_10);
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000001:
			return 0x00000020;
		
		case 0x00000020:
			return 0x00000020;
		
		case 0x00000021:
			return 0x00000020;
		
		case 0x00000022:
			return 0x00000020;
		
		case 0x00000023:
			return 0x00000020;
		
		case 0x00000024:
			return 0x00000020;
		
		case 0x00000025:
			return 0x00000020;
		
		case 0x00000026:
			return 0x00000020;
		
		case 0x00000027:
			return 0x00000020;
		
		case 0x00000028:
			return 0x00000020;
		
		case 0x00000029:
			return 0x00000020;
		
		case 0x0000002A:
			return 0x00000020;
		
		case 0x0000002B:
			return 0x00000020;
		
		case 0x0000002C:
			return 0x00000020;
		
		case 0x0000002D:
			return 0x00000020;
		
		case 0x0000002E:
			return 0x00000020;
		
		case 0x0000002F:
			return 0x00000020;
		
		case 0x00000030:
			return 0x00000020;
		
		case 0x00000031:
			return 0x00000020;
		
		case 0x00000032:
			return 0x00000004;
		
		case 0x00000033:
			return 0x00000020;
		
		case 0x00000034:
			return 0x00000020;
		
		case 0x00000035:
			return 0x00000020;
		
		case 0x00000036:
			return 0x00000020;
		
		case 0x00000037:
			return 0x00000020;
		
		case 0x00000038:
			return 0x00000020;
		
		case 0x00000039:
			return 0x00000020;
		
		case 0x0000003A:
			return 0x00000020;
		
		case 0x0000003B:
			return 0x00000020;
		
		case 0x0000003C:
			return 0x00000020;
		
		case 0x0000003D:
			return 0x00000020;
		
		case 0x0000003E:
			return 0x00000020;
		
		case 0x0000003F:
			return 0x00000020;
		
		case 0x00000040:
			return 0x00000004;
		
		case 0x00000041:
			return 0x00000020;
		
		case 0x00000042:
			return 0x00000004;
		
		case 0x00000043:
			return 0x00000004;
		
		case 0x00000044:
			return 0x00000020;
		
		case 0x00000045:
			return 0x00000020;
		
		case 0x00000046:
			return 0x00000004;
		
		case 0x00000047:
			return 0x00000020;
		
		case 0x00000048:
			return 0x00000020;
		
		case 0x00000049:
		case 0x0000004A:
			return 0x00000004;
		
		case 0x0000004B:
			return 0x00000020;
		
		case 0x0000004C:
			return 0x00000020;
		
		case 0x0000004D:
			return 0x00000020;
		
		case 0x0000004E:
			return 0x00000020;
		
		case 0x0000004F:
			return 0x00000020;
		
		case 0x00000050:
			return 0x00000020;
		
		case 0x00000051:
			return 0x00000020;
		
		case 0x00000052:
			return 0x00000020;
		
		case 0x00000054:
			return 0x00000020;
		
		case 0x00000053:
			return 0x00000020;
		
		case 0x00000055:
			return 0x00000020;
		
		case 0x00000056:
			return 0x00000008;
		
		case 0x00000057:
			return 0x00000020;
		
		case 0x00000058:
			return 0x00000020;
		
		case 0x00000059:
			return 0x00000020;
		
		case 0x0000005A:
			return 0x00000020;
		
		case 0x0000005B:
			return 0x00000008;
		
		case 0x0000005C:
			return 0x00000020;
		
		case 0x0000005D:
			return 0x00000008;
		
		case 0x0000005E:
			return 0x00000008;
		
		case 0x00000066:
			return 0x00000008;
		
		case 0x0000005F:
			return 0x00000008;
		
		case 0x00000060:
			return 0x00000020;
		
		case 0x00000061:
			return 0x00000020;
		
		case 0x00000062:
			return 0x00000020;
		
		case 0x00000063:
			return 0x00000008;
		
		case 0x00000064:
			return 0x00000020;
		
		case 0x00000065:
			return 0x00000020;
		
		case 0x00000067:
			return 0x00000020;
		
		case 0x00000068:
			return 0x00000020;
		
		case 0x00000069:
			return 0x00000020;
		
		case 0x0000006A:
			return 0x00000008;
		
		case 0x0000006B:
			return 0x00000008;
		
		case 0x0000006C:
			return 0x00000008;
		
		case 0x0000006D:
			return 0x00000008;
		
		case 0x0000006E:
			return 0x00000008;
		
		case 0x0000006F:
			return 0x00000008;
		
		case 0x00000070:
			return 0x00000008;
		
		case 0x00000071:
			return 0x00000008;
		
		case 0x00000072:
			return 0x00000020;
		
		case 0x00000073:
			return 0x00000008;
		
		case 0x00000074:
			return 0x00000008;
		
		case 0x00000075:
			return 0x00000008;
		
		case 0x00000076:
			return 0x00000008;
		
		case 0x00000077:
			return 0x00000020;
		
		case 0x00000078:
			return 0x00000020;
		
		case 0x00000079:
			return 0x00000020;
		
		case 0x0000007A:
			return 0x00000020;
		
		case 0x0000007B:
			return 0x00000008;
		
		case 0x0000007C:
			return 0x00000008;
		
		case 0x0000007D:
			return 0x00000008;
		
		case 0x0000007E:
			return 0x00000008;
		
		case 0x0000007F:
			return 0x00000020;
		
		case 0x00000080:
			return 0x00000020;
		
		case 0x00000081:
			return 0x00000020;
		
		case 0x0000000C:
			return 0x00000020;
		
		case 0x00000004:
			return 0x00000010;
		
		case 0x0000000D:
			return 0x00000020;
		
		case 0x00000005:
			return 0x00000010;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000002;
		
		case 0x00000009:
			return 0x00000002;
		
		case 0x00000007:
			return 0x00000010;
		
		case 0x0000000A:
			return 0x00000002;
		
		case 0x0000000B:
			return 0x00000004;
		
		case 0x0000000F:
			return 0x00000020;
		
		case 0x00000010:
			return 0x00000020;
		
		case 0x0000001B:
			return 0x00000002;
		
		case 0x00000019:
			return 0x00000002;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x00000012:
			return 0x00000020;
		
		case 0x0000001C:
			return 0x00000020;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000020;
		
		case 0x0000001F:
			return 0x00000020;
		
		case 0x00000011:
			return 0x00000002;
		
		case 0x00000082:
			return 0x00000020;
		
		case 0x00000083:
			return 0x00000020;
		
		case 0x00000013:
			return 0x00000020;
		
		case 0x00000016:
			return 0x00000020;
		
		case 0x00000017:
			return 0x00000020;
		
		case 0x00000018:
			return 0x00000020;
		
		case 0x00000014:
			return 0x00000002;
		
		case 0x00000000:
			return 0x00000000;
		
		case 0x00000015:
			return 0x00000020;
		
		case 0x0000008E:
			return 0x00000020;
		
		case 0x0000008F:
			return 0x00000020;
		
		case 0x00000084:
			return 0x00000020;
		
		case 0x00000085:
			return 0x00000020;
		
		case 0x00000089:
			return 0x00000020;
		
		case 0x00000087:
			return 0x00000020;
		
		case 0x00000088:
			return 0x00000020;
		
		case 0x0000008C:
			return 0x00000020;
		
		case 0x0000008D:
			return 0x00000020;
		
		case 0x0000008A:
			return 0x00000020;
		
		case 0x0000008B:
			return 0x00000020;
		
		case 0x00000090:
			return 0x00000020;
		
		case 0x00000091:
			return 0x00000020;
		
		case 0x00000092:
			return 0x00000020;
		
		case 0x00000093:
			return 0x00000020;
		
		case 0x00000094:
			return 0x00000002;
		
		case 0x00000099:
			return 0x00000001;
		
		case 0x00000095:
			return 0x00000002;
		
		case 0x00000096:
			return 0x00000004;
		
		case 0x00000097:
			return 0x00000002;
		
		case 0x00000098:
			return 0x00000002;
		
		case 0x00000086:
			return 0x00000001;
		
		case 0x0000009A:
			return 0x00000002;
		
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x0000009E:
		case 0x0000009F:
		case 0x000000A0:
			return 0x00000000;
		
		case 0x000000B0:
			return 0x00000001;
		
		case 0x000000A1:
			return 0x00000004;
		
		case 0x000000A4:
			return 0x00000004;
		
		case 0x000000A5:
			return 0x00000001;
		
		case 0x000000A6:
			return 0x00000001;
		
		case 0x000000AC:
			return 0x00000001;
		
		case 0x000000A8:
			return 0x00000002;
		
		case 0x000000AD:
			return 0x00000001;
		
		case 0x000000A9:
			return 0x00000001;
		
		case 0x000000A7:
			return 0x00000002;
		
		case 0x000000AA:
			return 0x00000008;
		
		case 0x000000AB:
			return 0x00000008;
		
		case 0x000000AE:
			return 0x00000001;
		
		case 0x000000A2:
			return 0x00000010;
		
		case 0x000000A3:
			return 0x00000020;
		
		default:
	}
	return 0x00000000;
}

