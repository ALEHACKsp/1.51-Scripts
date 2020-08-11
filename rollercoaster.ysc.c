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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 16;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	var uLocal_140 = 0;
	var uLocal_141 = 0;
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
	vector3 vLocal_159[234] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	struct<12> Local_164 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_165 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<22> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180[4] = { 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	int iLocal_191 = 0;
	vector3 vLocal_192[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_193 = 0;
	int iLocal_194 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	iLocal_40 = joaat("prop_ld_test_01");
	vLocal_160 = { 0f, 0f, 1.7f };
	fLocal_163 = 0f;
	iLocal_182 = 0xFFFFFFFF;
	iLocal_183 = 0xFFFFFFFF;
	iLocal_184 = 0x00000020;
	iLocal_185 = 0x00000020;
	iLocal_186 = 0x00000003;
	fLocal_188 = 0.25f;
	fLocal_189 = 1.75f;
	fLocal_190 = 1f;
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_186(0x00000000);
	}
	SYSTEM::WAIT(0x00000000);
	func_57(0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
	unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000007);
	if (!unk_0x9F4FE516EAACCFC5(iLocal_181))
	{
		iLocal_181 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", -1652.227f, -1120.93f, 22.4479f, 9.2388f, 0f, -131.6249f, 50.1098f, 0x00000001, 0x00000002);
		unk_0x86F44313DFA8F00C(iLocal_181, -1652.227f, -1120.93f, 22.4479f, 9.2388f, 0f, -131.6249f, 50.1098f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
		unk_0xE3BB8E05FCEB3FBE(iLocal_181, 0x00000001);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	}
	if (func_56(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		}
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 60f, 0x00000000);
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 60f);
	}
	func_54(&uLocal_41, 0x00000000, iLocal_40);
	func_54(&uLocal_41, 0x00000001, joaat("prop_roller_car_01"));
	func_54(&uLocal_41, 0x00000002, joaat("prop_roller_car_02"));
	while (!unk_0xE3934829A331AF92("LEVIATHON_RIDE_MASTER", 0x00000000))
	{
		func_53();
		func_56(unk_0x16F2683693E537C9());
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x7B1292B738DF9FAF();
	if (unk_0x9F4FE516EAACCFC5(iLocal_181))
	{
		unk_0x86F44313DFA8F00C(iLocal_181, -1651.501f, -1118.395f, 23.5181f, 3.435f, 0f, -152.2412f, 50.1098f, 0x00001388, 0x00000001, 0x00000001, 0x00000002);
		iVar6 = unk_0x1C0640BA9A7327B3() + 5000;
	}
	while (!func_50(&uLocal_41) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_53();
		func_56(unk_0x16F2683693E537C9());
		SYSTEM::WAIT(0x00000000);
	}
	if (func_56(unk_0x728870EB733D12A1()))
	{
		if (func_49(unk_0x728870EB733D12A1(), joaat("bagger")))
		{
			func_34(-1633.43f, -1111.998f, 11.02252f, -1661.27f, -1142.66f, 25.51722f, 12f, -1630.952f, -1107.58f, 12.0215f, 51.9704f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		else if (func_49(unk_0x728870EB733D12A1(), joaat("sandking")))
		{
			func_34(-1633.43f, -1111.998f, 11.02252f, -1661.27f, -1142.66f, 25.51722f, 12f, -1636.344f, -1106.241f, 12.0261f, 52.3427f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
	fLocal_190 = 0.5f;
	func_33(0x00000001, 0.5f, 0x00000002);
	func_33(0x00000002, 0.5f, 0x00000005);
	func_33(0x0000000D, 0.5f, 0x00000000);
	func_33(0x0000000E, 0.3f, 0x00000000);
	func_33(0x0000000F, 0.2f, 0x00000000);
	func_33(0x00000010, 0.1f, 0x00000000);
	func_33(0x00000011, 0.05f, 0x00000006);
	func_33(0x00000012, 0.05f, 0x00000000);
	func_33(0x00000013, 1f, 0x00000002);
	func_33(0x00000014, 1f, 0x00000004);
	func_33(0x0000001F, 1f, 0x00000002);
	func_33(0x00000022, 1f, 0x00000004);
	func_33(0x0000002D, 1f, 0x00000004);
	func_33(0x0000003C, 1f, 0x00000004);
	func_33(0x00000045, 1f, 0x00000004);
	func_33(0x00000051, 1f, 0x00000003);
	func_33(0x00000054, 0.75f, 0x00000001);
	func_33(0x0000005A, 0.75f, 0x00000005);
	func_33(0x0000005E, 0.75f, 0x00000006);
	func_33(0x0000005F, 1f, 0x00000002);
	func_33(0x00000061, 1f, 0x00000004);
	func_33(0x00000076, 1f, 0x00000004);
	func_33(0x00000082, 1f, 0x00000004);
	func_33(0x0000009B, 1f, 0x00000004);
	func_33(0x000000AC, 1f, 0x00000004);
	func_33(0x000000B8, 1f, 0x00000004);
	func_33(0x000000C5, 1f, 0x00000004);
	func_33(0x000000D8, 1f, 0x00000004);
	func_33(0x000000DE, 1f, 0x00000003);
	func_33(0x000000E8, 0.01f, 0x00000000);
	func_32(iLocal_191);
	func_30();
	func_29();
	func_28(&Local_164, 0x00000001, 0x00000000);
	SYSTEM::WAIT(0x00000000);
	func_28(&Local_165, 0x00000002, 0x00000000);
	Local_164.f_B = 0x00000001;
	func_20(0x00000001);
	SYSTEM::WAIT(0x00000000);
	func_15();
	if (func_56(unk_0x16F2683693E537C9()) && func_56(Local_164.f_9))
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1648.4f, -1127.6f, 18.3f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), Local_164.f_9, 0x00000000, 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	}
	while (unk_0x1C0640BA9A7327B3() < iVar6)
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_181))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_181, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_181, 0x00000000);
	}
	if (func_56(unk_0x16F2683693E537C9()))
	{
		Local_169.f_14 = 0x0000003C;
		Local_169.f_15 = 0x00000014;
		vVar1 = { unk_0x64430C979F516F7A(unk_0x16F2683693E537C9(), 0x0000796E, 0f, -0.25f, 0f) };
		func_14(&Local_169, vVar1, unk_0x835730A2D89F6093(Local_164.f_9, 0x00000002), 50f, Local_169.f_14, Local_169.f_15, 0x00000003, 0x41A00000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000);
		unk_0xC5940439E4EB9A33(Local_169, unk_0x16F2683693E537C9(), 0f, 0f, 0.5f, 0x00000001);
	}
	SYSTEM::WAIT(0x00000000);
	if (func_56(unk_0x16F2683693E537C9()) && func_56(Local_165.f_9))
	{
		func_12(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_165.f_9, 0x00000001), &fVar4, &fVar5, 0x00000001);
		func_9(&Local_169, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x3E4CCCCD, 0x00000000, 0x3F800000, 0x00000000);
		unk_0x5F3CBA6EB9341C90(Local_169, Vector(fVar5, 0f, fVar4) + Local_169.f_E, 0x00000002);
	}
	unk_0x8BC9595FD2792B5D("FAIRGROUND_RIDES_LEVIATHAN");
	iLocal_187 = unk_0x1C0640BA9A7327B3() + 5000;
	func_8("FGND_SKIPRIDE", 0xFFFFFFFF);
	unk_0x5E858A00EAFA5B24(0x00000000, 0x000003E8, 0x000000FF);
	while (0x00000001)
	{
		func_6();
		func_15();
		iVar0 = Local_164.f_4[0x00000001];
		vVar2 = { func_4(func_5(iVar0 + 1) - func_5(iVar0)) };
		vVar3 = { func_4(func_5(iVar0 + 4) - func_5(iVar0)) };
		fVar8 = (1f - func_3(vVar3, vVar2));
		fVar7 = (SYSTEM::SIN(((Local_164.f_A - IntToFloat(SYSTEM::FLOOR(Local_164.f_A))) * 360f)) * fLocal_188);
		if (func_56(unk_0x16F2683693E537C9()) && func_56(Local_165.f_9))
		{
			func_12(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_165.f_9, 0x00000001), &fVar4, &fVar5, 0x00000001);
			func_9(&Local_169, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x3E4CCCCD, 0x00000000, 0x3F800000, 0x00000000);
			unk_0x5F3CBA6EB9341C90(Local_169, Vector((fVar5 + (fVar7 * (fVar8 * 2f))), 0f, (fVar4 + fVar7)) + Local_169.f_E, 0x00000002);
		}
		func_53();
		func_2();
		if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		if (unk_0x1C0640BA9A7327B3() > iLocal_187)
		{
			if (fLocal_190 > 0.01f)
			{
				if (fLocal_190 > 0.5f)
				{
					unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "ROLLERCOASTER_CHAT_EXCITED", "SPEECH_PARAMS_FORCE_FRONTEND", 0x00000001);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "ROLLERCOASTER_CHAT_NORMAL", "SPEECH_PARAMS_FORCE_FRONTEND", 0x00000001);
				}
				iLocal_187 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001F40, 0x000032C8));
			}
		}
		if (iLocal_179 == 0x00000000)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012) || unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033))
			{
				func_1(0x000001F4, 0x00000000);
				iLocal_179 = 0x00000001;
			}
		}
		else if (unk_0x757EF87A33649210())
		{
			func_186(0x00000001);
		}
		else if (!unk_0xD0BB2359EC70FC37())
		{
			iLocal_179 = 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0, bool bParam1)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if (!unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!unk_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
	}
}

void func_2()
{
	Global_56C3.f_6 = 0x00000001;
}

float func_3(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_4(vector3 vParam0)
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

Vector3 func_5(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 % iLocal_161);
	return vLocal_159[iVar0 /*3*/];
}

void func_6()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = iLocal_191 + 1;
	if (iLocal_191 >= vLocal_192.x)
	{
		iLocal_191 = 0x00000000;
		return;
	}
	if (iVar3 >= vLocal_192.x)
	{
		return;
	}
	if (Local_164.f_A < IntToFloat(vLocal_192[iLocal_191 /*3*/]))
	{
		return;
	}
	if (Local_164.f_A >= IntToFloat(vLocal_192[iVar3 /*3*/]))
	{
		iLocal_191 = iVar3;
		return;
	}
	if (iVar3 >= vLocal_192.x)
	{
		return;
	}
	if (vLocal_192[iLocal_191 /*3*/].f_1 == vLocal_192[iVar3 /*3*/].f_1)
	{
		fLocal_190 = vLocal_192[iLocal_191 /*3*/].f_1;
		return;
	}
	fVar0 = SYSTEM::TO_FLOAT(unk_0x51D1D19912234EA0((vLocal_192[iLocal_191 + 1 /*3*/] - vLocal_192[iLocal_191 /*3*/])));
	fVar1 = (vLocal_192[iVar3 /*3*/].f_1 - vLocal_192[iLocal_191 /*3*/].f_1);
	fVar2 = (1f - ((SYSTEM::TO_FLOAT(vLocal_192[iVar3 /*3*/]) - Local_164.f_A) / fVar0));
	fLocal_190 = (vLocal_192[iLocal_191 /*3*/].f_1 + (fVar2 * fVar1));
	if (vLocal_192[iLocal_191 /*3*/].f_1 < vLocal_192[iVar3 /*3*/].f_1)
	{
		fLocal_190 = func_7(fLocal_190, vLocal_192[iLocal_191 /*3*/].f_1, vLocal_192[iVar3 /*3*/].f_1);
	}
	else
	{
		fLocal_190 = func_7(fLocal_190, vLocal_192[iVar3 /*3*/].f_1, vLocal_192[iLocal_191 /*3*/].f_1);
	}
}

float func_7(float fParam0, float fParam1, float fParam2)
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

void func_8(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_9(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0xA2E3EDD0E119882F(0x00000002);
	func_11(&(iVar0[0x00000000]), &(iVar0[0x00000001]), &(iVar0[0x00000002]), &(iVar0[0x00000003]), 0x00000000, 0x00000000);
	if (unk_0x89DF0B812BA6383B())
	{
		iVar0[0x00000003] = (iVar0[0x00000003] * 0xFFFFFFFF);
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		fVar1 = unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000EF);
		fVar2 = unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000F0);
		fVar3 = (fVar1 - iParam0->f_1D);
		fVar4 = (fVar2 - iParam0->f_1E);
		iParam0->f_1D = fVar1;
		iParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[0x00000002] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[0x00000003] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[0x00000002] = SYSTEM::ROUND(((unk_0x659FAE9DBE6F38F5(0x00000002, 0x00000122) * fParam5) * 127f));
			iVar0[0x00000003] = SYSTEM::ROUND(((unk_0x659FAE9DBE6F38F5(0x00000002, 0x00000123) * fParam5) * 127f));
		}
		iVar0[0x00000002] = func_10((iVar0[0x00000002] + iParam0->f_18), 0xFFFFFF81, 0x0000007F);
		iVar0[0x00000003] = func_10((iVar0[0x00000003] + iParam0->f_19), 0xFFFFFF81, 0x0000007F);
	}
	if (iParam0->f_18 == iVar0[0x00000002] && iParam0->f_19 == iVar0[0x00000003])
	{
		if (iParam0->f_1B < unk_0x1C0640BA9A7327B3())
		{
			iParam0->f_18 = 0x00000000;
			iParam0->f_19 = 0x00000000;
			if (unk_0x91E3F625EF57450D(0x00000002))
			{
				iVar0[0x00000002] = 0x00000000;
				iVar0[0x00000003] = 0x00000000;
				iParam0->f_1C = 0x00000001;
			}
		}
	}
	else
	{
		iParam0->f_18 = iVar0[0x00000002];
		iParam0->f_19 = iVar0[0x00000003];
		iParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
		iParam0->f_1C = 0x00000000;
	}
	if (bParam2)
	{
		iParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[0x00000002]) / 127f) * IntToFloat(iParam0->f_14));
		iParam0->f_8.f_1 = ((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_16)) / IntToFloat(iParam0->f_14));
		iParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 127f) * IntToFloat(iParam0->f_15));
	}
	else
	{
		iParam0->f_8 = { 0f, 0f, 0f };
		iParam0->f_18 = 0x00000000;
		iParam0->f_19 = 0x00000000;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { iParam0->f_8 + iParam0->f_B };
	if ((unk_0x91E3F625EF57450D(0x00000002) && bParam2) && !iParam0->f_1C)
	{
		iParam0->f_E = vVar6.x;
		iParam0->f_E.f_1 = vVar6.y;
		iParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		iParam0->f_E = (iParam0->f_E + func_7(((((vVar6.x - iParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_E.f_1 = (iParam0->f_E.f_1 + func_7(((((vVar6.y - iParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_E.f_2 = (iParam0->f_E.f_2 + func_7(((((vVar6.z - iParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (iParam0->f_1A)
	{
		iParam0->f_E = func_7(iParam0->f_E, SYSTEM::TO_FLOAT(-iParam0->f_15), SYSTEM::TO_FLOAT(iParam0->f_15));
		iParam0->f_E.f_1 = func_7(iParam0->f_E.f_1, SYSTEM::TO_FLOAT(-iParam0->f_16), SYSTEM::TO_FLOAT(iParam0->f_16));
		iParam0->f_E.f_2 = func_7(iParam0->f_E.f_2, SYSTEM::TO_FLOAT(-iParam0->f_14), SYSTEM::TO_FLOAT(iParam0->f_14));
	}
	if (unk_0x91E3F625EF57450D(0x00000000) && bParam1)
	{
		if (iParam0->f_1C)
		{
			iParam0->f_11 = iParam0->f_7;
		}
	}
	else
	{
		iParam0->f_11 = iParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x91E3F625EF57450D(0x00000000))
		{
			iVar7 = 0x00000028;
			iVar8 = 0x00000029;
			if (bParam6)
			{
				iVar7 = 0x000000F1;
				iVar8 = 0x000000F2;
			}
			if (unk_0xD245978525608929(0x00000000, iVar7))
			{
				iParam0->f_11 = (iParam0->f_11 - 5f);
				iParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				iParam0->f_1C = 0x00000000;
			}
			else if (unk_0xD245978525608929(0x00000000, iVar8))
			{
				iParam0->f_11 = (iParam0->f_11 + 5f);
				iParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				iParam0->f_1C = 0x00000000;
			}
			if (bParam3)
			{
				iParam0->f_11 = func_7(iParam0->f_11, (iParam0->f_7 - iParam0->f_13), iParam0->f_7);
			}
			else
			{
				iParam0->f_11 = func_7(iParam0->f_11, (iParam0->f_7 - iParam0->f_13), (iParam0->f_7 + iParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[0x00000001] = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000CF);
			iVar0[0x00000003] = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000D0);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[0x00000003]) > 127f)
				{
					iParam0->f_11 = (iParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 128f) * (iParam0->f_13 / 2f)))));
				}
			}
			else
			{
				iParam0->f_11 = (iParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * iParam0->f_13))));
				iParam0->f_11 = (iParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 128f) * iParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[0x00000001]) < 0f)
			{
				iParam0->f_11 = (iParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * iParam0->f_13))));
			}
		}
		else
		{
			iParam0->f_11 = (iParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * iParam0->f_13))));
		}
	}
	iParam0->f_12 = (iParam0->f_12 + (((iParam0->f_11 - iParam0->f_12) * 0.06f) * fVar5));
	unk_0x86F44313DFA8F00C(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_E, iParam0->f_12, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
	if (unk_0x9F4FE516EAACCFC5(*iParam0))
	{
		if (unk_0xFBB4F23D534EB790(*iParam0))
		{
			if (unk_0x9CF8D5C7090408A2(*iParam0))
			{
				unk_0x9501364A300048C6();
			}
		}
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_11(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DA))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DA) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DB))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DB) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DC))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DC) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DD))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DD) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
		}
	}
}

void func_12(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	func_13(vVar0, uParam2, uParam3, iParam4);
}

void func_13(vector3 vParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	
	if (vParam0.y != 0f)
	{
		*uParam2 = unk_0x5D8ABF6396A76564(vParam0.x, vParam0.y);
	}
	else if (vParam0.x < 0f)
	{
		*uParam2 = -90f;
	}
	else
	{
		*uParam2 = 90f;
	}
	if (iParam3 == 0x00000001)
	{
		*uParam2 = (*uParam2 * -1f);
		if (*uParam2 < 0f)
		{
			*uParam2 = (*uParam2 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)));
	if (fVar0 != 0f)
	{
		*uParam1 = unk_0x5D8ABF6396A76564(vParam0.z, fVar0);
	}
	else if (vParam0.z < 0f)
	{
		*uParam1 = -90f;
	}
	else
	{
		*uParam1 = 90f;
	}
}

void func_14(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = uParam4;
	uParam0->f_15 = uParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = iParam7;
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000001);
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
	if (!bParam11)
	{
		unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	if (fParam10 > 0f)
	{
		unk_0xDC3CC6D1845B0567(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		unk_0x3B05E4399DC8490C(iParam9);
	}
	uParam0->f_18 = 0x00000000;
	uParam0->f_19 = 0x00000000;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0x00000000;
	uParam0->f_1C = 0x00000000;
	uParam0->f_1B = 0x00000000;
}

void func_15()
{
	func_19();
	func_17(&Local_165);
	func_17(&Local_164);
	func_16(Local_164.f_9, Local_165.f_9);
}

void func_16(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	func_12(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001), &fVar0, &fVar1, 0x00000001);
	unk_0xC023D1C4BF532815(iParam0, fVar0, 0f, fVar1, 0x00000002, 0x00000001);
}

void func_17(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_3;
	uParam0->f_3 = (uParam0->f_3 + (((fLocal_163 * fLocal_190) * fLocal_189) * SYSTEM::TIMESTEP()));
	if (uParam0->f_3 >= 1f)
	{
		uParam0->f_3 = (uParam0->f_3 - 1f);
		uParam0->f_4[0x00000000] = uParam0->f_4[0x00000001];
		uParam0->f_4[0x00000001] = uParam0->f_4[0x00000002];
		uParam0->f_4[0x00000002] = uParam0->f_4[0x00000003];
		uParam0->f_4[0x00000003]++;
		if (uParam0->f_4[0x00000003] >= iLocal_161)
		{
			uParam0->f_4[0x00000003] = (uParam0->f_4[0x00000003] - iLocal_161);
		}
		if ((uParam0->f_4[0x00000003] % iLocal_186) == 0x00000000)
		{
			unk_0x5E858A00EAFA5B24(0x00000000, iLocal_184, iLocal_185);
		}
	}
	*uParam0 = { func_18(&(vLocal_159[uParam0->f_4[0x00000000] /*3*/]), &(vLocal_159[uParam0->f_4[0x00000001] /*3*/]), &(vLocal_159[uParam0->f_4[0x00000002] /*3*/]), &(vLocal_159[uParam0->f_4[0x00000003] /*3*/]), uParam0->f_3) };
	*uParam0 = { *uParam0 + vLocal_160 };
	if (func_56(uParam0->f_9) && fVar0 != uParam0->f_3)
	{
		unk_0x08841CDB215AE18F(uParam0->f_9, *uParam0, 0x00000000, 0x00000000, 0x00000001);
	}
	uParam0->f_A = (SYSTEM::TO_FLOAT(uParam0->f_4[0x00000001]) + uParam0->f_3);
}

