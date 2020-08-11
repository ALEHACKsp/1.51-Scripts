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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
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
	var uLocal_75 = -1;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<1652> Local_116 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[32];
	struct<1583> Local_126 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<26> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135[4] = { 0, 0, 0, 0 };
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_136 = 0x00000001;
	func_442();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (func_431())
		{
			func_427();
		}
		if (Global_19E125)
		{
			Global_19E125 = 0x00000000;
			func_427();
		}
		if (Global_24B2D0.f_A70 && Global_24C347 != 0x00000000)
		{
			if (Global_24C347 != 0x00000006)
			{
				func_427();
			}
		}
		if (func_426() && unk_0x757EF87A33649210())
		{
			func_427();
		}
		if ((!func_425(unk_0xD803B885F5E47A62()) && !func_424(unk_0xD803B885F5E47A62())) && !func_423(unk_0xD803B885F5E47A62()))
		{
			func_427();
		}
		if (unk_0xA14BB9332558B949() && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_22, 0x00000007))
		{
			func_427();
		}
		if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_419() /*421*/].f_136.f_4, 0x00000001) && unk_0x757EF87A33649210())
			{
				func_427();
			}
		}
		if (func_424(unk_0xD803B885F5E47A62()) && func_416() != 0x00000000)
		{
			func_427();
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_126.f_101)
		{
			if (!func_415())
			{
				if (unk_0xE9F78D191AD5EDBA(Local_116.f_63B[iVar0]) && unk_0x526BC32A660C89E6(Local_116.f_63B[iVar0]))
				{
					unk_0x866EE3B81CEF363A(Local_116.f_63B[iVar0], 0x00000001);
				}
			}
			iVar0++;
		}
		func_86();
		if (func_415())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_85();
	func_82();
	func_75();
	iVar0 = 0x00000000;
	while (iVar0 < Local_126.f_101)
	{
		switch (Local_116.f_5F0[iVar0])
		{
			case 0x00000000:
				if (Global_265DDB != iVar0 && (Global_265DDB != 0xFFFFFFFF || func_424(unk_0xD803B885F5E47A62())))
				{
					Local_116.f_618[iVar0] = 0x00000001;
					func_74(&(Local_116.f_1[iVar0 /*211*/]));
					func_73(0x00000001, iVar0);
				}
				break;
			
			case 0x00000001:
				if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar0])))
				{
					if (unk_0x526BC32A660C89E6(Local_116.f_63B[iVar0]))
					{
						Local_116.f_636[iVar0] = unk_0xF958843510932FF6(Local_116.f_62C[iVar0]);
						if (Local_116.f_636[iVar0] != 0xFFFFFFFF)
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), func_72(), func_71(iVar0), 0x00000003))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), 0x7E26188D))
								{
									Local_116.f_62C[iVar0] = unk_0xF66E5A439A080021(func_70(iVar0), 0f, 0f, func_69(iVar0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), Local_116.f_62C[iVar0], func_72(), func_68(iVar0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iVar0]);
								}
							}
							else if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), 0x7E26188D))
							{
								Local_116.f_62C[iVar0] = unk_0xF66E5A439A080021(func_70(iVar0), 0f, 0f, func_69(iVar0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), Local_116.f_62C[iVar0], func_72(), func_71(iVar0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iVar0]);
							}
						}
					}
					else
					{
						unk_0x8D30F6387EE75385(Local_116.f_63B[iVar0]);
					}
				}
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if ((Local_116.f_640[(iVar0 * 4 + iVar1)] != func_418() && Global_265DDB != iVar0) && (Global_265DDB != 0xFFFFFFFF || func_424(unk_0xD803B885F5E47A62())))
					{
						func_73(0x00000002, iVar0);
						Local_116.f_631[iVar0] = iVar1;
						func_67(&(Local_116.f_673[iVar0 /*2*/]), 0x00000000, 0x00000000);
						return;
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar0])))
				{
					if (func_66(&(Local_116.f_673[iVar0 /*2*/])) && func_65(&(Local_116.f_673[iVar0 /*2*/]), 0x000007D0, 0x00000000))
					{
						Local_116.f_62C[iVar0] = unk_0xF66E5A439A080021(func_70(iVar0), 0f, 0f, func_69(iVar0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iVar0]), Local_116.f_62C[iVar0], func_72(), func_64(iVar0, Local_116.f_631[iVar0]), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_62C[iVar0]);
						func_63(&(Local_116.f_673[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var11;
	
	bVar5 = 0x00000000;
	if (Local_116.f_5EB[iParam0] > 0x00000004 && Local_116.f_5EB[iParam0] < 0x00000009)
	{
		bVar5 = 0x00000001;
	}
	if ((!func_62(iParam0, bVar5) || Global_265DDB == iParam0) || Local_116.f_5FA[iParam0])
	{
		Local_116.f_5FA[iParam0] = 0x00000001;
		func_61(iParam0);
		return;
	}
	if (unk_0xE9F78D191AD5EDBA(Local_116.f_63B[iParam0]))
	{
		if (!unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
		{
			Local_116.f_604[iParam0] = 0x00000000;
			unk_0x8D30F6387EE75385(Local_116.f_63B[iParam0]);
		}
		else if (!Local_116.f_604[iParam0])
		{
			unk_0x866EE3B81CEF363A(Local_116.f_63B[iParam0], 0x00000000);
			Local_116.f_604[iParam0] = 0x00000001;
		}
	}
	Local_116.f_636[iParam0] = unk_0xF958843510932FF6(Local_116.f_62C[iParam0]);
	switch (Local_116.f_5EB[iParam0])
	{
		case 0x00000000:
			func_60(0x00000001, iParam0);
			break;
		
		case 0x00000001:
			bVar1 = 0x00000001;
			iVar3 = 0x00000000;
			while (iVar3 < 0x00000004)
			{
				iVar2 = Local_116.f_640[(iParam0 * 4 + iVar3)];
				if (iVar2 != 0xFFFFFFFF)
				{
					if (Local_125[iVar2 /*8*/] != 0x00000000 || Local_125[iVar2 /*8*/].f_5 != 0x00000000)
					{
						bVar1 = 0x00000000;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_59(&(Local_116.f_1[iParam0 /*211*/]));
				func_60(0x00000002, iParam0);
			}
			break;
		
		case 0x00000002:
			bVar1 = 0x00000001;
			iVar3 = 0x00000000;
			while (iVar3 < 0x00000004)
			{
				iVar2 = Local_116.f_640[(iParam0 * 4 + iVar3)];
				if (iVar2 != 0xFFFFFFFF)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/].f_5, 0x00000000))
					{
						bVar1 = 0x00000000;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]))) && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
				{
					Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_57(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
					func_47(0x00000004, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				func_60(0x00000003, iParam0);
			}
			break;
		
		case 0x00000003:
			bVar1 = 0x00000001;
			if ((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]))) && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
			{
				if ((Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_57(iParam0), 0x00000003)) && ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D)))
				{
					Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
				{
					if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
					{
						if (Local_116.f_622[iParam0] == 0x00000001)
						{
							if (((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_71(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_46(iParam0, 0xFFFFFFFF), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							}
						}
						else if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000000), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000001), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000002), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000003), 0x00000003))
						{
							Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_45(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
						}
						else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_71(iParam0), 0x00000003))
						{
							if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_68(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							}
						}
						else if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
						{
							Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
						}
					}
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_116.f_63B[iParam0]);
				}
			}
			if (!func_66(&(Local_116.f_66A[iParam0 /*2*/])))
			{
				iVar3 = 0x00000000;
				while (iVar3 < 0x00000004)
				{
					iVar2 = Local_116.f_640[(iParam0 * 4 + iVar3)];
					if (iVar2 != 0xFFFFFFFF)
					{
						if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
						{
							func_67(&(Local_116.f_66A[iParam0 /*2*/]), 0x00000000, 0x00000000);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0x00000000;
				while (iVar3 < 0x00000004)
				{
					iVar2 = Local_116.f_640[(iParam0 * 4 + iVar3)];
					if (iVar2 != 0xFFFFFFFF)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F) && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x00000010))
						{
							bVar1 = 0x00000000;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0x00000000)
				{
					if (bVar1)
					{
						func_63(&(Local_116.f_66A[iParam0 /*2*/]));
						func_47(0x00000010, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF);
						func_60(0x00000004, iParam0);
					}
					else if (func_65(&(Local_116.f_66A[iParam0 /*2*/]), 0x00003A98, 0x00000000))
					{
						if (!func_44(iParam0, 0x00000016))
						{
							if (func_47(0x0000000E, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
							{
								func_43(iParam0, 0x00000016);
							}
						}
					}
				}
				else
				{
					func_63(&(Local_116.f_66A[iParam0 /*2*/]));
				}
			}
			break;
		
		case 0x00000004:
			func_36(iParam0);
			break;
		
		case 0x00000005:
			if (func_35(Local_116.f_34E[iParam0 /*13*/][0x00000001]) == 0x0000000A || func_35(Local_116.f_34E[iParam0 /*13*/][0x00000001]) == 0x0000000B)
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
				{
					if (func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000) == 0x00000015)
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_33(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
							}
							else if (((Local_116.f_636[iParam0] == 0xFFFFFFFF || unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
							{
								unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
								func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
								func_29(iParam0);
								func_60(0x00000009, iParam0);
							}
							else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
							{
								Local_116.f_5F5[iParam0] = 0x00000001;
							}
						}
					}
					else if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_28(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
						}
						else if (((Local_116.f_636[iParam0] == 0xFFFFFFFF || unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
						{
							unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
							func_63(&(Local_116.f_661[iParam0 /*2*/]));
							Local_116.f_5FF[iParam0] = 0x00000000;
							func_60(0x00000006, iParam0);
						}
					}
				}
				else
				{
					func_63(&(Local_116.f_661[iParam0 /*2*/]));
					Local_116.f_5FF[iParam0] = 0x00000000;
					func_60(0x00000006, iParam0);
				}
			}
			else
			{
				func_63(&(Local_116.f_661[iParam0 /*2*/]));
				Local_116.f_5FF[iParam0] = 0x00000000;
				func_60(0x00000006, iParam0);
			}
			break;
		
		case 0x00000006:
			iVar3 = (iParam0 * 4 + Local_116.f_627[iParam0]);
			iVar4 = Local_116.f_640[iVar3];
			if (Local_116.f_627[iParam0] < 0x00000004)
			{
				if ((iVar4 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000F)) && !((!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000E) && func_27(&(Local_116.f_383[iVar4 /*9*/])) == 0x00000015) && Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000002))
				{
					if ((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]))) && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], (0x00000000 + Local_116.f_627[iParam0] * 3)))
						{
							if (((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_71(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_26(iParam0, Local_116.f_627[iParam0], iVar4), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), (0x00000000 + Local_116.f_627[iParam0] * 3));
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], (0x00000001 + Local_116.f_627[iParam0] * 3)))
						{
							if ((Local_116.f_636[iParam0] != 0xFFFFFFFF && ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_26(iParam0, Local_116.f_627[iParam0], iVar4), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), (0x00000001 + Local_116.f_627[iParam0] * 3));
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000E) && (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000D) || unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000B)))
						{
							if (((((((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000000, 0x00000001), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000001, 0x00000001), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000002, 0x00000001), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000003, 0x00000001), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000000, 0x00000000), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000001, 0x00000000), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000002, 0x00000000), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_24(iParam0, 0x00000003, 0x00000000), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_23(iParam0);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), (0x00000001 + Local_116.f_627[iParam0] * 3));
							}
						}
						if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_25(iParam0, 0x00000000, iVar4, 0x00000000), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_25(iParam0, 0x00000001, iVar4, 0x00000000), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_25(iParam0, 0x00000002, iVar4, 0x00000000), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_25(iParam0, 0x00000003, iVar4, 0x00000000), 0x00000003))
						{
							if (!func_66(&(Local_116.f_661[iParam0 /*2*/])))
							{
								func_67(&(Local_116.f_661[iParam0 /*2*/]), 0x00000000, 0x00000000);
							}
							else if (func_65(&(Local_116.f_661[iParam0 /*2*/]), 0x00004E20, 0x00000000))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000001), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							}
						}
						else
						{
							func_63(&(Local_116.f_661[iParam0 /*2*/]));
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], (0x00000001 + Local_116.f_627[iParam0] * 3)))
					{
						if ((unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000E) && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000D)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000B) && Local_116.f_4A4[iVar4 /*9*/].f_8 > 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_61D[iParam0], iVar4))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
								{
									if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
									{
										if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
										{
											Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_22(iParam0, Local_116.f_627[iParam0]), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
											Local_116.f_5FF[iParam0] = 0x00000000;
											func_15(func_21(iParam0, 0x00000000, Local_116.f_627[iParam0], 0x00000001), Local_116.f_383[iVar4 /*9*/][0x00000001], 0x00000000, 0x00000000);
											unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
										}
									}
								}
								else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
									if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
									{
										if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
										{
											if (Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000001)
											{
												Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
												Local_116.f_5FF[iParam0] = 0x00000001;
												func_15(func_21(iParam0, Local_116.f_383[iVar4 /*9*/].f_8, Local_116.f_627[iParam0], 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
											}
											else if (Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000001)
											{
												Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000001), 4f, -4f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
												func_15(func_21(iParam0, Local_116.f_4A4[iVar4 /*9*/].f_8, Local_116.f_627[iParam0], 0x00000001), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
											}
											else
											{
												Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
												unk_0x5D96D8530B3D0904(&(Local_116.f_61D[iParam0]), iVar4);
												unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
												unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
												if (Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000001)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_383[iVar4 /*9*/][0x00000001] = uVar0;
													Local_116.f_383[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar4 /*9*/])), Local_116.f_383[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
												}
												if (Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000001)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_4A4[iVar4 /*9*/][0x00000001] = uVar0;
													Local_116.f_4A4[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_4A4[iVar4 /*9*/])), Local_116.f_4A4[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
												}
											}
										}
									}
									else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000001), 0x00000003))
									{
										if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
										{
											Local_116.f_5FF[iParam0] = 0x00000001;
											if (Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000001)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_4A4[iVar4 /*9*/][0x00000001] = uVar0;
												Local_116.f_4A4[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_4A4[iVar4 /*9*/])), Local_116.f_4A4[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
											}
										}
									}
									else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000000), 0x00000003))
									{
										if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
										{
											if (Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000001)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_383[iVar4 /*9*/][0x00000001] = uVar0;
												Local_116.f_383[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar4 /*9*/])), Local_116.f_383[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
											}
										}
									}
									else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_22(iParam0, Local_116.f_627[iParam0]), 0x00000003))
									{
										if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAFCA521A))
										{
											if (Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000002)
											{
												Local_116 = Local_116.f_383[iVar4 /*9*/][0x00000001];
												Local_116.f_383[iVar4 /*9*/][0x00000001] = 0x00000000;
												Local_116.f_383[iVar4 /*9*/].f_8 = 0x00000001;
											}
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
										{
											if (Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000000)
											{
												Local_116.f_4A4[iVar4 /*9*/][0x00000000] = Local_116;
												Local_116.f_4A4[iVar4 /*9*/].f_8 = 0x00000001;
												Local_116.f_383[iVar4 /*9*/][0x00000001] = 0x00000000;
												Local_116.f_383[iVar4 /*9*/].f_8 = 0x00000001;
												unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
											}
											Local_116.f_5FF[iParam0] = 0x00000001;
										}
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000B))
							{
								if ((((func_27(&(Local_116.f_4A4[iVar4 /*9*/])) < 0x00000015 && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000D)) && Local_116.f_4A4[iVar4 /*9*/].f_8 <= 0x00000006) && Local_116.f_4A4[iVar4 /*9*/].f_8 > 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
								{
									if ((((((unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000005) && Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000002) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000006) && Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000003)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000007) && Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000004)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000008) && Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000005)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000009) && Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000006)) || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
										{
											if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
											{
												if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
												{
													Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
													unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000001), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
													unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
													func_15(func_21(iParam0, Local_116.f_4A4[iVar4 /*9*/].f_8, Local_116.f_627[iParam0], 0x00000001), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
													unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
												}
											}
										}
										else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
										{
											fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
											if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
											{
												if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
												{
													Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
													unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
													unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
													unk_0x5D96D8530B3D0904(&(Local_116.f_61D[iParam0]), iVar4);
													if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
													{
														func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
														Local_116.f_4A4[iVar4 /*9*/][Local_116.f_4A4[iVar4 /*9*/].f_8] = uVar0;
														Local_116.f_4A4[iVar4 /*9*/].f_8++;
														func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_4A4[iVar4 /*9*/])), Local_116.f_4A4[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
														unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
													}
													unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
													unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
												}
											}
											else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
											{
												if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_4A4[iVar4 /*9*/][Local_116.f_4A4[iVar4 /*9*/].f_8] = uVar0;
													Local_116.f_4A4[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_4A4[iVar4 /*9*/])), Local_116.f_4A4[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
													unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
												}
											}
										}
									}
									else if (!func_44(iParam0, 0x00000014))
									{
										if (func_47(0x00000002, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
										{
											func_43(iParam0, 0x00000014);
										}
									}
									else if (func_65(&(Local_116.f_66A[Local_125[iVar4 /*8*/].f_4 /*2*/]), 0x00003A98, 0x00000000))
									{
										if (!func_44(iParam0, 0x00000015))
										{
											if (func_47(0x0000000F, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
											{
												func_43(iParam0, 0x00000015);
											}
										}
									}
								}
							}
							else if (Local_116.f_4A4[iVar4 /*9*/].f_8 == 0x00000002 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
								{
									if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
									{
										if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
										{
											Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000001), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
											func_15(func_21(iParam0, Local_116.f_4A4[iVar4 /*9*/].f_8, Local_116.f_627[iParam0], 0x00000001), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000001);
											unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
										}
									}
								}
								else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
									if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
									{
										if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
										{
											Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_61D[iParam0]), iVar4);
											if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_4A4[iVar4 /*9*/][Local_116.f_4A4[iVar4 /*9*/].f_8] = uVar0;
												Local_116.f_4A4[iVar4 /*9*/].f_8++;
												unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
												func_23(iParam0);
												func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_4A4[iVar4 /*9*/])), Local_116.f_4A4[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
											}
											unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
											unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
										}
									}
									else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_4A4[iVar4 /*9*/][Local_116.f_4A4[iVar4 /*9*/].f_8] = uVar0;
											Local_116.f_4A4[iVar4 /*9*/].f_8++;
											unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
											func_23(iParam0);
											func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_4A4[iVar4 /*9*/])), Local_116.f_4A4[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
										}
									}
								}
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000A))
						{
							if ((((func_27(&(Local_116.f_383[iVar4 /*9*/])) < 0x00000015 && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000C)) && Local_116.f_383[iVar4 /*9*/].f_8 <= 0x00000006) && Local_116.f_383[iVar4 /*9*/].f_8 > 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if ((((((unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000000) && Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000002) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000001) && Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000003)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000002) && Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000004)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000003) && Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000005)) || (unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x00000004) && Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000006)) || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
									{
										if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
										{
											if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
											{
												Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
												func_15(func_21(iParam0, Local_116.f_383[iVar4 /*9*/].f_8, Local_116.f_627[iParam0], 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
												unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
											}
										}
									}
									else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
									{
										fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
										if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
										{
											if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
											{
												if (((!unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000A) && func_27(&(Local_116.f_383[iVar4 /*9*/])) < 0x00000015) && !unk_0xEAE0D21A50E6C7F4(Local_125[iVar4 /*8*/], 0x0000000C)) && Local_116.f_383[iVar4 /*9*/].f_8 <= 0x00000006)
												{
													Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
													unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_25(iParam0, Local_116.f_627[iParam0], iVar4, 0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
													unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
												}
												unk_0x5D96D8530B3D0904(&(Local_116.f_61D[iParam0]), iVar4);
												if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_383[iVar4 /*9*/][Local_116.f_383[iVar4 /*9*/].f_8] = uVar0;
													Local_116.f_383[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar4 /*9*/])), Local_116.f_383[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
													unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
												}
												unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
												unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
											}
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_383[iVar4 /*9*/][Local_116.f_383[iVar4 /*9*/].f_8] = uVar0;
												Local_116.f_383[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar4 /*9*/])), Local_116.f_383[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
												unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
											}
										}
									}
								}
								else if (!func_44(iParam0, 0x00000014))
								{
									if (func_47(0x00000002, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
									{
										func_43(iParam0, 0x00000014);
									}
								}
								else if (func_65(&(Local_116.f_66A[Local_125[iVar4 /*8*/].f_4 /*2*/]), 0x00003A98, 0x00000000))
								{
									if (!func_44(iParam0, 0x00000015))
									{
										if (func_47(0x0000000F, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
										{
											func_43(iParam0, 0x00000015);
										}
									}
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_12(iParam0, Local_116.f_627[iParam0], iVar4), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
									func_23(iParam0);
									Local_116.f_627[iParam0]++;
									Local_116.f_5FF[iParam0] = 0x00000000;
									func_63(&(Local_116.f_661[iParam0 /*2*/]));
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
								}
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
								if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_12(iParam0, Local_116.f_627[iParam0], iVar4), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
									func_23(iParam0);
									Local_116.f_627[iParam0]++;
									Local_116.f_5FF[iParam0] = 0x00000000;
									func_63(&(Local_116.f_661[iParam0 /*2*/]));
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
								}
							}
						}
						else if (Local_116.f_383[iVar4 /*9*/].f_8 == 0x00000002 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
									{
										Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_14(iParam0, Local_116.f_627[iParam0], 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
										func_15(func_21(iParam0, Local_116.f_383[iVar4 /*9*/].f_8, Local_116.f_627[iParam0], 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000001);
										unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
									}
								}
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
								if ((fVar7 >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
									{
										Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_12(iParam0, Local_116.f_627[iParam0], iVar4), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_383[iVar4 /*9*/][Local_116.f_383[iVar4 /*9*/].f_8] = uVar0;
											Local_116.f_383[iVar4 /*9*/].f_8++;
											func_23(iParam0);
											func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar4 /*9*/])), Local_116.f_383[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
											unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
										}
										unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
										unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
										func_23(iParam0);
										Local_116.f_627[iParam0]++;
										Local_116.f_5FF[iParam0] = 0x00000000;
										func_63(&(Local_116.f_661[iParam0 /*2*/]));
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar4 /*9*/][Local_116.f_383[iVar4 /*9*/].f_8] = uVar0;
										Local_116.f_383[iVar4 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar4 /*9*/])), Local_116.f_383[iVar4 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
										unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
									}
								}
							}
						}
					}
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), (0x00000000 + Local_116.f_627[iParam0] * 3));
					unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), (0x00000001 + Local_116.f_627[iParam0] * 3));
					unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), (0x00000002 + Local_116.f_627[iParam0] * 3));
					func_23(iParam0);
					Local_116.f_627[iParam0]++;
					Local_116.f_5FF[iParam0] = 0x00000000;
					func_63(&(Local_116.f_661[iParam0 /*2*/]));
					unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
					unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
				}
			}
			if (Local_116.f_627[iParam0] >= 0x00000004)
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_71(iParam0), 0x00000003))
					{
						if (Local_116.f_636[iParam0] != 0xFFFFFFFF && ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D)))
						{
							if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
								func_60(0x00000007, iParam0);
							}
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
						func_60(0x00000007, iParam0);
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
					func_60(0x00000007, iParam0);
				}
			}
			break;
		
		case 0x00000007:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
				{
					if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
					{
						Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_11(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
					}
				}
				else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
				{
					if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
					{
						unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
						unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
						func_23(iParam0);
						func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
						func_60(0x00000008, iParam0);
					}
					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
					{
						Local_116.f_5F5[iParam0] = 0x00000001;
					}
				}
			}
			else
			{
				unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
				unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
				func_23(iParam0);
				func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
				func_60(0x00000008, iParam0);
			}
			break;
		
		case 0x00000008:
			Local_116.f_5F5[iParam0] = 0x00000001;
			iVar9 = 0x00000000;
			while (iVar9 < 0x00000004)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				iVar4 = Local_116.f_640[iVar3];
				if (iVar4 != func_418())
				{
					if (((((func_27(&(Local_116.f_383[iVar4 /*9*/])) == 0x00000015 && Local_116.f_383[iVar4 /*9*/].f_8 > 0x00000002) && Local_116.f_383[iVar4 /*9*/].f_8 < 0x00000007) || ((func_27(&(Local_116.f_4A4[iVar4 /*9*/])) == 0x00000015 && Local_116.f_4A4[iVar4 /*9*/].f_8 > 0x00000002) && Local_116.f_4A4[iVar4 /*9*/].f_8 < 0x00000007)) || ((func_27(&(Local_116.f_383[iVar4 /*9*/])) < 0x00000015 && Local_116.f_383[iVar4 /*9*/].f_8 >= 0x00000002) && Local_116.f_383[iVar4 /*9*/].f_8 < 0x00000007)) || ((func_27(&(Local_116.f_4A4[iVar4 /*9*/])) < 0x00000015 && Local_116.f_4A4[iVar4 /*9*/].f_8 >= 0x00000002) && Local_116.f_4A4[iVar4 /*9*/].f_8 < 0x00000007))
					{
						iVar8 = 0x00000001;
					}
				}
				iVar9++;
			}
			if (func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000) >= 0x00000011)
			{
				iVar8 = 0x00000000;
			}
			if (iVar8 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_10(iParam0, Local_116.f_34E[iParam0 /*13*/].f_C), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							func_15(func_9(iParam0, Local_116.f_34E[iParam0 /*13*/].f_C), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000001, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
						}
					}
					else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
					{
						fVar7 = unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]);
						if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_34E[iParam0 /*13*/][Local_116.f_34E[iParam0 /*13*/].f_C] = uVar0;
								Local_116.f_34E[iParam0 /*13*/].f_C++;
								func_23(iParam0);
								func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
							}
							unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
							unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000013);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000013))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_34E[iParam0 /*13*/][Local_116.f_34E[iParam0 /*13*/].f_C] = uVar0;
								Local_116.f_34E[iParam0 /*13*/].f_C++;
								func_23(iParam0);
								func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000000), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000013);
							}
						}
					}
				}
			}
			else
			{
				func_29(iParam0);
				func_60(0x00000009, iParam0);
			}
			break;
		
		case 0x00000009:
			Var10 = 0x0000000B;
			Var11 = 0x00000007;
			func_29(iParam0);
			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000D))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_8(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
						}
					}
					else if ((Local_116.f_636[iParam0] != 0xFFFFFFFF && ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))) && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
					{
						unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000D);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000E))
				{
					iVar3 = iParam0 * 4;
					iVar4 = Local_116.f_640[iVar3];
					if (iVar4 != func_418() && iVar4 > 0xFFFFFFFF)
					{
						if (Local_116.f_383[iVar4 /*9*/].f_8 > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_7(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
								}
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000E);
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAFCA521A))
								{
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000E);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000E);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000F))
				{
					iVar3 = iParam0 * 4 + 1;
					iVar4 = Local_116.f_640[iVar3];
					if (iVar4 != func_418() && iVar4 > 0xFFFFFFFF)
					{
						if (Local_116.f_383[iVar4 /*9*/].f_8 > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_6(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
								}
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000F);
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAFCA521A))
								{
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000F);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000F);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000010))
				{
					iVar3 = iParam0 * 4 + 2;
					iVar4 = Local_116.f_640[iVar3];
					if (iVar4 != func_418() && iVar4 > 0xFFFFFFFF)
					{
						if (Local_116.f_383[iVar4 /*9*/].f_8 > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_5(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
								}
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000010);
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAFCA521A))
								{
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000010);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000010);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000011))
				{
					iVar3 = iParam0 * 4 + 3;
					iVar4 = Local_116.f_640[iVar3];
					if (iVar4 != func_418() && iVar4 > 0xFFFFFFFF)
					{
						if (Local_116.f_383[iVar4 /*9*/].f_8 > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_4(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
								}
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
									unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000011);
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAFCA521A))
								{
									Local_116.f_383[iVar4 /*9*/] = { Var11 };
									Local_116.f_4A4[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000011);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000011);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x00000012))
				{
					if (Local_116.f_34E[iParam0 /*13*/].f_C > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], 0x0000000C))
						{
							if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_3(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x0000000C);
							}
						}
						else if (Local_116.f_636[iParam0] != 0xFFFFFFFF && unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
							{
								if (Local_116.f_622[iParam0] == 0x00000001)
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_46(iParam0, 0xFFFFFFFF), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								}
								else
								{
									Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								}
								unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x0000000C);
								unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000012);
								Local_116.f_34E[iParam0 /*13*/] = { Var10 };
							}
							else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAFCA521A))
							{
								Local_116.f_34E[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), 0x00000012);
					}
				}
				else if (!func_66(&(Local_116.f_66A[iParam0 /*2*/])))
				{
					func_67(&(Local_116.f_66A[iParam0 /*2*/]), 0x00000000, 0x00000000);
				}
				else if (func_65(&(Local_116.f_66A[iParam0 /*2*/]), 0x000003E8, 0x00000000))
				{
					Local_116.f_5F5[iParam0] = 0x00000000;
					Local_116.f_627[iParam0] = 0x00000000;
					Local_116.f_613[iParam0] = 0x00000000;
					Local_116.f_61D[iParam0] = 0x00000000;
					func_63(&(Local_116.f_661[iParam0 /*2*/]));
					func_63(&(Local_116.f_66A[iParam0 /*2*/]));
					Local_116.f_618[iParam0]++;
					func_60(0x00000001, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(&(Local_116.f_34E[iParam0 /*13*/]));
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		if (iVar0 > 0x00000015)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
			{
				case 0x00000000:
					return "female_dealer_reaction_good_var01";
				
				case 0x00000001:
					return "female_dealer_reaction_good_var02";
				
				case 0x00000002:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else if (iVar0 == 0x00000015)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
			{
				case 0x00000000:
					return "female_dealer_reaction_bad_var01";
				
				case 0x00000001:
					return "female_dealer_reaction_bad_var02";
				
				case 0x00000002:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
			{
				case 0x00000000:
					return "female_dealer_reaction_impartial_var01";
				
				case 0x00000001:
					return "female_dealer_reaction_impartial_var02";
				
				case 0x00000002:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 0x00000015)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
		{
			case 0x00000000:
				return "reaction_good_var_01";
			
			case 0x00000001:
				return "reaction_good_var_02";
			
			case 0x00000002:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else if (iVar0 == 0x00000015)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_bad_var_01";
			
			case 0x00000001:
				return "reaction_bad_var_02";
			
			case 0x00000002:
				return "reaction_bad_var_03";
			
			case 0x00000003:
				return "reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_impartial_var_01";
			
			case 0x00000001:
				return "reaction_impartial_var_02";
			
			case 0x00000002:
				return "reaction_impartial_var_03";
			
			case 0x00000003:
				return "reaction_impartial_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 0x00000008)
	{
		if (Local_116.f_60E[iParam0] >= 0x00000007)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 0x00000004)
	{
		if (Local_116.f_60E[iParam0] >= 0x00000007)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_116.f_60E[iParam0] >= 0x00000007)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000E)) && !unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000D)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000B) && Local_116.f_4A4[iParam2 /*9*/].f_8 > 0x00000002))
	{
		if (Local_116.f_60E[iParam0] >= 0x00000007)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 0x00000001:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 0x00000002:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 0x00000003:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 0x00000001:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 0x00000002:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 0x00000003:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 0x00000001:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 0x00000002:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 0x00000003:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "dealer_focus_player_01_idle_outro";
			
			case 0x00000001:
				return "dealer_focus_player_02_idle_outro";
			
			case 0x00000002:
				return "dealer_focus_player_03_idle_outro";
			
			case 0x00000003:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_D1 >= uParam0->f_D2)
	{
		return 0x00000000;
	}
	*uParam1 = (*uParam0)[uParam0->f_D1];
	uParam0->f_D1++;
	return 0x00000001;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_hit_second_card_player_01";
				
				case 0x00000001:
					return "female_hit_second_card_player_02";
				
				case 0x00000002:
					return "female_hit_second_card_player_03";
				
				case 0x00000003:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_hit_card_player_01";
				
				case 0x00000001:
					return "female_hit_card_player_02";
				
				case 0x00000002:
					return "female_hit_card_player_03";
				
				case 0x00000003:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "hit_second_card_player_01";
			
			case 0x00000001:
				return "hit_second_card_player_02";
			
			case 0x00000002:
				return "hit_second_card_player_03";
			
			case 0x00000003:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "hit_card_player_01";
			
			case 0x00000001:
				return "hit_card_player_02";
			
			case 0x00000002:
				return "hit_card_player_03";
			
			case 0x00000003:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0 = 0x60D52E14;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000006, func_16(0x00000001, 0x00000001));
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_20(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_17(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_18(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1407E9;
}

int func_20(int iParam0, bool bParam1, bool bParam2)
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

int func_21(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_126.f_101 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_22(int iParam0, int iParam1)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "female_split_card_player_01";
			
			case 0x00000001:
				return "female_split_card_player_02";
			
			case 0x00000002:
				return "female_split_card_player_03";
			
			case 0x00000003:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "split_card_player_01";
			
			case 0x00000001:
				return "split_card_player_02";
			
			case 0x00000002:
				return "split_card_player_03";
			
			case 0x00000003:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_23(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000014);
	unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000015);
	unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000016);
	unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000017);
	unk_0x0674E58A79778E99(&(Local_116.f_613[iParam0]), 0x00000018);
}

char* func_24(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 0x00000001:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 0x00000002:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 0x00000003:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_dealer_focus_player_01_idle_split";
				
				case 0x00000001:
					return "female_dealer_focus_player_02_idle_split";
				
				case 0x00000002:
					return "female_dealer_focus_player_03_idle_split";
				
				case 0x00000003:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 0x00000001:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 0x00000002:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 0x00000003:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "dealer_focus_player_01_idle_split";
			
			case 0x00000001:
				return "dealer_focus_player_02_idle_split";
			
			case 0x00000002:
				return "dealer_focus_player_03_idle_split";
			
			case 0x00000003:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (((iParam2 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000E)) && !unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000D)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000B) && Local_116.f_4A4[iParam2 /*9*/].f_8 > 0x00000002))
	{
		if (Local_116.f_60E[iParam0] >= 0x00000007)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0x00000000:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 0x00000001:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 0x00000002:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 0x00000003:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0x00000000:
						return "female_dealer_focus_player_01_idle_split";
					
					case 0x00000001:
						return "female_dealer_focus_player_02_idle_split";
					
					case 0x00000002:
						return "female_dealer_focus_player_03_idle_split";
					
					case 0x00000003:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 0x00000001:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 0x00000002:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 0x00000003:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "dealer_focus_player_01_idle_split";
				
				case 0x00000001:
					return "dealer_focus_player_02_idle_split";
				
				case 0x00000002:
					return "dealer_focus_player_03_idle_split";
				
				case 0x00000003:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 0x00000001:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 0x00000002:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 0x00000003:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_dealer_focus_player_01_idle";
				
				case 0x00000001:
					return "female_dealer_focus_player_02_idle";
				
				case 0x00000002:
					return "female_dealer_focus_player_03_idle";
				
				case 0x00000003:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "dealer_focus_player_01_idle_impatient";
			
			case 0x00000001:
				return "dealer_focus_player_02_idle_impatient";
			
			case 0x00000002:
				return "dealer_focus_player_03_idle_impatient";
			
			case 0x00000003:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "dealer_focus_player_01_idle";
			
			case 0x00000001:
				return "dealer_focus_player_02_idle";
			
			case 0x00000002:
				return "dealer_focus_player_03_idle";
			
			case 0x00000003:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_418() && unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000E)) && !unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000D)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[iParam2 /*8*/], 0x0000000B) && Local_116.f_4A4[iParam2 /*9*/].f_8 > 0x00000002))
	{
		if (Local_116.f_60E[iParam0] >= 0x00000007)
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 0x00000001:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 0x00000002:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 0x00000003:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0x00000000:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 0x00000001:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 0x00000002:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 0x00000003:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 0x00000001:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 0x00000002:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 0x00000003:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "dealer_focus_player_01_idle_intro";
			
			case 0x00000001:
				return "dealer_focus_player_02_idle_intro";
			
			case 0x00000002:
				return "dealer_focus_player_03_idle_intro";
			
			case 0x00000003:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000007)
	{
		iVar3 = func_35((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 0x0000000B)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 0x00000015 && iVar1 > 0x00000000)
	{
		iVar0 = (iVar0 - 0x0000000A);
		iVar1 = (iVar1 - 0x00000001);
	}
	return iVar0;
}

