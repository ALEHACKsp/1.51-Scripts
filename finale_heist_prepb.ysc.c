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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_95[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	vLocal_92 = { 27.7189f, -608.7927f, 30.6293f };
	vLocal_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		unk_0xC92DB9682A650680("FHPRB_STOP");
		func_210();
		func_209();
	}
	if (func_208(0x00000000))
	{
		unk_0xD7992BEF7A9D109E("FINPRB", 0x00000000);
	}
	unk_0xF63400DBE3303D26("WorkerPedMainGroup", &iLocal_264);
	unk_0xF63400DBE3303D26("GuardMainGroup", &iLocal_265);
	unk_0xAB8E2DDC7AF955E0(joaat("packer"), 0x00000001);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_265, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_264, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_265, iLocal_264);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_264, iLocal_265);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_265, 0xA49E591C);
	unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_265);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_264, 0xA49E591C);
	unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_264);
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_FINPRB", 0x00000000);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000E6, 0x00000000);
		}
		func_206();
		if (iLocal_272 == 0x00000000)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_205(0x0000001B, 0x00000001);
				iLocal_272 = 0x00000001;
			}
		}
		if (iLocal_295 == 0x00000001)
		{
			func_201();
		}
		func_198();
		func_191();
		func_183();
		func_178();
		func_175();
		switch (iLocal_28)
		{
			case 0x00000000:
				func_174();
				break;
			
			case 0x00000001:
				func_171();
				break;
			
			case 0x00000002:
				func_147();
				break;
			
			case 0x00000003:
				func_145();
				break;
			
			case 0x00000004:
				func_116();
				break;
			
			case 0x00000005:
				func_21();
				break;
			
			case 0x00000006:
				func_1();
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0x00000000:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(0x00000001);
			unk_0xC92DB9682A650680("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0x00000000:
					break;
				
				case 0x00000004:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 0x00000003:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 0x00000001:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 0x00000002:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 0x00000005:
					if (func_14() == 0x00000000)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 0x00000002)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 0x00000001)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 0x00000006:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0x00000000)
			{
				func_6(0x00000000);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_209();
			}
			break;
	}
}

int func_2()
{
	if (Global_181B8 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_3()
{
	if (Global_3)
	{
		return 0x00000001;
	}
	if (Global_181B8 == 0x00000007 || Global_181B8 == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0x00000000);
}

void func_5(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 0x00000010)
		{
			StringCopy(&Global_12C36, sParam0, 16);
			StringCopy(&Global_12C3A, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_208(0x00000000))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_11(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_8(&(Global_1B416.f_936.f_21B), iVar1);
	if (Global_16AF7 == Global_181DD)
	{
		Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_15DBC[iVar1 /*34*/].f_F, 0x00000001))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0x00000000);
		}
	}
	Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_2++;
	Global_16AF7 = Global_181DD;
	if (iParam0 == 0xFFFFFFFF)
	{
		if (Global_1B416.f_2378)
		{
		}
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iParam0 /*5*/].f_1, 0x00000004))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iParam0 /*5*/].f_1, 0x00000005))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_8(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 0x0000005E)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = Global_1B416.f_4860[iVar0];
		if ((((iVar1 == 0x00000008 || iVar1 == 0x00000009) || iVar1 == 0x0000000A) || (((iVar1 == 0x0000000B || iVar1 == 0x00000022) || iVar1 == 0x00000048) || iVar1 == 0x00000049)) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0x00000000], 0x00000009))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_10(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_9(&(uParam0->f_8F8[iVar0]));
				uParam0->f_8FC[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_906[iVar0] = 0f;
				uParam0->f_90A[iVar0] = 0x00000000;
				uParam0->f_90E[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_918[iVar0] = 0x00000000;
				Global_17786[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_9 = 0f;
				Global_17786[iVar0 /*29*/].f_C = 0f;
				Global_17786[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_A = 0f;
				Global_17786[iVar0 /*29*/].f_D = 0f;
				Global_17786[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_B = 0f;
				Global_17786[iVar0 /*29*/].f_E = 0f;
				Global_17786[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1A = 0f;
				Global_17786[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1B = 0f;
				Global_17786[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_9(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_10(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0x0000000B:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_10(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_10(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000D:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 0x00000058 && iParam0 != 0x00000059) && iParam0 != 0x0000005C)
		{
			Global_16A39[iParam0 /*2*/] = 0x00000001;
		}
	}
	else
	{
		Global_16A39[iParam0 /*2*/] = 0x00000000;
	}
}

void func_12()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_14())
			{
				case 0x00000000:
					StringCopy(&Global_12C36, "CMN_MARRE", 16);
					break;
				
				case 0x00000001:
					StringCopy(&Global_12C36, "CMN_FARRE", 16);
					break;
				
				case 0x00000002:
					StringCopy(&Global_12C36, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0x00000000;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_14())
			{
				case 0x00000000:
					StringCopy(&Global_12C36, "CMN_MDIED", 16);
					break;
				
				case 0x00000001:
					StringCopy(&Global_12C36, "CMN_FDIED", 16);
					break;
				
				case 0x00000002:
					StringCopy(&Global_12C36, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_12C3A, "", 16);
		}
		Global_181DB = 0x00000000;
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000019);
	}
}

int func_13()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000002))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
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
		if (func_19(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_18(unk_0x16F2683693E537C9());
			if (func_17(iVar0) && (!func_16(0x0000000E) || Global_1AFFD))
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

bool func_16(int iParam0)
{
	return Global_A1D7 == iParam0;
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

void func_21()
{
	func_175();
	if (iLocal_53 == 0x00000000)
	{
		if (iLocal_266 == 0x00000001)
		{
			func_35();
			iLocal_266 = 0x00000000;
		}
		iLocal_273 = 0x00000000;
		iLocal_274 = 0x00000000;
		iLocal_275 = 0x00000000;
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		if (func_34(iLocal_37, 0x00000000))
		{
			if (!func_33(iLocal_37))
			{
				while (!func_32(iLocal_37, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
		if (func_34(iLocal_39, 0x00000000))
		{
			if (!func_33(iLocal_39))
			{
				while (!func_32(iLocal_39, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
		if (func_34(iLocal_38, 0x00000000))
		{
			if (!func_33(iLocal_38))
			{
				while (!func_32(iLocal_38, 0x00000000))
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
		if (unk_0x757EF87A33649210())
		{
			if (!func_31())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_28(iLocal_33, 0xFFFFFFFF, 0x00000001);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		iLocal_295 = 0x00000001;
		iLocal_53 = 0x00000001;
	}
	if (iLocal_53 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
			{
				if (func_14() == 0x00000000)
				{
					if (func_34(iLocal_39, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_39, iLocal_33, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iLocal_39);
							unk_0x0A94A109271BE75A(iLocal_39);
							unk_0x11AD11297DC58CC7(iLocal_39, 0x00000001);
							unk_0x45F014B3D0466974(iLocal_39, iLocal_33, 0x00000000);
						}
					}
					if (func_34(iLocal_38, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_38, iLocal_33, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iLocal_38);
							unk_0x0A94A109271BE75A(iLocal_38);
							unk_0x11AD11297DC58CC7(iLocal_38, 0x00000001);
							unk_0x45F014B3D0466974(iLocal_38, iLocal_33, 0x00000000);
						}
					}
				}
				if (func_14() == 0x00000002)
				{
					if (func_34(iLocal_37, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_37, iLocal_33, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iLocal_37);
							unk_0x0A94A109271BE75A(iLocal_37);
							unk_0x11AD11297DC58CC7(iLocal_37, 0x00000001);
							unk_0x45F014B3D0466974(iLocal_37, iLocal_33, 0x00000000);
						}
					}
					if (func_34(iLocal_38, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_38, iLocal_33, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iLocal_38);
							unk_0x0A94A109271BE75A(iLocal_38);
							unk_0x11AD11297DC58CC7(iLocal_38, 0x00000001);
							unk_0x45F014B3D0466974(iLocal_38, iLocal_33, 0x00000000);
						}
					}
				}
				if (func_14() == 0x00000001)
				{
					if (func_34(iLocal_37, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_37, iLocal_33, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iLocal_37);
							unk_0x0A94A109271BE75A(iLocal_37);
							unk_0x11AD11297DC58CC7(iLocal_37, 0x00000001);
							unk_0x45F014B3D0466974(iLocal_37, iLocal_33, 0x00000000);
						}
					}
					if (func_34(iLocal_39, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_39, iLocal_33, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iLocal_39);
							unk_0x0A94A109271BE75A(iLocal_39);
							unk_0x11AD11297DC58CC7(iLocal_39, 0x00000001);
							unk_0x45F014B3D0466974(iLocal_39, iLocal_33, 0x00000000);
						}
					}
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000);
				}
			}
		}
		SYSTEM::SETTIMERB(0x00000000);
		iLocal_53 = 0x00000002;
	}
	if (iLocal_53 == 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
			{
				if (iLocal_275 == 0x00000000)
				{
					if (func_14() == 0x00000000)
					{
						if (func_34(iLocal_39, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_39, iLocal_33, 0x00000000))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 0x00000001;
									}
								}
								else
								{
									iLocal_275 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_273 = 0x00000001;
						}
						if (func_34(iLocal_38, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_38, iLocal_33, 0x00000000))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 0x00000001;
									}
								}
								else
								{
									iLocal_275 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_274 = 0x00000001;
						}
					}
					if (func_14() == 0x00000002)
					{
						if (func_34(iLocal_37, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_37, iLocal_33, 0x00000000))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 0x00000001;
									}
								}
								else
								{
									iLocal_275 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_273 = 0x00000001;
						}
						if (func_34(iLocal_38, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_38, iLocal_33, 0x00000000))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 0x00000001;
									}
								}
								else
								{
									iLocal_275 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_274 = 0x00000001;
						}
					}
					if (func_14() == 0x00000001)
					{
						if (func_34(iLocal_37, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_37, iLocal_33, 0x00000000))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 0x00000001;
									}
								}
								else
								{
									iLocal_275 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_273 = 0x00000001;
						}
						if (func_34(iLocal_39, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iLocal_39, iLocal_33, 0x00000000))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 0x00000001;
									}
								}
								else
								{
									iLocal_275 = 0x00000001;
								}
							}
						}
						else
						{
							iLocal_274 = 0x00000001;
						}
					}
					if (iLocal_273 == 0x00000001 && iLocal_274 == 0x00000001)
					{
						iLocal_275 = 0x00000001;
					}
				}
				else if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000001))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_53 = 0x00000003;
				}
			}
		}
	}
	if (iLocal_53 == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_33))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
			{
				unk_0x05CA0E7946B27A19(iLocal_33, 0x00000000);
				unk_0x71EDC33E5A423750(iLocal_33, 0x00000002);
				unk_0x1E9649458B15960F(iLocal_33, 0x00000001);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_32))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_32, 0x00000000))
			{
				unk_0x1E9649458B15960F(iLocal_32, 0x00000001);
			}
		}
		iLocal_53 = 0x00000004;
	}
	if (iLocal_53 == 0x00000004)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0x00000000, 0x00000000);
	func_209();
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_F04A)
	{
		Global_F04A = iParam1;
	}
	if (bParam0)
	{
		if ((func_208(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_24(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_208(0x00000000))
	{
		iVar0 = func_13();
		iVar1 = Global_15D98[iVar0 /*5*/];
		uVar2 = Global_12C5B.f_6D[iVar1 /*4*/];
		if (iVar0 == 0xFFFFFFFF)
		{
			if (Global_1B416.f_2378)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000004))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000005))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000004);
		unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000001);
		Global_12C56 = uVar2;
		Global_12C57 = unk_0x1C0640BA9A7327B3();
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000047:
			return 0x00000001;
			break;
		
		case 0x00000056:
			return 0x00000001;
			break;
		
		case 0x0000005B:
			return 0x00000001;
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_25(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_17186, iVar0))
		{
			return 0x00000000;
		}
		unk_0x0674E58A79778E99(&Global_17186, iVar0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_26(int iParam0)
{
	if (iParam0 > 0x00000003)
	{
		return 0x00000000;
	}
	if (iParam0 == func_14())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_177DE[func_27(iParam0)];
}

int func_27(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	else if (iParam0 == 0x00000002)
	{
		return 0x00000002;
	}
	else if (iParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	else if (iParam0 == 0x00000091)
	{
		return 0x00000003;
	}
	return 0x00000004;
}

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
	{
		while (Global_181B3 != 0x00000006)
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x21387C9EECC2B220(0x00000000);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0x00000000)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 0x3F800000);
							unk_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0x00000000);
						}
					}
				}
			}
		}
		if (iParam2 == 0x00000001)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			}
		}
		unk_0x17EFA7496495F972();
		func_29(0x00000000);
	}
}

void func_29(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000D);
	}
}

int func_30()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17186, iVar0))
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0x00000000;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17185, iVar0))
		{
			unk_0xDAB3108F02A4255A(iParam0, 0x00000000, 0x00000000);
			unk_0xE8832A9E16A57A1F(iParam0, 0x00000000, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_17186, iVar0);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_33(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17186, iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0x00000000;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17185, iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_35()
{
	iLocal_295 = 0x00000000;
	iLocal_337 = 0x00000000;
	unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0x00000000);
	}
	func_114();
	unk_0x790015DC92C918E2();
	func_113();
	func_112();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	unk_0x2FB9A57162E54BAB(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 0x00000002:
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 856.9501f, -1573.177f, 29.4751f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 288.3586f);
			break;
		
		case 0x00000003:
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 856.9501f, -1573.177f, 29.4751f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 288.3586f);
			break;
		
		case 0x00000004:
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
					{
						unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_33, 0xFFFFFFFF);
					}
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
					{
						unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_33, 0xFFFFFFFF);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 0x00000003:
			iLocal_313 = 0x00000000;
			iLocal_314 = 0x00000000;
			iLocal_315 = 0x00000000;
			func_108();
			if (func_107() && func_104(7f, 7f, 7f, 0x00000001))
			{
				func_102();
				while (!func_101())
				{
					SYSTEM::WAIT(0x00000000);
				}
				iLocal_34 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x51B096AAC60548C1(0.01f);
			break;
		
		case 0x00000004:
			iLocal_313 = 0x00000000;
			iLocal_314 = 0x00000000;
			iLocal_315 = 0x00000000;
			func_108();
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
				{
					unk_0xA47B46945FF6DE74(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_33, 161.1163f);
				}
			}
			unk_0x536F1BE96C726C4B(41f, -615f, 30f, 50f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			iLocal_313 = 0x00000001;
			iLocal_314 = 0x00000001;
			iLocal_315 = 0x00000001;
			func_108();
			unk_0x536F1BE96C726C4B(41f, -615f, 30f, 50f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			if (unk_0xC844350D5D58C99A(iLocal_33))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
				{
					unk_0xA47B46945FF6DE74(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(iLocal_33, 70.7778f);
				}
			}
			unk_0x523BCC9DC80CD82F(joaat("s_m_m_security_01"));
			while (!unk_0xB87F6CF6E5628C67(joaat("s_m_m_security_01")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_40))
			{
				iLocal_40 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 0x00000001, 0x00000001);
				unk_0x71199B01895C6202(joaat("s_m_m_security_01"));
				unk_0x4E885A246A9D983A(iLocal_40, 0x00000144, 0x00000001);
			}
			break;
	}
}