Vector3 func_18(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (fParam4 * fParam4);
	fVar2 = (fVar1 * fParam4);
	vVar0.x = (0.5f * ((((2f * *uParam1) + ((-*uParam0 + *uParam2) * fParam4)) + (((((2f * *uParam0) - (5f * *uParam1)) + (4f * *uParam2)) - *uParam3) * fVar1)) + ((((-*uParam0 + (3f * *uParam1)) - (3f * *uParam2)) + *uParam3) * fVar2)));
	vVar0.y = (0.5f * ((((2f * uParam1->f_1) + ((-uParam0->f_1 + uParam2->f_1) * fParam4)) + (((((2f * uParam0->f_1) - (5f * uParam1->f_1)) + (4f * uParam2->f_1)) - uParam3->f_1) * fVar1)) + ((((-uParam0->f_1 + (3f * uParam1->f_1)) - (3f * uParam2->f_1)) + uParam3->f_1) * fVar2)));
	vVar0.z = (0.5f * ((((2f * uParam1->f_2) + ((-uParam0->f_2 + uParam2->f_2) * fParam4)) + (((((2f * uParam0->f_2) - (5f * uParam1->f_2)) + (4f * uParam2->f_2)) - uParam3->f_2) * fVar1)) + ((((-uParam0->f_2 + (3f * uParam1->f_2)) - (3f * uParam2->f_2)) + uParam3->f_2) * fVar2)));
	return vVar0;
}

