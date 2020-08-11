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
	var uLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	struct<27> Local_41 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_42[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_43[5] = { 0, 0, 0, 0, 0 };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	vector3 vLocal_61[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 16;
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
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	vLocal_40 = { -690.938f, 512.2703f, 109.3639f };
	iLocal_52 = 0xFFFFFFFF;
	iLocal_60 = 0x0000EA60;
	iLocal_231 = 0x00000063;
	if (unk_0x2EBF608FFE6CA406(0x00000092))
	{
		func_96();
	}
	if (func_95(0x0000005A) == 0x00000001)
	{
		func_94();
		unk_0x10FAF14A60A0DBE1();
	}
	iLocal_51 = Global_1B416.f_273C.f_67;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_91(0x00000006);
	func_90(&Local_41, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, vLocal_40, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_89(&Local_41, 0x00000002);
	Local_41.f_4 = 0x00000003;
	unk_0x28F5E4DA506AC0CA(vLocal_40, 5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_88(&vLocal_61, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	unk_0xB5376EA942202450(vLocal_61[0x00000000 /*3*/], vLocal_61[0x00000001 /*3*/], 8.25f, 0x00000000, 0x00000000, 0x00000001);
	unk_0xB5376EA942202450(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0x00000000, 0x00000000, 0x00000001);
	func_87(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar1);
	iLocal_64 = unk_0x7D6CA5F52B3748BF(vVar0, vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	if (func_95(0x0000005A) == 0x00000001)
	{
		func_94();
		func_96();
	}
	if (Global_1B416.f_273C.f_68 == 0x00000000)
	{
		Global_1B416.f_273C.f_68 = unk_0x972A296334C9D57B();
	}
	func_83(0x00000001);
	func_82(0x00000000);
	while (0x00000001)
	{
		if (func_95(0x0000005A) == 0x00000001)
		{
			func_94();
			func_96();
		}
		func_81(unk_0x16F2683693E537C9());
		if (unk_0x2C1AA3A291786CDC() || func_75() != 0x00000000)
		{
			func_70();
		}
		switch (iLocal_46)
		{
			case 0x00000000:
				func_69(&iLocal_45);
				break;
			
			case 0x00000004:
				func_68(&iLocal_45);
				break;
			
			case 0x00000001:
				func_67(&iLocal_45);
				break;
			
			case 0x00000002:
				func_61(&iLocal_45);
				break;
			
			case 0x00000003:
				func_57(&iLocal_45);
				break;
			
			case 0x00000006:
				func_54(0x00000002, 0x00000006, 0x00000001);
				func_53(0x00000002, "EPS_LSTEMAIL", 0x00000001);
				func_52(0x00000002);
				func_96();
				break;
		}
		func_49(&Local_41);
		if (func_48(&Local_41))
		{
			if (func_42(&Local_41))
			{
				if (unk_0x4EF27AB24893425F() == Global_12A3A)
				{
					Global_12A3A = 0x00000000;
					Global_1B416.f_7FE8.f_15D4 = 0x00000000;
				}
				unk_0x28F5E4DA506AC0CA(Local_41.f_E, 8.5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				Global_1B416.f_273C.f_67 = iLocal_51;
				func_40();
				func_39(&uLocal_65, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
				func_22(&uLocal_65, "EPS3AUD", "EP3_MCS1", 0x00000006, 0x00000000, 0x00000000, 0x00000000);
				if (func_21("EPS_DROP_HELP"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				func_19();
			}
		}
		if (Global_1B416.f_273C.f_68 != 0x00000000)
		{
			iLocal_49 = (Global_1B416.f_273C.f_68 + 14 % func_18(unk_0x118229AD063C3C1D(), unk_0x1A61A218F5C5EB02()));
			if (((unk_0x972A296334C9D57B() == iLocal_49 && !func_17(0x00000000)) && !unk_0x131F22FE6F47A65D(unk_0xD803B885F5E47A62())) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_230, &uLocal_232, &iLocal_231);
		if ((iLocal_59 > 0x00000000 && unk_0x1C0640BA9A7327B3() > iLocal_59) && iLocal_231 == 0x00000063)
		{
			iLocal_59 = 0x00000000;
			if (func_92())
			{
				func_82(0x00000006);
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0x00000000:
			*iParam0 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
			if (unk_0x83D8570832F172A7(*iParam0))
			{
				iVar0 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				*iParam2++;
			}
			break;
		
		case 0x00000001:
			unk_0x7E60C62A7CE58FC8(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x7ACC3006A87F8B39("EPS_CAR_TITLE");
			unk_0x779B34565F4D71B1();
			unk_0x7ACC3006A87F8B39("EPS_CAR_NOTE");
			unk_0x6D99DF8263D35CE5(func_3());
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			*uParam1 = unk_0x1C0640BA9A7327B3();
			*iParam2++;
			break;
		
		case 0x00000002:
			if ((unk_0x1C0640BA9A7327B3() - *uParam1) > 0x00001B58)
			{
				unk_0x7E60C62A7CE58FC8(*iParam0, "SHARD_ANIM_OUT");
				unk_0x3CAEA85DA607305E(0x00000001);
				unk_0x7C19E5E4784BD7CF(0.33f);
				unk_0x7E60D21B163E9D56();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x83D8570832F172A7(*iParam0))
				{
					unk_0x6567AE843FADBA94(*iParam0, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - *uParam1) > 0x00001D4C)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x83D8570832F172A7(*iParam0))
				{
					unk_0x6567AE843FADBA94(*iParam0, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0x83D8570832F172A7(*iParam0))
			{
				unk_0xE17FDF9E3068281B(iParam0);
			}
			*iParam2 = 0x00000063;
			break;
		
		case 0x00000063:
			break;
	}
}

int func_2()
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

int func_3()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_51, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 <= 0x00000000)
	{
		return;
	}
	func_54(0x00000002, vLocal_42[(0x00000005 - iParam0) /*3*/], 0x00000001);
	if (func_15(iLocal_52))
	{
		func_53(0x00000002, vLocal_42[(0x00000005 - iParam0) /*3*/].f_2, 0x00000000);
	}
	else
	{
		func_53(0x00000002, vLocal_42[(0x00000005 - iParam0) /*3*/].f_1, 0x00000000);
	}
	iParam0 = 0x00000000;
	iVar0 = 0x00000000;
	iParam0 = 0x00000000;
	while (iParam0 < iLocal_43)
	{
		if (!func_14(iParam0))
		{
			func_12(0x00000002, func_13(iLocal_43[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(0x00000002);
	Global_1B416.f_273C.f_68 = unk_0x972A296334C9D57B();
	if (iVar0 == 0x00000000)
	{
	}
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_11(iParam0);
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
		MemCopy(&Var3, {func_10(Global_A677[iVar4 /*12*/].f_1)}, 0x00000004);
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
		func_6(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, sVar5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		switch (Global_A677[iVar1 /*12*/].f_3)
		{
			case 0x00000000:
				func_6(0x00000000, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000001:
				func_6(0x00000001, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			
			case 0x00000002:
				func_6(0x00000002, Global_A677[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000000 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000001 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000002 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000003 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000004 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000005 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000006 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000007 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000008 /*4*/]), &(Global_CACB[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0x00000009 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_75();
	bVar1 = 0x00000000;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
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
			func_7(unk_0x1AEA174B291A9906(&cVar2, &cVar2, 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_8(iParam1)), 0x00000000));
		}
		else
		{
			func_7(unk_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_8(iParam1)), 0x00000000));
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

void func_7(var uParam0)
{
	Global_A672[Global_A676] = uParam0;
	Global_5567 = 0x00000001;
	Global_5566 = uParam0;
	Global_A676++;
	if (Global_A676 == 0x00000003)
	{
		Global_A676 = 0x00000000;
	}
}

char* func_8(int iParam0)
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

char* func_9(int iParam0, int iParam1)
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

struct<16> func_10(int iParam0)
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

int func_11(int iParam0)
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

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
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

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_43[0x00000000])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_43[0x00000001])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_43[0x00000002])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_43[0x00000003])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_43[0x00000004])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_51, iParam0);
}

bool func_15(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(iLocal_51, iParam0 + 5);
}

int func_16()
{
	return (0x00000005 - func_3());
}

int func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	iLocal_231 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_epsilon_step"), &iVar0, 0xFFFFFFFF);
	if (iVar0 < (0x00000006 + func_3()))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_epsilon_step"), (0x00000006 + func_3()), 0x00000001);
		func_20(0x00000017, (0x00000006 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)
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

bool func_21(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0x00000000);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_37();
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
		if (func_36(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_35();
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
				func_33();
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
				if (func_32())
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
			if (func_31())
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
			func_30();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_29();
		func_24();
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
		func_37();
	}
	return 0x00000000;
}

void func_24()
{
	if (!func_25())
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

int func_25()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_28())
	{
		return 0x00000000;
	}
	if (func_26(unk_0xD803B885F5E47A62()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 0x00000014);
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_28()
{
	return 0xFFFFFFFF;
}

void func_29()
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

void func_30()
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

int func_31()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_32()
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

void func_33()
{
	if (func_34(0x0000000E))
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
		Global_4C1E = func_75();
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

bool func_34(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_35()
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

bool func_36(int iParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
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

void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_40()
{
	if (func_41(0x00000000))
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

bool func_41(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0x00000000;
	iVar1 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar3);
	if (iVar1 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (func_81(uVar3[iVar0]))
		{
			if (unk_0x3D1053F9EB43B7AD(uVar3[iVar0], uParam0->f_6[0x00000000 /*3*/], uParam0->f_6[0x00000001 /*3*/], uParam0->f_6.f_7, 0x00000000, 0x00000001, 0x00000000) && !uParam0->f_1A)
			{
				if (func_43(uVar3[iVar0]))
				{
					iVar2 = 0x00000001;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 0x00000001)
	{
		Global_1B416.f_273C.f_68 = unk_0x972A296334C9D57B();
		iLocal_59 = (unk_0x1C0640BA9A7327B3() + iLocal_60);
	}
	return iVar2;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x134B62B726CEC8E6(iParam0);
	if (func_47(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_46(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_45(iVar0, unk_0x7F6DC62EA9922664(iParam0) < 0x0000036B);
				func_44(iVar0, 0x00000001);
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&iLocal_51, iParam0);
		iLocal_52 = iParam0;
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_51, iParam0);
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&iLocal_51, iParam0 + 5);
	}
	else
	{
		unk_0x0674E58A79778E99(&iLocal_51, iParam0 + 5);
	}
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_43[iParam1])
	{
		return 0x00000001;
	}
	if (iLocal_43[iParam1] != joaat("tornado2"))
	{
		return 0x00000000;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_47(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0x00000001;
	}
	if (unk_0x7F6DC62EA9922664(iParam0) < 0x000002EE)
	{
		return 0x00000001;
	}
	if (unk_0xDBF86CCBD1D2F357(iParam0, 0x00000001) || unk_0xDBF86CCBD1D2F357(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	return unk_0x304FA4F6882D730E(iParam0) > 0x00000000;
}

bool func_48(var uParam0)
{
	return (uParam0->f_5 == 0x00000002 && uParam0->f_4 == 0x00000002);
}

void func_49(var uParam0)
{
	vector3 vVar0;
	
	uParam0->f_1A = 0x00000000;
	if (unk_0xF65264B66E133BD8(uParam0->f_13[0x00000000 /*3*/], 1.2f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_1A = 0x00000001;
	}
	else if (unk_0xF65264B66E133BD8(uParam0->f_13[0x00000001 /*3*/], 1.2f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_1A = 0x00000001;
	}
	else
	{
		vVar0 = { func_50(uParam0->f_13[0x00000000 /*3*/], uParam0->f_13[0x00000001 /*3*/], 0.5f, 0x00000001) };
		uParam0->f_1A = unk_0xF65264B66E133BD8(vVar0, 1.2f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
		if (uParam0->f_1A)
		{
		}
	}
	if (uParam0->f_5 == 0x00000002 && (uParam0->f_4 != 0x00000002 || uParam0->f_4 == 0x00000003))
	{
		uParam0->f_11 = (uParam0->f_11 - uParam0->f_12);
		if (uParam0->f_11 <= 0f)
		{
			uParam0->f_11 = 0f;
			uParam0->f_4 = 0x00000002;
			unk_0x55D0A2DB35045A35(iLocal_47);
			iLocal_48 = 0x00000000;
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "CLOSED", *uParam0, "DOOR_GARAGE", 0x00000000, 0x00000000, 0x00000001);
		}
		else if (!iLocal_48)
		{
			unk_0xEB819BD1E585E9CB(iLocal_47, "CLOSING", *uParam0, "DOOR_GARAGE", 0x00000000, 0x00000000, 0x00000001);
			iLocal_48 = 0x00000001;
		}
	}
	if (uParam0->f_5 == 0x00000001 && (uParam0->f_4 != 0x00000001 || uParam0->f_4 == 0x00000004))
	{
		uParam0->f_11 = (uParam0->f_11 + uParam0->f_12);
		if (uParam0->f_11 >= 1f)
		{
			uParam0->f_11 = 1f;
			uParam0->f_4 = 0x00000001;
			unk_0x55D0A2DB35045A35(iLocal_47);
			iLocal_48 = 0x00000000;
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "OPENED", *uParam0, "DOOR_GARAGE", 0x00000000, 0x00000000, 0x00000001);
		}
		else if (!iLocal_48)
		{
			unk_0xEB819BD1E585E9CB(iLocal_47, "OPENING", *uParam0, "DOOR_GARAGE", 0x00000000, 0x00000000, 0x00000001);
			iLocal_48 = 0x00000001;
		}
	}
	if (unk_0xBF75E4DF4C367CD9(*uParam0, 20f, uParam0->f_3, 0x00000000))
	{
		unk_0x6DA3AC47D5DB9EED(uParam0->f_3, *uParam0, 0x00000001, uParam0->f_11, 0x00000000);
	}
}

Vector3 func_50(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		fParam2 = func_51(fParam2, 0f, 1f);
	}
	return vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1 - vParam0;
}

float func_51(float fParam0, float fParam1, float fParam2)
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

void func_52(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000001A)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6195, (0x00000004 - 0x00000001)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_CACB[iVar0 /*203*/] = 0x00000000;
}

void func_53(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_CACB[iVar0 /*203*/].f_9 == 0x00000000)
	{
		return;
	}
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_1 = 0x00000001;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_2), sParam1, 16);
	Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_6 = 0x00000000;
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000000 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000001 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000002 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000003 /*4*/]), "", 16);
	StringCopy(&(Global_CACB[iVar0 /*203*/].f_A[(Global_CACB[iVar0 /*203*/].f_9 - 0x00000001) /*48*/].f_7[0x00000004 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_54(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_56(iParam0, 0x00000001);
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
			func_55(Global_CACB[iVar0 /*203*/].f_4[iVar1], Global_CACB[iVar0 /*203*/].f_1, 0x00000001, bParam2, 0x00000000);
		}
		iVar1++;
	}
	return 0x00000001;
}

void func_55(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		Var3 = { func_10(Global_A677[iVar5 /*12*/].f_1) };
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
			Var3 = { func_10(Global_A677[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_C961[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0x00000000:
					func_6(0x00000000, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					if (iVar2 == 0x000000F9)
					{
						func_6(0x00000001, iVar1, iVar2, "PW_FEED_EM_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_6(0x00000001, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					func_6(0x00000002, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				}
			}
	}
}

int func_56(int iParam0, bool bParam1)
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
	
	iVar0 = func_11(iParam0);
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

void func_57(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0x00000001:
			func_60(&iLocal_44);
			func_59("EPS_DROP_PERSON", 0xFFFFFFFF);
			*iParam0 = 0x00000002;
			break;
		
		case 0x00000002:
			if (!func_58())
			{
				*iParam0 = 0x00000004;
				return;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
				if (func_81(iVar0))
				{
					if (unk_0x2720E241B5CCF780(iVar0) == 0x00000000)
					{
						*iParam0 = 0x00000004;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_58())
			{
				func_82(0x00000000);
			}
			else
			{
				func_59("EPS_DROP_ESCAPE", 0xFFFFFFFF);
				func_82(0x00000002);
			}
			break;
	}
}

int func_58()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (!func_81(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iLocal_54 = 0x00000000;
		return 0x00000000;
	}
	iVar1 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
	if (!func_81(iVar1))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (!func_14(iVar0))
		{
			if (func_46(unk_0x134B62B726CEC8E6(iVar1), iVar0))
			{
				if (func_47(iVar1))
				{
					if (!iLocal_54)
					{
						func_59("EPS_DROP_FAIL", 0xFFFFFFFF);
						iLocal_54 = 0x00000001;
					}
					return 0x00000000;
				}
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_59(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_60(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0x00000001:
			func_89(&Local_41, 0x00000001);
			Local_41.f_4 = 0x00000004;
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1.5f);
			}
			*iParam0 = 0x00000002;
			iLocal_50 = 0x00000000;
			iLocal_58 = 0x00000000;
			break;
		
		case 0x00000002:
			switch (iLocal_50)
			{
				case 0x00000000:
					if (iLocal_55 == 0x00000001 && !Local_41.f_1A)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
					}
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
					{
						func_82(0x00000004);
						return;
					}
					if (func_66(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
					}
					if (func_81(iVar0) && unk_0x2720E241B5CCF780(iVar0) > 0x00000000)
					{
						if (unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000) != unk_0x16F2683693E537C9())
						{
							func_82(0x00000003);
							return;
						}
					}
					if (!Local_41.f_1A)
					{
						if (iLocal_56 == 0x00000000)
						{
							if (func_65(iVar0))
							{
								if (unk_0x3D1053F9EB43B7AD(iVar0, Local_41.f_6[0x00000000 /*3*/], Local_41.f_6[0x00000001 /*3*/], Local_41.f_6.f_7, 0x00000000, 0x00000001, 0x00000000))
								{
									func_64("EPS_DROP_EXIT", 0x00001D4C, 0x00000001);
									iLocal_58 = 0x00000000;
									iLocal_56 = 0x00000001;
									iLocal_55 = 0x00000000;
								}
							}
						}
						if (func_63(unk_0x16F2683693E537C9(), Local_41.f_E, 0x00000000) < 3f)
						{
							func_60(&iLocal_44);
						}
						if (func_63(unk_0x16F2683693E537C9(), Local_41, 0x00000000) > (15f + 5f))
						{
							func_89(&Local_41, 0x00000002);
							Local_41.f_4 = 0x00000003;
							iLocal_56 = 0x00000000;
							iLocal_55 = 0x00000000;
							iLocal_58 = 0x00000000;
							func_82(0x00000001);
							return;
						}
						if (func_62(&Local_41) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							func_89(&Local_41, 0x00000002);
							Local_41.f_4 = 0x00000003;
							iLocal_58 = 0x00000000;
							func_82(0x00000000);
							return;
						}
					}
					if ((Local_41.f_1A && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()))
					{
						if (iLocal_58 == 0x00000000)
						{
							iLocal_58 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - iLocal_58) > 0x000001F4)
						{
							if (iLocal_55 == 0x00000000)
							{
								unk_0x790015DC92C918E2();
								func_59("EPS_DROP_MESS", 0xFFFFFFFF);
								iLocal_55 = 0x00000001;
								iLocal_56 = 0x00000000;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_62(var uParam0)
{
	return (!uParam0->f_1A && !unk_0xF65264B66E133BD8(uParam0->f_E, 6.2f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000));
}

float func_63(int iParam0, vector3 vParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, iParam2);
}

void func_64(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_65(int iParam0)
{
	if (func_66(iParam0))
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

int func_66(int iParam0)
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

void func_67(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0x00000001:
			if (!unk_0xE4EDC4B0E92C078B(iLocal_44))
			{
				iLocal_44 = unk_0x6CC513A908911CF0(vLocal_40);
				if (unk_0xE4EDC4B0E92C078B(iLocal_44))
				{
					unk_0xBC8E0A7390523199(iLocal_44, 0x000000CE);
					unk_0x61755AC17D8F538E(iLocal_44, 0x0000002A);
				}
			}
			*iParam0 = 0x00000002;
			iLocal_50 = 0x00000000;
			break;
		
		case 0x00000002:
			if (!func_58())
			{
				func_82(0x00000000);
				return;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_82(0x00000004);
				return;
			}
			if (func_66(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
			}
			if (func_81(iVar0) && unk_0x2720E241B5CCF780(iVar0) > 0x00000000)
			{
				if (unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000) != unk_0x16F2683693E537C9())
				{
					func_82(0x00000003);
					return;
				}
			}
			if (func_63(unk_0x16F2683693E537C9(), Local_41, 0x00000000) < 15f)
			{
				*iParam0 = 0x00000004;
				return;
			}
			break;
		
		case 0x00000004:
			func_82(0x00000002);
			break;
	}
}

void func_68(int iParam0)
{
	switch (*iParam0)
	{
		case 0x00000001:
			func_60(&iLocal_44);
			if (iLocal_57 == 0x00000000)
			{
				func_59("EPS_DROP_WANTED", 0xFFFFFFFF);
			}
			*iParam0 = 0x00000002;
			break;
		
		case 0x00000002:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				*iParam0 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (!func_58())
			{
				func_82(0x00000000);
			}
			else
			{
				if (iLocal_57 == 0x00000000)
				{
					func_59("EPS_DROP_ESCAPE", 0xFFFFFFFF);
				}
				func_82(0x00000002);
			}
			iLocal_57 = 0x00000001;
			break;
	}
}

void func_69(int iParam0)
{
	switch (*iParam0)
	{
		case 0x00000001:
			*iParam0 = 0x00000002;
			iLocal_53 = 0x00000000;
			iLocal_55 = 0x00000000;
			func_60(&iLocal_44);
			break;
		
		case 0x00000002:
			if (func_66(unk_0x16F2683693E537C9()))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_41.f_6[0x00000000 /*3*/], Local_41.f_6[0x00000001 /*3*/], Local_41.f_6.f_7, 0x00000000, 0x00000001, 0x00000000) && func_48(&Local_41))
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -687.6668f, 500.598f, 109.0364f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 200.7367f);
				}
			}
			if (func_63(unk_0x16F2683693E537C9(), Local_41, 0x00000000) > (15f + 5f))
			{
				func_89(&Local_41, 0x00000002);
				if (Local_41.f_4 != 0x00000002)
				{
					Local_41.f_4 = 0x00000003;
				}
			}
			if (func_58())
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					func_82(0x00000004);
					return;
				}
				*iParam0 = 0x00000004;
				return;
			}
			break;
		
		case 0x00000004:
			if (iLocal_53 == 0x00000000 && func_66(unk_0x16F2683693E537C9()))
			{
				if (iLocal_63 != unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001))
				{
					iLocal_63 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
					func_59("EPS_DROP_HELP", 0xFFFFFFFF);
					iLocal_53 = 0x00000001;
				}
			}
			iLocal_54 = 0x00000000;
			func_82(0x00000001);
			break;
	}
}

void func_70()
{
	func_72();
	while (unk_0x2C1AA3A291786CDC() || func_75() != 0x00000000)
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_71();
}

void func_71()
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_81(unk_0x16F2683693E537C9()))
	{
	}
	unk_0xB5376EA942202450(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0x00000000, 0x00000000, 0x00000001);
	func_87(-688.5f, 503.7f, 110.2f, 30f, &vVar0, &vVar1);
	iLocal_64 = unk_0x7D6CA5F52B3748BF(vVar0, vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_51 = Global_1B416.f_273C.f_67;
	func_93();
	if (func_92())
	{
		func_96();
	}
	func_83(0x00000001);
	if (func_11(0x00000002) == 0xFFFFFFFF)
	{
		func_4(func_16());
	}
	func_82(0x00000000);
}

void func_72()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_44))
	{
		func_60(&iLocal_44);
		iLocal_44 = 0x00000000;
	}
	Global_1B416.f_273C.f_67 = iLocal_51;
	func_60(&iLocal_44);
	func_83(0x00000000);
	func_74();
	func_73(&Local_41);
	unk_0x2952D66A502EA873(iLocal_64, 0x00000000);
	unk_0x842F1AEB2FCC00B7(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0x00000001);
	unk_0x842F1AEB2FCC00B7(vLocal_61[0x00000000 /*3*/], vLocal_61[0x00000001 /*3*/], 8.25f, 0x00000001);
}

void func_73(var uParam0)
{
	if (unk_0xBF75E4DF4C367CD9(*uParam0, 20f, uParam0->f_3, 0x00000000))
	{
		unk_0x6DA3AC47D5DB9EED(uParam0->f_3, *uParam0, 0x00000001, 0f, 0x00000000);
	}
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		unk_0x71199B01895C6202(iLocal_43[iVar0]);
		iVar0++;
	}
}

int func_75()
{
	func_76();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_76()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_79(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_78(unk_0x16F2683693E537C9());
			if (func_77(iVar0) && (!func_34(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_77(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_77(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_79(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_79(int iParam0)
{
	if (func_77(iParam0))
	{
		return func_80(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_80(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_81(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_82(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_45 = 0x00000001;
}

void func_83(bool bParam0)
{
	func_84(0x0000002C, bParam0);
	func_84(0x0000002D, bParam0);
	func_84(0x0000002E, bParam0);
	func_84(0x0000002F, bParam0);
	func_84(0x00000030, bParam0);
	func_84(0x00000031, bParam0);
	func_84(0x00000032, bParam0);
}

void func_84(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_86(iParam0, 0x00000000))
		{
			func_85(iParam0, 0x00000001, 0x00000000);
			func_85(iParam0, 0x00000002, 0x00000000);
			func_85(iParam0, 0x00000003, 0x00000000);
			func_85(iParam0, 0x00000004, 0x00000000);
			func_85(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_85(iParam0, 0x00000000, 0x00000000);
	}
}

void func_85(int iParam0, int iParam1, bool bParam2)
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

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_87(vector3 vParam0, float fParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { fParam1, fParam1, fParam1 };
	*uParam2 = { vParam0 - vVar0 };
	*uParam3 = { vParam0 + vVar0 };
}

void func_88(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	*(uParam0[0x00000000 /*3*/]) = { vParam1 };
	*(uParam0[0x00000001 /*3*/]) = { vParam2 };
	uParam0->f_7 = fParam3;
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_90(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, float fParam6, vector3 vParam7, vector3 vParam8)
{
	uParam0->f_3 = iParam1;
	*uParam0 = { vParam2 };
	uParam0->f_5 = 0x00000002;
	uParam0->f_4 = 0x00000000;
	uParam0->f_13[0x00000000 /*3*/] = { vParam7 };
	uParam0->f_13[0x00000001 /*3*/] = { vParam8 };
	uParam0->f_E = { vParam3 };
	func_88(&(uParam0->f_6), vParam4, vParam5, fParam6);
}

int func_91(int iParam0)
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

bool func_92()
{
	return func_3() == 0x00000005;
}

void func_93()
{
	iLocal_43[0x00000000] = joaat("vacca");
	iLocal_43[0x00000001] = joaat("surano");
	iLocal_43[0x00000002] = joaat("tornado2");
	iLocal_43[0x00000003] = joaat("superd");
	iLocal_43[0x00000004] = joaat("double");
	vLocal_42[0x00000000 /*3*/] = 0x00000001;
	vLocal_42[0x00000000 /*3*/].f_1 = "EPS_GMAIL_G5";
	vLocal_42[0x00000000 /*3*/].f_2 = "EPS_BMAIL_G5";
	vLocal_42[0x00000001 /*3*/] = 0x00000002;
	vLocal_42[0x00000001 /*3*/].f_1 = "EPS_GMAIL_G4";
	vLocal_42[0x00000001 /*3*/].f_2 = "EPS_BMAIL_G4";
	vLocal_42[0x00000002 /*3*/] = 0x00000003;
	vLocal_42[0x00000002 /*3*/].f_1 = "EPS_GMAIL_G3";
	vLocal_42[0x00000002 /*3*/].f_2 = "EPS_BMAIL_G3";
	vLocal_42[0x00000003 /*3*/] = 0x00000004;
	vLocal_42[0x00000003 /*3*/].f_1 = "EPS_GMAIL_G2";
	vLocal_42[0x00000003 /*3*/].f_2 = "EPS_BMAIL_G2";
	vLocal_42[0x00000004 /*3*/] = 0x00000005;
	vLocal_42[0x00000004 /*3*/].f_1 = "EPS_GMAIL_G1";
	vLocal_42[0x00000004 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_94()
{
	int iVar0;
	
	iLocal_51 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		unk_0x5D96D8530B3D0904(&iLocal_51, iVar0);
		iVar0++;
	}
}

int func_95(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_96()
{
	int iVar0;
	
	func_60(&iLocal_44);
	func_83(0x00000000);
	func_74();
	func_73(&Local_41);
	Global_1B416.f_273C.f_67 = iLocal_51;
	if (func_92() || func_95(0x0000005A) == 0x00000001)
	{
		func_98(0x0000005A, 0x00000001);
		func_97(0x00000006);
	}
	unk_0x842F1AEB2FCC00B7(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0x00000001);
	unk_0x842F1AEB2FCC00B7(vLocal_61[0x00000000 /*3*/], vLocal_61[0x00000001 /*3*/], 8.25f, 0x00000001);
	unk_0x2952D66A502EA873(iLocal_64, 0x00000000);
	if (iLocal_230 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&iLocal_230);
		iLocal_230 = 0x00000000;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("num_epsilon_step"), &iVar0, 0xFFFFFFFF);
	if (iVar0 < (0x00000006 + func_3()))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_epsilon_step"), (0x00000006 + func_3()), 0x00000001);
		func_20(0x00000017, (0x00000006 + func_3()));
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_97(int iParam0)
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

void func_98(int iParam0, int iParam1)
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

