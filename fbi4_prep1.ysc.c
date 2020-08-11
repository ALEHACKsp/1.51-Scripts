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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
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
	var uLocal_126 = 15;
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
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	vector3 vLocal_185 = { 0f, 0f, 0f };
	vector3 vLocal_186 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
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
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 0x00000003;
	iLocal_41 = 0x00000015;
	fLocal_47 = -1f;
	vLocal_54 = { 0f, 0f, 0f };
	iLocal_55 = 0xFFFFFFFF;
	sLocal_180 = "FBIPRA";
	vLocal_185 = { 0f, 0f, 0f };
	vLocal_186 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = 0xFFFFFFFF;
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000013))
	{
		sLocal_179 = 0x00000000;
		func_387();
		func_375();
	}
	func_358();
	if (func_357())
	{
		func_356(918.8851f, -269.789f, 67.2145f, 68.2149f, 0x00000001, 0x00000000);
	}
	func_342();
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_TrT", 0x00000000);
		if (func_341(unk_0x16F2683693E537C9()))
		{
			func_337();
			func_333();
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			unk_0xD60411959D5D930B(0.8f);
			switch (iLocal_68)
			{
				case 0x00000000:
					func_270();
					break;
				
				case 0x00000001:
					func_239();
					break;
				
				case 0x00000002:
					func_221();
					break;
				
				case 0x00000003:
					func_108();
					break;
				
				case 0x00000004:
					func_39();
					break;
				
				case 0x00000005:
					func_1();
					break;
			}
			if (iLocal_68 != 0x00000005)
			{
				if (iLocal_68 >= 0x00000000 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0x00000000:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(0x00000001);
			func_38();
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (func_37(iVar0) && unk_0x134B62B726CEC8E6(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 0x00000002);
				}
			}
			if (!unk_0xEA6BC48857E0AC4C(sLocal_179))
			{
				func_34(sLocal_179);
			}
			else
			{
				func_18(0x00000000);
			}
			iLocal_69 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 30f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_375();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_199);
	func_9(&iLocal_201);
	func_9(&iLocal_200);
	func_8(&Local_197);
	func_8(&Local_198);
	func_9(&iLocal_202);
	func_3();
}

void func_3()
{
	func_7(&(Local_45[0x00000000 /*11*/].f_4));
	func_7(&(Local_45[0x00000001 /*11*/].f_4));
	func_6(&iLocal_43);
	func_5(&(Local_45[0x00000000 /*11*/]), 0x00000001, 0x00000000, 0x00000001);
	func_5(&(Local_45[0x00000001 /*11*/]), 0x00000001, 0x00000000, 0x00000001);
	func_4(&(Local_46[iLocal_48 /*25*/].f_11), 0x00000000);
	unk_0x51732B934211201A(iLocal_40);
	unk_0x8D17794CE3273D70("missfbi4prepp1");
	unk_0xDD465543E2028AEA("missfbi4prepp1_garbageman");
}

void func_4(int iParam0, bool bParam1)
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

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_6(int iParam0)
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