int func_38(vector3 vParam0, float fParam1)
{
	return func_39(&(Global_18F3B.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_39(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_100(uParam0))
	{
		if (func_99(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_42 == joaat("monster") || uParam0->f_C.f_42 == joaat("marshall"))
		{
			if (unk_0x0399732A9EBC368E(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0x00000000, 0x00000001))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_98(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_97(vParam1, 5f, 0x00000000);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_C.f_42, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0x00000000, 0x00000000, 0x00000001);
				}
				func_80(iVar0, &(uParam0->f_C), 0x00000000, 0x00000001);
				bVar2 = 0x00000001;
				if (unk_0xA7082C42B8809BF2(uParam0->f_C.f_42) || unk_0x83496B932152D4D4(uParam0->f_C.f_42))
				{
					if (!unk_0xA267CBB20C26B1B9(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = 0x00000000;
					}
				}
				if (bVar2)
				{
					unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
				}
				if (uParam0->f_7 == 0x00000001)
				{
					if (bParam3)
					{
						if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_79(uParam0->f_B, 0x00000001);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_79(uParam0->f_B, 0x00000002);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0x00000000);
					unk_0x626D5ADA3EFAE431(iVar0, 0x00000000);
					unk_0x44A200C9B6E1CEA6(iVar0, 0x00000001);
					func_78(iVar0, uParam0->f_B);
				}
				else if ((!func_75(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_74(iVar0);
					if (iVar4 == 0xFFFFFFFF)
					{
						uParam0->f_A = 0x00000000;
					}
					else
					{
						func_67(iVar4);
					}
				}
				if (((Global_181B8 != 0x0000000D && Global_181B8 != 0x0000000A) && Global_181B8 != 0x0000000B) && Global_181B8 != 0x0000000C)
				{
					if (unk_0x12AB0310C2281427(&(Global_181B8.f_3)) == Global_12A8D)
					{
						if (uParam0->f_C.f_42 == Global_1B416.f_7FE8.f_45[0x00000015 /*78*/].f_42)
						{
							func_64(0x00000018, 0x00000000);
							func_67(0x00000018);
						}
					}
				}
				if (uParam0->f_9 == 0x00000001)
				{
					func_40(iVar0, uParam0->f_B);
				}
				unk_0x71199B01895C6202(uParam0->f_C.f_42);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
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
	func_41(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_45(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_44(uParam1->f_42))
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
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_42(iVar0 + 1));
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

int func_42(int iParam0)
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

int func_43(int iParam0, var uParam1, var uParam2)
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

int func_44(int iParam0)
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

void func_45(var uParam0)
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

int func_46(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_62(iParam0, 0x00000000, 0x00000000)) || func_62(iParam0, 0x00000001, 0x00000000)) || func_62(iParam0, 0x00000002, 0x00000000)) || func_61(iParam0) != 0x00000091) || func_60(iParam0)) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || !func_47(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_59(iParam0))
		{
		}
		if (func_59(iParam0))
		{
		}
		if (func_62(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_62(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_62(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_61(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_47(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_48(iParam0, 0x00000000))
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

int func_48(int iParam0, bool bParam1)
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
		if (!func_56())
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
		if ((((!func_55() && !func_54()) && !func_53()) && !func_52()) && !func_56())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_53())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_49(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
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

int func_50()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_51(int iParam0)
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

int func_52()
{
	return 0x00000000;
}

int func_53()
{
	return 0x00000001;
}

int func_54()
{
	return 0x00000001;
}

int func_55()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_56()
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

int func_57(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_48(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_58(int iParam0)
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

int func_59(int iParam0)
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

int func_60(int iParam0)
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

int func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_63(iParam1, iVar0, &sVar1, &iVar2))
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

int func_63(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_64(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_66(iParam0, 0x00000000))
		{
			func_65(iParam0, 0x00000001, 0x00000000);
			func_65(iParam0, 0x00000002, 0x00000000);
			func_65(iParam0, 0x00000003, 0x00000000);
			func_65(iParam0, 0x00000004, 0x00000000);
			func_65(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_65(iParam0, 0x00000000, 0x00000000);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
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

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_67(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_71(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			bVar0 = 0x00000001;
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xDF1306B443CD3D15(Global_126B1.f_8B[iParam0], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_126B1.f_8B[iParam0], 0x00000000))
					{
						bVar0 = 0x00000000;
					}
				}
			}
			if (bVar0)
			{
				unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
				unk_0xA954465BA6FDEFE2(&(Global_126B1.f_8B[iParam0]));
			}
		}
		Global_126B1[iParam0] = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			if (((((iParam0 == 0x00000018 && func_66(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_69(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_69(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_68(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_64(iParam0, 0x00000000);
		}
	}
}

void func_68(var uParam0, var uParam1)
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

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iParam0 < 0x00000000 || iParam0 >= func_70(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_48(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_70(var uParam0)
{
	return *uParam0;
}

int func_71(var uParam0, int iParam1)
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
			uParam0->f_4 = func_72(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_72(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_72(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_72(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_72(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_72(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_72(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_72(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_72(0x00000002, 0x00000001);
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
			if (func_56())
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
			if (func_56())
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
		if (!func_99(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_99(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_99(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_73(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_73(int iParam0, var uParam1, int iParam2)
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

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]) && !unk_0x437347B10A200C4B(Global_126B1.f_1E4[iVar0], 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[iVar0], 0x00000000))
		{
			unk_0x9412F17E127D9759(iParam0, &iVar1, &iVar2);
			unk_0x9412F17E127D9759(Global_126B1.f_1E4[iVar0], &iVar3, &iVar4);
			if (((unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[iVar0]) && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_75(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_77(iParam0, Global_126B1.f_8B[0x00000026], 0x00000000))
			{
				func_67(0x00000026);
				return 0x00000001;
			}
			break;
		
		case 0x73920F8E:
			if (func_77(iParam0, Global_126B1.f_8B[0x0000002B], 0x00000001))
			{
				func_67(0x0000002B);
				return 0x00000001;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0x00000000;
			while (iVar3 <= (iVar2 - 0x00000001))
			{
				if (func_77(iParam0, uVar1[iVar3], 0x00000001) && func_76(unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 2136.133f, 4780.563f, 39.9702f, 5f, 0x00000000))
				{
					if ((!bParam2 || func_99(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
					{
						unk_0xA954465BA6FDEFE2(&iParam0);
						return 0x00000001;
					}
					else
					{
						return 0x00000000;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x0000000E]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x0000000E], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x0000000E]) == joaat("luxor2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x0000000E]))
				{
					func_67(0x0000000E);
					return 0x00000001;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x00000014]))
				{
					func_67(0x00000014);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_76(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_77(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000)) && unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		if (bParam2)
		{
			unk_0x9412F17E127D9759(iParam0, &iVar0, &iVar1);
			unk_0x9412F17E127D9759(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (!unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			Global_1774B[iVar0] = iParam0;
			Global_17755[iVar0] = iParam1;
			Global_1775F[iVar0] = unk_0x134B62B726CEC8E6(iParam0);
			if (unk_0x8E39AC3C76C8AA58(Global_1775F[iVar0]))
			{
				Global_1777B[iParam1 /*3*/][0x00000000] = 0xFFFFFFFF;
			}
			else
			{
				Global_1777B[iParam1 /*3*/][0x00000001] = 0xFFFFFFFF;
			}
			iVar0 = 0x00000009;
		}
		if (iVar0 == 0x00000008)
		{
		}
		iVar0++;
	}
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (iParam0 == 0x00000091 || Global_17755[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000000 || unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == func_72(iParam0, iParam1))
				{
					if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1774B[iVar0], 0x00000000))
					{
						unk_0x73270B3C9CC833FD(Global_1774B[iVar0], 0x00000000, 0x00000001);
						unk_0xA954465BA6FDEFE2(&(Global_1774B[iVar0]));
						Global_17755[iVar0] = 0x00000091;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_80(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_89(iParam0))
		{
			if (unk_0x12AB0310C2281427(&(uParam1->f_1)) != 0x00000000)
			{
				unk_0x55A3C4ED4728EA42(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0x00000000 && *uParam1 < unk_0xBCB9B04D4DA658DF())
			{
				unk_0xA22B35B584F0580A(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 0x0000006F;
			uParam1->f_6 = 0x0000006F;
			uParam1->f_7 = 0x0000006F;
		}
		else if (uParam1->f_42 == joaat("casco"))
		{
			iVar0 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_42(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_42(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_42(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_42(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_42 == 0x4669D038)
		{
			iVar4 = 0x00000001;
			while (iVar4 <= 0x0000000B)
			{
				if (iVar4 != 0x00000009 && iVar4 != 0x0000000A)
				{
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_42(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_42 == 0x98F65A5E)
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) != 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000000);
			}
		}
		if (uParam1->f_42 == 0x19DD9ED1)
		{
			unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000000);
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000005) != 0xFFFFFFFF)
			{
				unk_0xF4FAAFEE2CE3B86C(iParam0, 0x00000001);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000D))
		{
			unk_0xBC3B1E7E1CC2D15C(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x231087BDB2AEBD55(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000C))
		{
			unk_0xAA443C33B073D88B(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xC15818BDC09EC354(iParam0);
		}
		if (uParam1->f_5 != 0xFFFFFFFF && uParam1->f_6 != 0xFFFFFFFF)
		{
			unk_0xC002508A277213DE(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0x00000000)
		{
			uParam1->f_7 = 0x00000000;
		}
		if (uParam1->f_8 < 0x00000000)
		{
			uParam1->f_8 = 0x00000000;
		}
		unk_0x58A0C35FA7CA6162(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_88(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_87())
		{
			uParam1->f_3E = 0x00000000;
			uParam1->f_3F = 0x00000000;
			uParam1->f_40 = 0x00000000;
		}
		else if ((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000)
		{
			uParam1->f_3E = 0x000000FF;
			uParam1->f_3F = 0x000000FF;
			uParam1->f_40 = 0x000000FF;
		}
		unk_0x9F0DB8A295EA8513(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == 0xFFFFFFFF && !func_44(uParam1->f_42))
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
		}
		else
		{
			unk_0x8BF0BEF985EB6D43(iParam0, 0x00000000);
			unk_0x8BF0BEF985EB6D43(iParam0, uParam1->f_41);
		}
		unk_0xA22F71BBC8173C39(iParam0, !unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000009));
		if (bParam2)
		{
			unk_0x71EDC33E5A423750(iParam0, uParam1->f_46);
		}
		unk_0x85654A532F20966B(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		unk_0x7726E33AC3B60544(iParam0, 0x00000002, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001C));
		unk_0x7726E33AC3B60544(iParam0, 0x00000003, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001D));
		unk_0x7726E33AC3B60544(iParam0, 0x00000000, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001E));
		unk_0x7726E33AC3B60544(iParam0, 0x00000001, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001F));
		unk_0x750A9DEB80D6992C(iParam0, unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000A));
		if (unk_0x579935D850368851(iParam0) > 0x00000001 && uParam1->f_43 >= 0x00000000)
		{
			unk_0x446EA2500F021666(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > 0xFFFFFFFF && uParam1->f_45 < 0x000000FF)
		{
			if (!unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iParam0)))
			{
				if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iParam0)))
				{
					if (uParam1->f_45 == 0x00000006)
					{
						func_86(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_86(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			if ((uParam1->f_44 == 0x00000000 || uParam1->f_44 == 0x00000003) || uParam1->f_44 == 0x00000005)
			{
				unk_0x429C172A00A5F89B(iParam0, 0x00000001);
			}
			else
			{
				unk_0x821D9A7077DBCDBC(iParam0, 0x00000001);
			}
		}
		if (bParam3)
		{
			func_81(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_42(iVar5 + 1)))
				{
					if (!unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
					{
						unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000000);
					}
				}
				else if (unk_0xDD62D560CFE11A27(iParam0, iVar5 + 1))
				{
					unk_0xD3421E391490133B(iParam0, iVar5 + 1, 0x00000001);
				}
				iVar5++;
			}
		}
		if ((unk_0x134B62B726CEC8E6(iParam0) == joaat("sheava") || unk_0x134B62B726CEC8E6(iParam0) == joaat("omnis")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("le7b"))
		{
			if (unk_0x0ECB5CA5140957AD(iParam0, 0x00000000) == 0xFFFFFFFF)
			{
				unk_0xD3421E391490133B(iParam0, 0x00000001, 0x00000000);
			}
		}
		if (((unk_0xC41A9202669A24C4(uParam1->f_42) && unk_0xE7BF3A9C4976022F(iParam0)) && !unk_0x4906F8A34E9F4814(iParam0, 0x81BD2ED0)) && !((((Global_440000.f_127B9 == 0x00000006 || Global_440000.f_127B9 == 0x00000007) || Global_440000.f_127B9 == 0x00000012) || Global_440000.f_127B9 == 0x00000013) && Global_440000.f_2 == 0x00000014))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000017))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x00000016))
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000002);
				}
				else
				{
					unk_0xB58CA658A628ED02(iParam0, 0x00000003);
				}
			}
			else
			{
				unk_0xB58CA658A628ED02(iParam0, 0x00000004);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000001B))
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000001);
		}
		else
		{
			unk_0xA1093ABB024EC9BD(iParam0, "IgnoredByQuickSave", 0x00000000);
		}
	}
}

int func_81(int iParam0, var uParam1, var uParam2)
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
	unk_0xF95FF0A179413A39(*iParam0, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			unk_0x73BEC6F1685574E6(*iParam0, iVar1, (*uParam1)[iVar0] > 0x00000000);
		}
		else if (iVar1 == 0x00000016)
		{
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000001);
				if ((*uParam1)[iVar0] == 0x00000001)
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, 0x000000FF);
				}
				else
				{
					unk_0x0CAC3E53DC3F794F(*iParam0, ((*uParam1)[iVar0] - 0x00000002));
				}
			}
			else
			{
				unk_0x73BEC6F1685574E6(*iParam0, iVar1, 0x00000000);
			}
		}
		else if (unk_0x0ECB5CA5140957AD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 0x00000001))
		{
			unk_0x7AFDC9F56E7BB635(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0x00000000)
			{
				if (iVar0 == 0x00000017)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000000] > 0x00000000);
				}
				else if (iVar0 == 0x00000018)
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), (*uParam2)[0x00000001] > 0x00000000);
				}
				else
				{
					unk_0xEE6A1776A67F70C1(*iParam0, iVar1, ((*uParam1)[iVar0] - 0x00000001), 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (func_85(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_84(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_84(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_83(iParam0);
	if (func_82(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000031)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015) || iVar1 == 0x00000016)
			{
			}
			else if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != 0xFFFFFFFF)
			{
				StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
				iVar2 = unk_0x12AB0310C2281427(&cVar3);
				if (iVar2 != 0x00000000)
				{
					if (iVar2 == unk_0x12AB0310C2281427("MNU_CAGE") || iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
					{
						return 0x00000001;
					}
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_83(var uParam0)
{
	switch (unk_0x134B62B726CEC8E6(*uParam0))
	{
		case 0x9A9EB7DE:
			if (unk_0x0ECB5CA5140957AD(*uParam0, 0x00000004) == 0x00000000)
			{
				unk_0xEE6A1776A67F70C1(*uParam0, 0x0000000D, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0x7AFDC9F56E7BB635(*uParam0, 0x0000000D);
			}
			break;
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 0x00000004;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 0x00000003;
				break;
		}
		iVar0 = unk_0x461CAC843A21E4B6(iParam0, 0x00000026);
		iVar1 = unk_0x461CAC843A21E4B6(iParam0, 0x00000018);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 0x00000001);
		if (iVar3 < 0x00000000)
		{
			iVar3 = 0x00000000;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 0x00000001);
		}
		return iVar3;
	}
	return 0x00000000;
}

int func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0x00000001;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x50D4D19F:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8D4B7A8A:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 0x00000001 != 0x00000000)
				{
					return 0x00000000;
				}
				return 0x00000001;
			}
			return 0x00000000;
			break;
		
		case 0x8526E2F5:
		case 0x163F8520:
		case 0x67D52852:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x256E92BA:
		case 0x5BA0FF1E:
		case 0x49E25BA1:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x3C26BD0C:
		case 0x8D45DF49:
		case 0x9804F4C7:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xFE5F0722:
		case 0x93F09558:
		case 0xAE12C99C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x669EB40A:
		case 0x32174AFC:
		case 0xD556917C:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0xD6FB0F30:
		case 0xAE0A3D4F:
		case 0xB2E046FB:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x27D79225:
		case 0x9B065C9E:
		case 0x8644331A:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x6B73A9BE:
		case 0x817AFAAD:
		case 0x0409D787:
			if (iParam1 & 0x00000001 != 0x00000000)
			{
				return 0x00000000;
			}
			return 0x00000001;
			break;
		
		case 0x665F785D:
		case 0x4201A843:
		case 0xC98BBAD6:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
	{
		unk_0xF95FF0A179413A39(iParam0, 0x00000000);
		iVar0 = unk_0x0ECB5CA5140957AD(iParam0, 0x00000018);
		iVar1 = unk_0x3A5601978F787E51(iParam0, 0x00000018);
		unk_0x920DACD685EA4957(iParam0, iParam1);
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("tornado6") || unk_0x134B62B726CEC8E6(iParam0) == 0x9472CD24)
		{
			return;
		}
		if (iVar0 == 0xFFFFFFFF)
		{
			unk_0x7AFDC9F56E7BB635(iParam0, 0x00000018);
		}
		else
		{
			unk_0xEE6A1776A67F70C1(iParam0, 0x00000018, iVar0, iVar1 == 0x00000001);
		}
	}
}

bool func_87()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xF1D385D359D58F72("MPBitset", 0x00000003))
			{
				if (unk_0x30F813723591D02E(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x1E2DFB0EF4BB4566(iParam0, "MPBitset");
				}
				return unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004);
			}
		}
	}
	return 0x00000000;
}

int func_89(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_95(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
		{
			iParam0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_91(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_90(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_90(int iParam0)
{
	if (unk_0xF1D385D359D58F72("FMDeliverableID", 0x00000003))
	{
		if (unk_0x30F813723591D02E(iParam0, "FMDeliverableID"))
		{
			return unk_0x1E2DFB0EF4BB4566(iParam0, "FMDeliverableID");
		}
	}
	return 0xFFFFFFFF;
}

int func_91(int iParam0)
{
	if (func_94(iParam0) == 0x000000E9)
	{
		return func_92(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_92(int iParam0)
{
	if (func_93(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_93(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_94(int iParam0)
{
	if (func_93(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_96(iParam0, 0x00000001, 0x00000001))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
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

void func_97(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_71(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_67(iVar0);
			}
		}
		iVar0++;
	}
}

int func_98(var uParam0)
{
	if (func_100(uParam0))
	{
		if (unk_0xB87F6CF6E5628C67(uParam0->f_C.f_42))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_99(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_100(var uParam0)
{
	if (uParam0->f_C.f_42 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_48(uParam0->f_C.f_42, 0x00000000))
	{
		return 0x00000000;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_76(*uParam0, 1694.62f, 3276.27f, 41.31f, 0x3F000000, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_101()
{
	return func_98(&(Global_18F3B.f_B4A));
}

void func_102()
{
	func_103(&(Global_18F3B.f_B4A));
}

void func_103(var uParam0)
{
	if (func_100(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_C.f_42);
	}
}

int func_104(vector3 vParam0, int iParam1)
{
	return func_105(Global_18F3B.f_B4A.f_C.f_42, vParam0, iParam1);
}

int func_105(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000001)
	{
		vParam1 = { func_106() };
	}
	unk_0xA6B02C1DB14DDA13(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0x00000000;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0x00000000;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

Vector3 func_106()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_107()
{
	return func_100(&(Global_18F3B.f_B4A));
}

void func_108()
{
	unk_0x523BCC9DC80CD82F(joaat("armytrailer2"));
	unk_0x523BCC9DC80CD82F(joaat("packer"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_y_construct_01"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_m_security_01"));
	unk_0x523BCC9DC80CD82F(joaat("bison2"));
	while ((((!unk_0xB87F6CF6E5628C67(joaat("armytrailer2")) || !unk_0xB87F6CF6E5628C67(joaat("packer"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_construct_01"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_m_security_01"))) || !unk_0xB87F6CF6E5628C67(joaat("bison2")))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0xC844350D5D58C99A(iLocal_32))
	{
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000001]))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000001], 0x00000001, 0x00000001);
			iLocal_32 = Global_17409[0x00000001];
			unk_0x2F625BED8BF7F26A(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0x122AAB0B1D6F55AD(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 0x00000001, 0x00000001, 0x00000000);
			unk_0x2F625BED8BF7F26A(iLocal_32);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_33))
	{
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000002]))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000002], 0x00000001, 0x00000001);
			iLocal_33 = Global_17409[0x00000002];
			unk_0x44A200C9B6E1CEA6(iLocal_33, 0x00000001);
			unk_0x71EDC33E5A423750(iLocal_33, 0x00000007);
			func_111(iLocal_33, 0xFFFFFFFF);
			func_110(iLocal_33, 0xFFFFFFFF);
		}
		else
		{
			iLocal_33 = unk_0x122AAB0B1D6F55AD(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 0x00000001, 0x00000001, 0x00000000);
			unk_0x44A200C9B6E1CEA6(iLocal_33, 0x00000001);
			unk_0x71EDC33E5A423750(iLocal_33, 0x00000007);
			func_111(iLocal_33, 0xFFFFFFFF);
			func_110(iLocal_33, 0xFFFFFFFF);
		}
	}
	unk_0xC74DAD25331A5425(iLocal_33, iLocal_32, 0.5f);
	unk_0x71199B01895C6202(joaat("armytrailer2"));
	unk_0x71199B01895C6202(joaat("packer"));
	unk_0x71199B01895C6202(joaat("bison2"));
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000000], 0x00000001, 0x00000001);
			iLocal_35[0x00000000] = Global_17409.f_9[0x00000000];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000000], iLocal_264);
			func_109(iLocal_35[0x00000000], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000000], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000000] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000000], iLocal_264);
			if (unk_0x4742C50E93110B10(912.3f, -1542.6f, 30.4f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000000], 912.3f, -1542.6f, 30.4f, 5f, 0x00000000);
			}
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000000], 0x00000001);
			func_109(iLocal_35[0x00000000], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000001]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000001]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000001], 0x00000001, 0x00000001);
			iLocal_35[0x00000001] = Global_17409.f_9[0x00000001];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000001], iLocal_264);
			func_109(iLocal_35[0x00000001], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000001], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000001] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000001], iLocal_264);
			if (unk_0x4742C50E93110B10(917.5028f, -1517.401f, 29.9673f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000001], 917.5028f, -1517.401f, 29.9673f, 5f, 0x00000000);
			}
			func_109(iLocal_35[0x00000001], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000001], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000002]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000002]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000002], 0x00000001, 0x00000001);
			iLocal_35[0x00000002] = Global_17409.f_9[0x00000002];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000002], iLocal_264);
			func_109(iLocal_35[0x00000002], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000002], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000002] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000002], iLocal_264);
			if (unk_0x4742C50E93110B10(869.6423f, -1541.423f, 29.2516f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000002], 869.6423f, -1541.423f, 29.2516f, 5f, 0x00000000);
			}
			func_109(iLocal_35[0x00000002], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000002], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000003]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000003]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000003], 0x00000001, 0x00000001);
			iLocal_35[0x00000003] = Global_17409.f_9[0x00000003];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000003], iLocal_264);
			func_109(iLocal_35[0x00000003], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000003], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000003] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000003], iLocal_264);
			if (unk_0x4742C50E93110B10(884.3046f, -1573.188f, 29.8247f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000003], 884.3046f, -1573.188f, 29.8247f, 5f, 0x00000000);
			}
			func_109(iLocal_35[0x00000003], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000003], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000004]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000004]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000004], 0x00000001, 0x00000001);
			iLocal_35[0x00000004] = Global_17409.f_9[0x00000004];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000004], iLocal_264);
			func_109(iLocal_35[0x00000004], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000004], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000004] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000004], iLocal_264);
			if (unk_0x4742C50E93110B10(903.8805f, -1575.02f, 29.8327f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000004], 903.8805f, -1575.02f, 29.8327f, 5f, 0x00000000);
			}
			func_109(iLocal_35[0x00000004], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000004], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000005]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000005]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000005], 0x00000001, 0x00000001);
			iLocal_35[0x00000005] = Global_17409.f_9[0x00000005];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000005], iLocal_264);
			func_109(iLocal_35[0x00000005], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000005], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000005] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000005], iLocal_264);
			if (unk_0x4742C50E93110B10(906.2186f, -1575.108f, 29.8125f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000005], 906.2186f, -1575.108f, 29.8125f, 5f, 0x00000000);
			}
			func_109(iLocal_35[0x00000005], 30f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000005], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000006]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000008]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000008], 0x00000001, 0x00000001);
			iLocal_35[0x00000006] = Global_17409.f_9[0x00000008];
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000006], iLocal_264);
			func_109(iLocal_35[0x00000006], 20f, 5f, 120f, -45f, 45f);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000006], 0x00000001);
		}
		else
		{
			iLocal_35[0x00000006] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_35[0x00000006], iLocal_264);
			if (unk_0x4742C50E93110B10(889.285f, -1561.485f, 29.6539f, 3f, 0x00000000))
			{
				unk_0xC74CB55864B8C5C9(iLocal_35[0x00000006], 889.285f, -1561.485f, 29.6539f, 5f, 0x00000000);
			}
			func_109(iLocal_35[0x00000006], 20f, 5f, 120f, -45f, 45f);
			unk_0x11AD11297DC58CC7(iLocal_35[0x00000006], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000006]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000006], 0x00000001, 0x00000001);
			iLocal_36[0x00000000] = Global_17409.f_9[0x00000006];
			unk_0x6DF7BF67E86AAE86(iLocal_36[0x00000000], iLocal_265);
			func_109(iLocal_36[0x00000000], 40f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_36[0x00000000], 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_36[0x00000000], joaat("weapon_pistol"), 0x00000064, 0x00000000, 0x00000000);
			unk_0x4F39CC3882DD074E(iLocal_36[0x00000000], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0x00000000] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_36[0x00000000], iLocal_265);
			func_109(iLocal_36[0x00000000], 40f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_36[0x00000000], 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_36[0x00000000], joaat("weapon_pistol"), 0x00000064, 0x00000000, 0x00000000);
			unk_0x4F39CC3882DD074E(iLocal_36[0x00000000], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000007]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000007], 0x00000001, 0x00000001);
			iLocal_36[0x00000001] = Global_17409.f_9[0x00000007];
			unk_0x6DF7BF67E86AAE86(iLocal_36[0x00000001], iLocal_265);
			func_109(iLocal_36[0x00000001], 40f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_36[0x00000001], 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_36[0x00000001], joaat("weapon_pistol"), 0x00000064, 0x00000000, 0x00000000);
			unk_0x4F39CC3882DD074E(iLocal_36[0x00000001], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[0x00000001] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 0x00000001, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_36[0x00000001], iLocal_265);
			func_109(iLocal_36[0x00000001], 40f, 0x40A00000, 0x42F00000, 0xC2B40000, 0x42B40000);
			unk_0x11AD11297DC58CC7(iLocal_36[0x00000001], 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_36[0x00000001], joaat("weapon_pistol"), 0x00000064, 0x00000000, 0x00000000);
			unk_0x4F39CC3882DD074E(iLocal_36[0x00000001], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x71199B01895C6202(joaat("s_m_y_construct_01"));
	unk_0x71199B01895C6202(joaat("s_m_m_security_01"));
}

