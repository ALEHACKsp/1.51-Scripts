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
	int iLocal_31[1] = { 0 };
	int iLocal_32[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[1] = { 0 };
	int iLocal_36[1] = { 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47[1] = { 0 };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<8> Local_53[13];
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_80 = 0;
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82 = 0;
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[1] = { 0 };
	int iLocal_91[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_92[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_94[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101[2] = { 0, 0 };
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	float fLocal_122 = 0f;
	char* sLocal_123 = NULL;
	var uLocal_124[4] = { 0, 0, 0, 0 };
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 4;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 4;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 4;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 4;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 4;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 4;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 8;
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
	var uLocal_198 = 16;
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
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
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
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 3;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	int iLocal_367 = 0;
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
	vLocal_118 = { -2145.486f, 3018.294f, 31.81f };
	vLocal_119 = { 1744.308f, 3270.673f, 40.2076f };
	fLocal_122 = 330.4836f;
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_277();
		func_275();
	}
	unk_0x8225571BCEE038F8("EXTRASUNNY", 30f);
	func_273();
	if (!func_272())
	{
		iLocal_28 = 0x00000000;
	}
	else
	{
		iLocal_28 = 0x00000001;
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		unk_0x1A6DFFFEEC27BF4F("M_ThePortOfLSHeistPrep2B", 0x00000000);
		func_271();
		func_265();
		func_264();
		func_263();
		func_261();
		switch (iLocal_28)
		{
			case 0x00000000:
				func_260();
				break;
			
			case 0x00000001:
				func_255();
				break;
			
			case 0x00000002:
				func_237();
				break;
			
			case 0x00000003:
				func_229();
				break;
			
			case 0x00000004:
				func_127();
				break;
			
			case 0x00000005:
				func_29();
				break;
			
			case 0x00000006:
				func_4();
				break;
		}
		if (iLocal_28 != 0x00000006)
		{
			if (iLocal_76 == 0x00000001)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	if ((iLocal_28 == 0x00000002 || iLocal_28 == 0x00000003) || iLocal_28 == 0x00000004)
	{
		if (iLocal_79 == 0x00000001)
		{
			func_3(0x00000001);
			return;
		}
	}
	if (iLocal_28 == 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (func_2(iLocal_34, unk_0x16F2683693E537C9(), 0x00000001) > 850f)
				{
					func_3(0x00000002);
					return;
				}
			}
		}
	}
	if (iLocal_28 == 0x00000003 || iLocal_28 == 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (func_2(iLocal_34, unk_0x16F2683693E537C9(), 0x00000001) > 100f)
				{
					func_3(0x00000002);
					return;
				}
				else if ((unk_0x7B5606C651AB51B5(iLocal_34, 0x00000003, 0x00007530) || unk_0x7B5606C651AB51B5(iLocal_34, 0x00000001, 0x00009C40)) || unk_0x7B5606C651AB51B5(iLocal_34, 0x00000000, 0x00001B58))
				{
					func_3(0x00000003);
					return;
				}
			}
		}
	}
}

float func_2(int iParam0, int iParam1, bool bParam2)
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

void func_3(int iParam0)
{
	iLocal_29 = iParam0;
	if (iLocal_28 != 0x00000006)
	{
		iLocal_28 = 0x00000006;
		iLocal_54 = 0x00000000;
	}
}

void func_4()
{
	switch (iLocal_54)
	{
		case 0x00000000:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(0x00000001);
			switch (iLocal_29)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					sLocal_123 = "DP_FAIL1";
					break;
				
				case 0x00000002:
					sLocal_123 = "DP_FAIL2";
					break;
				
				case 0x00000003:
					sLocal_123 = "DP_FAIL3";
					break;
			}
			if (iLocal_29 == 0x00000000)
			{
				func_13(0x00000000);
			}
			else
			{
				func_11(sLocal_123);
			}
			iLocal_54 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139.164f, 2662.465f, 16.9873f, 74.9925f);
					func_5(-1147.504f, 2663.104f, 17.0938f, 40.2433f);
				}
				func_275();
			}
			break;
	}
}

void func_5(vector3 vParam0, float fParam1)
{
	func_6(&(Global_19AE3.f_B4A), vParam0, fParam1);
}

void func_6(var uParam0, vector3 vParam1, var uParam2)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_7(vector3 vParam0, float fParam1)
{
	if (func_8(Global_12C3E, 0f, 0f, 0f, 0x00000000))
	{
		Global_12C3E = { vParam0 };
		Global_12C41 = fParam1;
	}
}

bool func_8(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_9()
{
	if (Global_181B8 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_10()
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

void func_11(char* sParam0)
{
	func_12(sParam0);
	func_13(0x00000000);
}

void func_12(char* sParam0)
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

void func_13(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_28(0x00000000))
	{
		iVar0 = func_27();
		if (!func_14(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_19();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_18(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_15(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_15(var uParam0, int iParam1)
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
			if (!func_17(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_16(&(uParam0->f_8F8[iVar0]));
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

void func_16(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_17(int iParam0, var uParam1, float fParam2)
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
			return func_17(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_17(0x00000008, uParam1, fParam2);
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

void func_18(int iParam0, bool bParam1)
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

void func_19()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_20())
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
			switch (func_20())
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

int func_20()
{
	func_21();
	return Global_1B416.f_936.f_21B.f_10E1;
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

int func_27()
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

bool func_28(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_29()
{
	func_119();
	if (iLocal_54 == 0x00000000)
	{
		if (iLocal_75 == 0x00000001)
		{
			iLocal_76 = 0x00000000;
			func_34();
			iLocal_75 = 0x00000000;
		}
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			unk_0x1E9649458B15960F(iLocal_34, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
		}
		if (unk_0x757EF87A33649210())
		{
			unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
				{
					unk_0x45F014B3D0466974(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000);
				}
			}
		}
		iLocal_76 = 0x00000001;
		iLocal_54 = 0x00000001;
	}
	if (iLocal_54 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000001))
				{
					unk_0x152BCACCF710B36E(iLocal_34, 0x00000000, 0x00000000);
					unk_0x152BCACCF710B36E(iLocal_34, 0x00000001, 0x00000000);
					unk_0x71EDC33E5A423750(iLocal_34, 0x00000002);
					unk_0x05EC10F460C3A4AF(iLocal_34, 0x00000000);
					unk_0x1E9649458B15960F(iLocal_34, 0x00000001);
					func_30();
				}
			}
		}
	}
}

void func_30()
{
	func_32(0x00000000, 0x00000000);
	func_31(0x00000001, 0x00000001);
	func_275();
}

void func_31(int iParam0, int iParam1)
{
	Global_12C5A = iParam1;
	if (Global_F042)
	{
		return;
	}
	if (Global_F05D)
	{
		Global_F05D = 0x00000000;
		return;
	}
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
	{
		if (Global_F042)
		{
		}
		Global_F05C = iParam0;
		Global_F042 = 0x00000001;
		Global_F04D = 0x00000001;
	}
}

void func_32(bool bParam0, int iParam1)
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
		if ((func_28(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_33(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_28(0x00000000))
	{
		iVar0 = func_27();
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

int func_33(int iParam0)
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

void func_34()
{
	func_117();
	func_116();
	func_37();
	if (!func_36() || func_28(0x00000000))
	{
		func_35();
	}
	unk_0x2FB9A57162E54BAB(0f);
}

void func_35()
{
	switch (iLocal_28)
	{
		case 0x00000002:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (unk_0xC844350D5D58C99A(iLocal_39))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_39, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_39, 0xFFFFFFFF);
				}
			}
			else
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1565.084f, 2780.813f, 16.4022f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 53.6086f);
			}
			break;
		
		case 0x00000003:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (func_20() == 0x00000002)
			{
				if (unk_0xC844350D5D58C99A(iLocal_34))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_34, 0xFFFFFFFF);
						}
						unk_0x1E9649458B15960F(iLocal_34, 0x00000000);
					}
				}
			}
			break;
		
		case 0x00000004:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (func_20() == 0x00000002)
			{
				if (unk_0xC844350D5D58C99A(iLocal_34))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_34, 0xFFFFFFFF);
						}
					}
				}
			}
			break;
		
		case 0x00000005:
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			if (func_20() == 0x00000002)
			{
				if (unk_0xC844350D5D58C99A(iLocal_34))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_34, 0xFFFFFFFF);
						}
					}
				}
			}
			break;
	}
}

bool func_36()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_37()
{
	switch (iLocal_28)
	{
		case 0x00000002:
			unk_0x536F1BE96C726C4B(-1588.1f, 2794.9f, 17.2f, 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_109(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.06f, 2665.979f, 17.0939f, 219.2079f, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			unk_0x75CFD6AD66ADFDD1(-1588.1f, 2794.9f, 17.2f, 20f, 0x00000006);
			unk_0x523BCC9DC80CD82F(joaat("cargobob"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_marine_01"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_m_pilot_02"));
			unk_0x523BCC9DC80CD82F(joaat("buzzard"));
			while (((!unk_0xB87F6CF6E5628C67(joaat("cargobob")) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_m_pilot_02"))) || !unk_0xB87F6CF6E5628C67(joaat("buzzard")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (func_272())
			{
				if (func_108())
				{
					if (!unk_0xAFB8495D36825275(func_107()) && !unk_0xC41A9202669A24C4(func_107()))
					{
						func_105();
						while (!func_104())
						{
							SYSTEM::WAIT(0x00000000);
						}
					}
				}
			}
			iLocal_80 = 0x00000000;
			iLocal_55 = 0x00000000;
			while (iLocal_55 <= 0x0000000C)
			{
				iLocal_97[iLocal_55] = 0x00000000;
				iLocal_55++;
			}
			if (!unk_0xC844350D5D58C99A(iLocal_34))
			{
				unk_0x536F1BE96C726C4B(vLocal_118, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_34 = unk_0x122AAB0B1D6F55AD(joaat("cargobob"), vLocal_118, fLocal_122, 0x00000001, 0x00000001, 0x00000000);
				unk_0x1FC8B874F2C46E6E(iLocal_34, 0x00000000);
				unk_0x1E9649458B15960F(iLocal_34, 0x00000001);
				unk_0xE8832A9E16A57A1F(iLocal_34, 0x00000001, 0x00000001);
				unk_0x71199B01895C6202(joaat("cargobob"));
				unk_0xAB8E2DDC7AF955E0(joaat("cargobob"), 0x00000001);
				unk_0xD5A0214B20BCBAD8(iLocal_34, 0x00000001);
				unk_0xB422445CBCD0AEFB(iLocal_34, 0x00000000);
				func_103(iLocal_34, 0x00000000);
			}
			func_100();
			if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("buzzard")))
				{
					unk_0x536F1BE96C726C4B(-1866.446f, 3071.395f, 31.8104f, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					iLocal_35[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xE8832A9E16A57A1F(iLocal_35[0x00000000], 0x00000001, 0x00000001);
					unk_0x1FC8B874F2C46E6E(iLocal_35[0x00000000], 0x00000001);
					unk_0xB9FD7450C0DAB575(iLocal_35[0x00000000], 0x40A00000);
					unk_0x2E1E5367A885F9B7(iLocal_35[0x00000000], "DH_P_2B_ENEMY_CHOPPERS", 0x00000000);
					unk_0x71199B01895C6202(joaat("buzzard"));
					unk_0x05EC10F460C3A4AF(iLocal_35[0x00000000], 0x00000000);
				}
			}
			if (func_272())
			{
				if (!unk_0xC844350D5D58C99A(iLocal_39))
				{
					if (func_108())
					{
						if (!unk_0xAFB8495D36825275(func_107()) && !unk_0xC41A9202669A24C4(func_107()))
						{
							iLocal_39 = func_38(-1535.209f, 2744.551f, 16.6437f, 47.9754f);
							unk_0x71199B01895C6202(func_107());
							unk_0x44A200C9B6E1CEA6(iLocal_39, 0x00000001);
							unk_0xD5A0214B20BCBAD8(iLocal_39, 0x00000001);
						}
					}
				}
			}
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x81AF65E52132C1B4(0x00000001);
			break;
		
		case 0x00000003:
			unk_0x93776B156FD8804A("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			SYSTEM::WAIT(0x000005DC);
			unk_0x523BCC9DC80CD82F(joaat("cargobob"));
			unk_0x523BCC9DC80CD82F(joaat("buzzard"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_y_marine_01"));
			unk_0x523BCC9DC80CD82F(joaat("s_m_m_pilot_02"));
			while (((!unk_0xB87F6CF6E5628C67(joaat("cargobob")) || !unk_0xB87F6CF6E5628C67(joaat("buzzard"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01"))) || !unk_0xB87F6CF6E5628C67(joaat("s_m_m_pilot_02")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_80 = 0x00000000;
			iLocal_55 = 0x00000000;
			while (iLocal_55 <= 0x0000000C)
			{
				iLocal_97[iLocal_55] = 0x00000000;
				iLocal_55++;
			}
			if (!unk_0xC844350D5D58C99A(iLocal_34))
			{
				unk_0x536F1BE96C726C4B(vLocal_118, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_34 = unk_0x122AAB0B1D6F55AD(joaat("cargobob"), vLocal_118, fLocal_122, 0x00000001, 0x00000001, 0x00000000);
				unk_0x1E9649458B15960F(iLocal_34, 0x00000001);
				unk_0xE8832A9E16A57A1F(iLocal_34, 0x00000001, 0x00000001);
				unk_0x873BCADC75FF6D20(iLocal_34);
				unk_0x71199B01895C6202(joaat("cargobob"));
				unk_0xAB8E2DDC7AF955E0(joaat("cargobob"), 0x00000001);
				unk_0xD5A0214B20BCBAD8(iLocal_34, 0x00000001);
				unk_0xB422445CBCD0AEFB(iLocal_34, 0x00000000);
				func_103(iLocal_34, 0x00000000);
			}
			func_100();
			if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("buzzard")))
				{
					unk_0x536F1BE96C726C4B(-1866.446f, 3071.395f, 31.8104f, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					iLocal_35[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, 0x00000001, 0x00000001, 0x00000000);
					unk_0xE8832A9E16A57A1F(iLocal_35[0x00000000], 0x00000001, 0x00000001);
					unk_0x1FC8B874F2C46E6E(iLocal_35[0x00000000], 0x00000001);
					unk_0xB9FD7450C0DAB575(iLocal_35[0x00000000], 0x40A00000);
					unk_0x2E1E5367A885F9B7(iLocal_35[0x00000000], "DH_P_2B_ENEMY_CHOPPERS", 0x00000000);
					unk_0x71199B01895C6202(joaat("buzzard"));
					unk_0x05EC10F460C3A4AF(iLocal_35[0x00000000], 0x00000000);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
			{
				iLocal_31[0x00000000] = unk_0x852A19533F896693(iLocal_35[0x00000000], 0x0000001A, joaat("s_m_m_pilot_02"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0x71199B01895C6202(joaat("s_m_m_pilot_02"));
			}
			else if (!unk_0xC42A92762C58E1B9(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000))
			{
				unk_0xF821F915BC24D246(iLocal_31[0x00000000], iLocal_35[0x00000000], 0xFFFFFFFF);
			}
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0x00000001);
			unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			unk_0x523BCC9DC80CD82F(joaat("cargobob"));
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			while (!unk_0xB87F6CF6E5628C67(joaat("cargobob")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_34))
			{
				unk_0x536F1BE96C726C4B(vLocal_118, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_34 = unk_0x122AAB0B1D6F55AD(joaat("cargobob"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xE8832A9E16A57A1F(iLocal_34, 0x00000001, 0x00000001);
				unk_0x71199B01895C6202(joaat("cargobob"));
				unk_0xAB8E2DDC7AF955E0(joaat("cargobob"), 0x00000001);
				unk_0xB422445CBCD0AEFB(iLocal_34, 0x00000000);
				unk_0xD5A0214B20BCBAD8(iLocal_34, 0x00000001);
				unk_0x56FDC9ADE35F7DB0(iLocal_34, 0x00000001, 0x00000001, 0x00000000);
				unk_0x873BCADC75FF6D20(iLocal_34);
				unk_0x1AEF7184B203A58D(iLocal_34, 30f);
				func_103(iLocal_34, 0x00000000);
			}
			unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			break;
		
		case 0x00000005:
			unk_0x523BCC9DC80CD82F(joaat("cargobob"));
			unk_0x523BCC9DC80CD82F(joaat("sandking"));
			while (!unk_0xB87F6CF6E5628C67(joaat("cargobob")) || !unk_0xB87F6CF6E5628C67(joaat("sandking")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_34))
			{
				unk_0x536F1BE96C726C4B(1749.61f, 3272.95f, 40.1533f, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iLocal_34 = unk_0x122AAB0B1D6F55AD(joaat("cargobob"), 1749.61f, 3272.95f, 40.1533f, 51.128f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xE8832A9E16A57A1F(iLocal_34, 0x00000001, 0x00000001);
				unk_0x71199B01895C6202(joaat("cargobob"));
				unk_0xD5A0214B20BCBAD8(iLocal_34, 0x00000001);
				unk_0xB422445CBCD0AEFB(iLocal_34, 0x00000000);
				func_103(iLocal_34, 0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				iLocal_36[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x1E9649458B15960F(iLocal_36[0x00000000], 0x00000001);
				unk_0x71199B01895C6202(joaat("sandking"));
			}
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				iLocal_89 = 0x00000001;
			}
			break;
	}
}

int func_38(vector3 vParam0, float fParam1)
{
	return func_39(&(Global_19AE3.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_39(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_99(uParam0))
	{
		if (func_8(vParam1, 0f, 0f, 0f, 0x00000000))
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
		if (!func_8(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_8(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_8(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
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
	
	if (func_23(iParam0))
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
					if ((!bParam2 || func_8(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
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
	if (func_99(uParam0))
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

int func_99(var uParam0)
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

void func_100()
{
	if (iLocal_80 == 0x00000000)
	{
		if (unk_0xB87F6CF6E5628C67(joaat("s_m_y_marine_01")) && unk_0xB87F6CF6E5628C67(joaat("s_m_m_pilot_02")))
		{
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000000]))
			{
				iLocal_32[0x00000000] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -1590.523f, 2796.302f, 15.9184f, 247.0896f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000001]))
			{
				iLocal_32[0x00000001] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2303.8f, 3387.99f, 30.034f, 58.5763f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000002]))
			{
				iLocal_32[0x00000002] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -1697.329f, 2909.941f, 31.9506f, 245.656f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000003]))
			{
				iLocal_32[0x00000003] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -1696.369f, 2905.772f, 31.9454f, 6.3714f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000004]))
			{
				iLocal_32[0x00000004] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -1843.707f, 2821.611f, 31.8528f, 271.6265f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000005]))
			{
				iLocal_32[0x00000005] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2006.877f, 2955.101f, 31.8103f, 332.0101f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000006]))
			{
				iLocal_32[0x00000006] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2010.022f, 2956.805f, 31.8103f, 288.1283f, 0x00000001, 0x00000001);
			}
			if (iLocal_28 != 0x00000003)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000007]))
				{
					iLocal_32[0x00000007] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2140.213f, 3034.609f, 31.81f, 302.4493f, 0x00000001, 0x00000001);
				}
				if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000008]))
				{
					iLocal_32[0x00000008] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2136.053f, 3031.494f, 31.81f, 38.6856f, 0x00000001, 0x00000001);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x00000009]))
			{
				iLocal_32[0x00000009] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2035.429f, 3058.876f, 31.8103f, 169.8222f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x0000000A]))
			{
				iLocal_32[0x0000000A] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2146.467f, 3160.749f, 31.8106f, 356.4766f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x0000000B]))
			{
				iLocal_32[0x0000000B] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2280.087f, 3172.423f, 31.8103f, 353.663f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_32[0x0000000C]))
			{
				iLocal_32[0x0000000C] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_y_marine_01"), -2277.376f, 3177.8f, 31.8103f, 175.0685f, 0x00000001, 0x00000001);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
			{
				iLocal_31[0x00000000] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_pilot_02"), -1859.831f, 3071.758f, 31.8104f, 139.3607f, 0x00000001, 0x00000001);
				unk_0x9A28E8CB86CD4694(iLocal_31[0x00000000], 0x00000000, 0x00000002, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_31[0x00000000], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				unk_0xE8832A9E16A57A1F(iLocal_31[0x00000000], 0x00000001, 0x00000001);
				unk_0x262EF6C6306BEA6C(iLocal_31[0x00000000], joaat("weapon_assaultrifle"), 0x000007D0, 0x00000001, 0x00000001);
				unk_0x6DF7BF67E86AAE86(iLocal_31[0x00000000], iLocal_44);
				unk_0x298903DD96203C2C(iLocal_31[0x00000000], 0x00000000);
				unk_0x11AD11297DC58CC7(iLocal_31[0x00000000], 0x00000001);
				func_102(iLocal_31[0x00000000], 0x00000253);
				func_101(iLocal_31[0x00000000], 0x00000000);
			}
			iLocal_55 = 0x00000000;
			while (iLocal_55 <= 0x0000000C)
			{
				if (iLocal_97[iLocal_55] == 0x00000000)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_55]))
					{
						unk_0xE8832A9E16A57A1F(iLocal_32[iLocal_55], 0x00000001, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_32[iLocal_55], joaat("weapon_assaultrifle"), 0x000007D0, 0x00000001, 0x00000001);
						unk_0x6DF7BF67E86AAE86(iLocal_32[iLocal_55], iLocal_44);
						unk_0x298903DD96203C2C(iLocal_32[iLocal_55], 0x0000000A);
						func_102(iLocal_32[iLocal_55], 0x00000253);
						func_101(iLocal_32[iLocal_55], 0x00000000);
						unk_0x11AD11297DC58CC7(iLocal_32[iLocal_55], 0x00000001);
						iLocal_97[iLocal_55] = 0x00000001;
					}
				}
				iLocal_55++;
			}
			unk_0x71199B01895C6202(joaat("s_m_y_marine_01"));
			unk_0x71199B01895C6202(joaat("s_m_m_pilot_02"));
			iLocal_80 = 0x00000001;
		}
	}
}