char* func_28(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_29(int iParam0)
{
	if (func_44(iParam0, 0x00000017))
	{
		return;
	}
	if (func_44(iParam0, 0x00000018))
	{
		if (func_47(0x0000000D, &(Local_116.f_63B[iParam0]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
		{
			func_43(iParam0, 0x00000017);
		}
		return;
	}
	if (func_30(iParam0))
	{
		func_43(iParam0, 0x00000018);
	}
	else
	{
		func_43(iParam0, 0x00000017);
	}
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_116.f_640[iVar1];
		if (iVar2 == func_418())
		{
		}
		else if (!func_31(&iVar2, iParam0))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0x00000000 || iVar0 >= 0x00000020)
	{
		return 0x00000001;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000004)
	{
		return 0x00000001;
	}
	iVar1 = func_34(&(Local_116.f_34E[iParam1 /*13*/]), 0x00000000);
	iVar2 = Local_116.f_34E[iParam1 /*13*/].f_C;
	iVar3 = func_27(&(Local_116.f_383[iVar0 /*9*/]));
	iVar4 = Local_116.f_383[iVar0 /*9*/].f_8;
	iVar5 = func_27(&(Local_116.f_4A4[iVar0 /*9*/]));
	iVar6 = Local_116.f_4A4[iVar0 /*9*/].f_8;
	if (func_32(iVar1, iVar2, iVar3, iVar4) && func_32(iVar1, iVar2, iVar5, iVar6))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0x00000000)
	{
		return 0x00000001;
	}
	bVar0 = (iParam1 == 0x00000002 && iParam0 == 0x00000015);
	bVar1 = (iParam3 == 0x00000002 && iParam2 == 0x00000015);
	if (bVar1)
	{
		return 0x00000000;
	}
	if (bVar0)
	{
		return 0x00000001;
	}
	if (iParam0 > 0x00000015)
	{
		return 0x00000000;
	}
	if (iParam2 > 0x00000015)
	{
		return 0x00000001;
	}
	if (iParam3 >= 0x00000007)
	{
		return 0x00000000;
	}
	if (iParam0 > iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

char* func_33(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x0000000B)
	{
		if (iParam1 && iVar2 == 0x00000000)
		{
		}
		else
		{
			iVar3 = func_35((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 0x0000000B)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 0x00000015 && iVar1 > 0x00000000)
	{
		iVar0 = (iVar0 - 0x0000000A);
		iVar1 = (iVar1 - 0x00000001);
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x0000000F:
		case 0x0000001C:
		case 0x00000029:
			return 0x00000002;
		
		case 0x00000003:
		case 0x00000010:
		case 0x0000001D:
		case 0x0000002A:
			return 0x00000003;
		
		case 0x00000004:
		case 0x00000011:
		case 0x0000001E:
		case 0x0000002B:
			return 0x00000004;
		
		case 0x00000005:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000002C:
			return 0x00000005;
		
		case 0x00000006:
		case 0x00000013:
		case 0x00000020:
		case 0x0000002D:
			return 0x00000006;
		
		case 0x00000007:
		case 0x00000014:
		case 0x00000021:
		case 0x0000002E:
			return 0x00000007;
		
		case 0x00000008:
		case 0x00000015:
		case 0x00000022:
		case 0x0000002F:
			return 0x00000008;
		
		case 0x00000009:
		case 0x00000016:
		case 0x00000023:
		case 0x00000030:
			return 0x00000009;
		
		case 0x0000000A:
		case 0x00000017:
		case 0x00000024:
		case 0x00000031:
		case 0x0000000B:
		case 0x00000018:
		case 0x00000025:
		case 0x00000032:
		case 0x0000000C:
		case 0x00000019:
		case 0x00000026:
		case 0x00000033:
		case 0x0000000D:
		case 0x0000001A:
		case 0x00000027:
		case 0x00000034:
			return 0x0000000A;
		
		case 0x00000001:
		case 0x0000000E:
		case 0x0000001B:
		case 0x00000028:
			return 0x0000000B;
		
		default:
	}
	return 0x00000000;
}

void func_36(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_116.f_5E6[iParam0])
	{
		case 0x00000000:
			iVar2 = Local_116.f_640[iParam0 * 4];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_42(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_42(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000001, iParam0);
			}
			break;
		
		case 0x00000001:
			iVar2 = Local_116.f_640[iParam0 * 4 + 1];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_40(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_40(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000001, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000002, iParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = Local_116.f_640[iParam0 * 4 + 2];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_39(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_39(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000002, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000003, iParam0);
			}
			break;
		
		case 0x00000003:
			iVar2 = Local_116.f_640[iParam0 * 4 + 3];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_38(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_38(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000003, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000000)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000000] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000004, iParam0);
			}
			break;
		
		case 0x00000004:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_37(iParam0), 0x00000003))
					{
						Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_37(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
						func_15(func_9(iParam0, 0x00000000), 0x00000000, 0x00000001, 0x00000000);
					}
					else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
					{
						if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
						{
							bVar1 = 0x00000001;
							if (Local_116.f_34E[iParam0 /*13*/].f_C == 0x00000000)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_34E[iParam0 /*13*/][0x00000000] = uVar0;
								Local_116.f_34E[iParam0 /*13*/].f_C++;
								func_23(iParam0);
							}
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
						{
							if (Local_116.f_34E[iParam0 /*13*/].f_C == 0x00000000)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_34E[iParam0 /*13*/][0x00000000] = uVar0;
								Local_116.f_34E[iParam0 /*13*/].f_C++;
								func_23(iParam0);
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
						if (Local_116.f_34E[iParam0 /*13*/].f_C == 0x00000000)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_34E[iParam0 /*13*/][0x00000000] = uVar0;
							Local_116.f_34E[iParam0 /*13*/].f_C++;
							func_23(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000005, iParam0);
			}
			break;
		
		case 0x00000005:
			iVar2 = Local_116.f_640[iParam0 * 4];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_42(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_42(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000006, iParam0);
			}
			break;
		
		case 0x00000006:
			iVar2 = Local_116.f_640[iParam0 * 4 + 1];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_40(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_40(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000001, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000007, iParam0);
			}
			break;
		
		case 0x00000007:
			iVar2 = Local_116.f_640[iParam0 * 4 + 2];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_39(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_39(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000002, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000008, iParam0);
			}
			break;
		
		case 0x00000008:
			iVar2 = Local_116.f_640[iParam0 * 4 + 3];
			if (iVar2 >= 0x00000000)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && unk_0xEAE0D21A50E6C7F4(Local_125[iVar2 /*8*/], 0x0000000F))
				{
					if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
					{
						if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
						{
							if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_38(iParam0), 0x00000003))
							{
								Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_38(iParam0), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
								func_15(func_21(iParam0, Local_116.f_383[iVar2 /*9*/].f_8, 0x00000003, 0x00000000), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000000, 0x00000000);
							}
							else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
							{
								if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
								{
									bVar1 = 0x00000001;
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
								else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
								{
									if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
										Local_116.f_383[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
									}
								}
							}
							else
							{
								bVar1 = 0x00000001;
								if (Local_116.f_383[iVar2 /*9*/].f_8 == 0x00000001)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_383[iVar2 /*9*/][0x00000001] = uVar0;
									Local_116.f_383[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_27(&(Local_116.f_383[iVar2 /*9*/])), Local_116.f_383[iVar2 /*9*/].f_8, 0x00000000, 0xFFFFFFFF);
								}
							}
						}
					}
					else
					{
						bVar1 = 0x00000001;
					}
				}
				else
				{
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				bVar1 = 0x00000000;
				func_41(0x00000009, iParam0);
			}
			break;
		
		case 0x00000009:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
				{
					if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_58(), func_10(iParam0, 0x00000000), 0x00000003))
					{
						Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_58(), func_10(iParam0, 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
						func_15(func_9(iParam0, 0x00000001), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_D1], 0x00000001, 0x00000000);
					}
					else if (Local_116.f_636[iParam0] != 0xFFFFFFFF)
					{
						if ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D))
						{
							Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
							if (Local_116.f_34E[iParam0 /*13*/].f_C == 0x00000001)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_34E[iParam0 /*13*/][0x00000001] = uVar0;
								Local_116.f_34E[iParam0 /*13*/].f_C++;
								func_23(iParam0);
								func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000001), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
							}
							bVar1 = 0x00000001;
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x22E6E76C))
						{
							if (Local_116.f_34E[iParam0 /*13*/].f_C == 0x00000001)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_34E[iParam0 /*13*/][0x00000001] = uVar0;
								Local_116.f_34E[iParam0 /*13*/].f_C++;
								func_23(iParam0);
								func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000001), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
							}
						}
					}
					else
					{
						Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
						bVar1 = 0x00000001;
						if (Local_116.f_34E[iParam0 /*13*/].f_C == 0x00000001)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_34E[iParam0 /*13*/][0x00000001] = uVar0;
							Local_116.f_34E[iParam0 /*13*/].f_C++;
							func_23(iParam0);
							func_47(0x00000003, &(Local_116.f_63B[iParam0]), func_34(&(Local_116.f_34E[iParam0 /*13*/]), 0x00000001), Local_116.f_34E[iParam0 /*13*/].f_C, 0x00000001, 0xFFFFFFFF);
						}
					}
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				func_41(0x00000000, iParam0);
				func_60(0x00000005, iParam0);
			}
			break;
	}
}

char* func_37(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_38(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_39(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_40(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_41(int iParam0, int iParam1)
{
	Local_116.f_5E6[iParam1] = iParam0;
}

char* func_42(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_43(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return;
	}
	if (iParam0 < 0x00000000 || iParam0 > 0x00000004)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_613[iParam0]), iParam1);
}

bool func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	if (iParam0 < 0x00000000 || iParam0 > 0x00000004)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_613[iParam0], iParam1);
}

char* func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000000), 0x00000003))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000001), 0x00000003))
	{
		iVar0 = 0x00000001;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000002), 0x00000003))
	{
		iVar0 = 0x00000002;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_46(iParam0, 0x00000003), 0x00000003))
	{
		iVar0 = 0x00000003;
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000004)
	{
		if (iVar2 != iVar0 && Local_116.f_640[(iParam0 * 4 + iVar2)] != func_418())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (iVar1)
		{
			case 0x00000000:
				return "female_acknowledge_p01";
			
			case 0x00000001:
				return "female_acknowledge_p02";
			
			case 0x00000002:
				return "female_acknowledge_p03";
			
			case 0x00000003:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0x00000000:
				return "acknowledge_p01";
			
			case 0x00000001:
				return "acknowledge_p02";
			
			case 0x00000002:
				return "acknowledge_p03";
			
			case 0x00000003:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (Local_116.f_640[(iParam0 * 4 + iVar1)] != func_418())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0x00000000)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return "female_idle_single_p01";
			
			case 0x00000001:
				return "female_idle_single_p02";
			
			case 0x00000002:
				return "female_idle_single_p03";
			
			case 0x00000003:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return "idle_single_p01";
			
			case 0x00000001:
				return "idle_single_p02";
			
			case 0x00000002:
				return "idle_single_p03";
			
			case 0x00000003:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	if (iParam0 == 0x00000003)
	{
		if (iParam2 > 0x00000015)
		{
			if (bParam4)
			{
				iParam0 = 0x0000000C;
			}
			else
			{
				iParam0 = 0x00000000;
			}
		}
		else if (iParam2 == 0x00000015)
		{
			if (iParam3 == 0x00000002)
			{
				iParam0 = 0x00000001;
			}
		}
	}
	StringCopy(&cVar0, func_49(iParam0, iParam2, iParam5), 64);
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return 0x00000000;
	}
	iVar1 = unk_0x1B50683925F00106(*uParam1);
	if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xE5DBF9B6126856CA(*uParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar1))
	{
		return 0x00000000;
	}
	if (unk_0x65636D4556D82155(iVar1))
	{
		return 0x00000000;
	}
	sVar2 = func_48(0x00000007);
	unk_0xC8B576D6F470FFC6(iVar1, &cVar0, sVar2, 0x00000001);
	return 0x00000001;
}

int func_48(int iParam0)
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