void func_109(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

void func_110(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_F055 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (iParam1 == 0xFFFFFFFF || Global_11F88[iVar0 /*9*/] == iParam1)
		{
			if (Global_11F88[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_11F88[iVar0 /*9*/].f_6 = iParam0;
				Global_11F88[iVar0 /*9*/].f_7 = 0x00000001;
				Global_11F88[iVar0 /*9*/].f_8 = 0x00000000;
			}
		}
		iVar0++;
	}
}

void func_112()
{
	iLocal_54 = 0x00000000;
	while (iLocal_54 <= 0x00000006)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_54]) && unk_0x9C77D2D0559097F0(iLocal_35[iLocal_54], 0x00000001))
		{
			unk_0xEBA53F35D0085654(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]) && unk_0x9C77D2D0559097F0(iLocal_36[0x00000000], 0x00000001))
	{
		unk_0xEBA53F35D0085654(&(iLocal_36[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]) && unk_0x9C77D2D0559097F0(iLocal_36[0x00000001], 0x00000001))
	{
		unk_0xEBA53F35D0085654(&(iLocal_36[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_37) && unk_0x9C77D2D0559097F0(iLocal_37, 0x00000001))
	{
		unk_0xEBA53F35D0085654(&iLocal_37);
	}
	if (unk_0xC844350D5D58C99A(iLocal_38) && unk_0x9C77D2D0559097F0(iLocal_38, 0x00000001))
	{
		unk_0xEBA53F35D0085654(&iLocal_38);
	}
	if (unk_0xC844350D5D58C99A(iLocal_39) && unk_0x9C77D2D0559097F0(iLocal_39, 0x00000001))
	{
		unk_0xEBA53F35D0085654(&iLocal_39);
	}
	if (unk_0xC844350D5D58C99A(iLocal_40) && unk_0x9C77D2D0559097F0(iLocal_40, 0x00000001))
	{
		unk_0xEBA53F35D0085654(&iLocal_40);
	}
	if (!func_31())
	{
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 519.1906f, -2980.994f, 5.0443f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 270.1911f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_32) && unk_0x9C77D2D0559097F0(iLocal_32, 0x00000001))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_32);
	}
	if (unk_0xC844350D5D58C99A(Global_17409[0x00000003]))
	{
		unk_0x73270B3C9CC833FD(Global_17409[0x00000003], 0x00000001, 0x00000000);
		unk_0xA954465BA6FDEFE2(&(Global_17409[0x00000003]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_33) && unk_0x9C77D2D0559097F0(iLocal_33, 0x00000001))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_33);
	}
	unk_0x8D17794CE3273D70("cellphone@str");
	unk_0x8D17794CE3273D70("misscarsteal4@director_grip");
	unk_0x38DC636F3D2D2FA8("FHPRB_START");
	unk_0x38DC636F3D2D2FA8("FHPRB_TRUCK");
	unk_0x38DC636F3D2D2FA8("FHPRB_COPS");
	unk_0x38DC636F3D2D2FA8("FHPRB_LOST");
	unk_0x38DC636F3D2D2FA8("FHPRB_STOP");
	unk_0x536F1BE96C726C4B(889.5f, -1553.8f, 30f, 150f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
}

void func_113()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_49))
	{
		unk_0x142CC44DB769B57E(&iLocal_49);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_50))
	{
		unk_0x142CC44DB769B57E(&iLocal_50);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_51))
	{
		unk_0x142CC44DB769B57E(&iLocal_51);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_52))
	{
		unk_0x142CC44DB769B57E(&iLocal_52);
	}
}

void func_114()
{
	Global_4CD7 = 0x00000000;
	func_115();
}

void func_115()
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

void func_116()
{
	func_139();
	if (iLocal_53 == 0x00000000)
	{
		if (iLocal_266 == 0x00000001)
		{
			func_35();
			iLocal_266 = 0x00000000;
		}
		iLocal_267 = 0x00000000;
		iLocal_269 = 0x00000000;
		iLocal_346 = 0x00000000;
		iLocal_85 = 0x00000000;
		iLocal_86 = 0x00000000;
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x8D17794CE3273D70("cellphone@str");
		unk_0x8D17794CE3273D70("misscarsteal4@director_grip");
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		unk_0x51B096AAC60548C1(1f);
		unk_0x8B4C4CA774181102(10f, 5f, 0x00000004);
		iLocal_295 = 0x00000001;
		iLocal_53 = 0x00000001;
	}
	if (iLocal_53 == 0x00000001)
	{
		func_138(&uLocal_99, 0x00000003, 0x00000000, "LESTER", 0x00000000, 0x00000001);
		if (func_14() == 0x00000000)
		{
			func_138(&uLocal_99, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		}
		if (func_14() == 0x00000001)
		{
			func_138(&uLocal_99, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
		}
		if (func_14() == 0x00000002)
		{
			func_138(&uLocal_99, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
		}
		iLocal_53 = 0x00000002;
	}
	if (iLocal_53 == 0x00000002)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (func_14() == 0x00000000)
			{
				if (func_123(&uLocal_99, 0x0000000C, "FHPBAUD", "FHPB_CHAT1", 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 0x00000004);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_53 = 0x00000003;
				}
			}
			if (func_14() == 0x00000001)
			{
				if (func_123(&uLocal_99, 0x0000000C, "FHPBAUD", "FHPB_CHAT3", 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 0x00000004);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_53 = 0x00000003;
				}
			}
			if (func_14() == 0x00000002)
			{
				if (func_123(&uLocal_99, 0x0000000C, "FHPBAUD", "FHPB_CHAT2", 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x8B4C4CA774181102(5f, 5f, 0x00000004);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_53 = 0x00000003;
				}
			}
		}
	}
	if (iLocal_53 == 0x00000003)
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_50))
		{
			if (!func_122())
			{
				if (SYSTEM::TIMERA() > 0x00002904)
				{
					iLocal_50 = func_120(vLocal_92, 0x00000001);
				}
			}
		}
		if (func_122())
		{
			iLocal_53 = 0x00000004;
		}
	}
	if (iLocal_53 == 0x00000004)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
				{
					if (unk_0x6CFEA4CFD9C496C8(iLocal_33))
					{
						if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_92, 4f, 4f, 2f, 0x00000001, 0x00000001, 0x00000002))
						{
							if (func_118(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 4f, 0x00000003, 0.5f, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xC92DB9682A650680("FHPRB_STOP");
								if (unk_0xE4EDC4B0E92C078B(iLocal_50))
								{
									unk_0x142CC44DB769B57E(&iLocal_50);
								}
								unk_0x8B4C4CA774181102(5f, 5f, 0x00000004);
								func_117(0x00000000, 0xFFFFFFFF);
								iLocal_53 = 0x00000000;
								iLocal_28 = 0x00000005;
							}
						}
					}
				}
			}
		}
	}
}

void func_117(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_F050)
	{
	}
	Global_F050 = 0x00000000;
	if (bParam0)
	{
		Global_F051 = 0x00000001;
	}
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000004)
			{
				Global_11F88[iVar0 /*9*/].f_5 = 0x00000000;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_11F88[iVar0 /*9*/] > 0x00000000)
			{
				if (Global_11F88[iVar0 /*9*/] == iParam1)
				{
					Global_11F88[iVar0 /*9*/].f_5 = 0x00000000;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_118(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_119(iParam0);
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

void func_119(int iParam0)
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

int func_120(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_122()
{
	if (Global_5145 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_123(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_137(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	return func_124(sParam3, iParam4, bParam8);
}

int func_124(char* sParam0, int iParam1, bool bParam2)
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
					func_115();
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
		if (func_136(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_135();
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
				func_134();
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
				if (func_133())
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
			if (func_132())
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
			func_131();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_130();
		func_125();
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
		func_115();
	}
	return 0x00000000;
}

void func_125()
{
	if (!func_126())
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

int func_126()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_129())
	{
		return 0x00000000;
	}
	if (func_127(unk_0xD803B885F5E47A62()))
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

bool func_127(int iParam0)
{
	return func_128(iParam0, 0x00000014);
}

bool func_128(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_129()
{
	return 0xFFFFFFFF;
}

void func_130()
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

void func_131()
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

int func_132()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_133()
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

void func_134()
{
	if (func_16(0x0000000E))
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

void func_135()
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

bool func_136(int iParam0, int iParam1)
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

void func_137(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_138(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_139()
{
	if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
		{
			if (unk_0x6CFEA4CFD9C496C8(iLocal_33))
			{
				if (func_144("HELP_1"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_49))
				{
					unk_0x142CC44DB769B57E(&iLocal_49);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_52))
				{
					if (iLocal_294 == 0x00000001)
					{
						if (unk_0x1C0640BA9A7327B3() < iLocal_85 + 7500)
						{
							unk_0x790015DC92C918E2();
						}
					}
					unk_0x142CC44DB769B57E(&iLocal_52);
				}
				if (iLocal_28 == 0x00000004)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						if (iLocal_346 == 0x00000000)
						{
							unk_0x38DC636F3D2D2FA8("FHPRB_COPS");
							unk_0xC92DB9682A650680("FHPRB_LOST");
							iLocal_346 = 0x00000001;
						}
						if (iLocal_269 == 0x00000001)
						{
							if (unk_0x1C0640BA9A7327B3() < iLocal_86 + 7500)
							{
								unk_0x790015DC92C918E2();
							}
							iLocal_269 = 0x00000000;
						}
						if (iLocal_53 > 0x00000003)
						{
							if (!unk_0xE4EDC4B0E92C078B(iLocal_50))
							{
								iLocal_50 = func_120(vLocal_92, 0x00000001);
							}
							if (iLocal_267 == 0x00000000)
							{
								if (!unk_0xD17F06053799A7CA())
								{
									func_143("GOD_2", 0x00001D4C, 0x00000001);
									iLocal_267 = 0x00000001;
								}
							}
						}
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_50))
						{
							unk_0x142CC44DB769B57E(&iLocal_50);
						}
						if (iLocal_269 == 0x00000000)
						{
							unk_0x790015DC92C918E2();
							func_143("GOD_4", 0x00001D4C, 0xFFFFFFFF);
							unk_0xC92DB9682A650680("FHPRB_COPS");
							iLocal_86 = unk_0x1C0640BA9A7327B3();
							iLocal_269 = 0x00000001;
							iLocal_346 = 0x00000000;
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_49))
				{
					unk_0x142CC44DB769B57E(&iLocal_49);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_50))
				{
					unk_0x142CC44DB769B57E(&iLocal_50);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_32, 0x00000000))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_52))
					{
						iLocal_52 = func_141(iLocal_32, 0x00000000, 0x00000000);
						unk_0x321E019A46034F39(iLocal_52, 0x00000001);
						if (unk_0xD17F06053799A7CA())
						{
							unk_0x790015DC92C918E2();
						}
						if (iLocal_294 == 0x00000000)
						{
							func_143("GOD_6", 0x00001D4C, 0xFFFFFFFF);
							iLocal_85 = unk_0x1C0640BA9A7327B3();
							iLocal_294 = 0x00000001;
						}
						if (!func_144("HELP_1"))
						{
							func_140("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_52))
			{
				unk_0x142CC44DB769B57E(&iLocal_52);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_50))
			{
				unk_0x142CC44DB769B57E(&iLocal_50);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_49))
				{
					iLocal_49 = func_141(iLocal_33, 0x00000000, 0x00000000);
					unk_0x321E019A46034F39(iLocal_49, 0x00000001);
				}
			}
			if (iLocal_270 == 0x00000000)
			{
				unk_0x790015DC92C918E2();
				func_143("GOD_5", 0x00001D4C, 0xFFFFFFFF);
				iLocal_270 = 0x00000001;
			}
		}
	}
}

void func_140(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_141(int iParam0, bool bParam1, bool bParam2)
{
	return func_142(iParam0, !bParam1, bParam2);
}

int func_142(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_121(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_143(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

bool func_144(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_145()
{
	if (iLocal_53 > 0x00000001)
	{
		func_139();
	}
	if (iLocal_53 == 0x00000000)
	{
		if (iLocal_266 == 0x00000001)
		{
			func_35();
			iLocal_266 = 0x00000000;
		}
		iLocal_296 = 0x00000000;
		iLocal_297 = 0x00000000;
		iLocal_298 = 0x00000000;
		iLocal_299 = 0x00000000;
		iLocal_300 = 0x00000000;
		iLocal_301 = 0x00000000;
		iLocal_302 = 0x00000000;
		iLocal_303[0x00000000] = 0x00000000;
		iLocal_303[0x00000001] = 0x00000000;
		iLocal_304[0x00000000] = 0x00000000;
		iLocal_304[0x00000001] = 0x00000000;
		iLocal_305 = 0x00000000;
		iLocal_306 = 0x00000000;
		iLocal_307 = 0x00000000;
		iLocal_308 = 0x00000000;
		iLocal_309 = 0x00000000;
		iLocal_310 = 0x00000000;
		iLocal_311 = 0x00000000;
		iLocal_318 = 0x00000000;
		iLocal_319 = 0x00000000;
		iLocal_320 = 0x00000000;
		iLocal_321 = 0x00000000;
		iLocal_322 = 0x00000000;
		iLocal_323 = 0x00000000;
		iLocal_324 = 0x00000000;
		iLocal_325 = 0x00000000;
		iLocal_326 = 0x00000000;
		iLocal_327 = 0x00000000;
		iLocal_328[0x00000000] = 0x00000000;
		iLocal_328[0x00000001] = 0x00000000;
		iLocal_329[0x00000000] = 0x00000000;
		iLocal_329[0x00000001] = 0x00000000;
		iLocal_330[0x00000000] = 0x00000000;
		iLocal_330[0x00000001] = 0x00000000;
		iLocal_331[0x00000000] = 0x00000000;
		iLocal_331[0x00000001] = 0x00000000;
		iLocal_332[0x00000000] = 0x00000000;
		iLocal_332[0x00000001] = 0x00000000;
		iLocal_333[0x00000000] = 0x00000000;
		iLocal_333[0x00000001] = 0x00000000;
		iLocal_334[0x00000000] = 0x00000000;
		iLocal_334[0x00000001] = 0x00000000;
		iLocal_336 = 0x00000000;
		iLocal_339 = 0x00000000;
		iLocal_340[0x00000000] = 0x00000000;
		iLocal_341[0x00000000] = 0x00000000;
		iLocal_340[0x00000001] = 0x00000000;
		iLocal_341[0x00000001] = 0x00000000;
		iLocal_343 = 0x00000000;
		iLocal_344 = 0x00000000;
		iLocal_345 = 0x00000000;
		iLocal_359 = 0x00000000;
		iLocal_270 = 0x00000000;
		iLocal_271 = 0x00000000;
		iLocal_276 = 0x00000000;
		iLocal_286 = 0x00000000;
		iLocal_287 = 0x00000000;
		iLocal_288 = 0x00000000;
		iLocal_289 = 0x00000000;
		iLocal_290 = 0x00000000;
		iLocal_291 = 0x00000000;
		iLocal_292 = 0x00000000;
		iLocal_293 = 0x00000000;
		iLocal_294 = 0x00000000;
		iLocal_312 = 0x00000000;
		iLocal_342 = 0x00000000;
		iLocal_360 = 0x00000000;
		iLocal_362 = 0x00000000;
		iLocal_335 = 0x00000000;
		iLocal_85 = 0x00000000;
		iLocal_86 = 0x00000000;
		iLocal_54 = 0x00000000;
		while (iLocal_54 <= 0x00000006)
		{
			iLocal_268[iLocal_54] = 0x00000000;
			iLocal_282[iLocal_54] = 0x00000000;
			iLocal_284[iLocal_54] = 0x00000000;
			iLocal_285[iLocal_54] = 0x00000000;
			iLocal_283[iLocal_54] = 0x00000000;
			iLocal_54++;
		}
		unk_0x3F423BF5B8125A50("cellphone@str");
		unk_0x3F423BF5B8125A50("misscarsteal4@director_grip");
		if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
		{
			if (!unk_0xE4EDC4B0E92C078B(iLocal_49))
			{
				iLocal_49 = func_141(iLocal_33, 0x00000000, 0x00000000);
				unk_0x321E019A46034F39(iLocal_49, 0x00000001);
			}
		}
		unk_0x34D79252800B23FF(0x00000000);
		if (unk_0x757EF87A33649210())
		{
			if (!func_31())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			if (unk_0xC844350D5D58C99A(iLocal_34))
			{
				func_28(iLocal_34, 0xFFFFFFFF, 0x00000001);
				unk_0x046C362CF15F1935(&iLocal_34);
			}
			else
			{
				func_28(0x00000000, 0xFFFFFFFF, 0x00000001);
			}
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		unk_0xC92DB9682A650680("FHPRB_START");
		unk_0x536F1BE96C726C4B(43.5f, -615.8f, 32.4f, 50f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		iLocal_295 = 0x00000001;
		iLocal_53 = 0x00000001;
	}
	if (iLocal_53 == 0x00000001)
	{
		if (iLocal_342 == 0x00000000)
		{
			if (!unk_0xD17F06053799A7CA())
			{
				unk_0x8B4C4CA774181102(5f, 8f, 0x00000004);
				func_143("GOD_1", 0x00001D4C, 0x00000001);
				iLocal_342 = 0x00000001;
			}
		}
		if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
			{
				unk_0xC92DB9682A650680("FHPRB_TRUCK");
				if (unk_0xE4EDC4B0E92C078B(iLocal_49))
				{
					unk_0x142CC44DB769B57E(&iLocal_49);
				}
				func_146(0x00000290, 0x00000000);
				unk_0x51B096AAC60548C1(1f);
				iLocal_53 = 0x00000002;
			}
		}
	}
	if (iLocal_53 == 0x00000002)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
			{
				if (unk_0x6CFEA4CFD9C496C8(iLocal_33))
				{
					if (func_144("HELP_1"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_49))
					{
						unk_0x142CC44DB769B57E(&iLocal_49);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_52))
					{
						unk_0x142CC44DB769B57E(&iLocal_52);
					}
					if (unk_0x0EB28750412C3A5A(vLocal_93, vLocal_96, 0x00000001) < 100f)
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							if (iLocal_271 == 0x00000001)
							{
								if (unk_0x1C0640BA9A7327B3() < iLocal_86 + 7500)
								{
									unk_0x790015DC92C918E2();
									iLocal_271 = 0x00000000;
								}
							}
							if (iLocal_312 == 0x00000000)
							{
								unk_0x8B4C4CA774181102(5f, 8f, 0x00000004);
								func_143("GOD_7", 0x00001D4C, 0xFFFFFFFF);
								iLocal_312 = 0x00000001;
							}
						}
						else if (iLocal_271 == 0x00000000)
						{
							unk_0x8B4C4CA774181102(5f, 8f, 0x00000004);
							unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = unk_0x1C0640BA9A7327B3();
							func_143("GOD_4", 0x00001D4C, 0xFFFFFFFF);
							iLocal_271 = 0x00000001;
						}
					}
					else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						iLocal_53 = 0x00000000;
						iLocal_28 = 0x00000004;
					}
				}
				else
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_49))
					{
						unk_0x142CC44DB769B57E(&iLocal_49);
					}
					if (unk_0xDF1306B443CD3D15(iLocal_32, 0x00000000))
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_52))
						{
							iLocal_52 = func_141(iLocal_32, 0x00000000, 0x00000000);
							unk_0x321E019A46034F39(iLocal_52, 0x00000001);
							if (unk_0xD17F06053799A7CA())
							{
								unk_0x790015DC92C918E2();
							}
							if (iLocal_294 == 0x00000000)
							{
								func_143("GOD_6", 0x00001D4C, 0xFFFFFFFF);
								iLocal_294 = 0x00000001;
							}
							if (!func_144("HELP_1"))
							{
								func_140("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_52))
				{
					unk_0x142CC44DB769B57E(&iLocal_52);
				}
				if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_49))
					{
						iLocal_49 = func_141(iLocal_33, 0x00000000, 0x00000000);
						unk_0x321E019A46034F39(iLocal_49, 0x00000001);
					}
				}
				if (iLocal_270 == 0x00000000)
				{
					unk_0x790015DC92C918E2();
					func_143("GOD_5", 0x00001D4C, 0xFFFFFFFF);
					iLocal_270 = 0x00000001;
				}
			}
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_F052 = iParam0;
	if (!Global_F050)
	{
		Global_F050 = 0x00000001;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < Global_11F87)
		{
			if (Global_11F88[iVar0 /*9*/] == iParam0)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
			iVar0++;
		}
	}
}

