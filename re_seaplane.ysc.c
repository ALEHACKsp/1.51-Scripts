#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<6> Local_47[11];
	struct<4> Local_48[5];
	char* sLocal_49 = NULL;
	char* sLocal_50 = NULL;
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_52 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 2;
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
	int iLocal_77 = 0;
	int iLocal_78[1] = { 0 };
	var uLocal_79 = 16;
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
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	struct<2> Local_245 = { 0, 5 } ;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
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
	var uLocal_261 = 5;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 0x00000003;
	iLocal_3 = 0x00000001;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000086;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000001;
	iLocal_9 = 0x00000086;
	iLocal_10 = 0x00000001;
	iLocal_11 = 0x0000000C;
	iLocal_12 = 0x0000000C;
	fLocal_15 = 0.001f;
	iLocal_18 = 0xFFFFFFFF;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	sLocal_49 = "RE_SeaPlane1";
	sLocal_50 = "RE_SeaPlane2";
	vLocal_51 = { 0f, 0f, 0f };
	vLocal_53 = { 3097.46f, 2181.55f, 0.5f };
	iLocal_57 = 0xFFFFFFFF;
	iLocal_58 = 0xFFFFFFFF;
	iLocal_59 = joaat("dodo");
	iLocal_60 = joaat("tropic");
	iLocal_61 = joaat("g_m_y_mexgoon_02");
	iLocal_62 = joaat("suntrap");
	iLocal_63 = joaat("g_m_y_armgoon_02");
	vLocal_52 = { ScriptParam_245.f_1[0x00000000 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (func_199(Local_48[0x00000000 /*4*/]))
		{
			unk_0x71EDC33E5A423750(Local_48[0x00000000 /*4*/], 0x00000002);
		}
		func_169(0x00000001, 0x00000000);
	}
	if (func_168() && func_125(vLocal_52, 0x00000020, 0x00000000, 0x00000000, 0x00000001))
	{
		func_122(0x00000020);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		if ((unk_0x338D6FF72D84D90F() || func_121(0x00000001)) || func_121(0x00000004))
		{
			if (func_121(0x00000007))
			{
				func_82();
			}
			switch (iLocal_45)
			{
				case 0x00000000:
					func_35();
					break;
				
				case 0x00000001:
					func_1();
					break;
			}
		}
		else
		{
			if (func_199(Local_48[0x00000000 /*4*/]))
			{
				unk_0x71EDC33E5A423750(Local_48[0x00000000 /*4*/], 0x00000002);
			}
			func_169(0x00000001, 0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	switch (iLocal_46)
	{
		case 0x00000000:
			iLocal_46 = 0x00000001;
			break;
		
		case 0x00000001:
			switch (iLocal_54)
			{
				case 0x00000000:
					iLocal_46 = 0x00000002;
					break;
			}
			break;
		
		case 0x00000002:
			func_2();
			break;
	}
}

void func_2()
{
	func_32(0x00000042, 0x00000001);
	func_32(0x00000043, 0x00000001);
	func_6(0xFFFFFFFF, 0x00000000);
	func_3();
	func_169(0x00000001, 0x00000000);
}

void func_3()
{
	func_4();
}

int func_4()
{
	if (func_5(0x00000000))
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

bool func_5(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_30();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(0x00000033))
		{
			func_17("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_20(), 0x00000000, 0x0000008A, 0x00000000);
			func_16(0x00000033);
		}
		if (func_15(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_14(iParam0, iParam1) != 0x00000142)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_7(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_7(0x00000007);
			}
			else
			{
				func_7(0x00000001);
			}
		}
	}
}

void func_7(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)
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
		func_12((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = uParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = uParam2;
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
		func_9();
	}
}

void func_9()
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
		func_11(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_10() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()
{
	return Global_7830;
}

int func_11(int iParam0, int iParam1)
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

int func_12(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
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

int func_13()
{
	return Global_1407E9;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000000FA;
			break;
		
		case 0x00000001:
			return 0x000000E2;
			break;
		
		case 0x00000002:
			return 0x000000F3;
			break;
		
		case 0x00000003:
			return 0x00000100;
			break;
		
		case 0x00000004:
			return 0x00000103;
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 0x00000119;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000011A;
			}
			break;
		
		case 0x00000006:
			return 0x00000109;
			break;
		
		case 0x00000007:
			return 0x000000DA;
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010F;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000110;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000111;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000112;
			}
			if (iParam1 == 0x00000005)
			{
				return 0x00000113;
			}
			if (iParam1 == 0x00000006)
			{
				return 0x00000114;
			}
			if (iParam1 == 0x00000007)
			{
				return 0x00000115;
			}
			if (iParam1 == 0x00000008)
			{
				return 0x00000116;
			}
			if (iParam1 == 0x00000009)
			{
				return 0x00000117;
			}
			if (iParam1 == 0x0000000A)
			{
				return 0x00000118;
			}
			break;
		
		case 0x0000000A:
			return 0x000000DB;
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F6;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F7;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000F8;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x000000F9;
			}
			break;
		
		case 0x0000000C:
			return 0x000000FE;
			break;
		
		case 0x0000000D:
			if (iParam1 == 0x00000001)
			{
				return 0x00000104;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000105;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000106;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000108;
			}
			break;
		
		case 0x0000000E:
			return 0x0000011B;
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E0;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E1;
			}
			break;
		
		case 0x00000010:
			return 0x000000FC;
			break;
		
		case 0x00000011:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F4;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F5;
			}
			break;
		
		case 0x00000012:
			return 0x000000FD;
			break;
		
		case 0x00000013:
			return 0x000000D7;
			break;
		
		case 0x00000014:
			return 0x000000D8;
			break;
		
		case 0x00000015:
			return 0x000000FB;
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000001)
			{
				return 0x000000DD;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000DE;
			}
			break;
		
		case 0x00000017:
			if (iParam1 == 0x00000001)
			{
				return 0x000000D5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000D6;
			}
			break;
		
		case 0x00000018:
			return 0x000000F2;
			break;
		
		case 0x00000019:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010B;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000010C;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x0000010D;
			}
			break;
		
		case 0x00000008:
			return 0x000000FF;
			break;
		
		case 0x0000001A:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E3;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E4;
			}
			break;
		
		case 0x0000001B:
			if (iParam1 == 0x00000001)
			{
				return 0x00000101;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000102;
			}
			break;
		
		case 0x0000001C:
			return 0x000000D9;
			break;
		
		case 0x0000001D:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E6;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000E7;
			}
			break;
		
		case 0x0000001E:
			return 0x0000011D;
			break;
		
		case 0x0000001F:
			return 0x0000013E;
			break;
		
		case 0x00000020:
			return 0x0000013F;
			break;
		
		case 0x00000021:
			return 0x00000140;
			break;
	}
	return 0x00000142;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000002:
		case 0x00000012:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_4FB5.f_96[iVar1]), iVar0);
	}
}

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_19();
	}
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_20()
{
	func_21();
	switch (Global_1B416.f_936.f_21B.f_10E1)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

void func_21()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_25(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_24(unk_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_22(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_23(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_22(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_23(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_26(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5.f_96[iVar1], iVar0);
	}
	return 0x00000000;
}

void func_28(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 0x00000005;
			break;
		
		case 0x00000005:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000016:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000017:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000003;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001B:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001D:
			iVar0 = 0x00000003;
			break;
	}
	return iVar0;
}

int func_30()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_31(Var0);
	return uVar1;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 0x00000017;
			break;
		
		case joaat("re_accident"):
			return 0x00000000;
			break;
		
		case joaat("re_arrests"):
			return 0x0000000F;
			break;
		
		case joaat("re_atmrobbery"):
			return 0x00000001;
			break;
		
		case joaat("re_bikethief"):
			return 0x0000001A;
			break;
		
		case joaat("re_border"):
			return 0x0000001D;
			break;
		
		case joaat("re_burials"):
			return 0x00000018;
			break;
		
		case joaat("re_bus_tours"):
			return 0x00000002;
			break;
		
		case joaat("re_cartheft"):
			return 0x00000011;
			break;
		
		case joaat("re_chasethieves"):
			return 0x0000000B;
			break;
		
		case joaat("re_crashrescue"):
			return 0x00000010;
			break;
		
		case joaat("re_cultshootout"):
			return 0x00000012;
			break;
		
		case joaat("re_dealgonewrong"):
			return 0x0000000C;
			break;
		
		case joaat("re_domestic"):
			return 0x00000003;
			break;
		
		case joaat("re_drunkdriver"):
			return 0x0000001B;
			break;
		
		case joaat("re_gang_intimidation"):
			return 0x00000014;
			break;
		
		case joaat("re_gangfight"):
			return 0x00000013;
			break;
		
		case joaat("re_getaway_driver"):
			return 0x00000004;
			break;
		
		case joaat("re_hitch_lift"):
			return 0x0000000D;
			break;
		
		case joaat("re_homeland_security"):
			return 0x0000001C;
			break;
		
		case joaat("re_lured"):
			return 0x00000007;
			break;
		
		case joaat("re_muggings"):
			return 0x00000019;
			break;
		
		case joaat("re_paparazzi"):
			return 0x0000000A;
			break;
		
		case joaat("re_prisonerlift"):
			return 0x00000016;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 0x00000015;
			break;
		
		case joaat("re_securityvan"):
			return 0x00000009;
			break;
		
		case joaat("re_shoprobbery"):
			return 0x00000005;
			break;
		
		case joaat("re_snatched"):
			return 0x00000006;
			break;
		
		case joaat("re_stag_do"):
			return 0x0000000E;
			break;
		
		case joaat("re_yetarian"):
			return 0x0000001E;
			break;
		
		case joaat("re_duel"):
			return 0x0000001F;
			break;
		
		case joaat("re_seaplane"):
			return 0x00000020;
			break;
		
		case joaat("re_monkey"):
			return 0x00000021;
			break;
	}
	return 0xFFFFFFFF;
}

void func_32(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_34(iParam0, 0x00000000))
		{
			func_33(iParam0, 0x00000001, 0x00000000);
			func_33(iParam0, 0x00000002, 0x00000000);
			func_33(iParam0, 0x00000003, 0x00000000);
			func_33(iParam0, 0x00000004, 0x00000000);
			func_33(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_33(iParam0, 0x00000000, 0x00000000);
	}
}

void func_33(int iParam0, int iParam1, bool bParam2)
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

bool func_34(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_35()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	switch (iLocal_46)
	{
		case 0x00000000:
			func_69();
			func_68(0x00000007);
			unk_0x523BCC9DC80CD82F(iLocal_60);
			iLocal_46 = 0x00000001;
			break;
		
		case 0x00000001:
			switch (iLocal_54)
			{
				case 0x00000000:
					if (unk_0xB87F6CF6E5628C67(iLocal_60))
					{
						unk_0x523BCC9DC80CD82F(iLocal_59);
						iLocal_54++;
					}
					break;
				
				case 0x00000001:
					if (unk_0xB87F6CF6E5628C67(iLocal_59))
					{
						unk_0x523BCC9DC80CD82F(iLocal_61);
						iLocal_54++;
					}
					break;
				
				case 0x00000002:
					if (unk_0xB87F6CF6E5628C67(iLocal_61))
					{
						unk_0x523BCC9DC80CD82F(iLocal_62);
						iLocal_54++;
					}
					break;
				
				case 0x00000003:
					if (unk_0xB87F6CF6E5628C67(iLocal_62))
					{
						unk_0x523BCC9DC80CD82F(iLocal_63);
						iLocal_54++;
					}
					break;
				
				case 0x00000004:
					if (unk_0xB87F6CF6E5628C67(iLocal_63))
					{
						unk_0x29398344B9E5B8A7(sLocal_49);
						iLocal_54++;
					}
					break;
				
				case 0x00000005:
					if (unk_0x1C2E18E9C63BEB77(sLocal_49))
					{
						unk_0x29398344B9E5B8A7(sLocal_50);
						iLocal_54++;
					}
					break;
				
				case 0x00000006:
					if ((((((unk_0xB87F6CF6E5628C67(iLocal_60) && unk_0xB87F6CF6E5628C67(iLocal_59)) && unk_0xB87F6CF6E5628C67(iLocal_61)) && unk_0xB87F6CF6E5628C67(iLocal_63)) && unk_0xB87F6CF6E5628C67(iLocal_62)) && unk_0x1C2E18E9C63BEB77(sLocal_49)) && unk_0x1C2E18E9C63BEB77(sLocal_50))
					{
						func_64(0x00000000, vLocal_51, -1f, 0x00000001);
						unk_0x71199B01895C6202(iLocal_59);
						func_64(0x00000001, vLocal_51, 0xBF800000, 0x00000000);
						func_64(0x00000002, vLocal_51, 0xBF800000, 0x00000000);
						iVar0 = 0x00000000;
						while (iVar0 <= 0x00000004)
						{
							func_55(iVar0, 0x00000000, vLocal_51, 0xBF800000);
							iVar0++;
						}
						func_45(0x00000001);
						iLocal_54++;
					}
					break;
				
				case 0x00000007:
					if (func_44())
					{
						func_43(&(Local_48[0x00000000 /*4*/].f_1));
						func_68(0x00000001);
						unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_77);
						unk_0x0E2400AB9174FA81(0x00000005, iLocal_77, 0x6F0783F5);
						func_64(0x00000003, vLocal_51, 0xBF800000, 0x00000000);
						func_64(0x00000004, vLocal_51, 0xBF800000, 0x00000000);
						unk_0x71199B01895C6202(iLocal_60);
						unk_0x71199B01895C6202(iLocal_62);
						func_55(0x00000007, 0x00000000, vLocal_51, 0xBF800000);
						func_55(0x00000008, 0x00000000, vLocal_51, 0xBF800000);
						func_55(0x00000009, 0x00000000, vLocal_51, 0xBF800000);
						func_55(0x0000000A, 0x00000000, vLocal_51, 0xBF800000);
						unk_0x71199B01895C6202(iLocal_61);
						unk_0x71199B01895C6202(iLocal_63);
						iLocal_54++;
					}
					if (func_42())
					{
						if (!unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
						{
							unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_77);
							unk_0x0E2400AB9174FA81(0x00000005, iLocal_77, 0x6F0783F5);
						}
						else if (!func_121(0x00000002))
						{
							unk_0x0E2400AB9174FA81(0x00000003, 0x6F0783F5, iLocal_77);
							unk_0x0E2400AB9174FA81(0x00000003, iLocal_77, 0x6F0783F5);
						}
					}
					break;
				
				case 0x00000008:
					bVar1 = 0x00000001;
					iVar2 = 0x00000000;
					while (iVar2 <= 0x0000000A)
					{
						if (!func_39(iVar2, 0x00000000))
						{
							bVar1 = 0x00000000;
						}
						iVar2++;
					}
					if (bVar1)
					{
						iLocal_54++;
					}
					break;
				
				case 0x00000009:
					if (func_199(Local_48[0x00000000 /*4*/]))
					{
						if (func_38(unk_0x16F2683693E537C9(), vLocal_53, 0x00000001) >= 200f && func_38(Local_48[0x00000000 /*4*/], vLocal_53, 0x00000001) >= 200f)
						{
							iLocal_46 = 0x00000002;
						}
					}
					else
					{
						func_37();
					}
					break;
			}
			break;
		
		case 0x00000002:
			func_36(0x00000001);
			break;
	}
}

void func_36(int iParam0)
{
	iLocal_54 = 0x00000000;
	iLocal_46 = 0x00000000;
	iLocal_45 = iParam0;
}

void func_37()
{
	if (func_199(Local_48[0x00000000 /*4*/]))
	{
		unk_0x71EDC33E5A423750(Local_48[0x00000000 /*4*/], 0x00000002);
	}
	func_169(0x00000001, 0x00000000);
}

float func_38(int iParam0, vector3 vParam1, bool bParam2)
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

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_199(Local_47[iParam0 /*6*/]))
	{
		return 0x00000001;
	}
	else
	{
		if (func_41(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000001) >= 400f)
		{
			func_40(iParam0, 0x00000000);
			return 0x00000001;
		}
		if (bParam1)
		{
			iVar0 = iParam0;
			if (iVar0 >= 0x00000007 && !unk_0xE4EDC4B0E92C078B(Local_47[iParam0 /*6*/].f_1))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(Local_47[iParam0 /*6*/]))
	{
		func_43(&(Local_47[iParam0 /*6*/].f_1));
		if ((((func_199(Local_47[iParam0 /*6*/]) && unk_0xD59B17D2DFF98E26(Local_47[iParam0 /*6*/])) && !unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000001)) && !unk_0x0E0E6175453415CB(Local_47[iParam0 /*6*/])) && !unk_0x81A5359F25512A04(Local_47[iParam0 /*6*/]))
		{
			unk_0x15AFB6CBDE990FB6(Local_47[iParam0 /*6*/], 0x00000001, 0x00000001);
		}
		if (bParam1)
		{
			unk_0xEBA53F35D0085654(&(Local_47[iParam0 /*6*/]));
		}
		else
		{
			unk_0x6DAD7906B73F064D(&(Local_47[iParam0 /*6*/]));
		}
		Local_47[iParam0 /*6*/].f_3 = 0x00000000;
		Local_47[iParam0 /*6*/].f_2 = 0x00000000;
	}
}