char* func_49(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 0x00000001:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 0x00000002:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 0x00000003:
			return func_56(iParam1);
		
		case 0x00000004:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 0x00000005:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 0x00000007:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 0x00000006:
			return func_50(iParam2);
		
		case 0x00000008:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 0x00000009:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 0x0000000A:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 0x0000000B:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 0x0000000C:
			return "MINIGAME_DEALER_BUSTS";
		
		case 0x0000000D:
			return "MINIGAME_DEALER_WINS";
		
		case 0x0000000F:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 0x00000010:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 0x0000000E:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_20(iVar1, 0x00000001, 0x00000001))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x9539D44F3E4492F6(iVar1);
	if (func_54(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_52(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_51(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_51(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_125[*iParam0 /*8*/].f_4;
	return func_53(iVar0, Local_126.f_101);
}

int func_53(int iParam0, int iParam1)
{
	if ((iParam0 == 0x00000002 || iParam0 == 0x00000003) || iParam1 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_54(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_55(iParam0) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!Global_A58F[iVar0 /*5*/] == 0xFFFFFFFF)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

char* func_56(int iParam0)
{
	if (iParam0 <= 0x00000001 || iParam0 > 0x00000015)
	{
		return "";
	}
	switch (iParam0)
	{
		case 0x00000002:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 0x00000003:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 0x00000004:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 0x00000005:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 0x00000006:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 0x00000007:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 0x00000008:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 0x00000009:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 0x0000000A:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 0x0000000B:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 0x0000000C:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 0x0000000D:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 0x0000000E:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 0x0000000F:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 0x00000010:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 0x00000011:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 0x00000012:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 0x00000013:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 0x00000014:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 0x00000015:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_57(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_58()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_59(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_D1 = 0x00000000;
	uParam0->f_D2 = 0x000000D0;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000005)
	{
		iVar2 = 0x00000000;
		while (iVar2 < uParam0->f_D2)
		{
			iVar1 = unk_0xA0A5F9CC633A6814(0x00000000, uParam0->f_D2);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_60(int iParam0, int iParam1)
{
	Local_116.f_5EB[iParam1] = iParam0;
}

void func_61(int iParam0)
{
	struct<13> Var0;
	
	Local_116.f_5FA[iParam0] = 0x00000001;
	if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iParam0])))
	{
		if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), func_72(), func_71(iParam0), 0x00000003))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_63B[iParam0]))
			{
				Local_116.f_636[iParam0] = unk_0xF958843510932FF6(Local_116.f_62C[iParam0]);
				if (Local_116.f_636[iParam0] == 0xFFFFFFFF || ((unk_0xA45992A6CE82FB43(Local_116.f_636[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), 0x7E26188D)))
				{
					Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
				}
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_63B[iParam0]);
			}
			return;
		}
	}
	Local_116.f_613[iParam0] = 0x00000000;
	Local_116.f_61D[iParam0] = 0x00000000;
	func_63(&(Local_116.f_661[iParam0 /*2*/]));
	Var0 = 0x0000000B;
	Local_116.f_34E[iParam0 /*13*/] = { Var0 };
	Local_116.f_5F5[iParam0] = 0x00000000;
	Local_116.f_627[iParam0] = 0x00000000;
	func_63(&(Local_116.f_66A[iParam0 /*2*/]));
	func_73(0x00000001, iParam0);
	func_60(0x00000000, iParam0);
	func_41(0x00000000, iParam0);
	Local_116.f_618[iParam0]++;
	Local_116.f_5FA[iParam0] = 0x00000000;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (bParam1)
		{
			if (Local_116.f_640[(iParam0 * 4 + iVar1)] != func_418() && Local_116.f_383[Local_116.f_640[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0x00000000)
			{
				iVar0++;
			}
		}
		else if (Local_116.f_640[(iParam0 * 4 + iVar1)] != func_418())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_116.f_622[iParam0] != iVar0)
	{
		Local_116.f_622[iParam0] = iVar0;
	}
	if (iVar0 > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

char* func_64(int iParam0, int iParam1)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "female_acknowledge_p01";
			
			case 0x00000001:
				return "female_acknowledge_p02";
			
			case 0x00000002:
				return "female_acknowledge_p03";
			
			case 0x00000003:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "acknowledge_p01";
			
			case 0x00000001:
				return "acknowledge_p02";
			
			case 0x00000002:
				return "acknowledge_p03";
			
			case 0x00000003:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_65(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_67(uParam0, bParam2, 0x00000000);
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

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(var uParam0, bool bParam1, bool bParam2)
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

char* func_68(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "female_idle_var_01";
			
			case 0x00000001:
				return "female_idle_var_02";
			
			case 0x00000002:
				return "female_idle_var_03";
			
			case 0x00000003:
				return "female_idle_var_04";
			
			case 0x00000004:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "idle_var_01";
			
			case 0x00000001:
				return "idle_var_02";
			
			case 0x00000002:
				return "idle_var_03";
			
			case 0x00000003:
				return "idle_var_04";
			
			case 0x00000004:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_69(int iParam0)
{
	if (Local_126.f_101 == 0x00000001)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return -134.69f;
			
			case 0x00000001:
				return 45.31f;
			
			case 0x00000002:
				return 135.31f;
			
			case 0x00000003:
				return 135.31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_70(int iParam0)
{
	if (Local_126.f_101 == 0x00000001)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 1148.837f, 269.747f, -52.8409f;
			
			case 0x00000001:
				return 1151.84f, 266.747f, -52.8409f;
			
			case 0x00000002:
				return 1129.406f, 262.3578f, -52.041f;
			
			case 0x00000003:
				return 1144.429f, 247.3352f, -52.041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0)
{
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_72()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_73(int iParam0, int iParam1)
{
	Local_116.f_5F0[iParam1] = iParam0;
}

void func_74(var uParam0)
{
	var uVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0x000000D0;
	iVar3 = 0x00000000;
	while (iVar3 < 0x000000D0)
	{
		iVar1 = unk_0xA0A5F9CC633A6814(0x00000000, iVar2);
		iVar4 = 0x00000000;
		while (iVar4 < 0x000000D0)
		{
			iVar6 = (iVar4 / 0x00000020);
			iVar7 = (iVar4 % 0x00000020);
			if (iVar5 == iVar1 && !unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
			{
				unk_0x5D96D8530B3D0904(&(uVar0[iVar6]), iVar7);
				while (iVar4 + 1 > 0x00000034)
				{
					iVar4 = (iVar4 - 0x00000034);
				}
				(*uParam0)[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0x00000000;
		iVar2 = (iVar2 - 0x00000001);
		iVar3++;
	}
	uParam0->f_D2 = 0x000000D0;
}

void func_75()
{
	int iVar0;
	
	if (!func_80(unk_0xD803B885F5E47A62()))
	{
		iVar0 = iLocal_160;
		if (Global_265DDB != iVar0 && (Global_265DDB != 0xFFFFFFFF || func_424(unk_0xD803B885F5E47A62())))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar0]))
			{
				func_77(iVar0);
			}
		}
		else if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar0]))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_63B[iVar0]))
			{
				func_76(&(Local_116.f_63B[iVar0]));
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_63B[iVar0]);
			}
		}
	}
	iLocal_160++;
	if (iLocal_160 >= Local_126.f_101)
	{
		iLocal_160 = 0x00000000;
	}
}

void func_76(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x1422D45B;
	if (Local_116.f_60E[iParam0] >= 0x00000007)
	{
		iVar0 = 0xBC92BED5;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	unk_0x3F423BF5B8125A50(func_72());
	if (!unk_0xB4AE0788C1587752(func_72()))
	{
		return;
	}
	if (!unk_0xE5DBF9B6126856CA(Local_116.f_63B[iParam0]))
	{
		if (unk_0xA3FA8B6D2780D661(0x00000001))
		{
			iVar1 = unk_0x36F2404464202779(0x0000001A, iVar0, func_70(iParam0), func_69(iParam0), 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(iVar0);
			unk_0x98868AF51859FC75(iVar1, 0x00000000);
			unk_0x20EC6650986ACDC7(iVar1, 0x00000000);
			unk_0x11AD11297DC58CC7(iVar1, 0x00000001);
			unk_0x9DD8618CA5BF832D(iVar1, 0x000000F9, 0x00000001);
			unk_0x4E885A246A9D983A(iVar1, 0x000000B9, 0x00000001);
			unk_0x4E885A246A9D983A(iVar1, 0x0000006C, 0x00000001);
			unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			unk_0xC3BED1CE092AB15D(iVar1, 0x00000001);
			unk_0xC978532B427F303B(iVar1, 0x00000000);
			unk_0x004A9F3F2E1E4B43(iVar1, 0x00000001);
			unk_0xF4CB0B98F8F79D8D(iVar1, 0x00000000);
			unk_0x4E885A246A9D983A(iVar1, 0x000000D0, 0x00000001);
			unk_0x46CB381A452EF99D(iVar1, 0x00000000);
			func_79(Local_116.f_60E[iParam0], &iVar1);
			func_78(Local_116.f_60E[iParam0], &iVar1);
			unk_0x08841CDB215AE18F(iVar1, func_70(iParam0), 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(iVar1, func_69(iParam0));
			Local_116.f_63B[iParam0] = unk_0xE8C9CB886096272A(iVar1);
			unk_0x866EE3B81CEF363A(Local_116.f_63B[iParam0], 0x00000000);
			Local_116.f_604[iParam0] = 0x00000001;
			Local_116.f_62C[iParam0] = unk_0xF66E5A439A080021(func_70(iParam0), 0f, 0f, func_69(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
			unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_63B[iParam0]), Local_116.f_62C[iParam0], func_72(), func_71(iParam0), 1000f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
			unk_0x914E6894744915F8(Local_116.f_62C[iParam0]);
			unk_0x8D17794CE3273D70(func_58());
		}
	}
}

void func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 0x00000001:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x00000002:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 0x00000003:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x00000004:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 0x00000005:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 0x00000006:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 0x00000007:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x00000008:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 0x00000009:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x0000000A:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 0x0000000B:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 0x0000000C:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 0x0000000D:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000003:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000004:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000006:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000007:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000002, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000003, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000B:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000003, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			break;
	}
}

int func_80(int iParam0)
{
	if (iParam0 != func_418() && func_20(iParam0, 0x00000001, 0x00000001))
	{
		if (func_81(iParam0) && !func_423(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_81(int iParam0)
{
	if (iParam0 != func_418() && func_20(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

void func_82()
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	
	Var0 = 0x00000007;
	bVar1 = 0x00000000;
	iVar2 = iLocal_159;
	if (Local_125[iVar2 /*8*/].f_4 == 0xFFFFFFFF)
	{
		Local_116.f_383[iVar2 /*9*/] = { Var0 };
		Local_116.f_4A4[iVar2 /*9*/] = { Var0 };
	}
	if (Local_125[iVar2 /*8*/].f_6 == 0x00000000)
	{
		if (Local_116.f_5C5[iVar2] != 0x00000000)
		{
			Local_116.f_5C5[iVar2] = 0x00000000;
		}
	}
	if (!bVar1)
	{
		if (func_83(iVar2))
		{
			bVar1 = 0x00000001;
		}
	}
	iLocal_159++;
	if (iLocal_159 >= 0x00000020)
	{
		iLocal_159 = 0x00000000;
	}
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_415())
	{
		return 0x00000000;
	}
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return 0x00000000;
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_20(iVar1, 0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	iVar2 = Local_125[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0x00000000 || iVar2 >= 0x00000004)
	{
		return 0x00000000;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 0x00000001)
	{
		if (func_47(0x00000006, &(Local_116.f_63B[iVar2]), 0xFFFFFFFF, 0x00000000, 0x00000000, iParam0))
		{
			func_84(iParam0, 0x00000001);
		}
		return 0x00000001;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 0x00000002)
	{
		if (func_47(0x00000007, &(Local_116.f_63B[iVar2]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
		{
			func_84(iParam0, 0x00000002);
		}
		return 0x00000001;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 0x00000004)
	{
		if (func_47(0x00000008, &(Local_116.f_63B[iVar2]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
		{
			func_84(iParam0, 0x00000004);
		}
		return 0x00000001;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 0x00000005)
	{
		if (func_47(0x00000009, &(Local_116.f_63B[iVar2]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
		{
			func_84(iParam0, 0x00000005);
		}
		return 0x00000001;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 0x00000006)
	{
		if (func_47(0x0000000A, &(Local_116.f_63B[iVar2]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
		{
			func_84(iParam0, 0x00000006);
		}
		return 0x00000001;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 0x00000007)
	{
		if (func_47(0x0000000B, &(Local_116.f_63B[iVar2]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0xFFFFFFFF))
		{
			func_84(iParam0, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0x00000000 || iVar0 >= 0x00000020)
	{
		return;
	}
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000020)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_5C5[iParam0]), iVar0);
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_158;
	if (Local_116.f_640[iVar0] != func_418())
	{
		iVar1 = Local_116.f_640[iVar0];
		if (((!func_20(Local_116.f_640[iVar0], 0x00000001, 0x00000001) || Local_125[iVar1 /*8*/].f_3 == 0xFFFFFFFF) || Local_125[iVar1 /*8*/].f_3 != iVar0) || !unk_0xFB75B0F82CA525F6(Local_116.f_640[iVar0]))
		{
			Local_116.f_640[iVar0] = func_418();
			if (Local_116.f_5C5[iVar0] != 0x00000000)
			{
				Local_116.f_5C5[iVar0] = 0x00000000;
			}
		}
	}
	if (func_20(iVar0, 0x00000001, 0x00000001) && unk_0xFB75B0F82CA525F6(iVar0))
	{
		if (Local_125[iVar0 /*8*/].f_3 > 0xFFFFFFFF && Local_125[iVar0 /*8*/].f_3 < 0x00000020)
		{
			if (Local_116.f_640[Local_125[iVar0 /*8*/].f_3] == func_418())
			{
				if (func_20(unk_0x117658E336116132(iVar0), 0x00000001, 0x00000001))
				{
					Local_116.f_640[Local_125[iVar0 /*8*/].f_3] = unk_0x117658E336116132(iVar0);
				}
			}
		}
	}
	iLocal_158++;
	if (iLocal_158 >= 0x00000020)
	{
		iLocal_158 = 0x00000000;
	}
}

void func_86()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	vector3 vVar7;
	
	func_412();
	if (!Local_126.f_EC)
	{
		if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_419() /*421*/].f_136.f_4, 0x00000004))
			{
				Local_126.f_EC = 0x00000001;
				func_411();
				func_410();
				iLocal_153 = 0x00000001;
			}
		}
	}
	else if (iLocal_153)
	{
		if (func_409())
		{
			iLocal_153 = 0x00000000;
		}
	}
	func_405();
	func_400();
	Local_126.f_F8 = func_397();
	func_378();
	if (Local_126.f_1 > 0x00000002)
	{
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000D2, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D2);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x0000001A, 0x00000001);
		if (unk_0x9A01369A10646AFE(0x00000002, 0x000000D2))
		{
		}
		if (func_377(Local_126.f_F7) >= 0x00000000 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_70(func_377(Local_126.f_F7)), 0x00000001) > 5f)
		{
			func_371(0x00000000);
		}
	}
	if (Local_126.f_1 > 0x00000005)
	{
		unk_0x3FC8DBCC154CA56B();
		unk_0xB8E3919889462ACD();
		unk_0x5024DE80A08E9E70(0x00000013);
		func_369(0x00000001);
		func_368(0x00000001, 0x00000000);
	}
	if (Local_126.f_1 > 0x00000006)
	{
		unk_0x38C3A68D7861DCFD(0x00000002, 0x00000000, 0x00000001);
		if (unk_0x9A01369A10646AFE(0x00000002, 0x00000000))
		{
			if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000000)
			{
				unk_0x398B6B43792F03FE(0x00000000, 0x00000004);
			}
			else if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
			{
				unk_0x398B6B43792F03FE(0x00000000, 0x00000000);
			}
		}
		unk_0x2DA67FDB9E5F446F();
	}
	if (Local_126.f_1 > 0x00000007)
	{
		func_364(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]));
	}
	if (func_363())
	{
		bLocal_155 = 0x00000001;
	}
	else if (bLocal_155)
	{
		func_362(&uLocal_156, 0x00000000, 0x00000000);
		bLocal_155 = 0x00000000;
	}
	else if (func_66(&uLocal_156) && func_65(&uLocal_156, 0x000001F4, 0x00000000))
	{
		func_63(&uLocal_156);
	}
	switch (Local_126.f_1)
	{
		case 0x00000000:
			if (func_361())
			{
				Local_126.f_62E = "idle_cardgames";
				Local_126.f_FC = 0x00000000;
				Local_125[unk_0xD803B885F5E47A62() /*8*/] = 0x00000000;
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 = 0xFFFFFFFF;
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 = 0xFFFFFFFF;
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0x00000000;
				func_360(unk_0xD803B885F5E47A62());
				func_359(0x00000001);
			}
			break;
		
		case 0x00000001:
			switch (func_377(Local_126.f_F7))
			{
				case 0x00000000:
				case 0x00000001:
					bVar0 = 0x00000000;
					Local_126.f_F5 = 0x00001388;
					Local_126.f_F6 = 0x0000000A;
					break;
				
				case 0x00000002:
				case 0x00000003:
					bVar0 = 0x00000001;
					Local_126.f_F5 = 0x0000C350;
					Local_126.f_F6 = 0x000003E8;
					break;
			}
			if (Local_126.f_101 == 0x00000001)
			{
				bVar0 = 0x00000001;
				Local_126.f_F5 = 0x0000C350;
				Local_126.f_F6 = 0x000003E8;
			}
			Local_126.f_F4 = Local_126.f_F6;
			if ((((((((((((((((((((((((!Global_40001.f_6632 && !(Global_40001.f_6634 && !bVar0)) && !(Global_40001.f_6633 && bVar0)) && ((func_358(0x5E44B073) || func_358(0x103C9460)) || func_424(unk_0xD803B885F5E47A62()))) && func_356(unk_0x16F2683693E537C9(), func_357(Local_126.f_F7), 1.5f)) && func_351(unk_0x16F2683693E537C9(), func_355(Local_126.f_F7), 40f)) && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000000) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_199459.f_4, 0x00000002)) && !Global_24B2D0.f_A70) && Global_265DDB != func_377(Local_126.f_F7)) && (Global_265DDB != 0xFFFFFFFF || func_424(unk_0xD803B885F5E47A62()))) && func_350()) && !func_344()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_341(unk_0x16F2683693E537C9()) <= 0x00000009) && !Global_24B2D0.f_A70) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_340()) && !func_339()) && !func_337()) && !Global_258C2B.f_C) && Global_199453 != 0x0000001F) && !func_336())
			{
				func_359(0x00000002);
			}
			else
			{
				Local_126.f_F7++;
				if (Local_126.f_F7 >= Local_126.f_101 * 4)
				{
					Local_126.f_F7 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			func_335();
			func_360(unk_0xD803B885F5E47A62());
			if (((((((((((((((((((((func_358(0x5E44B073) || func_358(0x103C9460)) || func_424(unk_0xD803B885F5E47A62())) && func_356(unk_0x16F2683693E537C9(), func_357(Local_126.f_F7), 1.5f)) && func_351(unk_0x16F2683693E537C9(), func_355(Local_126.f_F7), 40f)) && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000000) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000000) && Global_265DDB != func_377(Local_126.f_F7)) && (Global_265DDB != 0xFFFFFFFF || func_424(unk_0xD803B885F5E47A62()))) && func_350()) && !func_344()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_341(unk_0x16F2683693E537C9()) <= 0x00000009) && !Global_24B2D0.f_A70) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_340()) && !func_339()) && !func_337()) && !Global_258C2B.f_C) && Global_199453 != 0x0000001F) && !func_336())
			{
				if ((((((func_20(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_334()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !bLocal_155) && !func_66(&uLocal_156))
				{
					if (func_332(0x00000001, &uVar1))
					{
						if (!func_331("BJACK_NA"))
						{
							func_330("BJACK_NA");
						}
					}
					else if (Local_116.f_640[Local_126.f_F7] != func_418())
					{
						if (!func_331("BJACK_USED"))
						{
							func_330("BJACK_USED");
						}
					}
					else if (func_329())
					{
						if (func_325() == 0x00000002)
						{
							if (!func_331("CAS_MG_CTIME"))
							{
								func_330("CAS_MG_CTIME");
							}
						}
						else if (!func_331("CAS_MG_CBAN"))
						{
							func_330("CAS_MG_CBAN");
						}
					}
					else if ((!func_324(unk_0xD803B885F5E47A62()) && (func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003)) && !(func_323(0x00000001) && func_324(func_322())))
					{
						if (!func_331("CAS_MG_SUITE2"))
						{
							func_330("CAS_MG_SUITE2");
						}
					}
					else if (!func_321() && !(func_323(0x00000001) && func_320(func_322())))
					{
						if (!func_318("CAS_MG_MEMB2", func_319(0x00000001)))
						{
							func_317("CAS_MG_MEMB2", func_319(0x00000001));
						}
						else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000034))
						{
							unk_0xA37A90C62806D848(0x00000001);
							func_316();
							func_359(0x00000003);
						}
					}
					else if (Local_126.f_F8 <= 0x00000000)
					{
						if (func_424(unk_0xD803B885F5E47A62()))
						{
							if (!func_331("CAS_MG_NOCHIPS6"))
							{
								func_330("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_331("CAS_MG_NOCHIPS2"))
						{
							func_330("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_126.f_F8 < Local_126.f_F6)
					{
						if (func_424(unk_0xD803B885F5E47A62()))
						{
							if (!func_331("CAS_MG_LOWCHIPS6"))
							{
								func_330("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_331("CAS_MG_LOWCHIPS2"))
						{
							func_330("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_126.f_103 == 0xFFFFFFFF)
					{
						if (func_315())
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						if (((!func_324(unk_0xD803B885F5E47A62()) && (func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003)) && !(func_323(0x00000001) && func_324(func_322()))) || (!func_321() && (func_323(0x00000001) && func_320(func_322()))))
						{
							if (func_312(func_322()) == 0x00000001)
							{
								Local_126.f_100 = 0x00000001;
								func_311(&(Local_126.f_103), 0x00000004, "BJACK_PLAY_A", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (func_310(func_322()))
							{
								Local_126.f_100 = 0x00000002;
								func_311(&(Local_126.f_103), 0x00000004, "BJACK_PLAY_B", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								Local_126.f_100 = 0x00000003;
								func_311(&(Local_126.f_103), 0x00000004, "BJACK_PLAY_C", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else
						{
							Local_126.f_100 = 0x00000000;
							func_311(&(Local_126.f_103), 0x00000004, "BJACK_PLAY", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (func_309(Local_126.f_103, 0x00000001))
					{
						func_307(&(Local_126.f_103));
						Local_126.f_103 = 0xFFFFFFFF;
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B9, 0x00000001);
						func_306();
						func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00100100, 0x00000000);
						if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						}
						func_359(0x00000004);
					}
				}
				else
				{
					if (func_315())
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (Local_126.f_103 != 0xFFFFFFFF)
					{
						func_307(&(Local_126.f_103));
						Local_126.f_103 = 0xFFFFFFFF;
					}
					Local_126.f_F7 = 0x00000000;
					func_359(0x00000001);
				}
			}
			else
			{
				if (func_315())
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (Local_126.f_103 != 0xFFFFFFFF)
				{
					func_307(&(Local_126.f_103));
					Local_126.f_103 = 0xFFFFFFFF;
				}
				Local_126.f_F7 = 0x00000000;
				func_359(0x00000001);
			}
			break;
		
		case 0x00000003:
			if (!func_295())
			{
				func_359(0x00000002);
			}
			break;
		
		case 0x00000004:
			func_369(0x00000001);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003) || func_424(unk_0xD803B885F5E47A62()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_5, 0x00000015))
			{
				func_362(&(Local_126.f_62A), 0x00000000, 0x00000000);
				func_294(Local_126.f_F7);
				if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
				{
					func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
				}
				func_359(0x00000005);
			}
			else
			{
				unk_0x0D3BE1DE0262A012(sVar2, 0x00000000);
				if (func_292(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0x27117E2CDD4D67C3(sVar2))
				{
					if (!iLocal_154)
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 0x00000001);
						func_291(0x00000000, 0x00000000);
						func_289(0x00000001, sVar2, sVar2);
						func_288("BJACK_TITLE");
						func_287(0xFFFFFFFF, 0x00000001, 0x00000001);
						func_286("BJACK_DIS", 0x00000000, 0x00000000);
						func_285("BJACK_DIS1");
						func_285("BJACK_DIS2");
						func_285("BJACK_DIS3");
						func_284(0x000000CA, "BJACK_EXIT", 0xFFFFFFFF);
						func_284(0x000000C9, "BJACK_CONT", 0xFFFFFFFF);
						iLocal_154 = 0x00000001;
					}
					func_246(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				if (unk_0x9A01369A10646AFE(0x00000002, 0x000000CA))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
					func_243(0x00000001, 0xFFFFFFFF);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_154 = 0x00000000;
					func_234();
				}
				else if (unk_0x9A01369A10646AFE(0x00000002, 0x000000C9))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
					func_243(0x00000001, 0xFFFFFFFF);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_154 = 0x00000000;
					unk_0x5D96D8530B3D0904(&(Global_199459.f_5), 0x00000015);
					func_362(&(Local_126.f_62A), 0x00000000, 0x00000000);
					func_294(Local_126.f_F7);
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
					{
						func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
					}
					func_359(0x00000005);
				}
			}
			break;
		
		case 0x00000005:
			if ((((func_233(Local_126.f_F7) && !func_333()) && !func_363()) && func_350()) && !func_344())
			{
				func_63(&(Local_126.f_62A));
				unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000002);
				func_224(0x00000001);
				func_359(0x00000006);
			}
			else
			{
				if (func_333())
				{
					func_234();
				}
				if (func_363())
				{
					func_234();
				}
				if (func_223(Local_126.f_F7))
				{
					func_234();
				}
				if (func_222())
				{
					func_234();
				}
				if (!func_350())
				{
					func_234();
				}
				if (func_344())
				{
					func_234();
				}
			}
			break;
		
		case 0x00000006:
			if (!func_333() && !func_363())
			{
				if (func_221())
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000001 || unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000002)
					{
						unk_0x398B6B43792F03FE(0x00000000, 0x00000000);
					}
					fVar3 = func_219(unk_0x16F2683693E537C9(), func_220(Local_126.f_F7, 0x00000000), 0x00000001);
					fVar4 = func_219(unk_0x16F2683693E537C9(), func_220(Local_126.f_F7, 0x00000001), 0x00000001);
					fVar5 = func_219(unk_0x16F2683693E537C9(), func_220(Local_126.f_F7, 0x00000002), 0x00000001);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_126.f_FB = 0x00000001;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_126.f_FB = 0x00000002;
					}
					else
					{
						Local_126.f_FB = 0x00000000;
					}
					unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), func_220(Local_126.f_F7, Local_126.f_FB), 1f, 0x00001388, func_218(Local_126.f_F7, Local_126.f_FB), 0.01f);
					func_359(0x00000007);
				}
			}
			else
			{
				func_234();
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x7D8F4411) != 0x00000000)
			{
				Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_126.f_F7), func_217(Local_126.f_F7), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), func_215(Local_126.f_FB), 2f, -2f, 0x0000000D, 0x00000010, 2f, 0x00000000);
				unk_0x914E6894744915F8(Local_126.f_FF);
				Local_125[unk_0xD803B885F5E47A62() /*8*/].f_6.f_1 = Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4;
				func_359(0x00000008);
			}
			break;
		
		case 0x00000008:
			unk_0xA78CDFD1AE3130A9(0x81629937);
			Local_126.f_102 = unk_0xF958843510932FF6(Local_126.f_FF);
			if (func_214())
			{
				func_213(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000002);
			}
			else
			{
				func_213(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000001);
			}
			if (Local_126.f_102 != 0xFFFFFFFF)
			{
				if ((unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x797DE8AE)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43))
				{
					Local_126.f_62E = "idle_cardgames";
					Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_126.f_F7), func_217(Local_126.f_F7), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), Local_126.f_62E, 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_126.f_FF);
					func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
					Local_132 = { Var6 };
					if (func_424(unk_0xD803B885F5E47A62()))
					{
						Local_132 = 0x6508C8A2;
					}
					else if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 0x00000002 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 0x00000003)
					{
						Local_132 = 0x746525B2;
					}
					else
					{
						Local_132 = 0xBCF03FC1;
					}
					Local_132.f_1 = Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4;
					Local_132.f_6 = 0x00000001;
					if (func_324(unk_0xD803B885F5E47A62()))
					{
						Local_132.f_F = 0x76392C91;
					}
					else if (func_321())
					{
						Local_132.f_F = 0x4F8D45B7;
					}
					else if (func_323(0x00000001) && (func_324(func_322()) || func_211(unk_0xD803B885F5E47A62())))
					{
						Local_132.f_F = 0x3A74B494;
					}
					else
					{
						Local_132.f_F = 0x3805DAA2;
					}
					func_362(&uLocal_129, 0x00000000, 0x00000000);
					func_210();
					Local_126.f_F9 = func_397();
					func_359(0x00000009);
				}
			}
			break;
		
		case 0x00000009:
			if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Table_Games");
			}
			unk_0xA78CDFD1AE3130A9(0x81629937);
			func_90();
			break;
		
		case 0x0000000A:
			if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
			}
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x6A67A5CC) == 0x00000001)
			{
				func_213(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), func_89());
				vVar7 = { unk_0x4F3973434662D795(0x00000002, 0x000000DA), unk_0x4F3973434662D795(0x00000002, 0x000000DB), 0f };
				Local_126.f_102 = unk_0xF958843510932FF6(Local_126.f_FF);
				if (Local_126.f_102 != 0xFFFFFFFF && ((unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)) || (SYSTEM::VMAG(vVar7) >= 0.24f && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x7E26188D))))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_296(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
					unk_0x8D17794CE3273D70(func_58());
					unk_0x8D17794CE3273D70(func_72());
					unk_0x8D17794CE3273D70(func_88());
					unk_0x8D17794CE3273D70(func_216());
					unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000002);
					func_335();
					func_87();
					func_359(0x00000002);
				}
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_296(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
				unk_0x8D17794CE3273D70(func_58());
				unk_0x8D17794CE3273D70(func_72());
				unk_0x8D17794CE3273D70(func_88());
				unk_0x8D17794CE3273D70(func_216());
				unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000002);
				func_335();
				func_87();
				func_359(0x00000002);
			}
			break;
	}
}

void func_87()
{
	unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000015);
	unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000016);
}

char* func_88()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_89()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397();
	iVar1 = (iVar0 - Local_126.f_F9);
	if (iVar1 < 0x00000000)
	{
		return 0x00000005;
	}
	if (iVar1 > 0x00000000)
	{
		return 0x00000004;
	}
	return 0x00000006;
}

void func_90()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var4;
	struct<26> Var5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	char* sVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	bool bVar25;
	char* sVar26;
	
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000)
	{
		iVar1 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 * 4 + Local_116.f_627[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]);
		iVar0 = Local_116.f_640[iVar1];
	}
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000)
	{
		if (func_209(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4))
		{
			func_208("BJACK_ERROR", 0xFFFFFFFF);
			return;
		}
	}
	bVar2 = 0x00000000;
	if (func_53(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, Local_126.f_101))
	{
		bVar2 = 0x00000001;
	}
	func_194();
	if (func_415())
	{
		Local_132.f_A = 0x00000001;
	}
	Local_132.f_B = func_192();
	if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != 0x00000006 || Local_116.f_627[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)))
	{
		if ((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000)) && !Local_126.f_EA) && !func_191())
		{
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
			{
				Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
			}
			Local_131.f_12 = func_415();
			Local_131.f_13 = func_192();
			Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
			Local_131.f_7 = func_397();
			Local_132.f_2 = 0x327E2AF1;
			Local_131.f_4 = 0x327E2AF1;
			Local_131.f_19 = 0x327E2AF1;
			if (Local_126 > 0x00000001 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 != 0x00000000)
			{
				if (Global_40001.f_65B3)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 > 0x00000000 && !Local_126.f_E8)
			{
				func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 > 0x00000000 && !Local_126.f_E9)
			{
				func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
			}
			func_371(0x00000001);
			unk_0xA37A90C62806D848(0x00000001);
			return;
		}
	}
	if (((Global_265DDB == Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 || Global_258C2B.f_C) || Global_199453 == 0x0000001F) || !func_187())
	{
		if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
		{
			Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
		}
		Local_131.f_12 = func_415();
		Local_131.f_13 = func_192();
		Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
		Local_131.f_7 = func_397();
		if (Global_40001.f_65B3)
		{
			unk_0x5943F8BE26E6D616(&Local_131);
		}
		func_371(0x00000001);
		unk_0xA37A90C62806D848(0x00000001);
		return;
	}
	if (Local_126.f_FF > 0xFFFFFFFF)
	{
		Local_126.f_102 = unk_0xF958843510932FF6(Local_126.f_FF);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !Local_126.f_EA)
		{
			if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_216(), "idle_cardgames", 0x00000003))
			{
				if (Local_126.f_102 != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)))
				{
					Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), "idle_cardgames", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_126.f_FF);
					Local_126.f_62E = "idle_cardgames";
					unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000000);
				}
			}
			else if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_216(), "idle_cardgames", 0x00000003))
			{
				if (Local_126.f_102 != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)))
				{
					Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), func_186(0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_126.f_FF);
					unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000000);
				}
			}
		}
	}
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000)
	{
		func_184(&(Local_126.f_36A));
		if ((unk_0xE5DBF9B6126856CA(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]))) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
		{
			if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != 0x00000006 || Local_116.f_627[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)))
			{
				func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CA, 0x00000001), "BJACK_EXIT", &(Local_126.f_36A), 0x00000000);
			}
			else if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0x00000000), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0x00000001), 0x00000003)) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_613[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x0000000C)) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E))
				{
					if (((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000C) && !(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002 && func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015)) && func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015) && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0x00000007)
					{
						func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000C9, 0x00000001), "BJACK_HIT", &(Local_126.f_36A), 0x00000000);
						func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CB, 0x00000001), "BJACK_STAND", &(Local_126.f_36A), 0x00000000);
					}
				}
				else if ((((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000C) && !(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002 && func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015)) && func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015) && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0x00000007) || (((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000D) && !(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002 && func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015)) && func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0x00000007))
				{
					func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000C9, 0x00000001), "BJACK_HIT", &(Local_126.f_36A), 0x00000000);
					func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CB, 0x00000001), "BJACK_STAND", &(Local_126.f_36A), 0x00000000);
				}
				if (Local_126.f_F8 >= Local_126.f_F4)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E))
					{
						if ((func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) < 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000A))
						{
							func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CC, 0x00000001), "BJACK_DOUBLE", &(Local_126.f_36A), 0x00000000);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000D) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B))
					{
						if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
						{
							if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) < 0x00000015)
							{
								func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CC, 0x00000001), "BJACK_DOUBLE", &(Local_126.f_36A), 0x00000000);
							}
						}
					}
					else if ((func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) < 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000A))
					{
						func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CC, 0x00000001), "BJACK_DOUBLE", &(Local_126.f_36A), 0x00000000);
					}
				}
				if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002 && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E))
				{
					if (Local_126.f_F8 >= Local_126.f_F4)
					{
						if (func_35(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][0x00000000]) == func_35(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][0x00000001]))
						{
							func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CE, 0x00000001), "BJACK_SPLIT", &(Local_126.f_36A), 0x00000000);
						}
					}
				}
			}
		}
		if ((Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 0x00000003 && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000)) && (Local_126.f_F8 >= Local_126.f_F6 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 != 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
			{
				func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000C9, 0x00000001), "BJACK_PLACE", &(Local_126.f_36A), 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000014))
				{
					func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CC, 0x00000001), "BJACK_BET_MAX", &(Local_126.f_36A), 0x00000000);
				}
				func_182(0x00000002, 0x00000007, "BJACK_BET_NUM", &(Local_126.f_36A));
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
		{
			func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CA, 0x00000001), "IB_BACK", &(Local_126.f_36A), 0x00000000);
			func_182(0x00000002, 0x00000008, "IB_TAB", &(Local_126.f_36A));
		}
		if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] < 0x00000009 || !unk_0xEAE0D21A50E6C7F4(Local_116.f_613[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x0000000D))
		{
			if (Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_C >= 0x00000002)
			{
				func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000D0, 0x00000001), "BJACK_DLR", &(Local_126.f_36A), 0x00000000);
			}
			if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000000)
			{
				func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000CF, 0x00000001), "BJACK_CARDS", &(Local_126.f_36A), 0x00000000);
			}
		}
		if (bLocal_146 && Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 0x00000001)
		{
			func_183(unk_0xF59058FCB716F903(0x00000000, 0x000000C3, 0x00000001), "BJACK_LR", &(Local_126.f_36A), 0x00000000);
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
		{
			func_183(unk_0xF59058FCB716F903(0x00000002, 0x000000D2, 0x00000001), "BJACK_RULESb", &(Local_126.f_36A), 0x00000000);
		}
		Var3 = { func_181() };
		func_180(&(Local_126.f_36A), 1f);
		func_172(&(Local_126.f_369), &Var3, &(Local_126.f_36A), func_179(&(Local_126.f_36A)));
		func_171(0x00000001);
	}
	func_166();
	switch (Local_126)
	{
		case 0x00000000:
			if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 0x00000003)
			{
				if ((Local_126.f_F4 > Local_126.f_F8 || Local_126.f_F4 < Local_126.f_F6) || Local_126.f_F4 > Local_126.f_F5)
				{
					Local_126.f_F4 = Local_126.f_F6;
				}
				Var4 = 0x00000007;
				Local_126.f_D5 = { Var4 };
				Local_126.f_DE = { Var4 };
				Local_131 = { Var5 };
				Local_131.f_A = 0x00000001;
				Local_131 = 0xD378365E;
				Local_131.f_B = func_324(unk_0xD803B885F5E47A62());
				if (func_324(unk_0xD803B885F5E47A62()))
				{
					Local_131.f_14 = 0x76392C91;
				}
				else if (func_321())
				{
					Local_131.f_14 = 0x4F8D45B7;
				}
				else if (func_323(0x00000001) && (func_324(func_322()) || func_211(unk_0xD803B885F5E47A62())))
				{
					Local_131.f_14 = 0x3A74B494;
				}
				else
				{
					Local_131.f_14 = 0x3805DAA2;
				}
				if (func_424(unk_0xD803B885F5E47A62()))
				{
					Local_131.f_1 = 0x6508C8A2;
				}
				else if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 0x00000002 || Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 == 0x00000003)
				{
					Local_131.f_1 = 0x746525B2;
				}
				else
				{
					Local_131.f_1 = 0xBCF03FC1;
				}
				func_362(&uLocal_127, 0x00000000, 0x00000000);
				Local_131.f_3 = Local_116.f_618[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				Local_131.f_2 = Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4;
				func_165(0x00000001);
			}
			break;
		
		case 0x00000001:
			if ((!func_321() && !(func_323(0x00000001) && func_320(func_322()))) || ((!func_324(unk_0xD803B885F5E47A62()) && (func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003)) && !(func_323(0x00000001) && func_324(func_322()))))
			{
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
				{
					Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_12 = func_415();
				Local_131.f_13 = func_192();
				Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
				Local_131.f_7 = func_397();
				Local_132.f_2 = 0x3805DAA2;
				Local_131.f_4 = 0x3805DAA2;
				if (Global_40001.f_65B3)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (Local_126.f_100 == 0x00000001)
				{
					func_208("IT_MEMBOc", 0xFFFFFFFF);
				}
				else if (Local_126.f_100 == 0x00000002)
				{
					func_208("IT_MEMBOa", 0xFFFFFFFF);
				}
				else if (Local_126.f_100 == 0x00000003)
				{
					func_208("IT_MEMBOb", 0xFFFFFFFF);
				}
				return;
			}
			if ((Local_126.f_F8 < Local_126.f_F6 && Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 == 0x00000000) && !Local_126.f_EA)
			{
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
				{
					Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_12 = func_415();
				Local_131.f_13 = func_192();
				Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
				Local_131.f_7 = func_397();
				Local_132.f_2 = 0xB3F88040;
				Local_131.f_4 = 0xB3F88040;
				if (Global_40001.f_65B3)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (func_424(unk_0xD803B885F5E47A62()))
				{
					if (Local_126.f_F8 <= 0x00000000)
					{
						func_208("CAS_MG_NOCHIPS6", 0xFFFFFFFF);
					}
					else
					{
						func_208("CAS_MG_LOWCHIPS6", 0xFFFFFFFF);
					}
				}
				else if (Local_126.f_F8 <= 0x00000000)
				{
					func_208("CAS_MG_NOCHIPS2", 0xFFFFFFFF);
				}
				else
				{
					func_208("CAS_MG_LOWCHIPS2", 0xFFFFFFFF);
				}
				return;
			}
			if (func_329())
			{
				switch (func_325())
				{
					case 0x00000000:
						Local_132.f_2 = 0x762DD373;
						break;
					
					case 0x00000001:
						Local_132.f_2 = 0xDA428132;
						break;
					
					case 0x00000002:
						Local_132.f_2 = 0x9F153806;
						break;
				}
				switch (func_325())
				{
					case 0x00000000:
						Local_131.f_4 = 0x762DD373;
						break;
					
					case 0x00000001:
						Local_131.f_4 = 0xDA428132;
						break;
					
					case 0x00000002:
						Local_131.f_4 = 0x9F153806;
						break;
				}
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
				{
					Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_12 = func_415();
				Local_131.f_13 = func_192();
				Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
				Local_131.f_7 = func_397();
				if (Global_40001.f_65B3)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (func_325() == 0x00000002)
				{
					func_208("CAS_MG_CTIME", 0xFFFFFFFF);
				}
				else
				{
					func_208("CAS_MG_CBAN", 0xFFFFFFFF);
				}
				return;
			}
			if ((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000)) && (!func_350() || func_344()))
			{
				if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
				{
					Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
				}
				Local_131.f_12 = func_415();
				Local_131.f_13 = func_192();
				Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
				Local_131.f_7 = func_397();
				if (Global_40001.f_65B3)
				{
					unk_0x5943F8BE26E6D616(&Local_131);
				}
				func_371(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				return;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x00000010))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
				{
					if (((((!unk_0xEAE0D21A50E6C7F4(Local_126.f_FD, 0x00000001) && !unk_0x4FD68D5821EE3E19()) && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC)) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
					{
						bVar7 = unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC);
						bVar8 = unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB);
						if (bVar8 || (((((bVar7 && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC)) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000)))
						{
							func_67(&(Local_126.f_626), 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_126.f_FD), 0x00000001);
						}
					}
					else if (func_65(&(Local_126.f_626), 0x00000064, 0x00000000))
					{
						func_63(&(Local_126.f_626));
						unk_0x0674E58A79778E99(&(Local_126.f_FD), 0x00000001);
					}
					if (((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC) && !bVar8) && !bVar7) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000014))
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
						bVar6 = 0x00000001;
					}
					if (bVar6)
					{
						while (bVar6)
						{
							if (Local_126.f_F4 >= 0x00002710)
							{
								iVar9 = 0x00001388;
							}
							else if (Local_126.f_F4 >= 0x00001388)
							{
								iVar9 = 0x000003E8;
							}
							else if (Local_126.f_F4 >= 0x000001F4)
							{
								iVar9 = 0x000001F4;
							}
							else if (Local_126.f_F4 >= 0x00000064)
							{
								iVar9 = 0x00000032;
							}
							else
							{
								iVar9 = 0x0000000A;
							}
							if (Local_126.f_F4 > Local_126.f_F8)
							{
								Local_126.f_F4 = (Local_126.f_F4 - iVar9);
							}
							if (Local_126.f_F4 < Local_126.f_F6)
							{
								Local_126.f_F4 = Local_126.f_F6;
							}
							Local_126.f_F4 = (Local_126.f_F4 + iVar9);
							if (Local_126.f_F4 > Local_126.f_F5)
							{
								bVar6 = 0x00000000;
								Local_126.f_F4 = Local_126.f_F5;
							}
							if (Local_126.f_F4 > Local_126.f_F8)
							{
								bVar6 = 0x00000000;
								Local_126.f_F4 = (Local_126.f_F4 - iVar9);
							}
						}
					}
					else
					{
						if (Local_126.f_F4 >= 0x00002710)
						{
							iVar9 = 0x00001388;
						}
						else if (Local_126.f_F4 >= 0x00001388)
						{
							iVar9 = 0x000003E8;
						}
						else if (Local_126.f_F4 >= 0x000001F4)
						{
							iVar9 = 0x000001F4;
						}
						else if (Local_126.f_F4 >= 0x00000064)
						{
							iVar9 = 0x00000032;
						}
						else
						{
							iVar9 = 0x0000000A;
						}
						if (Local_126.f_F4 > Local_126.f_F8)
						{
							Local_126.f_F4 = (Local_126.f_F4 - iVar9);
						}
						if (Local_126.f_F4 < Local_126.f_F6)
						{
							Local_126.f_F4 = Local_126.f_F6;
						}
						iVar10 = Local_126.f_F4;
						if (bVar7)
						{
							Local_126.f_F4 = (Local_126.f_F4 + iVar9);
							if (Local_126.f_F4 > Local_126.f_F5)
							{
								Local_126.f_F4 = Local_126.f_F5;
							}
							if (Local_126.f_F4 > Local_126.f_F8)
							{
								Local_126.f_F4 = (Local_126.f_F4 - iVar9);
							}
							if (Local_126.f_F4 == iVar10)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000017))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000017);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000017);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 0x00000001);
							}
						}
						if (bVar8)
						{
							if (Local_126.f_F4 <= 0x00000064)
							{
								iVar9 = 0x0000000A;
							}
							else if (Local_126.f_F4 <= 0x000001F4)
							{
								iVar9 = 0x00000032;
							}
							else if (Local_126.f_F4 <= 0x00001388)
							{
								iVar9 = 0x000001F4;
							}
							else if (Local_126.f_F4 <= 0x00002710)
							{
								iVar9 = 0x000003E8;
							}
							else
							{
								iVar9 = 0x00001388;
							}
							Local_126.f_F4 = (Local_126.f_F4 - iVar9);
							if (Local_126.f_F4 < Local_126.f_F6)
							{
								Local_126.f_F4 = Local_126.f_F6;
							}
							if (Local_126.f_F4 == iVar10)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000017))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000017);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000017);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 0x00000001);
							}
						}
					}
					if ((Local_126.f_F4 == Local_126.f_F5 || (Local_126.f_F4 + iVar9) > Local_126.f_F5) || (Local_126.f_F4 + iVar9) > Local_126.f_F8)
					{
						unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000014);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000014);
					}
					unk_0x5D96D8530B3D0904(&(Local_126.f_FD), 0x00000000);
					iVar11 = (0x0000001E - (func_190(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0x00000000, 0x00000000) / 0x000003E8));
					if (iVar11 > 0x00000000 || !func_66(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/])))
					{
						if (((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA)) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CB)) && Local_126.f_F4 >= Local_126.f_F6) && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
							Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), func_164(Local_126.f_F4, bVar2, 0x00000000, 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_126.f_FF);
							unk_0xA37A90C62806D848(0x00000001);
						}
						if (!func_331("BJACK_BET") && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
						{
							if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
							{
								func_163("BJACK_BET");
							}
						}
					}
					else if (func_66(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/])) && func_65(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0x00007530, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F))
						{
							unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000010);
						}
					}
				}
				else
				{
					if ((Local_126.f_102 != 0xFFFFFFFF && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C)) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F))
					{
						Local_126.f_EA = 0x00000001;
					}
					if (Local_126.f_EA && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F))
					{
						if (func_160(Local_126.f_F4, &(Local_126.f_F3), 0x00000001, Local_126.f_E7))
						{
							if (Local_126.f_F3 == 0x00000003)
							{
								Local_126.f_EA = 0x00000000;
								Local_126.f_F3 = 0x00000000;
							}
							else
							{
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = Local_126.f_F4;
								Local_132.f_3 = (Local_132.f_3 - Local_126.f_F4);
								Local_131.f_6 = (Local_131.f_6 - Local_126.f_F4);
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000014))
								{
									Local_131.f_5 = 0x00000001;
								}
								Local_132.f_C++;
								Local_132.f_7 = (Local_132.f_7 + Local_126.f_F4);
								Local_131.f_C = (Local_131.f_C + Local_126.f_F4);
								unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000F);
								Local_126.f_EA = 0x00000000;
							}
						}
					}
				}
			}
			if ((func_66(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/])) && Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 0x00000001) && (0x00007530 - func_190(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0x00000000, 0x00000000)) > 0x00000000)
			{
				if (func_190(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
				{
					func_159((0x00007530 - func_190(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0x00000000, 0x00000000)), "BJACK_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				else
				{
					func_159((0x00007530 - func_190(&(Local_116.f_66A[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*2*/]), 0x00000000, 0x00000000)), "BJACK_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 0x00000003)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FD, 0x00000000) && !Local_126.f_EA)
				{
					unk_0xA37A90C62806D848(0x00000001);
					unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000000);
					if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000F))
					{
						unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000010);
					}
					func_165(0x00000002);
				}
			}
			func_155(Local_126.f_F4, "BJACK_BET2", 0xFFFFFFFF, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			break;
		
		case 0x00000002:
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000)
			{
				if (Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_C >= 0x00000002)
				{
					func_63(&(Local_126.f_628));
					iLocal_149 = 0x00000000;
					func_165(0x00000003);
				}
			}
			break;
		
		case 0x00000003:
			iVar12 = func_34(&(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/]), 0x00000000);
			iVar13 = func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/]));
			iVar14 = func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/]));
			iVar15 = Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_C;
			iVar16 = Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8;
			iVar17 = Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8;
			bVar18 = (iVar15 == 0x00000002 && iVar12 == 0x00000015);
			bVar19 = (iVar16 == 0x00000002 && iVar13 == 0x00000015);
			bVar20 = (iVar17 == 0x00000002 && iVar14 == 0x00000015);
			if (((bVar20 || iVar14 >= 0x00000015) || iVar17 == 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_613[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x0000000C))
			{
				unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000D);
			}
			if (((bVar19 || iVar13 >= 0x00000015) || iVar16 == 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_613[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x0000000C))
			{
				if (iVar13 > 0x00000015)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000013))
					{
						Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), func_154(), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_126.f_FF);
						unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000013);
					}
				}
				unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000C);
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4])))
			{
				if ((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0x00000000), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0x00000001), 0x00000003)) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_613[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x0000000C))
				{
					if (func_66(&(Local_126.f_628)))
					{
						if ((0x00007530 - func_190(&(Local_126.f_628), 0x00000000, 0x00000000)) >= 0x00000000)
						{
							if (func_190(&(Local_126.f_628), 0x00000000, 0x00000000) <= 0x00005DC0)
							{
								func_159((0x00007530 - func_190(&(Local_126.f_628), 0x00000000, 0x00000000)), "BJACK_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							}
							else
							{
								func_159((0x00007530 - func_190(&(Local_126.f_628), 0x00000000, 0x00000000)), "BJACK_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							}
						}
						if (func_65(&(Local_126.f_628), 0x00007530, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000C);
							unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000D);
							func_63(&(Local_126.f_628));
							return;
						}
					}
					else if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_216(), func_186(0x00000001), 0x00000003))
						{
							func_362(&(Local_126.f_628), 0x00000000, 0x00000000);
						}
					}
					if (bVar18)
					{
						unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000C);
						unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000D);
					}
					else if (((unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E) && unk_0xEAE0D21A50E6C7F4(Local_116.f_61D[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000D)) && !(unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B) || unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
							{
								if (((!unk_0x4FD68D5821EE3E19() && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
								{
									if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
									{
										Local_131.f_16 = 0x00000001;
										if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000006);
										}
										else if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000003)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000007);
										}
										else if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000004)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000008);
										}
										else if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000005)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000009);
										}
										else if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000006)
										{
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x0000000A);
										}
										switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
										{
											case 0x00000000:
												sVar21 = "request_card";
												break;
											
											case 0x00000001:
												sVar21 = "request_card_alt1";
												break;
											
											case 0x00000002:
												sVar21 = "request_card_alt2";
												break;
										}
										Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), sVar21, 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_126.f_FF);
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
										func_63(&(Local_126.f_628));
									}
									else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CB))
									{
										Local_131.f_15 = 0x00000001;
										switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
										{
											case 0x00000000:
												sVar22 = "decline_card_001";
												break;
											
											case 0x00000001:
												sVar22 = "decline_card_alt1";
												break;
											
											case 0x00000002:
												sVar22 = "decline_card_alt2";
												break;
										}
										Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), sVar22, 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_126.f_FF);
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x0000000E);
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
										func_63(&(Local_126.f_628));
									}
									else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC))
									{
										if (Local_126.f_F8 >= Local_126.f_F4 && iVar17 == 0x00000002)
										{
											Local_131.f_17 = 0x00000001;
											Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), func_164(Local_126.f_F4, bVar2, 0x00000001, 0x00000001), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0x914E6894744915F8(Local_126.f_FF);
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x0000000C);
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
											func_63(&(Local_126.f_628));
										}
									}
								}
							}
							else if (Local_126.f_102 != 0xFFFFFFFF)
							{
								if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt1", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt2", 0x00000003)) && unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.3f)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000006))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000006);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000005);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000007))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000007);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000006);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000008))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000008);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000007);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000009))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000009);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000008);
									}
									else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x0000000A))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000A);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000009);
									}
								}
								if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_001", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt1", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt2", 0x00000003)) && unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.3f)
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x0000000E))
									{
										unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000E);
										unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000D);
									}
								}
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x0000000C))
								{
									if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C))
									{
										Local_126.f_EA = 0x00000001;
									}
									if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000011) && Local_126.f_EA)
									{
										if (func_160(Local_126.f_F4, &(Local_126.f_F3), 0x00000001, Local_126.f_E7))
										{
											if (Local_126.f_F3 == 0x00000003)
											{
												unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000C);
												Local_126.f_EA = 0x00000000;
												Local_126.f_F3 = 0x00000000;
											}
											else
											{
												Local_132.f_3 = (Local_132.f_3 - Local_126.f_F4);
												Local_131.f_6 = (Local_131.f_6 - Local_126.f_F4);
												Local_132.f_8 = (Local_132.f_8 + Local_126.f_F4);
												Local_131.f_D = (Local_131.f_D + Local_126.f_F4);
												Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 + Local_126.f_F4);
												unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000011);
												unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000C);
												unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000B);
												Local_126.f_EA = 0x00000000;
											}
										}
									}
								}
							}
						}
					}
					else if ((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000A) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000C)) || unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000000))
						{
							if (((!unk_0x4FD68D5821EE3E19() && !func_333()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
								{
									Local_131.f_16 = 0x00000001;
									if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000001);
									}
									else if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000003)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000002);
									}
									else if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000004)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000003);
									}
									else if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000005)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000004);
									}
									else if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000006)
									{
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000005);
									}
									switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
									{
										case 0x00000000:
											sVar23 = "request_card";
											break;
										
										case 0x00000001:
											sVar23 = "request_card_alt1";
											break;
										
										case 0x00000002:
											sVar23 = "request_card_alt2";
											break;
									}
									Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), sVar23, 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_126.f_FF);
									unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
									func_63(&(Local_126.f_628));
								}
								else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CB))
								{
									Local_131.f_15 = 0x00000001;
									switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
									{
										case 0x00000000:
											sVar24 = "decline_card_001";
											break;
										
										case 0x00000001:
											sVar24 = "decline_card_alt1";
											break;
										
										case 0x00000002:
											sVar24 = "decline_card_alt2";
											break;
									}
									Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), sVar24, 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_126.f_FF);
									unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x0000000D);
									unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
									func_63(&(Local_126.f_628));
								}
								else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC))
								{
									if (Local_126.f_F8 >= Local_126.f_F4 && iVar16 == 0x00000002)
									{
										Local_131.f_17 = 0x00000001;
										Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), func_164(Local_126.f_F4, bVar2, 0x00000001, 0x00000000), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_126.f_FF);
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x0000000B);
										unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
										func_63(&(Local_126.f_628));
									}
								}
								else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CE))
								{
									if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E))
									{
										if ((func_35(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][0x00000000]) == func_35(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][0x00000001]) && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002) && Local_126.f_F8 >= Local_126.f_F4)
										{
											Local_131.f_18 = 0x00000001;
											Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_88(), func_164(Local_126.f_F4, bVar2, 0x00000000, 0x00000001), 4f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0x914E6894744915F8(Local_126.f_FF);
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x0000000F);
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000000);
											func_63(&(Local_126.f_628));
										}
									}
								}
							}
						}
						else if (Local_126.f_102 != 0xFFFFFFFF)
						{
							if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt1", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "request_card_alt2", 0x00000003)) && unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.3f)
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000001))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000000);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000002))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000002);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000001);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000003))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000003);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000002);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000004))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000004);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000003);
								}
								else if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000005))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x00000005);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x00000004);
								}
							}
							if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_001", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt1", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_88(), "decline_card_alt2", 0x00000003)) && unk_0xA45992A6CE82FB43(Local_126.f_102) >= 0.3f)
							{
								if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x0000000D))
								{
									unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000D);
									unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000C);
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x0000000B))
							{
								if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C))
								{
									Local_126.f_EA = 0x00000001;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000010) && Local_126.f_EA)
								{
									if (func_160(Local_126.f_F4, &(Local_126.f_F3), 0x00000001, Local_126.f_E7))
									{
										if (Local_126.f_F3 == 0x00000003)
										{
											unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000B);
											Local_126.f_EA = 0x00000000;
											Local_126.f_F3 = 0x00000000;
										}
										else
										{
											Local_132.f_3 = (Local_132.f_3 - Local_126.f_F4);
											Local_131.f_6 = (Local_131.f_6 - Local_126.f_F4);
											Local_132.f_7 = (Local_132.f_7 + Local_126.f_F4);
											Local_131.f_C = (Local_131.f_C + Local_126.f_F4);
											Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 + Local_126.f_F4);
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000010);
											unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000B);
											unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000A);
											Local_126.f_EA = 0x00000000;
										}
									}
								}
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x0000000F))
							{
								if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C))
								{
									Local_126.f_EA = 0x00000001;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000012) && Local_126.f_EA)
								{
									if (func_160(Local_126.f_F4, &(Local_126.f_F3), 0x00000001, Local_126.f_E7))
									{
										if (Local_126.f_F3 == 0x00000003)
										{
											unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000F);
											Local_126.f_EA = 0x00000000;
											Local_126.f_F3 = 0x00000000;
										}
										else
										{
											Local_132.f_3 = (Local_132.f_3 - Local_126.f_F4);
											Local_131.f_6 = (Local_131.f_6 - Local_126.f_F4);
											Local_132.f_8 = (Local_132.f_8 + Local_126.f_F4);
											Local_131.f_D = (Local_131.f_D + Local_126.f_F4);
											Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 + Local_126.f_F4);
											unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000012);
											unk_0x0674E58A79778E99(&(Local_126.f_FC), 0x0000000F);
											unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/]), 0x0000000E);
											Local_126.f_EA = 0x00000000;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_418())
				{
					if (!func_331("BJACK_WAIT"))
					{
						if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
						{
							func_163("BJACK_WAIT");
						}
					}
				}
				else if (func_331("BJACK_WAIT"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000)
			{
				if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 0x00000006)
				{
					if ((Local_116.f_627[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)) && !(!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E) && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000C))) && !((unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E) && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000C)) && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000D)))
					{
						if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0x00000000), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_25(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)), iVar0, 0x00000001), 0x00000003))
						{
							if (((Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002 && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E)) && Local_126.f_F8 >= Local_126.f_F4) && func_35(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][0x00000000]) == func_35(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][0x00000001]))
							{
								if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
								{
									if (!func_331("BJACK_TURN_S"))
									{
										func_163("BJACK_TURN_S");
									}
								}
							}
							else if (Local_126.f_F8 >= Local_126.f_F4 && (((((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E) && func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) < 0x00000015) && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000A)) || (((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000D) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B)) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002) && func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) < 0x00000015)) || ((func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) < 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000A))))
							{
								if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
								{
									if (!func_331("BJACK_TURN_D"))
									{
										func_163("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
							{
								if (!func_331("BJACK_TURN"))
								{
									func_163("BJACK_TURN");
								}
							}
						}
						else if ((func_331("BJACK_TURN") || func_331("BJACK_TURN_D")) || func_331("BJACK_TURN_S"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
					}
					else if ((func_331("BJACK_TURN") || func_331("BJACK_TURN_D")) || func_331("BJACK_TURN_S"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
				}
				if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 0x00000001)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x00000010))
					{
						bVar25 = 0x00000001;
					}
					if (Local_126.f_103 != 0xFFFFFFFF)
					{
						func_307(&(Local_126.f_103));
						Local_126.f_103 = 0xFFFFFFFF;
					}
					Local_125[unk_0xD803B885F5E47A62() /*8*/] = 0x00000000;
					Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
					Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
					Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0x00000000;
					Local_126.f_E8 = 0x00000000;
					Local_126.f_E9 = 0x00000000;
					Local_126.f_EB = 0x00000000;
					Local_126.f_FC = 0x00000000;
					unk_0xA37A90C62806D848(0x00000001);
					func_165(0x00000000);
					Local_131.f_12 = func_415();
					Local_131.f_13 = func_192();
					Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
					Local_131.f_7 = func_397();
					if (!func_350() || func_344())
					{
						func_371(0x00000001);
						unk_0xA37A90C62806D848(0x00000001);
						if (Global_40001.f_65B3 && !bVar25)
						{
							unk_0x5943F8BE26E6D616(&Local_131);
						}
						return;
					}
					if (func_329())
					{
						switch (func_325())
						{
							case 0x00000000:
								Local_132.f_2 = 0x762DD373;
								break;
							
							case 0x00000001:
								Local_132.f_2 = 0xDA428132;
								break;
							
							case 0x00000002:
								Local_132.f_2 = 0x9F153806;
								break;
						}
						switch (func_325())
						{
							case 0x00000000:
								Local_131.f_4 = 0x762DD373;
								break;
							
							case 0x00000001:
								Local_131.f_4 = 0xDA428132;
								break;
							
							case 0x00000002:
								Local_131.f_4 = 0x9F153806;
								break;
						}
						if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
						{
							Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
						}
						Local_131.f_12 = func_415();
						Local_131.f_13 = func_192();
						Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
						Local_131.f_7 = func_397();
						if (Global_40001.f_65B3 && !bVar25)
						{
							unk_0x5943F8BE26E6D616(&Local_131);
						}
						func_371(0x00000001);
						unk_0xA37A90C62806D848(0x00000001);
						if (func_325() == 0x00000002)
						{
							func_208("CAS_MG_CTIME", 0xFFFFFFFF);
						}
						else
						{
							func_208("CAS_MG_CBAN", 0xFFFFFFFF);
						}
						return;
					}
					if (Global_40001.f_65B3 && !bVar25)
					{
						unk_0x5943F8BE26E6D616(&Local_131);
					}
				}
				if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 0x00000006)
				{
					if ((func_331("BJACK_TURN") || func_331("BJACK_TURN_D")) || func_331("BJACK_TURN_S"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
				}
				if (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] == 0x00000009 && iVar13 > 0x00000000)
				{
					if (Local_126.f_E8 && Local_126.f_E9)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FC, 0x00000013))
						{
							if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
							{
								Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
							}
							Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), func_217(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
							sVar26 = func_153(Local_131.f_6);
							if (func_53(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, Local_126.f_101))
							{
								if (Local_126.f_F4 >= 0x000088B8)
								{
									if (((iVar13 <= 0x00000015 && iVar16 == 0x00000007) || (iVar14 <= 0x00000015 && iVar17 == 0x00000007)) || ((iVar13 == 0x00000015 && iVar14 == 0x00000015) && iVar12 != 0x00000015))
									{
										sVar26 = func_152();
									}
									else if (Local_126.f_F4 >= 0x0000AFC8)
									{
										if ((((iVar16 >= 0x00000002 && iVar13 < 0x00000015) && iVar12 == iVar13 + 1) && iVar15 > 0x00000002) || (((iVar17 >= 0x00000002 && iVar14 < 0x00000015) && iVar12 == iVar14 + 1) && iVar15 > 0x00000002))
										{
											sVar26 = func_150();
										}
									}
								}
							}
							else if (Local_126.f_F4 >= 0x00001194)
							{
								if (((iVar13 <= 0x00000015 && iVar16 == 0x00000007) || (iVar14 <= 0x00000015 && iVar17 == 0x00000007)) || ((iVar13 == 0x00000015 && iVar14 == 0x00000015) && iVar12 != 0x00000015))
								{
									sVar26 = func_152();
								}
							}
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), sVar26, 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_126.f_FF);
							unk_0x5D96D8530B3D0904(&(Local_126.f_FC), 0x00000013);
						}
					}
					if ((Local_126.f_E8 && Local_126.f_E9) && !Local_126.f_EB)
					{
						if (Local_131.f_E > 0x00000000)
						{
							if (func_106(Local_131.f_E, &(Local_126.f_F3), 0x00000001))
							{
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 0x00000001);
								Local_126.f_EB = 0x00000001;
							}
						}
					}
					if ((((Local_126.f_E8 && Local_126.f_E9) && !bLocal_145) && !bLocal_146) && !bLocal_137)
					{
						if (Local_131.f_E > 0x00000000)
						{
							if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0x00000000)
							{
								if (bVar19 && !bVar18)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_BJ", Local_131.f_E))
									{
										func_104("BJACK_WIN_2", "BJACK_BJ", Local_131.f_E);
									}
								}
								else if (iVar13 <= 0x00000015 && iVar16 == 0x00000007)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_7CC", Local_131.f_E))
									{
										func_104("BJACK_WIN_2", "BJACK_7CC", Local_131.f_E);
									}
								}
								else if (iVar13 == iVar12)
								{
									if (!func_331("BJACK_PUSH"))
									{
										func_163("BJACK_PUSH");
									}
								}
								else if (!func_103("BJACK_WIN_1", iVar13, Local_131.f_E))
								{
									func_102("BJACK_WIN_1", iVar13, Local_131.f_E);
								}
							}
							else if ((bVar19 || bVar20) && !bVar18)
							{
								if (bVar19 && bVar20)
								{
									if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_131.f_E))
									{
										func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_131.f_E);
									}
								}
								else if (bVar19)
								{
									if (iVar14 <= 0x00000015 && iVar17 == 0x00000007)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_131.f_E))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_131.f_E);
										}
									}
									else if (iVar14 > 0x00000015)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_131.f_E))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_131.f_E);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_131.f_E))
									{
										func_98("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_131.f_E);
									}
								}
								else if (bVar20)
								{
									if (iVar13 <= 0x00000015 && iVar16 == 0x00000007)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_131.f_E))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_131.f_E);
										}
									}
									else if (iVar13 > 0x00000015)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_131.f_E))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_131.f_E);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_131.f_E))
									{
										func_98("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_131.f_E);
									}
								}
							}
							else if ((iVar13 <= 0x00000015 && iVar16 == 0x00000007) || (iVar14 <= 0x00000015 && iVar17 == 0x00000007))
							{
								if ((iVar13 <= 0x00000015 && iVar16 == 0x00000007) && (iVar14 <= 0x00000015 && iVar17 == 0x00000007))
								{
									if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_131.f_E))
									{
										func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_131.f_E);
									}
								}
								else if (iVar13 <= 0x00000015 && iVar16 == 0x00000007)
								{
									if (iVar14 > 0x00000015)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_131.f_E))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_131.f_E);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_131.f_E))
									{
										func_98("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_131.f_E);
									}
								}
								else if (iVar14 <= 0x00000015 && iVar17 == 0x00000007)
								{
									if (iVar13 > 0x00000015)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_131.f_E))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_131.f_E);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_131.f_E))
									{
										func_98("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_131.f_E);
									}
								}
							}
							else if (iVar13 == iVar12 && iVar14 == iVar12)
							{
								if (!func_331("BJACK_PUSH"))
								{
									func_163("BJACK_PUSH");
								}
							}
							else if (iVar13 <= 0x00000015 && iVar14 <= 0x00000015)
							{
								if (!func_97("BJACK_WIN_3", iVar13, iVar14, Local_131.f_E))
								{
									func_96("BJACK_WIN_3", iVar13, iVar14, Local_131.f_E);
								}
							}
							else if (iVar13 <= 0x00000015)
							{
								if (!func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_131.f_E))
								{
									func_98("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_131.f_E);
								}
							}
							else if (iVar14 <= 0x00000015)
							{
								if (!func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_131.f_E))
								{
									func_98("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_131.f_E);
								}
							}
						}
						else if (bVar18)
						{
							if (!func_95("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_94("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 <= 0x00000000)
						{
							if (iVar13 > 0x00000015)
							{
								if (!func_95("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_94("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_318("BJACK_LOSE_1", iVar12))
							{
								func_93("BJACK_LOSE_1", iVar12);
							}
						}
						else if (iVar13 > 0x00000015 && iVar14 > 0x00000015)
						{
							if (!func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_91("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_318("BJACK_LOSE_1", iVar12))
						{
							func_93("BJACK_LOSE_1", iVar12);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000000))
					{
						if (bVar19)
						{
							Local_132.f_11++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000000);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000001))
					{
						if (bVar20)
						{
							Local_132.f_11++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000001);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000002))
					{
						if (iVar16 == 0x00000007 && iVar13 <= 0x00000015)
						{
							Local_132.f_14++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000002);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000003))
					{
						if (iVar17 == 0x00000007 && iVar14 <= 0x00000015)
						{
							Local_132.f_14++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000003);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000004))
					{
						if (iVar13 > 0x00000015)
						{
							Local_132.f_13++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000004);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000005))
					{
						if (iVar14 > 0x00000015)
						{
							Local_132.f_13++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000005);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_149, 0x00000006))
					{
						if (bVar18)
						{
							Local_132.f_10++;
						}
						unk_0x5D96D8530B3D0904(&iLocal_149, 0x00000006);
					}
					if (bVar18 && !bVar19)
					{
						if (!Local_126.f_E8)
						{
							func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_4 = 0x46859AA2;
							Local_131.f_19 = 0x46859AA2;
							Local_132.f_E++;
							Local_126.f_E8 = 0x00000001;
							Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
						}
					}
					else if (iVar13 <= 0x00000015)
					{
						if (bVar19 && !bVar18)
						{
							if (!Local_126.f_E8)
							{
								Local_132.f_3 = (Local_132.f_3 + SYSTEM::FLOOR((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1) * 2.5f)));
								Local_131.f_6 = (Local_131.f_6 + SYSTEM::FLOOR((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1) * 2.5f)));
								Local_131.f_E = (Local_131.f_E + SYSTEM::FLOOR((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1) * 2.5f)));
								Local_131.f_F = 0x00000001;
								Local_132.f_D++;
								Local_131.f_4 = 0xFBF9F91F;
								Local_131.f_19 = 0xFBF9F91F;
								Local_126.f_E8 = 0x00000001;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
							}
						}
						else if (iVar16 == 0x00000007 && !bVar18)
						{
							if (!Local_126.f_E8)
							{
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_E = (Local_131.f_E + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_F = 0x00000001;
								Local_132.f_D++;
								Local_131.f_4 = 0x228C3225;
								Local_131.f_19 = 0x228C3225;
								Local_126.f_E8 = 0x00000001;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
							}
						}
						else if (iVar13 > iVar12 || iVar12 > 0x00000015)
						{
							if (!Local_126.f_E8)
							{
								Local_131.f_19 = 0xDE7BE0D2;
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_E = (Local_131.f_E + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 * 2);
								Local_131.f_F = 0x00000001;
								Local_132.f_D++;
								Local_131.f_4 = 0xDE7BE0D2;
								Local_131.f_19 = 0xDE7BE0D2;
								Local_126.f_E8 = 0x00000001;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
							}
						}
						else if (iVar13 < iVar12 || (bVar18 && !bVar19))
						{
							if (!Local_126.f_E8)
							{
								func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
								Local_131.f_4 = 0x91A75DBE;
								Local_131.f_19 = 0x91A75DBE;
								Local_132.f_E++;
								Local_126.f_E8 = 0x00000001;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
							}
						}
						else if (!Local_126.f_E8)
						{
							Local_131.f_19 = 0x74D4F959;
							Local_131.f_4 = 0x74D4F959;
							Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_E = (Local_131.f_E + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_131.f_F = 0x00000000;
							Local_126.f_E8 = 0x00000001;
							func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
							Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
						}
					}
					else if (!Local_126.f_E8)
					{
						func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1);
						Local_131.f_4 = 0xC140FB81;
						Local_131.f_19 = 0xC140FB81;
						Local_132.f_E++;
						Local_126.f_E8 = 0x00000001;
						Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000E))
					{
						if (bVar18 && !bVar20)
						{
							if (!Local_126.f_E9)
							{
								func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								if (Local_131.f_19 == 0xC140FB81)
								{
									Local_131.f_4 = 0x6574C729;
									Local_131.f_19 = 0x6574C729;
								}
								else if (Local_131.f_19 == 0x228C3225)
								{
									Local_131.f_4 = 0x80A99308;
									Local_131.f_19 = 0x80A99308;
								}
								else if (Local_131.f_19 == 0x91A75DBE)
								{
									Local_131.f_4 = 0x91352F8B;
									Local_131.f_19 = 0x91352F8B;
								}
								else if (Local_131.f_19 == 0xDE7BE0D2)
								{
									Local_131.f_4 = 0x7407A0BD;
									Local_131.f_19 = 0x7407A0BD;
								}
								else if (Local_131.f_19 == 0xFBF9F91F)
								{
									Local_131.f_4 = 0x828378B6;
									Local_131.f_19 = 0x828378B6;
								}
								else if (Local_131.f_19 == 0x74D4F959)
								{
									Local_131.f_4 = 0xF4EF8B4D;
									Local_131.f_19 = 0xF4EF8B4D;
								}
								else if (Local_131.f_19 == 0x46859AA2)
								{
									Local_131.f_4 = 0xA6B5AF99;
									Local_131.f_19 = 0xA6B5AF99;
								}
								Local_132.f_E++;
								Local_126.f_E9 = 0x00000001;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
							}
						}
						else if (iVar14 <= 0x00000015)
						{
							if (bVar20 && !bVar18)
							{
								if (!Local_126.f_E9)
								{
									Local_132.f_3 = (Local_132.f_3 + SYSTEM::FLOOR((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2) * 2.5f)));
									Local_131.f_6 = (Local_131.f_6 + SYSTEM::FLOOR((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2) * 2.5f)));
									Local_131.f_E = (Local_131.f_E + SYSTEM::FLOOR((IntToFloat(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2) * 2.5f)));
									Local_131.f_F = 0x00000001;
									Local_132.f_D++;
									if (Local_131.f_19 == 0xC140FB81)
									{
										Local_131.f_4 = 0x07729DDB;
										Local_131.f_19 = 0x07729DDB;
									}
									else if (Local_131.f_19 == 0x228C3225)
									{
										Local_131.f_4 = 0x27F0AAF0;
										Local_131.f_19 = 0x27F0AAF0;
									}
									else if (Local_131.f_19 == 0x91A75DBE)
									{
										Local_131.f_4 = 0x1AA346FC;
										Local_131.f_19 = 0x1AA346FC;
									}
									else if (Local_131.f_19 == 0xDE7BE0D2)
									{
										Local_131.f_4 = 0xA61966E3;
										Local_131.f_19 = 0xA61966E3;
									}
									else if (Local_131.f_19 == 0xFBF9F91F)
									{
										Local_131.f_4 = 0x0AB53251;
										Local_131.f_19 = 0x0AB53251;
									}
									else if (Local_131.f_19 == 0x74D4F959)
									{
										Local_131.f_4 = 0xCAEF7414;
										Local_131.f_19 = 0xCAEF7414;
									}
									else if (Local_131.f_19 == 0x46859AA2)
									{
										Local_131.f_4 = 0x6230CA60;
										Local_131.f_19 = 0x6230CA60;
									}
									Local_126.f_E9 = 0x00000001;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
								}
							}
							else if (iVar17 == 0x00000007 && !bVar18)
							{
								if (!Local_126.f_E9)
								{
									Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_E = (Local_131.f_E + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_F = 0x00000001;
									Local_132.f_D++;
									if (Local_131.f_19 == 0xC140FB81)
									{
										Local_131.f_4 = 0xB8A87654;
										Local_131.f_19 = 0xB8A87654;
									}
									else if (Local_131.f_19 == 0x228C3225)
									{
										Local_131.f_4 = 0x1E27CF78;
										Local_131.f_19 = 0x1E27CF78;
									}
									else if (Local_131.f_19 == 0x91A75DBE)
									{
										Local_131.f_4 = 0x77F73FC5;
										Local_131.f_19 = 0x77F73FC5;
									}
									else if (Local_131.f_19 == 0xDE7BE0D2)
									{
										Local_131.f_4 = 0x137C7C00;
										Local_131.f_19 = 0x137C7C00;
									}
									else if (Local_131.f_19 == 0xFBF9F91F)
									{
										Local_131.f_4 = 0x1D125F69;
										Local_131.f_19 = 0x1D125F69;
									}
									else if (Local_131.f_19 == 0x74D4F959)
									{
										Local_131.f_4 = 0x1F5EFB16;
										Local_131.f_19 = 0x1F5EFB16;
									}
									else if (Local_131.f_19 == 0x46859AA2)
									{
										Local_131.f_4 = 0xA63565FE;
										Local_131.f_19 = 0xA63565FE;
									}
									Local_126.f_E9 = 0x00000001;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
								}
							}
							else if (iVar14 > iVar12 || iVar12 > 0x00000015)
							{
								if (!Local_126.f_E9)
								{
									Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_E = (Local_131.f_E + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 * 2);
									Local_131.f_F = 0x00000001;
									Local_132.f_D++;
									if (Local_131.f_19 == 0xC140FB81)
									{
										Local_131.f_4 = 0x98596E27;
										Local_131.f_19 = 0x98596E27;
									}
									else if (Local_131.f_19 == 0x228C3225)
									{
										Local_131.f_4 = 0xFBFBC7E2;
										Local_131.f_19 = 0xFBFBC7E2;
									}
									else if (Local_131.f_19 == 0x91A75DBE)
									{
										Local_131.f_4 = 0x11D358FA;
										Local_131.f_19 = 0x11D358FA;
									}
									else if (Local_131.f_19 == 0xDE7BE0D2)
									{
										Local_131.f_4 = 0x2621B220;
										Local_131.f_19 = 0x2621B220;
									}
									else if (Local_131.f_19 == 0xFBF9F91F)
									{
										Local_131.f_4 = 0xCE4DFAAD;
										Local_131.f_19 = 0xCE4DFAAD;
									}
									else if (Local_131.f_19 == 0x74D4F959)
									{
										Local_131.f_4 = 0x271C9451;
										Local_131.f_19 = 0x271C9451;
									}
									else if (Local_131.f_19 == 0x46859AA2)
									{
										Local_131.f_4 = 0x5243B4D8;
										Local_131.f_19 = 0x5243B4D8;
									}
									Local_126.f_E9 = 0x00000001;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
								}
							}
							else if (iVar14 < iVar12 || (bVar18 && !bVar20))
							{
								if (!Local_126.f_E9)
								{
									func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
									if (Local_131.f_19 == 0xC140FB81)
									{
										Local_131.f_4 = 0x6574C729;
										Local_131.f_19 = 0x6574C729;
									}
									else if (Local_131.f_19 == 0x228C3225)
									{
										Local_131.f_4 = 0x80A99308;
										Local_131.f_19 = 0x80A99308;
									}
									else if (Local_131.f_19 == 0x91A75DBE)
									{
										Local_131.f_4 = 0x91352F8B;
										Local_131.f_19 = 0x91352F8B;
									}
									else if (Local_131.f_19 == 0xDE7BE0D2)
									{
										Local_131.f_4 = 0x7407A0BD;
										Local_131.f_19 = 0x7407A0BD;
									}
									else if (Local_131.f_19 == 0xFBF9F91F)
									{
										Local_131.f_4 = 0x828378B6;
										Local_131.f_19 = 0x828378B6;
									}
									else if (Local_131.f_19 == 0x74D4F959)
									{
										Local_131.f_4 = 0xF4EF8B4D;
										Local_131.f_19 = 0xF4EF8B4D;
									}
									else if (Local_131.f_19 == 0x46859AA2)
									{
										Local_131.f_4 = 0xA6B5AF99;
										Local_131.f_19 = 0xA6B5AF99;
									}
									Local_132.f_E++;
									Local_126.f_E9 = 0x00000001;
									Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
								}
							}
							else if (!Local_126.f_E9)
							{
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								Local_131.f_E = (Local_131.f_E + Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								Local_131.f_F = 0x00000001;
								func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
								if (Local_131.f_19 == 0xC140FB81)
								{
									Local_131.f_4 = 0xDF6D89E3;
									Local_131.f_19 = 0xDF6D89E3;
								}
								else if (Local_131.f_19 == 0x228C3225)
								{
									Local_131.f_4 = 0x97BFE29E;
									Local_131.f_19 = 0x97BFE29E;
								}
								else if (Local_131.f_19 == 0x91A75DBE)
								{
									Local_131.f_4 = 0x3F9F7684;
									Local_131.f_19 = 0x3F9F7684;
								}
								else if (Local_131.f_19 == 0xDE7BE0D2)
								{
									Local_131.f_4 = 0x11B5C530;
									Local_131.f_19 = 0x11B5C530;
								}
								else if (Local_131.f_19 == 0xFBF9F91F)
								{
									Local_131.f_4 = 0x790E51EB;
									Local_131.f_19 = 0x790E51EB;
								}
								else if (Local_131.f_19 == 0x74D4F959)
								{
									Local_131.f_4 = 0xD72BF802;
									Local_131.f_19 = 0xD72BF802;
								}
								else if (Local_131.f_19 == 0x46859AA2)
								{
									Local_131.f_4 = 0x1DAE0FF4;
									Local_131.f_19 = 0x1DAE0FF4;
								}
								Local_126.f_E9 = 0x00000001;
								Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
							}
						}
						else if (!Local_126.f_E9)
						{
							func_189(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2);
							if (Local_131.f_19 == 0xC140FB81)
							{
								Local_131.f_4 = 0x566BD8B2;
								Local_131.f_19 = 0x566BD8B2;
							}
							else if (Local_131.f_19 == 0x228C3225)
							{
								Local_131.f_4 = 0x4822C4CA;
								Local_131.f_19 = 0x4822C4CA;
							}
							else if (Local_131.f_19 == 0x91A75DBE)
							{
								Local_131.f_4 = 0x5BD06280;
								Local_131.f_19 = 0x5BD06280;
							}
							else if (Local_131.f_19 == 0xDE7BE0D2)
							{
								Local_131.f_4 = 0xE4C16FFB;
								Local_131.f_19 = 0xE4C16FFB;
							}
							else if (Local_131.f_19 == 0xFBF9F91F)
							{
								Local_131.f_4 = 0xD3E27336;
								Local_131.f_19 = 0xD3E27336;
							}
							else if (Local_131.f_19 == 0x74D4F959)
							{
								Local_131.f_4 = 0x93378558;
								Local_131.f_19 = 0x93378558;
							}
							else if (Local_131.f_19 == 0x46859AA2)
							{
								Local_131.f_4 = 0x63E78567;
								Local_131.f_19 = 0x63E78567;
							}
							Local_132.f_E++;
							Local_126.f_E9 = 0x00000001;
							Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
						}
					}
					else
					{
						Local_126.f_E9 = 0x00000001;
					}
				}
			}
			break;
	}
}