void func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000040)
		{
			if (Global_F066[iVar0 /*2*/] != 0x00000000)
			{
				if (Global_F066[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (0x00000040 == Global_F065)
	{
		return;
	}
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar1 == 0xFFFFFFFF && iVar2 != 0x00000040)
	{
		if (Global_F066[iVar2 /*2*/] == 0x00000000)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == 0xFFFFFFFF)
	{
		return;
	}
	Global_F066[iVar1 /*2*/] = iParam0;
	Global_F066[iVar1 /*2*/].f_1 = 0x00000007;
	Global_F065++;
}

void func_102(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_12020[iVar0 /*2*/] == 0x00000000)
		{
			Global_12020[iVar0 /*2*/] = uParam0;
			Global_12020[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_12041)
			{
				Global_12041++;
			}
			return;
		}
		iVar0++;
	}
}

void func_103(int iParam0, int iParam1)
{
	Global_181B8.f_16[iParam1] = iParam0;
}

bool func_104()
{
	return func_98(&(Global_19AE3.f_B4A));
}

void func_105()
{
	func_106(&(Global_19AE3.f_B4A));
}

void func_106(var uParam0)
{
	if (func_99(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_C.f_42);
	}
}

var func_107()
{
	return Global_19AE3.f_B4A.f_C.f_42;
}

bool func_108()
{
	return func_99(&(Global_19AE3.f_B4A));
}

void func_109(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_110(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_110(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
				func_115(iVar0);
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
					if (func_112(iVar0, vParam0, vParam1, fParam2))
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
				if (func_62(iVar0, func_20(), 0x00000001))
				{
					bVar1 = 0x00000000;
				}
			}
			if (bVar1)
			{
				if (!func_111(vParam5))
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

int func_111(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_112(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
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
		vVar0 = { func_114(vParam1 - vParam2) };
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
		if (((((((((((((((func_113(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar3) || func_113(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar3, vVar5)) || func_113(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar4, vVar5)) || func_113(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar4)) || func_113(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar3)) || func_113(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar3, vVar5)) || func_113(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar4, vVar5)) || func_113(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar4)) || func_113(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar3)) || func_113(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar3, vVar5)) || func_113(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar4, vVar5)) || func_113(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar4)) || func_113(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar3)) || func_113(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar3, vVar5)) || func_113(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar4, vVar5)) || func_113(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_113(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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

Vector3 func_114(vector3 vParam0)
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

void func_115(int iParam0)
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

void func_116()
{
	if (!func_36())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1738.131f, 3283.38f, 40.1261f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 25.3545f);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
	{
		unk_0xEBA53F35D0085654(&(iLocal_31[0x00000000]));
	}
	iLocal_55 = 0x00000000;
	while (iLocal_55 <= 0x0000000C)
	{
		if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_55]))
		{
			unk_0xEBA53F35D0085654(&(iLocal_32[iLocal_55]));
		}
		iLocal_55++;
	}
	if (func_20() == 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(uLocal_124[0x00000000]))
		{
			unk_0xEBA53F35D0085654(&(uLocal_124[0x00000000]));
		}
	}
	if (func_20() == 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(uLocal_124[0x00000002]))
		{
			unk_0xEBA53F35D0085654(&(uLocal_124[0x00000002]));
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
	{
		unk_0x06FF977AA95DCCE3(iLocal_35[0x00000000], 0x00000000);
	}
	unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0x00000001);
	unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0x00000000, 0x00000000);
	if (unk_0x562F77A7F33D2E46("DH_P_2B_ENTER_CHOPPER"))
	{
		unk_0x8910D3D58E0132B8("DH_P_2B_ENTER_CHOPPER");
	}
	if (unk_0x562F77A7F33D2E46("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
	{
		unk_0x8910D3D58E0132B8("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	}
	if (unk_0xC844350D5D58C99A(iLocal_33))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_33);
	}
	if (unk_0xC844350D5D58C99A(iLocal_39))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_39);
	}
	if (unk_0xC844350D5D58C99A(iLocal_34))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_34);
	}
	if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_35[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(Global_17409[0x00000000]))
	{
		if (!unk_0x9C77D2D0559097F0(Global_17409[0x00000000], 0x00000001))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
		}
		unk_0xA954465BA6FDEFE2(&(Global_17409[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(Global_17409[0x00000001]))
	{
		if (!unk_0x9C77D2D0559097F0(Global_17409[0x00000001], 0x00000001))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000001], 0x00000001, 0x00000001);
		}
		unk_0xA954465BA6FDEFE2(&(Global_17409[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(Global_17409[0x00000002]))
	{
		if (!unk_0x9C77D2D0559097F0(Global_17409[0x00000002], 0x00000001))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000002], 0x00000001, 0x00000001);
		}
		unk_0xA954465BA6FDEFE2(&(Global_17409[0x00000002]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
	{
		unk_0xA954465BA6FDEFE2(&(iLocal_36[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_42))
	{
		unk_0xF690C84DADBB3551(&iLocal_42);
	}
	if (unk_0xC844350D5D58C99A(iLocal_43))
	{
		unk_0xF690C84DADBB3551(&iLocal_43);
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_40))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_40))
		{
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(iLocal_40, 0x00000000);
	}
}

void func_117()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_45))
	{
		unk_0x142CC44DB769B57E(&iLocal_45);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_46))
	{
		unk_0x142CC44DB769B57E(&iLocal_46);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_48))
	{
		unk_0x142CC44DB769B57E(&iLocal_48);
	}
	iLocal_55 = 0x00000000;
	while (iLocal_55 <= 0x0000000C)
	{
		func_118(&(Local_53[iLocal_55 /*8*/]));
		iLocal_55++;
	}
	unk_0x053C926E5E341906();
}

void func_118(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
		bVar0 = 0x00000001;
	}
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_1))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_1));
		bVar0 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_7))
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_7, 0x00000000))
		{
			if (unk_0x3C583F939C836C5C(iParam0->f_7))
			{
				unk_0xA29E145196B9739D(iParam0->f_7, 0x00000000);
			}
		}
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_119()
{
	if (iLocal_28 == 0x00000005)
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_45))
		{
			unk_0x142CC44DB769B57E(&iLocal_45);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_46))
		{
			unk_0x142CC44DB769B57E(&iLocal_46);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_34))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
			{
				if (unk_0xE4EDC4B0E92C078B(iLocal_45))
				{
					unk_0x142CC44DB769B57E(&iLocal_45);
				}
				if (iLocal_107 == 0x00000001)
				{
					if (unk_0x1C0640BA9A7327B3() < iLocal_68 + 7500)
					{
						unk_0x790015DC92C918E2();
					}
				}
				if (iLocal_28 == 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_46))
					{
						iLocal_46 = func_126(vLocal_119, 0x00000000);
					}
					if (iLocal_78 == 0x00000000)
					{
						if (!unk_0xD17F06053799A7CA())
						{
							if (!func_125() || !unk_0x04E6B3EAA8742BFA())
							{
								func_124("DP_GOD4", 0x00001D4C, 0x00000001);
								iLocal_69 = unk_0x1C0640BA9A7327B3();
								iLocal_78 = 0x00000001;
							}
						}
					}
				}
				if (iLocal_28 == 0x00000003)
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
					{
						uLocal_47[0x00000000] = func_123(iLocal_31[0x00000000], 0x00000001, 0x00000000);
					}
				}
			}
			else if (iLocal_28 != 0x00000005)
			{
				if (!unk_0xE4EDC4B0E92C078B(iLocal_45))
				{
					iLocal_45 = func_120(iLocal_34, 0x00000000, 0x00000000);
				}
				if (iLocal_28 == 0x00000003 || iLocal_28 == 0x00000004)
				{
					if (iLocal_107 == 0x00000000)
					{
						unk_0x790015DC92C918E2();
						func_124("DP_GOD6", 0x00001D4C, 0x00000001);
						iLocal_68 = unk_0x1C0640BA9A7327B3();
						iLocal_107 = 0x00000001;
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_46))
				{
					unk_0x142CC44DB769B57E(&iLocal_46);
				}
				if (iLocal_28 == 0x00000003)
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
					}
				}
				if (iLocal_28 == 0x00000004)
				{
					if (iLocal_78 == 0x00000001)
					{
						if (unk_0x1C0640BA9A7327B3() < iLocal_69 + 7500)
						{
							unk_0x790015DC92C918E2();
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_45))
			{
				unk_0x142CC44DB769B57E(&iLocal_45);
			}
			if (iLocal_76 == 0x00000001)
			{
				iLocal_79 = 0x00000001;
			}
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_45))
		{
			unk_0x142CC44DB769B57E(&iLocal_45);
		}
		if (iLocal_76 == 0x00000001)
		{
			iLocal_79 = 0x00000001;
		}
	}
}

