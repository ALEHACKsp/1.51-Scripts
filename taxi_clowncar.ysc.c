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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	vector3 vLocal_230 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	float fLocal_255 = 0f;
	float fLocal_256 = 0f;
	float fLocal_257 = 0f;
	var uLocal_258[4] = { 0, 0, 0, 0 };
	var uLocal_259[4] = { 0, 0, 0, 0 };
	struct<429> Local_260 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<27> Local_262 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 3;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 3;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 5;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 1;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 4;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 4;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 4;
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
	var uLocal_330 = 1;
	var uLocal_331 = 2;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	vector3 vLocal_338[1] = {{ 0f, 0f, 0f } };
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	vector3 vLocal_341 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	bool bLocal_347 = 0;
	struct<28> Local_348 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 5;
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
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1097859072;
	var uLocal_395 = 1500;
	var uLocal_396 = 45;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 5;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
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
	uLocal_71 = unk_0xAD1355DD1E5D2D9B();
	uLocal_72 = unk_0x817B3657F78A517A();
	vLocal_77 = { 500f, 500f, 500f };
	fLocal_255 = 98f;
	fLocal_256 = 55f;
	fLocal_257 = 60f;
	iLocal_339 = 0x00000001;
	vLocal_341 = { -1284.367f, 295.7437f, 63.83044f };
	vLocal_342 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0x2EBF608FFE6CA406(0x00000043))
	{
		func_418(0x00000002);
		func_414();
	}
	unk_0x7798376279BB5369(0x00000001);
	func_401();
	while (0x00000001)
	{
		if (unk_0xC844350D5D58C99A(Local_260.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_260);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	func_7(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x16F2683693E537C9());
	if (iVar1 == 0x00000000)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 0x00000002)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 0x00000001)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_5(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x16F2683693E537C9());
	if (iVar0 == 0x00000000)
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	else if (iVar0 == 0x00000002)
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	else if (iVar0 == 0x00000001)
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	else
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 0x00000008, 0x00000000, "TaxiDispatch", 0x00000000, 0x00000001);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;
	
	if (func_400(&Local_260))
	{
		func_399(&Local_260);
		if (Local_260.f_19A > 0x00000000)
		{
			if (func_398(&Local_260, 0x00000000))
			{
				func_396();
			}
		}
		else if (func_395(&Local_260, 0x0000001F) > 5f)
		{
			func_418(0x00000002);
			func_414();
		}
	}
	else
	{
		func_373(&Local_260, &uLocal_392);
		func_372(&Local_260);
		func_371(&Local_260, &uLocal_340, 0x00000000);
		if (Local_260.f_19A < 0x00000009)
		{
			func_358(&Local_260, &Local_262, &uLocal_392);
		}
		if (Local_260.f_19A > 0x00000005 && !iLocal_343)
		{
			iLocal_343 = 0x00000001;
			Local_262.f_10[0x00000000 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_262.f_10[0x00000001 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_262.f_10[0x00000002 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_262.f_1A[0x00000000 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_262.f_1A[0x00000001 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_262.f_1A[0x00000002 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_260.f_19A > 0x00000002)
		{
			if (!func_357(&Local_260))
			{
				if (!iLocal_345)
				{
					if (func_356())
					{
						func_354(&Local_262);
						iLocal_345 = 0x00000001;
					}
				}
				func_324();
			}
			else
			{
				func_300(&Local_260, "Taxi Not Driveable", func_323(&Local_260));
			}
		}
		if (Local_260.f_19A > 0x00000003)
		{
			if (!bVar3)
			{
				if (unk_0xDF1306B443CD3D15(Local_260.f_4, 0x00000000))
				{
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000005)
					{
						if (!unk_0x437347B10A200C4B(Local_262.f_4[iVar0], 0x00000000))
						{
							if (unk_0xB87D13D0C064E9D1(Local_262.f_4[iVar0], Local_260.f_4, 0x00000001))
							{
								bVar3 = 0x00000001;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000005)
				{
					if (!unk_0x437347B10A200C4B(Local_262.f_4[iVar1], 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_262.f_4[iVar1]))
						{
							unk_0xA3BF0AA5A2608191(Local_262.f_4[iVar1]);
							unk_0xF82EA857DA10E0CD(&uVar2);
							unk_0xDD353D0E9C789D0E(&uVar2);
							unk_0xF3268524E9BE6D6E(0x00000000, Local_260.f_2, 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(uVar2);
							unk_0x78ADC381772E3D54(Local_262.f_4[iVar1], uVar2);
							unk_0xF82EA857DA10E0CD(&uVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_260.f_19A == 0x00000009)
		{
			func_276(&Local_260, 0x00000000, 0x00000001);
			func_275(&Local_260, &Local_262, 0x43480000);
		}
		switch (Local_260.f_19A)
		{
			case 0x00000000:
				func_274(&(vLocal_338[0x00000000 /*3*/]), "TAXI_SC_BN_10", 0x000000C8);
				func_273(&Local_260, &vLocal_338);
				func_271();
				func_269();
				func_268();
				func_267(&Local_260, 0x00000010, 4f, 0x00000000);
				func_264(&Local_260, vLocal_341, vLocal_342, &Local_262);
				func_263(&Local_260);
				func_262(&Local_260, 0x00000001);
				break;
			
			case 0x00000001:
				if (func_259())
				{
					func_258();
					func_238();
					func_237(&Local_260);
					func_235(&(Local_260.f_64), 0x00000008);
					func_235(&(Local_260.f_64), 0x00000800);
					func_235(&(Local_260.f_64), 0x00000100);
					Local_260.f_E = { vLocal_341 };
					Local_260.f_31 = 0x00000000;
					func_262(&Local_260, 0x00000003);
				}
				break;
			
			case 0x00000003:
				if (func_227(&Local_260, 0x00000003))
				{
					func_226(&Local_260, 0x00000001, 0x00000000);
					func_225(&uLocal_409, vLocal_341, 20f, 0x00000000);
					func_262(&Local_260, 0x00000005);
				}
				break;
			
			case 0x00000005:
				func_224();
				if (func_204(&Local_260, &Local_262))
				{
					unk_0x893A626C476B583D(Local_260.f_1AC, &(Local_260.f_2A), 0xFFFFFFFF);
					func_262(&Local_260, 0x0000000F);
				}
				break;
			
			case 0x0000000F:
				if (func_202(&Local_260, &Local_262))
				{
					func_198(&Local_260, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
					if (!unk_0x437347B10A200C4B(Local_262[0x00000000], 0x00000000))
					{
						unk_0x4E885A246A9D983A(Local_262[0x00000000], 0x0000001A, 0x00000001);
					}
					if (!unk_0x437347B10A200C4B(Local_262[0x00000001], 0x00000000))
					{
						unk_0x4E885A246A9D983A(Local_262[0x00000001], 0x0000001A, 0x00000001);
					}
					if (!unk_0x437347B10A200C4B(Local_262[0x00000002], 0x00000000))
					{
						unk_0x4E885A246A9D983A(Local_262[0x00000002], 0x0000001A, 0x00000001);
					}
					func_197(&Local_260);
					func_195(&Local_260, 0x00000000);
					func_194();
					func_192(&Local_260, 0x0000000B);
					func_267(&Local_260, 0x0000000A, 0x00000000, 0x00000000);
					func_267(&Local_260, 0x00000006, 0x00000000, 0x00000000);
					func_191();
					Local_260.f_24 = unk_0x79833B02DBD2A244(3f, 10f);
					func_189(&Local_262);
					func_262(&Local_260, 0x00000009);
				}
				if (unk_0xDF1306B443CD3D15(Local_260.f_4, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(Local_260.f_2, Local_260.f_4, 0x00000000))
					{
						func_185(&Local_260, &Local_262);
						func_262(&Local_260, 0x00000005);
					}
				}
				break;
			
			case 0x00000009:
				if (!bLocal_344)
				{
				}
				func_182(&Local_260);
				if (func_139(&Local_260, &Local_262, &Local_348, &uLocal_351))
				{
					func_138(&Local_348, 0xFFFFFFFF, 0x00000001);
					if (func_137(&Local_262))
					{
						func_136(&Local_260, 0x00000000);
					}
					func_135(&Local_262);
					func_133(&Local_260);
					func_129(&Local_260);
					func_128(&Local_260);
					func_262(&Local_260, 0x0000001B);
				}
				break;
			
			case 0x0000001B:
				if (func_117(&Local_260, 0x00000001))
				{
					unk_0xF82EA857DA10E0CD(&uVar2);
					unk_0xDD353D0E9C789D0E(&uVar2);
					unk_0x96167B03C5A77156(0x00000000, Local_262.f_1A[0x00000000 /*3*/], 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
					if (unk_0x4742C50E93110B10(Local_260.f_1D, 4f, 0x00000001))
					{
						unk_0x4A35AD9FC803369E(0x00000000, Local_260.f_1D, 4f, 0x00000000);
					}
					else
					{
						unk_0xE655C47E46F9A7E4(0x00000000, 350.8689f, 0x00000000);
						unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0x00000000, 0x00000000);
					}
					unk_0x75ABDC5F81978924(uVar2);
					unk_0x78ADC381772E3D54(Local_260.f_3, uVar2);
					unk_0xFADC0A217229F6B5(Local_260.f_3, 0x00000001);
					func_262(&Local_260, 0x0000001D);
				}
				break;
			
			case 0x0000001D:
				if (!unk_0xEB6A8945D1AC98A1(Local_260.f_3))
				{
					if (func_116(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 0x00000001) < 3f)
					{
						unk_0x9DD8618CA5BF832D(Local_260.f_3, 0x0000003C, 0x00000001);
					}
				}
				if (func_81(&Local_260, &uLocal_399))
				{
					func_12(0x00000001, &Local_260, 0x00000000);
					func_267(&Local_260, 0x0000001F, 0x00000000, 0x00000000);
					func_262(&Local_260, 0x0000001E);
				}
				break;
			
			case 0x0000001E:
				if (!unk_0xEB6A8945D1AC98A1(Local_260.f_3))
				{
					if (func_116(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 0x00000001) < 3f)
					{
						unk_0x9DD8618CA5BF832D(Local_260.f_3, 0x0000003C, 0x00000001);
					}
					if ((unk_0x5A91F08DF773C39D(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, 0x00000000, 0x00000001, 0x00000001) || func_10(Local_260.f_3, 0x00000001) > 50f) || func_395(&Local_260, 0x0000001F) > 30f)
					{
						if (unk_0x5A91F08DF773C39D(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, 0x00000000, 0x00000001, 0x00000001))
						{
						}
						if (func_10(Local_260.f_3, 0x00000001) > 50f)
						{
						}
						if (func_395(&Local_260, 0x0000001F) > 30f)
						{
						}
						unk_0x11AD11297DC58CC7(Local_260.f_3, 0x00000000);
						unk_0x0E2400AB9174FA81(0x000000FF, Local_260.f_19D, 0x6F0783F5);
						unk_0x6DAD7906B73F064D(&(Local_260.f_3));
						func_414();
					}
				}
				else
				{
					func_414();
				}
				break;
			}
	}
}

float func_10(int iParam0, int iParam1)
{
	return func_11(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, iParam1);
}

float func_11(int iParam0, int iParam1, int iParam2)
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
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, iParam2);
}

void func_12(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_57(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 0x0000013D, 0x00000001);
		}
	}
	else
	{
		func_55(0x00000001, 0x00000000);
	}
	func_13(uParam1, bParam2);
}

void func_13(var uParam0, bool bParam1)
{
	func_399(uParam0);
	if (func_54())
	{
		func_52();
	}
	func_50();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	func_45(0x00000000);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000000);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_42(uParam0->f_E, 0x00000001);
	func_40(uParam0->f_E, 0x00000001, 0x42700000);
	func_39(&(uParam0->f_F4), 0x00000003);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
	if (func_36())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_26(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	if (func_25(Global_1B416.f_4A94, 0x00000004))
	{
		func_23(&(Global_1B416.f_4A94), 0x00000004);
		unk_0xAB8E2DDC7AF955E0(func_22(), 0x00000000);
	}
	if (bParam1)
	{
		func_21(uParam0);
	}
	func_20(uParam0);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	unk_0x8D17794CE3273D70("oddjobs@taxi@");
	unk_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (unk_0x58424C49F8924842())
	{
		func_18(uParam0->f_19B);
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x11E0F00830F70E15(SYSTEM::ROUND((func_14(&iLocal_82) * 1000f)), 0x0000000C, 0x00000000);
}

float func_14(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_15(bool bParam0)
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

bool func_16(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_17(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_18(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0x00000000] != 0x00000000)
	{
		MemCopy(&uVar0, {func_19(iParam0)}, 0x00000006);
		if (!unk_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_19(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_20(var uParam0)
{
	unk_0x5A5CC21130AD387A(uParam0->f_33[0x00000000]);
}

void func_21(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (!unk_0x405E212DDE472467(uParam0->f_3, 0x00000000))
			{
				unk_0x61F0DE0226FF7252(uParam0->f_3);
			}
			unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000000);
			unk_0x0E2400AB9174FA81(0x000000FF, uParam0->f_19D, 0x6F0783F5);
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0xC1000000);
			}
			else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0xC1000000);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0xC1000000);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0xC1000000);
			}
			unk_0x6DAD7906B73F064D(&(uParam0->f_3));
		}
	}
}

int func_22()
{
	return joaat("taxi");
}

void func_23(var uParam0, int iParam1)
{
	func_24(uParam0, iParam1);
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_26(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_35(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_34())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_33(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_35(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_33(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_31(unk_0xD803B885F5E47A62())) && !func_28(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_27()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_31(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_27()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_28(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_29(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_29(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_30();
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

int func_30()
{
	return Global_1407E9;
}

int func_31(int iParam0)
{
	if (func_28(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_32())
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

bool func_32()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_33(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, uParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

int func_34()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_35(int iParam0)
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

int func_36()
{
	if (!func_38() && !func_37())
	{
		if (!unk_0x04B2EAD6D5301B36(unk_0xA30EC016B12C03E4()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_37()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_38()
{
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_39(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_40(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_41(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_41(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0xF858EFDE1871B5F2(vVar0, vVar1, 0x00000000, 0x00000001);
	}
	else
	{
		unk_0xF5894FEB702E7E76(vVar0, vVar1, 0x00000001);
		unk_0xEFED0CD6E25037B9();
	}
}

Vector3 func_41(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_42(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_43(vParam0, func_44(), 0x00000000))
	{
		vVar0 = { func_41(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_41(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar1, iParam1, 0x00000001);
	}
}

bool func_43(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_44()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_45(int iParam0)
{
	if (func_49())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_48())
		{
			func_46(0x00000001, 0x00000001);
		}
		else
		{
			func_46(0x00000000, 0x00000000);
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
	if (!func_34())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_46(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_47(0x00000000))
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

int func_47(int iParam0)
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

bool func_48()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_49()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/] && !Global_175BD[iVar0 /*17*/].f_1)
		{
			if (Global_175BD[iVar0 /*17*/].f_3 == 0x00000000)
			{
				if ((Global_175BD[iVar0 /*17*/].f_5 != 0x00000058 && Global_175BD[iVar0 /*17*/].f_5 != 0x00000059) && Global_175BD[iVar0 /*17*/].f_5 != 0x0000005C)
				{
					func_51(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_51(int iParam0, bool bParam1)
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

void func_52()
{
	Global_4CD7 = 0x00000000;
	func_53();
}

void func_53()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_54()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			Global_1B416.f_4A94.f_16[0x00000000]++;
			func_56("Fares Completed ++ = ", Global_1B416.f_4A94.f_16[0x00000000]);
			break;
		
		case 0x00000001:
			Global_1B416.f_4A94.f_16[0x00000001]++;
			func_56("Fares Failed ++ = ", Global_1B416.f_4A94.f_16[0x00000001]);
			break;
		
		case 0x00000002:
			Global_1B416.f_4A94.f_16[0x00000002]++;
			func_56("Fares Accepted ++ ", Global_1B416.f_4A94.f_16[0x00000002]);
			break;
		
		case 0x00000003:
			Global_1B416.f_4A94.f_16[0x00000003]++;
			func_56("Fares Expired ++ ", Global_1B416.f_4A94.f_16[0x00000003]);
			break;
		
		case 0x0000000D:
			Global_1B416.f_4A94.f_16[0x0000000D]++;
			func_56("Passengers run ++ = ", Global_1B416.f_4A94.f_16[0x0000000D]);
			break;
		
		case 0x0000000E:
			Global_1B416.f_4A94.f_16[0x0000000E]++;
			func_56("Passenger Forced to Pay ++ = ", Global_1B416.f_4A94.f_16[0x0000000E]);
			break;
		
		case 0x00000004:
			if (iParam1 != 0x00000000)
			{
				if (iParam1 > Global_1B416.f_4A94.f_16[0x00000004])
				{
					Global_1B416.f_4A94.f_16[0x00000004] = iParam1;
					func_56("This distance ", iParam1);
					func_56(" is longer than current best", Global_1B416.f_4A94.f_16[0x00000004]);
				}
				else
				{
					func_56("Longest Distance Not Beat ", Global_1B416.f_4A94.f_16[0x00000004]);
				}
			}
			break;
		
		case 0x00000005:
			Global_1B416.f_4A94.f_16[0x00000005] = (Global_1B416.f_4A94.f_16[0x00000005] + iParam1);
			func_56("Total Distance w/ Passenger = ", Global_1B416.f_4A94.f_16[0x00000005]);
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000000)
			{
				Global_1B416.f_4A94.f_16[0x00000006]++;
			}
			else
			{
				Global_1B416.f_4A94.f_16[0x00000006] = (Global_1B416.f_4A94.f_16[0x00000006] + iParam1);
			}
			func_56("Wanted Levels ++ = ", Global_1B416.f_4A94.f_16[0x00000006]);
			break;
		
		case 0x00000007:
			if (iParam1 > 0x00000000)
			{
				Global_1B416.f_4A94.f_16[0x00000007] = (Global_1B416.f_4A94.f_16[0x00000007] + iParam1);
			}
			else
			{
				Global_1B416.f_4A94.f_16[0x00000007]++;
			}
			func_56("Wanted Levels Lost = ", Global_1B416.f_4A94.f_16[0x00000007]);
			break;
		
		case 0x00000008:
			Global_1B416.f_4A94.f_16[0x00000008]++;
			func_56("Taxis wrecked ++ = ", Global_1B416.f_4A94.f_16[0x00000008]);
			break;
		
		case 0x00000009:
			Global_1B416.f_4A94.f_16[0x00000009]++;
			func_56("Horn Honked ++ = ", Global_1B416.f_4A94.f_16[0x00000009]);
			break;
		
		case 0x0000000A:
			Global_1B416.f_4A94.f_16[0x0000000A] = (Global_1B416.f_4A94.f_16[0x0000000A] + iParam1);
			func_56("Total Money Earned = ", Global_1B416.f_4A94.f_16[0x0000000A]);
			break;
		
		case 0x0000000B:
			Global_1B416.f_4A94.f_16[0x0000000B] = (Global_1B416.f_4A94.f_16[0x0000000B] + iParam1);
			func_56("Total Tips Earned = ", Global_1B416.f_4A94.f_16[0x0000000B]);
			break;
		
		case 0x0000000C:
			if (iParam1 > Global_1B416.f_4A94.f_16[0x0000000C])
			{
				Global_1B416.f_4A94.f_16[0x0000000C] = iParam1;
				func_56("New Highest Tip = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			else
			{
				func_56("Highest Tip Not Reached = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			break;
	}
}

void func_56(char* sParam0, int iParam1)
{
}

void func_57(var uParam0)
{
	func_55(0x00000000, 0x00000000);
	if (uParam0->f_19B != 0x00000009)
	{
		func_418(0x00000001);
		func_67(0x0000000F, 0x00000001);
	}
	func_235(&(Global_1B416.f_4A94), 0x00000400);
	if (!func_25(Global_1B416.f_4A94, 0x00000040))
	{
		func_58(func_65(func_66(uParam0)), 0x00000000, 0x00000000);
	}
}

void func_58(int iParam0, int iParam1, int iParam2)
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
		func_64((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_59();
	}
}

void func_59()
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
		func_63(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_62() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_60();
				}
			}
		}
	}
}

int func_60()
{
	if (func_61(0x00000000))
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

bool func_61(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_62()
{
	return Global_7830;
}

int func_63(int iParam0, int iParam1)
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

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_30();
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

int func_65(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x000000C7;
			break;
		
		case 0x00000001:
			iVar0 = 0x000000C8;
			break;
		
		case 0x00000002:
			iVar0 = 0x000000C9;
			break;
		
		case 0x00000003:
			iVar0 = 0x000000CA;
			break;
		
		case 0x00000004:
			iVar0 = 0x000000CB;
			break;
		
		case 0x00000005:
			iVar0 = 0x000000CC;
			break;
		
		case 0x00000006:
			iVar0 = 0x000000CD;
			break;
		
		case 0x00000007:
			iVar0 = 0x000000CE;
			break;
		
		case 0x00000008:
			iVar0 = 0x000000CF;
			break;
		
		case 0x00000009:
			break;
		
		default:
			iVar0 = 0x000000C7;
			break;
	}
	return iVar0;
}

int func_66(var uParam0)
{
	return uParam0->f_19B;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(0x0000000E) && !func_79(iParam0))
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
	if (func_78(&Global_4127F1))
	{
		if (func_76(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_69(&Global_4127F1, iParam0))
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

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_80(0x0000000E) && !func_79(iParam1))
	{
		return 0x00000000;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0x00000000);
	}
	func_72(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_80(0x0000000E) && !func_79(iParam1))
	{
		return 0x00000000;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4127F0 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_74(var uParam0, float fParam1)
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

float func_75(var uParam0)
{
	return uParam0->f_50;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_77(var uParam0, int iParam1)
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

bool func_78(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_79(int iParam0)
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

bool func_80(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_81(var uParam0, var uParam1)
{
	switch (iLocal_160)
	{
		case 0x00000000:
			if (!func_54() && func_395(uParam0, 0x00000000) > 1f)
			{
				if (func_36())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				}
				func_115(uParam0);
				func_23(&(Global_1B416.f_4A94), 0x00001000);
				func_112(uParam1, "TAXI_FARE_TITLE", uParam0->f_32, uParam0->f_38, ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69), uParam0->f_69, func_114(uParam0), "TAXI_FARE_MID", 0x00000FA0, 0x00000001);
				uParam1->f_1 = 0x00000FA0;
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
				func_111(0x00000001);
				iLocal_160 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if (!func_105(uParam1, 0x00000000))
			{
				func_82(uParam0);
				func_267(uParam0, 0x00000000, 0x00000000, 0x00000000);
				func_111(0x00000000);
				iLocal_160 = 0x00000007;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0x00000000)
	{
		func_83(func_103(), 0x00000015, iVar0, 0x00000000, 0x00000000);
		func_55(0x0000000A, iVar0);
		iLocal_57[0x00000000] = iVar0;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_102(iParam0) == 0x00000004)
	{
		return;
	}
	func_84(func_102(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
	if (bParam3)
	{
		iVar0 = 0x00000000;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 0x00000001);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_101();
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
					func_100(0x00000063, 0x00000001);
					func_99(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_99(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_99(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_98(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_93(0x00000005))
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
							func_99(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_93(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_99(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_99(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_99(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_property"), iParam3);
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
									func_99(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_99(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_93(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_99(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_99(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_100(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_100(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_100(0x00000060, iParam3);
					break;
			}
			func_100(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_87(iVar1);
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
					func_99(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_99(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_99(joaat("sp2_total_cash_earned"), iParam3);
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
	func_86(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_85(0x00000000);
	}
	return 0x00000001;
}

void func_85(bool bParam0)
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

void func_86(int iParam0)
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

void func_87(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_64(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_64(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_64(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_64(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_90(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_90(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_90(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_90(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_90(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_90(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_89() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_89() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_88(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_88(int iParam0)
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

int func_89()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_30();
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

void func_92(int iParam0)
{
	func_100(0x0000005D, iParam0);
	func_100(0x0000001D, iParam0);
	func_100(0x0000001E, iParam0);
}

bool func_93(int iParam0)
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
		return func_95(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_95(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_95(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_95(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_94(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_94(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_94(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_94(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_94(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_94(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_89() /*10930*/].f_181E.f_A, iParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_91(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_30();
	}
	iVar1 = func_97(iParam0, iParam1);
	uVar2 = func_96(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_96(int iParam0)
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

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_30();
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

int func_98(bool bParam0)
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
		func_63(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_67(0x0000001B, 0x00000001);
	return 0x00000001;
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_100(int iParam0, int iParam1)
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

void func_101()
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

int func_102(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_103()
{
	func_104();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_104()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_80(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_6(Global_1B416.f_936.f_21B.f_10E1))
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

int func_105(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_2)))
	{
		func_109(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(0x0000000E);
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || uParam0->f_8)
		{
			if (!func_17(&(uParam0->f_5)))
			{
				func_109(&(uParam0->f_5));
				func_108(uParam0, 0x3EA8F5C3);
			}
		}
		if (func_17(&(uParam0->f_5)))
		{
			if (func_107(&(uParam0->f_5)) > 0.33f)
			{
				func_106(&(uParam0->f_5));
				return 0x00000000;
			}
		}
	}
	if (uParam0->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_107(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_17(&(uParam0->f_5)))
		{
			func_109(&(uParam0->f_5));
			func_108(uParam0, 0x3EA8F5C3);
		}
		else if (func_107(&(uParam0->f_5)) > 0.33f)
		{
			func_106(&(uParam0->f_2));
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

float func_107(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_16(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_108(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_109(int iParam0)
{
	func_110(iParam0, 0f);
}

void func_110(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_111(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_112(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_113());
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(iParam9);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(sParam7);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6B012227B3921E18(sParam6);
	unk_0x6D99DF8263D35CE5(iParam5);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	func_109(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 0x00000001;
}

char* func_113()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_114(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 0x00000001:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 0x00000002:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 0x00000003:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 0x00000004:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 0x00000005:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 0x00000006:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 0x00000007:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 0x00000008:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_115(var uParam0)
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_55(0x0000000B, uParam0->f_38);
	func_55(0x0000000C, uParam0->f_38);
	iLocal_57[0x00000001] = uParam0->f_38;
	iLocal_57[0x00000002] = uParam0->f_38;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_3C)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_3C[iVar0 /*3*/] };
		if (unk_0xEAE0D21A50E6C7F4(Local_161.f_4[iVar0 /*3*/], 0x00000002))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_19B;
	Local_161.f_14 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_116(int iParam0, vector3 vParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, iParam2);
}

int func_117(var uParam0, bool bParam1)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_127(uParam0) && func_123(uParam0, 0x00000001, 0x40A00000))
		{
			if (bParam1)
			{
				if (func_122(uParam0, 0x00200000))
				{
					func_118(uParam0);
				}
			}
			else
			{
				func_118(uParam0);
			}
		}
		else if (!func_127(uParam0))
		{
			if (bParam1)
			{
				if (func_122(uParam0, 0x00200000))
				{
					if (unk_0xD1960163A3042274(uParam0->f_3, 0x1AE73569) == 0x00000007)
					{
						return 0x00000001;
					}
				}
			}
			else if (unk_0xD1960163A3042274(uParam0->f_3, 0x1AE73569) == 0x00000007)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_118(var uParam0)
{
	vector3 vVar0;
	
	if (func_121(uParam0->f_1D))
	{
		vVar0 = { uParam0->f_11 };
	}
	else
	{
		vVar0 = { uParam0->f_1D };
	}
	func_119(uParam0, vVar0);
}

void func_119(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && unk_0x82CCEAB29E9451DD(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_120(uParam0->f_3, uParam0->f_4) == 0x00000000)
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00000200);
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam1, 0x00000000) < unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000000) && unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0x00000001, 0x00000000, 0x00000000))
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00020000);
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam1, 0x00000000) >= unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000000) && unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0x00000002, 0x00000000, 0x00000000))
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00040000);
			}
			else
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00000000);
			}
		}
	}
}

int func_120(int iParam0, int iParam1)
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

int func_121(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_122(var uParam0, int iParam1)
{
	if (iParam1 != 0x40000000)
	{
		return (func_25(uParam0->f_51, iParam1) && !func_54());
	}
	return func_54();
}

int func_123(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (func_47(0x00000001))
			{
				func_45(0x00000000);
			}
			if (func_36())
			{
				func_126();
				return 0x00000001;
			}
			else if (func_124(uParam0->f_4, fParam2, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
			{
				if (bParam1)
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000100);
				}
				else
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000000);
				}
			}
			unk_0xACCB31D58716FE8F(uParam0->f_4, 0x00000001);
		}
	}
	return 0x00000000;
}

int func_124(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_125(iParam0);
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

void func_125(int iParam0)
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

void func_126()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	}
}

int func_127(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_128(var uParam0)
{
	if (uParam0->f_38 >= uParam0->f_3B)
	{
		uParam0->f_38 = SYSTEM::CEIL((IntToFloat(uParam0->f_32) * 0.4f));
	}
	else if (uParam0->f_38 < uParam0->f_3B && uParam0->f_38 >= uParam0->f_3A)
	{
		uParam0->f_38 = SYSTEM::CEIL((IntToFloat(uParam0->f_32) * 0.15f));
	}
	else
	{
		uParam0->f_38 = 0x00000000;
	}
	if (!func_25(uParam0->f_37, 0x00000001))
	{
		func_235(&(uParam0->f_37), 0x00000001);
	}
}

void func_129(var uParam0)
{
	func_131();
	unk_0x790015DC92C918E2();
	if (uParam0->f_38 < uParam0->f_3A)
	{
		if (uParam0->f_19B == 0x00000000)
		{
			func_198(uParam0, 0x00000069, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_198(uParam0, 0x00000067, 0x00000001, 0x00000000, 0x00000000);
		}
		func_130(0x00000001);
	}
	else if (uParam0->f_38 >= uParam0->f_3B)
	{
		func_198(uParam0, 0x00000065, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_198(uParam0, 0x00000066, 0x00000001, 0x00000000, 0x00000000);
	}
	func_267(uParam0, 0x00000010, 4f, 0x00000000);
}

void func_130(int iParam0)
{
	Global_1AF0C.f_DD = iParam0;
}

void func_131()
{
	Global_4CD7 = 0x00000000;
	func_132();
}

void func_132()
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

void func_133(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_134(fVar0);
	iLocal_57[0x00000004] = SYSTEM::CEIL(fVar0);
	iLocal_57[0x00000005] = SYSTEM::CEIL(fVar0);
	func_55(0x00000004, SYSTEM::CEIL(fVar0));
	func_55(0x00000005, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_134(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0x83A8177D302E1A7E(uParam0->f_49[iVar0]))
		{
			unk_0xF7E25143642732EA(uParam0->f_49[iVar0], 0x00000000);
		}
		iVar0++;
	}
	iLocal_245 = 0x00000000;
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000005)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_3C[iParam1 /*3*/]), 0x00000002);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

bool func_137(var uParam0)
{
	return ((uParam0->f_37[0x00000000] && uParam0->f_37[0x00000001]) && uParam0->f_37[0x00000002]);
}

void func_138(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0x00000000;
	}
	else
	{
		*uParam0 = 0xFFFFFFFF;
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		uParam0->f_1B = iParam1;
	}
}

int func_139(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_177(uParam0, uParam2, uParam1);
	if (func_176(uParam0) >= 0x0000000E)
	{
		if (iLocal_250)
		{
			if (((func_395(uParam0, 0x0000000B) > 20f && !func_54()) && !unk_0xD17F06053799A7CA()) && !bLocal_248)
			{
				bLocal_248 = 0x00000001;
			}
		}
	}
	if (uParam1->f_5A < 0x00000002)
	{
		if (uParam1->f_41 && !iLocal_250)
		{
			func_170(uParam0, uParam1, 0x00000000, uParam1->f_41);
			uParam1->f_41 = 0x00000000;
		}
		else
		{
			func_170(uParam0, uParam1, 0x00000000, 0x00000000);
		}
		if (uParam1->f_42 && uParam1->f_5A < 0x00000001)
		{
			if (!unk_0xEB6A8945D1AC98A1((*uParam1)[uParam1->f_5F]) && unk_0x405E212DDE472467((*uParam1)[uParam1->f_5F], 0x00000000))
			{
				if (!iLocal_254)
				{
					if (func_169(uParam1[uParam1->f_5F], &(uParam1->f_5E)))
					{
						func_168(&(uParam1->f_5F));
					}
				}
				else if (!uParam1->f_48)
				{
					unk_0xA3BF0AA5A2608191((*uParam1)[uParam1->f_5F]);
					unk_0x93D47DFD0AE94949((*uParam1)[uParam1->f_5F], 0x000001F4);
					uParam1->f_48 = 0x00000001;
				}
			}
		}
	}
	else if (!uParam1->f_3E)
	{
		func_170(uParam0, uParam1, 0x00000001, 0x00000000);
	}
	if ((((unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000000]) || unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000001])) || unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000002])) || unk_0xB87D13D0C064E9D1((*uParam1)[0x00000001], uParam0->f_4, 0x00000001)) || unk_0xB87D13D0C064E9D1((*uParam1)[0x00000002], uParam0->f_4, 0x00000001))
	{
		uParam0->f_19F = 0x0000000E;
		func_300(uParam0, "Passenger injured.", 0x0000000E);
	}
	if (!func_154(uParam0, uParam1))
	{
		if (!unk_0x3CAA763EEC01ADF7(uParam0->f_2, uParam0->f_4, 0xFFFFFFFF, 0x00000000, 0x00000000))
		{
			unk_0x75CDA8644CD3B5F5((*uParam1)[0x00000000], 0x00000000, 0x00000000);
			bLocal_252 = 0x00000001;
			iLocal_253 = 0x00000000;
		}
	}
	else
	{
		if (bLocal_252)
		{
			if (unk_0xBBA8A868118C90ED(uParam0->f_4, 0x00000000, 0x00000000))
			{
				if (!iLocal_253)
				{
					unk_0x5B1D360B9C6F0A09((*uParam1)[0x00000000], uParam0->f_4, 0x00004E20, 0x00000000, 2f, 0x00000001, 0x00000000);
					iLocal_253 = 0x00000001;
				}
				if (func_11(uParam0->f_4, (*uParam1)[0x00000000], 0x00000001) > 40f)
				{
					func_300(uParam0, "Passenger left behind.", 0x00000008);
				}
			}
			if (unk_0xA30B8362589C124A(uParam0->f_4, 0x00000000, 0x00000000) == (*uParam1)[0x00000000])
			{
				func_189(uParam1);
				bLocal_252 = 0x00000000;
			}
		}
		func_151(uParam0, 0x41700000, 0x42A00000);
		func_150(uParam0, &(uParam0->f_2B));
		if (!bLocal_252 && !unk_0xC42A92762C58E1B9((*uParam1)[0x00000000], uParam0->f_4, 0x00000000))
		{
			func_300(uParam0, "Passenger left car.", 0x00000009);
		}
		switch (uParam1->f_5A)
		{
			case 0x00000000:
				if (!uParam1->f_33[0x00000002])
				{
					if (func_116(uParam0->f_4, uParam1->f_10[0x00000002 /*3*/], 0x00000001) < 150f && !iLocal_254)
					{
						func_198(uParam0, 0x00000063, 0x00000001, 0x00000000, 0x00000000);
						iLocal_254 = 0x00000001;
					}
					if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam1->f_10[0x00000002 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, 0x00000001, 0x00000000))
					{
						if (func_123(uParam0, 0x00000001, 4f))
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000002]))
							{
								unk_0x142CC44DB769B57E(&(uParam1->f_24[0x00000002]));
								func_131();
								if (uParam1->f_5F == 0x00000002)
								{
									unk_0xA3BF0AA5A2608191((*uParam1)[0x00000002]);
								}
								unk_0xF82EA857DA10E0CD(&uVar0);
								unk_0xDD353D0E9C789D0E(&uVar0);
								unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
								unk_0x96167B03C5A77156(0x00000000, -98.0071f, -851.2611f, 40.9833f, 1f, 0x00007530, 0.25f, 0x00000000, 0x471C4000);
								unk_0x96167B03C5A77156(0x00000000, -83.1601f, -835.3889f, 39.5744f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
								unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(uVar0);
								unk_0x78ADC381772E3D54((*uParam1)[0x00000002], uVar0);
								unk_0xF82EA857DA10E0CD(&uVar0);
								if (func_395(uParam0, 0x00000006) < fLocal_255)
								{
									uParam1->f_37[0x00000002] = 0x00000001;
									func_198(uParam0, 0x00000026, 0x00000001, 0x00000000, 0x00000000);
									uParam0->f_38 += 3;
								}
								else
								{
									uParam1->f_37[0x00000002] = 0x00000000;
									func_198(uParam0, 0x00000027, 0x00000001, 0x00000000, 0x00000000);
									uParam0->f_38 = (uParam0->f_38 - 0x00000003);
								}
								uParam1->f_5A++;
								func_148(uParam0, 0x00000006);
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				if ((!func_146((*uParam1)[0x00000002], uParam0->f_4) && func_395(uParam0, 0x00000014) > 1f) && !uParam1->f_33[0x00000002])
				{
					func_135(uParam1);
					uParam1->f_33[0x00000002] = 0x00000001;
					uParam0->f_1A = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_22 = 250.7f;
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
				}
				else if (!func_143(uParam0) && unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
				{
					func_141(uParam3);
					func_138(uParam2, 0xFFFFFFFF, 0x00000000);
					func_267(uParam0, 0x00000006, 0x00000000, 0x00000000);
					func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_198(uParam0, 0x00000028, 0x00000001, 0x00000000, 0x00000000);
					if (!unk_0xE4EDC4B0E92C078B(uParam1->f_24[0x00000001]))
					{
						func_189(uParam1);
					}
					iLocal_254 = 0x00000000;
					uParam1->f_5A++;
				}
				break;
			
			case 0x00000002:
				if (!uParam1->f_33[0x00000001])
				{
					if (func_116(uParam0->f_4, uParam1->f_10[0x00000001 /*3*/], 0x00000001) < 175f && !iLocal_254)
					{
						func_198(uParam0, 0x00000063, 0x00000001, 0x00000000, 0x00000000);
						iLocal_254 = 0x00000001;
					}
					if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam1->f_10[0x00000001 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, 0x00000001, 0x00000000))
					{
						if (func_123(uParam0, 0x00000001, 4f))
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000001]))
							{
								func_131();
								unk_0x142CC44DB769B57E(&(uParam1->f_24[0x00000001]));
								func_140(&(uParam0->f_4), uParam1[0x00000001], uParam1->f_1A[0x00000001 /*3*/]);
								if (func_395(uParam0, 0x00000006) < fLocal_256)
								{
									uParam1->f_37[0x00000001] = 0x00000001;
									func_198(uParam0, 0x00000029, 0x00000001, 0x00000000, 0x00000000);
									uParam0->f_38 += 2;
								}
								else
								{
									uParam1->f_37[0x00000001] = 0x00000000;
									func_198(uParam0, 0x0000002A, 0x00000001, 0x00000000, 0x00000000);
									uParam0->f_38 = (uParam0->f_38 - 0x00000002);
								}
								uParam1->f_5A++;
								func_148(uParam0, 0x00000006);
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				if ((!func_146((*uParam1)[0x00000001], uParam0->f_4) && func_395(uParam0, 0x00000014) > 1f) && !uParam1->f_33[0x00000001])
				{
					uParam1->f_33[0x00000001] = 0x00000001;
					uParam0->f_1A = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_22 = 216.5f;
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
				}
				else if (!func_143(uParam0) && unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
				{
					func_141(uParam3);
					func_138(uParam2, 0xFFFFFFFF, 0x00000000);
					func_267(uParam0, 0x00000006, 0x00000000, 0x00000000);
					func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_198(uParam0, 0x0000002B, 0x00000001, 0x00000000, 0x00000000);
					iLocal_254 = 0x00000000;
					if (!unk_0xE4EDC4B0E92C078B(uParam1->f_24[0x00000000]))
					{
						func_189(uParam1);
					}
					uParam1->f_5A++;
				}
				break;
			
			case 0x00000004:
				if (!uParam1->f_33[0x00000000])
				{
					if (func_116(uParam0->f_4, uParam1->f_10[0x00000000 /*3*/], 0x00000001) < 100f && !iLocal_254)
					{
						func_198(uParam0, 0x00000063, 0x00000001, 0x00000000, 0x00000000);
						iLocal_254 = 0x00000001;
					}
					if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam1->f_10[0x00000000 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, 0x00000001, 0x00000000))
					{
						if (func_123(uParam0, 0x00000001, 4f))
						{
							unk_0x142CC44DB769B57E(&(uParam1->f_24[0x00000000]));
							uParam1->f_33[0x00000000] = 0x00000001;
							func_131();
							if (func_395(uParam0, 0x00000006) < fLocal_257)
							{
								uParam1->f_37[0x00000000] = 0x00000001;
								uParam0->f_38 += 2;
							}
							else
							{
								uParam1->f_37[0x00000000] = 0x00000000;
								uParam0->f_38 = (uParam0->f_38 - 0x00000002);
							}
							return 0x00000001;
						}
					}
				}
				break;
			}
	}
	return 0x00000000;
}

void func_140(var uParam0, var uParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	
	if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(*uParam1, 0x00000000))
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0x0EB28750412C3A5A(vVar0, vParam2, 0x00000000) < unk_0x0EB28750412C3A5A(vVar1, vParam2, 0x00000000) && unk_0x3CAA763EEC01ADF7(*uParam1, *uParam0, 0x00000001, 0x00000000, 0x00000000))
			{
				iVar2 = 0x00020000;
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam2, 0x00000000) >= unk_0x0EB28750412C3A5A(vVar1, vParam2, 0x00000000) && unk_0x3CAA763EEC01ADF7(*uParam1, *uParam0, 0x00000002, 0x00000000, 0x00000000))
			{
				iVar2 = 0x00040000;
			}
			else
			{
				iVar2 = 0x00000010;
			}
			vVar4 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar2 == 0x00000010)
			{
				unk_0xF82EA857DA10E0CD(&uVar3);
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0x96167B03C5A77156(0x00000000, vVar4, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0x4A35AD9FC803369E(0x00000000, vVar4, 5f, 0x00000000);
				unk_0x96167B03C5A77156(0x00000000, vParam2, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0x75ABDC5F81978924(uVar3);
				unk_0x78ADC381772E3D54(*uParam1, uVar3);
			}
			else
			{
				unk_0xF82EA857DA10E0CD(&uVar3);
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0x45F014B3D0466974(0x00000000, *uParam0, iVar2);
				unk_0x96167B03C5A77156(0x00000000, vVar4, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0x4A35AD9FC803369E(0x00000000, vVar4, 5f, 0x00000000);
				unk_0x96167B03C5A77156(0x00000000, vParam2, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0x75ABDC5F81978924(uVar3);
				unk_0x78ADC381772E3D54(*uParam1, uVar3);
			}
		}
	}
}

void func_141(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0x00000000;
		(uParam0[iVar0 /*8*/])->f_7 = 0x00000000;
		StringCopy(uParam0[iVar0 /*8*/], func_142(), 24);
		iVar0++;
	}
	unk_0x790015DC92C918E2();
	func_52();
}

var func_142()
{
	var uVar0;
	
	return uVar0;
}

int func_143(var uParam0)
{
	if (func_54())
	{
		return 0x00000001;
	}
	if (func_145(uParam0, 0x00000011))
	{
		return 0x00000001;
	}
	if (func_145(uParam0, 0x0000000E))
	{
		return 0x00000001;
	}
	if (func_144(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_144(var uParam0)
{
	return uParam0->f_6E;
}

bool func_145(var uParam0, int iParam1)
{
	return func_17(&(uParam0->f_92[iParam1 /*3*/]));
}

int func_146(int iParam0, int iParam1)
{
	if (func_147(iParam0, iParam1))
	{
		if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_147(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (!func_16(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_149(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_17(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_16(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_149(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_149(int iParam0)
{
	if (func_17(iParam0))
	{
		if (!func_16(iParam0))
		{
			iParam0->f_2 = (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

void func_150(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_1AC, uParam1, 0xFFFFFFFF);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

void func_151(var uParam0, float fParam1, float fParam2)
{
	if (func_127(uParam0) && func_25(uParam0->f_2C, 0x00000004))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(uParam0->f_4) || unk_0x9C66D99E63E8E24C(uParam0->f_4) < 3f) && func_153(uParam0))
		{
			if (!func_145(uParam0, 0x00000002))
			{
				func_192(uParam0, 0x00000002);
			}
			else if (func_127(uParam0))
			{
				if (func_395(uParam0, 0x00000002) > fParam1 && !func_145(uParam0, 0x0000000E))
				{
					if (func_38())
					{
						func_198(uParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					else
					{
						func_198(uParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					func_267(uParam0, 0x00000002, 0x00000000, 0x00000000);
					if (func_145(uParam0, 0x0000000A))
					{
						func_267(uParam0, 0x0000000A, 0x00000000, 0x00000000);
					}
				}
				if (!func_145(uParam0, 0x00000003))
				{
					func_267(uParam0, 0x00000003, 0x00000000, 0x00000000);
				}
				else if (func_395(uParam0, 0x00000003) >= fParam2)
				{
					func_152(uParam0, 0x00000003, 0x00000000);
					func_300(uParam0, "Car not moving", 0x00000014);
				}
			}
		}
		else
		{
			if (func_145(uParam0, 0x00000002))
			{
				func_152(uParam0, 0x00000002, 0x00000000);
			}
			if (func_145(uParam0, 0x00000003))
			{
				func_152(uParam0, 0x00000003, 0x00000000);
			}
		}
	}
}

void func_152(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 0x0000000E)
	{
	}
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			func_106(&(uParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_106(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_153(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_154(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	bVar1 = 0x00000001;
	if (!unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		func_300(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0x00000000);
	}
	else
	{
		func_167(uParam0, &(uParam1->f_28));
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]))
			{
				func_300(uParam0, "Passenger injured.", 0x0000000F);
				bVar1 = 0x00000000;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_155(uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_155(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			if (func_145(uParam0, 0x0000000E))
			{
				func_163(uParam0);
			}
			func_156(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_156(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
				func_162(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
				unk_0x790015DC92C918E2();
				if (func_127(uParam0))
				{
					func_198(uParam0, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					func_162(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				}
			}
			func_157(uParam0, 0x00000000, 0x00000000);
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_A));
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x000000FF);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				if (uParam0->f_19B == 0x00000005 && uParam0->f_19A == 0x00000011)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
					unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
				}
				else if (uParam0->f_19B != 0x00000004)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
					unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
				}
			}
			unk_0x790015DC92C918E2();
		}
	}
}

void func_157(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_399(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_A))
	{
		uParam0->f_A = func_160(uParam0->f_4, 0x00000001, 0x00000000);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_A, 0x00000001);
		func_158(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_198(uParam0, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_158(var uParam0)
{
	func_267(uParam0, 0x0000000E, 0x00000000, 0x00000000);
	func_159();
}

void func_159()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_Off", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

int func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_161(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_161(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_161(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_161(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_162(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_25(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_198(uParam0, iParam3, 0x00000001, 0x00000000, 0x00000000);
		func_235(uParam1, iParam2);
	}
}

void func_163(var uParam0)
{
	func_152(uParam0, 0x0000000E, 0x00000000);
	func_152(uParam0, 0x0000000F, 0x00000000);
	func_166();
	if (func_165())
	{
		func_164(0x00000000);
	}
}

void func_164(int iParam0)
{
	Global_5538 = iParam0;
}

int func_165()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_166()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_On", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

void func_167(var uParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (!func_145(uParam0, 0x0000000E))
			{
				if (unk_0xE4EDC4B0E92C078B(*uParam1) && unk_0x4FA921CB56EDB0F8(*uParam1) > 0x00000000)
				{
					unk_0x7F010F50CE03A8AF(*uParam1, 0x00000000);
				}
				func_157(uParam0, 0x00000000, 0x00000000);
				func_198(uParam0, 0x00000002, 0x00000001, 0x00000001, 0x00000000);
			}
			else if (func_395(uParam0, 0x0000000E) > 20f)
			{
				func_300(uParam0, "Player not in taxi.", 0x00000009);
			}
		}
		else
		{
			if (func_145(uParam0, 0x0000000E))
			{
				func_163(uParam0);
			}
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_A));
			}
			if ((unk_0xE4EDC4B0E92C078B(*uParam1) && unk_0x4FA921CB56EDB0F8(*uParam1) < 0x000000FF) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
			{
				unk_0x7F010F50CE03A8AF(*uParam1, 0x000000FF);
				unk_0x661342B9651D16E2(*uParam1, 0x00000001);
			}
		}
	}
}

void func_168(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 0x00000003)
	{
		iVar0 = 0x00000000;
	}
	*uParam0 = iVar0;
}

int func_169(var uParam0, var uParam1)
{
	var uVar0;
	
	switch (*uParam1)
	{
		case 0x00000000:
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(*uParam0, uVar0);
			*uParam1 = 0x00000001;
			break;
		
		case 0x00000001:
			if (unk_0xD1960163A3042274(*uParam0, 0x0E763797) != 0x00000001 || unk_0xD1960163A3042274(*uParam0, 0x0E763797) == 0x00000007)
			{
				*uParam1 = 0x00000000;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_170(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_248)
	{
		if (!uParam1->f_3B)
		{
			if (!func_54())
			{
				func_174(&(uParam1->f_63));
				uParam1->f_3B = 0x00000001;
				func_173(uParam0, uParam1);
				uParam1->f_5B = unk_0x1C0640BA9A7327B3();
			}
		}
	}
	if (bLocal_249)
	{
		if (!uParam1->f_3C)
		{
			if (!func_54())
			{
				uParam1->f_3C = 0x00000001;
				func_172(uParam0, uParam1);
				uParam1->f_5B = unk_0x1C0640BA9A7327B3();
				uParam1->f_5C = unk_0x1C0640BA9A7327B3();
			}
		}
	}
	uVar0 = func_171(uParam0);
	if (uParam1->f_3B || uParam1->f_3C)
	{
		fVar2 = unk_0x9C66D99E63E8E24C(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_3C)
		{
			iVar1 = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000004)
			{
				if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
				{
					unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "speed", fVar4, 0x00000000);
				}
				iVar1++;
			}
		}
		if (uParam1->f_3B)
		{
			unk_0x9AB5B84DE011D632(uParam1->f_58, "speed", fVar4, 0x00000000);
			unk_0x9AB5B84DE011D632(uParam1->f_59, "speed", fVar4, 0x00000000);
		}
	}
	if (unk_0x9C66D99E63E8E24C(uParam0->f_4) >= 40f && !uParam1->f_3F)
	{
		uParam1->f_5B = unk_0x1C0640BA9A7327B3();
		uParam1->f_3F = 0x00000001;
	}
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) < 40f && uParam1->f_3F) && !bParam2)
	{
		uParam1->f_5B = unk_0x1C0640BA9A7327B3();
		uParam1->f_3F = 0x00000000;
		uParam1->f_3E = 0x00000000;
	}
	if (bParam2 && !uParam1->f_3F)
	{
		uParam1->f_5B = unk_0x1C0640BA9A7327B3();
		uParam1->f_3F = 0x00000001;
	}
	if (((uParam1->f_3B || uParam1->f_3C) && !uParam1->f_3F) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_3D = 0x00000001;
			uParam1->f_3F = 0x00000000;
			if (uParam1->f_3C)
			{
				iVar1 = 0x00000000;
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if (unk_0x10DBDDD2B1034ACE(uParam0->f_4, iVar1))
					{
						if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", 1f, 0x00000000);
						}
					}
					else if (!unk_0xD6CC9546EDEF00CE(uParam0->f_4, iVar1))
					{
						if ((unk_0x1C0640BA9A7327B3() % 0x000007D0) < 0x00000032)
						{
						}
						if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", 1f, 0x00000000);
						}
					}
					else if (iVar1 > 0x00000001 && uVar0)
					{
						if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", fVar8, 0x00000000);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				unk_0x9AB5B84DE011D632(uParam1->f_58, "smoke", fVar8, 0x00000000);
				unk_0x9AB5B84DE011D632(uParam1->f_59, "smoke", fVar8, 0x00000000);
			}
		}
		else
		{
			iVar6 = 0x00001770;
			iVar5 = (unk_0x1C0640BA9A7327B3() - uParam1->f_5B);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_3D = 0x00000001;
				uParam1->f_3F = 0x00000000;
			}
			else
			{
				fVar8 = (1f - (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar6)));
			}
			if (uParam1->f_3C)
			{
				iVar1 = 0x00000000;
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if (unk_0x10DBDDD2B1034ACE(uParam0->f_4, iVar1))
					{
						if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", 1f, 0x00000000);
						}
					}
					else if (!unk_0xD6CC9546EDEF00CE(uParam0->f_4, iVar1))
					{
						if ((unk_0x1C0640BA9A7327B3() % 0x000007D0) < 0x00000032)
						{
						}
						if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", 1f, 0x00000000);
						}
					}
					else if (iVar1 > 0x00000001 && uVar0)
					{
						if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", fVar8, 0x00000000);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				unk_0x9AB5B84DE011D632(uParam1->f_58, "smoke", fVar8, 0x00000000);
				unk_0x9AB5B84DE011D632(uParam1->f_59, "smoke", fVar8, 0x00000000);
			}
		}
	}
	if ((uParam1->f_3B || uParam1->f_3C) && ((uParam1->f_3D && !uParam1->f_3E) || bParam2))
	{
		if (uParam1->f_3F)
		{
			iVar7 = 0x00001770;
			iVar5 = (unk_0x1C0640BA9A7327B3() - uParam1->f_5B);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_3E = 0x00000001;
			}
			else
			{
				fVar8 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar7));
			}
			if (uParam1->f_3C)
			{
				iVar1 = 0x00000000;
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if (unk_0x10DBDDD2B1034ACE(uParam0->f_4, iVar1))
					{
						if (unk_0x83A8177D302E1A7E(uParam1->f_53[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_53[iVar1], "smoke", fVar8, 0x00000000);
						}
					}
					else if (!unk_0xD6CC9546EDEF00CE(uParam0->f_4, iVar1))
					{
						if (unk_0x83A8177D302E1A7E(uParam1->f_4E[iVar1]))
						{
							unk_0x9AB5B84DE011D632(uParam1->f_4E[iVar1], "smoke", fVar8, 0x00000000);
						}
					}
					if (unk_0x83A8177D302E1A7E(uParam1->f_49[iVar1]))
					{
						unk_0x9AB5B84DE011D632(uParam1->f_49[iVar1], "smoke", fVar8, 0x00000000);
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				unk_0x9AB5B84DE011D632(uParam1->f_58, "smoke", fVar8, 0x00000000);
				unk_0x9AB5B84DE011D632(uParam1->f_59, "smoke", fVar8, 0x00000000);
			}
		}
	}
}

int func_171(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0x10DBDDD2B1034ACE(uParam0->f_4, iVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uLocal_259[iVar0], 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(uLocal_259[iVar0]), 0x00000001);
			}
			if (unk_0x1150BCE24B1630AC(uParam0->f_4, iVar0))
			{
				iVar1 = 0x00000000;
				if (!iLocal_250)
				{
					iLocal_250 = 0x00000001;
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(uLocal_259[iVar0], 0x00000001))
		{
			unk_0x0674E58A79778E99(&(uLocal_259[iVar0]), 0x00000001);
		}
		if (!unk_0xD6CC9546EDEF00CE(uParam0->f_4, iVar0))
		{
			iVar1 = 0x00000000;
			if (!unk_0xEAE0D21A50E6C7F4(uLocal_258[iVar0], 0x00000001))
			{
				unk_0x5D96D8530B3D0904(&(uLocal_258[iVar0]), 0x00000001);
			}
			if (!iLocal_250)
			{
				iLocal_250 = 0x00000001;
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(uLocal_258[iVar0], 0x00000001))
		{
			unk_0x0674E58A79778E99(&(uLocal_258[iVar0]), 0x00000001);
		}
		iVar0++;
	}
	return iVar1;
}

void func_172(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		uParam1->f_49[0x00000000] = unk_0xC1879030EB463216("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_230, 0f, 0f, 0f, unk_0x79833B02DBD2A244(0.4f, 0.6f), 0x00000000, 0x00000000, 0x00000000);
		uParam1->f_49[0x00000001] = unk_0xC1879030EB463216("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_232, 0f, 0f, 0f, unk_0x79833B02DBD2A244(0.4f, 0.6f), 0x00000000, 0x00000000, 0x00000000);
		uParam1->f_49[0x00000002] = unk_0xC1879030EB463216("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_231, 0f, 0f, 0f, unk_0x79833B02DBD2A244(0.8f, 1f), 0x00000000, 0x00000000, 0x00000000);
		uParam1->f_49[0x00000003] = unk_0xC1879030EB463216("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_233, 0f, 0f, 0f, unk_0x79833B02DBD2A244(0.8f, 1f), 0x00000000, 0x00000000, 0x00000000);
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			unk_0x9AB5B84DE011D632(uParam1->f_49[iVar0], "smoke", 1f, 0x00000000);
			unk_0x9AB5B84DE011D632(uParam1->f_49[iVar0], "speed", 0f, 0x00000000);
			iVar0++;
		}
	}
}

void func_173(var uParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		uParam1->f_58 = unk_0xC1879030EB463216("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
		uParam1->f_59 = unk_0xC1879030EB463216("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0x2C785B04E197FCE6(0x00000001);
}

void func_174(int iParam0)
{
	func_175(iParam0, 0f);
}

void func_175(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) + fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

int func_176(var uParam0)
{
	return uParam0->f_1A0;
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	if (!func_25(uParam0->f_2C, 0x00000001))
	{
		switch (uParam0->f_19C)
		{
			case 0x00000000:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					if (func_395(uParam0, 0x00000009) > 1f)
					{
						func_181(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						func_198(uParam0, 0x00000032, 0x00000001, 0x00000000, 0x00000000);
						func_267(uParam0, 0x00000009, 0x00000000, 0x00000000);
						if (unk_0xE4EDC4B0E92C078B(uParam2->f_28))
						{
							unk_0x7F010F50CE03A8AF(uParam2->f_28, 0x00000000);
							unk_0x661342B9651D16E2(uParam2->f_28, 0x00000000);
						}
						uParam0->f_8C = 0x00000001;
						uParam0->f_19C = 0x00000001;
					}
				}
				break;
			
			case 0x00000001:
				if (!func_54() && func_395(uParam0, 0x00000009) > 4f)
				{
					func_198(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_19C = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_180("TAXI_OBJ_POL", 0x00000000, 0x00000000))
				{
					func_198(uParam0, 0x00000033, 0x00000000, 0x00000000, 0x00000000);
					uParam0->f_19C = 0x00000003;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					uParam0->f_19C = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_179(uParam0)))
				{
					func_181(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_55(0x00000006, 0x00000000);
				}
				if (!func_144(uParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_395(uParam0, 0x00000010) > 10f)
						{
							func_198(uParam0, 0x00000033, 0x00000001, 0x00000000, 0x00000000);
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					if (unk_0xE4EDC4B0E92C078B(uParam2->f_28))
					{
						unk_0x7F010F50CE03A8AF(uParam2->f_28, 0x000000FF);
						unk_0x661342B9651D16E2(uParam2->f_28, 0x00000001);
					}
					uParam0->f_8C = 0x00000000;
					uParam0->f_19C = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (!func_54())
				{
					func_198(uParam0, 0x00000035, 0x00000001, 0x00000000, 0x00000001);
					func_55(0x00000007, func_179(uParam0));
					func_181(uParam0, 0x00000000);
					uParam0->f_19C = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (!func_54())
				{
					func_178(uParam1, 0xFFFFFFFF, 0x00000004);
					uParam0->f_19C = 0x00000000;
				}
				break;
			}
	}
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > 0xFFFFFFFF)
	{
		uParam0->f_1B = iParam1;
	}
}

int func_179(var uParam0)
{
	return uParam0->f_6A;
}

bool func_180(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_181(var uParam0, int iParam1)
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_182(var uParam0)
{
	if (func_184(uParam0))
	{
		func_183(uParam0);
	}
}

void func_183(var uParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && uParam0->f_1A2.f_4 != 0x00000000)
	{
		uParam0->f_1A2.f_4 = 0x00000000;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0x00000000:
			uParam0->f_1A2 = unk_0xFC21F7E0F4D92523();
			func_152(uParam0, 0x00000014, 0x00000000);
			uParam0->f_1A2.f_4++;
			break;
		
		case 0x00000001:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_395(uParam0, 0x00000014) > 3f)
				{
					func_198(uParam0, 0x00000057, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_1A2.f_8 = 0x00000000;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_25(uParam0->f_51, 0x00040000) || !func_25(uParam0->f_51, 0x00100000))
				{
					if (func_395(uParam0, 0x00000014) > 5f)
					{
						uParam0->f_1A2.f_5 = 0x00000001;
						func_198(uParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_25(uParam0->f_52, 0x04000000))
				{
					if (func_395(uParam0, 0x00000014) > 5f)
					{
						uParam0->f_1A2.f_6 = 0x00000001;
						uParam0->f_1A2.f_8 = 0x00000000;
						func_198(uParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_152(uParam0, 0x00000016, 0x00000000);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_395(uParam0, 0x00000014) > 8f)
				{
					func_198(uParam0, 0x00000056, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_25(uParam0->f_51, 0x00040000) || func_25(uParam0->f_52, 0x04000000))
			{
				if (!func_145(uParam0, 0x00000016))
				{
					func_192(uParam0, 0x00000016);
				}
			}
			if (func_145(uParam0, 0x00000016) && func_395(uParam0, 0x00000016) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_25(uParam0->f_51, 0x00100000))
					{
						func_198(uParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						func_152(uParam0, 0x00000016, 0x00000000);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_25(uParam0->f_52, 0x08000000))
					{
						func_198(uParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_152(uParam0, 0x00000016, 0x00000000);
					}
				}
			}
			break;
	}
}

bool func_184(var uParam0)
{
	return uParam0->f_78;
}

void func_185(var uParam0, var uParam1)
{
	func_188(uParam0, 0x000003E8);
	if ((!unk_0x437347B10A200C4B((*uParam1)[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B((*uParam1)[0x00000001], 0x00000000)) && !unk_0x437347B10A200C4B((*uParam1)[0x00000002], 0x00000000))
	{
		unk_0x327AAEE25F323797((*uParam1)[0x00000000]);
		unk_0x327AAEE25F323797((*uParam1)[0x00000001]);
		unk_0x327AAEE25F323797((*uParam1)[0x00000002]);
	}
	func_186();
	func_163(uParam0);
}

void func_186()
{
	Global_4CD7 = 0x00000000;
	func_187();
}

void func_187()
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

void func_188(var uParam0, int iParam1)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
	}
	if (iParam1 > 0x00000000)
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000001, iParam1, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	}
}

void func_189(var uParam0)
{
	if (!uParam0->f_33[0x00000002])
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam0->f_24[0x00000002]))
		{
			uParam0->f_24[0x00000002] = func_190(uParam0->f_10[0x00000002 /*3*/], 0x00000001);
			uParam0->f_28 = uParam0->f_24[0x00000002];
		}
		if (!unk_0x327E5A6DA6CE9849(uParam0->f_24[0x00000002]))
		{
			unk_0x661342B9651D16E2(uParam0->f_24[0x00000002], 0x00000001);
		}
	}
	else if (!uParam0->f_33[0x00000001])
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam0->f_24[0x00000001]))
		{
			uParam0->f_24[0x00000001] = func_190(uParam0->f_10[0x00000001 /*3*/], 0x00000001);
			uParam0->f_28 = uParam0->f_24[0x00000001];
		}
		if (!unk_0x327E5A6DA6CE9849(uParam0->f_24[0x00000001]))
		{
			unk_0x661342B9651D16E2(uParam0->f_24[0x00000001], 0x00000001);
		}
	}
	else
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam0->f_24[0x00000000]))
		{
			uParam0->f_24[0x00000000] = func_190(uParam0->f_10[0x00000000 /*3*/], 0x00000001);
			uParam0->f_28 = uParam0->f_24[0x00000000];
		}
		if (!unk_0x327E5A6DA6CE9849(uParam0->f_24[0x00000000]))
		{
			unk_0x661342B9651D16E2(uParam0->f_24[0x00000000], 0x00000001);
		}
	}
}

int func_190(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_161(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

void func_191()
{
	func_235(&(Local_260.f_37), 0x00000002);
	func_235(&(Local_260.f_37), 0x00000004);
	func_235(&(Local_260.f_37), 0x00000010);
	func_235(&(Local_260.f_37), 0x00000040);
	func_235(&(Local_260.f_37), 0x00000100);
	func_235(&(Local_260.f_37), 0x00000200);
	func_235(&(Local_260.f_37), 0x00000400);
	func_235(&(Local_260.f_37), 0x00000800);
	func_235(&(Local_260.f_37), 0x00001000);
	func_235(&(Local_260.f_37), 0x40000000);
	func_235(&uLocal_392, 0x00000002);
}

void func_192(var uParam0, int iParam1)
{
	func_193(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_193(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_109(iParam0);
	}
}

void func_194()
{
	unk_0x71199B01895C6202(joaat("stretch"));
	unk_0x71199B01895C6202(joaat("superd"));
	unk_0x71199B01895C6202(Local_262.f_2D[0x00000000]);
	unk_0x71199B01895C6202(Local_262.f_2D[0x00000001]);
	unk_0x71199B01895C6202(Local_262.f_2D[0x00000002]);
	unk_0x71199B01895C6202(Local_262.f_2D[0x00000003]);
	unk_0x71199B01895C6202(Local_262.f_2D[0x00000004]);
	unk_0x8D17794CE3273D70("oddjobs@taxi@gyn@cc@intro");
	unk_0x8D17794CE3273D70("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x8D17794CE3273D70("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_195(var uParam0, bool bParam1)
{
	func_196(uParam0);
	if (bParam1)
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
		{
			uParam0->f_9 = func_190(uParam0->f_11, 0x00000001);
		}
		else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
		{
			unk_0x138116A08F9AC5F4(0x00000001, 0x00000000);
			unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
			unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
			unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
		}
	}
}

void func_196(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
}

void func_197(var uParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	func_188(uParam0, 0x000003E8);
}

void func_198(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_267(uParam0, 0x00000010, 4f, 0x00000000);
		if (func_199(uParam0))
		{
			func_52();
		}
	}
	func_226(uParam0, iParam2, bParam3);
}

int func_199(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_54())
	{
		Var1 = { func_201() };
		if (!unk_0xEA6BC48857E0AC4C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_200(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_200(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_201()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

bool func_202(var uParam0, var uParam1)
{
	return ((func_203((*uParam1)[0x00000000], uParam0) && func_203((*uParam1)[0x00000001], uParam0)) && func_203((*uParam1)[0x00000002], uParam0));
}

int func_203(int iParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam1->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0x82CCEAB29E9451DD(iParam0, uParam1->f_4))
			{
				return 0x00000001;
			}
		}
		else
		{
			func_300(uParam1, "Passenger was injured", 0x0000000F);
		}
	}
	else
	{
		func_300(uParam1, "Taxi was destroyed", 0x00000000);
	}
	return 0x00000000;
}

int func_204(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	func_223(uParam0, (*uParam1)[0x00000000]);
	func_223(uParam0, (*uParam1)[0x00000001]);
	func_223(uParam0, (*uParam1)[0x00000002]);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			func_221(uParam0, 0x00000001);
			if (func_36())
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
				func_185(uParam0, uParam1);
			}
		}
		else if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0x00000000))
		{
			func_219(uParam0);
		}
		else
		{
			if (func_145(uParam0, 0x0000000E))
			{
				func_163(uParam0);
				func_218(uParam0, uParam1, 0x00000000);
			}
			if (func_145(uParam0, 0x00000009))
			{
				func_152(uParam0, 0x00000009, 0x00000000);
				unk_0x790015DC92C918E2();
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x000000FF);
					unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1((*uParam1)[0x00000000]))
			{
				if (!uParam0->f_8E)
				{
					fVar4 = ((unk_0x9C66D99E63E8E24C(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_8D)
					{
						if (func_217(uParam0, (*uParam1)[iLocal_238]) > 50f || func_14(&iLocal_239) > 5f)
						{
							func_300(uParam0, "Left Passenger", 0x00000008);
						}
					}
					switch (uParam0->f_30)
					{
						case 0x00000000:
							if (unk_0xD1960163A3042274((*uParam1)[iLocal_238], 0x2A89B8A7) != 0x00000001 || ((func_11(unk_0x16F2683693E537C9(), (*uParam1)[iLocal_238], 0x00000001) < 20f && func_216((*uParam1)[iLocal_238], uParam0->f_B, 0x00000001) <= 28f) && func_216(uParam0->f_4, uParam0->f_B, 0x00000001) <= 28f))
							{
								if (func_214(uParam0, uParam1, 40f))
								{
									uParam0->f_30++;
								}
							}
							break;
						
						case 0x00000001:
							if (func_213(uParam0, uParam1, 0x00000000, 0x420C0000, 0x41000000, 0x40800000))
							{
								uParam0->f_8A = 0x00000001;
								if (bLocal_86)
								{
									iVar0 = func_212(uParam0, &uVar1);
									if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
									{
										unk_0x75CDA8644CD3B5F5(iVar0, 0x00000000, 0x00000000);
									}
								}
								iVar3 = 0x00000000;
								while (iVar3 < 0x00000003)
								{
									unk_0xA3BF0AA5A2608191((*uParam1)[iVar3]);
									unk_0xF82EA857DA10E0CD(&uVar2);
									unk_0xDD353D0E9C789D0E(&uVar2);
									switch (iVar3)
									{
										case 0x00000000:
											if (!unk_0x405E212DDE472467((*uParam1)[iVar3], 0x00000000))
											{
												unk_0x0C8C0C840C2D1AD2(0x00000000, uParam0->f_4, 0xFFFFFFFF, 0x00000000, 0x00000002);
												unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000006D6, 0x000008CA));
												unk_0x5B1D360B9C6F0A09(0x00000000, uParam0->f_4, 0x00009C40, 0x00000000, 1f, 0x00000001, 0x00000000);
											}
											break;
										
										case 0x00000001:
											if (!unk_0x405E212DDE472467((*uParam1)[iVar3], 0x00000000))
											{
												unk_0x0C8C0C840C2D1AD2(0x00000000, uParam0->f_4, 0xFFFFFFFF, 0x00000000, 0x00000002);
												unk_0x5B1D360B9C6F0A09(0x00000000, uParam0->f_4, 0x00009C40, 0x00000001, 1f, 0x00000001, 0x00000000);
											}
											break;
										
										case 0x00000002:
											if (!unk_0x405E212DDE472467((*uParam1)[iVar3], 0x00000000))
											{
												unk_0x0C8C0C840C2D1AD2(0x00000000, uParam0->f_4, 0xFFFFFFFF, 0x00000000, 0x00000002);
												unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000002EE, 0x000004E2));
												unk_0x5B1D360B9C6F0A09(0x00000000, uParam0->f_4, 0x00009C40, 0x00000002, 1f, 0x00000001, 0x00000000);
											}
											break;
									}
									unk_0x75ABDC5F81978924(uVar2);
									unk_0x78ADC381772E3D54((*uParam1)[iVar3], uVar2);
									iVar3++;
								}
								uParam0->f_30++;
							}
							else if (!func_153(uParam0))
							{
								unk_0xA3BF0AA5A2608191((*uParam1)[0x00000000]);
								unk_0xA3BF0AA5A2608191((*uParam1)[0x00000001]);
								unk_0xA3BF0AA5A2608191((*uParam1)[0x00000002]);
							}
							else if ((unk_0xD1960163A3042274((*uParam1)[0x00000000], 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274((*uParam1)[0x00000000], 0x0E763797) != 0x00000000) && func_217(uParam0, (*uParam1)[0x00000000]) > 8f)
							{
								unk_0xF82EA857DA10E0CD(&(uParam0->f_F3));
								unk_0xDD353D0E9C789D0E(&(uParam0->f_F3));
								unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4, 0x00000000);
								unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(uParam0->f_F3);
								unk_0x78ADC381772E3D54((*uParam1)[0x00000000], uParam0->f_F3);
							}
							break;
						
						case 0x00000002:
							if (bLocal_86)
							{
								if (func_11(uParam0->f_4, (*uParam1)[0x00000000], 0x00000001) < 3f)
								{
									if (!func_211(uParam0, 0x00000001))
									{
										unk_0x327AAEE25F323797((*uParam1)[0x00000000]);
										unk_0x327AAEE25F323797((*uParam1)[0x00000001]);
										unk_0x327AAEE25F323797((*uParam1)[0x00000002]);
										func_300(uParam0, "You had a dead body in your back seat.", 0x00000005);
									}
								}
							}
							func_210(uParam0, uParam1);
							if (func_217(uParam0, (*uParam1)[0x00000000]) < fVar4 || func_36())
							{
								if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
								{
									if ((unk_0x405E212DDE472467((*uParam1)[0x00000000], 0x00000000) && unk_0x405E212DDE472467((*uParam1)[0x00000001], 0x00000000)) && unk_0x405E212DDE472467((*uParam1)[0x00000002], 0x00000000))
									{
										func_196(uParam0);
										unk_0x4E885A246A9D983A((*uParam1)[0x00000000], 0x0000001A, 0x00000001);
										unk_0x4E885A246A9D983A((*uParam1)[0x00000001], 0x0000001A, 0x00000001);
										unk_0x4E885A246A9D983A((*uParam1)[0x00000002], 0x0000001A, 0x00000001);
										unk_0x4E885A246A9D983A((*uParam1)[0x00000000], 0x00000068, 0x00000001);
										func_152(uParam0, 0x00000005, 0x00000000);
										unk_0x0DC19E268D45C03F();
										return 0x00000001;
									}
								}
							}
							else
							{
								if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
								{
								}
								unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901((*uParam1)[0x00000000], 0x00000001), fVar4, 0x00000000, 0x00000000, 0x000000FF, 0x00000096);
							}
							if (func_209(uParam1))
							{
								unk_0xA3BF0AA5A2608191((*uParam1)[0x00000000]);
								unk_0xA3BF0AA5A2608191((*uParam1)[0x00000001]);
								unk_0xA3BF0AA5A2608191((*uParam1)[0x00000002]);
								func_300(uParam0, "Left Passenger", 0x00000008);
							}
							if ((func_208(uParam0, uParam1) || func_207(uParam0, uParam1)) || func_206(uParam0, uParam1))
							{
								if (!unk_0x405E212DDE472467((*uParam1)[0x00000002], 0x00000000))
								{
									unk_0x96167B03C5A77156((*uParam1)[0x00000002], func_41(uParam0->f_B, 0f, 0.5f, 0.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									iLocal_238 = 0x00000002;
								}
								if (!unk_0x405E212DDE472467((*uParam1)[0x00000001], 0x00000000))
								{
									unk_0x96167B03C5A77156((*uParam1)[0x00000001], func_41(uParam0->f_B, 0f, 0.5f, 0.5f, 0f), 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									iLocal_238 = 0x00000001;
								}
								if (!unk_0x405E212DDE472467((*uParam1)[0x00000000], 0x00000000))
								{
									unk_0x96167B03C5A77156((*uParam1)[0x00000000], uParam0->f_B, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									iLocal_238 = 0x00000000;
								}
								unk_0x142CC44DB769B57E(&(uParam0->f_8));
								uParam0->f_8 = func_205((*uParam1)[iLocal_238], 0x00000000, 0x00000000);
								func_109(&iLocal_239);
								uParam0->f_30 = 0x00000000;
								iLocal_79 = 0x00000000;
							}
							break;
						}
				}
			}
			else
			{
				func_300(uParam0, "Passenger injured.", 0x00000009);
			}
		}
	}
	else
	{
		func_300(uParam0, "Taxi not drivable.", 0x00000009);
	}
	return 0x00000000;
}

int func_205(int iParam0, bool bParam1, bool bParam2)
{
	return func_160(iParam0, !bParam1, bParam2);
}

int func_206(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]) && !unk_0x405E212DDE472467((*uParam1)[iVar0], 0x00000000))
		{
			if (func_217(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_207(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]) && !unk_0x405E212DDE472467((*uParam1)[iVar0], 0x00000000))
		{
			if (func_216(uParam0->f_4, uParam0->f_B, 0x00000001) > 28f)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_208(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iVar0]) && !unk_0x405E212DDE472467((*uParam1)[iVar0], 0x00000000))
		{
			if (func_216((*uParam1)[iVar0], uParam0->f_B, 0x00000001) > 28f)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_209(var uParam0)
{
	if ((!unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000001])) && !unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000002]))
	{
		if ((unk_0x405E212DDE472467((*uParam0)[0x00000000], 0x00000000) || unk_0x405E212DDE472467((*uParam0)[0x00000001], 0x00000000)) || unk_0x405E212DDE472467((*uParam0)[0x00000002], 0x00000000))
		{
			if ((!unk_0x405E212DDE472467((*uParam0)[0x00000000], 0x00000000) || !unk_0x405E212DDE472467((*uParam0)[0x00000001], 0x00000000)) || !unk_0x405E212DDE472467((*uParam0)[0x00000002], 0x00000000))
			{
				if (!func_17(&iLocal_242))
				{
					func_193(&iLocal_242);
				}
				else if (func_107(&iLocal_242) > 15f)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_210(var uParam0, var uParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam1)[iLocal_238]))
		{
			if (func_10((*uParam1)[iLocal_238], 0x00000001) > 30f)
			{
				if (unk_0xD1960163A3042274((*uParam1)[iLocal_238], 0x950B6492) == 0x00000001 || unk_0xD1960163A3042274((*uParam1)[iLocal_238], 0x0E763797) == 0x00000001)
				{
					func_300(uParam0, "Player abandoned passenger on pickup.", 0x00000008);
				}
			}
		}
	}
}

int func_211(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0[0x00000000] = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000001, 0x00000000);
		iVar0[0x00000001] = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000002, 0x00000000);
		iVar0[0x00000002] = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000000, 0x00000000);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar1]))
			{
				if (unk_0x437347B10A200C4B(iVar0[iVar1], 0x00000000))
				{
					if (iVar1 == 0x00000000)
					{
						uParam0->f_7 = 0x00000001;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 0x00000001)
					{
						uParam0->f_7 = 0x00000002;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0x00000000;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0x00000000;
				}
			}
			iVar1++;
		}
		if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
		{
		}
	}
	return 0x00000001;
}

int func_212(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000001, 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			*uParam1 = 0x00000001;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000002, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				*uParam1 = 0x00000002;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					*uParam1 = 0x00000000;
					return iVar0;
				}
			}
		}
	}
	return 0x00000000;
}

int func_213(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x437347B10A200C4B((*uParam1)[0x00000000], 0x00000000))
	{
		if (!unk_0x03068588A1FCED1A((*uParam1)[iLocal_238]) && func_10((*uParam1)[iLocal_238], 0x00000001) < fParam3)
		{
			if (!func_145(uParam0, 0x00000005))
			{
				func_267(uParam0, 0x00000005, 0x00000000, 0x00000000);
			}
		}
		else if (func_145(uParam0, 0x00000005))
		{
			func_152(uParam0, 0x00000005, 0x00000000);
		}
		if (((func_395(uParam0, 0x00000005) > IntToFloat(iParam2) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam5) && !unk_0x03068588A1FCED1A((*uParam1)[iLocal_238])) || func_10((*uParam1)[iLocal_238], 0x00000001) <= fParam4)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_214(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	var uVar4;
	
	uVar4 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen");
	vVar2 = { unk_0xBF584557291FDD31(uParam0->f_4, uVar4) };
	vVar2 = { unk_0x5293C88BD2F4DE13(uParam0->f_4, vVar2) };
	vVar2.y = (vVar2.y + 1f);
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar2) };
	vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x4ADCCF23C40DC113(vVar0, vVar1, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
	switch (iLocal_79)
	{
		case 0x00000000:
			unk_0x11AD11297DC58CC7((*uParam1)[0x00000000], 0x00000001);
			unk_0x11AD11297DC58CC7((*uParam1)[0x00000001], 0x00000001);
			unk_0x11AD11297DC58CC7((*uParam1)[0x00000002], 0x00000001);
			iLocal_79 = 0x00000001;
			break;
		
		case 0x00000001:
			if ((func_11(uParam0->f_4, (*uParam1)[iLocal_238], 0x00000000) <= fParam2 && !uParam0->f_8E) && unk_0x755FF954DAE327E1((vVar0.z - vVar1.z)) < 5f)
			{
				iVar3 = func_215(&(uParam0->f_199), vVar0, vVar1, 0x00000000);
				if (iVar3 == 0x00000000)
				{
					iLocal_79 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			unk_0x790015DC92C918E2();
			func_198(uParam0, 0x00000004, 0x00000001, 0x00000000, 0x00000001);
			unk_0xA3BF0AA5A2608191((*uParam1)[iLocal_238]);
			unk_0x0C8C0C840C2D1AD2(uParam0->f_3, uParam0->f_4, 0xFFFFFFFF, 0x00000800, 0x00000004);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_F3));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_F3));
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4, 0x00000000);
			unk_0x75ABDC5F81978924(uParam0->f_F3);
			unk_0x78ADC381772E3D54((*uParam1)[iLocal_238], uParam0->f_F3);
			return 0x00000001;
			break;
		
		case 0x00000003:
			iLocal_79 = 0x00000000;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_215(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vParam2, 0x000001FF, 0x00000000, 0x00000007);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 0x00000002)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0x00000000)
			{
				*uParam0 = 0x00000000;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0x00000000;
				return iVar2;
			}
		}
		else if (iVar4 == 0x00000000)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0x00000000;
		}
	}
	return 0xFFFFFFFF;
}

float func_216(int iParam0, vector3 vParam1, int iParam2)
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

float func_217(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (func_153(uParam0))
		{
			return func_11(uParam0->f_4, iParam1, 0x00000001);
		}
	}
	return 0f;
}

void func_218(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (bParam2)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
				func_162(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
			}
			else
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					if (unk_0xE4EDC4B0E92C078B(uParam1->f_24[iVar0]))
					{
						unk_0x7F010F50CE03A8AF(uParam1->f_24[iVar0], 0x00000000);
					}
					iVar0++;
				}
				func_198(uParam0, 0x00000002, 0x00000001, 0x00000001, 0x00000000);
			}
			func_157(uParam0, 0x00000000, 0x00000000);
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_A));
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x000000FF);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
				func_162(uParam0, &(uParam0->f_62), 0x00000008, 0x00000001);
			}
			else
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					if (unk_0xE4EDC4B0E92C078B(uParam1->f_24[iVar0]))
					{
						unk_0x7F010F50CE03A8AF(uParam1->f_24[iVar0], 0x000000FF);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_219(var uParam0)
{
	func_223(uParam0, uParam0->f_3);
	if (func_153(uParam0))
	{
		if (func_145(uParam0, 0x0000000E))
		{
			func_163(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_A));
			}
		}
	}
	if (!func_145(uParam0, 0x00000009))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
			unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		}
		func_267(uParam0, 0x00000009, 0x00000000, 0x00000000);
		func_220("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
	}
}

void func_220(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_221(var uParam0, bool bParam1)
{
	func_223(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (!func_145(uParam0, 0x0000000E))
			{
				if (func_54())
				{
					func_164(0x00000001);
				}
				func_222(uParam0, 0x0000000B, 0x00000001);
				func_156(uParam0, 0x00000001);
				func_267(uParam0, 0x0000000E, 0f, 0x00000001);
				if (uParam0->f_19A < 0x0000000F)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_127(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0x00000000))
					{
						if (func_395(uParam0, 0x0000000F) > 5f)
						{
							func_267(uParam0, 0x0000000F, 0f, 0x00000001);
						}
					}
					if (func_395(uParam0, 0x0000000E) > 20f)
					{
						func_300(uParam0, "Player not in taxi. - YELL RETURN", 0x00000008);
					}
				}
				else if (func_395(uParam0, 0x0000000E) > 20f)
				{
					if (func_10(uParam0->f_4, 0x00000001) > 40f)
					{
						func_300(uParam0, "Player not in taxi.", 0x00000015);
					}
					else
					{
						func_300(uParam0, "Player not in taxi. - YELL RETURN 2", 0x00000008);
					}
				}
			}
		}
	}
}

void func_222(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_223(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, joaat("weapon_stungun"), 0x00000000) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000002)) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000001))
				{
					func_300(uParam0, "Passenger injured by player with weapon.", 0x0000000E);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

void func_224()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xDF1306B443CD3D15(Local_260.f_4, 0x00000000))
	{
		if (func_153(&Local_260))
		{
			if (!iLocal_346)
			{
				uVar0 = unk_0xF653B9B22DA806A9(Local_260.f_4, "window_lf");
				uVar1 = unk_0xF653B9B22DA806A9(Local_260.f_4, "window_lr");
				uVar2 = unk_0xF653B9B22DA806A9(Local_260.f_4, "window_rf");
				uVar3 = unk_0xF653B9B22DA806A9(Local_260.f_4, "window_rr");
				vLocal_230 = { unk_0xBF584557291FDD31(Local_260.f_4, uVar0) };
				vLocal_230 = { unk_0x5293C88BD2F4DE13(Local_260.f_4, vLocal_230) };
				vLocal_234 = { vLocal_230 };
				vLocal_230.z = (vLocal_230.z + 0.15f);
				vLocal_230.y = (vLocal_230.y - 0.15f);
				vLocal_231 = { unk_0xBF584557291FDD31(Local_260.f_4, uVar1) };
				vLocal_231 = { unk_0x5293C88BD2F4DE13(Local_260.f_4, vLocal_231) };
				vLocal_235 = { vLocal_231 };
				vLocal_231.z = (vLocal_231.z + 0.15f);
				vLocal_232 = { unk_0xBF584557291FDD31(Local_260.f_4, uVar2) };
				vLocal_232 = { unk_0x5293C88BD2F4DE13(Local_260.f_4, vLocal_232) };
				vLocal_236 = { vLocal_232 };
				vLocal_232.z = (vLocal_232.z + 0.15f);
				vLocal_232.y = (vLocal_232.y - 0.15f);
				vLocal_233 = { unk_0xBF584557291FDD31(Local_260.f_4, uVar3) };
				vLocal_233 = { unk_0x5293C88BD2F4DE13(Local_260.f_4, vLocal_233) };
				vLocal_237 = { vLocal_233 };
				vLocal_233.z = (vLocal_233.z + 0.15f);
				iLocal_346 = 0x00000001;
			}
		}
		else if (iLocal_346)
		{
			iLocal_346 = 0x00000000;
		}
	}
}

void func_225(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_41(vParam1, 1f, -fParam2, -fParam2, -22f) };
	vVar1 = { func_41(vParam1, 1f, fParam2, fParam2, 44f) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam3)
	{
		unk_0x10F3BFFADF2CE3DA(vVar0, vVar1);
		*uParam0 = unk_0x7D6CA5F52B3748BF(vVar0, vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		unk_0x745CE398A4B0A3C6(vParam1, fParam2, 0x00000000);
	}
	else
	{
		unk_0xEFED0CD6E25037B9();
		unk_0x2952D66A502EA873(*uParam0, 0x00000000);
	}
}

void func_226(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_52();
		func_267(uParam0, 0x00000010, 4f, 0x00000000);
		unk_0x790015DC92C918E2();
	}
}

int func_227(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		return 0x00000000;
	}
	func_234(0x0000000C);
	if (func_25(uParam0->f_2C, 0x00000008))
	{
		if (!func_25(uParam0->f_2C, 0x00000080))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_25(uParam0->f_2C, 0x00000100))
			{
				func_235(&(uParam0->f_2C), 0x00000100);
			}
			if (func_25(uParam0->f_2C, 0x00000100) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_198(uParam0, 0x00000087, 0x00000001, 0x00000000, 0x00000001);
				func_235(&(uParam0->f_2C), 0x00000080);
			}
		}
	}
	if (!func_231(uParam0, iParam1))
	{
		if (func_10(uParam0->f_3, 0x00000001) < 35f)
		{
			if (!func_25(uParam0->f_2C, 0x00000008))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
				func_198(uParam0, 0x00000085, 0x00000001, 0x00000000, 0x00000001);
				func_235(&(uParam0->f_2C), 0x00000008);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_10(uParam0->f_3, 0x00000001) > 400f)
		{
			func_300(uParam0, "ped is fleeing or injured", 0x00000005);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0x00000000);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000001);
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_229(uParam0);
			func_55(0x00000002, 0x00000000);
			bLocal_86 = 0x00000001;
			func_193(&iLocal_82);
			return 0x00000001;
		}
		else
		{
			func_300(uParam0, "No Taxi", 0x00000015);
			func_228("TAXI_DBG_NTAXI", 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_228(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_229(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (func_230())
		{
		}
	}
}

int func_230()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_231(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				bVar2 = func_233(iVar0);
				bVar3 = 0x00000001;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 0x73920F8E) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = 0x00000000;
				}
				if (uParam0->f_19B == 0x00000007)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = 0x00000000;
					}
				}
				bVar4 = 0x00000000;
				if (unk_0x8E39AC3C76C8AA58(iVar1))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
					{
						bVar4 = 0x00000001;
					}
				}
				bVar5 = 0x00000001;
				if (unk_0xD6DF381716822EFE(iVar0) < iParam1)
				{
					bVar5 = 0x00000000;
				}
				if (!bVar2)
				{
					if (!func_25(uParam0->f_2C, 0x00000040))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_228("TX_VIP_DMGD", 0xFFFFFFFF);
							if (func_232("TX_VIP_DMGD"))
							{
								func_235(&(uParam0->f_2C), 0x00000040);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_25(uParam0->f_2C, 0x00000020))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_228("TX_VIP_CAR", 0xFFFFFFFF);
							if (func_232("TX_VIP_CAR"))
							{
								func_235(&(uParam0->f_2C), 0x00000020);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar5)
				{
					if (!func_25(uParam0->f_2C, 0x00000010))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_228("TX_VIP_SMALL", 0xFFFFFFFF);
							if (func_232("TX_VIP_SMALL"))
							{
								func_235(&(uParam0->f_2C), 0x00000010);
							}
						}
					}
					return 0x00000000;
				}
				return 0x00000001;
			}
		}
		else
		{
			func_23(&(uParam0->f_2C), 0x00000010);
			func_23(&(uParam0->f_2C), 0x00000040);
			func_23(&(uParam0->f_2C), 0x00000020);
		}
	}
	return 0x00000000;
}

int func_232(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000000, 0x00000000))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000001, 0x00000000))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000004, 0x00000000))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000005, 0x00000000))
	{
		iVar0++;
	}
	if (iVar0 < 0x00000002)
	{
		return 0x00000000;
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0x00000000;
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000000))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000001))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000002))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000003))
		{
			iVar1++;
		}
		if (iVar1 < 0x00000002)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_234(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(0x00000008, &uVar0, 0x00000001, 0x00000001);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000008, &cVar1);
	}
}