void func_91(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_92(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_93(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

void func_94(char* sParam0, char* sParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_95(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_98(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_99(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_100(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_101(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6B012227B3921E18(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_102(char* sParam0, int iParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_103(char* sParam0, int iParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_104(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_105(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_106(int iParam0, var uParam1, int iParam2)
{
	return func_107(iParam0, 0x00000003, uParam1, iParam2, 0xFFFFFFFF);
}

int func_107(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0x00000000)
	{
	}
	else if (!func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_397();
		iVar1 = (Global_40001.f_671B - iVar0);
		iVar2 = 0x00000000;
		if (iParam1 == 0x00000000)
		{
			iVar3 = func_147();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_128(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_397() - Global_19E12C);
			func_127(iVar4, 0x00000001);
			func_125();
			func_124();
			Global_19E12C = (Global_19E12C + iVar4);
			if (iParam1 == 0x00000000)
			{
				func_118(iVar4);
				Global_258BC5 = 0x00000001;
			}
			else if (iParam1 == 0x00000003)
			{
				func_111(iVar4);
				if (iVar4 >= Global_40001.f_6723)
				{
					Global_258BC4 = 0x00000001;
				}
				else if (iVar4 >= Global_40001.f_6722)
				{
					Global_258BC5 = 0x00000001;
				}
			}
			Var5 = func_110(iParam1);
			Var5.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0x00000000;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x62F8C2EDB26F57B3(0xFFFFFFFF) + unk_0x3A6D64D2A1228113());
			Var5.f_6 = Global_19E12C;
			unk_0xB1C8602C4408B407(&Var5);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x0000000A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		switch (iParam0)
		{
			case 0x00000000:
				if (iParam2 > 0xFFFFFFFF)
				{
					iVar0 = (0x00000013 + iParam2);
				}
				else
				{
					iVar0 = 0x00000013;
				}
				break;
			
			case 0x00000001:
				iVar0 = 0x00000015;
				break;
			
			case 0x00000004:
				iVar0 = 0x00000016;
				break;
			
			case 0x00000005:
				iVar0 = 0x00000017;
				break;
			
			case 0x00000006:
				iVar0 = 0x00000018;
				break;
			
			case 0x00000007:
				iVar0 = 0x00000019;
				break;
			
			case 0x00000009:
				iVar0 = 0x0000001A;
				break;
			
			case 0x0000000A:
				if (iParam2 > 0xFFFFFFFF)
				{
					iVar0 = (0x0000001B + iParam2);
				}
				else
				{
					iVar0 = 0x0000001B;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000001;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000002;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000004;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000005;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000006;
				}
				break;
			
			case 0x00000002:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000007;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000008;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000009;
				}
				break;
			
			case 0x00000003:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x0000000A;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x0000000B;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x0000000C;
				}
				break;
			
			case 0x00000004:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x0000000D;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x0000000E;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x0000000F;
				}
				break;
			
			case 0x00000005:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000010;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000011;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000012;
				}
				break;
			}
	}
	return iVar0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x86302E8D;
			break;
		
		case 0x00000001:
			iVar0 = 0x9FE0C4C4;
			break;
		
		case 0x00000002:
			iVar0 = 0xB23A9935;
			break;
		
		case 0x00000003:
			iVar0 = 0x474E1CBD;
			break;
		
		case 0x00000004:
			iVar0 = 0x8AE6763F;
			break;
		
		case 0x00000005:
			iVar0 = 0x8152F90A;
			break;
		
		case 0x00000006:
			iVar0 = 0x43E17CD0;
			break;
		
		case 0x00000007:
			iVar0 = 0x6E326DF9;
			break;
		
		case 0x00000008:
			iVar0 = 0x474E1CBD;
			break;
		
		case 0x00000009:
			iVar0 = 0xB2AFC6B5;
			break;
		
		case 0x0000000A:
			iVar0 = 0x68917E4E;
			break;
	}
	return iVar0;
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_115();
	if (iVar0 == 0x00000000)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_40001.f_671D)
	{
		func_113();
		iVar2 = 0x00000000;
	}
	if ((iParam0 + iVar2) >= Global_40001.f_671F)
	{
		func_112(0xB402A40B, Global_40001.f_671F);
		func_113();
		Global_258BC5 = 0x00000001;
	}
	else
	{
		func_112(0xB402A40B, (iVar2 + iParam0));
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

void func_113()
{
	func_114();
}

void func_114()
{
	func_112(0x78C4B643, unk_0xDD0E7998AE8AD485());
}

int func_115()
{
	return func_116(0xB402A40B);
}

int func_116(int iParam0)
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

int func_117()
{
	return func_116(0x78C4B643);
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_123();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_122();
	if (iVar0 == 0x00000000)
	{
		func_121();
	}
	else if ((iVar0 - iVar1) >= Global_40001.f_671C)
	{
		func_120();
		iVar2 = 0x00000000;
	}
	if (iParam0 + iVar2) > func_119()
	{
		func_112(0xBCC804A8, func_119());
		func_120();
	}
	else
	{
		func_112(0xBCC804A8, (iVar2 + iParam0));
	}
}

int func_119()
{
	if (func_324(unk_0xD803B885F5E47A62()))
	{
		return Global_40001.f_664F;
	}
	return Global_40001.f_664E;
}

void func_120()
{
	func_121();
}

void func_121()
{
	func_112(0x03FF9E2A, unk_0xDD0E7998AE8AD485());
}

int func_122()
{
	return func_116(0xBCC804A8);
}

int func_123()
{
	return func_116(0x03FF9E2A);
}

void func_124()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_19E14F, 0x00000006))
	{
		unk_0x5D96D8530B3D0904(&Global_19E14F, 0x00000009);
		func_362(&Global_19E152, 0x00000000, 0x00000000);
	}
}

void func_125()
{
	if (func_126())
	{
		unk_0x5D96D8530B3D0904(&Global_19E14F, 0x00000001);
	}
}

bool func_126()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_19E14F, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Global_19E14F, 0x00000005));
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0 < 0x00000000)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&Global_19E14F, 0x00000006);
	Global_19E150 = iParam0;
	Global_19E151 = iParam1;
}

bool func_128(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 0x00000001;
	bVar2 = func_108(iParam1);
	if (!bVar2)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
	}
	if (*uParam0 == 0x00000003 || *uParam0 == 0x00000002)
	{
		*uParam0 = 0x00000000;
	}
	if (func_146())
	{
		if (*uParam0 == 0x00000000)
		{
			if (func_145() != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
			iVar3 = 0x272CB70B;
			iVar4 = func_110(iParam1);
			iVar5 = 0xFEAE09E5;
			if (func_149(iParam1))
			{
				iVar5 = 0xF8720A1A;
			}
			if (func_141(0x04A9A0AE, 0x7442B428, iVar3, iVar5, iParam2, iVar1, 0x00000000, 0x00000004, 0x00000000, 0x00000003))
			{
				if (func_141(0x04A9A0AE, 0x6E06ACCC, iVar4, iVar5, 0x00000001, 0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000003))
				{
					if (func_136())
					{
						*uParam0 = 0x00000001;
					}
					else
					{
						*uParam0 = 0x00000003;
					}
				}
				else
				{
					*uParam0 = 0x00000003;
				}
			}
			else
			{
				*uParam0 = 0x00000003;
			}
		}
		else if (*uParam0 == 0x00000001)
		{
			if (func_135(func_145()))
			{
				if (func_134(func_145()) == 0x00000002)
				{
					unk_0x7A87D9FAFCB10ADC(func_133(func_145()));
					if (func_149(iParam1))
					{
						unk_0xBAAADC9CD356B660(iVar0, iParam2);
					}
					else
					{
						unk_0xDB46ED1F703FD834(iVar0, iParam2);
					}
					*uParam0 = 0x00000002;
				}
				else
				{
					*uParam0 = 0x00000003;
				}
				func_129(func_145());
			}
		}
	}
	else if (iVar0 > 0x00000000 || unk_0x7A7BDE279347E517(iVar0, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
	{
		if (func_149(iParam1))
		{
			unk_0xBAAADC9CD356B660(iVar0, iParam2);
		}
		else
		{
			unk_0xDB46ED1F703FD834(iVar0, iParam2);
		}
		*uParam0 = 0x00000002;
	}
	else
	{
		*uParam0 = 0x00000003;
	}
	return *uParam0 != 0x00000001;
}

void func_129(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_146())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_132(iParam0))
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
		func_130(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_130(var uParam0)
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
	func_131(&(uParam0->f_E));
	func_131(&(uParam0->f_E.f_D));
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

void func_131(var uParam0)
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

int func_132(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

int func_133(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42;
	}
	return 0xFFFFFFFF;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2;
	}
	return 0x00000000;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2 != 0x00000001;
	}
	return 0x00000000;
}

int func_136()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = 0x00000000;
	if (!func_146())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	iVar2 = func_145();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_140(Global_411012[iVar2 /*85*/].f_42.f_6, Global_411012[iVar2 /*85*/].f_42.f_4, Global_411012[iVar2 /*85*/].f_42.f_1) == 0x00000001)
			{
				Global_411258 = 0x00000001;
			}
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (Global_411012[iVar2 /*85*/].f_42.f_6 == 0x3FA29128 || Global_411012[iVar2 /*85*/].f_42.f_6 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	iVar3 = func_133(iVar2);
	if (iVar3 != 0x7FFFFFFF)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_411012[iVar2 /*85*/].f_42.f_D = 0x00000001;
			Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar2 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_411012[iVar2 /*85*/].f_42.f_8 = 0x00000001;
				Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000001;
			}
			Global_411012[iVar2 /*85*/].f_42.f_12 = 0x00000000;
			if (bVar0 || iVar1)
			{
				func_137(Global_411012[iVar2 /*85*/], iVar2);
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_137(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_139(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_138();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_138()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_139(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0xE62A3AA1 || iParam0 == 0x57DE404E)
	{
		switch (iParam1)
		{
			case 0x73AF3590:
				if (iParam2 >= 0x00002710)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
				break;
			
			case 0xFE249573:
			case 0xEC745CB2:
			case 0x20D60B56:
			case 0x31D3FC9B:
			case 0x50503398:
			case 0xBE60A029:
				if (iParam2 >= 0x000003E8)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000002;
				}
				break;
			
			case 0x762D6BF6:
				return 0x00000000;
				break;
			
			case 0x666D4B21:
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
			case 0xD8630BC3:
			case 0x23C04B23:
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
			case 0x1A6CF069:
			case 0x180D054D:
			case 0xCB511DC2:
			case 0xC0925945:
			case 0xAD5032C1:
			case 0xD54402B0:
			case 0x43D5DFD2:
			case 0xDE8FA2AB:
			case 0x49F3549B:
			case 0x4A05F619:
			case 0xE285893D:
			case 0x314FB8B0:
			case 0x9145F938:
			case 0x653BCC2D:
			case 0x87B8E853:
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
			case 0x6374FB50:
			case 0x86DA0F67:
				return 0x00000001;
				break;
			
			case 0x5A58E3BD:
			case 0x45F48C05:
			case 0xCA5E1B40:
			case 0xD86D0371:
			case 0x48090EBA:
			case 0xDB72FD6E:
			case 0xD80064A4:
			case 0x11611C06:
			case 0xB3E76D2C:
			case 0x2A6B291E:
			case 0xE7BA9A2C:
			case 0xD30E80F5:
			case 0x8F9E64E9:
			case 0x7323DAB3:
			case 0x3F79E8B3:
			case 0xF54343EF:
			case 0x7F096F7D:
			case 0x10E398B4:
			case 0x421452FF:
			case 0xCBBC5D1E:
			case 0x040E0F34:
				return 0x00000002;
				break;
			
			default:
				return 0x00000000;
				break;
		}
		switch (iParam1)
		{
			case 0xECF7C43F:
			case 0xE4315BE0:
			case 0x72CBE556:
			case 0x234B8864:
			case 0x7954FD0F:
			case 0x5D7FD908:
			case 0xB703ED29:
			case 0x48B92E52:
			case 0x7A3568F7:
			case 0x235376A5:
			case 0xCDCF2380:
				return 0x00000001;
			
			case 0x69D9B7DA:
				return 0x00000002;
				break;
		}
	}
	else if ((iParam0 == 0xBC5B83BA || iParam0 == 0x372897DD) || iParam0 == 0xA14400BE)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = 0x00000000;
	if (!func_146())
	{
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam1 == 0x3FA29128 || iParam1 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = func_145();
	if (iVar1 == 0xFFFFFFFF)
	{
		if (!func_143(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0x00000000;
		}
	}
	if (iVar1 != 0xFFFFFFFF)
	{
		if (iParam8 != 0x00000000 && func_142(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_411012[iVar1 /*85*/].f_42.f_1 = Var2.f_2;
		Global_411012[iVar1 /*85*/].f_42.f_F = Var2;
		Global_411012[iVar1 /*85*/].f_42.f_10 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0xF2C77E1D:
		case 0xB6FD233F:
		case 0x81855910:
		case 0x531CEF2D:
		case 0x85A48AE6:
		case 0x65679D34:
		case 0x94EB09E5:
		case 0x8D08CFA8:
		case 0x22A9F688:
		case 0x015FAF63:
		case 0x7E349B56:
		case 0xADDF33D9:
		case 0xE1EB447E:
		case 0x71A98DCA:
		case 0x9FA465A5:
		case 0x94BD7097:
		case 0x100EA9C3:
		case 0x0426E041:
		case 0xF9CEEAB6:
		case 0xA6E56D90:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = 0x00000000;
	if (!func_146())
	{
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam2 == 0x3FA29128 || iParam2 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		if (Global_411012[iVar1 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar2 = 0x00000001;
		}
		else if (Global_411012[iVar1 /*85*/].f_42.f_5 == 0x00000001)
		{
			return 0x00000000;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0x00000000;
	}
	*iParam0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_144(uVar3, iParam1, 0x83B4A55B, iParam3, iParam2, 0x00000000, 0x00000001, iParam4, uParam5, 0x00000000, bVar0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_146())
			{
				uParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = uParam0;
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
			if (iParam1 == 0xBC537E0D && bParam10)
			{
				func_137(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_145()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_133(iVar0) != 0x7FFFFFFF)
		{
			if (func_132(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_146()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_119() - func_122());
	iVar1 = (Global_40001.f_671B - func_397());
	iVar2 = func_148();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119();
	if (iVar0 <= 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0xECB8E23DD6EEDD19())
	{
		if (unk_0x7A7BDE279347E517(iVar0, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x3A6D64D2A1228113() + unk_0x62F8C2EDB26F57B3(0xFFFFFFFF));
		}
	}
	else if (unk_0x7A7BDE279347E517(iVar0, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000001))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x98DF7171A5F240EC();
	}
	return iVar1;
}

int func_149(int iParam0)
{
	if ((iParam0 == 0x00000001 || iParam0 == 0x00000002) || iParam0 == 0x0000000A)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

char* func_150()
{
	if (func_151())
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "female_reaction_terrible_var_01";
			
			case 0x00000001:
				return "female_reaction_terrible_var_02";
			
			case 0x00000002:
				return "female_reaction_terrible_var_03";
			
			case 0x00000003:
				return "female_reaction_terrible_var_04";
			
			case 0x00000004:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_terrible_var_01";
			
			case 0x00000001:
				return "reaction_terrible_var_02";
			
			case 0x00000002:
				return "reaction_terrible_var_03";
			
			case 0x00000003:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_151()
{
	return func_51(unk_0xD803B885F5E47A62());
}

char* func_152()
{
	if (func_151())
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "female_reaction_great_var_01";
			
			case 0x00000001:
				return "female_reaction_great_var_02";
			
			case 0x00000002:
				return "female_reaction_great_var_03";
			
			case 0x00000003:
				return "female_reaction_great_var_04";
			
			case 0x00000004:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_great_var_01";
			
			case 0x00000001:
				return "reaction_great_var_02";
			
			case 0x00000002:
				return "reaction_great_var_03";
			
			case 0x00000003:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_153(int iParam0)
{
	if (func_151())
	{
		if ((func_424(unk_0xD803B885F5E47A62()) || func_377(Local_126.f_F7) == 0x00000002) || func_377(Local_126.f_F7) == 0x00000003)
		{
			if (iParam0 > 0x00002710 && Local_131.f_4 != 0x74D4F959)
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
				{
					case 0x00000000:
						return "female_reaction_good_var_01";
					
					case 0x00000001:
						return "female_reaction_good_var_02";
					
					case 0x00000002:
						return "female_reaction_good_var_03";
					
					case 0x00000003:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > 0xFFFFD8F0 || Local_131.f_4 == 0x74D4F959)
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000007))
				{
					case 0x00000000:
						return "female_reaction_impartial_var_01";
					
					case 0x00000001:
						return "female_reaction_impartial_var_02";
					
					case 0x00000002:
						return "female_reaction_impartial_var_03";
					
					case 0x00000003:
						return "female_reaction_impartial_var_04";
					
					case 0x00000004:
						return "female_reaction_impartial_var_05";
					
					case 0x00000005:
						return "female_reaction_impartial_var_06";
					
					case 0x00000006:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
				{
					case 0x00000000:
						return "female_reaction_bad_var_01";
					
					case 0x00000001:
						return "female_reaction_bad_var_02";
					
					case 0x00000002:
						return "female_reaction_bad_var_03";
					
					case 0x00000003:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 0x000003E8 && Local_131.f_4 != 0x74D4F959)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "female_reaction_good_var_01";
				
				case 0x00000001:
					return "female_reaction_good_var_02";
				
				case 0x00000002:
					return "female_reaction_good_var_03";
				
				case 0x00000003:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > 0xFFFFFC18 || Local_131.f_4 == 0x74D4F959)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000007))
			{
				case 0x00000000:
					return "female_reaction_impartial_var_01";
				
				case 0x00000001:
					return "female_reaction_impartial_var_02";
				
				case 0x00000002:
					return "female_reaction_impartial_var_03";
				
				case 0x00000003:
					return "female_reaction_impartial_var_04";
				
				case 0x00000004:
					return "female_reaction_impartial_var_05";
				
				case 0x00000005:
					return "female_reaction_impartial_var_06";
				
				case 0x00000006:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "female_reaction_bad_var_01";
				
				case 0x00000001:
					return "female_reaction_bad_var_02";
				
				case 0x00000002:
					return "female_reaction_bad_var_03";
				
				case 0x00000003:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_424(unk_0xD803B885F5E47A62()) || func_377(Local_126.f_F7) == 0x00000002) || func_377(Local_126.f_F7) == 0x00000003)
	{
		if (iParam0 > 0x00002710 && Local_131.f_4 != 0x74D4F959)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "reaction_good_var_01";
				
				case 0x00000001:
					return "reaction_good_var_02";
				
				case 0x00000002:
					return "reaction_good_var_03";
				
				case 0x00000003:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > 0xFFFFD8F0 || Local_131.f_4 == 0x74D4F959)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000008))
			{
				case 0x00000000:
					return "reaction_impartial_var_01";
				
				case 0x00000001:
					return "reaction_impartial_var_02";
				
				case 0x00000002:
					return "reaction_impartial_var_03";
				
				case 0x00000003:
					return "reaction_impartial_var_04";
				
				case 0x00000004:
					return "reaction_impartial_var_05";
				
				case 0x00000005:
					return "reaction_impartial_var_06";
				
				case 0x00000006:
					return "reaction_impartial_var_07";
				
				case 0x00000007:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "reaction_bad_var_01";
				
				case 0x00000001:
					return "reaction_bad_var_02";
				
				case 0x00000002:
					return "reaction_bad_var_03";
				
				case 0x00000003:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 0x000003E8 && Local_131.f_4 != 0x74D4F959)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_good_var_01";
			
			case 0x00000001:
				return "reaction_good_var_02";
			
			case 0x00000002:
				return "reaction_good_var_03";
			
			case 0x00000003:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > 0xFFFFFC18 || Local_131.f_4 == 0x74D4F959)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000008))
		{
			case 0x00000000:
				return "reaction_impartial_var_01";
			
			case 0x00000001:
				return "reaction_impartial_var_02";
			
			case 0x00000002:
				return "reaction_impartial_var_03";
			
			case 0x00000003:
				return "reaction_impartial_var_04";
			
			case 0x00000004:
				return "reaction_impartial_var_05";
			
			case 0x00000005:
				return "reaction_impartial_var_06";
			
			case 0x00000006:
				return "reaction_impartial_var_07";
			
			case 0x00000007:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_bad_var_01";
			
			case 0x00000001:
				return "reaction_bad_var_02";
			
			case 0x00000002:
				return "reaction_bad_var_03";
			
			case 0x00000003:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

char* func_154()
{
	if (func_151())
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "female_reaction_bad_var_01";
			
			case 0x00000001:
				return "female_reaction_bad_var_02";
			
			case 0x00000002:
				return "female_reaction_bad_var_03";
			
			case 0x00000003:
				return "female_reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_bad_var_01";
			
			case 0x00000001:
				return "reaction_bad_var_02";
			
			case 0x00000002:
				return "reaction_bad_var_03";
			
			case 0x00000003:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_155(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_158(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_157(0x00000003, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_156(0x00000003, iVar0);
		Global_150976.f_ACC[iVar0] = uParam0;
		StringCopy(&(Global_150976.f_ACC.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_ACC.f_B7[iVar0] = iParam3;
		Global_150976.f_ACC.f_AC[iVar0] = iParam2;
		Global_150976.f_ACC.f_CD[iVar0] = iParam4;
		Global_150976.f_ACC.f_D8[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_ACC.f_103[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_ACC.f_1A4[iVar0] = iParam7;
		Global_150976.f_ACC.f_1C5[iVar0] = iParam8;
		Global_150976.f_ACC.f_1AF[iVar0] = iParam9;
		Global_150976.f_ACC.f_1BA[iVar0] = iParam10;
		Global_150976.f_ACC.f_1D0[iVar0] = iParam11;
		Global_150976.f_ACC.f_1DB[iVar0] = iParam12;
		Global_150976.f_ACC.f_1E6[iVar0] = iParam13;
		Global_150976.f_ACC.f_1F1[iVar0] = iParam14;
	}
}

void func_156(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_157(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_158(char* sParam0)
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

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_157(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_156(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
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

int func_160(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_146() && *uParam1 == 0x00000001)
	{
		bParam3 = 0x00000000;
	}
	if (!bParam3 || func_162(iParam0))
	{
		return func_161(iParam0, 0x00000002, uParam1, iParam2, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	else
	{
		*uParam1 = 0x00000003;
	}
	return 0x00000001;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0x00000000)
	{
	}
	else if (func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_397();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0x00000000 && (!func_146() || *uParam2 != 0x00000001))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_128(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_19E12C - func_397());
			if (iParam1 == 0x00000001)
			{
				Global_258BC4 = 0x00000001;
			}
			else if (iVar2 >= Global_40001.f_6724)
			{
				Global_258BC5 = 0x00000001;
			}
			func_127(iVar2, 0x00000000);
			func_125();
			func_124();
			Global_19E12C = (Global_19E12C - iVar2);
			Var3 = func_110(iParam1);
			Var3.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0x00000000;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x62F8C2EDB26F57B3(0xFFFFFFFF) + unk_0x3A6D64D2A1228113());
			Var3.f_6 = Global_19E12C;
			Var3.f_7 = iParam5;
			unk_0xB1C8602C4408B407(&Var3);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (func_329())
	{
		return 0x00000000;
	}
	iVar0 = func_397();
	if (iVar0 < iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_163(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

char* func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 0x00001388:
				case 0x00002710:
				case 0x00003A98:
				case 0x00004E20:
				case 0x000061A8:
				case 0x00007530:
				case 0x000088B8:
				case 0x00009C40:
				case 0x0000AFC8:
				case 0x0000C350:
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_126.f_F7 == 0x00000001 || Local_126.f_F7 == 0x00000005) || Local_126.f_F7 == 0x00000009) || Local_126.f_F7 == 0x0000000D)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 0x00001388:
					case 0x00002710:
					case 0x00003A98:
					case 0x00004E20:
					case 0x000061A8:
					case 0x00007530:
					case 0x000088B8:
					case 0x00009C40:
					case 0x0000AFC8:
					case 0x0000C350:
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 0x00001388:
				case 0x00002710:
				case 0x00003A98:
				case 0x00004E20:
				case 0x000061A8:
				case 0x00007530:
				case 0x000088B8:
				case 0x00009C40:
				case 0x0000AFC8:
				case 0x0000C350:
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 0x00001388:
					case 0x00002710:
					case 0x00003A98:
					case 0x00004E20:
					case 0x000061A8:
					case 0x00007530:
					case 0x000088B8:
					case 0x00009C40:
					case 0x0000AFC8:
					case 0x0000C350:
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
				{
					case 0x00000000:
						return "place_bet_small";
					
					case 0x00000001:
						return "place_bet_small_alt1";
					
					case 0x00000002:
						return "place_bet_small_alt2";
					
					case 0x00000003:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "place_bet_small";
				
				case 0x00000001:
					return "place_bet_small_alt1";
				
				case 0x00000002:
					return "place_bet_small_alt2";
				
				case 0x00000003:
					return "place_bet_small_alt3";
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0x00001388:
				case 0x00002710:
				case 0x00003A98:
				case 0x00004E20:
				case 0x000061A8:
				case 0x00007530:
				case 0x000088B8:
				case 0x00009C40:
				case 0x0000AFC8:
				case 0x0000C350:
					return "place_bet_large";
				
				default:
			}
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "place_bet_small";
				
				case 0x00000001:
					return "place_bet_small_alt1";
				
				case 0x00000002:
					return "place_bet_small_alt2";
				
				case 0x00000003:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_165(int iParam0)
{
	Local_126 = iParam0;
}

void func_166()
{
	char* sVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000002))
	{
		unk_0x0674E58A79778E99(&(Local_126.f_FA), 0x00000002);
	}
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000D2, 0x00000001);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D2);
	if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
	{
		if (unk_0x9A01369A10646AFE(0x00000002, 0x000000D2))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_126.f_FA), 0x00000000);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003) || func_424(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		unk_0x0D3BE1DE0262A012(sVar0, 0x00000000);
		if (func_292(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0x27117E2CDD4D67C3(sVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000001))
			{
				func_291(0x00000000, 0x00000000);
				func_289(0x00000001, sVar0, sVar0);
				func_288("BJACK_RULES");
				func_170(0x00000001, iLocal_136, 0x00000009);
				func_169(0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
				func_287(0xFFFFFFFF, 0x00000001, 0x00000001);
				func_286(func_168(iLocal_136), 0x00000000, 0x00000000);
				func_285(func_167(iLocal_136));
				unk_0x5D96D8530B3D0904(&(Local_126.f_FA), 0x00000001);
			}
			func_246(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		if (unk_0x9A01369A10646AFE(0x00000002, 0x000000CA))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
			func_243(0x00000001, 0xFFFFFFFF);
			unk_0xF5A41F3D3B38EFE3(sVar0);
			iLocal_136 = 0x00000001;
			Local_126.f_FA = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Local_126.f_FA), 0x00000002);
		}
		else if (unk_0x9A01369A10646AFE(0x00000002, 0x000000BE))
		{
			iLocal_136++;
			if (iLocal_136 > 0x00000009)
			{
				iLocal_136 = 0x00000001;
			}
			unk_0x0674E58A79778E99(&(Local_126.f_FA), 0x00000001);
		}
		else if (unk_0x9A01369A10646AFE(0x00000002, 0x000000BD))
		{
			iLocal_136 = (iLocal_136 - 0x00000001);
			if (iLocal_136 < 0x00000001)
			{
				iLocal_136 = 0x00000009;
			}
			unk_0x0674E58A79778E99(&(Local_126.f_FA), 0x00000001);
		}
	}
}

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "BJACK_RULE_1";
		
		case 0x00000002:
			return "BJACK_RULE_2";
		
		case 0x00000003:
			return "BJACK_RULE_3";
		
		case 0x00000004:
			return "BJACK_RULE_4";
		
		case 0x00000005:
			return "BJACK_RULE_5";
		
		case 0x00000006:
			return "BJACK_RULE_6";
		
		case 0x00000007:
			return "BJACK_RULE_7";
		
		case 0x00000008:
			return "BJACK_RULE_8";
		
		case 0x00000009:
			if ((func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003) || func_424(unk_0xD803B885F5E47A62()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "BJACK_RULE_1T";
		
		case 0x00000002:
			return "BJACK_RULE_2T";
		
		case 0x00000003:
			return "BJACK_RULE_3T";
		
		case 0x00000004:
			return "BJACK_RULE_4T";
		
		case 0x00000005:
			return "BJACK_RULE_5T";
		
		case 0x00000006:
			return "BJACK_RULE_6T";
		
		case 0x00000007:
			return "BJACK_RULE_7T";
		
		case 0x00000008:
			return "BJACK_RULE_8T";
		
		case 0x00000009:
			if ((func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003) || func_424(unk_0xD803B885F5E47A62()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13D3[0x00000000] = iParam0;
	Global_574E.f_13D3[0x00000001] = iParam1;
	Global_574E.f_13D3[0x00000002] = iParam2;
	Global_574E.f_13D3[0x00000003] = iParam3;
	Global_574E.f_13D3[0x00000004] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	Global_574E.f_1667 = iParam0;
	Global_574E.f_1668 = iParam1;
	Global_574E.f_1669 = iParam2;
}

void func_171(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_172(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 0x00000001 || unk_0xB8E3620B82AD47D7(0x00000002))
	{
		*uParam2 = 0x00000000;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_178(uParam2);
	}
	if (Global_141384 < 0x00000002)
	{
		func_177(0x00000001);
	}
	if (*uParam2 == 0x00000000)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < uParam2->f_2B5)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B1, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_2B2, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_37;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_38;
						func_176(unk_0xF59058FCB716F903(iVar1, iVar2, 0x00000001));
						if (iVar3 < 0x00000169)
						{
							func_176(unk_0xF59058FCB716F903(iVar1, iVar3, 0x00000001));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_176(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, 0x00000001));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B3, iVar0))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0 /*57*/].f_37);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_176(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_176(&(uParam2->f_1[iVar0 /*57*/].f_10));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(0x00000000);
						unk_0x3CAEA85DA607305E(0x00000169);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_2BB);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 0x00000001;
		}
	}
	uParam2->f_2B7 = 0.05f;
	uParam2->f_2B8 = 0.045f;
	uParam2->f_2B9 = 0f;
	uParam2->f_2BA = 0f;
	if (*uParam2 == 0x00000001)
	{
		func_174(*uParam0, uParam1);
	}
	func_173();
}

void func_173()
{
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

void func_174(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0x00000000);
}

void func_175(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_176(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_177(int iParam0)
{
	Global_141384 = iParam0;
}

void func_178(var uParam0)
{
	uParam0->f_2B4 = 0x00000000;
}

int func_179(var uParam0)
{
	return uParam0->f_2B4;
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_2BB = fParam1;
}

struct<9> func_181()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 0x000000FF;
	Var0.f_5 = 0x000000FF;
	Var0.f_6 = 0x000000FF;
	Var0.f_7 = 0x000000C8;
	Var0.f_8 = 0f;
	return Var0;
}

void func_182(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_2B5 >= 0x0000000C)
	{
		return;
	}
	iVar0 = uParam3->f_2B5;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_20), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_2B1), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_36 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_37 = iParam1;
	unk_0x5D96D8530B3D0904(&(uParam3->f_2B2), iVar0);
	uParam3->f_2B5++;
}

void func_183(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_2B5 >= 0x0000000C)
	{
		return;
	}
	iVar0 = uParam2->f_2B5;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_10), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_20), sParam1, 16);
	uParam2->f_2B5++;
}

void func_184(var uParam0)
{
	func_185(uParam0);
	uParam0->f_2B4 = 0x00000001;
}

void func_185(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_10), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_20), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_24 = 0x00000000;
		uParam0->f_1[iVar0 /*57*/].f_25 = 0x00000000;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_26), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0x00000002;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0x00000169;
		uParam0->f_1[iVar0 /*57*/].f_38 = 0x00000169;
		iVar0++;
	}
	uParam0->f_2AE = 0x00000000;
	uParam0->f_2AF = 0x00000000;
	uParam0->f_2B0 = 0x00000000;
	uParam0->f_2B1 = 0x00000000;
	uParam0->f_2B3 = 0x00000000;
	uParam0->f_2B2 = 0x00000000;
	uParam0->f_2B4 = 0x00000000;
	uParam0->f_2B5 = 0x00000000;
	uParam0->f_2B7 = 0f;
	uParam0->f_2B8 = 0f;
	uParam0->f_2B9 = 0f;
	uParam0->f_2BA = 0f;
	uParam0->f_2BB = 1f;
}

