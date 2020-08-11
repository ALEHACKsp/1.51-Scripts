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
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_84 = 20;
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
	int iLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	bool bLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	vector3 vLocal_218 = { 0f, 0f, 0f };
	vector3 vLocal_219 = { 0f, 0f, 0f };
	vector3 vLocal_220 = { 0f, 0f, 0f };
	int iLocal_221 = 0;
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
	vLocal_218 = { 0f, 0f, 0f };
	vLocal_219 = { vLocal_218 };
	vLocal_220 = { vLocal_218 };
	iLocal_223 = 0x00000003;
	iLocal_228 = 0x000060F2;
	iLocal_231 = 0x000060F0;
	if (unk_0x2EBF608FFE6CA406(0x000000B2))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_82();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (!func_81())
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if (func_80(0x00000000))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if (func_79(0x0000000E))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if ((!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000000) && func_73() == 0x00000001) && !func_72())
		{
			func_1();
		}
		else
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
}

void func_1()
{
	switch (iLocal_221)
	{
		case 0x00000000:
			func_46();
			func_42();
			func_32();
			func_30();
			func_21();
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000001) && !bLocal_214)
			{
				iLocal_221++;
			}
			break;
		
		case 0x00000001:
			if (func_17(&iLocal_208) > 5f)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000003))
				{
					func_14(0x0000001C, iLocal_83[0x00000014], 0x00000001);
					func_7(0x0000001C);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000003);
					func_5(0x0000003F, 0x00000001);
					iLocal_221++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_3(0x0000003F))
			{
				iLocal_221++;
			}
			break;
		
		case 0x00000003:
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000000);
			func_2();
			break;
	}
}

int func_2()
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

bool func_3(int iParam0)
{
	return func_4(iParam0, 0x00000000);
}

bool func_4(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0x00000000))
		{
			func_6(iParam0, 0x00000001, 0x00000000);
			func_6(iParam0, 0x00000002, 0x00000000);
			func_6(iParam0, 0x00000003, 0x00000000);
			func_6(iParam0, 0x00000004, 0x00000000);
			func_6(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_6(iParam0, 0x00000000, 0x00000000);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)
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

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	iVar1 = Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/];
	iVar2 = (Global_CACB[iVar0 /*203*/].f_9 - 0x00000001);
	if (!Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_A677[iVar4 /*12*/].f_1)}, 0x00000004);
	}
	else
	{
		Var3 = { Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 0x0000001C)
	{
		switch (iVar1)
		{
			case 0x000000F9:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 0x0000010D:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_8(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, sVar5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		switch (Global_A677[iVar1 /*12*/].f_3)
		{
			case 0x00000000:
				func_8(0x00000000, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000001:
				func_8(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000002:
				func_8(0x00000002, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_73();
	bVar1 = 0x00000000;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 0x00000048:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			
			case 0x00000049:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			
			case 0x0000004A:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x1E64CE678ED5F61E(sParam3);
				if (!unk_0xEA6BC48857E0AC4C(sParam4))
				{
					unk_0x6B012227B3921E18(sParam4);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam5))
				{
					unk_0x6B012227B3921E18(sParam5);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam6))
				{
					unk_0x6B012227B3921E18(sParam6);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x6B012227B3921E18(sParam7);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam8))
				{
					unk_0x6B012227B3921E18(sParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam9))
				{
					unk_0x6B012227B3921E18(sParam9);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam10))
				{
					unk_0x6B012227B3921E18(sParam10);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam11))
				{
					unk_0x6B012227B3921E18(sParam11);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam12))
				{
					unk_0x6B012227B3921E18(sParam12);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam13))
				{
					unk_0x6B012227B3921E18(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_9(unk_0x1AEA174B291A9906(&cVar2, &cVar2, 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_10(iParam1)), 0x00000000));
		}
		else
		{
			func_9(unk_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_10(iParam1)), 0x00000000));
		}
		switch (Global_4C1E)
		{
			case 0x00000000:
				StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
				Global_A66F++;
				if (Global_A66F > 0x00000010)
				{
					Global_A66F = 0x00000010;
				}
				break;
			
			case 0x00000002:
				StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
				Global_A671++;
				if (Global_A671 > 0x00000010)
				{
					Global_A671 = 0x00000010;
				}
				break;
			
			case 0x00000001:
				StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
				Global_A670++;
				if (Global_A670 > 0x00000010)
				{
					Global_A670 = 0x00000010;
				}
				break;
			
			default:
				StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Notification", &Global_4C13, 0x00000001);
	}
}

void func_9(int iParam0)
{
	Global_A672[Global_A676] = iParam0;
	Global_5567 = 0x00000001;
	Global_5566 = iParam0;
	Global_A676++;
	if (Global_A676 == 0x00000003)
	{
		Global_A676 = 0x00000000;
	}
}