void func_235(var uParam0, int iParam1)
{
	func_236(uParam0, iParam1);
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_237(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_24(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_238()
{
	Local_165 = 0x00000000;
	func_255(0x0000945A/*func_257*/, 0x00009441/*func_256*/, 0x00000001);
	func_255(0x00009352/*func_253*/, 0x0000933B/*func_252*/, 0x00000001);
	func_255(0x000092FD/*func_251*/, 0x000092E4/*func_250*/, 0x00000001);
	func_255(0x0000929C/*func_249*/, 0x00009284/*func_248*/, 0x00000001);
	func_255(0x00009216/*func_247*/, 0x00009201/*func_246*/, 0x00000001);
	func_255(0x000091CC/*func_244*/, 0x000091B3/*func_243*/, 0x00000001);
	func_255(0x00009125/*func_240*/, 0x0000910E/*func_239*/, 0x00000001);
}

int func_239(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Not Driveable", 0x00000001);
	return 0x00000001;
}

int func_240(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_242(uParam0->f_4))
		{
			func_241(uParam0, 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_75 = 0x00000001;
	uParam0->f_76 = iParam1;
}

int func_242(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) < -100f)
	{
		return 0x00000001;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00009C40) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00009C40))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_243(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Didn't lose police in time.", 0x00000009);
	return 0x00000001;
}

int func_244(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		if (func_245(uParam0->f_55, 0x00000020))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_245(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_246(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_241(uParam0, 0x0000000B);
	return 0x00000001;
}

int func_247(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(uParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			if (!func_145(uParam0, 0x00000019))
			{
				func_267(uParam0, 0x00000019, 0x00000000, 0x00000000);
			}
			else if (func_395(uParam0, 0x00000019) > 2f)
			{
				return 0x00000001;
			}
		}
		else if (func_145(uParam0, 0x00000019))
		{
			func_152(uParam0, 0x00000019, 0x00000000);
		}
	}
	return 0x00000000;
}

int func_248(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Is Flipped", 0x00000000);
	return 0x00000001;
}

int func_249(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (unk_0x4DA54CAC0D81A673(uParam0->f_4))
		{
			if (unk_0x7B5606C651AB51B5(uParam0->f_4, 0x00000000, 0x00009C40) || unk_0x7B5606C651AB51B5(uParam0->f_4, 0x00000001, 0x00009C40))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_250(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Stayed stopped for too long.", 0x00000009);
	return 0x00000001;
}

int func_251(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_245(uParam0->f_56, 0x00000008))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_252(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Taxi Not Driveable", 0x00000000);
	return 0x00000001;
}

int func_253(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_254(uParam0->f_4))
		{
			func_241(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_254(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) == 0f)
	{
		if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
		}
		return 0x00000001;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00009C40) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00009C40))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_255(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 0x00000010)
	{
		Local_165 = 0x00000010;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0x00000000;
	func_236(&(Local_165.f_1[Local_165 /*4*/]), 0x00000001);
	if (bParam2)
	{
		func_236(&(Local_165.f_1[Local_165 /*4*/]), 0x00000002);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_300(uParam0, "Passenger injured.", 0x0000000F);
	return 0x00000001;
}

int func_257(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000)) || unk_0x4E861BC5B1EDA7BD(uParam0->f_3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_258()
{
	Local_162[0x00000005 /*10*/] = 0x00000005;
	Local_162[0x00000005 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000005 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[0x00000005 /*10*/].f_9 = 0x0000004E;
	Local_162[0x00000000 /*10*/] = 0x00000005;
	Local_162[0x00000000 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000000 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0x00000000 /*10*/].f_9 = 0x0000004C;
	Local_162[0x00000002 /*10*/] = 0x00000005;
	Local_162[0x00000002 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000002 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[0x00000002 /*10*/].f_9 = 0x00000015;
	Local_162[0x00000001 /*10*/] = 0x0000000A;
	Local_162[0x00000001 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000001 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[0x00000001 /*10*/].f_9 = 0x00000047;
	Local_162[0x00000004 /*10*/] = 0x0000000A;
	Local_162[0x00000004 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000004 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[0x00000004 /*10*/].f_9 = 0x0000004F;
	Local_162[0x00000006 /*10*/] = 0x0000000A;
	Local_162[0x00000006 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000006 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[0x00000006 /*10*/].f_9 = 0x00000050;
	Local_162[0x00000009 /*10*/] = 0x0000000F;
	Local_162[0x00000009 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000009 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[0x00000009 /*10*/].f_9 = 0x00000052;
	Local_162[0x00000008 /*10*/] = 0x0000000F;
	Local_162[0x00000008 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000008 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[0x00000008 /*10*/].f_9 = 0x00000048;
	Local_162[0x00000007 /*10*/] = 0x0000000F;
	Local_162[0x00000007 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000007 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[0x00000007 /*10*/].f_9 = 0x0000004A;
	Local_162[0x0000000B /*10*/] = 0x00000005;
	Local_162[0x0000000B /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000B /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[0x0000000B /*10*/].f_9 = 0x00000046;
	Local_162[0x0000000C /*10*/] = 0x00000005;
	Local_162[0x0000000C /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000C /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[0x0000000C /*10*/].f_9 = 0x00000045;
	Local_162[0x0000000D /*10*/] = 0x0000000A;
	Local_162[0x0000000D /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000D /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[0x0000000D /*10*/].f_9 = 0x00000043;
	Local_162[0x0000000E /*10*/] = 0x0000000A;
	Local_162[0x0000000E /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000E /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[0x0000000E /*10*/].f_9 = 0x0000004B;
}

int func_259()
{
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_29[0x00000000]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_29[0x00000001]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_29[0x00000002]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x83D8570832F172A7(uLocal_399))
	{
		return 0x00000000;
	}
	if (!func_260(&iLocal_339, 0x00000001))
	{
		func_261("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_260(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_22()))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 0x000003E8);
			return 0x00000000;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

void func_261(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_262(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			uParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 0x00000002:
			uParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 0x00000003:
			uParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 0x00000004:
			uParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 0x00000005:
			uParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 0x00000006:
			uParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 0x00000007:
			uParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 0x00000008:
			uParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 0x00000009:
			uParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 0x0000000A:
			uParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 0x00000012:
			uParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 0x0000000B:
			uParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 0x00000013:
			uParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 0x00000014:
			uParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 0x0000000D:
			uParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 0x0000000C:
			uParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 0x0000000E:
			uParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 0x0000000F:
			uParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 0x00000010:
			uParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 0x00000011:
			uParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 0x00000016:
			uParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 0x00000019:
			uParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 0x0000001A:
			uParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 0x00000018:
			uParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 0x0000001B:
			uParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 0x00000017:
			uParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 0x0000001C:
			uParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 0x0000001D:
			uParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 0x0000001E:
			uParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 0x00000015:
			uParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_19A = iParam1;
}

void func_263(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_205(uParam0->f_3, 0x00000000, 0x00000000);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x138116A08F9AC5F4(0x00000001, 0x00000000);
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
	}
}

int func_264(var uParam0, vector3 vParam1, vector3 vParam2, var uParam3)
{
	uParam0->f_B = { vParam1 };
	uParam0->f_E = { vParam2 };
	func_42(uParam0->f_E, 0x00000000);
	unk_0x28F5E4DA506AC0CA(uParam0->f_E, 25f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (unk_0xC844350D5D58C99A(Global_1AF0C.f_E1[0x00000000]))
	{
		(*uParam3)[0x00000000] = Global_1AF0C.f_E1[0x00000000];
		(*uParam3)[0x00000001] = Global_1AF0C.f_E1[0x00000001];
		(*uParam3)[0x00000002] = Global_1AF0C.f_E1[0x00000002];
		unk_0x73270B3C9CC833FD((*uParam3)[0x00000000], 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD((*uParam3)[0x00000001], 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD((*uParam3)[0x00000002], 0x00000001, 0x00000001);
	}
	else
	{
		(*uParam3)[0x00000000] = unk_0x36F2404464202779(0x0000001A, uParam3->f_29[0x00000000], uParam0->f_B, -178.76f, 0x00000001, 0x00000001);
		(*uParam3)[0x00000001] = unk_0x36F2404464202779(0x0000001A, uParam3->f_29[0x00000001], unk_0x68E4ADDDDCD7BDDE((*uParam3)[0x00000000], 0.5f, 0.5f, 0f), 21.77f, 0x00000001, 0x00000001);
		(*uParam3)[0x00000002] = unk_0x36F2404464202779(0x0000001A, uParam3->f_29[0x00000001], unk_0x68E4ADDDDCD7BDDE((*uParam3)[0x00000000], 0.5f, -0.5f, 0f), -147.25f, 0x00000001, 0x00000001);
	}
	func_266(uParam0, uParam3[0x00000000]);
	uParam3->f_33[0x00000000] = 0x00000000;
	uParam3->f_33[0x00000001] = 0x00000000;
	uParam3->f_33[0x00000002] = 0x00000000;
	uParam3->f_C[0x00000000] = 0x00000000;
	uParam3->f_C[0x00000001] = 0x00000001;
	uParam3->f_C[0x00000002] = 0x00000002;
	if ((!unk_0xEB6A8945D1AC98A1((*uParam3)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam3)[0x00000001])) && !unk_0xEB6A8945D1AC98A1((*uParam3)[0x00000002]))
	{
		unk_0xF96A174EE26D7588((*uParam3)[0x00000001], (*uParam3)[0x00000000], 0x00000000);
		unk_0xF96A174EE26D7588((*uParam3)[0x00000002], (*uParam3)[0x00000000], 0x00000000);
		unk_0xF96A174EE26D7588((*uParam3)[0x00000000], (*uParam3)[0x00000001], 0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1((*uParam3)[0x00000002]))
	{
		func_8(&(uParam0->f_F4), 0x00000005, (*uParam3)[0x00000002], "TaxiPaulie", 0x00000000, 0x00000001);
		unk_0x4F39CC3882DD074E((*uParam3)[0x00000002], "TaxiPaulie");
		unk_0x4E885A246A9D983A((*uParam3)[0x00000002], 0x0000013D, 0x00000001);
	}
	if (!unk_0xEB6A8945D1AC98A1((*uParam3)[0x00000001]))
	{
		func_8(&(uParam0->f_F4), 0x00000004, (*uParam3)[0x00000001], "TaxiClyde", 0x00000000, 0x00000001);
		unk_0x4F39CC3882DD074E((*uParam3)[0x00000001], "TaxiClyde");
		unk_0x4E885A246A9D983A((*uParam3)[0x00000001], 0x0000013D, 0x00000001);
	}
	if (!unk_0xEB6A8945D1AC98A1((*uParam3)[0x00000000]))
	{
		func_8(&(uParam0->f_F4), 0x00000003, (*uParam3)[0x00000000], "TaxiDarren", 0x00000000, 0x00000001);
		unk_0x4F39CC3882DD074E((*uParam3)[0x00000000], "TaxiDarren");
		unk_0x4E885A246A9D983A((*uParam3)[0x00000000], 0x0000013D, 0x00000001);
		unk_0xF63400DBE3303D26("TAXI_Passenger", &(uParam0->f_19D));
		unk_0x0E2400AB9174FA81(0x00000001, uParam0->f_19D, 0x6F0783F5);
		unk_0x6DF7BF67E86AAE86((*uParam3)[0x00000000], uParam0->f_19D);
		func_265((*uParam3)[0x00000001], uParam0->f_19D);
		func_265((*uParam3)[0x00000002], uParam0->f_19D);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_265(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0x6DF7BF67E86AAE86(iParam0, iParam1);
	}
}

void func_266(var uParam0, var uParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_267(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (fParam2 > 0f)
			{
				func_110(&(uParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_109(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_110(&(uParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_109(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_268()
{
	unk_0x9E5E60D8C63FD9D1();
	unk_0x3F423BF5B8125A50("oddjobs@taxi@gyn@cc@hotbox");
}

void func_269()
{
	unk_0x523BCC9DC80CD82F(Local_262.f_2D[0x00000000]);
	unk_0x523BCC9DC80CD82F(Local_262.f_2D[0x00000001]);
	unk_0x523BCC9DC80CD82F(Local_262.f_2D[0x00000002]);
	unk_0x523BCC9DC80CD82F(Local_262.f_2D[0x00000003]);
	unk_0x523BCC9DC80CD82F(Local_262.f_2D[0x00000004]);
	unk_0x523BCC9DC80CD82F(joaat("stretch"));
	unk_0x523BCC9DC80CD82F(joaat("superd"));
	unk_0x3F423BF5B8125A50("oddjobs@taxi@gyn@cc@intro");
	unk_0x3F423BF5B8125A50("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x3F423BF5B8125A50("amb@world_human_stand_impatient@female@no_sign@base");
	uLocal_399 = func_270();
}

var func_270()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_271()
{
	unk_0x523BCC9DC80CD82F(Local_262.f_29[0x00000000]);
	unk_0x523BCC9DC80CD82F(Local_262.f_29[0x00000001]);
	unk_0x523BCC9DC80CD82F(Local_262.f_29[0x00000002]);
	func_272(0x00000001);
}

void func_272(bool bParam0)
{
	unk_0x523BCC9DC80CD82F(func_22());
	if (bParam0)
	{
		unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	unk_0x3F423BF5B8125A50("oddjobs@taxi@");
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	unk_0x3F423BF5B8125A50("misscommon@response");
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
	if (!func_25(Global_1B416.f_4A94, 0x00000080))
	{
		func_235(&(Global_1B416.f_4A94), 0x00000080);
	}
}

void func_273(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 0x00000005)
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000004)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_3C[iVar0 /*3*/]), 0x00000001);
			iVar0++;
		}
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			uParam0->f_3C[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x5D96D8530B3D0904(&(uParam0->f_3C[iVar0 /*3*/]), 0x00000001);
			unk_0x0674E58A79778E99(&(uParam0->f_3C[iVar0 /*3*/]), 0x00000002);
			iVar0++;
		}
	}
}

void func_274(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_275(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_2, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			if (!unk_0x437347B10A200C4B(uParam1->f_4[iVar0], 0x00000000))
			{
				if (func_11(uParam0->f_2, uParam1->f_4[iVar0], 0x00000001) > fParam2)
				{
					unk_0x6DAD7906B73F064D(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0x437347B10A200C4B(uParam1->f_A, 0x00000000))
	{
		if (func_11(uParam0->f_2, uParam1->f_A, 0x00000001) > fParam2)
		{
			unk_0x046C362CF15F1935(&(uParam1->f_A));
			unk_0x046C362CF15F1935(&(uParam1->f_B));
		}
	}
}

void func_276(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_19B == 0x00000000)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (bParam2)
			{
				if (func_395(uParam0, 0x0000000A) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_198(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_70 = 0x00000000;
					}
					else
					{
						func_198(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
					}
					uParam0->f_71 = 0x00000001;
					func_267(uParam0, 0x0000000A, 0f, 0x00000001);
				}
			}
			else if (func_395(uParam0, 0x0000000A) > 20f)
			{
				if (uParam0->f_70)
				{
					func_198(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_198(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_267(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (uParam0->f_19B == 0x00000001)
	{
		if (func_395(uParam0, 0x0000000A) > 30f)
		{
			if (!func_54())
			{
				if (uParam0->f_70)
				{
					func_198(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_198(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_267(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000040))
	{
		if (!func_17(&(Local_162[0x00000005 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000005 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000005 /*10*/].f_6)) > 6f)
		{
			if (func_299(uParam0))
			{
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000005 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_298(uParam0, 0x00000001);
				func_296(0x00000005, uParam0);
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000001))
	{
		if (!func_17(&(Local_162[0x00000000 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000000 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000000 /*10*/].f_6)) > 5f)
		{
			if (func_294(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x00000000, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000000 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000002))
	{
		if (!func_17(&(Local_162[0x00000001 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000001 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000001 /*10*/].f_6)) > 5f)
		{
			if (func_293(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x00000001, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000001 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000800))
	{
		if (!func_17(&(Local_162[0x00000008 /*10*/].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_193(&(Local_162[0x00000008 /*10*/].f_6));
			}
		}
		else if (func_107(&(Local_162[0x00000008 /*10*/].f_6)) > 7f || Local_162[0x00000008 /*10*/].f_1 == 0x00000000)
		{
			if (func_292(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x00000008, uParam0);
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000080))
	{
		if (!func_17(&(Local_162[0x00000006 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000006 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000006 /*10*/].f_6)) > 5f)
		{
			if (func_291(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x00000006, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000006 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000020))
	{
		if (!func_17(&(Local_162[0x00000004 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000004 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000004 /*10*/].f_6)) > 4f)
		{
			if (func_290(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x00000004, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000004 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000100))
	{
		if (!func_17(&(Local_162[0x00000007 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000007 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000007 /*10*/].f_6)) > 5f || Local_162[0x00000007 /*10*/].f_1 == 0x00000000)
		{
			if (func_289(uParam0))
			{
				func_296(0x00000007, uParam0);
				func_298(uParam0, 0x00000001);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000007 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000008))
	{
		if (!func_17(&(Local_162[0x00000009 /*10*/].f_6)))
		{
			func_193(&(Local_162[0x00000009 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000009 /*10*/].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_107(&(Local_162[0x00000009 /*10*/].f_6)) > 7f || Local_162[0x00000009 /*10*/].f_1 == 0x00000000)
		{
			if (func_288(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x00000009, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000009 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00004000))
	{
		if (!func_17(&(Local_162[0x0000000D /*10*/].f_6)))
		{
			func_193(&(Local_162[0x0000000D /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000D /*10*/].f_6)) > 10f)
		{
			if (func_282(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x0000000D, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x0000000D /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00008000))
	{
		if (!func_17(&(Local_162[0x0000000E /*10*/].f_6)))
		{
			func_193(&(Local_162[0x0000000E /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000E /*10*/].f_6)) > 7f)
		{
			if (func_281(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x0000000E, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x0000000E /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00001000))
	{
		if (!func_17(&(Local_162[0x0000000B /*10*/].f_6)))
		{
			func_193(&(Local_162[0x0000000B /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000B /*10*/].f_6)) > 8f)
		{
			if (func_280(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x0000000B, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x0000000B /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00002000))
	{
		if (!func_17(&(Local_162[0x0000000C /*10*/].f_6)))
		{
			func_193(&(Local_162[0x0000000C /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000C /*10*/].f_6)) > 5f)
		{
			if (func_279(uParam0))
			{
				func_298(uParam0, 0x00000001);
				func_296(0x0000000C, uParam0);
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x0000000C /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_295(uParam0);
			}
		}
	}
	if (func_25(uParam0->f_64, 0x00000004))
	{
		if (!func_17(&(Local_162[0x00000002 /*10*/].f_6)))
		{
			func_278(&(Local_162[0x00000002 /*10*/].f_6), 0f);
		}
		else if (func_107(&(Local_162[0x00000002 /*10*/].f_6)) > 5f)
		{
			if (func_277(uParam0))
			{
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, Local_162[0x00000002 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_298(uParam0, 0x00000001);
				func_296(0x00000002, uParam0);
				func_295(uParam0);
			}
		}
	}
}

int func_277(var uParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_2))
	{
		if ((!unk_0x4024663A44BC1535(uParam0->f_2) && !func_17(&(Local_162[0x00000000 /*10*/].f_3))) && !func_17(&(Local_162[0x00000001 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x00000002 /*10*/].f_3)))
			{
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_193(&(Local_162[0x00000002 /*10*/].f_3));
				}
			}
			else if (func_107(&(Local_162[0x00000002 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_106(&(Local_162[0x00000002 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			func_106(&(Local_162[0x00000002 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_278(int iParam0, float fParam1)
{
	if (!func_17(iParam0))
	{
		func_110(iParam0, fParam1);
	}
}

int func_279(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (vVar0.y < -10f && !func_17(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x0000000C /*10*/].f_3)))
			{
				func_193(&(Local_162[0x0000000C /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x0000000C /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_162[0x0000000C /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x0000000C /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_280(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_17(&(Local_162[0x00000000 /*10*/].f_3))) && !func_17(&(Local_162[0x00000001 /*10*/].f_3))) && !func_17(&(Local_162[0x00000005 /*10*/].f_3))) && !func_17(&(Local_162[0x00000009 /*10*/].f_3))) && !func_17(&(Local_162[0x00000007 /*10*/].f_3))) && !func_17(&(Local_162[0x00000008 /*10*/].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_17(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x0000000B /*10*/].f_3)))
			{
				func_193(&(Local_162[0x0000000B /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_107(&(Local_162[0x0000000B /*10*/].f_3)) < 1.5f && (unk_0x755FF954DAE327E1(fLocal_164) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_106(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000001;
			}
			else if (func_107(&(Local_162[0x0000000B /*10*/].f_3)) >= 1.5f)
			{
				func_106(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_281(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_17(&(Local_162[0x00000000 /*10*/].f_3))) && !func_17(&(Local_162[0x00000008 /*10*/].f_3))) && !func_17(&(Local_162[0x00000005 /*10*/].f_3))) && !func_17(&(Local_162[0x00000009 /*10*/].f_3))) && !func_17(&(Local_162[0x00000007 /*10*/].f_3)))
	{
		if (!func_17(&(Local_162[0x0000000E /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 10f, 0x00000000, 0x00000104);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_11(uParam0->f_5, uParam0->f_4, 0x00000001) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0x00000000) && !unk_0xBBA8A868118C90ED(uParam0->f_5, 0xFFFFFFFF, 0x00000000)))
				{
					func_193(&(Local_162[0x0000000E /*10*/].f_3));
				}
			}
		}
		else if ((func_107(&(Local_162[0x0000000E /*10*/].f_3)) < 1.5f && func_11(uParam0->f_5, uParam0->f_4, 0x00000001) > 4.5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_106(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000001;
		}
		else if (func_107(&(Local_162[0x0000000E /*10*/].f_3)) >= 1.5f)
		{
			func_106(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_106(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_282(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_17(&(Local_162[0x00000009 /*10*/].f_3))) && !func_17(&(Local_162[0x00000007 /*10*/].f_3))) && !func_17(&(Local_162[0x00000004 /*10*/].f_3)))
	{
		if (!func_283(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_17(&(Local_162[0x0000000D /*10*/].f_3)))
			{
				func_193(&(Local_162[0x0000000D /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x0000000D /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_162[0x0000000D /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x0000000D /*10*/].f_3));
		}
	}
	return 0x00000000;
}

bool func_283(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001, &vVar0, 0x00000001, 0x40400000, 0x00000000);
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000002, &vVar1, 0x00000001, 0x40400000, 0x00000000);
	unk_0x48C17E97DDC41CBC(vVar0, 0xFFFFFFFF, &vVar2);
	fVar9 = SYSTEM::VMAG(vVar2 - vVar0);
	vVar3 = { func_287((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_286(vVar3, 0x00000000) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_284(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vVar5, vVar6, vVar7);
}

int func_284(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_287(vParam2 - vParam1) };
	vVar1 = { func_287(vParam3 - vParam1) };
	fVar2 = func_285(vParam0, vVar0);
	fVar3 = func_285(vParam1, vVar0);
	fVar4 = func_285(vParam2, vVar0);
	fVar5 = func_285(vParam0, vVar1);
	fVar6 = func_285(vParam1, vVar1);
	fVar7 = func_285(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0x00000000;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_285(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_286(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 0x00000001:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 0x00000002:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_287(vector3 vParam0)
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

int func_288(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_289(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (unk_0x377BE9A1BF38C7CE(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0xCE563465D2227DD6(uParam0->f_4) <= -145f || unk_0xCE563465D2227DD6(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 0x00000001;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0xCE563465D2227DD6(uParam0->f_4) <= 35f && unk_0xCE563465D2227DD6(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0x00000000;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_290(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_17(&(Local_162[0x00000004 /*10*/].f_3)))
			{
				func_193(&(Local_162[0x00000004 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000004 /*10*/].f_3)) > 2f)
			{
				func_106(&(Local_162[0x00000004 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000004 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_291(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_17(&(Local_162[0x00000006 /*10*/].f_3)))
			{
				func_193(&(Local_162[0x00000006 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000006 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_162[0x00000006 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000006 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_292(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xE608C809F9416F00(uParam0->f_4))
		{
			iVar0 = unk_0x7F6DC62EA9922664(uParam0->f_4);
			iVar1 = (uParam0->f_2E - iVar0);
			uParam0->f_2E = iVar0;
			unk_0xE910A68AA670B4AA(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_71)
				{
					func_198(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_198(uParam0, 0x00000048, 0x00000001, 0x00000000, 0x00000001);
				}
				func_106(&(Local_162[0x00000002 /*10*/].f_6));
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_293(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_17(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x00000001 /*10*/].f_3)))
			{
				func_193(&(Local_162[0x00000001 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000001 /*10*/].f_3)) > 1.2f)
			{
				func_106(&(Local_162[0x00000001 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000001 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_294(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_17(&(Local_162[0x00000000 /*10*/].f_3)))
			{
				func_193(&(Local_162[0x00000000 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000000 /*10*/].f_3)) > 0.7f)
			{
				func_106(&(Local_162[0x00000000 /*10*/].f_3));
				func_109(&(Local_162[0x00000001 /*10*/].f_6));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000000 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_295(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (func_17(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_109(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_267(uParam0, 0x0000000A, 0f, 0x00000001);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_296(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_297(uParam1, iParam0);
	func_106(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 0x00000001;
}

void func_297(var uParam0, int iParam1)
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_298(var uParam0, int iParam1)
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_299(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_17(&(Local_162[0x00000005 /*10*/].f_3)))
			{
				func_193(&(Local_162[0x00000005 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000005 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_162[0x00000005 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000005 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_300(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_186();
	func_418(0x00000002);
	vVar0 = { func_322() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_54()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(0x00000001);
		StringCopy(&vVar0, uParam0->f_8F, 24);
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (!func_127(uParam0))
			{
				if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0x00000003))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0xC1000000);
				}
				else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0xC1000000);
				}
				else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0x00000003))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0xC1000000);
				}
			}
		}
		uParam0->f_6D = 0x00000001;
		uParam0->f_79 = sParam1;
		uParam0->f_19F = iParam2;
		func_267(uParam0, 0x00000003, 0x00000000, 0x00000000);
		if (iParam2 == 0x00000008 || iParam2 == 0x00000012)
		{
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_320(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x0000000A)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 0x0000000F)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 0x00000002)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x00000003)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000004)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000005)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_127(uParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
				{
					func_316(uParam0, 0x00001000, 0x00000000);
				}
				else
				{
					func_316(uParam0, 0x00000000, 0x00000000);
				}
			}
		}
		else if (iParam2 == 0x00000006)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 0x00000007)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000E)
		{
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_320(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_318(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 0x00000004);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 0x0000000C)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_320(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000D)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_320(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 0x0000000B)
		{
			func_55(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_320(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_318(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 0x00000004);
			}
			func_316(uParam0, 0x00000000, 0x00000000);
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0x00000000)
		{
			func_55(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_320(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 0x00000001)
		{
			func_55(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_320(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 0x00000013)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_315(&vVar0);
			func_301(&(uParam0->f_F4), "OJTXAUD", &vVar0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 0x00000014)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_320(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_19B != 0x00000009)
			{
				if (iParam2 != 0x00000015)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_19A > 0x00000005)
				{
					func_320(uParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_318(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_55(0x00000003, 0x00000000);
		}
		func_267(uParam0, 0x00000003, 0f, 0x00000001);
	}
}

int func_301(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_302(sParam2, iParam3, 0x00000000);
}

int func_302(char* sParam0, int iParam1, bool bParam2)
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
					func_187();
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
		if (func_313(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_312();
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
				func_311();
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
				if (func_310())
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
			if (func_34())
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
			func_309();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_308();
		func_303();
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
		func_187();
	}
	return 0x00000000;
}

void func_303()
{
	if (!func_304())
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

int func_304()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_307())
	{
		return 0x00000000;
	}
	if (func_305(unk_0xD803B885F5E47A62()))
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

bool func_305(int iParam0)
{
	return func_306(iParam0, 0x00000014);
}

bool func_306(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_307()
{
	return 0xFFFFFFFF;
}

void func_308()
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

void func_309()
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

int func_310()
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

void func_311()
{
	if (func_80(0x0000000E))
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
		Global_4C1E = func_103();
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

void func_312()
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

bool func_313(int iParam0, int iParam1)
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

void func_314(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_315(char* sParam0)
{
	switch (func_3(unk_0x16F2683693E537C9()))
	{
		case 0x00000000:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 0x00000002:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 0x00000001:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_316(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000000);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000003, 0x00000000);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 0x00000011, 0x00000001);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_116(uParam0->f_3, uParam0->f_1D, 0x00000001) <= 200f && !func_121(uParam0->f_1D)) && !bParam2)
		{
			func_317(uParam0);
		}
		else
		{
			unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000400, 0x00000001);
			unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00020000, 0x00000001);
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, iParam1);
			if (uParam0->f_19F == 0x00000008)
			{
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
	}
}

void func_317(var uParam0)
{
	var uVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_43(func_44(), uParam0->f_1D, 0x00000000))
		{
			if (uParam0->f_19B == 0x00000002)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 84.9058f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
			}
			else if (uParam0->f_19B == 0x00000004)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 68.3138f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
			}
			else
			{
				unk_0x01E4BB5190DF7317(uParam0->f_3, 0x471C4000, 0x00000000);
			}
		}
		else
		{
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
			unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
			unk_0x96167B03C5A77156(0x00000000, uParam0->f_1D, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			if (uParam0->f_19B == 0x00000002)
			{
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_AA_SMOKE", 0x00000000, 0x00000000);
			}
			else if (uParam0->f_19B == 0x00000000)
			{
				unk_0x91CF687749AD9691(0x00000000, 0x00000001);
				unk_0x96167B03C5A77156(0x00000000, 813.9421f, 1172.681f, 329.7988f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0xE655C47E46F9A7E4(0x00000000, 151.7794f, 0x00000000);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING_POT", 0x00000000, 0x00000000);
			}
			else if (uParam0->f_19B == 0x00000004)
			{
				unk_0x4A35AD9FC803369E(0x00000000, uParam0->f_1D, 15f, 0x00000000);
			}
			else if (uParam0->f_19B == 0x00000001)
			{
				unk_0x4A35AD9FC803369E(0x00000000, uParam0->f_1D, 15f, 0x00004E20);
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@", "base", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (unk_0x4742C50E93110B10(uParam0->f_1D, 15f, 0x00000001))
			{
				unk_0x4A35AD9FC803369E(0x00000000, uParam0->f_1D, 15f, 0x00000000);
			}
			else
			{
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			}
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
	}
}

void func_318(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_319(iParam3), 0x00000000);
}

int func_319(int iParam0)
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

void func_320(var uParam0, char* sParam1)
{
	if (func_321(uParam0))
	{
		func_301(&(uParam0->f_F4), uParam0->f_90, sParam1, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_321(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_11(unk_0x16F2683693E537C9(), uParam0->f_3, 0x00000001) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<6> func_322()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		if (iVar1 > 0xFFFFFFFF)
		{
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_323(var uParam0)
{
	return uParam0->f_76;
}

void func_324()
{
	func_353(&Local_260);
	if (func_352(&Local_260, &Local_348))
	{
		switch (Local_348.f_1B)
		{
			case 0x00000000:
				if (Local_260.f_19A == 0x00000009)
				{
					if (!func_143(&Local_260))
					{
						if (func_351("TAXI_OBJ_CC1") || unk_0xE4EDC4B0E92C078B(Local_262.f_24[0x00000002]))
						{
							Local_348.f_1B++;
						}
						else if (func_176(&Local_260) != 0x0000000A)
						{
							func_198(&Local_260, 0x0000000A, 0x00000001, 0x00000000, 0x00000001);
						}
					}
				}
				break;
			
			case 0x00000001:
				if ((func_176(&Local_260) > 0x0000000A && func_176(&Local_260) != 0x0000000F) && !func_143(&Local_260))
				{
					func_198(&Local_260, 0x0000000F, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_347)
					{
					}
					func_192(&Local_260, 0x00000007);
				}
				break;
			
			case 0x00000002:
				if (!Local_262.f_42)
				{
					Local_262.f_42 = 0x00000001;
					bLocal_248 = 0x00000001;
				}
				if (func_116(Local_260.f_4, Local_262.f_10[0x00000002 /*3*/], 0x00000001) < 530f)
				{
					Local_348.f_1B++;
				}
				if (func_395(&Local_260, 0x0000000B) > 17f || func_116(Local_260.f_4, Local_262.f_10[0x00000002 /*3*/], 0x00000001) < 700f)
				{
					func_198(&Local_260, 0x0000005F, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_347)
					{
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				break;
			
			case 0x00000003:
				if ((func_176(&Local_260) > 0x0000000A && func_176(&Local_260) != 0x00000010) && !func_143(&Local_260))
				{
					func_198(&Local_260, 0x00000010, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_347)
					{
					}
				}
				break;
			
			case 0x00000004:
				if (func_116(Local_260.f_4, Local_262.f_10[0x00000002 /*3*/], 0x00000001) < 530f)
				{
					Local_348.f_1B++;
				}
				if (func_395(&Local_260, 0x0000000B) > 8f || func_116(Local_260.f_4, Local_262.f_10[0x00000002 /*3*/], 0x00000001) < 700f)
				{
					func_198(&Local_260, 0x0000005E, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_347)
					{
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				break;
			
			case 0x00000005:
				if (func_395(&Local_260, 0x0000000B) > 20f || func_116(Local_260.f_4, Local_262.f_10[0x00000002 /*3*/], 0x00000001) < 530f)
				{
					if (!iLocal_251)
					{
						iLocal_251 = 0x00000001;
					}
					if (!bLocal_249)
					{
						func_198(&Local_260, 0x00000060, 0x00000001, 0x00000000, 0x00000000);
						bLocal_249 = 0x00000001;
						if (bLocal_347)
						{
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				break;
			
			case 0x00000006:
				if (func_395(&Local_260, 0x00000012) > unk_0x79833B02DBD2A244(8f, 16f))
				{
				}
				break;
			}
	}
	func_325(&Local_260, &uLocal_351, &Local_348, bLocal_347);
}

int func_325(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_333(uParam0, uParam1);
	if (((*uParam2 == 0xFFFFFFFF && uParam0->f_19A < 0x0000001D) && !uParam0->f_6D) && !func_145(uParam0, 0x00000002))
	{
		if (func_332(uParam1))
		{
			*uParam2 = 0x00000001;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() % 0x000007D0) < 0x00000032)
		{
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 0x00000001:
				if (!func_331(uParam0))
				{
					uParam2->f_7 = { func_330(uParam1) };
					func_301(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					*uParam2 = 0x00000002;
					if (bParam3)
					{
					}
				}
				break;
			
			case 0x00000002:
				if (func_54())
				{
					uParam2->f_D = { func_201() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_D), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_236(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_328(uParam1);
					func_267(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam3)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000003:
				if (func_144(uParam0))
				{
					if (func_54())
					{
						func_267(uParam0, 0x00000011, 0f, 0x00000001);
						uParam2->f_1 = { func_327() };
						if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
						{
							*uParam2 = 0x00000000;
						}
						else
						{
							*uParam2 = 0x00000004;
						}
					}
				}
				else if (func_54())
				{
					uParam2->f_13 = { func_322() };
				}
				else
				{
					func_236(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_328(uParam1);
					func_267(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam3)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000004:
				if (((!func_145(uParam0, 0x0000000E) && !func_54()) && !func_144(uParam0)) && func_395(uParam0, 0x00000012) > 1f)
				{
					func_267(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0x00000006;
					if (bParam3)
					{
					}
				}
				break;
			
			case 0x00000006:
				if (!func_54())
				{
					if (func_395(uParam0, 0x00000012) > 1f)
					{
						if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_326(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 0x00000008, 0x00000000, 0x00000000);
							if (bParam3)
							{
							}
						}
						*uParam2 = 0x00000003;
					}
				}
				break;
			
			case 0x00000007:
				if (!func_54())
				{
					func_236(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_328(uParam1);
					func_267(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
				}
				break;
			}
	}
	return 0x00000000;
}

int func_326(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000001;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_302(sParam2, iParam4, 0x00000000);
}

struct<6> func_327()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		iVar2 = iVar1 + 1;
		if (iVar2 > 0xFFFFFFFF && iVar1 > 0xFFFFFFFF)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
			{
				return Global_4CD9[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 0x00000046)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar3 /*6*/])))
					{
						return Global_4CD9[iVar3 /*6*/];
						iVar3 = 0x00000046;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = func_329(uParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		func_23(&((uParam0[iVar0 /*8*/])->f_7), 0x00000002);
		func_23(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		func_235(&((uParam0[iVar0 /*8*/])->f_7), 0x00000008);
		StringCopy(uParam0[iVar0 /*8*/], func_142(), 24);
	}
}

int func_329(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_25((uParam0[iVar0 /*8*/])->f_7, 0x00000004))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

struct<6> func_330(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_25((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_235(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		}
		iVar0++;
	}
	return Var1;
}

int func_331(var uParam0)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (func_180("TX_OBJ_NEX_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_180("TX_OBJ_TIE_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_180("TX_OBJ_DL_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if ((func_180("TX_OBJ_GYB_DO", 0x00000000, 0x00000000) || func_180("TAXI_OBJ_GYB", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_GYB_2", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_180("TX_OBJ_TTB_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if ((func_180("TX_OBJ_CYI_DO", 0x00000000, 0x00000000) || func_180("TAXI_OBJ_CYI_01", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_CYI_02", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (((func_180("TX_OBJ_GYN_DO", 0x00000000, 0x00000000) || func_180("TAXI_OBJ_GYN", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_GYN_TG", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_GYN_GF", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if ((func_180("TAXI_OBJ_CC1", 0x00000000, 0x00000000) || func_180("TAXI_OBJ_CC2", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_CC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if ((func_180("TAXI_OBJ_FTC1", 0x00000000, 0x00000000) || func_180("TAXI_OBJ_FTC2", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_FTC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (func_180("TX_OBJ_PRO_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	return (((((func_180("TAXI_OBJ_GETRUN", 0x00000000, 0x00000000) || func_180("TAXI_OBJ_DRIVE", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_RETURN", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_POL", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_RUNOUT", 0x00000000, 0x00000000)) || func_180("TAXI_OBJ_POL", 0x00000000, 0x00000000));
}

int func_332(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_25((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_333(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_331(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_145(uParam0, 0x0000000E))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_176(uParam0))
		{
			case 0x00000037:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_348(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000002:
				if (!func_54())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_19B != 0x00000009)
					{
						func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				else
				{
					func_344(uParam0, vVar0, func_346(uParam0, 0x00000002));
				}
				if (func_25(uParam0->f_62, 0x00000004))
				{
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				func_162(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				break;
			
			case 0x00000003:
				if (func_395(uParam0, 0x00000010) > 1f)
				{
					func_164(0x00000001);
					if (uParam0->f_19B == 0x00000009)
					{
						func_220("TAXI_OBJ_RETURN", 0x00001D4C, 0x00000001);
					}
					else
					{
						func_220("TAXI_VIP_RETURN", 0x00001D4C, 0x00000001);
					}
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000041:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_6B++;
				if (uParam0->f_19B != 0x00000009)
				{
					func_347(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_318(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 0x00000004);
				}
				break;
		}
	}
	else if ((func_395(uParam0, 0x00000010) > func_161(uParam0->f_19B == 0x00000000, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) && !func_54()) || (uParam0->f_19B != 0x00000000 && uParam0->f_19B != 0x00000001)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_176(uParam0))
		{
			case 0x0000008E:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_347(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				break;
			
			case 0x00000038:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_348(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000000:
				if (uParam0->f_19B == 0x00000009)
				{
					func_301(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_198(uParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_198(uParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000004:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_25(uParam0->f_2C, 0x00000080))
				{
					if ((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) || uParam0->f_19B == 0x00000004)
					{
						func_350(&(uParam0->f_63), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
						func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					}
					else
					{
						func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				func_267(uParam0, 0x00000010, 4f, 0x00000000);
				uParam0->f_8D = 0x00000001;
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000005:
				if (uParam0->f_19B == 0x00000007)
				{
					func_220("TAXI_OBJ_GPCKUP", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_220("TAXI_OBJ_PICKUP", 0x00001D4C, 0x00000001);
				}
				uParam0->f_8D = 0x00000001;
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000008:
				StringConCat(&vVar0, "_obj1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_190(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_198(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x00000009:
				if ((uParam0->f_65 == 0x00000001 || uParam0->f_19B == 0x00000002) || uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 0x00000001:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0x00000000:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 0x00000002:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_200(&vVar0);
				if (uParam0->f_19B != 0x00000009)
				{
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					func_318(uParam0->f_3, "TAXI_START", uParam0->f_91, 0x00000004);
				}
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_190(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_198(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x00000007:
				StringConCat(&vVar0, "_dest2", 24);
				func_343(uParam0, 0x02000000, vVar0, "", 0x00000001, 0x00000008);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_198(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x0000000A:
				if (!func_54())
				{
					func_342(uParam0, 0x00000000);
					func_235(&(uParam0->f_2C), 0x00000004);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_198(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000000E:
				switch (uParam0->f_66)
				{
					case 0x00000000:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 0x00000001:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 0x00000002:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000F:
				if (func_395(uParam0, 0x0000000B) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0x00000000)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_200(&vVar0);
					}
					func_340(vVar0, uParam1);
					func_235(&(uParam0->f_51), 0x04000000);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000010:
				if (func_395(uParam0, 0x0000000B) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0x00000000)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_19B == 0x00000001)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_19B != 0x00000006)
						{
							func_200(&vVar0);
						}
					}
					func_340(vVar0, uParam1);
					func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000011:
				if (uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_200(&vVar0);
				}
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000012:
				if (uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000013:
				if (uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000014:
				StringConCat(&vVar0, "_dest2b", 24);
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				func_235(&(uParam0->f_52), 0x00040000);
				uParam0->f_24 = 20f;
				break;
			
			case 0x00000017:
				StringConCat(&vVar0, "_seePt1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x00000018, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000018:
				uParam0->f_1A1 = 0x00000018;
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005A:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 0x00000001, 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				break;
			
			case 0x00000059:
				switch (uParam0->f_66)
				{
					case 0x00000000:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 0x00000001:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000005B:
				StringConCat(&vVar0, "_ig1c", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000001B:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_19B == 0x00000002)
				{
					iVar3 = 0x00000008;
				}
				else
				{
					iVar3 = 0x00000003;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_19B)
					{
						case 0x00000002:
							switch (iVar2)
							{
								case 0x00000003:
								case 0x00000005:
								case 0x00000006:
								case 0x00000007:
									iVar5[iVar2] = 0x00000000;
									break;
								
								default:
									iVar5[iVar2] = 0x00000001;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 0x00000001;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 0x00000002)
				{
					func_339(&(uParam0->f_5A), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_339(&(uParam0->f_5A), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_340(vVar0, uParam1);
				func_348(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000006, 0f, 0x00000001);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001A:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0x00000000;
				while (iVar2 < 0x00000008)
				{
					switch (uParam0->f_19B)
					{
						case 0x00000002:
							switch (iVar2)
							{
								case 0x00000003:
								case 0x00000004:
								case 0x00000005:
								case 0x00000007:
									iVar5[iVar2] = 0x00000000;
									break;
								
								default:
									iVar5[iVar2] = 0x00000001;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 0x00000001;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 0x00000002)
				{
					func_339(&(uParam0->f_59), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_339(&(uParam0->f_59), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_340(vVar0, uParam1);
				func_348(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000006, 0f, 0x00000001);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000C:
				func_220("TAXI_OBJ_GYB", 0x00000DAC, 0x00000001);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000B:
				if (uParam0->f_19A == 0x0000000C || uParam0->f_19A == 0x00000012)
				{
					func_220("TAXI_OBJ_GYN_TG", 0x00001D4C, 0x00000001);
				}
				else if (uParam0->f_19A < 0x00000015)
				{
					func_220("TAXI_OBJ_GYN", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_220("TAXI_OBJ_GYN_GF", 0x00001D4C, 0x00000001);
				}
				uParam0->f_1A1 = 0x0000000B;
				uParam0->f_8D = 0x00000001;
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001C:
				switch (uParam0->f_66)
				{
					case 0x00000000:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 0x00000001:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x0000001D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001D:
				if (!func_25(uParam0->f_62, 0x10000000))
				{
					func_220("TAXI_OBJ_CYI_01", 0x00001D4C, 0x00000001);
					func_235(&(uParam0->f_62), 0x10000000);
				}
				uParam0->f_1A1 = 0x0000001D;
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001E:
				StringConCat(&vVar0, "_rCar1", 24);
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001F:
				StringConCat(&vVar0, "_rCar2", 24);
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000020:
				StringConCat(&vVar0, "_rCar3", 24);
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000021:
				func_220("TAXI_OBJ_CYI_02", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000021;
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000022:
				if (!func_25(uParam0->f_52, 0x00002000))
				{
					if (func_395(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_200(&vVar0);
						if (uParam0->f_19B == 0x00000005)
						{
							func_340(vVar0, uParam1);
						}
						else
						{
							func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						}
						func_235(&(uParam0->f_52), 0x00002000);
						func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_226(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000023:
				if (!func_25(uParam0->f_52, 0x00004000))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_200(&vVar0);
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_235(&(uParam0->f_52), 0x00004000);
				}
				break;
			
			case 0x00000024:
				if (!func_25(uParam0->f_52, 0x00008000))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_200(&vVar0);
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_235(&(uParam0->f_52), 0x00008000);
				}
				break;
			
			case 0x00000025:
				StringConCat(&vVar0, "_done1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x0000002E, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008A:
				if (uParam0->f_65 == 0x00000001)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 0x00000001:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0x00000000:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 0x00000002:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x0000008B, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000008B;
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008B:
				func_220("TAXI_OBJ_FTC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000000D;
				func_198(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000026:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000078);
				if (!func_25(uParam0->f_52, 0x10000000))
				{
					if (iVar4 > 0x00000050)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 0x00000028)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_235(&(uParam0->f_52), 0x10000000);
				}
				else if (iVar4 > 0x00000050)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 0x00000028)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000027:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
				if (!func_25(uParam0->f_52, 0x10000000))
				{
					if (iVar4 < 0x00000032)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_235(&(uParam0->f_52), 0x10000000);
				}
				else if (iVar4 < 0x00000032)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000029:
				StringConCat(&vVar0, "_dr2P", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002A:
				StringConCat(&vVar0, "_dr2N", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000028:
				StringConCat(&vVar0, "_dOff2", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x0000002C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002C:
				func_220("TAXI_OBJ_CC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002C;
				func_226(uParam0, 0x00000000, 0x00000000);
				func_198(uParam0, 0x00000061, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002B:
				StringConCat(&vVar0, "_dOff3", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x0000002D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002D:
				if (!func_54())
				{
					func_220("TAXI_OBJ_CC3", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x0000002D;
					func_226(uParam0, 0x00000000, 0x00000000);
					func_198(uParam0, 0x00000062, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000002E:
				func_220("TAXI_OBJ_FTC3", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002E;
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000015:
				if (!func_25(uParam0->f_51, 0x00000001))
				{
					func_338(uParam0, 0x00000001, vVar0, "_sick1", 0x00000008);
					func_23(&(uParam0->f_51), 0x00000002);
				}
				else if (!func_25(uParam0->f_51, 0x00000002))
				{
					func_338(uParam0, 0x00000002, vVar0, "_sick2", 0x00000008);
					func_23(&(uParam0->f_51), 0x00000001);
				}
				func_348(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000016:
				if (!func_25(uParam0->f_52, 0x00200000))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_25(uParam0->f_52, 0x00400000))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_235(&(uParam0->f_51), 0x00200000);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_348(0x00000011, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003D:
				StringConCat(&vVar0, "_Puke1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_348(0x00000012, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x0000003F:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_348(0x00000014, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003E:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_348(0x00000013, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x00000040:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000047:
				if (!func_25(uParam0->f_51, 0x00000004))
				{
					func_338(uParam0, 0x00000004, vVar0, "_turns1", 0x00000008);
				}
				else if (!func_25(uParam0->f_51, 0x00000008))
				{
					func_338(uParam0, 0x00000008, vVar0, "_turns2", 0x00000008);
				}
				else
				{
					func_338(uParam0, 0x00000008, vVar0, "_turns3", 0x00000008);
					func_23(&(uParam0->f_51), 0x00000004);
					func_23(&(uParam0->f_51), 0x00000008);
				}
				func_348(0x0000000D, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000048:
				if (func_337(uParam0))
				{
					func_344(uParam0, vVar0, func_346(uParam0, 0x00000048));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_318(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 0x00000004);
					}
				}
				else if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_350(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000000, 0x00000001);
					func_301(&(uParam0->f_F4), uParam0->f_90, &cVar1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0x00000000)
					{
						func_350(&(uParam0->f_5F), 0x00000008, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					else
					{
						func_350(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				func_348(0x00000002, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000049:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000004B:
				if (!func_25(uParam0->f_53, 0x00000080))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000080);
					func_23(&(uParam0->f_53), 0x00000100);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000100))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000100);
					func_23(&(uParam0->f_53), 0x00000200);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000200))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000200);
					func_23(&(uParam0->f_53), 0x00000080);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004C:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_25(uParam0->f_53, 0x00000001))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_200(&vVar0);
					}
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000001);
					func_23(&(uParam0->f_53), 0x00000002);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000002))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_200(&vVar0);
					}
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000002);
					if (uParam0->f_19B == 0x00000000)
					{
						func_23(&(uParam0->f_53), 0x00000004);
					}
					else
					{
						func_23(&(uParam0->f_53), 0x00000001);
					}
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000004))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_200(&vVar0);
					}
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000004);
					func_23(&(uParam0->f_53), 0x00000001);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_348(0x0000000B, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004F:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_25(uParam0->f_51, 0x00001000))
				{
					func_343(uParam0, 0x00001000, vVar0, "_sideW1", bVar6, 0x00000008);
				}
				else if (!func_25(uParam0->f_51, 0x00002000))
				{
					func_343(uParam0, 0x00002000, vVar0, "_sideW2", bVar6, 0x00000008);
				}
				func_348(0x0000000F, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000050:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_25(uParam0->f_51, 0x00004000))
				{
					func_343(uParam0, 0x00004000, vVar0, "_opLne1", bVar6, 0x00000008);
				}
				else if (!func_25(uParam0->f_51, 0x00008000))
				{
					func_343(uParam0, 0x00008000, vVar0, "_opLne2", bVar6, 0x00000008);
				}
				func_348(0x0000000E, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000053:
				if (uParam0->f_19B == 0x00000000)
				{
					if (!func_25(uParam0->f_52, 0x00000008))
					{
						func_336(uParam0, 0x00000008, vVar0, "_bored1", 0x00000008, 0x00000000);
					}
					else if (!func_25(uParam0->f_52, 0x00000010))
					{
						func_336(uParam0, 0x00000010, vVar0, "_bored2", 0x00000008, 0x00000000);
					}
					else if (!func_25(uParam0->f_52, 0x00000020))
					{
						func_336(uParam0, 0x00000020, vVar0, "_bored3", 0x00000008, 0x00000000);
					}
					func_348(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_350(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000000, 0x00000001, 0x00000000);
					func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_348(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000005C:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_60), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_348(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005D:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_61), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_348(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000051:
				if (!func_25(uParam0->f_51, 0x00010000))
				{
					func_343(uParam0, 0x00010000, vVar0, "_runLit1", 0x00000001, 0x00000008);
				}
				else if (!func_25(uParam0->f_51, 0x00020000))
				{
					func_343(uParam0, 0x00020000, vVar0, "_runLit2", 0x00000001, 0x00000008);
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000052:
				if (func_337(uParam0))
				{
					func_344(uParam0, vVar0, func_346(uParam0, 0x00000052));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_318(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 0x00000004);
					}
				}
				else if (!func_25(uParam0->f_53, 0x00000008))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000008);
					func_23(&(uParam0->f_53), 0x00000010);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000010))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000010);
					func_23(&(uParam0->f_53), 0x00000020);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000020))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000020);
					if (uParam0->f_19B == 0x00000000)
					{
						func_23(&(uParam0->f_53), 0x00000040);
					}
					else
					{
						func_23(&(uParam0->f_53), 0x00000008);
					}
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000040))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_235(&(uParam0->f_53), 0x00000040);
					func_23(&(uParam0->f_53), 0x00000008);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_348(0x00000001, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000041:
				if (!func_54())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_347(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_344(uParam0, vVar0, func_346(uParam0, 0x00000041));
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x00000042:
				if (!func_54())
				{
					if (uParam0->f_19B == 0x00000004)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_347(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_344(uParam0, vVar0, func_346(uParam0, 0x00000042));
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x0000000D:
				if (uParam0->f_19B == 0x00000008)
				{
					if (!uParam0->f_6D && !func_54())
					{
						switch (uParam0->f_19E)
						{
							case 0x00000003:
								StringConCat(&vVar0, "_warnC1", 24);
								func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000006:
								StringConCat(&vVar0, "_warnF1", 24);
								func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000001:
								StringConCat(&vVar0, "_far1", 24);
								func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_348(0x00000015, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x00000002:
								StringConCat(&vVar0, "_close1", 24);
								func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_348(0x00000016, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x0000000A:
								StringConCat(&vVar0, "_hit1", 24);
								func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000008:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_350(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
								func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
								func_348(0x00000017, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
								func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
								func_226(uParam0, 0x00000000, 0x00000000);
								break;
							
							case 0x00000009:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_226(uParam0, 0x00000000, 0x00000000);
									if (!iLocal_60)
									{
										iLocal_58 = 0x00000001;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 0x00000001;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 0x00000001;
									}
									func_200(&vVar0);
									func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_226(uParam0, 0x00000000, 0x00000000);
									iLocal_58 = 0x00000000;
								}
								break;
							
							case 0x00000007:
								StringConCat(&vVar0, "_done1", 24);
								func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
						}
						func_198(uParam0, 0x0000008F, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x0000004E:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_57), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_348(0x0000000A, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000019:
				if (!func_25(uParam0->f_52, 0x00000001))
				{
					func_336(uParam0, 0x00000001, vVar0, "_close1", 0x00000008, 0x00000000);
				}
				else if (!func_25(uParam0->f_52, 0x00000002))
				{
					func_336(uParam0, 0x00000002, vVar0, "_close2", 0x00000008, 0x00000000);
				}
				else if (!func_25(uParam0->f_52, 0x00000004))
				{
					func_336(uParam0, 0x00000004, vVar0, "_close3", 0x00000008, 0x00000000);
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000030:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_56), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_318(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 0x00000004);
				}
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_348(0x00000005, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004A:
				if (func_337(uParam0))
				{
					func_344(uParam0, vVar0, func_346(uParam0, 0x0000004A));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_318(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 0x00000004);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_335(uParam0, vVar0, 0x00000008);
				}
				func_348(0x00000003, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000046:
				if (!func_25(uParam0->f_53, 0x00000400))
				{
					func_235(&(uParam0->f_53), 0x00000400);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv1", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00000800))
				{
					func_235(&(uParam0->f_53), 0x00000800);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv2", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_25(uParam0->f_53, 0x00001000))
				{
					func_235(&(uParam0->f_53), 0x00001000);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv3", 24);
					func_200(&vVar0);
					func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000045:
				if (!func_25(uParam0->f_52, 0x00000400))
				{
					func_336(uParam0, 0x00000400, vVar0, "_rvrs1", 0x00000008, 0x00000001);
					func_23(&(uParam0->f_52), 0x00000800);
				}
				else if (!func_25(uParam0->f_52, 0x00000800))
				{
					func_336(uParam0, 0x00000800, vVar0, "_rvrs2", 0x00000008, 0x00000001);
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000043:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_58), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_348(0x00000010, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000044:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000031:
				StringConCat(&vVar0, "_losPol1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000032:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_19B != 0x00000009)
				{
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_318(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 0x00000004);
				}
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000033:
				if (func_337(uParam0))
				{
					if (uParam0->f_19B == 0x00000002)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_198(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
						func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					}
					else
					{
						if (uParam0->f_19B == 0x00000005 && uParam0->f_19A > 0x00000009)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_350(&(uParam0->f_55), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_226(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000035:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_348(0x00000008, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_267(uParam0, 0x0000000A, 0f, 0x00000001);
				break;
			
			case 0x00000034:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					func_220("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x00000034;
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000036:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000054:
				if (!func_25(uParam0->f_51, 0x00040000))
				{
					func_343(uParam0, 0x00040000, vVar0, "_rdCh1", 0x00000001, 0x00000008);
				}
				else if (!func_25(uParam0->f_51, 0x00100000))
				{
					if (uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001)
					{
						func_343(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000001, 0x00000008);
					}
					else
					{
						func_343(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000000, 0x00000008);
					}
				}
				func_348(0x00000007, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000055:
				if (!func_25(uParam0->f_52, 0x04000000))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_334(uParam0, 0x04000000, vVar0, "_rdLk1", 0x00000001, 0x00000007);
					}
				}
				else if (!func_25(uParam0->f_52, 0x08000000))
				{
					func_334(uParam0, 0x08000000, vVar0, "_rdFv1", 0x00000000, 0x00000007);
				}
				func_348(0x00000006, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000056:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000057:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000064:
				func_220("TAXI_OBJ_GYB_2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000064;
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002F:
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000065:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_200(&vVar0);
				}
				func_235(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000066:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_200(&vVar0);
				}
				func_235(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000067:
				if (uParam0->f_19B == 0x00000004)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_200(&vVar0);
				}
				func_235(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000061:
				if (!func_25(uParam0->f_52, 0x00010000))
				{
					if (func_395(uParam0, 0x0000000B) > uParam0->f_24)
					{
						switch (uParam0->f_66)
						{
							case 0x00000000:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 0x00000001:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_200(&vVar0);
						func_340(vVar0, uParam1);
						func_235(&(uParam0->f_52), 0x00010000);
						func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_226(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000062:
				if (!func_25(uParam0->f_52, 0x00020000))
				{
					if (func_395(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_200(&vVar0);
						func_340(vVar0, uParam1);
						func_235(&(uParam0->f_52), 0x00020000);
						func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_226(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000063:
				if (!func_25(uParam0->f_52, 0x00800000))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_235(&(uParam0->f_52), 0x00800000);
				}
				else if (!func_25(uParam0->f_52, 0x01000000))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_235(&(uParam0->f_52), 0x01000000);
				}
				else if (!func_25(uParam0->f_52, 0x02000000))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_235(&(uParam0->f_52), 0x02000000);
				}
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003A:
				if (uParam0->f_19B == 0x00000006)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_350(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000001);
					func_200(&vVar0);
					func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (uParam0->f_19B == 0x00000008)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005F:
				StringConCat(&vVar0, "_wndw2", 24);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005E:
				StringConCat(&vVar0, "_wndw0", 24);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000060:
				StringConCat(&vVar0, "_wndw1", 24);
				func_340(vVar0, uParam1);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000071:
				StringConCat(&vVar0, "_csite1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000077:
				StringConCat(&vVar0, "_fair1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000073:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_5B), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000074:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_350(&(uParam0->f_5C), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_349(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000072:
				StringConCat(&vVar0, "_goons1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000003B:
				StringConCat(&vVar0, "_oRun1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000075:
				StringConCat(&vVar0, "_gotG1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000076:
				StringConCat(&vVar0, "_getA1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000078:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000079:
				StringConCat(&vVar0, "_grl1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007A:
				StringConCat(&vVar0, "_figt1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007B:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007C:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007D:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007E:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007F:
				StringConCat(&vVar0, "_aKill1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000081:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000082:
				StringConCat(&vVar0, "_gDest1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_198(uParam0, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000080:
				StringConCat(&vVar0, "_gKO1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000084:
				StringConCat(&vVar0, "_gThank1", 24);
				func_235(&(uParam0->f_51), 0x00200000);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000083:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_200(&vVar0);
				func_340(vVar0, uParam1);
				func_235(&(uParam0->f_51), 0x04000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_267(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003C:
				StringConCat(&vVar0, "_cash1", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000069:
				if (!func_25(uParam0->f_51, 0x02000000) && uParam0->f_19B != 0x00000009)
				{
					func_343(uParam0, 0x02000000, vVar0, "_noPay1", 0x00000001, 0x00000008);
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_318(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 0x00000004);
					}
				}
				func_198(uParam0, 0x0000006C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006A:
				StringConCat(&vVar0, "_foot", 24);
				func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006B:
				if (!func_25(uParam0->f_51, 0x10000000))
				{
					func_343(uParam0, 0x10000000, vVar0, "_kPay1", 0x00000001, 0x00000008);
				}
				func_198(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006C:
				func_220("TAXI_OBJ_RUNOUT", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006C;
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006D:
				if (!func_25(uParam0->f_51, 0x00400000))
				{
					if (uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000006)
					{
						func_343(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000000, 0x00000008);
					}
					else if (uParam0->f_19B == 0x00000009)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_318(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 0x00000004);
						}
					}
					else
					{
						func_343(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000001, 0x00000008);
					}
				}
				func_198(uParam0, 0x0000006F, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006F:
				func_220("TAXI_OBJ_GETRUN", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006F;
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006E:
				StringConCat(&vVar0, "_runoff", 24);
				func_301(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008D:
				if (!func_25(uParam0->f_51, 0x01000000))
				{
					func_343(uParam0, 0x01000000, vVar0, "_ret1", 0x00000001, 0x00000008);
				}
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000058:
				func_220("TAXI_TIEFLEE", 0x00001D4C, 0x00000001);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000039:
				if (!func_25(uParam0->f_62, 0x20000000))
				{
					func_220("TAXI_OBJ_CYI_1B", 0x00001D4C, 0x00000001);
					func_235(&(uParam0->f_62), 0x20000000);
				}
				uParam0->f_1A1 = 0x00000039;
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000068:
				StringConCat(&vVar0, "_joke1", 24);
				func_200(&vVar0);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000088:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_74)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008C:
				StringConCat(&vVar0, "_shout", 24);
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000087:
				if (uParam0->f_19B == 0x00000004)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_347(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000085:
				StringConCat(&vVar0, "_getCar", 24);
				func_347(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				func_198(uParam0, 0x00000086, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000086:
				func_220("TX_VIP", 0x00001D4C, 0x00000000);
				uParam0->f_1A1 = 0x00000086;
				func_198(uParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_226(uParam0, 0x00000000, 0x00000000);
				break;
			}
	}
}

void func_334(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_235(&(uParam0->f_52), iParam1);
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_200(&vParam2);
	}
	func_301(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

void func_335(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_25(uParam0->f_52, 0x00000040))
	{
		func_235(&(uParam0->f_52), 0x00000040);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_25(uParam0->f_52, 0x00000080))
	{
		func_235(&(uParam0->f_52), 0x00000080);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(0x00000001, 0x00000003), 24);
	}
	func_349(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0x00000000, 0x00000000);
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
}

void func_336(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_235(&(uParam0->f_52), iParam1);
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000008) || uParam0->f_19B == 0x00000002)
	{
		if (bParam8)
		{
			func_200(&vParam2);
		}
	}
	func_301(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

int func_337(var uParam0)
{
	if ((((((uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000003) || uParam0->f_19B == 0x00000004) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000006) || uParam0->f_19B == 0x00000007) || uParam0->f_19B == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_338(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_235(&(uParam0->f_51), iParam1);
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	func_301(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

void func_339(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_245(*uParam0, iVar1))
		{
			func_236(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_200(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 0x00000001))
				{
					*uParam0 = 0x00000000;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_340(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_341(uParam1);
	if (iVar0 > 0xFFFFFFFF)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_235(&((uParam1[iVar0 /*8*/])->f_7), 0x00000002);
	}
}

int func_341(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xEA6BC48857E0AC4C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_342(var uParam0, bool bParam1)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (bParam1)
			{
				func_220("TX_OBJ_NEX_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_NEX_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				func_220("TX_OBJ_TIE_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_TIE_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				func_220("TX_OBJ_DL_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_DL_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				func_220("TX_OBJ_GYB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_GYB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				func_220("TX_OBJ_TTB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_TTB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				func_220("TX_OBJ_CYI_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_CYI_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				func_220("TX_OBJ_GYN_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_GYN_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				func_220("TX_OBJ_CC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TAXI_OBJ_CC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				func_220("TX_OBJ_FC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TAXI_OBJ_FTC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				func_220("TX_OBJ_PRO_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_220("TX_OBJ_PRO_DO", 0x00001D4C, 0x00000001);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 0x00000001;
	}
}

void func_343(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_235(&(uParam0->f_51), iParam1);
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_200(&vParam2);
	}
	func_301(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

void func_344(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
	func_267(uParam0, 0x00000011, 0f, 0x00000001);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_345(uParam0));
	}
}

char* func_345(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			sVar0 = "TaxiFelipe";
			break;
		
		case 0x00000001:
			sVar0 = "TaxiOtis";
			break;
		
		case 0x00000002:
			sVar0 = "TaxiKwak";
			break;
		
		case 0x00000003:
			sVar0 = "TaxiWalter";
			break;
		
		case 0x00000004:
			sVar0 = "TaxiMiranda";
			break;
		
		case 0x00000005:
			sVar0 = "TaxiDerrick";
			break;
		
		case 0x00000006:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 0x00000007:
			sVar0 = "TaxiDarren";
			break;
		
		case 0x00000008:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_346(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000048:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_ACRH";
				
				case 0x00000001:
					return "_ACRH";
				
				case 0x00000002:
					return "_ACAA";
				
				case 0x00000003:
					return "_ACRH";
				
				case 0x00000004:
					return "_AEAA";
				
				case 0x00000005:
					return "_DKAA";
				
				case 0x00000006:
					return "_ACAA";
				
				case 0x00000007:
					return "_ACAA";
				
				case 0x00000008:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 0x00000052:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AHIT";
				
				case 0x00000001:
					return "_AHIT";
				
				case 0x00000002:
					return "_AEAA";
				
				case 0x00000003:
					return "_ADAA";
				
				case 0x00000004:
					return "_AFAA";
				
				case 0x00000005:
					return "_AFAA";
				
				case 0x00000006:
					return "_AEAA";
				
				case 0x00000007:
					return "_AHAA";
				
				case 0x00000008:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 0x0000004A:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AROL";
				
				case 0x00000001:
					return "_AROL";
				
				case 0x00000002:
					return "_AHAA";
				
				case 0x00000003:
					return "_AROL";
				
				case 0x00000004:
					return "_AGAA";
				
				case 0x00000005:
					return "_AROL";
				
				case 0x00000006:
					return "_AROL";
				
				case 0x00000007:
					return "_AROL";
				
				case 0x00000008:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 0x00000041:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_ABAA";
				
				case 0x00000001:
					return "_FUAA";
				
				case 0x00000002:
					return "_AFAA";
				
				case 0x00000003:
					return "_DBAA";
				
				case 0x00000004:
					return "_DLAA";
				
				case 0x00000005:
					return "_DKAA";
				
				case 0x00000006:
					if (uParam0->f_73)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 0x00000007:
					return "_DBAA";
				
				case 0x00000008:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 0x00000042:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AEAA";
				
				case 0x00000001:
					return "_ACAA";
				
				case 0x00000002:
					return "_AJAA";
				
				case 0x00000003:
					return "_AHAA";
				
				case 0x00000004:
					return "_AHAA";
				
				case 0x00000005:
					return "_AIAA";
				
				case 0x00000006:
					if (uParam0->f_73)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 0x00000007:
					return "_AUAA";
				
				case 0x00000008:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 0x00000002:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AAAA";
				
				case 0x00000001:
					return "_AAAA";
				
				case 0x00000002:
					return "_ADAA";
				
				case 0x00000003:
					return "_ABAA";
				
				case 0x00000004:
					return "_AAAA";
				
				case 0x00000005:
					return "_ABAA";
				
				case 0x00000006:
					if (uParam0->f_73)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 0x00000007:
					return "_BUAA";
				
				case 0x00000008:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_347(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_267(uParam0, 0x00000010, 0x00000000, 0x00000000);
	if (bParam3)
	{
		func_267(uParam0, 0x00000011, 0f, 0x00000001);
	}
	func_226(uParam0, iParam2, 0x00000000);
	return func_301(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0x00000000, 0x00000000, 0x00000000);
}

void func_348(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0x00000000)
	{
		if (func_25(*uParam2, 0x00000002))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 0x00000002);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000008)
	{
		if (func_25(*uParam2, 0x40000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (func_25(*uParam2, 0x00000004))
		{
			if (!func_25(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 0x00001000);
			}
		}
		else if (func_25(*uParam2, 0x00000008))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (func_25(*uParam2, 0x00000200))
		{
			if (!func_25(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 0x00001000);
			}
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (func_25(*uParam2, 0x00000010))
		{
			if (!func_25(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 0x00001000);
			}
		}
		else if (func_25(*uParam2, 0x00000020))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (func_25(*uParam2, 0x00000040))
		{
			if (!func_25(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_23(uParam2, 0x00001000);
			}
		}
		else if (func_25(*uParam2, 0x00000080))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (func_25(*uParam2, 0x00000100))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000006)
	{
		if (func_25(*uParam2, 0x00000400))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (func_25(*uParam2, 0x00000800))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (func_25(*uParam2, 0x00002000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000A)
	{
		if (func_25(*uParam2, 0x00004000))
		{
			if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (func_25(*uParam2, 0x00008000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (func_25(*uParam2, 0x00010000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (func_25(*uParam2, 0x00020000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000E)
	{
		if (func_25(*uParam2, 0x00040000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000F)
	{
		if (func_25(*uParam2, 0x00080000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000010)
	{
		if (func_25(*uParam2, 0x00100000))
		{
			if (func_25(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_25(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000015)
	{
		if (func_25(*uParam2, 0x00800000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000016)
	{
		if (func_25(*uParam2, 0x01000000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000017)
	{
		if (func_25(*uParam2, 0x02000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000011)
	{
		if (func_25(*uParam2, 0x04000000))
		{
			if (func_25(*uParam2, 0x04000000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000012)
	{
		if (func_25(*uParam2, 0x08000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000014)
	{
		if (func_25(*uParam2, 0x20000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000013)
	{
		if (func_25(*uParam2, 0x10000000))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000019)
	{
		if (func_25(*uParam2, 0x00008000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
}

int func_349(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_314(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000001;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_302(sParam2, iParam4, 0x00000000);
}

void func_350(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_245(*uParam0, iVar1))
		{
			func_236(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_200(sParam2);
				}
				else
				{
					func_200(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 0x00000001))
				{
					*uParam0 = 0x00000000;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_351(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (func_180(sParam0, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_352(var uParam0, var uParam1)
{
	return ((*uParam1 == 0xFFFFFFFF && uParam0->f_19C == 0x00000000) && !func_145(uParam0, 0x00000009));
}

void func_353(var uParam0)
{
	if (func_145(uParam0, 0x00000011))
	{
		if (!func_145(uParam0, 0x0000000E))
		{
			if (!func_144(uParam0))
			{
				if (!func_54())
				{
					func_152(uParam0, 0x00000011, 0x00000001);
				}
			}
		}
	}
}

void func_354(var uParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (unk_0xC844350D5D58C99A(Global_1AF0C.f_E1[0x00000003]))
	{
		uParam0->f_4[0x00000000] = Global_1AF0C.f_E1[0x00000003];
		uParam0->f_4[0x00000001] = Global_1AF0C.f_E1[0x00000004];
		uParam0->f_4[0x00000002] = Global_1AF0C.f_E1[0x00000005];
		unk_0x73270B3C9CC833FD(uParam0->f_4[0x00000000], 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD(uParam0->f_4[0x00000001], 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD(uParam0->f_4[0x00000002], 0x00000001, 0x00000001);
	}
	else
	{
		uParam0->f_4[0x00000000] = unk_0x36F2404464202779(0x0000001A, uParam0->f_2D[0x00000000], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 0x00000001, 0x00000001);
		uParam0->f_4[0x00000001] = unk_0x36F2404464202779(0x0000001A, uParam0->f_2D[0x00000001], unk_0x68E4ADDDDCD7BDDE(uParam0->f_4[0x00000000], 1f, 1f, 0f), 90.5877f, 0x00000001, 0x00000001);
		uParam0->f_4[0x00000002] = unk_0x36F2404464202779(0x0000001A, uParam0->f_2D[0x00000002], unk_0x68E4ADDDDCD7BDDE(uParam0->f_4[0x00000000], -1f, 1f, 0f), 163.5411f, 0x00000001, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(Global_1AF0C.f_E1[0x00000006]))
	{
		uParam0->f_4[0x00000003] = Global_1AF0C.f_E1[0x00000006];
		uParam0->f_4[0x00000004] = Global_1AF0C.f_E1[0x00000007];
		unk_0x73270B3C9CC833FD(uParam0->f_4[0x00000003], 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD(uParam0->f_4[0x00000004], 0x00000001, 0x00000001);
	}
	else
	{
		uParam0->f_4[0x00000003] = unk_0x36F2404464202779(0x0000001A, uParam0->f_2D[0x00000003], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 0x00000001, 0x00000001);
		uParam0->f_4[0x00000004] = unk_0x36F2404464202779(0x0000001A, uParam0->f_2D[0x00000004], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 0x00000001, 0x00000001);
	}
	if (unk_0xC844350D5D58C99A(Global_1AF0C.f_DE[0x00000000]))
	{
		uParam0->f_A = Global_1AF0C.f_DE[0x00000000];
		uParam0->f_B = Global_1AF0C.f_DE[0x00000001];
		unk_0x73270B3C9CC833FD(uParam0->f_A, 0x00000001, 0x00000001);
		unk_0x73270B3C9CC833FD(uParam0->f_B, 0x00000001, 0x00000001);
	}
	else
	{
		uParam0->f_A = unk_0x122AAB0B1D6F55AD(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, 0x00000001, 0x00000001, 0x00000000);
		uParam0->f_B = unk_0x122AAB0B1D6F55AD(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, 0x00000001, 0x00000001, 0x00000000);
	}
	vVar2 = { -1276.693f, 312.9434f, 64.491f };
	vVar3 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_4[iVar1], 0x00000000))
		{
			unk_0x327AAEE25F323797(uParam0->f_4[iVar1]);
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
			switch (iVar1)
			{
				case 0x00000000:
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4[0x00000001], 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 0x00000FA0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x80AA372E04ED318D(0x00000000, vVar2, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					unk_0x80AA372E04ED318D(0x00000000, vVar3, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					break;
				
				case 0x00000001:
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4[0x00000000], 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 0x00001770, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x80AA372E04ED318D(0x00000000, vVar2, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					unk_0x80AA372E04ED318D(0x00000000, vVar3, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					break;
				
				case 0x00000002:
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4[0x00000000], 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 0x00002134, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x80AA372E04ED318D(0x00000000, vVar2, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					unk_0x80AA372E04ED318D(0x00000000, vVar3, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
					break;
				
				case 0x00000003:
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4[0x00000004], 0x00000000);
					unk_0x0C8C0C840C2D1AD2(0x00000000, uParam0->f_4[0x00000004], 0x00000003, 0x00000002, 0x00000002);
					unk_0x995C052F6E921FC4(0x00000000, uParam0->f_4[0x00000004], 0x00000010, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 0x00000004:
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4[0x00000003], 0x00000000);
					unk_0x0C8C0C840C2D1AD2(0x00000000, uParam0->f_4[0x00000003], 0x00000003, 0x00000002, 0x00000002);
					unk_0x995C052F6E921FC4(0x00000000, uParam0->f_4[0x00000003], 0x00000010, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(uParam0->f_4[iVar1], uVar0);
		}
		iVar1++;
	}
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar1]) && (unk_0xD1960163A3042274((*uParam0)[iVar1], 0x0E763797) != 0x00000001 || unk_0xD1960163A3042274((*uParam0)[iVar1], 0x0E763797) == 0x00000007))
		{
			unk_0x11AD11297DC58CC7((*uParam0)[iVar1], 0x00000001);
			unk_0x327AAEE25F323797((*uParam0)[iVar1]);
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
			func_355(uParam0, iVar1, unk_0x09AC81E49EA267F7(0x000003E8, 0x000007D0));
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54((*uParam0)[iVar1], uVar0);
		}
		iVar1++;
	}
}

void func_355(var uParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0x00000000:
			unk_0xF96A174EE26D7588(0x00000000, (*uParam0)[0x00000001], 0x00000000);
			unk_0x0C8C0C840C2D1AD2(0x00000000, (*uParam0)[0x00000001], 0x00000003, 0x00000002, 0x00000002);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0xF96A174EE26D7588(0x00000000, (*uParam0)[0x00000000], 0x00000000);
			unk_0x0C8C0C840C2D1AD2(0x00000000, (*uParam0)[0x00000000], 0x00000003, 0x00000002, 0x00000002);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0xF96A174EE26D7588(0x00000000, (*uParam0)[0x00000000], 0x00000000);
			unk_0x0C8C0C840C2D1AD2(0x00000000, (*uParam0)[0x00000000], 0x00000003, 0x00000002, 0x00000002);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
	}
}

int func_356()
{
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_2D[0x00000000]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_2D[0x00000001]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_2D[0x00000002]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_2D[0x00000003]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_262.f_2D[0x00000004]))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("stretch")))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("superd")))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@gyn@cc@intro"))
	{
		func_261("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_261("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_261("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_357(var uParam0)
{
	return uParam0->f_75;
}

int func_358(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_6D)
	{
		if ((func_364((*uParam1)[0x00000000], uParam0->f_4, uParam2, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001) || func_364((*uParam1)[0x00000001], uParam0->f_4, uParam2, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001)) || func_364((*uParam1)[0x00000002], uParam0->f_4, uParam2, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
		{
			func_362(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
			{
				if (func_364(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
				{
					func_300(uParam0, "Taxi attacked the entourage", 0x00000009);
					return 0x00000001;
				}
			}
			iVar1++;
		}
		func_359(uParam0);
	}
	return 0x00000000;
}

void func_359(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_19A < 0x00000007 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 0x00000009 && func_361()) && !func_153(uParam0)) || ((uParam0->f_19B != 0x00000009 && func_231(uParam0, 0x00000001)) && !func_153(uParam0)))
		{
			uVar0 = func_360(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x73270B3C9CC833FD(uParam0->f_4, 0x00000001, 0x00000000);
			func_163(uParam0);
			func_156(uParam0, 0x00000000);
		}
	}
}

var func_360(var uParam0)
{
	return uParam0;
}

int func_361()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
				{
					if (unk_0x4906F8A34E9F4814(iVar0, func_22()))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_362(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 0x00000001:
			if (func_363(uParam0, 0x00000000, 0x00000001))
			{
				func_300(uParam0, "Aggro Aiming", 0x00000005);
			}
			break;
		
		case 0x00000004:
			if (func_363(uParam0, 0x00000000, 0x00000004))
			{
				func_300(uParam0, "Aggro Shot Near", 0x00000008);
			}
			break;
		
		case 0x00000008:
			if (func_363(uParam0, 0x00000000, 0x00000008))
			{
				func_300(uParam0, "Aggro Heard Shot", 0x00000008);
			}
			break;
		
		case 0x00000010:
			if (func_363(uParam0, 0x00000001, 0x00000001))
			{
				func_300(uParam0, "Aggro Attacked", 0x0000000E);
			}
			break;
		
		case 0x00000020:
			if (func_363(uParam0, 0x00000000, 0x00000001))
			{
				func_300(uParam0, "Aggro Minor Attacked", 0x00000008);
			}
			break;
		
		case 0x00000002:
			if (!func_25(*uParam2, 0x00000002) && func_127(uParam0))
			{
				func_300(uParam0, "Aggro Went Wanted", 0x00000005);
			}
			break;
	}
}

int func_363(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_6B >= 0x00000002 && uParam0->f_19A < 0x0000001D) || uParam0->f_19A <= 0x00000005) || (iParam1 && !uParam0->f_72))
	{
		return 0x00000001;
	}
	else if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			if (iParam2 == 0x00000004)
			{
				func_198(uParam0, 0x00000042, 0x00000001, 0x00000000, 0x00000001);
			}
			else
			{
				func_198(uParam0, 0x00000041, 0x00000001, 0x00000000, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

int func_364(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_25(*uParam2, 0x00000001))
		{
			if (func_370(iParam0, uParam2))
			{
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_25(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_25(*uParam2, 0x00000004))
		{
			if (func_368(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_25(*uParam2, 0x00000008))
		{
			if (func_367(iVar0, iParam0, uParam2))
			{
				*uParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_25(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_365(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*uParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_25(*uParam2, 0x00000010))
		{
			if (func_365(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
			{
				*uParam3 = 0x00000010;
				return 0x00000001;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
		{
			*uParam3 = 0x00000010;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_73 = 0x00000001;
		}
		iLocal_75 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 0x00000001;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 0x00000001;
		}
	}
	if (func_366(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_10(iParam0, 0x00000001) < 1.5f)
		{
			return 0x00000001;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0x00000000)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_366(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_367(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000004))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_368(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000002))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0x00000000))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0x00000000);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_369(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_369(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_11(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)))
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
	return 0x00000000;
}

int func_370(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_10(iParam0, 0x00000001) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0x00000000)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
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

void func_371(var uParam0, var uParam1, bool bParam2)
{
	if (!func_25(uParam0->f_37, 0x00000001))
	{
		switch (*uParam1)
		{
			case 0x00000000:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_7C)) && func_54())
				{
					*uParam1++;
				}
				break;
			
			case 0x00000001:
				if (!func_54())
				{
					StringCopy(&(uParam0->f_7C), func_142(), 24);
					uParam0->f_38 = (uParam0->f_38 + uParam0->f_39);
					if (uParam0->f_38 < 0x00000000)
					{
						uParam0->f_38 = 0x00000000;
					}
					uParam0->f_39 = 0x00000000;
					*uParam1 = 0x00000000;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_372(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_19A >= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_165 > 0x00000000 && !func_245(Local_165.f_1[0x00000004 /*4*/], 0x00000004))
			{
				iVar0 = 0x00000000;
				iVar0 = 0x00000000;
				while (iVar0 <= (Local_165 - 0x00000001))
				{
					if (func_245(Local_165.f_1[iVar0 /*4*/], 0x00000002))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_245(Local_165.f_1[iVar0 /*4*/], 0x00000004))
							{
								func_236(&(Local_165.f_1[iVar0 /*4*/]), 0x00000004);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_24(&(Local_165.f_1[iVar0 /*4*/]), 0x0000000C);
						}
						if (func_245(Local_165.f_1[iVar0 /*4*/], 0x00000004) && !func_245(Local_165.f_1[iVar0 /*4*/], 0x00000008))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_236(&(Local_165.f_1[iVar0 /*4*/]), 0x00000008);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_300(uParam0, "Taxi Garbage Collected", 0x00000012);
		}
	}
}

int func_373(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_145(uParam0, 0x0000001B))
	{
		func_192(uParam0, 0x0000001B);
		uParam1->f_3 = 0x000000FA;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_395(uParam0, 0x0000001B) > 5f)
	{
		if (func_364(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
		{
			func_267(uParam0, 0x0000001B, 0x00000000, 0x00000000);
			func_267(uParam0, 0x0000000A, 0x00000000, 0x00000000);
			func_362(uParam0, &uVar0, uParam1);
		}
		func_359(uParam0);
	}
	if (uParam0->f_19A >= 0x00000003 && uParam0->f_19A <= 0x00000005)
	{
		func_374(uParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*uParam0) && !unk_0xFBB4F23D534EB790(*uParam0))) && (unk_0x9F4FE516EAACCFC5(uParam0->f_1) && !unk_0xFBB4F23D534EB790(uParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_54())
	{
		if (func_395(uParam0, 0x0000001A) > 10f)
		{
			func_152(uParam0, 0x0000001A, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		}
	}
	else if (func_145(uParam0, 0x0000001A))
	{
		func_152(uParam0, 0x0000001A, 0x00000000);
	}
	return 0x00000000;
}

void func_374(var uParam0)
{
	if (!func_394(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_393();
		func_384(&(uParam0->f_1AD), 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000004, 0x00000007), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_375(uParam0->f_1AD))
	{
		func_300(uParam0, "Player took too long to make pickup", 0x00000009);
	}
}

bool func_375(int iParam0)
{
	return func_376(func_393(), iParam0);
}

int func_376(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_394(iParam1) || !func_394(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_378(iParam0);
	iVar1 = func_378(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_377(iParam0);
	iVar1 = func_377(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_377(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_378(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_379(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_380(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_381(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_382(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_383(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_383(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_384(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_382(*uParam0);
	iVar1 = func_381(*uParam0);
	iVar2 = func_380(*uParam0);
	iVar3 = func_379(*uParam0);
	iVar4 = func_378(*uParam0);
	iVar5 = func_377(*uParam0);
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
	iVar6 = func_392(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_392(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_385(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_385(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_391(uParam0, iParam1);
	func_390(uParam0, iParam2);
	func_389(uParam0, iParam3);
	func_388(uParam0, iParam5);
	func_387(uParam0, iParam4);
	func_386(uParam0, iParam6);
}

void func_386(var uParam0, int iParam1)
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

void func_387(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_381(*uParam0);
	iVar1 = func_382(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_392(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_389(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_392(int iParam0, int iParam1)
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

int func_393()
{
	var uVar0;
	
	func_391(&uVar0, unk_0x4460E481B9E33ADA());
	func_390(&uVar0, unk_0x8D199E381D262EEF());
	func_389(&uVar0, unk_0xD8A54335F18763BA());
	func_387(&uVar0, unk_0x972A296334C9D57B());
	func_388(&uVar0, unk_0x118229AD063C3C1D());
	func_386(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_394(int iParam0)
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
	iVar0 = func_377(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_378(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_379(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_382(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_381(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_380(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_392(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_395(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_193(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_107(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_396()
{
	func_397(&Local_260);
	func_414();
}

void func_397(var uParam0)
{
	func_12(0x00000000, uParam0, 0x00000001);
	if (uParam0->f_19B != 0x00000009)
	{
		func_418(0x00000002);
	}
}

int func_398(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0x00000001;
	}
	if ((((!func_54() && func_395(uParam0, 0x00000003) > 1f) || uParam0->f_19F == 0x00000012) || uParam0->f_19F == 0x0000000E) || uParam0->f_19F == 0x0000000F)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000000))
				{
					if (func_66(uParam0) == 0x00000000 || func_245(uParam0->f_55, 0x00000020))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_316(uParam0, 0x00001040, 0x00000000);
						}
						else
						{
							func_316(uParam0, 0x00000000, 0x00000000);
						}
						return 0x00000001;
					}
					else
					{
						func_316(uParam0, 0x00000000, 0x00000000);
						return 0x00000001;
					}
				}
				else
				{
					func_316(uParam0, 0x00000000, 0x00000000);
					return 0x00000001;
				}
			}
			else
			{
				func_316(uParam0, 0x00000000, 0x00000000);
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
	{
	}
	return 0x00000000;
}

void func_399(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_9));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_A));
	}
}

int func_400(var uParam0)
{
	if (uParam0->f_6D && uParam0->f_19A < 0x0000001D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_401()
{
	func_403(&Local_260, 0x00000007);
	Local_260.f_19A = 0x00000000;
	Local_260.f_17 = { -1248.422f, 252.6221f, 63.0799f };
	Local_260.f_21 = 34.4f;
	Local_260.f_1A = { -231.2259f, -889.5931f, 28.8903f };
	Local_260.f_22 = 251.9658f;
	Local_262.f_29[0x00000000] = joaat("a_m_y_business_02");
	Local_262.f_29[0x00000001] = joaat("a_m_y_business_02");
	Local_262.f_29[0x00000002] = joaat("a_m_y_business_02");
	Local_262.f_2D[0x00000000] = joaat("a_f_y_beach_01");
	Local_262.f_2D[0x00000001] = joaat("a_f_y_beach_01");
	Local_262.f_2D[0x00000002] = joaat("a_f_y_beach_01");
	Local_262.f_2D[0x00000003] = joaat("a_f_y_beach_01");
	Local_262.f_2D[0x00000004] = joaat("a_m_y_business_01");
	func_402(&Local_260, 0x00000003, 0x00000006);
}

void func_402(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_403(var uParam0, int iParam1)
{
	func_413(0x00000001);
	func_166();
	func_7(&(uParam0->f_F4));
	func_412(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_25(Global_1B416.f_4A94, 0x00000004))
	{
		func_235(&(Global_1B416.f_4A94), 0x00000004);
	}
	func_407(uParam0);
	func_405(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	uParam0->f_66 = (func_404(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0x00000000;
	uParam0->f_1AC = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
}

int func_404(int iParam0)
{
	return Global_1B416.f_4A94.f_27[iParam0];
}

void func_405(var uParam0)
{
	switch (func_66(uParam0))
	{
		case 0x00000000:
			func_406(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000001:
			func_406(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000002:
			func_406(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000003:
			func_406(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000004:
			func_406(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000005:
			func_406(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000006:
			func_406(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000007:
			func_406(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000008:
			func_406(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000009:
			func_406(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 0x00000001;
			break;
	}
}

void func_406(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_407(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			func_411(uParam0, 0x00000003);
			func_410(uParam0, 0x0000000E);
			break;
		
		case 0x00000001:
			func_411(uParam0, 0x0000000E);
			func_410(uParam0, 0x00000008);
			break;
		
		case 0x00000002:
			func_411(uParam0, 0x00000008);
			func_410(uParam0, 0x00000007);
			break;
		
		case 0x00000003:
			func_411(uParam0, 0x0000000F);
			func_410(uParam0, 0x00000006);
			break;
		
		case 0x00000004:
			func_411(uParam0, 0x00000000);
			func_410(uParam0, 0x00000003);
			break;
		
		case 0x00000005:
			func_411(uParam0, 0x00000006);
			func_410(uParam0, 0x00000007);
			break;
		
		case 0x00000006:
			func_411(uParam0, 0x00000008);
			func_410(uParam0, 0x0000000F);
			break;
		
		case 0x00000007:
			func_411(uParam0, 0x00000008);
			func_410(uParam0, 0x0000000E);
			break;
		
		case 0x00000008:
			func_411(uParam0, 0x00000007);
			func_410(uParam0, 0x0000000F);
			break;
		
		case 0x00000009:
			func_411(uParam0, unk_0x09AC81E49EA267F7(0x00000000, 0x00000011));
			iVar0 = func_409((uParam0->f_1A2.f_2 + unk_0x09AC81E49EA267F7(0x00000001, 0x00000011)), 0x00000000, 0x00000010);
			func_410(uParam0, iVar0);
			func_408(uParam0);
			uParam0->f_1A2.f_7 = 0x00000001;
			uParam0->f_1A2.f_8 = 0x00000001;
			break;
	}
}

void func_408(var uParam0)
{
	switch (uParam0->f_1A2.f_2)
	{
		case 0x00000002:
		case 0x00000008:
			uParam0->f_1A2.f_3 = 0x00000001;
			break;
		
		case 0x00000000:
		case 0x00000003:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000F:
			uParam0->f_1A2.f_3 = 0x00000002;
			break;
		
		case 0x00000004:
		case 0x0000000A:
			uParam0->f_1A2.f_3 = 0x00000003;
			break;
		
		case 0x00000001:
		case 0x00000006:
		case 0x0000000D:
			uParam0->f_1A2.f_3 = 0x00000004;
			break;
		
		case 0x0000000B:
			uParam0->f_1A2.f_3 = 0x00000005;
			break;
		
		case 0x0000000C:
		case 0x0000000E:
			uParam0->f_1A2.f_3 = 0x00000006;
			break;
		
		case 0x00000007:
			uParam0->f_1A2.f_3 = 0x00000007;
			break;
	}
}

int func_409(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return 0xFFFFFFFF;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0x00000000;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0x00000000)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0x00000000)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_410(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_411(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_412(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_E = { func_44() };
	uParam0->f_11 = { func_44() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0x00000000;
	uParam0->f_31 = 0x00000000;
	uParam0->f_6D = 0x00000000;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 0x00000002;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_152(uParam0, 0x00000020, 0x00000000);
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_1B066, unk_0xBB0808A181D4745C(), 24);
		Global_1B060 = 0x00000001;
	}
	else
	{
		StringCopy(&Global_1B066, "NULL", 24);
		Global_1B060 = 0x00000000;
	}
}

void func_414()
{
	func_417(&Local_262);
	func_194();
	func_416();
	func_415();
	unk_0x10FAF14A60A0DBE1();
}

void func_415()
{
	unk_0x29D7581AEF4440C2();
	unk_0x8D17794CE3273D70("oddjobs@taxi@gyn@cc@hotbox");
}

void func_416()
{
	unk_0x71199B01895C6202(Local_262.f_29[0x00000000]);
	unk_0x71199B01895C6202(Local_262.f_29[0x00000001]);
	unk_0x71199B01895C6202(Local_262.f_29[0x00000002]);
}

void func_417(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0x83A8177D302E1A7E(uParam0->f_49[iVar0]))
		{
			unk_0xB2C7809F92540947(uParam0->f_49[iVar0], 0x00000000);
		}
		iVar0++;
	}
}

void func_418(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