var func_186(bool bParam0)
{
	if (func_151())
	{
		if (!bParam0)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000008))
			{
				case 0x00000000:
					Local_126.f_62E = "female_idle_cardgames_var_01";
					break;
				
				case 0x00000001:
					Local_126.f_62E = "female_idle_cardgames_var_02";
					break;
				
				case 0x00000002:
					Local_126.f_62E = "female_idle_cardgames_var_03";
					break;
				
				case 0x00000003:
					Local_126.f_62E = "female_idle_cardgames_var_04";
					break;
				
				case 0x00000004:
					Local_126.f_62E = "female_idle_cardgames_var_05";
					break;
				
				case 0x00000005:
					Local_126.f_62E = "female_idle_cardgames_var_06";
					break;
				
				case 0x00000006:
					Local_126.f_62E = "female_idle_cardgames_var_07";
					break;
				
				case 0x00000007:
					Local_126.f_62E = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x0000000D))
		{
			case 0x00000000:
				Local_126.f_62E = "idle_cardgames_var_01";
				break;
			
			case 0x00000001:
				Local_126.f_62E = "idle_cardgames_var_02";
				break;
			
			case 0x00000002:
				Local_126.f_62E = "idle_cardgames_var_03";
				break;
			
			case 0x00000003:
				Local_126.f_62E = "idle_cardgames_var_04";
				break;
			
			case 0x00000004:
				Local_126.f_62E = "idle_cardgames_var_05";
				break;
			
			case 0x00000005:
				Local_126.f_62E = "idle_cardgames_var_06";
				break;
			
			case 0x00000006:
				Local_126.f_62E = "idle_cardgames_var_07";
				break;
			
			case 0x00000007:
				Local_126.f_62E = "idle_cardgames_var_08";
				break;
			
			case 0x00000008:
				Local_126.f_62E = "idle_cardgames_var_09";
				break;
			
			case 0x00000009:
				Local_126.f_62E = "idle_cardgames_var_10";
				break;
			
			case 0x0000000A:
				Local_126.f_62E = "idle_cardgames_var_11";
				break;
			
			case 0x0000000B:
				Local_126.f_62E = "idle_cardgames_var_12";
				break;
			
			case 0x0000000C:
				Local_126.f_62E = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_126.f_62E;
}

int func_187()
{
	if (func_188() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_188()
{
	return Global_1406D3.f_12;
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_115();
	if (iVar0 == 0x00000000)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_40001.f_671D)
	{
		func_113();
		iVar2 = 0x00000000;
	}
	if ((iVar2 - iParam0) >= Global_40001.f_671E)
	{
		func_112(0xB402A40B, Global_40001.f_671E);
		func_113();
		Global_258BC5 = 0x00000001;
	}
	else
	{
		func_112(0xB402A40B, (iVar2 - iParam0));
	}
}

int func_190(var uParam0, bool bParam1, bool bParam2)
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

int func_191()
{
	if ((Local_126.f_E8 && Local_126.f_E9) && (!Local_126.f_EB && Local_131.f_E > 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_192()
{
	if (unk_0x0D03A641486A2001() != func_193())
	{
		return unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
	}
	return 0x00000000;
}

int func_193()
{
	return 0xFFFFFFFF;
}

void func_194()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	int iVar12;
	
	if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF))
	{
		if (bLocal_146)
		{
			func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
		}
		bLocal_146 = 0x00000000;
	}
	if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0))
	{
		if (bLocal_145)
		{
			func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
		}
		bLocal_145 = 0x00000000;
	}
	if ((((Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000 && !unk_0x4FD68D5821EE3E19()) && !func_333()) && !unk_0xE57E602827E07C9D()) && (Local_116.f_5EB[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] < 0x00000009 || !unk_0xEAE0D21A50E6C7F4(Local_116.f_613[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x0000000D)))
	{
		if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000000)
		{
			if ((((unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0)) && !bLocal_145) && !func_66(&uLocal_147)) && !unk_0x9F4FE516EAACCFC5(Local_126.f_F2))
			{
				if (!bLocal_146)
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
					{
					}
					func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
					bLocal_146 = 0x00000001;
				}
			}
		}
		else
		{
			if (bLocal_146)
			{
				func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
			}
			bLocal_146 = 0x00000000;
		}
		if (Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_C >= 0x00000002)
		{
			if ((((unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF)) && !bLocal_146) && !func_66(&uLocal_147)) && !unk_0x9F4FE516EAACCFC5(Local_126.f_F2))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
				}
				bLocal_145 = 0x00000001;
			}
		}
		else
		{
			if (bLocal_145)
			{
				func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
			}
			bLocal_145 = 0x00000000;
		}
	}
	else
	{
		if (bLocal_146 || bLocal_145)
		{
			func_296(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
		}
		bLocal_146 = 0x00000000;
		bLocal_145 = 0x00000000;
	}
	if (bLocal_145 || bLocal_146)
	{
		unk_0x01861BC775A34949(0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000A6, 0x00000001);
		}
		if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x9F4FE516EAACCFC5(Local_126.f_F2))
		{
			Local_126.f_F2 = unk_0x92B061D59B9B540A(0x019286A9, 0x00000001);
			unk_0x86F44313DFA8F00C(Local_126.f_F2, func_207(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), func_206(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), func_205(bLocal_145), 0x00000000, 0x00000001, 0x00000001, 0x00000002);
			unk_0x91F5B0244AAE6222(Local_126.f_F2, "HAND_SHAKE", 0.03f);
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		}
		else if (bLocal_145)
		{
			if (Local_116.f_5F5[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4])
			{
				if (func_27(&(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/])) == 0x00000015 && Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/].f_C == 0x00000002)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/])) > 0x00000015)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_318("BJACK_D_HAND1", func_27(&(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/]))))
				{
					func_93("BJACK_D_HAND1", func_27(&(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_318("BJACK_D_HAND1", func_35(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/][0x00000001])))
			{
				func_93("BJACK_D_HAND1", func_35(Local_116.f_34E[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 /*13*/][0x00000001]));
			}
			fVar0 = unk_0x86CC98177DFF41EC(Local_126.f_F2);
			fVar1 = 50f;
			fVar1 = func_204(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, 0x00000001);
			fVar0 = func_202(fVar0, fVar1, 0.2f, 0x00000004);
			unk_0x86F44313DFA8F00C(Local_126.f_F2, func_207(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), func_206(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, bLocal_145), fVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
		}
		else if (bLocal_146)
		{
			fVar4 = unk_0x86CC98177DFF41EC(Local_126.f_F2);
			fVar5 = 50f;
			vVar6 = { unk_0x17D61C69BA58F815(Local_126.f_F2, 0x00000002) };
			vVar7 = { 0f, 0f, 0f };
			vVar8 = { -38.1166f, -0.0930717f, -102.613f };
			vVar9 = { unk_0xD06724447386BC29(Local_126.f_F2) };
			vVar10 = { 0f, 0f, 0f };
			vVar11 = { 966.621f, 32.009f, 116.621f };
			if (vVar6.z < 0f)
			{
				vVar6.z = (vVar6.z + 360f);
			}
			if (!func_66(&uLocal_143))
			{
				iVar12 = unk_0x0DED1C1B8250FA57(0x00000002, 0x0000001E);
				bVar2 = iVar12 < 0x00000064;
				bVar3 = iVar12 > 0x00000096;
				if (bVar2 || bVar3)
				{
					func_67(&uLocal_143, 0x00000000, 0x00000000);
				}
			}
			else if (func_65(&uLocal_143, 0x000001F4, 0x00000000))
			{
				func_63(&uLocal_143);
			}
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 >= 0x00000000 && Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] > 0x00000001)
			{
				if (bVar2)
				{
					iLocal_138 = (iLocal_138 - 0x00000001);
					if (iLocal_138 < func_201(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3))
					{
						iLocal_138 = func_201(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_138++;
					if (iLocal_138 > func_200(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3))
					{
						iLocal_138 = func_200(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_138 = 0x00000000;
			}
			vVar11 = { func_207(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, 0x00000000) };
			vVar8 = { func_199(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3) };
			fVar5 = func_204(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3, 0x00000000);
			if (vVar8.z < 0f)
			{
				vVar8.z = (vVar8.z + 360f);
			}
			vVar7 = { func_197(vVar6, vVar8, 0.2f, 0x00000004) };
			vVar10 = { func_196(vVar9, vVar11, 0.2f, 0x00000004) };
			if (vVar7.z > 180f)
			{
				vVar7.z = (vVar7.z - 360f);
			}
			else if (vVar7.z < -180f)
			{
				vVar7.z = (vVar7.z + 360f);
			}
			if (func_195(vVar6, vVar8, 10f, 0x00000000) && func_195(vVar9, vVar11, 0.1f, 0x00000000))
			{
				fVar4 = func_202(fVar4, fVar5, 0.2f, 0x00000004);
			}
			unk_0x86F44313DFA8F00C(Local_126.f_F2, vVar10, vVar7, fVar4, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
		}
	}
	else
	{
		if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x9F4FE516EAACCFC5(Local_126.f_F2))
		{
			unk_0x01861BC775A34949(0x00000001);
			if (!func_66(&uLocal_147) && bLocal_137)
			{
				func_67(&uLocal_147, 0x00000000, 0x00000000);
				unk_0x82A772610883F395("DefaultBlinkOutro", 0x00000000, 0x00000000);
			}
			else if (func_65(&uLocal_147, 0x00000064, 0x00000000) || !bLocal_137)
			{
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(Local_126.f_F2, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				func_63(&uLocal_147);
				bLocal_137 = 0x00000000;
				iLocal_138 = 0x00000000;
			}
		}
	}
	if (bLocal_146 || bLocal_137)
	{
		if ((Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 >= 0x00000002 && ((!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000D) && !unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B)) || (((unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B) && unk_0xE9F78D191AD5EDBA(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4])) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4]), func_58(), func_14(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4, Local_116.f_627[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4], 0x00000001), 0x00000003)))) || (unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/], 0x0000000B) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 < 0x00000003))
		{
			if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_94("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_318("BJACK_P_HAND1", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/]))))
			{
				func_93("BJACK_P_HAND1", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])));
			}
		}
		else if (Local_116.f_627[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4] != (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 - (0x00000004 * Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)) && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 >= 0x00000002)
		{
			if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
			{
				if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
			{
				if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
			{
				if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])));
				}
			}
			else if (!func_103("BJACK_SHOW_1", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])), func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/]))))
			{
				func_102("BJACK_SHOW_1", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])), func_27(&(Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/])));
			}
		}
		else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) == 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000002)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) <= 0x00000015 && Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 == 0x00000007)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_94("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])) > 0x00000015)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_318("BJACK_P_HAND1", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/]))))
		{
			func_93("BJACK_P_HAND1", func_27(&(Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/])));
		}
	}
}