float func_41(int iParam0, int iParam1, bool bParam2)
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

bool func_42()
{
	return unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3150.508f, 2179.343f, -3.388727f, 3064.608f, 2223.616f, 12.38177f, 103f, 0x00000000, 0x00000001, 0x00000000);
}

void func_43(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_44()
{
	if (func_199(Local_48[0x00000000 /*4*/]) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_48[0x00000000 /*4*/], 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_45(int iParam0)
{
	if (func_49())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_15(Global_1B40B))
		{
			func_46(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_15(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_47(func_48(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_2++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000001))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_47(func_48(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_3++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000001);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000002))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_47(func_48(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

void func_47(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

char* func_48(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "AM_H_REFS";
			break;
		
		case 0x00000001:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 0x00000002:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_49()
{
	switch (func_50(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
	{
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000000:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_50(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_54(0x00000000))
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
		if (!func_52(iParam2))
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
			func_51(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_51(var uParam0, int iParam1)
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

bool func_52(int iParam0)
{
	return func_53(iParam0, Global_A1D7);
}

int func_53(int iParam0, int iParam1)
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

int func_54(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_52(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_55(int iParam0, bool bParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	int iVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	int iVar51;
	bool bVar52;
	bool bVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	char* sVar68;
	
	if (!unk_0xC844350D5D58C99A(Local_47[iParam0 /*6*/]))
	{
		iVar3 = joaat("weapon_unarmed");
		iVar4 = 0x00000000;
		iVar5 = 0xFFFFFFFF;
		vVar7 = { vLocal_51 };
		vVar8 = { vLocal_51 };
		iVar9 = 0x00000000;
		iVar10 = 0x00000001;
		iVar11 = 0x00000000;
		iVar12 = 0x00000000;
		iVar13 = 0x00000001;
		fVar14 = 0.75f;
		fVar15 = 0.95f;
		fVar16 = 60f;
		fVar17 = 5f;
		fVar18 = 120f;
		fVar19 = -90f;
		fVar20 = 90f;
		fVar21 = 125f;
		iVar22 = iLocal_77;
		bVar23 = 0x00000001;
		bVar24 = 0x00000001;
		bVar25 = 0x00000000;
		bVar26 = 0x00000001;
		bVar27 = 0x00000001;
		bVar28 = 0x00000000;
		bVar29 = 0x00000000;
		bVar30 = 0x00000000;
		iVar31 = 0x00000000;
		bVar32 = 0x00000001;
		bVar33 = 0x00000001;
		bVar34 = 0x00000001;
		bVar35 = 0x00000000;
		bVar36 = 0x00000001;
		bVar37 = 0x00000000;
		bVar38 = 0x00000001;
		bVar39 = 0x00000001;
		bVar40 = 0x00000001;
		iVar41 = 0x00000001;
		bVar42 = 0x00000001;
		bVar43 = 0x00000001;
		bVar44 = 0x00000000;
		bVar45 = 0x00000000;
		bVar46 = 0x00000000;
		bVar47 = 0x00000000;
		bVar48 = 0x00000000;
		bVar49 = 0x00000000;
		bVar50 = 0x00000001;
		iVar51 = 0x00000000;
		bVar52 = 0x00000000;
		bVar53 = 0x00000000;
		iVar54 = 0x00000001;
		bVar55 = 0x00000001;
		iVar56 = 0x00000000;
		bVar57 = 0x00000000;
		iVar58 = 0x00000000;
		bVar59 = 0x00000000;
		bVar60 = 0x00000000;
		bVar61 = 0x00000000;
		bVar62 = 0x00000000;
		bVar63 = 0x00000000;
		bVar64 = 0x00000000;
		bVar65 = 0x00000000;
		bVar66 = 0x00000000;
		bVar67 = 0x00000000;
		switch (iParam0)
		{
			case 0x00000000:
				iVar2 = iLocal_63;
				iVar4 = Local_48[0x00000001 /*4*/];
				iVar3 = joaat("weapon_pistol");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000001:
				iVar2 = iLocal_63;
				vVar0 = { unk_0x68E4ADDDDCD7BDDE(Local_48[0x00000001 /*4*/], 0f, -1.7f, 0.9f) };
				fVar1 = (unk_0xD9522BA9E27E1349(Local_48[0x00000001 /*4*/]) + 90f);
				sVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar3 = joaat("weapon_microsmg");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000002:
				iVar2 = iLocal_61;
				iVar4 = Local_48[0x00000002 /*4*/];
				iVar3 = joaat("weapon_pistol");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000003:
				iVar2 = iLocal_61;
				vVar0 = { unk_0x68E4ADDDDCD7BDDE(Local_48[0x00000002 /*4*/], 0f, -1.5f, 0.9f) };
				fVar1 = (unk_0xD9522BA9E27E1349(Local_48[0x00000002 /*4*/]) + 90f);
				sVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar3 = joaat("weapon_microsmg");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000004:
				iVar2 = iLocal_61;
				vVar0 = { unk_0x68E4ADDDDCD7BDDE(Local_48[0x00000002 /*4*/], 0f, -2.3f, 0.9f) };
				fVar1 = (unk_0xD9522BA9E27E1349(Local_48[0x00000002 /*4*/]) + 90f);
				sVar68 = "WORLD_HUMAN_HANG_OUT_STREET";
				iVar3 = joaat("weapon_pistol");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000007:
				iVar2 = iLocal_61;
				iVar4 = Local_48[0x00000003 /*4*/];
				iVar3 = joaat("weapon_pistol");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000008:
				iVar2 = iLocal_61;
				iVar4 = Local_48[0x00000003 /*4*/];
				iVar5 = 0x00000000;
				iVar3 = joaat("weapon_microsmg");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x00000009:
				iVar2 = iLocal_63;
				iVar4 = Local_48[0x00000004 /*4*/];
				iVar3 = joaat("weapon_pistol");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			case 0x0000000A:
				iVar2 = iLocal_63;
				iVar4 = Local_48[0x00000004 /*4*/];
				iVar5 = 0x00000000;
				iVar3 = joaat("weapon_microsmg");
				iVar31 = 0x00000001;
				bVar32 = 0x00000000;
				bVar43 = 0x00000000;
				bVar66 = 0x00000001;
				break;
			
			default:
				break;
		}
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0x00000000;
		}
		if (!func_63(vParam2, vLocal_51, 0x00000000))
		{
			if (!unk_0xC844350D5D58C99A(iVar6))
			{
				vVar0 = { vParam2 };
			}
			else
			{
				vVar7 = { vParam2 };
			}
		}
		if (fParam3 != -1f)
		{
			fVar1 = fParam3;
		}
		if (func_199(iVar4))
		{
			Local_47[iParam0 /*6*/] = unk_0x852A19533F896693(iVar4, 0x0000001A, iVar2, iVar5, 0x00000001, 0x00000001);
		}
		else
		{
			Local_47[iParam0 /*6*/] = unk_0x36F2404464202779(0x0000001A, iVar2, vVar0, fVar1, 0x00000001, 0x00000001);
			unk_0x20641932E5104B25(Local_47[iParam0 /*6*/], bVar36, 0x00000000);
			unk_0xCDCD90141EA7E6EE(Local_47[iParam0 /*6*/], !bVar60, 0x00000000);
		}
		if (bVar35)
		{
			unk_0x08841CDB215AE18F(Local_47[iParam0 /*6*/], vVar0, 0x00000000, 0x00000000, 0x00000001);
		}
		if (bParam1)
		{
			if (iVar22 == iLocal_77)
			{
				Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0x00000001, 0x00000091);
			}
			else
			{
				Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0x00000000, 0x00000091);
			}
		}
		unk_0x6895ED13649CBD25(Local_47[iParam0 /*6*/], iVar54);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x000000D5, bVar23);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x000000D4, bVar24);
		unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], bVar25);
		unk_0xFADC0A217229F6B5(Local_47[iParam0 /*6*/], bVar26);
		unk_0x1365063FA6365BE8(Local_47[iParam0 /*6*/], bVar27);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x000000BC, bVar50);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x0000002A, !bVar28);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000009, bVar30);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000003, bVar32);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x00000156, bVar52);
		unk_0xE8832A9E16A57A1F(Local_47[iParam0 /*6*/], iVar31, 0x00000001);
		unk_0x0B42C743EF171FF5(Local_47[iParam0 /*6*/], iVar12);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000008, bVar34);
		unk_0x4A4806F9D471E491(Local_47[iParam0 /*6*/], bVar33, 0x00000000);
		unk_0xE121AE1BBF90E186(Local_47[iParam0 /*6*/], bVar37);
		unk_0x262EF6C6306BEA6C(Local_47[iParam0 /*6*/], iVar3, 0xFFFFFFFF, bVar29, bVar29);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000002, bVar38);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, bVar39);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000034, bVar40);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x0000000D, bVar63);
		unk_0x00A6D36F507FD6EA(Local_47[iParam0 /*6*/], iVar41);
		unk_0x25C5402CC10F76CD(Local_47[iParam0 /*6*/], bVar42);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x00000076, bVar43);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x00000073, bVar44);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x0000000C, bVar45);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000024, bVar46);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000023, bVar47);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x0000001D, bVar48);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x000000B9, bVar49);
		unk_0x2051F535F4A99479(Local_47[iParam0 /*6*/], iVar51);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000011, bVar57);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000005, bVar66);
		unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x0000002E, bVar67);
		unk_0xCAC78D14D05349E7(Local_47[iParam0 /*6*/], iVar58);
		unk_0x33CE5A9E32EA10B2(Local_47[iParam0 /*6*/], bVar53);
		func_59(Local_47[iParam0 /*6*/], fVar16, fVar17, fVar18, fVar19, fVar20);
		unk_0x1E9649458B15960F(Local_47[iParam0 /*6*/], bVar61);
		unk_0x4E885A246A9D983A(Local_47[iParam0 /*6*/], 0x000000CB, bVar62);
		unk_0xF5B281233FC43E54(Local_47[iParam0 /*6*/], !bVar62);
		if (!bVar55)
		{
			func_58(iParam0, 0x00000002);
		}
		if (!unk_0xEA6BC48857E0AC4C(sVar68))
		{
			unk_0x509B8296EBA9B408(Local_47[iParam0 /*6*/], sVar68, 0xFFFFFFFF, 0x00000000);
		}
		if (iVar11 > 0x00000000)
		{
			if (iVar11 > unk_0xC08489BCA49ECCA8(Local_47[iParam0 /*6*/]) || iVar56)
			{
				unk_0x722454E43E496678(Local_47[iParam0 /*6*/], iVar11);
			}
			unk_0xD458AC1C1D29C3B4(Local_47[iParam0 /*6*/], iVar11, 0x00000000);
		}
		if (iVar13 > 0x00000000)
		{
			unk_0x298903DD96203C2C(Local_47[iParam0 /*6*/], iVar13);
		}
		if (fVar21 >= 0f)
		{
			unk_0x967762C930C0C5FD(Local_47[iParam0 /*6*/], fVar21);
		}
		if (fVar14 > 0f || fVar15 > 0f)
		{
			unk_0x9FC2699ACD081EC0(Local_47[iParam0 /*6*/], fVar14, fVar15);
		}
		if (bVar64)
		{
			unk_0xED253B8DDB3FFB77(Local_47[iParam0 /*6*/], vVar0, 5f, 0x00000000, 0x00000000);
		}
		if (bVar65)
		{
			unk_0x561C1BF2863AB0B1(Local_47[iParam0 /*6*/]);
		}
		unk_0x6DF7BF67E86AAE86(Local_47[iParam0 /*6*/], iVar22);
		if (unk_0xC844350D5D58C99A(iVar6))
		{
			unk_0x9F528B1B53FBC5D9(Local_47[iParam0 /*6*/], iVar6, 0xFFFFFFFF, vVar7, vVar8, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
			unk_0x46CB381A452EF99D(Local_47[iParam0 /*6*/], 0x00000000);
			func_58(iParam0, 0x00000001);
		}
		func_57(iParam0);
		func_56(iParam0);
		if (iVar9 != 0x00000000)
		{
			unk_0x1F6FCCC72D02C71A(Local_47[iParam0 /*6*/], iVar3, iVar9);
			unk_0x5745EA6329A91E29(Local_47[iParam0 /*6*/], iVar3, 0x00000001);
		}
		unk_0x083F03A847B640E9(Local_47[iParam0 /*6*/], iVar10);
		if (bVar59)
		{
			unk_0x6E8BDA9057564534(Local_47[iParam0 /*6*/], 0x00000001, "DEFAULT_ACTION");
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_56(int iParam0)
{
	if (func_199(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0x00000000:
				break;
			}
	}
}

void func_57(int iParam0)
{
	if (func_199(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0x00000000:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000001, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
				break;
			
			case 0x00000002:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000003:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
				break;
			
			case 0x00000004:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000007:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000001, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000001, 0x00000002, 0x00000000);
				break;
			
			case 0x00000008:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000000, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
				break;
			
			case 0x00000009:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
				break;
			
			case 0x0000000A:
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000003, 0x00000001, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(Local_47[iParam0 /*6*/], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
				break;
			}
	}
}

void func_58(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Local_47[iParam0 /*6*/].f_2), iParam1);
}

