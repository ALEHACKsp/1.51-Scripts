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
	int iLocal_28 = 0;
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
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 16;
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
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	vector3 vLocal_237 = { 0f, 0f, 0f };
	float fLocal_238 = 0f;
	char* sLocal_239 = NULL;
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
	var uLocal_254 = 0;
	char[] cLocal_255[8] = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	char cLocal_271[64] = "";
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	float fLocal_282 = 0f;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
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
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_62 = { 0f, 0f, 0f };
	iLocal_63 = 0xFFFFFFFF;
	iLocal_67 = 0x0000013E;
	iLocal_233 = 0x00000001;
	iLocal_280 = 0xFFFFFFFF;
	fLocal_282 = 0f;
	fLocal_283 = 1f;
	fLocal_284 = 1f;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_54();
	}
	SYSTEM::WAIT(0x00000000);
	func_40();
	func_37();
	func_33();
	while (iLocal_233 && func_29(0x00000002, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
		switch (iLocal_66)
		{
			case 0x00000000:
				if (func_27())
				{
					iLocal_66 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_26())
				{
					iLocal_66 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_2())
				{
					iLocal_66 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_1();
				break;
		}
	}
	func_54();
}

void func_1()
{
	iLocal_233 = 0x00000000;
}

int func_2()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(Global_180A1))
	{
		if (unk_0xC844350D5D58C99A(iLocal_235))
		{
			if (unk_0xB4ECF989E2C1DAC8(Global_180A1, &sLocal_239, &cLocal_271, 0x00000003))
			{
				if (unk_0x4E861BC5B1EDA7BD(Global_180A1))
				{
					unk_0x5B8BE59CB25E8968(Global_180A1, 0x00000000, 0x00000000);
					unk_0xA3BF0AA5A2608191(Global_180A1);
					return 0x00000000;
				}
				fVar0 = unk_0xA45992A6CE82FB43(iLocal_280);
				if (!iLocal_234)
				{
					if (func_3(&uLocal_68, "PRSAUD", "FRAS_IG_7x", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_234 = 0x00000001;
					}
				}
				if (fVar0 < 0.2812f)
				{
					if (iLocal_281 != 0x00000000)
					{
						unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
						iLocal_281 = 0x00000000;
					}
				}
				else if (fVar0 < 0.4778f)
				{
					if (iLocal_281 == 0x00000000)
					{
						iLocal_281 = unk_0xC1879030EB463216("scr_lamgraff_paint_spray", iLocal_235, 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x02D205CBD211ED4F(iLocal_281, fLocal_282, fLocal_283, fLocal_284, 0x00000000);
					}
				}
				else if (fVar0 < 0.5745f)
				{
					if (iLocal_281 != 0x00000000)
					{
						unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
						iLocal_281 = 0x00000000;
					}
				}
				else if (fVar0 < 0.7712f)
				{
					if (iLocal_281 == 0x00000000)
					{
						iLocal_281 = unk_0xC1879030EB463216("scr_lamgraff_paint_spray", iLocal_235, 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x02D205CBD211ED4F(iLocal_281, fLocal_282, fLocal_283, fLocal_284, 0x00000000);
					}
				}
				else if (iLocal_281 != 0x00000000)
				{
					unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
					iLocal_281 = 0x00000000;
				}
			}
			else if (iLocal_281 != 0x00000000)
			{
				unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
				iLocal_281 = 0x00000000;
			}
		}
	}
	else
	{
		func_54();
		return 0x00000000;
	}
	return 0x00000000;
}

bool func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_4(sParam2, iParam3, 0x00000000);
}

int func_4(char* sParam0, int iParam1, bool bParam2)
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
					func_24();
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
		if (func_23(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_22();
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
				func_14();
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
				if (func_13())
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
			if (func_12())
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
			func_11();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_10();
		func_5();
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
		func_24();
	}
	return 0x00000000;
}

void func_5()
{
	if (!func_6())
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

int func_6()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_9())
	{
		return 0x00000000;
	}
	if (func_7(unk_0xD803B885F5E47A62()))
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

bool func_7(int iParam0)
{
	return func_8(iParam0, 0x00000014);
}

bool func_8(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_9()
{
	return 0xFFFFFFFF;
}

void func_10()
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

void func_11()
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

int func_12()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_13()
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

void func_14()
{
	if (func_21(0x0000000E))
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
		Global_4C1E = func_15();
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

var func_15()
{
	func_16();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_16()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_19(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_18(unk_0x16F2683693E537C9());
			if (func_17(iVar0) && (!func_21(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_17(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_17(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_20(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_21(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_22()
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

bool func_23(int iParam0, int iParam1)
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

void func_24()
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

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_26()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(Global_180A1))
	{
		if (unk_0xC844350D5D58C99A(iLocal_235))
		{
			if (unk_0xB4ECF989E2C1DAC8(Global_180A1, &sLocal_239, &cLocal_255, 0x00000003))
			{
				if (unk_0x4E861BC5B1EDA7BD(Global_180A1))
				{
					unk_0x5B8BE59CB25E8968(Global_180A1, 0x00000000, 0x00000000);
					unk_0xA3BF0AA5A2608191(Global_180A1);
					return 0x00000000;
				}
				fVar0 = unk_0xA45992A6CE82FB43(Global_1774A);
				if (fVar0 < 0.3812f)
				{
					if (iLocal_281 != 0x00000000)
					{
						unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
						iLocal_281 = 0x00000000;
					}
				}
				else if (fVar0 < 0.4778f)
				{
					if (iLocal_281 == 0x00000000)
					{
						iLocal_281 = unk_0xC1879030EB463216("scr_lamgraff_paint_spray", iLocal_235, 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x02D205CBD211ED4F(iLocal_281, fLocal_282, fLocal_283, fLocal_284, 0x00000000);
					}
				}
				else if (fVar0 < 0.5745f)
				{
					if (iLocal_281 != 0x00000000)
					{
						unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
						iLocal_281 = 0x00000000;
					}
				}
				else if (fVar0 < 0.6712f)
				{
					if (iLocal_281 == 0x00000000)
					{
						iLocal_281 = unk_0xC1879030EB463216("scr_lamgraff_paint_spray", iLocal_235, 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x02D205CBD211ED4F(iLocal_281, fLocal_282, fLocal_283, fLocal_284, 0x00000000);
					}
				}
				else if (fVar0 < 1f)
				{
					if (iLocal_281 != 0x00000000)
					{
						unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
						iLocal_281 = 0x00000000;
					}
				}
				else
				{
					unk_0xA3BF0AA5A2608191(Global_180A1);
					if (!unk_0x69DF961355195C3C(iLocal_280))
					{
						iLocal_280 = unk_0xE9744DB7B8CA6965(vLocal_237, 0f, 0f, fLocal_238, 0x00000002);
						unk_0xC90224D9E95E5E3A(iLocal_280, 0x00000001);
					}
					unk_0x915804B434753CBD(Global_180A1, iLocal_280, &sLocal_239, &cLocal_271, 8f, -8f, 0x00000101, 0x00000000, 8f, 0x00000000);
					return 0x00000001;
				}
			}
			else
			{
				if (iLocal_281 != 0x00000000)
				{
					unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
					iLocal_281 = 0x00000000;
				}
				if (func_3(&uLocal_68, "PRSAUD", "FRAS_IG_7x", 0x00000003, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(Global_180A1);
					unk_0xE972B33144E77B35(Global_180A1, 0x00000010);
					if (!unk_0x69DF961355195C3C(iLocal_280))
					{
						iLocal_280 = unk_0xE9744DB7B8CA6965(vLocal_237, 0f, 0f, fLocal_238, 0x00000002);
						unk_0xC90224D9E95E5E3A(iLocal_280, 0x00000001);
					}
					unk_0x915804B434753CBD(Global_180A1, iLocal_280, &sLocal_239, &cLocal_271, 8f, -8f, 0x00000101, 0x00000000, 8f, 0x00000000);
					return 0x00000001;
				}
			}
		}
	}
	else
	{
		func_54();
		return 0x00000000;
	}
	return 0x00000000;
}

int func_27()
{
	if (!func_28())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_28()
{
	if (!unk_0x991B1F0980C62628() || unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0x00A15D69BCAA5267() > 0x00000008)
	{
		if (unk_0x00A15D69BCAA5267() != 0x0000000B)
		{
			return 0x00000000;
		}
		if (unk_0x00A15D69BCAA5267() == 0x0000000B)
		{
			if (unk_0x94EFC97F8A693855() > 0x00000000)
			{
				if (unk_0x192DE42720995A6E() > 0x00000064)
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

int func_29(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0x991B1F0980C62628())
	{
		if (unk_0x19EC8D83154D7CC1() != 0x00000003)
		{
			if (unk_0x00A15D69BCAA5267() <= 0x00000002 && unk_0x00A15D69BCAA5267() != 0x00000001)
			{
				return 0x00000001;
			}
		}
	}
	if (!unk_0x991B1F0980C62628())
	{
		if (func_21(0x0000000E))
		{
			return 0x00000000;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0x00000000;
		}
		if (!func_31(iParam0, func_32()))
		{
			return 0x00000000;
		}
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
			fVar1 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar0);
			if (fVar1 > 250f)
			{
				if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
				{
					if (!unk_0x0A059E0DB9253280(iParam1))
					{
						return 0x00000000;
					}
				}
				else if (!unk_0x8E28E832BEAC3DCE(vVar0, 1.5f))
				{
					return 0x00000000;
				}
			}
		}
		else if (iParam1 == func_30(Global_180A1) && iParam1 != 0x00000000)
		{
			Global_180A1 = 0x00000000;
		}
	}
	return 0x00000001;
}

int func_30(var uParam0)
{
	return uParam0;
}

bool func_31(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0x00000000;
}

int func_32()
{
	func_16();
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

void func_33()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_36();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		func_36();
		return;
	}
	func_34();
	if (Global_180A3 > 0x00000000)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_34()
{
	func_35((Global_180A3 - 0x00000001));
}

void func_35(int iParam0)
{
	Global_180A3 = iParam0;
}

void func_36()
{
	func_35(0x00000000);
}

void func_37()
{
	unk_0x523BCC9DC80CD82F(iLocal_236);
	unk_0x9E5E60D8C63FD9D1();
	while (!unk_0xC844350D5D58C99A(Global_180A1) || !unk_0xB87F6CF6E5628C67(iLocal_236))
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x73270B3C9CC833FD(Global_180A1, 0x00000001, 0x00000001);
	if (unk_0xC844350D5D58C99A(Global_180A1))
	{
		if (!unk_0xEB6A8945D1AC98A1(Global_180A1))
		{
			unk_0x93D47DFD0AE94949(Global_180A1, 0xFFFFFFFF);
		}
		unk_0x6DF7BF67E86AAE86(Global_180A1, 0x6F0783F5);
	}
	unk_0x73270B3C9CC833FD(Global_180A1, 0x00000001, 0x00000001);
	unk_0x4E885A246A9D983A(Global_180A1, 0x00000084, 0x00000001);
	unk_0x5E678B691C852774(Global_180A1, 0x00000010);
	func_39(&Global_180A1, Global_16E34);
	func_38(&uLocal_68, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	iLocal_235 = unk_0x7707E48765093646(iLocal_236, unk_0x68F4C0EC296D3901(Global_180A1, 0x00000001), 0x00000001, 0x00000001, 0x00000000);
	unk_0x9F528B1B53FBC5D9(iLocal_235, Global_180A1, unk_0x4A089F2B762B8D33(Global_180A1, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
}

void func_38(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_39(var uParam0, int iParam1)
{
	unk_0x25C5402CC10F76CD(*uParam0, 0x00000000);
	unk_0x4E885A246A9D983A(*uParam0, 0x00000014, 0x00000001);
	unk_0x5E678B691C852774(*uParam0, 0x00000010);
	if (iParam1 != 0xFADE4843)
	{
		unk_0x6DF7BF67E86AAE86(*uParam0, iParam1);
	}
}

void func_40()
{
	char[] cVar0[8];
	struct<109> Var1;
	struct<97> Var2;
	char[] cVar3[8];
	var uVar4;
	var uVar5;
	
	iLocal_67 = Global_17F63;
	func_46(iLocal_67, &vLocal_237, &fLocal_238, &cVar0);
	iLocal_236 = joaat("prop_cs_spray_can");
	Var1.f_1 = 0xFFFFFFFF;
	Var1.f_11 = 0x00000004;
	Var1.f_11.f_8 = 0x00000004;
	Var1.f_11.f_D = 0x00000004;
	Var1.f_11.f_12 = 0x00000004;
	Var1.f_11.f_18 = 0x00000004;
	Var1.f_11.f_1D = 0x00000004;
	Var1.f_11.f_22 = 0x00000004;
	Var1.f_3E = 0x00000008;
	Var1.f_60.f_7 = 0x00000015;
	Var1.f_60.f_8 = 0x00000006;
	Var2.f_1 = 0xFFFFFFFF;
	Var2.f_11 = 0x00000004;
	Var2.f_11.f_8 = 0x00000004;
	Var2.f_11.f_D = 0x00000004;
	Var2.f_11.f_12 = 0x00000004;
	Var2.f_11.f_18 = 0x00000004;
	Var2.f_11.f_1D = 0x00000004;
	Var2.f_11.f_22 = 0x00000004;
	Var2.f_3E = 0x00000008;
	Var2.f_60.f_7 = 0x00000015;
	Var2.f_60.f_8 = 0x00000006;
	Var1 = 0x00000000;
	Var1.f_2 = iLocal_67;
	Var1.f_3 = Global_177DE.f_2D;
	func_43(Var1, &Var2);
	func_41(iLocal_67, &sLocal_239, &cVar3, &cLocal_255, &uVar4, &uVar5);
	StringCopy(&cLocal_271, "Lamar_tagging_EXIT_LOOP_LAMAR", 64);
}

int func_41(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)
{
	*uParam4 = 0x00000009;
	*uParam5 = 0x00000008;
	switch (iParam0)
	{
		case 0x0000004D:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_REACT_Amanda", 64);
			return 0x00000001;
			break;
		
		case 0x0000004E:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Amanda", 64);
			StringCopy(sParam3, "BED_EXIT_Amanda", 64);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			func_42(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@SITTING", "IDLE", "EXIT_FORWARD");
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000056:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Jimmy", 64);
			StringCopy(sParam3, "EXIT_Jimmy", 64);
			return 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Amanda", 64);
			StringCopy(sParam3, "EXIT_Amanda", 64);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_amanda", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_amanda", 64);
			return 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_AMA", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_AMA", 64);
			return 0x00000001;
			break;
		
		case 0x00000096:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_RON", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_RON", 64);
			return 0x00000001;
			break;
		
		case 0x000000AA:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_AMA", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_AMA", 64);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_JMY", 64);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_TRA", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_TRA", 64);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_AMA", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_AMA", 64);
			*uParam5 |= 0x00040000;
			return 0x00000001;
			break;
		
		case 0x00000097:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_AMANDA", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_AMANDA", 64);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Jimmy", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Jimmy", 64);
			return 0x00000001;
			break;
		
		case 0x00000098:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_AMA", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_AMA", 64);
			*uParam5 |= 0x00040000;
			return 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_HOOKER", 64);
			StringCopy(sParam3, "EXIT_HOOKER", 64);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_JMY", 64);
			return 0x00000001;
			break;
		
		case 0x000000A9:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_JMY", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_JMY", 64);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_AMA", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_AMA", 64);
			return 0x00000001;
			break;
		
		case 0x000000CB:
		case 0x000000CE:
		case 0x000000CF:
			if (func_41(0x000000CD, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 0x00000001;
			}
			break;
		
		case 0x000000CC:
			if (func_41(0x000000CD, sParam1, sParam2, sParam3, uParam4, uParam5))
			{
				return 0x00000001;
			}
			break;
		
		case 0x000000CD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE_ROT", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_ROT", 64);
			return 0x00000001;
			break;
		
		case 0x000000C4:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Tanisha", 64);
			StringCopy(sParam3, "Tanisha_Argue_Tanisha", 64);
			return 0x00000001;
			break;
		
		case 0x000000D7:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_GIRL", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_GIRL", 64);
			return 0x00000001;
			break;
		
		case 0x000000DD:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Hooker", 64);
			StringCopy(sParam3, "switch_ped_Hooker", 64);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_exit_lamar", 64);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_lamar", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_lamar", 64);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_lamar", 64);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_lamar", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_lamar", 64);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped_f_a", 64);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Bartender", 64);
			StringCopy(sParam3, "EXIT_Bartender", 64);
			return 0x00000001;
			break;
		
		case 0x000000ED:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_BOUNCER", 64);
			StringCopy(sParam3, "EXIT_BOUNCER", 64);
			return 0x00000001;
			break;
		
		case 0x00000121:
			func_42(sParam1, sParam2, sParam3, "SWITCH@MICHAEL@PIER", "pier_lean_smoke_idle", "pier_lean_smoke_idle");
			return 0x00000001;
			break;
		
		case 0x00000106:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_NBR", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_NBR", 64);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_GENERIC", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_GENERIC", 64);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_BUSKER", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_BUSKER", 64);
			return 0x00000001;
			break;
		
		case 0x00000124:
		case 0x00000127:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_1_FLOYD", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000125:
		case 0x00000126:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_FLOYD", 64);
			StringCopy(sParam3, "Bed_GetUp_2_FLOYD", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x0000012B:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_FLOYD", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x0000012C:
		case 0x0000012D:
		case 0x0000012E:
		case 0x0000012F:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Console_Get_Along_FLOYD", 64);
			*uParam4 |= 0x00000400;
			*uParam5 |= 0x00000400;
			return 0x00000001;
			break;
		
		case 0x00000128:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_floyd", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_floyd", 64);
			return 0x00000001;
			break;
		
		case 0x00000129:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_floyd", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_floyd", 64);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_FLOYD", 64);
			StringCopy(sParam3, "Pineapple_EXIT_FLOYD", 64);
			return 0x00000001;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0x00000000;
}

void func_42(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_43(struct<109> Param0, var uParam1)
{
	uParam1->f_77 = 0x00000000;
	switch (Param0.f_2)
	{
		case 0x00000000:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x55966344;
			uParam1->f_6E = 0x55966344;
			func_45(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000000;
			break;
		
		case 0x00000001:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x00000002:
			*uParam1 = { Global_17A57[0x00000000 /*109*/] };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = Global_1808B[0x00000000];
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = { Global_17A57[0x00000001 /*109*/] };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = Global_1808B[0x00000001];
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = { Global_17A57[0x00000002 /*109*/] };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = Global_1808B[0x00000002];
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = Global_1808B[Param0.f_3];
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = Global_1808B[Param0.f_3];
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = Global_1808B[Param0.f_3];
			return 0x00000001;
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x37D339A1;
			uParam1->f_6E = 0x37D339A1;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000000D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x37D339A1;
			uParam1->f_6E = 0x37D339A1;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x1AE73569;
			func_44(uParam1, 0x00000090, 0xC572E06A, 0xC572E06A, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x8B2F140E;
			uParam1->f_6E = 0x8B2F140E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x950B6492;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000013C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000013B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_44(uParam1, 0x0000001E, 0xC572E06A, 0xC572E06A, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -0.7035f, -0.0282f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000004F:
		case 0x00000050:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x87B9A382, 0x87B9A382, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 0x00000050)
			{
				func_45(uParam1);
			}
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000052:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000054:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000123:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000007F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x00000068:
		case 0x00000051:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			if (Param0.f_2 == 0x0000005C)
			{
				uParam1->f_76 = 0x00000001;
			}
			if (Param0.f_2 == 0x00000068)
			{
				uParam1->f_76 = 0x00000000;
			}
			if (Param0.f_2 == 0x00000051)
			{
				func_45(uParam1);
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			if (Param0.f_2 == 0x0000005E)
			{
				func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -1.71f, 1.05f, 0f, -138f);
			}
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0x7D8F4411;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000006C:
		case 0x0000006D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000029:
		case 0x00000070:
		case 0x00000071:
		case 0x0000007B:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x00000093:
		case 0x00000094:
		case 0x00000095:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000014, 0x6A67A5CC, 0x6A67A5CC, 0.98f, 0.8017f, -0.42f, -180f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x87B9A382;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_44(uParam1, 0x0000000F, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_44(uParam1, 0x0000000F, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_44(uParam1, 0x0000000E, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_44(uParam1, 0x0000000E, 0xC572E06A, 0x1AE73569, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -2.04f, -0.15f, 0f, 14.4f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000073:
		case 0x00000074:
		case 0x00000075:
		case 0x00000061:
		case 0x000000A2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000006E:
		case 0x0000006F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000083:
		case 0x00000084:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -1.71f, 1.05f, 0f, -138f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x0000000E, 0x6A67A5CC, 0x6A67A5CC, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A3:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000A7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x0000000E, 0xC572E06A, 0x6A67A5CC, -0.8472f, 0.155f, 0f, 152.556f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A8:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000A9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x0000000E, 0x6A67A5CC, 0x6A67A5CC, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000AA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000011, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000AB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x0000000E, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000AC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x0000000F, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000AD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000AE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
	}
	switch (Param0.f_2)
	{
		case 0x000000AF:
		case 0x000000B0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B3:
		case 0x000000B4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000B5:
		case 0x000000B6:
		case 0x000000B7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 1f, 1f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0xC572E06A, 0x6A67A5CC, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C3:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			if (Global_3)
			{
				uParam1->f_76 = 0x00000001;
			}
			return 0x00000001;
			break;
		
		case 0x000000C6:
		case 0x000000C7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C8:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000CA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000B8:
		case 0x000000B9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000BF:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x0000002B, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000C5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000CB:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000CC:
		case 0x000000CD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 0x000000CD)
			{
				uParam1->f_70 = { 3.4381f, -0.8269f, 0f };
				uParam1->f_73 = -87.6612f;
			}
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000017:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000D3:
		case 0x000000D5:
		case 0x000000D8:
		case 0x000000D9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000D4:
		case 0x000000D6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
			break;
		
		case 0x000000D7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, -0.7949f, -0.508f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DE:
		case 0x000000DF:
		case 0x000000E0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000E2:
		case 0x000000E3:
		case 0x000000E4:
		case 0x000000E5:
		case 0x000000E6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000DC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000E1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000013, 0x6A67A5CC, 0x6A67A5CC, 1.23f, 0.6f, -1f, 34.56f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000E7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x000000E8:
		case 0x000000E9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EB:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EC:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000ED:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000EF:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000111:
		case 0x00000112:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000FA:
		case 0x000000FB:
		case 0x000000FC:
		case 0x000000FD:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F3:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F4:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000010F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x00000118:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			return 0x00000001;
			break;
		
		case 0x00000110:
		case 0x00000109:
		case 0x0000010A:
		case 0x0000010B:
		case 0x0000010C:
		case 0x0000010D:
		case 0x0000010E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			uParam1->f_76 = 0x00000001;
			func_45(uParam1);
			if (Param0.f_2 == 0x00000109)
			{
				uParam1->f_76 = 0x00000001;
			}
			if (Param0.f_2 == 0x0000010C)
			{
				uParam1->f_76 = 0x00000000;
			}
			if (Param0.f_2 == 0x0000010B)
			{
				func_44(uParam1, 0x00000090, 0xC572E06A, 0x7D8F4411, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 0x0000010A)
			{
				func_44(uParam1, 0x00000090, 0x7D8F4411, 0x7D8F4411, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 0x00000001;
			break;
		
		case 0x000000F6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000107:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000116:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000117:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000108:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000FF:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F8:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x000000F9:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f, unk_0x79833B02DBD2A244(-180f, 180f));
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000119:
		case 0x0000011A:
		case 0x0000011B:
		case 0x0000011C:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x00000113:
		case 0x00000114:
		case 0x00000115:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xF1F17AE7;
			uParam1->f_6E = 0xF1F17AE7;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
		
		case 0x000000FE:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000011D:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000100:
		case 0x00000101:
		case 0x00000102:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000103:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000104:
		case 0x00000105:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000011E:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000011F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000120:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000106:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000121:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000090, 0x87B9A382, 0x87B9A382, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000122:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000124:
		case 0x00000127:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000125:
		case 0x00000126:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000012B:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000012C:
		case 0x0000012D:
		case 0x0000012E:
		case 0x0000012F:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000128:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 1.41f, 1.35f, 0f, 168f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000129:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x0000012A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_44(uParam1, 0x00000020, 0x6A67A5CC, 0x6A67A5CC, 0.72f, -0.69f, 0f, 172.44f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000130:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000131:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x87B9A382;
			uParam1->f_6E = 0x87B9A382;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000132:
		case 0x00000133:
		case 0x00000134:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000135:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0xC572E06A;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000136:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000137:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6A67A5CC;
			uParam1->f_6E = 0x6A67A5CC;
			func_45(uParam1);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000138:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x6134071B;
			uParam1->f_6E = 0x6134071B;
			func_44(uParam1, 0x00000090, 0x1C43F4CF, 0xA573B67C, -9.5443f, -3.191f, -0.3f, 180f);
			uParam1->f_76 = 0x00000001;
			return 0x00000001;
			break;
		
		case 0x00000139:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x7D8F4411;
			uParam1->f_6E = 0xC572E06A;
			func_45(uParam1);
			uParam1->f_76 = 0x00000000;
			return 0x00000001;
			break;
		
		case 0x0000013A:
			*uParam1 = { Param0 };
			uParam1->f_6D = 0x93A5526E;
			uParam1->f_6E = 0x93A5526E;
			func_45(uParam1);
			uParam1->f_76 = 0x00000002;
			return 0x00000001;
			break;
	}
	*uParam1 = { Param0 };
	uParam1->f_6D = 0x55966344;
	uParam1->f_6E = 0x55966344;
	func_45(uParam1);
	uParam1->f_76 = 0x00000000;
	return 0x00000000;
}

void func_44(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam5)
{
	uParam0->f_6F = iParam1;
	uParam0->f_74 = iParam2;
	uParam0->f_75 = iParam3;
	uParam0->f_70 = { vParam4 };
	uParam0->f_73 = fParam5;
}

void func_45(var uParam0)
{
	func_44(uParam0, 0x00000091, 0x55966344, 0x55966344, 0f, 0f, 0f, 0f);
}

int func_46(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (func_49(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 0x00000000;
				break;
			
			case 0x00000001:
				func_47(&iVar0);
				if (iVar0 < 0x00000005)
				{
					*uParam1 = { Global_16EFB[iVar0 /*9*/].f_3 };
					*uParam2 = Global_16EFB[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 0x00000001;
				}
				else
				{
					*uParam1 = { Global_16EFB[0x00000000 /*9*/].f_3 };
					*uParam2 = Global_16EFB[0x00000000 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 0x00000001;
				}
				break;
			
			case 0x00000002:
				*uParam1 = { Global_17A57[0x00000000 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000000 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000003:
				*uParam1 = { Global_17A57[0x00000001 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000001 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000004:
				*uParam1 = { Global_17A57[0x00000002 /*109*/].f_4 };
				*uParam2 = Global_17A57[0x00000002 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000005:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000000 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000000];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000006:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000001 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000001];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
			
			case 0x00000007:
				*uParam1 = { Global_1B416.f_936.f_21B.f_8FC[0x00000002 /*3*/] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_1B416.f_936.f_21B.f_906[0x00000002];
				StringCopy(sParam3, "", 32);
				return 0x00000001;
				break;
		}
		*uParam1 = { Global_17B9F[iParam0 /*3*/] };
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_47(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_1B416.f_936.f_21B.f_10E3;
	vVar1 = { Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] };
	if (func_48(vVar1, 0f, 0f, 0f, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	}
	*uParam0 = 0x00000005;
	fVar2 = 9999999f;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000005)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38.f_B[iVar3], 0x00000000))
		{
			vVar4 = { Global_16EFB[iVar3 /*9*/].f_3 };
			fVar5 = SYSTEM::VDIST(vVar1, vVar4);
			if (fVar5 > 150f)
			{
				if (fVar5 < fVar2)
				{
					*uParam0 = iVar3;
					fVar2 = fVar5;
				}
			}
		}
		iVar3++;
	}
	return *uParam0 != 0x00000005;
}

bool func_48(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_49(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			func_47(&iVar1);
			if (iVar1 < 0x00000005)
			{
				*uParam1 = Global_16EFB[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			else
			{
				*uParam1 = Global_16EFB[0x00000000 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			*uParam1 = Global_17A57[0x00000000 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam1 = Global_17A57[0x00000001 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam1 = Global_17A57[0x00000002 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000000];
			StringCopy(sParam2, func_53(Global_1B416.f_936.f_21B.f_90A[0x00000000]), 32);
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000001];
			StringCopy(sParam2, func_53(Global_1B416.f_936.f_21B.f_90A[0x00000001]), 32);
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000002];
			StringCopy(sParam2, func_53(Global_1B416.f_936.f_21B.f_90A[0x00000002]), 32);
			return 0x00000001;
			break;
		
		case 0x0000000B:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			return func_49(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000A:
			return func_49(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000D:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000E:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000F:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000C:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000010:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000015:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000016:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000004A:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
			return func_49(0x000000D0, uParam1, sParam2);
			break;
		
		case 0x00000018:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000043:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000019:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001A:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001B:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001D:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000001E:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000001F:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000020:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000021:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000023:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000024:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000025:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000003A:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003B:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003C:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000026:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000027:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000028:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000029:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002A:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002B:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002C:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002D:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002E:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x0000002F:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000031:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000030:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000007C:
			vVar0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000032:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000033:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000034:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000042:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000035:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000036:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000037:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000038:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000039:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003E:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003F:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000044:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000045:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000040:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000041:
			if (func_52(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000046:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000047:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000048:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x00000049:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000000;
			break;
		
		case 0x000000EA:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000013C:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000013B:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000004C:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000004E:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000004F:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000050:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000051:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000052:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000054:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000055:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000059:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005A:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005B:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005C:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005D:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005E:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000005F:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000060:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000061:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000062:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000063:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000064:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000065:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000066:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000067:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000068:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000069:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006A:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006B:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006C:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006D:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006E:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000006F:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000070:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000071:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000087:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000088:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000089:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008A:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008B:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008C:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008D:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008E:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000008F:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000090:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000091:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000092:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000093:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000094:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000095:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000096:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000072:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000073:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000074:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000075:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000076:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000077:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000078:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000079:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007A:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000007B:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000007F:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000082:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000083:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000084:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000085:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000097:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000098:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000099:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009B:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009C:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x0000009D:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009E:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A1:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A2:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A3:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x000000A4:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A6:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000A8:
			if (func_50(0x00000000, 0x00000019, &uVar2, &fVar3))
			{
				*uParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 0x00000001;
			}
			break;
		
		case 0x000000A9:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
		
		case 0x000000AA:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AB:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AD:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AC:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000AE:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 0x00000001;
			break;
	}
	switch (iParam0)
	{
		case 0x000000AF:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B0:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B1:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B2:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B3:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B4:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000B5:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000B6:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B7:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B8:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000B9:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000BA:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BB:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BC:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BD:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BE:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000BF:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000C4:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 0x00000001;
			break;
		
		case 0x000000C5:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C2:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C3:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C6:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C7:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C8:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000C9:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CA:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CB:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CC:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CD:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CE:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000CF:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D0:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D1:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D2:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D3:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D4:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D5:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D6:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D7:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D8:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000D9:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DD:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DE:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 0x00000001;
			break;
		
		case 0x000000DF:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 0x00000001;
			break;
		
		case 0x000000E0:
			return func_49(0x000000DE, uParam1, sParam2);
			break;
		
		case 0x000000E2:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E3:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E4:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E5:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E6:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E7:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E8:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000E9:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EB:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x000000EC:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x000000ED:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EE:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000EF:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F0:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F1:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F2:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F5:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x000000F3:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F6:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F7:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FA:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FB:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FC:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FD:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FE:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x000000FF:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000108:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000109:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010A:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010B:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010C:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010D:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010E:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000010F:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000110:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000111:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000112:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000113:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000114:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000115:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000116:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000117:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000118:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000119:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011A:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011B:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011C:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011D:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000100:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000101:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000102:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000103:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000104:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000105:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011E:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000011F:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000120:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000106:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000107:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000121:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000122:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 0x00000001;
			break;
		
		case 0x00000123:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000124:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000125:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000126:
			return func_49(0x00000125, uParam1, sParam2);
			break;
		
		case 0x00000127:
			return func_49(0x00000124, uParam1, sParam2);
			break;
		
		case 0x0000012B:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012C:
			return func_49(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012D:
			return func_49(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012E:
			return func_49(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012F:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000128:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000129:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012A:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x00000130:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000131:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 0x00000001;
			break;
		
		case 0x00000132:
			vVar4 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar4.x, -vVar4.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000133:
			vVar5 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar5.x, -vVar5.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000134:
			vVar6 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar6.x, -vVar6.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000135:
			vVar7 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = unk_0xE7D606C557C86100(-vVar7.x, -vVar7.y);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000136:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000137:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 0x00000001;
			break;
		
		case 0x00000138:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x00000139:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
		
		case 0x0000013A:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 0x00000001;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0x00000000;
}

int func_50(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 0x00000001;
					break;
				
				case 0x00000001:
					if (func_50(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			return 0x00000000;
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 0x00000001;
					break;
				
				case 0x00000001:
					if (func_50(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					if (func_50(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000002:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000015:
			switch (iParam0)
			{
				case 0x00000000:
					if (func_50(0x00000000, 0x00000005, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000C:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000F:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000010:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000011:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000014:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000016:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, unk_0x79833B02DBD2A244(-0.5f, 0.5f), unk_0x79833B02DBD2A244(-0.5f, 0.5f)) };
					*uParam3 = (306f + unk_0x79833B02DBD2A244(10f, 10f));
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000017:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = unk_0xE7D606C557C86100(*uParam2, uParam2->f_1);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000018:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000013:
			switch (iParam0)
			{
				case 0x00000000:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000019:
			switch (iParam0)
			{
				case 0x00000000:
				case 0x00000001:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001A:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000020:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001B:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000029:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000021:
			switch (iParam0)
			{
				case 0x00000001:
					if (func_50(0x00000001, 0x00000020, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000026:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001F:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000022:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000023:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000025:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000027:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000028:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000024:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001C:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002A:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002B:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000002C:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002D:
			switch (iParam0)
			{
				case 0x00000001:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000002E:
			return func_50(iParam0, 0x0000001A, uParam2, uParam3);
			break;
		
		case 0x0000002F:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000003:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000030:
		case 0x00000044:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000031:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0x00000000;
					break;
			}
			break;
		
		case 0x00000032:
		case 0x00000045:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000033:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000034:
		case 0x00000043:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000035:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000036:
		case 0x00000046:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000037:
		case 0x00000047:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000040:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000038:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000000:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000039:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000000:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003A:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000001:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003B:
		case 0x00000048:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000003C:
			if (func_50(iParam0, 0x0000003B, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
				*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000041:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000042:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000049:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004A:
			switch (iParam0)
			{
				case 0x00000002:
				case 0x00000001:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004B:
		case 0x00000054:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004C:
		case 0x0000004E:
		case 0x00000055:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000004D:
			if (func_50(iParam0, 0x0000002F, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 0x00000001;
			}
			break;
		
		case 0x0000004F:
		case 0x00000056:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000050:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000051:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000052:
		case 0x00000053:
			switch (iParam0)
			{
				case 0x00000003:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000057:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000058:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000059:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005A:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005B:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005C:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005D:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005E:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000005F:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000060:
		case 0x00000062:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000061:
			switch (iParam0)
			{
				case 0x00000005:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000063:
			switch (iParam0)
			{
				case 0x00000006:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 0x00000001;
					break;
				
				case 0x00000007:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000064:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000065:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000066:
		case 0x00000067:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000068:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000069:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006A:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006B:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006C:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006D:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000006E:
		case 0x0000006F:
			switch (iParam0)
			{
				case 0x00000008:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000074:
			switch (iParam0)
			{
				case 0x00000009:
				case 0x0000000B:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000075:
			switch (iParam0)
			{
				case 0x00000009:
				case 0x0000000B:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000070:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000071:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000072:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000073:
			switch (iParam0)
			{
				case 0x00000009:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000076:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000077:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000078:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000079:
			switch (iParam0)
			{
				case 0x0000000A:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007A:
			switch (iParam0)
			{
				case 0x0000000B:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007B:
			switch (iParam0)
			{
				case 0x0000000B:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007C:
			switch (iParam0)
			{
				case 0x0000000B:
				case 0x00000008:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007D:
			switch (iParam0)
			{
				case 0x0000000C:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007E:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000007F:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000080:
			switch (iParam0)
			{
				case 0x0000000D:
					if (Global_1B416.f_4860[0x00000002] == 0x0000012B)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 0x00000001;
					}
					else if (((Global_1B416.f_4860[0x00000002] == 0x0000012C || Global_1B416.f_4860[0x00000002] == 0x0000012D) || Global_1B416.f_4860[0x00000002] == 0x0000012E) || Global_1B416.f_4860[0x00000002] == 0x0000012F)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 0x00000001;
					}
					if (func_51())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 0x00000001;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000081:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = (102f - 90.6729f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000082:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000083:
			switch (iParam0)
			{
				case 0x0000000D:
					if (func_50(iParam0, 0x00000082, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, unk_0x79833B02DBD2A244(-1f, 1f), unk_0x79833B02DBD2A244(-1f, 1f)) };
						*uParam3 = (*uParam3 + unk_0x79833B02DBD2A244(-10f, 10f));
						return 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000084:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000085:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000086:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000087:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000088:
			switch (iParam0)
			{
				case 0x0000000D:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 0x00000001;
					break;
				
				case 0x0000000E:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000089:
		case 0x0000008A:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0x00000000;
			break;
		
		case 0x0000008C:
		case 0x0000008D:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0x00000000;
			break;
		
		default:
			*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
			*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
			return 0x00000000;
			break;
	}
	*uParam2 = { unk_0x79833B02DBD2A244(-10f, 10f), unk_0x79833B02DBD2A244(-10f, 10f), 0f };
	*uParam3 = unk_0x79833B02DBD2A244(0f, 360f);
	return 0x00000000;
}

int func_51()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_52(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x0000000B:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_52(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000A:
			return func_52(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000D:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0x780CBE4B:
			return "v_chopshop";
			break;
		
		case 0x20D7E464:
			return "v_franklins";
			break;
		
		case 0x0D5520EF:
			return "v_franklinshouse";
			break;
		
		case 0x7C0DD540:
			return "v_methlab";
			break;
		
		case 0xC31E7C77:
			return "v_michael";
			break;
		
		case 0x4E55A04E:
			return "v_strip3";
			break;
		
		case 0x6438554B:
			return "v_trailer";
			break;
		
		case 0x66CE0AC8:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_54()
{
	if (iLocal_281 != 0x00000000)
	{
		unk_0xF7E25143642732EA(iLocal_281, 0x00000000);
		iLocal_281 = 0x00000000;
	}
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