int func_195(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

Vector3 func_196(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_202(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_202(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_202(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

Vector3 func_197(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_198(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_198(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_198(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

float func_198(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x755FF954DAE327E1((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_202(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_199(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_217(iParam0) };
	vVar1 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
		case 0x00000008:
		case 0x0000000C:
			switch (iLocal_138)
			{
				case 0x00000000:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 0xFFFFFFFF:
					vVar1 = { -33.84f, 0f, -51.84f };
					break;
				
				case 0xFFFFFFFE:
					vVar1 = { -22.68f, 0f, -58.68f };
					break;
				
				case 0xFFFFFFFD:
					vVar1 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 0x00000001:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000D:
			switch (iLocal_138)
			{
				case 0x00000000:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 0x00000001:
					vVar1 = { -33.48f, 0f, -123.48f };
					break;
				
				case 0xFFFFFFFF:
					vVar1 = { -36f, 0f, -45f };
					break;
				
				case 0xFFFFFFFE:
					vVar1 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000006:
		case 0x0000000A:
		case 0x0000000E:
			switch (iLocal_138)
			{
				case 0x00000000:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 0x00000001:
					vVar1 = { -33.84f, 0f, -130.32f };
					break;
				
				case 0x00000002:
					vVar1 = { -22.32f, 0f, -124.92f };
					break;
				
				case 0xFFFFFFFF:
					vVar1 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		
		case 0x00000003:
		case 0x00000007:
		case 0x0000000B:
		case 0x0000000F:
			switch (iLocal_138)
			{
				case 0x00000000:
					vVar1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 0x00000001:
					vVar1 = { -34.56f, 0f, -126f };
					break;
				
				case 0x00000002:
					vVar1 = { -22.32f, 0f, -119.52f };
					break;
				
				case 0x00000003:
					vVar1 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(vVar0.z, 0f, 0f) + vVar1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
		case 0x00000008:
		case 0x0000000C:
			return 0x00000000;
		
		case 0x00000001:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000D:
			return 0x00000001;
		
		case 0x00000002:
		case 0x00000006:
		case 0x0000000A:
		case 0x0000000E:
			return 0x00000002;
		
		case 0x00000003:
		case 0x00000007:
		case 0x0000000B:
		case 0x0000000F:
			return 0x00000003;
		
		default:
	}
	return 0x00000000;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
		case 0x00000008:
		case 0x0000000C:
			return 0xFFFFFFFD;
		
		case 0x00000001:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000D:
			return 0xFFFFFFFE;
		
		case 0x00000002:
		case 0x00000006:
		case 0x0000000A:
		case 0x0000000E:
			return 0xFFFFFFFF;
		
		case 0x00000003:
		case 0x00000007:
		case 0x0000000B:
		case 0x0000000F:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

float func_202(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 0x00000001:
		case 0x00000006:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 0x00000002:
		case 0x00000007:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 0x00000003:
		case 0x00000008:
			fParam2 = ((-SYSTEM::COS(func_203((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 0x00000004:
		case 0x00000009:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0x00000000:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			fVar0 = func_202(fParam0, fParam1, fParam2, 0x00000000);
			break;
		
		case 0x00000005:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			fVar0 = func_202(fParam0, fParam1, fParam2, 0x00000005);
			break;
	}
	return fVar0;
}

float func_203(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_204(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
		case 0x00000008:
		case 0x0000000C:
			switch (iLocal_138)
			{
				case 0x00000000:
					fVar0 = 33.8659f;
					break;
				
				case 0xFFFFFFFF:
					fVar0 = 34.3684f;
					break;
				
				case 0xFFFFFFFE:
					fVar0 = 26.8741f;
					break;
				
				case 0xFFFFFFFD:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 0x00000001:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000D:
			switch (iLocal_138)
			{
				case 0x00000000:
					fVar0 = 33.8659f;
					break;
				
				case 0x00000001:
					fVar0 = 34.3684f;
					break;
				
				case 0xFFFFFFFF:
					fVar0 = 34.3684f;
					break;
				
				case 0xFFFFFFFE:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000006:
		case 0x0000000A:
		case 0x0000000E:
			switch (iLocal_138)
			{
				case 0x00000000:
					fVar0 = 33.8659f;
					break;
				
				case 0x00000001:
					fVar0 = 34.3684f;
					break;
				
				case 0x00000002:
					fVar0 = 26.8741f;
					break;
				
				case 0xFFFFFFFF:
					fVar0 = 34.3684f;
					break;
			}
			break;
		
		case 0x00000003:
		case 0x00000007:
		case 0x0000000B:
		case 0x0000000F:
			switch (iLocal_138)
			{
				case 0x00000000:
					fVar0 = 33.8659f;
					break;
				
				case 0x00000001:
					fVar0 = 34.3684f;
					break;
				
				case 0x00000002:
					fVar0 = 26.8741f;
					break;
				
				case 0x00000003:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_205(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_206(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		return Vector(func_69(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		vVar0 = { func_217(iParam0) };
		return Vector(vVar0.z, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		return unk_0x8A5E176FF719A014(func_70(iParam1), func_69(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		vVar0 = { func_217(iParam0) };
		return unk_0x8A5E176FF719A014(func_357(iParam0), vVar0.z, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

void func_208(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_209(int iParam0)
{
	if (Local_116.f_5EB[iParam0] == 0x00000002)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5, 0x00000000))
		{
			Local_126.f_2 = { Local_116.f_1[iParam0 /*211*/] };
			unk_0x5D96D8530B3D0904(&(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5), 0x00000000);
		}
	}
	else if (Local_116.f_5EB[iParam0] > 0x00000002 && unk_0xEAE0D21A50E6C7F4(Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5, 0x00000000))
	{
		if (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000000)
		{
			if (Local_126.f_D5.f_8 != Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 || (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000000 && Local_126.f_DE.f_8 != Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8))
			{
				Local_126.f_D5 = { Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/] };
			}
			else
			{
				if (Local_126.f_D5[iLocal_141] != Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/][iLocal_141])
				{
					iLocal_140 = 0x00000000;
					iLocal_141 = 0x00000000;
					iLocal_142 = 0x00000000;
					if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
					{
						Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
					}
					Local_131.f_12 = func_415();
					Local_131.f_13 = func_192();
					Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
					Local_131.f_7 = func_397();
					if (Global_40001.f_65B3)
					{
						unk_0x5943F8BE26E6D616(&Local_131);
					}
					func_371(0x00000001);
					unk_0xA37A90C62806D848(0x00000001);
					return 0x00000001;
				}
				iLocal_141++;
				if (iLocal_141 >= Local_126.f_D5.f_8)
				{
					iLocal_141 = 0x00000000;
				}
			}
		}
		if (Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000000)
		{
			if (Local_126.f_DE.f_8 != Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/].f_8 || (Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8 > 0x00000000 && Local_126.f_D5.f_8 != Local_116.f_383[unk_0xD803B885F5E47A62() /*9*/].f_8))
			{
				Local_126.f_DE = { Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/] };
			}
			else
			{
				if (Local_126.f_DE[iLocal_142] != Local_116.f_4A4[unk_0xD803B885F5E47A62() /*9*/][iLocal_142])
				{
					iLocal_140 = 0x00000000;
					iLocal_141 = 0x00000000;
					iLocal_142 = 0x00000000;
					if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
					{
						Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
					}
					Local_131.f_12 = func_415();
					Local_131.f_13 = func_192();
					Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
					Local_131.f_7 = func_397();
					if (Global_40001.f_65B3)
					{
						unk_0x5943F8BE26E6D616(&Local_131);
					}
					func_371(0x00000001);
					unk_0xA37A90C62806D848(0x00000001);
					return 0x00000001;
				}
				iLocal_142++;
				if (iLocal_142 >= Local_126.f_DE.f_8)
				{
					iLocal_142 = 0x00000000;
				}
			}
		}
		if (Local_116.f_1[iParam0 /*211*/][iLocal_140] != Local_126.f_2[iLocal_140])
		{
			iLocal_140 = 0x00000000;
			iLocal_141 = 0x00000000;
			iLocal_142 = 0x00000000;
			if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
			{
				Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
			}
			Local_131.f_12 = func_415();
			Local_131.f_13 = func_192();
			Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
			Local_131.f_7 = func_397();
			if (Global_40001.f_65B3)
			{
				unk_0x5943F8BE26E6D616(&Local_131);
			}
			func_371(0x00000001);
			unk_0xA37A90C62806D848(0x00000001);
			return 0x00000001;
		}
		iLocal_140++;
		if (iLocal_140 >= 0x000000D0)
		{
			iLocal_140 = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_210()
{
	int iVar0;
	
	iVar0 = func_377(Local_126.f_F7);
	if (iVar0 < 0x00000020)
	{
		unk_0x5D96D8530B3D0904(&(Local_126.f_FE), iVar0);
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_418())
	{
		return 0x00000000;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 != func_418())
	{
		return func_320(iVar0);
	}
	return 0x00000000;
}

int func_212(int iParam0)
{
	if (iParam0 != func_418())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_418();
}

void func_213(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0x00000000)
	{
		return;
	}
	if ((iParam1 == 0x00000004 || iParam1 == 0x00000005) || iParam1 == 0x00000006)
	{
		if (func_329())
		{
			func_213(uParam0, 0x00000007);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_63(&(Local_126.f_62C));
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000003) && iParam1 != 0x00000008)
	{
		func_67(&(Local_126.f_62C), 0x00000000, 0x00000000);
	}
}

int func_214()
{
	int iVar0;
	
	iVar0 = func_377(Local_126.f_F7);
	if (iVar0 < 0x00000020)
	{
		return unk_0xEAE0D21A50E6C7F4(Local_126.f_FE, iVar0);
	}
	return 0x00000000;
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sit_enter_left";
		
		case 0x00000001:
			return "sit_enter_left_side";
		
		case 0x00000002:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_216()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_217(int iParam0)
{
	int iVar0;
	
	if (Local_126.f_101 == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_377(iParam0) == 0x00000000 || func_377(iParam0) == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 0x06B32955, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iVar0) && unk_0x1A5AE8A9B1D42A10(iVar0))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000001:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000002:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000003:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000004:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000005:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000006:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000007:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000008:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000009:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000A:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000B:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x0000000C:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x0000000D:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000E:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000F:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_218(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0xEEB20D14BD38615E(func_216(), func_215(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 0x00000002) };
	return vVar0.z;
}

float func_219(int iParam0, vector3 vParam1, bool bParam2)
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

Vector3 func_220(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x1BB04F10296A1C5E(func_216(), func_215(iParam1), func_357(iParam0), func_217(iParam0), 0.01f, 0x00000002) };
	return vVar0;
}

int func_221()
{
	unk_0x3F423BF5B8125A50(func_58());
	unk_0x3F423BF5B8125A50(func_72());
	unk_0x3F423BF5B8125A50(func_88());
	unk_0x3F423BF5B8125A50(func_216());
	if (((unk_0xB4AE0788C1587752(func_58()) && unk_0xB4AE0788C1587752(func_72())) && unk_0xB4AE0788C1587752(func_88())) && unk_0xB4AE0788C1587752(func_216()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_222()
{
	if (func_65(&(Local_126.f_62A), 0x00000DAC, 0x00000000))
	{
		func_63(&(Local_126.f_62A));
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_223(int iParam0)
{
	if (Local_116.f_640[iParam0] == func_418())
	{
		return 0x00000000;
	}
	return Local_116.f_640[iParam0] != unk_0xD803B885F5E47A62();
}

void func_224(int iParam0)
{
	Global_19E136 = unk_0xDD0E7998AE8AD485();
	Global_19E147 = iParam0;
	if (!func_232())
	{
		func_229();
	}
	if (!func_228())
	{
		func_225();
	}
}

void func_225()
{
	func_112(0xC1F81620, unk_0xDD0E7998AE8AD485());
	func_227();
	func_226();
	Global_19E144 = 0x00000001;
	Global_19E13F = 0x00000000;
}

void func_226()
{
	func_112(0x5F5CFE71, unk_0xDD0E7998AE8AD485());
}

void func_227()
{
	func_112(0x8B348F43, 0x00000000);
	func_112(0x96A1462A, 0x00000000);
	func_112(0x89C32C6E, 0x00000000);
	func_112(0x7B748FD1, 0x00000000);
	func_112(0xDE0E5503, 0x00000000);
	func_112(0xCFF538D1, 0x00000000);
	func_112(0xC29A9E1C, 0x00000000);
	func_112(0x247961D8, 0x00000000);
	func_112(0x1717C715, 0x00000000);
	func_112(0x057DFFB1, 0x00000000);
	func_112(0x5F5CFE71, 0x00000000);
}

bool func_228()
{
	return Global_19E144;
}

void func_229()
{
	func_112(0x37E20A33, unk_0xDD0E7998AE8AD485());
	func_231();
	func_230((unk_0xDD0E7998AE8AD485() + 0x00015180));
	Global_19E143 = 0x00000001;
}

void func_230(int iParam0)
{
	Global_19E13E = iParam0;
}

void func_231()
{
	func_112(0x224B31F3, unk_0xDD0E7998AE8AD485());
}

bool func_232()
{
	return func_116(0x37E20A33) != 0x00000000;
}

bool func_233(int iParam0)
{
	return Local_116.f_640[iParam0] == unk_0xD803B885F5E47A62();
}

void func_234()
{
	func_359(0x00000002);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B9, 0x00000000);
	func_335();
	func_296(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
	func_242();
	unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000002);
	func_235();
}

void func_235()
{
	int iVar0;
	int iVar1;
	
	if (Global_19E147 != 0xFFFFFFFF)
	{
		iVar0 = (unk_0xDD0E7998AE8AD485() - Global_19E136);
		iVar1 = (unk_0xDD0E7998AE8AD485() - Global_19E137);
		if (Global_19E137 == 0xFFFFFFFF)
		{
			func_236(iVar0);
		}
		else
		{
			func_236(iVar1);
		}
		func_231();
		func_226();
		Global_19E136 = 0xFFFFFFFF;
		Global_19E137 = 0xFFFFFFFF;
		Global_19E147 = 0xFFFFFFFF;
	}
}

void func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_241();
	Global_19E13F = (Global_19E13F + iParam0);
	func_237(iVar0, iParam0);
	func_226();
}

void func_237(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 0x0000000C);
	iVar3 = 0x00000001;
	if ((iVar2 % 0x00000020) + 12 > 0x00000020)
	{
		iVar3 = 0x00000002;
	}
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / 32f));
	if (iVar4 < 0x00000000)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 0x00000009)
		{
			return;
		}
		iVar5 = func_240((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_116(iVar5);
		iVar0++;
	}
	iVar6 = func_239(&uVar1, iParam0, 0x0000000C);
	iVar6 = (iVar6 + iParam1);
	func_238(&uVar1, iParam0, 0x0000000C, iVar6);
	iVar0 = 0x00000000;
	while (iVar0 < iVar3)
	{
		uVar7 = func_240((iVar4 + iVar0));
		func_112(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 0x00000020) + iParam2) - 0x00000020)) / 32f)) + 1;
	if (((iVar4 - 0x00000001) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0x00000000;
	iVar7 = (iVar3 % 0x00000020);
	iVar0 = 0x00000000;
	while (iVar0 < iVar5)
	{
		iVar8 = (0x00000020 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam3, iVar6))
			{
				unk_0x5D96D8530B3D0904(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0x0674E58A79778E99(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0x00000000)
		{
			iVar7 = 0x00000000;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_239(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 0x00000020) + iParam2) - 0x00000020)) / 32f)) + 1;
	if (((iVar5 - 0x00000001) + iVar6) >= *uParam0)
	{
		return 0x00000000;
	}
	iVar7 = 0x00000000;
	iVar8 = (iVar4 % 0x00000020);
	iVar0 = 0x00000000;
	while (iVar0 < iVar6)
	{
		iVar9 = (0x00000020 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0x5D96D8530B3D0904(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0x00000000)
		{
			iVar8 = 0x00000000;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_240(int iParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0x00000000)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_241()
{
	return func_116(0x057DFFB1);
}

void func_242()
{
	Global_2537E2.f_484.f_A = 0x00000000;
}

void func_243(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_245(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_574E.f_20E1 = 0x00000000;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(0x00000009, 0x00000000);
		Global_574E.f_15FC[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0x00000000;
	}
	if (bParam0)
	{
		func_244(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_244(int iParam0)
{
	if (iParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0x00000000;
		iParam0->f_9 = 0x00000000;
	}
}

int func_245(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000006)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 0x00000001;
		}
		else if (Global_574E.f_1659[iVar2] == 0x00000000)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_246(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_245(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_281(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_279(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0x00000000;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0x00000000);
		if (func_278())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_278())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 0x00000001)
		{
			func_274(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			Global_574E.f_177E = 0x00000001;
		}
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000002)
	{
		if (iVar5 == 0x00000001 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_273(0x0000001D), 64);
					StringCopy(&cVar64, func_270(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_269(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				func_269(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_268();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000000;
					iVar18 = 0x00000000;
					iVar14 = 0x00000000;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 0x00000002)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000003)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000001)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000008)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000005)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000006)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000007)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000009)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0x00000000);
				}
				if (Global_574E.f_1667)
				{
					func_268();
					func_266((((Global_574B + fParam5) - 0.00390625f) - func_267("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_268();
						func_266((((Global_574B + fParam5) - 0.00390625f) - func_267("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0x00000000;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0x00000000)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000CC;
				}
				func_269(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0x00000000 && Global_574E.f_129E != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_279(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_265(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_269(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_265(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_279(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_264(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_273(Global_574E.f_12A0), func_270(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_574E.f_129E > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 0xFFFFFFFF;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0x00000000 && Global_412185.f_41 != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_279(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_265(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_269(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_265(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_279(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_264(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_273(Global_412185.f_43), func_270(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_412185.f_41 > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 0xFFFFFFFF;
					}
				}
			}
			func_261(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 0x00000001 || !Global_574E.f_1660)
		{
			iVar19 = 0x00000000;
			iVar23 = 0x00000000;
			iVar20 = 0x00000000;
			iVar21 = 0x00000000;
			iVar22 = 0x00000000;
			iVar9 = 0x00000000;
			iVar10 = 0x00000000;
			iVar11 = 0x00000000;
			iVar12 = 0x00000000;
			iVar13 = 0x00000000;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 0x00000001);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0x00000000;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = 0x00000000;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = 0x00000001;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = 0x00000000;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 0x00000001) && bVar33)
				{
					iVar70 = 0x000000FF;
					iVar71 = 0x000000FF;
					iVar72 = 0x000000FF;
					iVar73 = 0x000000FF;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(0x00000001, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0x00000000);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0x00000000;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 0x00000005)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0x00000000;
						bVar53 = 0x00000000;
						if (Global_574E.f_177B[0x00000000] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000000])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000000;
							}
						}
						if (Global_574E.f_177B[0x00000001] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000001])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000001;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 0x00000004 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = 0x00000001;
						}
						else
						{
							bVar52 = 0x00000000;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0x00000000:
								break;
							
							case 0x00000001:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0x00000000;
										iVar26 = 0x00000000;
										iVar27 = 0x00000000;
										iVar28 = 0x00000000;
										iVar29 = 0x00000000;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											bVar50 = 0x00000000;
											bVar51 = 0x00000000;
											iVar14 = 0x00000000;
											while (iVar14 < 0x00000004)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
												{
													bVar51 = 0x00000001;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
												{
													bVar50 = 0x00000001;
												}
												iVar14++;
											}
											func_259(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										}
										if (iVar28 > 0x00000000)
										{
											iVar14 = 0x00000000;
											while (iVar14 < iVar28)
											{
												if (func_279(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0x00000000)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000003D)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											iVar69 = (iVar8 - 0x00000001);
											while (iVar69 >= 0x00000000)
											{
												if (Global_574E.f_13DB[iVar69] == 0x00000002)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 0xFFFFFFFF);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_279(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_279(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_273(0x0000001A), func_270(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_279(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_279(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_273(0x0000001B), func_270(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									iVar25 = 0x00000000;
									iVar26 = 0x00000000;
									iVar27 = 0x00000000;
									iVar28 = 0x00000000;
									iVar29 = 0x00000000;
									iVar31 = 0x00000000;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										bVar50 = 0x00000000;
										bVar51 = 0x00000000;
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												bVar51 = 0x00000001;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												bVar50 = 0x00000001;
											}
											iVar14++;
										}
										func_259(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_258(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0x00000000;
									while (iVar14 < 0x00000004)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000001;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000008;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000005;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000006;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000007;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000009;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 0x00000002;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 0x00000003;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar28)] == 0x0000003D)
											{
												if (func_279(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_279(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_264(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_273(Global_574E.f_1151[(iVar22 + iVar28)]), func_270(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_273(Global_574E.f_1151[(iVar22 + iVar28)]), func_270(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 0x00000004;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										if (iVar31 == 0x00000004 && Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0x00000000);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0x00000000);
											if (func_257() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_259(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(0x000000FF, 0x000000FF, 0x000000FF, 0x00000096);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0x00000000);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0x00000000);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0x00000000)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0x00000000;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000002 && Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000033) && Global_574E.f_1151[(iVar22 + iVar14)] != 0x0000003D)
											{
												if (func_279(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_279(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_264(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_273(Global_574E.f_1151[(iVar22 + iVar14)]), func_270(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_273(Global_574E.f_1151[(iVar22 + iVar14)]), func_270(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_273(Global_574E.f_1151[(iVar22 + iVar14)]), func_270(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = 0x00000001;
								iVar19++;
								iVar14 = 0x00000000;
								while (iVar14 < 0x00000004)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 0x00000002:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_259(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_258(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_279(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_279(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_273(0x0000001A), func_270(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_279(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_279(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_273(0x0000001B), func_270(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_259(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_256((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
									}
								}
								bVar39 = 0x00000001;
								iVar20++;
								break;
							
							case 0x00000003:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_259(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_258(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_279(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_279(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_273(0x0000001A), func_270(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_279(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_279(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_273(0x0000001B), func_270(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_259(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_255((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_279(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0x00000000)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_279(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_279(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_264(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_273(0x0000001A), func_270(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_279(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_279(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_264(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_273(0x0000001B), func_270(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_279(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_264(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_273(Global_574E.f_1151[iVar22]), func_270(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_254(Global_574E.f_1151[iVar22])), (fVar37 * func_254(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
											}
										}
									}
								}
								bVar39 = 0x00000001;
								iVar22++;
								break;
							
							case 0x00000005:
								bVar39 = 0x00000001;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 0x00000005)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_279(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 0x00000001;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0x00000000;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 0x00000001;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 0x00000001;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_247(0x00000000);
	}
	Global_574E.f_20BE = 0x00000000;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(0x0000000A);
	}
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000008);
	if (bParam0)
	{
		func_171(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_247(int iParam0)
{
	if (func_253())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_252(0x00000000))
		{
			func_248(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_248(int iParam0)
{
	if (func_253())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_251())
		{
			func_250(0x00000001, 0x00000001);
		}
		else
		{
			func_250(0x00000000, 0x00000000);
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
	if (!func_249())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_249()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_250(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_252(0x00000000))
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

bool func_251()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_252(int iParam0)
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

bool func_253()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x00000035:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_255(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_256(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_257()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_258(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000000], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000001], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
}

void func_259(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_260(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 0x00000014 && iVar1 < 0x00000014) && iVar2 < 0x00000014)
			{
				if (bParam0 == 0x00000000)
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 0x000000E6 && iVar1 > 0x000000E6) && iVar2 > 0x000000E6)
			{
				if (bParam0)
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(0x0000000E, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
		else
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0x00000000, 0x00000000, 0x00000000, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	else
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(0x00000001);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000004);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000006);
	}
	else
	{
		unk_0x7BBAC160090910C3(0x00000000);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_260(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000008;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000008;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000025;
			*uParam2 = 0x00000025;
			*uParam3 = 0x00000027;
			break;
		
		case 0x00000016:
			*uParam1 = 0x0000008C;
			*uParam2 = 0x00000092;
			*uParam3 = 0x0000009A;
			break;
		
		case 0x00000017:
			*uParam1 = 0x0000005B;
			*uParam2 = 0x0000005D;
			*uParam3 = 0x0000005E;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000051;
			*uParam2 = 0x00000054;
			*uParam3 = 0x00000059;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x000000F0;
			*uParam2 = 0x000000F0;
			*uParam3 = 0x000000F0;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000096;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0x00000026;
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000006;
			break;
		
		case 0x00000058:
			*uParam1 = 0x000000F5;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000000F;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x0000004A;
			*uParam2 = 0x00000016;
			*uParam3 = 0x00000007;
			break;
		
		case 0x00000038:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x0000003A;
			*uParam3 = 0x00000035;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000047;
			*uParam2 = 0x00000078;
			*uParam3 = 0x0000003C;
			break;
		
		case 0x00000036:
			*uParam1 = 0x0000004D;
			*uParam2 = 0x00000062;
			*uParam3 = 0x00000068;
			break;
		
		case 0x00000049:
			*uParam1 = 0x0000000E;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000006D;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000016;
			*uParam2 = 0x00000022;
			*uParam3 = 0x00000048;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x00000000;
			*uParam2 = 0x000000AE;
			*uParam3 = 0x000000EF;
			break;
		
		case 0x00000083:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000B7;
			*uParam3 = 0x00000000;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x0000008E;
			*uParam2 = 0x0000008C;
			*uParam3 = 0x00000046;
			break;
		
		case 0x00000061:
			*uParam1 = 0x0000009C;
			*uParam2 = 0x0000008D;
			*uParam3 = 0x00000071;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000091;
			*uParam2 = 0x00000073;
			*uParam3 = 0x00000047;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000062;
			*uParam2 = 0x00000044;
			*uParam3 = 0x00000028;
			break;
		
		case 0x00000064:
			*uParam1 = 0x0000007C;
			*uParam2 = 0x0000001B;
			*uParam3 = 0x00000044;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000072;
			*uParam2 = 0x0000002A;
			*uParam3 = 0x0000003F;
			break;
		
		case 0x00000088:
			*uParam1 = 0x000000F6;
			*uParam2 = 0x00000097;
			*uParam3 = 0x00000099;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000020;
			*uParam2 = 0x00000020;
			*uParam3 = 0x0000002C;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000001A;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000017;
			break;
		
		default:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000FF;
			*uParam3 = 0x000000FF;
			break;
	}
}

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_245(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_281(bParam4, bParam8))
	{
		return;
	}
	if (func_262())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_17(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0x00000000 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0x00000000)
	{
		if (unk_0xB8E3620B82AD47D7(0x00000002))
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 0x00000169)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(0x00000002, Global_574E.f_13A2[iVar1], 0x00000001), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 0x00000020)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(0x00000002, Global_574E.f_13AF[iVar1], 0x00000001), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0x00000000;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_176(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_176(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_175(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0x00000000)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 0x00000169 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_176(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_175(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0x00000000)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(0x00000001);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 0xFFFFFFFF)
			{
				if (iParam2 > 0x00000000)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 0xFFFFFFFF)
		{
			if (iParam2 > 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 0x00000046);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000042);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
				Global_574E.f_20E1 = 0x00000001;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_574E.f_20E1 = 0x00000000;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

int func_262()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_263())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
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

int func_263()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_264(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(0x00000001, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 0x000000FF;
	switch (iParam0)
	{
		case 0x0000001C:
			*iParam2 = 0x000000C2;
			*iParam3 = 0x00000050;
			*iParam4 = 0x00000050;
			break;
		
		case 0x0000000F:
		case 0x00000004:
		case 0x00000010:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000035:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			if (bParam1)
			{
				*iParam2 = 0x00000000;
				*iParam3 = 0x00000000;
				*iParam4 = 0x00000000;
			}
			break;
		
		case 0x00000036:
			*iParam5 = 0x00000064;
			break;
		
		case 0x0000003E:
			*iParam5 = 0x00000064;
			break;
		
		case 0x00000037:
			unk_0xA402F6C87C08815C(0x00000018, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 0x000000FF;
			break;
	}
}

void func_265(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(0x00000002);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_266(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_267(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_268();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_268()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_269(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

var func_270(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_272(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_271(&uVar1);
			}
		}
		else
		{
			return func_271(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 0x00000003:
			sVar0[0x00000000] = "MP_hostCrown";
			sVar0[0x00000001] = "MP_hostCrown";
			break;
		
		case 0x00000015:
			sVar0[0x00000000] = "MP_SpecItem_Coke";
			sVar0[0x00000001] = "MP_SpecItem_Coke";
			break;
		
		case 0x00000016:
			sVar0[0x00000000] = "MP_SpecItem_Heroin";
			sVar0[0x00000001] = "MP_SpecItem_Heroin";
			break;
		
		case 0x00000017:
			sVar0[0x00000000] = "MP_SpecItem_Weed";
			sVar0[0x00000001] = "MP_SpecItem_Weed";
			break;
		
		case 0x00000018:
			sVar0[0x00000000] = "MP_SpecItem_Meth";
			sVar0[0x00000001] = "MP_SpecItem_Meth";
			break;
		
		case 0x00000019:
			sVar0[0x00000000] = "MP_SpecItem_Cash";
			sVar0[0x00000001] = "MP_SpecItem_Cash";
			break;
		
		case 0x00000001:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000002:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000004:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000006:
			sVar0[0x00000000] = "Shop_Box_CrossB";
			sVar0[0x00000001] = "Shop_Box_Cross";
			break;
		
		case 0x00000007:
			sVar0[0x00000000] = "Shop_Box_BlankB";
			sVar0[0x00000001] = "Shop_Box_Blank";
			break;
		
		case 0x00000005:
			sVar0[0x00000000] = "Shop_Box_TickB";
			sVar0[0x00000001] = "Shop_Box_Tick";
			break;
		
		case 0x00000008:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000009:
			sVar0[0x00000000] = "Shop_Clothing_Icon_B";
			sVar0[0x00000001] = "Shop_Clothing_Icon_A";
			break;
		
		case 0x0000000A:
			sVar0[0x00000000] = "Shop_GunClub_Icon_B";
			sVar0[0x00000001] = "Shop_GunClub_Icon_A";
			break;
		
		case 0x00000011:
			sVar0[0x00000000] = "Shop_Ammo_Icon_B";
			sVar0[0x00000001] = "Shop_Ammo_Icon_A";
			break;
		
		case 0x00000012:
			sVar0[0x00000000] = "Shop_Armour_Icon_B";
			sVar0[0x00000001] = "Shop_Armour_Icon_A";
			break;
		
		case 0x00000013:
			sVar0[0x00000000] = "Shop_Health_Icon_B";
			sVar0[0x00000001] = "Shop_Health_Icon_A";
			break;
		
		case 0x00000014:
			sVar0[0x00000000] = "Shop_MakeUp_Icon_B";
			sVar0[0x00000001] = "Shop_MakeUp_Icon_A";
			break;
		
		case 0x0000000B:
			sVar0[0x00000000] = "Shop_Tattoos_Icon_B";
			sVar0[0x00000001] = "Shop_Tattoos_Icon_A";
			break;
		
		case 0x0000000C:
			sVar0[0x00000000] = "Shop_Garage_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Icon_A";
			break;
		
		case 0x0000000D:
			sVar0[0x00000000] = "Shop_Garage_Bike_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 0x0000000E:
			sVar0[0x00000000] = "Shop_Barber_Icon_B";
			sVar0[0x00000001] = "Shop_Barber_Icon_A";
			break;
		
		case 0x0000000F:
			sVar0[0x00000000] = "shop_Lock";
			sVar0[0x00000001] = "shop_Lock";
			break;
		
		case 0x00000010:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x0000001A:
			sVar0[0x00000000] = "arrowleft";
			sVar0[0x00000001] = "arrowleft";
			break;
		
		case 0x0000001B:
			sVar0[0x00000000] = "arrowright";
			sVar0[0x00000001] = "arrowright";
			break;
		
		case 0x0000001C:
			sVar0[0x00000000] = "MP_AlertTriangle";
			sVar0[0x00000001] = "MP_AlertTriangle";
			break;
		
		case 0x0000001D:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x0000001F:
			sVar0[0x00000000] = "Shop_Michael_Icon_B";
			sVar0[0x00000001] = "Shop_Michael_Icon_A";
			break;
		
		case 0x00000020:
			sVar0[0x00000000] = "Shop_Franklin_Icon_B";
			sVar0[0x00000001] = "Shop_Franklin_Icon_A";
			break;
		
		case 0x00000021:
			sVar0[0x00000000] = "Shop_Trevor_Icon_B";
			sVar0[0x00000001] = "Shop_Trevor_Icon_A";
			break;
		
		case 0x00000033:
			sVar0[0x00000000] = "SaleIcon";
			sVar0[0x00000001] = "SaleIcon";
			break;
		
		case 0x00000034:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000036:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000037:
			sVar0[0x00000000] = "Shop_Lock_Arena";
			sVar0[0x00000001] = "Shop_Lock_Arena";
			break;
		
		case 0x00000038:
			sVar0[0x00000000] = "Card_Suit_Clubs";
			sVar0[0x00000001] = "Card_Suit_Clubs";
			break;
		
		case 0x00000039:
			sVar0[0x00000000] = "Card_Suit_Hearts";
			sVar0[0x00000001] = "Card_Suit_Hearts";
			break;
		
		case 0x0000003A:
			sVar0[0x00000000] = "Card_Suit_Spades";
			sVar0[0x00000001] = "Card_Suit_Spades";
			break;
		
		case 0x0000003B:
			sVar0[0x00000000] = "Card_Suit_Diamonds";
			sVar0[0x00000001] = "Card_Suit_Diamonds";
			break;
		
		case 0x0000003C:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003E:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003D:
			sVar0[0x00000000] = "Shop_Chips_A";
			sVar0[0x00000001] = "Shop_Chips_B";
			break;
		
		case 0x00000000:
			sVar0[0x00000000] = "";
			sVar0[0x00000001] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0x00000000];
	}
	return sVar0[0x00000001];
}

var func_271(var uParam0)
{
	return uParam0;
}

struct<13> func_272(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_273(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_272(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_271(&uVar0);
		}
		else
		{
			return func_271(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_274(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000001)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000001)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000001)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_277(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_277(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_276(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_279(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0x00000000)
		{
			fVar4 = func_275(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000001;
	Global_574E.f_166E = (Global_574E.f_1464 - 0x00000001);
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = iParam2;
}

float func_275(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_276(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_259(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_277(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_278()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_279(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_273(iParam0), 64);
	StringCopy(&cVar1, func_270(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_278())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_278())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_280(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_280(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 0x0000001E)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 0x0000001D && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 0x0000001E)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 0x0000001D)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

float func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000004:
		case 0x0000000B:
		case 0x0000001F:
		case 0x00000014:
		case 0x0000000F:
		case 0x0000000A:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000020:
		case 0x00000009:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x0000000E:
		case 0x00000012:
		case 0x00000013:
		case 0x00000011:
		case 0x0000001C:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003E:
			return 0.5f;
			break;
		
		case 0x0000003D:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_281(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_283(0x00000008, 0xFFFFFFFF) && func_282() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_282()
{
	return Global_14082C;
}

bool func_283(int iParam0, int iParam1)
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

void func_284(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_574E.f_13BC), Global_574E.f_12A1);
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

void func_285(char* sParam0)
{
	if (Global_574E.f_129D >= 0x00000003 || Global_574E.f_129A >= 0x00000004)
	{
		return;
	}
	Global_574E.f_1258[Global_574E.f_129A] = 0x00000001;
	Global_574E.f_129A++;
	StringCopy(&(Global_574E.f_1269[Global_574E.f_129D /*16*/]), sParam0, 64);
	Global_574E.f_129D++;
}

void func_286(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1252), sParam0, 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = iParam1;
	Global_574E.f_129F = unk_0x1C0640BA9A7327B3();
	Global_574E.f_12A0 = iParam2;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_287(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = iParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
			{
				if (Global_574E.f_13E1[iVar0] != 0x00000000)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 0x00000080)
		{
			Global_574E.f_166A++;
			iVar1 = 0x00000000;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
				{
					if (Global_574E.f_13E1[iVar0] != 0x00000000)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_288(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_289(int iParam0, char* sParam1, char* sParam2)
{
	Global_574E = iParam0;
	func_290(0x0000001D, sParam1, sParam2);
}

void func_290(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_574E.f_1784[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_574E.f_1B75[iParam0 /*16*/]), sParam2, 64);
}

void func_291(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0x00000000;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_F4E[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_1151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_13E1[iVar0] = 0x00000000;
		Global_574E.f_146B[iVar0] = 0x00000000;
		Global_574E.f_14EC[iVar0] = 0x00000000;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0x00000000;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_574E.f_13C0[iVar0] = 0x00000000;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0x00000000;
		Global_574E.f_13DB[iVar0] = 0x00000001;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000100)
		{
			Global_574E.f_64A[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	Global_574E = 0x00000000;
	Global_574E.f_1462 = 0x00000000;
	Global_574E.f_1463 = 0x00000000;
	Global_574E.f_1464 = 0x00000000;
	Global_574E.f_1466 = 0x00000000;
	Global_574E.f_1467 = 0x00000000;
	Global_574E.f_1468 = 0x00000000;
	Global_574E.f_1465 = 0x00000000;
	Global_574E.f_16F2 = 0x00000000;
	Global_574E.f_177E = 0x00000000;
	Global_574E.f_166B = 0x00000000;
	Global_574E.f_166A = 0x00000000;
	Global_574E.f_166C = 0x00000000;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = 0x00000000;
	Global_574E.f_129F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_12A0 = 0x00000000;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0x00000000;
	Global_412185.f_3E = 0x00000000;
	Global_412185.f_3F = 0x00000000;
	Global_412185.f_40 = 0x00000000;
	Global_412185.f_41 = 0x00000000;
	Global_412185.f_42 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_412185.f_19[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_412185.f_43 = 0x00000000;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_1670 = 0x00000000;
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = 0x00000000;
	Global_574E.f_166E = 0x00000000;
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	Global_574E.f_1469 = 0x0000000A;
	Global_574E.f_146A = 0x00000000;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0x00000000;
	Global_574E.f_1665 = 0x00000000;
	Global_574E.f_1664 = 0x00000000;
	Global_574E.f_1666 = 0x00000000;
	Global_574E.f_1667 = 0x00000000;
	Global_574E.f_1668 = 0x00000000;
	Global_574E.f_1669 = 0x00000000;
	Global_574E.f_20DD = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_574E.f_1778[iVar0] = 0xFFFFFFFF;
		Global_574E.f_177B[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0x00000000;
	Global_574E.f_13DA = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_20C8 = 0x00000000;
	Global_574E.f_20C3 = 0x00000000;
	Global_574E.f_20CD = 0x00000000;
	Global_574E.f_20D2 = 0x00000000;
	Global_574E.f_20D7 = 0x00000000;
	Global_574E.f_20D9 = 0x00000000;
	Global_574E.f_20DF = 0x00000000;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0x00000000);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

bool func_292(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_245(&iVar0, 0x00000001, iParam1))
	{
		return 0x00000000;
	}
	bVar1 = 0x00000001;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009);
		Global_574E.f_15FC[iVar0] = 0x00000001;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009))
		{
			bVar1 = 0x00000000;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
	Global_574E.f_15EE[iVar0] = 0x00000001;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = 0x00000000;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0x00000000);
		Global_574E.f_15F5[iVar0] = 0x00000001;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = 0x00000000;
		}
	}
	bVar2 = 0x00000000;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_293(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_293(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0x00000000:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 0x00000001;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 0x00000002;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0x00000000;
			}
			break;
	}
	return uParam0->f_9 == 0x00000002;
}

void func_294(int iParam0)
{
	Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 = iParam0;
	Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 = func_377(iParam0);
}

bool func_295()
{
	return Global_411250 == 0x00000001;
}

void func_296(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_305())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_187())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_17(unk_0xD803B885F5E47A62(), 0x00000000) && !func_304()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_301(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_300(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_299();
					func_298();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_300(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_297(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_297(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_298()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_299()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_301(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (iParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (iParam0 == 0x00000001)
			{
				func_303();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_17(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(iParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(iParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(iParam0, iParam1);
		func_302(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, iParam1, 0x00000001);
	}
}

void func_303()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

bool func_304()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_305()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_306()
{
	Global_2537E2.f_484.f_A = 0x00000001;
}

void func_307(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_308(*uParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*uParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*uParam0 = 0xFFFFFFFF;
}

int func_308(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_308(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_252(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

bool func_310(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001A);
}

void func_311(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 0xFFFFFFFF)
		{
			func_307(uParam0);
		}
		return;
	}
	if (!*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_312(int iParam0)
{
	if (func_313(iParam0, 0x00000001))
	{
		return Global_18D84D[func_322() /*615*/].f_B.f_1C2;
	}
	return 0xFFFFFFFF;
}

bool func_313(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_314(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_418();
}

int func_314(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_418())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_315()
{
	if (((((((((func_331("BJACK_USED") || func_331("CAS_MG_CBAN")) || func_331("CAS_MG_CTIME")) || func_318("CAS_MG_MEMB2", func_319(0x00000001))) || func_331("CAS_MG_SUITE2")) || func_331("CAS_MG_NOCHIPS2")) || func_331("CAS_MG_LOWCHIPS2")) || func_331("CAS_MG_NOCHIPS6")) || func_331("CAS_MG_LOWCHIPS6")) || func_331("BJACK_NA"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_316()
{
	if (!unk_0x7A7BDE279347E517(func_319(0x00000000), 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
	{
		func_208("MAITRD_M_D0E", 0xFFFFFFFF);
	}
	else if (func_320(unk_0xD803B885F5E47A62()))
	{
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_5, 0x0000001F))
	{
	}
	else if (Global_411250 != 0x00000000)
	{
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_199459.f_5), 0x0000001E);
	}
}

void func_317(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_318(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_319(bool bParam0)
{
	if (bParam0)
	{
		return 0x000001F4;
	}
	return 0x000001F4;
}

bool func_320(int iParam0)
{
	if (iParam0 == func_418())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000012);
}

bool func_321()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_171.f_1, 0x00000012);
}

int func_322()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_323(bool bParam0)
{
	return func_313(unk_0xD803B885F5E47A62(), bParam0);
}

int func_324(int iParam0)
{
	if (iParam0 != func_418())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_171 != 0x00000000;
	}
	return 0x00000000;
}

int func_325()
{
	if (func_328() <= 0x00000000)
	{
		return 0x00000000;
	}
	if (func_327() <= 0x00000000)
	{
		return 0x00000001;
	}
	if (func_326())
	{
		return 0x00000002;
	}
	return 0x00000003;
}

bool func_326()
{
	return Global_19E13D != 0x00000000;
}

int func_327()
{
	return (Global_40001.f_671E + func_115());
}

int func_328()
{
	return (Global_40001.f_671F - func_115());
}

bool func_329()
{
	return func_325() != 0x00000003;
}

void func_330(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_331(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_332(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0xCD517CA1;
			break;
		
		case 0x00000001:
			iVar0 = 0x4E7306F6;
			break;
		
		case 0x00000002:
			iVar0 = 0x3D047ACE;
			break;
		
		case 0x00000005:
			iVar0 = 0x3E510ED6;
			break;
		
		case 0x00000003:
			iVar0 = 0x65272E8B;
			break;
		
		case 0x00000004:
			iVar0 = 0x4432A44A;
			break;
	}
	if (!unk_0x829DE4CDEA2FE156(iVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_333()
{
	return unk_0x8BB17FEBE0394018() != 0x00000000;
}

int func_334()
{
	if (Global_40EB30.f_38E == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_335()
{
	if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 != 0xFFFFFFFF)
	{
		Local_126.f_E8 = 0x00000000;
		Local_126.f_E9 = 0x00000000;
		Local_126.f_EB = 0x00000000;
		Local_126.f_FC = 0x00000000;
		Local_125[unk_0xD803B885F5E47A62() /*8*/] = 0x00000000;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_1 = 0x00000000;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_2 = 0x00000000;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_3 = 0xFFFFFFFF;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 = 0xFFFFFFFF;
		Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0x00000000;
	}
}

bool func_336()
{
	return Global_26B66F.f_19BF;
}

int func_337()
{
	if ((func_338() != 0xFFFFFFFF && func_338() != 0x0000001C) && func_338() != 0x00000011)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_338()
{
	return Global_EC6CD;
}

bool func_339()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_340()
{
	return Global_2564C8.f_24F;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_343(iParam0);
	iVar1 = func_342(iVar0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	return Global_A58F[iVar1 /*5*/].f_3;
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A58F[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_343(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
		{
			return Global_A58F[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_344()
{
	int iVar0;
	
	if (func_313(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		iVar0 = func_322();
		if (func_20(iVar0, 0x00000001, 0x00000001) && unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_112.f_171.f_3, 0x00000006))
		{
			return 0x00000001;
		}
		if ((func_349(unk_0xD803B885F5E47A62(), 0x00000000) && func_347(unk_0xD803B885F5E47A62())) || func_345(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_345(int iParam0)
{
	if (func_346(iParam0) != func_418())
	{
		return func_346(iParam0) == func_212(iParam0);
	}
	return 0x00000000;
}

int func_346(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_348(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_348(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_349(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_350()
{
	if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_419() /*421*/].f_136.f_4, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_199459.f_6, 0x0000000A))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_351(int iParam0, vector3 vParam1, float fParam2)
{
	return func_352(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0xD9522BA9E27E1349(iParam0), vParam1, fParam2);
}

bool func_352(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x8A5E176FF719A014(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_353(func_354(vVar0), func_354(vParam2 - vParam0));
	return unk_0x3DCA5D50DD292443(fVar1) <= fParam3;
}

float func_353(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_354(vector3 vParam0)
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

Vector3 func_355(int iParam0)
{
	if (Local_126.f_101 == 0x00000001)
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 0x00000001:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 0x00000002:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 0x00000003:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 1148.367f, 269.0835f, -51.7879f;
			
			case 0x00000001:
				return 1148.345f, 269.7643f, -51.7876f;
			
			case 0x00000002:
				return 1148.821f, 270.2321f, -51.7708f;
			
			case 0x00000003:
				return 1149.495f, 270.2401f, -51.7632f;
			
			case 0x00000004:
				return 1152.317f, 267.4195f, -51.8003f;
			
			case 0x00000005:
				return 1152.337f, 266.7202f, -51.7913f;
			
			case 0x00000006:
				return 1151.849f, 266.2183f, -51.7916f;
			
			case 0x00000007:
				return 1151.182f, 266.2501f, -51.7864f;
			
			case 0x00000008:
				return 1128.713f, 262.8658f, -51.0035f;
			
			case 0x00000009:
				return 1129.446f, 262.8649f, -51.0121f;
			
			case 0x0000000A:
				return 1129.932f, 262.3822f, -51.0027f;
			
			case 0x0000000B:
				return 1129.899f, 261.6921f, -51.0422f;
			
			case 0x0000000C:
				return 1143.738f, 247.8562f, -51.034f;
			
			case 0x0000000D:
				return 1144.459f, 247.8673f, -51.0229f;
			
			case 0x0000000E:
				return 1144.951f, 247.3612f, -51.015f;
			
			case 0x0000000F:
				return 1144.913f, 246.663f, -51.0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_356(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

Vector3 func_357(int iParam0)
{
	int iVar0;
	
	if (Local_126.f_101 == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_377(iParam0) == 0x00000000 || func_377(iParam0) == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 0x06B32955, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_70(func_377(iParam0)), 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iVar0) && unk_0x1A5AE8A9B1D42A10(iVar0))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000001:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000002:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000003:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000004:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000005:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000006:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000007:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000008:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000009:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000A:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000B:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x0000000C:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x0000000D:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000E:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000F:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_358(int iParam0)
{
	return Global_181EC.f_158 == iParam0;
}

void func_359(int iParam0)
{
	Local_126.f_1 = iParam0;
}

void func_360(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000020)
	{
		return;
	}
	func_213(&(Local_125[iParam0 /*8*/]), 0x00000000);
	Local_125[iParam0 /*8*/].f_6.f_1 = 0xFFFFFFFF;
}

int func_361()
{
	if (Local_126.f_101 == 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(Local_126.f_219))
		{
			unk_0x523BCC9DC80CD82F(0x813D743A);
			if (!unk_0xB87F6CF6E5628C67(0x813D743A))
			{
				return 0x00000000;
			}
			Local_126.f_219 = unk_0x7707E48765093646(0x813D743A, func_70(0x00000000), 0x00000000, 0x00000000, 0x00000001);
			unk_0x08841CDB215AE18F(Local_126.f_219, func_70(0x00000000), 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(Local_126.f_219, func_69(0x00000000));
			unk_0x1E9649458B15960F(Local_126.f_219, 0x00000001);
			unk_0x71199B01895C6202(0x813D743A);
		}
		else
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_362(var uParam0, bool bParam1, bool bParam2)
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

int func_363()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_364(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if ((func_367(unk_0xD803B885F5E47A62(), 0x00000001) || func_367(unk_0xD803B885F5E47A62(), 0x00000002)) || func_366())
			{
				func_213(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000002:
			if ((func_367(unk_0xD803B885F5E47A62(), 0x00000001) || func_367(unk_0xD803B885F5E47A62(), 0x00000002)) || func_366())
			{
				func_213(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (func_365())
			{
				func_213(uParam0, 0x00000008);
			}
			break;
		
		case 0x00000008:
			break;
	}
}

int func_365()
{
	if ((((func_367(unk_0xD803B885F5E47A62(), 0x00000004) || func_367(unk_0xD803B885F5E47A62(), 0x00000005)) || func_367(unk_0xD803B885F5E47A62(), 0x00000006)) || func_367(unk_0xD803B885F5E47A62(), 0x00000007)) || func_366())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_366()
{
	if (func_65(&(Local_126.f_62C), 0x00000DAC, 0x00000000))
	{
		func_63(&(Local_126.f_62C));
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_367(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0x00000000 || iVar0 >= 0x00000020)
	{
		return 0x00000000;
	}
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000020)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_5C5[iParam0], iVar0);
}

void func_368(int iParam0, int iParam1)
{
	Global_56C3.f_9 = iParam0;
	Global_56C3.f_A = iParam1;
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		func_370(0x00000001);
		func_248(0x00000001);
	}
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x857E3CE01DEA2D26();
		unk_0x5EEBDFEE72949D59(0x00000000);
		unk_0x18B28213EC89540F(0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C7, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000C8);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C8);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000C7);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C7);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000C9);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000CA);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000BB);
	}
}

void func_370(bool bParam0)
{
	if (bParam0)
	{
		if (func_339())
		{
			Global_2564C8.f_25 = 0x00000001;
		}
	}
	else
	{
		Global_2564C8.f_25 = 0x00000000;
	}
}

void func_371(bool bParam0)
{
	char* sVar0;
	
	if (Local_126.f_1 > 0x00000002 && unk_0xA4FD7964FEE91ED8(0x00000000) != 0x00000004)
	{
		if (((((!func_376() && !func_375()) && !func_374()) && !func_373()) && !func_81(unk_0xD803B885F5E47A62())) && !unk_0x0C2635BB5127C8FB())
		{
			func_296(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
		}
		func_242();
	}
	if (Local_126.f_1 > 0x00000002)
	{
		func_242();
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_126.f_FA, 0x00000000))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_377(Local_126.f_F7) == 0x00000002 || func_377(Local_126.f_F7) == 0x00000003) || func_424(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_243(0x00000001, 0xFFFFFFFF);
		unk_0xF5A41F3D3B38EFE3(sVar0);
		iLocal_136 = 0x00000001;
		Local_126.f_FA = 0x00000000;
	}
	if (unk_0x9F4FE516EAACCFC5(Local_126.f_F2))
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(Local_126.f_F2, 0x00000000);
		bLocal_137 = 0x00000000;
		iLocal_138 = 0x00000000;
	}
	if (Local_126.f_103 != 0xFFFFFFFF)
	{
		func_307(&(Local_126.f_103));
		Local_126.f_103 = 0xFFFFFFFF;
	}
	Local_126.f_F4 = 0x00000000;
	Local_126.f_FD = 0x00000000;
	Local_126.f_FC = 0x00000000;
	Local_126.f_E8 = 0x00000000;
	Local_126.f_E9 = 0x00000000;
	Local_126.f_EA = 0x00000000;
	Local_126.f_EB = 0x00000000;
	Local_126.f_F3 = 0x00000000;
	Local_125[unk_0xD803B885F5E47A62() /*8*/].f_5 = 0x00000000;
	if (!bParam0)
	{
		func_335();
	}
	Local_132.f_4 = func_397();
	Local_132.f_5 = func_190(&uLocal_129, 0x00000000, 0x00000000);
	if (Local_126.f_1 > 0x00000002)
	{
		if (Global_40001.f_65B9)
		{
			unk_0xDD5EE92F7B3A4AC3(&Local_132);
		}
	}
	if (bParam0)
	{
		Local_126.f_FF = unk_0xF66E5A439A080021(func_357(Local_126.f_F7), func_217(Local_126.f_F7), 0x00000002, 0x00000000, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
		unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_126.f_FF, func_216(), func_372(Local_126.f_F7), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
		unk_0x914E6894744915F8(Local_126.f_FF);
	}
	if (!bParam0)
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000002);
	}
	if (bParam0 || Local_126.f_1 > 0x00000002)
	{
		func_235();
	}
	func_359(0x0000000A);
	func_165(0x00000000);
}

char* func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000004:
		case 0x00000005:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_373()
{
	if (unk_0x8A22C4C08282BF26(joaat("maintransition")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_374()
{
	return Global_14086D;
}

int func_375()
{
	if (func_188() == 0x00000003 || func_188() == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_376()
{
	if (func_188() == 0x00000001 || func_188() == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			return 0x00000000;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			return 0x00000002;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
			return 0x00000003;
		
		default:
	}
	return 0x00000000;
}

void func_378()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	vector3 vVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (((func_358(0x5E44B073) || func_358(0x103C9460)) || func_424(unk_0xD803B885F5E47A62())) && !func_396())
	{
		iLocal_134 = 0x00000001;
		if (!bLocal_133)
		{
			bLocal_133 = (func_409() && func_395());
		}
	}
	else
	{
		if (iLocal_134)
		{
			func_411();
			func_393();
			iLocal_134 = 0x00000000;
		}
		return;
	}
	if (!Global_153CB7.f_308)
	{
		iVar1 = 0x00000000;
		while (iVar1 < unk_0xDFB2BAED99ED0A2E(0x00000001))
		{
			if (unk_0xB98DB26FBF676FA1(0x00000001, iVar1) == 0x000000AE)
			{
				if (unk_0x218F818E64020C17(0x00000001, iVar1, &Var0, 0x00000006))
				{
					if (Var0 == 0x60D52E14)
					{
						if (((unk_0xFB75B0F82CA525F6(Var0.f_1) && Var0.f_2 >= 0x00000000) && Var0.f_2 < 0x000000E0) && func_392(Var0.f_3, Local_126.f_EC) != 0x00000000)
						{
							if (Var0.f_4)
							{
								Local_126.f_104[Var0.f_2] = Var0.f_3;
							}
							else
							{
								Local_126.f_131[Var0.f_2] = Var0.f_3;
								if (Var0.f_5)
								{
									func_391(Var0.f_2);
								}
								else
								{
									func_390(Var0.f_2);
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	iVar2 = 0x00000000;
	while (iVar2 < Local_126.f_101)
	{
		if (iVar2 != iLocal_139 && iVar2 != Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4)
		{
		}
		else
		{
			vVar3 = { func_70(iVar2) };
			vVar3.z = (vVar3.z + 0.914f);
			bVar4 = 0x00000000;
			if (func_53(iVar2, Local_126.f_101))
			{
				bVar4 = 0x00000001;
			}
			vVar8 = { 0f, 0f, func_69(iVar2) };
			iVar9 = 0x00000000;
			while (iVar9 < 0x00000004)
			{
				iVar10 = Local_116.f_640[(iVar2 * 4 + iVar9)];
				if (iVar10 < 0x00000000 || ((!func_358(0x5E44B073) && !func_358(0x103C9460)) && !func_424(unk_0xD803B885F5E47A62())))
				{
					iVar5 = 0x00000000;
					while (iVar5 < 0x00000007)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 0x00000001);
						if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
						{
							if (unk_0x81D9425174BF4F82(Local_126.f_288[iVar6]) > 0x00000000)
							{
								unk_0x4FB9A846E72E2F23(Local_126.f_288[iVar6], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_288[iVar6])), 0f, 0.1f, 0x00000000)), 0x00000001);
							}
							else
							{
								unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
							}
						}
						if (Local_126.f_131[iVar6] != 0xFFFFFFFF)
						{
							Local_126.f_131[iVar6] = 0xFFFFFFFF;
						}
						if (func_389(iVar6))
						{
							func_390(iVar6);
						}
						iVar6 = func_21(iVar2, iVar5, iVar9, 0x00000000);
						if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
						{
							if (unk_0x81D9425174BF4F82(Local_126.f_288[iVar6]) > 0x00000000)
							{
								unk_0x4FB9A846E72E2F23(Local_126.f_288[iVar6], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_288[iVar6])), 0f, 0.1f, 0x00000000)), 0x00000001);
							}
							else
							{
								unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
							}
						}
						if (Local_126.f_131[iVar6] != 0xFFFFFFFF)
						{
							Local_126.f_131[iVar6] = 0xFFFFFFFF;
						}
						if (func_389(iVar6))
						{
							func_390(iVar6);
						}
						iVar5++;
					}
					iVar5 = 0x00000000;
					while (iVar5 < 0x00000004)
					{
						if (unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, iVar5)]))
						{
							if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, iVar5)]) > 0x00000000)
							{
								unk_0x4FB9A846E72E2F23(Local_126.f_21A[func_388(iVar2, iVar9, iVar5)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, iVar5)])), 0f, 0.1f, 0x00000000)), 0x00000001);
							}
							else
							{
								unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, iVar5)]));
							}
						}
						iVar5++;
					}
				}
				else
				{
					iVar5 = 0x00000000;
					iVar5 = 0x00000000;
					while (iVar5 < 0x00000007)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 0x00000000);
						sVar7 = func_387(Local_116.f_383[iVar10 /*9*/][iVar5], 0x00000001);
						if (iVar6 >= 0x00000000 && iVar6 < (0x00000038 * Local_126.f_101))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
							{
								if ((((iVar9 == 0x00000000 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_7(iVar2), 0x00000003)) || (iVar9 == 0x00000001 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_6(iVar2), 0x00000003))) || (iVar9 == 0x00000002 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_5(iVar2), 0x00000003))) || (iVar9 == 0x00000003 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_4(iVar2), 0x00000003)))
								{
									if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
									{
										iVar12 = 0x00000000;
										while (iVar12 < 0x00000007)
										{
											iVar13 = func_21(iVar2, iVar12, iVar9, 0x00000000);
											if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar13]))
											{
												iVar11 = iVar12;
											}
											iVar12++;
										}
										if (iVar5 == iVar11)
										{
											if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]) && !unk_0xD59B17D2DFF98E26(Local_126.f_288[iVar6]))
											{
												unk_0x9F528B1B53FBC5D9(Local_126.f_288[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
											}
										}
										else if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
										{
											unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
											Local_126.f_131[iVar6] = 0xFFFFFFFF;
										}
									}
									else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
									{
										if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
										{
											unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
											Local_126.f_131[iVar6] = 0xFFFFFFFF;
										}
									}
								}
								else if (!unk_0xEA6BC48857E0AC4C(sVar7))
								{
									Local_126.f_131[iVar6] = 0xFFFFFFFF;
									if (!unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
									{
										if ((((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_22(iVar2, iVar9), 0x00000003)) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A)) && iVar5 == 0x00000001)
										{
										}
										else
										{
											if (func_392(Local_116.f_383[iVar10 /*9*/][iVar5], Local_126.f_EC) != 0x00000000)
											{
												Local_126.f_288[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_383[iVar10 /*9*/][iVar5], Local_126.f_EC), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
												unk_0x08841CDB215AE18F(Local_126.f_288[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
												unk_0xC023D1C4BF532815(Local_126.f_288[iVar6], vVar8 + func_385(iVar5, iVar9, 0x00000000, func_389(iVar6)), 0x00000002, 0x00000001);
											}
											Jump @2149; //curOff = 1854
											if (unk_0x134B62B726CEC8E6(Local_126.f_288[iVar6]) != func_392(Local_116.f_383[iVar10 /*9*/][iVar5], Local_126.f_EC))
											{
												unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
											}
											else if ((((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]))) && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_22(iVar2, iVar9), 0x00000003)) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A)) && iVar5 == 0x00000001)
											{
												unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
											}
											else if (unk_0xD59B17D2DFF98E26(Local_126.f_288[iVar6]))
											{
												unk_0x15AFB6CBDE990FB6(Local_126.f_288[iVar6], 0x00000000, 0x00000001);
												unk_0x08841CDB215AE18F(Local_126.f_288[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
												unk_0xC023D1C4BF532815(Local_126.f_288[iVar6], vVar8 + func_385(iVar5, iVar9, 0x00000000, func_389(iVar6)), 0x00000002, 0x00000001);
											}
											Jump @2890; //curOff = 2149
											if (Local_126.f_131[iVar6] != 0xFFFFFFFF)
											{
												if (!unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
												{
													Local_126.f_288[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_126.f_131[iVar6], Local_126.f_EC), vVar3, 0x00000000, 0x00000000, 0x00000001);
													if (((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]))) && !unk_0xBDEB2DEEF1D23A18(Local_126.f_288[iVar6])) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
													{
														if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_22(iVar2, iVar9), 0x00000003))
														{
															unk_0x9F528B1B53FBC5D9(Local_126.f_288[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
														}
														else
														{
															unk_0x9F528B1B53FBC5D9(Local_126.f_288[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
														}
													}
												}
												else if (unk_0x134B62B726CEC8E6(Local_126.f_288[iVar6]) != func_392(Local_126.f_131[iVar6], Local_126.f_EC))
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
													Local_126.f_131[iVar6] = 0xFFFFFFFF;
													func_390(iVar6);
												}
												else if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
												{
													if (!unk_0xBDEB2DEEF1D23A18(Local_126.f_288[iVar6]) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
													{
														unk_0x9F528B1B53FBC5D9(Local_126.f_288[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
													}
													if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
													{
														if (unk_0xD59B17D2DFF98E26(Local_126.f_288[iVar6]))
														{
															unk_0x15AFB6CBDE990FB6(Local_126.f_288[iVar6], 0x00000000, 0x00000001);
															unk_0x08841CDB215AE18F(Local_126.f_288[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
															unk_0xC023D1C4BF532815(Local_126.f_288[iVar6], vVar8 + func_385(iVar5, iVar9, 0x00000000, func_389(iVar6)), 0x00000002, 0x00000001);
														}
													}
												}
											}
											else if (iVar6 >= 0x00000000 && iVar6 < (0x00000038 * Local_126.f_101))
											{
												if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
													Local_126.f_131[iVar6] = 0xFFFFFFFF;
													func_390(iVar6);
												}
											}
										}
										iVar5++;
										if (Local_125[iVar10 /*8*/].f_1 > 0x00000000)
										{
											iVar14 = Local_125[iVar10 /*8*/].f_1;
											if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 0x0000000A))
											{
												iVar14 = (Local_125[iVar10 /*8*/].f_1 / 0x00000002);
											}
											if (!unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)]))
											{
												if (func_384(iVar14, bVar4) != 0x00000000)
												{
													Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000000, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
													unk_0x08841CDB215AE18F(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000000, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
													unk_0xC023D1C4BF532815(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)], vVar8 + func_382(iVar14, 0x00000000, iVar9, bVar4), 0x00000002, 0x00000001);
													if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
													{
														unk_0xCEAA091B490F8407(0xFFFFFFFF, func_381(iVar14), Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
													}
												}
											}
											else if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)]) != 0x000000FF)
											{
												unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)]));
											}
											if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 0x0000000A))
											{
												if (!unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)]))
												{
													if (func_384(iVar14, bVar4) != 0x00000000)
													{
														Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000001, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
														unk_0x08841CDB215AE18F(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000001, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
														unk_0xC023D1C4BF532815(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)], vVar8 + func_382(iVar14, 0x00000001, iVar9, bVar4), 0x00000002, 0x00000001);
														if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
														{
															unk_0xCEAA091B490F8407(0xFFFFFFFF, func_381(iVar14), Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
														}
													}
												}
												else if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)]) != 0x000000FF)
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)]));
												}
											}
										}
										else
										{
											if (unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)]))
											{
												if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)]) > 0x00000000)
												{
													unk_0x4FB9A846E72E2F23(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)])), 0f, 0.1f, 0x00000000)), 0x00000001);
												}
												else
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000000)]));
												}
											}
											if (unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)]))
											{
												if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)]) > 0x00000000)
												{
													unk_0x4FB9A846E72E2F23(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)])), 0f, 0.1f, 0x00000000)), 0x00000001);
												}
												else
												{
													unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000001)]));
												}
											}
										}
										iVar5 = 0x00000000;
										iVar5 = 0x00000000;
										while (iVar5 < 0x00000007)
										{
											iVar6 = func_21(iVar2, iVar5, iVar9, 0x00000001);
											sVar7 = func_387(Local_116.f_4A4[iVar10 /*9*/][iVar5], 0x00000001);
											if (iVar6 >= 0x00000000 && iVar6 < (0x00000038 * Local_126.f_101))
											{
												if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
												{
													if ((((iVar9 == 0x00000000 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_7(iVar2), 0x00000003)) || (iVar9 == 0x00000001 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_6(iVar2), 0x00000003))) || (iVar9 == 0x00000002 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_5(iVar2), 0x00000003))) || (iVar9 == 0x00000003 && unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_4(iVar2), 0x00000003)))
													{
														if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
														{
															if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
																Local_126.f_131[iVar6] = 0xFFFFFFFF;
															}
														}
													}
													else if (!unk_0xEA6BC48857E0AC4C(sVar7))
													{
														Local_126.f_131[iVar6] = 0xFFFFFFFF;
														if (!unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
														{
															if (func_392(Local_116.f_4A4[iVar10 /*9*/][iVar5], Local_126.f_EC) != 0x00000000)
															{
																Local_126.f_288[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_4A4[iVar10 /*9*/][iVar5], Local_126.f_EC), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000001)), 0x00000000, 0x00000000, 0x00000001);
																unk_0x08841CDB215AE18F(Local_126.f_288[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000001)), 0x00000000, 0x00000000, 0x00000001);
																unk_0xC023D1C4BF532815(Local_126.f_288[iVar6], vVar8 + func_385(iVar5, iVar9, 0x00000001, func_389(iVar6)), 0x00000002, 0x00000001);
															}
														}
														else if (unk_0x134B62B726CEC8E6(Local_126.f_288[iVar6]) != func_392(Local_116.f_4A4[iVar10 /*9*/][iVar5], Local_126.f_EC))
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
														}
														else if (unk_0xD59B17D2DFF98E26(Local_126.f_288[iVar6]))
														{
															unk_0x15AFB6CBDE990FB6(Local_126.f_288[iVar6], 0x00000000, 0x00000001);
															unk_0x08841CDB215AE18F(Local_126.f_288[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000001)), 0x00000000, 0x00000000, 0x00000001);
															unk_0xC023D1C4BF532815(Local_126.f_288[iVar6], vVar8 + func_385(iVar5, iVar9, 0x00000001, func_389(iVar6)), 0x00000002, 0x00000001);
														}
													}
													else if (Local_126.f_131[iVar6] != 0xFFFFFFFF)
													{
														if (!unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
														{
															Local_126.f_288[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_126.f_131[iVar6], Local_126.f_EC), vVar3, 0x00000000, 0x00000000, 0x00000001);
															if (((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]))) && !unk_0xBDEB2DEEF1D23A18(Local_126.f_288[iVar6])) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
															{
																unk_0x9F528B1B53FBC5D9(Local_126.f_288[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
															}
														}
														else if (unk_0x134B62B726CEC8E6(Local_126.f_288[iVar6]) != func_392(Local_126.f_131[iVar6], Local_126.f_EC))
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
															Local_126.f_131[iVar6] = 0xFFFFFFFF;
															func_390(iVar6);
														}
														else if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
														{
															if (!unk_0xBDEB2DEEF1D23A18(Local_126.f_288[iVar6]) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
															{
																unk_0x9F528B1B53FBC5D9(Local_126.f_288[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
															}
															if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
															{
																if (unk_0xD59B17D2DFF98E26(Local_126.f_288[iVar6]))
																{
																	unk_0x15AFB6CBDE990FB6(Local_126.f_288[iVar6], 0x00000000, 0x00000001);
																	unk_0x08841CDB215AE18F(Local_126.f_288[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_386(iVar5, iVar9, 0x00000001)), 0x00000000, 0x00000000, 0x00000001);
																	unk_0xC023D1C4BF532815(Local_126.f_288[iVar6], vVar8 + func_385(iVar5, iVar9, 0x00000001, func_389(iVar6)), 0x00000002, 0x00000001);
																}
															}
														}
													}
													else if (iVar6 >= 0x00000000 && iVar6 < (0x00000038 * Local_126.f_101))
													{
														if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar6]))
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar6]));
															Local_126.f_131[iVar6] = 0xFFFFFFFF;
															func_390(iVar6);
														}
													}
													iVar5++;
													if (Local_125[iVar10 /*8*/].f_2 > 0x00000000)
													{
														iVar14 = Local_125[iVar10 /*8*/].f_2;
														if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 0x0000000B))
														{
															iVar14 = (Local_125[iVar10 /*8*/].f_2 / 0x00000002);
														}
														if (!unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)]))
														{
															if (func_384(iVar14, bVar4) != 0x00000000)
															{
																Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000002, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
																unk_0x08841CDB215AE18F(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000002, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
																unk_0xC023D1C4BF532815(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)], vVar8 + func_382(iVar14, 0x00000002, iVar9, bVar4), 0x00000002, 0x00000001);
																if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
																{
																	unk_0xCEAA091B490F8407(0xFFFFFFFF, func_381(iVar14), Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
																}
															}
														}
														else if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)]) != 0x000000FF)
														{
															unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)]));
														}
														if (unk_0xEAE0D21A50E6C7F4(Local_125[iVar10 /*8*/], 0x0000000B))
														{
															if (!unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)]))
															{
																if (func_384(iVar14, bVar4) != 0x00000000)
																{
																	Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)] = unk_0xB0BE3DFBBB59A620(func_384(iVar14, bVar4), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000003, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
																	unk_0x08841CDB215AE18F(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_383(iVar14, 0x00000003, iVar9, bVar4)), 0x00000000, 0x00000000, 0x00000001);
																	unk_0xC023D1C4BF532815(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)], vVar8 + func_382(iVar14, 0x00000003, iVar9, bVar4), 0x00000002, 0x00000001);
																	if (!unk_0xEA6BC48857E0AC4C(func_381(iVar14)))
																	{
																		unk_0xCEAA091B490F8407(0xFFFFFFFF, func_381(iVar14), Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
																	}
																}
															}
															else if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)]) != 0x000000FF)
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)]));
															}
														}
													}
													else
													{
														if (unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)]))
														{
															if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)]) > 0x00000000)
															{
																unk_0x4FB9A846E72E2F23(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)])), 0f, 0.1f, 0x00000000)), 0x00000001);
															}
															else
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000002)]));
															}
														}
														if (unk_0xC844350D5D58C99A(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)]))
														{
															if (unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)]) > 0x00000000)
															{
																unk_0x4FB9A846E72E2F23(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)], SYSTEM::FLOOR(func_202(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)])), 0f, 0.1f, 0x00000000)), 0x00000001);
															}
															else
															{
																unk_0xF690C84DADBB3551(&(Local_126.f_21A[func_388(iVar2, iVar9, 0x00000003)]));
															}
														}
													}
													iVar9++;
													iVar5 = 0x00000000;
													iVar5 = 0x00000000;
													while (iVar5 < 0x0000000B)
													{
														bVar16 = 0x00000001;
														if (!Local_116.f_5F5[iVar2] && iVar5 == 0x00000000)
														{
															bVar16 = 0x00000000;
														}
														sVar7 = func_387(Local_116.f_34E[iVar2 /*13*/][iVar5], bVar16);
														iVar6 = func_9(iVar2, iVar5);
														if (iVar6 >= 0x00000000 && iVar6 < (0x0000000B * Local_126.f_101))
														{
															if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
															{
																if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_3(iVar2), 0x00000003))
																{
																	if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
																	{
																		iVar18 = 0x00000000;
																		while (iVar18 < 0x0000000B)
																		{
																			iVar19 = func_9(iVar2, iVar18);
																			if (unk_0xC844350D5D58C99A(Local_126.f_25B[iVar19]))
																			{
																				iVar17 = iVar18;
																			}
																			iVar18++;
																		}
																		if (iVar5 == iVar17)
																		{
																			if (unk_0xC844350D5D58C99A(Local_126.f_25B[iVar6]) && !unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																			{
																				unk_0x9F528B1B53FBC5D9(Local_126.f_25B[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
																			}
																		}
																		else if (unk_0xC844350D5D58C99A(Local_126.f_25B[iVar6]))
																		{
																			unk_0xF690C84DADBB3551(&(Local_126.f_25B[iVar6]));
																			Local_126.f_104[iVar6] = 0xFFFFFFFF;
																		}
																	}
																	else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
																	{
																		if (unk_0xC844350D5D58C99A(Local_126.f_25B[iVar6]))
																		{
																			unk_0xF690C84DADBB3551(&(Local_126.f_25B[iVar6]));
																			Local_126.f_104[iVar6] = 0xFFFFFFFF;
																		}
																	}
																}
																else if (Local_116.f_5F0[iVar2] == 0x00000002 && ((!unk_0xEA6BC48857E0AC4C(sVar7) && Local_116.f_34E[iVar2 /*13*/][iVar5] != 0x00000000) || Local_126.f_104[iVar6] != 0xFFFFFFFF))
																{
																	if (!unk_0xEA6BC48857E0AC4C(func_387(Local_116.f_34E[iVar2 /*13*/][iVar5], 0x00000001)) && func_392(Local_116.f_34E[iVar2 /*13*/][iVar5], Local_126.f_EC) != 0x00000000)
																	{
																		Local_126.f_104[iVar6] = 0xFFFFFFFF;
																		if (!unk_0xC844350D5D58C99A(Local_126.f_25B[iVar6]))
																		{
																			iVar15 = Local_116.f_34E[iVar2 /*13*/][iVar5];
																			if (!bVar16)
																			{
																				iVar15 = 0x00000000;
																			}
																			if (!unk_0xEA6BC48857E0AC4C(func_387(Local_116.f_34E[iVar2 /*13*/][iVar5], 0x00000001)) && func_392(iVar15, Local_126.f_EC) != 0x00000000)
																			{
																				Local_126.f_25B[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(iVar15, Local_126.f_EC), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																				unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																				unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, bVar16), 0x00000002, 0x00000001);
																				Local_126.f_104[iVar6] = 0xFFFFFFFF;
																			}
																		}
																		else if (iVar5 == 0x00000000)
																		{
																			if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
																			{
																				if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_33(iVar2), 0x00000003))
																				{
																					if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
																					{
																						if (!unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																						{
																							unk_0xF690C84DADBB3551(&(Local_126.f_25B[iVar6]));
																							Local_126.f_104[iVar6] = 0xFFFFFFFF;
																							Local_126.f_25B[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_34E[iVar2 /*13*/][iVar5], Local_126.f_EC), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, 0x00000000), 0x00000002, 0x00000001);
																							unk_0x9F528B1B53FBC5D9(Local_126.f_25B[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
																						}
																					}
																					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
																					{
																						if (unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																						{
																							unk_0x15AFB6CBDE990FB6(Local_126.f_25B[iVar6], 0x00000000, 0x00000001);
																							unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, 0x00000001), 0x00000002, 0x00000001);
																						}
																					}
																				}
																				else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_28(iVar2), 0x00000003))
																				{
																					if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
																					{
																						if (!unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																						{
																							unk_0x9F528B1B53FBC5D9(Local_126.f_25B[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
																						}
																					}
																					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
																					{
																						if (unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																						{
																							unk_0x15AFB6CBDE990FB6(Local_126.f_25B[iVar6], 0x00000000, 0x00000001);
																							unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, 0x00000000), 0x00000002, 0x00000001);
																						}
																					}
																				}
																				else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), func_58(), func_11(iVar2), 0x00000003))
																				{
																					if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
																					{
																						if (!unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																						{
																							unk_0xF690C84DADBB3551(&(Local_126.f_25B[iVar6]));
																							Local_126.f_104[iVar6] = 0xFFFFFFFF;
																							Local_126.f_25B[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(Local_116.f_34E[iVar2 /*13*/][iVar5], Local_126.f_EC), unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, 0x00000000), 0x00000002, 0x00000001);
																							unk_0x9F528B1B53FBC5D9(Local_126.f_25B[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
																						}
																					}
																					else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
																					{
																						if (unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																						{
																							unk_0x15AFB6CBDE990FB6(Local_126.f_25B[iVar6], 0x00000000, 0x00000001);
																							unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																							unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, 0x00000001), 0x00000002, 0x00000001);
																						}
																					}
																				}
																				else if (unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																				{
																					unk_0x15AFB6CBDE990FB6(Local_126.f_25B[iVar6], 0x00000000, 0x00000001);
																					unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																					unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, bVar16), 0x00000002, 0x00000001);
																				}
																			}
																		}
																		else if (unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																		{
																			unk_0x15AFB6CBDE990FB6(Local_126.f_25B[iVar6], 0x00000000, 0x00000001);
																			unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																			unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, bVar16), 0x00000002, 0x00000001);
																		}
																	}
																	else if (Local_126.f_104[iVar6] != 0xFFFFFFFF)
																	{
																		if (!unk_0xC844350D5D58C99A(Local_126.f_25B[iVar6]))
																		{
																			iVar15 = Local_126.f_104[iVar6];
																			if (!bVar16)
																			{
																				iVar15 = 0x00000000;
																			}
																			Local_126.f_25B[iVar6] = unk_0xB0BE3DFBBB59A620(func_392(iVar15, Local_126.f_EC), vVar3, 0x00000000, 0x00000000, 0x00000001);
																			if (((unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]))) && !unk_0xBDEB2DEEF1D23A18(Local_126.f_25B[iVar6])) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
																			{
																				unk_0x9F528B1B53FBC5D9(Local_126.f_25B[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
																			}
																		}
																		else if (unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar2]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_63B[iVar2])))
																		{
																			if (!unk_0xBDEB2DEEF1D23A18(Local_126.f_25B[iVar6]) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0xAFCA521A))
																			{
																				unk_0x9F528B1B53FBC5D9(Local_126.f_25B[iVar6], unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
																			}
																			if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_63B[iVar2]), 0x22E6E76C))
																			{
																				if (unk_0xD59B17D2DFF98E26(Local_126.f_25B[iVar6]))
																				{
																					unk_0x15AFB6CBDE990FB6(Local_126.f_25B[iVar6], 0x00000000, 0x00000001);
																					unk_0x08841CDB215AE18F(Local_126.f_25B[iVar6], unk_0x8A5E176FF719A014(func_70(iVar2), vVar8.z, func_380(iVar5)), 0x00000000, 0x00000000, 0x00000001);
																					unk_0xC023D1C4BF532815(Local_126.f_25B[iVar6], vVar8 + func_379(iVar5, bVar16), 0x00000002, 0x00000001);
																				}
																			}
																		}
																	}
																}
																else if (iVar6 >= 0x00000000 && iVar6 < (0x0000000B * Local_126.f_101))
																{
																	if (unk_0xC844350D5D58C99A(Local_126.f_25B[iVar6]))
																	{
																		unk_0xF690C84DADBB3551(&(Local_126.f_25B[iVar6]));
																		Local_126.f_104[iVar6] = 0xFFFFFFFF;
																	}
																}
																iVar5++;
																iVar2++;
																iLocal_139++;
																if (iLocal_139 >= Local_126.f_101)
																{
																	iLocal_139 = 0x00000000;
																}
															}