void func_59(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x9FA191B317572861(iParam0, fParam1);
		unk_0xB21189153A095FA1(iParam0, fParam2);
		unk_0xCF443519BC24A3CB(iParam0, (fParam3 / 2f));
		unk_0x8979D9784F39DF46(iParam0, fParam4);
		unk_0xBEC9D6BBD21A735F(iParam0, fParam5);
	}
}

int func_60(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_61(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_62(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_62(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_62(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_63(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_64(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	vector3 vVar26;
	char* sVar27;
	
	if (!unk_0xC844350D5D58C99A(Local_48[iParam0 /*4*/]))
	{
		iVar3 = 0x00000000;
		bVar4 = 0x00000001;
		bVar5 = 0x00000001;
		bVar6 = 0x00000000;
		bVar7 = 0x00000000;
		bVar8 = 0x00000001;
		bVar9 = 0x00000000;
		bVar10 = 0x00000000;
		bVar11 = 0x00000001;
		bVar12 = 0x00000000;
		iVar13 = 0x00000000;
		iVar14 = 0x00000000;
		iVar15 = 0x00000000;
		bVar16 = 0x00000000;
		bVar17 = 0x00000001;
		bVar18 = 0x00000000;
		bVar19 = 0x00000000;
		iVar20 = 0x00000001;
		fVar22 = -1f;
		fVar23 = -1f;
		switch (iParam0)
		{
			case 0x00000000:
				vVar0 = { vLocal_53 };
				fVar1 = 163.5528f;
				iVar2 = iLocal_59;
				bVar11 = 0x00000000;
				bVar16 = 0x00000001;
				bVar17 = 0x00000000;
				bVar19 = 0x00000001;
				bVar6 = 0x00000001;
				break;
			
			case 0x00000001:
				vVar0 = { 3087.114f, 2195.558f, 2f };
				fVar1 = 157.68f;
				iVar2 = iLocal_62;
				bVar18 = 0x00000001;
				bVar9 = 0x00000001;
				bVar19 = 0x00000001;
				iVar20 = 0x00000000;
				bVar16 = 0x00000001;
				bVar17 = 0x00000000;
				break;
			
			case 0x00000002:
				vVar0 = { 3092.788f, 2197.243f, 2f };
				fVar1 = -22.32f;
				iVar2 = iLocal_60;
				bVar18 = 0x00000001;
				bVar9 = 0x00000001;
				bVar19 = 0x00000001;
				iVar20 = 0x00000000;
				bVar16 = 0x00000001;
				bVar17 = 0x00000000;
				break;
			
			case 0x00000003:
				vVar0 = { 3170.401f, 1964.587f, 0.2889f };
				fVar1 = 341.1273f;
				iVar2 = iLocal_60;
				bVar18 = 0x00000001;
				bVar9 = 0x00000001;
				bVar19 = 0x00000001;
				iVar20 = 0x00000000;
				bVar16 = 0x00000001;
				bVar17 = 0x00000000;
				break;
			
			case 0x00000004:
				vVar0 = { 3227.12f, 2074.91f, 0.75f };
				fVar1 = 175.16f;
				iVar2 = iLocal_62;
				bVar18 = 0x00000001;
				bVar9 = 0x00000001;
				bVar19 = 0x00000001;
				iVar20 = 0x00000000;
				bVar16 = 0x00000001;
				bVar17 = 0x00000000;
				break;
			
			default:
				break;
		}
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0x00000000;
		}
		if (!func_63(vParam1, vLocal_51, 0x00000000))
		{
			vVar0 = { vParam1 };
		}
		if (fParam2 != -1f)
		{
			fVar1 = fParam2;
		}
		Local_48[iParam0 /*4*/] = unk_0x122AAB0B1D6F55AD(iVar2, vVar0, fVar1, 0x00000001, 0x00000001, 0x00000000);
		func_67(iParam0);
		func_66(iParam0);
		unk_0x4A4806F9D471E491(Local_48[iParam0 /*4*/], bVar5, 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar24))
		{
			unk_0x9F528B1B53FBC5D9(Local_48[iParam0 /*4*/], iVar24, 0xFFFFFFFF, vVar25, vVar26, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		}
		else
		{
			unk_0x20641932E5104B25(Local_48[iParam0 /*4*/], bVar4, 0x00000000);
		}
		unk_0xD5A0214B20BCBAD8(Local_48[iParam0 /*4*/], bVar6);
		unk_0x1E9649458B15960F(Local_48[iParam0 /*4*/], bVar7);
		unk_0xA22F71BBC8173C39(Local_48[iParam0 /*4*/], bVar8);
		if (bVar9)
		{
			unk_0x56FDC9ADE35F7DB0(Local_48[iParam0 /*4*/], bVar9, 0x00000001, 0x00000000);
		}
		unk_0xE121AE1BBF90E186(Local_48[iParam0 /*4*/], bVar12);
		unk_0xE8832A9E16A57A1F(Local_48[iParam0 /*4*/], iVar13, 0x00000001);
		unk_0x1FC8B874F2C46E6E(Local_48[iParam0 /*4*/], iVar14);
		unk_0x63147A4193F1B604(Local_48[iParam0 /*4*/], iVar15);
		unk_0x9A8BCD43DBDDCDCA(Local_48[iParam0 /*4*/], bVar17, 0x00000000);
		unk_0xF3F7BF451A720FDF(Local_48[iParam0 /*4*/], bVar16);
		unk_0x7980D72D61BEF4D5(Local_48[iParam0 /*4*/], bVar18);
		unk_0x05EC10F460C3A4AF(Local_48[iParam0 /*4*/], iVar20);
		if (!unk_0xEA6BC48857E0AC4C(sVar27))
		{
			unk_0x55A3C4ED4728EA42(Local_48[iParam0 /*4*/], sVar27);
		}
		if (fVar21 > 0f)
		{
			unk_0x1AEF7184B203A58D(Local_48[iParam0 /*4*/], fVar21);
		}
		if (bVar10)
		{
			unk_0x873BCADC75FF6D20(Local_48[iParam0 /*4*/]);
		}
		if (fVar22 >= 0f)
		{
			unk_0x238274410BB56EE5(Local_48[iParam0 /*4*/], fVar22);
		}
		if (fVar23 >= 0f)
		{
			unk_0x552A77B585309C2B(Local_48[iParam0 /*4*/], fVar23);
		}
		if (bVar19)
		{
			unk_0xB078AFA7242F1F7B(Local_48[iParam0 /*4*/], 0x00000001);
		}
		if (iVar3 != 0x00000000)
		{
			unk_0x71EDC33E5A423750(Local_48[iParam0 /*4*/], iVar3);
		}
		if (bParam3)
		{
			Local_48[iParam0 /*4*/].f_1 = func_65(Local_48[iParam0 /*4*/], bVar11, 0x00000000);
		}
		if (iParam0 == 0x00000000)
		{
			unk_0xB58CA658A628ED02(Local_48[iParam0 /*4*/], 0x00000003);
		}
	}
	return 0x00000001;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
{
	return func_61(iParam0, !bParam1, bParam2);
}

void func_66(int iParam0)
{
	if (func_199(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 0x00000002:
			case 0x00000003:
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000001, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000002, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000003, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000004, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000005, 0x00000000);
				break;
			
			case 0x00000001:
			case 0x00000004:
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000001, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000002, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000003, 0x00000001);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000004, 0x00000000);
				unk_0xD3421E391490133B(Local_48[iParam0 /*4*/], 0x00000005, 0x00000001);
				break;
			}
	}
}

void func_67(int iParam0)
{
	if (func_199(Local_48[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 0x00000001:
				unk_0xC002508A277213DE(Local_48[iParam0 /*4*/], 0x0000006F, 0x0000001C);
				unk_0x58A0C35FA7CA6162(Local_48[iParam0 /*4*/], 0x0000006F, 0x0000009C);
				break;
			
			case 0x00000002:
				unk_0xC002508A277213DE(Local_48[iParam0 /*4*/], 0x00000079, 0x00000014);
				unk_0x58A0C35FA7CA6162(Local_48[iParam0 /*4*/], 0x00000000, 0x0000009C);
				break;
			
			case 0x00000003:
				unk_0xC002508A277213DE(Local_48[iParam0 /*4*/], 0x00000079, 0x0000002E);
				unk_0x58A0C35FA7CA6162(Local_48[iParam0 /*4*/], 0x00000000, 0x0000009C);
				break;
			
			case 0x00000004:
				unk_0xC002508A277213DE(Local_48[iParam0 /*4*/], 0x0000006F, 0x00000036);
				unk_0x58A0C35FA7CA6162(Local_48[iParam0 /*4*/], 0x00000070, 0x0000009C);
				break;
			}
	}
}

void func_68(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_55, iParam0);
}

void func_69()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	func_81(0x00000001);
	unk_0x9CBC55A05A07FC47(0x00000001);
	func_80(0x00000000);
	unk_0xE342F209E49C5314(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(3073.41f, 2161.604f, -20f, 3123.816f, 2216.9f, 9.0777f, 0x00000000);
	if (!unk_0x8E28E832BEAC3DCE(3084.41f, 2080.39f, 0f, 2f))
	{
		unk_0xE342F209E49C5314(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0x00000000, 0x00000001);
		unk_0x21688103CC7F9B19(3077.523f, 2069.831f, -3.3524f, 3092.296f, 2092.042f, 2.769f, 0x00000000);
	}
	if (!unk_0x8E28E832BEAC3DCE(3062.67f, 2081.65f, 0f, 2f))
	{
		unk_0xE342F209E49C5314(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0x00000000, 0x00000001);
		unk_0x21688103CC7F9B19(3054.367f, 2071.361f, -2.4173f, 3075.652f, 2091.954f, 2.7296f, 0x00000000);
	}
	if (!unk_0x8E28E832BEAC3DCE(3075.716f, 2125.59f, 0.8052f, 2f))
	{
		unk_0x745CE398A4B0A3C6(3075.716f, 2125.59f, 0.8052f, 5f, 0x00000000);
	}
	if (!unk_0x8E28E832BEAC3DCE(3070.882f, 2103.967f, -2.0883f, 2f))
	{
		unk_0x28F5E4DA506AC0CA(3070.882f, 2103.967f, -2.0883f, 5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0xF63400DBE3303D26("ENEMIES", &iLocal_77);
	unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000003, 0x6F0783F5, iLocal_77);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_77, iLocal_77);
	unk_0x0E2400AB9174FA81(0x00000003, iLocal_77, 0x6F0783F5);
	unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), 0x6F0783F5);
	func_79(&uLocal_79, 0x00000001, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	unk_0x51B096AAC60548C1(0f);
	func_70(0x00000001);
}

void func_70(bool bParam0)
{
	func_71(0x00000027, bParam0);
	func_71(0x00000028, bParam0);
	func_71(0x00000029, bParam0);
	func_71(0x0000002A, bParam0);
	func_71(0x0000002B, bParam0);
	func_71(0x0000002C, bParam0);
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_78(iParam0, 0x00000002, 0x00000001))
		{
			func_77(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_78(iParam0, 0x00000002, 0x00000001))
	{
		func_72(iParam0, 0x00000002, 0x00000001);
	}
}

void func_72(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0x00000000)
		{
			iVar0 = func_75(func_76(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_73(func_76(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_74(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_13();
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

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_74(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_76(int iParam0)
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

void func_77(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0x00000000)
		{
			iVar0 = func_75(func_76(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_73(func_76(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_78(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_75(func_76(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_79(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			iLocal_78[iParam0] = unk_0x7D6CA5F52B3748BF(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			break;
	}
}

void func_81(int iParam0)
{
	iParam0 = iParam0;
}

void func_82()
{
	if (!func_120())
	{
		if (func_107())
		{
			func_169(0x00000001, 0x00000000);
		}
	}
	unk_0x1A6DFFFEEC27BF4F("RE_SEAPLANE", 0x00000000);
	func_106();
	func_94();
	func_90();
	func_85();
	func_83(&uLocal_64, &uLocal_56);
}

void func_83(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0x00000000 && unk_0xC844350D5D58C99A((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0x00000000) && unk_0xC844350D5D58C99A((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_84((uParam0[*uParam1 /*6*/])->f_2, 0x00000002))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x6AB6A474D29FA7D8((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xF649DD3BF44195C7((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0x00000000;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0x00000000 || !unk_0xC844350D5D58C99A((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0x00000000 || !unk_0xC844350D5D58C99A((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0x00000000;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_1 = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_2 = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_3 = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_5 = 0x00000000;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0x00000000;
		iVar1++;
	}
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000B)
	{
		if (unk_0xC844350D5D58C99A(Local_47[iVar0 /*6*/]) && unk_0xE4EDC4B0E92C078B(Local_47[iVar0 /*6*/].f_1))
		{
			if (unk_0x405E212DDE472467(Local_47[iVar0 /*6*/], 0x00000000))
			{
				if (!func_89(iVar0, 0x00000000))
				{
					unk_0x516E63E474722206(Local_47[iVar0 /*6*/].f_1, 1f);
					func_58(iVar0, 0x00000000);
				}
				if (func_88(Local_47[iVar0 /*6*/], 0x00000000) != 0xFFFFFFFF)
				{
					if (func_87(iVar0))
					{
						if (unk_0x4FA921CB56EDB0F8(Local_47[iVar0 /*6*/].f_1) > 0x00000000)
						{
							unk_0x7F010F50CE03A8AF(Local_47[iVar0 /*6*/].f_1, 0x00000000);
							unk_0x54B31D18C3F36EB7(Local_47[iVar0 /*6*/].f_1, 0x00000001);
						}
					}
					else if (unk_0x4FA921CB56EDB0F8(Local_47[iVar0 /*6*/].f_1) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(Local_47[iVar0 /*6*/].f_1, 0x000000FF);
						unk_0x54B31D18C3F36EB7(Local_47[iVar0 /*6*/].f_1, 0x00000000);
					}
				}
			}
			else if (func_89(iVar0, 0x00000000))
			{
				unk_0x516E63E474722206(Local_47[iVar0 /*6*/].f_1, 0.7f);
				func_86(iVar0, 0x00000000);
				if (unk_0x4FA921CB56EDB0F8(Local_47[iVar0 /*6*/].f_1) == 0x00000000)
				{
					unk_0x7F010F50CE03A8AF(Local_47[iVar0 /*6*/].f_1, 0x000000FF);
					unk_0x54B31D18C3F36EB7(Local_47[iVar0 /*6*/].f_1, 0x00000000);
				}
			}
			if (unk_0xEB6A8945D1AC98A1(Local_47[iVar0 /*6*/]))
			{
				func_43(&(Local_47[iVar0 /*6*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(Local_48[iVar0 /*4*/]) && unk_0xE4EDC4B0E92C078B(Local_48[iVar0 /*4*/].f_1))
		{
			if (!unk_0xDF1306B443CD3D15(Local_48[iVar0 /*4*/], 0x00000000))
			{
				func_43(&(Local_48[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_86(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(&(Local_47[iParam0 /*6*/].f_2), iParam1);
}

int func_87(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (!func_199(Local_47[0x00000000 /*6*/]))
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000003)
	{
		if (!func_199(Local_47[0x00000002 /*6*/]))
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000004)
	{
		if (!func_199(Local_47[0x00000002 /*6*/]) && !func_199(Local_47[0x00000003 /*6*/]))
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000008)
	{
		if (!func_199(Local_47[0x00000007 /*6*/]))
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x0000000A)
	{
		if (!func_199(Local_47[0x00000009 /*6*/]))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_88(int iParam0, int iParam1)
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

bool func_89(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Local_47[iParam0 /*6*/].f_2, iParam1);
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(Local_48[iVar0 /*4*/]))
		{
			func_91(iVar0);
		}
		iVar0++;
	}
}

void func_91(int iParam0)
{
	if (func_199(Local_48[iParam0 /*4*/]) || iParam0 == 0x00000000)
	{
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
			case 0x00000004:
				switch (Local_48[iParam0 /*4*/].f_2)
				{
					case 0x00000000:
						if (((!func_199(unk_0xA30B8362589C124A(Local_48[iParam0 /*4*/], 0xFFFFFFFF, 0x00000000)) && !func_199(unk_0xA30B8362589C124A(Local_48[iParam0 /*4*/], 0x00000000, 0x00000000))) && !func_199(unk_0xA30B8362589C124A(Local_48[iParam0 /*4*/], 0x00000001, 0x00000000))) && !func_199(unk_0xA30B8362589C124A(Local_48[iParam0 /*4*/], 0x00000002, 0x00000000)))
						{
							unk_0x05EC10F460C3A4AF(Local_48[iParam0 /*4*/], 0x00000001);
							unk_0xB078AFA7242F1F7B(Local_48[iParam0 /*4*/], 0x00000000);
							Local_48[iParam0 /*4*/].f_2++;
						}
						break;
					
					case 0x00000001:
						break;
				}
				break;
		}
	}
	else if (unk_0x4FC40AB0ECCE6E18(Local_48[iParam0 /*4*/]))
	{
		func_92(iParam0, 0x00000000);
	}
	else
	{
		func_92(iParam0, 0x00000001);
	}
}

void func_92(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(Local_48[iParam0 /*4*/]))
	{
		func_43(&(Local_48[iParam0 /*4*/].f_1));
		if (unk_0x20D6474D5F4B9FC6(Local_48[iParam0 /*4*/]))
		{
			unk_0xC55F2A0377488064(Local_48[iParam0 /*4*/]);
		}
		if (func_93(&(Local_48[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				unk_0xA954465BA6FDEFE2(&(Local_48[iParam0 /*4*/]));
			}
			else
			{
				unk_0x046C362CF15F1935(&(Local_48[iParam0 /*4*/]));
			}
		}
		Local_48[iParam0 /*4*/] = 0x00000000;
		Local_48[iParam0 /*4*/].f_2 = 0x00000000;
		Local_48[iParam0 /*4*/].f_3 = 0f;
	}
}

int func_93(var uParam0)
{
	if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *uParam0, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000B)
	{
		if (unk_0xC844350D5D58C99A(Local_47[iVar0 /*6*/]))
		{
			func_95(iVar0);
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	vector3 vVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	
	if (func_199(Local_47[iParam0 /*6*/]))
	{
		switch (iParam0)
		{
			case 0x00000000:
			case 0x00000002:
				if (Local_47[iParam0 /*6*/].f_3 >= 0x00000002 && Local_47[iParam0 /*6*/].f_3 < 0x00000005)
				{
					if ((unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000))) && unk_0x4E861BC5B1EDA7BD(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
					{
						func_105();
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
						unk_0x75CDA8644CD3B5F5(0x00000000, unk_0x09AC81E49EA267F7(0x000001F4, 0x000005DD), 0x00001000);
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
						Local_47[iParam0 /*6*/].f_3 = 0x00000005;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0x00000000:
						if (iParam0 == 0x00000000)
						{
							if (func_199(Local_47[0x00000003 /*6*/]))
							{
								unk_0x50155CDC2C5335FC(Local_47[iParam0 /*6*/], 0x00000001, Local_47[0x00000003 /*6*/], 0x0000796E, vLocal_51, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF);
							}
						}
						else if (func_199(Local_47[0x00000001 /*6*/]))
						{
							unk_0x50155CDC2C5335FC(Local_47[iParam0 /*6*/], 0x00000001, Local_47[0x00000001 /*6*/], 0x0000796E, vLocal_51, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF);
						}
						if (((func_121(0x00000001) || unk_0x4734A6196B611C3B(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9())) || func_102()) || func_101())
						{
							func_100(iParam0);
							unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000001:
						if (iParam0 == 0x00000000)
						{
							if (!func_199(Local_47[0x00000001 /*6*/]) || (func_199(Local_48[0x00000001 /*4*/]) && unk_0xC42A92762C58E1B9(Local_47[0x00000001 /*6*/], Local_48[0x00000001 /*4*/], 0x00000001)))
							{
								bVar0 = 0x00000001;
							}
						}
						else if ((!func_199(Local_47[0x00000003 /*6*/]) || (func_199(Local_48[0x00000002 /*4*/]) && unk_0xC42A92762C58E1B9(Local_47[0x00000003 /*6*/], Local_48[0x00000002 /*4*/], 0x00000001))) && (!func_199(Local_47[0x00000004 /*6*/]) || (func_199(Local_48[0x00000002 /*4*/]) && unk_0xC42A92762C58E1B9(Local_47[0x00000004 /*6*/], Local_48[0x00000002 /*4*/], 0x00000001))))
						{
							bVar0 = 0x00000001;
						}
						if (bVar0)
						{
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000002:
						iVar5 = 0x0000020E;
						if (iParam0 == 0x00000000)
						{
							sVar4 = sLocal_49;
						}
						else
						{
							sVar4 = sLocal_50;
						}
						unk_0x9414396734E14897(sVar4, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &iVar1);
						unk_0x51FE1B68F2818389(sVar4, &iVar3);
						unk_0x9414396734E14897(sVar4, unk_0x68F4C0EC296D3901(Local_47[iParam0 /*6*/], 0x00000001), &iVar2);
						if (iVar1 > 0x00000000 && unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
						{
							iVar1 = (iVar1 - 0x00000001);
						}
						if (iParam0 == 0x00000002 && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3108.675f, 2194.121f, 10.95087f, 3143.525f, 2232.265f, -4.598444f, 82.75f, 0x00000000, 0x00000001, 0x00000000))
						{
							iVar1 = func_99(iVar1, 0x00000016, iVar3);
						}
						if (func_38(unk_0x16F2683693E537C9(), vLocal_53, 0x00000001) >= 225f)
						{
							iVar1 = (iVar3 - 0x00000001);
						}
						if (((((iParam0 == 0x00000000 && iLocal_57 != iVar1) && iVar1 > iVar2) || ((iParam0 == 0x00000002 && iLocal_58 != iVar1) && iVar1 > iVar2)) && func_199(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]))) && !unk_0x15D0A3E61766C539(Local_47[iParam0 /*6*/], 0x00000000))
						{
							if (iParam0 == 0x00000000)
							{
								iLocal_57 = iVar1;
							}
							else
							{
								iLocal_58 = iVar1;
							}
							if (func_199(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/])))
							{
								unk_0xB078AFA7242F1F7B(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000);
								func_86(iParam0, 0x00000005);
							}
							unk_0x1B901F542DF070CF(Local_47[iParam0 /*6*/], unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), sVar4, 0x000C0025, 0x00000000, iVar5, iVar1, -1f, 0x00000000, 6f);
						}
						if ((!func_98(Local_47[iParam0 /*6*/], 0xF1F17AE7, 0x00000001) && unk_0xD1960163A3042274(Local_47[iParam0 /*6*/], 0xF1F17AE7) == 0x00000007) && !func_98(Local_47[iParam0 /*6*/], 0x20123810, 0x00000001))
						{
							unk_0x7A3479BFA16439E6(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x41A00000);
							if (func_199(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/])) && unk_0x6AC695D09170F27D(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/])))
							{
								unk_0xB078AFA7242F1F7B(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000001);
								func_58(iParam0, 0x00000005);
							}
						}
						if (!func_89(iParam0, 0x00000004))
						{
							if (unk_0x15D0A3E61766C539(Local_47[iParam0 /*6*/], 0x00000000))
							{
								func_58(iParam0, 0x00000004);
								unk_0xA3BF0AA5A2608191(Local_47[iParam0 /*6*/]);
								if (!func_89(iParam0, 0x00000005) && unk_0x6AC695D09170F27D(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/])))
								{
									unk_0xB078AFA7242F1F7B(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000001);
								}
							}
						}
						else if (!unk_0x15D0A3E61766C539(Local_47[iParam0 /*6*/], 0x00000000))
						{
							func_86(iParam0, 0x00000004);
							if (!func_89(iParam0, 0x00000005))
							{
								unk_0xB078AFA7242F1F7B(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000);
							}
						}
						if ((unk_0xD1960163A3042274(Local_47[iParam0 /*6*/], 0xF1F17AE7) == 0x00000001 && !unk_0x8B38C0DAEEDB5F9C(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]))) && !unk_0x6B4464DA5794D055(Local_47[iParam0 /*6*/]))
						{
							unk_0xFFDDE8CC59EB6D40(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, vLocal_51, 500f, 0x00000064, 0x00000001, 0xD6FF6D61);
						}
						unk_0xEF8F639897C675D5(sVar4, (iVar3 - 0x00000001), &vVar6);
						if (unk_0x5A91F08DF773C39D(Local_47[iParam0 /*6*/], vVar6, 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
							unk_0x5B54B463A4225B9F(Local_47[iParam0 /*6*/], unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000, unk_0x16F2683693E537C9(), vLocal_51, 0x00000007, 20f, 0x000C0025, 5f, 0x00000007);
							func_68(0x00000005);
							unk_0x2F3540C2227116A3(sVar4);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000003:
						if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
						{
							if (unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0x00000003, 0x00001770) || func_97(iParam0, 0x00001388))
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
								unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0xD1960163A3042274(Local_47[iParam0 /*6*/], 0xB41F1A34) == 0x00000001 && !unk_0x6B4464DA5794D055(Local_47[iParam0 /*6*/]))
							{
								unk_0xFFDDE8CC59EB6D40(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, vLocal_51, 500f, 0x00000064, 0x00000001, 0xD6FF6D61);
							}
						}
						break;
					
					case 0x00000004:
						if (!func_98(Local_47[iParam0 /*6*/], 0x9A27A999, 0x00000001))
						{
							if (!unk_0x7ED67A9BE53DAC95(Local_47[iParam0 /*6*/]))
							{
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000000);
								unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
							else
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
							}
						}
						break;
				}
				break;
			
			case 0x00000001:
			case 0x00000003:
			case 0x00000004:
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0x00000000:
						if ((iParam0 == 0x00000001 && func_98(Local_47[iParam0 /*6*/], 0x3B3A458F, 0x00000001)) && func_199(Local_47[0x00000003 /*6*/]))
						{
							unk_0x50155CDC2C5335FC(Local_47[iParam0 /*6*/], 0x00000001, Local_47[0x00000003 /*6*/], 0x0000796E, vLocal_51, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF);
						}
						if (((iParam0 == 0x00000003 || iParam0 == 0x00000004) && func_199(Local_47[0x00000001 /*6*/])) && func_98(Local_47[iParam0 /*6*/], 0x3B3A458F, 0x00000001))
						{
							unk_0x50155CDC2C5335FC(Local_47[iParam0 /*6*/], 0x00000001, Local_47[0x00000001 /*6*/], 0x0000796E, vLocal_51, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF);
						}
						if (((func_121(0x00000001) || unk_0x4734A6196B611C3B(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9())) || func_102()) || func_101())
						{
							func_100(iParam0);
							Local_47[iParam0 /*6*/].f_4 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000004E2, 0x000005DD));
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000001:
						if (unk_0x1C0640BA9A7327B3() >= Local_47[iParam0 /*6*/].f_4)
						{
							if ((iParam0 == 0x00000001 && func_199(Local_48[0x00000001 /*4*/])) && func_199(unk_0xA30B8362589C124A(Local_48[0x00000001 /*4*/], 0xFFFFFFFF, 0x00000000)))
							{
								unk_0xA3BF0AA5A2608191(Local_47[iParam0 /*6*/]);
								unk_0x5B1D360B9C6F0A09(Local_47[iParam0 /*6*/], Local_48[0x00000001 /*4*/], 0x00004E20, 0x00000000, 3f, 0x00000001, 0x00000000);
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
							}
							if ((iParam0 == 0x00000003 && func_199(Local_48[0x00000002 /*4*/])) && func_199(unk_0xA30B8362589C124A(Local_48[0x00000002 /*4*/], 0xFFFFFFFF, 0x00000000)))
							{
								unk_0xA3BF0AA5A2608191(Local_47[iParam0 /*6*/]);
								unk_0x5B1D360B9C6F0A09(Local_47[iParam0 /*6*/], Local_48[0x00000002 /*4*/], 0x00004E20, 0x00000000, 3f, 0x00000001, 0x00000000);
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
							}
							if ((iParam0 == 0x00000004 && func_199(Local_48[0x00000002 /*4*/])) && func_199(unk_0xA30B8362589C124A(Local_48[0x00000002 /*4*/], 0xFFFFFFFF, 0x00000000)))
							{
								unk_0xA3BF0AA5A2608191(Local_47[iParam0 /*6*/]);
								unk_0x5B1D360B9C6F0A09(Local_47[iParam0 /*6*/], Local_48[0x00000002 /*4*/], 0x00004E20, 0x00000001, 3f, 0x00000001, 0x00000000);
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
							}
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000002:
						switch (iParam0)
						{
							case 0x00000001:
								iVar7 = 0x00000001;
								break;
							
							case 0x00000003:
								iVar7 = 0x00000002;
								break;
							
							case 0x00000004:
								iVar7 = 0x00000002;
								break;
						}
						if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000001) || !func_199(unk_0xA30B8362589C124A(Local_48[iVar7 /*4*/], 0xFFFFFFFF, 0x00000000)))
						{
							unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000000);
							unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							Local_47[iParam0 /*6*/].f_3++;
						}
						else if (!func_98(Local_47[iParam0 /*6*/], 0x950B6492, 0x00000001))
						{
							if (iParam0 == 0x00000001 || (iParam0 == 0x00000003 && func_199(Local_48[iVar7 /*4*/])))
							{
								unk_0x5B1D360B9C6F0A09(Local_47[iParam0 /*6*/], Local_48[iVar7 /*4*/], 0x00004E20, 0x00000000, 3f, 0x00000001, 0x00000000);
							}
							if (iParam0 == 0x00000004 && func_199(Local_48[iVar7 /*4*/]))
							{
								unk_0x5B1D360B9C6F0A09(Local_47[iParam0 /*6*/], Local_48[iVar7 /*4*/], 0x00004E20, 0x00000001, 3f, 0x00000001, 0x00000000);
							}
						}
						break;
					
					case 0x00000003:
						if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
						{
							if (unk_0x4E861BC5B1EDA7BD(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
							{
								func_105();
								unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
								unk_0x75CDA8644CD3B5F5(0x00000000, unk_0x09AC81E49EA267F7(0x000001F4, 0x000005DD), 0x00001000);
								unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
								unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								func_103(Local_47[iParam0 /*6*/]);
								unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
								Local_47[iParam0 /*6*/].f_3++;
							}
							if (Local_47[iParam0 /*6*/].f_3 == 0x00000003)
							{
								if ((unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0x00000003, 0x00001770) || func_97(iParam0, 0x00001388)) && func_121(0x00000005))
								{
									unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0x00004E20);
									unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
									unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
									Local_47[iParam0 /*6*/].f_3 = 0x00000005;
								}
								else if (!func_199(unk_0xA30B8362589C124A(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0xFFFFFFFF, 0x00000000)))
								{
									unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000003, 0x00000001);
									unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
									Local_47[iParam0 /*6*/].f_3++;
								}
							}
						}
						break;
					
					case 0x00000004:
						break;
					
					case 0x00000005:
						if (!func_98(Local_47[iParam0 /*6*/], 0x9A27A999, 0x00000001))
						{
							if (!unk_0x7ED67A9BE53DAC95(Local_47[iParam0 /*6*/]))
							{
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000000);
								unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
							else
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
							}
						}
						break;
				}
				break;
			
			case 0x00000007:
				if (Local_47[iParam0 /*6*/].f_3 >= 0x00000001 && Local_47[iParam0 /*6*/].f_3 < 0x00000003)
				{
					if ((unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000))) && unk_0x4E861BC5B1EDA7BD(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
					{
						func_105();
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
						unk_0x75CDA8644CD3B5F5(0x00000000, unk_0x09AC81E49EA267F7(0x000001F4, 0x000005DD), 0x00001000);
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
						Local_47[iParam0 /*6*/].f_3 = 0x00000003;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0x00000000:
						if ((((func_44() && func_41(unk_0x16F2683693E537C9(), Local_47[iParam0 /*6*/], 0x00000001) <= 125f) || ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9())) && func_41(unk_0x16F2683693E537C9(), Local_47[iParam0 /*6*/], 0x00000001) <= 150f)) || (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x03068588A1FCED1A(Local_47[iParam0 /*6*/]))) || func_121(0x00000006))
						{
							if (func_199(Local_48[0x00000003 /*4*/]))
							{
								unk_0xB078AFA7242F1F7B(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000);
								fVar8 = unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9());
								fVar8 = func_96(fVar8, 10f, 40f);
								unk_0x1AEF7184B203A58D(Local_48[0x00000003 /*4*/], fVar8);
							}
							unk_0x5745EA6329A91E29(Local_47[iParam0 /*6*/], joaat("weapon_pistol"), 0x00000000);
							unk_0x5B54B463A4225B9F(Local_47[iParam0 /*6*/], unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000, unk_0x16F2683693E537C9(), vLocal_51, 0x00000007, 20f, 0x000C0025, 5f, 0x00000007);
							unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
							Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0x00000001, 0x00000091);
							func_68(0x00000006);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000001:
						if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
						{
							if (unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0x00000003, 0x00001770) || func_97(iParam0, 0x00001388))
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
								unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0xD1960163A3042274(Local_47[iParam0 /*6*/], 0xB41F1A34) == 0x00000001 && !unk_0x6B4464DA5794D055(Local_47[iParam0 /*6*/]))
							{
								unk_0xFFDDE8CC59EB6D40(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, vLocal_51, 500f, 0x00000064, 0x00000001, 0xD6FF6D61);
							}
						}
						break;
					
					case 0x00000002:
						if (!func_98(Local_47[iParam0 /*6*/], 0x9A27A999, 0x00000001))
						{
							if (!unk_0x7ED67A9BE53DAC95(Local_47[iParam0 /*6*/]))
							{
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000000);
								unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
							else
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
							}
						}
						break;
				}
				break;
			
			case 0x00000009:
				if (Local_47[iParam0 /*6*/].f_3 >= 0x00000001 && Local_47[iParam0 /*6*/].f_3 < 0x00000003)
				{
					if ((unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000))) && unk_0x4E861BC5B1EDA7BD(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
					{
						func_105();
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
						unk_0x75CDA8644CD3B5F5(0x00000000, unk_0x09AC81E49EA267F7(0x000001F4, 0x000005DD), 0x00001000);
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
						Local_47[iParam0 /*6*/].f_3 = 0x00000003;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0x00000000:
						if ((((func_44() && func_41(unk_0x16F2683693E537C9(), Local_47[iParam0 /*6*/], 0x00000001) <= 125f) || ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9())) && func_41(unk_0x16F2683693E537C9(), Local_47[iParam0 /*6*/], 0x00000001) <= 150f)) || (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x03068588A1FCED1A(Local_47[iParam0 /*6*/]))) || func_121(0x00000006))
						{
							if (func_199(Local_48[0x00000004 /*4*/]))
							{
								unk_0xB078AFA7242F1F7B(unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000);
								fVar9 = unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9());
								fVar9 = func_96(fVar9, 10f, 40f);
								unk_0x1AEF7184B203A58D(Local_48[0x00000004 /*4*/], fVar9);
							}
							unk_0x5745EA6329A91E29(Local_47[iParam0 /*6*/], joaat("weapon_pistol"), 0x00000000);
							unk_0x5B54B463A4225B9F(Local_47[iParam0 /*6*/], unk_0x3C66DF04E6EA3587(Local_47[iParam0 /*6*/]), 0x00000000, unk_0x16F2683693E537C9(), vLocal_51, 0x00000007, 20f, 0x000C0025, 5f, 0x00000007);
							unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
							Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0x00000001, 0x00000091);
							func_68(0x00000006);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000001:
						if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
						{
							if (unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0x00000003, 0x00001770) || func_97(iParam0, 0x00001388))
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
								unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
								Local_47[iParam0 /*6*/].f_3++;
							}
							else if (unk_0xD1960163A3042274(Local_47[iParam0 /*6*/], 0xB41F1A34) == 0x00000001 && !unk_0x6B4464DA5794D055(Local_47[iParam0 /*6*/]))
							{
								unk_0xFFDDE8CC59EB6D40(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, vLocal_51, 500f, 0x00000064, 0x00000001, 0xD6FF6D61);
							}
						}
						break;
					
					case 0x00000002:
						if (!func_98(Local_47[iParam0 /*6*/], 0x9A27A999, 0x00000001))
						{
							if (!unk_0x7ED67A9BE53DAC95(Local_47[iParam0 /*6*/]))
							{
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000000);
								unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
							else
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
							}
						}
						break;
				}
				break;
			
			case 0x00000008:
			case 0x0000000A:
				if (Local_47[iParam0 /*6*/].f_3 >= 0x00000001 && Local_47[iParam0 /*6*/].f_3 < 0x00000003)
				{
					if ((unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000) && func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000))) && unk_0x4E861BC5B1EDA7BD(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
					{
						func_105();
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
						unk_0x75CDA8644CD3B5F5(0x00000000, unk_0x09AC81E49EA267F7(0x000001F4, 0x000005DD), 0x00001000);
						unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						func_103(Local_47[iParam0 /*6*/]);
						unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
						Local_47[iParam0 /*6*/].f_3 = 0x00000003;
					}
				}
				switch (Local_47[iParam0 /*6*/].f_3)
				{
					case 0x00000000:
						if (((func_44() && func_41(unk_0x16F2683693E537C9(), Local_47[iParam0 /*6*/], 0x00000001) <= 125f) || ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9())) && func_41(unk_0x16F2683693E537C9(), Local_47[iParam0 /*6*/], 0x00000001) <= 150f)) || (unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && !unk_0x03068588A1FCED1A(Local_47[iParam0 /*6*/])))
						{
							Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0x00000001, 0x00000091);
							unk_0x7F010F50CE03A8AF(Local_47[iParam0 /*6*/].f_1, 0x00000000);
							unk_0x54B31D18C3F36EB7(Local_47[iParam0 /*6*/].f_1, 0x00000001);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000001:
						if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000))
						{
							if (func_199(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000)))
							{
								if (unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0x00000003, 0x00001770) || func_97(iParam0, 0x00001388))
								{
									unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
									unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
									unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
									Local_47[iParam0 /*6*/].f_3++;
								}
								else if (!func_199(unk_0xA30B8362589C124A(unk_0x6937EA2286828455(Local_47[iParam0 /*6*/], 0x00000000), 0xFFFFFFFF, 0x00000000)))
								{
									unk_0xAFF39FB306F8E232(Local_47[iParam0 /*6*/], 0x00000003, 0x00000001);
									unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
									Local_47[iParam0 /*6*/].f_3 = 0x00000003;
								}
							}
						}
						else
						{
							unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							Local_47[iParam0 /*6*/].f_3++;
						}
						break;
					
					case 0x00000002:
						if (!func_98(Local_47[iParam0 /*6*/], 0x9A27A999, 0x00000001))
						{
							if (!unk_0x7ED67A9BE53DAC95(Local_47[iParam0 /*6*/]))
							{
								unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000000);
								unk_0x6C3AE6E278DB3D0E(Local_47[iParam0 /*6*/], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
							else
							{
								unk_0x1A9C605516346AA9(Local_47[iParam0 /*6*/], 0xFFFFFFFF);
							}
						}
						break;
				}
				break;
		}
	}
	else
	{
		if (func_89(iParam0, 0x00000001))
		{
			unk_0x46CB381A452EF99D(Local_47[iParam0 /*6*/], 0x00000001);
			unk_0x15AFB6CBDE990FB6(Local_47[iParam0 /*6*/], 0x00000001, 0x00000000);
			func_86(iParam0, 0x00000001);
		}
		if (!func_89(iParam0, 0x00000002))
		{
			if (unk_0x4FC40AB0ECCE6E18(Local_47[iParam0 /*6*/]))
			{
				func_40(iParam0, 0x00000000);
			}
			else
			{
				func_40(iParam0, 0x00000001);
			}
		}
	}
}