int func_120(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(iParam0, !bParam1, bParam2);
}

int func_121(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_123(int iParam0, bool bParam1, bool bParam2)
{
	return func_121(iParam0, !bParam1, bParam2);
}

void func_124(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_125()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_126(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_122(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_127()
{
	if (iLocal_54 > 0x00000000)
	{
		func_119();
		func_228();
	}
	if (iLocal_54 == 0x00000000)
	{
		if (iLocal_75 == 0x00000001)
		{
			iLocal_76 = 0x00000000;
			func_34();
			iLocal_75 = 0x00000000;
		}
		iLocal_111 = 0x00000000;
		iLocal_112 = 0x00000000;
		iLocal_115 = 0x00000000;
		iLocal_116 = 0x00000000;
		if (unk_0xE4EDC4B0E92C078B(iLocal_48))
		{
			unk_0x142CC44DB769B57E(&iLocal_48);
		}
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			unk_0x1E9649458B15960F(iLocal_34, 0x00000000);
		}
		unk_0x81AF65E52132C1B4(0x00000000);
		iLocal_55 = 0x00000000;
		while (iLocal_55 <= 0x0000000C)
		{
			if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_55]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_55]))
				{
					unk_0xFADC0A217229F6B5(iLocal_32[iLocal_55], 0x00000001);
					unk_0x6DAD7906B73F064D(&(iLocal_32[iLocal_55]));
				}
			}
			iLocal_55++;
		}
		if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
		{
			unk_0x046C362CF15F1935(&(iLocal_35[0x00000000]));
		}
		if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
		{
			unk_0x6DAD7906B73F064D(&(iLocal_31[0x00000000]));
		}
		if (!unk_0x562F77A7F33D2E46("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x8BC9595FD2792B5D("DH_P_2B_ENTER_CHOPPER");
		}
		if (unk_0x757EF87A33649210())
		{
			if (!func_36())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_226(iLocal_34, 0xFFFFFFFF, 0x00000001);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		unk_0x8B4C4CA774181102(10f, 5f, 0x00000004);
		iLocal_76 = 0x00000001;
		iLocal_54 = 0x00000001;
	}
	if (iLocal_54 == 0x00000001)
	{
		if (iLocal_115 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_34))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_118, 0x00000001) > 800f)
						{
							func_150(0x00000002, "STAGE_FLY_CARGOBOB_TO_HANGER", 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							iLocal_115 = 0x00000001;
						}
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
				{
					if (unk_0xE934758D273C899A(iLocal_34))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_118, 0x00000001) > 800f)
						{
							if (iLocal_111 == 0x00000000 && iLocal_78 == 0x00000001)
							{
								if (!unk_0xD17F06053799A7CA())
								{
									if (!func_125() || !unk_0x04E6B3EAA8742BFA())
									{
										func_149(&uLocal_198, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
										if (func_148(&uLocal_198, "DP2BAUD", "DP2B_CHAT59", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_111 = 0x00000001;
										}
									}
								}
							}
							if (iLocal_111 == 0x00000001 && iLocal_116 == 0x00000000)
							{
								if (func_147(0x00000048) == 0x00000000)
								{
									if (!func_125())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											func_149(&uLocal_198, 0x00000003, 0x00000000, "Wade", 0x00000000, 0x00000001);
											if (func_131(&uLocal_198, 0x00000018, "DP2BAUD", "DP2B_WADEP3", 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
											{
												iLocal_116 = 0x00000001;
											}
										}
									}
								}
								else if (!func_125())
								{
									if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
									{
										func_149(&uLocal_198, 0x00000003, 0x00000000, "Wade", 0x00000000, 0x00000001);
										if (func_131(&uLocal_198, 0x00000018, "DP2BAUD", "DP2B_WADEP4", 0x00000007, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_116 = 0x00000001;
										}
									}
								}
							}
						}
						else if (func_130(0x00000047) == 0x00000000)
						{
							if (iLocal_112 == 0x00000000)
							{
								if (!func_125())
								{
									if (!unk_0xFEBC1E4EC9E001F0())
									{
										func_129("DP_HELP4", 0xFFFFFFFF);
										iLocal_112 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
				{
					if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_119, 2f, 2f, 2f, 0x00000001, 0x00000001, 0x00000000))
					{
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!unk_0xE934758D273C899A(iLocal_34) && unk_0x8B38C0DAEEDB5F9C(iLocal_34))
						{
							func_128(0x00000001, 0x00000258);
							unk_0x8B4C4CA774181102(8f, 5f, 0x00000004);
							iLocal_54 = 0x00000000;
							iLocal_28 = 0x00000005;
						}
					}
				}
			}
		}
	}
}

void func_128(bool bParam0, int iParam1)
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