void func_19()
{
	switch (iLocal_168)
	{
		case 0x00000000:
			fLocal_163 = (fLocal_163 + (unk_0x6117725E0134737F() / 2f));
			if (fLocal_163 >= 5f)
			{
				fLocal_163 = 5f;
				iLocal_168 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Local_164.f_4[0x00000001] == 0x000000E0 && iLocal_162 == 0x00000000)
			{
				iLocal_168 = 0x00000002;
				if (func_56(unk_0x16F2683693E537C9()))
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "BIG_STOP", unk_0x16F2683693E537C9(), 0x00000000, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000002:
			fLocal_163 = (fLocal_163 - unk_0x6117725E0134737F());
			if (fLocal_163 <= 0f)
			{
				fLocal_163 = 0f;
				iLocal_168 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			SYSTEM::WAIT(0x000005DC);
			func_186(0x00000001);
			break;
	}
}

void func_20(bool bParam0)
{
	if (bParam0)
	{
		func_27();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_26(0x00000000))
		{
			func_21(0x00000000);
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

void func_21(int iParam0)
{
	if (func_25())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_24())
		{
			func_23(0x00000001, 0x00000001);
		}
		else
		{
			func_23(0x00000000, 0x00000000);
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
	if (!func_22())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_22()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_23(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_26(0x00000000))
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

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_25()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_26(int iParam0)
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

void func_27()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_28(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	uParam0->f_4[0x00000000] = (iParam1 - 0x00000002);
	uParam0->f_4[0x00000001] = (iParam1 - 0x00000001);
	uParam0->f_4[0x00000002] = iParam1;
	uParam0->f_4[0x00000003] = iParam1 + 1;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_4)
	{
		if (uParam0->f_4[iVar0] < 0x00000000)
		{
			uParam0->f_4[iVar0] = (uParam0->f_4[iVar0] + iLocal_161);
		}
		if (uParam0->f_4[iVar0] >= iLocal_161)
		{
			uParam0->f_4[iVar0] = (uParam0->f_4[iVar0] - iLocal_161);
		}
		iVar0++;
	}
	uParam0->f_3 = iParam2;
	*uParam0 = { func_18(&(vLocal_159[uParam0->f_4[0x00000000] /*3*/]), &(vLocal_159[uParam0->f_4[0x00000001] /*3*/]), &(vLocal_159[uParam0->f_4[0x00000002] /*3*/]), &(vLocal_159[uParam0->f_4[0x00000003] /*3*/]), uParam0->f_3) };
	*uParam0 = { *uParam0 + vLocal_160 };
	uParam0->f_9 = unk_0xB0BE3DFBBB59A620(iLocal_40, *uParam0, 0x00000001, 0x00000001, 0x00000000);
	if (func_56(uParam0->f_9))
	{
		unk_0x20641932E5104B25(uParam0->f_9, 0x00000000, 0x00000000);
		unk_0x4A4806F9D471E491(uParam0->f_9, 0x00000000, 0x00000000);
		unk_0x1E9649458B15960F(uParam0->f_9, 0x00000001);
	}
}

void func_29()
{
	int iVar0;
	
	iLocal_180[0x00000000] = unk_0x4B72871A3BE7B474(-1643.524f, -1124.681f, 17.4326f, 2f, joaat("prop_roller_car_01"), 0x00000001, 0x00000000, 0x00000001);
	iLocal_180[0x00000001] = unk_0x4B72871A3BE7B474(-1645.146f, -1126.613f, 17.4326f, 2f, joaat("prop_roller_car_02"), 0x00000001, 0x00000000, 0x00000001);
	iLocal_180[0x00000002] = unk_0x4B72871A3BE7B474(-1646.768f, -1128.545f, 17.4326f, 2f, joaat("prop_roller_car_02"), 0x00000001, 0x00000000, 0x00000001);
	iLocal_180[0x00000003] = unk_0x4B72871A3BE7B474(-1648.39f, -1130.478f, 17.4326f, 2f, joaat("prop_roller_car_02"), 0x00000001, 0x00000000, 0x00000001);
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_180)
	{
		if (unk_0xC844350D5D58C99A(iLocal_180[iVar0]))
		{
			unk_0x73270B3C9CC833FD(iLocal_180[iVar0], 0x00000001, 0x00000000);
			unk_0x4A4806F9D471E491(iLocal_180[iVar0], 0x00000000, 0x00000000);
			unk_0x20641932E5104B25(iLocal_180[iVar0], 0x00000000, 0x00000000);
			unk_0xE121AE1BBF90E186(iLocal_180[iVar0], 0x00000001);
		}
		iVar0++;
	}
}

void func_30()
{
	iLocal_161 = 0x00000000;
	func_31(-1642.878f, -1123.903f, 16.875f);
	func_31(-1644.42f, -1125.74f, 16.8748f);
	func_31(-1645.895f, -1127.499f, 16.8755f);
	func_31(-1647.437f, -1129.335f, 16.8753f);
	func_31(-1648.756f, -1130.908f, 16.8753f);
	func_31(-1650.298f, -1132.745f, 16.875f);
	func_31(-1651.617f, -1134.318f, 16.8751f);
	func_31(-1653.159f, -1136.154f, 16.8748f);
	func_31(-1654.478f, -1137.727f, 16.8748f);
	func_31(-1656.035f, -1139.584f, 16.8755f);
	func_31(-1657.531f, -1141.365f, 16.8737f);
	func_31(-1658.991f, -1143.106f, 16.8658f);
	func_31(-1660.499f, -1144.902f, 16.6238f);
	func_31(-1661.96f, -1146.644f, 16.1105f);
	func_31(-1663.401f, -1148.361f, 15.6586f);
	func_31(-1664.841f, -1150.076f, 15.3486f);
	func_31(-1666.32f, -1151.839f, 15.2158f);
	func_31(-1667.848f, -1153.661f, 15.211f);
	func_31(-1669.439f, -1155.514f, 15.2169f);
	func_31(-1671.27f, -1156.976f, 15.2531f);
	func_31(-1673.393f, -1158.006f, 15.3676f);
	func_31(-1675.675f, -1158.609f, 15.5443f);
	func_31(-1678.03f, -1158.768f, 15.7925f);
	func_31(-1680.365f, -1158.453f, 16.034f);
	func_31(-1682.584f, -1157.648f, 16.248f);
	func_31(-1684.608f, -1156.435f, 16.4506f);
	func_31(-1686.366f, -1154.861f, 16.6232f);
	func_31(-1687.747f, -1152.951f, 16.7552f);
	func_31(-1688.719f, -1150.8f, 16.8714f);
	func_31(-1689.263f, -1148.505f, 16.9875f);
	func_31(-1689.357f, -1146.15f, 17.1035f);
	func_31(-1688.931f, -1143.829f, 17.2199f);
	func_31(-1688.069f, -1141.633f, 17.336f);
	func_31(-1686.807f, -1139.64f, 17.4523f);
	func_31(-1685.166f, -1137.95f, 17.5683f);
	func_31(-1683.206f, -1136.637f, 17.6846f);
	func_31(-1681.032f, -1135.722f, 17.8007f);
	func_31(-1678.724f, -1135.234f, 17.9169f);
	func_31(-1676.369f, -1135.259f, 18.033f);
	func_31(-1674.061f, -1135.746f, 18.1492f);
	func_31(-1671.889f, -1136.663f, 18.2653f);
	func_31(-1669.941f, -1137.983f, 18.3814f);
	func_31(-1668.322f, -1139.7f, 18.4976f);
	func_31(-1667.06f, -1141.692f, 18.6138f);
	func_31(-1666.2f, -1143.889f, 18.73f);
	func_31(-1665.816f, -1146.209f, 18.846f);
	func_31(-1665.915f, -1148.565f, 18.9622f);
	func_31(-1666.461f, -1150.859f, 19.0783f);
	func_31(-1667.432f, -1153.01f, 19.1946f);
	func_31(-1668.85f, -1154.886f, 19.3106f);
	func_31(-1670.606f, -1156.458f, 19.4267f);
	func_31(-1672.631f, -1157.669f, 19.5429f);
	func_31(-1674.787f, -1158.446f, 19.6567f);
	func_31(-1676.391f, -1158.717f, 19.7777f);
	func_31(-1678.231f, -1158.801f, 19.953f);
	func_31(-1680.221f, -1158.663f, 20.1677f);
	func_31(-1682.411f, -1158.297f, 20.4143f);
	func_31(-1684.64f, -1157.654f, 20.674f);
	func_31(-1686.893f, -1156.715f, 20.9358f);
	func_31(-1689.116f, -1155.455f, 21.1866f);
	func_31(-1691.256f, -1153.845f, 21.4132f);
	func_31(-1693.259f, -1151.858f, 21.6023f);
	func_31(-1695.072f, -1149.467f, 21.7407f);
	func_31(-1696.551f, -1146.853f, 21.8203f);
	func_31(-1697.635f, -1144.237f, 21.8563f);
	func_31(-1698.362f, -1141.636f, 21.8562f);
	func_31(-1698.763f, -1139.082f, 21.8259f);
	func_31(-1698.866f, -1136.601f, 21.7715f);
	func_31(-1698.701f, -1134.224f, 21.6989f);
	func_31(-1698.297f, -1131.982f, 21.6144f);
	func_31(-1697.682f, -1129.901f, 21.5238f);
	func_31(-1696.888f, -1128.012f, 21.4334f);
	func_31(-1695.943f, -1126.344f, 21.349f);
	func_31(-1694.799f, -1124.871f, 21.2657f);
	func_31(-1693.095f, -1123.239f, 21.119f);
	func_31(-1691.154f, -1121.899f, 20.981f);
	func_31(-1689.025f, -1120.886f, 20.8585f);
	func_31(-1686.762f, -1120.225f, 20.7582f);
	func_31(-1684.423f, -1119.934f, 20.6861f);
	func_31(-1682.068f, -1120.019f, 20.6475f);
	func_31(-1679.757f, -1120.477f, 20.6471f);
	func_31(-1677.549f, -1121.297f, 20.6883f);
	func_31(-1675.502f, -1122.458f, 20.7732f);
	func_31(-1673.668f, -1123.928f, 20.9032f);
	func_31(-1672.092f, -1125.669f, 21.0783f);
	func_31(-1670.814f, -1127.635f, 21.2971f);
	func_31(-1669.866f, -1129.775f, 21.5574f);
	func_31(-1669.27f, -1132.034f, 21.8556f);
	func_31(-1669.038f, -1134.355f, 22.1878f);
	func_31(-1669.175f, -1136.681f, 22.5487f);
	func_31(-1669.676f, -1138.953f, 22.9324f);
	func_31(-1670.528f, -1141.116f, 23.3331f);
	func_31(-1671.709f, -1143.117f, 23.7443f);
	func_31(-1673.19f, -1144.908f, 24.1589f);
	func_31(-1674.938f, -1146.445f, 24.5706f);
	func_31(-1676.906f, -1147.688f, 24.9723f);
	func_31(-1679.051f, -1148.605f, 25.3575f);
	func_31(-1681.317f, -1149.174f, 25.7202f);
	func_31(-1683.65f, -1149.377f, 26.0545f);
	func_31(-1685.991f, -1149.208f, 26.3554f);
	func_31(-1688.28f, -1148.664f, 26.6179f);
	func_31(-1690.457f, -1147.763f, 26.839f);
	func_31(-1692.464f, -1146.523f, 27.0161f);
	func_31(-1694.252f, -1144.976f, 27.1481f);
	func_31(-1695.768f, -1143.161f, 27.2346f);
	func_31(-1696.975f, -1141.127f, 27.2771f);
	func_31(-1697.84f, -1138.925f, 27.2778f);
	func_31(-1698.343f, -1136.614f, 27.2402f);
	func_31(-1698.466f, -1134.255f, 27.1688f);
	func_31(-1698.212f, -1131.907f, 27.0692f);
	func_31(-1697.585f, -1129.633f, 26.9473f);
	func_31(-1696.603f, -1127.482f, 26.7859f);
	func_31(-1695.289f, -1125.519f, 26.5684f);
	func_31(-1693.684f, -1123.795f, 26.2981f);
	func_31(-1691.833f, -1122.354f, 25.9974f);
	func_31(-1689.777f, -1121.226f, 25.6751f);
	func_31(-1687.713f, -1120.211f, 25.2977f);
	func_31(-1685.634f, -1119.26f, 24.7922f);
	func_31(-1683.51f, -1118.348f, 24.1724f);
	func_31(-1681.371f, -1117.453f, 23.4526f);
	func_31(-1679.248f, -1116.55f, 22.6476f);
	func_31(-1677.17f, -1115.614f, 21.7713f);
	func_31(-1675.14f, -1114.667f, 20.8298f);
	func_31(-1673.202f, -1113.769f, 19.8983f);
	func_31(-1671.307f, -1112.867f, 19.0396f);
	func_31(-1669.394f, -1111.905f, 18.3093f);
	func_31(-1667.402f, -1110.821f, 17.7619f);
	func_31(-1665.336f, -1109.608f, 17.4552f);
	func_31(-1663.536f, -1108.452f, 17.3517f);
	func_31(-1661.669f, -1107.159f, 17.3564f);
	func_31(-1659.768f, -1105.758f, 17.4696f);
	func_31(-1657.862f, -1104.276f, 17.6914f);
	func_31(-1655.984f, -1102.739f, 18.0218f);
	func_31(-1654.165f, -1101.174f, 18.4604f);
	func_31(-1652.433f, -1099.61f, 19.0069f);
	func_31(-1650.78f, -1098.037f, 19.6917f);
	func_31(-1649.132f, -1096.398f, 20.453f);
	func_31(-1647.489f, -1094.706f, 21.0879f);
	func_31(-1645.845f, -1092.971f, 21.3809f);
	func_31(-1644.2f, -1091.197f, 21.0723f);
	func_31(-1642.623f, -1089.434f, 20.123f);
	func_31(-1641.134f, -1087.733f, 18.9288f);
	func_31(-1639.768f, -1086.149f, 17.8822f);
	func_31(-1638.441f, -1084.604f, 17.2995f);
	func_31(-1636.935f, -1082.814f, 17.1529f);
	func_31(-1635.397f, -1080.972f, 17.1524f);
	func_31(-1633.897f, -1079.234f, 17.1531f);
	func_31(-1632.36f, -1077.393f, 17.1529f);
	func_31(-1631.046f, -1075.816f, 17.1529f);
	func_31(-1629.509f, -1073.975f, 17.1526f);
	func_31(-1628.196f, -1072.4f, 17.1529f);
	func_31(-1626.819f, -1070.732f, 17.4133f);
	func_31(-1625.401f, -1069.021f, 17.9281f);
	func_31(-1623.926f, -1067.252f, 18.5038f);
	func_31(-1622.451f, -1065.482f, 19.0797f);
	func_31(-1620.975f, -1063.712f, 19.6554f);
	func_31(-1619.5f, -1061.943f, 20.2312f);
	func_31(-1618.024f, -1060.173f, 20.8071f);
	func_31(-1616.489f, -1058.332f, 21.2475f);
	func_31(-1614.941f, -1056.539f, 21.564f);
	func_31(-1613.163f, -1054.989f, 21.7555f);
	func_31(-1611.103f, -1053.833f, 21.9471f);
	func_31(-1608.837f, -1053.192f, 22.1368f);
	func_31(-1606.488f, -1053.012f, 22.3259f);
	func_31(-1604.152f, -1053.35f, 22.5146f);
	func_31(-1601.952f, -1054.192f, 22.7019f);
	func_31(-1599.962f, -1055.453f, 22.8885f);
	func_31(-1598.318f, -1057.143f, 23.0742f);
	func_31(-1597.06f, -1059.136f, 23.2587f);
	func_31(-1596.231f, -1061.343f, 23.4426f);
	func_31(-1595.945f, -1063.68f, 23.6253f);
	func_31(-1596.129f, -1066.029f, 23.8069f);
	func_31(-1596.815f, -1068.28f, 23.9876f);
	func_31(-1597.986f, -1070.323f, 24.167f);
	func_31(-1599.539f, -1072.095f, 24.3456f);
	func_31(-1601.453f, -1073.462f, 24.5229f);
	func_31(-1603.615f, -1074.397f, 24.6991f);
	func_31(-1605.916f, -1074.88f, 24.8739f);
	func_31(-1608.272f, -1074.802f, 25.0476f);
	func_31(-1610.562f, -1074.259f, 25.2202f);
	func_31(-1612.68f, -1073.243f, 25.3914f);
	func_31(-1614.518f, -1071.77f, 25.5611f);
	func_31(-1616.027f, -1069.961f, 25.7295f);
	func_31(-1617.085f, -1067.866f, 25.8962f);
	func_31(-1617.675f, -1065.586f, 26.0615f);
	func_31(-1617.801f, -1063.243f, 26.2248f);
	func_31(-1617.36f, -1060.927f, 26.3871f);
	func_31(-1616.468f, -1058.749f, 26.5474f);
	func_31(-1615.142f, -1056.816f, 26.7056f);
	func_31(-1613.403f, -1055.226f, 26.8622f);
	func_31(-1611.382f, -1054.014f, 27.0169f);
	func_31(-1609.158f, -1053.292f, 27.1687f);
	func_31(-1606.81f, -1053.063f, 27.3184f);
	func_31(-1604.463f, -1053.302f, 27.4662f);
	func_31(-1602.257f, -1054.092f, 27.6101f);
	func_31(-1600.243f, -1055.312f, 27.7515f);
	func_31(-1598.541f, -1056.919f, 27.8892f);
	func_31(-1597.239f, -1058.884f, 28.0238f);
	func_31(-1596.357f, -1061.07f, 28.154f);
	func_31(-1595.99f, -1063.383f, 28.2781f);
	func_31(-1596.127f, -1065.735f, 28.3966f);
	func_31(-1596.732f, -1068.018f, 28.5072f);
	func_31(-1597.858f, -1070.078f, 28.6005f);
	func_31(-1599.33f, -1071.968f, 28.6213f);
	func_31(-1600.886f, -1073.818f, 28.4356f);
	func_31(-1602.445f, -1075.671f, 27.9888f);
	func_31(-1604.088f, -1077.617f, 27.4895f);
	func_31(-1605.422f, -1079.2f, 27.0316f);
	func_31(-1606.93f, -1080.994f, 26.878f);
	func_31(-1608.35f, -1082.681f, 26.9447f);
	func_31(-1609.353f, -1083.874f, 27.4738f);
	func_31(-1611.127f, -1085.98f, 28.7125f);
	func_31(-1612.731f, -1087.885f, 29.8581f);
	func_31(-1614.073f, -1089.48f, 30.4043f);
	func_31(-1614.825f, -1090.372f, 30.4459f);
	func_31(-1615.627f, -1091.327f, 30.3721f);
	func_31(-1616.686f, -1092.589f, 30.0253f);
	func_31(-1617.414f, -1093.462f, 29.5944f);
	func_31(-1618.748f, -1095.055f, 28.8046f);
	func_31(-1620.603f, -1097.274f, 27.7044f);
	func_31(-1622.873f, -1099.989f, 26.3576f);
	func_31(-1624.088f, -1101.44f, 25.6371f);
	func_31(-1625.373f, -1102.978f, 24.8741f);
	func_31(-1626.722f, -1104.591f, 24.0733f);
	func_31(-1628.125f, -1106.27f, 23.2405f);
	func_31(-1629.573f, -1108.003f, 22.3803f);
	func_31(-1631.06f, -1109.78f, 21.4979f);
	func_31(-1632.574f, -1111.592f, 20.5988f);
	func_31(-1634.109f, -1113.427f, 19.6878f);
	func_31(-1635.654f, -1115.276f, 18.7701f);
	func_31(-1636.903f, -1116.767f, 18.0427f);
	func_31(-1638.121f, -1118.224f, 17.4692f);
	func_31(-1639.578f, -1119.969f, 17.089f);
	func_31(-1641.219f, -1121.927f, 16.8752f);
}

void func_31(float fParam0, float fParam1, float fParam2)
{
	vLocal_159[(0x000000E9 - iLocal_161) /*3*/] = fParam0;
	vLocal_159[(0x000000E9 - iLocal_161) /*3*/].f_1 = fParam1;
	vLocal_159[(0x000000E9 - iLocal_161) /*3*/].f_2 = fParam2;
	iLocal_161++;
}

void func_32(int iParam0)
{
	if (iParam0 > 0x00000000)
	{
	}
}

void func_33(int iParam0, float fParam1, int iParam2)
{
	if (iLocal_193 >= vLocal_192.x)
	{
		vLocal_192[(vLocal_192.x - 0x00000001) /*3*/] = 0x000000E8;
		vLocal_192[(vLocal_192.x - 0x00000001) /*3*/].f_1 = 0.01f;
		vLocal_192[(vLocal_192.x - 0x00000001) /*3*/].f_2 = 0x00000000;
		return;
	}
	vLocal_192[iLocal_193 /*3*/] = (iParam0 + iLocal_194);
	if (vLocal_192[iLocal_193 /*3*/] >= 0x000000EA)
	{
		vLocal_192[iLocal_193 /*3*/] = 0x000000E9;
	}
	vLocal_192[iLocal_193 /*3*/].f_1 = fParam1;
	vLocal_192[iLocal_193 /*3*/].f_2 = iParam2;
	iLocal_193++;
}

void func_34(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_35(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_35(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = 0x00000000;
	}
	bVar2 = 0x00000001;
	iVar3 = 0x00000000;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
			iVar3 = 0x00000001;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (bParam10)
			{
				func_48(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam1, fParam2, 0x00000000, 0x00000001, 0x00000000))
			{
				bVar1 = 0x00000001;
			}
			else
			{
				vVar6 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_46(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = 0x00000001;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, joaat("taxi")))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001) < 20f)
						{
							bVar1 = 0x00000001;
							bVar2 = 0x00000000;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_37(iVar0, func_39(), 0x00000001))
				{
					bVar1 = 0x00000000;
				}
			}
			if (bVar1)
			{
				if (!func_36(vParam5))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						iVar7 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar5);
						if (unk_0xAFB8495D36825275(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = 0x00000000;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = 0x00000000;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = 0x00000000;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam3, 5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam4);
						unk_0xA47B46945FF6DE74(iVar0, vParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
						if (bParam9)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, 0x00000000, 0x00000001, 0x00000000);
							unk_0x05CA0E7946B27A19(iVar0, 0x00000001);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 0x00000001))
						{
							unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000001);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x10F452EDECF82313(vParam0, vParam1, fParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (iVar3 == 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
			}
			iVar8 = unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
			{
				unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
			iVar9 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar9 <= 0x00000002)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			if (iVar9 <= 0x00000004)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000001, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000002, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_36(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_38(iParam1, iVar0, &sVar1, &iVar2))
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

int func_38(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_39()
{
	func_40();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_40()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_44(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_43(unk_0x16F2683693E537C9());
			if (func_42(iVar0) && (!func_41(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_42(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_41(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_42(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_44(int iParam0)
{
	if (func_42(iParam0))
	{
		return func_45(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_45(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_46(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_4(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var7, &Var8);
		vVar6[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_47(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar3) || func_47(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar3, vVar5)) || func_47(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar4, vVar5)) || func_47(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar4)) || func_47(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar3)) || func_47(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar3, vVar5)) || func_47(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar4, vVar5)) || func_47(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar4)) || func_47(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar3)) || func_47(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar3, vVar5)) || func_47(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar4, vVar5)) || func_47(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar4)) || func_47(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar3)) || func_47(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar3, vVar5)) || func_47(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar4, vVar5)) || func_47(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_47(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_48(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 0x000000C8)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

int func_49(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var0, &Var1);
	unk_0xA6B02C1DB14DDA13(iParam1, &Var2, &Var3);
	if (unk_0x755FF954DAE327E1((Var1 - Var0)) > unk_0x755FF954DAE327E1((Var3 - Var2)))
	{
		return 0x00000000;
	}
	if (unk_0x755FF954DAE327E1((Var1.f_1 - Var0.f_1)) > unk_0x755FF954DAE327E1((Var3.f_1 - Var2.f_1)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C0640BA9A7327B3() > uParam0->f_74 || uParam0->f_74 == 0x00000000)
	{
		if (uParam0->f_73 < *uParam0)
		{
			func_52(uParam0, uParam0->f_73);
			uParam0->f_73++;
		}
		uParam0->f_74 = unk_0x1C0640BA9A7327B3() + 32;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_51(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 == *uParam0;
}

int func_51(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	if ((*uParam0)[iParam1 /*7*/] == 0x00000000)
	{
		return 0x00000001;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1))
	{
		return 0x00000000;
	}
	if (unk_0x1C0640BA9A7327B3() > (uParam0[iParam1 /*7*/])->f_6)
	{
		uParam0->f_75 = 0x00000001;
		return 0x00000001;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000000:
			return 0x00000001;
		
		case 0x00000001:
			if (!unk_0xC528DF93B7EC4D04((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (!unk_0xB4AE0788C1587752((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (!unk_0xDF3FDDA1EADEDD07((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			if (!unk_0xAE317D00A5A55DF6((uParam0[iParam1 /*7*/])->f_3, 0x00000000, 0xFFFFFFFF))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (!unk_0xE3934829A331AF92((uParam0[iParam1 /*7*/])->f_3, 0x00000000))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (!unk_0xB87F6CF6E5628C67((uParam0[iParam1 /*7*/])->f_1))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (!unk_0x25F7A4D42AF2AB93())
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000008:
			if (!unk_0x67C1D9E5B91B2E37((uParam0[iParam1 /*7*/])->f_5))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000009:
			if (!unk_0x27117E2CDD4D67C3((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000A:
			if (!unk_0x3DDA6C6A285628E4((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000B:
			if (!unk_0x1C2E18E9C63BEB77((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000C:
			if (!unk_0x1787731C4D1D6B19((uParam0[iParam1 /*7*/])->f_2))
			{
				return 0x00000000;
			}
			break;
		
		default:
			return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(uParam0->f_72), iParam1);
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	return 0x00000001;
}

int func_52(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1) || unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000001:
			unk_0xCBE9833C2148CAFF((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x00000002:
			unk_0x3F423BF5B8125A50((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x00000003:
			unk_0x4942FBD1EF896E39((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x00000004:
			unk_0xAE317D00A5A55DF6((uParam0[iParam1 /*7*/])->f_3, 0x00000000, 0xFFFFFFFF);
			break;
		
		case 0x00000005:
			unk_0xE3934829A331AF92((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_4);
			break;
		
		case 0x00000006:
			unk_0x523BCC9DC80CD82F((uParam0[iParam1 /*7*/])->f_1);
			break;
		
		case 0x00000007:
			unk_0x9E5E60D8C63FD9D1();
			break;
		
		case 0x00000008:
			unk_0xD7992BEF7A9D109E((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_5);
			break;
		
		case 0x00000009:
			unk_0x0D3BE1DE0262A012((uParam0[iParam1 /*7*/])->f_3, 0x00000000);
			break;
		
		case 0x0000000A:
			unk_0x36187931D29E5BBE((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x0000000B:
			unk_0x29398344B9E5B8A7((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x0000000C:
			unk_0x6D0C93EE4FBA9307((uParam0[iParam1 /*7*/])->f_2, 0x0000001F, 0x00000000);
			break;
		
		default:
			return 0x00000000;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	uParam0->f_75 = 0x00000000;
	(uParam0[iParam1 /*7*/])->f_6 = unk_0x1C0640BA9A7327B3() + 10000;
	unk_0x5D96D8530B3D0904(&(uParam0->f_71), iParam1);
	return 0x00000001;
}

void func_53()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
}

int func_54(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1) || unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000000;
	}
	func_55(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 0x00000006;
	(uParam0[iParam1 /*7*/])->f_1 = iParam2;
	return 0x00000001;
}

void func_55(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
}

bool func_56(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_57(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (unk_0xE1DBBD6CE209517C(iVar0))
	{
		func_177(0x00000000);
		if (bParam7)
		{
			unk_0x26E2E2345FB3D358(unk_0xA30EC016B12C03E4(), 0x00000001);
		}
		if (bParam6)
		{
			switch (func_39())
			{
				case 0x00000000:
					if (func_176(unk_0x16F2683693E537C9(), 0x00000008, 0x0000000F))
					{
						func_61(unk_0x16F2683693E537C9(), 0x00000008, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_176(unk_0x16F2683693E537C9(), 0x00000009, 0x00000006))
					{
						func_61(unk_0x16F2683693E537C9(), 0x00000009, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (func_176(unk_0x16F2683693E537C9(), 0x00000008, 0x00000001) || func_176(unk_0x16F2683693E537C9(), 0x00000008, 0x0000000A))
					{
						func_61(unk_0x16F2683693E537C9(), 0x00000008, 0x0000001A, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					if (func_176(unk_0x16F2683693E537C9(), 0x00000008, 0x00000004))
					{
						func_61(unk_0x16F2683693E537C9(), 0x00000008, 0x0000000F, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				}
		}
		if (iParam4 == 0x00000001)
		{
			unk_0x745CE398A4B0A3C6(func_60(unk_0xA30EC016B12C03E4()), 50f, 0x00000000);
		}
		if (iParam5 == 0x00000001)
		{
			unk_0x75CFD6AD66ADFDD1(vParam0, 30f, 0x00000000);
		}
		if (bParam8)
		{
			unk_0x7800CEC090C01D4D(vParam0, 30f);
		}
		unk_0x679C321F8CAA2CFA(vParam0, 30f, 0x00000000);
		unk_0x67F91979413C5D76(iVar0, 0x00000000, 0x00000000);
		unk_0x56EA5D248F36A081(iVar0, 0x00000000);
		unk_0xBC03DF6093E8E71F(iVar0, 0x00000001);
		if (bParam10)
		{
			unk_0xBFE31971E49FA500(0x00000000);
			unk_0x8BCB70EB440DED83(0x00000000);
		}
		unk_0x790015DC92C918E2();
		if (iParam9 == 0x00000001)
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		if (iParam1 == 0x00000001)
		{
			unk_0x5413873D3F67BF93(0x00000001, 0x00000000);
		}
		if (iParam2 == 0x00000001)
		{
			iLocal_39 = 0x00000000;
			if (func_59(unk_0x16F2683693E537C9()))
			{
				iLocal_39 = unk_0x78CE7F4A02231950(unk_0x16F2683693E537C9());
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
			}
		}
		if (iParam3 == 0x00000001)
		{
			func_58(0x000001F4, 0x00000000);
		}
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

int func_59(int iParam0)
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

Vector3 func_60(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == 0xFFFFFF9D)
	{
		return 0x00000000;
	}
	Global_12A90++;
	iVar5 = 0xFFFFFF9D;
	iVar6 = 0xFFFFFF9D;
	iVar7 = 0xFFFFFF9D;
	iVar8 = 0xFFFFFF9D;
	iVar9 = 0xFFFFFF9D;
	iVar10 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam5 == 0x00000000)
	{
		Global_12A92[0x00000001 /*14*/] = { func_112(iVar10, iParam1, iParam2, 0xFFFFFFFF) };
		if (!func_111(iParam3))
		{
			Global_12A90 = (Global_12A90 - 0x00000001);
			return 0x00000000;
		}
		func_103(iParam1);
	}
	if (iParam1 == 0x0000000C)
	{
		if (iParam7 == 0x00000001)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_101(iParam0, 0x00000008);
				if (iVar5 != 0x00000009)
				{
					iVar5 = 0xFFFFFF9D;
				}
			}
			iVar6 = func_101(iParam0, 0x00000009);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 0x00000009 && iVar6 <= 0x0000000E)
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 0x00000005 && iVar6 <= 0x0000000A)
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 0x00000009 && iVar6 <= 0x0000000E) || (iVar6 >= 0x0000000F && iVar6 <= 0x00000010))
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			iVar7 = func_100(iParam0, 0x00000001);
			if (!func_99(iVar10, 0x0000000E, iVar7, 0xFFFFFFFF))
			{
				iVar7 = 0xFFFFFF9D;
			}
			iVar8 = func_100(iParam0, 0x00000000);
			if (!func_98(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF) && !func_97(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF))
			{
				iVar8 = 0xFFFFFF9D;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_100(iParam0, 0x00000002);
			}
		}
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar11 = 0x0000000F;
		if (iParam5 == 0x00000001)
		{
			uVar11 = { Global_12ABD };
		}
		else
		{
			uVar11 = { func_93(iVar10, iParam2) };
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000E)
		{
			if (uVar11[iVar0] != 0xFFFFFF9D)
			{
				Global_12A92[0x00000001 /*14*/] = { func_112(iVar10, iVar0, uVar11[iVar0], 0xFFFFFFFF) };
				if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
				{
					if (iVar0 == 0x0000000D)
					{
						uVar12 = 0x00000009;
						if (iParam5 == 0x00000001)
						{
							uVar12 = { Global_12ACE };
						}
						else
						{
							uVar12 = { func_90(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0x00000000;
						while (iVar1 <= 0x00000008)
						{
							Global_12A92[0x00000001 /*14*/] = { func_112(iVar10, 0x0000000E, uVar12[iVar1], 0xFFFFFFFF) };
							func_81(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
							func_103(0x0000000E);
							if (Global_12A90 == 0x00000001)
							{
								iVar2 = 0x00000000;
								while (iVar2 < 0x0000000F)
								{
									iVar3 = func_73(iParam0, iVar10, 0x0000000E, uVar12[iVar1], iVar2, 0x00000000);
									if (iVar3 != 0xFFFFFF9D)
									{
										func_61(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 0x0000000E && iVar0 != 0x0000000C)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 0x00000002) && uVar11[iVar0] == 0x00000014)
						{
							func_72(iVar10, 0x00000002, 0x00000014, &iVar4);
						}
						if (iParam4 == 0xFFFFFFFF)
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_71(iVar0), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_71(iVar0)));
						}
						else
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_71(iVar0), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, iParam4);
						}
						func_103(iVar0);
						if (Global_12A90 == 0x00000001)
						{
							iVar2 = 0x00000000;
							while (iVar2 < 0x0000000F)
							{
								iVar3 = func_73(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0x00000000);
								if (iVar3 != 0xFFFFFF9D)
								{
									func_61(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 0x0000000C && iVar0 != 0x0000000E)
			{
				Global_12A92[0x00000001 /*14*/] = { func_112(iVar10, iVar0, func_70(iParam0, iVar0, 0xFFFFFFFF), 0xFFFFFFFF) };
				if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000003))
				{
					if (iVar0 == 0x00000002)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_69(iParam0, iVar10, &iVar4, 0x00000001))
							{
								func_61(iParam0, 0x00000002, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					else
					{
						uVar13 = { func_93(iVar10, 0x00000000) };
						func_61(iParam0, iVar0, uVar13[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 0x00000001)
		{
			Var14 = { func_112(iVar10, 0x00000008, iVar5, 0xFFFFFFFF) };
			if (iVar5 != 0xFFFFFF9D)
			{
				if (func_67(iVar10, iParam2, 0x00000008, iVar5, &uVar11, &Var14))
				{
					func_61(iParam0, 0x00000008, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_112(iVar10, 0x00000009, iVar6, 0xFFFFFFFF) };
			if (iVar6 != 0xFFFFFF9D)
			{
				if (func_67(iVar10, iParam2, 0x00000009, iVar6, &uVar11, &Var14))
				{
					func_61(iParam0, 0x00000009, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_112(iVar10, 0x0000000E, iVar7, 0xFFFFFFFF) };
			if (iVar7 != 0xFFFFFF9D)
			{
				if (func_67(iVar10, iParam2, 0x0000000E, iVar7, &uVar11, &Var14))
				{
					func_61(iParam0, 0x0000000E, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_112(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF) };
			if (iVar8 != 0xFFFFFF9D)
			{
				if (func_67(iVar10, iParam2, 0x0000000E, iVar8, &uVar11, &Var14))
				{
					func_61(iParam0, 0x0000000E, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_112(iVar10, 0x0000000E, iVar9, 0xFFFFFFFF) };
			if (iVar9 != 0xFFFFFF9D)
			{
				if (func_67(iVar10, iParam2, 0x0000000E, iVar9, &uVar11, &Var14))
				{
					func_61(iParam0, 0x0000000E, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
		}
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar15 = { func_90(iVar10, iParam2) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			Global_12A92[0x00000001 /*14*/] = { func_112(iVar10, 0x0000000E, uVar15[iVar1], 0xFFFFFFFF) };
			func_81(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
			func_103(0x0000000E);
			if (Global_12A90 == 0x00000001)
			{
				iVar2 = 0x00000000;
				while (iVar2 < 0x0000000F)
				{
					iVar3 = func_73(iParam0, iVar10, 0x0000000E, uVar15[iVar1], iVar2, 0x00000000);
					if (iVar3 != 0xFFFFFF9D)
					{
						func_61(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 0x0000000E)
	{
		func_81(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
		func_103(iParam1);
		if (Global_12A90 == 0x00000001)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000F)
			{
				iVar3 = func_73(iParam0, iVar10, iParam1, iParam2, iVar2, 0x00000000);
				if (iVar3 != 0xFFFFFF9D)
				{
					func_61(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_71(iParam1), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_71(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_71(iParam1), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, iParam4);
		}
		if (Global_12A90 == 0x00000001)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000F)
			{
				iVar3 = func_73(iParam0, iVar10, iParam1, iParam2, iVar2, 0x00000000);
				if (iVar3 != 0xFFFFFF9D)
				{
					func_61(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0x00000000)
		{
			func_64(iVar10, iParam1, iParam2);
		}
	}
	if (Global_12A90 == 0x00000001)
	{
		if (func_69(iParam0, iVar10, &iVar4, 0x00000000))
		{
			func_61(iParam0, 0x00000002, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
		if (func_62(iParam0, iVar10, &iVar4))
		{
			func_61(iParam0, 0x00000001, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	Global_12A90 = (Global_12A90 - 0x00000001);
	return 0x00000001;
}

int func_62(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_63(iParam1);
	if (Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F != 0xFFFFFF9D)
	{
		if (!func_176(iParam0, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F = 0xFFFFFF9D;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000000;
			break;
		
		case joaat("player_one"):
			return 0x00000001;
			break;
		
		case joaat("player_two"):
			return 0x00000002;
			break;
		
		default:
			break;
	}
	return 0x00000091;
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 0x00000005;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 0x00000002;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 0x00000004;
	}
	if (func_66(iParam0, 0x0000000C, iVar0))
	{
		if (func_65(iParam0, iParam1, iParam2))
		{
			iVar1 = func_63(iParam0);
			if (iParam1 == 0x00000003)
			{
				Global_1B416.f_936.f_21B.f_C4[iVar1] = iParam2;
			}
			else if (iParam1 == 0x00000004)
			{
				Global_1B416.f_936.f_21B.f_C8[iVar1] = iParam2;
			}
		}
	}
}

int func_65(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x0000002F && iParam2 <= 0x00000036)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x0000004D && iParam2 <= 0x00000054)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x0000000E && iParam2 <= 0x00000015)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x00000012 && iParam2 <= 0x0000001D)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x00000036 && iParam2 <= 0x00000045)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_66(int iParam0, int iParam1, int iParam2)
{
	Global_12A92[0x00000001 /*14*/] = { func_112(iParam0, iParam1, iParam2, 0xFFFFFFFF) };
	return unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000002);
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 0x00000001;
	}
	if (((*uParam4)[iParam2] == 0xFFFFFF9D && iParam2 != 0x0000000E) && iParam2 != 0x0000000D)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000D || (iParam2 == 0x0000000E && (*uParam4)[0x0000000D] == 0x0000001F))
	{
		if ((((((((iParam3 == 0x00000000 || iParam3 == 0x00000001) || iParam3 == 0x00000002) || iParam3 == 0x00000003) || iParam3 == 0x00000004) || iParam3 == 0x00000005) || iParam3 == 0x00000006) || iParam3 == 0x00000007) || iParam3 == 0x00000008)
		{
			return 0x00000001;
		}
	}
	if (iParam3 == 0xFFFFFF9D || uParam5->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000E)
	{
		uVar0 = { func_90(iParam0, (*uParam4)[0x0000000D]) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 0x00000001;
			}
			iVar1++;
		}
	}
	if (func_68(iParam0, iParam2, iParam3))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_99(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_98(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_97(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_99(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_98(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				if (iParam2 == 0x00000008)
				{
					if (iParam3 == 0x00000009)
					{
						if (iParam1 == 0x00000008 || iParam1 == 0x00000015)
						{
							return 0x00000001;
						}
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
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000001A)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x00000005 && iParam3 <= 0x0000000A)
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam2 == 0x0000000E)
			{
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x0000001A && iParam3 <= 0x00000027)
					{
						return 0x00000000;
					}
				}
			}
			return 0x00000001;
		}
		else if (func_97(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000003 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (iParam2 == 0x0000000E)
		{
			if (iParam3 >= 0x0000009F && iParam3 <= 0x000000AE)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x0000000E && iParam3 == 0x00000000)
			{
				return 0x00000001;
			}
		}
		if (func_99(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_98(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000000F)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_97(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x0000000F)
					{
						return 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000006)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000001 || iParam2 == 0x0000000A)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_63(iParam1);
	if (Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C != 0xFFFFFF9D)
	{
		if (!func_176(iParam0, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 0x00000001)
		{
			*iParam2 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C = 0xFFFFFF9D;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D = 0x00000002;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 == 0x0000000C)
		{
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000035)
			{
				if (func_176(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 0x0000000D)
		{
			iVar1 = 0x00000000;
			while (iVar1 <= 0x00000013)
			{
				if (func_176(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 0x0000001F;
		}
		else if (iParam1 == 0x0000000E)
		{
			if (iParam2 == 0xFFFFFFFF)
			{
			}
			else
			{
				return func_100(iParam0, iParam2);
			}
		}
		else
		{
			return func_101(iParam0, iParam1);
		}
	}
	return 0xFFFFFF9D;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
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
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000007 || iParam2 == 0x00000017)
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E))
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000002C && iParam2 <= 0x0000002F)
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x0000000E:
					if ((((((iParam2 >= 0x0000001F && iParam2 <= 0x00000020) || (iParam2 >= 0x00000021 && iParam2 <= 0x00000022)) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024)) || iParam2 == 0x00000025) || (iParam2 >= 0x00000028 && iParam2 <= 0x00000029)) || iParam2 == 0x0000002E)
					{
						*iParam3 = 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000002:
					if (iParam2 == 0x00000014)
					{
						*iParam3 = 0x00000014;
					}
					break;
				
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x00000009:
					if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000002F && iParam2 <= 0x00000032)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x0000000E:
					if (((((iParam2 >= 0x0000001A && iParam2 <= 0x0000001B) || (iParam2 >= 0x0000001C && iParam2 <= 0x0000001D)) || (iParam2 >= 0x0000001E && iParam2 <= 0x0000001F)) || iParam2 == 0x00000020) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024))
					{
						*iParam3 = 0x00000013;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000007)
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x00000009:
					if ((iParam2 >= 0x00000009 && iParam2 <= 0x0000000E) || (iParam2 >= 0x0000000F && iParam2 <= 0x00000010))
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000001D && iParam2 <= 0x00000020)
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x0000000E:
					if ((((((iParam2 >= 0x0000002F && iParam2 <= 0x00000030) || (iParam2 >= 0x00000031 && iParam2 <= 0x00000032)) || (iParam2 >= 0x00000033 && iParam2 <= 0x00000034)) || iParam2 == 0x00000035) || (iParam2 >= 0x00000038 && iParam2 <= 0x00000039)) || iParam2 == 0x0000003E)
					{
						*iParam3 = 0x00000002;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 0xFFFFFF9D)
	{
		iVar0 = func_63(iParam0);
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = 0xFFFFFF9D;
	if (iParam4 == 0x00000000)
	{
		switch (iParam2)
		{
			case 0x00000002:
				iVar1 = func_101(iParam0, 0x00000001);
				iVar0 = func_80(iParam1, iParam3, iVar1);
				break;
			
			case 0x00000001:
				iVar2 = func_101(iParam0, 0x00000002);
				iVar0 = func_80(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 0x00000002)
	{
		func_72(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 0x00000001)
	{
		func_79(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 0x00000006)
	{
		if (iParam2 == 0x00000004)
		{
			if (func_78(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 0x00000003:
						switch (iParam2)
						{
							case 0x0000000A:
								switch (iParam3)
								{
									case 0x00000024:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000025:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000026:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000027:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000028:
										iVar0 = 0x00000013;
										break;
									
									case 0x00000029:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000002A:
										iVar0 = 0x00000014;
										break;
									
									case 0x0000002B:
										iVar0 = 0x00000014;
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 >= 0x00000002 && iParam3 <= 0x00000007)
								{
									if (!func_77(iParam0, 0x00000003, 0x0000002C, 0x0000003B))
									{
										iVar0 = 0x0000002C;
									}
								}
								else if (((iParam3 >= 0x00000008 && iParam3 <= 0x00000011) || (iParam3 >= 0x00000012 && iParam3 <= 0x0000001B)) || (iParam3 >= 0x0000001C && iParam3 <= 0x0000002B))
								{
									if (!func_77(iParam0, 0x00000003, 0x00000087, 0x00000096))
									{
										iVar0 = func_76(iParam1, 0x00000003, 0x00000087, 0x00000096);
									}
								}
								break;
						}
						break;
					
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x0000003F:
										iVar0 = 0x00000004;
										break;
									
									case 0x0000003D:
										iVar0 = 0x00000003;
										break;
									
									case 0x00000010:
										iVar0 = 0x00000001;
										break;
									
									case 0x00000072:
										iVar0 = 0x0000000F;
										break;
									
									case 0x00000073:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000074:
										iVar0 = 0x00000010;
										break;
									
									case 0x00000075:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000076:
										iVar0 = 0x00000014;
										break;
									
									case 0x00000077:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000007D:
										iVar0 = 0x00000015;
										break;
									
									case 0x00000078:
										iVar0 = 0x00000016;
										break;
									
									case 0x0000007C:
										iVar0 = 0x00000017;
										break;
									
									case 0x0000007E:
										iVar0 = 0x00000018;
										break;
									
									case 0x00000079:
										iVar0 = 0x00000019;
										break;
									
									case 0x0000007F:
										iVar0 = 0x0000001A;
										break;
									
									case 0x00000080:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000055:
										iVar0 = 0x00000006;
										break;
									
									case 0x0000004D:
										iVar0 = 0x00000007;
										break;
									
									case 0x0000004E:
										iVar0 = 0x00000008;
										break;
									
									case 0x0000004F:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000050:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000051:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000052:
										iVar0 = 0x0000000C;
										break;
									
									case 0x00000053:
										iVar0 = 0x0000000D;
										break;
									
									case 0x00000054:
										iVar0 = 0x0000000E;
										break;
									
									case 0x00000015:
										iVar0 = 0x0000001F;
										break;
									
									case 0x00000016:
										iVar0 = 0x0000001E;
										break;
									
									case 0x00000017:
										iVar0 = 0x0000001D;
										break;
									
									case 0x00000018:
										iVar0 = 0x0000001C;
										break;
									
									case 0x00000019:
										iVar0 = 0x00000021;
										break;
									
									case 0x0000001A:
										iVar0 = 0x00000023;
										break;
									
									case 0x0000001B:
										iVar0 = 0x00000022;
										break;
									
									case 0x0000001C:
										iVar0 = 0x00000020;
										break;
									
									default:
										if (iParam3 >= 0x00000011 && iParam3 <= 0x00000014)
										{
										}
										else
										{
											iVar0 = 0x00000000;
										}
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 != 0x00000000)
								{
									iVar0 = 0x00000000;
								}
								break;
						}
						break;
					
					case 0x0000000B:
						if (iParam2 == 0x00000003)
						{
							if ((iParam3 >= 0x0000002C && iParam3 <= 0x0000003B) || (iParam3 >= 0x00000087 && iParam3 <= 0x00000096))
							{
							}
							else
							{
								iVar0 = 0x00000000;
							}
						}
						else if (iParam2 == 0x0000000A)
						{
							if (iParam3 >= 0x00000024 && iParam3 <= 0x0000002B)
							{
								iVar0 = 0x00000000;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x00000011:
										iVar0 = 0x00000002;
										break;
									
									case 0x0000005A:
										iVar0 = 0x00000001;
										break;
									
									case 0x0000010C:
										iVar0 = 0x00000003;
										break;
									
									case 0x0000010D:
										iVar0 = 0x00000005;
										break;
									
									case 0x0000010E:
										iVar0 = 0x00000004;
										break;
									
									case 0x0000010F:
										iVar0 = 0x00000006;
										break;
									
									case 0x00000110:
										iVar0 = 0x00000008;
										break;
									
									case 0x00000111:
										iVar0 = 0x00000007;
										break;
									
									case 0x00000117:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000112:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000116:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000118:
										iVar0 = 0x0000000C;
										break;
									
									case 0x00000113:
										iVar0 = 0x0000000D;
										break;
									
									case 0x00000119:
										iVar0 = 0x0000000E;
										break;
									
									case 0x0000011A:
										iVar0 = 0x0000000F;
										break;
									
									case 0x0000006B:
										iVar0 = 0x00000010;
										break;
									
									case 0x0000006C:
										iVar0 = 0x00000011;
										break;
									
									case 0x0000006D:
										iVar0 = 0x00000012;
										break;
									
									case 0x0000006E:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000006F:
										iVar0 = 0x00000014;
										break;
									
									case 0x00000070:
										iVar0 = 0x00000015;
										break;
									
									case 0x00000071:
										iVar0 = 0x00000016;
										break;
									
									case 0x00000072:
										iVar0 = 0x00000017;
										break;
									
									case 0x00000073:
										iVar0 = 0x00000018;
										break;
									
									case 0x00000074:
										iVar0 = 0x00000019;
										break;
									
									case 0x00000075:
										iVar0 = 0x00000034;
										break;
									
									case 0x00000076:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000077:
										iVar0 = 0x0000001C;
										break;
									
									case 0x00000078:
										iVar0 = 0x0000001D;
										break;
									
									case 0x00000079:
										iVar0 = 0x0000001E;
										break;
									
									case 0x0000007A:
										iVar0 = 0x0000001F;
										break;
									
									case 0x00000128:
										iVar0 = 0x00000020;
										break;
									
									case 0x00000129:
										iVar0 = 0x00000021;
										break;
									
									case 0x0000012A:
										iVar0 = 0x00000022;
										break;
									
									case 0x0000012B:
										iVar0 = 0x00000023;
										break;
									
									case 0x0000012C:
										iVar0 = 0x00000024;
										break;
									
									case 0x0000012D:
										iVar0 = 0x00000025;
										break;
									
									case 0x0000012E:
										iVar0 = 0x00000026;
										break;
									
									case 0x00000135:
										iVar0 = 0x00000027;
										break;
									
									case 0x00000136:
										iVar0 = 0x00000028;
										break;
									
									case 0x00000137:
										iVar0 = 0x00000029;
										break;
									
									case 0x00000138:
										iVar0 = 0x0000002A;
										break;
									
									case 0x00000139:
										iVar0 = 0x0000002B;
										break;
									
									case 0x0000013A:
										iVar0 = 0x0000002C;
										break;
									
									case 0x0000013B:
										iVar0 = 0x0000002D;
										break;
									
									case 0x0000013C:
										iVar0 = 0x0000002E;
										break;
									
									case 0x0000013D:
										iVar0 = 0x00000033;
										break;
									
									default:
										iVar0 = 0x00000000;
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 != 0x00000000)
								{
									iVar0 = 0x00000000;
								}
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam2)
						{
							case 0x0000000B:
								if (iParam3 >= 0x0000002F && iParam3 <= 0x0000003E)
								{
									if (!func_77(iParam0, 0x00000003, 0x000000D1, 0x000000DE))
									{
										iVar0 = func_76(iParam1, 0x00000003, 0x000000D1, 0x000000DE);
									}
								}
								else if ((iParam3 >= 0x00000001 && iParam3 <= 0x00000004) || (iParam3 >= 0x00000005 && iParam3 <= 0x00000008))
								{
									if (!func_77(iParam0, 0x00000003, 0x000000F3, 0x00000102))
									{
										if (iParam3 == 0x00000001 || iParam3 == 0x00000005)
										{
											iVar0 = func_76(iParam1, 0x00000003, 0x000000F3, 0x000000F6);
										}
										else if (iParam3 == 0x00000002 || iParam3 == 0x00000006)
										{
											iVar0 = func_76(iParam1, 0x00000003, 0x000000F7, 0x000000FA);
										}
										else if (iParam3 == 0x00000003 || iParam3 == 0x00000007)
										{
											iVar0 = func_76(iParam1, 0x00000003, 0x000000FB, 0x000000FE);
										}
										else if (iParam3 == 0x00000004 || iParam3 == 0x00000008)
										{
											iVar0 = func_76(iParam1, 0x00000003, 0x000000FF, 0x00000102);
										}
									}
								}
								else if (iParam3 == 0x00000029 || iParam3 == 0x0000002A)
								{
									if (!func_77(iParam0, 0x00000003, 0x000000B0, 0x000000BF) && !func_77(iParam0, 0x00000003, 0x000000E3, 0x000000F2))
									{
										iVar0 = func_76(iParam1, 0x00000003, 0x000000B0, 0x000000BF);
									}
								}
								break;
						}
						break;
					
					case 0x00000008:
						if (iParam2 == 0x0000000B || iParam2 == 0x00000003)
						{
							if (iParam2 == 0x0000000B)
							{
								iVar5 = iParam3;
								iVar4 = func_101(iParam0, 0x00000003);
							}
							else if (iParam2 == 0x00000003)
							{
								iVar4 = iParam3;
								iVar5 = func_101(iParam0, 0x0000000B);
								iVar5 = func_75(iParam1, iVar4, iVar5, 0x00000000);
							}
							iVar3 = func_101(iParam0, 0x00000008);
							if (((iVar5 >= 0x00000005 && iVar5 <= 0x00000008) || (iVar5 >= 0x00000019 && iVar5 <= 0x00000028)) || (iVar5 >= 0x0000002A && iVar5 <= 0x0000002B))
							{
								if (!func_74(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != 0xFFFFFF9D)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 0x0000001B && iVar3 <= 0x0000002A) || (iVar3 >= 0x0000002B && iVar3 <= 0x0000003A)) || (iVar3 >= 0x0000003B && iVar3 <= 0x0000004A))
							{
								iVar0 = 0x0000001A;
							}
						}
						break;
					
					case 0x0000000B:
						if (iParam2 == 0x00000003)
						{
							if (iParam3 >= 0x000000D1 && iParam3 <= 0x000000DE)
							{
							}
							else if (((iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF) || (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)) || (iParam3 >= 0x000000F3 && iParam3 <= 0x00000102))
							{
								iVar7 = func_101(iParam0, 0x00000008);
								iVar8 = func_101(iParam0, 0x0000000B);
								if (((iVar7 >= 0x0000001B && iVar7 <= 0x0000002A) || (iVar7 >= 0x0000002B && iVar7 <= 0x0000003A)) || (iVar7 >= 0x0000003B && iVar7 <= 0x0000004A))
								{
									iVar0 = func_75(iParam1, iParam3, iVar8, 0x00000000);
								}
								else
								{
									iVar0 = func_75(iParam1, iParam3, iVar8, 0x00000001);
								}
							}
							else if (iParam3 >= 0x00000029 && iParam3 <= 0x00000038)
							{
								iVar0 = 0x0000002D;
							}
							else if (iParam3 >= 0x000000DF && iParam3 <= 0x000000E2)
							{
								iVar0 = 0x0000002C;
							}
							else
							{
								iVar0 = 0x00000000;
							}
						}
						else if (iParam2 == 0x00000008)
						{
							if (((iParam3 >= 0x0000001B && iParam3 <= 0x0000002A) || (iParam3 >= 0x0000002B && iParam3 <= 0x0000003A)) || (iParam3 >= 0x0000003B && iParam3 <= 0x0000004A))
							{
								iVar9 = func_101(iParam0, 0x0000000B);
								iVar0 = func_75(iParam1, 0xFFFFFF9D, iVar9, 0x00000000);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x00000032:
										iVar0 = 0x00000003;
										break;
									
									case 0x00000051:
										iVar0 = 0x00000005;
										break;
									
									case 0x00000052:
										iVar0 = 0x00000006;
										break;
									
									case 0x00000053:
										iVar0 = 0x00000007;
										break;
									
									case 0x00000054:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000055:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000056:
										iVar0 = 0x00000008;
										break;
									
									case 0x0000005C:
										iVar0 = 0x00000016;
										break;
									
									case 0x00000057:
										iVar0 = 0x00000017;
										break;
									
									case 0x0000005B:
										iVar0 = 0x00000018;
										break;
									
									case 0x0000005D:
										iVar0 = 0x00000019;
										break;
									
									case 0x00000058:
										iVar0 = 0x0000001A;
										break;
									
									case 0x0000005E:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000078:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000079:
										iVar0 = 0x0000000D;
										break;
									
									case 0x0000007A:
										iVar0 = 0x0000000E;
										break;
									
									case 0x0000007C:
										iVar0 = 0x0000000C;
										break;
									
									case 0x0000007E:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000080:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000082:
										iVar0 = 0x00000013;
										break;
									
									case 0x00000083:
										iVar0 = 0x00000010;
										break;
									
									case 0x00000086:
										iVar0 = 0x0000000F;
										break;
									
									case 0x00000087:
										iVar0 = 0x00000014;
										break;
									
									default:
										iVar0 = 0x00000000;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0x00000000;
			if (iParam1 >= 0x0000001B && iParam1 <= 0x0000002A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
					{
					}
					else
					{
						if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
						{
							if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
							{
								iVar0 = (iParam1 - 0x0000001B);
								*uParam4 = (0x0000003B + iVar0);
							}
							else if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
							{
								iVar0 = (iParam1 - 0x0000001B);
								*uParam4 = (0x0000002B + iVar0);
							}
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (((iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2) || (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)) || (iParam3 >= 0x000000F3 && iParam3 <= 0x00000102))
					{
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam1 >= 0x0000002B && iParam1 <= 0x0000003A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
					{
					}
					else
					{
						if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000002B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
					{
					}
					else
					{
						if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
						{
							if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
							{
								iVar0 = (iParam1 - 0x0000002B);
								*uParam4 = (0x0000003B + iVar0);
							}
						}
						return 0x00000000;
					}
				}
			}
			else if (iParam1 >= 0x0000003B && iParam1 <= 0x0000004A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
					{
					}
					else
					{
						if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000003B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
					{
					}
					else
					{
						if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
						{
							if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
							{
								iVar0 = (iParam1 - 0x0000003B);
								*uParam4 = (0x0000002B + iVar0);
							}
						}
						else if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000003B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000C)
			{
				if (iParam3 != 0x000000F1)
				{
					return 0x00000000;
				}
			}
			break;
	}
	return 0x00000001;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 0x000000F3 && iParam1 <= 0x000000F6)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000005;
		}
	}
	else if (iParam1 >= 0x000000F7 && iParam1 <= 0x000000FA)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000002;
		}
		else
		{
			return 0x00000006;
		}
	}
	else if (iParam1 >= 0x000000FB && iParam1 <= 0x000000FE)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000003;
		}
		else
		{
			return 0x00000007;
		}
	}
	else if (iParam1 >= 0x000000FF && iParam1 <= 0x00000102)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000004;
		}
		else
		{
			return 0x00000008;
		}
	}
	else if (iParam1 >= 0x000000FF && iParam1 <= 0x00000102)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000004;
		}
		else
		{
			return 0x00000008;
		}
	}
	else if ((iParam1 >= 0x000000B0 && iParam1 <= 0x000000BF) || (iParam1 >= 0x000000E3 && iParam1 <= 0x000000F2))
	{
		if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
		{
			if (iParam3 == 0x00000001)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 0x00000009);
				iParam2 = (0x00000019 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
		{
			if (iParam3 == 0x00000001)
			{
				iVar0 = (iParam2 - 0x00000019);
				iParam2 = (0x00000009 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 0x00000029 || iParam2 == 0x0000002A)
		{
			if (iParam3 == 0x00000001)
			{
				return 0x00000029;
			}
			else
			{
				return 0x0000002A;
			}
		}
		else
		{
			if (iParam3 == 0x00000001)
			{
				iParam2 = func_76(iParam0, 0x0000000B, 0x00000009, 0x00000018);
			}
			else
			{
				iParam2 = func_76(iParam0, 0x0000000B, 0x00000019, 0x00000028);
			}
			if (iParam2 == 0xFFFFFF9D)
			{
				if (iParam3 == 0x00000001)
				{
					return 0x00000029;
				}
				else
				{
					return 0x0000002A;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 0x00000001 && iParam2 <= 0x00000004)
	{
		if (iParam3 == 0x00000001)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 0x00000001);
			iParam2 = (0x00000005 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000005 && iParam2 <= 0x00000008)
	{
		if (iParam3 == 0x00000001)
		{
			iVar0 = (iParam2 - 0x00000005);
			iParam2 = (0x00000001 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
	{
		if (iParam3 == 0x00000001)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 0x00000009);
			iParam2 = (0x00000019 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
	{
		if (iParam3 == 0x00000001)
		{
			iVar0 = (iParam2 - 0x00000019);
			iParam2 = (0x00000009 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 0x00000029 || iParam2 == 0x0000002A)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000029;
		}
		else
		{
			return 0x0000002A;
		}
	}
	return 0xFFFFFF9D;
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 0x00000001))
	{
		iVar1 = iVar0;
		if (func_66(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0xFFFFFF9D;
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_101(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 0x00000010 || iParam1 == 0x00000011) || iParam1 == 0x00000015) || iParam1 == 0x00000016) || iParam1 == 0x00000020) || (iParam1 >= 0x00000022 && iParam1 <= 0x00000027)) || (iParam1 >= 0x00000029 && iParam1 <= 0x0000002D)) || iParam1 == 0x0000002E) || (iParam1 >= 0x0000002F && iParam1 <= 0x00000036)) || (iParam1 >= 0x00000037 && iParam1 <= 0x00000046)) || (iParam1 >= 0x00000048 && iParam1 <= 0x0000004F)) || iParam1 == 0x00000050) || (iParam1 >= 0x00000051 && iParam1 <= 0x00000053)) || (iParam1 >= 0x00000054 && iParam1 <= 0x00000057)) || iParam1 == 0x00000058) || (iParam1 >= 0x00000059 && iParam1 <= 0x0000005B)) || iParam1 == 0x0000005F) || (iParam1 >= 0x00000060 && iParam1 <= 0x0000006F)) || iParam1 == 0x00000070)
			{
				*iParam2 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 0x0000000C || (iParam1 >= 0x0000000E && iParam1 <= 0x00000015)) || iParam1 == 0x00000020) || iParam1 == 0x00000034) || (iParam1 >= 0x00000045 && iParam1 <= 0x00000046)) || iParam1 == 0x00000047) || (iParam1 >= 0x00000048 && iParam1 <= 0x0000004D))
			{
				*iParam2 = 0x00000011;
				return 0x00000001;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 0x00000004 || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000007) || iParam1 == 0x0000000E) || (iParam1 >= 0x00000012 && iParam1 <= 0x0000001D)) || iParam1 == 0x0000001F) || iParam1 == 0x00000020) || iParam1 == 0x00000021) || iParam1 == 0x00000022) || (iParam1 >= 0x00000023 && iParam1 <= 0x0000002A)) || (iParam1 >= 0x0000002B && iParam1 <= 0x00000035)) || (iParam1 >= 0x00000036 && iParam1 <= 0x0000003D)) || (iParam1 >= 0x00000047 && iParam1 <= 0x00000050)) || (iParam1 >= 0x00000051 && iParam1 <= 0x0000005A)) || (iParam1 >= 0x0000005E && iParam1 <= 0x00000067))
			{
				*iParam2 = 0x00000008;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000A:
					if (iParam2 >= 0x0000002C && iParam2 <= 0x0000002F)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((((iParam2 >= 0x0000001F && iParam2 <= 0x00000020) || (iParam2 >= 0x00000021 && iParam2 <= 0x00000022)) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024)) || iParam2 == 0x00000025) || (iParam2 >= 0x00000026 && iParam2 <= 0x00000027)) || (iParam2 >= 0x00000028 && iParam2 <= 0x00000029)) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000A:
					if (iParam2 >= 0x0000002F && iParam2 <= 0x00000032)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((iParam2 >= 0x0000001A && iParam2 <= 0x0000001B) || (iParam2 >= 0x0000001C && iParam2 <= 0x0000001D)) || (iParam2 >= 0x0000001E && iParam2 <= 0x0000001F)) || iParam2 == 0x00000020) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000009:
					if (iParam2 >= 0x0000000F && iParam2 <= 0x00000010)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000001D && iParam2 <= 0x00000020)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((((iParam2 >= 0x0000002F && iParam2 <= 0x00000030) || (iParam2 >= 0x00000031 && iParam2 <= 0x00000032)) || (iParam2 >= 0x00000033 && iParam2 <= 0x00000034)) || iParam2 == 0x00000035) || (iParam2 >= 0x00000036 && iParam2 <= 0x00000037)) || (iParam2 >= 0x00000038 && iParam2 <= 0x00000039)) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 0xFFFFFF9D)
	{
		iVar0 = func_63(iParam0);
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x00000001)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000001;
				}
				else if (iParam2 == 0x00000004)
				{
					return 0x00000005;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000000;
			}
			else if (iParam2 == 0x00000004)
			{
				return 0x00000004;
			}
			else
			{
				return 0x00000002;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0x00000000 && iParam1 <= 0x0000000F)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000000;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam1 >= 0x00000010 && iParam1 <= 0x00000011)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000002;
				}
				else
				{
					return 0x00000005;
				}
			}
			else if (iParam1 == 0x00000012)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000006;
				}
				else
				{
					return 0x00000007;
				}
			}
			else if (iParam1 == 0x00000013)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000004;
				}
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000004;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x00000002)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000002;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam1 == 0x00000003)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000004;
				}
				else
				{
					return 0x00000006;
				}
			}
			else if (iParam1 == 0x00000008)
			{
				return 0x00000005;
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
	}
	return 0xFFFFFF9D;
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, iParam1);
		if (iParam1 == 0x00000000)
		{
			unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000000);
			unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000000);
		}
	}
	else
	{
		unk_0x9A28E8CB86CD4694(iParam0, iParam1, iParam2, iParam3, unk_0x8CD06866876216F2());
		if (iParam1 == 0x00000000)
		{
			iVar0 = func_86(iParam0, iParam2, iParam3, iParam1);
			if (func_82(unk_0x134B62B726CEC8E6(iParam0), 0x0000000E, iVar0, unk_0xD1BC07002824FE76(iParam0, 0x00000000, iParam2, iParam3)))
			{
				unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000001);
				unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000001);
			}
			else
			{
				unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000000);
				unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000000);
			}
		}
	}
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_83(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					if ((iParam2 >= 0x00000083 && iParam2 <= 0x0000009A) || (iParam2 >= 0x00000147 && unk_0x1A5A491D253EA7BA(iParam3, 0xC2670CD3, 0x00000001)))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_83(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					if ((iParam2 >= 0x00000083 && iParam2 <= 0x0000009A) || (iParam2 >= 0x00000147 && unk_0x1A5A491D253EA7BA(iParam3, 0xC2670CD3, 0x00000001)))
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = (iParam1 - func_85(iParam0));
		if (iVar3 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		iVar4 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar4)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var5);
		iVar7 = 0x00000000;
		iVar8 = (iParam1 - func_84(iParam0, func_71(iParam2)));
		if (iVar8 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		if ((iParam0 == Global_12B0C.f_1A[iParam2] && iParam1 == Global_12B0C[iParam2]) && Global_12B0C.f_D[iParam2] != 0x00000000)
		{
			return Global_12B0C.f_D[iParam2];
		}
		iVar9 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_71(iParam2));
		iVar6 = 0x00000000;
		while (iVar6 < iVar9)
		{
			unk_0xC578687D5A643830(iVar6, &Var5);
			if (!unk_0x232048AB4B0E0259(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_12B0C.f_D[iParam2] = Var5.f_1;
					Global_12B0C[iParam2] = iParam1;
					Global_12B0C.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 0xFFFFFFFF;
}

int func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000006;
					break;
				
				case 0x00000003:
					return 0x000000B5;
					break;
				
				case 0x00000004:
					return 0x00000071;
					break;
				
				case 0x00000005:
					return 0x0000000E;
					break;
				
				case 0x00000006:
					return 0x00000063;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000018;
					break;
				
				case 0x00000009:
					return 0x00000014;
					break;
				
				case 0x0000000A:
					return 0x00000030;
					break;
				
				case 0x0000000B:
					return 0x0000002D;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000015;
					break;
				
				case 0x00000003:
					return 0x0000013E;
					break;
				
				case 0x00000004:
					return 0x00000075;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000086;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x0000004D;
					break;
				
				case 0x00000009:
					return 0x0000000C;
					break;
				
				case 0x0000000A:
					return 0x00000035;
					break;
				
				case 0x0000000B:
					return 0x0000003F;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000006;
					break;
				
				case 0x00000002:
					return 0x00000009;
					break;
				
				case 0x00000003:
					return 0x000000F2;
					break;
				
				case 0x00000004:
					return 0x00000068;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000054;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000012;
					break;
				
				case 0x00000009:
					return 0x00000011;
					break;
				
				case 0x0000000A:
					return 0x00000021;
					break;
				
				case 0x0000000B:
					return 0x00000001;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005B;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x0000005C;
					break;
				
				case 0x00000008:
					return 0x000000F1;
					break;
				
				case 0x00000009:
					return 0x0000002E;
					break;
				
				case 0x0000000A:
					return 0x00000007;
					break;
				
				case 0x0000000B:
					return 0x000000ED;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005C;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x00000037;
					break;
				
				case 0x00000008:
					return 0x00000088;
					break;
				
				case 0x00000009:
					return 0x00000024;
					break;
				
				case 0x0000000A:
					return 0x00000006;
					break;
				
				case 0x0000000B:
					return 0x00000100;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000071;
			break;
		
		case joaat("player_one"):
			return 0x000000AF;
			break;
		
		case joaat("player_two"):
			return 0x0000009B;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 0x00000147;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 0x00000147;
			break;
	}
	return 0xFFFFFF9D;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		return func_89(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != 0xFFFFFFFF && iVar1 != 0x00000000)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_88(unk_0x134B62B726CEC8E6(iParam0), iVar1, 0x0000000E, 0x00000003);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_88(unk_0x134B62B726CEC8E6(iParam0), iVar1, 0x0000000E, 0x00000004);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0x00000000;
	while (iVar4 <= (iVar2 - 0x00000001))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0x00000000;
			while (iVar5 <= (iVar6 - 0x00000001))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_87(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_89(iParam3);
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000003A;
					break;
				
				case 0x00000002:
					return 0x00000070;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000052;
					break;
				
				case 0x00000002:
					return 0x0000009E;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000058;
					break;
				
				case 0x00000002:
					return 0x0000009A;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000009B;
					break;
				
				case 0x00000006:
					return 0x0000013F;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000009B;
					break;
				
				case 0x00000006:
					return 0x0000013F;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar3)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_85(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var4);
		iVar6 = 0x00000000;
		iVar7 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_71(iParam2));
		iVar5 = 0x00000000;
		while (iVar5 < iVar7)
		{
			unk_0xC578687D5A643830(iVar5, &Var4);
			if (!unk_0x232048AB4B0E0259(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_84(iParam0, func_71(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 0xFFFFFF9D;
}

int func_89(int iParam0)
{
	switch (iParam0)
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
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
	}
	return 0x00000000;
}

struct<10> func_90(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 0x00000009;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_92(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_92(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_92(&Var1, 0x00000013, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_92(&Var1, 0x0000000E, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_92(&Var1, 0x00000012, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_92(&Var1, 0x00000000, 0x0000003B, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_92(&Var1, 0x00000000, 0x0000003C, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_92(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_92(&Var1, 0x00000000, 0x0000003C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_92(&Var1, 0x00000037, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_92(&Var1, 0x00000000, 0x00000001, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_91(&Var1, iParam0, iParam1, 0x0000000A);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_92(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_92(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_92(&Var1, 0x00000000, 0x00000052, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_92(&Var1, 0x00000000, 0x00000001, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_92(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_92(&Var1, 0x00000029, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_92(&Var1, 0x00000028, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_92(&Var1, 0x00000029, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_92(&Var1, 0x00000000, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_92(&Var1, 0x00000045, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_91(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_92(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_92(&Var1, 0x0000000B, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_92(&Var1, 0x00000011, 0x0000005A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_92(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_92(&Var1, 0x00000000, 0x00000058, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_92(&Var1, 0x00000000, 0x00000001, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_92(&Var1, 0x00000010, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_92(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_92(&Var1, 0x00000000, 0x0000007B, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_92(&Var1, 0x00000045, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_91(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_92(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_92(&Var1, 0x00000081, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_92(&Var1, 0x0000005A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_92(&Var1, 0x00000017, 0x000000FB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_92(&Var1, 0x00000024, 0x00000106, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_92(&Var1, 0x00000058, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_92(&Var1, 0x0000007D, 0x000000AF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_92(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_92(&Var1, 0x0000002C, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_92(&Var1, 0x00000034, 0x000000BD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_92(&Var1, 0x00000000, 0x00000105, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_92(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_92(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_92(&Var1, 0x00000000, 0x000000D4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_92(&Var1, 0x00000040, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_92(&Var1, 0x0000003D, 0x000000CF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_92(&Var1, 0x00000000, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_92(&Var1, 0x00000000, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_92(&Var1, 0x00000000, 0x000000E5, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_92(&Var1, 0x00000024, 0x000000F9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_92(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_92(&Var1, 0x00000000, 0x000000AE, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_92(&Var1, 0x00000023, 0x000000B4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_92(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_92(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000018:
					func_92(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_91(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_92(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_92(&Var1, 0x00000023, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_92(&Var1, 0x00000024, 0x000000B2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_92(&Var1, 0x00000035, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_92(&Var1, 0x00000026, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_92(&Var1, 0x00000025, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_92(&Var1, 0x00000071, 0x000000CB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_92(&Var1, 0x00000072, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_92(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_92(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_92(&Var1, 0x00000000, 0x000000C7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_92(&Var1, 0x00000000, 0x000000B6, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_92(&Var1, 0x00000000, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_92(&Var1, 0x0000006B, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_92(&Var1, 0x0000006D, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000143, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_92(&Var1, 0x00000077, 0x000000ED, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_92(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_92(&Var1, 0x00000072, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_92(&Var1, 0x00000023, 0x0000010C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_92(&Var1, 0x00000000, 0x0000010A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_92(&Var1, 0x0000002A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_92(&Var1, 0x0000004C, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_92(&Var1, 0x00000027, 0x000000EB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_92(&Var1, 0x00000029, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_92(&Var1, 0x0000006F, 0x000000C2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_91(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
	}
	return Var1;
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0x00000000 && iParam2 != 0xFFFFFF9D)
	{
		(*iParam0)[0x00000000] = 0x00000000;
		(*iParam0)[0x00000001] = 0x00000001;
		(*iParam0)[0x00000002] = 0x00000002;
		(*iParam0)[0x00000003] = 0x00000003;
		(*iParam0)[0x00000004] = 0x00000004;
		(*iParam0)[0x00000005] = 0x00000005;
		(*iParam0)[0x00000006] = 0x00000006;
		(*iParam0)[0x00000007] = 0x00000007;
		(*iParam0)[0x00000008] = 0x00000008;
		iVar0 = 0x00000000;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0x00000000;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 0x00000001;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 0x00000002;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 0x00000003;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 0x00000004;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar3 = 0x00000000;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar3, &vVar2) && vVar2.z != 0xFFFFFFFF)
				{
					if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
					{
						(*iParam0)[vVar2.z] = func_88(iParam1, vVar2.x, 0x0000000E, iVar0);
					}
					else if (vVar2.y != 0xFFFFFFFF)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0x00000000] = iParam1;
	(*iParam0)[0x00000001] = iParam2;
	(*iParam0)[0x00000002] = iParam3;
	(*iParam0)[0x00000003] = iParam4;
	(*iParam0)[0x00000004] = iParam5;
	(*iParam0)[0x00000005] = iParam6;
	(*iParam0)[0x00000006] = iParam7;
	(*iParam0)[0x00000007] = iParam8;
	(*iParam0)[0x00000008] = iParam9;
}

struct<17> func_93(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 0x0000000F;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	Var1.f_10 = 0x00000000;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					if (Global_1B416.f_2378.f_63.f_3A[0x00000078])
					{
						func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					else
					{
						func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					break;
				
				case 0x00000001:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000010, 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000024, 0x00000015, 0x00000006, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000003:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000041, 0x00000024, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000004:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003D, 0x00000020, 0x00000006, 0x00000000, 0x00000000, 0x00000007, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000000], Global_1B416.f_936.f_21B.f_C8[0x00000000], 0x00000006, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000006:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005C, 0x00000048, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000008:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AB, 0x00000059, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x0000000B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000011, 0x0000000A, 0x00000004, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000017, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000045, 0x00000028, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003E, 0x00000021, 0x00000026, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000000F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003F, 0x00000022, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000004, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AE, 0x0000005D, 0x00000012, 0x00000000, 0x00000012, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004C, 0x0000002E, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x00000013:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000040, 0x00000023, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000042, 0x00000025, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000043, 0x00000026, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000044, 0x00000027, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B1, 0x0000005E, 0x00000013, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000004, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000081, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000001, 0x0000001F);
					break;
				
				case 0x00000020:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000037, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000056, 0x00000004, 0x00000014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000061, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000002, 0x0000001F);
					break;
				
				case 0x00000023:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000008, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000A, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000B, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000C, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000D, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000E, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000030:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005B, 0x00000047, 0x0000000E, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000031:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000032:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000009);
					break;
				
				case 0x00000033:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000034:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x00000048, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 0x00000035);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000049, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000016, 0x0000000A, 0x00000040, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x00000002:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000001], Global_1B416.f_936.f_21B.f_C8[0x00000001], 0x00000011, 0x00000002, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002D, 0x0000001F);
					break;
				
				case 0x00000003:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x0000000D, 0x00000005, 0x00000002, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000004:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x00000022, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_96(&Var1, 0xFFFFFF9D, 0x00000014, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000006:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000028, 0x0000000D, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005A, 0x00000020, 0x00000011, 0x00000001, 0x00000008, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000008:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000002, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x00000009:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000004, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000D0, 0x00000047, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000103, 0x0000000A, 0x00000023, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x0000000C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000012, 0x00000006, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x00000007, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000014, 0x00000008, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000015, 0x00000009, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000087, 0x00000028, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004A, 0x00000018, 0x00000034, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B0, 0x00000035, 0x0000001A, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000029, 0x0000001F);
					break;
				
				case 0x00000013:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A2, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004B, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000016:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E3, 0x00000035, 0x00000019, 0x00000000, 0x0000001B, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000019, 0x0000001F);
					break;
				
				case 0x00000017:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E4, 0x00000036, 0x00000019, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001A, 0x0000001F);
					break;
				
				case 0x00000018:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E5, 0x00000037, 0x00000019, 0x00000000, 0x0000001D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001B, 0x0000001F);
					break;
				
				case 0x00000019:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E6, 0x00000038, 0x00000019, 0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001C, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E7, 0x00000039, 0x00000019, 0x00000000, 0x0000001F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001D, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E8, 0x0000003A, 0x00000019, 0x00000000, 0x00000020, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001E, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E9, 0x0000003B, 0x00000019, 0x00000000, 0x00000021, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EA, 0x0000003C, 0x00000019, 0x00000000, 0x00000022, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000020, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EB, 0x0000003D, 0x00000019, 0x00000000, 0x00000023, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000021, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EC, 0x0000003E, 0x00000019, 0x00000000, 0x00000024, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000022, 0x0000001F);
					break;
				
				case 0x00000020:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000ED, 0x0000003F, 0x00000019, 0x00000000, 0x00000025, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000023, 0x0000001F);
					break;
				
				case 0x00000021:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EE, 0x00000040, 0x00000019, 0x00000000, 0x00000026, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000024, 0x0000001F);
					break;
				
				case 0x00000022:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EF, 0x00000041, 0x00000019, 0x00000000, 0x00000027, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000025, 0x0000001F);
					break;
				
				case 0x00000023:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F0, 0x00000042, 0x00000019, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000026, 0x0000001F);
					break;
				
				case 0x00000024:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x00000043, 0x00000019, 0x00000000, 0x00000029, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000027, 0x0000001F);
					break;
				
				case 0x00000025:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F2, 0x00000044, 0x00000019, 0x00000000, 0x0000002A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000028, 0x0000001F);
					break;
				
				case 0x00000026:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000104, 0x00000048, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007B, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000059, 0x00000016, 0x0000000F, 0x00000006, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000013D, 0x00000045, 0x00000011, 0x00000000, 0x00000000, 0x00000000, 0x00000033, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000002C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001E, 0x00000017, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000006A, 0x00000046, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x0000002E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000075, 0x00000018, 0x00000014, 0x00000005, 0x0000001A, 0x00000000, 0x00000034, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 0x0000002F);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x00000008, 0x00000002, 0x00000003, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000002:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002B, 0x00000008, 0x0000000C, 0x00000003, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000003:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000032, 0x0000000E, 0x00000008, 0x00000000, 0x0000000F, 0x00000006, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000004:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000002], Global_1B416.f_936.f_21B.f_C8[0x00000002], 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000005:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005F, 0x00000021, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x00000006:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000A, 0x00000004, 0x00000006, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000007:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000E, 0x00000004, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000008:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000035, 0x00000011, 0x0000000B, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000060, 0x00000051, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000033, 0x0000000F, 0x00000021, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005D, 0x0000001D, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000034, 0x00000010, 0x0000001E, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x0000005C, 0x00000010, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000022, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000009, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002D, 0x0000000A, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002E, 0x0000000B, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000013:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002F, 0x0000000C, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000035, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000002C, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000062, 0x00000000, 0x0000001C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x0000001F, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BE, 0x00000047, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BF, 0x00000048, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C0, 0x00000049, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C1, 0x0000004A, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C2, 0x0000004B, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C3, 0x0000004C, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C4, 0x0000004D, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C5, 0x0000004E, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000020:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C6, 0x0000004F, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C7, 0x00000050, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C8, 0x0000003E, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000023:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C9, 0x0000003F, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CA, 0x00000040, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CB, 0x00000041, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CC, 0x00000042, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CD, 0x00000043, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CE, 0x00000044, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x0000002B, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000037, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000034, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000046, 0x0000001E, 0x00000020, 0x00000006, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 0x00000030);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000000A, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007F, 0x00000026, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003E, 0x00000000);
					break;
				
				case 0x00000002:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x000000F8, 0x0000002D, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000090, 0x00000001);
					break;
				
				case 0x00000003:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000001F, 0x00000019, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000E7, 0x00000002);
					break;
				
				case 0x00000004:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x0000000A, 0xFFFFFF9D, 0x00000015, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000007B, 0x00000003);
					break;
				
				case 0x00000005:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000005D, 0x0000008D, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000072, 0x00000004);
					break;
				
				case 0x00000006:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000071, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000071, 0x00000005);
					break;
				
				case 0x00000007:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003D, 0x00000088, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003D, 0x00000006);
					break;
				
				case 0x00000008:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000070, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000007);
					break;
				
				case 0x00000009:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000083, 0x00000018, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000DF, 0x00000008);
					break;
				
				case 0x0000000A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000BC, 0xFFFFFF9D, 0x000000D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000009);
					break;
				
				case 0x0000000B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000A0, 0xFFFFFF9D, 0x000000D3, 0x00000000, 0x00000000, 0x00000000, 0x0000002B, 0x0000009D, 0x0000000A);
					break;
				
				case 0x0000000C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000A2, 0x000000AE, 0xFFFFFF9D, 0x000000C9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000009E, 0x0000000B);
					break;
				
				case 0x0000000D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000004, 0x000000F0, 0xFFFFFF9D, 0x00000022, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000061, 0x0000000C);
					break;
				
				case 0x0000000E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000080, 0x000000E8, 0xFFFFFF9D, 0x0000002B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000066, 0x0000000D);
					break;
				
				case 0x0000000F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x00000041, 0xFFFFFF9D, 0x000000E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x0000000E);
					break;
				
				case 0x00000010:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000041, 0x000000AC, 0xFFFFFF9D, 0x000000CA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x0000000F);
					break;
				
				case 0x00000011:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000042, 0x00000010);
					break;
				
				case 0x00000012:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000062, 0x00000050, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000057, 0x00000011);
					break;
				
				case 0x00000013:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x000000C0, 0x00000060, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000050, 0x00000012);
					break;
				
				case 0x00000014:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007C, 0x00000060, 0xFFFFFF9D, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006E, 0x00000013);
					break;
				
				case 0x00000015:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000050, 0x00000072, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000014);
					break;
				
				case 0x00000016:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x0000002B, 0x00000070, 0xFFFFFF9D, 0x00000052, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000030, 0x00000015);
					break;
				
				case 0x00000017:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000090, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000016);
					break;
				
				case 0x00000018:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003F, 0x00000026, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003F, 0x00000017);
					break;
				
				case 0x00000019:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000029, 0x00000018);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 0x0000001A);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000088, 0x000000F1, 0xFFFFFF9D, 0x0000002F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000015, 0x0000001F);
					break;
				
				case 0x00000002:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000001, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x000000D7, 0x00000000);
					break;
				
				case 0x00000003:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000049, 0x000000F1, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000019, 0x00000001);
					break;
				
				case 0x00000004:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000058, 0x000000D9, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000002);
					break;
				
				case 0x00000005:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000007, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000099, 0x00000003);
					break;
				
				case 0x00000006:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000008C, 0x000000F1, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000010, 0x00000004);
					break;
				
				case 0x00000007:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000008B, 0x00000070, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x0000004E, 0x00000005);
					break;
				
				case 0x00000008:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000C1, 0x00000030, 0xFFFFFF9D, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x00000006);
					break;
				
				case 0x00000009:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000072, 0x00000061, 0xFFFFFF9D, 0x00000067, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000062, 0x00000007);
					break;
				
				case 0x0000000A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000086, 0x000000EF, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000090, 0x00000008);
					break;
				
				case 0x0000000B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000098, 0x00000060, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000060, 0x00000009);
					break;
				
				case 0x0000000C:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000081, 0x00000001, 0xFFFFFF9D, 0x00000060, 0x00000000, 0x00000000, 0x00000000, 0x00000005, 0x00000078, 0x0000000A);
					break;
				
				case 0x0000000D:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000082, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000009F, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x000000D6, 0x0000000B);
					break;
				
				case 0x0000000F:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x000000E8, 0x000000D5, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x00000093, 0x0000000C);
					break;
				
				case 0x00000010:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000008, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000027, 0x0000000D);
					break;
				
				case 0x00000011:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000096, 0x000000EB, 0xFFFFFF9D, 0x0000006A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000080, 0x0000000E);
					break;
				
				case 0x00000012:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000060, 0x00000061, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000020, 0x00000072, 0x0000000F);
					break;
				
				case 0x00000013:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000030, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000059, 0x00000010);
					break;
				
				case 0x00000014:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000003E, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004E, 0x00000011);
					break;
				
				case 0x00000015:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000031, 0x00000041, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000050, 0x0000001F);
					break;
				
				case 0x00000016:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000014, 0x00000010, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x00000012);
					break;
				
				case 0x00000017:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000049, 0x000000B2, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000026, 0x0000000B, 0x00000013);
					break;
				
				case 0x00000018:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000087, 0x00000035, 0xFFFFFF9D, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x0000001D, 0x0000001B, 0x00000014);
					break;
				
				case 0x00000019:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x000000E9, 0x000000B0, 0xFFFFFF9D, 0x00000078, 0x00000000, 0x00000000, 0x00000000, 0x0000000B, 0x000000A0, 0x00000015);
					break;
				
				case 0x0000001A:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000022, 0x000000B3, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004D, 0x00000016);
					break;
				
				case 0x0000001B:
					func_96(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x00000083, 0x0000005D, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FA, 0x00000017);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 0x0000001C);
					break;
			}
			break;
	}
	return Var1;
}

void func_94(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0x00000000] = 0x00000000;
	(*uParam0)[0x00000002] = 0xFFFFFF9D;
	(*uParam0)[0x00000003] = 0x00000000;
	(*uParam0)[0x00000004] = 0x00000000;
	(*uParam0)[0x00000006] = 0x00000000;
	(*uParam0)[0x00000005] = 0x00000000;
	(*uParam0)[0x00000008] = 0x00000000;
	(*uParam0)[0x00000009] = 0x00000000;
	(*uParam0)[0x0000000A] = 0x00000000;
	(*uParam0)[0x00000001] = 0x00000000;
	(*uParam0)[0x00000007] = 0x00000000;
	(*uParam0)[0x0000000B] = 0x00000000;
	(*uParam0)[0x0000000D] = 0xFFFFFF9D;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
	uParam0->f_10 = 0x00000000;
	iVar0 = 0x00000000;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0x00000000;
		(*uParam0)[0x0000000D] = (0x0000000A + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 0x00000001;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 0x00000002;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 0x00000004;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0x00000000);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar4 = 0x00000000;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
				{
					if (vVar2.z == 0x0000000A)
					{
						unk_0x65C0659496B1CC14(&Var3);
						unk_0xFDEBA3FD0BF0D4AC(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 0x00000001;
						}
					}
					if (vVar2.z == 0x0000000A && uParam0->f_10)
					{
						(*uParam0)[func_95(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 0x00000001;
					}
					else
					{
						(*uParam0)[func_95(vVar2.z)] = func_88(iParam1, vVar2.x, func_95(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 0xFFFFFFFF)
				{
					(*uParam0)[func_95(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0x00000000)
		{
			(*uParam0)[0x0000000D] = 0xFFFFFF9D;
		}
		else
		{
			(*uParam0)[0x0000000D] = Var1.f_1;
		}
	}
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
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
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

void func_96(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0x00000000] = iParam1;
	(*uParam0)[0x00000002] = iParam2;
	(*uParam0)[0x00000003] = iParam3;
	(*uParam0)[0x00000004] = iParam4;
	(*uParam0)[0x00000006] = iParam5;
	(*uParam0)[0x00000005] = iParam6;
	(*uParam0)[0x00000008] = iParam7;
	(*uParam0)[0x00000009] = iParam8;
	(*uParam0)[0x0000000A] = iParam9;
	(*uParam0)[0x00000001] = iParam10;
	(*uParam0)[0x00000007] = iParam11;
	(*uParam0)[0x0000000B] = iParam12;
	(*uParam0)[0x0000000D] = iParam13;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 == 0x00000010)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 == 0x00000028 || (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)) || (iParam2 >= 0x00000040 && iParam2 <= 0x0000004F))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 >= 0x00000011 && iParam2 <= 0x00000012) || (iParam2 >= 0x00000047 && iParam2 <= 0x00000056))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_83(iParam0, iParam2, 0x0000000E, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_83(iParam0, iParam2, 0x0000000E, 0x00000003), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_83(iParam0, iParam2, 0x00000001, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_83(iParam0, iParam2, 0x00000001, 0x00000003), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_83(iParam0, iParam2, 0x0000000E, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_83(iParam0, iParam2, 0x0000000E, 0x00000004), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_83(iParam0, iParam2, 0x00000001, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_83(iParam0, iParam2, 0x00000001, 0x00000004), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000006)
		{
			if (iParam2 == 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000009 || iParam2 == 0x00000007) || iParam2 == 0x00000017)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if ((((((((((((((((iParam2 == 0x0000000C || iParam2 == 0x0000003B) || iParam2 == 0x0000003C) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || iParam2 == 0x00000025) || iParam2 == 0x00000026) || iParam2 == 0x00000027) || iParam2 == 0x00000028) || iParam2 == 0x00000029) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C)) || iParam2 == 0x00000036) || iParam2 == 0x00000037)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x00000014)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000003 || iParam2 == 0x00000005) || iParam2 == 0x00000009)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000052 || iParam2 == 0x0000000A) || iParam2 == 0x0000001A) || iParam2 == 0x0000001B) || iParam2 == 0x0000001C) || iParam2 == 0x0000001D) || iParam2 == 0x0000001E) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || (iParam2 >= 0x00000025 && iParam2 <= 0x00000027))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000008)
		{
			if (iParam2 == 0x0000000E || iParam2 == 0x00000007)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (((iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)) || iParam2 == 0x0000000F) || iParam2 == 0x00000010)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000058 || iParam2 == 0x0000000C) || iParam2 == 0x0000002F) || iParam2 == 0x00000030) || iParam2 == 0x00000031) || iParam2 == 0x00000032) || iParam2 == 0x00000033) || iParam2 == 0x00000034) || iParam2 == 0x00000035) || iParam2 == 0x00000036) || iParam2 == 0x00000037) || iParam2 == 0x00000038) || iParam2 == 0x00000039) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_83(iParam0, iParam2, 0x00000001, 0x00000003);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_83(iParam0, iParam2, 0x00000001, 0x00000004);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x0000000E)
			{
				if ((((((((iParam2 == 0x0000003A || iParam2 == 0x0000003D) || (iParam2 >= 0x0000003E && iParam2 <= 0x00000045)) || (iParam2 >= 0x00000046 && iParam2 <= 0x0000004F)) || (iParam2 >= 0x00000050 && iParam2 <= 0x00000059)) || iParam2 == 0x0000005A) || (iParam2 >= 0x0000005B && iParam2 <= 0x00000066)) || (iParam2 >= 0x00000067 && iParam2 <= 0x0000006E)) || iParam2 == 0x0000006F)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((((iParam2 >= 0x00000053 && iParam2 <= 0x0000005C) || iParam2 == 0x0000005D) || iParam2 == 0x0000005E) || (iParam2 >= 0x0000005F && iParam2 <= 0x00000065)) || (iParam2 >= 0x00000066 && iParam2 <= 0x0000006F)) || (iParam2 >= 0x00000070 && iParam2 <= 0x00000079)) || (iParam2 >= 0x0000007A && iParam2 <= 0x00000083)) || (iParam2 >= 0x00000084 && iParam2 <= 0x0000008B)) || (iParam2 >= 0x0000008C && iParam2 <= 0x00000095)) || (iParam2 >= 0x00000096 && iParam2 <= 0x0000009C)) || iParam2 == 0x0000009D)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((iParam2 == 0x00000059 || (iParam2 >= 0x0000005A && iParam2 <= 0x00000063)) || (iParam2 >= 0x00000064 && iParam2 <= 0x0000006D)) || iParam2 == 0x0000006F) || iParam2 == 0x00000070) || (iParam2 >= 0x00000071 && iParam2 <= 0x0000007A)) || (iParam2 >= 0x0000007B && iParam2 <= 0x00000084)) || (iParam2 >= 0x00000085 && iParam2 <= 0x0000008E)) || (iParam2 >= 0x0000008F && iParam2 <= 0x00000098)) || iParam2 == 0x00000099)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_83(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_83(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
	}
	return 0x00000000;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == 0xFFFFFFFF)
	{
		return func_89(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_86(iParam0, iVar0, iVar1, iParam1);
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 0x0000000C || iParam1 == 0x0000000D) || iParam1 == 0x0000000E) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = func_71(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_102(iParam0, iVar1, iVar2, iParam1);
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_71(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0x00000000;
	while (iVar3 <= (iVar1 - 0x00000001))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0x00000000;
			while (iVar4 <= (iVar5 - 0x00000001))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 0xFFFFFF9D;
}

void func_103(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		func_110(iParam0, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000002, Global_12A92[0x00000001 /*14*/].f_1, 0x00000001, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001) && unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		if (iParam0 == 0x0000000C)
		{
			func_104(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
		else if (iParam0 == 0x0000000D)
		{
		}
		else if (iParam0 == 0x0000000E)
		{
			func_104(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			func_104(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
	}
}

void func_104(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_109(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_108(iVar2, iVar0, 0x00000000);
		unk_0x5D96D8530B3D0904(&iVar3, iVar1);
		func_105(iVar2, iVar3, iVar0, 0x00000001, 0x00000000);
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_106(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_106(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_107();
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

int func_107()
{
	return Global_1407E9;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_106(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

bool func_109(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 0x00002CF7;
	if ((bParam4 && Global_411C56) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
					
					case 0xC0235F73:
					case 0xAD93CC80:
					case 0x16FF0A8E:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000000;
						return 0x00000001;
						break;
					
					case 0xCE57FBDC:
					case 0x98CDA2F4:
					case 0x2841AD13:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000001;
						return 0x00000001;
						break;
					
					case 0x928E844A:
					case 0x8B23079F:
					case 0xF1CC4021:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000002;
						return 0x00000001;
						break;
					
					case 0xA0BA20A1:
					case 0x08C582E6:
					case 0x0409E49C:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000003;
						return 0x00000001;
						break;
					
					case 0x075EEDE1:
					case 0xFA7AE651:
					case 0xE0079C98:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000004;
						return 0x00000001;
						break;
					
					case 0x13BA0697:
					case 0xF649DDEF:
					case 0xF13E3F05:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000005;
						return 0x00000001;
						break;
					
					case 0xF77E4E20:
					case 0x633F37DC:
					case 0xCD0C76A2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000007;
						return 0x00000001;
						break;
					
					case 0x4CEE78FF:
					case 0x3C60EA1C:
					case 0xA9142EB2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000008;
						return 0x00000001;
						break;
					
					case 0x7AC28546:
					case 0x379D8CB2:
					case 0xA9497954:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x0000000B;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			}
	}
	iVar0 = 0xFFFFFFFF;
	if (bParam4)
	{
		if (Global_411C56)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000001:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006DF;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E0;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E1;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E2;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E3;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006EB;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006ED;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006EE;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006EF;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F0;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F1;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006F9;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FA;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x0000075F;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000760;
					break;
				
				case 0x00000011:
					*uParam2 = 0x0000077F;
					break;
				
				case 0x00000012:
					*uParam2 = 0x0000078D;
					break;
				
				case 0x00000013:
					*uParam2 = 0x0000078E;
					break;
				
				case 0x00000014:
					*uParam2 = 0x0000078F;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000790;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000791;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007F9;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FA;
					break;
				
				case 0x00000019:
					*uParam2 = 0x00000814;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x00000815;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000816;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000817;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000818;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000819;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x0000081A;
					break;
				
				case 0x00000020:
					*uParam2 = 0x0000081B;
					break;
				
				case 0x00000021:
					*uParam2 = 0x0000081C;
					break;
				
				case 0x00000022:
					*uParam2 = 0x0000081D;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000914;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000915;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000955;
					break;
				
				case 0x00000026:
					*uParam2 = 0x00000956;
					break;
				
				case 0x00000027:
					*uParam2 = 0x00000957;
					break;
				
				case 0x00000028:
					*uParam2 = 0x00000958;
					break;
				
				case 0x00000029:
					*uParam2 = 0x00000993;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x00000994;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x00000995;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x00000996;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x00000997;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x00000998;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x00000999;
					break;
				
				case 0x00000030:
					*uParam2 = 0x0000099A;
					break;
				
				case 0x00000031:
					*uParam2 = 0x0000099B;
					break;
				
				case 0x00000032:
					*uParam2 = 0x0000099C;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A1D;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A1E;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A1F;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A20;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A21;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A22;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A23;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A24;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A25;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A26;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A27;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C7C;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C7D;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C7E;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C7F;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C80;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C81;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E55;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E56;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E57;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E58;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E59;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E5A;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E5B;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E5C;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E5D;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E5E;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED0;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED1;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000ED2;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000ED3;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000ED4;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000ED5;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000ED6;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000ED7;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F3E;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F3F;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F40;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014D9;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014DA;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014DB;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014DC;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014DD;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014DE;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014DF;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014E0;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014E1;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014E2;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014E3;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014E4;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001512;
					break;
				
				case 0x00000066:
					*uParam2 = 0x00001513;
					break;
				
				case 0x00000067:
					*uParam2 = 0x00001514;
					break;
				
				case 0x00000068:
					*uParam2 = 0x00001515;
					break;
				
				case 0x00000069:
					*uParam2 = 0x00001516;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x00001517;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x00001518;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001519;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x0000151A;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x0000151B;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x0000151C;
					break;
				
				case 0x00000070:
					*uParam2 = 0x0000151D;
					break;
				
				case 0x00000071:
					*uParam2 = 0x0000151E;
					break;
				
				case 0x00000072:
					*uParam2 = 0x0000151F;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001520;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001521;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001522;
					break;
				
				case 0x00000076:
					*uParam2 = 0x00001523;
					break;
				
				case 0x00000077:
					*uParam2 = 0x00001524;
					break;
				
				case 0x00000078:
					*uParam2 = 0x00001525;
					break;
				
				case 0x00000079:
					*uParam2 = 0x00001526;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x00001527;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x00001528;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017EA;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017EB;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017EC;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017ED;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017EE;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017EF;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017F0;
					break;
				
				case 0x00000083:
					*uParam2 = 0x000017F1;
					break;
				
				case 0x00000084:
					*uParam2 = 0x000017F2;
					break;
				
				case 0x00000085:
					*uParam2 = 0x000017F3;
					break;
				
				case 0x00000086:
					*uParam2 = 0x000017F4;
					break;
				
				case 0x00000087:
					*uParam2 = 0x000017F5;
					break;
				
				case 0x00000088:
					*uParam2 = 0x000017F6;
					break;
				
				case 0x00000089:
					*uParam2 = 0x000017F7;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x000017F8;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001923;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001924;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001925;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001926;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001927;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001928;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001929;
					break;
				
				case 0x00000092:
					*uParam2 = 0x0000192A;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000192B;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000192C;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000192D;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000192E;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000192F;
					break;
				
				case 0x00000098:
					*uParam2 = 0x00001930;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001931;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C62;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C63;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C64;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C65;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C66;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C67;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C68;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001EC7;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001EC8;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001EC9;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ECA;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001ECB;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001ECC;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001ECD;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001ECE;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001ECF;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001ED0;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001ED1;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001ED2;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001ED3;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001ED4;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001ED5;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x0000206B;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x0000206C;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x0000206D;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x0000206E;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x0000206F;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002070;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x00002071;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x00002072;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x00002073;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x00002074;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x00002075;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x00002076;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002077;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002078;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002079;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x0000207A;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x0000207B;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x0000207C;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x0000207D;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x0000207E;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x0000207F;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002080;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x00002081;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x00002082;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x00002083;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022E8;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022E9;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EA;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022EB;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022EC;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024CB;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024CC;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024CD;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024CE;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024CF;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024D0;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024D1;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024D2;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024D3;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024D4;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024D5;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024D6;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024D7;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024D8;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024D9;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024DA;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024DB;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024DC;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024DD;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024DE;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024DF;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024E0;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024E1;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024E2;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024E3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006E5;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E6;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E7;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E8;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E9;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006F2;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006F3;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006F4;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006F5;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006F6;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F7;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F8;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006FB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FC;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x00000761;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000762;
					break;
				
				case 0x00000011:
					*uParam2 = 0x00000780;
					break;
				
				case 0x00000012:
					*uParam2 = 0x00000792;
					break;
				
				case 0x00000013:
					*uParam2 = 0x00000793;
					break;
				
				case 0x00000014:
					*uParam2 = 0x00000794;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000795;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000796;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007FB;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FC;
					break;
				
				case 0x00000019:
					*uParam2 = 0x0000081E;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x0000081F;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000820;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000821;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000822;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000823;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x00000824;
					break;
				
				case 0x00000020:
					*uParam2 = 0x00000825;
					break;
				
				case 0x00000021:
					*uParam2 = 0x00000826;
					break;
				
				case 0x00000022:
					*uParam2 = 0x00000827;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000916;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000917;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000959;
					break;
				
				case 0x00000026:
					*uParam2 = 0x0000095A;
					break;
				
				case 0x00000027:
					*uParam2 = 0x0000095B;
					break;
				
				case 0x00000028:
					*uParam2 = 0x0000095C;
					break;
				
				case 0x00000029:
					*uParam2 = 0x0000099D;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x0000099E;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x0000099F;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x000009A0;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x000009A1;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x000009A2;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x000009A3;
					break;
				
				case 0x00000030:
					*uParam2 = 0x000009A4;
					break;
				
				case 0x00000031:
					*uParam2 = 0x000009A5;
					break;
				
				case 0x00000032:
					*uParam2 = 0x000009A6;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A28;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A29;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A2A;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A2B;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A2C;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A2D;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A2E;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A2F;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A30;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A31;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A32;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C82;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C83;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C84;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C85;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C86;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C87;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E5F;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E60;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E61;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E62;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E63;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E64;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E65;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E66;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E67;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E68;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED8;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED9;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000EDA;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000EDB;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000EDC;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000EDD;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000EDE;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000EDF;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F41;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F42;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F43;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014E5;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014E6;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014E7;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014E8;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014E9;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014EA;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014EB;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014EC;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014ED;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014EE;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014EF;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014F0;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001529;
					break;
				
				case 0x00000066:
					*uParam2 = 0x0000152A;
					break;
				
				case 0x00000067:
					*uParam2 = 0x0000152B;
					break;
				
				case 0x00000068:
					*uParam2 = 0x0000152C;
					break;
				
				case 0x00000069:
					*uParam2 = 0x0000152D;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x0000152E;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x0000152F;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001530;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x00001531;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x00001532;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x00001533;
					break;
				
				case 0x00000070:
					*uParam2 = 0x00001534;
					break;
				
				case 0x00000071:
					*uParam2 = 0x00001535;
					break;
				
				case 0x00000072:
					*uParam2 = 0x00001536;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001537;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001538;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001539;
					break;
				
				case 0x00000076:
					*uParam2 = 0x0000153A;
					break;
				
				case 0x00000077:
					*uParam2 = 0x0000153B;
					break;
				
				case 0x00000078:
					*uParam2 = 0x0000153C;
					break;
				
				case 0x00000079:
					*uParam2 = 0x0000153D;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x0000153E;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x0000153F;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017F9;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017FA;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017FB;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017FC;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017FD;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017FE;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017FF;
					break;
				
				case 0x00000083:
					*uParam2 = 0x00001800;
					break;
				
				case 0x00000084:
					*uParam2 = 0x00001801;
					break;
				
				case 0x00000085:
					*uParam2 = 0x00001802;
					break;
				
				case 0x00000086:
					*uParam2 = 0x00001803;
					break;
				
				case 0x00000087:
					*uParam2 = 0x00001804;
					break;
				
				case 0x00000088:
					*uParam2 = 0x00001805;
					break;
				
				case 0x00000089:
					*uParam2 = 0x00001806;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x00001807;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001932;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001933;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001934;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001935;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001936;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001937;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001938;
					break;
				
				case 0x00000092:
					*uParam2 = 0x00001939;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000193A;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000193B;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000193C;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000193D;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000193E;
					break;
				
				case 0x00000098:
					*uParam2 = 0x0000193F;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001940;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C69;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C6A;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C6B;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C6C;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C6D;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C6E;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C6F;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001ED6;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001ED7;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001ED8;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ED9;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001EDA;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001EDB;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001EDC;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001EDD;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001EDE;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001EDF;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001EE0;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001EE1;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001EE2;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001EE3;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001EE4;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x00002084;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x00002085;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x00002086;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x00002087;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x00002088;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002089;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x0000208A;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x0000208B;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x0000208C;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x0000208D;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x0000208E;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x0000208F;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002090;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002091;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002092;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x00002093;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x00002094;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x00002095;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x00002096;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x00002097;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x00002098;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002099;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x0000209A;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x0000209B;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x0000209C;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022ED;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022EE;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EF;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022F0;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022F1;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024E4;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024E5;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024E6;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024E7;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024E8;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024E9;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024EA;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024EB;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024EC;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024ED;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024EE;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024EF;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024F0;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024F1;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024F2;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024F3;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024F4;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024F5;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024F6;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024F7;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024F8;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024F9;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024FA;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024FB;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024FC;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 0x00000020);
	return *uParam2 != 0x00002CF7;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0x00000000)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 0x00000001)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000002)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000003)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000006)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000007)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000008)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000009)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000006)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000008)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000A)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000E)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0x00000000;
}

int func_111(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001))
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

struct<14> func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_175();
	if (iParam0 == joaat("player_zero"))
	{
		func_157(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_138(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_113(iParam1, iParam2);
	}
	return Global_12A92[0x00000000 /*14*/];
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_137(iParam1);
			break;
		
		case 0x00000002:
			func_136(iParam1);
			break;
		
		case 0x00000003:
			func_133(iParam1);
			break;
		
		case 0x00000004:
			func_132(iParam1);
			break;
		
		case 0x00000006:
			func_131(iParam1);
			break;
		
		case 0x00000005:
			func_130(iParam1);
			break;
		
		case 0x00000008:
			func_129(iParam1);
			break;
		
		case 0x00000009:
			func_128(iParam1);
			break;
		
		case 0x0000000A:
			func_127(iParam1);
			break;
		
		case 0x00000001:
			func_126(iParam1);
			break;
		
		case 0x00000007:
			func_125(iParam1);
			break;
		
		case 0x0000000B:
			func_124(iParam1);
			break;
		
		case 0x0000000C:
			func_123(iParam1);
			break;
		
		case 0x0000000D:
			func_122(iParam1);
			break;
		
		case 0x0000000E:
			func_114(iParam1);
			break;
	}
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x000000D7;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000031;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000012;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000009B, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0x00000000;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 0x00000020);
	uParam0->f_2 = (iParam2 / 0x00000020);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_120(iParam8);
	if ((uParam0->f_2 >= 0x0000000A && uParam0->f_5 >= 0x00000000) && uParam0->f_5 < 0x00000003)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0x00000000;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000003);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000006);
		if (func_41(0x0000000E))
		{
			return;
		}
		if (iParam1 == 0x00000001)
		{
			if (unk_0x1A5A491D253EA7BA(Global_280004, 0x6CE6313B, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000007);
			}
		}
		if (iParam1 == 0x0000000C)
		{
			if (!func_119(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_119(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else if (iParam1 == 0x0000000D)
		{
		}
		else if (iParam1 == 0x0000000E)
		{
			if (!func_119(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_119(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else
		{
			if (!func_119(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_119(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
	}
	else if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		if (func_110(iParam1, uParam0->f_5, uParam0->f_2, 0x00000000, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		}
		if (func_110(iParam1, uParam0->f_5, uParam0->f_2, 0x00000001, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
		if (!func_110(iParam1, uParam0->f_5, uParam0->f_2, 0x00000002, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if ((((((((((iParam1 == 0x0000000B || iParam1 == 0x00000004) || iParam1 == 0x00000006) || iParam1 == 0x00000001) || iParam1 == 0x0000000E) || iParam1 == 0x00000002) || iParam1 == 0x00000008) || iParam1 == 0x00000009) || iParam1 == 0x0000000A) || iParam1 == 0x00000007) || iParam1 == 0x0000000C)
		{
			if (func_41(0x0000000E))
			{
				return;
			}
			iVar0 = func_108(func_118(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			}
			iVar0 = func_108(func_117(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
			}
			if (func_116(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_108(iVar1, Global_12A8F, 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
	if (iParam1 == 0x0000000E)
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
}

bool func_116(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 0x000003D2;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D3;
					break;
				
				case 0x00000003:
					*uParam2 = 0x00000595;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E3;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EB;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000596;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059E;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000005A0;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000003F3;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A1;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FB;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x00000406;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D4;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000597;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059F;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A2;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DC;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FC;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D5;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E5;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003ED;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000598;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A3;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DD;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FD;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E6;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EE;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000599;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DE;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FE;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E7;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EF;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059A;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DF;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FF;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E8;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F0;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059B;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E0;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000400;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E9;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F1;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059C;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E1;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000401;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F2;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059D;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E2;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000402;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000403;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000404;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000405;
					break;
			}
			break;
	}
	return *uParam2 != 0x000003D2;
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000039F;
					break;
				
				case 0x00000003:
					return 0x00000586;
					break;
				
				case 0x00000004:
					return 0x000003AF;
					break;
				
				case 0x00000006:
					return 0x000003B7;
					break;
				
				case 0x00000008:
					return 0x00000587;
					break;
				
				case 0x00000009:
					return 0x0000058F;
					break;
				
				case 0x0000000A:
					return 0x00000591;
					break;
				
				case 0x00000001:
					return 0x000003BF;
					break;
				
				case 0x00000007:
					return 0x00000592;
					break;
				
				case 0x0000000B:
					return 0x000003A7;
					break;
				
				case 0x0000000E:
					return 0x000003C7;
					break;
				
				case 0x0000000C:
					return 0x000003D2;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A0;
					break;
				
				case 0x00000004:
					return 0x000003B0;
					break;
				
				case 0x00000006:
					return 0x000003B8;
					break;
				
				case 0x00000008:
					return 0x00000588;
					break;
				
				case 0x00000009:
					return 0x00000590;
					break;
				
				case 0x00000007:
					return 0x00000593;
					break;
				
				case 0x0000000B:
					return 0x000003A8;
					break;
				
				case 0x0000000E:
					return 0x000003C8;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A1;
					break;
				
				case 0x00000004:
					return 0x000003B1;
					break;
				
				case 0x00000006:
					return 0x000003B9;
					break;
				
				case 0x00000008:
					return 0x00000589;
					break;
				
				case 0x00000007:
					return 0x00000594;
					break;
				
				case 0x0000000B:
					return 0x000003A9;
					break;
				
				case 0x0000000E:
					return 0x000003C9;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B2;
					break;
				
				case 0x00000006:
					return 0x000003BA;
					break;
				
				case 0x00000008:
					return 0x0000058A;
					break;
				
				case 0x0000000B:
					return 0x000003AA;
					break;
				
				case 0x0000000E:
					return 0x000003CA;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B3;
					break;
				
				case 0x00000006:
					return 0x000003BB;
					break;
				
				case 0x00000008:
					return 0x0000058B;
					break;
				
				case 0x0000000B:
					return 0x000003AB;
					break;
				
				case 0x0000000E:
					return 0x000003CB;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B4;
					break;
				
				case 0x00000006:
					return 0x000003BC;
					break;
				
				case 0x00000008:
					return 0x0000058C;
					break;
				
				case 0x0000000B:
					return 0x000003AC;
					break;
				
				case 0x0000000E:
					return 0x000003CC;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B5;
					break;
				
				case 0x00000006:
					return 0x000003BD;
					break;
				
				case 0x00000008:
					return 0x0000058D;
					break;
				
				case 0x0000000B:
					return 0x000003AD;
					break;
				
				case 0x0000000E:
					return 0x000003CD;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B6;
					break;
				
				case 0x00000006:
					return 0x000003BE;
					break;
				
				case 0x00000008:
					return 0x0000058E;
					break;
				
				case 0x0000000B:
					return 0x000003AE;
					break;
				
				case 0x0000000E:
					return 0x000003CE;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003CF;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D0;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D1;
					break;
			}
			break;
	}
	return 0x000003A7;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036B;
					break;
				
				case 0x00000003:
					return 0x00000577;
					break;
				
				case 0x00000004:
					return 0x0000037B;
					break;
				
				case 0x00000006:
					return 0x00000383;
					break;
				
				case 0x00000008:
					return 0x00000578;
					break;
				
				case 0x00000009:
					return 0x00000580;
					break;
				
				case 0x0000000A:
					return 0x00000582;
					break;
				
				case 0x00000001:
					return 0x0000038B;
					break;
				
				case 0x00000007:
					return 0x00000583;
					break;
				
				case 0x0000000B:
					return 0x00000373;
					break;
				
				case 0x0000000E:
					return 0x00000393;
					break;
				
				case 0x0000000C:
					return 0x0000039E;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036C;
					break;
				
				case 0x00000004:
					return 0x0000037C;
					break;
				
				case 0x00000006:
					return 0x00000384;
					break;
				
				case 0x00000008:
					return 0x00000579;
					break;
				
				case 0x00000009:
					return 0x00000581;
					break;
				
				case 0x00000007:
					return 0x00000584;
					break;
				
				case 0x0000000B:
					return 0x00000374;
					break;
				
				case 0x0000000E:
					return 0x00000394;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036D;
					break;
				
				case 0x00000004:
					return 0x0000037D;
					break;
				
				case 0x00000006:
					return 0x00000385;
					break;
				
				case 0x00000008:
					return 0x0000057A;
					break;
				
				case 0x00000007:
					return 0x00000585;
					break;
				
				case 0x0000000B:
					return 0x00000375;
					break;
				
				case 0x0000000E:
					return 0x00000395;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037E;
					break;
				
				case 0x00000006:
					return 0x00000386;
					break;
				
				case 0x00000008:
					return 0x0000057B;
					break;
				
				case 0x0000000B:
					return 0x00000376;
					break;
				
				case 0x0000000E:
					return 0x00000396;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037F;
					break;
				
				case 0x00000006:
					return 0x00000387;
					break;
				
				case 0x00000008:
					return 0x0000057C;
					break;
				
				case 0x0000000B:
					return 0x00000377;
					break;
				
				case 0x0000000E:
					return 0x00000397;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000380;
					break;
				
				case 0x00000006:
					return 0x00000388;
					break;
				
				case 0x00000008:
					return 0x0000057D;
					break;
				
				case 0x0000000B:
					return 0x00000378;
					break;
				
				case 0x0000000E:
					return 0x00000398;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000381;
					break;
				
				case 0x00000006:
					return 0x00000389;
					break;
				
				case 0x00000008:
					return 0x0000057E;
					break;
				
				case 0x0000000B:
					return 0x00000379;
					break;
				
				case 0x0000000E:
					return 0x00000399;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000382;
					break;
				
				case 0x00000006:
					return 0x0000038A;
					break;
				
				case 0x00000008:
					return 0x0000057F;
					break;
				
				case 0x0000000B:
					return 0x0000037A;
					break;
				
				case 0x0000000E:
					return 0x0000039A;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039B;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039C;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039D;
					break;
			}
			break;
	}
	return 0x00000373;
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_109(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_108(iVar2, iVar0, 0x00000000);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0x00000000;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
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
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000000;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0x00000000)
	{
		return;
	}
	iVar1 = Global_12A92[0x00000000 /*14*/].f_5;
	if (iParam0 == 0x0000000C)
	{
		iVar4 = 0x00000000;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0x00000000);
		iVar3 = 0x00000000;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_115(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0x00000000, 0x00000000, Var2.f_2, 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000001);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		func_115(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, "NO_LABEL", 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001);
	}
	else if (iParam0 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0x00000000;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar8 = 0x00000000;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0x00000000)
					{
						iVar7 = 0x00000009;
					}
					else if (Var6.f_6 == 0x00000001)
					{
						iVar7 = 0x0000000A;
					}
					else if (Var6.f_6 == 0x00000002)
					{
						iVar7 = 0x00000002;
					}
					else if (Var6.f_6 == 0x00000003)
					{
						iVar7 = 0x00000003;
					}
					else if (Var6.f_6 == 0x00000004)
					{
						iVar7 = 0x00000004;
					}
					else if (Var6.f_6 == 0x00000005)
					{
						iVar7 = 0x00000005;
					}
					else if (Var6.f_6 == 0x00000006)
					{
						iVar7 = 0x00000006;
					}
					else if (Var6.f_6 == 0x00000007)
					{
						iVar7 = 0x00000007;
					}
					else if (Var6.f_6 == 0x00000008)
					{
						iVar7 = 0x00000008;
					}
					else
					{
						iVar7 = 0xFFFFFFFF;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_115(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, 0x85C5D476, 0x00000000), iVar7, 0x00000002, Var6.f_1 != 0x00000000);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != 0xFFFFFFFF && Global_12B3B)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_115(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
			return;
		}
		iVar13 = 0x00000000;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_71(iParam0));
		iVar12 = 0x00000000;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_115(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_122(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_123(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000077;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008B;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000095;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_126(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_127(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000021, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000011, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000012, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000048;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000054, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000068, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_133(int iParam0)
{
	if (iParam0 < 0x00000088)
	{
		func_135(iParam0);
	}
	else
	{
		func_134(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_121(0x00000003, iParam0, 0x000000F2, 0xFFFFFFFF);
	}
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000031;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000008;
			iVar1 = 0x000003A1;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000352;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000044C;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x000004B0;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x000004C4;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000514;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000550;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002A;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002C;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002E;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000034;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000AA0;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000CB2;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000B86;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C1C;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C4E;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000CA8;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000D16;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000D48;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000CD0;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000018;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001A;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000015E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000172;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000008;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000028;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_156(iParam1);
			break;
		
		case 0x00000002:
			func_155(iParam1);
			break;
		
		case 0x00000003:
			func_151(iParam1);
			break;
		
		case 0x00000004:
			func_150(iParam1);
			break;
		
		case 0x00000006:
			func_149(iParam1);
			break;
		
		case 0x00000005:
			func_148(iParam1);
			break;
		
		case 0x00000008:
			func_147(iParam1);
			break;
		
		case 0x00000009:
			func_146(iParam1);
			break;
		
		case 0x0000000A:
			func_145(iParam1);
			break;
		
		case 0x00000001:
			func_144(iParam1);
			break;
		
		case 0x00000007:
			func_143(iParam1);
			break;
		
		case 0x0000000B:
			func_142(iParam1);
			break;
		
		case 0x0000000C:
			func_141(iParam1);
			break;
		
		case 0x0000000D:
			func_140(iParam1);
			break;
		
		case 0x0000000E:
			func_139(iParam1);
			break;
	}
}

void func_139(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x000011EE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x00001004;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F0A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x00001482;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x000013BA;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x000009C4;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x0000079E;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F3C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000DDE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00001194;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000B86;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000070;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000073;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000007D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C6;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000DC;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000D0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x000000A0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x000000AF, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_140(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000122A;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001388;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000002F, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000031;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000003F, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_144(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_146(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000000C, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000004D, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_148(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_149(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000EB;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000086, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008C;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000094;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000009A;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000009E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000084;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000094;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000022;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000024;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000020;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000075, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_151(int iParam0)
{
	if (iParam0 < 0x0000006B)
	{
		func_154(iParam0);
	}
	else if (iParam0 < 0x000000E3)
	{
		func_153(iParam0);
	}
	else
	{
		func_152(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_121(0x00000003, iParam0, 0x0000013E, 0xFFFFFFFF);
	}
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F2:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F3:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F4:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F5:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F6:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F7:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F8:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F9:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FA:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FB:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FC:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FD:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FE:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FF:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000100:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000101:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000102:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000103:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000104:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000105:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000106:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000107:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000108:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000109:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010A:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010B:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000010C:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000010D:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000010E:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000010F:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000110:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000111:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000112:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000113:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000114:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000115:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000116:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000117:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000118:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000119:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000011A:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000011B:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000011C:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000011D:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000118;
			break;
		
		case 0x0000011E:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000113;
			break;
		
		case 0x0000011F:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000120:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000121:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000122:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000123:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000127;
			break;
		
		case 0x00000124:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000125:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000126:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000127:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000128:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x000006D6;
			break;
		
		case 0x00000129:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000780;
			break;
		
		case 0x0000012A:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000012B:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x0000012C:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x000006D6;
			break;
		
		case 0x0000012D:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x000007C6;
			break;
		
		case 0x0000012E:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000012F:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000130:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000008;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000131:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000009;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000132:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000133:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000B;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000134:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000C;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000135:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000136:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000137:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000138:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004F;
			break;
		
		case 0x00000139:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004F;
			break;
		
		case 0x0000013A:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000005;
			iVar1 = 0x00000059;
			break;
		
		case 0x0000013B:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013C:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013D:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000008;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000190;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000023A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x000001D6;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000C;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000208;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000104;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000000DC;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000104;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C1C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000AF0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000BB8;
			iVar6 = 0x00000003;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000012;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000017;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001A;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x00000018;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000008B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003B;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000015, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_174(iParam1);
			break;
		
		case 0x00000002:
			func_173(iParam1);
			break;
		
		case 0x00000003:
			func_170(iParam1);
			break;
		
		case 0x00000004:
			func_169(iParam1);
			break;
		
		case 0x00000006:
			func_168(iParam1);
			break;
		
		case 0x00000005:
			func_167(iParam1);
			break;
		
		case 0x00000008:
			func_166(iParam1);
			break;
		
		case 0x00000009:
			func_165(iParam1);
			break;
		
		case 0x0000000A:
			func_164(iParam1);
			break;
		
		case 0x00000001:
			func_163(iParam1);
			break;
		
		case 0x00000007:
			func_162(iParam1);
			break;
		
		case 0x0000000B:
			func_161(iParam1);
			break;
		
		case 0x0000000C:
			func_160(iParam1);
			break;
		
		case 0x0000000D:
			func_159(iParam1);
			break;
		
		case 0x0000000E:
			func_158(iParam1);
			break;
	}
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x0000000B;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000038;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000046;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000052;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000EB;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000F5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000113;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000127;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000B3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000E1;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_159(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000F3C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x000011F8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000003D4;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000041A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000044C;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000076C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x000007BC;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000834;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x00000848;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007D0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			iVar1 = 0x000008E8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			iVar1 = 0x000008FC;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000092E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			iVar1 = 0x000008E8;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000002D, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000014, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000018, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_167(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x0000000E, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_168(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000299;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000026C;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000244;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000040;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x00000038;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000048;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000063, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_169(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000036B;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002E;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_170(int iParam0)
{
	if (iParam0 < 0x0000003C)
	{
		func_172(iParam0);
	}
	else
	{
		func_171(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_121(0x00000003, iParam0, 0x000000B5, 0xFFFFFFFF);
	}
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x000000BE;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000000D2;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000031;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00001356;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00001063;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C7B;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000B86;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000546;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000578;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x000004B0;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000546;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000514;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000564;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x0000053C;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000564;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000082;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000140;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_172(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000DAC;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000D2;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000D;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000136;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000003A;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_173(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_121(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_115(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_175()
{
	Global_12A92[0x00000000 /*14*/].f_1 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_2 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_5 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_3 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_4 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_6 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_D = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_C = 0x00000000;
	Global_12A92[0x00000000 /*14*/] = 0x00000000;
	StringCopy(&(Global_12A92[0x00000000 /*14*/].f_8), "NO_LABEL", 16);
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_12A92[0x00000001 /*14*/] = { func_112(iVar0, iParam1, iParam2, 0xFFFFFFFF) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000000C)
	{
		uVar5 = { func_93(iVar0, iParam2) };
		iVar2 = 0x00000000;
		while (iVar2 <= 0x0000000E)
		{
			if ((uVar5[iVar2] != 0xFFFFFF9D && iVar2 != 0x0000000C) && iVar2 != 0x0000000E)
			{
				if (!func_176(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 0x0000000D)
					{
						uVar6 = { func_90(iVar0, uVar5[iVar2]) };
						iVar3 = 0x00000000;
						while (iVar3 <= 0x00000008)
						{
							if (!func_176(iParam0, 0x0000000E, uVar6[iVar3]))
							{
								iVar4 = 0x00000000;
								while (iVar4 <= 0x00000013)
								{
									Global_12A92[0x00000002 /*14*/] = { func_112(iVar0, 0x0000000E, iVar4, 0xFFFFFFFF) };
									if (Global_12A92[0x00000002 /*14*/].f_C == iVar3)
									{
										if (func_176(iParam0, 0x0000000E, iVar4))
										{
											if (!func_67(iVar0, iParam2, 0x0000000E, iVar4, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
											{
												return 0x00000000;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_101(iParam0, iVar2);
						Global_12A92[0x00000002 /*14*/] = { func_112(iVar0, iVar2, iVar1, 0xFFFFFFFF) };
						if (!func_67(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
						{
							return 0x00000000;
						}
					}
				}
			}
			iVar2++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar8 = { func_90(iVar0, iParam2) };
		iVar7 = 0x00000000;
		while (iVar7 <= 0x00000008)
		{
			if (!func_176(iParam0, 0x0000000E, uVar8[iVar7]))
			{
				return 0x00000000;
			}
			iVar7++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000E)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_4 || Global_12A92[0x00000001 /*14*/].f_3 == 0xFFFFFFFF))
		{
			return 0x00000001;
		}
	}
	else if (Global_12A92[0x00000001 /*14*/].f_3 == unk_0x36C584991B4C183F(iParam0, func_71(iParam1)) && Global_12A92[0x00000001 /*14*/].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_71(iParam1)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_177(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (!unk_0x131F22FE6F47A65D(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 0x00000010);
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 0x00000020);
	}
	func_178(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_178(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_185(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_22())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_184(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_185(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_184(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_182(unk_0xD803B885F5E47A62())) && !func_180(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_179()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_182(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_179()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_180(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_181(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_181(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_107();
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

int func_182(int iParam0)
{
	if (func_180(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_183())
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

bool func_183()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_184(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_185(int iParam0)
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

void func_186(bool bParam0)
{
	unk_0xE96F19797E59AB06();
	if (unk_0x562F77A7F33D2E46("FAIRGROUND_RIDES_LEVIATHAN"))
	{
		unk_0x8910D3D58E0132B8("FAIRGROUND_RIDES_LEVIATHAN");
	}
	if (bParam0)
	{
		unk_0xA37A90C62806D848(0x00000001);
		unk_0x0674E58A79778E99(&Global_12C46, 0x00000007);
		func_1(0x000001F4, 0x00000001);
	}
	func_228(0x0000012F, 0x00000000, 0x00000000);
	func_227(&Local_169, 0x00000000, 0x00000001);
	func_226(&iLocal_182);
	func_226(&iLocal_183);
	func_56(unk_0x16F2683693E537C9());
	if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
	{
		unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
	}
	func_224();
	func_223(unk_0x16F2683693E537C9(), -1631.348f, -1112.651f, 12.0206f);
	unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 316.464f);
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
	unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
	unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
	func_221(0x00000001, 0x00000001, 0x00000001, 0x00000001);
	if (bParam0)
	{
		unk_0xA37A90C62806D848(0x00000001);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000007D0, 0x00000000, 0x00000001, 0x00000000);
		SYSTEM::WAIT(0x0000007D);
	}
	func_20(0x00000000);
	unk_0xB38702A5025BB490("fairgroundHub");
	if (bParam0)
	{
		func_58(0x000001F4, 0x00000000);
		func_189(func_39(), 0x00000001, 0x0000000F);
	}
	func_187(&uLocal_41);
	unk_0x10FAF14A60A0DBE1();
}

void func_187(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_188(uParam0, iVar0);
		iVar0++;
	}
}

int func_188(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1) || (*uParam0)[iParam1 /*7*/] == 0x00000000)
	{
		return 0x00000001;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000001:
			if (unk_0xC528DF93B7EC4D04((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xF8018A9AE1B6C5F6((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x00000002:
			if (unk_0xB4AE0788C1587752((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x8D17794CE3273D70((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x00000003:
			if (unk_0xDF3FDDA1EADEDD07((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xDD465543E2028AEA((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x00000004:
			unk_0x8C26F31DFF77D124();
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			if (unk_0xB87F6CF6E5628C67((uParam0[iParam1 /*7*/])->f_1))
			{
				unk_0x71199B01895C6202((uParam0[iParam1 /*7*/])->f_1);
			}
			break;
		
		case 0x00000007:
			if (unk_0x25F7A4D42AF2AB93())
			{
				unk_0x29D7581AEF4440C2();
			}
			break;
		
		case 0x00000008:
			if (unk_0x67C1D9E5B91B2E37((uParam0[iParam1 /*7*/])->f_5))
			{
				unk_0x11CCD0ACA866C6C5((uParam0[iParam1 /*7*/])->f_5, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (unk_0x27117E2CDD4D67C3((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xF5A41F3D3B38EFE3((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x0000000A:
			if (unk_0x3DDA6C6A285628E4((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xDB8844D4B7C60440((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x0000000B:
			if (unk_0x1C2E18E9C63BEB77((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x2F3540C2227116A3((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x0000000C:
			if (unk_0x1787731C4D1D6B19((uParam0[iParam1 /*7*/])->f_2))
			{
				unk_0x2914827AC2790D54((uParam0[iParam1 /*7*/])->f_2);
			}
			break;
		
		default:
			return 0x00000000;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	func_55(uParam0[iParam1 /*7*/]);
	return 0x00000001;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (func_220(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_220(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_190(func_220(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_219();
	if (iParam3 < 0x00000001)
	{
		return 0x00000000;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					func_218(0x00000063, 0x00000001);
					func_217(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_217(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_217(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_202(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_198(0x00000005))
					{
						fVar0 = 0.9f;
						iVar1 = 0x00000005;
					}
					break;
				
				case 0x0000003F:
				case 0x00000040:
				case 0x00000041:
				case 0x00000042:
				case 0x00000043:
				case 0x00000044:
					switch (iParam0)
					{
						case 0x00000000:
							func_217(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_217(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_217(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_198(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_217(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_217(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_217(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_217(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_217(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_217(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 0x00000063:
				case 0x00000064:
				case 0x00000065:
				case 0x00000066:
				case 0x00000068:
				case 0x00000069:
				case 0x0000006A:
				case 0x0000006B:
				case 0x0000006C:
				case 0x0000006D:
				case 0x0000006E:
				case 0x0000006F:
				case 0x00000070:
				case 0x00000071:
					switch (iParam0)
					{
						case 0x00000000:
							func_217(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_217(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_217(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_217(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_217(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_217(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_217(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_217(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_217(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_198(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_217(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_217(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_217(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_217(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_217(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_217(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_197(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_218(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_218(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_218(0x00000060, iParam3);
					break;
			}
			func_218(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_193(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_193(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 0x00000001:
			if (Global_E53E[iVar2] >= 0x00000000 && iParam3 > 0x00000000)
			{
				if (iVar5 <= 0x00000000)
				{
					Global_E53E[iVar2] = 0x7FFFFFFF;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0x00000000:
					func_217(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_217(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_217(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0x00000000:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0x00000000)
				{
					return 0x00000000;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 0x00000001)
	{
		if (iVar4 > 0x00000014)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 0x0000000A)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
		}
	}
	func_192(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_191(0x00000000);
	}
	return 0x00000001;
}

void func_191(bool bParam0)
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

void func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 0x00000001);
			break;
	}
}

void func_193(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_196(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_196(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_196(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_196(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_105(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_105(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_105(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_105(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_105(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_105(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	bVar0 = 0x00000000;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = 0x00000001;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_195() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_195() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_194(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "COUP_HAIRC";
		
		case 0x00000001:
			return "COUP_TATTOO";
		
		case 0x00000002:
			return "COUP_WARSTOCK";
		
		case 0x00000003:
			return "COUP_MOSPORT";
		
		case 0x00000004:
			return "COUP_ELITAS";
		
		case 0x00000005:
			return "COUP_MEDSPENS";
		
		case 0x00000006:
			return "COUP_SPRUNK";
		
		case 0x00000007:
			return "COUP_RESPRAY";
		
		case 0x00000008:
			return "COUP_XMAS2017";
		
		case 0x00000009:
			return "COUP_CAR_XMAS2018";
		
		case 0x0000000A:
			return "COUP_HELI_XMAS2018";
		
		case 0x0000000B:
			return "COUP_CAR2_XMAS2018";
		
		case 0x0000000C:
			return "COUP_CAS_ELITAS";
		
		case 0x0000000D:
			return "COUP_CAS_DOCKTEASE";
		
		case 0x0000000E:
			return "COUP_CAS_MOSPORT";
		
		case 0x0000000F:
			return "COUP_CAS_SSASA";
		
		case 0x00000010:
			return "COUP_CAS_WARSTOCK";
		
		case 0x00000011:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_195()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

int func_196(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_107();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_197(int iParam0)
{
	func_218(0x0000005D, iParam0);
	func_218(0x0000001D, iParam0);
	func_218(0x0000001E, iParam0);
}

bool func_198(int iParam0)
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
	
	if (iParam0 == 0x00000008)
	{
		return func_199(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_199(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_199(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_199(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_108(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_108(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_108(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_108(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_108(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_108(0x00002052, 0xFFFFFFFF, 0x00000000);
		if (iVar11 == 0x00000000 || iVar10 >= iVar11)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_195() /*10930*/].f_181E.f_A, iParam0);
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_107();
	}
	iVar1 = func_201(iParam0, iParam1);
	uVar2 = func_200(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_107();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_202(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (unk_0x5E109EC687D2605A(0x0000001B))
	{
		return 0x00000000;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 0xFFFFFFFF);
	if (iVar1 > 0x00000000 && (iVar2 / 0x001E8480) != (iVar1 / 0x001E8480))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 0x00000001);
		func_216(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_203(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_203(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_204(iParam0, iParam1);
}

int func_204(int iParam0, int iParam1)
{
	if (func_41(0x0000000E) && !func_215(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_7929 != 0x00000000 && !Global_12B4E)
	{
		return 0x00000000;
	}
	if (func_214(&Global_4127F1))
	{
		if (func_212(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_205(&Global_4127F1, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0x00000000;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_205(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_41(0x0000000E) && !func_215(iParam1))
	{
		return 0x00000000;
	}
	if (func_212(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_211(uParam0) < 0f)
	{
		func_210(uParam0, 0x00000000);
	}
	func_208(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_206(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_206(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_41(0x0000000E) && !func_215(iParam1))
	{
		return 0x00000000;
	}
	if (func_212(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_211(uParam0) < 0f)
	{
		func_210(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_207(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_207(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_209(uParam0, iVar0);
		iVar0++;
	}
	func_210(uParam0, (Global_4127F0 - 0.5f));
}

void func_209(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_210(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_211(var uParam0)
{
	return uParam0->f_50;
}

bool func_212(var uParam0, int iParam1)
{
	return func_213(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_213(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_214(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0x00000000;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

void func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

void func_219()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000000] == iVar0)
		{
			Global_E53E[0x00000000] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000001] == iVar0)
		{
			Global_E53E[0x00000001] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000002] == iVar0)
		{
			Global_E53E[0x00000002] = iVar0;
		}
	}
}

int func_220(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_221(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	unk_0xBC03DF6093E8E71F(iVar0, 0x00000000);
	unk_0x98E4DC66A651C9FA(iVar0, bParam3, 0x00000000);
	func_178(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (iParam2 == 0x00000001)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	unk_0xA37A90C62806D848(0x00000001);
	if (iParam0 == 0x00000001)
	{
		unk_0x5413873D3F67BF93(0x00000000, 0x00000000);
	}
	if (iParam1 == 0x00000001)
	{
		if ((iLocal_39 != 0x00000000 && iLocal_39 != joaat("object")) && iLocal_39 != joaat("gadget_parachute"))
		{
			if (func_59(unk_0x16F2683693E537C9()))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iLocal_39, 0x00000000))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_39, 0x00000000);
				}
			}
		}
	}
	if (func_222(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	}
}

int func_222(int iParam0)
{
	if (func_59(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_223(int iParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (unk_0xE82754C349C7B581(vParam1, &uVar0, 0x00000000, 0x00000000))
	{
		vParam1.z = uVar0;
	}
	if (func_56(iParam0))
	{
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	return vParam1;
}

void func_224()
{
	int iVar0;
	
	if (!func_56(iLocal_180[0x00000000]))
	{
		iLocal_180[0x00000000] = unk_0x7707E48765093646(joaat("prop_roller_car_01"), -1643.524f, -1124.681f, 17.4326f, 0x00000001, 0x00000001, 0x00000000);
	}
	if (!func_56(iLocal_180[0x00000001]))
	{
		iLocal_180[0x00000001] = unk_0x7707E48765093646(joaat("prop_roller_car_02"), -1645.146f, -1126.613f, 17.4326f, 0x00000001, 0x00000001, 0x00000000);
	}
	if (!func_56(iLocal_180[0x00000002]))
	{
		iLocal_180[0x00000002] = unk_0x7707E48765093646(joaat("prop_roller_car_02"), -1646.768f, -1128.545f, 17.4326f, 0x00000001, 0x00000001, 0x00000000);
	}
	if (!func_56(iLocal_180[0x00000003]))
	{
		iLocal_180[0x00000003] = unk_0x7707E48765093646(joaat("prop_roller_car_02"), -1648.39f, -1130.478f, 17.4326f, 0x00000001, 0x00000001, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_180)
	{
		if (func_56(iLocal_180[iVar0]))
		{
			unk_0xD8F6A53F4799FAFE(iLocal_180[iVar0], 140f);
			unk_0x4A4806F9D471E491(iLocal_180[iVar0], 0x00000001, 0x00000000);
			unk_0x20641932E5104B25(iLocal_180[iVar0], 0x00000001, 0x00000000);
			unk_0x1E9649458B15960F(iLocal_180[iVar0], 0x00000001);
			unk_0xE121AE1BBF90E186(iLocal_180[iVar0], 0x00000001);
			func_225(&(iLocal_180[iVar0]), 0x00000000);
		}
		iVar0++;
	}
}

void func_225(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

void func_226(int iParam0)
{
	if (*iParam0 != 0xFFFFFFFF)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = 0xFFFFFFFF;
	}
}

void func_227(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, iParam1, 0x00000000);
		}
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		unk_0xF737A3AD8873CE16();
		uParam0->f_17 = 0x00000000;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0x00000000;
	uParam0->f_15 = 0x00000000;
	uParam0->f_16 = 0x00000000;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_228(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_196((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_229();
	}
}

void func_229()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_216(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_232() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_230();
				}
			}
		}
	}
}

int func_230()
{
	if (func_231(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

bool func_231(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_232()
{
	return Global_7830;
}