float func_96(float fParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000007:
		case 0x00000008:
			iVar0 = 0x00000003;
			break;
		
		case 0x00000009:
		case 0x0000000A:
			iVar0 = 0x00000004;
			break;
	}
	if (func_199(Local_48[iVar0 /*4*/]))
	{
		if (!unk_0x70EED0761B82965E(Local_48[iVar0 /*4*/]))
		{
			Local_48[iVar0 /*4*/].f_3 = (Local_48[iVar0 /*4*/].f_3 + unk_0x6117725E0134737F());
		}
		else
		{
			Local_48[iVar0 /*4*/].f_3 = 0f;
		}
	}
	if (Local_48[iVar0 /*4*/].f_3 >= IntToFloat(iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_98(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD1960163A3042274(iParam0, iParam1);
	if (iVar0 == 0x00000001 || iVar0 == 0x00000000)
	{
		return 0x00000001;
	}
	else if (!bParam2)
	{
		if (iVar0 == 0x00000002 || iVar0 == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_99(int iParam0, int iParam1, int iParam2)
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

void func_100(int iParam0)
{
	func_58(iParam0, 0x00000003);
	if (!func_121(0x00000004))
	{
		func_68(0x00000004);
	}
	if (!func_121(0x00000002))
	{
		func_68(0x00000002);
	}
	Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 0x00000001, 0x00000091);
	unk_0x9FA191B317572861(Local_47[iParam0 /*6*/], 200f);
	if (unk_0x405E212DDE472467(Local_47[iParam0 /*6*/], 0x00000000))
	{
		if (func_88(Local_47[iParam0 /*6*/], 0x00000000) != 0xFFFFFFFF)
		{
			unk_0x7F010F50CE03A8AF(Local_47[iParam0 /*6*/].f_1, 0x00000000);
			unk_0x54B31D18C3F36EB7(Local_47[iParam0 /*6*/].f_1, 0x00000001);
		}
		else
		{
			unk_0xA3BF0AA5A2608191(Local_47[iParam0 /*6*/]);
			unk_0x11AD11297DC58CC7(Local_47[iParam0 /*6*/], 0x00000001);
		}
	}
}

bool func_101()
{
	return unk_0x6AD0ABEEDDABA1F8(0xFFFFFFFF, 3150.508f, 2179.343f, -30f, 3064.608f, 2223.616f, 12.38177f, 103f);
}

int func_102()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (func_199(iVar0) && unk_0x3D1053F9EB43B7AD(iVar0, 3083.23f, 2195.516f, -3.22382f, 3096.519f, 2195.455f, 4.949678f, 15f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_103(int iParam0)
{
	if (func_121(0x00000000))
	{
		unk_0x75ABDC5F81978924(iLocal_244);
		func_104(0x00000000);
	}
	unk_0x78ADC381772E3D54(iParam0, iLocal_244);
	unk_0xF82EA857DA10E0CD(&iLocal_244);
}

void func_104(int iParam0)
{
	unk_0x0674E58A79778E99(&iLocal_55, iParam0);
}

void func_105()
{
	if (!func_121(0x00000000))
	{
		unk_0xF82EA857DA10E0CD(&iLocal_244);
		unk_0xDD353D0E9C789D0E(&iLocal_244);
		func_68(0x00000000);
	}
}

void func_106()
{
	bool bVar0;
	int iVar1;
	
	if (func_121(0x00000001) || func_121(0x00000004))
	{
		if (func_199(Local_48[0x00000000 /*4*/]) && func_41(unk_0x16F2683693E537C9(), Local_48[0x00000000 /*4*/], 0x00000001) >= 250f)
		{
			bVar0 = 0x00000001;
			iVar1 = 0x00000000;
			while (iVar1 <= 0x0000000A)
			{
				if (!func_39(iVar1, 0x00000001))
				{
					bVar0 = 0x00000000;
				}
				iVar1++;
			}
			if (bVar0)
			{
				func_37();
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Local_48[0x00000000 /*4*/]) && !func_199(Local_48[0x00000000 /*4*/]))
	{
		bVar0 = 0x00000001;
		iVar1 = 0x00000000;
		while (iVar1 <= 0x0000000A)
		{
			if (!func_39(iVar1, 0x00000001))
			{
				bVar0 = 0x00000000;
			}
			iVar1++;
		}
		if (bVar0)
		{
			func_37();
		}
	}
}

int func_107()
{
	if (!func_52(0x00000005))
	{
		return 0x00000001;
	}
	if (func_116())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_115())
		{
			return 0x00000000;
		}
	}
	if (func_108(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_108(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 0xFFFFFFFF;
	fVar3 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_23(func_114()))
		{
			iVar5 = func_20();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_109(iVar1, &Var0);
					fVar4 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var0.f_6, 0x00000001);
					if (fVar4 < fVar3)
					{
						bVar7 = 0x00000001;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = 0x00000000;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_109(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_110(uParam1, "Barry1", func_112(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_110(uParam1, "Barry2", func_112(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_110(uParam1, "Barry3", func_112(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_110(uParam1, "Barry3A", func_112(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_110(uParam1, "Barry3C", func_112(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_110(uParam1, "Barry4", func_112(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_110(uParam1, "Hao1", func_112(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_110(uParam1, "Josh1", func_112(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_110(uParam1, "Josh2", func_112(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_110(uParam1, "Josh3", func_112(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_110(uParam1, "Josh4", func_112(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_110(uParam1, "Maude1", func_112(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_110(uParam1, "Minute1", func_112(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_110(uParam1, "Minute2", func_112(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_110(uParam1, "Minute3", func_112(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_110(uParam1, "Omega1", func_112(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_110(uParam1, "Omega2", func_112(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_111(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_111(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_111(int iParam0)
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

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_113(iParam0) };
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

struct<2> func_113(int iParam0)
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

int func_114()
{
	func_21();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_115()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_116()
{
	if (func_119() && !func_115())
	{
		return 0x00000001;
	}
	if (func_118() && func_117())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_117()
{
	return Global_1B2FC > 0x00000000;
}

int func_118()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_119()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_120()
{
	if ((Global_1B40B == func_30() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_121(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_55, iParam0);
}

void func_122(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_30();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_124(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_123();
}

void func_123()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)), 0x00000001);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	}
}

void func_124(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_125(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_24AC9)
	{
		return 0x00000000;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_30();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_167())
		{
			return 0x00000000;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_115())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_5(0x00000000))
		{
			return 0x00000000;
		}
		if (func_116())
		{
			return 0x00000000;
		}
		if (func_166())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_23(func_114()))
		{
			if (func_108(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_165(iParam1))
		{
			return 0x00000000;
		}
		if (func_23(func_114()))
		{
			if (func_164(func_114()) == 0x00000004 || func_164(func_114()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_23(func_114()))
		{
			if (!func_163(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_162(Global_1B416.f_619E.f_2B[iParam1]))
		{
			return 0x00000000;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_1B40D) < 0x000249F0)
		{
			if (iParam1 != 0x0000001E)
			{
				return 0x00000000;
			}
		}
		if (func_160())
		{
			return 0x00000000;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0x00000000;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0x00000000;
		}
		if (!func_150(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_52(0x00000005))
		{
			return 0x00000000;
		}
		if (func_149(iParam1, iParam2) && !bParam3)
		{
			return 0x00000000;
		}
		if (Global_3 && iParam1 != 0x0000000A)
		{
			return 0x00000000;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return 0x00000000;
			}
		}
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_149(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_165(0x0000001E) && !func_149(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_23(func_114()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_148(iVar4))
				{
					if (func_126(iVar2))
					{
						if (!func_63(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_114() != iVar2)
								{
									return 0x00000000;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 0x00000001;
}

bool func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_127(iVar0);
}

int func_127(int iParam0)
{
	return func_128(iParam0, 0x00000001);
}

int func_128(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_148(iParam0))
	{
		return 0x00000000;
	}
	func_129(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_129(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_130(func_141(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_140(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = (func_137(iParam0) - func_137(iParam1));
		iVar3 = (func_139(iParam0) - func_139(iParam1));
		iVar4 = (func_136(iParam0) - func_136(iParam1));
		iVar5 = (func_135(iParam0) - func_135(iParam1));
		iVar6 = (func_134(iParam0) - func_134(iParam1));
		iVar7 = (func_133(iParam0) - func_133(iParam1));
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = (func_137(iParam1) - func_137(iParam0));
		iVar3 = (func_139(iParam1) - func_139(iParam0));
		iVar4 = (func_136(iParam1) - func_136(iParam0));
		iVar5 = (func_135(iParam1) - func_135(iParam0));
		iVar6 = (func_134(iParam1) - func_134(iParam0));
		iVar7 = (func_133(iParam1) - func_133(iParam0));
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
		iVar4 = (iVar4 + func_132(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_131(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_131(float fParam0, float fParam1, float fParam2)
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

int func_132(int iParam0, int iParam1)
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

int func_133(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_134(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_135(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_136(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_137(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_138(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_148(iParam1) || !func_148(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_141()
{
	var uVar0;
	
	func_147(&uVar0, unk_0x4460E481B9E33ADA());
	func_146(&uVar0, unk_0x8D199E381D262EEF());
	func_145(&uVar0, unk_0xD8A54335F18763BA());
	func_144(&uVar0, unk_0x972A296334C9D57B());
	func_143(&uVar0, unk_0x118229AD063C3C1D());
	func_142(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_142(var uParam0, int iParam1)
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

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_132(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_145(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_146(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_147(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_148(int iParam0)
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
	iVar0 = func_133(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_134(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_135(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_136(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_132(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_149(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_114();
				if (!func_23(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_159()) || Global_1B05D) || Global_7832) || func_158()) || func_157(0x00000008, 0xFFFFFFFF)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_159()) || Global_7832) || func_158()) || func_157(0x00000008, 0xFFFFFFFF)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_159()) || Global_1B05D) || Global_7832) || func_158()) || func_157(0x00000008, 0xFFFFFFFF)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_159()) || Global_1B05D) || Global_7832) || func_158()) || func_157(0x00000008, 0xFFFFFFFF)) || func_156()) || func_155()) || func_153()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_159() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_157(0x00000008, 0xFFFFFFFF)) || func_153()) || func_152()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_157(0x00000008, 0xFFFFFFFF) || func_156()) || func_155()) || func_152()) || func_151())
						{
							return 0x00000000;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() < 0x00000008)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000006:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_159()) || Global_7832) || func_158()) || func_157(0x00000008, 0xFFFFFFFF)) || func_155()) || func_154()) || func_153()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_159()) || func_155()) || Global_1B05D) || Global_7832) || func_158()) || Global_A664) || func_157(0x00000008, 0xFFFFFFFF)) || func_154()) || func_152()) || func_153()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_159()) || Global_1B05D) || Global_7832) || func_158()) || func_157(0x00000008, 0xFFFFFFFF)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
						{
							return 0x00000000;
						}
						break;
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
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_151()
{
	return Global_181DF.f_1;
}

int func_152()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_153()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_154()
{
	if (Global_12C52)
	{
		return 0x00000001;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_155()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_156()
{
	return Global_181EC.f_159 > 0x00000000;
}

bool func_157(int iParam0, int iParam1)
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

var func_158()
{
	return Global_14086D;
}

int func_159()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_160()
{
	func_161();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_161()
{
	if (func_22(0x0000000E))
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
		Global_4C1E = func_114();
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

bool func_162(int iParam0)
{
	return func_140(func_141(), iParam0);
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_114();
	if (iParam2 != 0x00000091 && ((iParam2 == 0x00000000 || iParam2 == 0x00000001) || iParam2 == 0x00000002))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 0x00000012:
			if (iVar1 == 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (iVar1 != 0x00000001)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000D:
			if (iVar1 == 0x00000000)
			{
				if (iParam1 == 0x00000002)
				{
					iVar0 = 0x00000000;
				}
				else
				{
					iVar0 = 0x00000001;
				}
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000002 || iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001E:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000001;
			break;
	}
	return iVar0;
}

int func_164(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_165(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_167())
		{
			return 0x00000000;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 0x0000001F)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 0x0000001F);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_1, iVar0);
	}
	return bVar1;
}

int func_166()
{
	int iVar0;
	
	if (Global_78C6)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_167()
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

int func_168()
{
	vector3 vVar0;
	float fVar1;
	
	if (func_199(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		unk_0xE82754C349C7B581(vVar0, &fVar1, 0x00000000, 0x00000000);
		if ((vVar0.y < 2149.042f && (unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()) || (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()) && (vVar0.z - fVar1) >= 7.5f))) && (vVar0.z - fVar1) >= 3f)
		{
			return 0x00000000;
		}
		if (vVar0.z >= 100f && unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_169(bool bParam0, bool bParam1)
{
	func_198();
	func_197();
	func_81(0x00000000);
	func_195(0x00000001, 0x00000001, 0x00000001, 0x00000000);
	func_193(0x00000000);
	func_191();
	unk_0xE342F209E49C5314(3054.991f, 1995.887f, -20f, 3140.817f, 2225.639f, 10.453f, 0x00000001, 0x00000001);
	unk_0x225CFE81EA219E44();
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x5C2EBB66AD2EA5FF(0x00000000);
	func_190();
	func_189();
	func_188();
	func_187(bParam1);
	func_186(bParam1);
	unk_0x51732B934211201A(iLocal_77);
	unk_0x51B096AAC60548C1(1f);
	func_184();
	func_182();
	func_181(&uLocal_79, 0x00000001);
	func_181(&uLocal_79, 0x00000003);
	func_181(&uLocal_79, 0x00000004);
	func_181(&uLocal_79, 0x00000005);
	unk_0x5CAFA5DD13658DFE(0x00000000);
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	func_70(0x00000000);
	if (bParam0)
	{
		func_170(0xFFFFFFFF);
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_170(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_30();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_120())
	{
		func_174(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_173(0x00007530);
		StringCopy(&cVar0, func_172(Global_1B40B, 0x00000001), 64);
		if (func_29(Global_1B40B) > 0x00000000)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_1B40A, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_1B408, (unk_0x1C0640BA9A7327B3() - Global_1B409), 0x00000000);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000000) && Global_1B416.f_619E.f_2 < 0x00000003)
	{
		unk_0x0674E58A79778E99(&Global_1B412, 0x00000000);
	}
	func_171(&Global_786B);
	Global_1B40C = 0x00000000;
	func_124(0xFFFFFFFF);
}

void func_171(var uParam0)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*uParam0 == Global_A1B1)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	*uParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

char* func_172(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "RE_ACCIDENT";
			break;
		
		case 0x00000001:
			return "RE_ATMROBBERY";
			break;
		
		case 0x00000002:
			return "RE_BUSTOUR";
			break;
		
		case 0x00000003:
			return "RE_DOMESTIC";
			break;
		
		case 0x00000004:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 0x00000005:
			return "RE_SHOPROBBERY";
			break;
		
		case 0x00000006:
			return "RE_SNATCHED";
			break;
		
		case 0x00000007:
			return "RE_LURED";
			break;
		
		case 0x00000008:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 0x00000009:
			return "RE_SECURITYVAN";
			break;
		
		case 0x0000000A:
			return "RE_PAPARAZZI";
			break;
		
		case 0x0000000B:
			return "RE_CHASETHIEVES";
			break;
		
		case 0x0000000C:
			return "RE_DEALGONEWRONG";
			break;
		
		case 0x0000000D:
			return "RE_HITCHLIFT";
			break;
		
		case 0x0000000E:
			return "RE_STAG";
			break;
		
		case 0x0000000F:
			return "RE_ARREST";
			break;
		
		case 0x00000010:
			return "RE_CRASHRESCUE";
			break;
		
		case 0x00000011:
			return "RE_CARTHEFT";
			break;
		
		case 0x00000012:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 0x00000013:
			return "RE_GANGFIGHT";
			break;
		
		case 0x00000014:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 0x00000015:
			return "RE_PRISONVANBREAK";
			break;
		
		case 0x00000016:
			return "RE_PRISONERLIFT";
			break;
		
		case 0x00000017:
			return "RE_ABANDONEDCAR";
			break;
		
		case 0x00000018:
			return "RE_BURIAL";
			break;
		
		case 0x00000019:
			return "RE_MUGGING";
			break;
		
		case 0x0000001A:
			return "RE_BIKETHIEF";
			break;
		
		case 0x0000001B:
			return "RE_DRUNKDRIVER";
			break;
		
		case 0x0000001C:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 0x0000001D:
			return "RE_BORDERPATROL";
			break;
		
		case 0x0000001E:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 0x0000001F:
			return "RE_DUEL";
			break;
		
		case 0x00000020:
			return "RE_SEAPLANE";
			break;
		
		case 0x00000021:
			return "RE_MONKEYPHOTO";
			break;
		
		case 0xFFFFFFFF:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_173(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_174(int iParam0)
{
	func_175(iParam0, 0x00000000, func_180(iParam0));
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_141();
	func_178(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_177(iParam0, &uVar0);
	Var1 = { func_176(&uVar0) };
}

struct<16> func_176(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_135(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_134(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_133(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_136(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_139(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_137(*uParam0), 64);
	return Var0;
}

void func_177(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_178(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*uParam0);
	iVar1 = func_139(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_135(*uParam0);
	iVar4 = func_134(*uParam0);
	iVar5 = func_133(*uParam0);
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
	iVar6 = func_132(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_132(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_179(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, iParam1);
	func_146(uParam0, iParam2);
	func_145(uParam0, iParam3);
	func_143(uParam0, iParam5);
	func_144(uParam0, iParam4);
	func_142(uParam0, iParam6);
}

int func_180(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000017:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000000:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000F:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000001:
			iVar0 = 0x000000C8;
			break;
		
		case 0x0000001A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000008:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001D:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000018:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000011:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000B:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000010:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000012:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000078;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001B:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000013:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000014:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000004:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001C:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000023;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000016:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000015:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000005:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001E:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000006:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000028;
			break;
	}
	return iVar0;
}

void func_181(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_182()
{
	Global_4CD7 = 0x00000000;
	func_183();
}

void func_183()
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

void func_184()
{
	Global_4CD7 = 0x00000000;
	func_185();
}

void func_185()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_186(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		func_92(iVar0, bParam0);
		iVar0++;
	}
}

void func_187(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000B)
	{
		func_40(iVar0, bParam0);
		iVar0++;
	}
}

void func_188()
{
}

void func_189()
{
	unk_0x2F3540C2227116A3(sLocal_49);
	unk_0x2F3540C2227116A3(sLocal_50);
}

void func_190()
{
}

void func_191()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		func_192(iVar0);
		iVar0++;
	}
}

void func_192(int iParam0)
{
	if (iLocal_78[iParam0] != 0x00000000)
	{
		unk_0x2952D66A502EA873(iLocal_78[iParam0], 0x00000000);
		iLocal_78[iParam0] = 0x00000000;
	}
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		unk_0x34D79252800B23FF(0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0x51B096AAC60548C1(0f);
		unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0x060F249A9A3E3F4E(0x00000000);
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
		unk_0x15EA7F4313456B1D(0x00000001, 0x00000000);
		unk_0x15EA7F4313456B1D(0x00000008, 0x00000000);
		unk_0x15EA7F4313456B1D(0x00000002, 0x00000000);
		unk_0x15EA7F4313456B1D(0x00000006, 0x00000000);
		unk_0x15EA7F4313456B1D(0x00000004, 0x00000000);
		unk_0x15EA7F4313456B1D(0x0000000C, 0x00000000);
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
		func_194(0x00000009, 0x00000001);
		func_194(0x00000008, 0x00000001);
	}
	else
	{
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x51B096AAC60548C1(1f);
		unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0x060F249A9A3E3F4E(0x00000001);
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000001, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000008, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000002, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000006, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000004, 0x00000001);
		unk_0x15EA7F4313456B1D(0x0000000C, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
		func_194(0x00000009, 0x00000000);
		func_194(0x00000008, 0x00000000);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

void func_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_182();
	}
	if (bParam1)
	{
		if (!func_196() || (bParam0 && !bParam3))
		{
			unk_0x790015DC92C918E2();
		}
		unk_0xECEC50E724D52DC1();
	}
	if (bParam2)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

int func_196()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_197()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000B)
	{
		func_43(&(Local_47[iVar0 /*6*/].f_1));
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		func_43(&(Local_48[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_198()
{
	iLocal_45 = 0x00000000;
	iLocal_46 = 0x00000000;
	iLocal_54 = 0x00000000;
	iLocal_55 = 0x00000000;
}

int func_199(int iParam0)
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