void func_147()
{
	if (iLocal_53 == 0x00000000)
	{
		if (iLocal_266 == 0x00000001)
		{
			func_35();
			iLocal_266 = 0x00000000;
		}
		func_170();
		func_108();
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000003]))
		{
			if (unk_0xDF1306B443CD3D15(Global_17409[0x00000003], 0x00000000))
			{
				if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(Global_17409[0x00000003])))
				{
					unk_0x73270B3C9CC833FD(Global_17409[0x00000003], 0x00000001, 0x00000001);
					func_149(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0x00000000, 0x00000091);
				}
				if (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(Global_17409[0x00000003])) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(Global_17409[0x00000003]))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(Global_17409[0x00000003]))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(Global_17409[0x00000003])))
				{
					unk_0x73270B3C9CC833FD(Global_17409[0x00000003], 0x00000001, 0x00000001);
					func_149(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0x00000000, 0x00000091);
				}
			}
		}
		func_148(0x0000004F);
		iLocal_295 = 0x00000001;
		iLocal_53 = 0x00000001;
	}
	if (iLocal_53 == 0x00000001)
	{
		iLocal_53 = 0x00000000;
		iLocal_28 = 0x00000003;
	}
}

void func_148(int iParam0)
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		if (iParam0 == Global_175B2)
		{
			Global_175B6 = 0x00000001;
			return;
		}
	}
}

void func_149(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0xC844350D5D58C99A(Global_18F3B.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_18F3B.f_4, 0x00000000))
		{
			if (func_169(0x00000018) != Global_18F3B.f_4)
			{
				if (iParam2 == 0x00000001)
				{
					if (func_166(unk_0x68F4C0EC296D3901(Global_18F3B.f_4, 0x00000001), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_150(Global_18F3B.f_4, vParam0, fParam1, 0x00000018, 0x00000000);
			}
		}
	}
}

void func_150(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_165(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_41(iParam0, &Var0);
		if (func_99(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_163(iParam3, &Var0, vParam1, fParam2, func_61(iParam0));
		func_151(iParam3, iParam0, 0x00000000);
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_71(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_152();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_169(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_40(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

var func_152()
{
	var uVar0;
	
	func_162(&uVar0, unk_0x4460E481B9E33ADA());
	func_161(&uVar0, unk_0x8D199E381D262EEF());
	func_160(&uVar0, unk_0xD8A54335F18763BA());
	func_155(&uVar0, unk_0x972A296334C9D57B());
	func_154(&uVar0, unk_0x118229AD063C3C1D());
	func_153(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_153(var uParam0, int iParam1)
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

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(*uParam0);
	iVar1 = func_157(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_156(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_156(int iParam0, int iParam1)
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

var func_157(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_158(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_158(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_159(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

void func_163(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_71(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_164(iParam0);
			func_68(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_64(iParam0, 0x00000001);
		}
	}
}

void func_164(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_71(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_64(iParam0, 0x00000000);
		}
	}
}

void func_165(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_164(iParam0);
	func_64(iParam0, 0x00000000);
}

int func_166(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_167(vParam0, iParam1, 0x00000001);
	switch (iVar0)
	{
		case 0x00000000:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 0x00000001;
			break;
		
		case 0x00000001:
		case 0x00000002:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 0x00000001;
			break;
		
		case 0x00000003:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 0x00000001;
			break;
		
		case 0x00000004:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 0x00000001;
			break;
		
		case 0x00000005:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_167(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_168(iVar0) || iParam2 == 0x00000000)
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

bool func_168(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_169(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

void func_170()
{
	Global_16AFA = 0x00000001;
}

void func_171()
{
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0x51B096AAC60548C1(0.01f);
	iLocal_44 = unk_0x7D6CA5F52B3748BF(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_45 = unk_0x7D6CA5F52B3748BF(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_46 = unk_0x7D6CA5F52B3748BF(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_47 = unk_0x7D6CA5F52B3748BF(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_42 = unk_0x7D6CA5F52B3748BF(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_43 = unk_0x7D6CA5F52B3748BF(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	if (func_30())
	{
		if (Global_16AF9 == 0x00000001)
		{
			func_173(28.4065f, -608.9371f, 30.6293f, 70.7778f, 0x00000001, 0x00000000);
			iLocal_360 = 0x00000001;
			iLocal_266 = 0x00000001;
			iLocal_53 = 0x00000000;
			iLocal_28 = 0x00000005;
		}
		else if (func_172() == 0x00000000)
		{
			if (func_107() && func_104(7f, 7f, 7f, 0x00000001))
			{
				func_173(818.8139f, -1610.406f, 30.7951f, 264.412f, 0x00000001, 0x00000000);
			}
			else
			{
				func_173(825.5603f, -1605.825f, 30.9548f, 312.5221f, 0x00000001, 0x00000000);
			}
			iLocal_266 = 0x00000001;
			iLocal_360 = 0x00000001;
			iLocal_53 = 0x00000000;
			iLocal_28 = 0x00000003;
		}
	}
	else if (func_208(0x00000000))
	{
		iLocal_266 = 0x00000001;
		iLocal_360 = 0x00000001;
		iLocal_53 = 0x00000000;
		iLocal_28 = 0x00000003;
	}
	else
	{
		iLocal_53 = 0x00000000;
		iLocal_28 = 0x00000002;
	}
}

int func_172()
{
	if (!Global_181B8 == 0x0000000A && !Global_181B8 == 0x00000009)
	{
		return 0x00000000;
	}
	return Global_181B8.f_2;
}

void func_173(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_30())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000002);
		unk_0x21387C9EECC2B220(0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		Global_181B4 = { vParam0 };
		Global_181B7 = fParam1;
		Global_181B3 = 0x00000001;
		if (iParam2 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000E);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000E);
		}
		if (iParam3 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x00000018);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000018);
		}
		func_29(0x00000001);
	}
}

void func_174()
{
	if (!func_30())
	{
		iLocal_28 = 0x00000001;
	}
	else
	{
		iLocal_28 = 0x00000001;
	}
}

void func_175()
{
	if (!unk_0xC844350D5D58C99A(iLocal_40))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 45f, -616.2f, 30.8f, 0x00000001) < 150f)
		{
			unk_0x523BCC9DC80CD82F(joaat("s_m_m_security_01"));
			if (unk_0xB87F6CF6E5628C67(joaat("s_m_m_security_01")))
			{
				iLocal_40 = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 0x00000001, 0x00000001);
				unk_0x4E885A246A9D983A(iLocal_40, 0x00000144, 0x00000001);
			}
			unk_0x71199B01895C6202(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_40))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_40))
		{
			if (unk_0x4742C50E93110B10(65.2f, -617.2f, 30.8f, 5f, 0x00000000))
			{
				if (iLocal_337 == 0x00000000)
				{
					if (unk_0x0A059E0DB9253280(iLocal_40))
					{
						unk_0xA3BF0AA5A2608191(iLocal_40);
					}
					else
					{
						unk_0x327AAEE25F323797(iLocal_40);
					}
					unk_0x4A35AD9FC803369E(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_40, 0x00000001);
					iLocal_89 = unk_0x1C0640BA9A7327B3();
					iLocal_337 = 0x00000001;
				}
				else if (unk_0x1C0640BA9A7327B3() > iLocal_89 + 5000)
				{
					if (!unk_0xACCBB8E1BDF4D6BE(iLocal_40))
					{
						iLocal_337 = 0x00000000;
					}
				}
			}
			if (func_177(unk_0x16F2683693E537C9(), iLocal_40, 0x00000001) < 20f)
			{
				if (iLocal_316 == 0x00000000)
				{
					unk_0x0C8C0C840C2D1AD2(iLocal_40, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000430, 0x00000003);
					iLocal_316 = 0x00000001;
				}
			}
			else if (iLocal_316 == 0x00000001)
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_40, unk_0x16F2683693E537C9(), 0x00000001, 0x00000000, 0x00000002);
				iLocal_316 = 0x00000000;
			}
		}
	}
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 45f, -616.2f, 30.8f, 0x00000001) < 50f)
	{
		if (iLocal_338 == 0x00000000)
		{
			iLocal_90 = 0x1DBDB635;
			iLocal_91 = 0xE16D6429;
			unk_0x8010B3127F058F0F(iLocal_90, 0xB965B659, 61f, -633f, 32f, 0x00000001, 0x00000001, 0x00000000);
			unk_0x8010B3127F058F0F(iLocal_91, 0xB965B659, 66f, -618f, 32f, 0x00000001, 0x00000001, 0x00000000);
			iLocal_338 = 0x00000001;
		}
		if (iLocal_338 == 0x00000001)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (vLocal_93.x > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						unk_0x838CC054A9235BEC(iLocal_90, fLocal_97, 0x00000000, 0x00000001);
						unk_0x838CC054A9235BEC(iLocal_91, fLocal_97, 0x00000000, 0x00000001);
						unk_0x1BA7FCEAFCE8D46E(iLocal_90, 0x00000004, 0x00000000, 0x00000001);
						unk_0x1BA7FCEAFCE8D46E(iLocal_91, 0x00000004, 0x00000000, 0x00000001);
						iLocal_317 = 0x00000000;
					}
				}
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0x838CC054A9235BEC(iLocal_90, fLocal_97, 0x00000000, 0x00000001);
						unk_0x838CC054A9235BEC(iLocal_91, fLocal_97, 0x00000000, 0x00000001);
						unk_0x1BA7FCEAFCE8D46E(iLocal_90, 0x00000004, 0x00000000, 0x00000001);
						unk_0x1BA7FCEAFCE8D46E(iLocal_91, 0x00000004, 0x00000000, 0x00000001);
						iLocal_317 = 0x00000000;
					}
				}
			}
			else if (iLocal_317 == 0x00000000)
			{
				if (vLocal_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0x838CC054A9235BEC(iLocal_90, fLocal_97, 0x00000000, 0x00000001);
						unk_0x838CC054A9235BEC(iLocal_91, fLocal_97, 0x00000000, 0x00000001);
						unk_0x1BA7FCEAFCE8D46E(iLocal_90, 0x00000004, 0x00000000, 0x00000001);
						unk_0x1BA7FCEAFCE8D46E(iLocal_91, 0x00000004, 0x00000000, 0x00000001);
						iLocal_317 = 0x00000001;
					}
				}
			}
		}
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(iLocal_40))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_40))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						if (iLocal_314 == 0x00000000)
						{
							if (iLocal_313 == 0x00000000)
							{
								func_138(&uLocal_99, 0x00000004, iLocal_40, "FHPBSecGuard", 0x00000000, 0x00000001);
								if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_313 = 0x00000001;
								}
							}
						}
						else if (iLocal_315 == 0x00000000)
						{
							func_138(&uLocal_99, 0x00000004, iLocal_40, "FHPBSecGuard", 0x00000000, 0x00000001);
							if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_315 = 0x00000001;
							}
						}
					}
					else if (iLocal_314 == 0x00000000)
					{
						func_138(&uLocal_99, 0x00000004, iLocal_40, "FHPBSecGuard", 0x00000000, 0x00000001);
						if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_314 = 0x00000001;
						}
					}
				}
			}
		}
	}
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_137(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_124(sParam2, iParam3, 0x00000000);
}

float func_177(int iParam0, int iParam1, bool bParam2)
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