char* func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "EMSTR_0";
		
		case 0x00000003:
			return "EMSTR_3";
		
		case 0x00000001:
			return "EMSTR_6";
		
		case 0x00000002:
			return "EMSTR_9";
		
		case 0x00000004:
			return "EMSTR_12";
		
		case 0x00000005:
			return "EMSTR_29";
		
		case 0x00000006:
			return "EMSTR_36";
		
		case 0x00000007:
			return "EMSTR_39";
		
		case 0x00000008:
			return "EMSTR_52";
		
		case 0x00000009:
			return "EMSTR_55";
		
		case 0x0000000A:
			return "EMSTR_58";
		
		case 0x0000000B:
			return "EMSTR_78";
		
		case 0x0000000C:
			return "EMSTR_81";
		
		case 0x0000000D:
			return "EMSTR_84";
		
		case 0x0000000E:
			return "EMSTR_87";
		
		case 0x0000000F:
			return "EMSTR_106";
		
		case 0x00000010:
			return "EMSTR_114";
		
		case 0x00000011:
			return "EMSTR_142";
		
		case 0x00000012:
			return "EMSTR_145";
		
		case 0x00000013:
			return "EMSTR_152";
		
		case 0x00000014:
			return "EMSTR_157";
		
		case 0x00000015:
			return "EMSTR_163";
		
		case 0x00000016:
			return "EMSTR_182";
		
		case 0x00000017:
			return "EMSTR_187";
		
		case 0x00000018:
			return "EMSTR_190";
		
		case 0x00000019:
			return "EMSTR_206";
		
		case 0x0000001A:
			return "EMSTR_219";
		
		case 0x0000001B:
			return "EMSTR_226";
		
		case 0x0000001C:
			return "EMSTR_233";
		
		case 0x0000001D:
			return "EMSTR_242";
		
		case 0x0000001E:
			return "EMSTR_249";
		
		case 0x0000001F:
			return "EMSTR_262";
		
		case 0x00000020:
			return "EMSTR_269";
		
		case 0x00000021:
			return "EMSTR_319";
		
		case 0x00000022:
			return "EMSTR_340";
		
		case 0x00000023:
			return "EMSTR_348";
		
		case 0x00000024:
			return "EMSTR_182";
		
		case 0x00000025:
			return "EMSTR_357";
		
		case 0x00000026:
			return "EMSTR_360";
		
		case 0x00000027:
			return "EMSTR_369";
		
		case 0x00000028:
			return "EMSTR_376";
		
		case 0x00000029:
			return "EMSTR_379";
		
		case 0x0000002A:
			return "EMSTR_382";
		
		case 0x0000002B:
			return "EMSTR_384";
		
		case 0x0000002C:
			return "EMSTR_387";
		
		case 0x0000002D:
			return "EMSTR_390";
		
		case 0x0000002E:
			return "EMSTR_393";
		
		case 0x0000002F:
			return "EMSTR_396";
		
		case 0x00000030:
			return "EMSTR_399";
		
		case 0x00000031:
			return "EMSTR_402";
		
		case 0x00000032:
			return "EMSTR_405";
		
		case 0x00000033:
			return "EMSTR_408";
		
		case 0x00000034:
			return "EMSTR_411";
		
		case 0x00000035:
			return "EMSTR_414";
		
		case 0x00000036:
			return "EMSTR_465";
		
		case 0x00000037:
			return "EMSTR_468";
		
		case 0x00000038:
			return "EMSTR_489";
		
		case 0x00000039:
			return "EMSTR_492";
		
		case 0x0000003A:
			return "EMSTR_495";
		
		case 0x0000003B:
			return "EMSTR_498";
		
		case 0x0000003C:
			return "EMSTR_501";
		
		case 0x0000003D:
			return "EMSTR_504";
		
		case 0x0000003E:
			return "EMSTR_507";
		
		case 0x0000003F:
			return "EMSTR_640";
		
		case 0x00000040:
			return "EMSTR_643";
		
		case 0x00000041:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_11(int iParam0, int iParam1)
{
	*iParam1 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000000 /*29*/].f_7));
		
		case 0x00000001:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000001 /*29*/].f_7));
		
		case 0x00000002:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000002 /*29*/].f_7));
		
		case 0x00000007:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000C /*29*/].f_7));
		
		case 0x00000004:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003C /*29*/].f_7));
		
		case 0x00000006:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003E /*29*/].f_7));
		
		case 0x00000003:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000E /*29*/].f_7));
		
		case 0x00000010:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000061 /*29*/].f_7));
		
		case 0x00000013:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000063 /*29*/].f_7));
		
		case 0x0000000F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000060 /*29*/].f_7));
		
		case 0x0000003F:
			return "CHAR_CARSITE2";
		
		case 0x00000040:
			return "CHAR_BOATSITE";
		
		case 0x00000008:
			return "CHAR_BANK_MAZE";
		
		case 0x00000009:
			return "CHAR_BANK_FLEECA";
		
		case 0x0000000A:
			return "CHAR_BANK_BOL";
		
		case 0x00000015:
			return "CHAR_MINOTAUR";
		
		case 0x00000019:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000F /*29*/].f_7));
		
		case 0x0000001A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000001E /*29*/].f_7));
		
		case 0x0000001B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000011 /*29*/].f_7));
		
		case 0x0000001D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000014 /*29*/].f_7));
		
		case 0x0000001E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002B /*29*/].f_7));
		
		case 0x0000001F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002C /*29*/].f_7));
		
		case 0x00000020:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000013 /*29*/].f_7));
		
		case 0x00000022:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000028 /*29*/].f_7));
		
		case 0x00000024:
			return unk_0x19C9F30A7697B43C("CELL_E_381");
		
		case 0x00000026:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000040 /*29*/].f_7));
		
		case 0x00000005:
			return "CHAR_EPSILON";
		
		case 0x0000000D:
			return "CHAR_MILSITE";
		
		case 0x0000000B:
			return "CHAR_CARSITE";
		
		case 0x0000000E:
			return "CHAR_BOATSITE";
		
		case 0x0000000C:
			return "CHAR_PLANESITE";
		
		case 0x00000018:
			return "CHAR_DR_FRIEDLANDER";
		
		case 0x00000037:
			return "CHAR_CARSITE2";
		
		case 0x00000036:
			return "CHAR_BIKESITE";
		
		case 0x00000027:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007A /*29*/].f_7));
		
		case 0x00000028:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007D /*29*/].f_7));
		
		case 0x00000029:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000071 /*29*/].f_7));
		
		case 0x0000002A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007E /*29*/].f_7));
		
		case 0x0000002B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007F /*29*/].f_7));
		
		case 0x0000002C:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007C /*29*/].f_7));
		
		case 0x0000002D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000072 /*29*/].f_7));
		
		case 0x0000002E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000073 /*29*/].f_7));
		
		case 0x0000002F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000074 /*29*/].f_7));
		
		case 0x00000030:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007B /*29*/].f_7));
		
		case 0x00000031:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000075 /*29*/].f_7));
		
		case 0x00000032:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000076 /*29*/].f_7));
		
		case 0x00000033:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000077 /*29*/].f_7));
		
		case 0x00000034:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000078 /*29*/].f_7));
		
		case 0x00000035:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000079 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0x00000000;
	return "ERROR!";
}