void func_7(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_8(int iParam0)
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

void func_9(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_37(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_10(unk_0x16F2683693E537C9()))
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
			if (func_10(unk_0x16F2683693E537C9()))
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

int func_10(int iParam0)
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

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(vector3 vParam0, float fParam1)
{
	func_13(&(Global_19AE3.f_B4A), vParam0, fParam1);
}

void func_13(var uParam0, vector3 vParam1, var uParam2)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_14(vector3 vParam0, float fParam1)
{
	if (func_15(Global_12C3E, 0f, 0f, 0f, 0x00000000))
	{
		Global_12C3E = { vParam0 };
		Global_12C41 = fParam1;
	}
}

bool func_15(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_16()
{
	if (Global_181B8 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_17()
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

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_33(0x00000000))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_23(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_20(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_20(var uParam0, int iParam1)
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
			if (!func_22(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_21(&(uParam0->f_8F8[iVar0]));
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

void func_21(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_22(int iParam0, var uParam1, float fParam2)
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
			return func_22(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_22(0x00000008, uParam1, fParam2);
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

void func_23(int iParam0, bool bParam1)
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

void func_24()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_25())
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
			switch (func_25())
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

int func_25()
{
	func_26();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_26()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_30(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_29(unk_0x16F2683693E537C9());
			if (func_28(iVar0) && (!func_27(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_28(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_27(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_31(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_32()
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

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0x00000000);
}

void func_35(char* sParam0)
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

void func_36(int iParam0, int iParam1)
{
	Global_181B8.f_16[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
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

void func_38()
{
	func_7(&iLocal_182);
}

void func_39()
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0x00000000:
			iLocal_69 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!func_107(unk_0x16F2683693E537C9(), vLocal_186, 270f))
			{
				iLocal_69 = 0x00000002;
			}
			else if (!func_106("PRA_LEVAREA", 0x00000000, 0x00000000))
			{
				func_105("PRA_LEVAREA", 0x0000EA60, 0x00000000);
			}
			break;
		
		case 0x00000002:
			iVar0 = func_25();
			if (func_106("PRA_LEVAREA", 0x00000000, 0x00000000))
			{
				unk_0x790015DC92C918E2();
			}
			if (iVar0 == 0x00000000)
			{
				if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				func_53(func_57(iVar0), 0xDAEE9071, 0xDAEE9071, 0x00000005, 0x00000000, iVar0, func_56(iVar0), 0x00000000, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0x00000000);
				func_63();
				func_58();
			}
			break;
		
		case 0x00000003:
			func_40(0x00000001, 0x00000001, 0x00000001);
			iLocal_69 = 0x00000002;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0x00000000, 0x00000000, iParam2, 0x00000001);
	if (iParam0 == 0x00000001)
	{
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (iParam1 == 0x00000001)
	{
		func_41(0x000001F4, 0x00000000);
	}
}

void func_41(int iParam0, bool bParam1)
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

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	unk_0xBC03DF6093E8E71F(iVar0, 0x00000000);
	unk_0x98E4DC66A651C9FA(iVar0, bParam3, 0x00000000);
	func_43(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
		if ((iLocal_37 != 0x00000000 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x16F2683693E537C9()))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iLocal_37, 0x00000000))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_37, 0x00000000);
				}
			}
		}
	}
	if (func_341(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_52(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_51())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_50(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_52(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_50(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_48(unk_0xD803B885F5E47A62())) && !func_45(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_44()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_48(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_46(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1407E9;
}

int func_48(int iParam0)
{
	if (func_45(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_49())
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

bool func_49()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_50(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_51()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_52(int iParam0)
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

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam8 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam9 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam10 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam11 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam6 == iParam5)
	{
		return 0x00000000;
	}
	if (((iParam5 != 0x00000090 && iParam5 != 0x00000000) && iParam5 != 0x00000001) && iParam5 != 0x00000002)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_88 < 0x00000009)
	{
		Var0 = uParam0;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_9 = iParam3;
		if (Global_1B416.f_1E03.f_38F == Var0)
		{
			Global_1B416.f_1E03.f_38F = 0xFFFFFFFF;
		}
		Var0.f_3 = func_55(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0x00000000;
		unk_0x5D96D8530B3D0904(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_E = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000D);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000001);
		if (iParam4 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000A);
		}
		Global_1B416.f_1E03[Global_1B416.f_1E03.f_88 /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_88++;
		func_54(iParam5);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_28(iParam0))
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

int func_55(int iParam0)
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

int func_56(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		return 0x00000009;
	}
	return 0x00000008;
}

int func_57(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		return 0xD565A07E;
	}
	return 0xB8971F9F;
}

void func_58()
{
	unk_0x790015DC92C918E2();
	func_61();
	func_59(0x00000000, 0x00000000);
	func_375();
}

void func_59(bool bParam0, int iParam1)
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
		if ((func_33(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_60(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_33(0x00000000))
	{
		iVar0 = func_32();
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

int func_60(int iParam0)
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

void func_61()
{
	Global_4CD7 = 0x00000000;
	func_62();
}

void func_62()
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

void func_63()
{
	func_66(0x00000000, 0xFFFFFFFF);
	func_65(0x00000000, 0x0000013E);
	func_64(0x00000001, 0x00000140);
}

void func_64(bool bParam0, int iParam1)
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

void func_65(int iParam0, int iParam1)
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

void func_66(int iParam0, int iParam1)
{
	Global_F053 = iParam0;
	Global_F054 = iParam1;
}

int func_67(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0x00000000:
			if (func_103())
			{
				if ((func_102(0x0000004A) || func_102(0x0000004B)) && func_101())
				{
					if (func_25() == 0x00000000)
					{
						func_100(0x00000001);
						func_99(0x0000002E, 0x00000001);
						*uParam0 = 0x00000004;
					}
					else
					{
						func_98(uParam2, 0x00000000, 0x00000000, "MICHAEL", 0x00000000, 0x00000001);
						if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 0x00000009, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
						{
							*sParam1 = { func_81(0x00000001) };
							func_99(0x0000002E, 0x00000001);
							*uParam0 = 0x00000001;
						}
					}
				}
				else if (func_25() == 0x00000000)
				{
					func_100(0x00000000);
					*uParam0 = 0x00000004;
				}
				else
				{
					func_98(uParam2, 0x00000000, 0x00000000, "MICHAEL", 0x00000000, 0x00000001);
					if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 0x00000009, 0x00000001, 0x00000000, 0x00000000, 0x00000000))
					{
						*sParam1 = { func_81(0x00000000) };
						*uParam0 = 0x00000001;
					}
				}
			}
			else
			{
				func_74();
				*uParam0 = 0x00000004;
			}
			break;
		
		case 0x00000001:
			if (func_73())
			{
				if (unk_0x40EFDB96B3112BA7() >= 0x00000000)
				{
					func_72("FBIPRAU", sParam1);
					func_71(0x00000001);
					*uParam0 = 0x00000003;
				}
			}
			if (func_70())
			{
				*uParam0 = 0x00000003;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			if (!func_73())
			{
				if (!func_69(0x00000000))
				{
					if (!func_102(0x00000003) && func_103())
					{
						func_68(0x00000032, 0x00000000);
					}
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_69(int iParam0)
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

int func_70()
{
	if (Global_5176 == 0x00000001 || Global_553D == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_71(bool bParam0)
{
	unk_0x5CEB4DB888A62073(bParam0);
	if (bParam0)
	{
	}
}

void func_72(char* sParam0, char* sParam1)
{
	if (unk_0x1EE04CEA36EF313B())
	{
		Global_517E = 0x00000001;
		StringCopy(&Global_5185, sParam0, 24);
		StringCopy(&Global_517F, sParam1, 24);
	}
}

int func_73()
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

void func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (func_78(iVar1, 0x00000000))
			{
				return;
			}
		}
		iVar0++;
	}
	func_75(func_76(), 0x00000000, func_25(), func_97(), 0x00000009, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0x00000000))
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
		Var0.f_3 = func_55(iParam1);
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
		func_54(iParam2);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_76()
{
	switch (func_77())
	{
		case 0x00000021:
			switch (func_25())
			{
				case 0x00000000:
					return 0x91DDCDED;
					break;
				
				case 0x00000001:
					return 0xD565A07E;
					break;
				
				case 0x00000002:
					return 0xB8971F9F;
					break;
			}
			break;
		
		case 0x00000022:
			switch (func_25())
			{
				case 0x00000000:
					return 0x51EACDAC;
					break;
				
				case 0x00000001:
					return 0x1FA5BF80;
					break;
				
				case 0x00000002:
					return 0x0E555E76;
					break;
			}
			break;
		
		case 0x00000024:
			switch (func_25())
			{
				case 0x00000000:
					return 0x229D4331;
					break;
				
				case 0x00000001:
					return 0x2B6718A6;
					break;
				
				case 0x00000002:
					return 0x36412C68;
					break;
			}
			break;
		
		case 0x00000025:
			switch (func_25())
			{
				case 0x00000000:
					return 0x047165BB;
					break;
				
				case 0x00000001:
					return 0xB8741010;
					break;
				
				case 0x00000002:
					return 0x2FC37C7D;
					break;
			}
			break;
	}
	return 0xFFFFFFFF;
}

int func_77()
{
	return Global_12C54;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_79(iVar0) != iParam0)
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

int func_79(int iParam0)
{
	if (iParam0 > 0x00000003)
	{
		return 0x00000000;
	}
	if (iParam0 == func_25())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_177DE[func_80(iParam0)];
}

int func_80(int iParam0)
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

struct<4> func_81(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
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
		switch (func_25())
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

bool func_82(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_95(uParam0, iParam1, sParam3, iParam7, iParam8, 0x00000000);
	Global_1A12 = iParam2;
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514A = 0x00000001;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	if (iParam6 == 0x00000001)
	{
		Global_5151 = 0x00000001;
	}
	else
	{
		Global_5151 = 0x00000000;
	}
	Global_280001 = 0x00000000;
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
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
					func_62();
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
		if (func_94(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_93();
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
				func_92();
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
				if (func_91())
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
			if (func_51())
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
			func_90();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_89();
		func_84();
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
		func_62();
	}
	return 0x00000000;
}

void func_84()
{
	if (!func_85())
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

int func_85()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_88())
	{
		return 0x00000000;
	}
	if (func_86(unk_0xD803B885F5E47A62()))
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

bool func_86(int iParam0)
{
	return func_87(iParam0, 0x00000014);
}

bool func_87(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_88()
{
	return 0xFFFFFFFF;
}

void func_89()
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

void func_90()
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

int func_91()
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

void func_92()
{
	if (func_27(0x0000000E))
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
		Global_4C1E = func_25();
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

void func_93()
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

bool func_94(int iParam0, int iParam1)
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_96()
{
	char* sVar0;
	
	switch (func_77())
	{
		case 0x00000021:
			switch (func_25())
			{
				case 0x00000000:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 0x00000001:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 0x00000002:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 0x00000022:
			switch (func_25())
			{
				case 0x00000000:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 0x00000001:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 0x00000002:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 0x00000024:
			switch (func_25())
			{
				case 0x00000000:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 0x00000001:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 0x00000002:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 0x00000025:
			switch (func_25())
			{
				case 0x00000000:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 0x00000001:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 0x00000002:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_97()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0x00000000:
			iVar0 = 0x00000005;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000009;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000008;
			break;
	}
	return iVar0;
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_99(int iParam0, int iParam1)
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

void func_100(bool bParam0)
{
	if (bParam0)
	{
		func_75(0x5B11AD95, 0x00000000, func_25(), 0x00000017, 0x00000003, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
	}
	else if (!func_102(0x00000003))
	{
		func_75(0xF29B7A55, 0x00000000, func_25(), 0x00000017, 0x00000003, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000032, 0xFFFFFFFF, 0x00000000);
	}
	else
	{
		func_75(0xF29B7A55, 0x00000000, func_25(), 0x00000017, 0x00000003, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
	}
}

int func_101()
{
	if ((func_102(0x00000029) && func_102(0x00000003)) && func_102(0x00000015))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_102(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000021;
	while (iVar1 <= 0x00000025)
	{
		if (func_102(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_104(0x0000002D))
	{
		iVar0++;
	}
	if (iVar0 == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_104(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

bool func_106(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

bool func_107(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

void func_108()
{
	func_215(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0x00000000, 0x41000000);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0x00000000:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					if (func_37(iLocal_200))
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_200, 0x00000000))
						{
							func_121("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_120(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (func_113(iLocal_200, vLocal_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 0x41000000))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					func_99(0x0000002E, 0x00000001);
					func_63();
					func_110(0x00000000);
				}
			}
			break;
		
		case 0x00000003:
			if (func_37(Local_199))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_199, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_199, 0xFFFFFFFF);
				}
				else
				{
					func_109(Local_199, vLocal_186, 126.0705f, 0x00000000, 0x00000001);
					func_40(0x00000001, 0x00000001, 0x00000001);
					iLocal_69 = 0x00000001;
				}
			}
			break;
	}
}

int func_109(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = 0x00000000;
	if (func_10(iParam0))
	{
		if (bParam3 == 0x00000001)
		{
			fVar1 = 0f;
			bVar0 = unk_0xE82754C349C7B581(vParam1, &fVar1, 0x00000000, 0x00000000);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, iParam4);
		unk_0xD8F6A53F4799FAFE(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_110(bool bParam0)
{
	func_111(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0x00000000)
	{
		iLocal_68 = (iLocal_178 - 0x00000001);
	}
	iLocal_181 = 0x00000000;
	iLocal_69 = 0x00000000;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
	}
}

int func_112()
{
	if (func_103())
	{
		if ((func_102(0x0000004A) || func_102(0x0000004B)) && func_101())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_113(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)
{
	float fVar0;
	
	if ((iParam3 == 0x00000001 || iParam3 == 0x00000002) || iParam3 == 0x00000003)
	{
		if (iParam4 == 0x00000000)
		{
			if (func_37(iParam0))
			{
				if (!unk_0x377BE9A1BF38C7CE(iParam0))
				{
					func_121(func_119(func_77()), iParam9);
				}
			}
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, fParam10, fParam10, 2f, 0x00000000, 0x00000001, 0x00000002))
			{
				unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, fParam10, fParam10, 2f, 0x00000001, 0x00000001, 0x00000002);
				if (func_106(func_119(func_77()), 0x00000000, 0x00000000))
				{
					unk_0x2F23E8033F1ADDD9(func_119(func_77()));
				}
				*iParam5 = 0x00000001;
				func_117(iParam2, vParam1, 0x00000001);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_107(unk_0x16F2683693E537C9(), vParam1, fVar0))
					{
						*iParam5 = 0x00000000;
						func_116(0x40400000, 0x00000001);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (unk_0x5A91F08DF773C39D(iParam0, vParam1, fParam10, fParam10, 2f, 0x00000000, 0x00000001, 0x00000002))
	{
		if (*iParam7 == 0xFFFFFFFF)
		{
			unk_0x71EDC33E5A423750(iParam0, 0x00000002);
			return 0x00000001;
		}
		if (!*iParam8)
		{
			if (func_106(func_119(func_77()), 0x00000000, 0x00000000))
			{
				unk_0x790015DC92C918E2();
			}
			*iParam7 = unk_0x1C0640BA9A7327B3();
			*iParam8 = 0x00000001;
			unk_0x71EDC33E5A423750(iParam0, 0x00000002);
		}
		else if ((unk_0x1C0640BA9A7327B3() - *iParam7) > 0x00000BB8)
		{
			return 0x00000001;
		}
	}
	else
	{
		if (unk_0x9C7B8DC16535B879(iParam0) == 0x00000002)
		{
			unk_0x71EDC33E5A423750(iParam0, 0x00000001);
		}
		if (!*iParam6)
		{
			if (func_106(func_115(func_77(), 0x00000000), 0x00000000, 0x00000000))
			{
				unk_0x2F23E8033F1ADDD9(func_115(func_77(), 0x00000000));
			}
			if (!func_106(func_114(func_77()), 0x00000000, 0x00000000))
			{
				func_105(func_114(func_77()), 0x00001D4C, 0x00000000);
				*iParam6 = 0x00000001;
			}
		}
		*iParam5 = 0x00000001;
	}
	return 0x00000000;
}

char* func_114(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000021:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 0x00000022:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 0x0000004E:
			sVar0 = "PR_RETVEH";
			break;
		
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_115(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000021:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 0x00000022:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 0x0000004E:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_116(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000001;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (!unk_0x8B38C0DAEEDB5F9C(iVar0))
			{
				unk_0xE0C0351D5B931E37(iVar0, fParam0, iParam1, 0x00000000);
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (unk_0x4024663A44BC1535(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (unk_0x8B38C0DAEEDB5F9C(iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_117(int iParam0, vector3 vParam1, int iParam2)
{
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		*iParam0 = func_118(vParam1, 0x00000005, iParam2);
	}
}

int func_118(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x2A065371C9D96655(iVar0, iParam1);
	unk_0x516E63E474722206(iVar0, 1f);
	unk_0x661342B9651D16E2(iVar0, iParam2);
	return iVar0;
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000021:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 0x00000022:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 0x0000004E:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_120(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*iParam2 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_7(iParam0);
			if ((iParam3 == 0x00000001 || iParam3 == 0x00000002) || iParam3 == 0x00000003)
			{
				unk_0x790015DC92C918E2();
				func_105("LOSE_WANTED", 0x00001D4C, 0x00000000);
				*iParam2 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				unk_0x790015DC92C918E2();
				if ((iParam3 == 0x00000001 || iParam3 == 0x00000002) || iParam3 == 0x00000003)
				{
					func_121(func_115(func_77(), 0x00000000), iParam4);
					func_117(iParam0, vParam1, 0x00000001);
				}
				else if (iParam3 == 0x00000000 && !*iParam5)
				{
					func_105(func_114(func_77()), 0x00001D4C, 0x00000000);
					*iParam5 = 0x00000001;
				}
				*iParam2 = 0x00000000;
			}
			break;
	}
}

void func_121(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_105(sParam0, 0x00001D4C, 0x00000000);
		*iParam1 = 0x00000001;
	}
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				bLocal_28 = 0x00000000;
				func_40(0x00000001, 0x00000001, 0x00000001);
			}
			else if (func_149(0x00000001, vLocal_185, 0x00000000))
			{
				if (func_148())
				{
					func_147(0x00000021);
					unk_0xAB8E2DDC7AF955E0(joaat("trash"), 0x00000001);
					unk_0xAB8E2DDC7AF955E0(joaat("towtruck"), 0x00000001);
					unk_0xAB8E2DDC7AF955E0(joaat("s_m_y_garbage"), 0x00000001);
					iLocal_68 = 0x00000002;
					func_7(&iLocal_182);
					func_145(&uLocal_56, 0x00000000, 0x00000000);
					func_144(0x000000BE, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					unk_0xCD7D80FD792F9954("DRIVE", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
					return 0x00000001;
				}
				else if (((func_149(0x00000002, Local_199.f_1, Local_199.f_4) && func_149(0x00000003, Local_197.f_1, Local_197.f_4)) && func_149(0x00000004, Local_198.f_1, Local_198.f_4)) && func_141(0x00000000))
				{
					func_142();
					func_147(0x00000021);
					if (func_341(Local_197))
					{
						func_140(Local_197);
					}
					if (func_341(Local_198))
					{
						func_139(Local_198);
					}
					func_138(Local_199);
					if (func_341(Local_198) && func_341(Local_197))
					{
						func_127(iLocal_187, 0x00000001, 0x00000000, 0x00000001);
					}
					unk_0xAB8E2DDC7AF955E0(joaat("trash"), 0x00000001);
					unk_0xAB8E2DDC7AF955E0(joaat("towtruck"), 0x00000001);
					unk_0xAB8E2DDC7AF955E0(joaat("s_m_y_garbage"), 0x00000001);
					if (unk_0xC0E5DA578D275A41(Local_199) != 0x00000000)
					{
						iVar0 = unk_0xC0E5DA578D275A41(Local_199);
						unk_0xCD816869CA451988(0x00000001);
						func_7(&iVar0);
						unk_0xCD816869CA451988(0x00000000);
					}
					func_125(&iLocal_182, Local_199, 0x00000001);
					func_144(0x000000BE, 1244.338f, -339.3197f, 68.0823f);
					unk_0xCD7D80FD792F9954("DRIVE", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				if ((func_149(0x00000002, Local_199.f_1, Local_199.f_4) && func_149(0x00000003, Local_197.f_1, Local_197.f_4)) && func_149(0x00000004, Local_198.f_1, Local_198.f_4))
				{
					func_124(unk_0x16F2683693E537C9(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = 0x00000000;
					unk_0xCD7D80FD792F9954("DRIVE", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", 0x00000000);
					unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
					func_40(0x00000001, 0x00000001, 0x00000001);
				}
			}
			else
			{
				func_142();
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				if (func_149(0x00000002, Local_199.f_1, Local_199.f_4))
				{
					func_123();
					func_142();
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_199, 0xFFFFFFFF);
					bLocal_28 = 0x00000000;
					func_40(0x00000001, 0x00000001, 0x00000001);
				}
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				if (func_149(0x00000002, vLocal_186, Local_199.f_4))
				{
					func_123();
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_199, 0xFFFFFFFF);
					func_142();
					bLocal_28 = 0x00000000;
					func_40(0x00000001, 0x00000001, 0x00000001);
				}
			}
			else
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_123()
{
	if (iLocal_68 == 0x00000001)
	{
		func_140(Local_197);
		func_139(Local_198);
		func_138(Local_199);
		func_127(iLocal_187, 0x00000001, 0x00000000, 0x00000001);
	}
	iLocal_203 = 0x00000000;
	iLocal_195 = 0x00000000;
	iLocal_196 = 0x00000000;
	iLocal_191 = 0x00000000;
	iLocal_192 = 0x00000000;
	iLocal_193 = 0x00000000;
}

void func_124(int iParam0, vector3 vParam1, float fParam2)
{
	if (func_341(iParam0))
	{
		unk_0xA3BF0AA5A2608191(iParam0);
	}
	func_109(iParam0, vParam1, fParam2, 0x00000000, 0x00000001);
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		*iParam0 = func_126(iParam1, bParam2, 0x00000005);
	}
}

int func_126(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_10(iParam0))
	{
		iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
		unk_0x321E019A46034F39(iVar0, bParam1);
		unk_0x2A065371C9D96655(iVar0, iParam2);
		unk_0x516E63E474722206(iVar0, 1f);
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_41 = iParam0;
	bLocal_50 = iParam1;
	bLocal_49 = iParam2;
	bLocal_51 = iParam3;
	Local_45[0x00000000 /*11*/].f_1 = 0x00000000;
	Local_45[0x00000001 /*11*/].f_1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (iLocal_41 - 0x00000001))
	{
		Local_46[iVar0 /*25*/].f_12 = 0x00000000;
		iVar0++;
	}
	fLocal_47 = 0f;
	func_129();
	Local_45[0x00000001 /*11*/].f_7 = 0x00000003;
	Local_45[0x00000001 /*11*/].f_5 = 0x00000000;
	Local_45[0x00000001 /*11*/].f_A = 0x00000001;
	Local_45[0x00000001 /*11*/].f_2 = 0x000005DC;
	Local_45[0x00000001 /*11*/].f_3 = 0x000001F4;
	Local_45[0x00000000 /*11*/].f_5 = 0x00000000;
	Local_45[0x00000000 /*11*/].f_A = 0x00000000;
	Local_45[0x00000000 /*11*/].f_2 = 0x000003E8;
	Local_45[0x00000000 /*11*/].f_3 = 0x00000064;
	unk_0xF63400DBE3303D26("Enemies", &iLocal_40);
	unk_0x6DF7BF67E86AAE86(Local_45[0x00000000 /*11*/], iLocal_40);
	unk_0x6DF7BF67E86AAE86(Local_45[0x00000001 /*11*/], iLocal_40);
	unk_0xE2F0767314863BD8(Local_45[0x00000000 /*11*/], 0x00000001, 0x00000000);
	unk_0xE2F0767314863BD8(Local_45[0x00000001 /*11*/], 0x00000001, 0x00000000);
	func_128(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_128(vector3 vParam0, vector3 vParam1)
{
	Local_42.f_8 = { vParam0 };
	Local_42.f_B = { vParam1 };
	Local_42.f_1 = 0x00000004;
}

void func_129()
{
	if (!unk_0xC42A92762C58E1B9(Local_45[0x00000000 /*11*/], iLocal_43, 0x00000000))
	{
		unk_0x96167B03C5A77156(Local_45[0x00000000 /*11*/], unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000001)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
		Local_45[0x00000000 /*11*/].f_7 = 0x00000001;
	}
	else
	{
		func_130(0x00000001);
	}
}

void func_130(bool bParam0)
{
	if (!unk_0xBBA8A868118C90ED(iLocal_43, 0x00000000, 0x00000000))
	{
		func_131(bParam0);
		if (iLocal_48 != (iLocal_41 - 0x00000001))
		{
			if (iLocal_48 == 0x00000004)
			{
				unk_0xF613E1FD4A150FE0(Local_45[0x00000000 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0x002C00AB, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				unk_0xE9362E4D600DD12A(Local_45[0x00000000 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0x00000000, 0x00000000, 0x002C00AB, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0x00000000 /*11*/].f_8 = Local_45[0x00000000 /*11*/].f_7;
			Local_45[0x00000000 /*11*/].f_7 = 0x00000004;
		}
		else
		{
			unk_0xE072601B4380E9DF(Local_45[0x00000000 /*11*/], iLocal_43, 15f, 0x000C00A7);
			Local_45[0x00000000 /*11*/].f_8 = Local_45[0x00000000 /*11*/].f_7;
			Local_45[0x00000000 /*11*/].f_7 = 0x0000000A;
		}
	}
	else
	{
		Local_45[0x00000000 /*11*/].f_8 = Local_45[0x00000000 /*11*/].f_7;
		Local_45[0x00000000 /*11*/].f_7 = 0x00000007;
	}
}

void func_131(bool bParam0)
{
	if (iLocal_48 != 0xFFFFFFFF)
	{
		if (!func_136(Local_46[iLocal_48 /*25*/].f_B) && !func_136(Local_46[iLocal_48 /*25*/].f_E))
		{
			unk_0xE342F209E49C5314(Local_46[iLocal_48 /*25*/].f_B - Local_46[iLocal_48 /*25*/].f_E, Local_46[iLocal_48 /*25*/].f_B + Local_46[iLocal_48 /*25*/].f_E, 0x00000001, 0x00000001);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_48 = func_132();
	}
	if (iLocal_48 != 0xFFFFFFFF)
	{
		if (!func_136(Local_46[iLocal_48 /*25*/].f_B) && !func_136(Local_46[iLocal_48 /*25*/].f_E))
		{
			unk_0xE342F209E49C5314(Local_46[iLocal_48 /*25*/].f_B - Local_46[iLocal_48 /*25*/].f_E, Local_46[iLocal_48 /*25*/].f_B + Local_46[iLocal_48 /*25*/].f_E, 0x00000000, 0x00000001);
		}
	}
}

int func_132()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_37(iLocal_43))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001) };
		iVar2 = 0x00000000;
		while (iVar2 <= (iLocal_41 - 0x00000001))
		{
			fVar5 = unk_0x0EB28750412C3A5A(vVar1, Local_46[iVar2 /*25*/], 0x00000001);
			if (!func_136(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0x00000000];
		iVar2 = 0x00000000;
		while (iVar2 <= (iLocal_41 - 0x00000001))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_133(Local_46[iVar0 /*25*/] - vVar1, unk_0x08D89CE2E20AE305(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0x00000000;
		while (fVar7 < 0f && iVar8 < 0x00000028)
		{
			iVar3++;
			if (iVar3 >= 0x00000015)
			{
				iVar3 = 0x00000000;
			}
			vVar1 = { unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001) };
			fVar7 = func_133(Local_46[iVar3 /*25*/] - vVar1, unk_0x08D89CE2E20AE305(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 0x00000028)
		{
			iVar3 = (iLocal_41 - 0x00000001);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_133(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_12 && iVar0 != 0xFFFFFFFF)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 0x00000001))
			{
				iVar0 = 0xFFFFFFFF;
				iLocal_48 = (iLocal_41 - 0x00000001);
			}
		}
		if (iLocal_48 == (iLocal_41 - 0x00000001))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0x00000000;
				iVar0 = 0x00000000;
				while (iVar0 <= (iLocal_41 - 0x00000001))
				{
					Local_46[iVar0 /*25*/].f_12 = 0x00000000;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 0x00000001);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 <= (iLocal_41 - 0x00000001))
		{
			if (Local_46[iVar0 /*25*/].f_12)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 0x00000001))
		{
			iLocal_48 = (iLocal_41 - 0x00000001);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0x00000000;
				while (iVar0 <= (iLocal_41 - 0x00000001))
				{
					Local_46[iVar0 /*25*/].f_12 = 0x00000000;
					iVar0++;
				}
				iLocal_48 = func_135();
			}
			else
			{
				iLocal_48 = 0xFFFFFFFF;
				return;
			}
		}
		else
		{
			iLocal_48 = func_135();
		}
	}
}

int func_135()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, (iLocal_41 - 0x00000001));
	while (Local_46[iVar0 /*25*/].f_12)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, (iLocal_41 - 0x00000001));
	}
	return iVar0;
}

int func_136(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_137(bool bParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (!bParam0)
	{
		iVar1 = unk_0xF653B9B22DA806A9(iLocal_43, "wheel_rf");
	}
	else
	{
		iVar1 = unk_0xF653B9B22DA806A9(iLocal_43, "wheel_lf");
	}
	vVar0 = { unk_0xBF584557291FDD31(iLocal_43, iVar1) };
	vVar0 = { unk_0x5293C88BD2F4DE13(iLocal_43, vVar0) };
	if (!bParam0)
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, -1f) };
	}
	return vVar0;
}

void func_138(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_139(int iParam0)
{
	if (func_341(iParam0))
	{
		Local_45[0x00000001 /*11*/] = iParam0;
	}
}

void func_140(int iParam0)
{
	if (func_341(iParam0))
	{
		Local_45[0x00000000 /*11*/] = iParam0;
	}
}

int func_141(bool bParam0)
{
	unk_0x3F423BF5B8125A50("missfbi4prepp1");
	unk_0x4942FBD1EF896E39("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xB4AE0788C1587752("missfbi4prepp1") && !unk_0xDF3FDDA1EADEDD07("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		return 0x00000001;
	}
	else if (unk_0xB4AE0788C1587752("missfbi4prepp1") && unk_0xDF3FDDA1EADEDD07("missfbi4prepp1_garbageman"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_142()
{
	func_143(&uLocal_205);
}

void func_143(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			sVar1 = "MICHAEL";
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			sVar1 = "FRANKLIN";
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			sVar1 = "TREVOR";
			break;
	}
	func_98(uParam0, iVar0, unk_0x16F2683693E537C9(), sVar1, 0x00000000, 0x00000001);
}

void func_144(int iParam0, vector3 vParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if ((vParam1.x == Global_79AA[iVar0 /*23*/][0x00000000 /*3*/] && vParam1.y == Global_79AA[iVar0 /*23*/][0x00000000 /*3*/].f_1) && vParam1.z == Global_79AA[iVar0 /*23*/][0x00000000 /*3*/].f_2)
	{
		return;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	Global_79AA[iVar0 /*23*/][0x00000000 /*3*/] = { vParam1 };
	Global_914C = 0x00000001;
}

void func_145(var uParam0, int iParam1, int iParam2)
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
		if (func_146(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_146(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_146(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_147(int iParam0)
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

int func_148()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("trash")))
		{
			unk_0x73270B3C9CC833FD(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001, 0x00000000);
			iLocal_200 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (func_37(iLocal_200))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_149(int iParam0, vector3 vParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (func_154(vParam1, vLocal_185, 0x3F000000, 0x00000000) && fParam2 == 0f)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			unk_0xD7992BEF7A9D109E(sLocal_180, 0x00000000);
			if (unk_0x67C1D9E5B91B2E37(0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_37(Global_17409[0x00000000]))
			{
				unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
				Local_199 = Global_17409[0x00000000];
				if (func_37(Local_199))
				{
					func_36(Local_199, 0x00000000);
					unk_0x44A200C9B6E1CEA6(Local_199, 0x00000001);
					unk_0x120A395B0ECB8EA5(Local_199, 0x00000001);
					return 0x00000001;
				}
			}
			else if (func_153(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 0x00000001))
			{
				func_36(Local_199, 0x00000000);
				unk_0x44A200C9B6E1CEA6(Local_199, 0x00000001);
				unk_0x120A395B0ECB8EA5(Local_199, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]))
			{
				if (!unk_0x28072FDD60CE3A6E(Global_17409.f_9[0x00000000], 0x00000001))
				{
					unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000000], 0x00000001, 0x00000001);
					Local_197 = Global_17409.f_9[0x00000000];
					if (func_341(Local_197))
					{
						unk_0x11AD11297DC58CC7(Local_197, 0x00000001);
						unk_0x4E885A246A9D983A(Local_197, 0x000000AA, 0x00000000);
						unk_0xBAFED2F6486F771A(Local_197, 0x00010000, 0x00000001);
						unk_0xAFF39FB306F8E232(Local_197, 0x00000032, 0x00000001);
						return 0x00000001;
					}
				}
				else
				{
					return 0x00000001;
				}
			}
			else if (func_150(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
			{
				if (func_37(Local_199))
				{
					unk_0xF821F915BC24D246(Local_197, Local_199, 0xFFFFFFFF);
					unk_0x11AD11297DC58CC7(Local_197, 0x00000001);
					unk_0x4E885A246A9D983A(Local_197, 0x000000AA, 0x00000000);
					unk_0xBAFED2F6486F771A(Local_197, 0x00010000, 0x00000001);
					unk_0xAFF39FB306F8E232(Local_197, 0x00000032, 0x00000001);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000001]))
			{
				if (!unk_0x28072FDD60CE3A6E(Global_17409.f_9[0x00000001], 0x00000001))
				{
					unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000001], 0x00000001, 0x00000001);
					Local_198 = Global_17409.f_9[0x00000001];
					if (func_341(Local_198))
					{
						unk_0x4E885A246A9D983A(Local_198, 0x000000AA, 0x00000000);
						unk_0xBAFED2F6486F771A(Local_198, 0x00010000, 0x00000001);
						unk_0xAFF39FB306F8E232(Local_198, 0x00000032, 0x00000001);
						unk_0x11AD11297DC58CC7(Local_198, 0x00000001);
						unk_0xE8832A9E16A57A1F(Local_198, 0x00000001, 0x00000001);
						return 0x00000001;
					}
				}
				else
				{
					return 0x00000001;
				}
			}
			else if (func_150(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
			{
				if (func_37(Local_199))
				{
					unk_0xF821F915BC24D246(Local_198, Local_199, 0x00000000);
					unk_0x4E885A246A9D983A(Local_198, 0x000000AA, 0x00000000);
					unk_0xBAFED2F6486F771A(Local_198, 0x00010000, 0x00000001);
					unk_0xAFF39FB306F8E232(Local_198, 0x00000032, 0x00000001);
					unk_0x11AD11297DC58CC7(Local_198, 0x00000001);
					unk_0xE8832A9E16A57A1F(Local_198, 0x00000001, 0x00000001);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_150(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		if (func_152(iParam1, "Loading", 0x00000000))
		{
			*iParam0 = unk_0x36F2404464202779(0x0000001A, iParam1, vParam2, fParam3, 0x00000001, 0x00000001);
			if (func_341(*iParam0))
			{
				if (bParam5)
				{
					unk_0x1E9649458B15960F(*iParam0, 0x00000001);
				}
				if (bParam6)
				{
					unk_0x11AD11297DC58CC7(*iParam0, bParam6);
				}
				if (!bParam7)
				{
					unk_0x25C5402CC10F76CD(*iParam0, bParam7);
				}
				if (bParam4)
				{
					func_151(iParam1, 0x00000001);
				}
				return 0x00000001;
			}
		}
	}
	else if (func_341(*iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_151(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0xB87F6CF6E5628C67(iParam0))
		{
			unk_0x71199B01895C6202(iParam0);
		}
	}
	else
	{
		unk_0x71199B01895C6202(iParam0);
	}
}

int func_152(int iParam0, char* sParam1, int iParam2)
{
	unk_0x523BCC9DC80CD82F(iParam0);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && iParam2 != 0xFFFFFFFF)
	{
	}
	if (unk_0xB87F6CF6E5628C67(iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_153(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		if (func_152(iParam1, "Loading", 0x00000000))
		{
			*iParam0 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				if (!unk_0xAF6690C489CC6203(*iParam0))
				{
					unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
				}
				unk_0xB9FD7450C0DAB575(*iParam0, 0x40A00000);
				if (bParam4)
				{
					func_151(iParam1, 0x00000001);
				}
				return 0x00000001;
			}
		}
	}
	else
	{
		if (func_37(*iParam0))
		{
			unk_0xA47B46945FF6DE74(*iParam0, vParam2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(*iParam0, fParam3);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
			return 0x00000001;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_154(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_155()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000002 - 0x00000001))
	{
		func_156(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(int iParam0, int iParam1)
{
	if (func_341(*iParam0))
	{
		func_202(iParam0, iParam1, 0x00000000);
		if (unk_0xB4ECF989E2C1DAC8(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 0x00000003))
		{
			if (unk_0x8CA9406E01C7EE58(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_46[iLocal_48 /*25*/].f_11) && unk_0xD59B17D2DFF98E26(Local_46[iLocal_48 /*25*/].f_11))
				{
					unk_0x76D5D8AF296F50CE(*iParam0, 0x3E800000);
					unk_0xAB690CF5866CB826(*iParam0);
					if (iLocal_48 <= 0x00000014 && iLocal_48 != 0xFFFFFFFF)
					{
						Local_46[iLocal_48 /*25*/].f_12 = 0x00000001;
						iParam0->f_9 = 0x00000000;
					}
					unk_0x15AFB6CBDE990FB6(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, 0x00000000);
					unk_0xEF3C30F70D2ED135(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, unk_0x08D89CE2E20AE305(*iParam0), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0x00000000:
				if (iParam1 == 0x00000000)
				{
					func_199();
					func_198(iParam0);
				}
				func_185(iParam0);
				break;
			
			case 0x00000001:
				func_158(iParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_46[iLocal_48 /*25*/].f_11))
		{
			if (unk_0xD59B17D2DFF98E26(Local_46[iLocal_48 /*25*/].f_11))
			{
				unk_0x15AFB6CBDE990FB6(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, 0x00000000);
				unk_0xEF3C30F70D2ED135(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, unk_0x08D89CE2E20AE305(*iParam0), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			}
		}
		func_7(&(iParam0->f_4));
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (!func_157(unk_0x16F2683693E537C9(), *iParam0, 150f, 0x00000001) && !bLocal_52)
			{
				func_5(iParam0, 0x00000001, 0x00000000, 0x00000001);
			}
		}
	}
}

bool func_157(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_158(int iParam0)
{
	var uVar0;
	var uVar1;
	
	switch (iParam0->f_6)
	{
		case 0x00000005:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > iParam0->f_3)
			{
				if (func_184(*iParam0, 0x2E85A751))
				{
					unk_0xA3BF0AA5A2608191(*iParam0);
				}
				unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 30f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				iParam0->f_6 = 0x00000006;
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 0x00000015:
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				if (func_177(*iParam0, unk_0x16F2683693E537C9(), 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000001);
					return;
				}
			}
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > iParam0->f_3)
			{
				if (!unk_0x405E212DDE472467(*iParam0, 0x00000000))
				{
					unk_0x786028C6BB27BD7A(*iParam0, unk_0x16F2683693E537C9(), 8f, -1f, 10f, 0x00000000);
				}
				else
				{
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
					unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(*iParam0, uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
				}
				if (!unk_0xE4EDC4B0E92C078B(iParam0->f_4))
				{
					iParam0->f_4 = func_173(*iParam0, 0x00000001, 0x00000091);
				}
				iParam0->f_6 = 0x00000016;
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 0x0000000A:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > iParam0->f_3)
			{
				if (unk_0x405E212DDE472467(*iParam0, 0x00000000))
				{
					unk_0x9DD8618CA5BF832D(*iParam0, 0x00000078, 0x00000001);
					iParam0->f_6 = 0x0000000C;
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
				else if (!func_184(*iParam0, 0x1C43F4CF))
				{
					if (func_184(*iParam0, 0x2E85A751))
					{
						unk_0xA3BF0AA5A2608191(*iParam0);
					}
					unk_0x8BE3D040D15AEA1D(*iParam0, 0xFFFFFFFF);
					iParam0->f_6 = 0x0000000C;
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > iParam0->f_3)
			{
				unk_0x8D4C354BB8991817(*iParam0, 0x00000001, 0x00000001);
				unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000001);
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				iParam0->f_6 = 0x00000004;
				iParam0->f_5 = 0x00000001;
			}
			break;
		
		case 0x0000000B:
			func_172(iParam0);
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > 0x00001388)
			{
				if (!func_184(*iParam0, 0x2A89B8A7))
				{
					if (unk_0xC844350D5D58C99A(Local_45[func_171(iParam0->f_A) /*11*/]))
					{
						unk_0x96167B03C5A77156(*iParam0, vLocal_54, 1f, 0xFFFFFFFF, 2f, 0x00000000, 0x471C4000);
					}
				}
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				iParam0->f_6 = 0x00000017;
				iParam0->f_5 = 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (!func_184(*iParam0, 0x87B9A382))
			{
				unk_0xDD353D0E9C789D0E(&uVar1);
				if (func_170(unk_0x68F4C0EC296D3901(*iParam0, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 1.5f)
				{
					unk_0x796BDF31572BB055(0x00000000, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000000);
				}
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0x00001770, 0x00000001);
				unk_0x75ABDC5F81978924(uVar1);
				unk_0x78ADC381772E3D54(*iParam0, uVar1);
				unk_0xF82EA857DA10E0CD(&uVar1);
				iParam0->f_5 = 0x00000001;
				iParam0->f_6 = 0x00000014;
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 0x00000013:
			func_172(iParam0);
			if (!func_184(*iParam0, 0x87B9A382))
			{
				unk_0x509B8296EBA9B408(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0x00001770, 0x00000001);
				iParam0->f_5 = 0x00000001;
				iParam0->f_6 = 0x00000014;
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
			break;
		
		case 0x00000001:
			if (!unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000))
			{
				func_168(iParam0);
			}
			break;
		
		case 0x00000002:
			if (!unk_0x0E0E6175453415CB(*iParam0) && (unk_0x1C0640BA9A7327B3() - iParam0->f_1) > 0x00000BB8)
			{
				func_168(iParam0);
			}
			break;
		
		case 0x00000004:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > 0x00001F40)
			{
				unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				if (!iLocal_53)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						iLocal_53 = 0x00000001;
					}
				}
				unk_0x8D4C354BB8991817(*iParam0, 0x00000000, 0x00000001);
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				iParam0->f_6 = 0x00000008;
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000001)
			{
				unk_0x8D4C354BB8991817(*iParam0, 0x00000000, 0x00000001);
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				iParam0->f_6 = 0x00000008;
			}
			break;
		
		case 0x00000006:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > iParam0->f_2)
			{
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 15f, 0x00000001))
				{
					func_7(&(iParam0->f_4));
					iParam0->f_6 = 0x00000007;
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000007:
			if (unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000001))
			{
				if (iParam0->f_6 != 0x00000004 && iParam0->f_6 != 0x00000001)
				{
					if (func_166())
					{
						if (func_341(*iParam0))
						{
							unk_0xA3BF0AA5A2608191(*iParam0);
							unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000001);
							iParam0->f_6 = 0x00000001;
						}
					}
				}
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 120f, 0x00000001))
				{
					func_5(iParam0, 0x00000001, 0x00000000, 0x00000001);
				}
			}
			else
			{
				func_168(iParam0);
			}
			break;
		
		case 0x00000008:
			if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 120f, 0x00000001))
			{
				func_5(iParam0, 0x00000001, 0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000009:
			if (unk_0x36646919F20EAFFC(*iParam0))
			{
				func_176(iParam0, 0x00000001);
				return;
			}
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) > iParam0->f_2 || !func_184(*iParam0, 0x7D711E7D))
			{
				func_163(iParam0);
			}
			break;
		
		case 0x0000000C:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= iParam0->f_2)
			{
				unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000001);
				iParam0->f_6 = 0x00000005;
			}
			else
			{
				unk_0x9DD8618CA5BF832D(*iParam0, 0x00000078, 0x00000001);
			}
			break;
		
		case 0x0000000D:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 15f, 0x00000001))
				{
					func_163(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_45[func_171(iParam0->f_A) /*11*/], *iParam0, 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000000);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x0000000F:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 15f, 0x00000001))
				{
					func_163(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_45[func_171(iParam0->f_A) /*11*/], *iParam0, 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000000);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000010:
			if (unk_0x36646919F20EAFFC(*iParam0))
			{
				func_176(iParam0, 0x00000001);
				return;
			}
			if ((unk_0x1C0640BA9A7327B3() - iLocal_55) >= 0x00002328)
			{
				if (!func_161(iParam0))
				{
					func_163(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
				else
				{
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
					iParam0->f_5 = 0x00000001;
					iParam0->f_6 = 0x00000010;
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() - iLocal_55) >= 0x00001388 && (unk_0x1C0640BA9A7327B3() - iLocal_55) <= 0x0000157C)
			{
				if (unk_0x405E212DDE472467(*iParam0, 0x00000000))
				{
					if (unk_0x6B4464DA5794D055(*iParam0))
					{
						unk_0x3F87249AEA7C74BC(*iParam0);
					}
				}
			}
			break;
		
		case 0x0000000E:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 15f, 0x00000001))
				{
					func_163(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_45[func_171(iParam0->f_A) /*11*/], *iParam0, 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000000);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000011:
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 15f, 0x00000001))
				{
					func_163(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
				else if (func_177(Local_45[func_171(iParam0->f_A) /*11*/], *iParam0, 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000000);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000014:
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (func_177(*iParam0, unk_0x16F2683693E537C9(), 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000001);
					return;
				}
			}
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= 0x00001770)
			{
				if (!unk_0x3D1053F9EB43B7AD(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, 5f, 0f, -2f), unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001) + Vector(2f, 0f, 0f), 9f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_163(iParam0);
				}
				else
				{
					func_168(iParam0);
					func_168(&(Local_45[func_171(iParam0->f_A) /*11*/]));
				}
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
			func_172(iParam0);
			break;
		
		case 0x00000016:
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				if (func_177(*iParam0, unk_0x16F2683693E537C9(), 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					func_176(iParam0, 0x00000001);
					return;
				}
			}
			if ((unk_0x1C0640BA9A7327B3() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, unk_0x16F2683693E537C9(), 15f, 0x00000001))
				{
					func_163(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
					return;
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 0x00000017:
			func_202(iParam0, iParam0->f_A, 0x00000001);
			func_172(iParam0);
			if (func_107(*iParam0, vLocal_54, 2f))
			{
				if (func_159(*iParam0, vLocal_54, 0x432A0000, 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(*iParam0);
					iParam0->f_6 = 0x00000013;
					iParam0->f_5 = 0x00000001;
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
	}
}

int func_159(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_160(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
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
		vVar1 = { func_160(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

Vector3 func_160(vector3 vParam0)
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

int func_161(int iParam0)
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, 10f, -2f), unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, 3f, 2f), 5f, 0x00000000, 0x00000001, 0x00000000) && unk_0x4024663A44BC1535(*iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_37(iVar0))
		{
			if (!unk_0x3CAA763EEC01ADF7(*iParam0, iVar0, 0xFFFFFFFF, 0x00000000, 0x00000000))
			{
				iParam0->f_6 = 0x00000012;
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_163(int iParam0)
{
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_40, 0x6F0783F5);
	switch (iParam0->f_8)
	{
		case 0x00000004:
			break;
		
		case 0x0000000A:
			break;
		
		case 0x00000008:
			func_129();
			break;
		
		case 0x00000003:
			if (!func_184(*iParam0, 0x0E763797))
			{
				if (iLocal_48 <= 0x00000014 && iLocal_48 != 0xFFFFFFFF)
				{
					Local_46[iLocal_48 /*25*/].f_12 = 0x00000001;
				}
				if (!unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000))
				{
					if (iParam0->f_A == 0x00000000)
					{
						unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000001)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						iParam0->f_7 = 0x00000001;
					}
					else
					{
						unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000000)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						iParam0->f_7 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000))
			{
				if (iParam0->f_A == 0x00000000)
				{
					unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000001)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iParam0->f_7 = 0x00000001;
				}
				else
				{
					unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000000)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iParam0->f_7 = 0x00000001;
				}
			}
			break;
		
		case 0x00000009:
			if (!Local_46[iLocal_48 /*25*/].f_12)
			{
				if (iParam0->f_9 == 0x00000001)
				{
					func_164(iParam0);
				}
				else if (iParam0->f_A == 0x00000000)
				{
					unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000001)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iParam0->f_7 = 0x00000001;
				}
				else
				{
					unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000000)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iParam0->f_7 = 0x00000001;
				}
			}
			else if (!unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000))
			{
				if (iParam0->f_A == 0x00000000)
				{
					unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000001)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iParam0->f_7 = 0x00000001;
				}
				else
				{
					unk_0x96167B03C5A77156(*iParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(0x00000000)), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					iParam0->f_7 = 0x00000001;
				}
			}
			break;
		
		default:
			break;
	}
	iParam0->f_1 = unk_0x1C0640BA9A7327B3();
	iParam0->f_5 = 0x00000000;
}

void func_164(var uParam0)
{
	if (!func_184(*uParam0, 0xFBBF6F4D))
	{
		if (Local_46[iLocal_48 /*25*/].f_17 != 0x00000000)
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_11))
			{
				unk_0xDE7F7A4DA93201CF(*uParam0, Local_46[iLocal_48 /*25*/].f_11, 0xFFFFFFFF, 0f, 180f, 1f, 0x00000000);
			}
		}
		else
		{
			unk_0x96167B03C5A77156(*uParam0, Local_46[iLocal_48 /*25*/].f_13, 1f, 0x00004E20, -1f, 0x00000000, func_165(Local_46[iLocal_48 /*25*/].f_13, unk_0x68F4C0EC296D3901(*uParam0, 0x00000001), 0x00000001));
		}
		if (func_37(iLocal_43))
		{
			unk_0x611DFA9294B339CA(iLocal_43, 0x00000005, 0x00000000, 0x00000000);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 0x00000009;
		uParam0->f_9 = 0x00000001;
	}
}

float func_165(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 0x00000001)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_166()
{
	if (func_37(iLocal_43) && func_341(unk_0x16F2683693E537C9()))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_43, unk_0x16F2683693E537C9(), 0x00000001))
		{
			unk_0xE910A68AA670B4AA(iLocal_43);
			if (func_167() || unk_0x7F6DC62EA9922664(iLocal_43) < 0x00000353)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000005)
	{
		if (unk_0x464B3D84B739AE72(iLocal_43, iVar0, 0x00000000))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_168(int iParam0)
{
	if (iParam0->f_6 != 0x00000003 && iParam0->f_6 != 0x00000004)
	{
		func_169(iParam0);
		iParam0->f_1 = unk_0x1C0640BA9A7327B3();
		iParam0->f_6 = 0x00000003;
		iParam0->f_5 = 0x00000001;
	}
}

void func_169(var uParam0)
{
	if (uParam0->f_7 == 0x00000009)
	{
		if (uParam0->f_9 >= 0x00000002)
		{
			if (!unk_0xEB6A8945D1AC98A1(*uParam0))
			{
				unk_0x76D5D8AF296F50CE(*uParam0, 0x3E800000);
				unk_0xAB690CF5866CB826(*uParam0);
				unk_0xC6EB89C59F2AF6B8(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, 0xFFFFFFFF, 0x00000038, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

float func_170(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_171(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_172(int iParam0)
{
	if (func_37(iLocal_43) && (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_43, 0x00000000) && !unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000)))
	{
		if (unk_0x9C66D99E63E8E24C(iLocal_43) > 0f)
		{
			iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 0x00000001;
			iParam0->f_6 = 0x00000015;
		}
	}
}

int func_173(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_174(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_175(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_175(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_175(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_175(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_176(int iParam0, int iParam1)
{
	func_169(iParam0);
	if ((unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) || iParam1) || iParam0->f_6 == 0x00000017)
	{
		if (!func_157(unk_0x16F2683693E537C9(), *iParam0, 10f, 0x00000001))
		{
			if (!func_184(*iParam0, 0x6BA30179))
			{
				iParam0->f_6 = 0x00000005;
				iParam0->f_5 = 0x00000001;
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			iParam0->f_6 = 0x0000000A;
			iParam0->f_5 = 0x00000001;
			iParam0->f_1 = unk_0x1C0640BA9A7327B3();
		}
	}
	else if (iParam0->f_5 != 0x00000001)
	{
		if (!func_184(*iParam0, 0x2E85A751) && !func_184(*iParam0, 0xFBBF6F4D))
		{
			iParam0->f_5 = 0x00000001;
			iParam0->f_6 = 0x00000015;
			iParam0->f_1 = unk_0x1C0640BA9A7327B3();
		}
	}
}

bool func_177(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_183(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_182(&(Local_38[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_181(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_180();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_178(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_178(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_10(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_179(iParam2, iParam5) };
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
		func_10(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_39)
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
		func_10(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0x00000000))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0x00000000))
			{
				if (bLocal_39)
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

Vector3 func_179(int iParam0, int iParam1)
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

int func_180()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0x00000000 && Local_38[iVar0 /*4*/].f_1 == 0x00000000) && Local_38[iVar0 /*4*/].f_2 == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_181(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_160(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
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
		vVar1 = { func_160(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_182(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_184(int iParam0, int iParam1)
{
	if (func_341(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_185(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0x00000000 && uParam0->f_A == 0x00000001)
	{
	}
	switch (uParam0->f_7)
	{
		case 0x00000001:
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_43, 0x00000001))
			{
				func_176(uParam0, 0x00000000);
				return;
			}
			if (uParam0->f_A == 0x00000000)
			{
				func_196(uParam0, 0x00000001);
			}
			else
			{
				func_196(uParam0, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (unk_0x82CCEAB29E9451DD(*uParam0, iLocal_43))
			{
				if (!func_184(*uParam0, 0x950B6492))
				{
					if (uParam0->f_A == 0x00000000)
					{
						func_130(0x00000000);
					}
					else
					{
						uParam0->f_7 = 0x00000003;
					}
				}
			}
			else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_43, 0x00000001))
			{
				func_176(uParam0, 0x00000000);
				return;
			}
			break;
		
		case 0x00000003:
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_43, 0x00000001))
			{
				func_176(uParam0, 0x00000000);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 0x00000014 && iLocal_48 != 0xFFFFFFFF)
				{
					if (!Local_46[iLocal_48 /*25*/].f_12)
					{
						if (func_107(*uParam0, Local_46[iLocal_48 /*25*/], 20f))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && unk_0x8B38C0DAEEDB5F9C(iLocal_43))
							{
								func_195();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 0x0000000A;
				}
			}
			break;
		
		case 0x00000004:
			if (func_107(*uParam0, Local_46[iLocal_48 /*25*/], 25f))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_194(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_12 = 0x00000001;
					func_130(0x00000000);
				}
			}
			break;
		
		case 0x00000005:
			if (func_37(iLocal_43))
			{
				unk_0xE0C0351D5B931E37(iLocal_43, 25f, 0x0000000A, 0x00000000);
				fVar0 = unk_0x9C66D99E63E8E24C(iLocal_43);
				if (fVar0 < 8f)
				{
					func_194(uParam0);
				}
			}
			break;
		
		case 0x00000006:
			if (!func_184(*uParam0, 0x0E763797) && unk_0x8B38C0DAEEDB5F9C(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 0x00000007;
				}
				else
				{
					unk_0x75CDA8644CD3B5F5(*uParam0, 0x00000000, 0x00000000);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 0x00000008;
				}
			}
			break;
		
		case 0x00000007:
			if (func_341(Local_45[0x00000001 /*11*/]))
			{
				if (unk_0xC42A92762C58E1B9(Local_45[0x00000001 /*11*/], iLocal_43, 0x00000000) && Local_45[0x00000001 /*11*/].f_7 == 0x00000003)
				{
					func_130(0x00000000);
				}
			}
			break;
		
		case 0x00000008:
			if (!unk_0xC42A92762C58E1B9(*uParam0, iLocal_43, 0x00000000))
			{
				func_164(uParam0);
			}
			break;
		
		case 0x00000009:
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 0x00000001 && uParam0->f_9 != 0x00000000)
	{
	}
	switch (uParam0->f_9)
	{
		case 0x00000001:
			if (!func_184(*uParam0, 0x87E3E0A8))
			{
				unk_0xDD353D0E9C789D0E(&uVar0);
				if (func_170(unk_0x68F4C0EC296D3901(*uParam0, 0x00000001), Local_46[iLocal_48 /*25*/].f_13) > 1.5f)
				{
					unk_0x796BDF31572BB055(0x00000000, Local_46[iLocal_48 /*25*/].f_13, 0x00000000);
				}
				unk_0xC6EB89C59F2AF6B8(0x00000000, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, 0xFFFFFFFF, 0x00081000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(uVar0);
				unk_0x78ADC381772E3D54(*uParam0, uVar0);
				unk_0xF82EA857DA10E0CD(&uVar0);
				uParam0->f_9 = 0x00000002;
			}
			else if (func_191(Local_46[iLocal_48 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
			{
				func_190(uParam0);
				return;
			}
			unk_0x7EB60BF335619074(*uParam0, 0.2f);
			break;
		
		case 0x00000002:
			if (func_184(*uParam0, 0x0E763797))
			{
				if (unk_0xB4ECF989E2C1DAC8(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 0x00000003))
				{
					if (unk_0x8CA9406E01C7EE58(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0x79C43E2BAC7C696F(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0x9237814869823B3E(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_46[iLocal_48 /*25*/].f_11) && !unk_0xD59B17D2DFF98E26(Local_46[iLocal_48 /*25*/].f_11))
						{
							unk_0x9F528B1B53FBC5D9(Local_46[iLocal_48 /*25*/].f_11, *uParam0, unk_0x4A089F2B762B8D33(*uParam0, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
						}
					}
				}
				if (func_191(Local_46[iLocal_48 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
				{
					func_190(uParam0);
					return;
				}
			}
			else if (!func_184(*uParam0, 0x2A89B8A7))
			{
				if (func_37(iLocal_43))
				{
					unk_0x96167B03C5A77156(*uParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, -4.8f, 0f), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, unk_0xD9522BA9E27E1349(iLocal_43));
				}
				uParam0->f_9 = 0x00000003;
			}
			unk_0x7EB60BF335619074(*uParam0, 0.2f);
			break;
		
		case 0x00000003:
			if (func_37(iLocal_43))
			{
				if (!func_191(unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, -5.5f, 0f), iLocal_43, 1.9f, 1.9f, 8f))
				{
					if (unk_0x5A91F08DF773C39D(*uParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!func_184(*uParam0, 0x2A89B8A7))
						{
							unk_0xDD353D0E9C789D0E(&uVar1);
							if (func_170(unk_0x68F4C0EC296D3901(*uParam0, 0x00000001), unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001)) > 3f)
							{
								unk_0xE655C47E46F9A7E4(0x00000000, unk_0xD9522BA9E27E1349(iLocal_43), 0x00000000);
							}
							unk_0xC6EB89C59F2AF6B8(0x00000000, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(uVar1);
							unk_0x78ADC381772E3D54(*uParam0, uVar1);
							unk_0xF82EA857DA10E0CD(&uVar1);
							uParam0->f_9 = 0x00000004;
						}
					}
					else if (!func_184(*uParam0, 0x2A89B8A7))
					{
						unk_0x96167B03C5A77156(*uParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, -4.8f, 0f), 1f, 0xFFFFFFFF, 0.25f, 0x00000000, unk_0xD9522BA9E27E1349(iLocal_43));
					}
				}
				else
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 0x00000004:
			if (!func_191(unk_0x68E4ADDDDCD7BDDE(iLocal_43, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_184(*uParam0, 0x0E763797))
				{
					if (unk_0xB4ECF989E2C1DAC8(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 0x00000003))
					{
						if (unk_0x8CA9406E01C7EE58(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_46[iLocal_48 /*25*/].f_11))
							{
								if (unk_0xD59B17D2DFF98E26(Local_46[iLocal_48 /*25*/].f_11))
								{
									unk_0x76D5D8AF296F50CE(*uParam0, 0x3E800000);
									unk_0xAB690CF5866CB826(*uParam0);
									unk_0x15AFB6CBDE990FB6(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, 0x00000000);
									unk_0x6662F466071F8128(Local_46[iLocal_48 /*25*/].f_11, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
									unk_0xEF3C30F70D2ED135(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, unk_0x08D89CE2E20AE305(*uParam0), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
								}
								if (unk_0x1B3D109B39CC2C89(Local_46[iLocal_48 /*25*/].f_11, iLocal_43))
								{
									func_187(&(Local_46[iLocal_48 /*25*/].f_11));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0x00000000;
					if (func_37(iLocal_43))
					{
						unk_0x152BCACCF710B36E(iLocal_43, 0x00000005, 0x00000000);
						func_187(&(Local_46[iLocal_48 /*25*/].f_11));
					}
					func_163(uParam0);
				}
			}
			else
			{
				func_188(uParam0);
			}
			break;
		
		case 0x00000005:
			break;
	}
}

void func_187(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_188(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_40, 0x6F0783F5);
	func_169(uParam0);
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x405E212DDE472467(*uParam0, 0x00000000))
		{
			unk_0x786028C6BB27BD7A(*uParam0, unk_0x16F2683693E537C9(), 8f, -1f, 10f, 0x00000000);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
			unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(*uParam0, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
	}
	else
	{
		unk_0xDD353D0E9C789D0E(&uVar1);
		unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
		unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		unk_0x75ABDC5F81978924(uVar1);
		unk_0x78ADC381772E3D54(*uParam0, uVar1);
		unk_0xF82EA857DA10E0CD(&uVar1);
	}
	unk_0x76D5D8AF296F50CE(*uParam0, 0x3E800000);
	unk_0xAB690CF5866CB826(*uParam0);
	func_189();
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 0x00000001, 0x00000091);
	}
	uParam0->f_1 = unk_0x1C0640BA9A7327B3();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 0x00000001;
	uParam0->f_6 = 0x0000000F;
}

void func_189()
{
	Local_42 = 0x00000000;
	Local_42.f_1A = 0x00000000;
	Local_42.f_12 = 0x00000000;
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_40, 0x6F0783F5);
	func_169(uParam0);
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x405E212DDE472467(*uParam0, 0x00000000))
		{
			unk_0x786028C6BB27BD7A(*uParam0, unk_0x16F2683693E537C9(), 8f, -1f, 10f, 0x00000000);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
			unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(*uParam0, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
	}
	else
	{
		unk_0xDD353D0E9C789D0E(&uVar1);
		unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
		unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		unk_0x75ABDC5F81978924(uVar1);
		unk_0x78ADC381772E3D54(*uParam0, uVar1);
		unk_0xF82EA857DA10E0CD(&uVar1);
	}
	unk_0x76D5D8AF296F50CE(*uParam0, 0x3E800000);
	unk_0xAB690CF5866CB826(*uParam0);
	func_189();
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 0x00000001, 0x00000091);
	}
	uParam0->f_1 = unk_0x1C0640BA9A7327B3();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 0x00000001;
	uParam0->f_6 = 0x0000000E;
}

int func_191(vector3 vParam0, int iParam1, vector3 vParam2)
{
	Local_42.f_2 = { vParam0 };
	Local_42.f_8 = { vParam2 };
	func_192(&Local_42, iParam1);
	if (Local_42.f_1A)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0xE2F1E99DD161A861(Local_42.f_12))
			{
				if (func_10(Local_42.f_12))
				{
					if (unk_0x96A5FE5834B81CE7(Local_42.f_12) == unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001))
					{
						return 0x00000001;
					}
				}
			}
		}
		else if (unk_0xEC560E589DF8370E(Local_42.f_12))
		{
			if (func_10(Local_42.f_12))
			{
				if (unk_0x940C1429253D3B1B(Local_42.f_12) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1EC301670B54C6DE(*uParam0, &iVar0, &(uParam0->f_14), &(uParam0->f_17), &(uParam0->f_12));
	uParam0->f_13 = 0x00000002 == iVar1;
	if (uParam0->f_13)
	{
		if (0x00000000 == iVar0)
		{
			uParam0->f_1A = 0x00000000;
		}
		else
		{
			uParam0->f_1A = 0x00000001;
		}
	}
	if (iVar1 != 0x00000001)
	{
		func_193(uParam0, iParam1);
	}
}

void func_193(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			*uParam0 = unk_0xCD02F8660C47B801(uParam0->f_2, uParam0->f_5, 0x000001FF, iParam1, 0x00000007);
			break;
		
		case 0x00000002:
			*uParam0 = unk_0x58D828B8F1B1B3BE(uParam0->f_11, 0x000001FF, 0x00000004);
			break;
		
		case 0x00000003:
			*uParam0 = unk_0xA85C558B4545D4FB(uParam0->f_11, 0x000001FF, 0x00000004);
			break;
		
		case 0x00000004:
			*uParam0 = unk_0xA50E81FC2F15181B(uParam0->f_2, uParam0->f_8, uParam0->f_B, uParam0->f_E, 0x00000006, iParam1, 0x00000004);
			break;
		
		case 0x00000005:
			*uParam0 = unk_0x6D4C9F7CF124AE37(uParam0->f_2, uParam0->f_5, uParam0->f_F, 0x000001FF, iParam1, 0x00000004);
			break;
	}
	uParam0->f_10 = *uParam0 != 0x00000000;
}

void func_194(var uParam0)
{
	var uVar0;
	
	if (func_37(iLocal_43))
	{
		unk_0xDD353D0E9C789D0E(&uVar0);
		unk_0xE9362E4D600DD12A(0x00000000, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0x00000000, joaat("trash"), 0x000C0025, 10f, 15f);
		unk_0x27F3789FF35EEDF1(0x00000000, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_A, 5f, 0x00000001);
		unk_0x75ABDC5F81978924(uVar0);
		unk_0x78ADC381772E3D54(*uParam0, uVar0);
		unk_0xF82EA857DA10E0CD(&uVar0);
		uParam0->f_7 = 0x00000006;
	}
}

void func_195()
{
	func_164(&(Local_45[0x00000001 /*11*/]));
}

void func_196(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_191(unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
	{
		if (unk_0x3D1053F9EB43B7AD(*uParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, 5f, 0f, -2f), unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001) + Vector(2f, 0f, 0f), 9f, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_43, 5f, 0f, -2f), unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001) + Vector(2f, 0f, 0f), 9f, 0x00000000, 0x00000001, 0x00000000))
		{
			func_197(uParam0);
		}
		else if (!func_184(*uParam0, 0x4924437D) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(iLocal_43, 5f, 0f, -2f), unk_0x68F4C0EC296D3901(iLocal_43, 0x00000001) + Vector(2f, 0f, 0f), 9f, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0xA3BF0AA5A2608191(*uParam0);
			unk_0xE185F110925D87DB(*uParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 4f, 1f, 0x40000000, 0x00000000);
		}
	}
	else if (func_107(*uParam0, unk_0x68E4ADDDDCD7BDDE(iLocal_43, func_137(bParam1)), 5f))
	{
		iVar0 = 0xFFFFFFFF;
		if (!bParam1)
		{
			iVar0 = 0x00000000;
		}
		unk_0x5B1D360B9C6F0A09(*uParam0, iLocal_43, 0xFFFFFFFF, iVar0, 1f, 0x00800001, 0x00000000);
		uParam0->f_7 = 0x00000002;
	}
}

void func_197(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_40, 0x6F0783F5);
	func_169(uParam0);
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x405E212DDE472467(*uParam0, 0x00000000))
		{
			unk_0x786028C6BB27BD7A(*uParam0, unk_0x16F2683693E537C9(), 8f, -1f, 10f, 0x00000000);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
			unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(*uParam0, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
	}
	else
	{
		unk_0xDD353D0E9C789D0E(&uVar1);
		unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
		unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		unk_0x75ABDC5F81978924(uVar1);
		unk_0x78ADC381772E3D54(*uParam0, uVar1);
		unk_0xF82EA857DA10E0CD(&uVar1);
	}
	unk_0x76D5D8AF296F50CE(*uParam0, 0x3E800000);
	unk_0xAB690CF5866CB826(*uParam0);
	func_189();
	uParam0->f_1 = unk_0x1C0640BA9A7327B3();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 0x00000001;
	uParam0->f_6 = 0x0000000D;
}

void func_198(var uParam0)
{
	if (uParam0->f_5 != 0x00000001)
	{
		if (func_37(iLocal_43) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!func_184(*uParam0, 0x7D711E7D) && unk_0xC42A92762C58E1B9(*uParam0, iLocal_43, 0x00000000))
			{
				if (func_157(unk_0x16F2683693E537C9(), iLocal_43, 10f, 0x00000001))
				{
					if (unk_0x1B3D109B39CC2C89(iLocal_43, unk_0x16F2683693E537C9()))
					{
						unk_0xFFDDE8CC59EB6D40(*uParam0, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 10f, 0x00000064, 0x00000001, 0xC6EE6B4C);
						uParam0->f_1 = unk_0x1C0640BA9A7327B3();
						uParam0->f_6 = 0x00000009;
					}
				}
			}
		}
	}
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (iLocal_41 - 0x00000001))
	{
		if (Local_46[iVar0 /*25*/].f_17 != 0x00000000)
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				if ((iVar0 != iLocal_48 && func_10(Local_46[iVar0 /*25*/].f_11)) && func_201(Local_46[iVar0 /*25*/].f_11, unk_0x16F2683693E537C9(), 0x00000001) > 200f)
				{
					unk_0xF690C84DADBB3551(&(Local_46[iVar0 /*25*/].f_11));
					Local_46[iVar0 /*25*/].f_18 = 0x00000000;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_17 != 0x00000000)
			{
				if (func_107(unk_0x16F2683693E537C9(), Local_46[iVar0 /*25*/], 100f) || func_107(Local_45[0x00000000 /*11*/], Local_46[iVar0 /*25*/], 120f))
				{
					Local_46[iVar0 /*25*/].f_18 = func_200(&(Local_46[iVar0 /*25*/].f_11), Local_46[iVar0 /*25*/].f_17, Local_46[iVar0 /*25*/].f_13, Local_46[iVar0 /*25*/].f_16, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		if (func_152(iParam1, "Loading", 0x00000000))
		{
			*uParam0 = unk_0x7707E48765093646(iParam1, vParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(*uParam0))
			{
				unk_0xD8F6A53F4799FAFE(*uParam0, fParam3);
				unk_0xAC0C6241732E36F6(*uParam0);
				if (bParam4)
				{
					func_151(iParam1, 0x00000001);
				}
				return 0x00000001;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_201(int iParam0, int iParam1, bool bParam2)
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

void func_202(int iParam0, int iParam1, int iParam2)
{
	if (iParam0->f_5 != 0x00000001 || iParam2)
	{
		if (!func_341(Local_45[func_171(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (unk_0xC844350D5D58C99A(Local_45[func_171(iParam1) /*11*/]))
				{
					if (func_181(*iParam0, Local_45[func_171(iParam1) /*11*/], 140f, 0x00000000) || func_157(Local_45[func_171(iParam1) /*11*/], *iParam0, 3f, 0x00000001))
					{
						func_176(iParam0, 0x00000000);
						bLocal_52 = 0x00000001;
						return;
					}
					else
					{
						vLocal_54 = { unk_0x68F4C0EC296D3901(Local_45[func_171(iParam1) /*11*/], 0x00000001) };
						iParam0->f_1 = unk_0x1C0640BA9A7327B3();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 0x00000001;
						iParam0->f_6 = 0x0000000B;
					}
				}
				else
				{
					func_176(iParam0, 0x00000000);
				}
			}
		}
		else if (Local_45[func_171(iParam1) /*11*/].f_6 == 0x00000016)
		{
			if (func_181(*iParam0, Local_45[func_171(iParam1) /*11*/], 140f, 0x00000000) && func_157(Local_45[func_171(iParam1) /*11*/], unk_0x16F2683693E537C9(), 15f, 0x00000001))
			{
				iParam0->f_5 = 0x00000001;
				iParam0->f_6 = 0x00000015;
			}
		}
		else if (Local_45[func_171(iParam1) /*11*/].f_6 == 0x00000005 || Local_45[func_171(iParam1) /*11*/].f_6 == 0x00000007)
		{
			if (func_157(Local_45[func_171(iParam1) /*11*/], *iParam0, 10f, 0x00000001))
			{
				func_176(iParam0, 0x00000000);
			}
		}
		if (func_213(*iParam0))
		{
			func_169(iParam0);
			iParam0->f_1 = unk_0x1C0640BA9A7327B3();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 0x00000001;
			iParam0->f_6 = 0x00000015;
		}
		if (iParam0->f_A == 0x00000000 && iParam0->f_7 == 0x00000004)
		{
			if (func_161(iParam0))
			{
				if (unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000))
				{
					unk_0xFFDDE8CC59EB6D40(*iParam0, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 10f, 0x00000064, 0x00000001, 0xC6EE6B4C);
					unk_0x37C67519A5493B8D(iLocal_43, 2000f);
					iLocal_55 = unk_0x1C0640BA9A7327B3();
					iParam0->f_1 = unk_0x1C0640BA9A7327B3();
					iParam0->f_6 = 0x00000010;
					iParam0->f_5 = 0x00000001;
				}
			}
		}
		if (func_204(*iParam0, 0x00000001, 70f, 170f, 0x00000000, 0x00000001, 0x00000000, 0x00000000) && !func_203(iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				if (func_37(iLocal_43))
				{
					if (unk_0xC42A92762C58E1B9(*iParam0, iLocal_43, 0x00000000))
					{
						if (unk_0x9C66D99E63E8E24C(iLocal_43) > 5f)
						{
							if (iParam1 == 0x00000000)
							{
								unk_0x89258193691A7600(*iParam0, iLocal_43, unk_0x16F2683693E537C9(), 0x00000008, 30f, 0x000C0025, 300f, 2f, 0x00000001);
								iParam0->f_6 = 0x00000007;
								unk_0x8BE3D040D15AEA1D(Local_45[func_171(iParam1) /*11*/], 0xFFFFFFFF);
								Local_45[func_171(iParam1) /*11*/].f_6 = 0x0000000A;
								Local_45[func_171(iParam1) /*11*/].f_5 = 0x00000001;
								iParam0->f_5 = 0x00000001;
								iParam0->f_1 = unk_0x1C0640BA9A7327B3();
								Local_45[func_171(iParam1) /*11*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
							else
							{
								unk_0x8BE3D040D15AEA1D(*iParam0, 0xFFFFFFFF);
								iParam0->f_6 = 0x0000000C;
								unk_0x89258193691A7600(Local_45[func_171(iParam1) /*11*/], iLocal_43, unk_0x16F2683693E537C9(), 0x00000008, 30f, 0x000C0025, 300f, 2f, 0x00000001);
								Local_45[func_171(iParam1) /*11*/].f_6 = 0x00000005;
								Local_45[func_171(iParam1) /*11*/].f_5 = 0x00000001;
								iParam0->f_5 = 0x00000001;
								iParam0->f_1 = unk_0x1C0640BA9A7327B3();
								Local_45[func_171(iParam1) /*11*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_176(iParam0, 0x00000000);
							if (unk_0xC844350D5D58C99A(Local_45[func_171(iParam1) /*11*/]))
							{
								if (func_181(Local_45[func_171(iParam1) /*11*/], unk_0x16F2683693E537C9(), 0x432A0000, 0x00000000))
								{
									func_176(&(Local_45[func_171(iParam1) /*11*/]), 0x00000000);
								}
							}
						}
						unk_0xE910A68AA670B4AA(*iParam0);
					}
					else
					{
						func_176(iParam0, 0x00000000);
						if (unk_0xC844350D5D58C99A(Local_45[func_171(iParam1) /*11*/]))
						{
							if (func_177(Local_45[func_171(iParam1) /*11*/], *iParam0, 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
							{
								func_176(&(Local_45[func_171(iParam1) /*11*/]), 0x00000000);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 0x00000001;
				iParam0->f_6 = 0x00000015;
				unk_0xE910A68AA670B4AA(*iParam0);
				if (func_177(Local_45[func_171(iParam1) /*11*/], *iParam0, 0x432A0000, 0x00000001, 0x000000FA, 0x00000007))
				{
					Local_45[func_171(iParam1) /*11*/].f_1 = unk_0x1C0640BA9A7327B3();
					Local_45[func_171(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_45[func_171(iParam1) /*11*/].f_5 = 0x00000001;
					Local_45[func_171(iParam1) /*11*/].f_6 = 0x00000015;
					unk_0xE910A68AA670B4AA(Local_45[func_171(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 0x00000001;
		}
		else if (unk_0x36646919F20EAFFC(*iParam0))
		{
			func_169(iParam0);
			unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000001);
			iParam0->f_6 = 0x00000002;
			iParam0->f_5 = 0x00000001;
			iParam0->f_1 = unk_0x1C0640BA9A7327B3();
		}
		if (unk_0x869EFD0BC0868856(*iParam0))
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_11))
			{
				if (unk_0xD59B17D2DFF98E26(Local_46[iLocal_48 /*25*/].f_11))
				{
					unk_0x15AFB6CBDE990FB6(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, 0x00000000);
					unk_0xEF3C30F70D2ED135(Local_46[iLocal_48 /*25*/].f_11, 0x00000001, unk_0x08D89CE2E20AE305(*iParam0), 0x00000000, 0x00000001, 0x00000001, 0x00000000);
				}
			}
		}
	}
	if (iParam0->f_5 != 0x00000001)
	{
		if (func_341(Local_45[func_171(iParam1) /*11*/]))
		{
			if (unk_0x36646919F20EAFFC(Local_45[func_171(iParam1) /*11*/]))
			{
				func_169(iParam0);
				unk_0xF3268524E9BE6D6E(*iParam0, unk_0x16F2683693E537C9(), 120f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				iParam0->f_1 = unk_0x1C0640BA9A7327B3();
				iParam0->f_6 = 0x00000007;
				iParam0->f_5 = 0x00000001;
			}
		}
	}
}

int func_203(var uParam0)
{
	if ((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006)) && unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_204(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_10(unk_0x16F2683693E537C9()) && func_10(iParam0))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (func_209(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_208(unk_0x16F2683693E537C9(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0x00000000;
		}
		else if (func_205(iParam0, fParam3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_205(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0x16F2683693E537C9()) && func_10(iParam0))
	{
		if (func_207(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
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
				if (func_206(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_206(int iParam0, float fParam1)
{
	return func_177(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

int func_207(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_208(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x08D89CE2E20AE305(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_10(unk_0x16F2683693E537C9()) && func_10(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_212(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
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
				if (func_212(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_210(int iParam0, float fParam1, bool bParam2, bool bParam3)
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
				if (func_211(iParam0, fParam1))
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
			if (func_211(iParam0, fParam1))
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

int func_211(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_159(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_212(int iParam0, bool bParam1, int iParam2, float fParam3)
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

int func_213(int iParam0)
{
	if (func_157(iParam0, unk_0x16F2683693E537C9(), 6f, 0x00000001))
	{
		if (!unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			if (unk_0x1B3D109B39CC2C89(iParam0, unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_214()
{
	if (func_37(Local_199))
	{
		if (func_157(unk_0x16F2683693E537C9(), Local_199, 100f, 0x00000001) && !iLocal_194)
		{
			unk_0xD4D331DFE794EACD(joaat("trash"), 0x00000003);
			if (!unk_0x1F04E7FA44219580(joaat("trash")))
			{
				iLocal_194 = 0x00000001;
			}
		}
		else if (!func_157(unk_0x16F2683693E537C9(), Local_199, 120f, 0x00000001) && iLocal_194)
		{
			unk_0x058E3033265DBA9A(joaat("trash"));
			iLocal_194 = 0x00000000;
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, int iParam6, bool bParam7, float fParam8)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0x00000000:
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9(func_114(func_77()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 0x00000001;
					}
					else
					{
						*iParam2 = 0x00000002;
					}
				}
				else if (func_220(*iParam0) || func_219(*iParam0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9(func_114(func_77()));
					}
					*iParam2 = 0x00000003;
				}
				else
				{
					if (func_106(func_115(func_77(), bParam7), 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9(func_115(func_77(), bParam7));
					}
					if (func_77() != 0x00000021)
					{
						func_217(iParam0);
					}
					else
					{
						func_216(iParam0, iParam1);
					}
				}
				break;
			
			case 0x00000002:
			case 0x00000001:
				if ((!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000) && !func_220(*iParam0)) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x5A91F08DF773C39D(*iParam0, vParam5, fParam8, fParam8, 2f, 0x00000000, 0x00000001, 0x00000002))
					{
						func_125(iParam3, *iParam0, 0x00000001);
					}
					*iParam2 = 0x00000000;
				}
				break;
			
			case 0x00000003:
				if (!func_220(*iParam0) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x5A91F08DF773C39D(*iParam0, vParam5, fParam8, fParam8, 2f, 0x00000000, 0x00000001, 0x00000002))
					{
						func_125(iParam3, *iParam0, 0x00000001);
					}
					*iParam2 = 0x00000000;
				}
				break;
		}
	}
	else if (func_77() != 0x00000021)
	{
		func_217(iParam0);
	}
	else
	{
		func_216(iParam0, iParam1);
	}
}

void func_216(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_28)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (iVar0 != *iParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = unk_0x134B62B726CEC8E6(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_36(*iParam0, 0x00000001);
						func_36(*uParam1, 0x00000003);
						if (!unk_0xAF6690C489CC6203(*iParam0))
						{
							unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000001);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
						if (func_10(iVar2))
						{
							iVar0 = unk_0x96A5FE5834B81CE7(iVar2);
							if (unk_0x134B62B726CEC8E6(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_36(*iParam0, 0x00000001);
								func_36(*uParam1, 0x00000003);
								if (!unk_0xAF6690C489CC6203(*iParam0))
								{
									unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000001);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (iVar0 != *iParam0)
		{
			if (func_37(iVar0))
			{
				if (unk_0x134B62B726CEC8E6(iVar0) == func_218(func_77()))
				{
					func_6(iParam0);
					*iParam0 = iVar0;
					func_36(*iParam0, 0x00000001);
					unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000001);
				}
			}
		}
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000021:
			iVar0 = joaat("trash");
			break;
		
		case 0x00000022:
			iVar0 = joaat("towtruck");
			break;
		
		case 0x0000004E:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && func_37(iParam0))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x2709213DA9C091FF(iVar0))
				{
					if (unk_0xED55EA714F84A53E(iVar0, iParam0))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && func_37(iParam0))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x6D18156F72BE0773(iVar0, iParam0))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_221()
{
	func_215(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0x00000000, 0x41000000);
	func_155();
	func_238();
	func_214();
	switch (iLocal_69)
	{
		case 0x00000000:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000 && !func_237())
				{
					func_117(&iLocal_182, vLocal_186, 0x00000001);
					func_121("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_120(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_227();
			if (func_225(iLocal_200, vLocal_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0x00000000, 0x00000000, 0x40C00000))
			{
				unk_0x8B4C4CA774181102(8f, 5f, 0x00000004);
				iLocal_69 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			func_222();
			func_7(&iLocal_182);
			func_7(&iLocal_183);
			if (func_116(0x40400000, 0x00000001))
			{
				func_110(0x00000000);
			}
			break;
		
		case 0x00000003:
			if (func_37(iLocal_200))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_200, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_200, 0xFFFFFFFF);
				}
				else
				{
					func_109(iLocal_200, vLocal_186, 146.5443f, 0x00000000, 0x00000001);
					func_40(0x00000001, 0x00000001, 0x00000001);
					iLocal_69 = 0x00000001;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (func_224(iVar1))
			{
				func_223(iVar1);
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_79(iVar0) != iParam0)
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

int func_224(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_79(iVar0) != iParam0)
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

int func_225(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if ((iParam4 == 0x00000001 || iParam4 == 0x00000002) || iParam4 == 0x00000003)
	{
		if (iParam3 == 0x00000000)
		{
			func_117(iParam2, vParam1, 0x00000001);
			if (!bParam8)
			{
				if (func_37(iParam0))
				{
					if (unk_0x5A91F08DF773C39D(iParam0, vParam1, fParam9, fParam9, 2f, 0x00000001, 0x00000001, 0x00000000))
					{
						return 0x00000001;
					}
				}
			}
			else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, fParam9, fParam9, 2f, 0x00000001, 0x00000001, 0x00000002))
			{
				return 0x00000001;
			}
			if (func_106(func_114(func_77()), 0x00000000, 0x00000000))
			{
				unk_0x2F23E8033F1ADDD9(func_114(func_77()));
			}
			if (!func_226())
			{
				func_121(func_115(func_77(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0x00000000)
	{
		if (!*iParam6)
		{
			if (func_106(func_115(func_77(), 0x00000000), 0x00000000, 0x00000000))
			{
				unk_0x2F23E8033F1ADDD9(func_115(func_77(), 0x00000000));
			}
			func_105(func_114(func_77()), 0x00001D4C, 0x00000000);
			*iParam6 = 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_226()
{
	return Global_181EC.f_159 > 0x00000000;
}

void func_227()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar2 = func_79(iVar0);
		if (!unk_0xEB6A8945D1AC98A1(iVar2))
		{
			if (func_78(iVar2, 0x00000000))
			{
				if (!bVar1)
				{
					if (func_157(unk_0x16F2683693E537C9(), iVar2, 5f, 0x00000001))
					{
						if (!func_237())
						{
							func_232(iVar0);
							bVar1 = 0x00000001;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0x00000000)
					{
						func_98(&uLocal_205, iVar0, iVar2, "MICHAEL", 0x00000000, 0x00000001);
					}
					else if (iVar0 == 0x00000001)
					{
						func_98(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0x00000000, 0x00000001);
					}
					else if (iVar0 == 0x00000002)
					{
						func_98(&uLocal_205, iVar0, iVar2, "TREVOR", 0x00000000, 0x00000001);
					}
					iLocal_374[iVar0] = 0x00000001;
				}
			}
			if (!func_224(iVar2))
			{
				if (func_78(iVar2, 0x00000000))
				{
					if (func_231(iVar2) || func_229(iVar2))
					{
						if (func_228(iVar2, 0x00000000))
						{
							unk_0x73270B3C9CC833FD(iVar2, 0x00000001, 0x00000001);
							unk_0x11AD11297DC58CC7(iVar2, 0x00000001);
							unk_0xA3BF0AA5A2608191(iVar2);
						}
					}
				}
			}
			else if (unk_0x9C77D2D0559097F0(iVar2, 0x00000001))
			{
				if (func_231(iVar2))
				{
					if (unk_0xD1960163A3042274(iVar2, 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(iVar2, 0xB41F1A34) != 0x00000000)
					{
						if (unk_0xD1B4D22E0BA9B0C8(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0xE9362E4D600DD12A(iVar2, unk_0x6937EA2286828455(iVar2, 0x00000000), vLocal_186, 20f, 0x00000000, 0x00000000, 0x020C0025, 2f, 10f);
						}
						else
						{
							unk_0x10FEEAFF01E32639(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_229(iVar2))
				{
					if (func_37(Local_199))
					{
						if (!func_157(iVar2, Local_199, 17f, 0x00000001))
						{
							if (unk_0xD1960163A3042274(iVar2, 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(iVar2, 0xB41F1A34) != 0x00000000)
							{
								unk_0x60274E99F9B27DEA(iVar2, unk_0x6937EA2286828455(iVar2, 0x00000000), Local_199, 0x00000003, 20f, 0x000C0024, 2f, 0.5f, 0x00000001);
							}
						}
					}
				}
				else
				{
					func_223(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_79(iVar0) != iParam0)
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

int func_229(int iParam0)
{
	int iVar0;
	
	if (!func_230())
	{
		if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (func_37(iVar0))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, joaat("trash")))
				{
					return 0x00000000;
				}
				if (unk_0xC42A92762C58E1B9(iParam0, iVar0, 0x00000000) && unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == iParam0)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_230()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_231(int iParam0)
{
	if (!func_230())
	{
		if ((unk_0xC844350D5D58C99A(Local_199) && unk_0xDF1306B443CD3D15(Local_199, 0x00000000)) && !unk_0x5A91F08DF773C39D(Local_199, vLocal_186, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
		{
			if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_199, 0x00000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (unk_0xC42A92762C58E1B9(iParam0, Local_199, 0x00000000) && unk_0xA30B8362589C124A(Local_199, 0xFFFFFFFF, 0x00000000) == iParam0)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_232(int iParam0)
{
	if (iLocal_68 > 0x00000001)
	{
		if (iLocal_70 > 0x00000000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_73[iParam0 /*8*/].f_7, 0x00000000) && iLocal_71 == 0x00000001)
			{
				if (!unk_0xD17F06053799A7CA())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0x00000000], 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&(Local_73[iParam0 /*8*/].f_7), 0x00000000);
					}
				}
			}
		}
		else
		{
			if ((unk_0xEAE0D21A50E6C7F4(Local_73[iParam0 /*8*/].f_7, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_73[iParam0 /*8*/].f_7, 0x00000001)) && iLocal_71 == 0x00000001)
			{
				if (!unk_0xD17F06053799A7CA())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0x00000001], 0x00000007, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&(Local_73[iParam0 /*8*/].f_7), 0x00000001);
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_73[iParam0 /*8*/].f_7, 0x00000005))
			{
				if (func_235(iLocal_200, vLocal_186, 0x00000001) < 15f && iLocal_71 == 0x00000001)
				{
					if (!unk_0xD17F06053799A7CA())
					{
						if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0x00000005], 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(Local_73[iParam0 /*8*/].f_7), 0x00000005);
						}
					}
				}
			}
			switch (func_29(unk_0x16F2683693E537C9()))
			{
				case 0x00000000:
					if (iParam0 == 0x00000001)
					{
						if (!func_234(0x00000002))
						{
							func_233(iParam0, 0x00000002);
						}
					}
					else if (iParam0 == 0x00000002)
					{
						if (!func_234(0x00000004))
						{
							func_233(iParam0, 0x00000004);
						}
					}
					break;
				
				case 0x00000001:
					if (iParam0 == 0x00000000)
					{
						if (!func_234(0x00000002))
						{
							func_233(iParam0, 0x00000002);
						}
					}
					else if (iParam0 == 0x00000002)
					{
						if (!func_234(0x00000003))
						{
							func_233(iParam0, 0x00000003);
						}
					}
					break;
				
				case 0x00000002:
					if (iParam0 == 0x00000001)
					{
						if (!func_234(0x00000003))
						{
							func_233(iParam0, 0x00000003);
						}
					}
					else if (iParam0 == 0x00000000)
					{
						if (!func_234(0x00000004))
						{
							func_233(iParam0, 0x00000004);
						}
					}
					break;
				}
			}
	}
}

void func_233(int iParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_73[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_375 != 0xFFFFFFFF)
		{
			if (!unk_0xD17F06053799A7CA())
			{
				if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][iParam1], 0x00000007, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Local_73[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_237() && !unk_0xD17F06053799A7CA())
		{
			iLocal_375 = unk_0x1C0640BA9A7327B3();
		}
		else
		{
			iLocal_375 = 0xFFFFFFFF;
		}
	}
}

int func_234(int iParam0)
{
	if ((unk_0xEAE0D21A50E6C7F4(Local_73[0x00000000 /*8*/].f_7, iParam0) || unk_0xEAE0D21A50E6C7F4(Local_73[0x00000001 /*8*/].f_7, iParam0)) || unk_0xEAE0D21A50E6C7F4(Local_73[0x00000002 /*8*/].f_7, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_235(int iParam0, vector3 vParam1, bool bParam2)
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

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_83(sParam2, iParam3, 0x00000000);
}

int func_237()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_238()
{
	if (func_107(unk_0x16F2683693E537C9(), vLocal_186, 220f))
	{
		if (!iLocal_203 && !func_107(unk_0x16F2683693E537C9(), vLocal_186, 100f))
		{
			iLocal_203 = func_153(&iLocal_202, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 0x00000001);
		}
	}
	else if (func_107(unk_0x16F2683693E537C9(), vLocal_186, 240f))
	{
		if (iLocal_203)
		{
			func_6(&iLocal_202);
			iLocal_203 = 0x00000000;
		}
	}
}

void func_239()
{
	func_215(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0x00000000, 0x41000000);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0x00000000:
			if (func_122(iLocal_68, bLocal_28))
			{
				func_125(&iLocal_182, Local_199, 0x00000001);
				func_121("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_227();
			if (func_37(Local_199))
			{
				func_242(&uLocal_56, Local_199, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			}
			if (!bLocal_190)
			{
				if (func_341(Local_197) && unk_0x36646919F20EAFFC(Local_197))
				{
					func_241();
				}
				if (func_341(Local_198) && unk_0x36646919F20EAFFC(Local_198))
				{
					func_241();
				}
			}
			if (func_37(iLocal_200))
			{
				if ((iLocal_71 == 0x00000001 || iLocal_71 == 0x00000002) || iLocal_71 == 0x00000003)
				{
					unk_0x8B4C4CA774181102(5f, 5f, 0x00000004);
					iLocal_69 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			func_7(&iLocal_182);
			func_145(&uLocal_56, 0x00000000, 0x00000000);
			func_110(0x00000000);
			break;
		
		case 0x00000003:
			func_8(&Local_197);
			func_8(&Local_198);
			if (func_37(Local_199))
			{
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_199, 0xFFFFFFFF);
			}
			func_240(0x00000001);
			func_40(0x00000001, 0x00000001, 0x00000001);
			iLocal_69 = 0x00000001;
			break;
	}
}

void func_240(bool bParam0)
{
	unk_0x15EA7F4313456B1D(0x00000001, bParam0);
	unk_0x15EA7F4313456B1D(0x00000002, bParam0);
	unk_0x15EA7F4313456B1D(0x00000003, bParam0);
	unk_0x15EA7F4313456B1D(0x00000004, bParam0);
	unk_0x15EA7F4313456B1D(0x00000005, bParam0);
	if (bParam0)
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(0x00000005);
	}
	else
	{
		unk_0x34D79252800B23FF(0x00000000);
		unk_0x51B096AAC60548C1(0f);
	}
}

void func_241()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0x00000000:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 0x00000001:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 0x00000002:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_236(&uLocal_205, "FBIPRAU", sVar0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	if (bLocal_190)
	{
		unk_0x8B4C4CA774181102(8f, 8f, 0x00000004);
	}
}

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_243(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_243(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_244(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_244(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_145(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_245(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_245(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_146(iVar0))
	{
		func_269();
	}
	if (func_268(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_263(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_260(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_250(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_146(iVar0))
							{
								func_249(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_248(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_250(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_146(iVar0))
						{
							func_249(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_248(0x00000001);
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
				if (func_146(sParam3))
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
						func_145(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_145(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_145(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_145(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_145(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_145(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_263(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_145(uParam0, iVar0, 0x00000000);
	}
}

void func_246(var uParam0)
{
	if (func_268(unk_0x16F2683693E537C9()))
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

int func_247(var uParam0)
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

int func_248(bool bParam0)
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

void func_249(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_250(char* sParam0)
{
	if (!func_251(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_146(sParam0)) || func_146("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_248(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_248(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_248(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_69(0x00000000))
	{
		return 0x00000000;
	}
	if (func_259())
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
	if ((func_258() || func_257(Global_440000.f_38DB3)) || func_256())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_255(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_254(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_252(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_252(int iParam0)
{
	if (iParam0 != func_88())
	{
		if (func_253(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_253(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
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

int func_254(int iParam0, int iParam1)
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

int func_255(int iParam0, int iParam1)
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

var func_256()
{
	return Global_2564C8.f_11;
}

bool func_257(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_258()
{
	return Global_2564C8.f_10;
}

bool func_259()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_260(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_145(uParam0, 0x00000000, 0x00000000);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_261())
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

bool func_261()
{
	return func_262(unk_0xD803B885F5E47A62());
}

int func_262(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_247(uParam0))
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
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_267(bParam1, bParam2, bParam3))
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
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_266(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_267(bParam1, bParam2, bParam3))
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
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_264(bParam1, bParam2, bParam3))
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
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_251(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_269();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
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

int func_268(int iParam0)
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

void func_269()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_270()
{
	switch (iLocal_69)
	{
		case 0x00000000:
			if (func_122(iLocal_68, 0x00000000))
			{
				func_284();
				func_282(0x00000021);
				unk_0x34D79252800B23FF(0x00000002);
				unk_0x51B096AAC60548C1(0.1f);
				if (func_357())
				{
					func_279(0x00000000, 0xFFFFFFFF, 0x00000001);
					func_41(0x000001F4, 0x00000001);
					iLocal_69 = 0x00000002;
				}
				else
				{
					if (func_33(0x00000000))
					{
						func_124(unk_0x16F2683693E537C9(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_272(1228.635f, -348.4277f, 68.0929f, 0x42480000, 0x0000000C, 0x00001388, 0x00000000, 0x00000000);
						func_41(0x000001F4, 0x00000001);
					}
					func_271();
					if (iLocal_68 == 0x00000002)
					{
						iLocal_69 = 0x00000000;
					}
					else
					{
						iLocal_69 = 0x00000002;
					}
				}
			}
			break;
		
		case 0x00000002:
			func_110(0x00000000);
			break;
	}
}

void func_271()
{
}

void func_272(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xF0681B7E63456337(vParam0, fParam1, iParam2, 0x0000007F);
	if (unk_0xBD054C76E6F4158B(uVar0))
	{
		iVar1 = (unk_0x1C0640BA9A7327B3() + iParam3);
		while (!unk_0x07441E56330B63E3(uVar0) && unk_0x1C0640BA9A7327B3() < iVar1)
		{
			if (bParam5)
			{
				func_274(0x00000000);
			}
			if (bParam4)
			{
				func_273();
			}
			SYSTEM::WAIT(0x00000000);
		}
		if (unk_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		unk_0x51F8DBE54C75AE47(uVar0);
	}
}

void func_273()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_274(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_69(0x00000000))
		{
			func_275(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_275(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_277())
		{
			func_276(0x00000001, 0x00000001);
		}
		else
		{
			func_276(0x00000000, 0x00000000);
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
	if (!func_51())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0x00000000))
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

bool func_277()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_278()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (func_357() && func_281())
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
		func_280(0x00000000);
	}
}

void func_280(int iParam0)
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

bool func_281()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_282(int iParam0)
{
	Global_17187 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000048:
			func_283(0x00000002);
			func_283(0x00000004);
			break;
		
		case 0x00000049:
			func_283(0x00000000);
			func_283(0x00000001);
			func_283(0x00000007);
			break;
		
		case 0x0000005C:
			func_283(0x0000000A);
			func_283(0x00000009);
			func_283(0x0000000D);
			func_283(0x00000006);
			break;
		
		case 0x00000044:
			func_283(0x0000000B);
			break;
		
		case 0x0000004E:
			func_283(0x0000000E);
			break;
		
		case 0x0000004F:
			func_283(0x00000003);
			break;
		
		default:
			break;
	}
}

void func_283(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_17187, iParam0);
}

void func_284()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			func_285(iVar0, unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0xD9522BA9E27E1349(iVar0), 0x00000018, 0x00000000);
		}
	}
}

void func_285(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_332(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_327(iParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_320(iParam3, &Var0, vParam1, fParam2, func_326(iParam0));
		func_286(iParam3, iParam0, 0x00000000);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_317(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_306();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_305(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_287(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_288(iParam0))
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
	func_327(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_288(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_303(iParam0, 0x00000000, 0x00000000)) || func_303(iParam0, 0x00000001, 0x00000000)) || func_303(iParam0, 0x00000002, 0x00000000)) || func_326(iParam0) != 0x00000091) || func_302(iParam0)) || func_301(iParam0)) || func_300(iParam0)) || func_299(iParam0)) || !func_289(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_301(iParam0))
		{
		}
		if (func_301(iParam0))
		{
		}
		if (func_303(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_303(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_303(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_326(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_289(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_290(iParam0, 0x00000000))
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

int func_290(int iParam0, bool bParam1)
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
		if (!func_298())
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
		if ((((!func_297() && !func_296()) && !func_295()) && !func_294()) && !func_298())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_295())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_293(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_291(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_292())
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

int func_292()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_293(int iParam0)
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

int func_294()
{
	return 0x00000000;
}

int func_295()
{
	return 0x00000001;
}

int func_296()
{
	return 0x00000001;
}

int func_297()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_298()
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

int func_299(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_290(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
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

int func_302(int iParam0)
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

int func_303(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_304(iParam1, iVar0, &sVar1, &iVar2))
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

int func_304(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_305(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

var func_306()
{
	var uVar0;
	
	func_316(&uVar0, unk_0x4460E481B9E33ADA());
	func_315(&uVar0, unk_0x8D199E381D262EEF());
	func_314(&uVar0, unk_0xD8A54335F18763BA());
	func_309(&uVar0, unk_0x972A296334C9D57B());
	func_308(&uVar0, unk_0x118229AD063C3C1D());
	func_307(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_307(var uParam0, int iParam1)
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

void func_308(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_313(*uParam0);
	iVar1 = func_311(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_310(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_310(int iParam0, int iParam1)
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

var func_311(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_312(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_312(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_313(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_314(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_315(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_317(var uParam0, int iParam1)
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
			uParam0->f_4 = func_318(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(0x00000002, 0x00000001);
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
			if (func_298())
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
			if (func_298())
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
		if (!func_15(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_15(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_15(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_319(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_319(int iParam0, var uParam1, int iParam2)
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

void func_320(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_317(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_325(iParam0);
			func_324(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_321(iParam0, 0x00000001);
		}
	}
}

void func_321(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_323(iParam0, 0x00000000))
		{
			func_322(iParam0, 0x00000001, 0x00000000);
			func_322(iParam0, 0x00000002, 0x00000000);
			func_322(iParam0, 0x00000003, 0x00000000);
			func_322(iParam0, 0x00000004, 0x00000000);
			func_322(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_322(iParam0, 0x00000000, 0x00000000);
	}
}

void func_322(int iParam0, int iParam1, bool bParam2)
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

bool func_323(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_324(var uParam0, var uParam1)
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

void func_325(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_317(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_321(iParam0, 0x00000000);
		}
	}
}

int func_326(int iParam0)
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

void func_327(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_331(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_330(uParam1->f_42))
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
		func_329(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_328(iVar0 + 1));
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

int func_328(int iParam0)
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

int func_329(int iParam0, var uParam1, var uParam2)
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

int func_330(int iParam0)
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

void func_331(var uParam0)
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

void func_332(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_325(iParam0);
	func_321(iParam0, 0x00000000);
}

void func_333()
{
	func_336();
	func_334();
}

void func_334()
{
	if (!iLocal_188)
	{
		if (func_37(iLocal_200))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_200, 0x00000000))
			{
				func_66(iLocal_200, 0xFFFFFFFF);
				func_65(iLocal_200, 0x0000013E);
				iLocal_188 = 0x00000001;
			}
		}
	}
	if (!iLocal_189)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
			func_335(0x00000140, 0x00000000);
			iLocal_189 = 0x00000001;
		}
	}
	else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		func_64(0x00000000, 0x00000140);
		iLocal_189 = 0x00000000;
	}
}

void func_335(int iParam0, bool bParam1)
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

void func_336()
{
}

void func_337()
{
	if (!bLocal_28 && iLocal_68 != 0x00000005)
	{
		if (iLocal_68 > 0x00000000)
		{
			func_338();
		}
	}
}

void func_338()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_200))
	{
		if (!func_37(iLocal_201) && !func_37(Local_199))
		{
			func_340(0x00000001);
			return;
		}
		if (func_37(Local_199) && !func_157(unk_0x16F2683693E537C9(), Local_199, fVar0, 0x00000001))
		{
			func_340(0x00000002);
		}
	}
	else
	{
		iVar1 = 0x00000000;
		if (!func_157(unk_0x16F2683693E537C9(), iLocal_200, fVar0, 0x00000001))
		{
			iVar1++;
		}
		if (func_37(iLocal_201))
		{
			if (!func_157(unk_0x16F2683693E537C9(), iLocal_201, fVar0, 0x00000001))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_199))
		{
			if (!func_157(unk_0x16F2683693E537C9(), Local_199, fVar0, 0x00000001))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 0x00000003)
		{
			func_340(0x00000002);
			return;
		}
		iVar1 = 0x00000000;
		if (func_339(iLocal_200))
		{
			iVar1++;
		}
		if (func_37(iLocal_201))
		{
			if (func_339(iLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_199))
		{
			if (func_339(Local_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 0x00000003)
		{
			func_340(0x00000003);
			return;
		}
	}
}

int func_339(int iParam0)
{
	if (func_37(iParam0))
	{
		if (((unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(iParam0, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000002, 0x00007530)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00009C40))
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

void func_340(int iParam0)
{
	unk_0x790015DC92C918E2();
	func_61();
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			sLocal_179 = "PRA_FWRECK";
			break;
		
		case 0x00000002:
			sLocal_179 = "PRA_FFAR";
			break;
		
		case 0x00000003:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 0x00000005;
	iLocal_69 = 0x00000000;
}

int func_341(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_342()
{
	if (!func_102(0x00000024))
	{
		func_343(0x00000015, 0x00000000, 0x00000000);
	}
}

void func_343(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_355(iParam0, 0x00000000, 0x00000000))
		{
			if (iParam2 && Global_181EC.f_12[iParam0])
			{
				if (func_354(iParam0) == 0x00000003 && !func_353(iParam0))
				{
					func_352(iParam0);
					func_351(iParam0, 0x00000000, 0x00000000);
					func_345(iParam0, 0x00000001, 0x00000000);
					func_344(iParam0);
				}
				else
				{
					func_351(iParam0, 0x00000001, 0x00000000);
					func_344(iParam0);
				}
			}
			else
			{
				func_351(iParam0, 0x00000000, 0x00000000);
				func_345(iParam0, 0x00000001, 0x00000000);
				func_344(iParam0);
			}
		}
		else
		{
			func_345(iParam0, 0x00000001, 0x00000000);
			func_344(iParam0);
		}
	}
	else if (func_355(iParam0, 0x00000000, 0x00000000))
	{
		func_345(iParam0, 0x00000000, 0x00000000);
		func_345(iParam0, 0x00000001, 0x00000000);
		func_344(iParam0);
	}
}

void func_344(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_345(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0x00000000)
		{
			iVar0 = func_348(func_349(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_346(func_349(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_347(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_47();
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

int func_348(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_347(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_349(int iParam0)
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

int func_350()
{
	return Global_7830;
}

void func_351(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0x00000000)
		{
			iVar0 = func_348(func_349(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_346(func_349(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_352(int iParam0)
{
	if (Global_181EC.f_12[iParam0])
	{
		func_351(iParam0, 0x0000000A, 0x00000001);
		func_351(iParam0, 0x00000013, 0x00000001);
	}
}

bool func_353(int iParam0)
{
	return func_355(iParam0, 0x00000005, 0x00000001);
}

int func_354(int iParam0)
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

int func_355(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_348(func_349(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_356(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_357())
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
		func_280(0x00000001);
	}
}

int func_357()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_358()
{
	func_373();
	func_371();
	func_364();
	func_361();
	func_359();
}

void func_359()
{
	iLocal_374[0x00000000] = 0x00000000;
	iLocal_374[0x00000001] = 0x00000000;
	iLocal_374[0x00000002] = 0x00000000;
	Local_73[0x00000000 /*8*/] = { func_360("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[0x00000001 /*8*/] = { func_360("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[0x00000002 /*8*/] = { func_360("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_360(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 0x00000006;
	Var0[0x00000000] = sParam0;
	Var0[0x00000001] = sParam1;
	Var0[0x00000005] = sParam2;
	Var0[0x00000002] = sParam3;
	Var0[0x00000003] = sParam4;
	Var0[0x00000004] = sParam5;
	return Var0;
}

void func_361()
{
	Local_46[0x00000000 /*25*/] = { func_363(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0x00000000) };
	func_362(&(Local_46[0x00000000 /*25*/]), vLocal_185, 0x00000000, 15f, 5f, 270f, 0x00000003, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_46[0x00000001 /*25*/] = { func_363(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0x00000000) };
	func_362(&(Local_46[0x00000001 /*25*/]), vLocal_185, 0x00000000, 15f, 10f, 270f, 0x00000003, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_46[0x00000002 /*25*/] = { func_363(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0x00000000) };
	func_362(&(Local_46[0x00000002 /*25*/]), vLocal_185, 0x00000000, 15f, 10f, 270f, 0x00000003, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_46[0x00000003 /*25*/] = { func_363(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0x00000000) };
	func_362(&(Local_46[0x00000003 /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[0x00000004 /*25*/] = { func_363(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0x00000000) };
	func_362(&(Local_46[0x00000004 /*25*/]), vLocal_185, 0x00000000, 5f, 30f, 128.1732f, 0x00000003, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_46[0x00000005 /*25*/] = { func_363(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[0x00000005 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 0x00000001, 15f, 2f, 128.3915f, 0x00000001, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_46[0x00000006 /*25*/] = { func_363(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[0x00000006 /*25*/]), 930.7186f, -494.9253f, 58.616f, 0x00000001, 15f, 2f, 119.6518f, 0x00000001, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_46[0x00000007 /*25*/] = { func_363(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[0x00000007 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 0x00000001, 15f, 2f, 162.7219f, 0x00000001, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[0x00000008 /*25*/] = { func_363(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0x00000000) };
	func_362(&(Local_46[0x00000008 /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[0x00000009 /*25*/] = { func_363(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[0x00000009 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 0x00000001, 15f, 2f, 228.1176f, 0x00000001, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_46[0x0000000A /*25*/] = { func_363(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0x00000000) };
	func_362(&(Local_46[0x0000000A /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[0x0000000B /*25*/] = { func_363(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0x00000000) };
	func_362(&(Local_46[0x0000000B /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[0x0000000C /*25*/] = { func_363(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[0x0000000C /*25*/]), 1020.251f, -736.815f, 56.6235f, 0x00000001, 15f, 2f, 220.7804f, 0x00000001, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_46[0x0000000D /*25*/] = { func_363(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0x00000000) };
	func_362(&(Local_46[0x0000000D /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[0x0000000E /*25*/] = { func_363(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0x00000000) };
	func_362(&(Local_46[0x0000000E /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 12.1103f, 0x00000003, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_46[0x0000000F /*25*/] = { func_363(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0x00000000) };
	func_362(&(Local_46[0x0000000F /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[0x00000010 /*25*/] = { func_363(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0x00000000) };
	func_362(&(Local_46[0x00000010 /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[0x00000011 /*25*/] = { func_363(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0x00000000) };
	func_362(&(Local_46[0x00000011 /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[0x00000012 /*25*/] = { func_363(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0x00000000) };
	func_362(&(Local_46[0x00000012 /*25*/]), vLocal_185, 0x00000000, 15f, 2f, 270f, 0x00000003, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_187 = 0x00000013;
}

void func_362(var uParam0, vector3 vParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, vector3 vParam7, vector3 vParam8)
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_A = iParam6;
	uParam0->f_B = { vParam7 };
	uParam0->f_E = { vParam8 };
}

struct<25> func_363(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	struct<25> Var0;
	
	Var0.f_9 = 0x00000001;
	Var0.f_A = 0x00000003;
	Var0 = { vParam0 };
	Var0.f_13 = { vParam1 };
	Var0.f_16 = fParam2;
	Var0.f_17 = iParam3;
	return Var0;
}

void func_364()
{
	vector3 vVar0[6];
	
	vVar0[0x00000000 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	vVar0[0x00000001 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	vVar0[0x00000002 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	vVar0[0x00000003 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	vVar0[0x00000004 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	vVar0[0x00000005 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_365(&vVar0, 0x00000006);
}

void func_365(var uParam0, int iParam1)
{
	int iVar0;
	
	func_370(&uLocal_74);
	iVar0 = 0x00000000;
	while (iVar0 <= (iParam1 - 0x00000001))
	{
		func_369(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_368(&uLocal_74);
	func_366(&uLocal_126, &uLocal_74, 50f);
}

void func_366(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (uParam1->f_2E < 0x00000003)
	{
	}
	iVar0 = (uParam1->f_2E - 0x00000001);
	iVar1 = 0x00000000;
	iVar2 = 0x00000001;
	uParam0->f_2E = uParam1->f_2E;
	while (iVar1 < uParam1->f_2E)
	{
		vVar3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		vVar4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		vVar3 = { vVar3 / FtoV(SYSTEM::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)))) };
		vVar4 = { vVar4 / FtoV(SYSTEM::SQRT(((vVar4.x * vVar4.x) + (vVar4.y * vVar4.y)))) };
		vVar5 = { vVar3 - vVar4 };
		vVar5 = { vVar5 / FtoV(SYSTEM::SQRT(((vVar5.x * vVar5.x) + (vVar5.y * vVar5.y)))) };
		if (func_367(uParam1, *(uParam1[iVar1 /*3*/]) + vVar5))
		{
			vVar5 = { -vVar5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + vVar5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_2E);
	}
}

bool func_367(var uParam0, struct<2> Param1, Vector3 vParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2E < 0x00000003)
	{
	}
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = (uParam0->f_2E - 0x00000001);
	while (iVar1 < uParam0->f_2E)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_368(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_33 == 0x00000000)
	{
	}
	if (uParam0->f_2E < 0x00000003)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E)
	{
		uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_32)
		{
			uParam0->f_32 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
	uParam0->f_33 = 0x00000000;
}

void func_369(var uParam0, vector3 vParam1)
{
	if (uParam0->f_33 == 0x00000000)
	{
	}
	if (uParam0->f_2E >= 0x0000000F)
	{
	}
	*(uParam0[uParam0->f_2E /*3*/]) = { vParam1 };
	uParam0->f_2E++;
}

void func_370(var uParam0)
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0x00000000;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 0x00000001;
}

void func_371()
{
	Local_197 = { func_372(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_198 = { func_372(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_372(vector3 vParam0, float fParam1, int iParam2)
{
	struct<14> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_373()
{
	Local_199 = { func_374(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_374(vector3 vParam0, float fParam1, int iParam2)
{
	struct<6> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_375()
{
	func_240(0x00000001);
	func_386(0x00000001);
	unk_0xAB8E2DDC7AF955E0(joaat("trash"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("towtruck"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("s_m_y_garbage"), 0x00000000);
	func_63();
	func_385();
	func_384();
	func_376(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_376(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0xCD7D80FD792F9954("DRIVE", 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_ATTRACTOR", 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000001);
	func_38();
	func_383();
	func_382();
	func_381();
	func_380();
	func_222();
	if (bParam0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_200))
		{
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_200, 0x00000000))
					{
						vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
				}
			}
		}
		func_378();
		unk_0x790015DC92C918E2();
		func_2();
	}
	else
	{
		func_377();
	}
	unk_0xB8C3D2D6C4AAEF18(0x00000000);
	func_145(&uLocal_56, 0x00000000, 0x00000000);
	if (unk_0x9F4FE516EAACCFC5(iLocal_184))
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_184, 0x00000000);
	}
}

void func_377()
{
	func_3();
	func_6(&Local_199);
	func_6(&iLocal_201);
	func_6(&iLocal_200);
	func_5(&Local_197, 0x00000001, 0x00000000, 0x00000001);
	func_5(&Local_198, 0x00000001, 0x00000000, 0x00000001);
	func_6(&iLocal_202);
}

void func_378()
{
	Global_4CD7 = 0x00000000;
	func_379();
}

void func_379()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_380()
{
}

void func_381()
{
	if (iLocal_194)
	{
		unk_0x058E3033265DBA9A(joaat("trash"));
	}
}

void func_382()
{
}

void func_383()
{
	unk_0x71199B01895C6202(Local_199.f_5);
}

void func_384()
{
	func_343(0x00000015, 0x00000001, 0x00000000);
}

void func_385()
{
	Global_17187 = 0x00000000;
}

void func_386(int iParam0)
{
	Global_17732 = iParam0;
}

void func_387()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_33(0x00000000))
	{
		if (!func_388())
		{
			iVar0 = func_32();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_388()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

