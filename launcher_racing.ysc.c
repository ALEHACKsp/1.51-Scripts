#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
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
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_65[3] = { 0f, 0f, 0f };
	vector3 vLocal_66[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char[] cLocal_73[8] = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
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
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
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
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
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
	var uLocal_205 = 0;
	var uLocal_206 = 0;
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
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
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
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_5 = 0x00000001;
	iLocal_6 = 0x00000086;
	iLocal_7 = 0x00000086;
	iLocal_8 = 0x00000001;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x00000001;
	iLocal_11 = 0x00000086;
	iLocal_12 = 0x00000001;
	iLocal_13 = 0x0000000C;
	iLocal_14 = 0x0000000C;
	fLocal_17 = 0.001f;
	iLocal_20 = 0xFFFFFFFF;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	iLocal_46 = 0x00000001;
	bLocal_55 = 0x00000001;
	iLocal_72 = joaat("feltzer2");
	iLocal_75 = 0x00000001;
	vLocal_83 = { 0f, 0f, 0f };
	vLocal_84 = { 1f, 1f, 1f };
	vLocal_85 = { 0f, 0f, 0f };
	vLocal_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	unk_0xDF8BDD00CF1D4043(0x00000001);
	vLocal_44 = { ScriptParam_238.f_1[0x00000000 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(0x00000053))
	{
		func_216(0x00000000);
	}
	func_213();
	switch (Local_43.f_1)
	{
		case 0x00000001:
		case 0x00000002:
			if (!func_212(0x00000000, 0x00000008))
			{
				func_216(0x00000000);
			}
			if (!func_211(Local_43))
			{
				func_216(0x00000000);
			}
			break;
		
		case 0x00000003:
			if (!func_212(0x00000000, 0x00000007))
			{
				func_216(0x00000000);
			}
			break;
		
		case 0x00000000:
			func_216(0x00000000);
			break;
	}
	func_205();
	if (!func_181())
	{
		func_216(0x00000000);
	}
	func_175();
	while (0x00000001)
	{
		func_172(&uLocal_90);
		if (func_181())
		{
			if (unk_0x338D6FF72D84D90F())
			{
				switch (iLocal_42)
				{
					case 0x00000000:
						iLocal_42 = 0x00000001;
						break;
					
					case 0x00000001:
						func_163();
						func_132();
						break;
					
					case 0x00000002:
						func_66();
						break;
					
					case 0x00000003:
						func_1();
						break;
				}
			}
			else
			{
				func_216(0x00000000);
			}
		}
		else
		{
			func_216(0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (!bLocal_53)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(0xFFFFFFFF);
	func_7(0x00000000);
	func_6(vLocal_44);
	func_5();
	Global_14065C = 0x00000001;
	Global_14065C.f_1 = Local_43;
	StringCopy(&(Global_14065C.f_2), func_4(), 24);
	StringCopy(&(Global_14065C.f_8), func_3(Local_43), 32);
	Global_14065C.f_10 = { vLocal_44 };
	Global_140870 = 0x00000001;
	func_216(0x00000001);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0xBA301E03A078FA59())
	{
		switch (iParam0)
		{
			case 0x00000008:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 0x00000006:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 0x00000007:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 0x00000005:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0x00000000:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 0x00000002:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 0x00000003:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 0x00000001:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 0x00000004:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xA3F916BCE430ED26())
	{
		switch (iParam0)
		{
			case 0x00000000:
				sVar0 = "dm_test_20";
				break;
			
			case 0x00000001:
				sVar0 = "dm_test_18";
				break;
			
			case 0x00000002:
				sVar0 = "dm_test_2";
				break;
			
			case 0x00000003:
				sVar0 = "dm_test_4";
				break;
			
			case 0x00000004:
				sVar0 = "dm_test_5";
				break;
			
			case 0x00000005:
				sVar0 = "dm_test_16";
				break;
			
			case 0x00000006:
				sVar0 = "dm_test_13";
				break;
			
			case 0x00000007:
				sVar0 = "dm_test_15";
				break;
			
			case 0x00000008:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x33A494591F2C1975())
	{
		switch (iParam0)
		{
			case 0x00000008:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 0x00000006:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 0x00000007:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 0x00000005:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0x00000000:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 0x00000002:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 0x00000003:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 0x00000001:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 0x00000004:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xDC30EF462887322E())
	{
		switch (iParam0)
		{
			case 0x00000000:
				sVar0 = "dm_test_20";
				break;
			
			case 0x00000001:
				sVar0 = "dm_test_18";
				break;
			
			case 0x00000002:
				sVar0 = "dm_test_2";
				break;
			
			case 0x00000003:
				sVar0 = "dm_test_4";
				break;
			
			case 0x00000004:
				sVar0 = "dm_test_5";
				break;
			
			case 0x00000005:
				sVar0 = "dm_test_16";
				break;
			
			case 0x00000006:
				sVar0 = "dm_test_13";
				break;
			
			case 0x00000007:
				sVar0 = "dm_test_15";
				break;
			
			case 0x00000008:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x0EFF6B4415DAF4A1())
	{
		switch (iParam0)
		{
			case 0x00000000:
				sVar0 = "dm_test_20";
				break;
			
			case 0x00000001:
				sVar0 = "dm_test_18";
				break;
			
			case 0x00000002:
				sVar0 = "dm_test_2";
				break;
			
			case 0x00000003:
				sVar0 = "dm_test_4";
				break;
			
			case 0x00000004:
				sVar0 = "dm_test_5";
				break;
			
			case 0x00000005:
				sVar0 = "dm_test_16";
				break;
			
			case 0x00000006:
				sVar0 = "dm_test_13";
				break;
			
			case 0x00000007:
				sVar0 = "dm_test_15";
				break;
			
			case 0x00000008:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (unk_0xBA301E03A078FA59())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xA3F916BCE430ED26())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x33A494591F2C1975())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xDC30EF462887322E())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x0EFF6B4415DAF4A1())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0x5D96D8530B3D0904(&Global_1406A9, 0x00000000);
}

void func_6(vector3 vParam0)
{
	Global_1406A9.f_6 = { vParam0 };
}

void func_7(int iParam0)
{
	Global_1406A9.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1406A9.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_43.f_2 = 0xFFFFFFFF;
	if (func_65(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
		{
			unk_0xCC095276B3DD380E(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	while (!func_59())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (Local_43.f_1 != 0x00000003)
	{
		func_16(func_53(), 0x00000001, Local_43.f_3);
		iVar0 = unk_0x1C0640BA9A7327B3() + 1500;
		iVar1 = unk_0x728870EB733D12A1();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 0x00000002, 0x3F000000, 0x00000000, 0x00000001, 0x00000000) || unk_0x1C0640BA9A7327B3() < iVar0)
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
		iVar2 = unk_0xA30EC016B12C03E4();
		if (unk_0xE1DBBD6CE209517C(iVar2))
		{
			unk_0x98E4DC66A651C9FA(iVar2, 0x00000000, 0x00000000);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0x00000000))
	{
		unk_0x92DCE5C81176D2B4("mission_Race");
		while (!unk_0x1FBF08B001C4788A("mission_Race"))
		{
			unk_0x92DCE5C81176D2B4("mission_Race");
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::START_NEW_SCRIPT_WITH_ARGS("mission_Race", &Local_43, 0x00000006, 0x000088B8);
	}
	unk_0x5E8C29AE121DF1C7("mission_Race");
	func_216(0x00000001);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000074, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000075, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000076, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000077, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000160, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000083, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000084, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000081, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000082, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000085, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000086, 0x00000001);
	unk_0xCFAE3195DD6AE715();
	func_13(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_1D) > 0x000001F4)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_13(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0x00000000);
			}
		}
	}
}

int func_14(int iParam0)
{
	if (func_15(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_15(int iParam0)
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

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (func_52(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_52(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_17(func_52(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_51();
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
					func_50(0x00000063, 0x00000001);
					func_49(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_49(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_49(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_33(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_28(0x00000005))
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
							func_49(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_49(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_49(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_28(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_49(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_49(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_49(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_49(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_49(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_49(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_49(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_49(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_49(joaat("sp2_money_spent_property"), iParam3);
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
									func_49(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_49(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_49(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_49(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_49(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_49(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_28(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_49(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_49(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_49(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_49(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_49(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_49(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_27(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_50(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_50(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_50(0x00000060, iParam3);
					break;
			}
			func_50(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
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
					func_49(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_49(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_49(joaat("sp2_total_cash_earned"), iParam3);
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
	func_19(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_18(0x00000000);
	}
	return 0x00000001;
}

void func_18(bool bParam0)
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

void func_19(int iParam0)
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

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_26(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_26(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_26(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_26(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_23(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_23(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_23(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_23(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_23(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_23(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_22() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_22() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_21(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_21(int iParam0)
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

int func_22()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_24(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1407E9;
}

int func_26(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_25();
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

void func_27(int iParam0)
{
	func_50(0x0000005D, iParam0);
	func_50(0x0000001D, iParam0);
	func_50(0x0000001E, iParam0);
}

bool func_28(int iParam0)
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
		return func_30(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_30(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_30(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_30(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_29(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_29(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_29(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_29(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_29(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_29(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_22() /*10930*/].f_181E.f_A, iParam0);
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_24(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_25();
	}
	iVar1 = func_32(iParam0, iParam1);
	uVar2 = func_31(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_25();
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

int func_33(bool bParam0)
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
		func_48(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_34(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_47(0x0000000E) && !func_46(iParam0))
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
	if (func_45(&Global_4127F1))
	{
		if (func_43(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_36(&Global_4127F1, iParam0))
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

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_47(0x0000000E) && !func_46(iParam1))
	{
		return 0x00000000;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0x00000000);
	}
	func_39(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_47(0x0000000E) && !func_46(iParam1))
	{
		return 0x00000000;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4127F0 - 0.5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_41(var uParam0, float fParam1)
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

float func_42(var uParam0)
{
	return uParam0->f_50;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_44(var uParam0, int iParam1)
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

bool func_45(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_46(int iParam0)
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

bool func_47(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_48(int iParam0, int iParam1)
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

void func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_50(int iParam0, int iParam1)
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

void func_51()
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

int func_52(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_53()
{
	func_54();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_54()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_57(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_56(unk_0x16F2683693E537C9());
			if (func_55(iVar0) && (!func_47(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_55(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_55(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_58(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_58(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_59()
{
	int iVar0;
	
	iVar0 = func_60(&(Local_43.f_2), 0x00000000, 0x00000009, 0x00000000, 0x00000000);
	if (!iVar0 == 0x00000001)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (!bParam3)
	{
		if (Global_177DE.f_2C == 0x00000001)
		{
			return 0x00000002;
		}
	}
	if (iParam1 == 0x00000000)
	{
		if (func_64(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *uParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*uParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *uParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *uParam0)
		{
			return 0x00000001;
		}
		*uParam0 = 0xFFFFFFFF;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		if (!func_62(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_61(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_A1B0 == 0x00000000)
	{
		return;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_A1B0)
	{
		if (Global_A1B6[iVar0 /*4*/] == *uParam0)
		{
			Global_A1B6[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 0xFFFFFFFF;
}

bool func_62(int iParam0)
{
	return func_63(iParam0, Global_A1D7);
}

int func_63(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000000F)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000009:
				case 0x0000000A:
				case 0x00000007:
				case 0x0000000D:
				case 0x0000000E:
					return 0x00000000;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000011)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
		case 0x00000008:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000006)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000011:
				case 0x0000000C:
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_64(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_62(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_65(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_66()
{
	int iVar0;
	
	switch (iLocal_49)
	{
		case 0x00000000:
			if (func_130(0x00000000, 0xFFFFFFFF, 0x00000000))
			{
				unk_0xA37A90C62806D848(0x00000001);
				func_122();
				unk_0xBEF52C1D400C0A44(0x00000000);
				iLocal_54 = 0x00000001;
				bLocal_52 = 0x00000000;
				bLocal_53 = 0x00000000;
				iLocal_49 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_79())
			{
				iLocal_49 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			iVar0 = unk_0xA30EC016B12C03E4();
			unk_0xBC03DF6093E8E71F(iVar0, 0x00000000);
			unk_0x98E4DC66A651C9FA(iVar0, 0x00000001, 0x00000000);
			func_70(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_67(0x00000001, 0xFFFFFFFF);
			iLocal_49 = 0x00000000;
			if (bLocal_52)
			{
				iLocal_42 = 0x00000003;
			}
			else
			{
				unk_0xBEF52C1D400C0A44(0x00000001);
				iLocal_42 = 0x00000001;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_69(&iVar0, 0x00000000, iParam1))
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
		func_68(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_68(int iParam0)
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

int func_69(var uParam0, bool bParam1, int iParam2)
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

void func_70(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_78(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_77())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_76(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_78(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_76(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_74(unk_0xD803B885F5E47A62())) && !func_72(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_71()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_74(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_71()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_72(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_73(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_25();
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

int func_74(int iParam0)
{
	if (func_72(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_75())
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

bool func_75()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_76(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_77()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_78(int iParam0)
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

int func_79()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_121(&iVar0, &iVar1, &uVar2, &uVar3, 0x00000000);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C9);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
	if (iLocal_51 != 0x00000000)
	{
		if (SYSTEM::TIMERA() > 0x00000320 || (((iVar1 > 0xFFFFFFC0 && iVar1 < 0x00000040) && iVar0 > 0xFFFFFFC0) && iVar0 < 0x00000040))
		{
			iLocal_51 = 0x00000000;
		}
		else
		{
			iVar0 = 0x00000000;
			iVar1 = 0x00000000;
		}
	}
	bVar4 = (iVar1 < 0xFFFFFFC0 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC));
	bVar5 = (iVar1 > 0x00000040 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB));
	bVar6 = unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9);
	bVar7 = unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA);
	bVar8 = (iVar1 < 0xFFFFFFC0 || iVar1 > 0x00000040);
	if (bVar6)
	{
		if (iLocal_50 == 0x00000001)
		{
			bLocal_53 = 0x00000001;
		}
		else
		{
			bLocal_53 = 0x00000000;
		}
		bLocal_52 = 0x00000001;
		return 0x00000001;
	}
	else if (bVar7)
	{
		iLocal_76 = 0x00000000;
		bLocal_52 = 0x00000000;
		return 0x00000001;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0x00000000)
			{
				iLocal_50 = 0x00000001;
			}
			else if (iLocal_50 == 0x00000000)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 0x00000001)
			{
				iLocal_50 = 0x00000000;
			}
			else if (iLocal_50 == 0x00000001)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_51 = 0x00000001;
			}
			func_120(iLocal_50, 0x00000001, 0x00000001);
		}
	}
	func_80(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	return 0x00000000;
}

void func_80(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_69(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_117(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_115(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
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
		if (func_114())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_114())
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
			func_110(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
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
					StringCopy(&cVar63, func_109(0x0000001D), 64);
					StringCopy(&cVar64, func_106(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_105(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
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
				func_105(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_104();
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
					func_104();
					func_102((((Global_574B + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_104();
						func_102((((Global_574B + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
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
				func_105(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_115(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
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
				func_105(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_101(fVar40);
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
					func_115(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_100(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_109(Global_574E.f_12A0), func_106(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
					func_115(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
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
				func_105(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_101(fVar40);
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
					func_115(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_100(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_109(Global_412185.f_43), func_106(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
			func_95(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
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
											func_93(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_115(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
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
										if (func_115(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_115(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_109(0x0000001A), func_106(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_115(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_115(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_109(0x0000001B), func_106(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
										func_93(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_92(bVar32);
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
												if (func_115(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_115(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_100(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_109(Global_574E.f_1151[(iVar22 + iVar28)]), func_106(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_109(Global_574E.f_1151[(iVar22 + iVar28)]), func_106(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
											if (func_91() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_93(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
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
												if (func_115(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_115(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_100(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_109(Global_574E.f_1151[(iVar22 + iVar14)]), func_106(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_109(Global_574E.f_1151[(iVar22 + iVar14)]), func_106(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_109(Global_574E.f_1151[(iVar22 + iVar14)]), func_106(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
										func_93(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_92(bVar32);
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
										if (func_115(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_115(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_109(0x0000001A), func_106(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_115(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_115(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_109(0x0000001B), func_106(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_93(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_90((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
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
										func_93(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_92(bVar32);
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
										if (func_115(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_115(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_109(0x0000001A), func_106(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_115(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_115(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_109(0x0000001B), func_106(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_93(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_89((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_115(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
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
											if (func_115(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_115(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_100(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_109(0x0000001A), func_106(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_115(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_115(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_100(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_109(0x0000001B), func_106(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_115(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_100(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_109(Global_574E.f_1151[iVar22]), func_106(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_88(Global_574E.f_1151[iVar22])), (fVar37 * func_88(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
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
								if (func_115(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
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
		func_82(0x00000000);
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
		func_81(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_81(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_82(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_86(0x00000000))
		{
			func_83(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_83(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_85())
		{
			func_84(0x00000001, 0x00000001);
		}
		else
		{
			func_84(0x00000000, 0x00000000);
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
	if (!func_77())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_86(0x00000000))
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

bool func_85()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_86(int iParam0)
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

bool func_87()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_88(int iParam0)
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

void func_89(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_91()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_92(bool bParam0)
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

void func_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_94(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_94(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_69(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_117(bParam4, bParam8))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_72(unk_0xD803B885F5E47A62(), 0x00000000))
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
					func_97(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_97(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_96(&(Global_574E.f_1364[iVar1 /*4*/]));
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
				func_97(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_96(&(Global_412185.f_10));
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

void func_96(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_97(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_98()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_99())
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

int func_99()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_100(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_101(float fParam0)
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

void func_102(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_103(char* sParam0, int iParam1, int iParam2)
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
	func_104();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_104()
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

void func_105(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

var func_106(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_108(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_107(&uVar1);
			}
		}
		else
		{
			return func_107(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_107(var uParam0)
{
	return uParam0;
}

struct<13> func_108(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_109(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_108(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_107(&uVar0);
		}
		else
		{
			return func_107(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_110(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_113(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_113(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_112(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_115(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
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
			fVar4 = func_111(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
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

float func_111(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_112(char* sParam0)
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
	func_93(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_113(int iParam0, bool bParam1)
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

int func_114()
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

int func_115(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_109(iParam0), 64);
	StringCopy(&cVar1, func_106(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_114())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_114())
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
		vVar7.x = (vVar7.x * (func_116(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_116(iParam0) / fVar4));
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

float func_116(int iParam0)
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

int func_117(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_119(0x00000008, 0xFFFFFFFF) && func_118() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_118()
{
	return Global_14082C;
}

bool func_119(int iParam0, int iParam1)
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

void func_120(int iParam0, bool bParam1, int iParam2)
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

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DA) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DB) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DC) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DD) * 127f));
		}
	}
}

void func_122()
{
	func_129(0x00000000, 0x00000000);
	func_128(0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_127(0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
	if (Local_43.f_1 == 0x00000003)
	{
		func_126("SEA_MENU");
	}
	else
	{
		func_126("STREET_MENU");
	}
	func_110(0x00000000, "RACES_OPT_SP", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	func_110(0x00000001, "RACES_OPT_MP", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	func_125(0x000000C9, "ITEM_SELECT", 0xFFFFFFFF);
	func_125(0x000000CA, "ITEM_EXIT", 0xFFFFFFFF);
	func_124(0x0000000B, "ITEM_SCROLL", 0xFFFFFFFF);
	func_123(0x00000000);
	func_120(0x00000000, 0x00000001, 0x00000001);
	iLocal_50 = 0x00000000;
}

void func_123(int iParam0)
{
	Global_574E.f_166A = iParam0;
}

void func_124(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(0x00000002, iParam0, 0x00000001);
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
	Global_574E.f_13A2[Global_574E.f_12A1] = 0x00000169;
	Global_574E.f_13AF[Global_574E.f_12A1] = iParam0;
	Global_574E.f_12A1++;
}

void func_125(int iParam0, char* sParam1, int iParam2)
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

void func_126(char* sParam0)
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

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0x00000000] = iParam0;
	Global_574E.f_13C0[0x00000001] = iParam1;
	Global_574E.f_13C0[0x00000002] = iParam2;
	Global_574E.f_13C0[0x00000003] = iParam3;
	Global_574E.f_13C0[0x00000004] = iParam4;
	Global_574E.f_146A = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
}

void func_129(bool bParam0, bool bParam1)
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

bool func_130(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_69(&iVar0, 0x00000001, iParam1))
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
	bVar2 = func_131(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_131(var uParam0)
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

void func_132()
{
	int iVar0;
	
	if (func_162())
	{
		if (func_145())
		{
			iVar0 = 0x00000006;
			if (Local_43.f_1 == 0x00000001)
			{
				iVar0 = 0x00000004;
			}
			func_143(iVar0);
			if (func_65(iLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (unk_0xB4ECF989E2C1DAC8(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 0x00000003))
					{
						unk_0xFB131B855F2FD560(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 0xC1000000);
					}
					func_134(iVar0);
				}
			}
			unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
			if (unk_0xB9132A06AE472728(0x00000000, 0x00000033))
			{
				iLocal_76 = 0x00000001;
				unk_0xA37A90C62806D848(0x00000001);
				iLocal_42 = 0x00000003;
			}
		}
		else if (!iLocal_46)
		{
			unk_0x29D5132FBDCF2B1E(0x00000000);
			iLocal_46 = 0x00000001;
		}
	}
	else
	{
		func_133();
		if (!iLocal_46)
		{
			unk_0x29D5132FBDCF2B1E(0x00000000);
			iLocal_46 = 0x00000001;
		}
	}
}

void func_133()
{
	if (iLocal_45 && unk_0x1C0640BA9A7327B3() > iLocal_48)
	{
		unk_0xA37A90C62806D848(0x00000001);
		iLocal_45 = 0x00000000;
	}
}

void func_134(int iParam0)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iLocal_56[iParam0], 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		switch (iLocal_77)
		{
			case 0x00000000:
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_56[iParam0], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 64f)
				{
					iLocal_78 = 0x00000000;
					iLocal_79 = 0x00000000;
					iLocal_77 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				unk_0xDD353D0E9C789D0E(&iVar0);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x75ABDC5F81978924(iVar0);
				unk_0x78ADC381772E3D54(iLocal_56[iParam0], iVar0);
				unk_0xF82EA857DA10E0CD(&iVar0);
				iLocal_77 = 0x00000002;
				break;
			
			case 0x00000002:
				if (unk_0xD1960163A3042274(iLocal_56[iParam0], 0x0E763797) != 0x00000001 || unk_0x7069CC4DE1EA3FAA(iLocal_56[iParam0], unk_0x16F2683693E537C9(), 20f))
				{
					unk_0xF96A174EE26D7588(iLocal_56[iParam0], unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					if (!iLocal_79)
					{
						func_141(iLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 0x0000000B);
					}
					else
					{
						func_141(iLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 0x0000000B);
					}
					iLocal_77 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (!unk_0x65636D4556D82155(iLocal_56[iParam0]))
				{
					func_139(&iLocal_80);
					unk_0xC6EB89C59F2AF6B8(iLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_77 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_56[iParam0], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 225f)
				{
					iLocal_77 = 0x00000000;
				}
				if (func_135(&iLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 0x00000001;
					iLocal_77 = 0x00000001;
				}
				else if (func_135(&iLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 0x00000001;
					iLocal_77 = 0x00000001;
				}
				break;
			
			case 0x00000005:
				break;
			}
	}
}

float func_135(int iParam0)
{
	if (func_138(iParam0))
	{
		if (func_137(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_136(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_136(bool bParam0)
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

bool func_137(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_138(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_139(int iParam0)
{
	func_140(iParam0, 0f);
}

void func_140(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_136(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_141(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_142(iParam3), 0x00000000);
}

int func_142(int iParam0)
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

void func_143(int iParam0)
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !func_144())
	{
		if (func_65(iLocal_56[iParam0]))
		{
			if (iLocal_46 && unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 20f)
			{
				unk_0xC0B0B9E466C0ED17(iLocal_56[iParam0], 0f, 0f, 0f, 0x00000001, 0x000007D0, 0x000007D0, 0x000007D0, 0x00000000);
				iLocal_46 = 0x00000000;
			}
		}
	}
}

int func_144()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_145()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_161())
		{
			return 0x00000000;
		}
		if (func_160(func_53()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 0x00000003)
			{
				func_157("SEA_NA_CASH", Local_43.f_3);
			}
			else
			{
				func_157("STREET_NA_CASH", Local_43.f_3);
			}
			iLocal_45 = 0x00000001;
			iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
			return 0x00000000;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			func_156(&iLocal_0);
			iLocal_0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if (!func_151())
			{
				iLocal_45 = 0x00000001;
				iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
				return 0x00000000;
			}
			else if ((unk_0x7F6DC62EA9922664(iLocal_0) <= 0x000000C8 || unk_0x4E861BC5B1EDA7BD(iLocal_0)) || func_150())
			{
				func_149("RACE_VehDmg");
				iLocal_45 = 0x00000001;
				iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
				return 0x00000000;
			}
			else if (unk_0xA30B8362589C124A(iLocal_0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
			{
				func_146();
				return 0x00000000;
			}
			else
			{
				if (func_86(0x00000000) || unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
				{
					func_133();
					return 0x00000000;
				}
				switch (Local_43.f_1)
				{
					case 0x00000001:
						func_157("STREET_PLAY_B", Local_43.f_3);
						break;
					
					case 0x00000002:
						func_157("STREET_PLAY_C", Local_43.f_3);
						break;
					
					case 0x00000003:
						func_149("SEA_PLAY");
						break;
				}
				iLocal_45 = 0x00000001;
				iLocal_48 = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
		else
		{
			func_156(&iLocal_0);
			func_146();
			return 0x00000000;
		}
	}
	return 0x00000000;
}

void func_146()
{
	char* sVar0;
	
	if (Local_43.f_1 == 0x00000003)
	{
		if (func_14(iLocal_57))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_148(sVar0))
		{
			func_147(sVar0);
			iLocal_45 = 0x00000001;
			iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
		}
	}
	else if (Local_43.f_1 == 0x00000001)
	{
		if (!func_148("STREET_NA_BIKE"))
		{
			func_147("STREET_NA_BIKE");
			iLocal_45 = 0x00000001;
			iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
		}
	}
	else if (!func_148("STREET_NA_CAR"))
	{
		func_147("STREET_NA_CAR");
		iLocal_45 = 0x00000001;
		iLocal_48 = unk_0x1C0640BA9A7327B3() + 1000;
	}
}

void func_147(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_148(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_149(char* sParam0)
{
	if (!func_148(sParam0))
	{
		func_147(sParam0);
	}
}

int func_150()
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
	if (unk_0x7D8B2A8F9EA82DB7(iVar0))
	{
		if (unk_0x464B3D84B739AE72(iLocal_0, 0x00000006, 0x00000000) || unk_0x464B3D84B739AE72(iLocal_0, 0x00000007, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else if (unk_0x8E39AC3C76C8AA58(iVar0))
	{
		if (((unk_0x464B3D84B739AE72(iLocal_0, 0x00000000, 0x00000000) || unk_0x464B3D84B739AE72(iLocal_0, 0x00000001, 0x00000000)) || unk_0x464B3D84B739AE72(iLocal_0, 0x00000004, 0x00000000)) || unk_0x464B3D84B739AE72(iLocal_0, 0x00000005, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_151()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_43.f_1)
	{
		case 0x00000001:
			iVar0 = func_155();
			if (iVar0 == 0x00000001)
			{
				func_149("STREET_NA_COP");
				return 0x00000000;
			}
			else if (iVar0 == 0x00000002)
			{
				func_149("STREET_NA_BIKE");
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			iVar0 = func_153();
			if (iVar0 == 0x00000001)
			{
				func_149("STREET_NA_COP");
				return 0x00000000;
			}
			else if (iVar0 == 0x00000002)
			{
				func_149("STREET_NA_CAR");
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (!func_152())
			{
				if (func_14(iLocal_57))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_149(sVar1);
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

int func_152()
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(iLocal_0))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(iLocal_0))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
			if (func_154(iVar0))
			{
				return 0x00000001;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == 0x73920F8E)
			{
				return 0x00000001;
			}
			if (((unk_0x7D8B2A8F9EA82DB7(iVar0) || unk_0xA7082C42B8809BF2(iVar0)) || unk_0xAFB8495D36825275(iVar0)) || unk_0xC41A9202669A24C4(iVar0))
			{
				return 0x00000002;
			}
			iVar2[0x00000000] = joaat("ambulance");
			iVar2[0x00000001] = joaat("benson");
			iVar2[0x00000002] = joaat("biff");
			iVar2[0x00000003] = joaat("bus");
			iVar2[0x00000004] = 0x73920F8E;
			iVar2[0x00000005] = joaat("forklift");
			iVar2[0x00000006] = joaat("mule");
			iVar2[0x00000007] = joaat("mule2");
			iVar2[0x00000008] = joaat("packer");
			iVar2[0x00000009] = joaat("phantom");
			iVar2[0x0000000A] = joaat("mower");
			iVar2[0x0000000B] = joaat("stockade");
			iVar2[0x0000000C] = joaat("squalo");
			iVar2[0x0000000D] = joaat("maverick");
			iVar2[0x0000000E] = joaat("polmav");
			iVar2[0x0000000F] = joaat("airtug");
			iVar2[0x00000010] = joaat("boxville3");
			iVar2[0x00000011] = joaat("annihilator");
			iVar2[0x00000012] = joaat("dinghy");
			iVar2[0x00000013] = 0x00000000;
			iVar2[0x00000014] = joaat("ripley");
			iVar2[0x00000015] = joaat("trash");
			iVar2[0x00000016] = joaat("burrito");
			iVar2[0x00000017] = joaat("pony");
			iVar2[0x00000018] = joaat("speedo");
			iVar2[0x00000019] = joaat("marquis");
			iVar2[0x0000001A] = joaat("sanchez");
			iVar2[0x0000001B] = joaat("airtug");
			iVar2[0x0000001C] = joaat("taco");
			iVar2[0x0000001D] = joaat("barracks");
			iVar2[0x0000001E] = joaat("romero");
			iVar2[0x0000001F] = joaat("blazer");
			iVar2[0x00000020] = joaat("blazer2");
			iVar2[0x00000021] = joaat("bodhi2");
			iVar2[0x00000022] = joaat("boxville2");
			iVar2[0x00000023] = joaat("bulldozer");
			iVar2[0x00000024] = joaat("caddy");
			iVar2[0x00000025] = joaat("caddy2");
			iVar2[0x00000026] = joaat("camper");
			iVar2[0x00000027] = joaat("tiptruck");
			iVar2[0x00000028] = joaat("tourbus");
			iVar2[0x00000029] = joaat("towtruck");
			iVar2[0x0000002A] = joaat("towtruck2");
			iVar2[0x0000002B] = joaat("tractor");
			iVar2[0x0000002C] = joaat("tractor2");
			iVar2[0x0000002D] = joaat("utillitruck");
			iVar2[0x0000002E] = joaat("utillitruck2");
			iVar2[0x0000002F] = joaat("utillitruck3");
			iVar2[0x00000030] = joaat("ratloader");
			iVar2[0x00000031] = joaat("dloader");
			iVar2[0x00000032] = joaat("docktug");
			iVar2[0x00000033] = joaat("dump");
			iVar2[0x00000034] = joaat("gburrito");
			iVar2[0x00000035] = joaat("handler");
			iVar2[0x00000036] = joaat("hauler");
			iVar2[0x00000037] = joaat("journey");
			iVar2[0x00000038] = joaat("rentalbus");
			iVar2[0x00000039] = joaat("mixer");
			iVar2[0x0000003A] = joaat("rhino");
			iVar2[0x0000003B] = joaat("cutter");
			iVar2[0x0000003C] = joaat("pounder");
			iVar2[0x0000003D] = joaat("tiptruck2");
			iVar2[0x0000003E] = joaat("mixer2");
			iVar2[0x0000003F] = joaat("rubble");
			iVar2[0x00000040] = joaat("scrap");
			iVar2[0x00000041] = joaat("armytanker");
			iVar2[0x00000042] = joaat("barracks2");
			iVar2[0x00000043] = joaat("airbus");
			iVar2[0x00000044] = joaat("coach");
			iVar2[0x00000045] = joaat("pbus");
			iVar2[0x00000046] = joaat("riot");
			iVar2[0x00000047] = 0x00000000;
			iVar2[0x00000048] = joaat("stockade3");
			iVar2[0x00000049] = joaat("flatbed");
			iVar2[0x0000004A] = joaat("boxville");
			iVar2[0x0000004B] = joaat("burrito2");
			iVar2[0x0000004C] = joaat("burrito3");
			iVar2[0x0000004D] = joaat("burrito4");
			iVar2[0x0000004E] = joaat("rumpo");
			iVar2[0x0000004F] = joaat("speedo2");
			iVar2[0x00000050] = 0x00000000;
			iVar2[0x00000051] = joaat("blimp");
			iVar2[0x00000052] = joaat("blimp2");
			iVar1 = 0x00000000;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0x00000002;
				}
				iVar1++;
			}
		}
	}
	return 0x00000000;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_155()
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(iLocal_0))
		{
			iVar0 = unk_0x134B62B726CEC8E6(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 0x00000001;
			}
			if (unk_0x7D8B2A8F9EA82DB7(iVar0) && !unk_0xAD09C9A4B56FA133(iVar0))
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000002;
}

void func_156(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0x00000000);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_157(char* sParam0, int iParam1)
{
	if (!func_159(sParam0, iParam1))
	{
		func_158(sParam0, iParam1);
	}
}

void func_158(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_159(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_160(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000001:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000002:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		default:
	}
	return 0x00000000;
}

int func_161()
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			if (func_15(iVar0))
			{
				if (unk_0xE934758D273C899A(iVar0))
				{
					if (Local_43.f_1 == 0x00000003 && unk_0x70EED0761B82965E(iVar0))
					{
						return 0x00000000;
					}
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000000;
}

int func_162()
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 0x00000014;
		if (Local_43.f_1 == 0x00000003)
		{
			iVar0 = 0x00000028;
		}
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_44, 0x00000001) < IntToFloat(iVar0) && unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_168(&uLocal_90))
	{
		if (Local_43.f_1 == 0x00000002)
		{
			if (func_165())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_57))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_71) && unk_0xB87F6CF6E5628C67(iLocal_71))
					{
						iLocal_57 = unk_0x122AAB0B1D6F55AD(iLocal_71, vLocal_59, fLocal_60, 0x00000001, 0x00000001, 0x00000000);
						if (unk_0x3FC59DD18F049D6E(0x00000001) && unk_0x5C45F6B29A99E47E())
						{
							iLocal_58 = unk_0x0268AF082D60F2AE(iLocal_57, 0x00000001);
							unk_0xD1F0F33C375B8446(iLocal_58, iLocal_57, 0x00000001, 0x05F5E0FF);
							unk_0x11AD11297DC58CC7(iLocal_58, 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_58, 0x00000001);
						}
						unk_0xB9FD7450C0DAB575(iLocal_57, 0x40A00000);
						unk_0x56FDC9ADE35F7DB0(iLocal_57, 0x00000001, 0x00000001, 0x00000000);
						unk_0x3E5CE368CD085FFA(iLocal_57, 0x00000001);
						unk_0x0218D9089D75EFEE(iLocal_57, 0x00000001);
						unk_0x27B495357E55D511(unk_0xE4B65163E4129619(0x0000000A), 0x00000001);
						unk_0x3CBF2C83A68C1611(iLocal_57, unk_0xE4B65163E4129619(0x0000000A));
						unk_0x316958DDB94DF3FC(iLocal_57, 0x00000000);
						unk_0x71199B01895C6202(iLocal_71);
						SYSTEM::WAIT(0x00000000);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_61))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_72))
					{
						iLocal_61 = unk_0x122AAB0B1D6F55AD(iLocal_72, vLocal_62, fLocal_63, 0x00000001, 0x00000001, 0x00000000);
						unk_0x56FDC9ADE35F7DB0(iLocal_61, 0x00000000, 0x00000001, 0x00000000);
						unk_0x3E5CE368CD085FFA(iLocal_61, 0x00000001);
						unk_0x0218D9089D75EFEE(iLocal_61, 0x00000001);
						unk_0xB9FD7450C0DAB575(iLocal_61, 0x40A00000);
						unk_0x27B495357E55D511(unk_0xE4B65163E4129619(0x0000000A), 0x00000001);
						unk_0x3CBF2C83A68C1611(iLocal_61, unk_0xE4B65163E4129619(0x0000000A));
						unk_0x316958DDB94DF3FC(iLocal_61, 0x00000000);
						unk_0x71199B01895C6202(iLocal_72);
						SYSTEM::WAIT(0x00000000);
					}
				}
				if (unk_0xB4AE0788C1587752(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0x00000000;
						while (iVar0 <= (iLocal_70 - 0x00000001))
						{
							if (unk_0xC844350D5D58C99A(iLocal_56[iVar0]))
							{
								if (!unk_0x437347B10A200C4B(iLocal_56[iVar0], 0x00000000) && !func_164(iLocal_56[iVar0], 0x87B9A382))
								{
									unk_0xC6EB89C59F2AF6B8(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0xFADC0A217229F6B5(iLocal_56[iVar0], 0x00000001);
								}
							}
							else if (unk_0xB87F6CF6E5628C67(iLocal_70[iVar0]))
							{
								iLocal_56[iVar0] = unk_0x36F2404464202779(0x00000019, iLocal_70[iVar0], vLocal_66[iVar0 /*3*/], fLocal_67[iVar0], 0x00000001, 0x00000001);
								unk_0x08841CDB215AE18F(iLocal_56[iVar0], vLocal_66[iVar0 /*3*/], 0x00000000, 0x00000000, 0x00000001);
								unk_0x11AD11297DC58CC7(iLocal_56[iVar0], 0x00000001);
								unk_0xC6EB89C59F2AF6B8(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0xFADC0A217229F6B5(iLocal_56[iVar0], 0x00000001);
							}
							iVar0++;
						}
						if ((((((((func_65(iLocal_56[0x00000000]) && func_65(iLocal_56[0x00000001])) && func_65(iLocal_56[0x00000002])) && func_65(iLocal_56[0x00000003])) && func_65(iLocal_56[0x00000004])) && func_65(iLocal_56[0x00000005])) && func_65(iLocal_56[0x00000006])) && func_14(iLocal_57)) && func_14(iLocal_61))
						{
							bLocal_55 = 0x00000001;
							iVar0 = 0x00000000;
							while (iVar0 <= (iLocal_70 - 0x00000001))
							{
								unk_0x71199B01895C6202(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0x00000000;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 0x00000001)
		{
			if (func_165())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_57))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_71))
					{
						iLocal_57 = unk_0x122AAB0B1D6F55AD(iLocal_71, vLocal_59, fLocal_60, 0x00000001, 0x00000001, 0x00000000);
						if (unk_0x3FC59DD18F049D6E(0x00000000) && unk_0x1E3C51C9DE5100B7())
						{
							iLocal_58 = unk_0x0268AF082D60F2AE(iLocal_57, 0x00000001);
							unk_0xD1F0F33C375B8446(iLocal_58, iLocal_57, 0x00000001, 0x05F5E0FF);
							unk_0x11AD11297DC58CC7(iLocal_58, 0x00000001);
							unk_0xFADC0A217229F6B5(iLocal_58, 0x00000001);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_57, 0x00000001, 0x00000001, 0x00000000);
						unk_0x3E5CE368CD085FFA(iLocal_57, 0x00000001);
						unk_0x0218D9089D75EFEE(iLocal_57, 0x00000001);
						unk_0x27B495357E55D511(unk_0xE4B65163E4129619(0x0000000A), 0x00000001);
						unk_0x3CBF2C83A68C1611(iLocal_57, unk_0xE4B65163E4129619(0x0000000A));
						unk_0x316958DDB94DF3FC(iLocal_57, 0x00000000);
						unk_0x71199B01895C6202(iLocal_71);
					}
				}
				if (unk_0xB4AE0788C1587752(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0x00000000;
						while (iVar1 <= (iLocal_70 - 0x00000003))
						{
							if (unk_0xC844350D5D58C99A(iLocal_56[iVar1]))
							{
								if (!unk_0x437347B10A200C4B(iLocal_56[iVar1], 0x00000000) && !func_164(iLocal_56[iVar1], 0x87B9A382))
								{
									unk_0x08841CDB215AE18F(iLocal_56[iVar1], vLocal_66[iVar1 /*3*/], 0x00000000, 0x00000000, 0x00000001);
									if (iVar1 != 0x00000002 && iVar1 != 0x00000003)
									{
										unk_0xC6EB89C59F2AF6B8(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									}
									else
									{
										unk_0xC6EB89C59F2AF6B8(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0.5f, 0x00000000, 0x00000000, 0x00000000);
									}
									unk_0xFADC0A217229F6B5(iLocal_56[iVar1], 0x00000001);
								}
							}
							else if (unk_0xB87F6CF6E5628C67(iLocal_70[iVar1]))
							{
								iLocal_56[iVar1] = unk_0x36F2404464202779(0x00000019, iLocal_70[iVar1], vLocal_66[iVar1 /*3*/], fLocal_67[iVar1], 0x00000001, 0x00000001);
								unk_0x11AD11297DC58CC7(iLocal_56[iVar1], 0x00000001);
							}
							iVar1++;
						}
						if ((((func_65(iLocal_56[0x00000000]) && func_65(iLocal_56[0x00000001])) && func_65(iLocal_56[0x00000002])) && func_65(iLocal_56[0x00000003])) && func_65(iLocal_56[0x00000004]))
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_56[0x00000004], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000004);
							iVar1 = 0x00000000;
							while (iVar1 <= (iLocal_70 - 0x00000001))
							{
								unk_0x71199B01895C6202(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0x00000000;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 0x00000003)
		{
			if (func_165())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_57))
				{
					if (unk_0xB87F6CF6E5628C67(iLocal_71))
					{
						iLocal_57 = unk_0x122AAB0B1D6F55AD(iLocal_71, vLocal_59, fLocal_60, 0x00000001, 0x00000001, 0x00000000);
						unk_0xB9FD7450C0DAB575(iLocal_57, 0x40A00000);
						unk_0x657C23FBB4F6EEA5(iLocal_57, 0f);
						unk_0x104763F18983A32D(iLocal_57, 0x00000000);
						unk_0xE52EED22AB2D2450(iLocal_57, 0x00000000);
						if (unk_0x6AC695D09170F27D(iLocal_57))
						{
							unk_0xB078AFA7242F1F7B(iLocal_57, 0x00000001);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_57, 0x00000000, 0x00000001, 0x00000000);
					}
				}
				iVar2 = 0x00000000;
				iVar2 = 0x00000000;
				while (iVar2 < 0x00000003)
				{
					if (unk_0xC844350D5D58C99A(iLocal_68[iVar2]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_69[iVar2]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_69[iVar2]) && func_14(iLocal_68[iVar2]))
							{
								if (unk_0xBBA8A868118C90ED(iLocal_68[iVar2], 0xFFFFFFFF, 0x00000000))
								{
									unk_0xF821F915BC24D246(iLocal_69[iVar2], iLocal_68[iVar2], 0xFFFFFFFF);
								}
							}
						}
						else if (func_14(iLocal_68[iVar2]) && unk_0xB87F6CF6E5628C67(joaat("a_m_y_jetski_01")))
						{
							iLocal_69[iVar2] = unk_0x852A19533F896693(iLocal_68[iVar2], 0x00000019, joaat("a_m_y_jetski_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0xFCCF7611216AE801(iLocal_69[iVar2], 0x00000000);
							unk_0x11AD11297DC58CC7(iLocal_69[iVar2], 0x00000001);
						}
					}
					else if (unk_0xB87F6CF6E5628C67(iLocal_71))
					{
						iLocal_68[iVar2] = unk_0x122AAB0B1D6F55AD(iLocal_71, vLocal_64[iVar2 /*3*/], fLocal_65[iVar2], 0x00000001, 0x00000001, 0x00000000);
						unk_0xB9FD7450C0DAB575(iLocal_68[iVar2], 0x40A00000);
						unk_0x657C23FBB4F6EEA5(iLocal_68[iVar2], 0f);
						unk_0x104763F18983A32D(iLocal_68[iVar2], 0x00000001);
						unk_0xE52EED22AB2D2450(iLocal_68[iVar2], 0x00000001);
						if (unk_0x6AC695D09170F27D(iLocal_68[iVar2]))
						{
							unk_0xB078AFA7242F1F7B(iLocal_68[iVar2], 0x00000001);
						}
						unk_0x56FDC9ADE35F7DB0(iLocal_68[iVar2], 0x00000000, 0x00000001, 0x00000000);
					}
					iVar2++;
				}
				if (((unk_0xC844350D5D58C99A(iLocal_57) && unk_0xC844350D5D58C99A(iLocal_68[0x00000000])) && unk_0xC844350D5D58C99A(iLocal_68[0x00000001])) && unk_0xC844350D5D58C99A(iLocal_68[0x00000002]))
				{
					unk_0x71199B01895C6202(iLocal_71);
				}
				if ((unk_0xC844350D5D58C99A(iLocal_69[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_69[0x00000001])) && unk_0xC844350D5D58C99A(iLocal_69[0x00000002]))
				{
					unk_0x71199B01895C6202(joaat("a_m_y_jetski_01"));
				}
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000AA, 0x00000001);
			}
		}
	}
}

int func_164(int iParam0, int iParam1)
{
	if (func_65(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_165()
{
	if (!func_167())
	{
		return 0x00000000;
	}
	if (func_65(unk_0x16F2683693E537C9()))
	{
		if (!func_166(unk_0x16F2683693E537C9(), vLocal_59, 100f) || unk_0x757EF87A33649210())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_166(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

int func_167()
{
	if (Local_43.f_1 == 0x00000003)
	{
		return 0x00000001;
	}
	else if (Local_43.f_1 == 0x00000001 || Local_43.f_1 == 0x00000002)
	{
		if (unk_0xD8A54335F18763BA() >= 0x00000014 || unk_0xD8A54335F18763BA() < 0x00000005)
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

int func_168(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_169(uParam0[iVar0 /*18*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	return 0x00000001;
}

bool func_169(var uParam0)
{
	return func_170(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_170(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_171(iParam0))
			{
				case 0x00000000:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 0x00000001:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 0x00000002:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 0x00000003:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 0x00000004:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 0x00000005:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 0x00000006:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001B), 0xFFFFFFFF);
					break;
				
				case 0x00000007:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 0x00000008:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 0x00000009:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_172(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_92 + uParam0->f_93) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
					{
						func_173(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_173(int iParam0)
{
	func_174(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_174(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_171(*iParam0))
		{
			case 0x00000000:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 0x00000002:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 0x00000003:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C));
				break;
			
			case 0x00000004:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 0x00000006:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B), 0xFFFFFFFF);
				break;
			
			case 0x00000007:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 0x00000008:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 0x00000009:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
	}
}

void func_175()
{
	int iVar0;
	
	if (Local_43.f_1 == 0x00000001 || Local_43.f_1 == 0x00000002)
	{
		switch (Local_43)
		{
			case 0x00000000:
				vLocal_59 = { -158.67f, -1555.16f, 34.63f };
				fLocal_60 = 187.71f;
				vLocal_62 = { -155.15f, -1550.83f, 34.53f };
				fLocal_63 = 213.13f;
				vLocal_83 = { -68.87878f, -1818.903f, 24.55311f };
				vLocal_84 = { -56.0098f, -1807.029f, 27.85417f };
				vLocal_66[0x00000000 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				vLocal_66[0x00000001 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				vLocal_66[0x00000002 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				vLocal_66[0x00000003 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				vLocal_66[0x00000004 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				vLocal_66[0x00000005 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				vLocal_66[0x00000006 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0x00000000] = 101.91f;
				fLocal_67[0x00000001] = 38.48f;
				fLocal_67[0x00000002] = -36.7f;
				fLocal_67[0x00000003] = -52.93f;
				fLocal_67[0x00000004] = -75.07f;
				fLocal_67[0x00000005] = 33.13f;
				fLocal_67[0x00000006] = -170.02f;
				break;
			
			case 0x00000001:
				vLocal_59 = { 368.72f, 294.06f, 102.96f };
				fLocal_60 = 25.17f;
				vLocal_62 = { 373.71f, 290.72f, 102.89f };
				fLocal_63 = 33.24f;
				vLocal_83 = { -523.5497f, 262.2986f, 80.01991f };
				vLocal_84 = { -509.1013f, 272.478f, 86.17713f };
				vLocal_66[0x00000000 /*3*/] = { 367.24f, 293.81f, 103.41f };
				vLocal_66[0x00000001 /*3*/] = { 368.73f, 296.89f, 103.41f };
				vLocal_66[0x00000002 /*3*/] = { 366.94f, 296.34f, 103.43f };
				vLocal_66[0x00000003 /*3*/] = { 375.21f, 291.85f, 103.25f };
				vLocal_66[0x00000004 /*3*/] = { 374.81f, 292.47f, 103.26f };
				vLocal_66[0x00000005 /*3*/] = { 371.51f, 291.85f, 103.31f };
				vLocal_66[0x00000006 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0x00000000] = -64.83f;
				fLocal_67[0x00000001] = -163.04f;
				fLocal_67[0x00000002] = -118.77f;
				fLocal_67[0x00000003] = 127.18f;
				fLocal_67[0x00000004] = 105.04f;
				fLocal_67[0x00000005] = -146.75f;
				fLocal_67[0x00000006] = 10.11f;
				break;
			
			case 0x00000002:
				vLocal_59 = { -807.98f, -2555.14f, 13.34f };
				fLocal_60 = 3.35f;
				vLocal_62 = { -810.1f, -2560.85f, 13.38f };
				fLocal_63 = 43.57f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0x00000000 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				vLocal_66[0x00000001 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				vLocal_66[0x00000002 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				vLocal_66[0x00000003 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				vLocal_66[0x00000004 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				vLocal_66[0x00000005 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				vLocal_66[0x00000006 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0x00000000] = -86.65f;
				fLocal_67[0x00000001] = -130.05f;
				fLocal_67[0x00000002] = 150.04f;
				fLocal_67[0x00000003] = 137.51f;
				fLocal_67[0x00000004] = 115.37f;
				fLocal_67[0x00000005] = -136.43f;
				fLocal_67[0x00000006] = 20.43f;
				break;
			
			case 0x00000003:
				vLocal_59 = { 778.59f, -1160.2f, 28.35f };
				fLocal_60 = 302.47f;
				vLocal_62 = { 778.47f, -1164.01f, 28.25f };
				fLocal_63 = 287.97f;
				vLocal_83 = { -1000.759f, -2436.092f, 17.16946f };
				vLocal_84 = { -986.7399f, -2424.87f, 22.16946f };
				vLocal_66[0x00000000 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				vLocal_66[0x00000001 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				vLocal_66[0x00000002 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				vLocal_66[0x00000003 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				vLocal_66[0x00000004 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				vLocal_66[0x00000005 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				vLocal_66[0x00000006 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0x00000000] = -147.53f;
				fLocal_67[0x00000001] = 171.51f;
				fLocal_67[0x00000002] = 104.94f;
				fLocal_67[0x00000003] = 21.91f;
				fLocal_67[0x00000004] = -0.22f;
				fLocal_67[0x00000005] = 107.91f;
				fLocal_67[0x00000006] = -95.23f;
				break;
			
			case 0x00000004:
				vLocal_59 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_60 = 258.32f;
				vLocal_66[0x00000000 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				vLocal_66[0x00000001 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				vLocal_66[0x00000002 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				vLocal_66[0x00000003 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				vLocal_66[0x00000004 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0x00000000] = 75.06f;
				fLocal_67[0x00000001] = 134.25f;
				fLocal_67[0x00000002] = -52.71f;
				fLocal_67[0x00000003] = -93.39f;
				fLocal_67[0x00000004] = -141.52f;
				vLocal_83 = { -1265.744f, -1057.199f, 5.410841f };
				vLocal_84 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_180(Local_43, &vLocal_85, &vLocal_86, &fLocal_87);
		iLocal_70[0x00000000] = joaat("a_f_y_hipster_02");
		iLocal_70[0x00000001] = joaat("a_m_y_hipster_02");
		iLocal_70[0x00000002] = joaat("a_m_y_hipster_02");
		iLocal_70[0x00000003] = joaat("a_f_y_hipster_02");
		iLocal_70[0x00000004] = joaat("a_m_y_hipster_02");
		iLocal_70[0x00000005] = joaat("a_m_y_hipster_02");
		iLocal_70[0x00000006] = joaat("a_m_y_hipster_02");
		if (Local_43.f_1 == 0x00000001)
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0x00000000] = "_car_b_chatting_female";
			sLocal_74[0x00000001] = "_car_b_chatting_male";
			sLocal_74[0x00000002] = "_car_b_chatting_male";
			sLocal_74[0x00000003] = "_car_b_chatting_female";
			sLocal_74[0x00000004] = "_car_b_lookout";
		}
		else
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0x00000000] = "_car_a_flirt_girl";
			sLocal_74[0x00000001] = "_car_a_gawker_male_a";
			sLocal_74[0x00000002] = "_car_a_gawker_male_b";
			sLocal_74[0x00000003] = "_car_b_chatting_female";
			sLocal_74[0x00000004] = "_car_b_chatting_male";
			sLocal_74[0x00000005] = "_car_b_driver";
			sLocal_74[0x00000006] = "_car_b_lookout";
			func_179(&uLocal_90, iLocal_72);
		}
		iLocal_71 = func_178(Local_43.f_1);
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_70 - 0x00000001))
		{
			func_179(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		func_179(&uLocal_90, iLocal_71);
		func_176(&uLocal_90, cLocal_73);
		unk_0x17E8C6920A1E386F(vLocal_83, vLocal_84, 0x00000000, 0x00000000);
		unk_0xB5376EA942202450(vLocal_85, vLocal_86, fLocal_87, 0x00000000, 0x00000000, 0x00000001);
		iLocal_47 = 0x00000001;
	}
	else if (Local_43.f_1 == 0x00000003)
	{
		switch (Local_43)
		{
			case 0x00000005:
				vLocal_59 = { 3066.63f, 650.9f, 0.17f };
				fLocal_60 = 351.81f;
				vLocal_64[0x00000000 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0x00000000] = 5.72f;
				vLocal_64[0x00000001 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[0x00000001] = 351.33f;
				vLocal_64[0x00000002 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[0x00000002] = 348.18f;
				break;
			
			case 0x00000006:
				vLocal_59 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_60 = 222.9f;
				vLocal_64[0x00000000 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0x00000000] = 211.54f;
				vLocal_64[0x00000001 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[0x00000001] = 201.55f;
				vLocal_64[0x00000002 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[0x00000002] = 221.55f;
				break;
			
			case 0x00000007:
				vLocal_59 = { 194.64f, 3621.27f, 29.91f };
				fLocal_60 = 163.95f;
				vLocal_64[0x00000000 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0x00000000] = 175.4f;
				vLocal_64[0x00000001 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[0x00000001] = 163.69f;
				vLocal_64[0x00000002 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[0x00000002] = 175.31f;
				break;
			
			case 0x00000008:
				vLocal_59 = { 627.58f, -2138.06f, -0.07f };
				fLocal_60 = 180.09f;
				vLocal_64[0x00000000 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0x00000000] = 143.89f;
				vLocal_64[0x00000001 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[0x00000001] = 172.41f;
				vLocal_64[0x00000002 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[0x00000002] = 191.97f;
				break;
		}
		iLocal_71 = joaat("seashark");
		func_179(&uLocal_90, iLocal_71);
		func_179(&uLocal_90, joaat("a_m_y_jetski_01"));
	}
}

void func_176(var uParam0, char* sParam1)
{
	func_177(uParam0, 0x00000001, 0xFFFFFFFF, sParam1, 0x00000000);
}

void func_177(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 0x00000004)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 0x00000009)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

int func_178(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = joaat("bati");
			break;
		
		case 0x00000002:
			iVar0 = joaat("ninef");
			break;
		
		case 0x00000003:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_179(var uParam0, int iParam1)
{
	func_177(uParam0, 0x00000000, iParam1, "NULL", 0x00000000);
}

void func_180(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 0x00000001:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 0x00000002:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 0x00000003:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 0x00000004:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_64(0x00000009))
	{
		return 0x00000000;
	}
	if (func_47(0x00000006) || func_47(0x00000007))
	{
		return 0x00000000;
	}
	if (Global_F042)
	{
		return 0x00000000;
	}
	if (func_204())
	{
		return 0x00000000;
	}
	if (Local_43.f_1 != 0x00000003 && func_53() != 0x00000001)
	{
		return 0x00000000;
	}
	if (unk_0x1C53FD812DB1E31C())
	{
		return 0x00000000;
	}
	if (func_65(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (((func_14(iVar0) && unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0)) && !func_203(unk_0x16F2683693E537C9(), iVar0, 0xFFFFFFFF)) && unk_0x134B62B726CEC8E6(iVar0) != joaat("taxi"))
		{
			return 0x00000000;
		}
	}
	switch (Local_43)
	{
		case 0x00000000:
			if (Global_1B3FC[0x00000000])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (Global_1B3FC[0x00000001])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (Global_1B3FC[0x00000002])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (Global_1B3FC[0x00000003])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			if (Global_1B3FC[0x00000004])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (Global_1B3F2[0x00000000])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (Global_1B3F2[0x00000001])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (Global_1B3F2[0x00000002])
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000008:
			if (Global_1B3F2[0x00000003])
			{
				return 0x00000000;
			}
			break;
	}
	if (!func_167())
	{
		iVar1 = 0x00000000;
		while (iVar1 <= (iLocal_70 - 0x00000001))
		{
			if (func_65(iLocal_56[iVar1]))
			{
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0x78A77CDD64392938(0x00000000, iVar1 * 100);
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(iLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 <= (iLocal_69 - 0x00000001))
		{
			if (func_65(iLocal_69[iVar1]))
			{
				unk_0xDD353D0E9C789D0E(&iVar2);
				unk_0x78A77CDD64392938(0x00000000, iVar1 * 110);
				if (func_14(iLocal_68[iVar1]) && unk_0xC42A92762C58E1B9(iLocal_69[iVar1], iLocal_68[iVar1], 0x00000000))
				{
					unk_0xE072601B4380E9DF(0x00000000, iLocal_68[iVar1], 30f, 0x000C00A5);
				}
				else
				{
					unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
				}
				unk_0x75ABDC5F81978924(iVar2);
				unk_0x78ADC381772E3D54(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_65(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0xC42A92762C58E1B9(iLocal_58, iLocal_57, 0x00000000))
			{
				unk_0xE072601B4380E9DF(iLocal_58, iLocal_57, 30f, 0x000C00A5);
			}
			else
			{
				unk_0x01E4BB5190DF7317(iLocal_58, 0x471C4000, 0x00000000);
			}
		}
		return 0x00000000;
	}
	if (func_183())
	{
		iVar4 = 0x00000000;
		while (iVar4 <= (iLocal_70 - 0x00000001))
		{
			if (func_65(iLocal_56[iVar4]))
			{
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0x78A77CDD64392938(0x00000000, iVar4 * 50);
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar3);
				if ((iVar4 % 0x00000002) == 0x00000000)
				{
					func_182(iLocal_56[iVar4], 0x00000001);
				}
				unk_0x78ADC381772E3D54(iLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0x00000000;
		while (iVar4 <= (iLocal_69 - 0x00000001))
		{
			if (func_14(iLocal_68[iVar4]) && Local_43.f_1 == 0x00000003)
			{
				unk_0xB078AFA7242F1F7B(iLocal_68[iVar4], 0x00000000);
			}
			if (func_65(iLocal_69[iVar4]))
			{
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0x78A77CDD64392938(0x00000000, iVar4 * 60);
				if (func_14(iLocal_68[iVar4]) && unk_0xC42A92762C58E1B9(iLocal_69[iVar4], iLocal_68[iVar4], 0x00000000))
				{
					unk_0xE072601B4380E9DF(0x00000000, iLocal_68[iVar4], 50f, 0x000C0024);
				}
				else
				{
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 0x00000002) == 0x00000000)
				{
					func_182(iLocal_69[iVar4], 0x00000001);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_57) && Local_43.f_1 == 0x00000003)
		{
			unk_0xB078AFA7242F1F7B(iLocal_57, 0x00000000);
		}
		if (func_65(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0xC42A92762C58E1B9(iLocal_58, iLocal_57, 0x00000000))
			{
				unk_0xE072601B4380E9DF(iLocal_58, iLocal_57, 50f, 0x000C0024);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(iLocal_58, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
		}
		switch (Local_43)
		{
			case 0x00000000:
				Global_1B3FC[0x00000000] = 0x00000001;
				Global_1B402[0x00000000] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000001:
				Global_1B3FC[0x00000001] = 0x00000001;
				Global_1B402[0x00000001] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000002:
				Global_1B3FC[0x00000002] = 0x00000001;
				Global_1B402[0x00000002] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000003:
				Global_1B3FC[0x00000003] = 0x00000001;
				Global_1B402[0x00000003] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000004:
				Global_1B3FC[0x00000004] = 0x00000001;
				Global_1B402[0x00000004] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000005:
				Global_1B3F2[0x00000000] = 0x00000001;
				Global_1B3F7[0x00000000] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000006:
				Global_1B3F2[0x00000001] = 0x00000001;
				Global_1B3F7[0x00000001] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000007:
				Global_1B3F2[0x00000002] = 0x00000001;
				Global_1B3F7[0x00000002] = unk_0x1C0640BA9A7327B3();
				break;
			
			case 0x00000008:
				Global_1B3F2[0x00000003] = 0x00000001;
				Global_1B3F7[0x00000003] = unk_0x1C0640BA9A7327B3();
				break;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

void func_182(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_65(iParam0))
	{
		iVar1 = 0x00000002;
		if (bParam1)
		{
			iVar1 = 0x00000003;
		}
		iVar2 = unk_0x09AC81E49EA267F7(0x00000000, iVar1);
		if (iVar2 == 0x00000000)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 0x00000001)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xCED082ADD3739B9F(iParam0))
		{
			func_141(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 0x00000018);
		}
		else
		{
			func_141(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 0x00000018);
		}
	}
}

int func_183()
{
	int iVar0;
	
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000001;
	}
	if (Local_43.f_1 == 0x00000003)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_69 - 0x00000001))
		{
			if (unk_0xC844350D5D58C99A(iLocal_69[iVar0]))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_69[iVar0]))
				{
					return 0x00000001;
				}
				else if (func_184(iLocal_69[iVar0], 0x00000001, 0x428C0000, 0x432A0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000) || unk_0x36646919F20EAFFC(iLocal_69[iVar0]))
				{
					return 0x00000001;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_68[iVar0]))
			{
				if (unk_0x437347B10A200C4B(iLocal_68[iVar0], 0x00000000))
				{
					return 0x00000001;
				}
				else if (unk_0xB87D13D0C064E9D1(iLocal_68[iVar0], unk_0x16F2683693E537C9(), 0x00000001) && unk_0x7F6DC62EA9922664(iLocal_68[iVar0]) < 0x00000384)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_57))
		{
			if (unk_0x437347B10A200C4B(iLocal_57, 0x00000000))
			{
				return 0x00000001;
			}
			else if (unk_0xB87D13D0C064E9D1(iLocal_57, unk_0x16F2683693E537C9(), 0x00000001) && unk_0x7F6DC62EA9922664(iLocal_57) < 0x00000384)
			{
				return 0x00000001;
			}
		}
		return 0x00000000;
	}
	if (func_166(unk_0x16F2683693E537C9(), vLocal_44, 50f) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_58))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_58))
		{
			return 0x00000001;
		}
		else if (func_184(iLocal_58, 0x00000001, 0x428C0000, 0x432A0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0x36646919F20EAFFC(iLocal_58))
		{
			unk_0x11AD11297DC58CC7(iLocal_58, 0x00000000);
			return 0x00000001;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_57))
	{
		if (unk_0x437347B10A200C4B(iLocal_57, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_57, 0x00000001) || unk_0xB87D13D0C064E9D1(iLocal_57, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_61))
	{
		if (unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
		{
			return 0x00000001;
		}
		else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_61, 0x00000001) || unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 <= (iLocal_70 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A(iLocal_56[iVar0]))
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_56[iVar0]))
			{
				return 0x00000001;
			}
			else if (func_184(iLocal_56[iVar0], 0x00000001, 0x428C0000, 0x432A0000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_184(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_15(unk_0x16F2683693E537C9()) && func_15(iParam0))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (func_198(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 0x00000001;
		}
		if (!unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_197(unk_0x16F2683693E537C9(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0x00000000;
		}
		else if (func_185(iParam0, fParam3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_185(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_15(unk_0x16F2683693E537C9()) && func_15(iParam0))
	{
		if (func_196(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_186(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_186(int iParam0, float fParam1)
{
	return func_187(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

bool func_187(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_195(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_194(&(Local_40[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_191(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_190();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_40[iVar2 /*4*/].f_1 = iParam0;
		Local_40[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_188(&(Local_40[iVar2 /*4*/]), vVar1, iParam1, &(Local_40[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_188(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_15(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_189(iParam2, iParam5) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 0x000001FF, iParam4, 0x00000007);
		return 0x00000000;
	}
	iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0x00000000)
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	else if (iVar4 == 0x00000001)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000000;
	if (unk_0xEC560E589DF8370E(iVar3))
	{
		func_15(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_41)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
			}
			*uParam3 = unk_0x1C0640BA9A7327B3();
			return 0x00000001;
		}
		return 0x00000000;
	}
	if (unk_0xE2F1E99DD161A861(iVar3))
	{
		func_15(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0x00000000))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0x00000000))
			{
				if (bLocal_41)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, 0x00000001), 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
				}
				*uParam3 = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
		return 0x00000000;
	}
	return 0x00000000;
}

Vector3 func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000007);
		iParam1 = iVar0;
	}
	if (iParam1 == 0x00000000)
	{
		return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
	}
	else if (iParam1 == 0x00000001)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000002)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009995, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000003)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x000049D9, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000004)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000DEAD, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000005)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x0000F9BB, 0f, 0f, 0f);
	}
	else if (iParam1 == 0x00000006)
	{
		return unk_0x64430C979F516F7A(iParam0, 0x00009000, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, 0x00000001);
}

int func_190()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0 /*4*/] == 0x00000000 && Local_40[iVar0 /*4*/].f_1 == 0x00000000) && Local_40[iVar0 /*4*/].f_2 == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_193(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_193(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_192(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_192(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_193(vector3 vParam0)
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

void func_194(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_196(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_197(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x08D89CE2E20AE305(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_198(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0x00000000)
	{
		iVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		iVar0 = 2f;
	}
	if (func_15(unk_0x16F2683693E537C9()) && func_15(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_202(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iVar0, 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					iVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_202(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_199(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_grenade"), fParam1, 0x00000001) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_molotov"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_smokegrenade"), fParam1, 0x00000001)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), joaat("weapon_stickybomb"), 5f, 0x00000001))
		{
			if (bParam3)
			{
				if (func_200(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_200(iParam0, fParam1))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar1, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_200(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_201(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_201(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_193(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 0x00000001;
	}
	if (iParam3 == 0x00000000)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_193(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_192(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_202(int iParam0, bool bParam1, int iParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), iParam2, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_204()
{
	switch (Local_43)
	{
		case 0x00000005:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_2, 0x00000000);
			break;
		
		case 0x00000006:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_2, 0x00000001);
			break;
		
		case 0x00000007:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_2, 0x00000002);
			break;
		
		case 0x00000008:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_2, 0x00000003);
			break;
		
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_3, 0x00000000);
			break;
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_3, 0x00000001);
			break;
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_3, 0x00000002);
			break;
		
		case 0x00000003:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_3, 0x00000003);
			break;
		
		case 0x00000004:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_3, 0x00000004);
			break;
	}
	return 0x00000000;
}

void func_205()
{
	iLocal_42 = 0x00000000;
	iLocal_45 = 0x00000000;
	bLocal_52 = 0x00000000;
	bLocal_53 = 0x00000000;
	iLocal_49 = 0x00000000;
	iLocal_50 = 0x00000000;
	iLocal_51 = 0x00000000;
	func_207(0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0x00000000);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PARALLEL", 0x00000000);
	if (Local_43 == 0x00000001)
	{
		iLocal_89 = func_206(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0x28F5E4DA506AC0CA(374.0083f, 279.5919f, 102.3306f, 25f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	if (Local_43.f_1 == 0x00000001 || Local_43.f_1 == 0x00000002)
	{
		iLocal_88 = func_206(vLocal_44, 60f);
	}
}

int func_206(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_43)
		{
			case 0x00000000:
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
				func_179(&uLocal_90, joaat("banshee"));
				func_179(&uLocal_90, joaat("feltzer2"));
				func_179(&uLocal_90, joaat("sentinel"));
				break;
			
			case 0x00000004:
				func_179(&uLocal_90, joaat("bati"));
				func_179(&uLocal_90, joaat("ruffian"));
				break;
			
			case 0x00000005:
			case 0x00000006:
			case 0x00000007:
			case 0x00000008:
				func_179(&uLocal_90, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_208(&uLocal_90);
	}
}

void func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			func_209(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000001;
}

void func_209(var uParam0)
{
	func_210(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_210(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_171(iParam0))
		{
			case 0x00000000:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 0x00000001:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 0x00000002:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 0x00000003:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 0x00000004:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 0x00000006:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 0x00000007:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 0x00000008:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001A));
				break;
			
			case 0x00000009:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000000);
			break;
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000001);
			break;
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000002);
			break;
		
		case 0x00000003:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000003);
			break;
		
		case 0x00000004:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, 0x00000004);
			break;
	}
	return 0x00000000;
}

bool func_212(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000B || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

void func_213()
{
	if (func_214(func_215(0x00000056, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000000;
		Local_43.f_1 = 0x00000002;
		Local_43.f_3 = 0x00000064;
		Local_43.f_4 = 0x00000014;
	}
	else if (func_214(func_215(0x00000057, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000001;
		Local_43.f_1 = 0x00000002;
		Local_43.f_3 = 0x000001F4;
		Local_43.f_4 = 0x00000012;
	}
	else if (func_214(func_215(0x00000058, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000002;
		Local_43.f_1 = 0x00000002;
		Local_43.f_3 = 0x000003E8;
		Local_43.f_4 = 0x00000002;
	}
	else if (func_214(func_215(0x00000059, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000003;
		Local_43.f_1 = 0x00000002;
		Local_43.f_3 = 0x000004E2;
		Local_43.f_4 = 0x00000004;
	}
	else if (func_214(func_215(0x0000005A, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000004;
		Local_43.f_1 = 0x00000001;
		Local_43.f_3 = 0x000005DC;
		Local_43.f_4 = 0x00000005;
	}
	else if (func_214(func_215(0x00000052, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000005;
		Local_43.f_1 = 0x00000003;
		Local_43.f_3 = 0x00000000;
		Local_43.f_4 = 0x00000010;
	}
	else if (func_214(func_215(0x00000053, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000006;
		Local_43.f_1 = 0x00000003;
		Local_43.f_3 = 0x00000000;
		Local_43.f_4 = 0x0000000D;
	}
	else if (func_214(func_215(0x00000054, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000007;
		Local_43.f_1 = 0x00000003;
		Local_43.f_3 = 0x00000000;
		Local_43.f_4 = 0x0000000F;
		Local_43.f_5 = 0x00000001;
	}
	else if (func_214(func_215(0x00000055, 0x00000000), vLocal_44, 1f, 0x00000000))
	{
		Local_43 = 0x00000008;
		Local_43.f_1 = 0x00000003;
		Local_43.f_4 = 0x00000018;
		Local_43.f_3 = 0x00000000;
		Local_43.f_5 = 0x00000001;
	}
	else
	{
		func_216(0x00000000);
	}
}

int func_214(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

Vector3 func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0f, 0f, 0f;
	}
	return Global_79AA[iVar0 /*23*/][iParam1 /*3*/];
}

void func_216(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_46)
	{
		unk_0x29D5132FBDCF2B1E(0x00000000);
		iLocal_46 = 0x00000001;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (func_15(iLocal_56[iVar0]))
		{
			unk_0xA3BF0AA5A2608191(iLocal_56[iVar0]);
			unk_0x01E4BB5190DF7317(iLocal_56[iVar0], 0x471C4000, 0x00000000);
			unk_0x11AD11297DC58CC7(iLocal_56[iVar0], 0x00000000);
			unk_0x6DAD7906B73F064D(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (func_15(iLocal_69[iVar0]))
		{
			if (func_15(iLocal_68[iVar0]))
			{
				unk_0xA3BF0AA5A2608191(iLocal_69[iVar0]);
				if (unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iLocal_68[iVar0])))
				{
					unk_0xB078AFA7242F1F7B(iLocal_68[iVar0], 0x00000000);
				}
				unk_0xE072601B4380E9DF(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 0x000C00A7);
				unk_0xFADC0A217229F6B5(iLocal_69[iVar0], 0x00000001);
				unk_0x11AD11297DC58CC7(iLocal_69[iVar0], 0x00000000);
				unk_0x6DAD7906B73F064D(&(iLocal_69[iVar0]));
				unk_0x046C362CF15F1935(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_58))
	{
		if (func_15(iLocal_57))
		{
			unk_0xA3BF0AA5A2608191(iLocal_58);
			unk_0xAFF39FB306F8E232(iLocal_58, 0x00000001, 0x00000001);
			unk_0xE072601B4380E9DF(iLocal_58, iLocal_57, 15f, 0x000C00A7);
			unk_0xFADC0A217229F6B5(iLocal_58, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_58, 0x00000000);
			unk_0x6DAD7906B73F064D(&iLocal_58);
			unk_0x046C362CF15F1935(&iLocal_57);
		}
	}
	if (func_15(iLocal_61))
	{
		unk_0x046C362CF15F1935(&iLocal_61);
	}
	switch (Local_43)
	{
		case 0x00000005:
			func_219(0x00000052, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000000);
			break;
		
		case 0x00000006:
			func_219(0x00000053, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000001);
			break;
		
		case 0x00000007:
			func_219(0x00000054, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000002);
			break;
		
		case 0x00000008:
			func_219(0x00000055, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618B.f_2), 0x00000003);
			break;
		
		case 0x00000000:
			func_219(0x00000056, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000000);
			break;
		
		case 0x00000001:
			func_219(0x00000057, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000001);
			break;
		
		case 0x00000002:
			func_219(0x00000058, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000002);
			break;
		
		case 0x00000003:
			func_219(0x00000059, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000003);
			break;
		
		case 0x00000004:
			func_219(0x0000005A, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_618E.f_3), 0x00000004);
			break;
	}
	if (iLocal_45)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	unk_0x27B495357E55D511(unk_0xE4B65163E4129619(0x0000000A), 0x00000000);
	if (iLocal_54)
	{
		unk_0xBEF52C1D400C0A44(0x00000001);
	}
	if (iLocal_76 && !bParam0)
	{
		iVar1 = unk_0xA30EC016B12C03E4();
		if (unk_0xE1DBBD6CE209517C(iVar1))
		{
			if (!unk_0x93B62D155C014521(iVar1))
			{
				unk_0x98E4DC66A651C9FA(iVar1, 0x00000001, 0x00000000);
			}
		}
	}
	if (!bParam0)
	{
		func_207(0x00000000);
	}
	if (iLocal_47)
	{
		unk_0x9FE27D475353EFE9(vLocal_83, vLocal_84, 0x00000001);
		unk_0x842F1AEB2FCC00B7(vLocal_85, vLocal_86, fLocal_87, 0x00000001);
		iLocal_47 = 0x00000000;
	}
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_PARK_PARALLEL", 0x00000001);
	if (Local_43 == 0x00000001)
	{
		unk_0x2952D66A502EA873(iLocal_89, 0x00000000);
	}
	if (Local_43.f_1 == 0x00000001 || Local_43.f_1 == 0x00000002)
	{
		unk_0x2952D66A502EA873(iLocal_88, 0x00000000);
	}
	else
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000AA, 0x00000000);
	}
	func_217(&uLocal_90, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_217(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_208(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_218(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	uParam0->f_92 = 0xFFFFFFFF;
}

void func_218(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_219(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar0 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

