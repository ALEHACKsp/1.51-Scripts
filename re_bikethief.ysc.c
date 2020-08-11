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
	struct<4> Local_44[10];
	bool bLocal_45 = 0;
	vector3 vLocal_46 = { 0f, 0f, 0f };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	char* sLocal_247 = NULL;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	char* sLocal_253 = NULL;
	char* sLocal_254 = NULL;
	char* sLocal_255 = NULL;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	vector3 vLocal_261 = { 0f, 0f, 0f };
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = -1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 1000;
	var uLocal_286 = 1000;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	struct<2> Local_291 = { 0, 5 } ;
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
	var uLocal_306 = 0;
	var uLocal_307 = 5;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
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
	iLocal_67 = 0x00000001;
	sLocal_250 = "REBTH_HANGAR";
	sLocal_251 = "REBTH_RUNSOF";
	sLocal_252 = "REBTH_TAUNT";
	sLocal_264 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_265 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_267 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_268 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_269 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_270 = "RANDOM@BICYCLE_THIEF@THANKS";
	vLocal_54 = { ScriptParam_291.f_1[0x00000000 /*3*/] };
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		func_226();
	}
	if (SYSTEM::VDIST2(vLocal_54, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		iLocal_263 = 0x00000001;
	}
	else if (SYSTEM::VDIST2(vLocal_54, 769.3f, -151.66f, 73.79f) < 16f)
	{
		iLocal_263 = 0x00000002;
	}
	else if (SYSTEM::VDIST2(vLocal_54, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		iLocal_263 = 0x00000003;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) != 0x00000000)
		{
			unk_0x10FAF14A60A0DBE1();
		}
		else if (func_225(unk_0x16F2683693E537C9(), vLocal_54, 0x00000001) < 100f)
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	if (iLocal_263 != 0x00000003)
	{
		if (func_185(vLocal_54, 0x0000001A, iLocal_263, 0x00000000, 0x00000000))
		{
			func_182(0x0000001A);
		}
		else
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	else if (func_185(vLocal_54, 0x00000008, 0x00000000, 0x00000000, 0x00000000))
	{
		func_182(0x00000008);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	iLocal_262 = func_180();
	iLocal_271 = unk_0x7D6CA5F52B3748BF(vLocal_54 - Vector(20f, 20f, 20f), vLocal_54 + Vector(20f, 20f, 20f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_179();
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x0000001C);
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x0000000D);
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000023);
		}
		if (unk_0x338D6FF72D84D90F() || iLocal_47 > 0x00000001)
		{
			if (func_159())
			{
				func_158();
				func_226();
			}
			else
			{
				switch (iLocal_47)
				{
					case 0x00000000:
						func_155();
						break;
					
					case 0x00000001:
						if (func_154())
						{
							func_158();
							func_226();
						}
						else
						{
							func_142();
						}
						break;
					
					case 0x00000002:
						func_111();
						func_107();
						func_106();
						func_105();
						func_103();
						func_102();
						func_94();
						break;
					
					case 0x00000003:
						func_92();
						func_74();
						func_65();
						break;
					
					case 0x00000004:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_226();
		}
	}
}

void func_1()
{
	if (func_64(unk_0x16F2683693E537C9()) && func_64(iLocal_50))
	{
		if (func_63(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001) > 50f)
		{
			func_62(0x00000008);
			func_26();
		}
		else if ((unk_0x1C0640BA9A7327B3() - iLocal_77) > 0x00002710)
		{
			func_62(0x00000008);
			func_26();
		}
		else if ((iLocal_275 == 0x00000000 && !func_25()) && func_2(&uLocal_82, "REBTHAU", sLocal_249, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			iLocal_275 = 0x00000001;
		}
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0x00000000);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					func_23();
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
		if (func_22(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_21();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_9();
		func_4();
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
		func_23();
	}
	return 0x00000000;
}

void func_4()
{
	if (!func_5())
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

int func_5()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_8())
	{
		return 0x00000000;
	}
	if (func_6(unk_0xD803B885F5E47A62()))
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

bool func_6(int iParam0)
{
	return func_7(iParam0, 0x00000014);
}

bool func_7(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_8()
{
	return 0xFFFFFFFF;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_12()
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

void func_13()
{
	if (func_20(0x0000000E))
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
		Global_4C1E = func_14();
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

int func_14()
{
	func_15();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_18(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_17(unk_0x16F2683693E537C9());
			if (func_16(iVar0) && (!func_20(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_16(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_16(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_19(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_20(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_21()
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

bool func_22(int iParam0, int iParam1)
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

void func_23()
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_25()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_26()
{
	int iVar0;
	
	if (iLocal_263 == 0x00000003)
	{
		func_58(func_17(unk_0x16F2683693E537C9()), 0x00000004, 0x00000005);
	}
	else
	{
		func_58(func_17(unk_0x16F2683693E537C9()), 0x00000001, 0x00000003);
	}
	if (iLocal_263 != 0x00000003)
	{
		func_39(0x0000001A, iLocal_263);
	}
	else
	{
		func_39(0x00000008, 0x00000000);
	}
	if (iLocal_263 == 0x00000001)
	{
		iVar0 = func_14();
		switch (iVar0)
		{
			case 0x00000000:
				while (!func_30(0xA3845BE1, 0x00000006, 0x00000001, 0x00000090, 0x006DDD00, 0x00002710, 0xFFFFFFFF, 0x000000C9, 0xFFFFFFFF, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
				break;
			
			case 0x00000001:
				while (!func_30(0xC5942008, 0x00000006, 0x00000002, 0x00000090, 0x006DDD00, 0x00002710, 0xFFFFFFFF, 0x000000C9, 0xFFFFFFFF, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
				break;
			
			case 0x00000002:
				while (!func_30(0x9141374B, 0x00000006, 0x00000004, 0x00000090, 0x006DDD00, 0x00002710, 0xFFFFFFFF, 0x000000C9, 0xFFFFFFFF, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
				break;
			}
	}
	func_27();
	func_226();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0x00000000))
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

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_29(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam4 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam7 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_362 < 0x0000000A)
	{
		Var0 = iParam0;
		Var0.f_3 = func_38(iParam1);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		Global_1B416.f_1E03.f_2FD[Global_1B416.f_1E03.f_362 /*10*/] = { Var0 };
		Global_1B416.f_1E03.f_362++;
		return 0x00000001;
	}
	else
	{
		Var1 = { func_37(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0x00000000;
		func_36(&iVar2);
		iVar3 = func_35(Var1, Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]);
		if (iVar3 == 0x00000002)
		{
			func_33(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]);
			Global_1B416.f_1E03.f_2FD[iVar2 /*10*/] = { Var1 };
			func_32(&Var1);
			return 0x00000001;
		}
		else if (iVar3 == 0x00000001)
		{
			if (func_31(Var1))
			{
				func_33(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]);
				Global_1B416.f_1E03.f_2FD[iVar2 /*10*/] = { Var1 };
				func_32(&Var1);
				return 0x00000001;
			}
			else
			{
				if (!func_31(Global_1B416.f_1E03.f_2FD[iVar2 /*10*/]))
				{
					Global_1B416.f_1E03.f_2FD[iVar2 /*10*/] = { Var1 };
					func_32(&Var1);
					return 0x00000001;
				}
				func_32(&Var1);
				return 0x00000001;
			}
		}
		else
		{
			func_33(Var1);
			func_32(&Var1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_31(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_32(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_33(struct<10> Param0)
{
	if (func_31(Param0))
	{
		func_34(Param0.f_8, 0x00000000);
	}
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_35(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 0x00000002;
	}
	if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_36(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (func_35(Global_1B416.f_1E03.f_2FD[iVar0 /*10*/], Global_1B416.f_1E03.f_2FD[*iParam0 /*10*/]) == 0x00000000)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_37(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_38(iParam1);
	Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
	return Var0;
}

int func_38(int iParam0)
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

void func_39(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_56();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_55(iParam0))
	{
		func_54(iParam0, iParam1);
		if (!func_53(0x00000033))
		{
			func_49("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_52(), 0x00000000, 0x0000008A, 0x00000000);
			func_48(0x00000033);
		}
		if (func_47(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_46(iParam0, iParam1) != 0x00000142)
		{
			func_40(func_46(iParam0, iParam1), vLocal_46.x, vLocal_46.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_62(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_62(0x00000007);
			}
			else
			{
				func_62(0x00000001);
			}
		}
	}
}

void func_40(int iParam0, var uParam1, var uParam2)
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
		func_44((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_41();
	}
}

void func_41()
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
		func_43(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_42() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_28();
				}
			}
		}
	}
}

int func_42()
{
	return Global_7830;
}

int func_43(int iParam0, int iParam1)
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

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_45();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_45()
{
	return Global_1407E9;
}

int func_46(int iParam0, int iParam1)
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

int func_47(int iParam0)
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

void func_48(int iParam0)
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

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_50(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_51();
	}
}

void func_51()
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

int func_52()
{
	func_15();
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

int func_53(int iParam0)
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

void func_54(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_55(int iParam0)
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

int func_56()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_57(Var0);
	return uVar1;
}

int func_57(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0] = (Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 0x00000003:
			iVar1 = 0x00002CF7;
			switch (iParam1)
			{
				case 0x00000001:
					iVar1 = 0x00000048;
					break;
				
				case 0x00000003:
					iVar1 = 0x0000004A;
					break;
				
				case 0x00000002:
					iVar1 = 0x00000049;
					break;
				
				case 0x00000004:
					iVar1 = 0x0000004B;
					break;
				
				case 0x00000005:
					iVar1 = 0x0000004C;
					break;
				
				case 0x00000006:
					iVar1 = 0x0000004D;
					break;
				
				case 0x00000007:
					iVar1 = 0x0000004E;
					break;
			}
			if (iVar1 != 0x00002CF7)
			{
				iVar0 = func_61(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_59(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_60(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_60(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_45();
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

int func_61(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_60(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_62(int iParam0)
{
	Global_1B408 = iParam0;
}

float func_63(int iParam0, int iParam1, bool bParam2)
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

int func_64(int iParam0)
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

void func_65()
{
	if (func_64(iLocal_50) && func_73(iLocal_51))
	{
		if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000000))
		{
			func_72(&uLocal_288);
			func_71(&iLocal_80);
			if (iLocal_78 == 0x00000000 && !unk_0xE4EDC4B0E92C078B(iLocal_79))
			{
				iLocal_79 = func_70(iLocal_51, 0x00000000, 0x00000000);
			}
		}
		else
		{
			func_71(&iLocal_79);
			if (!unk_0xE4EDC4B0E92C078B(iLocal_80))
			{
				iLocal_80 = func_67(iLocal_50, 0x00000000, 0x00000091);
				if (iLocal_289 == 0x00000000)
				{
					func_66(&uLocal_288);
					iLocal_289 = 0x00000001;
				}
			}
		}
	}
}

void func_66(var uParam0)
{
	*uParam0 = 0xFFFFFF9D;
}

int func_67(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_69(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_69(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_69(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_69(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
{
	return func_68(iParam0, !bParam1, bParam2);
}

void func_71(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_72(var uParam0)
{
	*uParam0 = (unk_0x1C0640BA9A7327B3() - 0x00001388);
}

int func_73(int iParam0)
{
	if (func_64(iParam0))
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

void func_74()
{
	float fVar0;
	
	if (func_64(iLocal_50) && func_73(iLocal_51))
	{
		func_91(iLocal_80, &uLocal_288);
		if (fLocal_72 > 0f)
		{
			fVar0 = func_63(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001);
			if (fVar0 > (fLocal_72 + fLocal_65))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000000))
				{
					func_62(0x00000007);
					func_26();
				}
				else
				{
					func_226();
				}
			}
		}
		else
		{
			fLocal_72 = func_63(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001);
			if (unk_0x562F77A7F33D2E46("RE_CAR_STEAL_SCENE"))
			{
				unk_0x06FF977AA95DCCE3(iLocal_51, 0x00000000);
				unk_0x8910D3D58E0132B8("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_256 == 0x00000000)
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_50, 40f, 40f, 40f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_90();
				if (iLocal_259 == 0x00000000)
				{
					if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_50, 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (((((unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000000) && unk_0x7069CC4DE1EA3FAA(iLocal_50, unk_0x16F2683693E537C9(), 30f)) && func_81(iLocal_50, unk_0x16F2683693E537C9(), 0x432A0000, 0x00000001, 0x000000FA, 0x00000007)) && !unk_0x869EFD0BC0868856(iLocal_50)) && !unk_0xA48EBBEA418ADC94(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", "REBTH_APEBIK", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_50, sLocal_269, "RETURNING_FRONT_B", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
							iLocal_259 = 0x00000001;
						}
					}
					else
					{
						iLocal_259 = 0x00000001;
					}
				}
			}
		}
		else if (((!unk_0x12DE711B1C681E9E(iLocal_51, iLocal_50, 35f, 35f, 35f, 0x00000000, 0x00000001, 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000000)) && !func_80()) && func_2(&uLocal_82, "REBTHAU", "REBTH_PLASTE", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
			func_78(0x00000000);
			unk_0x11AD11297DC58CC7(iLocal_50, 0x00000000);
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_70, 0x6F0783F5);
			unk_0x25C5402CC10F76CD(iLocal_50, 0x00000001);
			unk_0x6C3AE6E278DB3D0E(iLocal_50, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
			unk_0xFADC0A217229F6B5(iLocal_50, 0x00000001);
			SYSTEM::WAIT(0x00000000);
			func_62(0x00000007);
			func_26();
		}
		if (unk_0xC42A92762C58E1B9(iLocal_50, iLocal_51, 0x00000000))
		{
			if (!func_25() && func_2(&uLocal_82, "REBTHAU", "REBTH_GETOFF", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
			}
			iLocal_77 = unk_0x1C0640BA9A7327B3();
			iLocal_47 = 0x00000004;
		}
		else if (unk_0x12DE711B1C681E9E(iLocal_51, iLocal_50, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (func_77())
			{
				if (!func_75(iLocal_50, 0x0E763797))
				{
					iLocal_78 = 0x00000001;
					func_78(0x00000000);
					func_72(&uLocal_288);
					func_71(&iLocal_80);
					func_71(&iLocal_79);
					unk_0x05EC10F460C3A4AF(iLocal_51, 0x00000000);
					unk_0xDD353D0E9C789D0E(&iLocal_53);
					if (iLocal_256 == 0x00000000)
					{
						unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_51, 0x00004E20, 0xFFFFFFFF, 2f, 0x00000008, 0x00000000);
					}
					else
					{
						unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_51, 0x00004E20, 0xFFFFFFFF, 2f, 0x00040008, 0x00000000);
					}
					unk_0xE072601B4380E9DF(0x00000000, iLocal_51, fLocal_62, 0x000C0035);
					unk_0x75ABDC5F81978924(iLocal_53);
					unk_0x78ADC381772E3D54(iLocal_50, iLocal_53);
					unk_0xF82EA857DA10E0CD(&iLocal_53);
					unk_0xFADC0A217229F6B5(iLocal_50, 0x00000001);
				}
			}
			else
			{
				switch (iLocal_256)
				{
					case 0x00000000:
						if ((((iLocal_259 == 0x00000001 && !func_75(iLocal_50, 0x87B9A382)) && !unk_0x869EFD0BC0868856(iLocal_50)) && !unk_0xA48EBBEA418ADC94(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", "REBTH_THANKS", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_50, unk_0x16F2683693E537C9(), 30f) && unk_0xD1960163A3042274(iLocal_50, 0xCBCE4595) == 0x00000007)
							{
								unk_0xC6EB89C59F2AF6B8(iLocal_50, sLocal_269, "RETURNING_FRONT_A", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_257 = unk_0x1C0640BA9A7327B3();
							iLocal_256++;
						}
						else
						{
							func_90();
						}
						break;
					
					case 0x00000001:
						if (((((unk_0x1C0640BA9A7327B3() - iLocal_257) > 0x00002710 && !func_75(iLocal_50, 0x87B9A382)) && !unk_0x869EFD0BC0868856(iLocal_50)) && !unk_0xA48EBBEA418ADC94(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", sLocal_253, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_50, unk_0x16F2683693E537C9(), 30f))
							{
								func_78(0x00000000);
								unk_0xC6EB89C59F2AF6B8(iLocal_50, sLocal_270, "THANKS_A", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_257 = unk_0x1C0640BA9A7327B3();
							iLocal_256++;
						}
						else
						{
							func_78(0x00000001);
						}
						break;
					
					case 0x00000002:
						if (((((unk_0x1C0640BA9A7327B3() - iLocal_257) > 0x00002710 && !func_75(iLocal_50, 0x87B9A382)) && !unk_0x869EFD0BC0868856(iLocal_50)) && !unk_0xA48EBBEA418ADC94(iLocal_50)) && func_2(&uLocal_82, "REBTHAU", sLocal_254, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
						{
							if (unk_0x7069CC4DE1EA3FAA(iLocal_50, unk_0x16F2683693E537C9(), 30f))
							{
								func_78(0x00000000);
								unk_0xC6EB89C59F2AF6B8(iLocal_50, sLocal_268, "BIKE_BACK_NOW_A", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							iLocal_256++;
						}
						else
						{
							func_78(0x00000001);
						}
						break;
					
					default:
						func_78(0x00000001);
						break;
					}
				}
			}
	}
}

int func_75(int iParam0, int iParam1)
{
	if (func_76(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_76(int iParam0)
{
	if (func_64(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_77()
{
	if (iLocal_78 == 0x00000001)
	{
		return 0x00000001;
	}
	if ((unk_0x1C0640BA9A7327B3() - iLocal_76) < 0x00000FA0)
	{
		return 0x00000000;
	}
	if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_51, 0x00000001))
	{
		return 0x00000000;
	}
	if (func_64(iLocal_49) && unk_0x36646919F20EAFFC(iLocal_49))
	{
		return 0x00000000;
	}
	if (!unk_0xBBA8A868118C90ED(iLocal_51, 0xFFFFFFFF, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_78(int iParam0)
{
	if (func_64(iLocal_50))
	{
		if (iParam0 == 0x00000001)
		{
			if (!unk_0x16102BEDC7435774(iLocal_50) && func_64(unk_0x16F2683693E537C9()))
			{
				unk_0xE25C96A9C36BE5D2(iLocal_50, unk_0x047216F1869A66EC(unk_0x16F2683693E537C9()));
				unk_0x7BECA8F360B1686D(iLocal_50, 0x00000001);
				unk_0x18E279963C2FCEF4(func_79(), 2f, 0xBF800000, 0xBF800000);
				unk_0x0C8C0C840C2D1AD2(iLocal_50, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
			}
		}
		else if (unk_0x16102BEDC7435774(iLocal_50))
		{
			unk_0x0A94A109271BE75A(iLocal_50);
		}
	}
}

int func_79()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_80()
{
	if (iLocal_263 == 0x00000003)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_81(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_89(iParam0, iParam1);
	if (!func_64(iParam0) || !func_64(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_88(&(Local_44[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_85(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_84();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_44[iVar2 /*4*/].f_1 = iParam0;
		Local_44[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_82(&(Local_44[iVar2 /*4*/]), vVar1, iParam1, &(Local_44[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_44[iVar2 /*4*/].f_3) < iParam4);
}

int func_82(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_64(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_83(iParam2, iParam5) };
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
		func_64(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_45)
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
		func_64(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0x00000000))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0x00000000))
			{
				if (bLocal_45)
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

Vector3 func_83(int iParam0, int iParam1)
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

int func_84()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_44)
	{
		if ((Local_44[iVar0 /*4*/] == 0x00000000 && Local_44[iVar0 /*4*/].f_1 == 0x00000000) && Local_44[iVar0 /*4*/].f_2 == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_85(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_87(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
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
		vVar1 = { func_87(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_86(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_86(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_87(vector3 vParam0)
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

void func_88(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_44)
	{
		if (Local_44[iVar0 /*4*/].f_1 == iParam0 && Local_44[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_90()
{
	if (iLocal_78 == 0x00000000 && func_64(iLocal_50))
	{
		if (func_75(iLocal_50, 0x0E763797))
		{
			unk_0xA3BF0AA5A2608191(iLocal_50);
		}
		if ((((!func_75(iLocal_50, 0x87B9A382) && !unk_0x7069CC4DE1EA3FAA(iLocal_50, unk_0x16F2683693E537C9(), 20f)) && unk_0xD1960163A3042274(iLocal_50, 0xCBCE4595) == 0x00000007) && !unk_0x869EFD0BC0868856(iLocal_50)) && !unk_0xA48EBBEA418ADC94(iLocal_50))
		{
			unk_0xF96A174EE26D7588(iLocal_50, unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x0C8C0C840C2D1AD2(iLocal_50, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
		}
	}
}

void func_91(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == 0xFFFFFF9D)
	{
		*uParam1 = unk_0x1C0640BA9A7327B3();
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = (unk_0x1C0640BA9A7327B3() - *uParam1);
		if (iVar0 < 0x00001388)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 0x000001F4)
			{
				if (unk_0x4FA921CB56EDB0F8(iParam0) != 0x000000FF)
				{
					unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
				}
			}
			else if (unk_0x4FA921CB56EDB0F8(iParam0) != 0x00000000)
			{
				unk_0x7F010F50CE03A8AF(iParam0, 0x00000000);
			}
		}
		else if (*uParam1 != 0xFFFFFF9C)
		{
			*uParam1 = 0xFFFFFF9C;
			if (unk_0x4FA921CB56EDB0F8(iParam0) != 0x000000FF)
			{
				unk_0x7F010F50CE03A8AF(iParam0, 0x000000FF);
			}
		}
	}
}

void func_92()
{
	if (func_64(iLocal_49))
	{
		if (iLocal_68 == 0x00000000)
		{
			unk_0xBAFED2F6486F771A(iLocal_49, 0x00000002, 0x00000000);
			unk_0xA3BF0AA5A2608191(iLocal_49);
			if (func_73(iLocal_51))
			{
				if (iLocal_263 == 0x00000002)
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_51))
					{
						unk_0xC55F2A0377488064(iLocal_51);
					}
					unk_0xDB8844D4B7C60440(0x00000001, "RE_BikeThief2");
				}
				if (unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000001))
				{
					unk_0xB559D9DC92655F9E(iLocal_49);
				}
			}
			unk_0xFADC0A217229F6B5(iLocal_49, 0x00000001);
			unk_0xF3268524E9BE6D6E(iLocal_49, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			iLocal_68 = 0x00000001;
		}
		else
		{
			if (((((iLocal_69 == 0x00000000 && func_63(iLocal_49, unk_0x16F2683693E537C9(), 0x00000001) < 30f) && !unk_0x869EFD0BC0868856(iLocal_49)) && func_75(iLocal_49, 0x6BA30179)) && !func_25()) && func_2(&uLocal_82, "REBTHAU", sLocal_251, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
				iLocal_69 = 0x00000001;
			}
			if (func_63(iLocal_49, unk_0x16F2683693E537C9(), 0x00000001) > 50f)
			{
				func_93(&iLocal_49, 0x00000001, 0x00000000, 0x00000001);
			}
		}
	}
}

void func_93(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
			if (iParam3 == 0x00000000)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 0x00000001)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0x00000000);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

void func_94()
{
	if ((func_64(iLocal_49) && func_64(iLocal_50)) && func_73(iLocal_51))
	{
		if (func_101())
		{
			func_99(&uLocal_276, 0x00000000, 0x00000000);
			func_98(&iLocal_49);
			func_97(&iLocal_51);
			if (unk_0x12DE711B1C681E9E(iLocal_50, unk_0x16F2683693E537C9(), 25f, 25f, 25f, 0x00000000, 0x00000001, 0x00000000) && func_2(&uLocal_82, "REBTHAU", sLocal_255, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
			{
			}
			unk_0x509B8296EBA9B408(iLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
			func_96();
		}
		else
		{
			func_95(iLocal_79, iLocal_51, fLocal_65, 0x3F400000, 0x00000000);
		}
	}
}

void func_95(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_96()
{
	func_226();
}

void func_97(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_73(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_64(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
					{
						unk_0x046C362CF15F1935(iParam0);
						return;
					}
				}
				unk_0xA954465BA6FDEFE2(iParam0);
			}
		}
		else
		{
			if (func_64(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
				{
					unk_0x046C362CF15F1935(iParam0);
					return;
				}
			}
			unk_0xA954465BA6FDEFE2(iParam0);
		}
	}
}

void func_98(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

void func_99(var uParam0, int iParam1, int iParam2)
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
		if (func_100(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_100(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_100(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_101()
{
	if (func_63(iLocal_51, unk_0x16F2683693E537C9(), 0x00000001) > (fLocal_65 + 100f))
	{
		return 0x00000001;
	}
	if (func_63(iLocal_51, unk_0x16F2683693E537C9(), 0x00000001) > fLocal_65)
	{
		if (((unk_0xB4ECF989E2C1DAC8(iLocal_50, sLocal_267, "IDLE_A", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_50, sLocal_267, "IDLE_A") > 0.99f) || (unk_0xB4ECF989E2C1DAC8(iLocal_50, sLocal_267, "IDLE_B", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_50, sLocal_267, "IDLE_B") > 0.99f)) || (unk_0xB4ECF989E2C1DAC8(iLocal_50, sLocal_267, "IDLE_C", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_50, sLocal_267, "IDLE_C") > 0.99f))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_102()
{
	if ((((((((((iLocal_75 > 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - iLocal_75) > 0x00001388) && !func_25()) && func_64(iLocal_49)) && func_64(iLocal_50)) && func_73(iLocal_51)) && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49, 13f, 13f, 13f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x12DE711B1C681E9E(iLocal_50, iLocal_49, 13f, 13f, 13f, 0x00000000, 0x00000001, 0x00000000)) && unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000)) && unk_0x12DE711B1C681E9E(iLocal_50, unk_0x16F2683693E537C9(), 8f, 8f, 8f, 0x00000000, 0x00000001, 0x00000000)) && func_2(&uLocal_82, "REBTHAU", sLocal_250, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
	{
		iLocal_75 = 0xFFFFFFFF;
	}
}

void func_103()
{
	if (func_104())
	{
		iLocal_76 = unk_0x1C0640BA9A7327B3();
		func_71(&iLocal_79);
		func_99(&uLocal_276, 0x00000000, 0x00000000);
		unk_0xB975E4541DDAB1F5(0x00000000);
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			iLocal_52 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
			unk_0x73270B3C9CC833FD(iLocal_52, 0x00000001, 0x00000001);
		}
		if (func_64(iLocal_50))
		{
			unk_0xBC43ED9FE28DB191(iLocal_50);
		}
		if ((func_64(iLocal_49) && !func_25()) && func_2(&uLocal_82, "REBTHAU", "REBTH_INAIR", 0x00000004, 0x00000000, 0x00000000, 0x00000000))
		{
		}
		iLocal_47 = 0x00000003;
	}
	else
	{
		if (((bLocal_272 == 0x00000000 && unk_0xE4EDC4B0E92C078B(iLocal_79)) && func_64(unk_0x16F2683693E537C9())) && func_64(iLocal_49))
		{
			if (func_63(unk_0x16F2683693E537C9(), iLocal_49, 0x00000001) < 30f || unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_49, 0x00000001), 10f, 0x00000001))
			{
				bLocal_272 = 0x00000001;
				unk_0xF2D30B8ACAF12A39(iLocal_79, bLocal_272);
			}
		}
		if (((iLocal_263 == 0x00000002 && func_64(iLocal_49)) && func_73(iLocal_51)) && unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000))
		{
			if (iLocal_260 == 0x00000000)
			{
				unk_0xC3C6B5ABAB3277F5(iLocal_51, 0x00000001, "RE_BikeThief2", 30f, 0x000C0024);
				iLocal_260 = 0x00000001;
				vLocal_261 = { unk_0xAA8A22FF67DFFDCD(unk_0x1A2511CB22B86C17(0x00000001, "RE_BikeThief2"), unk_0x1C8FE65729F6E371(0x00000001, "RE_BikeThief2")) };
			}
			else if (!unk_0x20D6474D5F4B9FC6(iLocal_51) || func_225(iLocal_51, vLocal_261, 0x00000001) < 5f)
			{
				if (unk_0x20D6474D5F4B9FC6(iLocal_51))
				{
					unk_0xC55F2A0377488064(iLocal_51);
				}
				unk_0x89258193691A7600(iLocal_49, iLocal_51, unk_0x16F2683693E537C9(), 0x00000008, fLocal_62, 0x000C0024, 10f, 1f, 0x00000000);
			}
		}
	}
}

int func_104()
{
	if (!func_64(iLocal_49))
	{
		return 0x00000001;
	}
	else if (func_64(iLocal_51))
	{
		if (iLocal_290 == 0x00000000)
		{
			if (unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000))
			{
				iLocal_290 = 0x00000001;
			}
		}
		else if (!unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000))
		{
			return 0x00000001;
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_49, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_105()
{
	if ((func_64(iLocal_49) && func_73(iLocal_51)) && unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000))
	{
		if (iLocal_67)
		{
			if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49, 40f, 40f, 40f, 0x00000000, 0x00000001, 0x00000000))
			{
				fLocal_62 = fLocal_64;
				unk_0x06736587AE5BE33B(iLocal_49, fLocal_62);
				unk_0x0C8C0C840C2D1AD2(iLocal_49, unk_0x16F2683693E537C9(), 0x00004E20, 0x00000010, 0x00000002);
				iLocal_67 = 0x00000000;
			}
		}
		else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49, 40f, 40f, 40f, 0x00000000, 0x00000001, 0x00000000))
		{
			fLocal_62 = fLocal_63;
			unk_0x06736587AE5BE33B(iLocal_49, fLocal_62);
			unk_0x0C8C0C840C2D1AD2(iLocal_49, unk_0x16F2683693E537C9(), 0x00004E20, 0x00000010, 0x00000002);
			iLocal_67 = 0x00000001;
		}
	}
}

void func_106()
{
	if (((((((((iLocal_73 < 0x00000005 && !func_25()) && func_64(iLocal_49)) && func_64(iLocal_50)) && func_73(iLocal_51)) && unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_49, 13f, 13f, 13f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x12DE711B1C681E9E(iLocal_50, iLocal_49, 13f, 13f, 13f, 0x00000000, 0x00000001, 0x00000000)) && (unk_0x1C0640BA9A7327B3() - iLocal_74) > 0x00003A98) && func_2(&uLocal_82, "REBTHAU", sLocal_252, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
	{
		if (unk_0xD1960163A3042274(iLocal_49, 0xB41F1A34) == 0x00000001 && !unk_0x6B4464DA5794D055(iLocal_49))
		{
			unk_0xFFDDE8CC59EB6D40(iLocal_49, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 15f, 0x00000032, 0x00000001, 0xD31265F2);
		}
		iLocal_74 = unk_0x1C0640BA9A7327B3();
		iLocal_73++;
	}
}

void func_107()
{
	if ((((iLocal_258 == 0x00000000 && func_64(iLocal_50)) && func_64(iLocal_49)) && func_73(iLocal_51)) && unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000))
	{
		if (iLocal_273 == 0x00000000)
		{
			if (func_2(&uLocal_82, "REBTHAU", sLocal_247, 0x00000004, func_110(), 0x00000000, 0x00000000))
			{
				unk_0x327AAEE25F323797(iLocal_50);
				unk_0xDD353D0E9C789D0E(&iLocal_53);
				unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_49, 0xFFFFFFFF, 0x00000800, 0x00000002);
				unk_0x80AA372E04ED318D(0x00000000, vLocal_57, 2f, 0x00004E20, 0x471C4000, 0x3F000000);
				unk_0xF96A174EE26D7588(0x00000000, iLocal_51, 0x000003E8);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_265, sLocal_266, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_A", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_B", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_C", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_B", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_A", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_B", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_267, "IDLE_C", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_53);
				unk_0x78ADC381772E3D54(iLocal_50, iLocal_53);
				unk_0xF82EA857DA10E0CD(&iLocal_53);
				iLocal_74 = unk_0x1C0640BA9A7327B3();
				iLocal_75 = unk_0x1C0640BA9A7327B3();
				if (iLocal_263 == 0x00000003)
				{
					sLocal_248 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_248 = "REBTH_HELP2";
				}
				iLocal_273 = 0x00000001;
			}
		}
		else if (func_64(unk_0x16F2683693E537C9()))
		{
			if (func_63(unk_0x16F2683693E537C9(), iLocal_50, 0x00000001) < 30f)
			{
				if (!func_25())
				{
					if (func_2(&uLocal_82, "REBTHAU", sLocal_248, 0x00000004, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_258 = 0x00000001;
					}
				}
				else if (iLocal_274 == 0x00000000)
				{
					func_108();
					iLocal_274 = 0x00000001;
				}
			}
		}
	}
}

void func_108()
{
	Global_4CD7 = 0x00000000;
	func_109();
}

void func_109()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0x00000000;
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

int func_110()
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { 100f, 100f, 20f };
	if (!unk_0xEB6A8945D1AC98A1(iLocal_50))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_50, unk_0x16F2683693E537C9(), vVar1, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar0 = 0x00000000;
		}
		else
		{
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_111()
{
	if ((func_64(iLocal_49) && func_73(iLocal_51)) && unk_0xC42A92762C58E1B9(iLocal_49, iLocal_51, 0x00000000))
	{
		func_112(&uLocal_276, iLocal_51, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	}
}

void func_112(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_113(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_113(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_114(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_114(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_99(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_115(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_115(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = sParam3;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_100(iVar0))
	{
		func_141();
	}
	if (func_140(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0x00000000;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 0x00000001);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_135(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_131(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_120(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_100(iVar0))
							{
								func_119(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_118(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_120(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_100(iVar0))
						{
							func_119(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_118(0x00000001);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam3))
			{
				if (func_100(sParam3))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
					{
						func_99(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_99(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_99(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_99(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_99(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_99(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_135(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_117(uParam0))
				{
					func_116(uParam0);
				}
			}
		}
	}
	else
	{
		func_99(uParam0, iVar0, 0x00000000);
	}
}

void func_116(var uParam0)
{
	if (func_140(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x29D5132FBDCF2B1E(0x00000000);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	uParam0->f_2 = 0xFFFFFFFF;
	*uParam0 = 0x00000001;
}

int func_117(var uParam0)
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

int func_118(bool bParam0)
{
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (bParam0)
			{
				Global_1B416.f_273C.f_64++;
			}
			return Global_1B416.f_273C.f_64;
			break;
		
		case 0x00000004:
			if (bParam0)
			{
				Global_1B416.f_273C.f_65++;
			}
			return Global_1B416.f_273C.f_65;
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (bParam0)
			{
				Global_1B416.f_273C.f_66++;
			}
			return Global_1B416.f_273C.f_66;
			break;
		
		default:
			break;
	}
	return 0x00000003;
}

void func_119(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_120(char* sParam0)
{
	if (!func_121(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_100(sParam0)) || func_100("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_118(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_118(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_118(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_121(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_130(0x00000000))
	{
		return 0x00000000;
	}
	if (func_129())
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
	if ((func_128() || func_127(Global_440000.f_38DB3)) || func_126())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_125(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_124(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_122(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_122(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_123(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_123(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_123(int iParam0, bool bParam1, bool bParam2)
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

int func_124(int iParam0, int iParam1)
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

int func_125(int iParam0, int iParam1)
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

var func_126()
{
	return Global_2564C8.f_11;
}

bool func_127(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_128()
{
	return Global_2564C8.f_10;
}

bool func_129()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_130(int iParam0)
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

void func_131(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1420CD == 0x00000001)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		func_99(uParam0, 0x00000000, 0x00000000);
	}
	if (func_134(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_132())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 0x66EADDF5)
	{
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
		if (iVar2 < 0x000005DC)
		{
			iVar2 = 0x000005DC;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 0x00000001, 0xFFFFFFFF, iVar1, iVar2, iParam3);
	iVar3 = 0x00000800;
	iVar4 = 0x00000003;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, 0xFFFFFFFF, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

bool func_132()
{
	return func_133(unk_0xD803B885F5E47A62());
}

int func_133(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_134(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_135(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_117(uParam0))
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
						if (!func_139(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_139(bParam1, bParam2, bParam3))
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
					if (!func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_138(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_139(bParam1, bParam2, bParam3))
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
						if (func_137(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_136(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_136(bParam1, bParam2, bParam3))
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
					else if (func_137(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_117(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_121(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_141();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_136(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
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

int func_137(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
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

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
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

int func_139(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_121(bParam0, bParam1, bParam2))
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

int func_140(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_141()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_142()
{
	if (unk_0xC844350D5D58C99A(iLocal_49))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_49))
		{
			func_158();
			func_226();
		}
		else if (func_153())
		{
			if (func_14() == 0x00000000)
			{
				func_152(&uLocal_82, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
				sLocal_249 = "REBTH_RESPM";
			}
			else if (func_14() == 0x00000001)
			{
				func_152(&uLocal_82, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
				sLocal_249 = "REBTH_RESPF";
			}
			else if (func_14() == 0x00000002)
			{
				func_152(&uLocal_82, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
				sLocal_249 = "REBTH_RESPT";
			}
			if (unk_0xDF1306B443CD3D15(iLocal_51, 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_49))
			{
				if (iLocal_263 == 0x00000002)
				{
					unk_0x5B1D360B9C6F0A09(iLocal_49, iLocal_51, 0x00004E20, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
				}
				else
				{
					unk_0xDD353D0E9C789D0E(&iLocal_53);
					unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_51, 0x00004E20, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
					unk_0x89258193691A7600(0x00000000, iLocal_51, unk_0x16F2683693E537C9(), 0x00000008, fLocal_62, 0x000C0024, 10f, 1f, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_53);
					unk_0x78ADC381772E3D54(iLocal_49, iLocal_53);
					unk_0xF82EA857DA10E0CD(&iLocal_53);
					unk_0xFADC0A217229F6B5(iLocal_49, 0x00000001);
				}
			}
			func_71(&iLocal_81);
			iLocal_79 = func_67(iLocal_49, 0x00000001, 0x00000091);
			unk_0xF2D30B8ACAF12A39(iLocal_79, bLocal_272);
			unk_0xB975E4541DDAB1F5(0x00000002);
			if (iLocal_263 == 0x00000001)
			{
				unk_0xB5376EA942202450(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 0x00000000, 0x00000000, 0x00000001);
			}
			iLocal_47 = 0x00000002;
			func_143(0x00000001);
		}
	}
}

int func_143(int iParam0)
{
	if (func_146())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_47(Global_1B40B))
		{
			func_144(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_47(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_145(iParam0), 0xFFFFFFFF);
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
					func_119(func_145(iParam0), 0xFFFFFFFF);
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
					func_119(func_145(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_145(int iParam0)
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

int func_146()
{
	switch (func_147(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_147(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_151(0x00000000))
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
		if (!func_149(iParam2))
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
			func_148(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_148(var uParam0, int iParam1)
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

bool func_149(int iParam0)
{
	return func_150(iParam0, Global_A1D7);
}

int func_150(int iParam0, int iParam1)
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

int func_151(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_149(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_152(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_153()
{
	switch (iLocal_263)
	{
		case 0x00000001:
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_154()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 16f, 16f, 6f };
	vVar1 = { -16f, -16f, -6f };
	if (func_64(iLocal_49))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_49, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	if (func_73(iLocal_51))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_51, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	if (func_64(iLocal_50))
	{
		if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_50, 0x0000796E, 0f, 0f, 0f), 3f, 0x00000001))
		{
			return 0x00000001;
		}
		vVar0 = { vVar0 + unk_0x64430C979F516F7A(iLocal_50, 0x0000796E, 0f, 0f, 0f) };
		vVar1 = { vVar1 + unk_0x64430C979F516F7A(iLocal_50, 0x0000796E, 0f, 0f, 0f) };
		if ((unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_smokegrenade"), 0x00000001) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_grenade"), 0x00000001)) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_stickybomb"), 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iLocal_50, 0x0000796E, 0f, 0f, 0f), 6f))
		{
			return 0x00000001;
		}
		if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x64430C979F516F7A(iLocal_50, 0x0000796E, 0f, 0f, 0f), 6f))
		{
			return 0x00000001;
		}
		if (unk_0xE9FDA1035CFEA94F(iLocal_50))
		{
			return 0x00000001;
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_50, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_155()
{
	if (iLocal_66 == 0x00000000)
	{
		switch (iLocal_263)
		{
			case 0x00000001:
				vLocal_56 = { 433.57f, -1916.68f, 24.04f };
				fLocal_60 = 248.5f;
				vLocal_57 = { 439.054f, -1920.145f, 23.5581f };
				vLocal_58 = { 434.31f, -1908.87f, 25.92f };
				fLocal_61 = -163.17f;
				vLocal_55 = { 435.18f, -1915.18f, 24.68f };
				fLocal_59 = 226.13f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				iLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			
			case 0x00000002:
				vLocal_56 = { 774.06f, -155.63f, 73.44f };
				fLocal_60 = 144.3932f;
				vLocal_57 = { 769.8723f, -156.9548f, 73.5144f };
				vLocal_58 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_61 = 151.6004f;
				vLocal_55 = { 771.41f, -154.29f, 74.09f };
				fLocal_59 = 150.54f;
				fLocal_63 = 10f;
				fLocal_64 = 20f;
				iLocal_48 = joaat("scorcher");
				fLocal_65 = 250f;
				sLocal_253 = "REBTH_THX2";
				sLocal_254 = "REBTH_THX3";
				sLocal_255 = "REBTH_GONE";
				break;
			
			case 0x00000003:
				vLocal_56 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_60 = 285.0046f;
				vLocal_57 = { -1934.785f, 253.2105f, 83.8164f };
				vLocal_58 = { -1931.04f, 252.19f, 84.99f };
				fLocal_61 = 42.33f;
				vLocal_55 = { -1932.27f, 254.5f, 84.4f };
				fLocal_59 = 96.81f;
				fLocal_63 = 10f;
				fLocal_64 = 35f;
				iLocal_48 = joaat("bati");
				fLocal_65 = 400f;
				sLocal_253 = "REBTH_THX2X";
				sLocal_254 = "REBTH_THX3X";
				sLocal_255 = "REBTH_GONEX";
				break;
		}
		unk_0xE342F209E49C5314(vLocal_56 - Vector(20f, 20f, 20f), vLocal_56 + Vector(20f, 20f, 20f), 0x00000000, 0x00000001);
		unk_0x21688103CC7F9B19(vLocal_56 - Vector(20f, 20f, 20f), vLocal_56 + Vector(20f, 20f, 20f), 0x00000000);
		unk_0x536F1BE96C726C4B(vLocal_56, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		iLocal_66 = 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(joaat("g_m_y_strpunk_01"));
	unk_0x523BCC9DC80CD82F(joaat("a_m_y_beachvesp_01"));
	unk_0x523BCC9DC80CD82F(iLocal_48);
	if ((((unk_0xB87F6CF6E5628C67(joaat("g_m_y_strpunk_01")) && unk_0xB87F6CF6E5628C67(joaat("a_m_y_beachvesp_01"))) && unk_0xB87F6CF6E5628C67(iLocal_48)) && func_157()) && func_156())
	{
		iLocal_51 = unk_0x122AAB0B1D6F55AD(iLocal_48, vLocal_55, fLocal_59, 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(iLocal_48);
		unk_0xAB8E2DDC7AF955E0(iLocal_48, 0x00000001);
		unk_0x56FDC9ADE35F7DB0(iLocal_51, 0x00000001, 0x00000001, 0x00000000);
		unk_0xA22F71BBC8173C39(iLocal_51, 0x00000000);
		unk_0x67E3D6EA8D96FD85(iLocal_51, 0x00000000);
		unk_0x44A200C9B6E1CEA6(iLocal_51, 0x00000001);
		unk_0x8BC9595FD2792B5D("RE_CAR_STEAL_SCENE");
		unk_0x2E1E5367A885F9B7(iLocal_51, "RE_CAR_STEAL_STOLEN_VEHICLE", 0x00000000);
		fLocal_62 = fLocal_64;
		if (iLocal_263 == 0x00000003)
		{
			unk_0xC002508A277213DE(iLocal_51, 0x00000031, 0x00000000);
			unk_0xF95FF0A179413A39(iLocal_51, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_51, 0x00000010, 0x00000002, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_51, 0x0000000B, 0x00000003, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_51, 0x0000000C, 0x00000002, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_51, 0x0000000D, 0x00000002, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_51, 0x00000017, 0x0000000A, 0x00000000);
			unk_0xEE6A1776A67F70C1(iLocal_51, 0x00000018, 0x0000000A, 0x00000000);
			unk_0x73BEC6F1685574E6(iLocal_51, 0x00000016, 0x00000001);
			unk_0x73BEC6F1685574E6(iLocal_51, 0x00000011, 0x00000001);
			unk_0x73BEC6F1685574E6(iLocal_51, 0x00000015, 0x00000001);
			unk_0x73BEC6F1685574E6(iLocal_51, 0x00000014, 0x00000001);
			unk_0x73BEC6F1685574E6(iLocal_51, 0x00000013, 0x00000001);
			unk_0xC002508A277213DE(iLocal_51, 0x00000059, 0x00000059);
			unk_0x58A0C35FA7CA6162(iLocal_51, 0x00000000, 0x00000001);
			unk_0xA22B35B584F0580A(iLocal_51, 0x00000001);
		}
		unk_0xF63400DBE3303D26("re_bikethief_relGroupVictim", &iLocal_70);
		unk_0xF63400DBE3303D26("re_bikethief_relGroupThief", &iLocal_71);
		unk_0x0E2400AB9174FA81(0x00000005, iLocal_71, iLocal_70);
		unk_0x0E2400AB9174FA81(0x00000005, iLocal_71, 0x6F0783F5);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_70, 0x6F0783F5);
		iLocal_49 = unk_0x36F2404464202779(0x00000013, joaat("g_m_y_strpunk_01"), vLocal_58, fLocal_61, 0x00000001, 0x00000001);
		unk_0x71199B01895C6202(joaat("g_m_y_strpunk_01"));
		unk_0x11AD11297DC58CC7(iLocal_49, 0x00000001);
		unk_0x7980D72D61BEF4D5(iLocal_49, 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_49, iLocal_71);
		unk_0x3CC33E4E9CE523F4(iLocal_49, 0x00000003);
		unk_0xAFF39FB306F8E232(iLocal_49, 0x00000011, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_49, 0x0000000D, 0x00000000);
		unk_0xBAFED2F6486F771A(iLocal_49, 0x00000001, 0x00000001);
		unk_0xCC095276B3DD380E(iLocal_49, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_49, 0x0000002A, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_49, 0x00000119, 0x00000001);
		unk_0x545E1397F38D9D5A(iLocal_49, 0x00000002);
		unk_0x4F39CC3882DD074E(iLocal_49, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0xC6EB89C59F2AF6B8(iLocal_49, sLocal_264, "base", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_50 = unk_0x36F2404464202779(0x00000013, joaat("a_m_y_beachvesp_01"), vLocal_56, fLocal_60, 0x00000001, 0x00000001);
		unk_0x71199B01895C6202(joaat("a_m_y_beachvesp_01"));
		unk_0x11AD11297DC58CC7(iLocal_50, 0x00000001);
		unk_0x7980D72D61BEF4D5(iLocal_50, 0x00000001);
		unk_0xBAFED2F6486F771A(iLocal_50, 0x00000008, 0x00000001);
		if (iLocal_263 == 0x00000003)
		{
			unk_0xCC095276B3DD380E(iLocal_50, 0x00000001);
		}
		else
		{
			unk_0xCC095276B3DD380E(iLocal_50, 0x00000000);
		}
		unk_0x4E885A246A9D983A(iLocal_50, 0x0000001A, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_50, 0x0000002A, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_50, 0x000000A7, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_50, 0x00000119, 0x00000001);
		unk_0x6DF7BF67E86AAE86(iLocal_50, iLocal_70);
		unk_0x25C5402CC10F76CD(iLocal_50, 0x00000000);
		unk_0x4F39CC3882DD074E(iLocal_50, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x509B8296EBA9B408(iLocal_50, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
		func_152(&uLocal_82, 0x00000001, iLocal_49, "BThief", 0x00000000, 0x00000001);
		func_152(&uLocal_82, 0x00000002, iLocal_50, "BThiefVictim", 0x00000000, 0x00000001);
		if (iLocal_262 == 0x00000000)
		{
			if (iLocal_263 == 0x00000003)
			{
				sLocal_247 = "REBTH_HELPX";
			}
			else
			{
				sLocal_247 = "REBTH_HELP";
			}
			sLocal_251 = "REBTH_RUNSOF";
			sLocal_252 = "REBTH_TAUNT";
			sLocal_266 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_262 == 0x00000001)
		{
			if (iLocal_263 == 0x00000003)
			{
				sLocal_247 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_247 = "REBTH_HLPB";
			}
			sLocal_251 = "REBTH_RUNB";
			sLocal_252 = "REBTH_TNTB";
			sLocal_266 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_247 = "REBTH_HLPC";
			sLocal_251 = "REBTH_RUNC";
			sLocal_252 = "REBTH_TNTC";
			sLocal_266 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		unk_0x060F249A9A3E3F4E(0x00000000);
		iLocal_47 = 0x00000001;
	}
}

int func_156()
{
	if (iLocal_263 == 0x00000002)
	{
		unk_0x36187931D29E5BBE(0x00000001, "RE_BikeThief2");
		if (!unk_0x3DDA6C6A285628E4(0x00000001, "RE_BikeThief2"))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_157()
{
	unk_0x3F423BF5B8125A50(sLocal_264);
	unk_0x3F423BF5B8125A50(sLocal_265);
	unk_0x3F423BF5B8125A50(sLocal_267);
	unk_0x3F423BF5B8125A50(sLocal_268);
	unk_0x3F423BF5B8125A50(sLocal_270);
	unk_0x3F423BF5B8125A50(sLocal_269);
	if (((((unk_0xB4AE0788C1587752(sLocal_264) && unk_0xB4AE0788C1587752(sLocal_265)) && unk_0xB4AE0788C1587752(sLocal_267)) && unk_0xB4AE0788C1587752(sLocal_268)) && unk_0xB4AE0788C1587752(sLocal_270)) && unk_0xB4AE0788C1587752(sLocal_269))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_158()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_50))
	{
		if (func_75(iLocal_50, 0x3B3A458F))
		{
			unk_0x327AAEE25F323797(iLocal_50);
		}
		else
		{
			unk_0xA3BF0AA5A2608191(iLocal_50);
		}
		unk_0xFADC0A217229F6B5(iLocal_50, 0x00000001);
		unk_0xF3268524E9BE6D6E(iLocal_50, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_49))
	{
		unk_0xFADC0A217229F6B5(iLocal_49, 0x00000001);
		unk_0xF3268524E9BE6D6E(iLocal_49, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000001);
	}
}

int func_159()
{
	if (iLocal_47 == 0x00000000 && func_178())
	{
		return 0x00000001;
	}
	if (iLocal_47 == 0x00000001 && func_166())
	{
		return 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_50))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_50))
		{
			return 0x00000001;
		}
		else if (unk_0xB87D13D0C064E9D1(iLocal_50, unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_164();
			func_163(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 0x00000004, 0x00000000, 0x00000000);
			return 0x00000001;
		}
		else if (func_160(iLocal_50, 170f))
		{
			func_164();
			func_163(&uLocal_82, "REBTHAU", "REBTH_ATTACK", 0x00000004, 0x00000000, 0x00000000);
			return 0x00000001;
		}
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000 && iLocal_259 == 0x00000001)
	{
		return 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_51) && !unk_0xDF1306B443CD3D15(iLocal_51, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_160(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_64(unk_0x16F2683693E537C9()) && func_64(iParam0))
	{
		if (func_162(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
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
				if (func_161(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_161(int iParam0, float fParam1)
{
	return func_81(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

int func_162(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_163(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_24(uParam0, 0x00000091, sParam1, iParam4, iParam5, 0x00000000);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_4CD7, 0x00000000);
	Global_5148 = iParam3;
	StringCopy(&Global_513B, sParam2, 24);
}

void func_164()
{
	Global_4CD7 = 0x00000000;
	func_165();
}

void func_165()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_166()
{
	if (!func_149(0x00000005))
	{
		return 0x00000001;
	}
	if (func_174())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_173())
		{
			return 0x00000000;
		}
	}
	if (func_167(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_167(float fParam0, bool bParam1)
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
		if (func_16(func_14()))
		{
			iVar5 = func_52();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_168(iVar1, &Var0);
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

void func_168(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_169(uParam1, "Abigail1", func_171(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_169(uParam1, "Abigail2", func_171(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_169(uParam1, "Barry1", func_171(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_169(uParam1, "Barry2", func_171(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_169(uParam1, "Barry3", func_171(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_169(uParam1, "Barry3A", func_171(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_169(uParam1, "Barry3C", func_171(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_169(uParam1, "Barry4", func_171(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_169(uParam1, "Dreyfuss1", func_171(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_169(uParam1, "Epsilon1", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_169(uParam1, "Epsilon2", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_169(uParam1, "Epsilon3", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_169(uParam1, "Epsilon4", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_169(uParam1, "Epsilon5", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_169(uParam1, "Epsilon6", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_169(uParam1, "Epsilon7", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_169(uParam1, "Epsilon8", func_171(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_169(uParam1, "Extreme1", func_171(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_169(uParam1, "Extreme2", func_171(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_169(uParam1, "Extreme3", func_171(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_169(uParam1, "Extreme4", func_171(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_169(uParam1, "Fanatic1", func_171(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_169(uParam1, "Fanatic2", func_171(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_169(uParam1, "Fanatic3", func_171(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_169(uParam1, "Hao1", func_171(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_169(uParam1, "Hunting1", func_171(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_169(uParam1, "Hunting2", func_171(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_169(uParam1, "Josh1", func_171(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_169(uParam1, "Josh2", func_171(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_169(uParam1, "Josh3", func_171(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_169(uParam1, "Josh4", func_171(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_169(uParam1, "Maude1", func_171(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_169(uParam1, "Minute1", func_171(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_169(uParam1, "Minute2", func_171(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_169(uParam1, "Minute3", func_171(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_169(uParam1, "MrsPhilips1", func_171(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_169(uParam1, "MrsPhilips2", func_171(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_169(uParam1, "Nigel1", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_169(uParam1, "Nigel1A", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_169(uParam1, "Nigel1B", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_169(uParam1, "Nigel1C", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_169(uParam1, "Nigel1D", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_169(uParam1, "Nigel2", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_169(uParam1, "Nigel3", func_171(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_169(uParam1, "Omega1", func_171(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_169(uParam1, "Omega2", func_171(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_169(uParam1, "Paparazzo1", func_171(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_169(uParam1, "Paparazzo2", func_171(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_169(uParam1, "Paparazzo3", func_171(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_169(uParam1, "Paparazzo3A", func_171(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_169(uParam1, "Paparazzo3B", func_171(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_169(uParam1, "Paparazzo4", func_171(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_169(uParam1, "Rampage1", func_171(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_169(uParam1, "Rampage3", func_171(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_169(uParam1, "Rampage4", func_171(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_169(uParam1, "Rampage5", func_171(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_169(uParam1, "Rampage2", func_171(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_170(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_169(uParam1, "TheLastOne", func_171(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_169(uParam1, "Tonya1", func_171(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_169(uParam1, "Tonya2", func_171(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_169(uParam1, "Tonya3", func_171(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_169(uParam1, "Tonya4", func_171(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_169(uParam1, "Tonya5", func_171(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_170(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_169(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_170(int iParam0)
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

struct<2> func_171(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_172(iParam0) };
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

struct<2> func_172(int iParam0)
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

int func_173()
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

int func_174()
{
	if (func_177() && !func_173())
	{
		return 0x00000001;
	}
	if (func_176() && func_175())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_175()
{
	return Global_1B2FC > 0x00000000;
}

int func_176()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_177()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_178()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_46) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_173())
		{
			return 0x00000000;
		}
	}
	if (func_174())
	{
		return 0x00000001;
	}
	if (func_167(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_179()
{
}

int func_180()
{
	int iVar0;
	
	if (func_181(0x0000001A, 0x00000001))
	{
		iVar0++;
	}
	if (func_181(0x0000001A, 0x00000002))
	{
		iVar0++;
	}
	if (func_181(0x00000008, 0x00000000))
	{
		iVar0++;
	}
	return iVar0;
}

int func_181(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_182(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_56();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_184(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_183();
}

void func_183()
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

void func_184(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_185(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_56();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_224())
		{
			return 0x00000000;
		}
	}
	vLocal_46 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_173())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_29(0x00000000))
		{
			return 0x00000000;
		}
		if (func_174())
		{
			return 0x00000000;
		}
		if (func_223())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_16(func_14()))
		{
			if (func_167(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_46.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_222(iParam1))
		{
			return 0x00000000;
		}
		if (func_16(func_14()))
		{
			if (func_221(func_14()) == 0x00000004 || func_221(func_14()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_16(func_14()))
		{
			if (!func_220(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_219(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_218())
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
		if (!func_209(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_149(0x00000005))
		{
			return 0x00000000;
		}
		if (func_181(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_181(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_222(0x0000001E) && !func_181(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_16(func_14()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_208(iVar4))
				{
					if (func_186(iVar2))
					{
						if (!func_134(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_14() != iVar2)
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

bool func_186(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_187(iVar0);
}

int func_187(int iParam0)
{
	return func_188(iParam0, 0x00000001);
}

int func_188(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_208(iParam0))
	{
		return 0x00000000;
	}
	func_189(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_190(func_201(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_190(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_200(iParam0, iParam1))
	{
		iVar0 = func_199(iParam1);
		iVar1 = func_197(iParam0);
		iVar2 = (func_197(iParam0) - func_197(iParam1));
		iVar3 = (func_199(iParam0) - func_199(iParam1));
		iVar4 = (func_196(iParam0) - func_196(iParam1));
		iVar5 = (func_195(iParam0) - func_195(iParam1));
		iVar6 = (func_194(iParam0) - func_194(iParam1));
		iVar7 = (func_193(iParam0) - func_193(iParam1));
	}
	else
	{
		iVar0 = func_199(iParam0);
		iVar1 = func_197(iParam1);
		iVar2 = (func_197(iParam1) - func_197(iParam0));
		iVar3 = (func_199(iParam1) - func_199(iParam0));
		iVar4 = (func_196(iParam1) - func_196(iParam0));
		iVar5 = (func_195(iParam1) - func_195(iParam0));
		iVar6 = (func_194(iParam1) - func_194(iParam0));
		iVar7 = (func_193(iParam1) - func_193(iParam0));
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
		iVar4 = (iVar4 + func_192(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_191(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_191(float fParam0, float fParam1, float fParam2)
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

int func_192(int iParam0, int iParam1)
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

int func_193(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_194(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_195(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_196(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_197(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_198(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_198(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_199(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_208(iParam1) || !func_208(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_194(iParam0);
	iVar1 = func_194(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_201()
{
	var uVar0;
	
	func_207(&uVar0, unk_0x4460E481B9E33ADA());
	func_206(&uVar0, unk_0x8D199E381D262EEF());
	func_205(&uVar0, unk_0xD8A54335F18763BA());
	func_204(&uVar0, unk_0x972A296334C9D57B());
	func_203(&uVar0, unk_0x118229AD063C3C1D());
	func_202(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_202(var uParam0, int iParam1)
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

void func_203(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_197(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_192(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_208(int iParam0)
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
	iVar0 = func_193(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_194(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_195(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_197(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_199(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_196(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_192(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_14();
				if (!func_16(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_217()) || Global_1B05D) || Global_7832) || func_216()) || func_22(0x00000008, 0xFFFFFFFF)) || func_215()) || func_214()) || func_213()) || func_212()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_217()) || Global_7832) || func_216()) || func_22(0x00000008, 0xFFFFFFFF)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_217()) || Global_1B05D) || Global_7832) || func_216()) || func_22(0x00000008, 0xFFFFFFFF)) || func_213()) || func_215()) || func_214()) || func_212()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_217()) || Global_1B05D) || Global_7832) || func_216()) || func_22(0x00000008, 0xFFFFFFFF)) || func_215()) || func_214()) || func_212()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_217() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_22(0x00000008, 0xFFFFFFFF)) || func_212()) || func_211()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_22(0x00000008, 0xFFFFFFFF) || func_215()) || func_214()) || func_211()) || func_210())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_217()) || Global_7832) || func_216()) || func_22(0x00000008, 0xFFFFFFFF)) || func_214()) || func_213()) || func_212()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_217()) || func_214()) || Global_1B05D) || Global_7832) || func_216()) || Global_A664) || func_22(0x00000008, 0xFFFFFFFF)) || func_213()) || func_211()) || func_212()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_217()) || Global_1B05D) || Global_7832) || func_216()) || func_22(0x00000008, 0xFFFFFFFF)) || func_213()) || func_211()) || func_215()) || func_214()) || func_212())
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

var func_210()
{
	return Global_181DF.f_1;
}

int func_211()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_212()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_213()
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

bool func_214()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_215()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_216()
{
	return Global_14086D;
}

int func_217()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_218()
{
	func_13();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_219(int iParam0)
{
	return func_200(func_201(), iParam0);
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_14();
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

int func_221(int iParam0)
{
	if (!func_16(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_222(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_224())
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

int func_223()
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

int func_224()
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

float func_225(int iParam0, vector3 vParam1, bool bParam2)
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

void func_226()
{
	func_99(&uLocal_276, 0x00000000, 0x00000000);
	if (unk_0x562F77A7F33D2E46("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_51, 0x00000000))
		{
			unk_0x06FF977AA95DCCE3(iLocal_51, 0x00000000);
		}
		unk_0x8910D3D58E0132B8("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_263 != 0x00000003)
	{
		func_229(0x0000001A);
	}
	else
	{
		func_229(0x00000008);
	}
	if (iLocal_263 == 0x00000001)
	{
		unk_0x842F1AEB2FCC00B7(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 0x00000001);
	}
	unk_0x2952D66A502EA873(iLocal_271, 0x00000000);
	unk_0xE342F209E49C5314(vLocal_56 - Vector(20f, 20f, 20f), vLocal_56 + Vector(20f, 20f, 20f), 0x00000001, 0x00000001);
	if (unk_0xDF1306B443CD3D15(iLocal_51, 0x00000000))
	{
		unk_0x05EC10F460C3A4AF(iLocal_51, 0x00000001);
		if (unk_0x20D6474D5F4B9FC6(iLocal_51))
		{
			unk_0xC55F2A0377488064(iLocal_51);
		}
	}
	if (iLocal_263 == 0x00000002)
	{
		unk_0xDB8844D4B7C60440(0x00000001, "RE_BikeThief2");
	}
	func_71(&iLocal_81);
	func_71(&iLocal_79);
	func_72(&uLocal_288);
	func_71(&iLocal_80);
	func_78(0x00000000);
	func_228(&uLocal_82, 0x00000000);
	func_228(&uLocal_82, 0x00000001);
	func_228(&uLocal_82, 0x00000002);
	if ((func_64(iLocal_50) && func_64(iLocal_51)) && unk_0xC42A92762C58E1B9(iLocal_50, iLocal_51, 0x00000000))
	{
		unk_0xE072601B4380E9DF(iLocal_50, iLocal_51, fLocal_62, 0x000C0035);
		unk_0xFADC0A217229F6B5(iLocal_50, 0x00000001);
	}
	func_93(&iLocal_49, 0x00000001, 0x00000000, 0x00000001);
	func_93(&iLocal_50, 0x00000001, 0x00000000, 0x00000001);
	func_227(&iLocal_51);
	if (func_64(iLocal_52))
	{
		unk_0xBA486C69AC1FDE77(iLocal_52);
		func_227(&iLocal_52);
	}
	unk_0x71199B01895C6202(joaat("g_m_y_strpunk_01"));
	unk_0x71199B01895C6202(joaat("a_m_y_beachvesp_01"));
	unk_0x71199B01895C6202(joaat("scorcher"));
	unk_0x71199B01895C6202(joaat("bati"));
	unk_0x8D17794CE3273D70(sLocal_264);
	unk_0x8D17794CE3273D70(sLocal_265);
	unk_0x8D17794CE3273D70(sLocal_267);
	unk_0x8D17794CE3273D70(sLocal_268);
	unk_0x8D17794CE3273D70(sLocal_269);
	unk_0x8D17794CE3273D70(sLocal_270);
	unk_0xB975E4541DDAB1F5(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_227(int iParam0)
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

void func_228(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_229(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_56();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_240())
	{
		func_233(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_232(0x00007530);
		StringCopy(&cVar0, func_231(Global_1B40B, 0x00000001), 64);
		if (func_55(Global_1B40B) > 0x00000000)
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
	func_230(&Global_786B);
	Global_1B40C = 0x00000000;
	func_184(0xFFFFFFFF);
}

void func_230(var uParam0)
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

char* func_231(int iParam0, bool bParam1)
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

void func_232(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_233(int iParam0)
{
	func_234(iParam0, 0x00000000, func_239(iParam0));
}

void func_234(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_201();
	func_237(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_236(iParam0, &uVar0);
	Var1 = { func_235(&uVar0) };
}

struct<16> func_235(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_195(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_194(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_193(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_196(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_197(*uParam0), 64);
	return Var0;
}

void func_236(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_197(*uParam0);
	iVar1 = func_199(*uParam0);
	iVar2 = func_196(*uParam0);
	iVar3 = func_195(*uParam0);
	iVar4 = func_194(*uParam0);
	iVar5 = func_193(*uParam0);
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
	iVar6 = func_192(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_192(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_238(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, iParam1);
	func_206(uParam0, iParam2);
	func_205(uParam0, iParam3);
	func_203(uParam0, iParam5);
	func_204(uParam0, iParam4);
	func_202(uParam0, iParam6);
}

int func_239(int iParam0)
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

int func_240()
{
	if ((Global_1B40B == func_56() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