void func_129(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_130(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

bool func_131(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_146(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
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
	return func_132(sParam3, iParam4, bParam8);
}

int func_132(char* sParam0, int iParam1, bool bParam2)
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
					func_145();
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
		if (func_144(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_143();
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
				func_142();
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
				if (func_141())
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
			if (func_140())
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
			func_139();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_138();
		func_133();
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
		func_145();
	}
	return 0x00000000;
}

void func_133()
{
	if (!func_134())
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

int func_134()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_137())
	{
		return 0x00000000;
	}
	if (func_135(unk_0xD803B885F5E47A62()))
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

bool func_135(int iParam0)
{
	return func_136(iParam0, 0x00000014);
}

bool func_136(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_137()
{
	return 0xFFFFFFFF;
}

void func_138()
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

void func_139()
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

int func_140()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_141()
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

void func_142()
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
		Global_4C1E = func_20();
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

void func_143()
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

bool func_144(int iParam0, int iParam1)
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

void func_145()
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

void func_146(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_147(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

bool func_148(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_146(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_132(sParam2, iParam3, 0x00000000);
}

void func_149(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_150(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 0x00000001)
	{
		if (!unk_0x7F8A39872A07D2CE("FinaleC2", unk_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0x00000000;
	if (iParam3 == 0x00000001)
	{
		if (iParam0 != Global_181DD)
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iParam0 > Global_181DD)
	{
		iVar0 = 0x00000001;
	}
	if (iVar0 == 0x00000001)
	{
		func_225(0x00000001);
		if (iParam0 <= Global_181DD)
		{
		}
		iVar1 = func_223(unk_0xBB0808A181D4745C(), 0x00000001);
		if (iVar1 != 0xFFFFFFFF && iVar1 != 0x0000005E)
		{
			Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1 = 0x00000000;
			iVar2 = func_221(iVar1);
			cVar3 = { Global_15DBC[iVar1 /*34*/].f_8 };
			if (iVar1 == 0x0000005A)
			{
				switch (Global_1B416.f_2378.f_63.f_CD[0x00000007])
				{
					case 0x00000001:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 0x00000002:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x353729B0A07DC11A(&cVar3, iVar2, Global_181DD, iParam0);
		}
		else
		{
			iVar4 = func_216(unk_0xBB0808A181D4745C(), 0x00000001);
			if (iVar4 != 0xFFFFFFFF)
			{
				Global_1B416.f_4889[iVar4 /*6*/].f_4 = 0x00000000;
				MemCopy(&uVar5, {func_215(iVar4)}, 0x00000004);
				unk_0x353729B0A07DC11A(&uVar5, 0x00000000, Global_181DD, iParam0);
			}
			else
			{
				iVar6 = func_214(&(Global_181B8.f_3));
				if (iVar6 > 0xFFFFFFFF)
				{
					Global_1B416.f_6195.f_4[iVar6] = 0x00000000;
				}
			}
		}
		Global_16AFA = iParam2;
		Global_181DD = iParam0;
		func_151(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_181DD)
	{
	}
}

void func_151(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_152(&Global_19AE3, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_152(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_20();
	uParam0->f_1 = func_203();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_177(&(uParam0->f_B44), 0x00000000);
		func_176(unk_0x16F2683693E537C9());
		func_169(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 0x00000001);
		if (uParam0->f_2 == 0x00000000 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		uParam0->f_11[iVar1] = Global_1B416.f_936.f_21B.f_126[iVar1];
		if (iVar1 == func_168())
		{
			func_161(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_180A5[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_180A5[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_180A5[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_180A5[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_180A5[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_180A5[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_180A5[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_180A5[iVar1 /*65*/].f_40;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000009)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_180A5[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_180A5[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0x00000000:
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000001:
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000002:
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
		}
		uParam0->f_9[iVar1] = Global_1B416.f_504F.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_E53E[iVar1];
		uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			uParam0->f_B16[iVar1 /*15*/][iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_5[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_A[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			uParam0->f_929[iVar1 /*164*/][iVar0] = Global_1B416.f_936[iVar1 /*164*/][iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_10[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_14[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_18[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_1C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_20[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_24[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_28[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_2C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_30[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_34[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_38[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_3C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_40[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_44[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_48[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_50[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_54[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_58[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_5C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_60[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_64[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_68[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_6C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_70[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_74[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_78[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_7C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_80[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_84[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_88[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_90[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_94[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_98[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_9C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_A0[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &(uParam0->f_925[0x00000000]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &(uParam0->f_925[0x00000001]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &(uParam0->f_925[0x00000002]), 0xFFFFFFFF);
	uParam0->f_5 = 0x00000091;
	if (iParam4 == 0x00000001)
	{
		func_154(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_153(&(uParam0->f_BA4));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_153(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_154(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_24(iParam2);
	}
	if (func_160(iParam2, &iVar0, iParam3, iParam5))
	{
		func_155(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_155(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_155(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_157(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_156(iParam2))
		{
			uParam1->f_3 = 0x00000001;
		}
		else
		{
			uParam1->f_3 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (Global_181B8.f_16[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_157(var uParam0, int iParam1, int iParam2)
{
	func_41(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_159(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_61(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_158(iParam1);
		}
	}
	if (iParam2 == 0x00000001)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_12A3A == iParam1)
		{
			uParam0->f_9 = 0x00000001;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_8 = 0x00000001;
	}
	else
	{
		uParam0->f_8 = 0x00000000;
	}
}

int func_158(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if (iParam0 == Global_126B1.f_1E4[iVar0])
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000091 || iParam1 == Global_17755[iVar0])
				{
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_72(iParam1, iParam2))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_160(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 0x00000001);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0x00000000))
				{
					if (iParam2 == 0x00000000 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, joaat("taxi")))
						{
							if (unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != iParam0 && unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != 0x00000000)
							{
								return 0x00000000;
							}
						}
						if (func_62(*uParam1, func_20(), 0x00000001))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0x00000000;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 0x00000001))
							{
								return 0x00000000;
							}
						}
						if (iParam3 == 0x00000001)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0x00000000;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, joaat("blimp")))
						{
							return 0x00000000;
						}
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_161(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_24(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_167(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_166(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_23(iVar0))
		{
			uParam1->f_3B = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_165(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_162(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_162(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_162(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_162(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_165(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_162(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_162(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_163(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_164();
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

var func_164()
{
	return Global_1407E9;
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_163(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_166(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0x00000000)
	{
		return;
	}
	if (iParam1 == 0x00000000)
	{
		if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
		{
			if (iParam0 != 0x00000000)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != 0xFFFFFFFF)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000007)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			else if (iParam1 == 0x00000001)
			{
				if (*uParam2 == 0x00000001)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000040 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000002)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000004)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000006)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000011)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000014)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x00000008 && *uParam2 <= 0x0000000E)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000009)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if ((*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014) || *uParam2 == 0x00000002)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
	}
}

void func_167(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0x00000000)
	{
		return;
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x0000000F)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000003 || *uParam2 == 0x00000016)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000008)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000001 || *uParam2 == 0x0000000A)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000013)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000003)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (*uParam2 >= 0x00000005 && *uParam2 <= 0x00000007)
				{
					if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
	}
}

int func_168()
{
	func_21();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_169(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_170(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
			iVar2 = 0x00000000;
			while (iVar2 <= (0x00000008 - 0x00000001))
			{
				Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_1B416.f_936.f_21B.f_6E3 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0x00000000)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp0_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000001)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp1_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000002)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp2_parachute_current_tint"), iVar3, 0x00000001);
			}
		}
	}
}

void func_170(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			iVar3 = func_175(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_175(iVar0));
				Var4.f_1 = 0x00000000;
				Var4.f_2 = 0x00000000;
				Var4.f_3 = 0x00000000;
				Var4.f_4 = 0x00000000;
				if (Var4 != 0x00000000 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 0x00000001;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0x00000000;
					iVar2 = func_173(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_173(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000032)
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0x00000000;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0x00000000;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_172(Var7.f_1)) && iVar9 < 0x00000033)
			{
				if (!unk_0x232048AB4B0E0259(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0x00000000;
					Var4.f_2 = 0x00000000;
					Var4.f_3 = 0x00000000;
					Var4.f_4 = 0x00000000;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, iVar1, &Var8))
						{
							if (!func_171(Var8.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var8.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0x00000000)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4 = 0x00000000;
						Var4.f_1 = 0x00000000;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0xB4FC92B0:
		case 0x1A1F1260:
		case 0xE4E00B70:
		case 0x2C298B2B:
		case 0xDFB79725:
		case 0x6BD7228C:
		case 0x9DDBCF8C:
		case 0xB319A52C:
		case 0xC6836E12:
		case 0x43B1B173:
		case 0x4ABDA3FA:
		case 0xE7EE68EA:
		case 0x29366D21:
		case 0x3ADE514B:
		case 0xE64513E9:
		case 0xCD7AEB9A:
		case 0xFA7B27A6:
		case 0xE285CA9A:
		case 0x2B904B19:
		case 0x22C24F9C:
		case 0x8D0D5ECD:
		case 0x1F07150A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_172(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0x00000000;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0x00000000;
				break;
			
			case 0xC78D71B4:
			case 0xDDE2A27C:
			case 0x176898A6:
			case 0xA52E2957:
			case 0x8210D4D5:
			case 0xD866ACD1:
			case 0x8F796EC9:
			case 0xCE1A1A4D:
			case 0xEB779748:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 0x12E82D3D:
			case 0xBD248B55:
			case 0x0781FE4A:
			case 0xCD274149:
			case 0xBA45E8B8:
			case 0x94117305:
			case 0x19044EE0:
			case 0x97EA20B8:
			case 0x476BF155:
			case 0xB62D1F67:
			case 0xAF3696A1:
			case 0x917F6C8C:
			case 0x2B5EF5EC:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000009:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x84C8B2D3;
					break;
				
				case 0x00000001:
					iVar0 = 0x937ED0B7;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0x00000000)
			{
				iVar1 = func_174(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_171(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_174(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_175(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x76D04710;
			break;
		
		case 0x00000001:
			iVar0 = 0x4C1DA136;
			break;
		
		case 0x00000002:
			iVar0 = 0x378DDAD7;
			break;
		
		case 0x00000003:
			iVar0 = 0xD6D57281;
			break;
		
		case 0x00000004:
			iVar0 = 0xA9066703;
			break;
		
		case 0x00000005:
			iVar0 = 0x0BAB693A;
			break;
		
		case 0x00000006:
			iVar0 = 0xE5D87BED;
			break;
		
		case 0x00000007:
			iVar0 = 0x3573FB94;
			break;
		
		case 0x00000008:
			iVar0 = 0x1D838821;
			break;
		
		case 0x00000009:
			iVar0 = 0xBB200985;
			break;
		
		case 0x0000000A:
			iVar0 = 0xE14402F7;
			break;
		
		case 0x0000000B:
			iVar0 = 0xCC07A8AD;
			break;
		
		case 0x0000000C:
			iVar0 = 0xAF5E8908;
			break;
		
		case 0x0000000D:
			iVar0 = 0xDFA31A8F;
			break;
		
		case 0x0000000E:
			iVar0 = 0x644B237F;
			break;
		
		case 0x0000000F:
			iVar0 = 0xCCC586AE;
			break;
		
		case 0x00000010:
			iVar0 = 0x8150911E;
			break;
		
		case 0x00000011:
			iVar0 = 0x7B37201A;
			break;
		
		case 0x00000012:
			iVar0 = 0xDFEC2248;
			break;
		
		case 0x00000013:
			iVar0 = 0x6A4A26BC;
			break;
		
		case 0x00000014:
			iVar0 = 0x1A378022;
			break;
		
		case 0x00000015:
			iVar0 = 0xFE852271;
			break;
		
		case 0x00000016:
			iVar0 = 0x74300D78;
			break;
		
		case 0x00000017:
			iVar0 = 0x8C4B2ADF;
			break;
		
		case 0x00000018:
			iVar0 = 0xC26535F0;
			break;
		
		case 0x00000019:
			iVar0 = 0x131AA6B3;
			break;
		
		case 0x0000001A:
			iVar0 = 0xD6909BE9;
			break;
		
		case 0x0000001B:
			iVar0 = 0xEF3FD8A1;
			break;
		
		case 0x0000001C:
			iVar0 = 0xD7119454;
			break;
		
		case 0x0000001D:
			iVar0 = 0x14B69421;
			break;
		
		case 0x0000001E:
			iVar0 = 0x697229C1;
			break;
		
		case 0x0000001F:
			iVar0 = 0x0B522FBC;
			break;
		
		case 0x00000021:
			iVar0 = 0x0ED4684E;
			break;
		
		case 0x00000022:
			iVar0 = 0x170AFF96;
			break;
		
		case 0x00000023:
			iVar0 = 0xF6A12136;
			break;
		
		case 0x00000024:
			iVar0 = 0x1A0BDEFC;
			break;
		
		case 0x00000025:
			iVar0 = 0xFD243A87;
			break;
		
		case 0x00000026:
			iVar0 = 0x22541EBE;
			break;
	}
	return iVar0;
}

void func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (func_23(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_177(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0x00000000)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000004))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000005))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000006))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000007))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_180(&iVar0))
		{
			if (func_179(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_20();
			if (iVar3 == 0x00000000)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 0x00000001)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 0x00000002)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_178(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_178(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam2, sParam1);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0x00000000;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_179(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 0x00000001:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 0x00000002:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 0x00000005:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 0x00000006:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 0x00000007:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 0x00000009:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 0x0000000B:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 0x00000010:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 0x00000011:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 0x00000012:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 0x00000013:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 0x00000014:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 0x00000015:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 0x00000016:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 0x00000017:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 0x00000018:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 0x00000019:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 0x0000001A:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 0x0000001B:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 0x0000001C:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 0x0000001D:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 0x0000001E:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 0x0000001F:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 0x00000020:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 0x00000021:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 0x00000022:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 0x00000023:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 0x00000024:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 0x00000025:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 0x00000026:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 0x00000027:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 0x00000028:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 0x00000029:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 0x0000002A:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 0x0000002B:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 0x0000002C:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 0x0000002D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000030:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000031:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000034:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000032:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000033:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_8(*uParam1, 0f, 0f, 0f, 0x00000000);
}

int func_180(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_202())
		{
			*uParam0 = func_186(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_185(*uParam0) && !func_181(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_181(int iParam0)
{
	return func_182(iParam0, 0x00000000, 0x00000001);
}

int func_182(int iParam0, int iParam1, bool bParam2)
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
		if (func_184() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_162(func_183(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_183(int iParam0)
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

int func_184()
{
	return Global_7830;
}

int func_185(int iParam0)
{
	return func_182(iParam0, 0x00000005, 0x00000001);
}

int func_186(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_201(iVar0))
		{
			if (!bParam3 || func_200(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_187(iVar0, 0x00000000), 0x00000001);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF)) && (iParam4 || iVar0 != 0x00000015)) && iVar0 != iParam5)
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

Vector3 func_187(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0f, 0f, 0f;
			break;
		
		case 0x00000000:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 0x00000001:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 0x00000002:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 0x00000003:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 0x00000004:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 0x00000005:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 0x00000006:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 0x00000007:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 0x00000008:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 0x00000009:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 0x0000000A:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 0x0000000B:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 0x0000000C:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 0x0000000D:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 0x0000000E:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 0x0000000F:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 0x00000010:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 0x00000011:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 0x00000012:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 0x00000013:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 0x00000014:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 0x00000015:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 0x00000016:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 0x00000017:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 0x00000018:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 0x00000019:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 0x0000001A:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 0x0000001B:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 0x0000001C:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 0x0000001D:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 0x0000001E:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 0x0000001F:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 0x00000020:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 0x00000021:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 0x00000022:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 0x00000023:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 0x00000024:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 0x00000025:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 0x00000026:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 0x00000027:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 0x00000028:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 0x00000029:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 0x0000002A:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 0x0000002B:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 0x0000002C:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 0x0000002D:
			return func_197(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_137())
			{
				if (func_196(Global_184466))
				{
					return func_189(0x00000002, 0x00000002);
				}
				else if (func_188(Global_184466))
				{
					return func_189(0x0000002D, 0x00000003);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 0x0000002F:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 0x00000030:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 0x00000031:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 0x00000034:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 0x00000032:
			return Global_19E130;
			break;
		
		case 0x00000033:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_188(int iParam0)
{
	if (iParam0 != func_137())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_189(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_137())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_190(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_190(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_190(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_190(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_195(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_195(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_193(iParam0) };
	}
	else
	{
		Var2 = { func_192(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_191(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_191(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_191(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_192(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000001:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000002:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x00000003:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x00000004:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000005:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000006:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000008:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_193(int iParam0)
{
	return func_194(iParam0);
}

struct<6> func_194(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000001:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000013:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000014:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000002:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 0x00000005:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 0x00000006:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 0x00000008:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 0x00000009:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000A:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 0x0000000B:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000C:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003D:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003E:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000D:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 0x0000000E:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000F:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003F:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000010:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 0x00000011:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000012:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000041:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000042:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002C:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000015:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000016:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000017:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000018:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000019:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x0000001A:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001B:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001C:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001D:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001E:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x0000001F:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000020:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000021:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000022:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000023:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000024:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000025:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000026:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000027:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 0x00000028:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000029:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000002A:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002B:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002D:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002E:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002F:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000030:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000031:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000032:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000033:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 0x00000034:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 0x00000035:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 0x00000036:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000037:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000038:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000039:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003A:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003B:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003C:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000043:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000044:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000047:
		case 0x00000045:
		case 0x00000046:
		case 0x00000049:
		case 0x00000048:
		case 0x0000004A:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_195(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_196(int iParam0)
{
	if (iParam0 != func_137())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000002:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000003:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 0x00000006:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 0x00000007:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 0x00000008:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 0x00000009:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 0x00000004:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 0x00000005:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 0x0000000A:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 0x0000000B:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 0x0000000C:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 0x0000000D:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 0x0000000E:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 0x0000000F:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 0x00000010:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 0x00000011:
			if (func_198() == 0x00000000)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_198()
{
	return func_199(unk_0xD803B885F5E47A62());
}

int func_199(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_200(int iParam0)
{
	return func_182(iParam0, 0x00000000, 0x00000000);
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
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
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

bool func_202()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_203()
{
	var uVar0;
	
	func_213(&uVar0, unk_0x4460E481B9E33ADA());
	func_212(&uVar0, unk_0x8D199E381D262EEF());
	func_211(&uVar0, unk_0xD8A54335F18763BA());
	func_206(&uVar0, unk_0x972A296334C9D57B());
	func_205(&uVar0, unk_0x118229AD063C3C1D());
	func_204(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_204(var uParam0, int iParam1)
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

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_210(*uParam0);
	iVar1 = func_208(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_207(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_207(int iParam0, int iParam1)
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

var func_208(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_209(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_209(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_210(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_214(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0x00000000;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 0x00000002;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 0x00000003;
	}
	return 0xFFFFFFFF;
}

struct<2> func_215(int iParam0)
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

int func_216(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x12AB0310C2281427(sParam0);
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000003F)
	{
		iVar0 = iVar3;
		func_217(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0x00000000)
	{
	}
	return 0xFFFFFFFF;
}

void func_217(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_218(uParam1, "Abigail1", func_220(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_218(uParam1, "Abigail2", func_220(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_218(uParam1, "Barry1", func_220(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_218(uParam1, "Barry2", func_220(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_218(uParam1, "Barry3", func_220(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_218(uParam1, "Barry3A", func_220(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_218(uParam1, "Barry3C", func_220(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_218(uParam1, "Barry4", func_220(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_218(uParam1, "Dreyfuss1", func_220(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_218(uParam1, "Epsilon1", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_218(uParam1, "Epsilon2", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_218(uParam1, "Epsilon3", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_218(uParam1, "Epsilon4", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_218(uParam1, "Epsilon5", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_218(uParam1, "Epsilon6", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_218(uParam1, "Epsilon7", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_218(uParam1, "Epsilon8", func_220(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_218(uParam1, "Extreme1", func_220(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_218(uParam1, "Extreme2", func_220(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_218(uParam1, "Extreme3", func_220(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_218(uParam1, "Extreme4", func_220(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_218(uParam1, "Fanatic1", func_220(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_218(uParam1, "Fanatic2", func_220(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_218(uParam1, "Fanatic3", func_220(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_218(uParam1, "Hao1", func_220(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_218(uParam1, "Hunting1", func_220(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_218(uParam1, "Hunting2", func_220(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_218(uParam1, "Josh1", func_220(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_218(uParam1, "Josh2", func_220(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_218(uParam1, "Josh3", func_220(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_218(uParam1, "Josh4", func_220(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_218(uParam1, "Maude1", func_220(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_218(uParam1, "Minute1", func_220(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_218(uParam1, "Minute2", func_220(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_218(uParam1, "Minute3", func_220(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_218(uParam1, "MrsPhilips1", func_220(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_218(uParam1, "MrsPhilips2", func_220(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_218(uParam1, "Nigel1", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_218(uParam1, "Nigel1A", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_218(uParam1, "Nigel1B", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_218(uParam1, "Nigel1C", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_218(uParam1, "Nigel1D", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_218(uParam1, "Nigel2", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_218(uParam1, "Nigel3", func_220(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_218(uParam1, "Omega1", func_220(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_218(uParam1, "Omega2", func_220(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_218(uParam1, "Paparazzo1", func_220(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_218(uParam1, "Paparazzo2", func_220(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_218(uParam1, "Paparazzo3", func_220(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_218(uParam1, "Paparazzo3A", func_220(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_218(uParam1, "Paparazzo3B", func_220(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_218(uParam1, "Paparazzo4", func_220(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_218(uParam1, "Rampage1", func_220(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_218(uParam1, "Rampage3", func_220(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_218(uParam1, "Rampage4", func_220(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_218(uParam1, "Rampage5", func_220(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_218(uParam1, "Rampage2", func_220(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_219(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_218(uParam1, "TheLastOne", func_220(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_218(uParam1, "Tonya1", func_220(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_218(uParam1, "Tonya2", func_220(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_218(uParam1, "Tonya3", func_220(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_218(uParam1, "Tonya4", func_220(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_218(uParam1, "Tonya5", func_220(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_219(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_218(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_219(int iParam0)
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

struct<2> func_220(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_215(iParam0) };
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

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000045:
		case 0x00000046:
			return func_222(Global_1B416.f_2378.f_63.f_CD[0x0000000A]);
			break;
		
		case 0x0000004A:
		case 0x0000004B:
			return func_222(Global_1B416.f_2378.f_63.f_CD[0x00000008]);
			break;
		
		case 0x00000054:
		case 0x00000055:
			return func_222(Global_1B416.f_2378.f_63.f_CD[0x0000000B]);
			break;
		
		case 0x0000005A:
			return func_222(Global_1B416.f_2378.f_63.f_CD[0x00000007]);
			break;
		
		case 0x0000005D:
			return func_222(Global_1B416.f_2378.f_63.f_CD[0x00000009]);
			break;
	}
	return 0x00000000;
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
			return 0x00000000;
			break;
		
		case 0x00000002:
		case 0x00000004:
		case 0x00000007:
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0xFFFFFFFF;
}

int func_223(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_224(iVar0, 0x00000001);
	if (iVar1 == 0xFFFFFFFF && !bParam1)
	{
	}
	return iVar1;
}

int func_224(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000005E)
	{
		if (Global_15DBC[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return 0xFFFFFFFF;
}

void func_225(bool bParam0)
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

void func_226(int iParam0, int iParam1, int iParam2)
{
	if (func_272() && func_36())
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
		func_227(0x00000000);
	}
}

void func_227(int iParam0)
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

void func_228()
{
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_119, 0x00000001) < 500f)
	{
		if (iLocal_89 == 0x00000000)
		{
			if (!unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				unk_0x523BCC9DC80CD82F(joaat("sandking"));
				if (unk_0xB87F6CF6E5628C67(joaat("sandking")))
				{
					iLocal_36[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("sandking"), 1754.951f, 3290.994f, 40.1176f, 182.397f, 0x00000001, 0x00000001, 0x00000000);
					unk_0x1E9649458B15960F(iLocal_36[0x00000000], 0x00000001);
					unk_0x71199B01895C6202(joaat("sandking"));
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				iLocal_89 = 0x00000001;
			}
		}
	}
	else if (iLocal_89 == 0x00000001)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_119, 0x00000001) > 550f)
		{
			if (unk_0xC844350D5D58C99A(iLocal_36[0x00000000]))
			{
				unk_0xA954465BA6FDEFE2(&(iLocal_36[0x00000000]));
			}
			iLocal_89 = 0x00000000;
		}
	}
}

void func_229()
{
	if (iLocal_54 > 0x00000000)
	{
		func_119();
		func_235();
		func_228();
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000004)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000004, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		}
		func_234();
		func_233();
		iLocal_55 = 0x00000000;
		while (iLocal_55 <= 0x0000000C)
		{
			if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
			{
				func_232(iLocal_32[iLocal_55], &(Local_53[iLocal_55 /*8*/]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
			}
			else
			{
				func_118(&(Local_53[iLocal_55 /*8*/]));
			}
			iLocal_55++;
		}
	}
	if (iLocal_54 == 0x00000000)
	{
		if (iLocal_75 == 0x00000001)
		{
			iLocal_76 = 0x00000000;
			func_34();
			iLocal_75 = 0x00000000;
		}
		iLocal_78 = 0x00000000;
		iLocal_81[0x00000000] = 0x00000000;
		iLocal_81[0x00000001] = 0x00000000;
		iLocal_82 = 0x00000000;
		iLocal_83[0x00000000] = 0x00000000;
		iLocal_83[0x00000001] = 0x00000000;
		iLocal_84 = 0x00000000;
		iLocal_89 = 0x00000000;
		iLocal_90[0x00000000] = 0x00000000;
		iLocal_95 = 0x00000000;
		iLocal_96 = 0x00000000;
		iLocal_102 = 0x00000000;
		iLocal_103 = 0x00000000;
		iLocal_104 = 0x00000000;
		iLocal_105 = 0x00000000;
		iLocal_106 = 0x00000000;
		iLocal_107 = 0x00000000;
		iLocal_62 = unk_0x1C0640BA9A7327B3();
		iLocal_67 = unk_0x1C0640BA9A7327B3();
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			unk_0x1E9649458B15960F(iLocal_34, 0x00000000);
		}
		func_150(0x00000001, "STAGE_ESCAPE_MILITARY", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
		if (unk_0x757EF87A33649210())
		{
			if (!func_36())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_226(iLocal_34, 0xFFFFFFFF, 0x00000001);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		if (!unk_0x562F77A7F33D2E46("DH_P_2B_ENTER_CHOPPER"))
		{
			unk_0x8BC9595FD2792B5D("DH_P_2B_ENTER_CHOPPER");
		}
		if (!unk_0x562F77A7F33D2E46("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		{
			unk_0x8BC9595FD2792B5D("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		}
		func_231(0x0000025A, 0x00000000);
		unk_0x81AF65E52132C1B4(0x00000000);
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				func_230(iLocal_34, 0xFFFFFFFF);
			}
		}
		unk_0x8B4C4CA774181102(10f, 5f, 0x00000004);
		iLocal_76 = 0x00000001;
		iLocal_54 = 0x00000001;
	}
	if (iLocal_54 == 0x00000001)
	{
		if (iLocal_83[0x00000000] == 0x00000001)
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
			}
			if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
			{
				unk_0x06FF977AA95DCCE3(iLocal_35[0x00000000], 0x00000000);
			}
			if (unk_0x562F77A7F33D2E46("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			{
				unk_0x8910D3D58E0132B8("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
			}
			func_128(0x00000001, 0x0000025A);
			func_231(0x00000258, 0x00000000);
			if (unk_0xC844350D5D58C99A(iLocal_34))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
				{
					if (unk_0x3D1053F9EB43B7AD(iLocal_34, 1721.001f, 3264.248f, 38.40064f, 1765.509f, 3276.518f, 46.05385f, 48.25f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
							iLocal_54 = 0x00000000;
							iLocal_28 = 0x00000005;
						}
						else
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
							func_30();
						}
					}
					else
					{
						iLocal_54 = 0x00000000;
						iLocal_28 = 0x00000004;
					}
				}
			}
		}
		else if (iLocal_84 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_34))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
					{
						if (unk_0x1C0640BA9A7327B3() > iLocal_62 + 10000)
						{
							if (!unk_0xD17F06053799A7CA())
							{
								func_124("DP_GOD5", 0x00001D4C, 0x00000001);
								iLocal_84 = 0x00000001;
							}
						}
					}
				}
			}
		}
	}
}

void func_230(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

void func_231(int iParam0, bool bParam1)
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

int func_232(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0x00000000)
	{
		iParam3 = unk_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x3C583F939C836C5C(iParam0))
		{
			if (iParam8 == 0xFFFFFFFF)
			{
				unk_0xA29E145196B9739D(iParam0, 0x00000001);
			}
			else
			{
				unk_0xE23B4401F4442A7E(iParam0, 0x00000001, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x03E7282D82C7B3B6(iParam0, iParam2);
			unk_0xF8BE15A7B963DB56(iParam0, fParam6);
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!iParam9 == 0xFFFFFFFF)
		{
			unk_0xFABCB9076292E3BA(iParam0, iParam9);
		}
		unk_0xF947FFD8DA795A7F(iParam0, bParam4);
		unk_0xB46A36D2F28E60DE(iParam0, iParam5);
		*uParam1 = unk_0x380B922C6BB1F223(iParam0);
		if (!iParam9 == 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!iParam8 == 0xFFFFFFFF)
				{
					unk_0x61755AC17D8F538E(*uParam1, iParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						unk_0xD06AC7C87A34A6AD(sParam7);
					}
					else
					{
						unk_0x6B012227B3921E18(sParam7);
					}
					unk_0x4FA118D51B4F2476(*uParam1);
				}
				unk_0x2A065371C9D96655(*uParam1, 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000002))
		{
			if (unk_0xE4EDC4B0E92C078B(*uParam1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000002);
			}
		}
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			uParam1->f_1 = unk_0x498C79575FE5BBCE(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_6, 0x00000003))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!iParam8 == 0xFFFFFFFF)
					{
						unk_0x61755AC17D8F538E(uParam1->f_1, iParam8);
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam7))
					{
						unk_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							unk_0xD06AC7C87A34A6AD(sParam7);
						}
						else
						{
							unk_0x6B012227B3921E18(sParam7);
						}
						unk_0x4FA118D51B4F2476(uParam1->f_1);
					}
					unk_0x2A065371C9D96655(uParam1->f_1, 0x00000007);
					unk_0x5D96D8530B3D0904(&(uParam1->f_6), 0x00000003);
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0x00000000;
				unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam1->f_6), 0x00000003);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_233()
{
	iLocal_37 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 300f, joaat("lazer"), 0x00000004);
	iLocal_38 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 300f, joaat("lazer"), 0x00004002);
	if (unk_0xC844350D5D58C99A(iLocal_37) && unk_0xE934758D273C899A(iLocal_37))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_48))
		{
			iLocal_48 = unk_0x5C3B41825F6AC5A0(iLocal_37);
			unk_0x321E019A46034F39(iLocal_48, 0x00000000);
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_38) && unk_0xE934758D273C899A(iLocal_38))
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_49))
		{
			iLocal_49 = unk_0x5C3B41825F6AC5A0(iLocal_38);
			unk_0x321E019A46034F39(iLocal_49, 0x00000000);
		}
	}
}

void func_234()
{
	if (iLocal_28 == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
				{
					vLocal_121 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
					if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
								{
									if (func_2(unk_0x16F2683693E537C9(), iLocal_31[0x00000000], 0x00000001) < 600f)
									{
										if (unk_0x0EB28750412C3A5A(vLocal_121, -75.8f, -819.9f, 326f, 0x00000001) > 1600f && unk_0x0EB28750412C3A5A(vLocal_121, -2159f, 3067f, 33f, 0x00000001) < 1000f)
										{
											if (vLocal_121.z > 70f)
											{
												if (iLocal_30 != 0x00000002)
												{
													iLocal_90[0x00000000] = 0x00000001;
													iLocal_30 = 0x00000002;
												}
											}
											else if (iLocal_30 != 0x00000001)
											{
												iLocal_90[0x00000000] = 0x00000001;
												iLocal_30 = 0x00000001;
											}
											if (iLocal_95 == 0x00000001)
											{
												if (iLocal_96 == 0x00000000)
												{
													if (!func_125())
													{
														if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
														{
															func_149(&uLocal_198, 0x00000004, 0x00000000, "PilotDispatch", 0x00000000, 0x00000001);
															func_149(&uLocal_198, 0x00000005, 0x00000000, "PilotDispatch2", 0x00000000, 0x00000001);
															if (func_148(&uLocal_198, "DP2BAUD", "DP2B_CHAT54", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
															{
																iLocal_96 = 0x00000001;
															}
														}
													}
												}
											}
										}
										else
										{
											if (unk_0x0EB28750412C3A5A(vLocal_121, -75.8f, -819.9f, 326f, 0x00000001) < 1600f)
											{
												if (iLocal_30 != 0x00000003)
												{
													iLocal_90[0x00000000] = 0x00000001;
													iLocal_30 = 0x00000003;
												}
												if (iLocal_95 == 0x00000000)
												{
													if (!func_125())
													{
														if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
														{
															func_149(&uLocal_198, 0x00000004, 0x00000000, "PilotDispatch", 0x00000000, 0x00000001);
															func_149(&uLocal_198, 0x00000005, 0x00000000, "PilotDispatch2", 0x00000000, 0x00000001);
															if (func_148(&uLocal_198, "DP2BAUD", "DP2B_CHAT53", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
															{
																iLocal_95 = 0x00000001;
															}
														}
													}
												}
											}
											if (unk_0x0EB28750412C3A5A(vLocal_121, -2159f, 3067f, 33f, 0x00000001) > 1000f)
											{
												if (iLocal_30 != 0x00000003)
												{
													iLocal_90[0x00000000] = 0x00000001;
													iLocal_30 = 0x00000003;
												}
											}
										}
									}
									else if (iLocal_30 != 0x00000004)
									{
										iLocal_90[0x00000000] = 0x00000001;
										iLocal_30 = 0x00000004;
									}
								}
							}
						}
					}
				}
				else if (unk_0x0EB28750412C3A5A(vLocal_121, -75.8f, -819.9f, 326f, 0x00000001) > 1600f)
				{
					if (iLocal_30 != 0x00000000)
					{
						iLocal_90[0x00000000] = 0x00000001;
						iLocal_30 = 0x00000000;
					}
					if (iLocal_95 == 0x00000001)
					{
						if (iLocal_96 == 0x00000000)
						{
							if (!func_125())
							{
								if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
								{
									func_149(&uLocal_198, 0x00000004, 0x00000000, "PilotDispatch", 0x00000000, 0x00000001);
									func_149(&uLocal_198, 0x00000005, 0x00000000, "PilotDispatch2", 0x00000000, 0x00000001);
									if (func_148(&uLocal_198, "DP2BAUD", "DP2B_CHAT54", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										iLocal_96 = 0x00000001;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_30 != 0x00000003)
					{
						iLocal_90[0x00000000] = 0x00000001;
						iLocal_30 = 0x00000003;
					}
					if (iLocal_95 == 0x00000000)
					{
						if (!func_125())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								func_149(&uLocal_198, 0x00000004, 0x00000000, "PilotDispatch", 0x00000000, 0x00000001);
								func_149(&uLocal_198, 0x00000005, 0x00000000, "PilotDispatch2", 0x00000000, 0x00000001);
								if (func_148(&uLocal_198, "DP2BAUD", "DP2B_CHAT53", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									iLocal_95 = 0x00000001;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_81[0x00000000] == 0x00000000)
	{
		if (iLocal_28 == 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
						{
							if (func_2(unk_0x16F2683693E537C9(), iLocal_31[0x00000000], 0x00000001) < 200f)
							{
								vLocal_120 = { unk_0x68F4C0EC296D3901(iLocal_35[0x00000000], 0x00000001) };
								unk_0xA3BF0AA5A2608191(iLocal_31[0x00000000]);
								unk_0xED253B8DDB3FFB77(iLocal_31[0x00000000], vLocal_120, 10f, 0x00000000, 0x00000000);
								unk_0x7C8478BF70C1E072(iLocal_31[0x00000000], 250f, 0x00000000);
								iLocal_81[0x00000000] = 0x00000001;
							}
						}
					}
				}
			}
		}
		if (iLocal_28 == 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
						{
							if (!unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
							{
								uLocal_47[0x00000000] = func_123(iLocal_31[0x00000000], 0x00000001, 0x00000000);
							}
							vLocal_120 = { unk_0x68F4C0EC296D3901(iLocal_35[0x00000000], 0x00000001) };
							unk_0xA3BF0AA5A2608191(iLocal_31[0x00000000]);
							unk_0xDD353D0E9C789D0E(&iLocal_367);
							if (!unk_0xC42A92762C58E1B9(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000))
							{
								unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_35[0x00000000], 0x00004E20, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
							}
							unk_0x9AFA0796FDCABCD5(0x00000000, iLocal_35[0x00000000], 0x00000000, 0x00000000, vLocal_120.x, vLocal_120.y, (vLocal_120.z + 20f), 0x00000004, 30f, 10f, -1f, 0x000000AA, 0x00000028, 0xBF800000, 0x00000000);
							unk_0x9AFA0796FDCABCD5(0x00000000, iLocal_35[0x00000000], 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000006, 40f, 20f, -1f, 0x000000AA, 0x00000028, 0xBF800000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_367);
							unk_0x78ADC381772E3D54(iLocal_31[0x00000000], iLocal_367);
							unk_0xF82EA857DA10E0CD(&iLocal_367);
							iLocal_81[0x00000000] = 0x00000001;
						}
					}
				}
			}
		}
	}
	else if (iLocal_28 == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
			{
				if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0x1C0640BA9A7327B3() > (iLocal_67 + 0x00015F90))
							{
								if (iLocal_104 == 0x00000000)
								{
									unk_0x298903DD96203C2C(iLocal_31[0x00000000], 0x00000064);
									iLocal_103 = 0x00000000;
									iLocal_104 = 0x00000001;
								}
							}
							else if (unk_0x1C0640BA9A7327B3() > iLocal_67 + 10000 && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
							{
								if (iLocal_104 == 0x00000000)
								{
									unk_0x298903DD96203C2C(iLocal_31[0x00000000], 0x00000064);
									iLocal_103 = 0x00000000;
									iLocal_104 = 0x00000001;
								}
							}
							else if (iLocal_103 == 0x00000000)
							{
								unk_0x298903DD96203C2C(iLocal_31[0x00000000], 0x00000000);
								iLocal_104 = 0x00000000;
								iLocal_103 = 0x00000001;
							}
							if (func_2(iLocal_35[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) < 300f)
							{
								if (iLocal_106 == 0x00000000)
								{
									unk_0x40B4CC38578A6E32(iLocal_31[0x00000000], joaat("vehicle_weapon_space_rocket"));
									unk_0xAA714ADDDC372E0F(iLocal_31[0x00000000], 0x914E786F);
									iLocal_105 = 0x00000000;
									iLocal_106 = 0x00000001;
								}
							}
							else if (iLocal_105 == 0x00000000)
							{
								unk_0x40B4CC38578A6E32(iLocal_31[0x00000000], joaat("vehicle_weapon_player_buzzard"));
								unk_0xAA714ADDDC372E0F(iLocal_31[0x00000000], 0x5D60E4E0);
								iLocal_106 = 0x00000000;
								iLocal_105 = 0x00000001;
							}
						}
					}
				}
			}
		}
		if (iLocal_82 == 0x00000000)
		{
			if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
						{
							if (unk_0xC42A92762C58E1B9(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000))
							{
								unk_0x298903DD96203C2C(iLocal_31[0x00000000], 0x00000000);
								unk_0x40B4CC38578A6E32(iLocal_31[0x00000000], joaat("vehicle_weapon_space_rocket"));
								iLocal_82 = 0x00000001;
							}
						}
					}
				}
			}
		}
		switch (iLocal_30)
		{
			case 0x00000000:
				if (iLocal_90[0x00000000] == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000006, 20f, 20f, -1f, 0x0000000F, 0x0000000A, 0xBF800000, 0x00000000);
									iLocal_90[0x00000000] = 0x00000000;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				if (iLocal_90[0x00000000] == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000006, 40f, 20f, -1f, 0x00000032, 0x00000014, 0xBF800000, 0x00000000);
									iLocal_90[0x00000000] = 0x00000000;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000002:
				if (iLocal_90[0x00000000] == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000006, 40f, 20f, -1f, 0x000000AA, 0x00000046, 0xBF800000, 0x00000000);
									iLocal_90[0x00000000] = 0x00000000;
								}
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				if (iLocal_90[0x00000000] == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000, 0x00000000, unk_0x68E4ADDDDCD7BDDE(iLocal_35[0x00000000], 20f, 0f, 0f), 0x00000004, 10f, 10f, unk_0xD9522BA9E27E1349(iLocal_35[0x00000000]), SYSTEM::ROUND(unk_0x3EEA4D9509D93247(iLocal_35[0x00000000], unk_0x68F4C0EC296D3901(iLocal_35[0x00000000], 0x00000001), 0x00000001, 0x00000001)), 0x00000064, 0xBF800000, 0x00000000);
									iLocal_90[0x00000000] = 0x00000000;
								}
							}
						}
					}
				}
				if (iLocal_102 == 0x00000000)
				{
					if (unk_0x0EB28750412C3A5A(vLocal_121, -2159f, 3067f, 33f, 0x00000001) > 1000f)
					{
						if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
							{
								if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
									{
										unk_0x9AFA0796FDCABCD5(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000006, 20f, 20f, -1f, 0x000000AA, 0x00000046, 0xBF800000, 0x00000000);
										iLocal_102 = 0x00000001;
									}
								}
							}
						}
					}
				}
				break;
			
			case 0x00000004:
				if (iLocal_90[0x00000000] == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
						{
							if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
								{
									unk_0x9AFA0796FDCABCD5(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 0x00000008, 40f, 50f, -1f, 0x000000C8, 0x000000AA, 0xBF800000, 0x00000000);
									iLocal_90[0x00000000] = 0x00000000;
								}
							}
						}
					}
				}
				break;
			}
	}
	if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
			}
			iLocal_83[0x00000000] = 0x00000001;
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
		}
		iLocal_83[0x00000000] = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
	{
		if (!unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
			}
			iLocal_83[0x00000000] = 0x00000001;
		}
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
		}
		iLocal_83[0x00000000] = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_35[0x00000000], 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_31[0x00000000], iLocal_35[0x00000000], 0x00000000))
					{
						if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
						{
							unk_0x516E63E474722206(uLocal_47[0x00000000], 1f);
						}
					}
					if (func_2(unk_0x16F2683693E537C9(), iLocal_31[0x00000000], 0x00000001) > 600f)
					{
						if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
						{
							unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
						}
						iLocal_83[0x00000000] = 0x00000001;
					}
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_31[0x00000000]))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_31[0x00000000]))
		{
			if (unk_0x70EED0761B82965E(iLocal_31[0x00000000]))
			{
				unk_0xA3BF0AA5A2608191(iLocal_31[0x00000000]);
				unk_0xD458AC1C1D29C3B4(iLocal_31[0x00000000], 0x00000000, 0x00000000);
				if (unk_0xE4EDC4B0E92C078B(uLocal_47[0x00000000]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_47[0x00000000]));
				}
				iLocal_83[0x00000000] = 0x00000001;
			}
		}
	}
}

void func_235()
{
	if (iLocal_85 == 0x00000000)
	{
		if ((((func_236(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000003, 0x00000000, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_85 = 0x00000001;
		}
	}
	if (iLocal_85 == 0x00000001)
	{
		if ((((!func_236(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000003, 0x00000000, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1601.514f, 2794.148f, 14.84222f, -1587.692f, 2806.101f, 20.29557f, 16f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1598.278f, 2803.98f, 17.01772f, -1665.98f, 2895.398f, 34.58953f, 14.5f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1648.554f, 2873.74f, 24.85017f, -1673.864f, 2889.698f, 38.18856f, 14.5f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1647.446f, 2873.969f, 24.82373f, -1667.316f, 2914.302f, 39.39478f, 14.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_85 = 0x00000000;
		}
	}
	if (iLocal_80 == 0x00000001)
	{
		if (((iLocal_85 == 0x00000001 || iLocal_98 == 0x00000001) || iLocal_109 == 0x00000001) || iLocal_86 == 0x00000001)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000004)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000004, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
			iLocal_55 = 0x00000000;
			while (iLocal_55 <= 0x0000000C)
			{
				if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_55]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_55]))
					{
						if (unk_0xC844350D5D58C99A(iLocal_34))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000) || iLocal_87 == 0x00000001)
								{
									if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_55], 0x00000001) < 39f)
									{
										if (iLocal_91[iLocal_55] == 0x00000000)
										{
											unk_0xA3BF0AA5A2608191(iLocal_32[iLocal_55]);
											unk_0xED253B8DDB3FFB77(iLocal_32[iLocal_55], unk_0x68F4C0EC296D3901(iLocal_32[iLocal_55], 0x00000001), 50f, 0x00000000, 0x00000000);
											unk_0x6C3AE6E278DB3D0E(iLocal_32[iLocal_55], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
											unk_0xAFF39FB306F8E232(iLocal_32[iLocal_55], 0x00000033, 0x00000001);
											unk_0xAFF39FB306F8E232(iLocal_32[iLocal_55], 0x0000002B, 0x00000001);
											iLocal_92[iLocal_55] = 0x00000000;
											iLocal_93[iLocal_55] = 0x00000000;
											iLocal_94[iLocal_55] = 0x00000000;
											iLocal_91[iLocal_55] = 0x00000001;
										}
									}
									else if (iLocal_92[iLocal_55] == 0x00000000)
									{
										unk_0xA3BF0AA5A2608191(iLocal_32[iLocal_55]);
										unk_0xDD353D0E9C789D0E(&iLocal_367);
										unk_0x96167B03C5A77156(0x00000000, unk_0x68F4C0EC296D3901(iLocal_34, 0x00000001), 2f, 0xFFFFFFFF, 20f, 0x00000000, 0x471C4000);
										unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
										unk_0x75ABDC5F81978924(iLocal_367);
										unk_0x78ADC381772E3D54(iLocal_32[iLocal_55], iLocal_367);
										unk_0xF82EA857DA10E0CD(&iLocal_367);
										iLocal_93[iLocal_55] = 0x00000000;
										iLocal_94[iLocal_55] = 0x00000000;
										iLocal_91[iLocal_55] = 0x00000000;
										iLocal_92[iLocal_55] = 0x00000001;
									}
								}
								else
								{
									if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_55], 0x00000001) < 39f)
									{
										if (iLocal_93[iLocal_55] == 0x00000000)
										{
											unk_0xA3BF0AA5A2608191(iLocal_32[iLocal_55]);
											unk_0xED253B8DDB3FFB77(iLocal_32[iLocal_55], unk_0x68F4C0EC296D3901(iLocal_32[iLocal_55], 0x00000001), 50f, 0x00000000, 0x00000000);
											unk_0x6C3AE6E278DB3D0E(iLocal_32[iLocal_55], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
											unk_0xAFF39FB306F8E232(iLocal_32[iLocal_55], 0x00000033, 0x00000001);
											unk_0xAFF39FB306F8E232(iLocal_32[iLocal_55], 0x0000002B, 0x00000001);
											iLocal_92[iLocal_55] = 0x00000000;
											iLocal_94[iLocal_55] = 0x00000000;
											iLocal_91[iLocal_55] = 0x00000000;
											iLocal_93[iLocal_55] = 0x00000001;
										}
									}
									if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_55], 0x00000001) > 41f && func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_55], 0x00000001) < 400f)
									{
										if (iLocal_94[iLocal_55] == 0x00000000)
										{
											iLocal_74 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
											unk_0xA3BF0AA5A2608191(iLocal_32[iLocal_55]);
											unk_0xED253B8DDB3FFB77(iLocal_32[iLocal_55], unk_0x68F4C0EC296D3901(iLocal_32[iLocal_55], 0x00000001), 50f, 0x00000000, 0x00000000);
											unk_0xDD353D0E9C789D0E(&iLocal_367);
											if (iLocal_74 == 0x00000000)
											{
												unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 25f, 0x40000000, 0x40000000, 0x00000000);
											}
											else if (iLocal_74 == 0x00000001)
											{
												unk_0x93D47DFD0AE94949(0x00000000, 0x000001F4);
												unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 25f, 0x40000000, 0x40000000, 0x00000000);
											}
											else if (iLocal_74 == 0x00000002)
											{
												unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 25f, 3f, 0x40000000, 0x00000000);
											}
											else if (iLocal_74 == 0x00000003)
											{
												unk_0x93D47DFD0AE94949(0x00000000, 0x000001F4);
												unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 25f, 3f, 0x40000000, 0x00000000);
											}
											unk_0x75ABDC5F81978924(iLocal_367);
											unk_0x78ADC381772E3D54(iLocal_32[iLocal_55], iLocal_367);
											unk_0xF82EA857DA10E0CD(&iLocal_367);
											iLocal_92[iLocal_55] = 0x00000000;
											iLocal_93[iLocal_55] = 0x00000000;
											iLocal_91[iLocal_55] = 0x00000000;
											iLocal_94[iLocal_55] = 0x00000001;
										}
									}
								}
							}
						}
					}
				}
				iLocal_55++;
			}
		}
		if (((iLocal_85 == 0x00000000 && iLocal_98 == 0x00000000) && iLocal_109 == 0x00000000) && iLocal_86 == 0x00000000)
		{
			iLocal_72 = 0x00000000;
			while (iLocal_72 <= 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_72]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_72]))
					{
						if (func_2(iLocal_32[iLocal_72], unk_0x16F2683693E537C9(), 0x00000001) < 25f)
						{
							if (iLocal_101[iLocal_72] == 0x00000000)
							{
								if (!unk_0x0A059E0DB9253280(iLocal_32[iLocal_72]))
								{
									unk_0x327AAEE25F323797(iLocal_32[iLocal_72]);
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_32[iLocal_72]);
								}
								unk_0x9BE7E7B6B488CC55(iLocal_32[iLocal_72], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
								iLocal_101[iLocal_72] = 0x00000001;
							}
							if (iLocal_110 == 0x00000001)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_70 + 20000)
								{
									iLocal_109 = 0x00000001;
								}
							}
						}
						else if (func_2(iLocal_32[iLocal_72], unk_0x16F2683693E537C9(), 0x00000001) > 30f)
						{
							if (iLocal_101[iLocal_72] == 0x00000001)
							{
								if (!unk_0x0A059E0DB9253280(iLocal_32[iLocal_72]))
								{
									unk_0x327AAEE25F323797(iLocal_32[iLocal_72]);
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_32[iLocal_72]);
								}
								unk_0x9BE7E7B6B488CC55(iLocal_32[iLocal_72], unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
								iLocal_101[iLocal_72] = 0x00000000;
							}
						}
					}
				}
				iLocal_72++;
			}
		}
	}
}

int func_236(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000001:
			vVar0[0x00000000 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0x00000000 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0x00000000] = 171.25f;
			vVar0[0x00000001 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[0x00000001 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[0x00000001] = 132f;
			vVar0[0x00000002 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[0x00000002 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[0x00000002] = 132f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000002:
			vVar0[0x00000000 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0x00000000 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 247f;
			vVar0[0x00000001 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[0x00000001 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 149f;
			vVar0[0x00000002 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[0x00000002 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 185.5f;
			vVar0[0x00000003 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[0x00000003 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 250f;
			vVar0[0x00000004 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[0x00000004 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 193.5f;
			vVar0[0x00000005 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[0x00000005 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 234.5f;
			vVar0[0x00000006 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[0x00000006 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[0x00000006] = 16f;
			vVar0[0x00000007 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[0x00000007 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 80f;
			vVar0[0x00000008 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[0x00000008 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 142f;
			vVar0[0x00000009 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[0x00000009 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000009] = 30.75f;
			vVar0[0x0000000A /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[0x0000000A /*3*/] = { -896.3734f, -3505.715f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000A] = 150f;
			vVar0[0x0000000B /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[0x0000000B /*3*/] = { -1685.626f, -2720.364f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000B] = 29.25f;
			vVar0[0x0000000C /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[0x0000000C /*3*/] = { -1110.198f, -3493.617f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000C] = 43f;
			iVar3 = 0x0000000D;
			break;
		
		case 0x00000003:
			vVar0[0x00000000 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0x00000000 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 255f;
			vVar0[0x00000001 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[0x00000001 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 180f;
			vVar0[0x00000002 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[0x00000002 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 205f;
			vVar0[0x00000003 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[0x00000003 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 86.25f;
			vVar0[0x00000004 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[0x00000004 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 150.5f;
			vVar0[0x00000005 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[0x00000005 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 140.5f;
			vVar0[0x00000006 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[0x00000006 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000006] = 90f;
			vVar0[0x00000007 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[0x00000007 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 100f;
			vVar0[0x00000008 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[0x00000008 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 248.75f;
			vVar0[0x00000009 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[0x00000009 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[0x00000009] = 128f;
			vVar0[0x0000000A /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[0x0000000A /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[0x0000000A] = 140f;
			vVar0[0x0000000B /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[0x0000000B /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[0x0000000B] = 16f;
			vVar0[0x0000000C /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[0x0000000C /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[0x0000000C] = 214.25f;
			vVar0[0x0000000D /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[0x0000000D /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[0x0000000D] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0x00000000;
			}
			vVar1[0x00000009 /*3*/].f_2 = (vVar1[0x00000009 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000A /*3*/].f_2 = (vVar1[0x0000000A /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000B /*3*/].f_2 = (vVar1[0x0000000B /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000C /*3*/].f_2 = (vVar1[0x0000000C /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000D /*3*/].f_2 = (vVar1[0x0000000D /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 0x0000000E;
			break;
		
		case 0x00000004:
			vVar0[0x00000000 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0x00000000 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000000] = 114f;
			vVar0[0x00000001 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[0x00000001 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000001] = 88.5f;
			vVar0[0x00000002 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[0x00000002 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000002] = 133.25f;
			vVar0[0x00000003 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[0x00000003 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000003] = 104.5f;
			vVar0[0x00000004 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[0x00000004 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000004] = 121.75f;
			vVar0[0x00000005 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[0x00000005 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000005] = 84.5f;
			vVar0[0x00000006 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[0x00000006 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000006] = 103.75f;
			vVar0[0x00000007 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[0x00000007 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000007] = 104.25f;
			vVar0[0x00000008 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[0x00000008 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000008] = 91f;
			vVar0[0x00000009 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[0x00000009 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000009] = 51.25f;
			iVar3 = 0x0000000A;
			break;
		
		case 0x00000005:
			vVar0[0x00000000 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0x00000000 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000000] = 45.75f;
			vVar0[0x00000001 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[0x00000001 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000001] = 99f;
			vVar0[0x00000002 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[0x00000002 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000002] = 81.5f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000006:
			vVar0[0x00000000 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0x00000000 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((0x0000000A + iParam2)) };
			fVar2[0x00000000] = 120f;
			vVar0[0x00000001 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[0x00000001 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[0x00000001] = 170f;
			vVar0[0x00000002 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[0x00000002 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[0x00000002] = 12.5f;
			vVar0[0x00000003 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[0x00000003 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[0x00000003] = 9.75f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000007:
			vVar0[0x00000000 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0x00000000 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000000] = 162f;
			vVar0[0x00000001 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[0x00000001 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000001] = 124f;
			vVar0[0x00000002 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[0x00000002 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000002] = 55f;
			vVar0[0x00000003 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[0x00000003 /*3*/] = { -1073.333f, -498.717f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000003] = 142f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000008:
			vVar0[0x00000000 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0x00000000 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0x00000000] = 7.75f;
			vVar0[0x00000001 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[0x00000001 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[0x00000001] = 14.75f;
			vVar0[0x00000002 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[0x00000002 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[0x00000002] = 31.5f;
			vVar0[0x00000003 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[0x00000003 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[0x00000003] = 30.5f;
			vVar0[0x00000004 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[0x00000004 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[0x00000004] = 6.75f;
			iVar3 = 0x00000005;
			break;
	}
	iVar4 = 0x00000000;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 0x00000001))
		{
			return 0x00000001;
		}
		iVar4++;
	}
	return 0x00000000;
}

void func_237()
{
	if (iLocal_54 > 0x00000000)
	{
		func_119();
		func_235();
		func_234();
	}
	if (iLocal_54 == 0x00000000)
	{
		if (iLocal_75 == 0x00000001)
		{
			iLocal_76 = 0x00000000;
			func_34();
			iLocal_75 = 0x00000000;
		}
		iLocal_77 = 0x00000000;
		iLocal_80 = 0x00000000;
		iLocal_81[0x00000000] = 0x00000000;
		iLocal_81[0x00000001] = 0x00000000;
		iLocal_85 = 0x00000000;
		iLocal_86 = 0x00000000;
		iLocal_87 = 0x00000000;
		iLocal_99 = 0x00000000;
		iLocal_100 = 0x00000000;
		iLocal_101[0x00000000] = 0x00000000;
		iLocal_101[0x00000001] = 0x00000000;
		iLocal_109 = 0x00000000;
		iLocal_110 = 0x00000000;
		iLocal_113 = 0x00000000;
		iLocal_114 = 0x00000000;
		iLocal_117 = 0x00000000;
		iLocal_70 = 0x00000000;
		iLocal_55 = 0x00000000;
		while (iLocal_55 <= 0x0000000C)
		{
			iLocal_91[iLocal_55] = 0x00000000;
			iLocal_92[iLocal_55] = 0x00000000;
			iLocal_93[iLocal_55] = 0x00000000;
			iLocal_94[iLocal_55] = 0x00000000;
			iLocal_55++;
		}
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0x93776B156FD8804A("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_61 = unk_0x1C0640BA9A7327B3();
		unk_0xAB8E2DDC7AF955E0(joaat("lazer"), 0x00000001);
		unk_0x523BCC9DC80CD82F(joaat("s_m_y_marine_01"));
		unk_0x523BCC9DC80CD82F(joaat("s_m_m_pilot_02"));
		if (!unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xC844350D5D58C99A(Global_17409[0x00000000]))
			{
				if (unk_0xDF1306B443CD3D15(Global_17409[0x00000000], 0x00000000))
				{
					unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
					iLocal_34 = Global_17409[0x00000000];
					unk_0x1FC8B874F2C46E6E(iLocal_34, 0x00000000);
					unk_0xE8832A9E16A57A1F(iLocal_34, 0x00000001, 0x00000001);
					unk_0x71199B01895C6202(joaat("cargobob"));
					unk_0xAB8E2DDC7AF955E0(joaat("cargobob"), 0x00000001);
					unk_0xB422445CBCD0AEFB(iLocal_34, 0x00000000);
					unk_0xD5A0214B20BCBAD8(iLocal_34, 0x00000001);
					func_103(iLocal_34, 0x00000000);
				}
			}
		}
		if (!unk_0xC844350D5D58C99A(iLocal_35[0x00000000]))
		{
			if (unk_0xC844350D5D58C99A(Global_17409[0x00000001]))
			{
				if (unk_0xDF1306B443CD3D15(Global_17409[0x00000001], 0x00000000))
				{
					unk_0x73270B3C9CC833FD(Global_17409[0x00000001], 0x00000001, 0x00000001);
					iLocal_35[0x00000000] = Global_17409[0x00000001];
					unk_0x1FC8B874F2C46E6E(iLocal_35[0x00000000], 0x00000001);
					unk_0xE8832A9E16A57A1F(iLocal_35[0x00000000], 0x00000001, 0x00000001);
					unk_0x1E9649458B15960F(iLocal_35[0x00000000], 0x00000000);
					unk_0x2E1E5367A885F9B7(iLocal_35[0x00000000], "DH_P_2B_ENEMY_CHOPPERS", 0x00000000);
					unk_0x05EC10F460C3A4AF(iLocal_35[0x00000000], 0x00000000);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000002]))
		{
			if (unk_0xDF1306B443CD3D15(Global_17409[0x00000002], 0x00000000))
			{
				if (unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(Global_17409[0x00000002])))
				{
					unk_0x73270B3C9CC833FD(Global_17409[0x00000002], 0x00000001, 0x00000001);
					func_245(1734.799f, 3234.833f, 40.7041f, 321.0399f, 0x00000000, 0x00000091);
				}
				if (((unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(Global_17409[0x00000002])) || unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(Global_17409[0x00000002]))) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(Global_17409[0x00000002]))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(Global_17409[0x00000002])))
				{
					unk_0x73270B3C9CC833FD(Global_17409[0x00000002], 0x00000001, 0x00000001);
					func_245(1748.05f, 3294.7f, 40.106f, 204.2419f, 0x00000000, 0x00000091);
				}
			}
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000000], 0x00000001, 0x00000001);
			iLocal_32[0x00000000] = Global_17409.f_9[0x00000000];
		}
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000001]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000001], 0x00000001, 0x00000001);
			iLocal_32[0x00000001] = Global_17409.f_9[0x00000001];
		}
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			unk_0x1E9649458B15960F(iLocal_34, 0x00000000);
		}
		unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0x00000001);
		if (unk_0x757EF87A33649210())
		{
			if (!func_36())
			{
				unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
			}
			func_226(iLocal_39, 0xFFFFFFFF, 0x00000001);
		}
		if (!unk_0x0F1CCD77290EE12F())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		func_244(unk_0x16F2683693E537C9(), 0xFFFFFFFF);
		func_243(0x00000049);
		iLocal_76 = 0x00000001;
		iLocal_54 = 0x00000001;
	}
	if (iLocal_54 == 0x00000001)
	{
		if (unk_0xDA8F5DDC86FE3C26("ARMY_GUARD"))
		{
			if (unk_0x8ED9A0095B69A728("ARMY_GUARD"))
			{
				unk_0x2723524E448F4BDD("ARMY_GUARD", 0x00000000);
			}
		}
		func_100();
		if (iLocal_86 == 0x00000000)
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_61 + 3000)
			{
				iLocal_63 = 0x00000000;
				while (iLocal_63 <= 0x0000000C)
				{
					if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_63]))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_63]))
						{
							if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_63], 0x00000001) < 40f)
							{
								if (unk_0xE115347EA59F7B86(iLocal_32[iLocal_63], unk_0x16F2683693E537C9()))
								{
									if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()))
									{
										unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0x00000000);
										unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0x00000001, 0x00000001);
										iLocal_86 = 0x00000001;
									}
									if (iLocal_85 == 0x00000001)
									{
										unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0x00000000);
										unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0x00000001, 0x00000001);
										iLocal_86 = 0x00000001;
									}
									if (iLocal_114 == 0x00000000)
									{
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_242(0x00000000))
										{
											if (func_241(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed"))
											{
												iLocal_73 = unk_0x1C0640BA9A7327B3();
												iLocal_114 = 0x00000001;
											}
										}
									}
									else if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_242(0x00000000))
									{
										if (func_241(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed"))
										{
											if (unk_0x1C0640BA9A7327B3() > iLocal_73 + 3000)
											{
												unk_0x6021F0389B7BAA70("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0x00000000);
												unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0x00000001, 0x00000001);
												iLocal_86 = 0x00000001;
											}
										}
										else if (iLocal_113 == 0x00000000)
										{
											iLocal_114 = 0x00000000;
											iLocal_113 = 0x00000001;
										}
									}
								}
							}
						}
					}
					iLocal_63++;
				}
			}
		}
		if (iLocal_77 == 0x00000000)
		{
			unk_0x790015DC92C918E2();
			unk_0x8B4C4CA774181102(5f, 10f, 0x00000004);
			func_124("DP_GOD2", 0x00001D4C, 0x00000001);
			iLocal_77 = 0x00000001;
		}
		if (iLocal_85 == 0x00000001)
		{
			if (!func_240(0x00000005))
			{
				func_239(0x00000005);
			}
		}
		else if (func_240(0x00000005))
		{
			func_238(0x00000005);
		}
		if (unk_0xC844350D5D58C99A(iLocal_34))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
			{
				if (func_2(unk_0x16F2683693E537C9(), iLocal_34, 0x00000001) < 30f)
				{
					iLocal_87 = 0x00000001;
				}
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
				{
					unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("gadget_parachute"), 0xFFFFFFFF, 0x00000000, 0x00000001);
					iLocal_54 = 0x00000000;
					unk_0x8B4C4CA774181102(10f, 10f, 0x00000004);
					iLocal_28 = 0x00000003;
				}
			}
		}
	}
}

void func_238(int iParam0)
{
	unk_0x0674E58A79778E99(&Global_17187, iParam0);
}

void func_239(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_17187, iParam0);
}

bool func_240(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_17187, iParam0);
}

int func_241(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 0x00000001);
	return uVar0;
}

int func_242(int iParam0)
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

void func_243(int iParam0)
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

void func_244(int iParam0, int iParam1)
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

void func_245(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0xC844350D5D58C99A(Global_18F3B.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_18F3B.f_4, 0x00000000))
		{
			if (func_254(0x00000018) != Global_18F3B.f_4)
			{
				if (iParam2 == 0x00000001)
				{
					if (func_251(unk_0x68F4C0EC296D3901(Global_18F3B.f_4, 0x00000001), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_246(Global_18F3B.f_4, vParam0, fParam1, 0x00000018, 0x00000000);
			}
		}
	}
}

void func_246(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_250(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_41(iParam0, &Var0);
		if (func_8(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_248(iParam3, &Var0, vParam1, fParam2, func_61(iParam0));
		func_247(iParam3, iParam0, 0x00000000);
	}
}

void func_247(int iParam0, int iParam1, int iParam2)
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
				Global_1B416.f_7FE8.f_12C1 = func_203();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_254(iParam0);
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

void func_248(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_71(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_249(iParam0);
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

void func_249(int iParam0)
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

void func_250(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_249(iParam0);
	func_64(iParam0, 0x00000000);
}

int func_251(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_252(vParam0, iParam1, 0x00000001);
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

int func_252(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_253(iVar0) || iParam2 == 0x00000000)
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

bool func_253(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_254(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

void func_255()
{
	if (iLocal_54 == 0x00000000)
	{
		func_259(0x00000001, 0x00000000);
		func_259(0x00000002, 0x00000000);
		func_259(0x00000007, 0x00000000);
		func_259(0x00000008, 0x00000000);
		func_259(0x00000009, 0x00000000);
		func_259(0x0000000A, 0x00000000);
		func_259(0x00000004, 0x00000000);
		func_259(0x0000000C, 0x00000000);
		unk_0xF63400DBE3303D26("MarineGroupHash", &iLocal_44);
		unk_0x0E2400AB9174FA81(0x00000005, iLocal_44, 0x6F0783F5);
		unk_0x0E2400AB9174FA81(0x00000005, 0xE3D976F3, 0x6F0783F5);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_44, 0xE3D976F3);
		unk_0x0E2400AB9174FA81(0x00000001, 0xE3D976F3, iLocal_44);
		unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_44);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_44, 0xA49E591C);
		unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, 0xE3D976F3);
		unk_0x0E2400AB9174FA81(0x00000001, 0xE3D976F3, 0xA49E591C);
		if (func_272())
		{
			if (Global_16AF9 == 0x00000001)
			{
				if (func_258() == 0x00000000)
				{
					func_257(vLocal_118, fLocal_122, 0x00000001, 0x00000000);
					iLocal_75 = 0x00000001;
					iLocal_54 = 0x00000000;
					iLocal_28 = 0x00000003;
				}
				if (func_258() == 0x00000001)
				{
					func_257(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 0x00000001, 0x00000000);
					iLocal_75 = 0x00000001;
					iLocal_54 = 0x00000000;
					iLocal_28 = 0x00000004;
				}
				if (func_258() == 0x00000002)
				{
					func_256();
				}
			}
			else
			{
				if (func_258() == 0x00000000)
				{
					func_257(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 0x00000001, 0x00000000);
					iLocal_75 = 0x00000001;
					iLocal_54 = 0x00000000;
					iLocal_28 = 0x00000002;
				}
				if (func_258() == 0x00000001)
				{
					func_257(vLocal_118, fLocal_122, 0x00000001, 0x00000000);
					iLocal_75 = 0x00000001;
					iLocal_54 = 0x00000000;
					iLocal_28 = 0x00000003;
				}
				if (func_258() == 0x00000002)
				{
					func_257(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 0x00000001, 0x00000000);
					iLocal_75 = 0x00000001;
					iLocal_54 = 0x00000000;
					iLocal_28 = 0x00000004;
				}
			}
		}
		else if (func_28(0x00000000))
		{
			func_257(-1565.084f, 2780.813f, 16.4022f, 53.6086f, 0x00000001, 0x00000000);
			iLocal_75 = 0x00000001;
			iLocal_54 = 0x00000000;
			iLocal_28 = 0x00000002;
		}
		else
		{
			iLocal_54 = 0x00000000;
			iLocal_28 = 0x00000002;
		}
	}
}

void func_256()
{
	iLocal_76 = 0x00000000;
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0x00000000);
	}
	unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 1747.04f, 3267.456f, 40.246f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 229.0887f);
	if (unk_0xC844350D5D58C99A(iLocal_34))
	{
		unk_0xA954465BA6FDEFE2(&iLocal_34);
	}
	if (!unk_0xC844350D5D58C99A(iLocal_34))
	{
		unk_0x523BCC9DC80CD82F(joaat("cargobob"));
		while (!unk_0xB87F6CF6E5628C67(joaat("cargobob")))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iLocal_34 = unk_0x122AAB0B1D6F55AD(joaat("cargobob"), 1740.852f, 3263.161f, 40.2743f, 280.3712f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x152BCACCF710B36E(iLocal_34, 0x00000000, 0x00000001);
		unk_0x152BCACCF710B36E(iLocal_34, 0x00000001, 0x00000001);
		unk_0x71EDC33E5A423750(iLocal_34, 0x00000002);
		unk_0xD5A0214B20BCBAD8(iLocal_34, 0x00000001);
		unk_0x1E9649458B15960F(iLocal_34, 0x00000001);
		unk_0xB422445CBCD0AEFB(iLocal_34, 0x00000000);
		func_103(iLocal_34, 0x00000000);
	}
	if (unk_0x757EF87A33649210())
	{
		unk_0x90CECE08EA8E77CC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
	}
	unk_0x2FB9A57162E54BAB(0f);
	if (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x82E51BCA72537B6C(0x00000320);
	}
	while (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x82E51BCA72537B6C(0x00000320);
		SYSTEM::WAIT(0x00000000);
	}
	func_30();
}

void func_257(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_272())
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
		func_227(0x00000001);
	}
}

int func_258()
{
	if (!Global_181B8 == 0x0000000A && !Global_181B8 == 0x00000009)
	{
		return 0x00000000;
	}
	return Global_181B8.f_2;
}

void func_259(int iParam0, bool bParam1)
{
	unk_0xB284873E9BA151DE(iParam0, !bParam1);
	unk_0x15EA7F4313456B1D(iParam0, bParam1);
}

void func_260()
{
	if (!func_272())
	{
		if (iLocal_54 == 0x00000000)
		{
			iLocal_28 = 0x00000001;
		}
	}
	else
	{
		iLocal_54 = 0x00000000;
		iLocal_28 = 0x00000001;
	}
}

void func_261()
{
	if (unk_0xC844350D5D58C99A(iLocal_34))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_34, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_34, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_34))
					{
						if (func_262(unk_0x16F2683693E537C9(), iLocal_34) == 0xFFFFFFFF)
						{
							unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
						}
					}
				}
			}
		}
	}
}

int func_262(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, 0xFFFFFFFF, 0x00000000) == iParam0)
			{
				return 0xFFFFFFFF;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000000, 0x00000000) == iParam0)
			{
				return 0x00000000;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000001, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000002, 0x00000000) == iParam0)
			{
				return 0x00000002;
			}
		}
	}
	return 0xFFFFFFFE;
}

void func_263()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (iLocal_28 == 0x00000002 || iLocal_28 == 0x00000003)
		{
			if (func_236(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000003, 0x000000C8, 0x00000000) || iLocal_86 == 0x00000001)
			{
				unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
				unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
			}
		}
		if (iLocal_28 == 0x00000004)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_118, 0x00000001) > 1000f)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
	}
}

void func_264()
{
}

void func_265()
{
	if (iLocal_98 == 0x00000000)
	{
		iLocal_64 = 0x00000000;
		while (iLocal_64 <= 0x0000000C)
		{
			if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_64]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_64]))
				{
					if (unk_0xE115347EA59F7B86(iLocal_32[iLocal_64], unk_0x16F2683693E537C9()))
					{
						if (func_2(iLocal_32[iLocal_64], unk_0x16F2683693E537C9(), 0x00000001) < 40f)
						{
							if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
							{
								iLocal_98 = 0x00000001;
							}
						}
						if (func_2(iLocal_32[iLocal_64], unk_0x16F2683693E537C9(), 0x00000001) < 25f)
						{
							if (func_241(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed"))
							{
								if (func_270(iLocal_32[iLocal_64], 0x00000006))
								{
									iLocal_98 = 0x00000001;
								}
							}
						}
					}
				}
			}
			iLocal_64++;
		}
	}
	if (iLocal_88 == 0x00000000)
	{
		if (func_20() == 0x00000002)
		{
			func_149(&uLocal_198, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			iLocal_88 = 0x00000001;
		}
	}
	if (iLocal_85 == 0x00000000)
	{
		iLocal_71 = 0x00000000;
		while (iLocal_71 <= 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_71]))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_71]))
				{
					if (iLocal_99 == 0x00000000 && iLocal_100 == 0x00000000)
					{
						if (!func_125())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_71], 0x00000001) < 25f)
								{
									if (unk_0xE115347EA59F7B86(iLocal_32[iLocal_71], unk_0x16F2683693E537C9()))
									{
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_242(0x00000000))
										{
											if (func_241(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed"))
											{
												if (unk_0xC844350D5D58C99A(iLocal_32[0x00000000]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000000]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000000], 0x00000001) < 30f)
														{
															func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000000], "ARMY_Guard01", 0x00000000, 0x00000001);
														}
													}
												}
												if (unk_0xC844350D5D58C99A(iLocal_32[0x00000001]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000001]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000001], 0x00000001) < 30f)
														{
															func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000001], "ARMY_Guard01", 0x00000000, 0x00000001);
														}
													}
												}
												if (func_148(&uLocal_198, "ARMYAUD", "ARMY_WRN1", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
												{
													iLocal_66 = unk_0x1C0640BA9A7327B3();
													iLocal_65 = unk_0x1C0640BA9A7327B3();
													iLocal_99 = 0x00000001;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_100 == 0x00000000 && iLocal_99 == 0x00000000)
					{
						if (!func_125())
						{
							if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
							{
								if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_71], 0x00000001) < 25f)
								{
									if (unk_0xE115347EA59F7B86(iLocal_32[iLocal_71], unk_0x16F2683693E537C9()))
									{
										if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
										{
											if (func_241(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || func_242(0x00000000))
											{
												if (unk_0xC844350D5D58C99A(iLocal_32[0x00000000]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000000]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000000], 0x00000001) < 30f)
														{
															func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000000], "ARMY_Guard01", 0x00000000, 0x00000001);
														}
													}
												}
												if (unk_0xC844350D5D58C99A(iLocal_32[0x00000001]))
												{
													if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000001]))
													{
														if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000001], 0x00000001) < 30f)
														{
															func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000001], "ARMY_Guard01", 0x00000000, 0x00000001);
														}
													}
												}
												if (func_148(&uLocal_198, "ARMYAUD", "ARMY_WRN1", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
												{
													iLocal_66 = unk_0x1C0640BA9A7327B3();
													iLocal_65 = unk_0x1C0640BA9A7327B3();
													iLocal_100 = 0x00000001;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_99 == 0x00000001 || iLocal_100 == 0x00000001)
					{
						if (iLocal_98 == 0x00000000 && iLocal_85 == 0x00000000)
						{
							if (iLocal_117 == 0x00000000)
							{
								if (unk_0x1C0640BA9A7327B3() > iLocal_65 + 8000)
								{
									if (!func_125())
									{
										if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
										{
											if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_71], 0x00000001) < 25f)
											{
												if (unk_0xE115347EA59F7B86(iLocal_32[iLocal_71], unk_0x16F2683693E537C9()))
												{
													if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_242(0x00000000))
													{
														if (func_241(unk_0x16F2683693E537C9()) != joaat("weapon_unarmed"))
														{
															if (unk_0xC844350D5D58C99A(iLocal_32[0x00000000]))
															{
																if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000000]))
																{
																	if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000000], 0x00000001) < 30f)
																	{
																		func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000000], "ARMY_Guard01", 0x00000000, 0x00000001);
																	}
																}
															}
															if (unk_0xC844350D5D58C99A(iLocal_32[0x00000001]))
															{
																if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000001]))
																{
																	if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000001], 0x00000001) < 30f)
																	{
																		func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000001], "ARMY_Guard01", 0x00000000, 0x00000001);
																	}
																}
															}
															if (func_148(&uLocal_198, "ARMYAUD", "ARMY_WRN1a", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
															{
																iLocal_65 = unk_0x1C0640BA9A7327B3();
																iLocal_117 = 0x00000001;
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (unk_0x1C0640BA9A7327B3() > iLocal_66 + 8000)
							{
								if (!func_125())
								{
									if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
									{
										if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_71], 0x00000001) < 25f)
										{
											if (unk_0xE115347EA59F7B86(iLocal_32[iLocal_71], unk_0x16F2683693E537C9()))
											{
												if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
												{
													if (func_241(unk_0x16F2683693E537C9()) == joaat("weapon_unarmed") || func_242(0x00000000))
													{
														if (unk_0xC844350D5D58C99A(iLocal_32[0x00000000]))
														{
															if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000000]))
															{
																if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000000], 0x00000001) < 30f)
																{
																	func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000000], "ARMY_Guard01", 0x00000000, 0x00000001);
																}
															}
														}
														if (unk_0xC844350D5D58C99A(iLocal_32[0x00000001]))
														{
															if (!unk_0xEB6A8945D1AC98A1(iLocal_32[0x00000001]))
															{
																if (func_2(unk_0x16F2683693E537C9(), iLocal_32[0x00000001], 0x00000001) < 30f)
																{
																	func_149(&uLocal_198, 0x00000004, iLocal_32[0x00000001], "ARMY_Guard01", 0x00000000, 0x00000001);
																}
															}
														}
														if (iLocal_117 == 0x00000000)
														{
															if (func_148(&uLocal_198, "ARMYAUD", "ARMY_WRN1a", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
															{
																iLocal_66 = unk_0x1C0640BA9A7327B3();
																iLocal_117 = 0x00000001;
															}
														}
														if (iLocal_110 == 0x00000000)
														{
															iLocal_70 = unk_0x1C0640BA9A7327B3();
															iLocal_110 = 0x00000001;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iLocal_71++;
		}
	}
	if (unk_0x1C0640BA9A7327B3() > iLocal_56 + 12000)
	{
		if (iLocal_85 == 0x00000001 || iLocal_98 == 0x00000001)
		{
			if (!unk_0xD17F06053799A7CA() || !unk_0x04E6B3EAA8742BFA())
			{
				if (!func_125())
				{
					if (func_269())
					{
						iLocal_60 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000006);
						if (iLocal_60 == 0x00000000)
						{
							func_266(func_268(), "OVER_THERE", 0x00000009);
							iLocal_56 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_60 == 0x00000001)
						{
							func_266(func_268(), "PROVOKE_TRESSPASS", 0x00000009);
							iLocal_56 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_60 == 0x00000002)
						{
							func_266(func_268(), "UP_THERE", 0x00000009);
							iLocal_56 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_60 == 0x00000003)
						{
							func_266(func_268(), "suspect_spotted", 0x00000009);
							iLocal_56 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_60 == 0x00000004)
						{
							func_266(func_268(), "GENERIC_INSULT_HIGH", 0x00000009);
							iLocal_56 = unk_0x1C0640BA9A7327B3();
						}
						else if (iLocal_60 == 0x00000005)
						{
							func_266(func_268(), "GENERIC_INSULT_MED", 0x00000009);
							iLocal_56 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
		}
	}
}

void func_266(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_267(iParam2), 0x00000001);
}

int func_267(int iParam0)
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

int func_268()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xE51E576EA6B739AC(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 30f, 0x00000000, 0x00000001, &iVar0, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	iLocal_58 = 0x00000000;
	while (iLocal_58 <= 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_58]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_58]))
			{
				if (iVar0 == iLocal_32[iLocal_58])
				{
					return iLocal_32[iLocal_58];
				}
			}
		}
		iLocal_58++;
	}
	return 0x00000000;
}

int func_269()
{
	iLocal_59 = 0x00000000;
	while (iLocal_59 <= 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(iLocal_32[iLocal_59]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_32[iLocal_59]))
			{
				if (func_2(unk_0x16F2683693E537C9(), iLocal_32[iLocal_59], 0x00000001) < 25f)
				{
					return 0x00000001;
				}
			}
		}
		iLocal_59++;
	}
	return 0x00000000;
}

int func_270(int iParam0, int iParam1)
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

void func_271()
{
	if (unk_0xDA8F5DDC86FE3C26("ARMY_HELI"))
	{
		if (unk_0x8ED9A0095B69A728("ARMY_HELI"))
		{
			unk_0x2723524E448F4BDD("ARMY_HELI", 0x00000000);
		}
	}
}

int func_272()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_273()
{
	func_274(0x00000049);
	unk_0xD7992BEF7A9D109E("DOCKP2B", 0x00000000);
	while (!unk_0x67C1D9E5B91B2E37(0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
	}
	unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
	unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
	unk_0x15EA7F4313456B1D(0x00000004, 0x00000000);
	unk_0xE342F209E49C5314(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, 0x00000000, 0x00000001);
	unk_0xE342F209E49C5314(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, 0x00000000, 0x00000001);
	unk_0xE342F209E49C5314(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0x00000000, 0x00000001);
	iLocal_50 = unk_0x7D6CA5F52B3748BF(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_52 = unk_0x7D6CA5F52B3748BF(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0x536F1BE96C726C4B(-1876.8f, 2806.1f, 32.3f, 8f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x536F1BE96C726C4B(-1857.7f, 2797.9f, 32.4f, 8f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x7352ACF3368DF65F("WantedMusicOnMission", 0x00000001);
	unk_0xAB8E2DDC7AF955E0(joaat("buzzard"), 0x00000001);
	unk_0xE342F209E49C5314(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0x00000000);
	unk_0xE342F209E49C5314(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0x00000000);
}

void func_274(int iParam0)
{
	Global_17187 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000048:
			func_239(0x00000002);
			func_239(0x00000004);
			break;
		
		case 0x00000049:
			func_239(0x00000000);
			func_239(0x00000001);
			func_239(0x00000007);
			break;
		
		case 0x0000005C:
			func_239(0x0000000A);
			func_239(0x00000009);
			func_239(0x0000000D);
			func_239(0x00000006);
			break;
		
		case 0x00000044:
			func_239(0x0000000B);
			break;
		
		case 0x0000004E:
			func_239(0x0000000E);
			break;
		
		case 0x0000004F:
			func_239(0x00000003);
			break;
		
		default:
			break;
	}
}

void func_275()
{
	func_276();
	unk_0xAB8E2DDC7AF955E0(joaat("cargobob"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("buzzard"), 0x00000000);
	unk_0x81AF65E52132C1B4(0x00000001);
	unk_0xE342F209E49C5314(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0x00000001, 0x00000001);
	unk_0xE342F209E49C5314(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0x00000001, 0x00000001);
	unk_0x2B25B48028758FE8();
	unk_0x2952D66A502EA873(iLocal_50, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_51, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_52, 0x00000000);
	func_259(0x00000001, 0x00000001);
	func_259(0x00000002, 0x00000001);
	func_259(0x00000007, 0x00000001);
	func_259(0x00000008, 0x00000001);
	func_259(0x00000009, 0x00000001);
	func_259(0x0000000A, 0x00000001);
	func_259(0x00000004, 0x00000001);
	func_259(0x0000000C, 0x00000001);
	func_117();
	if (unk_0xDA8F5DDC86FE3C26("ARMY_GUARD"))
	{
		if (!unk_0x8ED9A0095B69A728("ARMY_GUARD"))
		{
			unk_0x2723524E448F4BDD("ARMY_GUARD", 0x00000001);
		}
	}
	unk_0x7B35981153AECDBE("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0x00000001);
	unk_0x5BED90AC1E2BC558("AZ_AFB_ALARM_SPEECH", 0x00000000, 0x00000000);
	unk_0x7352ACF3368DF65F("PoliceScannerDisabled", 0x00000000);
	unk_0x7352ACF3368DF65F("WantedMusicOnMission", 0x00000000);
	iLocal_55 = 0x00000000;
	while (iLocal_55 <= 0x0000000C)
	{
		func_118(&(Local_53[iLocal_55 /*8*/]));
		iLocal_55++;
	}
	if (unk_0xDA8F5DDC86FE3C26("ARMY_HELI"))
	{
		if (!unk_0x8ED9A0095B69A728("ARMY_HELI"))
		{
			unk_0x2723524E448F4BDD("ARMY_HELI", 0x00000001);
		}
	}
	unk_0x51732B934211201A(iLocal_44);
	unk_0x10FAF14A60A0DBE1();
}

void func_276()
{
	Global_17187 = 0x00000000;
}

void func_277()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_28(0x00000000))
	{
		if (!func_278())
		{
			iVar0 = func_27();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_14(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_19();
		}
	}
}

int func_278()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