struct<16> func_12(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (Global_CACB[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_CACB[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_CACB[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != 0xFFFFFFFF && iVar2 != 0xFFFFFFFF)
	{
		return iVar1;
	}
	return 0xFFFFFFFF;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 0x00000001);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000004)
	{
		return 0x00000000;
	}
	Global_CACB[iVar0 /*203*/].f_2 = iParam0;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/].f_1 = 0x00000000;
	Global_CACB[iVar0 /*203*/].f_A[Global_CACB[iVar0 /*203*/].f_9 /*48*/].f_6 = 0x00000000;
	Global_CACB[iVar0 /*203*/].f_9++;
	iVar1 = 0x00000000;
	iVar2 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 0xFFFFFFFF)
		{
			if (Global_CACB[iVar0 /*203*/].f_4[iVar1] == Global_A677[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_3 == 0x00000004)
		{
			return 0x00000000;
		}
		else
		{
			Global_CACB[iVar0 /*203*/].f_4[Global_CACB[iVar0 /*203*/].f_3] = Global_A677[iParam1 /*12*/].f_3;
			Global_CACB[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0x00000000;
	iVar2 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		if (iVar2 == 0xFFFFFFFF)
		{
			if (Global_CACB[iVar0 /*203*/].f_4[iVar1] == Global_A677[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_3 == 0x00000004)
		{
			return 0x00000000;
		}
		else
		{
			Global_CACB[iVar0 /*203*/].f_4[Global_CACB[iVar0 /*203*/].f_3] = Global_A677[iParam1 /*12*/].f_2;
			Global_CACB[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_CACB[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_CACB[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 0x00000003)
		{
			func_15(Global_CACB[iVar0 /*203*/].f_4[iVar1], Global_CACB[iVar0 /*203*/].f_1, 0x00000001, bParam2, 0x00000000);
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 0x00000003)
	{
		return;
	}
	iVar0 = 0xFFFFFFFF;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_B374[iParam1 /*46*/].f_2A - 0x00000001);
		if (iVar4 < 0x00000000)
		{
			return;
		}
		iVar5 = Global_B374[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_12(Global_A677[iVar5 /*12*/].f_1) };
		if (Global_A677[iVar5 /*12*/].f_2 == iParam0 && !Global_A677[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_A677[iVar5 /*12*/].f_2;
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar6 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar6 = 0x00000001;
		}
		if (bVar6)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar7 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar7 = 0x00000001;
		}
		if (bVar7)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		iVar8 = 0xFFFFFFFF;
		iVar9 = 0x00000000;
		iVar9 = 0x00000000;
		while (iVar9 < 0x00000007)
		{
			if (Global_CACB[iVar9 /*203*/].f_1 == iParam1 && Global_CACB[iVar9 /*203*/].f_9 > 0x00000000)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == 0xFFFFFFFF)
		{
			return;
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = Global_CACB[iVar8 /*203*/].f_1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = (Global_CACB[iVar8 /*203*/].f_9 - 0x00000001);
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000001;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
		iVar10 = Global_C961[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_CACB[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_A677[iVar11 /*12*/].f_2;
		if (Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_2}, 0x00000010);
		}
		else
		{
			Var3 = { func_12(Global_A677[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_C961[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0x00000000:
					func_8(0x00000000, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					if (iVar2 == 0x000000F9)
					{
						func_8(0x00000001, iVar1, iVar2, "PW_FEED_EM_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_8(0x00000001, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					func_8(0x00000002, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		if (Global_CACB[iVar0 /*203*/].f_9 < 0x00000004)
		{
			return iVar0;
		}
	}
	iVar1 = 0x00000000;
	bVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/] == 0x00000000)
		{
			bVar2 = 0x00000001;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0xFFFFFFFF;
	}
	bVar3 = 0x00000001;
	iVar1 = 0x00000000;
	iVar4 = 0xFFFFFFFF;
	iVar5 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		if (Global_CACB[iVar1 /*203*/] == 0x00000000)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_CACB[iVar1 /*203*/].f_1;
				bVar3 = 0x00000000;
			}
			else if (iVar5 > Global_CACB[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_CACB[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_CACB[iVar4 /*203*/].f_9 > 0x00000000)
	{
		iVar1 = 0x00000000;
		iVar1 = 0x00000000;
		while (iVar1 < Global_CACB[iVar4 /*203*/].f_9)
		{
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x00000003)
			{
				iVar7 = Global_C961[iVar6 /*120*/];
				if (iVar7 > 0x00000010)
				{
					iVar7 = 0x00000010;
				}
				iVar8 = 0x00000000;
				iVar8 = 0x00000000;
				while (iVar8 < iVar7)
				{
					if (Global_C961[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_C961[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_C961[iVar6 /*120*/].f_12[iVar8] == Global_CACB[iVar4 /*203*/].f_1)
							{
								if (Global_C961[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0x00000000:
											Global_A66F = (Global_A66F - 0x00000001);
											break;
										
										case 0x00000001:
											Global_A670 = (Global_A670 - 0x00000001);
											break;
										
										case 0x00000002:
											Global_A671 = (Global_A671 - 0x00000001);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_CACB[iVar4 /*203*/].f_2 = iParam0;
	Global_CACB[iVar4 /*203*/].f_3 = 0x00000000;
	if (!bParam1)
	{
		Global_CACB[iVar4 /*203*/] = 0x00000001;
	}
	Global_1B416.f_5228.f_136++;
	if (Global_1B416.f_5228.f_136 == 0x00000000)
	{
		Global_1B416.f_5228.f_136 = 0x00000001;
	}
	Global_CACB[iVar4 /*203*/].f_1 = Global_1B416.f_5228.f_136;
	Global_CACB[iVar4 /*203*/].f_9 = 0x00000000;
	return iVar4;
}

float func_17(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_19(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_18(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return 0f;
}

float func_18(bool bParam0)
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

bool func_19(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_20(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_21()
{
	switch (iLocal_81)
	{
		case 0x00000000:
			if (bLocal_214)
			{
				if (!func_29())
				{
					iLocal_211 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
					while (!unk_0x83D8570832F172A7(iLocal_211))
					{
						SYSTEM::WAIT(0x00000000);
					}
					unk_0x7E60C62A7CE58FC8(iLocal_211, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					unk_0x3CAEA85DA607305E(0x00000014);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					unk_0x3CAEA85DA607305E(func_26());
					unk_0x7E60D21B163E9D56();
					iLocal_222 = func_26();
					Global_791B = iLocal_222;
					SYSTEM::SETTIMERB(0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "UNDER_THE_BRIDGE", "HUD_AWARDS", 0x00000001);
				}
				iLocal_81 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if ((((((SYSTEM::TIMERB() > 0x00001D4C || unk_0x757EF87A33649210()) || !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) || func_29()) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_25()) || func_24())
			{
				unk_0x7E60C62A7CE58FC8(iLocal_211, "SHARD_ANIM_OUT");
				unk_0x3CAEA85DA607305E(0x00000001);
				unk_0x7C19E5E4784BD7CF(0.33f);
				unk_0x7E60D21B163E9D56();
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_81 = 0x00000002;
			}
			else
			{
				func_23();
				if (Global_791B > iLocal_222)
				{
					iLocal_81 = 0x00000003;
				}
			}
			break;
		
		case 0x00000002:
			if ((((((SYSTEM::TIMERB() > 0x000001F4 || unk_0x757EF87A33649210()) || !unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) || func_29()) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || func_25()) || func_24())
			{
				iLocal_81 = 0x00000003;
			}
			else
			{
				func_23();
				if (Global_791B > iLocal_222)
				{
					iLocal_81 = 0x00000003;
				}
			}
			break;
		
		case 0x00000003:
			func_22();
			bLocal_214 = 0x00000000;
			iLocal_81 = 0x00000000;
			break;
	}
}

void func_22()
{
	if (unk_0x83D8570832F172A7(iLocal_211))
	{
		unk_0xE17FDF9E3068281B(&iLocal_211);
	}
}

void func_23()
{
	if (!func_29())
	{
		if (unk_0x83D8570832F172A7(iLocal_211))
		{
			unk_0xEF45C43067063F18(iLocal_211, 0.5f, 0.5f, 1f, 1f, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
		}
	}
}

int func_24()
{
	if (Global_A1D7 == 0x00000009 || Global_A1D7 == 0x0000000A)
	{
		return Global_1AED0;
	}
	Global_1AED0 = 0x00000000;
	return 0x00000000;
}

int func_25()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_26()
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 0x00000014)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000001);
	}
	return iVar0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		if (iVar1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0x00000014)
	{
		iVar0 = 0x00000014;
	}
	return iVar0;
}

void func_28(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_29()
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

void func_30()
{
	if (func_31() && !iLocal_216)
	{
		iLocal_216 = 0x00000001;
		iLocal_79 = 0x00000007;
	}
	if (!func_31() && iLocal_216)
	{
		iLocal_216 = 0x00000000;
	}
}

int func_31()
{
	if (Global_4C0F)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_32()
{
	if (func_17(&iLocal_205) > 3f)
	{
		func_37(0x00000000);
		func_36(&iLocal_205, 0f);
		func_35(&iLocal_205);
	}
	if ((func_17(&iLocal_205) <= 3f && func_34(0x00000000)) && func_33(unk_0x16F2683693E537C9()))
	{
		if ((unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B1) || (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000018) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))) || (func_31() && !iLocal_216))
		{
			func_36(&iLocal_205, 0f);
			func_35(&iLocal_205);
		}
	}
}

int func_33(int iParam0)
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

int func_34(int iParam0)
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

void func_35(int iParam0)
{
	if (func_20(iParam0))
	{
		if (!func_19(iParam0))
		{
			iParam0->f_2 = (func_18(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

void func_36(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_18(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_37(int iParam0)
{
	if (func_41())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_40())
		{
			func_39(0x00000001, 0x00000001);
		}
		else
		{
			func_39(0x00000000, 0x00000000);
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
	if (!func_38())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_38()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0x00000000))
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

bool func_40()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_41()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_42()
{
	if (iLocal_217)
	{
		if ((func_17(&iLocal_208) > 5f && func_45() >= 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000001))
		{
			switch (iLocal_224)
			{
				case 0x00000000:
					func_14(0x0000001C, iLocal_83[(0x00000014 - func_45())], 0x00000001);
					iLocal_225 = 0x00000000;
					iLocal_224++;
					break;
				
				case 0x00000001:
					if (iLocal_225 < 0x0000000A)
					{
						func_43(0x0000001C, func_44(iLocal_225));
						iLocal_225++;
					}
					else
					{
						iLocal_224++;
					}
					break;
				
				case 0x00000002:
					func_7(0x0000001C);
					iLocal_224++;
					break;
				
				case 0x00000003:
					func_36(&iLocal_208, 0f);
					func_35(&iLocal_208);
					iLocal_217 = 0x00000000;
					iLocal_224 = 0x00000000;
					func_2();
					break;
				}
			}
	}
}

void func_43(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6 == 0x0000000A)
	{
		return;
	}
	iVar1 = Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6;
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6++;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000004) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001D))
			{
				return "PW_STRING_1_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000004) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001D))
			{
				return "PW_STRING_1_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000004) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001D))
			{
				return "PW_STRING_1_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000004) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001D))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000006))
			{
				return "PW_STRING_2_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000005) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000006))
			{
				return "PW_STRING_2_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000005) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000006))
			{
				return "PW_STRING_2_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000005) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000006))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000008))
			{
				return "PW_STRING_3_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000007) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000008))
			{
				return "PW_STRING_3_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000007) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000008))
			{
				return "PW_STRING_3_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000007) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000008))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000A))
			{
				return "PW_STRING_4_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000A))
			{
				return "PW_STRING_4_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000009) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000A))
			{
				return "PW_STRING_4_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000009) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000A))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000B) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000E))
			{
				return "PW_STRING_5_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000B) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000E))
			{
				return "PW_STRING_5_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000B) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000E))
			{
				return "PW_STRING_5_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000B) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000E))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000010) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000012))
			{
				return "PW_STRING_6_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000010) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000012))
			{
				return "PW_STRING_6_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000010) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000012))
			{
				return "PW_STRING_6_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000010) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000012))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000013) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000015))
			{
				return "PW_STRING_7_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000013) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000015))
			{
				return "PW_STRING_7_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000013) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000015))
			{
				return "PW_STRING_7_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000013) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000015))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000016) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000017))
			{
				return "PW_STRING_8_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000016) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000017))
			{
				return "PW_STRING_8_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000016) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000017))
			{
				return "PW_STRING_8_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000016) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000017))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 0x00000008:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000018) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000019))
			{
				return "PW_STRING_9_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000018) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000019))
			{
				return "PW_STRING_9_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000018) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000019))
			{
				return "PW_STRING_9_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000018) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000019))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 0x00000009:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001A) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001F))
			{
				return "PW_STRING_10_1";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001A) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001F))
			{
				return "PW_STRING_10_2";
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001A) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001F))
			{
				return "PW_STRING_10_3";
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001A) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001F))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_45()
{
	return (0x00000014 - func_27());
}

void func_46()
{
	switch (iLocal_79)
	{
		case 0x00000000:
			if (func_71())
			{
				if ((!func_70() && Global_4121C9 == 0x00000000) && Global_4121CA == 0x00000000)
				{
					iLocal_79 = 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			iLocal_212 = func_65(&iLocal_213, 60f, iLocal_226, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_227, iLocal_228);
			if (iLocal_212 == 0x00000000)
			{
				iLocal_212 = func_65(&iLocal_213, 60f, iLocal_229, 0.8f, 0.7f, 0.25f, 8f, 0.333f, iLocal_230, iLocal_231);
				if (iLocal_212 == 0x00000000)
				{
					iLocal_79 = 0x00000007;
				}
				else
				{
					iLocal_79 = 0x00000004;
				}
			}
			else
			{
				iLocal_79 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (!func_64(iLocal_213))
			{
				func_63(0x00000001);
				iLocal_79 = 0x00000005;
			}
			else
			{
				if (!iLocal_215)
				{
				}
				else
				{
					iLocal_215 = 0x00000000;
				}
				iLocal_79 = 0x00000007;
			}
			break;
		
		case 0x00000005:
			switch (iLocal_80)
			{
				case 0x00000000:
					func_62("PW_HELP_1", 0xFFFFFFFF);
					if (func_61())
					{
						if (func_34(0x00000000))
						{
							func_60(0x00000063);
							if (func_59("PW_HELP_1"))
							{
								unk_0x2F23E8033F1ADDD9("PW_HELP_1");
							}
							iLocal_80 = 0x00000001;
						}
					}
					if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B0) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B2))
					{
						func_63(0x00000000);
						func_57(0x00000063);
						if (func_59("PW_HELP_1"))
						{
							unk_0x2F23E8033F1ADDD9("PW_HELP_1");
						}
						iLocal_79 = 0x00000007;
					}
					break;
				
				case 0x00000001:
					func_62("PW_HELP_2", 0xFFFFFFFF);
					if (func_55(0x00000063))
					{
						iLocal_80 = 0x00000000;
						func_63(0x00000000);
						func_57(0x00000063);
						if (func_59("PW_HELP_2"))
						{
							unk_0x2F23E8033F1ADDD9("PW_HELP_2");
						}
						iLocal_79 = 0x00000006;
					}
					if (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000B1))
					{
						iLocal_80 = 0x00000000;
						func_63(0x00000000);
						func_57(0x00000063);
						if (func_59("PW_HELP_2"))
						{
							unk_0x2F23E8033F1ADDD9("PW_HELP_2");
						}
						iLocal_79 = 0x00000007;
					}
					break;
			}
			break;
		
		case 0x00000006:
			func_54(iLocal_213);
			func_51(iLocal_82);
			unk_0xCDC520E5E48E63D9(joaat("num_hidden_packages_7"), func_27(), 0x00000001);
			bLocal_214 = 0x00000001;
			func_48(&iLocal_205);
			func_48(&iLocal_208);
			iLocal_217 = 0x00000001;
			iLocal_79 = 0x00000007;
			break;
		
		case 0x00000007:
			func_47();
			iLocal_79 = 0x00000008;
			break;
		
		case 0x00000008:
			if (!func_71())
			{
				iLocal_79 = 0x00000000;
			}
			break;
	}
}

void func_47()
{
	iLocal_80 = 0x00000000;
	iLocal_82 = 0x00000000;
	iLocal_212 = 0x00000000;
	iLocal_213 = 0x00000000;
	iLocal_215 = 0x00000000;
	vLocal_219 = { vLocal_218 };
	vLocal_220 = { vLocal_218 };
	func_63(0x00000000);
	func_57(0x00000063);
	if (func_59("PW_HELP_1"))
	{
		unk_0x2F23E8033F1ADDD9("PW_HELP_1");
	}
	if (func_59("PW_HELP_2"))
	{
		unk_0x2F23E8033F1ADDD9("PW_HELP_2");
	}
}

void func_48(int iParam0)
{
	if (!func_20(iParam0))
	{
		func_50(iParam0);
	}
	else
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	func_36(iParam0, 0f);
}

void func_50(int iParam0)
{
	if (!func_20(iParam0))
	{
		func_49(iParam0);
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = func_53(0x0000005C);
	Global_24D752[iVar0 /*83*/] = 0x0000005C;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_1), func_52(iParam0), 64);
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "", 64);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "";
		
		case 0x00000001:
			return "AF_BOAR";
		
		case 0x00000002:
			return "AF_BORDERCOLLIE";
		
		case 0x00000003:
			return "AF_CAT";
		
		case 0x00000004:
			return "AF_CHICKENHAWK";
		
		case 0x00000005:
			return "AF_CORMORANT";
		
		case 0x00000006:
			return "AF_COW";
		
		case 0x00000007:
			return "AF_COYOTE";
		
		case 0x00000008:
			return "AF_CROW";
		
		case 0x00000009:
			return "AF_DEER";
		
		case 0x0000000A:
			return "AF_HEN";
		
		case 0x0000000B:
			return "AF_HUSKY";
		
		case 0x0000000C:
			return "AF_MOUNT_LION";
		
		case 0x0000000D:
			return "AF_PIG";
		
		case 0x0000000E:
			return "AF_RABBIT";
		
		case 0x0000000F:
			return "AF_POODLE";
		
		case 0x00000010:
			return "AF_PUG";
		
		case 0x00000011:
			return "AF_RETRIEVER";
		
		case 0x00000012:
			return "AF_ROTTWEILER";
		
		case 0x00000013:
			return "AF_SEAGULL";
		
		case 0x00000014:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000013;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000013)
	{
		if (Global_24D752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		else if (Global_24D752[iVar1 /*83*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000004);
				iLocal_82 = 0x00000001;
			}
			break;
		
		case 0x573201B8:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000005))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000005);
				iLocal_82 = 0x00000003;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000006))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000006);
				iLocal_82 = 0x00000004;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000007))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000007);
				iLocal_82 = 0x00000005;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000008))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000008);
				iLocal_82 = 0x00000006;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000009))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000009);
				iLocal_82 = 0x00000007;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000A))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x0000000A);
				iLocal_82 = 0x00000008;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000B))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x0000000B);
				iLocal_82 = 0x00000009;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000E))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x0000000E);
				iLocal_82 = 0x0000000A;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000010))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000010);
				iLocal_82 = 0x0000000B;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000012))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000012);
				iLocal_82 = 0x0000000C;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000013))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000013);
				iLocal_82 = 0x0000000D;
			}
			break;
		
		case 0x431D501C:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000015))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000015);
				iLocal_82 = 0x0000000F;
			}
			break;
		
		case 0x6D362854:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000016))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000016);
				iLocal_82 = 0x00000010;
			}
			break;
		
		case 0xDFB55C81:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000017))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000017);
				iLocal_82 = 0x0000000E;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000018))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000018);
				iLocal_82 = 0x00000011;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000019))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000019);
				iLocal_82 = 0x00000012;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001A))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x0000001A);
				iLocal_82 = 0x00000013;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001D))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x0000001D);
				iLocal_82 = 0x00000002;
			}
			break;
		
		case 0xAD7844BB:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001F))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x0000001F);
				iLocal_82 = 0x00000014;
			}
			break;
		
		default:
			break;
	}
}

int func_55(int iParam0)
{
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (func_56(iParam0) == 0x00000001)
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

int func_56(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_12;
}

int func_57(int iParam0)
{
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_58(iParam0, 0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_58(int iParam0, int iParam1)
{
	Global_706[iParam0 /*29*/].f_12 = iParam1;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_12 = iParam1;
	}
}

bool func_59(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_60(int iParam0)
{
	Global_4CCD = iParam0;
}

int func_61()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcontacts")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_62(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001C);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001C);
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000004))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x573201B8:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000005))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000006))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000007))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000008))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000009))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000A))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000B))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000000E))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000010))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000012))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000013))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x431D501C:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000015))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x6D362854:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000016))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0xDFB55C81:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000017))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000018))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000019))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001A))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001D))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0xAD7844BB:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x0000001F))
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		default:
			iLocal_215 = 0x00000001;
			break;
	}
	return 0x00000001;
}

int func_65(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0xC51336386034AC83(fParam1, iParam2, fParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	if (unk_0xC844350D5D58C99A(iVar0))
	{
	}
	if (iVar0 != 0x00000000 && func_33(iVar0))
	{
		if (unk_0x0A5D59F37DC7E974(iVar0) == 0x0000001C)
		{
			if (!unk_0x03068588A1FCED1A(iVar0))
			{
				*iParam0 = unk_0x134B62B726CEC8E6(iVar0);
				if (func_69(iVar0, 0x0000796E))
				{
					fVar1 = func_68(unk_0x16F2683693E537C9(), iVar0, 0x00000001);
					if (unk_0x6AB6A474D29FA7D8(unk_0x16F2683693E537C9(), iVar0))
					{
					}
					if (func_67(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_66(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0x00000000;
						}
					}
					else if (fVar1 <= IntToFloat(func_66(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0x00000000;
					}
				}
				else
				{
					iVar0 = 0x00000000;
				}
			}
			else
			{
				iVar0 = 0x00000000;
			}
		}
		else
		{
			iVar0 = 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
	}
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 0x0000001E;
			break;
		
		case 0x573201B8:
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 0x0000003C;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 0x0000003C;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 0x0000003C;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 0x00000028;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 0x00000028;
			break;
		
		case 0x431D501C:
			iVar0 = 0x0000001E;
			break;
		
		case 0x6D362854:
			iVar0 = 0x0000001E;
			break;
		
		case 0xDFB55C81:
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 0x0000001E;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 0x0000003C;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 0x0000001E;
			break;
		
		case 0xAD7844BB:
			iVar0 = 0x0000001E;
			break;
		
		default:
			iVar0 = 0x0000001E;
			break;
	}
	return iVar0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

float func_68(int iParam0, int iParam1, bool bParam2)
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

int func_69(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	vLocal_220 = { unk_0xBF584557291FDD31(iParam0, unk_0x4A089F2B762B8D33(iParam0, iParam1)) };
	if (iLocal_213 == 0xDFB55C81 || iLocal_213 == joaat("a_c_rat"))
	{
		vLocal_219 = { unk_0xBF584557291FDD31(iParam0, unk_0x4A089F2B762B8D33(iParam0, 0x000060F0)) };
	}
	else
	{
		vLocal_219 = { unk_0xBF584557291FDD31(iParam0, unk_0x4A089F2B762B8D33(iParam0, 0x000060F2)) };
	}
	unk_0x362FD95670BFA2A6(vLocal_219, &fVar0, &fVar1);
	unk_0x362FD95670BFA2A6(vLocal_220, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_70()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000003))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_71()
{
	if (Global_5551)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_72()
{
	if (unk_0x8A22C4C08282BF26(joaat("paparazzo3a")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0x8A22C4C08282BF26(joaat("paparazzo3b")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_73()
{
	func_74();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_74()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_77(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_76(unk_0x16F2683693E537C9());
			if (func_75(iVar0) && (!func_79(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_75(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_75(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_77(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_77(int iParam0)
{
	if (func_75(iParam0))
	{
		return func_78(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_78(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_79(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_80(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_81()
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

void func_82()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_63, 0x00000002))
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_63), 0x00000002);
	}
	iLocal_221 = 0x00000000;
	iLocal_216 = func_31();
	iLocal_83[0x00000000] = 0x000000F9;
	iLocal_83[0x00000001] = 0x000000FA;
	iLocal_83[0x00000002] = 0x000000FB;
	iLocal_83[0x00000003] = 0x000000FC;
	iLocal_83[0x00000004] = 0x000000FD;
	iLocal_83[0x00000005] = 0x000000FE;
	iLocal_83[0x00000006] = 0x000000FF;
	iLocal_83[0x00000007] = 0x00000100;
	iLocal_83[0x00000008] = 0x00000101;
	iLocal_83[0x00000009] = 0x00000102;
	iLocal_83[0x0000000A] = 0x00000103;
	iLocal_83[0x0000000B] = 0x00000104;
	iLocal_83[0x0000000C] = 0x00000105;
	iLocal_83[0x0000000D] = 0x00000106;
	iLocal_83[0x0000000E] = 0x00000107;
	iLocal_83[0x0000000F] = 0x00000108;
	iLocal_83[0x00000010] = 0x00000109;
	iLocal_83[0x00000011] = 0x0000010A;
	iLocal_83[0x00000012] = 0x0000010B;
	iLocal_83[0x00000013] = 0x0000010C;
	iLocal_83[0x00000014] = 0x0000010D;
}

