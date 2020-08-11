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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<9> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_45[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_46 = 0;
	var uLocal_47[2] = { 0, 0 };
	float fLocal_48 = 0f;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_51 = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	float fLocal_53 = 0f;
	struct<67> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_66[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_67 = 0;
	struct<261> Local_68[4];
	char* sLocal_69[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	var uLocal_80 = 16;
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
	var uLocal_244 = 0;
	int iLocal_245 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_43 = 0x00000091;
	iLocal_46 = 0xFFFFFFFF;
	fLocal_48 = 0f;
	vLocal_50 = { 0f, 0f, 0f };
	vLocal_52 = { 0f, 0f, 0f };
	fLocal_53 = 0f;
	iLocal_67 = 0x00000001;
	sLocal_70 = "";
	iLocal_73 = 0xFFFFFFFF;
	iLocal_76 = 0xFFFFFFFF;
	iLocal_78 = 0xFFFFFFFF;
	iLocal_245 = 0xFFFFFFFF;
	if (!func_270(0x0000001A))
	{
		iLocal_37 = Global_1B416.f_273C.f_80;
		if (iLocal_37 == 0x00000002)
		{
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000A);
			vLocal_52 = { func_269(0x00000019) };
			fLocal_53 = func_268(0x00000019);
			if (func_267(&Local_54, 0x00000019))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000E))
				{
					unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000E);
				}
			}
		}
	}
	else
	{
		Global_1B416.f_273C.f_80 = iLocal_37;
	}
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		if (unk_0x3E653638C7A26115() == 0x00000002)
		{
			func_258(0x00000000);
			func_256(0x0000001A, 0x00000001);
		}
		else
		{
			func_256(0x0000001A, 0x00000000);
		}
	}
	func_251(0x00000000);
	while (0x00000001)
	{
		if (func_250(0x00000026))
		{
			func_256(0x0000001A, 0x00000000);
		}
		if (func_249(unk_0x16F2683693E537C9()))
		{
			func_242();
			func_234();
			func_233();
			func_222();
			switch (iLocal_37)
			{
				case 0x00000000:
					func_139();
					break;
				
				case 0x00000002:
					func_138();
					break;
				
				case 0x00000003:
					func_129();
					break;
				
				case 0x00000004:
					func_16(0x0000002D);
					break;
				
				case 0x00000005:
					break;
				
				default:
					break;
			}
			func_7();
		}
		else
		{
			func_1(0x0000002E, 0x00000001);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x0000002E - 0x00000001))
	{
		if (iParam0 != iVar0 && iParam0 != 0x0000002E)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 0x0000002E)
		{
			if ((!func_2(func_3(iParam0)) && !Global_1AEC6) && !unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000F))
			{
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
		else if ((unk_0xFEBC1E4EC9E001F0() && !Global_1AEC6) && !unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000F))
		{
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_2(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

var func_3(int iParam0)
{
	return sLocal_45[iParam0];
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	unk_0x0674E58A79778E99(&(uLocal_47[func_5(iParam0)]), iVar0);
}

int func_5(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000020)
	{
		iVar0 = 0x00000000;
	}
	else
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_6(int iParam0)
{
	if (iParam0 > 0x0000001F)
	{
		return (iParam0 - 0x00000020);
	}
	return iParam0;
}

void func_7()
{
	if (((unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000E)) && func_13())
	{
		if (func_12(0x00000000, 0x000000AC, 0x00000000) || func_12(0x00000000, 0x000000AD, 0x00000000))
		{
			iLocal_78 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_78 != 0xFFFFFFFF)
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_78) < 0x000000C8)
			{
				iLocal_43 = func_8();
			}
			else
			{
				iLocal_78 = 0xFFFFFFFF;
			}
		}
	}
	else
	{
		iLocal_43 = 0x00000091;
		iLocal_78 = 0xFFFFFFFF;
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0x00000000;
	iVar3 = 0x00000091;
	if (Global_12B4E)
	{
		iVar3 = 0x00000091;
	}
	else if (unk_0x83D8570832F172A7(Global_4C0B) == 0x00000001)
	{
		if (func_11())
		{
			if (func_10())
			{
				iVar6 = 0x00000000;
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
				iVar0 = unk_0x7A8BB56B212464AC();
				iVar4 = unk_0x1C0640BA9A7327B3();
				while ((!unk_0xC95D7AEEDEF4946B(iVar0) && iVar6 == 0x00000000) && unk_0x83D8570832F172A7(Global_4C0B) == 0x00000001)
				{
					SYSTEM::WAIT(0x00000000);
					iVar5 = unk_0x1C0640BA9A7327B3();
					if ((iVar5 - iVar4) > 0x000005DC)
					{
						iVar6 = 0x00000001;
					}
				}
				iVar1 = unk_0xA52833FE33F41C53(iVar0);
				if (iVar1 > func_9() || iVar1 < 0x00000000)
				{
					iVar1 = func_9();
				}
				iVar2 = Global_4C24[iVar1];
				iVar3 = iVar2;
				if (unk_0x83D8570832F172A7(Global_4C0B) == 0x00000000)
				{
					iVar3 = 0x00000091;
				}
				if (iVar6 == 0x00000001)
				{
					iVar3 = 0x00000091;
				}
			}
			else
			{
				iVar3 = 0x00000091;
			}
		}
		else
		{
			iVar3 = 0x00000091;
		}
	}
	else
	{
		iVar3 = 0x00000091;
	}
	return iVar3;
}

int func_9()
{
	if (Global_7830 == 0x00000000 || Global_7830 == 0x00000002)
	{
		return 0x000000A7;
	}
	return 0x000000A1;
}

int func_10()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcontacts")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 0x00000001 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0x00000000 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(0x00000002)))
			{
				return 0x00000000;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_13()
{
	if (func_15(0x00000000) && func_14())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_14()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcontacts")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_15(int iParam0)
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

void func_16(int iParam0)
{
	func_109();
	if (iLocal_40 == 0x00000000)
	{
		switch (iLocal_41)
		{
			case 0x00000000:
				func_108(0x00000001);
				iLocal_74 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
				func_1(0x0000002E, 0x00000001);
				iLocal_75 = unk_0x1C0640BA9A7327B3() + 3000;
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000A))
				{
					func_92();
				}
				func_91(iParam0, 0x00000001);
				iLocal_41 = 0x00000001;
				break;
			
			case 0x00000001:
				if (unk_0x1C0640BA9A7327B3() > iLocal_75)
				{
					if (unk_0x83D8570832F172A7(iLocal_74))
					{
						unk_0x7E60C62A7CE58FC8(iLocal_74, "SHOW_MISSION_PASSED_MESSAGE");
						func_90("M_FB4P3_P");
						func_90("M_FB4P3");
						unk_0x3CAEA85DA607305E(0x00000064);
						unk_0x1200CC973A2399C8(0x00000001);
						unk_0x3CAEA85DA607305E(0x00000000);
						unk_0x1200CC973A2399C8(0x00000001);
						unk_0x7E60D21B163E9D56();
						iLocal_75 = unk_0x1C0640BA9A7327B3() + 10000;
						func_88(0x00000000);
						iLocal_41 = 0x00000002;
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0x83D8570832F172A7(iLocal_74) && unk_0x96871D785000ACAF())
				{
					if (unk_0x1C0640BA9A7327B3() < iLocal_75)
					{
						unk_0xEF45C43067063F18(iLocal_74, 0.5f, 0.3f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else if (unk_0x1C0640BA9A7327B3() < iLocal_75 + 100)
					{
						unk_0x7E60C62A7CE58FC8(iLocal_74, "TRANSITION_OUT");
						unk_0x7E60D21B163E9D56();
						iLocal_75 = (iLocal_75 - 0x00000064);
					}
					else if (unk_0x1C0640BA9A7327B3() < iLocal_75 + 500)
					{
						unk_0xEF45C43067063F18(iLocal_74, 0.5f, 0.3f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						iLocal_41 = 0x00000003;
					}
				}
				break;
			
			case 0x00000003:
				if (unk_0x83D8570832F172A7(iLocal_74))
				{
					unk_0xE17FDF9E3068281B(&iLocal_74);
				}
				func_108(0x00000000);
				if (iLocal_42 == 0x00000002)
				{
					func_87(0x0000006C, 0x00000000);
				}
				if (func_85(iLocal_51))
				{
					unk_0x71EDC33E5A423750(iLocal_51, 0x00000001);
				}
				func_81("M_FHPE", func_82());
				func_78(0x00000002, 0x00000000);
				break;
			}
	}
	func_17();
}

void func_17()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000002))
	{
		if (!func_77(0f, 0f, 0f, vLocal_52, 0x00000000))
		{
			if (func_76(unk_0x16F2683693E537C9(), vLocal_52, 100f) && !func_75())
			{
				if (func_85(func_74(0x00000019)))
				{
					iLocal_51 = func_74(0x00000019);
					unk_0x73270B3C9CC833FD(iLocal_51, 0x00000001, 0x00000001);
					if (func_85(iLocal_51))
					{
						if (!unk_0x30F813723591D02E(iLocal_51, "GetawayVehicleValid"))
						{
							if (unk_0xA1093ABB024EC9BD(iLocal_51, "GetawayVehicleValid", 0x00000001))
							{
							}
						}
						unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000002);
					}
				}
				else if (!func_73(0x00000019, 0x00000000))
				{
					if (!func_85(func_74(0x00000019)))
					{
						func_68(0x00000001);
					}
				}
			}
			else if (func_85(iLocal_51))
			{
				if (!func_76(unk_0x16F2683693E537C9(), vLocal_52, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!func_77(0f, 0f, 0f, vLocal_52, 0x00000000))
		{
			if (!func_76(unk_0x16F2683693E537C9(), vLocal_52, 100f))
			{
				if (func_85(iLocal_51))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000000))
					{
						func_21(iLocal_51, vLocal_52, fLocal_53, 0x00000019, 0x00000001);
						unk_0x0674E58A79778E99(&iLocal_49, 0x00000002);
						unk_0xD2DE0C6B4149D1D2(iLocal_51, 0x00000000);
						func_20(&iLocal_51);
						unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
					}
					else
					{
						func_68(0x00000000);
					}
				}
				else if (!func_73(0x00000019, 0x00000000))
				{
					func_68(0x00000001);
				}
			}
			else if (!func_73(0x00000019, 0x00000000))
			{
				if (!func_85(iLocal_51))
				{
					func_68(0x00000001);
				}
			}
			else if (!func_85(iLocal_51))
			{
				iVar0 = func_74(0x00000019);
				if (func_85(iVar0) && iVar0 != iLocal_51)
				{
					iLocal_51 = iVar0;
				}
			}
		}
		func_18();
	}
}

void func_18()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000002) && unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
	{
		if (func_85(iLocal_51))
		{
			if (func_19(unk_0x16F2683693E537C9(), iLocal_51, 10f, 0x00000001))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001), vLocal_52) >= 100f)
				{
					func_68(0x00000000);
				}
			}
		}
		else if (!func_73(0x00000019, 0x00000000))
		{
			if (func_85(iLocal_51))
			{
				unk_0xD2DE0C6B4149D1D2(iLocal_51, 0x00000000);
			}
			func_20(&iLocal_51);
			func_68(0x00000001);
		}
	}
}