Vector3 func_379(int iParam0, bool bParam1)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			vVar0 = { 0f, 0f, 178.92f };
			break;
		
		case 0x00000001:
			vVar0 = { 0f, 0f, -180f };
			break;
		
		case 0x00000002:
			vVar0 = { 0f, 0f, -178.92f };
			break;
		
		case 0x00000003:
			vVar0 = { 0f, 0f, -177.12f };
			break;
		
		case 0x00000004:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 0x00000005:
			vVar0 = { 0f, 0f, 178.56f };
			break;
		
		case 0x00000006:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 0x00000007:
			vVar0 = { 0f, 0f, 178.2f };
			break;
		
		case 0x00000008:
			vVar0 = { 0f, 0f, -177.12f };
			break;
		
		case 0x00000009:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 0x0000000A:
			vVar0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		vVar0.x = 180f;
	}
	return vVar0;
}

Vector3 func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0.0356f, 0.2105f, 0.94885f;
		
		case 0x00000001:
			return -0.0436f, 0.21205f, 0.948875f;
		
		case 0x00000002:
			return -0.0636f, 0.213825f, 0.9496f;
		
		case 0x00000003:
			return -0.0806f, 0.2137f, 0.950225f;
		
		case 0x00000004:
			return -0.1006f, 0.21125f, 0.950875f;
		
		case 0x00000005:
			return -0.1256f, 0.21505f, 0.951875f;
		
		case 0x00000006:
			return -0.1416f, 0.21305f, 0.953f;
		
		case 0x00000007:
			return -0.1656f, 0.21205f, 0.954025f;
		
		case 0x00000008:
			return -0.1836f, 0.21255f, 0.95495f;
		
		case 0x00000009:
			return -0.2076f, 0.21105f, 0.956025f;
		
		case 0x0000000A:
			return -0.2246f, 0.21305f, 0.957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000A:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x00000014:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x0000001E:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x00000028:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000032:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x0000003C:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000046:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00000050:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x0000005A:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00000064:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x00000096:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000000C8:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000000FA:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x0000012C:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x0000015E:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00000190:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x000001C2:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x000001F4:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x000003E8:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x000005DC:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000007D0:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000009C4:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000BB8:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x00000DAC:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000FA0:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00001194:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00001388:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 0x00001770:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00001B58:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00001F40:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00002328:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00002710:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 0x00003A98:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 0x00004E20:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 0x000061A8:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 0x00007530:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 0x000088B8:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 0x00009C40:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 0x0000AFC8:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 0x0000C350:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_382(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0x00000000:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, 72f;
					
					case 0x00000001:
						return 0f, 0f, 64.8f;
					
					case 0x00000002:
						return 0f, 0f, 74.52f;
					
					case 0x00000003:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 0x00000001:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, 12.96f;
					
					case 0x00000001:
						return 0f, 0f, 29.16f;
					
					case 0x00000002:
						return 0f, 0f, 32.04f;
					
					case 0x00000003:
						return 0f, 0f, 32.04f;
					
					default:
				}
				break;
			
			case 0x00000002:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, -18.36f;
					
					case 0x00000001:
						return 0f, 0f, -18.72f;
					
					case 0x00000002:
						return 0f, 0f, -15.48f;
					
					case 0x00000003:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 0x00000003:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, -79.2f;
					
					case 0x00000001:
						return 0f, 0f, -68.76f;
					
					case 0x00000002:
						return 0f, 0f, -57.6f;
					
					case 0x00000003:
						return 0f, 0f, -64.8f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00001388:
			case 0x00002710:
			case 0x00003A98:
			case 0x00004E20:
			case 0x000061A8:
			case 0x00007530:
			case 0x000088B8:
			case 0x00009C40:
			case 0x0000AFC8:
			case 0x0000C350:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -16.56f;
							
							case 0x00000001:
								return 0f, 0f, -22.32f;
							
							case 0x00000002:
								return 0f, 0f, -10.8f;
							
							case 0x00000003:
								return 0f, 0f, -9.72f;
							
							default:
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -69.12f;
							
							case 0x00000001:
								return 0f, 0f, -64.8f;
							
							case 0x00000002:
								return 0f, 0f, -58.68f;
							
							case 0x00000003:
								return 0f, 0f, -51.12f;
							
							default:
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -112.32f;
							
							case 0x00000001:
								return 0f, 0f, -108.36f;
							
							case 0x00000002:
								return 0f, 0f, -99.72f;
							
							case 0x00000003:
								return 0f, 0f, -102.6f;
							
							default:
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -155.88f;
							
							case 0x00000001:
								return 0f, 0f, -151.92f;
							
							case 0x00000002:
								return 0f, 0f, -147.24f;
							
							case 0x00000003:
								return 0f, 0f, -146.52f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, 72f;
							
							case 0x00000001:
								return 0f, 0f, 64.8f;
							
							case 0x00000002:
								return 0f, 0f, 74.52f;
							
							case 0x00000003:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, 12.96f;
							
							case 0x00000001:
								return 0f, 0f, 29.16f;
							
							case 0x00000002:
								return 0f, 0f, 32.04f;
							
							case 0x00000003:
								return 0f, 0f, 32.04f;
							
							default:
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -18.36f;
							
							case 0x00000001:
								return 0f, 0f, -18.72f;
							
							case 0x00000002:
								return 0f, 0f, -15.48f;
							
							case 0x00000003:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -79.2f;
							
							case 0x00000001:
								return 0f, 0f, -68.76f;
							
							case 0x00000002:
								return 0f, 0f, -57.6f;
							
							case 0x00000003:
								return 0f, 0f, -64.8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_383(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	vector3 vVar1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 0x0000000A:
				fVar0 = 0.95f;
				break;
			
			case 0x00000014:
				fVar0 = 0.896f;
				break;
			
			case 0x0000001E:
				fVar0 = 0.901f;
				break;
			
			case 0x00000028:
				fVar0 = 0.907f;
				break;
			
			case 0x00000032:
				fVar0 = 0.95f;
				break;
			
			case 0x0000003C:
				fVar0 = 0.917f;
				break;
			
			case 0x00000046:
				fVar0 = 0.922f;
				break;
			
			case 0x00000050:
				fVar0 = 0.927f;
				break;
			
			case 0x0000005A:
				fVar0 = 0.932f;
				break;
			
			case 0x00000064:
				fVar0 = 0.95f;
				break;
			
			case 0x00000096:
				fVar0 = 0.904f;
				break;
			
			case 0x000000C8:
				fVar0 = 0.899f;
				break;
			
			case 0x000000FA:
				fVar0 = 0.914f;
				break;
			
			case 0x0000012C:
				fVar0 = 0.904f;
				break;
			
			case 0x0000015E:
				fVar0 = 0.924f;
				break;
			
			case 0x00000190:
				fVar0 = 0.91f;
				break;
			
			case 0x000001C2:
				fVar0 = 0.935f;
				break;
			
			case 0x000001F4:
				fVar0 = 0.95f;
				break;
			
			case 0x000003E8:
				fVar0 = 0.95f;
				break;
			
			case 0x000005DC:
				fVar0 = 0.904f;
				break;
			
			case 0x000007D0:
				fVar0 = 0.899f;
				break;
			
			case 0x000009C4:
				fVar0 = 0.915f;
				break;
			
			case 0x00000BB8:
				fVar0 = 0.904f;
				break;
			
			case 0x00000DAC:
				fVar0 = 0.925f;
				break;
			
			case 0x00000FA0:
				fVar0 = 0.91f;
				break;
			
			case 0x00001194:
				fVar0 = 0.935f;
				break;
			
			case 0x00001388:
				fVar0 = 0.95f;
				break;
			
			case 0x00001770:
				fVar0 = 0.919f;
				break;
			
			case 0x00001B58:
				fVar0 = 0.924f;
				break;
			
			case 0x00001F40:
				fVar0 = 0.93f;
				break;
			
			case 0x00002328:
				fVar0 = 0.935f;
				break;
			
			case 0x00002710:
				fVar0 = 0.95f;
				break;
			
			case 0x00003A98:
				fVar0 = 0.902f;
				break;
			
			case 0x00004E20:
				fVar0 = 0.897f;
				break;
			
			case 0x000061A8:
				fVar0 = 0.912f;
				break;
			
			case 0x00007530:
				fVar0 = 0.902f;
				break;
			
			case 0x000088B8:
				fVar0 = 0.922f;
				break;
			
			case 0x00009C40:
				fVar0 = 0.907f;
				break;
			
			case 0x0000AFC8:
				fVar0 = 0.932f;
				break;
			
			case 0x0000C350:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0x00000000:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { 0.712625f, 0.170625f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { 0.6658f, 0.218375f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { 0.756775f, 0.292775f, 0f };
						break;
					
					case 0x00000003:
						vVar1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			
			case 0x00000001:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { 0.278125f, -0.2571f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { 0.280375f, -0.190375f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { 0.397775f, -0.208525f, 0f };
						break;
					
					case 0x00000003:
						vVar1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { -0.30305f, -0.2464f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { -0.257975f, -0.19715f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { -0.186575f, -0.2861f, 0f };
						break;
					
					case 0x00000003:
						vVar1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			
			case 0x00000003:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { -0.72855f, 0.17345f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { -0.652825f, 0.177525f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { -0.6783f, 0.0744f, 0f };
						break;
					
					case 0x00000003:
						vVar1 = { -0.604425f, 0.082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x0000000A:
				fVar0 = 0.95f;
				break;
			
			case 0x00000014:
				fVar0 = 0.896f;
				break;
			
			case 0x0000001E:
				fVar0 = 0.901f;
				break;
			
			case 0x00000028:
				fVar0 = 0.907f;
				break;
			
			case 0x00000032:
				fVar0 = 0.95f;
				break;
			
			case 0x0000003C:
				fVar0 = 0.917f;
				break;
			
			case 0x00000046:
				fVar0 = 0.922f;
				break;
			
			case 0x00000050:
				fVar0 = 0.927f;
				break;
			
			case 0x0000005A:
				fVar0 = 0.932f;
				break;
			
			case 0x00000064:
				fVar0 = 0.95f;
				break;
			
			case 0x00000096:
				fVar0 = 0.904f;
				break;
			
			case 0x000000C8:
				fVar0 = 0.899f;
				break;
			
			case 0x000000FA:
				fVar0 = 0.914f;
				break;
			
			case 0x0000012C:
				fVar0 = 0.904f;
				break;
			
			case 0x0000015E:
				fVar0 = 0.924f;
				break;
			
			case 0x00000190:
				fVar0 = 0.91f;
				break;
			
			case 0x000001C2:
				fVar0 = 0.935f;
				break;
			
			case 0x000001F4:
				fVar0 = 0.95f;
				break;
			
			case 0x000003E8:
				fVar0 = 0.95f;
				break;
			
			case 0x000005DC:
				fVar0 = 0.904f;
				break;
			
			case 0x000007D0:
				fVar0 = 0.899f;
				break;
			
			case 0x000009C4:
				fVar0 = 0.915f;
				break;
			
			case 0x00000BB8:
				fVar0 = 0.904f;
				break;
			
			case 0x00000DAC:
				fVar0 = 0.925f;
				break;
			
			case 0x00000FA0:
				fVar0 = 0.91f;
				break;
			
			case 0x00001194:
				fVar0 = 0.935f;
				break;
			
			case 0x00001388:
				fVar0 = 0.953f;
				break;
			
			case 0x00001770:
				fVar0 = 0.919f;
				break;
			
			case 0x00001B58:
				fVar0 = 0.924f;
				break;
			
			case 0x00001F40:
				fVar0 = 0.93f;
				break;
			
			case 0x00002328:
				fVar0 = 0.935f;
				break;
			
			case 0x00002710:
				fVar0 = 0.95f;
				break;
			
			case 0x00003A98:
				fVar0 = 0.902f;
				break;
			
			case 0x00004E20:
				fVar0 = 0.897f;
				break;
			
			case 0x000061A8:
				fVar0 = 0.912f;
				break;
			
			case 0x00007530:
				fVar0 = 0.902f;
				break;
			
			case 0x000088B8:
				fVar0 = 0.922f;
				break;
			
			case 0x00009C40:
				fVar0 = 0.907f;
				break;
			
			case 0x0000AFC8:
				fVar0 = 0.932f;
				break;
			
			case 0x0000C350:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 0x00001388:
			case 0x00002710:
			case 0x00003A98:
			case 0x00004E20:
			case 0x000061A8:
			case 0x00007530:
			case 0x000088B8:
			case 0x00009C40:
			case 0x0000AFC8:
			case 0x0000C350:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.6931f, 0.1952f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.724925f, 0.26955f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.7374f, 0.349625f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.2827f, -0.227825f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.3605f, -0.1898f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.4309f, -0.16365f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.279425f, -0.2238f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.200775f, -0.25855f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.125775f, -0.26815f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.685925f, 0.173275f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.6568f, 0.092525f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.612875f, 0.033025f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { -0.58465f, -0.0374f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.712625f, 0.170625f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.6658f, 0.218375f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.756775f, 0.292775f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.278125f, -0.2571f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.280375f, -0.190375f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.397775f, -0.208525f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.30305f, -0.2464f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.257975f, -0.19715f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.186575f, -0.2861f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.72855f, 0.17345f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.652825f, 0.177525f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.6783f, 0.0744f, 0f };
								break;
							
							case 0x00000003:
								vVar1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	vVar1.z = fVar0;
	return vVar1;
}

int func_384(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 0x0000000A:
				return 0x77B5F838;
			
			case 0x00000014:
				return 0x6B4F3F1F;
			
			case 0x0000001E:
				return 0x6B4F3F1F;
			
			case 0x00000028:
				return 0x6B4F3F1F;
			
			case 0x00000032:
				return 0xDC4EF59F;
			
			case 0x0000003C:
				return 0x6B4F3F1F;
			
			case 0x00000046:
				return 0x6B4F3F1F;
			
			case 0x00000050:
				return 0x6B4F3F1F;
			
			case 0x0000005A:
				return 0x6B4F3F1F;
			
			case 0x00000064:
				return 0x1A49472C;
			
			case 0x00000096:
				return 0x2D1BA3E7;
			
			case 0x000000C8:
				return 0x835C1F04;
			
			case 0x000000FA:
				return 0x2D1BA3E7;
			
			case 0x0000012C:
				return 0x835C1F04;
			
			case 0x0000015E:
				return 0x2D1BA3E7;
			
			case 0x00000190:
				return 0x835C1F04;
			
			case 0x000001C2:
				return 0x2D1BA3E7;
			
			case 0x000001F4:
				return 0x4B92DA34;
			
			case 0x000003E8:
				return 0xB9269F5D;
			
			case 0x000005DC:
				return 0xAB9812D9;
			
			case 0x000007D0:
				return 0xA34066AD;
			
			case 0x000009C4:
				return 0xAB9812D9;
			
			case 0x00000BB8:
				return 0xA34066AD;
			
			case 0x00000DAC:
				return 0xAB9812D9;
			
			case 0x00000FA0:
				return 0xA34066AD;
			
			case 0x00001194:
				return 0xAB9812D9;
			
			case 0x00001388:
				return 0xA629769F;
			
			case 0x00001770:
				return 0xA34066AD;
			
			case 0x00001B58:
				return 0xA34066AD;
			
			case 0x00001F40:
				return 0xA34066AD;
			
			case 0x00002328:
				return 0xA34066AD;
			
			case 0x00002710:
				return 0x0C0DA929;
			
			case 0x00003A98:
				return 0x9C296633;
			
			case 0x00004E20:
				return 0x6DA4F1B6;
			
			case 0x000061A8:
				return 0x9C296633;
			
			case 0x00007530:
				return 0x6DA4F1B6;
			
			case 0x000088B8:
				return 0x9C296633;
			
			case 0x00009C40:
				return 0x6DA4F1B6;
			
			case 0x0000AFC8:
				return 0x9C296633;
			
			case 0x0000C350:
				return 0x6DA4F1B6;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x0000000A:
				return 0x77B5F838;
			
			case 0x00000014:
				return 0x6B4F3F1F;
			
			case 0x0000001E:
				return 0x6B4F3F1F;
			
			case 0x00000028:
				return 0x6B4F3F1F;
			
			case 0x00000032:
				return 0xDC4EF59F;
			
			case 0x0000003C:
				return 0x6B4F3F1F;
			
			case 0x00000046:
				return 0x6B4F3F1F;
			
			case 0x00000050:
				return 0x6B4F3F1F;
			
			case 0x0000005A:
				return 0x6B4F3F1F;
			
			case 0x00000064:
				return 0x1A49472C;
			
			case 0x00000096:
				return 0x2D1BA3E7;
			
			case 0x000000C8:
				return 0x835C1F04;
			
			case 0x000000FA:
				return 0x2D1BA3E7;
			
			case 0x0000012C:
				return 0x835C1F04;
			
			case 0x0000015E:
				return 0x2D1BA3E7;
			
			case 0x00000190:
				return 0x835C1F04;
			
			case 0x000001C2:
				return 0x2D1BA3E7;
			
			case 0x000001F4:
				return 0x4B92DA34;
			
			case 0x000003E8:
				return 0xB9269F5D;
			
			case 0x000005DC:
				return 0xAB9812D9;
			
			case 0x000007D0:
				return 0xA34066AD;
			
			case 0x000009C4:
				return 0xAB9812D9;
			
			case 0x00000BB8:
				return 0xA34066AD;
			
			case 0x00000DAC:
				return 0xAB9812D9;
			
			case 0x00000FA0:
				return 0xA34066AD;
			
			case 0x00001194:
				return 0xAB9812D9;
			
			case 0x00001388:
				return 0x051D3D08;
			
			case 0x00001770:
				return 0xA34066AD;
			
			case 0x00001B58:
				return 0xA34066AD;
			
			case 0x00001F40:
				return 0xA34066AD;
			
			case 0x00002328:
				return 0xA34066AD;
			
			case 0x00002710:
				return 0x7921397D;
			
			case 0x00003A98:
				return 0x43AF5497;
			
			case 0x00004E20:
				return 0xB83B34A0;
			
			case 0x000061A8:
				return 0x43AF5497;
			
			case 0x00007530:
				return 0xB83B34A0;
			
			case 0x000088B8:
				return 0x43AF5497;
			
			case 0x00009C40:
				return 0xB83B34A0;
			
			case 0x0000AFC8:
				return 0x43AF5497;
			
			case 0x0000C350:
				return 0xB83B34A0;
			}
		
		default:
	}
	return 0x00000000;
}

Vector3 func_385(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0x00000000:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, 69.12f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, 67.8f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, 66.6f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, 70.44f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, 70.84f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, 67.88f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			
			case 0x00000001:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, 22.11f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, 22.32f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, 20.8f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, 19.8f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, 19.44f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, 26.28f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, -21.43f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, -20.16f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, -16.92f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, -23.4f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, -21.24f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, -23.76f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			
			case 0x00000003:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, -67.03f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, -69.12f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, -64.44f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, -67.68f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, -63.72f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, -68.4f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, 68.57f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, 67.52f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, 67.76f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, 67.04f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, 68.84f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, 65.96f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			
			case 0x00000001:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, 22.11f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, 22f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, 24.44f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, 21.08f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, 25.96f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, 26.16f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, -14.04f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, -15.48f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, -16.56f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, -15.84f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, -16.92f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, -14.4f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			
			case 0x00000003:
				switch (iParam0)
				{
					case 0x00000000:
						vVar0 = { 0f, 0f, -67.03f };
						break;
					
					case 0x00000001:
						vVar0 = { 0f, 0f, -67.6f };
						break;
					
					case 0x00000002:
						vVar0 = { 0f, 0f, -69.4f };
						break;
					
					case 0x00000003:
						vVar0 = { 0f, 0f, -69.04f };
						break;
					
					case 0x00000004:
						vVar0 = { 0f, 0f, -68.68f };
						break;
					
					case 0x00000005:
						vVar0 = { 0f, 0f, -66.16f };
						break;
					
					case 0x00000006:
						vVar0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		vVar0.z = (vVar0.z + 90f);
	}
	return vVar0;
}

Vector3 func_386(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0x00000000:
				switch (iParam0)
				{
					case 0x00000000:
						return 0.5737f, 0.2376f, 0.948025f;
					
					case 0x00000001:
						return 0.562975f, 0.2523f, 0.94875f;
					
					case 0x00000002:
						return 0.553875f, 0.266325f, 0.94955f;
					
					case 0x00000003:
						return 0.5459f, 0.282075f, 0.9501f;
					
					case 0x00000004:
						return 0.536125f, 0.29645f, 0.95085f;
					
					case 0x00000005:
						return 0.524975f, 0.30975f, 0.9516f;
					
					case 0x00000006:
						return 0.515775f, 0.325325f, 0.95235f;
					
					default:
				}
				break;
			
			case 0x00000001:
				switch (iParam0)
				{
					case 0x00000000:
						return 0.2325f, -0.1082f, 0.94805f;
					
					case 0x00000001:
						return 0.23645f, -0.0918f, 0.949f;
					
					case 0x00000002:
						return 0.2401f, -0.074475f, 0.950225f;
					
					case 0x00000003:
						return 0.244625f, -0.057675f, 0.951125f;
					
					case 0x00000004:
						return 0.249675f, -0.041475f, 0.95205f;
					
					case 0x00000005:
						return 0.257575f, -0.0256f, 0.9532f;
					
					case 0x00000006:
						return 0.2601f, -0.008175f, 0.954375f;
					
					default:
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x00000000:
						return -0.2359f, -0.1091f, 0.9483f;
					
					case 0x00000001:
						return -0.221025f, -0.100675f, 0.949f;
					
					case 0x00000002:
						return -0.20625f, -0.092875f, 0.949725f;
					
					case 0x00000003:
						return -0.193225f, -0.07985f, 0.950325f;
					
					case 0x00000004:
						return -0.1776f, -0.072f, 0.951025f;
					
					case 0x00000005:
						return -0.165f, -0.060025f, 0.951825f;
					
					case 0x00000006:
						return -0.14895f, -0.05155f, 0.95255f;
					
					default:
				}
				break;
			
			case 0x00000003:
				switch (iParam0)
				{
					case 0x00000000:
						return -0.5765f, 0.2229f, 0.9482f;
					
					case 0x00000001:
						return -0.558925f, 0.2197f, 0.949175f;
					
					case 0x00000002:
						return -0.5425f, 0.213025f, 0.9499f;
					
					case 0x00000003:
						return -0.525925f, 0.21105f, 0.95095f;
					
					case 0x00000004:
						return -0.509475f, 0.20535f, 0.9519f;
					
					case 0x00000005:
						return -0.491775f, 0.204075f, 0.952825f;
					
					case 0x00000006:
						return -0.4752f, 0.197525f, 0.9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				switch (iParam0)
				{
					case 0x00000000:
						return 0.6083f, 0.3523f, 0.94795f;
					
					case 0x00000001:
						return 0.598475f, 0.366475f, 0.948925f;
					
					case 0x00000002:
						return 0.589525f, 0.3807f, 0.94975f;
					
					case 0x00000003:
						return 0.58045f, 0.39435f, 0.950375f;
					
					case 0x00000004:
						return 0.571975f, 0.4092f, 0.951075f;
					
					case 0x00000005:
						return 0.5614f, 0.4237f, 0.951775f;
					
					case 0x00000006:
						return 0.554325f, 0.4402f, 0.952525f;
					
					default:
				}
				break;
			
			case 0x00000001:
				switch (iParam0)
				{
					case 0x00000000:
						return 0.3431f, -0.0527f, 0.94855f;
					
					case 0x00000001:
						return 0.348575f, -0.0348f, 0.949425f;
					
					case 0x00000002:
						return 0.35465f, -0.018825f, 0.9502f;
					
					case 0x00000003:
						return 0.3581f, -0.001625f, 0.95115f;
					
					case 0x00000004:
						return 0.36515f, 0.015275f, 0.952075f;
					
					case 0x00000005:
						return 0.368525f, 0.032475f, 0.95335f;
					
					case 0x00000006:
						return 0.373275f, 0.0506f, 0.9543f;
					
					default:
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x00000000:
						return -0.116f, -0.1501f, 0.947875f;
					
					case 0x00000001:
						return -0.102725f, -0.13795f, 0.948525f;
					
					case 0x00000002:
						return -0.08975f, -0.12665f, 0.949175f;
					
					case 0x00000003:
						return -0.075025f, -0.1159f, 0.949875f;
					
					case 0x00000004:
						return -0.0614f, -0.104775f, 0.9507f;
					
					case 0x00000005:
						return -0.046275f, -0.095025f, 0.9516f;
					
					case 0x00000006:
						return -0.031425f, -0.0846f, 0.952675f;
					
					default:
				}
				break;
			
			case 0x00000003:
				switch (iParam0)
				{
					case 0x00000000:
						return -0.5205f, 0.1122f, 0.9478f;
					
					case 0x00000001:
						return -0.503175f, 0.108525f, 0.94865f;
					
					case 0x00000002:
						return -0.485125f, 0.10475f, 0.949175f;
					
					case 0x00000003:
						return -0.468275f, 0.099175f, 0.94995f;
					
					case 0x00000004:
						return -0.45155f, 0.09435f, 0.95085f;
					
					case 0x00000005:
						return -0.434475f, 0.089725f, 0.95145f;
					
					case 0x00000006:
						return -0.415875f, 0.0846f, 0.9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_387(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 0x00000001:
			return " A  C ";
		
		case 0x00000002:
			return " 2  C ";
		
		case 0x00000003:
			return " 3  C ";
		
		case 0x00000004:
			return " 4  C ";
		
		case 0x00000005:
			return " 5  C ";
		
		case 0x00000006:
			return " 6  C ";
		
		case 0x00000007:
			return " 7  C ";
		
		case 0x00000008:
			return " 8  C ";
		
		case 0x00000009:
			return " 9  C ";
		
		case 0x0000000A:
			return " 10 C ";
		
		case 0x0000000B:
			return " J  C ";
		
		case 0x0000000C:
			return " Q  C ";
		
		case 0x0000000D:
			return " K  C ";
		
		case 0x0000000E:
			return " A  D ";
		
		case 0x0000000F:
			return " 2  D ";
		
		case 0x00000010:
			return " 3  D ";
		
		case 0x00000011:
			return " 4  D ";
		
		case 0x00000012:
			return " 5  D ";
		
		case 0x00000013:
			return " 6  D ";
		
		case 0x00000014:
			return " 7  D ";
		
		case 0x00000015:
			return " 8  D ";
		
		case 0x00000016:
			return " 9  D ";
		
		case 0x00000017:
			return " 10 D ";
		
		case 0x00000018:
			return " J  D ";
		
		case 0x00000019:
			return " Q  D ";
		
		case 0x0000001A:
			return " K  D ";
		
		case 0x0000001B:
			return " A  H ";
		
		case 0x0000001C:
			return " 2  H ";
		
		case 0x0000001D:
			return " 3  H ";
		
		case 0x0000001E:
			return " 4  H ";
		
		case 0x0000001F:
			return " 5  H ";
		
		case 0x00000020:
			return " 6  H ";
		
		case 0x00000021:
			return " 7  H ";
		
		case 0x00000022:
			return " 8  H ";
		
		case 0x00000023:
			return " 9  H ";
		
		case 0x00000024:
			return " 10 H ";
		
		case 0x00000025:
			return " J  H ";
		
		case 0x00000026:
			return " Q  H ";
		
		case 0x00000027:
			return " K  H ";
		
		case 0x00000028:
			return " A  S ";
		
		case 0x00000029:
			return " 2  S ";
		
		case 0x0000002A:
			return " 3  S ";
		
		case 0x0000002B:
			return " 4  S ";
		
		case 0x0000002C:
			return " 5  S ";
		
		case 0x0000002D:
			return " 6  S ";
		
		case 0x0000002E:
			return " 7  S ";
		
		case 0x0000002F:
			return " 8  S ";
		
		case 0x00000030:
			return " 9  S ";
		
		case 0x00000031:
			return " 10 S ";
		
		case 0x00000032:
			return " J  S ";
		
		case 0x00000033:
			return " Q  S ";
		
		case 0x00000034:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_388(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_389(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_212, (iParam0 % 0x00000020));
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_213, (iParam0 % 0x00000020));
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_214, (iParam0 % 0x00000020));
		
		case 0x00000003:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_215, (iParam0 % 0x00000020));
		
		case 0x00000004:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_216, (iParam0 % 0x00000020));
		
		case 0x00000005:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_217, (iParam0 % 0x00000020));
		
		case 0x00000006:
			return unk_0xEAE0D21A50E6C7F4(Local_126.f_218, (iParam0 % 0x00000020));
		
		default:
	}
	return 0x00000000;
}

void func_390(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(Local_126.f_212), (iParam0 % 0x00000020));
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(Local_126.f_213), (iParam0 % 0x00000020));
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(Local_126.f_214), (iParam0 % 0x00000020));
			break;
		
		case 0x00000003:
			unk_0x0674E58A79778E99(&(Local_126.f_215), (iParam0 % 0x00000020));
			break;
		
		case 0x00000004:
			unk_0x0674E58A79778E99(&(Local_126.f_216), (iParam0 % 0x00000020));
			break;
		
		case 0x00000005:
			unk_0x0674E58A79778E99(&(Local_126.f_217), (iParam0 % 0x00000020));
			break;
		
		case 0x00000006:
			unk_0x0674E58A79778E99(&(Local_126.f_218), (iParam0 % 0x00000020));
			break;
	}
}

void func_391(int iParam0)
{
	switch (SYSTEM::FLOOR((IntToFloat(iParam0) / 32f)))
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(Local_126.f_212), (iParam0 % 0x00000020));
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(Local_126.f_213), (iParam0 % 0x00000020));
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(Local_126.f_214), (iParam0 % 0x00000020));
			break;
		
		case 0x00000003:
			unk_0x5D96D8530B3D0904(&(Local_126.f_215), (iParam0 % 0x00000020));
			break;
		
		case 0x00000004:
			unk_0x5D96D8530B3D0904(&(Local_126.f_216), (iParam0 % 0x00000020));
			break;
		
		case 0x00000005:
			unk_0x5D96D8530B3D0904(&(Local_126.f_217), (iParam0 % 0x00000020));
			break;
		
		case 0x00000006:
			unk_0x5D96D8530B3D0904(&(Local_126.f_218), (iParam0 % 0x00000020));
			break;
	}
}