void func_178()
{
	int iVar0;
	
	if (!unk_0xD17F06053799A7CA())
	{
		if (!func_182() || !unk_0x04E6B3EAA8742BFA())
		{
			if (iLocal_28 == 0x00000003)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && iLocal_31 == 0x00000000)
				{
					if (func_14() == 0x00000000)
					{
						if (iLocal_29 == 0x00000001)
						{
							if (iLocal_291 == 0x00000000)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_88 = unk_0x1C0640BA9A7327B3();
										iLocal_291 = 0x00000001;
									}
								}
							}
						}
						if (iLocal_29 == 0x00000001)
						{
							if (iLocal_291 == 0x00000001 && unk_0x1C0640BA9A7327B3() > iLocal_88 + 7000)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_88 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_29 == 0x00000002)
					{
						if (iLocal_325 == 0x00000000)
						{
							if (func_180())
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_79 = unk_0x1C0640BA9A7327B3();
									iLocal_325 = 0x00000001;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 0x00000002 && iLocal_29 == 0x00000001)
				{
					if (iLocal_336 == 0x00000000)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_84 = unk_0x1C0640BA9A7327B3();
								iLocal_336 = 0x00000001;
							}
						}
					}
					else if (unk_0x1C0640BA9A7327B3() > iLocal_84 + 8000)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_84 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
				}
				if (iLocal_29 == 0x00000004)
				{
					if (iLocal_290 == 0x00000000)
					{
						func_114();
						if (func_180())
						{
							unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0x00000000)
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_61 = unk_0x1C0640BA9A7327B3();
									iLocal_286 = 0x00000001;
									iLocal_290 = 0x00000001;
								}
							}
							else
							{
								iLocal_61 = unk_0x1C0640BA9A7327B3();
								iLocal_286 = 0x00000001;
								iLocal_290 = 0x00000001;
							}
						}
					}
					if (iLocal_290 == 0x00000001)
					{
						if (iLocal_286 == 0x00000000)
						{
							iLocal_61 = unk_0x1C0640BA9A7327B3();
							iLocal_286 = 0x00000001;
						}
						if (iLocal_286 == 0x00000001)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_61 + 9000)
							{
								if (func_180())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_286 = 0x00000000;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 0x00000003)
				{
					if (iLocal_322 == 0x00000001)
					{
						if (iLocal_288 == 0x00000000)
						{
							if (iLocal_289 == 0x00000001)
							{
								if (func_180())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_288 = 0x00000001;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_33))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
								{
									if (func_180())
									{
										if (func_176(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_62 = unk_0x1C0640BA9A7327B3();
											iLocal_288 = 0x00000001;
										}
									}
								}
							}
						}
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_62 + 10000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_33))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000000))
								{
									if (func_180())
									{
										if (func_176(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_62 = unk_0x1C0640BA9A7327B3();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 0x00000001)
					{
						if (iLocal_324 == 0x00000000)
						{
							if (func_180())
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_324 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_179()
{
	if (func_14() == 0x00000000)
	{
		func_138(&uLocal_99, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		return 0x00000001;
	}
	if (func_14() == 0x00000001)
	{
		func_138(&uLocal_99, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
		return 0x00000001;
	}
	if (func_14() == 0x00000002)
	{
		func_138(&uLocal_99, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_180()
{
	int iVar0;
	
	iLocal_57 = 0x00000000;
	while (iLocal_57 <= 0x00000006)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_57]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_57]))
			{
				iVar0 = func_181(unk_0x16F2683693E537C9(), iLocal_264, 0x00000000, 0x00000000, 0xFFFFFFFF);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_177(unk_0x16F2683693E537C9(), iVar0, 0x00000001) < 15f)
				{
					func_138(&uLocal_99, 0x00000005, iLocal_35[iLocal_57], "CONSTRUCTION3", 0x00000000, 0x00000001);
					return 0x00000001;
				}
			}
		}
		iLocal_57++;
	}
	return 0x00000000;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x263615A674FCA6E9(iParam0, &iVar0, iParam4);
		iVar1 = 0x00000000;
		while (iVar1 <= (iVar0 - 0x00000001))
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar1]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar0[iVar1]))
				{
					if (unk_0xD09DF7101876AFB8(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0x00000000)
						{
							if (iParam3 == 0x00000001)
							{
								if (unk_0x0A059E0DB9253280(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 0x00000001)
						{
							if (unk_0xC844350D5D58C99A(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0xD09DF7101876AFB8(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 0x00000001)
										{
											if (unk_0x0A059E0DB9253280(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0x00000000;
}

int func_182()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_183()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			unk_0x51B096AAC60548C1(0f);
		}
		else
		{
			unk_0x51B096AAC60548C1(1f);
		}
	}
	func_190();
	if (iLocal_303[0x00000000])
	{
		if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f && unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
		{
			if (iLocal_328[0x00000000] == 0x00000000)
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000430, 0x00000003);
				iLocal_328[0x00000000] = 0x00000001;
			}
			if (iLocal_328[0x00000000] == 0x00000001)
			{
				if (unk_0xD1960163A3042274(iLocal_36[0x00000000], 0x08F5AF9D) != 0x00000000 || unk_0xD1960163A3042274(iLocal_36[0x00000000], 0x08F5AF9D) != 0x00000001)
				{
					iLocal_328[0x00000000] = 0x00000000;
				}
			}
		}
		else if (iLocal_328[0x00000000] == 0x00000001)
		{
			unk_0x0C8C0C840C2D1AD2(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 0x00000001, 0x00000000, 0x00000002);
			iLocal_328[0x00000000] = 0x00000000;
		}
	}
	if (iLocal_303[0x00000001])
	{
		if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 20f && unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
		{
			if (iLocal_328[0x00000001] == 0x00000000)
			{
				unk_0x0C8C0C840C2D1AD2(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000430, 0x00000003);
				iLocal_328[0x00000001] = 0x00000001;
			}
			if (iLocal_328[0x00000001] == 0x00000001)
			{
				if (unk_0xD1960163A3042274(iLocal_36[0x00000001], 0x08F5AF9D) != 0x00000000 || unk_0xD1960163A3042274(iLocal_36[0x00000001], 0x08F5AF9D) != 0x00000001)
				{
					iLocal_328[0x00000001] = 0x00000000;
				}
			}
		}
		else if (iLocal_328[0x00000001] == 0x00000001)
		{
			unk_0x0C8C0C840C2D1AD2(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 0x00000001, 0x00000000, 0x00000002);
			iLocal_328[0x00000001] = 0x00000000;
		}
	}
	if (iLocal_303[0x00000000] && iLocal_303[0x00000001])
	{
		if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001))
		{
			iLocal_298 = 0x00000001;
			iLocal_299 = 0x00000000;
		}
		else
		{
			iLocal_298 = 0x00000000;
			iLocal_299 = 0x00000001;
		}
	}
	else
	{
		if (iLocal_303[0x00000000] && !iLocal_303[0x00000001])
		{
			iLocal_298 = 0x00000001;
			iLocal_299 = 0x00000000;
		}
		if (iLocal_303[0x00000001] && !iLocal_303[0x00000000])
		{
			iLocal_298 = 0x00000000;
			iLocal_299 = 0x00000001;
		}
	}
	switch (iLocal_31)
	{
		case 0x00000000:
			if (unk_0xDA8F5DDC86FE3C26("SCRAP_SECURITY"))
			{
				if (!unk_0x8ED9A0095B69A728("SCRAP_SECURITY"))
				{
					unk_0x2723524E448F4BDD("SCRAP_SECURITY", 0x00000001);
				}
				if (unk_0x8ED9A0095B69A728("SCRAP_SECURITY"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
						{
							if (!unk_0x9E834FAC6CCB49FB(iLocal_36[0x00000000]))
							{
								if (unk_0x4742C50E93110B10(863.1551f, -1564.572f, 29.3231f, 5f, 0x00000001))
								{
									iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
									if (!unk_0x94C3EBF41911ED33(iLocal_36[0x00000000]))
									{
										if (iLocal_341[0x00000000] == 0x00000000)
										{
											unk_0x3003D662BC385BD6(iLocal_36[0x00000000], 863.1551f, -1564.572f, 29.3231f, 5f, 0x00000000);
											iLocal_340[0x00000000] = 0x00000000;
											iLocal_341[0x00000000] = 0x00000001;
										}
									}
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_83[0x00000000] + 2000)
								{
									if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_36[0x00000000], 0x00000001), 863.1551f, -1564.572f, 29.3231f, 0x00000001) > 3f)
									{
										if (iLocal_340[0x00000000] == 0x00000000)
										{
											unk_0x96167B03C5A77156(iLocal_36[0x00000000], 863.1551f, -1564.572f, 29.3231f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
											iLocal_341[0x00000000] = 0x00000000;
											iLocal_340[0x00000000] = 0x00000001;
										}
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
						{
							if (!unk_0x9E834FAC6CCB49FB(iLocal_36[0x00000001]))
							{
								if (unk_0x4742C50E93110B10(940.2881f, -1573.877f, 29.3866f, 5f, 0x00000001))
								{
									iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
									if (!unk_0x94C3EBF41911ED33(iLocal_36[0x00000001]))
									{
										if (iLocal_341[0x00000001] == 0x00000000)
										{
											unk_0x3003D662BC385BD6(iLocal_36[0x00000001], 940.2881f, -1573.877f, 29.3866f, 5f, 0x00000000);
											iLocal_340[0x00000001] = 0x00000000;
											iLocal_341[0x00000001] = 0x00000001;
										}
									}
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_83[0x00000001] + 2000)
								{
									if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_36[0x00000001], 0x00000001), 940.2881f, -1573.877f, 29.3866f, 0x00000001) > 3f)
									{
										if (iLocal_340[0x00000001] == 0x00000000)
										{
											unk_0x96167B03C5A77156(iLocal_36[0x00000001], 940.2881f, -1573.877f, 29.3866f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
											iLocal_341[0x00000001] = 0x00000000;
											iLocal_340[0x00000001] = 0x00000001;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
					{
						if ((func_189(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) || func_188(0x00000000))
						{
							if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 100f) || unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
							{
								if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (iLocal_334[0x00000000] == 0x00000000)
									{
										if (!unk_0x7069CC4DE1EA3FAA(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 45f))
										{
											if (!unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
											{
												unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
											}
											else
											{
												unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
											}
											unk_0xF96A174EE26D7588(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 0x00001388);
											iLocal_82[0x00000000] = unk_0x1C0640BA9A7327B3();
											func_187(iLocal_36[0x00000000]);
											iLocal_334[0x00000000] = 0x00000001;
										}
									}
									if (iLocal_334[0x00000000] == 0x00000001)
									{
										if (unk_0x1C0640BA9A7327B3() > iLocal_82[0x00000000] + 5000)
										{
											iLocal_334[0x00000000] = 0x00000000;
										}
									}
									if (iLocal_304[0x00000000] == 0x00000000 && iLocal_304[0x00000001] == 0x00000000)
									{
										if (iLocal_302 == 0x00000000)
										{
											func_185(iLocal_36[0x00000000], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000006);
											iLocal_66 = unk_0x1C0640BA9A7327B3();
											iLocal_302 = 0x00000001;
										}
										else if (unk_0x1C0640BA9A7327B3() > iLocal_66 + 15000)
										{
											func_185(iLocal_36[0x00000000], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
											iLocal_66 = unk_0x1C0640BA9A7327B3();
										}
									}
									else
									{
										if (iLocal_304[0x00000000] == 0x00000001)
										{
											if (iLocal_305 == 0x00000000)
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
												iLocal_72 = unk_0x1C0640BA9A7327B3();
												iLocal_305 = 0x00000001;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_72 + 15000)
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
												iLocal_72 = unk_0x1C0640BA9A7327B3();
											}
										}
										if (iLocal_304[0x00000001] == 0x00000001)
										{
											if (iLocal_306 == 0x00000000)
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
												iLocal_73 = unk_0x1C0640BA9A7327B3();
												iLocal_306 = 0x00000001;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_73 + 15000)
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
												iLocal_73 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 15f)
					{
						if ((func_189(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) || func_188(0x00000000))
						{
							if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 100f))
							{
								if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (iLocal_334[0x00000001] == 0x00000000)
									{
										if (!unk_0x7069CC4DE1EA3FAA(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 45f))
										{
											if (!unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
											{
												unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
											}
											else
											{
												unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
											}
											unk_0xF96A174EE26D7588(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 0x00001388);
											iLocal_82[0x00000001] = unk_0x1C0640BA9A7327B3();
											func_187(iLocal_36[0x00000001]);
											iLocal_334[0x00000001] = 0x00000001;
										}
									}
									if (iLocal_334[0x00000001] == 0x00000001)
									{
										if (unk_0x1C0640BA9A7327B3() > iLocal_82[0x00000001] + 5000)
										{
											iLocal_334[0x00000001] = 0x00000000;
										}
									}
									if (iLocal_304[0x00000000] == 0x00000000 && iLocal_304[0x00000001] == 0x00000000)
									{
										if (iLocal_302 == 0x00000000)
										{
											func_185(iLocal_36[0x00000001], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000006);
											iLocal_66 = unk_0x1C0640BA9A7327B3();
											iLocal_302 = 0x00000001;
										}
										else if (unk_0x1C0640BA9A7327B3() > iLocal_66 + 15000)
										{
											func_185(iLocal_36[0x00000001], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
											iLocal_66 = unk_0x1C0640BA9A7327B3();
										}
									}
									else
									{
										if (iLocal_304[0x00000001] == 0x00000001)
										{
											if (iLocal_305 == 0x00000000)
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000006);
												iLocal_72 = unk_0x1C0640BA9A7327B3();
												iLocal_305 = 0x00000001;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_72 + 15000)
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
												iLocal_72 = unk_0x1C0640BA9A7327B3();
											}
										}
										if (iLocal_304[0x00000000] == 0x00000001)
										{
											if (iLocal_306 == 0x00000000)
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000006);
												iLocal_73 = unk_0x1C0640BA9A7327B3();
												iLocal_306 = 0x00000001;
											}
											else if (unk_0x1C0640BA9A7327B3() > iLocal_73 + 15000)
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
												iLocal_73 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_360 == 0x00000000)
			{
				iLocal_360 = 0x00000001;
			}
			if (func_184() || iLocal_297 == 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
					{
						if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
						{
							iLocal_81[0x00000000] = unk_0x1C0640BA9A7327B3();
							iLocal_332[0x00000000] = 0x00000001;
							if (iLocal_331[0x00000000] == 0x00000000)
							{
								if (unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
								}
								unk_0xAFF39FB306F8E232(iLocal_36[0x00000000], 0x00000032, 0x00000001);
								unk_0x6C3AE6E278DB3D0E(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								func_187(iLocal_36[0x00000000]);
								iLocal_331[0x00000000] = 0x00000001;
							}
						}
						else if (iLocal_333[0x00000000] == 0x00000000)
						{
							if (iLocal_332[0x00000000] == 0x00000000)
							{
								if (unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
								}
								unk_0x96167B03C5A77156(iLocal_36[0x00000000], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 3f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
								func_187(iLocal_36[0x00000000]);
								iLocal_333[0x00000000] = 0x00000001;
							}
							if (iLocal_332[0x00000000] == 0x00000001)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_81[0x00000000] + 500)
								{
									if (unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
									}
									else
									{
										unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
									}
									unk_0x96167B03C5A77156(iLocal_36[0x00000000], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 3f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
									func_187(iLocal_36[0x00000000]);
									iLocal_333[0x00000000] = 0x00000001;
								}
							}
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
					{
						if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
						{
							iLocal_81[0x00000001] = unk_0x1C0640BA9A7327B3();
							iLocal_332[0x00000001] = 0x00000001;
							if (iLocal_331[0x00000001] == 0x00000000)
							{
								if (unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
								}
								unk_0xAFF39FB306F8E232(iLocal_36[0x00000001], 0x00000032, 0x00000001);
								unk_0x6C3AE6E278DB3D0E(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								func_187(iLocal_36[0x00000001]);
								iLocal_331[0x00000001] = 0x00000001;
							}
						}
						else if (iLocal_333[0x00000001] == 0x00000000)
						{
							if (iLocal_332[0x00000001] == 0x00000000)
							{
								if (unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
								}
								unk_0x96167B03C5A77156(iLocal_36[0x00000001], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 3f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
								func_187(iLocal_36[0x00000001]);
								iLocal_333[0x00000001] = 0x00000001;
							}
							if (iLocal_332[0x00000001] == 0x00000001)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_81[0x00000001] + 500)
								{
									if (unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
									}
									else
									{
										unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
									}
									unk_0x96167B03C5A77156(iLocal_36[0x00000001], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 3f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
									func_187(iLocal_36[0x00000001]);
									iLocal_333[0x00000001] = 0x00000001;
								}
							}
						}
					}
				}
				if (func_184())
				{
					if (iLocal_307 == 0x00000000)
					{
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000002)
						{
							unk_0x34D79252800B23FF(0x00000005);
							unk_0x51B096AAC60548C1(1f);
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
							iLocal_307 = 0x00000001;
						}
					}
					if (iLocal_298 == 0x00000001)
					{
						if (iLocal_300 == 0x00000000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
								{
									func_185(iLocal_36[0x00000000], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x0000000B);
									iLocal_71 = unk_0x1C0640BA9A7327B3();
									iLocal_300 = 0x00000001;
								}
							}
						}
						else if (unk_0x1C0640BA9A7327B3() > iLocal_71 + 7000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
								{
									func_185(iLocal_36[0x00000000], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
									iLocal_71 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
					if (iLocal_299 == 0x00000001)
					{
						if (iLocal_300 == 0x00000000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
								{
									func_185(iLocal_36[0x00000001], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
									iLocal_71 = unk_0x1C0640BA9A7327B3();
									iLocal_300 = 0x00000001;
								}
							}
						}
						else if (unk_0x1C0640BA9A7327B3() > iLocal_71 + 7000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 20f)
							{
								if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
								{
									func_185(iLocal_36[0x00000001], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
									iLocal_71 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0x00000000)
					{
						iLocal_41 = func_181(unk_0x16F2683693E537C9(), 0xA49E591C, 0x00000000, 0x00000000, 0x0000001C);
						if (iLocal_41 != 0x00000000)
						{
							if (unk_0xC844350D5D58C99A(iLocal_41))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_41))
								{
									if (func_177(unk_0x16F2683693E537C9(), iLocal_41, 0x00000001) < 35f)
									{
										iLocal_339 = 0x00000001;
									}
								}
							}
						}
					}
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000 && iLocal_339 == 0x00000000)
					{
						if (iLocal_298 == 0x00000001)
						{
							if (iLocal_301 == 0x00000000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
									{
										func_185(iLocal_36[0x00000000], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
										iLocal_70 = unk_0x1C0640BA9A7327B3();
										iLocal_301 = 0x00000001;
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_70 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
									{
										func_185(iLocal_36[0x00000000], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000009);
										iLocal_70 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
						if (iLocal_299 == 0x00000001)
						{
							if (iLocal_301 == 0x00000000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
									{
										func_185(iLocal_36[0x00000001], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
										iLocal_70 = unk_0x1C0640BA9A7327B3();
										iLocal_301 = 0x00000001;
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_70 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 20f)
								{
									if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
									{
										func_185(iLocal_36[0x00000001], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
										iLocal_70 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
				}
			}
			if (!func_184())
			{
				if (iLocal_309 == 0x00000000)
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 893.2f, -1556.5f, 30f, 0x00000001) < 18f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
							{
								if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
								{
									iLocal_65 = unk_0x1C0640BA9A7327B3();
									iLocal_309 = 0x00000001;
								}
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
							{
								if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
								{
									iLocal_65 = unk_0x1C0640BA9A7327B3();
									iLocal_309 = 0x00000001;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0x00000000)
				{
					if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) > 4f)
							{
								if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
								{
									if (iLocal_329[0x00000000] == 0x00000000)
									{
										if (unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
										}
										unk_0xE185F110925D87DB(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x3F000000, 0x40000000, 0x40000000, 0x00000000);
										func_187(iLocal_36[0x00000000]);
										iLocal_329[0x00000000] = 0x00000001;
									}
									iLocal_80[0x00000000] = unk_0x1C0640BA9A7327B3();
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_80[0x00000000] + 500)
								{
									if (iLocal_330[0x00000000] == 0x00000000)
									{
										if (unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
										}
										unk_0x96167B03C5A77156(iLocal_36[0x00000000], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
										func_187(iLocal_36[0x00000000]);
										iLocal_330[0x00000000] = 0x00000001;
									}
								}
							}
							else if (iLocal_361[0x00000000] == 0x00000000)
							{
								if (unk_0x0A059E0DB9253280(iLocal_36[0x00000000]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_36[0x00000000]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_36[0x00000000]);
								}
								unk_0xDD353D0E9C789D0E(&iLocal_48);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0x93D47DFD0AE94949(0x00000000, 0x000007D0);
								unk_0x25644C31B4B6E9F3(iLocal_48, 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_48);
								unk_0x78ADC381772E3D54(iLocal_36[0x00000000], iLocal_48);
								unk_0xF82EA857DA10E0CD(&iLocal_48);
								func_187(iLocal_36[0x00000000]);
								iLocal_361[0x00000000] = 0x00000001;
							}
							if (iLocal_335 == 0x00000000)
							{
								if (iLocal_326 == 0x00000000 || iLocal_302 == 0x00000001)
								{
									if (iLocal_296 == 0x00000000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000001);
												iLocal_67 = unk_0x1C0640BA9A7327B3();
												iLocal_68 = unk_0x1C0640BA9A7327B3();
												iLocal_65 = unk_0x1C0640BA9A7327B3();
												iLocal_309 = 0x00000001;
												iLocal_296 = 0x00000001;
												iLocal_304[0x00000000] = 0x00000001;
											}
										}
									}
									else if (unk_0x1C0640BA9A7327B3() > iLocal_67 + 7000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x0000000B);
												iLocal_67 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
								else if (iLocal_302 == 0x00000000)
								{
									if (iLocal_327 == 0x00000000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
											{
												func_185(iLocal_36[0x00000000], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x00000008);
												iLocal_296 = 0x00000001;
												iLocal_327 = 0x00000001;
											}
										}
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_68 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 15f)
								{
									if (!unk_0x65636D4556D82155(iLocal_36[0x00000000]))
									{
										func_185(iLocal_36[0x00000000], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 0x0000000B);
										iLocal_68 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) > 4f)
							{
								if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
								{
									if (iLocal_329[0x00000001] == 0x00000000)
									{
										if (unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
										}
										unk_0xE185F110925D87DB(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x3F000000, 0x40000000, 0x40000000, 0x00000000);
										func_187(iLocal_36[0x00000001]);
										iLocal_329[0x00000001] = 0x00000001;
									}
									iLocal_80[0x00000001] = unk_0x1C0640BA9A7327B3();
								}
								else if (unk_0x1C0640BA9A7327B3() > iLocal_80[0x00000001] + 500)
								{
									if (iLocal_330[0x00000001] == 0x00000000)
									{
										if (unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
										}
										else
										{
											unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
										}
										unk_0x96167B03C5A77156(iLocal_36[0x00000001], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
										func_187(iLocal_36[0x00000001]);
										iLocal_330[0x00000001] = 0x00000001;
									}
								}
							}
							else if (iLocal_361[0x00000001] == 0x00000000)
							{
								if (unk_0x0A059E0DB9253280(iLocal_36[0x00000001]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_36[0x00000001]);
								}
								else
								{
									unk_0x327AAEE25F323797(iLocal_36[0x00000001]);
								}
								unk_0xDD353D0E9C789D0E(&iLocal_48);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								unk_0x93D47DFD0AE94949(0x00000000, 0x000007D0);
								unk_0x25644C31B4B6E9F3(iLocal_48, 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_48);
								unk_0x78ADC381772E3D54(iLocal_36[0x00000001], iLocal_48);
								unk_0xF82EA857DA10E0CD(&iLocal_48);
								func_187(iLocal_36[0x00000001]);
								iLocal_361[0x00000001] = 0x00000001;
							}
							if (iLocal_335 == 0x00000000)
							{
								if (iLocal_326 == 0x00000000 || iLocal_302 == 0x00000001)
								{
									if (iLocal_296 == 0x00000000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000009);
												iLocal_67 = unk_0x1C0640BA9A7327B3();
												iLocal_69 = unk_0x1C0640BA9A7327B3();
												iLocal_65 = unk_0x1C0640BA9A7327B3();
												iLocal_309 = 0x00000001;
												iLocal_296 = 0x00000001;
												iLocal_304[0x00000001] = 0x00000001;
											}
										}
									}
									else if (unk_0x1C0640BA9A7327B3() > iLocal_67 + 7000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x0000000B);
												iLocal_67 = unk_0x1C0640BA9A7327B3();
											}
										}
									}
								}
								else if (iLocal_302 == 0x00000000)
								{
									if (iLocal_327 == 0x00000000)
									{
										if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 10f)
										{
											if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
											{
												func_185(iLocal_36[0x00000001], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x00000008);
												iLocal_296 = 0x00000001;
												iLocal_327 = 0x00000001;
											}
										}
									}
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_69 + 7000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 10f)
								{
									if (!unk_0x65636D4556D82155(iLocal_36[0x00000001]))
									{
										func_185(iLocal_36[0x00000001], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 0x0000000B);
										iLocal_69 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
					if (iLocal_309 == 0x00000001)
					{
						if (iLocal_335 == 0x00000000)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_65 + 22000)
							{
								iLocal_335 = 0x00000001;
							}
						}
					}
					if (iLocal_309 == 0x00000001)
					{
						if (iLocal_297 == 0x00000000)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_65 + 30000)
							{
								unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
								iLocal_297 = 0x00000001;
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_33))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
						{
							if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000001))
							{
								if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
								{
									iLocal_297 = 0x00000001;
								}
							}
							if (func_177(unk_0x16F2683693E537C9(), iLocal_33, 0x00000001) < 5f && unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
							{
								if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()) || unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
								{
									iLocal_297 = 0x00000001;
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
						{
							if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
							{
								if (unk_0x05569C69D7945F99(unk_0x16F2683693E537C9()))
								{
									if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
									{
										iLocal_297 = 0x00000001;
									}
								}
							}
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
						{
							if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
							{
								if (unk_0x05569C69D7945F99(unk_0x16F2683693E537C9()))
								{
									if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
									{
										iLocal_297 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_184()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iLocal_64 = 0x00000000;
		while (iLocal_64 <= 0x00000006)
		{
			if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_64]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_64]))
				{
					if (func_189(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && !func_188(0x00000000))
					{
						if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_64], unk_0x16F2683693E537C9()))
						{
							return 0x00000001;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
			{
				if (func_189(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && !func_188(0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
					{
						return 0x00000001;
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
			{
				if (func_189(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && !func_188(0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_185(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_186(iParam3), 0x00000000);
}

int func_186(int iParam0)
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

void func_187(int iParam0)
{
	if (iParam0 == iLocal_36[0x00000000])
	{
		iLocal_328[0x00000000] = 0x00000000;
		iLocal_340[0x00000000] = 0x00000000;
		iLocal_341[0x00000000] = 0x00000000;
		iLocal_334[0x00000000] = 0x00000000;
		iLocal_331[0x00000000] = 0x00000000;
		iLocal_333[0x00000000] = 0x00000000;
		iLocal_329[0x00000000] = 0x00000000;
		iLocal_330[0x00000000] = 0x00000000;
		iLocal_361[0x00000000] = 0x00000000;
	}
	if (iParam0 == iLocal_36[0x00000001])
	{
		iLocal_328[0x00000001] = 0x00000000;
		iLocal_340[0x00000001] = 0x00000000;
		iLocal_341[0x00000001] = 0x00000000;
		iLocal_334[0x00000001] = 0x00000000;
		iLocal_331[0x00000001] = 0x00000000;
		iLocal_333[0x00000001] = 0x00000000;
		iLocal_329[0x00000001] = 0x00000000;
		iLocal_330[0x00000001] = 0x00000000;
		iLocal_361[0x00000001] = 0x00000000;
	}
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

void func_190()
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vLocal_93 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
		{
			vLocal_95[0x00000000 /*3*/] = { unk_0x68F4C0EC296D3901(iLocal_36[0x00000000], 0x00000001) };
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
		{
			vLocal_95[0x00000001 /*3*/] = { unk_0x68F4C0EC296D3901(iLocal_36[0x00000001], 0x00000001) };
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
		{
			iLocal_303[0x00000000] = 0x00000001;
		}
		else
		{
			iLocal_303[0x00000000] = 0x00000000;
		}
	}
	else
	{
		iLocal_303[0x00000000] = 0x00000000;
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
		{
			iLocal_303[0x00000001] = 0x00000001;
		}
		else
		{
			iLocal_303[0x00000001] = 0x00000000;
		}
	}
	else
	{
		iLocal_303[0x00000001] = 0x00000000;
	}
	if (iLocal_31 != 0x00000000)
	{
		if (iLocal_31 == 0x00000001)
		{
			if (iLocal_303[0x00000000] == 0x00000001)
			{
				if (iLocal_303[0x00000001] == 0x00000001)
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001))
					{
						if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
						{
							if (((vLocal_93.x < vLocal_95[0x00000000 /*3*/] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0x00000000, 0x00000001, 0x00000000))
							{
								iLocal_31 = 0x00000000;
								iLocal_340[0x00000000] = 0x00000000;
								iLocal_341[0x00000000] = 0x00000000;
								iLocal_340[0x00000001] = 0x00000000;
								iLocal_341[0x00000001] = 0x00000000;
								iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
								iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
							}
						}
						else if (vLocal_93.x < vLocal_95[0x00000000 /*3*/])
						{
							iLocal_31 = 0x00000000;
							iLocal_340[0x00000000] = 0x00000000;
							iLocal_341[0x00000000] = 0x00000000;
							iLocal_340[0x00000001] = 0x00000000;
							iLocal_341[0x00000001] = 0x00000000;
							iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
							iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 15f)
					{
						if ((vLocal_93.x > vLocal_95[0x00000001 /*3*/] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_31 = 0x00000000;
							iLocal_340[0x00000000] = 0x00000000;
							iLocal_341[0x00000000] = 0x00000000;
							iLocal_340[0x00000001] = 0x00000000;
							iLocal_341[0x00000001] = 0x00000000;
							iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
							iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (vLocal_93.x > vLocal_95[0x00000001 /*3*/])
					{
						iLocal_31 = 0x00000000;
						iLocal_340[0x00000000] = 0x00000000;
						iLocal_341[0x00000000] = 0x00000000;
						iLocal_340[0x00000001] = 0x00000000;
						iLocal_341[0x00000001] = 0x00000000;
						iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
						iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
					}
				}
				else if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001))
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 15f)
					{
						if ((vLocal_93.x < vLocal_95[0x00000000 /*3*/] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_31 = 0x00000000;
							iLocal_340[0x00000000] = 0x00000000;
							iLocal_341[0x00000000] = 0x00000000;
							iLocal_340[0x00000001] = 0x00000000;
							iLocal_341[0x00000001] = 0x00000000;
							iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
							iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
						}
					}
					else if (vLocal_93.x < vLocal_95[0x00000000 /*3*/])
					{
						iLocal_31 = 0x00000000;
						iLocal_340[0x00000000] = 0x00000000;
						iLocal_341[0x00000000] = 0x00000000;
						iLocal_340[0x00000001] = 0x00000000;
						iLocal_341[0x00000001] = 0x00000000;
						iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
						iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			else if (iLocal_303[0x00000001] == 0x00000001)
			{
				if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 15f)
				{
					if ((vLocal_93.x > vLocal_95[0x00000001 /*3*/] && !unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 90f)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_31 = 0x00000000;
						iLocal_340[0x00000000] = 0x00000000;
						iLocal_341[0x00000000] = 0x00000000;
						iLocal_340[0x00000001] = 0x00000000;
						iLocal_341[0x00000001] = 0x00000000;
						iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
						iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
					}
				}
				else if (vLocal_93.x > vLocal_95[0x00000001 /*3*/])
				{
					iLocal_31 = 0x00000000;
					iLocal_340[0x00000000] = 0x00000000;
					iLocal_341[0x00000000] = 0x00000000;
					iLocal_340[0x00000001] = 0x00000000;
					iLocal_341[0x00000001] = 0x00000000;
					iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
					iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
				}
			}
		}
		if (iLocal_31 == 0x00000002)
		{
			if (iLocal_297 == 0x00000000)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0x00000000, 0x00000001, 0x00000000) || vLocal_93.x > 942f)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
					{
						if (vLocal_93.x > vLocal_95[0x00000001 /*3*/])
						{
							if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 90f))
							{
								iLocal_31 = 0x00000000;
								iLocal_340[0x00000000] = 0x00000000;
								iLocal_341[0x00000000] = 0x00000000;
								iLocal_340[0x00000001] = 0x00000000;
								iLocal_341[0x00000001] = 0x00000000;
								iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
								iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					else if (vLocal_93.x > 942f)
					{
						if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 90f))
						{
							iLocal_31 = 0x00000000;
							iLocal_340[0x00000000] = 0x00000000;
							iLocal_341[0x00000000] = 0x00000000;
							iLocal_340[0x00000001] = 0x00000000;
							iLocal_341[0x00000001] = 0x00000000;
							iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
							iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
						}
					}
				}
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0x00000000, 0x00000001, 0x00000000) || vLocal_93.x < 860f)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
					{
						if (vLocal_93.x < vLocal_95[0x00000000 /*3*/])
						{
							if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 90f))
							{
								iLocal_31 = 0x00000000;
								iLocal_340[0x00000000] = 0x00000000;
								iLocal_341[0x00000000] = 0x00000000;
								iLocal_340[0x00000001] = 0x00000000;
								iLocal_341[0x00000001] = 0x00000000;
								iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
								iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					else if (vLocal_93.x < 860f)
					{
						if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 90f))
						{
							iLocal_31 = 0x00000000;
							iLocal_340[0x00000000] = 0x00000000;
							iLocal_341[0x00000000] = 0x00000000;
							iLocal_340[0x00000001] = 0x00000000;
							iLocal_341[0x00000001] = 0x00000000;
							iLocal_83[0x00000000] = unk_0x1C0640BA9A7327B3();
							iLocal_83[0x00000001] = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 0x00000001)
	{
		if (iLocal_31 != 0x00000002)
		{
			if (iLocal_303[0x00000000] == 0x00000001)
			{
				if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
				{
					if ((func_189(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) || func_188(0x00000000))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (vLocal_93.x > vLocal_95[0x00000000 /*3*/] || unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 90f))
							{
								iLocal_31 = 0x00000001;
							}
						}
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0x00000000, 0x00000001, 0x00000000))
						{
							iLocal_31 = 0x00000001;
						}
					}
				}
			}
			if (iLocal_303[0x00000001] == 0x00000001)
			{
				if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 15f)
				{
					if ((func_189(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) || func_188(0x00000000))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (vLocal_93.x < vLocal_95[0x00000001 /*3*/] || unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 90f))
							{
								iLocal_31 = 0x00000001;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 0x00000002)
	{
		if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 0x00000002;
			iLocal_297 = 0x00000001;
		}
		if (iLocal_359 == 0x00000001)
		{
			iLocal_31 = 0x00000002;
			iLocal_297 = 0x00000001;
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000000]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 0x00000002;
						iLocal_297 = 0x00000001;
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000001]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_36[0x00000001]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 0x00000002;
						iLocal_297 = 0x00000001;
					}
				}
			}
		}
		if (iLocal_326 == 0x00000000)
		{
			if (iLocal_325 == 0x00000001)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_79 + 4000)
				{
					iLocal_78 = 0x00000000;
					while (iLocal_78 <= 0x00000006)
					{
						if (func_182())
						{
							if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_78]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_78]))
								{
									if (unk_0x82FE7F11C00330B0(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 0x00000002;
										iLocal_326 = 0x00000001;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 0x00000004 || iLocal_29 == 0x00000003) || iLocal_325 == 0x00000001)
		{
			iLocal_31 = 0x00000002;
			iLocal_322 = 0x00000001;
			iLocal_297 = 0x00000001;
		}
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (iLocal_303[0x00000000] == 0x00000001)
			{
				if (func_189(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && !func_188(0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 0x00000002;
					}
				}
			}
			if (iLocal_303[0x00000001] == 0x00000001)
			{
				if (func_189(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed") && !func_188(0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 0x00000002;
					}
				}
			}
		}
		if (unk_0x0EB28750412C3A5A(vLocal_93, vLocal_96, 0x00000001) < 36f)
		{
			if (iLocal_303[0x00000000] == 0x00000001)
			{
				if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()))
				{
					iLocal_31 = 0x00000002;
				}
				if (func_177(iLocal_36[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) < 20f)
				{
					if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_36[0x00000000]))
					{
						iLocal_31 = 0x00000002;
					}
				}
			}
			if (iLocal_303[0x00000001] == 0x00000001)
			{
				if (vLocal_93.z < 36f || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()))
					{
						iLocal_31 = 0x00000002;
					}
					if (func_177(iLocal_36[0x00000001], unk_0x16F2683693E537C9(), 0x00000001) < 20f)
					{
						if (unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_36[0x00000001]))
						{
							iLocal_31 = 0x00000002;
						}
					}
				}
			}
		}
		if (iLocal_303[0x00000000] == 0x00000001)
		{
			if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000000], 0x00000001) < 20f)
			{
				if (vLocal_93.x > vLocal_95[0x00000000 /*3*/] && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000000], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_36[0x00000000]))
					{
						iLocal_31 = 0x00000002;
					}
				}
			}
		}
		if (iLocal_303[0x00000001] == 0x00000001)
		{
			if (func_177(unk_0x16F2683693E537C9(), iLocal_36[0x00000001], 0x00000001) < 20f)
			{
				if (vLocal_93.x < vLocal_95[0x00000001 /*3*/] && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xE115347EA59F7B86(iLocal_36[0x00000001], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_36[0x00000001]))
					{
						iLocal_31 = 0x00000002;
					}
				}
			}
		}
	}
}

void func_191()
{
	iLocal_55 = 0x00000000;
	while (iLocal_55 <= 0x00000006)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_55]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0x00000000)
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_55], 0x00000001) > 20f)
					{
						iLocal_278[iLocal_55] = 0x00000001;
					}
				}
				if (iLocal_278[iLocal_55] == 0x00000001)
				{
					if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_55], 0x00000001) < 20f)
					{
						iLocal_278[iLocal_55] = 0x00000000;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0x00000000)
			{
				iLocal_278[iLocal_55] = 0x00000001;
			}
		}
		else if (iLocal_278[iLocal_55] == 0x00000000)
		{
			iLocal_278[iLocal_55] = 0x00000001;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0x00000000] == 0x00000001 && iLocal_278[0x00000001] == 0x00000001) && iLocal_278[0x00000002] == 0x00000001) && iLocal_278[0x00000003] == 0x00000001) && iLocal_278[0x00000004] == 0x00000001) && iLocal_278[0x00000005] == 0x00000001)
	{
		iLocal_279 = 0x00000001;
	}
	else
	{
		iLocal_279 = 0x00000000;
	}
	iLocal_54 = 0x00000000;
	while (iLocal_54 <= 0x00000006)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_54]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_54]))
			{
				func_196(iLocal_35[iLocal_54]);
				if (iLocal_28 == 0x00000003 || iLocal_28 == 0x00000004)
				{
					if (iLocal_31 == 0x00000002 && iLocal_29 == 0x00000000)
					{
						func_195(0x00000001);
						if (iLocal_311 == 0x00000001)
						{
							func_114();
						}
					}
					if (unk_0xFA4CE147B4D9AEE0(iLocal_35[iLocal_54], 0x00000012))
					{
						if (iLocal_29 != 0x00000004)
						{
							func_195(0x00000004);
							if (iLocal_311 == 0x00000001)
							{
								func_193();
							}
							iLocal_359 = 0x00000001;
						}
					}
					if (iLocal_29 != 0x00000004)
					{
						if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, 892.9f, -1552.4f, 30f, 40f))
						{
							func_195(0x00000004);
							if (iLocal_311 == 0x00000001)
							{
								func_193();
							}
						}
					}
					if ((((((((func_192(iLocal_35[iLocal_54], iLocal_35[0x00000000]) || func_192(iLocal_35[iLocal_54], iLocal_35[0x00000001])) || func_192(iLocal_35[iLocal_54], iLocal_35[0x00000002])) || func_192(iLocal_35[iLocal_54], iLocal_35[0x00000003])) || func_192(iLocal_35[iLocal_54], iLocal_35[0x00000004])) || func_192(iLocal_35[iLocal_54], iLocal_35[0x00000005])) || func_192(iLocal_35[iLocal_54], iLocal_35[0x00000006])) || func_192(iLocal_35[iLocal_54], iLocal_36[0x00000000])) || func_192(iLocal_35[iLocal_54], iLocal_36[0x00000001]))
					{
						if (iLocal_29 != 0x00000004)
						{
							func_195(0x00000004);
							if (iLocal_311 == 0x00000001)
							{
								func_193();
							}
							iLocal_359 = 0x00000001;
						}
					}
					if ((func_189(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || func_188(0x00000000))
					{
						if (iLocal_297 == 0x00000000)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) > 20f)
							{
								if (iLocal_277[iLocal_54] == 0x00000001)
								{
									iLocal_277[iLocal_54] = 0x00000000;
								}
								if (((((iLocal_279 == 0x00000001 && iLocal_29 != 0x00000000) && iLocal_29 != 0x00000002) && iLocal_29 != 0x00000003) && iLocal_29 != 0x00000004) && iLocal_31 != 0x00000002)
								{
									func_195(0x00000000);
								}
							}
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
							{
								if (((iLocal_29 != 0x00000001 && iLocal_29 != 0x00000002) && iLocal_29 != 0x00000003) && iLocal_29 != 0x00000004)
								{
									if (iLocal_326 == 0x00000000 && iLocal_297 == 0x00000000)
									{
										func_195(0x00000001);
										if (iLocal_311 == 0x00000001)
										{
											func_114();
										}
									}
									else
									{
										func_195(0x00000003);
										if (iLocal_311 == 0x00000001)
										{
											func_193();
										}
									}
								}
							}
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
							{
								if (iLocal_277[iLocal_54] == 0x00000000)
								{
									iLocal_60[iLocal_54] = unk_0x1C0640BA9A7327B3();
									iLocal_277[iLocal_54] = 0x00000001;
								}
								if (iLocal_277[iLocal_54] == 0x00000001)
								{
									if (unk_0x1C0640BA9A7327B3() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 0x00000002 && iLocal_29 != 0x00000003) && iLocal_29 != 0x00000004)
										{
											func_195(0x00000002);
											if (iLocal_311 == 0x00000001)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 0x00000001)
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
							{
								if (iLocal_29 != 0x00000003 && iLocal_29 != 0x00000004)
								{
									func_195(0x00000003);
									if (iLocal_311 == 0x00000001)
									{
										func_193();
									}
								}
							}
						}
						if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
						{
							if (iLocal_308 == 0x00000000)
							{
								iLocal_74 = unk_0x1C0640BA9A7327B3();
								iLocal_308 = 0x00000001;
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_74 + 3000)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) < 20f && unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
								{
									if (iLocal_29 != 0x00000003 && iLocal_29 != 0x00000004)
									{
										func_195(0x00000003);
										if (iLocal_311 == 0x00000001)
										{
											func_193();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 0x00000001)
						{
							iLocal_308 = 0x00000000;
						}
						if (unk_0xC844350D5D58C99A(iLocal_33))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000001))
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
									{
										if (iLocal_29 != 0x00000003 && iLocal_29 != 0x00000004)
										{
											iLocal_289 = 0x00000001;
											func_195(0x00000003);
											if (iLocal_311 == 0x00000001)
											{
												func_193();
											}
										}
									}
								}
								if (func_177(unk_0x16F2683693E537C9(), iLocal_33, 0x00000001) < 5f && unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
									{
										if (iLocal_29 != 0x00000003 && iLocal_29 != 0x00000004)
										{
											iLocal_289 = 0x00000001;
											func_195(0x00000003);
											if (iLocal_311 == 0x00000001)
											{
												func_193();
											}
										}
									}
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
										{
											if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000000]))
											{
												if (unk_0x5A91F08DF773C39D(iLocal_35[0x00000000], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
												{
													if (iLocal_29 != 0x00000003 && iLocal_29 != 0x00000004)
													{
														iLocal_289 = 0x00000001;
														func_195(0x00000003);
														if (iLocal_311 == 0x00000001)
														{
															func_193();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0xC844350D5D58C99A(iLocal_35[0x00000006]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000006]))
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[0x00000006], 0x00000001) < 20f)
								{
									if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0x00000000, 0x00000001, 0x00000000))
									{
										if (unk_0xE115347EA59F7B86(iLocal_35[0x00000006], unk_0x16F2683693E537C9()))
										{
											if (vLocal_93.z > 31f)
											{
												if (iLocal_29 != 0x00000003 && iLocal_29 != 0x00000004)
												{
													iLocal_323 = 0x00000001;
													func_195(0x00000003);
													if (iLocal_311 == 0x00000001)
													{
														func_193();
													}
												}
											}
											else if (((iLocal_29 != 0x00000001 && iLocal_29 != 0x00000002) && iLocal_29 != 0x00000003) && iLocal_29 != 0x00000004)
											{
												func_195(0x00000001);
												if (iLocal_311 == 0x00000001)
												{
													func_114();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0x00000000)
						{
							iLocal_59 = unk_0x1C0640BA9A7327B3();
							iLocal_276 = 0x00000001;
						}
						if (iLocal_276 == 0x00000001)
						{
							if (unk_0x1C0640BA9A7327B3() > iLocal_59 + 4000 || iLocal_29 == 0x00000003)
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) < 20f)
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()))
									{
										if (iLocal_29 != 0x00000004)
										{
											func_195(0x00000004);
											if (iLocal_311 == 0x00000001)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_54], 0x00000001) < 40f)
						{
							if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
							{
								if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_54], unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 0x00000004)
									{
										func_195(0x00000004);
										if (iLocal_311 == 0x00000001)
										{
											func_193();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_192(int iParam0, int iParam1)
{
	if (((func_177(iParam0, iParam1, 0x00000001) < 20f && unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 90f)) && !unk_0xEB6A8945D1AC98A1(iParam0)) && unk_0xEB6A8945D1AC98A1(iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_193()
{
	Global_4CD7 = 0x00000000;
	func_194();
}

void func_194()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_195(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0x00000000;
}

void func_196(int iParam0)
{
	iLocal_56 = 0x00000000;
	while (iLocal_56 <= 0x00000006)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_177(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 20f && unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()))
			{
				if (iLocal_280[iLocal_56] == 0x00000000)
				{
					unk_0x0C8C0C840C2D1AD2(iParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000430, 0x00000003);
					iLocal_280[iLocal_56] = 0x00000001;
				}
			}
			else if (iLocal_280[iLocal_56] == 0x00000001)
			{
				unk_0x0C8C0C840C2D1AD2(iParam0, unk_0x16F2683693E537C9(), 0x00000001, 0x00000430, 0x00000003);
				iLocal_280[iLocal_56] = 0x00000000;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0x00000000:
			if (iLocal_58 == 0x00000000)
			{
				unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
				if (iParam0 == iLocal_35[0x00000000])
				{
					if (unk_0x4742C50E93110B10(912.2f, -1542.5f, 29.8f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000000], 912.2f, -1542.5f, 29.8f, 20f, 0x00000000);
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000001])
				{
					if (unk_0x4742C50E93110B10(917.4f, -1517.4f, 30f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000001], 917.4f, -1517.4f, 30f, 20f, 0x00000000);
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000002])
				{
					if (unk_0x4742C50E93110B10(869.8f, -1541.2f, 29.4f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000002], 869.8f, -1541.2f, 29.4f, 20f, 0x00000000);
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000003])
				{
					if (unk_0x4742C50E93110B10(884.2f, -1574.1f, 30f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000003], 884.2f, -1574.1f, 30f, 20f, 0x00000000);
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000004])
				{
					if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000004], 904f, -1575f, 30f, 20f, 0x00000000);
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000005])
				{
					if (unk_0x4742C50E93110B10(905.9f, -1574.8f, 29.9f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000005], 905.9f, -1574.8f, 29.9f, 20f, 0x00000000);
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000006])
				{
					if (unk_0x4742C50E93110B10(889.5f, -1562f, 29.7f, 3f, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x9BD19AE7) != 0x00000001)
						{
							unk_0x3003D662BC385BD6(iLocal_35[0x00000006], 889.5f, -1562f, 29.7f, 20f, 0x00000000);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iLocal_35[0x00000004]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000004]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[0x00000005]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000005]))
							{
								if (func_177(unk_0x16F2683693E537C9(), iLocal_35[0x00000004], 0x00000001) < 25f)
								{
									if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0x00000000, 0x00000001, 0x00000000) || vLocal_93.y > -1573f)
									{
										if (iLocal_311 == 0x00000000)
										{
											func_138(&uLocal_99, 0x00000003, iLocal_35[0x00000004], "CONSTRUCTION2", 0x00000000, 0x00000001);
											func_138(&uLocal_99, 0x00000005, iLocal_35[0x00000005], "CONSTRUCTION3", 0x00000000, 0x00000001);
											unk_0x0C8C0C840C2D1AD2(iLocal_35[0x00000004], iLocal_35[0x00000005], 0xFFFFFFFF, 0x00000000, 0x00000002);
											unk_0x0C8C0C840C2D1AD2(iLocal_35[0x00000005], iLocal_35[0x00000004], 0xFFFFFFFF, 0x00000000, 0x00000002);
											if (!func_182())
											{
												if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
												{
													if (func_176(&uLocal_99, "SOL1AUD", "SOL1_TALK", 0x00000006, 0x00000001, 0x00000001, 0x00000000))
													{
														iLocal_311 = 0x00000001;
													}
												}
											}
										}
									}
								}
								if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000001))
								{
									if (iLocal_318 == 0x00000000)
									{
										iLocal_76 = unk_0x1C0640BA9A7327B3();
										iLocal_318 = 0x00000001;
									}
									if (iLocal_318 == 0x00000001)
									{
										if (unk_0x1C0640BA9A7327B3() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0x00000000)
											{
												func_138(&uLocal_99, 0x00000003, iLocal_35[0x00000004], "CONSTRUCTION2", 0x00000000, 0x00000001);
												func_138(&uLocal_99, 0x00000005, iLocal_35[0x00000005], "CONSTRUCTION3", 0x00000000, 0x00000001);
												unk_0x0C8C0C840C2D1AD2(iLocal_35[0x00000004], iLocal_35[0x00000005], 0xFFFFFFFF, 0x00000000, 0x00000002);
												unk_0x0C8C0C840C2D1AD2(iLocal_35[0x00000005], iLocal_35[0x00000004], 0xFFFFFFFF, 0x00000000, 0x00000002);
												if (!func_182())
												{
													if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
													{
														if (func_176(&uLocal_99, "SOL1AUD", "SOL1_TALK", 0x00000006, 0x00000001, 0x00000001, 0x00000000))
														{
															iLocal_311 = 0x00000001;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 0x00000001 && !func_182())
								{
									if (iLocal_310 == 0x00000000)
									{
										if (unk_0x4742C50E93110B10(865f, -1558.1f, 29.5f, 3f, 0x00000000))
										{
											unk_0xBC43ED9FE28DB191(iLocal_35[0x00000004]);
											unk_0xBC43ED9FE28DB191(iLocal_35[0x00000005]);
											unk_0x4A35AD9FC803369E(iLocal_35[0x00000004], 865f, -1558.1f, 29.5f, 3f, 0x00000000);
											iLocal_310 = 0x00000001;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[0x00000006])
				{
					if (iLocal_319 == 0x00000000)
					{
						if (iLocal_320 == 0x00000000)
						{
							iLocal_77 = unk_0x1C0640BA9A7327B3();
							iLocal_320 = 0x00000001;
						}
						if (unk_0x1C0640BA9A7327B3() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0x00000000)
							{
								if (unk_0x4742C50E93110B10(925f, -1561f, 30f, 3f, 0x00000000))
								{
									unk_0x4A35AD9FC803369E(iLocal_35[0x00000006], 925f, -1561f, 30f, 3f, 0x00000000);
									iLocal_319 = 0x00000001;
									iLocal_320 = 0x00000000;
								}
							}
						}
					}
					if (iLocal_319 == 0x00000001)
					{
						if (unk_0x5A91F08DF773C39D(iLocal_35[0x00000006], 925f, -1561f, 30f, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[0x00000006], 0x00000001) < 15f && vLocal_93.z < 40f)
							{
								if (iLocal_321 == 0x00000000)
								{
									if (unk_0x4742C50E93110B10(909.5f, -1515.5f, 30f, 3f, 0x00000000))
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000006], 909.5f, -1515.5f, 30f, 50f, 0x00000000);
										iLocal_321 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iLocal_58 == 0x00000000)
			{
				iLocal_56 = 0x00000000;
				while (iLocal_56 <= 0x00000006)
				{
					if (iLocal_31 == 0x00000000)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_177(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0x00000000)
								{
									if (unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iParam0))
									{
										if (!unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0x327AAEE25F323797(iParam0);
										}
										if (unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0xA3BF0AA5A2608191(iParam0);
										}
										unk_0xDD353D0E9C789D0E(&iLocal_48);
										unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 2f, 1f, 0x40000000, 0x00000000);
										unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
										unk_0x75ABDC5F81978924(iLocal_48);
										unk_0x78ADC381772E3D54(iParam0, iLocal_48);
										unk_0xF82EA857DA10E0CD(&iLocal_48);
										unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
										iLocal_280[iLocal_56] = 0x00000000;
										iLocal_281[iLocal_56] = 0x00000001;
									}
								}
								if (iLocal_281[iLocal_56] == 0x00000001)
								{
									if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
									{
										unk_0xF96A174EE26D7588(iParam0, unk_0x16F2683693E537C9(), 0x00000000);
										iLocal_281[iLocal_56] = 0x00000000;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 0x00000001)
								{
									iLocal_281[iLocal_56] = 0x00000000;
								}
								if (iParam0 == iLocal_35[0x00000000])
								{
									if (unk_0x4742C50E93110B10(912.2f, -1542.5f, 29.8f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000000], 912.2f, -1542.5f, 29.8f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000000], 0x00000001);
										}
									}
								}
								if (iParam0 == iLocal_35[0x00000001])
								{
									if (unk_0x4742C50E93110B10(917.4f, -1517.4f, 30f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000001], 917.4f, -1517.4f, 30f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000001], 0x00000001);
										}
									}
								}
								if (iParam0 == iLocal_35[0x00000002])
								{
									if (unk_0x4742C50E93110B10(869.8f, -1541.2f, 29.4f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000002], 869.8f, -1541.2f, 29.4f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000002], 0x00000001);
										}
									}
								}
								if (iParam0 == iLocal_35[0x00000003])
								{
									if (unk_0x4742C50E93110B10(884.2f, -1574.1f, 30f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000003], 884.2f, -1574.1f, 30f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000003], 0x00000001);
										}
									}
								}
								if (iParam0 == iLocal_35[0x00000004])
								{
									if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000004], 904f, -1575f, 30f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000004], 0x00000001);
										}
									}
								}
								if (iParam0 == iLocal_35[0x00000005])
								{
									if (unk_0x4742C50E93110B10(905.9f, -1574.8f, 29.9f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000005], 905.9f, -1574.8f, 29.9f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000005], 0x00000001);
										}
									}
								}
								if (iParam0 == iLocal_35[0x00000006])
								{
									if (unk_0x4742C50E93110B10(889.5f, -1562f, 29.7f, 3f, 0x00000000))
									{
										if (unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x9BD19AE7) != 0x00000001)
										{
											unk_0x3003D662BC385BD6(iLocal_35[0x00000006], 889.5f, -1562f, 29.7f, 20f, 0x00000000);
											unk_0x11AD11297DC58CC7(iLocal_35[0x00000006], 0x00000001);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_177(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0x00000000)
							{
								if (unk_0xE115347EA59F7B86(iParam0, unk_0x16F2683693E537C9()) || unk_0x8B674081D2209D07(unk_0xD803B885F5E47A62(), iParam0))
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0xDD353D0E9C789D0E(&iLocal_48);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000430, 0x00000003);
									unk_0x75ABDC5F81978924(iLocal_48);
									unk_0x78ADC381772E3D54(iParam0, iLocal_48);
									unk_0xF82EA857DA10E0CD(&iLocal_48);
									unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
									iLocal_280[iLocal_56] = 0x00000000;
									iLocal_281[iLocal_56] = 0x00000001;
								}
							}
							if (iLocal_281[iLocal_56] == 0x00000001)
							{
								if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 45f))
								{
									unk_0xF96A174EE26D7588(iParam0, unk_0x16F2683693E537C9(), 0x00000000);
									iLocal_281[iLocal_56] = 0x00000000;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 0x00000001)
							{
								iLocal_281[iLocal_56] = 0x00000000;
							}
							if (iParam0 == iLocal_35[0x00000000])
							{
								if (unk_0x4742C50E93110B10(912.2f, -1542.5f, 29.8f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000000], 912.2f, -1542.5f, 29.8f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000000], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000001])
							{
								if (unk_0x4742C50E93110B10(917.4f, -1517.4f, 30f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000001], 917.4f, -1517.4f, 30f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000001], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000002])
							{
								if (unk_0x4742C50E93110B10(869.8f, -1541.2f, 29.4f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000002], 869.8f, -1541.2f, 29.4f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000002], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000003])
							{
								if (unk_0x4742C50E93110B10(884.2f, -1574.1f, 30f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000003], 884.2f, -1574.1f, 30f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000003], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000004])
							{
								if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000004], 904f, -1575f, 30f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000004], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000005])
							{
								if (unk_0x4742C50E93110B10(905.9f, -1574.8f, 29.9f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000005], 905.9f, -1574.8f, 29.9f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000005], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000006])
							{
								if (unk_0x4742C50E93110B10(889.5f, -1562f, 29.7f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000006], 889.5f, -1562f, 29.7f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000006], 0x00000001);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 0x00000002:
			if (iLocal_360 == 0x00000000)
			{
				iLocal_360 = 0x00000001;
			}
			if (iLocal_58 == 0x00000000)
			{
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_264, 0x6F0783F5);
				iLocal_58++;
			}
			if (iLocal_58 == 0x00000001)
			{
				iLocal_56 = 0x00000000;
				while (iLocal_56 <= 0x00000006)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_177(iParam0, unk_0x16F2683693E537C9(), 0x00000001) < 15f)
						{
							if (func_177(iParam0, unk_0x16F2683693E537C9(), 0x00000001) > 3f)
							{
								if (unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000000 || unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000001)
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0xDD353D0E9C789D0E(&iLocal_48);
									unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 1f, 1f, 0x40000000, 0x00000000);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_48);
									unk_0x78ADC381772E3D54(iParam0, iLocal_48);
									unk_0xF82EA857DA10E0CD(&iLocal_48);
									iLocal_280[iLocal_56] = 0x00000000;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0x00000000])
							{
								if (unk_0x4742C50E93110B10(912.2f, -1542.5f, 29.8f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000000], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000000], 912.2f, -1542.5f, 29.8f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000000], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000001])
							{
								if (unk_0x4742C50E93110B10(917.4f, -1517.4f, 30f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000001], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000001], 917.4f, -1517.4f, 30f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000001], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000002])
							{
								if (unk_0x4742C50E93110B10(869.8f, -1541.2f, 29.4f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000002], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000002], 869.8f, -1541.2f, 29.4f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000002], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000003])
							{
								if (unk_0x4742C50E93110B10(884.2f, -1574.1f, 30f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000003], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000003], 884.2f, -1574.1f, 30f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000003], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000004])
							{
								if (unk_0x4742C50E93110B10(904f, -1575f, 30f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000004], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000004], 904f, -1575f, 30f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000004], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000005])
							{
								if (unk_0x4742C50E93110B10(905.9f, -1574.8f, 29.9f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000005], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000005], 905.9f, -1574.8f, 29.9f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000005], 0x00000001);
									}
								}
							}
							if (iParam0 == iLocal_35[0x00000006])
							{
								if (unk_0x4742C50E93110B10(889.5f, -1562f, 29.7f, 3f, 0x00000000))
								{
									if (unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x623A5EFE) != 0x00000001 && unk_0xD1960163A3042274(iLocal_35[0x00000006], 0x9BD19AE7) != 0x00000001)
									{
										unk_0x3003D662BC385BD6(iLocal_35[0x00000006], 889.5f, -1562f, 29.7f, 20f, 0x00000000);
										unk_0x11AD11297DC58CC7(iLocal_35[0x00000006], 0x00000001);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 0x00000003:
			if (iLocal_360 == 0x00000000)
			{
				iLocal_360 = 0x00000001;
			}
			if (iLocal_292 == 0x00000000)
			{
				if (iLocal_293 == 0x00000000)
				{
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_293 = 0x00000001;
				}
				if (iLocal_293 == 0x00000001)
				{
					if (unk_0x1C0640BA9A7327B3() > iLocal_63 + 9000)
					{
						unk_0x34D79252800B23FF(0x00000005);
						unk_0x51B096AAC60548C1(1f);
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						iLocal_292 = 0x00000001;
					}
				}
			}
			if (iLocal_58 == 0x00000000)
			{
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_264, 0x6F0783F5);
				iLocal_58++;
			}
			if (iLocal_58 == 0x00000001)
			{
				if (iLocal_28 == 0x00000003)
				{
					iLocal_56 = 0x00000000;
					while (iLocal_56 <= 0x00000006)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_177(iParam0, unk_0x16F2683693E537C9(), 0x00000001) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0x00000000)
								{
									unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
									iLocal_282[iLocal_56] = 0x00000001;
								}
								if (iLocal_283[iLocal_56] == 0x00000000)
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0x7C8478BF70C1E072(iParam0, 100f, 0x00000000);
									iLocal_280[iLocal_56] = 0x00000000;
									iLocal_283[iLocal_56] = 0x00000001;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000000]))
							{
								if (unk_0xC844350D5D58C99A(iLocal_33))
								{
									if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
									{
										if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_33, 0x00000001) && unk_0x5A91F08DF773C39D(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, 0x00000000, 0x00000001, 0x00000000))
										{
											if (!unk_0x0A059E0DB9253280(iLocal_35[0x00000000]))
											{
												unk_0x327AAEE25F323797(iLocal_35[0x00000000]);
											}
											if (unk_0x0A059E0DB9253280(iLocal_35[0x00000000]))
											{
												unk_0xA3BF0AA5A2608191(iLocal_35[0x00000000]);
											}
											unk_0xDD353D0E9C789D0E(&iLocal_48);
											unk_0x96167B03C5A77156(0x00000000, 917.8f, -1561f, 29f, 3f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
											unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0x75ABDC5F81978924(iLocal_48);
											unk_0x78ADC381772E3D54(iLocal_35[0x00000000], iLocal_48);
											unk_0xF82EA857DA10E0CD(&iLocal_48);
											iLocal_345 = 0x00000001;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 0x00000001 && iLocal_362 == 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000000]))
							{
								if (unk_0x5A91F08DF773C39D(iLocal_35[0x00000000], 917.8f, -1561f, 29f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
								{
									func_138(&uLocal_99, 0x00000003, iLocal_35[0x00000000], "FHPrepBWorker", 0x00000000, 0x00000001);
									func_185(iLocal_35[0x00000000], "FHPB_BBAA", "FHPrepBWorker", 0x00000004);
									iLocal_362 = 0x00000001;
								}
							}
						}
					}
					if (iLocal_344 == 0x00000000)
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_63 + 3000)
						{
							if (unk_0xC844350D5D58C99A(iLocal_35[0x00000005]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000005]))
								{
									unk_0xC6EB89C59F2AF6B8(iLocal_35[0x00000005], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									iLocal_87 = unk_0x1C0640BA9A7327B3();
									iLocal_344 = 0x00000001;
								}
							}
						}
					}
					else if (iLocal_343 == 0x00000000)
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_87 + 5000)
						{
							if (unk_0xC844350D5D58C99A(iLocal_35[0x00000005]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_35[0x00000005]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_35[0x00000005]);
									unk_0x6C3AE6E278DB3D0E(iLocal_35[0x00000005], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
									iLocal_343 = 0x00000001;
								}
							}
						}
					}
				}
				iLocal_56 = 0x00000000;
				while (iLocal_56 <= 0x00000006)
				{
					if (iLocal_268[iLocal_56] == 0x00000000)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0xC844350D5D58C99A(iParam0))
							{
								if (!unk_0xEB6A8945D1AC98A1(iParam0))
								{
									unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
									if (unk_0x405E212DDE472467(iParam0, 0x00000000))
									{
										if (func_177(iParam0, unk_0x16F2683693E537C9(), 0x00000001) > 200f)
										{
											if (!unk_0x0A059E0DB9253280(iParam0))
											{
												unk_0x327AAEE25F323797(iParam0);
											}
											if (unk_0x0A059E0DB9253280(iParam0))
											{
												unk_0xA3BF0AA5A2608191(iParam0);
											}
											unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
											iLocal_268[iLocal_56] = 0x00000001;
										}
									}
									else if (func_177(iParam0, unk_0x16F2683693E537C9(), 0x00000001) > 100f)
									{
										if (!unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0x327AAEE25F323797(iParam0);
										}
										if (unk_0x0A059E0DB9253280(iParam0))
										{
											unk_0xA3BF0AA5A2608191(iParam0);
										}
										unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										iLocal_268[iLocal_56] = 0x00000001;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 0x00000004)
			{
				iLocal_56 = 0x00000000;
				while (iLocal_56 <= 0x00000006)
				{
					if (iLocal_268[iLocal_56] == 0x00000000)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0xC844350D5D58C99A(iParam0))
							{
								if (!unk_0xEB6A8945D1AC98A1(iParam0))
								{
									if (!unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0x327AAEE25F323797(iParam0);
									}
									if (unk_0x0A059E0DB9253280(iParam0))
									{
										unk_0xA3BF0AA5A2608191(iParam0);
									}
									unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
									unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0xFADC0A217229F6B5(iParam0, 0x00000001);
									unk_0x6DAD7906B73F064D(&iParam0);
									iLocal_268[iLocal_56] = 0x00000001;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 0x00000004:
			if (iLocal_360 == 0x00000000)
			{
				iLocal_360 = 0x00000001;
			}
			if (iLocal_292 == 0x00000000)
			{
				if (iLocal_293 == 0x00000000)
				{
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_293 = 0x00000001;
				}
				if (iLocal_293 == 0x00000001)
				{
					if (unk_0x1C0640BA9A7327B3() > iLocal_63 + 6000)
					{
						unk_0x34D79252800B23FF(0x00000005);
						unk_0x51B096AAC60548C1(1f);
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						iLocal_292 = 0x00000001;
					}
				}
			}
			if (iLocal_58 == 0x00000000)
			{
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_264, 0x6F0783F5);
				unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
				iLocal_58++;
			}
			if (iLocal_58 == 0x00000001)
			{
				iLocal_56 = 0x00000000;
				while (iLocal_56 <= 0x00000006)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[iLocal_56]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_35[iLocal_56]))
						{
							if (func_177(unk_0x16F2683693E537C9(), iLocal_35[iLocal_56], 0x00000001) < 15f)
							{
								if (func_197(iLocal_35[iLocal_56], 0x00000006))
								{
									if (unk_0xE115347EA59F7B86(iLocal_35[iLocal_56], unk_0x16F2683693E537C9()))
									{
										if (iLocal_285[iLocal_56] == 0x00000000)
										{
											if (!unk_0x0A059E0DB9253280(iLocal_35[iLocal_56]))
											{
												unk_0x327AAEE25F323797(iLocal_35[iLocal_56]);
											}
											if (unk_0x0A059E0DB9253280(iLocal_35[iLocal_56]))
											{
												unk_0xA3BF0AA5A2608191(iLocal_35[iLocal_56]);
											}
											unk_0xF9B5DB58254657F1(iLocal_35[iLocal_56], 0xFFFFFFFF, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
											iLocal_285[iLocal_56] = 0x00000001;
											iLocal_284[iLocal_56] = 0x00000000;
											iLocal_280[iLocal_56] = 0x00000000;
											iLocal_75 = unk_0x1C0640BA9A7327B3();
										}
									}
									else if (unk_0x1C0640BA9A7327B3() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0x00000000;
									}
								}
								else if (iLocal_284[iLocal_56] == 0x00000000)
								{
									if (!unk_0x0A059E0DB9253280(iLocal_35[iLocal_56]))
									{
										unk_0x327AAEE25F323797(iLocal_35[iLocal_56]);
									}
									if (unk_0x0A059E0DB9253280(iLocal_35[iLocal_56]))
									{
										unk_0xA3BF0AA5A2608191(iLocal_35[iLocal_56]);
									}
									unk_0xF3268524E9BE6D6E(iLocal_35[iLocal_56], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									iLocal_284[iLocal_56] = 0x00000001;
									iLocal_285[iLocal_56] = 0x00000000;
								}
							}
							else if (iLocal_284[iLocal_56] == 0x00000000)
							{
								if (!unk_0x0A059E0DB9253280(iLocal_35[iLocal_56]))
								{
									unk_0x327AAEE25F323797(iLocal_35[iLocal_56]);
								}
								if (unk_0x0A059E0DB9253280(iLocal_35[iLocal_56]))
								{
									unk_0xA3BF0AA5A2608191(iLocal_35[iLocal_56]);
								}
								unk_0xF3268524E9BE6D6E(iLocal_35[iLocal_56], unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								iLocal_284[iLocal_56] = 0x00000001;
								iLocal_285[iLocal_56] = 0x00000000;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_197(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), iParam1))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_198()
{
	iLocal_37 = func_26(0x00000000);
	iLocal_38 = func_26(0x00000001);
	iLocal_39 = func_26(0x00000002);
	if (func_34(iLocal_37, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_37))
		{
			if (!func_33(iLocal_37))
			{
				if (!func_200())
				{
					if (func_199(iLocal_37))
					{
						if (func_32(iLocal_37, 0x00000000))
						{
							unk_0x73270B3C9CC833FD(iLocal_37, 0x00000001, 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_37, 0x00000001);
							unk_0xA3BF0AA5A2608191(iLocal_37);
							iLocal_350 = 0x00000000;
							iLocal_353 = 0x00000000;
							iLocal_356 = 0x00000000;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0x00000000)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iLocal_350 = 0x00000001;
					}
					else if (unk_0x405E212DDE472467(iLocal_37, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_37, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							iLocal_350 = 0x00000001;
						}
					}
				}
				if (iLocal_350 == 0x00000000)
				{
					if (func_200())
					{
						iLocal_350 = 0x00000001;
					}
				}
				if (iLocal_347 == 0x00000001)
				{
					if ((func_199(iLocal_37) && unk_0x9C77D2D0559097F0(iLocal_37, 0x00000001)) && iLocal_350 == 0x00000000)
					{
						vLocal_94 = { unk_0x68F4C0EC296D3901(iLocal_37, 0x00000001) };
						unk_0x10FEEAFF01E32639(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							if (iLocal_353 == 0x00000000)
							{
								if (unk_0xD1B4D22E0BA9B0C8(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x132B85BCE016BCA0(iLocal_37, unk_0x6937EA2286828455(iLocal_37, 0x00000000), vLocal_92, 0x00000004, 30f, 0x000C0024, 3f, 15f, 0x00000000);
									iLocal_356 = 0x00000000;
									iLocal_353 = 0x00000001;
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(unk_0x83C1D4B63BBD91F6(vLocal_94, 200f, joaat("police3"), 0x00008000)))
						{
							if (iLocal_356 == 0x00000000)
							{
								unk_0x60274E99F9B27DEA(iLocal_37, unk_0x6937EA2286828455(iLocal_37, 0x00000000), unk_0x83C1D4B63BBD91F6(vLocal_94, 200f, joaat("police3"), 0x00008000), 0x00000008, 40f, 0x00040000, 300f, 1f, 0x00000001);
								iLocal_353 = 0x00000000;
								iLocal_356 = 0x00000001;
							}
						}
						else if (iLocal_353 == 0x00000000)
						{
							if (unk_0xD1B4D22E0BA9B0C8(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x132B85BCE016BCA0(iLocal_37, unk_0x6937EA2286828455(iLocal_37, 0x00000000), vLocal_92, 0x00000004, 30f, 0x000C0024, 3f, 15f, 0x00000000);
								iLocal_356 = 0x00000000;
								iLocal_353 = 0x00000001;
							}
						}
					}
					else
					{
						iLocal_350 = 0x00000001;
					}
				}
				if (iLocal_350 == 0x00000001)
				{
					if (func_25(iLocal_37))
					{
						iLocal_350 = 0x00000000;
					}
				}
			}
		}
	}
	if (func_34(iLocal_39, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_39))
		{
			if (!func_33(iLocal_39))
			{
				if (!func_200())
				{
					if (func_199(iLocal_39))
					{
						if (func_32(iLocal_39, 0x00000000))
						{
							unk_0x73270B3C9CC833FD(iLocal_39, 0x00000001, 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_39, 0x00000001);
							unk_0xA3BF0AA5A2608191(iLocal_39);
							iLocal_352 = 0x00000000;
							iLocal_354 = 0x00000000;
							iLocal_357 = 0x00000000;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0x00000000)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iLocal_352 = 0x00000001;
					}
					else if (unk_0x405E212DDE472467(iLocal_39, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_39, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							iLocal_352 = 0x00000001;
						}
					}
				}
				if (iLocal_352 == 0x00000000)
				{
					if (func_200())
					{
						iLocal_352 = 0x00000001;
					}
				}
				if (iLocal_348 == 0x00000001)
				{
					if ((func_199(iLocal_39) && unk_0x9C77D2D0559097F0(iLocal_39, 0x00000001)) && iLocal_352 == 0x00000000)
					{
						vLocal_94 = { unk_0x68F4C0EC296D3901(iLocal_39, 0x00000001) };
						unk_0x10FEEAFF01E32639(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							if (iLocal_354 == 0x00000000)
							{
								if (unk_0xD1B4D22E0BA9B0C8(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x132B85BCE016BCA0(iLocal_39, unk_0x6937EA2286828455(iLocal_39, 0x00000000), vLocal_92, 0x00000004, 30f, 0x000C0024, 3f, 15f, 0x00000000);
									iLocal_357 = 0x00000000;
									iLocal_354 = 0x00000001;
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(unk_0x83C1D4B63BBD91F6(vLocal_94, 200f, joaat("police3"), 0x00008000)))
						{
							if (iLocal_357 == 0x00000000)
							{
								unk_0x60274E99F9B27DEA(iLocal_39, unk_0x6937EA2286828455(iLocal_39, 0x00000000), unk_0x83C1D4B63BBD91F6(vLocal_94, 200f, joaat("police3"), 0x00008000), 0x00000008, 40f, 0x00040000, 300f, 1f, 0x00000001);
								iLocal_354 = 0x00000000;
								iLocal_357 = 0x00000001;
							}
						}
						else if (iLocal_354 == 0x00000000)
						{
							if (unk_0xD1B4D22E0BA9B0C8(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x132B85BCE016BCA0(iLocal_39, unk_0x6937EA2286828455(iLocal_39, 0x00000000), vLocal_92, 0x00000004, 30f, 0x000C0024, 3f, 15f, 0x00000000);
								iLocal_357 = 0x00000000;
								iLocal_354 = 0x00000001;
							}
						}
					}
					else
					{
						iLocal_352 = 0x00000001;
					}
				}
				if (iLocal_352 == 0x00000001)
				{
					if (func_25(iLocal_39))
					{
						iLocal_352 = 0x00000000;
					}
				}
			}
		}
	}
	if (func_34(iLocal_38, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_38))
		{
			if (!func_33(iLocal_38))
			{
				if (!func_200())
				{
					if (func_199(iLocal_38))
					{
						if (func_32(iLocal_38, 0x00000000))
						{
							unk_0x73270B3C9CC833FD(iLocal_38, 0x00000001, 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_38, 0x00000001);
							unk_0xA3BF0AA5A2608191(iLocal_38);
							iLocal_351 = 0x00000000;
							iLocal_355 = 0x00000000;
							iLocal_358 = 0x00000000;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0x00000000)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iLocal_351 = 0x00000001;
					}
					else if (unk_0x405E212DDE472467(iLocal_38, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_38, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							iLocal_351 = 0x00000001;
						}
					}
				}
				if (iLocal_351 == 0x00000000)
				{
					if (func_200())
					{
						iLocal_351 = 0x00000001;
					}
				}
				if (iLocal_349 == 0x00000001)
				{
					if ((func_199(iLocal_38) && unk_0x9C77D2D0559097F0(iLocal_38, 0x00000001)) && iLocal_351 == 0x00000000)
					{
						vLocal_94 = { unk_0x68F4C0EC296D3901(iLocal_38, 0x00000001) };
						unk_0x10FEEAFF01E32639(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y);
						if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							if (iLocal_355 == 0x00000000)
							{
								if (unk_0xD1B4D22E0BA9B0C8(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
								{
									unk_0x132B85BCE016BCA0(iLocal_38, unk_0x6937EA2286828455(iLocal_38, 0x00000000), vLocal_92, 0x00000004, 30f, 0x000C0024, 3f, 15f, 0x00000000);
									iLocal_358 = 0x00000000;
									iLocal_355 = 0x00000001;
								}
							}
						}
						else if (unk_0xC844350D5D58C99A(unk_0x83C1D4B63BBD91F6(vLocal_94, 200f, joaat("police3"), 0x00008000)))
						{
							if (iLocal_358 == 0x00000000)
							{
								unk_0x60274E99F9B27DEA(iLocal_38, unk_0x6937EA2286828455(iLocal_38, 0x00000000), unk_0x83C1D4B63BBD91F6(vLocal_94, 200f, joaat("police3"), 0x00008000), 0x00000008, 40f, 0x00040000, 300f, 1f, 0x00000001);
								iLocal_355 = 0x00000000;
								iLocal_358 = 0x00000001;
							}
						}
						else if (iLocal_355 == 0x00000000)
						{
							if (unk_0xD1B4D22E0BA9B0C8(vLocal_94.x, vLocal_94.y, vLocal_92.x, vLocal_92.y))
							{
								unk_0x132B85BCE016BCA0(iLocal_38, unk_0x6937EA2286828455(iLocal_38, 0x00000000), vLocal_92, 0x00000004, 30f, 0x000C0024, 3f, 15f, 0x00000000);
								iLocal_358 = 0x00000000;
								iLocal_355 = 0x00000001;
							}
						}
					}
					else
					{
						iLocal_351 = 0x00000001;
					}
				}
				if (iLocal_351 == 0x00000001)
				{
					if (func_25(iLocal_38))
					{
						iLocal_351 = 0x00000000;
					}
				}
			}
		}
	}
}

int func_199(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) == iParam0)
			{
				if (unk_0xC844350D5D58C99A(iLocal_33))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
					{
						if ((unk_0xC42A92762C58E1B9(iParam0, iLocal_33, 0x00000000) && unk_0xA30B8362589C124A(iLocal_33, 0xFFFFFFFF, 0x00000000) == iParam0) && !unk_0x5A91F08DF773C39D(iLocal_33, vLocal_92, 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 0x00000001;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 0x00000001;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 0x00000001;
							}
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0x00000000;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0x00000000;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0x00000000;
	}
	return 0x00000000;
}

bool func_200()
{
	return Global_56C1;
}

void func_201()
{
	if (unk_0xC844350D5D58C99A(iLocal_33))
	{
		if (!unk_0xDF1306B443CD3D15(iLocal_33, 0x00000000))
		{
			func_204(0x00000003);
			return;
		}
		else
		{
			if (func_203(&iLocal_33))
			{
				func_204(0x00000002);
				return;
			}
			if (unk_0xC844350D5D58C99A(iLocal_32))
			{
				if (!unk_0xDF1306B443CD3D15(iLocal_32, 0x00000000))
				{
					func_204(0x00000001);
					return;
				}
				if (unk_0xDF1306B443CD3D15(iLocal_32, 0x00000000))
				{
					if (!unk_0x6CFEA4CFD9C496C8(iLocal_33))
					{
						if ((unk_0x5B17F10380E80E5B(iLocal_32) || func_202(iLocal_32)) || func_203(&iLocal_32))
						{
							func_204(0x00000001);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 0x00000003 || iLocal_28 == 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(iLocal_32))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_32, 0x00000000))
			{
				if (func_177(iLocal_32, unk_0x16F2683693E537C9(), 0x00000001) > 600f)
				{
					func_204(0x00000005);
					return;
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_40))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_40))
		{
			func_204(0x00000006);
			return;
		}
	}
}

int func_202(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_203(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		if (((unk_0x7B5606C651AB51B5(*iParam0, 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(*iParam0, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(*iParam0, 0x00000002, 0x00007530)) || unk_0x7B5606C651AB51B5(*iParam0, 0x00000001, 0x00009C40))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_204(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 0x00000006)
	{
		iLocal_28 = 0x00000006;
		iLocal_53 = 0x00000000;
	}
}

void func_205(int iParam0, int iParam1)
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

void func_206()
{
	if (iLocal_28 == 0x00000005)
	{
		if (iLocal_360 == 0x00000000)
		{
			func_207(0x00000291);
		}
	}
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_F049 = 0x00000000;
	if (!Global_F129[iParam0 /*13*/] == 0x00000003)
	{
		return;
	}
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < Global_11F87)
	{
		if (Global_11F88[iVar1 /*9*/] == iParam0)
		{
			bVar0 = 0x00000001;
			Global_11F88[iVar1 /*9*/].f_1 = 0x00000001;
			Global_11F88[iVar1 /*9*/].f_2 = 0f;
			if (Global_11F88[iVar1 /*9*/].f_3 == 0x00000002)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_208(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_209()
{
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("packer"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("phantom"), 0x00000000);
	unk_0x38DC636F3D2D2FA8("FHPRB_START");
	unk_0x38DC636F3D2D2FA8("FHPRB_TRUCK");
	unk_0x38DC636F3D2D2FA8("FHPRB_COPS");
	unk_0x38DC636F3D2D2FA8("FHPRB_LOST");
	unk_0x38DC636F3D2D2FA8("FHPRB_STOP");
	unk_0x2952D66A502EA873(iLocal_42, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_43, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_44, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_45, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_46, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_47, 0x00000000);
	if (unk_0xDA8F5DDC86FE3C26("SCRAP_SECURITY"))
	{
		if (unk_0x8ED9A0095B69A728("SCRAP_SECURITY"))
		{
			unk_0x2723524E448F4BDD("SCRAP_SECURITY", 0x00000000);
		}
	}
	unk_0x34D79252800B23FF(0x00000005);
	if (unk_0x76395FF5E8D5E643(iLocal_90))
	{
		unk_0xA4A8625CC710BC1F(iLocal_90);
	}
	if (unk_0x76395FF5E8D5E643(iLocal_91))
	{
		unk_0xA4A8625CC710BC1F(iLocal_91);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_210()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_208(0x00000000))
	{
		if (!func_211())
		{
			iVar0 = func_13();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_211()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