bool func_19(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_20(int iParam0)
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

void func_21(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_67(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_62(iParam0, &Var0);
		if (func_77(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_56(iParam3, &Var0, vParam1, fParam2, func_61(iParam0));
		func_22(iParam3, iParam0, 0x00000000);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_52(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_41();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_74(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_23(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_24(iParam0))
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
	func_62(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_24(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_39(iParam0, 0x00000000, 0x00000000)) || func_39(iParam0, 0x00000001, 0x00000000)) || func_39(iParam0, 0x00000002, 0x00000000)) || func_61(iParam0) != 0x00000091) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || !func_25(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_37(iParam0))
		{
		}
		if (func_37(iParam0))
		{
		}
		if (func_39(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_39(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_39(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_61(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_25(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_26(iParam0, 0x00000000))
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

int func_26(int iParam0, bool bParam1)
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
		if (!func_34())
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
		if ((((!func_33() && !func_32()) && !func_31()) && !func_30()) && !func_34())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_31())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_29(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_27(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_27(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_28())
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

int func_28()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_29(int iParam0)
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

int func_30()
{
	return 0x00000000;
}

int func_31()
{
	return 0x00000001;
}

int func_32()
{
	return 0x00000001;
}

int func_33()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_34()
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

int func_35(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_26(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_36(int iParam0)
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

int func_37(int iParam0)
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

int func_38(int iParam0)
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

int func_39(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_40(iParam1, iVar0, &sVar1, &iVar2))
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

int func_40(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_41()
{
	var uVar0;
	
	func_51(&uVar0, unk_0x4460E481B9E33ADA());
	func_50(&uVar0, unk_0x8D199E381D262EEF());
	func_49(&uVar0, unk_0xD8A54335F18763BA());
	func_44(&uVar0, unk_0x972A296334C9D57B());
	func_43(&uVar0, unk_0x118229AD063C3C1D());
	func_42(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_42(var uParam0, int iParam1)
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

void func_43(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_48(*uParam0);
	iVar1 = func_46(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_45(int iParam0, int iParam1)
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

var func_46(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_47(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_47(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_48(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_52(var uParam0, int iParam1)
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
			uParam0->f_4 = func_53(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_53(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_53(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_53(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_53(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_53(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_53(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_53(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_53(0x00000002, 0x00000001);
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
			if (func_34())
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
			if (func_34())
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
		if (!func_77(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_77(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_77(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_55(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_54(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_54(int iParam0, var uParam1, int iParam2)
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

bool func_55(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_56(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_52(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_60(iParam0);
			func_59(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_57(iParam0, 0x00000001);
		}
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_73(iParam0, 0x00000000))
		{
			func_58(iParam0, 0x00000001, 0x00000000);
			func_58(iParam0, 0x00000002, 0x00000000);
			func_58(iParam0, 0x00000003, 0x00000000);
			func_58(iParam0, 0x00000004, 0x00000000);
			func_58(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_58(iParam0, 0x00000000, 0x00000000);
	}
}

void func_58(int iParam0, int iParam1, bool bParam2)
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

void func_59(var uParam0, var uParam1)
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

void func_60(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_52(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_57(iParam0, 0x00000000);
		}
	}
}

int func_61(int iParam0)
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

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_66(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_65(uParam1->f_42))
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
		func_64(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_63(iVar0 + 1));
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

int func_63(int iParam0)
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

int func_64(int iParam0, var uParam1, var uParam2)
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

int func_65(int iParam0)
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

void func_66(var uParam0)
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

void func_67(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_60(iParam0);
	func_57(iParam0, 0x00000000);
}

void func_68(bool bParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000E))
	{
		if (func_70(unk_0x16F2683693E537C9()) == 0x00000000)
		{
			if (bParam0)
			{
				func_69(0x0000000A);
			}
			else
			{
				func_69(0x0000000C);
			}
		}
		else if (bParam0)
		{
			func_69(0x0000000B);
		}
		else
		{
			func_69(0x0000000D);
		}
		if (iLocal_42 == 0x00000000)
		{
			func_91(0x0000002D, 0x00000000);
		}
		else if (iLocal_42 == 0x00000001)
		{
			func_91(0x0000000C, 0x00000000);
		}
		else if (iLocal_42 == 0x00000002)
		{
			func_91(0x00000022, 0x00000000);
		}
		if (iLocal_42 != 0x00000002)
		{
			vLocal_50 = { 0f, 0f, 0f };
		}
		iLocal_40 = 0x00000000;
		iLocal_41 = 0x00000000;
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000006);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000001);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000008);
		unk_0x0674E58A79778E99(&iLocal_49, 0x0000000C);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000002);
		unk_0x0674E58A79778E99(&iLocal_49, 0x0000000E);
		if (iLocal_37 == 0x00000004)
		{
			if (unk_0x83D8570832F172A7(iLocal_74))
			{
				unk_0xE17FDF9E3068281B(&iLocal_74);
			}
			func_108(0x00000000);
		}
		func_78(0x00000000, 0x00000000);
	}
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	unk_0x5D96D8530B3D0904(&(uLocal_47[func_5(iParam0)]), iVar0);
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_71(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_72(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_73(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

int func_74(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

int func_75()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

bool func_76(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

bool func_77(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_78(int iParam0, bool bParam1)
{
	Global_1B416.f_273C.f_80 = iParam0;
	iLocal_37 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_79();
}

int func_79()
{
	if (func_80(0x00000000))
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

bool func_80(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_81(char* sParam0, int iParam1)
{
	unk_0x46A12CC6D0BDFFD8(joaat("sp_last_mission_name"), sParam0, 0x00000001);
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000000))
	{
		unk_0x46A12CC6D0BDFFD8(joaat("sp0_last_mission_name"), sParam0, 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000001))
	{
		unk_0x46A12CC6D0BDFFD8(joaat("sp1_last_mission_name"), sParam0, 0x00000001);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0x00000002))
	{
		unk_0x46A12CC6D0BDFFD8(joaat("sp2_last_mission_name"), sParam0, 0x00000001);
	}
}

int func_82()
{
	func_83();
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

void func_83()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_71(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_70(unk_0x16F2683693E537C9());
			if (func_55(iVar0) && (!func_84(0x0000000E) || Global_1AFFD))
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

bool func_84(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_85(int iParam0)
{
	if (func_86(iParam0))
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

int func_86(int iParam0)
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

void func_87(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_88(bool bParam0)
{
	char* sVar0;
	
	unk_0x9CBC55A05A07FC47(0x00000000);
	switch (func_89())
	{
		case 0x00000000:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 0x00000001:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 0x00000002:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0x3D0B5872F36FB05C(sVar0);
}

int func_89()
{
	func_83();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_90(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_91(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

void func_92()
{
	Global_1B416.f_271B.f_15++;
	if (iLocal_42 == 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(joaat("fl_co_fb4p3"), Global_1B416.f_271B.f_15, 0x00000001);
		if (func_101())
		{
			if (func_250(0x0000004A) || (func_250(0x0000004B) && func_100()))
			{
				func_91(0x0000002E, 0x00000001);
			}
		}
	}
	func_93();
	unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000A);
}

void func_93()
{
	if (iLocal_42 == 0x00000000)
	{
		func_94(0x00000017, 0x00000000, 0x00000000);
	}
	else if (iLocal_42 == 0x00000001)
	{
	}
	else if (iLocal_42 == 0x00000002)
	{
	}
}

void func_94(int iParam0, int iParam1, int iParam2)
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
		func_98((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_95();
	}
}

void func_95()
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
		func_97(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_96() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_79();
				}
			}
		}
	}
}

int func_96()
{
	return Global_7830;
}

int func_97(int iParam0, int iParam1)
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

int func_98(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_99();
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

int func_99()
{
	return Global_1407E9;
}

int func_100()
{
	if ((func_250(0x00000029) && func_250(0x00000003)) && func_250(0x00000015))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_101()
{
	if (iLocal_42 == 0x00000000)
	{
		return func_106();
	}
	else if (iLocal_42 == 0x00000001)
	{
		return func_105();
	}
	else if (iLocal_42 == 0x00000002)
	{
		return func_102();
	}
	return 0x00000000;
}

int func_102()
{
	if ((func_250(0x0000004F) && func_250(0x00000053)) && func_103(func_104()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_103(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_104()
{
	if (iLocal_42 == 0x00000000)
	{
		return 0x0000002D;
	}
	else if (iLocal_42 == 0x00000001)
	{
		return 0x0000000C;
	}
	else if (iLocal_42 == 0x00000002)
	{
		return 0x00000022;
	}
	return 0xFFFFFFFF;
}

int func_105()
{
	if (func_250(0x00000044))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_106()
{
	if (func_107(0x00000021, 0x00000025) >= 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_250(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_103(func_104()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_108(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_109()
{
	struct<6> Var0;
	
	if (iLocal_40 != 0x00000000)
	{
		Var0 = { func_128() };
		switch (iLocal_40)
		{
			case 0x00000001:
				if (iLocal_42 != 0x00000002)
				{
					if (!unk_0xEA6BC48857E0AC4C(&Var0))
					{
						if (unk_0x40EFDB96B3112BA7() > 0x00000000)
						{
							func_127("LOCAUD", Local_44.f_7);
							func_126(0x00000001);
							iLocal_40 = 0x00000002;
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000A) && unk_0x40EFDB96B3112BA7() == 0x00000000)
						{
							func_127("LOCAUD", Local_44.f_7);
							func_126(0x00000001);
							iLocal_40 = 0x00000002;
						}
					}
				}
				else
				{
					iLocal_40 = 0x00000000;
				}
				if (func_125())
				{
					iLocal_40 = 0x00000003;
				}
				break;
			
			case 0x00000002:
				if (func_125())
				{
					iLocal_40 = 0x00000003;
				}
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000A))
				{
					if (unk_0x40EFDB96B3112BA7() >= 0x00000000)
					{
						func_118(Var0);
					}
				}
				else
				{
					iLocal_40 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (!func_117())
				{
					iLocal_40 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (!func_15(0x00000000))
				{
					if (iLocal_42 == 0x00000001)
					{
						func_114(Local_44.f_8);
					}
					iLocal_40 = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (func_89() == 0x00000000)
				{
					if (iLocal_42 == 0x00000000)
					{
						if (func_101())
						{
							if ((func_250(0x0000004A) || func_250(0x0000004B)) && func_100())
							{
								func_110(0x00000001);
								iLocal_40 = 0x00000000;
							}
							else
							{
								func_110(0x00000000);
								iLocal_40 = 0x00000000;
							}
						}
						else
						{
							iLocal_40 = 0x00000000;
						}
					}
					else
					{
						iLocal_40 = 0x00000000;
					}
				}
				else
				{
					if (iLocal_42 == 0x00000000)
					{
						if (func_101())
						{
							if (!func_250(0x00000003))
							{
								func_87(0x00000032, 0x00000000);
							}
						}
					}
					iLocal_40 = 0x00000000;
				}
				break;
			}
	}
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		func_111(0x5B11AD95, 0x00000000, func_89(), 0x00000017, 0x00000003, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
	}
	else if (!func_250(0x00000003))
	{
		func_111(0xF29B7A55, 0x00000000, func_89(), 0x00000017, 0x00000003, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000032, 0xFFFFFFFF, 0x00000000);
	}
	else
	{
		func_111(0xF29B7A55, 0x00000000, func_89(), 0x00000017, 0x00000003, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
	}
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_80(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam7 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam8 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 == iParam2)
	{
		return 0x00000000;
	}
	if (((iParam2 != 0x00000090 && iParam2 != 0x00000000) && iParam2 != 0x00000001) && iParam2 != 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_88 < 0x00000009)
	{
		Var0 = iParam0;
		if (Global_1B416.f_1E03.f_38F == Var0)
		{
			Global_1B416.f_1E03.f_38F = 0xFFFFFFFF;
		}
		Var0.f_3 = func_113(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0x00000000;
		unk_0x5D96D8530B3D0904(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = 0xFFFFFFFF;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x00000000);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000001);
		if (iParam1 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000A);
		}
		Global_1B416.f_1E03[Global_1B416.f_1E03.f_88 /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_88++;
		func_112(iParam2);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_55(iParam0))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_1B416.f_1E03[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_3 == 0x00000005)
			{
				iVar1 = 0x00000005;
			}
		}
		iVar2++;
	}
	Global_1B416.f_1E03.f_397[iParam0] = iVar1;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000004;
			break;
		
		case 0x00000002:
			return 0x00000003;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000005:
		case 0x00000006:
			return 0x00000000;
			break;
	}
	return 0x00000007;
}

void func_114(int iParam0)
{
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_116(iParam0, 0x00000000, 0x00000000);
		func_116(iParam0, 0x00000001, 0x00000000);
		func_116(iParam0, 0x00000002, 0x00000000);
		func_115(iParam0, 0x00000000, 0x00000000);
		func_115(iParam0, 0x00000001, 0x00000000);
		func_115(iParam0, 0x00000002, 0x00000000);
	}
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_117()
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

void func_118(struct<6> Param0)
{
	if (iLocal_42 == 0x00000000)
	{
		func_123(Param0);
	}
	else if (iLocal_42 == 0x00000001)
	{
		func_119(Param0);
	}
}

void func_119(struct<6> Param0)
{
	if (func_101())
	{
		func_120(Param0, 0x00000001);
	}
	else
	{
		func_120(Param0, 0x00000000);
	}
}

void func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!unk_0xEA6BC48857E0AC4C(&uParam0))
	{
		if (unk_0x7F8A39872A07D2CE(&uParam0, Local_44.f_7))
		{
			if (unk_0x40EFDB96B3112BA7() >= 0x00000000)
			{
				if (iLocal_42 == 0x00000000)
				{
					Var0 = { func_122(bParam6) };
					func_91(0x0000002E, 0x00000001);
					func_127(sLocal_79, &Var0);
					func_126(0x00000001);
				}
				else if (iLocal_42 == 0x00000001)
				{
					Var0 = { func_121(bParam6) };
					func_127(sLocal_79, &Var0);
					func_126(0x00000001);
				}
				iLocal_40 = 0x00000003;
			}
		}
	}
}

struct<4> func_121(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_89())
		{
			case 0x00000001:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0x00000000:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_89())
		{
			case 0x00000001:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0x00000000:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_122(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_89())
		{
			case 0x00000001:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 0x00000002:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_89())
		{
			case 0x00000001:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 0x00000002:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

void func_123(struct<6> Param0)
{
	if (func_101())
	{
		if (func_124())
		{
			if (func_89() != 0x00000000)
			{
				func_120(Param0, 0x00000001);
			}
			else
			{
				iLocal_40 = 0x00000003;
			}
		}
		else if (func_89() != 0x00000000)
		{
			func_120(Param0, 0x00000000);
		}
		else
		{
			iLocal_40 = 0x00000003;
		}
	}
	else
	{
		iLocal_40 = 0x00000003;
	}
}

int func_124()
{
	if (iLocal_42 == 0x00000000)
	{
		if ((func_250(0x0000004A) || func_250(0x0000004A)) && func_100())
		{
			return 0x00000001;
		}
	}
	else if (iLocal_42 == 0x00000001)
	{
		if (func_250(0x00000044))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_125()
{
	if (Global_5176 == 0x00000001 || Global_553D == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_126(bool bParam0)
{
	unk_0x5CEB4DB888A62073(bParam0);
	if (bParam0)
	{
	}
}

void func_127(char* sParam0, char* sParam1)
{
	if (unk_0x1EE04CEA36EF313B())
	{
		Global_517E = 0x00000001;
		StringCopy(&Global_5185, sParam0, 24);
		StringCopy(&Global_517F, sParam1, 24);
	}
}

struct<6> func_128()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

void func_129()
{
	func_130();
}

void func_130()
{
	func_136();
	func_131();
}

void func_131()
{
	if (func_135() == 0x00000026)
	{
		if (func_134() && !func_73(0x00000019, 0x00000000))
		{
			if (Local_54.f_42 != 0x00000000)
			{
				func_56(0x00000019, &Local_54, vLocal_52, fLocal_53, 0x00000091);
			}
		}
	}
	else if (func_135() == 0xFFFFFFFF)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000001))
		{
			if (!func_76(unk_0x16F2683693E537C9(), vLocal_50, 5f))
			{
				if (func_133())
				{
					if (!unk_0x991B1F0980C62628())
					{
						if (func_132())
						{
							func_69(0x00000001);
						}
						else if (Global_1B065)
						{
							func_69(0x00000002);
						}
						else
						{
							func_69(0x00000000);
						}
						iLocal_39 = 0x00000001;
						fLocal_48 = 0f;
					}
				}
			}
		}
	}
}

bool func_132()
{
	return unk_0x1727A44C562FBED2(Global_1B416.f_46B2.f_18B);
}

int func_133()
{
	if (func_13())
	{
		if (func_89() == 0x00000000)
		{
			if (iLocal_43 == 0x00000002 || iLocal_43 == 0x00000001)
			{
				return 0x00000001;
			}
		}
		else if (iLocal_43 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_134()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_135()
{
	return Global_12C54;
}

void func_136()
{
	if (!func_77(vLocal_52, 0f, 0f, 0f, 0x00000000) && func_135() != func_137())
	{
		if (func_76(unk_0x16F2683693E537C9(), vLocal_52, 60f))
		{
			if (func_85(func_74(0x00000019)))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(func_74(0x00000019), 0x00000001), vLocal_52) >= 100f)
				{
					func_68(0x00000000);
				}
			}
			else if (!func_73(0x00000019, 0x00000000))
			{
				func_68(0x00000001);
			}
		}
	}
}

int func_137()
{
	if (iLocal_42 == 0x00000000)
	{
		return 0x00000026;
	}
	else if (iLocal_42 == 0x00000001)
	{
		return 0x00000045;
	}
	else if (iLocal_42 == 0x00000002)
	{
		return 0x00000055;
	}
	return 0xFFFFFFFF;
}

void func_138()
{
	func_17();
	func_109();
}

void func_139()
{
	int iVar0;
	
	func_221();
	func_208();
	func_175();
	func_109();
	func_174();
	if (func_170())
	{
		if (func_140(&iVar0))
		{
			func_258(0x00000000);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
			}
			if (func_85(iLocal_51))
			{
				unk_0x71EDC33E5A423750(iLocal_51, 0x00000002);
			}
			func_78(iVar0, 0x00000000);
		}
	}
}

int func_140(var uParam0)
{
	char* sVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
	{
		func_159();
		if (func_141())
		{
			sVar0 = unk_0xBB0808A181D4745C();
			if (!unk_0xEA6BC48857E0AC4C(sVar0))
			{
				if (iLocal_42 == 0x00000002)
				{
					*uParam0 = 0x00000001;
				}
				else
				{
					*uParam0 = 0x00000004;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_141()
{
	if (func_143(&uLocal_80, Local_44.f_8, sLocal_79, Local_44.f_4, 0x00000009, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
	{
		iLocal_40 = 0x00000001;
		func_142(0x000000C0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
		return 0x00000001;
	}
	return 0x00000000;
}

void func_142(int iParam0, vector3 vParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(Global_79AA[iParam0 /*23*/].f_13))
	{
		unk_0x2F9282246F89FFD1(Global_79AA[iParam0 /*23*/].f_13, vParam1);
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		Global_79AA[iParam0 /*23*/][iVar0 /*3*/] = { vParam1 };
		iVar0++;
	}
}

bool func_143(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_158(uParam0, uParam1, sParam2, iParam6, iParam7, 0x00000000);
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	if (iParam5 == 0x00000001)
	{
		Global_5151 = 0x00000001;
	}
	else
	{
		Global_5151 = 0x00000000;
	}
	Global_280001 = 0x00000000;
	return func_144(sParam3, iParam4, bParam8);
}

int func_144(char* sParam0, int iParam1, bool bParam2)
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
					func_157();
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
		if (func_156(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_155();
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
				func_154();
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
				if (func_153())
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
			if (func_152())
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
			func_151();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_150();
		func_145();
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
		func_157();
	}
	return 0x00000000;
}

void func_145()
{
	if (!func_146())
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

int func_146()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_149())
	{
		return 0x00000000;
	}
	if (func_147(unk_0xD803B885F5E47A62()))
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

bool func_147(int iParam0)
{
	return func_148(iParam0, 0x00000014);
}

bool func_148(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_149()
{
	return 0xFFFFFFFF;
}

void func_150()
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

void func_151()
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

int func_152()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_153()
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

void func_154()
{
	if (func_84(0x0000000E))
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
		Global_4C1E = func_89();
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

void func_155()
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

bool func_156(int iParam0, int iParam1)
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

void func_157()
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

void func_158(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = uParam1;
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

void func_159()
{
	int iVar0;
	
	iVar0 = func_89();
	func_160(iVar0, func_169(iVar0));
}

void func_160(int iParam0, var uParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Local_44 = 0x00000000;
			Local_44.f_1 = "MICHAEL";
			if (iLocal_42 == 0x00000000)
			{
				Local_44.f_2 = 0x00000001;
				Local_44.f_3 = "FRANKLIN";
				Local_44.f_8 = 0x00000005;
			}
			else
			{
				Local_44.f_2 = 0x00000003;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 0x00000001)
				{
					Local_44.f_8 = 0x00000006;
				}
				else
				{
					Local_44.f_8 = 0x0000000C;
				}
			}
			Local_44.f_5 = "FBI_3_FRESP";
			func_167(iParam0);
			break;
		
		case 0x00000001:
			Local_44 = 0x00000001;
			Local_44.f_1 = "FRANKLIN";
			if (iLocal_42 == 0x00000000)
			{
				Local_44.f_2 = 0x00000000;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 0x00000009;
			}
			else
			{
				Local_44.f_2 = 0x00000003;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 0x00000001)
				{
					Local_44.f_8 = 0x00000007;
				}
				else
				{
					Local_44.f_8 = 0x0000000C;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_167(iParam0);
			break;
		
		case 0x00000002:
			Local_44 = 0x00000002;
			Local_44.f_1 = "TREVOR";
			if (iLocal_42 == 0x00000000)
			{
				Local_44.f_2 = 0x00000000;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 0x00000008;
			}
			else
			{
				Local_44.f_2 = 0x00000003;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 0x00000001)
				{
					Local_44.f_8 = 0x00000007;
				}
				else
				{
					Local_44.f_8 = 0x0000000C;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_167(iParam0);
			break;
	}
	if (iLocal_42 == 0x00000001)
	{
		if (iParam0 == 0x00000000)
		{
			iVar0 = 0x00000000;
		}
		else
		{
			iVar0 = 0x00000001;
		}
		func_162(Local_44.f_8, iVar0, 0x00000000);
	}
	func_161(&uLocal_80, Local_44, unk_0x16F2683693E537C9(), Local_44.f_1, 0x00000000, 0x00000001);
	func_161(&uLocal_80, Local_44.f_2, 0x00000000, Local_44.f_3, 0x00000000, 0x00000001);
	Local_44.f_4 = uParam1;
}

void func_161(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_1F6A = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_154();
		if (iParam1 == 0x00000004)
		{
			func_116(iParam0, 0x00000000, 0x00000001);
			func_116(iParam0, 0x00000001, 0x00000001);
			func_116(iParam0, 0x00000002, 0x00000001);
			func_115(iParam0, 0x00000000, 0x00000001);
			func_115(iParam0, 0x00000001, 0x00000001);
			func_115(iParam0, 0x00000002, 0x00000001);
		}
		else
		{
			if (func_166(iParam0, iParam1) == 0x00000001 && func_165(iParam0, iParam1) == 0x00000001)
			{
				bParam2 = 0x00000000;
			}
			iVar0 = iParam1;
			func_116(iParam0, iVar0, 0x00000001);
			func_115(iParam0, iVar0, 0x00000001);
		}
		if (bParam2)
		{
			if (!Global_12B4E)
			{
				if (iParam1 != 0x00000004)
				{
					if (Global_4C1E != iParam1)
					{
						Global_1F4F[iParam1 /*4*/] = { func_164(iParam0) };
						Global_1F60[iParam1] = 0x00000001;
						Global_1F65[iParam1] = iParam0;
					}
					else if (iParam0 == Global_4C1E)
					{
					}
					else
					{
						Global_1F1E[0x00000001 /*6*/] = { func_164(iParam0) };
						Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
						func_163();
					}
				}
				else
				{
					Global_1F1E[0x00000001 /*6*/] = { func_164(iParam0) };
					Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
					func_163();
				}
			}
			else
			{
				Global_1F1E[0x00000001 /*6*/] = { func_164(iParam0) };
				Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
				func_163();
			}
		}
	}
}

void func_163()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_1F6A /*29*/].f_7)), 64);
	if (Global_1F7D == 0x00000000)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_1F1E[0x00000001 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_1F1E[0x00000001 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, "", 0x00000000);
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000000);
}

struct<4> func_164(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_165(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_166(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_167(int iParam0)
{
	Local_44.f_6 = unk_0xA5A6BB5EBAD59A21(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
	func_168(iParam0);
}

void func_168(int iParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(Local_44.f_6))
	{
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "SanAnd"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M77";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F78";
			}
			else
			{
				Local_44.f_7 = "LOC_T78";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Alamo"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M101";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F1";
			}
			else
			{
				Local_44.f_7 = "LOC_T1";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Alta"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M1";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F2";
			}
			else
			{
				Local_44.f_7 = "LOC_T2";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Airp"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M48";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F49";
			}
			else
			{
				Local_44.f_7 = "LOC_T49";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "ArmyB"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M28";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F29";
			}
			else
			{
				Local_44.f_7 = "LOC_T29";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "BhamCa"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M2";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F3";
			}
			else
			{
				Local_44.f_7 = "LOC_T3";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Banning"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M3";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F4";
			}
			else
			{
				Local_44.f_7 = "LOC_T4";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Baytre"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M4";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F5";
			}
			else
			{
				Local_44.f_7 = "LOC_T5";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Beach"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M93";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F94";
			}
			else
			{
				Local_44.f_7 = "LOC_T94";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "BradT"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M7";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F8";
			}
			else
			{
				Local_44.f_7 = "LOC_T8";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "BradP"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M6";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F7";
			}
			else
			{
				Local_44.f_7 = "LOC_T7";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Burton"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M8";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F9";
			}
			else
			{
				Local_44.f_7 = "LOC_T9";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "CANNY"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M70";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F71";
			}
			else
			{
				Local_44.f_7 = "LOC_T71";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "CCreak"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M10";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F11";
			}
			else
			{
				Local_44.f_7 = "LOC_T11";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "CalafB"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M9";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F10";
			}
			else
			{
				Local_44.f_7 = "LOC_T10";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "ChamH"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M11";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F12";
			}
			else
			{
				Local_44.f_7 = "LOC_T12";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "CHU"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M13";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F14";
			}
			else
			{
				Local_44.f_7 = "LOC_T14";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "CHIL"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M96";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F97";
			}
			else
			{
				Local_44.f_7 = "LOC_T97";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "COSI"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M14";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F15";
			}
			else
			{
				Local_44.f_7 = "LOC_T15";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "CMSW"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M12";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F13";
			}
			else
			{
				Local_44.f_7 = "LOC_T13";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Cypre"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M15";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F16";
			}
			else
			{
				Local_44.f_7 = "LOC_T16";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Davis"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M16";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F17";
			}
			else
			{
				Local_44.f_7 = "LOC_T17";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Desrt"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M32";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F33";
			}
			else
			{
				Local_44.f_7 = "LOC_T33";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "DelBe"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M19";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F20";
			}
			else
			{
				Local_44.f_7 = "LOC_T20";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "DelPe"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M18";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F19";
			}
			else
			{
				Local_44.f_7 = "LOC_T19";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "DelSol"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Downt"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M20";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F21";
			}
			else
			{
				Local_44.f_7 = "LOC_T21";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "DTVine"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M21";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F22";
			}
			else
			{
				Local_44.f_7 = "LOC_T22";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Eclips"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M24";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F25";
			}
			else
			{
				Local_44.f_7 = "LOC_T25";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "ELSant"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M22";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F23";
			}
			else
			{
				Local_44.f_7 = "LOC_T23";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "EBuro"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M25";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F26";
			}
			else
			{
				Local_44.f_7 = "LOC_T26";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "ELGorl"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M26";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F27";
			}
			else
			{
				Local_44.f_7 = "LOC_T27";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Elysian"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M27";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F28";
			}
			else
			{
				Local_44.f_7 = "LOC_T28";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Galli"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M31";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F32";
			}
			else
			{
				Local_44.f_7 = "LOC_T32";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Galfish"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M29";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F30";
			}
			else
			{
				Local_44.f_7 = "LOC_T30";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Greatc"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M34";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F35";
			}
			else
			{
				Local_44.f_7 = "LOC_T35";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Golf"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M35";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F36";
			}
			else
			{
				Local_44.f_7 = "LOC_T36";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "GrapeS"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M33";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F34";
			}
			else
			{
				Local_44.f_7 = "LOC_T34";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Hawick"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M37";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F38";
			}
			else
			{
				Local_44.f_7 = "LOC_T38";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Harmo"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M36";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F37";
			}
			else
			{
				Local_44.f_7 = "LOC_T37";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Heart"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M38";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F39";
			}
			else
			{
				Local_44.f_7 = "LOC_T39";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "HumLab"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M39";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F40";
			}
			else
			{
				Local_44.f_7 = "LOC_T40";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "HORS"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M97";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F98";
			}
			else
			{
				Local_44.f_7 = "LOC_T98";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Koreat"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M46";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F47";
			}
			else
			{
				Local_44.f_7 = "LOC_T47";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Jail"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M5";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F6";
			}
			else
			{
				Local_44.f_7 = "LOC_T6";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LAct"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M45";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F46";
			}
			else
			{
				Local_44.f_7 = "LOC_T46";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LDam"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M44";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F45";
			}
			else
			{
				Local_44.f_7 = "LOC_T45";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Lago"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M43";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F44";
			}
			else
			{
				Local_44.f_7 = "LOC_T44";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LegSqu"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LosSF"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M47";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F48";
			}
			else
			{
				Local_44.f_7 = "LOC_T48";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LMesa"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M40";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F41";
			}
			else
			{
				Local_44.f_7 = "LOC_T41";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LosPuer"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LosPFy"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M42";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F43";
			}
			else
			{
				Local_44.f_7 = "LOC_T43";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "LOSTMC"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Mirr"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M50";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F51";
			}
			else
			{
				Local_44.f_7 = "LOC_T51";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Morn"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M52";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F53";
			}
			else
			{
				Local_44.f_7 = "LOC_T53";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Murri"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M56";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F57";
			}
			else
			{
				Local_44.f_7 = "LOC_T57";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "MTChil"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M53";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F54";
			}
			else
			{
				Local_44.f_7 = "LOC_T54";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "MTJose"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M55";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F56";
			}
			else
			{
				Local_44.f_7 = "LOC_T56";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "MTGordo"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M54";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F55";
			}
			else
			{
				Local_44.f_7 = "LOC_T55";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Movie"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M72";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F73";
			}
			else
			{
				Local_44.f_7 = "LOC_T73";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "NCHU"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M57";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F58";
			}
			else
			{
				Local_44.f_7 = "LOC_T58";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Noose"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Oceana"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M60";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F61";
			}
			else
			{
				Local_44.f_7 = "LOC_T61";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Observ"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M30";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F31";
			}
			else
			{
				Local_44.f_7 = "LOC_T31";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Palmpow"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M64";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F65";
			}
			else
			{
				Local_44.f_7 = "LOC_T65";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "PBOX"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M66";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F67";
			}
			else
			{
				Local_44.f_7 = "LOC_T67";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "PBluff"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M59";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F60";
			}
			else
			{
				Local_44.f_7 = "LOC_T60";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Paleto"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M61";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F62";
			}
			else
			{
				Local_44.f_7 = "LOC_T62";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "PalCov"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M62";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F63";
			}
			else
			{
				Local_44.f_7 = "LOC_T63";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "PalFor"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M63";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F64";
			}
			else
			{
				Local_44.f_7 = "LOC_T64";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "PalHigh"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M65";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F66";
			}
			else
			{
				Local_44.f_7 = "LOC_T66";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "ProcoB"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M68";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F69";
			}
			else
			{
				Local_44.f_7 = "LOC_T69";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Prol"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M58";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F59";
			}
			else
			{
				Local_44.f_7 = "LOC_T59";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "RTRAK"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M71";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F72";
			}
			else
			{
				Local_44.f_7 = "LOC_T72";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Rancho"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M69";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F70";
			}
			else
			{
				Local_44.f_7 = "LOC_T70";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "RGLEN"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M74";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F75";
			}
			else
			{
				Local_44.f_7 = "LOC_T75";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Richm"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M73";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F74";
			}
			else
			{
				Local_44.f_7 = "LOC_T74";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Rockf"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M75";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F76";
			}
			else
			{
				Local_44.f_7 = "LOC_T76";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "SANDY"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M79";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F80";
			}
			else
			{
				Local_44.f_7 = "LOC_T80";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "TongvaH"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M87";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F88";
			}
			else
			{
				Local_44.f_7 = "LOC_T88";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "TongvaV"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M88";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F89";
			}
			else
			{
				Local_44.f_7 = "LOC_T89";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "East_V"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M23";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F24";
			}
			else
			{
				Local_44.f_7 = "LOC_T24";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Zenora"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M80";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F81";
			}
			else
			{
				Local_44.f_7 = "LOC_T81";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Slab"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M81";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F82";
			}
			else
			{
				Local_44.f_7 = "LOC_T82";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "SKID"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M51";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F52";
			}
			else
			{
				Local_44.f_7 = "LOC_T52";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "SLSant"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M82";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F83";
			}
			else
			{
				Local_44.f_7 = "LOC_T83";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Stad"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M49";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F50";
			}
			else
			{
				Local_44.f_7 = "LOC_T50";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Tatamo"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Termina"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M85";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F86";
			}
			else
			{
				Local_44.f_7 = "LOC_T86";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "TEXTI"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M86";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F87";
			}
			else
			{
				Local_44.f_7 = "LOC_T87";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "WVine"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M99";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F100";
			}
			else
			{
				Local_44.f_7 = "LOC_T100";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "UtopiaG"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M89";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F90";
			}
			else
			{
				Local_44.f_7 = "LOC_T90";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Vesp"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M92";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F93";
			}
			else
			{
				Local_44.f_7 = "LOC_T93";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "VCana"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M94";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F95";
			}
			else
			{
				Local_44.f_7 = "LOC_T95";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Vine"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M95";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F96";
			}
			else
			{
				Local_44.f_7 = "LOC_T96";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "WMirror"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M98";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F99";
			}
			else
			{
				Local_44.f_7 = "LOC_T99";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "WindF"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M76";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F77";
			}
			else
			{
				Local_44.f_7 = "LOC_T77";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "Zancudo"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M100";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F101";
			}
			else
			{
				Local_44.f_7 = "LOC_T101";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "SanChia"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M78";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F79";
			}
			else
			{
				Local_44.f_7 = "LOC_T79";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "STRAW"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M83";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F84";
			}
			else
			{
				Local_44.f_7 = "LOC_T84";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M17";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F18";
			}
			else
			{
				Local_44.f_7 = "LOC_T18";
			}
			return;
		}
		if (unk_0x7F8A39872A07D2CE(Local_44.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0x00000000)
			{
				Local_44.f_7 = "LOC_M67";
			}
			else if (iParam0 == 0x00000001)
			{
				Local_44.f_7 = "LOC_F68";
			}
			else
			{
				Local_44.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0x00000000)
		{
			Local_44.f_7 = "LOC_M";
		}
		else if (iParam0 == 0x00000001)
		{
			Local_44.f_7 = "LOC_M";
		}
		else
		{
			Local_44.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0x00000000)
	{
		Local_44.f_7 = "LOC_M";
	}
	else if (iParam0 == 0x00000001)
	{
		Local_44.f_7 = "LOC_F";
	}
	else
	{
		Local_44.f_7 = "LOC_T";
	}
}

char* func_169(int iParam0)
{
	char* sVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000A))
	{
		if (iLocal_42 == 0x00000000)
		{
			sLocal_79 = "FBIPRAU";
		}
		else if (iLocal_42 == 0x00000001)
		{
			sLocal_79 = "AHFAUD";
		}
		else if (iLocal_42 == 0x00000002)
		{
			sLocal_79 = "FHFAUD";
		}
		if (iLocal_42 == 0x00000000)
		{
			if (iParam0 == 0x00000000)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (iParam0 == 0x00000001)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (iParam0 == 0x00000002)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_42 == 0x00000001)
		{
			if (iParam0 == 0x00000000)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (iParam0 == 0x00000001)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (iParam0 == 0x00000002)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_42 == 0x00000002)
		{
			if (iParam0 == 0x00000000)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (iParam0 == 0x00000001)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (iParam0 == 0x00000002)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_79 = "FHFAUD";
		if (iParam0 == 0x00000000)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (iParam0 == 0x00000001)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (iParam0 == 0x00000002)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_170()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
	{
		if (func_85(iLocal_51))
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000001))
			{
				if ((func_173(0x00000000) || func_173(0x00000002)) || func_173(0x00000001))
				{
					func_1(0x0000002E, 0x00000001);
					func_171();
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_171()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000006))
	{
		if (func_85(iLocal_51))
		{
			vLocal_52 = { unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001) };
			fLocal_53 = unk_0xD9522BA9E27E1349(iLocal_51);
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000006);
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000002);
			func_62(iLocal_51, &Local_54);
			func_21(iLocal_51, vLocal_52, fLocal_53, 0x00000019, 0x00000001);
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000E);
			func_172(iLocal_51);
		}
	}
}

int func_172(int iParam0)
{
	if (!unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave"))
	{
		if (unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000001))
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

int func_173(int iParam0)
{
	if (Global_55A0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (Global_4C1E.f_1 == 0x0000000A)
		{
			if (Global_1A0F == iParam0)
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
	return 0x00000000;
}

void func_174()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000) && unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000B))
		{
			func_258(0x00000001);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000B))
	{
		func_258(0x00000000);
	}
}

void func_175()
{
	if ((unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000) && Global_A1D7 == 0x0000000F) && !func_207())
	{
		if (iLocal_38 == 0x00000000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000001))
			{
				if (!func_76(unk_0x16F2683693E537C9(), vLocal_50, 5f))
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000014) || func_133())
					{
						if ((func_249(unk_0x16F2683693E537C9()) && !unk_0xEAE0D21A50E6C7F4(uLocal_47[0x00000000], 0x00000011)) && !unk_0xEAE0D21A50E6C7F4(uLocal_47[0x00000001], 0x00000012))
						{
							if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
							{
								func_206(0x00000018, 0x0000002E);
								if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
								{
									if (!func_205() && func_185(unk_0x68F4C0EC296D3901(iLocal_51, 0x00000001)))
									{
										if (func_182(iLocal_51))
										{
											if (func_181(iLocal_51))
											{
												unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000001);
												if (func_70(unk_0x16F2683693E537C9()) == 0x00000000)
												{
													func_69(0x00000007);
													func_1(0x00000007, 0x00000001);
												}
												else
												{
													func_69(0x00000008);
													func_1(0x00000008, 0x00000001);
												}
												vLocal_50 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
												return;
											}
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000014))
									{
										func_1(0x0000002E, 0x00000000);
										unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
										iLocal_245 = 0xFFFFFFFF;
									}
									vLocal_50 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
								}
							}
							else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								func_206(0x00000007, 0x00000008);
								if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000014))
								{
									unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
									iLocal_245 = 0xFFFFFFFF;
								}
								else
								{
									func_69(0x00000018);
								}
							}
						}
					}
					else if (!func_13())
					{
						if ((unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000014))
						{
							if (iLocal_245 != 0xFFFFFFFF)
							{
								if ((unk_0x1C0640BA9A7327B3() - iLocal_245) > 0x000003E8)
								{
									unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000014);
								}
							}
							else
							{
								iLocal_245 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
						}
					}
				}
				else if (func_13())
				{
					vLocal_50 = { 0f, 0f, 0f };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
			{
				if (!func_76(unk_0x16F2683693E537C9(), vLocal_50, 10f))
				{
					vLocal_50 = { 0f, 0f, 0f };
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000001);
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
					iLocal_245 = 0xFFFFFFFF;
				}
				else if (!unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000014))
						{
							func_69(0x00000018);
						}
						func_1(0x00000018, 0x00000001);
						unk_0x0674E58A79778E99(&iLocal_49, 0x00000001);
						unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
						iLocal_245 = 0xFFFFFFFF;
						vLocal_50 = { 0f, 0f, 0f };
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (func_85(iLocal_51))
					{
						if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_51)
						{
							func_1(0x0000002E, 0x00000000);
							func_177(0x00000000);
							func_176();
							vLocal_50 = { 0f, 0f, 0f };
							unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
							iLocal_245 = 0xFFFFFFFF;
						}
					}
				}
				else if (!func_182(iLocal_51))
				{
					func_1(0x00000023, 0x00000001);
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000001);
					vLocal_50 = { 0f, 0f, 0f };
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000014);
					iLocal_245 = 0xFFFFFFFF;
				}
			}
		}
	}
}

void func_176()
{
	unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
	unk_0x0674E58A79778E99(&iLocal_49, 0x00000008);
	unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
}

void func_177(int iParam0)
{
	if (func_180())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_179())
		{
			func_178(0x00000001, 0x00000001);
		}
		else
		{
			func_178(0x00000000, 0x00000000);
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
	if (!func_152())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_178(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0x00000000))
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

bool func_179()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_180()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_181(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0x377BE9A1BF38C7CE(iParam0))
	{
		func_69(0x00000027);
		return 0x00000000;
	}
	if (!unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iParam0, 0xFFFFFFFF, 0x00000000, 0x00000000) && !unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iParam0, 0x00000000, 0x00000000, 0x00000000))
	{
		func_69(0x00000025);
		return 0x00000000;
	}
	if (unk_0x70EED0761B82965E(iParam0))
	{
		func_69(0x00000024);
		return 0x00000000;
	}
	vVar0 = { unk_0x835730A2D89F6093(iParam0, 0x00000002) };
	if (vVar0.x >= 10f || vVar0.x <= -10f)
	{
		func_69(0x0000002A);
		return 0x00000000;
	}
	else if (vVar0.y >= 15f || vVar0.y <= -15f)
	{
		func_69(0x0000002B);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_182(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		if (func_85(iParam0))
		{
			unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar1, &vVar2);
			vVar1 = { vVar1 + Vector(-1f, -1f, -2f) };
			vVar2 = { vVar2 + Vector(1f, 1f, 2f) };
			if (!unk_0x7AABDE381A013256(unk_0x68E4ADDDDCD7BDDE(iParam0, vVar1), unk_0x68E4ADDDDCD7BDDE(iParam0, vVar2), 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, iParam0, 0x00000000))
			{
				iVar0++;
			}
			else if (func_13())
			{
				func_69(0x00000026);
			}
			if (!func_184())
			{
				iVar0++;
			}
			else if (func_13())
			{
				func_69(0x00000023);
			}
			if (iVar0 == 0x00000002)
			{
				if (func_183(unk_0x68F4C0EC296D3901(iParam0, 0x00000001)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_183(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar2 = { vParam0 + Vector(3.2f, 0f, 0f) };
	if (unk_0xE82754C349C7B581(vVar2, &fVar0, 0x00000000, 0x00000000) && unk_0xE82754C349C7B581(vParam0, &fVar1, 0x00000000, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1((fVar0 - fVar1)) < 0.9f)
		{
			return 0x00000001;
		}
	}
	if (func_13())
	{
		func_69(0x00000025);
	}
	return 0x00000000;
}

int func_184()
{
	var uVar0[5];
	int iVar1;
	
	unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000004)
	{
		if (func_249(uVar0[iVar1]) && uVar0[iVar1] != unk_0x16F2683693E537C9())
		{
			if (SYSTEM::VDIST2(vLocal_50, unk_0x68F4C0EC296D3901(uVar0[iVar1], 0x00000001)) <= 16f)
			{
				return 0x00000001;
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_185(vector3 vParam0)
{
	if (!func_201() && !func_200(vParam0))
	{
		if (!func_197())
		{
			if (!func_193(vParam0))
			{
				if (!func_191(vParam0) && !func_186(vParam0))
				{
					return 0x00000001;
				}
			}
			else
			{
				func_69(0x00000000);
			}
		}
	}
	return 0x00000000;
}

int func_186(vector3 vParam0)
{
	if (func_189(vParam0) || func_187(vParam0))
	{
		if (func_13())
		{
			func_69(0x00000016);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_187(vector3 vParam0)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(vParam0, Global_16EBB[func_188(vParam0, 0x00000000) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_188(vector3 vParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0x00000007;
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000007 - 0x00000001))
	{
		if (Global_16EBB[iVar0 /*9*/].f_7 != 0x00000107)
		{
			if (!bParam1 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38.f_11[iVar0], 0x00000000))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_16EBB[iVar0 /*9*/].f_3, 0x00000001);
				if (fVar1 < fVar2)
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

int func_189(vector3 vParam0)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(vParam0, Global_16EFB[func_190(vParam0, 0x00000000) /*9*/].f_3);
	if (fVar0 <= 40000f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_190(vector3 vParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1E+07f;
	iVar3 = 0x00000005;
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000005 - 0x00000001))
	{
		if (Global_16EFB[iVar0 /*9*/].f_7 != 0x00000107)
		{
			if (!bParam1 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38.f_B[iVar0], 0x00000000))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_16EFB[iVar0 /*9*/].f_3, 0x00000001);
				if (fVar1 < fVar2)
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

int func_191(vector3 vParam0)
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0xDE5F9F54005367A1(vParam0, &vVar0, 0x00000000, 0x40400000, 0x00000000))
	{
		fVar1 = SYSTEM::VDIST2(vParam0, vVar0);
		if (fVar1 >= 400f || !func_192(vParam0, vVar0))
		{
			return 0x00000000;
		}
		else if (fVar1 < 20f && fVar1 > 6f)
		{
			if (func_13())
			{
				func_69(0x00000028);
			}
			return 0x00000001;
		}
		else
		{
			if (func_13())
			{
				func_69(0x00000029);
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_192(vector3 vParam0, vector3 vParam1)
{
	float fVar0;
	
	fVar0 = unk_0x755FF954DAE327E1((vParam0.z - vParam1.z));
	if (fVar0 <= 5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_193(vector3 vParam0)
{
	if (!func_196(0x00000001))
	{
		if (!func_196(0x00000000))
		{
			if (func_194(vParam0, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (func_194(vParam0, 0x00000001))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000007))
	{
		if (!func_196(0x00000004))
		{
			if (func_194(vParam0, 0x00000004))
			{
				return 0x00000001;
			}
		}
		else
		{
			if (func_194(vParam0, 0x00000005))
			{
				return 0x00000001;
			}
			if (func_194(vParam0, 0x00000006))
			{
				return 0x00000001;
			}
		}
	}
	if (func_194(vParam0, 0x00000002))
	{
		return 0x00000001;
	}
	if (func_194(vParam0, 0x00000003))
	{
		return 0x00000001;
	}
	if (!func_196(0x00000008))
	{
		if (func_194(vParam0, 0x00000008))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000010))
	{
		if (func_194(vParam0, 0x00000010))
		{
			return 0x00000001;
		}
		if (!func_196(0x0000000F))
		{
			if (func_194(vParam0, 0x0000000F))
			{
				return 0x00000001;
			}
			if (!func_196(0x0000000E))
			{
				if (func_194(vParam0, 0x0000000E))
				{
					return 0x00000001;
				}
				if (!func_196(0x0000000D))
				{
					if (func_194(vParam0, 0x0000000D))
					{
						return 0x00000001;
					}
					if (!func_196(0x0000000C))
					{
						if (func_194(vParam0, 0x0000000C))
						{
							return 0x00000001;
						}
						if (!func_196(0x0000000B))
						{
							if (func_194(vParam0, 0x0000000B))
							{
								return 0x00000001;
							}
							if (!func_196(0x0000000A))
							{
								if (func_194(vParam0, 0x0000000A))
								{
									return 0x00000001;
								}
								if (!func_196(0x00000009))
								{
									if (func_194(vParam0, 0x00000009))
									{
										return 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_196(0x00000014))
	{
		if (func_194(vParam0, 0x00000014))
		{
			return 0x00000001;
		}
		if (!func_196(0x00000013))
		{
			if (func_194(vParam0, 0x00000013))
			{
				return 0x00000001;
			}
			if (!func_196(0x00000012))
			{
				if (func_194(vParam0, 0x00000012))
				{
					return 0x00000001;
				}
				if (!func_196(0x00000011))
				{
					if (func_194(vParam0, 0x00000011))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (!func_196(0x00000015))
	{
		if (func_194(vParam0, 0x00000015))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000016))
	{
		if (func_194(vParam0, 0x00000016))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000017))
	{
		if (func_194(vParam0, 0x00000017))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000018))
	{
		if (func_194(vParam0, 0x00000018))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x0000001A))
	{
		if (!func_196(0x00000019))
		{
			if (func_194(vParam0, 0x00000019))
			{
				return 0x00000001;
			}
		}
		else if (func_194(vParam0, 0x0000001A))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x0000001E))
	{
		if (func_194(vParam0, 0x0000001E))
		{
			return 0x00000001;
		}
		if (!func_196(0x0000001D))
		{
			if (func_194(vParam0, 0x0000001D))
			{
				return 0x00000001;
			}
			if (!func_196(0x0000001C))
			{
				if (func_194(vParam0, 0x0000001C))
				{
					return 0x00000001;
				}
				if (!func_196(0x0000001B))
				{
					if (func_194(vParam0, 0x0000001B))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (!func_196(0x0000001F))
	{
		if (func_194(vParam0, 0x0000001F))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000022))
	{
		if (func_194(vParam0, 0x00000022))
		{
			return 0x00000001;
		}
		if (!func_196(0x00000021))
		{
			if (func_194(vParam0, 0x00000021))
			{
				return 0x00000001;
			}
			if (!func_196(0x00000020))
			{
				if (func_194(vParam0, 0x00000020))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (!func_196(0x00000023))
	{
		if (func_194(vParam0, 0x00000023))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x00000024))
	{
		if (func_194(vParam0, 0x00000024))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x0000002B))
	{
		if (func_194(vParam0, 0x0000002B))
		{
			return 0x00000001;
		}
		if (!func_196(0x0000002A))
		{
			if (func_194(vParam0, 0x0000002A))
			{
				return 0x00000001;
			}
			if (!func_196(0x00000026))
			{
				if (func_194(vParam0, 0x0000002A))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000027))
			{
				if (func_194(vParam0, 0x0000002A))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000028))
			{
				if (func_194(vParam0, 0x0000002A))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000029))
			{
				if (func_194(vParam0, 0x0000002A))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000025))
			{
				if (func_194(vParam0, 0x0000002A))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (!func_196(0x0000002D))
	{
		if (func_194(vParam0, 0x0000002D))
		{
			return 0x00000001;
		}
		if (!func_196(0x0000002C))
		{
			if (func_194(vParam0, 0x0000002C))
			{
				return 0x00000001;
			}
		}
	}
	if (!func_196(0x00000033))
	{
		if (func_194(vParam0, 0x00000033))
		{
			return 0x00000001;
		}
		if (!func_196(0x00000030))
		{
			if (func_194(vParam0, 0x00000030))
			{
				return 0x00000001;
			}
			if (!func_196(0x00000031))
			{
				if (func_194(vParam0, 0x00000031))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000032))
			{
				if (func_194(vParam0, 0x00000032))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x0000002F))
			{
				if (func_194(vParam0, 0x0000002F))
				{
					return 0x00000001;
				}
				if (!func_196(0x0000002E))
				{
					if (func_194(vParam0, 0x0000002E))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (!func_196(0x00000035))
	{
		if (func_194(vParam0, 0x00000035))
		{
			return 0x00000001;
		}
		if (!func_196(0x00000038))
		{
			if (func_194(vParam0, 0x00000038))
			{
				return 0x00000001;
			}
			if (!func_196(0x00000037))
			{
				if (func_194(vParam0, 0x00000037))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000036))
			{
				if (func_194(vParam0, 0x00000036))
				{
					return 0x00000001;
				}
			}
			if (!func_196(0x00000034))
			{
				if (func_194(vParam0, 0x00000034))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (!func_196(0x00000039))
	{
		if (func_194(vParam0, 0x00000039))
		{
			return 0x00000001;
		}
	}
	if (!func_196(0x0000003E))
	{
		if (func_194(vParam0, 0x0000003E))
		{
			return 0x00000001;
		}
		if (!func_196(0x0000003D))
		{
			if (func_194(vParam0, 0x0000003D))
			{
				return 0x00000001;
			}
			if (!func_196(0x0000003C))
			{
				if (func_194(vParam0, 0x0000003C))
				{
					return 0x00000001;
				}
				if (!func_196(0x0000003B))
				{
					if (func_194(vParam0, 0x0000003B))
					{
						return 0x00000001;
					}
					if (!func_196(0x0000003A))
					{
						if (func_194(vParam0, 0x0000003A))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_194(vector3 vParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(vParam0, func_195(iParam1));
	if (fVar0 <= 625f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_195(int iParam0)
{
	vector3 vVar0;
	
	if (iParam0 == 0x00000000)
	{
		vVar0 = { -1604.668f, 5239.1f, 3.01f };
	}
	else if (iParam0 == 0x00000001)
	{
		vVar0 = { -1592.84f, 5214.04f, 3.01f };
	}
	else if (iParam0 == 0x00000002)
	{
		vVar0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 0x00000003)
	{
		vVar0 = { 190.26f, -956.35f, 29.63f };
	}
	else if (iParam0 == 0x00000004)
	{
		vVar0 = { 414f, -761f, 29f };
	}
	else if (iParam0 == 0x00000005)
	{
		vVar0 = { 1199.27f, -1255.63f, 34.23f };
	}
	else if (iParam0 == 0x00000006)
	{
		vVar0 = { -468.9f, -1713.06f, 18.21f };
	}
	else if (iParam0 == 0x00000007)
	{
		vVar0 = { 237.65f, -385.41f, 44.4f };
	}
	else if (iParam0 == 0x00000008)
	{
		vVar0 = { -1458.97f, 485.99f, 115.38f };
	}
	else if (iParam0 == 0x00000009)
	{
		vVar0 = { -1622.89f, 4204.87f, 83.3f };
	}
	else if (iParam0 == 0x0000000A)
	{
		vVar0 = { 242.7f, 362.7f, 104.74f };
	}
	else if (iParam0 == 0x0000000B)
	{
		vVar0 = { 1835.53f, 4705.86f, 38.1f };
	}
	else if (iParam0 == 0x0000000C)
	{
		vVar0 = { 1826.13f, 4698.88f, 38.92f };
	}
	else if (iParam0 == 0x0000000D)
	{
		vVar0 = { 637.02f, 119.7093f, 89.5f };
	}
	else if (iParam0 == 0x0000000E)
	{
		vVar0 = { -2892.93f, 3192.37f, 11.66f };
	}
	else if (iParam0 == 0x0000000F)
	{
		vVar0 = { 524.43f, 3079.82f, 39.48f };
	}
	else if (iParam0 == 0x00000010)
	{
		vVar0 = { -697.75f, 45.38f, 43.03f };
	}
	else if (iParam0 == 0x00000011)
	{
		vVar0 = { -188.22f, 1296.1f, 302.86f };
	}
	else if (iParam0 == 0x00000012)
	{
		vVar0 = { -954.19f, -2760.05f, 14.64f };
	}
	else if (iParam0 == 0x00000013)
	{
		vVar0 = { -63.8f, -809.5f, 321.8f };
	}
	else if (iParam0 == 0x00000014)
	{
		vVar0 = { 1731.41f, 96.96f, 170.39f };
	}
	else if (iParam0 == 0x00000015)
	{
		vVar0 = { -1877.82f, -440.649f, 45.05f };
	}
	else if (iParam0 == 0x00000016)
	{
		vVar0 = { 809.66f, 1279.76f, 360.49f };
	}
	else if (iParam0 == 0x00000017)
	{
		vVar0 = { -915.6f, 6139.2f, 5.5f };
	}
	else if (iParam0 == 0x00000018)
	{
		vVar0 = { -72.29f, -1260.63f, 28.14f };
	}
	else if (iParam0 == 0x00000019)
	{
		vVar0 = { 1804.32f, 3931.33f, 32.82f };
	}
	else if (iParam0 == 0x0000001A)
	{
		vVar0 = { -684.17f, 5839.16f, 16.09f };
	}
	else if (iParam0 == 0x0000001B)
	{
		vVar0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 0x0000001C)
	{
		vVar0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 0x0000001D)
	{
		vVar0 = { 565.39f, -1772.88f, 29.77f };
	}
	else if (iParam0 == 0x0000001E)
	{
		vVar0 = { -1104.93f, 291.25f, 64.3f };
	}
	else if (iParam0 == 0x0000001F)
	{
		vVar0 = { 2726.1f, 4145f, 44.3f };
	}
	else if (iParam0 == 0x00000020)
	{
		vVar0 = { 327.85f, 3405.7f, 35.73f };
	}
	else if (iParam0 == 0x00000021)
	{
		vVar0 = { 18f, 4527f, 105f };
	}
	else if (iParam0 == 0x00000022)
	{
		vVar0 = { -303.82f, 6211.29f, 31.05f };
	}
	else if (iParam0 == 0x00000023)
	{
		vVar0 = { 1972.59f, 3816.43f, 32.42f };
	}
	else if (iParam0 == 0x00000024)
	{
		vVar0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 0x00000025)
	{
		vVar0 = { -1097.16f, 790.01f, 164.52f };
	}
	else if (iParam0 == 0x00000026)
	{
		vVar0 = { -558.65f, 284.49f, 90.86f };
	}
	else if (iParam0 == 0x00000027)
	{
		vVar0 = { -1034.15f, 366.08f, 80.11f };
	}
	else if (iParam0 == 0x00000028)
	{
		vVar0 = { -623.91f, -266.17f, 37.76f };
	}
	else if (iParam0 == 0x00000029)
	{
		vVar0 = { -1096.85f, 67.68f, 52.95f };
	}
	else if (iParam0 == 0x0000002A)
	{
		vVar0 = { -1310.7f, -640.22f, 26.54f };
	}
	else if (iParam0 == 0x0000002B)
	{
		vVar0 = { -44.75f, -1288.67f, 28.21f };
	}
	else if (iParam0 == 0x0000002C)
	{
		vVar0 = { 2468.51f, 3437.39f, 49.9f };
	}
	else if (iParam0 == 0x0000002D)
	{
		vVar0 = { 2319.44f, 2583.58f, 46.76f };
	}
	else if (iParam0 == 0x0000002E)
	{
		vVar0 = { -149.75f, 285.81f, 93.67f };
	}
	else if (iParam0 == 0x0000002F)
	{
		vVar0 = { -70.71f, 301.43f, 106.79f };
	}
	else if (iParam0 == 0x00000030)
	{
		vVar0 = { -257.22f, 292.85f, 90.63f };
	}
	else if (iParam0 == 0x00000031)
	{
		vVar0 = { 305.52f, 157.19f, 102.94f };
	}
	else if (iParam0 == 0x00000032)
	{
		vVar0 = { 1040.96f, -534.42f, 60.17f };
	}
	else if (iParam0 == 0x00000033)
	{
		vVar0 = { -484.2f, 229.68f, 82.21f };
	}
	else if (iParam0 == 0x00000034)
	{
		vVar0 = { 908f, 3643.7f, 32.2f };
	}
	else if (iParam0 == 0x00000036)
	{
		vVar0 = { 465.1f, -1849.3f, 27.8f };
	}
	else if (iParam0 == 0x00000037)
	{
		vVar0 = { -161f, -1669.7f, 33f };
	}
	else if (iParam0 == 0x00000038)
	{
		vVar0 = { -1298.2f, 2504.14f, 21.09f };
	}
	else if (iParam0 == 0x00000035)
	{
		vVar0 = { 1181.5f, -400.1f, 67.5f };
	}
	else if (iParam0 == 0x00000039)
	{
		vVar0 = { -1298.98f, 4640.16f, 105.67f };
	}
	else if ((iParam0 == 0x0000003A || iParam0 == 0x0000003B) || iParam0 == 0x0000003E)
	{
		vVar0 = { -14.39f, -1472.69f, 29.58f };
	}
	else if (iParam0 == 0x0000003C)
	{
		vVar0 = { 0f, 0f, 0f };
	}
	else if (iParam0 == 0x0000003D)
	{
		vVar0 = { 0f, 0f, 0f };
	}
	return vVar0;
}

bool func_196(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003);
}

int func_197()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000004 - 0x00000001))
	{
		iVar1 = 0x00000000;
		while (iVar1 <= (Local_68[iVar0 /*261*/].f_101 - 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_68[iVar0 /*261*/].f_102, iVar1))
			{
				if (func_199(sLocal_70))
				{
					if (Local_68[iVar0 /*261*/].f_104 == 0x00000000)
					{
						if (func_13())
						{
							func_69(0x00000015);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_104 == 0x00000002)
					{
						if (func_13())
						{
							func_69(0x00000016);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_104 == 0x00000001)
					{
						if (func_13())
						{
							func_69(0x00000017);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_104 == 0x00000003)
					{
						if (func_13())
						{
							func_69(0x00000014);
						}
					}
					return 0x00000001;
				}
				if (func_198(&(Local_68[iVar0 /*261*/][iVar1 /*8*/])))
				{
					if (Local_68[iVar0 /*261*/].f_104 == 0x00000000)
					{
						if (func_13())
						{
							func_69(0x00000015);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_104 == 0x00000002)
					{
						if (func_13())
						{
							func_69(0x00000016);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_104 == 0x00000001)
					{
						if (func_13())
						{
							func_69(0x00000017);
						}
					}
					else if (Local_68[iVar0 /*261*/].f_104 == 0x00000003)
					{
						if (func_13())
						{
							func_69(0x00000014);
						}
					}
					return 0x00000001;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_198(var uParam0)
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), uParam0->f_1, uParam0->f_4, uParam0->f_7, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_199(char* sParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000C)
	{
		if (!unk_0x2EBF5002C6B6A06C(sLocal_69[iVar0]))
		{
			if (unk_0x7F8A39872A07D2CE(sLocal_69[iVar0], sParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_200(vector3 vParam0)
{
	if (vParam0.z < -90f)
	{
		return 0x00000001;
	}
	if ((SYSTEM::VDIST2(vParam0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(vParam0, -62.0307f, -1839.859f, 25.6787f) <= 400f) || SYSTEM::VDIST2(vParam0, -234.7648f, -1150.311f, 21.9224f) <= 400f)
	{
		func_69(0x00000015);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_201()
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_203(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000091, 0x00000001);
	fVar1 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Global_16E56[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		if (func_13())
		{
			func_202(iVar0);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_202(int iParam0)
{
	if (iParam0 == 0x00000000 || iParam0 == 0x00000001)
	{
		func_69(0x00000020);
	}
	else if (iParam0 == 0x00000005 || iParam0 == 0x00000006)
	{
		func_69(0x00000021);
	}
	else if ((iParam0 == 0x00000002 || iParam0 == 0x00000003) || iParam0 == 0x00000004)
	{
		func_69(0x00000022);
	}
}

int func_203(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_204(iVar0) || iParam2 == 0x00000000)
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

bool func_204(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_205()
{
	if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 855.7258f, -2344.491f, 29.33145f) <= 52900f)
	{
		if (func_13())
		{
			func_69(0x0000001C);
		}
		return 0x00000001;
	}
	else if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1383.21f, -2068.02f, 51.87057f) <= 160000f)
	{
		if (func_13())
		{
			func_69(0x0000001D);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_206(int iParam0, int iParam1)
{
	func_4(iParam0);
	if (func_2(func_3(iParam0)))
	{
		unk_0xA37A90C62806D848(0x00000001);
		unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
	}
	if (iParam1 != 0x0000002E)
	{
		func_4(iParam1);
		if (func_2(func_3(iParam1)))
		{
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
		}
	}
}

int func_207()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

void func_208()
{
	int iVar0;
	int iVar1;
	
	if ((Global_A1D7 == 0x0000000F && iLocal_38 == 0x00000000) && !func_207())
	{
		if (!unk_0x991B1F0980C62628())
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!func_219())
					{
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000007))
						{
							iVar0 = unk_0x728870EB733D12A1();
							if (func_85(iVar0))
							{
								if (!func_218(iVar0))
								{
									if (!unk_0x30F813723591D02E(iVar0, "Getaway_Winched"))
									{
										if (func_212(iVar0) && !func_211())
										{
											if (!unk_0xAF6690C489CC6203(iVar0))
											{
												if (func_70(unk_0x16F2683693E537C9()) == 0x00000000)
												{
													func_69(0x00000011);
												}
												else
												{
													func_69(0x00000012);
												}
												iLocal_51 = iVar0;
												unk_0x73270B3C9CC833FD(iLocal_51, 0x00000001, 0x00000001);
												if (unk_0xA1093ABB024EC9BD(iLocal_51, "GetawayVehicleValid", 0x00000001))
												{
												}
												unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000000);
												unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000008);
												unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000007);
												return;
											}
											else
											{
												func_20(&iLocal_51);
												unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
												unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
												return;
											}
										}
									}
									if (unk_0xA1093ABB024EC9BD(iVar0, "GetawayVehicleValid", 0x00000000))
									{
									}
									unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000007);
								}
								else if (func_210(iVar0))
								{
									iLocal_51 = iVar0;
									unk_0x73270B3C9CC833FD(iLocal_51, 0x00000001, 0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000000);
									unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000008);
									unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000007);
									return;
								}
							}
							else
							{
								func_20(&iLocal_51);
								unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000007);
								unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
						{
							if (!func_85(iLocal_51))
							{
								func_20(&iLocal_51);
								unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000000);
								unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000008);
								unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000007);
							}
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000008))
				{
					iVar1 = unk_0x728870EB733D12A1();
					if (func_85(iVar1))
					{
						if (func_19(unk_0x16F2683693E537C9(), iVar1, 10f, 0x00000001) && !unk_0x30F813723591D02E(iVar1, "Getaway_Winched"))
						{
							iLocal_51 = iVar1;
							unk_0x73270B3C9CC833FD(iLocal_51, 0x00000001, 0x00000001);
							unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000007);
						}
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
				}
			}
			else if (func_85(iLocal_51))
			{
				if (!func_19(unk_0x16F2683693E537C9(), iLocal_51, 80f, 0x00000001))
				{
					if (!unk_0x30F813723591D02E(iLocal_51, "Getaway_Winched"))
					{
						unk_0x5D96D8530B3D0904(&(uLocal_47[func_5(0x00000005)]), 0x00000005);
						unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000008);
					}
					else
					{
						unk_0x0674E58A79778E99(&iLocal_49, 0x00000008);
					}
					func_20(&iLocal_51);
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) != iLocal_51)
					{
						func_20(&iLocal_51);
						func_206(0x00000011, 0x0000002E);
						func_206(0x00000012, 0x0000002E);
						func_206(0x0000000E, 0x0000002E);
						func_176();
					}
					else if (func_219())
					{
						func_20(&iLocal_51);
						func_176();
					}
				}
				else if (!func_209(iLocal_51))
				{
					if (unk_0xA1093ABB024EC9BD(iLocal_51, "GetawayVehicleValid", 0x00000000))
					{
					}
					func_206(0x00000011, 0x0000002E);
					func_206(0x00000012, 0x0000002E);
					func_20(&iLocal_51);
					func_176();
				}
			}
			else
			{
				func_20(&iLocal_51);
				func_176();
			}
		}
	}
}

int func_209(int iParam0)
{
	if (unk_0x7F6DC62EA9922664(iParam0) < 0x0000012C || unk_0x6EE94F60DA2A2273(iParam0) < 300f)
	{
		func_69(0x00000006);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_210(int iParam0)
{
	if (unk_0x30F813723591D02E(iParam0, "GetawayVehicleValid"))
	{
		if (unk_0xB2C7CF65CF9B897C(iParam0, "GetawayVehicleValid"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_211()
{
	if (unk_0x7EBBF23C1CD917AA(unk_0x16F2683693E537C9()))
	{
		if ((unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000000) == unk_0x16F2683693E537C9() || unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001, 0x00000000) == unk_0x16F2683693E537C9()) || unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000002, 0x00000000) == unk_0x16F2683693E537C9())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_212(int iParam0)
{
	if (func_217() && func_213(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_213(int iParam0)
{
	if ((func_215(iParam0) && !func_214(iParam0)) && func_209(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = func_61(iParam0);
	if (iVar0 == 0x00000000)
	{
		func_69(0x00000019);
		return 0x00000001;
	}
	if (iVar0 == 0x00000001)
	{
		func_69(0x0000001A);
		return 0x00000001;
	}
	if (iVar0 == 0x00000002)
	{
		func_69(0x0000001B);
		return 0x00000001;
	}
	if (func_36(iParam0))
	{
		func_69(0x0000000E);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (!func_216(iVar0))
	{
		if (unk_0x00640E3894322620(iVar0) > 0.165f && unk_0x8B8E112F7172CF29(iVar0) > 31f)
		{
			return 0x00000001;
		}
	}
	func_69(0x0000000E);
	return 0x00000000;
}

int func_216(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000009)
	{
		if (iLocal_66[iVar0] == iParam0)
		{
			if (iVar0 == 0x00000000 && !func_250(0x00000021))
			{
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000003);
			}
			else if (iVar0 == 0x00000001 && !func_250(0x00000022))
			{
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000003);
			}
			else
			{
				unk_0x0674E58A79778E99(&iLocal_49, 0x00000003);
			}
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_217()
{
	if ((((unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()) || unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9())) || unk_0xC41A92C76262185C(unk_0x16F2683693E537C9())) || unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9())) || unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9()))
	{
		func_69(0x0000000E);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_218(int iParam0)
{
	if (unk_0x30F813723591D02E(iParam0, "GetawayVehicleValid"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_219()
{
	int iVar0;
	
	if (func_220(&iVar0))
	{
		if (!unk_0x30F813723591D02E(iVar0, "Getaway_Winched"))
		{
			unk_0xA1093ABB024EC9BD(iVar0, "Getaway_Winched", 0x00000001);
			func_69(0x00000010);
			return 0x00000001;
		}
		else if (unk_0xB2C7CF65CF9B897C(iVar0, "Getaway_Winched"))
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_220(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_249(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (func_85(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x2709213DA9C091FF(iVar0))
				{
					iVar2 = unk_0x6D6A428DACBD3A16(iVar0);
					if (unk_0xC844350D5D58C99A(iVar2))
					{
						*uParam0 = unk_0x96A5FE5834B81CE7(iVar2);
						if (func_85(*uParam0))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_221()
{
	switch (iLocal_67)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_73) > 0x000001F4)
				{
					sLocal_70 = unk_0xA5A6BB5EBAD59A21(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
					iLocal_67 = 0x00000001;
				}
				else if (iLocal_73 == 0xFFFFFFFF)
				{
					iLocal_73 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000001:
			if ((unk_0x1C0640BA9A7327B3() - Local_68[iLocal_72 /*261*/].f_103) > 0x000001F4)
			{
				if (!unk_0xEA6BC48857E0AC4C(sLocal_70) && !unk_0xEA6BC48857E0AC4C(Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/]))
				{
					if (unk_0x7F8A39872A07D2CE(sLocal_70, Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/]))
					{
						unk_0x5D96D8530B3D0904(&(Local_68[iLocal_72 /*261*/].f_102), iLocal_71);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_68[iLocal_72 /*261*/].f_102), iLocal_71);
					}
				}
				else
				{
					sLocal_70 = unk_0xA5A6BB5EBAD59A21(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
				}
				iLocal_71++;
				if (iLocal_71 >= (Local_68[iLocal_72 /*261*/].f_101 - 0x00000001))
				{
					iLocal_71 = 0x00000000;
					Local_68[iLocal_72 /*261*/].f_103 = unk_0x1C0640BA9A7327B3();
					iLocal_72++;
					if (iLocal_72 >= 0x00000004)
					{
						iLocal_72 = 0x00000000;
						iLocal_73 = unk_0x1C0640BA9A7327B3();
						iLocal_67 = 0x00000000;
					}
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_A1D7 == 0x0000000F && iLocal_37 != 0x00000003) && unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000005)) && !func_207()) && Global_12B4B == 0xFFFFFFFF) && !func_232()) && !func_84(0x00000009)) || func_103(0x00000023))
	{
		func_231();
		func_229();
		switch (iLocal_39)
		{
			case 0x00000000:
				if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000011))
				{
					iVar0 = 0xFFFFFFFF;
					while (iVar0 < (0x00000024 - 0x00000001))
					{
						iVar0++;
						if (iVar0 != 0x0000002E)
						{
							func_228(uLocal_47[0x00000000], &iVar0);
						}
					}
					unk_0x0674E58A79778E99(&iLocal_49, 0x00000011);
				}
				else
				{
					iVar0 = 0x0000001F;
					while (iVar0 < (0x0000002E - 0x00000001))
					{
						iVar0++;
						if (iVar0 != 0x0000002E)
						{
							func_228(uLocal_47[0x00000001], &iVar0);
						}
					}
					unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000011);
				}
				break;
			
			case 0x00000001:
			case 0x00000002:
			case 0x00000003:
			case 0x00000004:
				func_223(iLocal_46, 0x00000001);
				break;
		}
	}
	else if (((((((Global_A1D7 != 0x0000000F || Global_A1D7 != 0x00000000) || Global_A1D7 != 0x00000002) || Global_A1D7 != 0x00000004) || Global_A1D7 != 0x00000011) || func_207()) || Global_12B4B == 0xFFFFFFFF) || Global_1B065)
	{
		iVar1 = 0x00000000;
		if (func_132())
		{
			iVar1 = 0x00000001;
		}
		else if (Global_1B065)
		{
			iVar1 = 0x00000002;
		}
		if (unk_0xEAE0D21A50E6C7F4(uLocal_47[func_5(iVar1)], iVar1))
		{
			func_223(iVar1, 0x00000000);
		}
	}
}

void func_223(int iParam0, bool bParam1)
{
	switch (iLocal_39)
	{
		case 0x00000001:
			if ((!unk_0xFEBC1E4EC9E001F0() && !func_226(func_89())) && !func_225())
			{
				func_224(func_3(iParam0), 0x00003A98);
				iLocal_39 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_2(func_3(iParam0)))
			{
				fLocal_48 = 0f;
				iLocal_39 = 0x00000003;
			}
			else
			{
				fLocal_48 = (fLocal_48 + unk_0x6117725E0134737F());
				if (fLocal_48 >= 20f)
				{
					iLocal_39 = 0x00000004;
				}
				else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000F))
				{
					func_4(iParam0);
					unk_0x0674E58A79778E99(&iLocal_49, 0x0000000F);
					iLocal_39 = 0x00000004;
				}
			}
			break;
		
		case 0x00000003:
			if (!func_2(func_3(iParam0)))
			{
				if (fLocal_48 >= 7.5f || unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000F))
				{
					func_4(iParam0);
					unk_0x0674E58A79778E99(&iLocal_49, 0x0000000F);
					iLocal_39 = 0x00000004;
				}
				else if (bParam1)
				{
					iLocal_39 = 0x00000000;
				}
				else
				{
					iLocal_39 = 0x00000001;
					fLocal_48 = 0f;
				}
			}
			else
			{
				fLocal_48 = (fLocal_48 + unk_0x6117725E0134737F());
			}
			break;
		
		case 0x00000004:
			fLocal_48 = 0f;
			iLocal_39 = 0x00000000;
			break;
	}
}

void func_224(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_225()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (func_55(iParam0))
	{
		if (func_227(iParam0))
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_1B416.f_1E03.f_88)
			{
				if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 == 0x00000005)
				{
					return 0x00000001;
				}
				iVar0++;
			}
		}
	}
	return 0x00000000;
}

int func_227(int iParam0)
{
	int iVar0;
	
	if (!func_55(iParam0))
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar0 /*14*/].f_2, iParam0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_2FD[iVar0 /*10*/].f_2, iParam0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_6(*iParam1);
	if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000003))
		{
			iLocal_46 = *iParam1;
			iLocal_39 = 0x00000001;
			fLocal_48 = 0f;
			func_4(0x0000002C);
			func_4(0x0000002D);
			iLocal_76 = unk_0x1C0640BA9A7327B3();
			*iParam1 = 0x0000002E;
		}
		else if (0x0000000E == iVar0)
		{
			func_4(iVar0);
			*iParam1 = 0x0000002E;
		}
		else
		{
			iLocal_46 = *iParam1;
			iLocal_39 = 0x00000001;
			fLocal_48 = 0f;
			*iParam1 = 0x0000002E;
		}
	}
}

void func_229()
{
	if (iLocal_37 == 0x00000000 || iLocal_37 == 0x00000001)
	{
		switch (iLocal_38)
		{
			case 0x00000000:
				if (func_230(func_3(0x00000003), 0x00000000, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					if (((((((!func_2(func_3(0x00000007)) && !func_2(func_3(0x00000008))) && !func_2(func_3(0x0000000A))) && !func_2(func_3(0x0000000B))) && !func_2(func_3(0x0000000C))) && !func_2(func_3(0x0000000D))) && !func_132()) && !Global_1AEC6)
					{
						unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
						unk_0xA37A90C62806D848(0x00000001);
					}
					iLocal_38 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
				{
					if (iLocal_42 == 0x00000002)
					{
						if (iLocal_37 == 0x00000001)
						{
							if (func_85(iLocal_51))
							{
								func_69(0x00000003);
								func_1(0x00000003, 0x00000001);
							}
						}
						iLocal_38 = 0x00000002;
					}
					else
					{
						if (func_85(iLocal_51))
						{
							func_69(0x00000003);
							func_1(0x00000003, 0x00000001);
						}
						iLocal_38 = 0x00000002;
					}
				}
				else
				{
					iLocal_38 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					if (func_2(func_3(0x00000003)))
					{
						unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
						unk_0xA37A90C62806D848(0x00000001);
					}
					iLocal_38 = 0x00000000;
				}
				break;
			}
	}
}

bool func_230(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_231()
{
	if ((((!func_103(func_104()) && !func_103(0x00000023)) && !func_226(func_89())) && !func_225()) && !func_117())
	{
		if (iLocal_77 < 0x00000002 && (unk_0x1C0640BA9A7327B3() - iLocal_76) > 0x00075300)
		{
			if (iLocal_42 != 0x00000002)
			{
				func_69(0x0000002C);
			}
			else
			{
				func_69(0x0000002D);
			}
			iLocal_77++;
		}
	}
}

int func_232()
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

void func_233()
{
	if (func_75())
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000002))
		{
			if (func_85(iLocal_51))
			{
				func_21(iLocal_51, vLocal_52, fLocal_53, 0x00000019, 0x00000001);
				func_20(&iLocal_51);
			}
			unk_0x0674E58A79778E99(&iLocal_49, 0x00000002);
		}
		func_1(0x0000002E, 0x00000001);
		func_258(0x00000000);
	}
}

void func_234()
{
	if (!func_239())
	{
		if (!func_232())
		{
			if (unk_0x0F1CCD77290EE12F())
			{
				if (!unk_0x7BCE0E6DD4A1F749())
				{
					func_236();
				}
			}
		}
	}
	else if (iLocal_37 != 0x00000003)
	{
		func_235();
	}
}

void func_235()
{
	if (iLocal_37 != 0x00000004)
	{
		if (iLocal_37 != 0x00000002)
		{
			if (unk_0xFEBC1E4EC9E001F0() && !Global_1AEC6)
			{
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000F);
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
			{
				if (func_85(iLocal_51))
				{
					unk_0xD2DE0C6B4149D1D2(iLocal_51, 0x00000000);
				}
				func_20(&iLocal_51);
				func_176();
				if (iLocal_42 != 0x00000002)
				{
					vLocal_50 = { 0f, 0f, 0f };
				}
				unk_0x0674E58A79778E99(&iLocal_49, 0x00000008);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000000))
		{
			func_21(iLocal_51, vLocal_52, fLocal_53, 0x00000019, 0x00000001);
			if (func_85(iLocal_51))
			{
				unk_0xD2DE0C6B4149D1D2(iLocal_51, 0x00000000);
			}
			func_20(&iLocal_51);
			func_176();
		}
		if (unk_0x01C309A4BDFCAD82("GETAWY", 0x00000005))
		{
			unk_0x11CCD0ACA866C6C5(0x00000005, 0x00000000);
			unk_0x0674E58A79778E99(&iLocal_49, 0x00000004);
			unk_0x0674E58A79778E99(&iLocal_49, 0x00000005);
			func_258(0x00000000);
			if (func_132())
			{
				func_1(0x00000001, 0x00000001);
			}
			else
			{
				func_1(0x00000000, 0x00000001);
			}
		}
		iLocal_37 = 0x00000003;
	}
}

void func_236()
{
	func_238();
	if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000004))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000010))
		{
			unk_0xD7992BEF7A9D109E("GETAWY", 0x00000005);
			if (unk_0x01C309A4BDFCAD82("GETAWY", 0x00000005))
			{
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000005);
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000005))
			{
				func_237();
				iLocal_39 = 0x00000000;
				unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
				unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
				unk_0x0674E58A79778E99(&iLocal_49, 0x00000001);
				if (func_2(func_3(0x00000000)))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_4(0x00000000);
				iLocal_37 = Global_1B416.f_273C.f_80;
			}
		}
	}
}

void func_237()
{
	if (!func_103(func_104()))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000C))
		{
			if (func_101())
			{
				if (iLocal_42 != 0x00000002)
				{
					func_69(0x0000002C);
				}
				else
				{
					func_69(0x0000002D);
				}
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000C);
			}
		}
	}
}

void func_238()
{
	if (!unk_0xF20C10E87A52F9A6(0x00000005))
	{
		unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000004);
	}
}

int func_239()
{
	if (iLocal_42 != 0x00000002)
	{
		if (iLocal_42 == 0x00000001 && func_89() == 0x00000002)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000010))
			{
				unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000010);
			}
			return 0x00000001;
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x00000010))
		{
			unk_0x0674E58A79778E99(&iLocal_49, 0x00000010);
		}
		if (func_240())
		{
			return 0x00000000;
		}
	}
	else if (func_103(0x00000023))
	{
		return 0x00000000;
	}
	else if (func_240())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_240()
{
	if (((((Global_A1D7 == 0x0000000F && !func_207()) && Global_12B4B == 0xFFFFFFFF) && !func_132()) && !func_241(0x42480000)) && !Global_1B065)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_241(float fParam0)
{
	if (iLocal_42 == 0x00000001)
	{
		if (func_76(unk_0x16F2683693E537C9(), Global_171E2[0x00000001 /*15*/], fParam0))
		{
			return 0x00000001;
		}
	}
	else if (iLocal_42 == 0x00000002)
	{
		if (func_76(unk_0x16F2683693E537C9(), Global_171E2[0x00000000 /*15*/], fParam0))
		{
			return 0x00000001;
		}
	}
	else if (iLocal_42 == 0x00000000)
	{
		if (func_76(unk_0x16F2683693E537C9(), Global_171E2[0x00000003 /*15*/], fParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_242()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000D))
	{
		if (func_243())
		{
			unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000D);
		}
	}
	else if (!func_243())
	{
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000007);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000000);
		unk_0x0674E58A79778E99(&iLocal_49, 0x00000001);
		unk_0x0674E58A79778E99(&iLocal_49, 0x0000000D);
	}
}

int func_243()
{
	if (((((func_244(0x00000027) || func_244(0x00000028)) || func_244(0x00000029)) || func_244(0x0000002A)) || func_244(0x0000002B)) || func_244(0x0000002C))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_244(int iParam0)
{
	return func_245(iParam0, 0x00000006, 0x00000001);
}

int func_245(int iParam0, int iParam1, bool bParam2)
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
		if (func_96() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_246(func_248(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_246(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_247(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_247(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_99();
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

int func_248(int iParam0)
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

int func_249(int iParam0)
{
	if (func_86(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_250(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_251(int iParam0)
{
	iLocal_42 = iParam0;
	if (iLocal_42 == 0x00000000)
	{
		sLocal_79 = "FBIPRAU";
	}
	else if (iLocal_42 == 0x00000001)
	{
		sLocal_79 = "AHFAUD";
	}
	else if (iLocal_42 == 0x00000002)
	{
		sLocal_79 = "FHFAUD";
	}
	iLocal_66[0x00000000] = joaat("trash");
	iLocal_66[0x00000001] = joaat("towtruck");
	iLocal_66[0x00000002] = joaat("ambulance");
	iLocal_66[0x00000003] = joaat("barracks2");
	iLocal_66[0x00000004] = joaat("stretch");
	iLocal_66[0x00000005] = joaat("phantom");
	iLocal_66[0x00000006] = joaat("packer");
	iLocal_66[0x00000007] = joaat("blazer");
	iLocal_66[0x00000008] = joaat("blazer2");
	if (iLocal_42 != 0x00000000)
	{
		iLocal_66[0x00000009] = joaat("sentinel2");
	}
	else
	{
		iLocal_66[0x00000009] = 0x00000000;
	}
	func_254();
	func_252();
	unk_0x5D96D8530B3D0904(&iLocal_49, 0x00000011);
	iLocal_76 = unk_0x1C0640BA9A7327B3();
}

void func_252()
{
	sLocal_45[0x00000000] = "AM_H_FBIC1A";
	sLocal_45[0x00000001] = "AM_H_FBIC1B";
	sLocal_45[0x00000002] = "AM_H_FBIC1C";
	sLocal_45[0x00000003] = "PRC_WANT";
	sLocal_45[0x00000004] = "PRC_DROPOFF";
	sLocal_45[0x00000005] = "PRC_INVALVEH";
	sLocal_45[0x00000006] = "PRC_HEALTH";
	sLocal_45[0x00000007] = func_253(0x00000007);
	sLocal_45[0x00000008] = func_253(0x00000008);
	sLocal_45[0x00000009] = "PRC_USEFIRST";
	sLocal_45[0x0000000A] = func_253(0x0000000A);
	sLocal_45[0x0000000B] = func_253(0x0000000B);
	sLocal_45[0x0000000D] = func_253(0x0000000D);
	sLocal_45[0x0000000C] = func_253(0x0000000C);
	sLocal_45[0x0000000E] = "PRC_UNUSE";
	sLocal_45[0x0000000F] = "PRC_SEATS";
	sLocal_45[0x00000010] = "PRC_CBOBVAL";
	sLocal_45[0x00000011] = func_253(0x00000011);
	sLocal_45[0x00000012] = func_253(0x00000012);
	sLocal_45[0x00000014] = func_253(0x00000014);
	sLocal_45[0x00000015] = "PRC_PUBAREA";
	sLocal_45[0x00000016] = "PRC_LAWAREA";
	sLocal_45[0x00000017] = "PRC_RESAREA";
	sLocal_45[0x00000018] = "PRC_STOP";
	sLocal_45[0x00000019] = "PRC_OWNEDM";
	sLocal_45[0x0000001A] = "PRC_OWNEDF";
	sLocal_45[0x0000001B] = "PRC_OWNEDT";
	sLocal_45[0x0000001C] = "PRC_SECROUTE";
	sLocal_45[0x0000001D] = "PRC_CLOSELOT";
	sLocal_45[0x0000001E] = "PRC_CLOSELES";
	sLocal_45[0x0000001F] = "PRC_CLSAGNT";
	sLocal_45[0x00000020] = "PRC_CLOSESAFE_M";
	sLocal_45[0x00000021] = "PRC_CLOSESAFE_F";
	sLocal_45[0x00000022] = "PRC_CLOSESAFE_T";
	sLocal_45[0x00000023] = "PRC_PEDS";
	sLocal_45[0x00000024] = "PRC_WATER";
	sLocal_45[0x00000025] = "PRC_OBST";
	sLocal_45[0x00000026] = "PRC_OBSTVEH";
	sLocal_45[0x00000027] = "PRC_UPDWN";
	sLocal_45[0x00000028] = "PRC_NEARROAD";
	sLocal_45[0x00000029] = "PRC_ONROAD";
	sLocal_45[0x00000013] = "PRC_PLAN";
	sLocal_45[0x0000002A] = "PRC_TOOSTEEP";
	sLocal_45[0x0000002B] = "PRC_UNEVEN";
	sLocal_45[0x0000002C] = "PRC_REMIND";
	sLocal_45[0x0000002D] = "PRC_REMINDA";
}

char* func_253(int iParam0)
{
	char* sVar0;
	
	if (iLocal_42 == 0x00000000)
	{
		if (iParam0 == 0x00000011)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 0x00000012)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 0x0000000A)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 0x0000000B)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 0x0000000D)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 0x0000000C)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 0x00000007)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 0x00000008)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 0x00000014)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_42 == 0x00000001)
	{
		if (iParam0 == 0x00000011)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 0x00000012)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 0x0000000A)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 0x0000000B)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 0x0000000D)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 0x0000000C)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 0x00000007)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 0x00000008)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 0x00000014)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_42 == 0x00000002)
	{
		if (iParam0 == 0x00000011)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 0x00000012)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 0x0000000A)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 0x0000000B)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 0x0000000D)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 0x0000000C)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 0x00000007)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 0x00000008)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 0x00000014)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_254()
{
	sLocal_69[0x00000000] = "ARMYB";
	sLocal_69[0x00000001] = "AIRP";
	sLocal_69[0x00000002] = "STAD";
	sLocal_69[0x00000003] = "TERMINA";
	sLocal_69[0x00000004] = "MOVIE";
	sLocal_69[0x00000005] = "JAIL";
	sLocal_69[0x00000006] = "OCEANA";
	sLocal_69[0x00000007] = "GOLF";
	sLocal_69[0x00000008] = "HORS";
	sLocal_69[0x00000009] = "MTCHIL";
	sLocal_69[0x0000000A] = "MTGORDO";
	sLocal_69[0x0000000B] = "SANCHIA";
	sLocal_69[0x0000000C] = "TATAMO";
	Local_68[0x00000000 /*261*/][0x00000000 /*8*/] = { func_255("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_68[0x00000000 /*261*/][0x00000001 /*8*/] = { func_255("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_68[0x00000000 /*261*/][0x00000002 /*8*/] = { func_255("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_68[0x00000000 /*261*/][0x00000003 /*8*/] = { func_255("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_68[0x00000000 /*261*/][0x00000004 /*8*/] = { func_255("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_68[0x00000000 /*261*/][0x00000005 /*8*/] = { func_255("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_68[0x00000000 /*261*/][0x00000006 /*8*/] = { func_255("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_68[0x00000000 /*261*/][0x00000007 /*8*/] = { func_255("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_68[0x00000000 /*261*/][0x00000008 /*8*/] = { func_255("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_68[0x00000000 /*261*/][0x00000009 /*8*/] = { func_255("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_68[0x00000000 /*261*/][0x0000000A /*8*/] = { func_255("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_68[0x00000000 /*261*/][0x0000000B /*8*/] = { func_255("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_68[0x00000000 /*261*/][0x0000000D /*8*/] = { func_255("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_68[0x00000000 /*261*/][0x0000000E /*8*/] = { func_255("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000000 /*261*/][0x0000000F /*8*/] = { func_255("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000000 /*261*/][0x00000010 /*8*/] = { func_255("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000000 /*261*/][0x00000011 /*8*/] = { func_255("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000000 /*261*/][0x00000012 /*8*/] = { func_255("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000000 /*261*/][0x00000013 /*8*/] = { func_255("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000000 /*261*/][0x00000014 /*8*/] = { func_255("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_68[0x00000000 /*261*/][0x00000015 /*8*/] = { func_255("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_68[0x00000000 /*261*/][0x00000016 /*8*/] = { func_255("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_68[0x00000000 /*261*/][0x00000017 /*8*/] = { func_255("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_68[0x00000000 /*261*/][0x00000018 /*8*/] = { func_255("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_68[0x00000000 /*261*/][0x00000019 /*8*/] = { func_255("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_68[0x00000000 /*261*/][0x0000001A /*8*/] = { func_255("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_68[0x00000000 /*261*/][0x0000001B /*8*/] = { func_255("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_68[0x00000000 /*261*/][0x0000001C /*8*/] = { func_255("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_68[0x00000000 /*261*/][0x0000001D /*8*/] = { func_255("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_68[0x00000000 /*261*/][0x0000001E /*8*/] = { func_255("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_68[0x00000000 /*261*/][0x0000001F /*8*/] = { func_255("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_68[0x00000000 /*261*/].f_104 = 0x00000000;
	Local_68[0x00000000 /*261*/].f_101 = 0x00000020;
	Local_68[0x00000002 /*261*/][0x00000000 /*8*/] = { func_255("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_68[0x00000002 /*261*/][0x00000001 /*8*/] = { func_255("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_68[0x00000002 /*261*/][0x00000002 /*8*/] = { func_255("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_68[0x00000002 /*261*/][0x00000003 /*8*/] = { func_255("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_68[0x00000002 /*261*/][0x00000004 /*8*/] = { func_255("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_68[0x00000002 /*261*/][0x00000005 /*8*/] = { func_255("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000002 /*261*/][0x00000006 /*8*/] = { func_255("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000002 /*261*/].f_104 = 0x00000002;
	Local_68[0x00000002 /*261*/].f_101 = 0x00000007;
	Local_68[0x00000001 /*261*/][0x00000000 /*8*/] = { func_255("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_68[0x00000001 /*261*/][0x00000001 /*8*/] = { func_255("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_68[0x00000001 /*261*/][0x00000002 /*8*/] = { func_255("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_68[0x00000001 /*261*/][0x00000003 /*8*/] = { func_255("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_68[0x00000001 /*261*/][0x00000004 /*8*/] = { func_255("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_68[0x00000001 /*261*/][0x00000005 /*8*/] = { func_255("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_68[0x00000001 /*261*/][0x00000006 /*8*/] = { func_255("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_68[0x00000001 /*261*/][0x00000007 /*8*/] = { func_255("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_68[0x00000001 /*261*/][0x00000008 /*8*/] = { func_255("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_68[0x00000001 /*261*/][0x00000009 /*8*/] = { func_255("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_68[0x00000001 /*261*/][0x0000000A /*8*/] = { func_255("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_68[0x00000001 /*261*/][0x0000000B /*8*/] = { func_255("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_68[0x00000001 /*261*/][0x0000000C /*8*/] = { func_255("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_68[0x00000001 /*261*/][0x0000000D /*8*/] = { func_255("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_68[0x00000001 /*261*/][0x0000000E /*8*/] = { func_255("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_68[0x00000001 /*261*/][0x0000000F /*8*/] = { func_255("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_68[0x00000001 /*261*/][0x00000010 /*8*/] = { func_255("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_68[0x00000001 /*261*/][0x00000011 /*8*/] = { func_255("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_68[0x00000001 /*261*/][0x00000012 /*8*/] = { func_255("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_68[0x00000001 /*261*/][0x00000013 /*8*/] = { func_255("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_68[0x00000001 /*261*/][0x00000014 /*8*/] = { func_255("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_68[0x00000001 /*261*/][0x00000015 /*8*/] = { func_255("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_68[0x00000001 /*261*/].f_104 = 0x00000001;
	Local_68[0x00000001 /*261*/].f_101 = 0x00000016;
	Local_68[0x00000003 /*261*/][0x00000000 /*8*/] = { func_255("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000003 /*261*/][0x00000001 /*8*/] = { func_255("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000003 /*261*/][0x00000002 /*8*/] = { func_255("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000003 /*261*/][0x00000003 /*8*/] = { func_255("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0x00000003 /*261*/][0x00000004 /*8*/] = { func_255("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_68[0x00000003 /*261*/][0x00000005 /*8*/] = { func_255("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_68[0x00000003 /*261*/][0x00000006 /*8*/] = { func_255("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_68[0x00000003 /*261*/][0x00000007 /*8*/] = { func_255("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_68[0x00000003 /*261*/][0x00000008 /*8*/] = { func_255("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_68[0x00000003 /*261*/][0x00000009 /*8*/] = { func_255("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_68[0x00000003 /*261*/][0x0000000A /*8*/] = { func_255("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_68[0x00000003 /*261*/][0x0000000B /*8*/] = { func_255("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_68[0x00000003 /*261*/][0x0000000C /*8*/] = { func_255("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_68[0x00000003 /*261*/][0x0000000D /*8*/] = { func_255("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_68[0x00000003 /*261*/][0x0000000E /*8*/] = { func_255("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_68[0x00000003 /*261*/][0x0000000F /*8*/] = { func_255("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_68[0x00000003 /*261*/][0x00000010 /*8*/] = { func_255("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_68[0x00000003 /*261*/][0x00000011 /*8*/] = { func_255("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_68[0x00000003 /*261*/][0x00000012 /*8*/] = { func_255("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_68[0x00000003 /*261*/][0x00000013 /*8*/] = { func_255("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_68[0x00000003 /*261*/][0x00000014 /*8*/] = { func_255("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_68[0x00000003 /*261*/][0x00000015 /*8*/] = { func_255("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_68[0x00000003 /*261*/][0x00000016 /*8*/] = { func_255("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_68[0x00000003 /*261*/][0x00000017 /*8*/] = { func_255("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_68[0x00000003 /*261*/][0x00000018 /*8*/] = { func_255("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_68[0x00000003 /*261*/][0x00000019 /*8*/] = { func_255("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_68[0x00000003 /*261*/][0x0000001A /*8*/] = { func_255("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_68[0x00000003 /*261*/][0x0000001B /*8*/] = { func_255("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_68[0x00000003 /*261*/][0x0000001C /*8*/] = { func_255("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_68[0x00000003 /*261*/][0x0000001D /*8*/] = { func_255("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_68[0x00000003 /*261*/][0x0000001E /*8*/] = { func_255("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_68[0x00000003 /*261*/].f_104 = 0x00000003;
	Local_68[0x00000003 /*261*/].f_101 = 0x0000001F;
	if (func_249(unk_0x16F2683693E537C9()))
	{
		sLocal_70 = unk_0xA5A6BB5EBAD59A21(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
	}
}

struct<8> func_255(char* sParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	struct<8> Var0;
	
	Var0 = sParam0;
	Var0.f_1 = { vParam1 };
	Var0.f_4 = { vParam2 };
	Var0.f_7 = fParam3;
	return Var0;
}

void func_256(int iParam0, bool bParam1)
{
	if (func_85(iLocal_51))
	{
		func_20(&iLocal_51);
	}
	if (!bParam1)
	{
		func_257(iParam0);
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_258(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_42 == 0x00000002)
		{
			sVar0 = "PRC_MARKVEH";
			func_266(sVar0);
		}
		else if (iLocal_42 == 0x00000000)
		{
			if (func_89() == 0x00000000)
			{
				func_265(sVar0);
				func_264(sVar0);
			}
			else if (func_89() == 0x00000001)
			{
				func_263(sVar0);
			}
			else
			{
				func_263(sVar0);
			}
		}
		else if (iLocal_42 == 0x00000001)
		{
			if (func_89() == 0x00000000)
			{
				func_265(sVar0);
				func_266(sVar0);
			}
			else if (func_89() == 0x00000001)
			{
				func_263(sVar0);
				func_266(sVar0);
			}
			else
			{
				func_263(sVar0);
				func_266(sVar0);
			}
		}
		unk_0x5D96D8530B3D0904(&iLocal_49, 0x0000000B);
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_49, 0x0000000B))
	{
		func_262();
		func_261();
		func_260();
		func_259();
		unk_0x0674E58A79778E99(&iLocal_49, 0x0000000B);
	}
}

void func_259()
{
	StringCopy(&(Global_1C1A[0x00000003 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_260()
{
	StringCopy(&(Global_1C1A[0x00000002 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_261()
{
	StringCopy(&(Global_1C1A[0x00000001 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_262()
{
	StringCopy(&(Global_1C1A[0x00000000 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_263(char* sParam0)
{
	StringCopy(&(Global_1C1A[0x00000000 /*16*/].f_8), sParam0, 32);
}

void func_264(char* sParam0)
{
	StringCopy(&(Global_1C1A[0x00000002 /*16*/].f_8), sParam0, 32);
}

void func_265(char* sParam0)
{
	StringCopy(&(Global_1C1A[0x00000001 /*16*/].f_8), sParam0, 32);
}

void func_266(char* sParam0)
{
	StringCopy(&(Global_1C1A[0x00000003 /*16*/].f_8), sParam0, 32);
}

int func_267(var uParam0, int iParam1)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!func_52(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam1))
	{
		return 0x00000000;
	}
	else
	{
		func_59(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), uParam0);
	}
	return 0x00000001;
}

float func_268(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0f;
	}
	if (!func_52(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_126B1.f_22B[0x00000000 /*21*/].f_3;
}

Vector3 func_269(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0f, 0f, 0f;
	}
	if (!func_52(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_126B1.f_22B[0x00000000 /*21*/];
}

int func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
	return 0x00000001;
}