int func_392(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0x00000001:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_a_a");
			
			case 0x00000002:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_02a");
			
			case 0x00000003:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_03a");
			
			case 0x00000004:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_04a");
			
			case 0x00000005:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_05a");
			
			case 0x00000006:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_06a");
			
			case 0x00000007:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_07a");
			
			case 0x00000008:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_08a");
			
			case 0x00000009:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_09a");
			
			case 0x0000000A:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_10a");
			
			case 0x0000000B:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_j_a");
			
			case 0x0000000C:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_q_a");
			
			case 0x0000000D:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_k_a");
			
			case 0x0000000E:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_a_a");
			
			case 0x0000000F:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_02a");
			
			case 0x00000010:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_03a");
			
			case 0x00000011:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_04a");
			
			case 0x00000012:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_05a");
			
			case 0x00000013:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_06a");
			
			case 0x00000014:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_07a");
			
			case 0x00000015:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_08a");
			
			case 0x00000016:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_09a");
			
			case 0x00000017:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_10a");
			
			case 0x00000018:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_j_a");
			
			case 0x00000019:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_q_a");
			
			case 0x0000001A:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_k_a");
			
			case 0x0000001B:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_a_a");
			
			case 0x0000001C:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_02a");
			
			case 0x0000001D:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_03a");
			
			case 0x0000001E:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_04a");
			
			case 0x0000001F:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_05a");
			
			case 0x00000020:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_06a");
			
			case 0x00000021:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_07a");
			
			case 0x00000022:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_08a");
			
			case 0x00000023:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_09a");
			
			case 0x00000024:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_10a");
			
			case 0x00000025:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_j_a");
			
			case 0x00000026:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_q_a");
			
			case 0x00000027:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_k_a");
			
			case 0x00000028:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_a_a");
			
			case 0x00000029:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_02a");
			
			case 0x0000002A:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_03a");
			
			case 0x0000002B:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_04a");
			
			case 0x0000002C:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_05a");
			
			case 0x0000002D:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_06a");
			
			case 0x0000002E:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_07a");
			
			case 0x0000002F:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_08a");
			
			case 0x00000030:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_09a");
			
			case 0x00000031:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_10a");
			
			case 0x00000032:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_j_a");
			
			case 0x00000033:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_q_a");
			
			case 0x00000034:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000001:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_ace");
			
			case 0x00000002:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_02");
			
			case 0x00000003:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_03");
			
			case 0x00000004:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_04");
			
			case 0x00000005:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_05");
			
			case 0x00000006:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_06");
			
			case 0x00000007:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_07");
			
			case 0x00000008:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_08");
			
			case 0x00000009:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_09");
			
			case 0x0000000A:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_10");
			
			case 0x0000000B:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_jack");
			
			case 0x0000000C:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_queen");
			
			case 0x0000000D:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_king");
			
			case 0x0000000E:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_ace");
			
			case 0x0000000F:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_02");
			
			case 0x00000010:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_03");
			
			case 0x00000011:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_04");
			
			case 0x00000012:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_05");
			
			case 0x00000013:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_06");
			
			case 0x00000014:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_07");
			
			case 0x00000015:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_08");
			
			case 0x00000016:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_09");
			
			case 0x00000017:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_10");
			
			case 0x00000018:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_jack");
			
			case 0x00000019:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_queen");
			
			case 0x0000001A:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_king");
			
			case 0x0000001B:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_ace");
			
			case 0x0000001C:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_02");
			
			case 0x0000001D:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_03");
			
			case 0x0000001E:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_04");
			
			case 0x0000001F:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_05");
			
			case 0x00000020:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_06");
			
			case 0x00000021:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_07");
			
			case 0x00000022:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_08");
			
			case 0x00000023:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_09");
			
			case 0x00000024:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_10");
			
			case 0x00000025:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_jack");
			
			case 0x00000026:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_queen");
			
			case 0x00000027:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_king");
			
			case 0x00000028:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_ace");
			
			case 0x00000029:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_02");
			
			case 0x0000002A:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_03");
			
			case 0x0000002B:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_04");
			
			case 0x0000002C:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_05");
			
			case 0x0000002D:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_06");
			
			case 0x0000002E:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_07");
			
			case 0x0000002F:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_08");
			
			case 0x00000030:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_09");
			
			case 0x00000031:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_10");
			
			case 0x00000032:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_jack");
			
			case 0x00000033:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_queen");
			
			case 0x00000034:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	if (bParam1)
	{
		return unk_0x12AB0310C2281427("vw_prop_vw_jo_char_01a");
	}
	return unk_0x12AB0310C2281427("vw_prop_casino_cards_single");
}

void func_393()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000012)
	{
		iVar1 = func_394(iVar0);
		unk_0x71199B01895C6202(iVar1);
		iVar0++;
	}
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x77B5F838;
		
		case 0x00000001:
			return 0xDC4EF59F;
		
		case 0x00000002:
			return 0x1A49472C;
		
		case 0x00000003:
			return 0x4B92DA34;
		
		case 0x00000004:
			return 0xB9269F5D;
		
		case 0x00000005:
			return 0xA629769F;
		
		case 0x00000006:
			return 0x0C0DA929;
		
		case 0x00000007:
			return 0x6B4F3F1F;
		
		case 0x00000008:
			return 0x2D1BA3E7;
		
		case 0x00000009:
			return 0x835C1F04;
		
		case 0x0000000A:
			return 0xAB9812D9;
		
		case 0x0000000B:
			return 0xA34066AD;
		
		case 0x0000000C:
			return 0x9C296633;
		
		case 0x0000000D:
			return 0x6DA4F1B6;
		
		case 0x0000000E:
			return 0x051D3D08;
		
		case 0x0000000F:
			return 0x43AF5497;
		
		case 0x00000010:
			return 0x7921397D;
		
		case 0x00000011:
			return 0xB83B34A0;
		
		default:
	}
	return 0x00000000;
}

int func_395()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000012)
	{
		iVar1 = func_394(iVar0);
		unk_0x523BCC9DC80CD82F(iVar1);
		if (!unk_0xB87F6CF6E5628C67(iVar1))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

bool func_396()
{
	return unk_0xEAE0D21A50E6C7F4(Global_199459.f_6, 0x0000000C);
}

int func_397()
{
	return func_398(0x00002038, 0xFFFFFFFF, 0x00000000);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_399(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_399(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_19();
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

void func_400()
{
	if (Local_126.f_101 == 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_150))
		{
			iLocal_150 = unk_0x4B72871A3BE7B474(func_70(0x00000000), 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_419() != func_418() && unk_0x757EF87A33649210())
		{
			if (unk_0xB02B5A3616555A54(iLocal_150) != func_401(func_419()))
			{
				unk_0x4EBF23A230F3B12C(iLocal_150, func_401(func_419()));
			}
		}
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(iLocal_151))
		{
			iLocal_151 = unk_0x4B72871A3BE7B474(1129.406f, 262.3578f, -52.041f, 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (unk_0xB02B5A3616555A54(iLocal_151) != 0x00000003)
		{
			unk_0x4EBF23A230F3B12C(iLocal_151, 0x00000003);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_152))
		{
			iLocal_152 = unk_0x4B72871A3BE7B474(1144.429f, 247.3352f, -52.041f, 1f, 0x813D743A, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (unk_0xC844350D5D58C99A(iLocal_152) && unk_0xB02B5A3616555A54(iLocal_152) != 0x00000003)
		{
			unk_0x4EBF23A230F3B12C(iLocal_152, 0x00000003);
		}
	}
}

int func_401(int iParam0)
{
	if (func_404(iParam0))
	{
		return 0x00000001;
	}
	else if (func_403(iParam0))
	{
		return 0x00000002;
	}
	else if (func_402(iParam0))
	{
		return 0x00000003;
	}
	return 0x00000001;
}

int func_402(int iParam0)
{
	if (iParam0 != func_418())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000015);
	}
	return 0x00000000;
}

int func_403(int iParam0)
{
	if (iParam0 != func_418())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000014);
	}
	return 0x00000000;
}

int func_404(int iParam0)
{
	if (iParam0 != func_418())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000013);
	}
	return 0x00000000;
}

void func_405()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_126.f_101)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_135[iVar0]))
		{
			func_406(iVar0);
		}
		iVar0++;
	}
}

void func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Local_126.f_EC)
	{
		iVar0 = 0x64AF5084;
	}
	else
	{
		iVar0 = 0x914701B8;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iLocal_135[iParam0]))
	{
		iVar1 = unk_0xB0BE3DFBBB59A620(iVar0, func_408(iParam0), 0x00000000, 0x00000000, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0x08841CDB215AE18F(iVar1, func_408(iParam0), 0x00000000, 0x00000000, 0x00000001);
		unk_0xC023D1C4BF532815(iVar1, func_407(iParam0), 0x00000002, 0x00000001);
		unk_0x1E9649458B15960F(iVar1, 0x00000001);
		iLocal_135[iParam0] = iVar1;
	}
}

Vector3 func_407(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 164.52f, 11.5f };
	return Vector(func_69(iParam0), 0f, 0f) + vVar0;
}

Vector3 func_408(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0.526f, 0.571f, 0.963f };
	return unk_0x8A5E176FF719A014(func_70(iParam0), func_69(iParam0), vVar0);
}

int func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000034)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_392(iVar1, Local_126.f_EC);
		unk_0x523BCC9DC80CD82F(iVar2);
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_410()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_126.f_101)
	{
		if (unk_0xC844350D5D58C99A(iLocal_135[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_135[iVar0]));
		}
		iVar0++;
	}
}

void func_411()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000034)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_392(iVar1, Local_126.f_EC);
		unk_0x71199B01895C6202(iVar2);
		iVar0++;
	}
}

void func_412()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_126.f_101)
	{
		if (!unk_0xE5DBF9B6126856CA(Local_116.f_63B[iVar0]))
		{
		}
		else
		{
			iVar1 = unk_0x1B50683925F00106(Local_116.f_63B[iVar0]);
			if (func_414(iVar1))
			{
				if (func_413(iVar0))
				{
					unk_0xC6384DBF5F4B354B(iVar1, 0x00000000, 0x00000001);
				}
				else
				{
					unk_0xC6384DBF5F4B354B(iVar1, 0x00000001, 0x00000000);
				}
			}
		}
		iVar0++;
	}
}

int func_413(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4, 0x00000005) || unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4, 0x00000003))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4, 0x00000002))
	{
		if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 != iParam0)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_414(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_415()
{
	if (unk_0x8CD06866876216F2() && unk_0xBFF81ED3B99522C7())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_416()
{
	return func_417(unk_0xD803B885F5E47A62());
}

int func_417(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_418()
{
	return 0xFFFFFFFF;
}

int func_419()
{
	return func_420(unk_0xD803B885F5E47A62());
}

int func_420(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_418())
	{
		return iParam0;
	}
	if (func_422(iParam0) != 0xFFFFFFFF)
	{
		iVar0 = func_421(func_422(iParam0));
		if ((iVar0 == 0x00000002 || iVar0 == 0x00000001) || iVar0 == 0x00000000)
		{
			if (func_313(iParam0, 0x00000000))
			{
				return func_212(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 0x00000003)
		{
			return func_418();
		}
		return Global_25033E[iParam0 /*421*/].f_136.f_8;
	}
	return func_418();
}

int func_421(int iParam0)
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

int func_422(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (func_20(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5;
		}
		else if (((Global_14086D || Global_24B2D0.f_A6F) && iParam0 == unk_0xD803B885F5E47A62()) && func_20(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5;
		}
	}
	return 0xFFFFFFFF;
}

int func_423(int iParam0)
{
	if (iParam0 != func_418() && func_20(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000004);
	}
	return 0x00000000;
}

int func_424(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (func_20(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_421(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_425(int iParam0)
{
	if (iParam0 != func_418())
	{
		if (func_20(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_421(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

bool func_426()
{
	return unk_0xEAE0D21A50E6C7F4(Global_199459.f_3, 0x00000002);
}

void func_427()
{
	if (Local_126.f_1 > 0x00000002)
	{
		if (Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4 > 0xFFFFFFFF)
		{
			Local_131.f_9 = Local_116.f_622[Local_125[unk_0xD803B885F5E47A62() /*8*/].f_4];
		}
		Local_131.f_12 = func_415();
		Local_131.f_13 = func_192();
		Local_131.f_11 = func_190(&uLocal_127, 0x00000000, 0x00000000);
		Local_131.f_7 = func_397();
		if (Global_40001.f_65B3)
		{
			unk_0x5943F8BE26E6D616(&Local_131);
		}
	}
	if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
	{
		unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
	}
	if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_371(0x00000000);
	func_411();
	func_393();
	func_430();
	func_429();
	func_410();
	if (unk_0xC844350D5D58C99A(Local_126.f_219))
	{
		unk_0xF690C84DADBB3551(&(Local_126.f_219));
	}
	if (Local_126.f_1 > 0x00000000)
	{
		unk_0x8D17794CE3273D70(func_58());
		unk_0x8D17794CE3273D70(func_72());
		unk_0x8D17794CE3273D70(func_88());
		unk_0x8D17794CE3273D70(func_216());
	}
	Global_19E12D = 0x00000000;
	func_428();
}

void func_428()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_429()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (0x00000010 * Local_126.f_101);
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Local_126.f_21A[iVar1]))
		{
			unk_0xF690C84DADBB3551(&(Local_126.f_21A[iVar1]));
		}
		iVar1++;
	}
}

void func_430()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (0x0000000B * Local_126.f_101);
	iVar1 = (0x00000038 * Local_126.f_101);
	iVar2 = 0x00000000;
	while (iVar2 < iVar1)
	{
		if (unk_0xC844350D5D58C99A(Local_126.f_288[iVar2]))
		{
			unk_0xF690C84DADBB3551(&(Local_126.f_288[iVar2]));
			Local_126.f_131[iVar2] = 0xFFFFFFFF;
			func_390(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Local_126.f_25B[iVar2]))
		{
			unk_0xF690C84DADBB3551(&(Local_126.f_25B[iVar2]));
			Local_126.f_104[iVar2] = 0xFFFFFFFF;
		}
		iVar2++;
	}
}

int func_431()
{
	var uVar0;
	
	func_439(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_438())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_437())
	{
		return 0x00000001;
	}
	if (func_436(0x0000009F))
	{
		if (!func_435())
		{
			return 0x00000001;
		}
	}
	if (func_436(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_432() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_432()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_432()
{
	switch (func_434())
	{
		case 0x00000000:
			return func_433();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_433()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_434()
{
	return Global_7830;
}

bool func_435()
{
	return Global_2564C8.f_256;
}

int func_436(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_437()
{
	return Global_258C08;
}

bool func_438()
{
	return Global_2564C8.f_251;
}

void func_439(var uParam0)
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
					func_440(iVar0);
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

void func_440(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_20(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_441(iVar2, &bVar3))
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

int func_441(int iParam0, var uParam1)
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

void func_442()
{
	int iVar0;
	int iVar1;
	
	if (Global_19E125)
	{
		Global_19E125 = 0x00000000;
	}
	if (func_424(unk_0xD803B885F5E47A62()) && func_419() != func_418())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_419() /*421*/].f_136.f_4, 0x00000004))
		{
			Local_126.f_EC = 0x00000001;
		}
	}
	while (!(Global_265DDB != 0xFFFFFFFF || func_424(unk_0xD803B885F5E47A62())))
	{
		if (!unk_0x8CD06866876216F2())
		{
			func_427();
		}
		if (func_431())
		{
			func_427();
		}
		SYSTEM::WAIT(0x00000000);
	}
	iVar0 = 0xFFFFFFFF;
	if (func_424(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_446();
	}
	unk_0x37AD2AB54480FA6A(0x00000020, 0x00000000, iVar0);
	func_444(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_116, 0x0000067C);
	unk_0x35B62793EAE9ADDF(&Local_125, 0x00000101);
	if (func_424(unk_0xD803B885F5E47A62()))
	{
		Local_126.f_101 = 0x00000001;
		unk_0x991E101AF0F7523A(0x00000001);
	}
	else
	{
		unk_0x991E101AF0F7523A(0x00000003);
	}
	if (!func_443())
	{
		func_427();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
	}
	else
	{
		func_427();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_424(unk_0xD803B885F5E47A62()))
		{
			Local_116.f_60E[0x00000000] = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000E);
		}
		else
		{
			Local_116.f_60E[0x00000000] = Global_265DE9[0x00000000];
			Local_116.f_60E[0x00000001] = Global_265DE9[0x00000001];
			Local_116.f_60E[0x00000002] = Global_265DE9[0x00000002];
			Local_116.f_60E[0x00000003] = Global_265DE9[0x00000003];
		}
	}
	Global_19E12D = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000002C)
	{
		Local_126.f_104[iVar1] = 0xFFFFFFFF;
		iVar1++;
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x000000E0)
	{
		Local_126.f_131[iVar1] = 0xFFFFFFFF;
		func_390(iVar1);
		iVar1++;
	}
}

int func_443()
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
		if (func_438())
		{
			return 0x00000000;
		}
		if (func_436(0x0000009D))
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

int func_444(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_428();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_445())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_428();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_438())
				{
					if (!bParam2)
					{
						func_428();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_436(0x0000009D))
				{
					if (!bParam2)
					{
						func_428();
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
					func_428();
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
				func_428();
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
			func_428();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_445()
{
	return Global_140856;
}

int func_446()
{
	var uVar0;
	
	uVar0 = Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_6;
	return uVar0;
}

