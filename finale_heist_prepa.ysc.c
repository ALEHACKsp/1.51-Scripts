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
	int iLocal_42 = 0;
	int iLocal_43[3] = { 0, 0, 0 };
	int iLocal_44[3] = { 0, 0, 0 };
	int iLocal_45 = 0;
	var uLocal_46 = 15;
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
	var uLocal_98 = 15;
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
	var uLocal_150 = 15;
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
	var uLocal_202 = 15;
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
	struct<4> Local_254[2];
	struct<7> Local_255[6];
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	vector3 vLocal_265 = { 0f, 0f, 0f };
	vector3 vLocal_266 = { 0f, 0f, 0f };
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	struct<22> Local_289[3];
	struct<6> Local_290 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_291[3];
	int iLocal_292 = 0;
	char[] cLocal_293[8] = 0;
	var uLocal_294 = 16;
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
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
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
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	int iLocal_459[3] = { 0, 0, 0 };
	char* sLocal_460[3] = { NULL, NULL, NULL };
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	vector3 vLocal_471[24] = "";
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	vector3 vLocal_475[24] = "";
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	int iLocal_479 = 0;
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
	sLocal_258 = "FINPRA";
	vLocal_265 = { 0f, 0f, 0f };
	vLocal_266 = { 134.6909f, -1255.378f, 28.4875f };
	fLocal_270 = 0f;
	bLocal_273 = 0x00000001;
	cLocal_293 = "BSPRAAU";
	iLocal_465 = 0xFFFFFFFF;
	iLocal_467 = 0x00000001;
	iLocal_470 = 0xFFFFFFFF;
	StringCopy(&cLocal_471, "NONE", 24);
	StringCopy(&cLocal_475, "NONE", 24);
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000013))
	{
		func_410();
		sLocal_257 = 0x00000000;
		unk_0xC92DB9682A650680("FHPRA_FAIL");
		func_408();
		func_396();
	}
	func_395();
	func_381();
	iLocal_264 = unk_0x7D6CA5F52B3748BF(402.9022f, -1633.604f, 25.0472f, 315.6288f, -1558.814f, 38.7931f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	func_380(0x0000001B, 0x00000000);
	if (func_379())
	{
		func_378(409.6954f, -1567.046f, 28.2916f, 138.7093f, 0x00000001, 0x00000000);
	}
	unk_0x9CBC55A05A07FC47(0x00000000);
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_STS", 0x00000000);
		if (func_377(unk_0x16F2683693E537C9()))
		{
			func_370();
			func_367();
			func_362();
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
			switch (iLocal_40)
			{
				case 0x00000000:
					func_210();
					break;
				
				case 0x00000001:
					func_209();
					break;
				
				case 0x00000002:
					func_98();
					break;
				
				case 0x00000003:
					func_35();
					break;
				
				case 0x00000004:
					func_1();
					break;
			}
			if (iLocal_40 != 0x00000004)
			{
				if (iLocal_40 >= 0x00000000 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	switch (iLocal_41)
	{
		case 0x00000000:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(0x00000001);
			func_33();
			if (!unk_0xEA6BC48857E0AC4C(sLocal_257))
			{
				func_31(sLocal_257);
			}
			else
			{
				func_15(0x00000000);
			}
			iLocal_41 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_14())
			{
				if (func_13())
				{
					func_410();
				}
				else if (func_12(&uLocal_150, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
				{
					func_10(408.3364f, -1567.429f, 28.2723f, 128.2512f);
					func_8(471.5946f, -1412.737f, 28.1562f, 68.5531f);
				}
				unk_0x536F1BE96C726C4B(372.9868f, -1623.531f, 28.2928f, 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_2();
				func_396();
			}
			break;
	}
}

void func_2()
{
	int iVar0;
	
	unk_0x7AA3AFA47C4179D1(Local_290);
	func_5(&Local_290);
	func_4(&iLocal_262);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		func_3(&(Local_289[iVar0 /*22*/]));
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		func_5(&(Local_291[iVar0 /*6*/]));
		iVar0++;
	}
}

void func_3(int iParam0)
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

void func_4(int iParam0)
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

void func_5(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_7(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_6(unk_0x16F2683693E537C9()))
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
			if (func_6(unk_0x16F2683693E537C9()))
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

int func_6(int iParam0)
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

int func_7(int iParam0)
{
	if (func_6(iParam0))
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

void func_8(vector3 vParam0, float fParam1)
{
	func_9(&(Global_19AE3.f_B4A), vParam0, fParam1);
}

void func_9(var uParam0, vector3 vParam1, var uParam2)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_10(vector3 vParam0, float fParam1)
{
	if (func_11(Global_12C3E, 0f, 0f, 0f, 0x00000000))
	{
		Global_12C3E = { vParam0 };
		Global_12C41 = fParam1;
	}
}

bool func_11(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_12(var uParam0, struct<2> Param1, float fParam2)
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

int func_13()
{
	if (Global_181B8 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_14()
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

void func_15(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_30(0x00000000))
	{
		iVar0 = func_29();
		if (!func_16(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_21();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_20(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_17(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_17(var uParam0, int iParam1)
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
			if (!func_19(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_18(&(uParam0->f_8F8[iVar0]));
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

void func_18(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_19(int iParam0, var uParam1, float fParam2)
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
			return func_19(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_19(0x00000008, uParam1, fParam2);
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

void func_20(int iParam0, bool bParam1)
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

void func_21()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_22())
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
			switch (func_22())
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

int func_22()
{
	func_23();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_27(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_26(unk_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_24(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_25(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_24(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_25(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_28(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_29()
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

bool func_30(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_31(char* sParam0)
{
	func_32(sParam0);
	func_15(0x00000000);
}

void func_32(char* sParam0)
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

void func_33()
{
	func_34(&iLocal_260);
	func_34(&iLocal_261);
}

void func_34(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_35()
{
	var uVar0;
	
	func_91(&Local_290, &uVar0, &iLocal_42, &iLocal_261, &iLocal_260, vLocal_266, 0x00000000, 0x00000000, 0x41000000);
	switch (iLocal_41)
	{
		case 0x00000000:
			if (func_71(iLocal_40, bLocal_28))
			{
				if (unk_0x13896FDECC859926("FHPRA_STOP"))
				{
					iLocal_285 = 0x00000000;
					iLocal_468 = 0x00000000;
					iLocal_41 = 0x00000001;
					unk_0xC92DB9682A650680("FHPRA_STOP");
				}
			}
			break;
		
		case 0x00000001:
			func_70(&iLocal_260, vLocal_266, &iLocal_45, iLocal_42, &iLocal_259, &iLocal_284);
			if (iLocal_45 == 0x00000002)
			{
				if (func_12(&uLocal_150, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
				{
					unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
				}
			}
			if (func_58(Local_290, vLocal_266, &iLocal_260, iLocal_42, iLocal_45, &iLocal_468, &iLocal_285, &iLocal_279, &iLocal_280, &iLocal_259, 0x41000000))
			{
				unk_0x8B4C4CA774181102(5f, 6f, 0x00000004);
				func_55();
				func_50();
			}
			break;
		
		case 0x00000003:
			if (func_7(Local_290))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_290, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_290, 0xFFFFFFFF);
				}
				else
				{
					func_49(Local_290, vLocal_266, 126.0705f, 0x00000000, 0x00000001);
					func_36(0x00000001, 0x00000001, 0x00000001);
					iLocal_41 = 0x00000001;
				}
			}
			break;
	}
}

void func_36(int iParam0, int iParam1, int iParam2)
{
	func_38(0x00000000, 0x00000000, iParam2, 0x00000001);
	if (iParam0 == 0x00000001)
	{
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (iParam1 == 0x00000001)
	{
		func_37(0x000001F4, 0x00000000);
	}
}

void func_37(int iParam0, bool bParam1)
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

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	unk_0xBC03DF6093E8E71F(iVar0, 0x00000000);
	unk_0x98E4DC66A651C9FA(iVar0, bParam3, 0x00000000);
	func_39(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
			if (func_6(unk_0x16F2683693E537C9()))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iLocal_37, 0x00000000))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_37, 0x00000000);
				}
			}
		}
	}
	if (func_377(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	}
}

void func_39(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_48(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_47())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_46(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_48(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_46(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_44(unk_0xD803B885F5E47A62())) && !func_41(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_40()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_44(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_40()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_41(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_42(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_42(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_43();
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

int func_43()
{
	return Global_1407E9;
}

int func_44(int iParam0)
{
	if (func_41(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_45())
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

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_46(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_47()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_48(int iParam0)
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

int func_49(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = 0x00000000;
	if (func_6(iParam0))
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

void func_50()
{
	unk_0x790015DC92C918E2();
	func_53();
	func_51(0x00000000, 0x00000000);
	func_396();
}

void func_51(bool bParam0, int iParam1)
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
		if ((func_30(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_52(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_30(0x00000000))
	{
		iVar0 = func_29();
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

int func_52(int iParam0)
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

void func_53()
{
	Global_4CD7 = 0x00000000;
	func_54();
}

void func_54()
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

void func_55()
{
	func_57(0x00000001, 0x00000289);
	func_56(0x00000000, 0xFFFFFFFF);
}

void func_56(int iParam0, int iParam1)
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

void func_57(bool bParam0, int iParam1)
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

int func_58(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)
{
	float fVar0;
	
	if ((iParam3 == 0x00000001 || iParam3 == 0x00000002) || iParam3 == 0x00000003)
	{
		if (iParam4 == 0x00000000)
		{
			if (func_7(iParam0))
			{
				if (!unk_0x377BE9A1BF38C7CE(iParam0))
				{
					func_67(func_68(func_69()), iParam9);
				}
			}
			if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, fParam10, fParam10, 2f, 0x00000000, 0x00000001, 0x00000002))
			{
				unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, fParam10, fParam10, 2f, 0x00000001, 0x00000001, 0x00000002);
				if (func_66(func_68(func_69()), 0x00000000, 0x00000000))
				{
					unk_0x2F23E8033F1ADDD9(func_68(func_69()));
				}
				*iParam5 = 0x00000001;
				func_64(iParam2, vParam1, 0x00000001);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_63(unk_0x16F2683693E537C9(), vParam1, fVar0))
					{
						*iParam5 = 0x00000000;
						func_62(0x40400000, 0x00000001);
					}
				}
				func_34(iParam2);
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
			if (func_66(func_68(func_69()), 0x00000000, 0x00000000))
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
			if (func_66(func_61(func_69(), 0x00000000), 0x00000000, 0x00000000))
			{
				unk_0x2F23E8033F1ADDD9(func_61(func_69(), 0x00000000));
			}
			if (!func_66(func_60(func_69()), 0x00000000, 0x00000000))
			{
				func_59(func_60(func_69()), 0x00001D4C, 0x00000000);
				*iParam6 = 0x00000001;
			}
		}
		*iParam5 = 0x00000001;
	}
	return 0x00000000;
}

void func_59(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

char* func_60(int iParam0)
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

char* func_61(int iParam0, bool bParam1)
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

int func_62(float fParam0, int iParam1)
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

bool func_63(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

void func_64(int iParam0, vector3 vParam1, int iParam2)
{
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		*iParam0 = func_65(vParam1, 0x00000005, iParam2);
	}
}

int func_65(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x2A065371C9D96655(iVar0, iParam1);
	unk_0x516E63E474722206(iVar0, 1f);
	unk_0x661342B9651D16E2(iVar0, iParam2);
	return iVar0;
}

bool func_66(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_67(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_59(sParam0, 0x00001D4C, 0x00000000);
		*iParam1 = 0x00000001;
	}
}

char* func_68(int iParam0)
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

int func_69()
{
	return Global_12C54;
}

void func_70(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			func_34(iParam0);
			if ((iParam3 == 0x00000001 || iParam3 == 0x00000002) || iParam3 == 0x00000003)
			{
				unk_0x790015DC92C918E2();
				func_59("LOSE_WANTED", 0x00001D4C, 0x00000000);
				*iParam2 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				unk_0x790015DC92C918E2();
				if ((iParam3 == 0x00000001 || iParam3 == 0x00000002) || iParam3 == 0x00000003)
				{
					func_67(func_61(func_69(), 0x00000000), iParam4);
					func_64(iParam0, vParam1, 0x00000001);
				}
				else if (iParam3 == 0x00000000 && !*iParam5)
				{
					func_59(func_60(func_69()), 0x00001D4C, 0x00000000);
					*iParam5 = 0x00000001;
				}
				*iParam2 = 0x00000000;
			}
			break;
	}
}

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				bLocal_28 = 0x00000000;
				func_36(0x00000001, 0x00000001, 0x00000001);
			}
			else if (func_82(0x00000001, vLocal_265, 0x00000000))
			{
				if (((func_82(0x00000002, Local_290.f_1, Local_290.f_4) && func_82(0x00000004, vLocal_265, 0x00000000)) && func_82(0x00000003, vLocal_265, 0x00000000)) && func_82(0x00000005, vLocal_265, 0x00000000))
				{
					iLocal_271 = unk_0x544B74C043CE9948(400.8628f, -1609.739f, 28.29278f, 7.5f, 2f, 9.5f, func_81(229.3746f), 0x00000000, 0x00000007);
					if (unk_0xC0E5DA578D275A41(Local_290) != 0x00000000)
					{
						iVar0 = unk_0xC0E5DA578D275A41(Local_290);
						unk_0xCD816869CA451988(0x00000001);
						func_34(&iVar0);
						unk_0xCD816869CA451988(0x00000000);
					}
					func_79(&iLocal_260, Local_290, 0x00000001);
					func_77();
					func_75();
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				if (((func_82(0x00000002, Local_290.f_1, Local_290.f_4) && func_82(0x00000004, vLocal_265, 0x00000000)) && func_82(0x00000003, vLocal_265, 0x00000000)) && func_82(0x00000005, vLocal_265, 0x00000000))
				{
					func_74(unk_0x16F2683693E537C9(), 408.3364f, -1567.429f, 28.2723f, 128.2512f);
					func_72();
					unk_0x745CE398A4B0A3C6(369.0115f, -1609.116f, 28.2928f, 5f, 0x00000000);
					unk_0x745CE398A4B0A3C6(Local_289[0x00000000 /*22*/].f_1, 5f, 0x00000000);
					func_77();
					func_75();
					bLocal_28 = 0x00000000;
					func_36(0x00000001, 0x00000001, 0x00000001);
				}
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				if ((func_82(0x00000002, Local_290.f_1, Local_290.f_4) && func_82(0x00000004, vLocal_265, 0x00000000)) && func_82(0x00000003, vLocal_265, 0x00000000))
				{
					func_72();
					unk_0x745CE398A4B0A3C6(369.0115f, -1609.116f, 28.2928f, 5f, 0x00000000);
					unk_0x745CE398A4B0A3C6(Local_289[0x00000000 /*22*/].f_1, 5f, 0x00000000);
					func_77();
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_290, 0xFFFFFFFF);
					func_75();
					bLocal_28 = 0x00000000;
					func_36(0x00000001, 0x00000001, 0x00000001);
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
				if (func_82(0x00000002, vLocal_266, Local_290.f_4))
				{
					func_72();
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_290, 0xFFFFFFFF);
					func_75();
					bLocal_28 = 0x00000000;
					func_36(0x00000001, 0x00000001, 0x00000001);
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

void func_72()
{
	int iVar0;
	
	StringCopy(&cLocal_471, "NONE", 24);
	StringCopy(&cLocal_475, "NONE", 24);
	iLocal_284 = 0x00000000;
	iLocal_463 = 0x00000000;
	iLocal_285 = 0x00000000;
	iLocal_464 = 0x00000000;
	iLocal_279 = 0x00000000;
	iLocal_280 = 0x00000000;
	iLocal_45 = 0x00000000;
	func_73();
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		Local_289[iVar0 /*22*/].f_12 = 0x00000000;
		Local_289[iVar0 /*22*/].f_13 = 0x00000000;
		Local_289[iVar0 /*22*/].f_14 = 0x00000000;
		iLocal_459[iVar0] = 0x00000000;
		iVar0++;
	}
	iLocal_461 = 0x00000000;
	iLocal_462 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		iLocal_43[iVar0] = 0x00000000;
		iLocal_44[iVar0] = 0x00000000;
		iVar0++;
	}
	iLocal_467 = 0x00000001;
	func_380(0x0000001B, 0x00000000);
	unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x0000000D /*31*/], 0x00000004, 0x00000001, 0x00000000);
	iLocal_468 = 0x00000000;
}

void func_73()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000002)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000000F - 0x00000001))
		{
			unk_0x0674E58A79778E99(&(Local_289[iVar1 /*22*/].f_F), iVar0);
			iVar0++;
		}
		Local_289[iVar1 /*22*/].f_11 = 0x00000000;
		Local_289[iVar1 /*22*/].f_10 = 0x00000000;
		iVar1++;
	}
	iLocal_277 = 0x00000000;
	iLocal_278 = 0x00000000;
	iLocal_275 = 0x00000000;
	iLocal_465 = 0xFFFFFFFF;
	iLocal_463 = 0x00000000;
	bLocal_274 = 0x00000000;
	iLocal_466 = 0x00000000;
}

void func_74(int iParam0, vector3 vParam1, float fParam2)
{
	if (func_377(iParam0))
	{
		unk_0xA3BF0AA5A2608191(iParam0);
	}
	func_49(iParam0, vParam1, fParam2, 0x00000000, 0x00000001);
}

void func_75()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar2 = func_22();
	if (iVar2 == 0x00000000)
	{
		iVar0 = 0x00000000;
		sVar1 = "MICHAEL";
	}
	else if (iVar2 == 0x00000001)
	{
		iVar0 = 0x00000001;
		sVar1 = "FRANKLIN";
	}
	else if (iVar2 == 0x00000002)
	{
		iVar0 = 0x00000002;
		sVar1 = "TREVOR";
	}
	func_76(&uLocal_294, iVar0, unk_0x16F2683693E537C9(), sVar1, 0x00000000, 0x00000001);
	func_76(&uLocal_294, 0x00000006, Local_289[0x00000000 /*22*/], "BSPRACopBreak1", 0x00000000, 0x00000001);
	func_76(&uLocal_294, 0x00000007, Local_289[0x00000001 /*22*/], "BSPRACopBreak2", 0x00000000, 0x00000001);
	func_76(&uLocal_294, 0x00000005, Local_289[0x00000002 /*22*/], "BSPRACopBreak3", 0x00000000, 0x00000001);
}

void func_76(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_77()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		unk_0x11AD11297DC58CC7(Local_289[iVar0 /*22*/], 0x00000000);
		if (!func_78(Local_289[iVar0 /*22*/], 0xBE86C566))
		{
			switch (iVar0)
			{
				case 0x00000000:
				case 0x00000001:
					unk_0x0B7C52F2BC1DC8EB(Local_289[iVar0 /*22*/], "WORLD_HUMAN_HANG_OUT_STREET", Local_289[iVar0 /*22*/].f_1, Local_289[iVar0 /*22*/].f_4, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000002:
					unk_0x8D4C354BB8991817(Local_289[iVar0 /*22*/], 0x00000001, 0x00000001);
					break;
				}
		}
		unk_0x262EF6C6306BEA6C(Local_289[iVar0 /*22*/], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x6DF7BF67E86AAE86(Local_289[iVar0 /*22*/], iLocal_292);
		Local_289[iVar0 /*22*/].f_12 = 0x00000001;
		Local_289[iVar0 /*22*/].f_15 = 0x00000000;
		iVar0++;
	}
}

int func_78(int iParam0, int iParam1)
{
	if (func_377(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		*iParam0 = func_80(iParam1, bParam2, 0x00000005);
	}
}

int func_80(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_6(iParam0))
	{
		iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
		unk_0x321E019A46034F39(iVar0, bParam1);
		unk_0x2A065371C9D96655(iVar0, iParam2);
		unk_0x516E63E474722206(iVar0, 1f);
	}
	return iVar0;
}

float func_81(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_82(int iParam0, vector3 vParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar3;
	int iVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case 0x00000000:
			if (func_90(vParam1, vLocal_265, 0x3F000000, 0x00000000) && fParam2 == 0f)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			unk_0xD7992BEF7A9D109E(sLocal_258, 0x00000000);
			unk_0xD7992BEF7A9D109E(cLocal_293, 0x00000006);
			if (unk_0x67C1D9E5B91B2E37(0x00000000) && unk_0x67C1D9E5B91B2E37(0x00000006))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_7(Global_17409[0x00000000]))
			{
				unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
				Local_290 = Global_17409[0x00000000];
				if (func_7(Local_290))
				{
					if (!unk_0x4DA54CAC0D81A673(Local_290))
					{
						unk_0x2F625BED8BF7F26A(Local_290);
					}
					unk_0x2E81FA494A883541(Local_290, 0x00000002, 0x00000000);
					unk_0x2E81FA494A883541(Local_290, 0x00000003, 0x00000000);
					func_89(Local_290, 0x00000000);
					unk_0x44A200C9B6E1CEA6(Local_290, 0x00000001);
					unk_0x71EDC33E5A423750(Local_290, 0x00000001);
					return 0x00000001;
				}
			}
			else if (func_88(&Local_290, Local_290.f_5, Local_290.f_1, Local_290.f_4, 0x00000001))
			{
				if (!unk_0x4DA54CAC0D81A673(Local_290))
				{
					unk_0x2F625BED8BF7F26A(Local_290);
				}
				func_89(Local_290, 0x00000000);
				unk_0x44A200C9B6E1CEA6(Local_290, 0x00000001);
				unk_0x2E81FA494A883541(Local_290, 0x00000002, 0x00000000);
				unk_0x2E81FA494A883541(Local_290, 0x00000003, 0x00000000);
				unk_0x71EDC33E5A423750(Local_290, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			iVar1 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000002)
			{
				if (unk_0xC844350D5D58C99A(Global_17409.f_9[iVar0]))
				{
					if (!unk_0x28072FDD60CE3A6E(Global_17409.f_9[iVar0], 0x00000001))
					{
						unk_0x73270B3C9CC833FD(Global_17409.f_9[iVar0], 0x00000001, 0x00000001);
						Local_289[iVar0 /*22*/] = Global_17409.f_9[iVar0];
						if (func_377(Local_289[iVar0 /*22*/]))
						{
							unk_0x26A6B1686E33113F(Local_289[iVar0 /*22*/], 0x00000002);
							unk_0x33CE5A9E32EA10B2(Local_289[iVar0 /*22*/], 0x00000001);
							func_87(iVar0);
							iVar1++;
						}
					}
					else
					{
						iVar1++;
					}
				}
				else if (func_86(&(Local_289[iVar0 /*22*/]), Local_289[iVar0 /*22*/].f_5, Local_289[iVar0 /*22*/].f_1, Local_289[iVar0 /*22*/].f_4, 0x00000000, 0x00000000, 0x00000000, 0x00000001))
				{
					func_87(iVar0);
					unk_0x33CE5A9E32EA10B2(Local_289[iVar0 /*22*/], 0x00000001);
					unk_0x26A6B1686E33113F(Local_289[iVar0 /*22*/], 0x00000002);
					StringCopy(&cVar2, "COP ", 16);
					StringIntConCat(&cVar2, iVar0, 16);
					unk_0x5F2AA9E2843E9403(Local_289[iVar0 /*22*/], &cVar2);
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000003)
			{
				if (func_7(Global_17409[iVar3]))
				{
					unk_0x73270B3C9CC833FD(Global_17409[iVar3], 0x00000001, 0x00000001);
					Local_291[iVar4 /*6*/] = Global_17409[iVar3];
					if (func_7(Local_291[iVar4 /*6*/]))
					{
						iVar5++;
					}
				}
				else if (func_88(&(Local_291[iVar4 /*6*/]), Local_291[iVar4 /*6*/].f_5, Local_291[iVar4 /*6*/].f_1, Local_291[iVar4 /*6*/].f_4, 0x00000001))
				{
					iVar5++;
				}
				iVar4++;
				iVar3++;
			}
			if (iVar5 == 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if (func_83(&iLocal_262, joaat("prop_box_guncase_03a"), 354.6938f, -1634.783f, 22.7849f, 299.1508f, 0x00000001))
			{
				if (func_7(Local_290))
				{
					unk_0x9F528B1B53FBC5D9(iLocal_262, Local_290, 0x00000000, 0f, -1.85f, 0.05f, unk_0x835730A2D89F6093(Local_290, 0x00000002), 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					if (unk_0x50B5F6F3C29E9380(Local_290, iLocal_262))
					{
						return 0x00000001;
					}
				}
			}
			break;
	}
	return 0x00000000;
}

int func_83(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		if (func_85(iParam1, "Loading", 0x00000000))
		{
			*iParam0 = unk_0x7707E48765093646(iParam1, vParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xD8F6A53F4799FAFE(*iParam0, fParam3);
				unk_0xAC0C6241732E36F6(*iParam0);
				if (bParam4)
				{
					func_84(iParam1, 0x00000001);
				}
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

void func_84(int iParam0, bool bParam1)
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

int func_85(int iParam0, char* sParam1, int iParam2)
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

int func_86(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		if (func_85(iParam1, "Loading", 0x00000000))
		{
			*uParam0 = unk_0x36F2404464202779(0x0000001A, iParam1, vParam2, fParam3, 0x00000001, 0x00000001);
			if (func_377(*uParam0))
			{
				if (bParam5)
				{
					unk_0x1E9649458B15960F(*uParam0, 0x00000001);
				}
				if (bParam6)
				{
					unk_0x11AD11297DC58CC7(*uParam0, bParam6);
				}
				if (!bParam7)
				{
					unk_0x25C5402CC10F76CD(*uParam0, bParam7);
				}
				if (bParam4)
				{
					func_84(iParam1, 0x00000001);
				}
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

void func_87(int iParam0)
{
	if (func_377(Local_289[iParam0 /*22*/]))
	{
		if (iParam0 == 0x00000000)
		{
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000009, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x00000009, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(Local_289[iParam0 /*22*/], 0x0000000A, 0x00000000, 0x00000001, 0x00000000);
		}
	}
}

int func_88(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (!unk_0xC844350D5D58C99A(*iParam0))
	{
		if (func_85(iParam1, "Loading", 0x00000000))
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
					func_84(iParam1, 0x00000001);
				}
				return 0x00000001;
			}
		}
	}
	else
	{
		if (func_7(*iParam0))
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

void func_89(int iParam0, int iParam1)
{
	Global_181B8.f_16[iParam1] = iParam0;
}

int func_90(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_91(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, int iParam6, bool bParam7, float fParam8)
{
	if (func_7(*iParam0))
	{
		switch (*iParam2)
		{
			case 0x00000000:
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000))
				{
					func_34(iParam3);
					if (func_66(func_60(func_69()), 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9(func_60(func_69()));
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
				else if (func_97(*iParam0) || func_96(*iParam0))
				{
					func_34(iParam3);
					if (func_66(func_60(func_69()), 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9(func_60(func_69()));
					}
					*iParam2 = 0x00000003;
				}
				else
				{
					if (func_66(func_61(func_69(), bParam7), 0x00000000, 0x00000000))
					{
						unk_0x2F23E8033F1ADDD9(func_61(func_69(), bParam7));
					}
					if (func_69() != 0x00000021)
					{
						func_94(iParam0);
					}
					else
					{
						func_92(iParam0, uParam1);
					}
				}
				break;
			
			case 0x00000002:
			case 0x00000001:
				if ((!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0x00000000) && !func_97(*iParam0)) && !func_96(*iParam0))
				{
					func_34(iParam4);
					if (!unk_0x5A91F08DF773C39D(*iParam0, vParam5, fParam8, fParam8, 2f, 0x00000000, 0x00000001, 0x00000002))
					{
						func_79(iParam3, *iParam0, 0x00000001);
					}
					*iParam2 = 0x00000000;
				}
				break;
			
			case 0x00000003:
				if (!func_97(*iParam0) && !func_96(*iParam0))
				{
					func_34(iParam4);
					if (!unk_0x5A91F08DF773C39D(*iParam0, vParam5, fParam8, fParam8, 2f, 0x00000000, 0x00000001, 0x00000002))
					{
						func_79(iParam3, *iParam0, 0x00000001);
					}
					*iParam2 = 0x00000000;
				}
				break;
		}
	}
	else if (func_69() != 0x00000021)
	{
		func_94(iParam0);
	}
	else
	{
		func_92(iParam0, uParam1);
	}
}

void func_92(int iParam0, var uParam1)
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
				if (func_7(iVar0))
				{
					iVar1 = unk_0x134B62B726CEC8E6(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						func_93(iParam0);
						*iParam0 = iVar0;
						func_89(*iParam0, 0x00000001);
						func_89(*uParam1, 0x00000003);
						if (!unk_0xAF6690C489CC6203(*iParam0))
						{
							unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000001);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = unk_0xC102CE429C03E382(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
						if (func_6(iVar2))
						{
							iVar0 = unk_0x96A5FE5834B81CE7(iVar2);
							if (unk_0x134B62B726CEC8E6(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								func_93(iParam0);
								*iParam0 = iVar0;
								func_89(*iParam0, 0x00000001);
								func_89(*uParam1, 0x00000003);
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

void func_93(int iParam0)
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

void func_94(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (iVar0 != *iParam0)
		{
			if (func_7(iVar0))
			{
				if (unk_0x134B62B726CEC8E6(iVar0) == func_95(func_69()))
				{
					func_93(iParam0);
					*iParam0 = iVar0;
					func_89(*iParam0, 0x00000001);
					unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000001);
				}
			}
		}
	}
}

int func_95(int iParam0)
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

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_377(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && func_7(iParam0))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (func_7(iVar0))
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

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_377(unk_0x16F2683693E537C9()) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && func_7(iParam0))
	{
		iVar0 = unk_0x728870EB733D12A1();
		if (func_7(iVar0))
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

void func_98()
{
	var uVar0;
	
	func_91(&Local_290, &uVar0, &iLocal_42, &iLocal_261, &iLocal_260, vLocal_266, 0x00000000, 0x00000000, 0x41000000);
	func_118();
	func_106();
	switch (iLocal_41)
	{
		case 0x00000000:
			if (func_71(iLocal_40, bLocal_28))
			{
				if (unk_0x13896FDECC859926("FHPRA_VAN"))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						if (iLocal_42 == 0x00000001 || iLocal_42 == 0x00000002)
						{
							func_104();
							if (!func_103())
							{
								func_67("PR_TAKBACK", &iLocal_259);
							}
							unk_0x8B4C4CA774181102(5f, 6f, 0x00000004);
							unk_0xC92DB9682A650680("FHPRA_VAN");
							func_64(&iLocal_260, vLocal_266, 0x00000001);
						}
					}
					iLocal_469 = 0x00000000;
					iLocal_41 = 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			func_70(&iLocal_260, vLocal_266, &iLocal_45, iLocal_42, &iLocal_259, &iLocal_284);
			if (iLocal_45 == 0x00000002)
			{
				if (func_12(&uLocal_150, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
				{
					unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
				}
				if (!iLocal_469)
				{
					unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_BS_PREP_A_01", 0f);
					iLocal_469 = 0x00000001;
				}
			}
			if (func_101(Local_290, vLocal_266, &iLocal_260, iLocal_45, iLocal_42, &iLocal_259, &iLocal_285, 0x00000000, 0x00000000, 0x40C00000))
			{
				unk_0x8B4C4CA774181102(5f, 6f, 0x00000004);
				iLocal_41 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			func_34(&iLocal_260);
			func_62(0x40400000, 0x00000001);
			func_99(0x00000000);
			break;
		
		case 0x00000003:
			if (func_7(Local_290))
			{
				if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_290, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_290, 0xFFFFFFFF);
				}
				else
				{
					func_49(Local_290, vLocal_266, 126.0705f, 0x00000000, 0x00000001);
					func_36(0x00000001, 0x00000001, 0x00000001);
					iLocal_41 = 0x00000001;
				}
			}
			break;
	}
}

void func_99(bool bParam0)
{
	func_100(iLocal_40);
	iLocal_256 = iLocal_40;
	if (!bParam0)
	{
		iLocal_40 = iLocal_256 + 1;
	}
	else if (iLocal_256 > 0x00000000)
	{
		iLocal_40 = (iLocal_256 - 0x00000001);
	}
	iLocal_259 = 0x00000000;
	iLocal_41 = 0x00000000;
}

void func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
	}
}

int func_101(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if ((iParam4 == 0x00000001 || iParam4 == 0x00000002) || iParam4 == 0x00000003)
	{
		if (iParam3 == 0x00000000)
		{
			func_64(iParam2, vParam1, 0x00000001);
			if (!bParam8)
			{
				if (func_7(iParam0))
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
			if (func_66(func_60(func_69()), 0x00000000, 0x00000000))
			{
				unk_0x2F23E8033F1ADDD9(func_60(func_69()));
			}
			if (!func_102())
			{
				func_67(func_61(func_69(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0x00000000)
	{
		if (!*iParam6)
		{
			if (func_66(func_61(func_69(), 0x00000000), 0x00000000, 0x00000000))
			{
				unk_0x2F23E8033F1ADDD9(func_61(func_69(), 0x00000000));
			}
			func_59(func_60(func_69()), 0x00001D4C, 0x00000000);
			*iParam6 = 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_102()
{
	return Global_181EC.f_159 > 0x00000000;
}

int func_103()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_104()
{
	Global_4CD7 = 0x00000000;
	func_105();
}

void func_105()
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

void func_106()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = func_116(iVar0);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			switch (iLocal_44[iVar0])
			{
				case 0x00000000:
					if (!func_115(iVar1))
					{
						if (func_114(iVar1, 0x00000000))
						{
							if (func_113(iVar0, iVar1) || func_111(iVar0, iVar1))
							{
								if (func_110(iVar1, 0x00000000))
								{
									unk_0x73270B3C9CC833FD(iVar1, 0x00000001, 0x00000001);
									unk_0x11AD11297DC58CC7(iVar1, 0x00000001);
									unk_0xA3BF0AA5A2608191(iVar1);
								}
							}
						}
					}
					break;
				
				case 0x00000001:
					if (func_109(iVar0, iVar1) && unk_0x9C77D2D0559097F0(iVar1, 0x00000001))
					{
						iLocal_44[iVar0] = 0x00000000;
						func_108(iVar1);
					}
					break;
				
				case 0x00000002:
					if (func_107(iVar0, iVar1) && unk_0x9C77D2D0559097F0(iVar1, 0x00000001))
					{
						iLocal_44[iVar0] = 0x00000000;
						func_108(iVar1);
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_107(int iParam0, int iParam1)
{
	switch (iLocal_43[iParam0])
	{
		case 0x00000000:
			unk_0x132B85BCE016BCA0(iParam1, unk_0x6937EA2286828455(iParam1, 0x00000000), vLocal_266, 0x00000004, 20f, 0x000C0025, 3.5f, 5f, 0x00000001);
			iLocal_43[iParam0] = 0x00000003;
			break;
		
		case 0x00000003:
			if (!func_111(iParam0, iParam1) || func_63(unk_0x16F2683693E537C9(), vLocal_266, 2f))
			{
				iLocal_43[iParam0] = 0x00000004;
			}
			break;
		
		case 0x00000004:
			iLocal_43[iParam0] = 0x00000000;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_108(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_26(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_116(iVar0) != iParam0)
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

int func_109(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iLocal_43[iParam0])
	{
		case 0x00000000:
			if (!unk_0xF65264B66E133BD8(Local_254[iLocal_470 /*4*/], 1.5f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, iParam1, 0x00000000))
			{
				if (func_63(iParam1, Local_254[iLocal_470 /*4*/], 5f))
				{
					fVar0 = 1f;
				}
				else
				{
					fVar0 = 2f;
				}
				unk_0x96167B03C5A77156(iParam1, Local_254[iLocal_470 /*4*/], fVar0, 0x00004E20, 0.25f, 0x00000000, Local_254[iLocal_470 /*4*/].f_3);
				iLocal_43[iParam0] = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!func_78(iParam1, 0x2A89B8A7))
			{
				unk_0x6EDD55375054780D(iParam1, 0x00000000);
				iLocal_43[iParam0] = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!func_78(iParam1, 0xB802FDCA))
			{
				iLocal_43[iParam0] = 0x00000004;
			}
			break;
		
		case 0x00000004:
			iLocal_43[iParam0] = 0x00000000;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_26(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_116(iVar0) != iParam0)
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

int func_111(int iParam0, int iParam1)
{
	if (!func_112())
	{
		if ((unk_0xC844350D5D58C99A(Local_290) && unk_0xDF1306B443CD3D15(Local_290, 0x00000000)) && !unk_0x5A91F08DF773C39D(Local_290, vLocal_266, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
		{
			if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_290, 0x00000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				if (unk_0xC42A92762C58E1B9(iParam1, Local_290, 0x00000000) && unk_0xA30B8362589C124A(Local_290, 0xFFFFFFFF, 0x00000000) == iParam1)
				{
					iLocal_44[iParam0] = 0x00000002;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_112()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_113(int iParam0, int iParam1)
{
	if (!func_112())
	{
		if (unk_0x3D1053F9EB43B7AD(iParam1, 344.9844f, -1604.011f, 28.29278f, 339.7212f, -1599.484f, 31.29056f, 3.63f, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 345.1542f, -1604.173f, 28.29278f, 360.8858f, -1617.23f, 31.29278f, 3.38f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_470 = 0x00000000;
			iLocal_44[iParam0] = 0x00000001;
			return 0x00000001;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam1, 345.1542f, -1604.173f, 28.29278f, 360.8858f, -1617.23f, 31.29278f, 3.63f, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 344.9844f, -1604.011f, 28.29278f, 339.7212f, -1599.484f, 31.29056f, 3.38f, 0x00000000, 0x00000001, 0x00000000))
		{
			iLocal_470 = 0x00000001;
			iLocal_44[iParam0] = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_26(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_116(iVar0) != iParam0)
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

int func_115(int iParam0)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_26(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_116(iVar0) != iParam0)
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

int func_116(int iParam0)
{
	if (iParam0 > 0x00000003)
	{
		return 0x00000000;
	}
	if (iParam0 == func_22())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_177DE[func_117(iParam0)];
}

int func_117(int iParam0)
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

void func_118()
{
	int iVar0;
	
	if (!bLocal_28)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 0x00000001)
		{
			bLocal_274 = 0x00000001;
		}
		else
		{
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000026);
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x0000001E);
			bLocal_274 = 0x00000000;
		}
		if (iLocal_40 == 0x00000002)
		{
			if (!iLocal_286)
			{
				if (!func_63(unk_0x16F2683693E537C9(), Local_290.f_1, 180f))
				{
					iVar0 = 0x00000000;
					while (iVar0 <= 0x00000002)
					{
						func_208(&(Local_289[iVar0 /*22*/]), 0x00000001, 0x00000000, 0x00000001);
						iVar0++;
					}
					iLocal_286 = 0x00000001;
				}
			}
		}
		func_197();
		func_119();
	}
}

void func_119()
{
	int iVar0;
	
	iVar0 = 0x00000002;
	if (Local_289[iVar0 /*22*/].f_12 != 0x00000003 && Local_289[iVar0 /*22*/].f_14 != 0x00000007)
	{
		func_196(Local_289[iVar0 /*22*/], &(Local_289[iVar0 /*22*/].f_6), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
	}
	else
	{
		func_195(&(Local_289[iVar0 /*22*/].f_6));
	}
	if (func_377(Local_289[iVar0 /*22*/]))
	{
		func_152(iVar0);
		switch (Local_289[iVar0 /*22*/].f_12)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				func_151(iVar0);
				break;
			
			case 0x00000003:
				func_120(iVar0);
				break;
		}
	}
	else
	{
		if (unk_0xC844350D5D58C99A(Local_289[iVar0 /*22*/]) && !unk_0xEB6A8945D1AC98A1(Local_289[iVar0 /*22*/]))
		{
			if (unk_0xB87D13D0C064E9D1(Local_289[iVar0 /*22*/], unk_0x16F2683693E537C9(), 0x00000001))
			{
				unk_0xE910A68AA670B4AA(Local_289[iVar0 /*22*/]);
				if (((unk_0x52AE17073D025311(unk_0x16F2683693E537C9()) || unk_0x9E834FAC6CCB49FB(Local_289[iVar0 /*22*/])) || unk_0xC021B60D52071374(Local_289[iVar0 /*22*/])) || unk_0xFEAA79CCC9861C2B(Local_289[iVar0 /*22*/]))
				{
					if (!bLocal_274)
					{
						unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000029);
						unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000021);
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					}
				}
			}
			Local_289[iVar0 /*22*/].f_12 = 0x00000001;
			Local_289[iVar0 /*22*/].f_15 = 0x00000000;
		}
		func_34(&(Local_289[iVar0 /*22*/].f_6));
		func_208(&(Local_289[iVar0 /*22*/]), 0x00000001, 0x00000000, 0x00000001);
	}
}

void func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	switch (Local_289[iParam0 /*22*/].f_14)
	{
		case 0x00000001:
			if (func_149(iParam0) && func_63(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f))
			{
				if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000003E8, 0x000005DC)
				{
					if (!func_78(Local_289[iParam0 /*22*/], 0xCBCE4595))
					{
						unk_0x2ECF845953E95D1B(Local_289[iParam0 /*22*/]);
						unk_0xF96A174EE26D7588(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 0x00000000);
					}
					Local_289[iParam0 /*22*/].f_E = unk_0x1C0640BA9A7327B3();
				}
			}
			else
			{
				func_134(iParam0);
			}
			break;
		
		case 0x00000002:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x00001388, 0x00001770)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000002))
				{
					func_127(iParam0);
					func_125();
					return;
				}
				else if (func_124(iParam0, 0x0000000F))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000009C4, 0x00000BB8)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000008))
				{
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
				else
				{
					iLocal_278 = 0x00000000;
					func_134(iParam0);
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000009C4, 0x00000BB8)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000008))
				{
					if (iLocal_278 >= 0x00000003)
					{
						func_127(iParam0);
						func_125();
						return;
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000009) && !bLocal_272)
					{
						func_127(iParam0);
						func_125();
						return;
					}
					else
					{
						Local_289[iParam0 /*22*/].f_11 = 0x00000001;
					}
				}
				else
				{
					iLocal_278 = 0x00000000;
					func_134(iParam0);
				}
			}
			break;
		
		case 0x00000006:
			if (iParam0 == 0x00000000)
			{
				iVar0 = 0x0000015E;
			}
			else
			{
				iVar0 = 0x000002EE;
			}
			if ((unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > iVar0)
			{
				if (!unk_0x15D0A3E61766C539(Local_289[iParam0 /*22*/], 0x00000000) && !unk_0x46BC6F5F089F3AFF(Local_289[iParam0 /*22*/]))
				{
					Local_289[iParam0 /*22*/].f_E = unk_0x1C0640BA9A7327B3();
					func_127(iParam0);
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000003E8, 0x00000BB8)
			{
				func_125();
				return;
			}
			break;
		
		case 0x00000007:
			if ((unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > 0x0000015E)
			{
				if (!bLocal_274 && func_124(iParam0, 0x0000000F))
				{
					func_73();
					func_134(iParam0);
					unk_0xFDCA9E507F779D9A(Local_289[iParam0 /*22*/]);
					return;
				}
				else
				{
					if (iLocal_465 != 0xFFFFFFFF)
					{
						if ((unk_0x1C0640BA9A7327B3() - iLocal_465) > 0x00002EE0)
						{
							func_123(0xFFFFFFFF);
						}
						else if ((unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9())) || unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
						{
							func_123(0x00000002);
						}
						else if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
						{
							if (unk_0xEC560E589DF8370E(iVar1))
							{
								iVar2 = unk_0x940C1429253D3B1B(iVar1);
								if ((iVar2 == Local_289[0x00000000 /*22*/] || iVar2 == Local_289[0x00000001 /*22*/]) || iVar2 == Local_289[0x00000002 /*22*/])
								{
									func_123(0x00000002);
								}
							}
						}
					}
					if (Local_289[iParam0 /*22*/].f_10)
					{
						unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
					}
					if ((func_78(Local_289[iParam0 /*22*/], 0x811E343C) || func_78(Local_289[iParam0 /*22*/], 0xC572E06A)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000002)
					{
						if (!func_78(Local_289[iParam0 /*22*/], 0x52FF82C0))
						{
							unk_0xF27A0DCBF07DE99D(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9());
						}
					}
				}
			}
			if (!iLocal_463)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000001) && unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000E))
				{
					if (iParam0 == 0x00000000)
					{
						sVar3 = "PRA_COPSHT1";
					}
					else
					{
						sVar3 = "PRA_COPSHT2";
					}
					func_53();
					func_121(&uLocal_294, cLocal_293, sVar3, 0x00000007, 0x00000000, 0x00000000);
					iLocal_463 = 0x00000001;
				}
			}
			break;
	}
}

void func_121(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_122(uParam0, 0x00000091, sParam1, iParam4, iParam5, 0x00000000);
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

void func_122(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_123(int iParam0)
{
	unk_0x34D79252800B23FF(0x00000005);
	unk_0x51B096AAC60548C1(1f);
	iLocal_465 = 0xFFFFFFFF;
	if (func_377(Local_289[0x00000000 /*22*/]))
	{
		unk_0x11AD11297DC58CC7(Local_289[0x00000000 /*22*/], 0x00000000);
	}
	if (func_377(Local_289[0x00000001 /*22*/]))
	{
		unk_0x11AD11297DC58CC7(Local_289[0x00000001 /*22*/], 0x00000000);
	}
	if (func_377(Local_289[0x00000002 /*22*/]))
	{
		unk_0x11AD11297DC58CC7(Local_289[0x00000002 /*22*/], 0x00000000);
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), iParam0, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
	}
}

int func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		if (iVar0 != iParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, iVar0))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	if (bLocal_274)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_125()
{
	int iVar0;
	
	func_126();
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (Local_289[iVar0 /*22*/].f_14 != 0x00000006 && Local_289[iVar0 /*22*/].f_14 != 0x00000007)
		{
			func_195(&(Local_289[iVar0 /*22*/].f_6));
			Local_289[iVar0 /*22*/].f_E = unk_0x1C0640BA9A7327B3();
			Local_289[iVar0 /*22*/].f_12 = 0x00000003;
			Local_289[iVar0 /*22*/].f_14 = 0x00000006;
		}
		iVar0++;
	}
}

void func_126()
{
	if (!iLocal_275)
	{
		iLocal_465 = unk_0x1C0640BA9A7327B3();
		if (!iLocal_464)
		{
			func_104();
		}
		unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		iLocal_275 = 0x00000001;
	}
}

void func_127(int iParam0)
{
	if (Local_289[iParam0 /*22*/].f_14 != 0x00000007)
	{
		if (func_377(Local_289[iParam0 /*22*/]))
		{
			if (func_78(Local_289[iParam0 /*22*/], 0x0E763797) || unk_0xFBF1556B75C783FC(Local_289[iParam0 /*22*/]))
			{
				unk_0xA3BF0AA5A2608191(Local_289[iParam0 /*22*/]);
			}
			else if (func_78(Local_289[iParam0 /*22*/], 0xBE86C566) || func_78(Local_289[iParam0 /*22*/], 0x3B3A458F))
			{
				unk_0x2ECF845953E95D1B(Local_289[iParam0 /*22*/]);
			}
			unk_0xE733200EEF894A35(Local_289[iParam0 /*22*/], 0x00000001);
			unk_0xF27A0DCBF07DE99D(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9());
			unk_0x262EF6C6306BEA6C(Local_289[iParam0 /*22*/], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			unk_0xE910A68AA670B4AA(Local_289[iParam0 /*22*/]);
			unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
			func_128(iParam0);
			Local_289[iParam0 /*22*/].f_12 = 0x00000003;
			Local_289[iParam0 /*22*/].f_14 = 0x00000007;
		}
	}
}

void func_128(int iParam0)
{
	char* sVar0;
	
	if ((iLocal_40 != 0x00000002 && !iLocal_464) && !unk_0x437347B10A200C4B(Local_289[iParam0 /*22*/], 0x00000000))
	{
		if (func_133(iParam0) && func_131(Local_289[iParam0 /*22*/], 30f))
		{
			if (iParam0 == 0x00000000)
			{
				sVar0 = "S_M_Y_COP_01_WHITE_MINI_03";
			}
			else if (iParam0 == 0x00000001)
			{
				sVar0 = "S_M_Y_COP_01_BLACK_MINI_04";
			}
			else if (iParam0 == 0x00000002)
			{
				sVar0 = "PRA_COPSARR3";
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000003))
			{
				iLocal_464 = 0x00000001;
			}
			else if (!func_124(iParam0, 0x0000000F) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 362.6359f, -1581.256f, 31.54774f, 358.1074f, -1586.615f, 34.29774f, 2f, 0x00000000, 0x00000001, 0x00000000))
			{
				func_129();
				iLocal_461 = 0x00000000;
				if (iParam0 == 0x00000002)
				{
					func_121(&uLocal_294, cLocal_293, sVar0, 0x00000007, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0xEB0A515D699A7E90(Local_289[iParam0 /*22*/], "ARREST_PLAYER", sVar0, "SPEECH_PARAMS_FORCE", 0x00000000);
				}
				iLocal_464 = 0x00000001;
			}
		}
	}
}

void func_129()
{
	Global_4CD7 = 0x00000000;
	func_130();
}

void func_130()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_131(int iParam0, float fParam1)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	if (func_377(unk_0x16F2683693E537C9()) && func_377(iParam0))
	{
		if (func_132(unk_0x16F2683693E537C9(), iParam0, 0x00000000) <= fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_132(int iParam0, int iParam1, bool bParam2)
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

bool func_133(int iParam0)
{
	return Local_289[iParam0 /*22*/].f_12 > 0x00000001;
}

void func_134(int iParam0)
{
	var uVar0;
	
	if (Local_289[iParam0 /*22*/].f_12 != 0x00000001 && !func_78(Local_289[iParam0 /*22*/], 0x0E763797))
	{
		unk_0xA3BF0AA5A2608191(Local_289[iParam0 /*22*/]);
		unk_0x6DF7BF67E86AAE86(Local_289[iParam0 /*22*/], iLocal_292);
		if (iParam0 == 0x00000002)
		{
			unk_0xDD353D0E9C789D0E(&uVar0);
			if (!func_63(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f))
			{
				unk_0x96167B03C5A77156(0x00000000, Local_289[iParam0 /*22*/].f_1, 1f, 0x0001D4C0, 0.25f, 0x00000000, Local_289[iParam0 /*22*/].f_4);
			}
			else
			{
				unk_0xE655C47E46F9A7E4(0x00000000, Local_289[iParam0 /*22*/].f_4, 0x00000000);
			}
			if (iLocal_459[0x00000002] && unk_0xEA6BC48857E0AC4C("sResumeRoot"))
			{
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
			}
			else
			{
				unk_0x8D4C354BB8991817(0x00000000, 0x00000001, 0x00000001);
			}
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(Local_289[iParam0 /*22*/], uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002))
			{
				case 0x00000000:
					unk_0xDD353D0E9C789D0E(&uVar0);
					if (!func_63(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f))
					{
						unk_0x96167B03C5A77156(0x00000000, Local_289[iParam0 /*22*/].f_1, 1f, 0x0001D4C0, 0.25f, 0x00000000, Local_289[iParam0 /*22*/].f_4);
					}
					else
					{
						unk_0xE655C47E46F9A7E4(0x00000000, Local_289[iParam0 /*22*/].f_4, 0x00000000);
					}
					unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_HANG_OUT_STREET", 0x00000000, 0x00000001);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(Local_289[iParam0 /*22*/], uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					break;
				
				case 0x00000001:
					unk_0xDD353D0E9C789D0E(&uVar0);
					if (!func_63(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 3f))
					{
						unk_0x96167B03C5A77156(0x00000000, Local_289[iParam0 /*22*/].f_1, 1f, 0x0001D4C0, 0.25f, 0x00000000, Local_289[iParam0 /*22*/].f_4);
					}
					else
					{
						unk_0xE655C47E46F9A7E4(0x00000000, Local_289[iParam0 /*22*/].f_4, 0x00000000);
					}
					unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(Local_289[iParam0 /*22*/], uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					break;
				}
		}
		func_135();
		unk_0x11AD11297DC58CC7(Local_289[iParam0 /*22*/], 0x00000000);
		Local_289[iParam0 /*22*/].f_12 = 0x00000001;
		Local_289[iParam0 /*22*/].f_15 = 0x00000000;
		Local_289[iParam0 /*22*/].f_13 = 0x00000000;
		Local_289[iParam0 /*22*/].f_14 = 0x00000000;
	}
}

void func_135()
{
	if (func_12(&uLocal_46, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
	{
		if (!func_103())
		{
			if ((!unk_0x7F8A39872A07D2CE(&cLocal_471, "NONE") && !unk_0x7F8A39872A07D2CE(&cLocal_475, "NONE")) && !func_66("PR_TAKBACK", 0x00000000, 0x00000000))
			{
				if (func_136(&uLocal_294, cLocal_293, &cLocal_471, &cLocal_475, 0x00000007, 0x00000000, 0x00000000))
				{
					StringCopy(&cLocal_471, "NONE", 24);
					StringCopy(&cLocal_475, "NONE", 24);
					iLocal_461 = 0x00000001;
				}
			}
		}
	}
}

bool func_136(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_137(sParam2, iParam4, 0x00000000);
}

int func_137(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_148(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_147();
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
				func_146();
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
				if (func_145())
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
			if (func_47())
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
			func_144();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_143();
		func_138();
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
		func_54();
	}
	return 0x00000000;
}

void func_138()
{
	if (!func_139())
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

int func_139()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_142())
	{
		return 0x00000000;
	}
	if (func_140(unk_0xD803B885F5E47A62()))
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

bool func_140(int iParam0)
{
	return func_141(iParam0, 0x00000014);
}

bool func_141(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_142()
{
	return 0xFFFFFFFF;
}

void func_143()
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

void func_144()
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

int func_145()
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

void func_146()
{
	if (func_24(0x0000000E))
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
		Global_4C1E = func_22();
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

void func_147()
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

bool func_148(int iParam0, int iParam1)
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

int func_149(int iParam0)
{
	if (Local_289[func_150(iParam0) /*22*/].f_12 > 0x00000001 && Local_289[func_150(iParam0) /*22*/].f_14 != 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 == 0x00000000)
	{
		iVar0 = 0x00000001;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	return iVar0;
}

void func_151(int iParam0)
{
	switch (Local_289[iParam0 /*22*/].f_15)
	{
		case 0x00000000:
			if (func_103())
			{
				if (unk_0x9E834FAC6CCB49FB(Local_289[iParam0 /*22*/]))
				{
					func_129();
				}
			}
			else if (iParam0 == 0x00000002)
			{
				if (iLocal_459[0x00000002] && !unk_0x82FE7F11C00330B0(Local_289[iParam0 /*22*/]))
				{
					unk_0xA3BF0AA5A2608191(Local_289[iParam0 /*22*/]);
					unk_0x509B8296EBA9B408(Local_289[iParam0 /*22*/], "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
				}
			}
			break;
		
		case 0x00000001:
			break;
	}
}

void func_152(int iParam0)
{
	func_174(iParam0);
	if (!func_173(iParam0))
	{
		if (func_154(Local_289[iParam0 /*22*/], 0x00000001, 50f, 140f, 0x00000000, 0x00000001, 0x00000001, 0x00000001) || unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(Local_289[iParam0 /*22*/], 0x00000001), 100f))
		{
			if ((!unk_0x9E834FAC6CCB49FB(Local_289[iParam0 /*22*/]) && !unk_0xC021B60D52071374(Local_289[iParam0 /*22*/])) && !unk_0xFEAA79CCC9861C2B(Local_289[iParam0 /*22*/]))
			{
				func_125();
			}
			else if (!bLocal_274)
			{
				unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000029);
				unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000021);
				unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x0000000C);
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
	}
	else if (func_153(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 5f, 0x00000001))
	{
		if (!bLocal_274)
		{
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000029);
			unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000021);
		}
	}
}

bool func_153(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

int func_154(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_6(unk_0x16F2683693E537C9()) && func_6(iParam0))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (func_168(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return func_167(unk_0x16F2683693E537C9(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0x00000000;
		}
		else if (func_155(iParam0, fParam3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_155(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_6(unk_0x16F2683693E537C9()) && func_6(iParam0))
	{
		if (func_166(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
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
				if (func_156(iParam0, fParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

bool func_156(int iParam0, float fParam1)
{
	return func_157(iParam0, unk_0x16F2683693E537C9(), fParam1, 0x00000001, 0x000000FA, 0x00000007);
}

bool func_157(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_165(iParam0, iParam1);
	if (!func_6(iParam0) || !func_6(iParam1))
	{
		if (iVar2 != 0xFFFFFFFF)
		{
			func_164(&(Local_38[iVar2 /*4*/]));
		}
		return 0x00000000;
	}
	if (!func_161(iParam0, iParam1, fParam2, iParam3))
	{
		return 0x00000000;
	}
	if (iVar2 == 0xFFFFFFFF)
	{
		iVar2 = func_160();
		if (iVar2 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f) };
	uVar0 = func_158(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_158(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0x00000000;
	if (!func_6(iParam2))
	{
		*uParam0 = 0x00000000;
		return 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		vVar1 = { func_159(iParam2, iParam5) };
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
		func_6(iVar3);
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
		func_6(iVar3);
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

Vector3 func_159(int iParam0, int iParam1)
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

int func_160()
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

int func_161(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_163(unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
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
		vVar1 = { func_163(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_162(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_162(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_163(vector3 vParam0)
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

void func_164(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

int func_165(int iParam0, int iParam1)
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

int func_166(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_167(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x08D89CE2E20AE305(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) - unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_168(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_6(unk_0x16F2683693E537C9()) && func_6(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 0x00000001);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			iVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_172(iParam0, bParam1, iVar0, fVar1))
			{
				return 0x00000001;
			}
			if (func_169(iParam0, fVar1, bParam3, bParam4))
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
				if (func_172(iParam0, bParam1, iVar0, fVar1))
				{
					return 0x00000001;
				}
			}
			if (func_169(iParam0, fVar1, bParam3, bParam4))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_169(int iParam0, float fParam1, bool bParam2, bool bParam3)
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
				if (func_170(iParam0, fParam1))
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
			if (func_170(iParam0, fParam1))
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

int func_170(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0x00000000) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0x00000000)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0x00000000))
	{
		if (func_171(iParam0, vVar1, 90f, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_171(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_163(vParam1 - unk_0x68F4C0EC296D3901(iParam0, 0x00000001)) };
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
		vVar1 = { func_163(unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 0x0000796E, 0f, 0f, 0f)) };
	}
	fVar2 = func_162(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_172(int iParam0, bool bParam1, int iParam2, float fParam3)
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

int func_173(int iParam0)
{
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(Local_289[iParam0 /*22*/], 0f, -2f, 0f), 2f, 3f, 2f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_174(int iParam0)
{
	func_194(iParam0);
	func_190(iParam0);
	func_187(iParam0);
	func_184(iParam0);
	if (Local_289[iParam0 /*22*/].f_14 != 0x00000007 || Local_289[iParam0 /*22*/].f_14 != 0x00000006)
	{
		if (((!bLocal_272 && !unk_0x9E834FAC6CCB49FB(Local_289[iParam0 /*22*/])) && !unk_0xC021B60D52071374(Local_289[iParam0 /*22*/])) && !unk_0xFEAA79CCC9861C2B(Local_289[iParam0 /*22*/]))
		{
			func_175(iParam0);
		}
	}
}

void func_175(int iParam0)
{
	int iVar0;
	
	if ((((!func_149(iParam0) && Local_289[iParam0 /*22*/].f_14 != 0x00000007) && Local_289[iParam0 /*22*/].f_14 != 0x00000006) && !bLocal_274) && Local_289[iParam0 /*22*/].f_11)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, iVar0))
			{
				func_176(iParam0, iVar0);
				Local_289[iParam0 /*22*/].f_11 = 0x00000000;
				return;
			}
			iVar0++;
		}
	}
}

void func_176(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			func_127(iParam0);
			func_125();
			break;
		
		case 0x00000002:
			func_182(iParam0, 0x00000006, 0x00000000);
			break;
		
		case 0x00000003:
			func_127(iParam0);
			func_125();
			break;
		
		case 0x00000004:
			func_127(iParam0);
			func_125();
			break;
		
		case 0x00000001:
			func_127(iParam0);
			func_125();
			break;
		
		case 0x00000006:
			func_182(iParam0, 0x00000002, 0x00000000);
			break;
		
		case 0x00000005:
			func_182(iParam0, 0x00000005, 0x00000000);
			break;
		
		case 0x00000008:
			if (iLocal_278 < 0x00000002)
			{
				func_177(iParam0, 0x00000003, 0x00000000);
			}
			else
			{
				func_127(iParam0);
				func_125();
			}
			break;
		
		case 0x00000007:
			func_177(iParam0, 0x00000004, 0x00000000);
			break;
		
		case 0x0000000A:
			func_182(iParam0, 0x00000001, 0x00000000);
			break;
		
		case 0x0000000D:
			func_182(iParam0, 0x00000004, 0x00000000);
			break;
		
		case 0x0000000B:
			func_182(iParam0, 0x00000007, 0x00000000);
			break;
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	
	if (!func_149(iParam0) || iParam2)
	{
		if (iParam1 == 0x00000002)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_14 != 0x00000002)
			{
				if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_COPGUNW1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_COPGUNW2";
				}
				func_178(iParam0, sVar0, 0x00000000, 0x00000000);
				iLocal_277++;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_14 != 0x00000003 || (unk_0x1C0640BA9A7327B3() - iLocal_276) > 0x00001D4C)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000009))
				{
					if (iParam0 == 0x00000000)
					{
						sVar0 = "PRA_CWCAR1";
					}
					else if (iParam0 == 0x00000001)
					{
						sVar0 = "PRA_CWCAR2";
					}
				}
				else if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_CCWCAR1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_CCWCAR2";
				}
				if (iLocal_278 < 0x00000002)
				{
					func_178(iParam0, sVar0, 0x00000001, 0x00000000);
				}
				iLocal_278++;
			}
		}
		else if (iParam1 == 0x00000004)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_14 != 0x00000004 || (unk_0x1C0640BA9A7327B3() - iLocal_276) > 0x00001D4C)
			{
				if (!bLocal_273)
				{
					if (iParam0 == 0x00000000)
					{
						sVar0 = "PRA_CWCARNP1";
					}
					else if (iParam0 == 0x00000001)
					{
						sVar0 = "PRA_CWCARNP2";
					}
				}
				else if (!bLocal_272)
				{
					if (iParam0 == 0x00000000)
					{
						sVar0 = "PRA_CCWCNP1";
					}
					else if (iParam0 == 0x00000001)
					{
						sVar0 = "PRA_CCWCNP2";
					}
				}
				else if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_CWCARNP1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_CWCARNP2";
				}
				if (iLocal_278 < 0x00000002)
				{
					func_178(iParam0, sVar0, 0x00000001, 0x00000000);
				}
				iLocal_278++;
			}
		}
		else if (iParam1 == 0x00000005)
		{
			if (Local_289[func_150(iParam0) /*22*/].f_14 != 0x00000005)
			{
				if (iParam0 == 0x00000000)
				{
					sVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
					unk_0xEB0A515D699A7E90(Local_289[iParam0 /*22*/], "CHALLENGE_THREATEN", sVar1, "SPEECH_PARAMS_FORCE", 0x00000000);
				}
				else if (iParam0 == 0x00000001)
				{
					sVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
					unk_0xEB0A515D699A7E90(Local_289[iParam0 /*22*/], "CHALLENGE_THREATEN", sVar1, "SPEECH_PARAMS_FORCE", 0x00000000);
				}
				else if (iParam0 == 0x00000002)
				{
					sVar0 = "PRA_COPSARR3";
					func_178(iParam0, sVar0, 0x00000000, 0x00000000);
				}
			}
		}
		if (!func_78(Local_289[iParam0 /*22*/], 0xCBCE4595))
		{
			unk_0x2ECF845953E95D1B(Local_289[iParam0 /*22*/]);
			unk_0xF96A174EE26D7588(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 0x00000000);
		}
		Local_289[iParam0 /*22*/].f_E = unk_0x1C0640BA9A7327B3();
		Local_289[func_150(iParam0) /*22*/].f_E = unk_0x1C0640BA9A7327B3();
		Local_289[func_150(iParam0) /*22*/].f_12 = 0x00000003;
		Local_289[func_150(iParam0) /*22*/].f_14 = 0x00000001;
		Local_289[iParam0 /*22*/].f_12 = 0x00000003;
		Local_289[iParam0 /*22*/].f_14 = iParam1;
	}
}

void func_178(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	
	if (bParam3)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000C))
		{
			return;
		}
	}
	Var0 = { func_181() };
	if (unk_0xEA6BC48857E0AC4C(sParam1) || unk_0xEA6BC48857E0AC4C(&Var0))
	{
		func_121(&uLocal_294, cLocal_293, sParam1, 0x00000007, 0x00000000, 0x00000000);
		if (bParam2)
		{
			iLocal_276 = unk_0x1C0640BA9A7327B3();
		}
		return;
	}
	if ((!unk_0x7F8A39872A07D2CE(&Var0, sParam1) && !func_66("PR_TAKBACK", 0x00000000, 0x00000000)) && !func_66("PR_GOVEH", 0x00000000, 0x00000000))
	{
		func_179();
		func_121(&uLocal_294, cLocal_293, sParam1, 0x00000007, 0x00000000, 0x00000000);
		if (bParam2)
		{
			iLocal_276 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_179()
{
	struct<6> Var0;
	
	if (func_103())
	{
		Var0 = { func_181() };
		if (unk_0x7F8A39872A07D2CE(&Var0, "PRA_COPTLK1") || unk_0x7F8A39872A07D2CE(&Var0, "PRA_COPTLK2"))
		{
			cLocal_471 = { func_181() };
			cLocal_475 = { func_180() };
		}
		if (iLocal_461)
		{
			func_129();
			iLocal_461 = 0x00000000;
		}
		else
		{
			func_104();
		}
	}
}

struct<6> func_180()
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

struct<6> func_181()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	
	if (!func_149(iParam0) || iParam2)
	{
		if (iParam1 == 0x00000001)
		{
			if (Local_289[iParam0 /*22*/].f_13 != 0x00000001 || (unk_0x1C0640BA9A7327B3() - iLocal_276) > 0x00001D4C)
			{
				if (!bLocal_272)
				{
					if (iParam0 == 0x00000000)
					{
						sVar0 = "PRA_COPPRT1";
					}
					else if (iParam0 == 0x00000001)
					{
						sVar0 = "PRA_COPPRT2";
					}
				}
				else if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_CPLYCOP1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_CPLYCOP2";
				}
				else if (iParam0 == 0x00000002)
				{
					sVar0 = "PRA_CPLYCOP3";
				}
				func_178(iParam0, sVar0, 0x00000001, 0x00000001);
				func_183(iParam0, iParam1, 0x00000001);
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (Local_289[iParam0 /*22*/].f_13 != 0x00000002 || (unk_0x1C0640BA9A7327B3() - iLocal_276) > 0x00001D4C)
			{
				if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_COPPLY1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_COPPLY2";
				}
				func_178(iParam0, sVar0, 0x00000001, 0x00000001);
				func_183(iParam0, iParam1, 0x00000001);
			}
		}
		else if (iParam1 == 0x00000004)
		{
			if (Local_289[iParam0 /*22*/].f_13 != 0x00000004 || (unk_0x1C0640BA9A7327B3() - iLocal_276) > 0x00001D4C)
			{
				if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_COPST1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_COPST2";
				}
				func_178(iParam0, sVar0, 0x00000001, 0x00000000);
				func_183(iParam0, iParam1, 0x00000000);
			}
		}
		else if (iParam1 == 0x00000006)
		{
			if (Local_289[iParam0 /*22*/].f_13 != 0x00000006)
			{
				if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_COPGUNR1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_COPGUNR2";
				}
				func_178(iParam0, sVar0, 0x00000000, 0x00000001);
				func_183(iParam0, iParam1, 0x00000001);
			}
		}
		else if (iParam1 == 0x00000005)
		{
			if (Local_289[iParam0 /*22*/].f_13 != 0x00000005)
			{
				if (iParam0 == 0x00000000)
				{
					sVar1 = "S_M_Y_COP_01_WHITE_MINI_03";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar1 = "S_M_Y_COP_01_BLACK_MINI_04";
				}
				unk_0xEB0A515D699A7E90(Local_289[iParam0 /*22*/], "BUMP", sVar1, "SPEECH_PARAMS_FORCE", 0x00000000);
				func_183(iParam0, iParam1, 0x00000000);
			}
		}
		else if (iParam1 == 0x00000007)
		{
			if (Local_289[iParam0 /*22*/].f_13 != 0x00000007)
			{
				if (iParam0 == 0x00000000)
				{
					sVar0 = "PRA_CHP1";
				}
				else if (iParam0 == 0x00000001)
				{
					sVar0 = "PRA_CHP2";
				}
				else if (iParam0 == 0x00000002)
				{
					sVar0 = "PRA_CHP3";
				}
				func_178(iParam0, sVar0, 0x00000001, 0x00000000);
				func_183(iParam0, iParam1, 0x00000000);
			}
		}
		if (bLocal_272)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000C))
			{
				unk_0x5D96D8530B3D0904(&(Local_289[iParam0 /*22*/].f_F), 0x0000000C);
			}
		}
	}
}

void func_183(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000C))
		{
			return;
		}
	}
	if (!func_78(Local_289[iParam0 /*22*/], 0xCBCE4595))
	{
		unk_0x2ECF845953E95D1B(Local_289[iParam0 /*22*/]);
		unk_0xF96A174EE26D7588(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 0x00000000);
	}
	Local_289[iParam0 /*22*/].f_E = unk_0x1C0640BA9A7327B3();
	Local_289[func_150(iParam0) /*22*/].f_E = unk_0x1C0640BA9A7327B3();
	Local_289[func_150(iParam0) /*22*/].f_12 = 0x00000003;
	Local_289[func_150(iParam0) /*22*/].f_14 = 0x00000001;
	Local_289[iParam0 /*22*/].f_13 = iParam1;
	Local_289[iParam0 /*22*/].f_12 = 0x00000002;
}

void func_184(int iParam0)
{
	float fVar0;
	
	if ((!func_149(iParam0) && Local_289[iParam0 /*22*/].f_14 != 0x00000006) && Local_289[iParam0 /*22*/].f_14 != 0x00000007)
	{
		fVar0 = unk_0x2877A0CC456B25B0(unk_0xD803B885F5E47A62());
		if (iParam0 == 0x00000000 || iParam0 == 0x00000001)
		{
			if (!iLocal_282)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 340.0758f, -1598.255f, 28.29322f, 346.4939f, -1603.684f, 38.29278f, 6.22f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x92444005288A72ED(unk_0x16F2683693E537C9()) || unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9()))
					{
						iLocal_282 = 0x00000001;
						iLocal_281 = unk_0x1C0640BA9A7327B3();
						return;
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000B))
					{
						if ((((fVar0 > 16f && !Local_289[iParam0 /*22*/].f_10) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A)) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 344.4482f, -1603.473f, 28.29278f, 345.6222f, -1604.478f, 32.29278f, 3.46f, 0x00000000, 0x00000001, 0x00000000)) && unk_0x3D1053F9EB43B7AD(Local_289[iParam0 /*22*/], Local_255[0x00000001 /*7*/], Local_255[0x00000001 /*7*/].f_3, Local_255[0x00000001 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000))
						{
							func_186(iParam0, 0x0000000B);
							return;
						}
					}
				}
				if (((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_255[0x00000001 /*7*/], Local_255[0x00000001 /*7*/].f_3, Local_255[0x00000001 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(Local_289[iParam0 /*22*/], Local_255[0x00000001 /*7*/], Local_255[0x00000001 /*7*/].f_3, Local_255[0x00000001 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A)) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000B))
				{
					if ((fVar0 > 12f && !Local_289[iParam0 /*22*/].f_10) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 344.4482f, -1603.473f, 28.29278f, 345.6222f, -1604.478f, 32.29278f, 3.46f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_186(iParam0, 0x0000000B);
					}
				}
			}
			else if ((unk_0x1C0640BA9A7327B3() - iLocal_281) > 0x00000FA0)
			{
				iLocal_282 = 0x00000000;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_255[0x00000005 /*7*/], Local_255[0x00000005 /*7*/].f_3, Local_255[0x00000005 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(Local_289[iParam0 /*22*/], Local_255[0x00000005 /*7*/], Local_255[0x00000005 /*7*/].f_3, Local_255[0x00000005 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000))
		{
			if (fVar0 > 10f && !Local_289[iParam0 /*22*/].f_10)
			{
				func_186(iParam0, 0x0000000B);
			}
			else
			{
				func_185(iParam0, 0x0000000B);
			}
		}
	}
}

void func_185(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, iParam1))
	{
		unk_0x0674E58A79778E99(&(Local_289[iParam0 /*22*/].f_F), iParam1);
		Local_289[iParam0 /*22*/].f_11 = 0x00000001;
	}
}

void func_186(int iParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, iParam1))
	{
		unk_0x5D96D8530B3D0904(&(Local_289[iParam0 /*22*/].f_F), iParam1);
		Local_289[iParam0 /*22*/].f_11 = 0x00000001;
	}
}

void func_187(int iParam0)
{
	bool bVar0;
	
	if ((Local_289[iParam0 /*22*/].f_13 != 0x00000005 && Local_289[iParam0 /*22*/].f_14 != 0x00000006) && Local_289[iParam0 /*22*/].f_14 != 0x00000007)
	{
		bVar0 = 0x00000000;
		if (((func_153(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 5f, 0x00000001) && !unk_0x9E834FAC6CCB49FB(Local_289[iParam0 /*22*/])) && !unk_0xC021B60D52071374(Local_289[iParam0 /*22*/])) && !unk_0xFEAA79CCC9861C2B(Local_289[iParam0 /*22*/]))
		{
			if (func_189(iParam0, &bVar0) || func_188(iParam0))
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (bVar0)
					{
						func_186(iParam0, 0x00000003);
					}
					else if (iParam0 == 0x00000002)
					{
						func_186(iParam0, 0x00000003);
					}
					else
					{
						func_186(iParam0, 0x00000005);
					}
				}
				else
				{
					func_186(iParam0, 0x00000003);
				}
			}
		}
	}
	else if (!func_153(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 5.5f, 0x00000001))
	{
		func_185(iParam0, 0x00000005);
		func_185(iParam0, 0x00000003);
	}
}

int func_188(int iParam0)
{
	if (iParam0 == 0x00000002)
	{
		return 0x00000000;
	}
	if (Local_289[iParam0 /*22*/].f_14 != 0x00000007)
	{
		if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), unk_0x68E4ADDDDCD7BDDE(Local_289[iParam0 /*22*/], 1f, -1f, 0f), 1f, 1f, 2f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_189(int iParam0, int iParam1)
{
	if (unk_0x1B3D109B39CC2C89(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9()))
	{
		if (unk_0x869EFD0BC0868856(Local_289[iParam0 /*22*/]))
		{
			*iParam1 = 0x00000001;
		}
		else
		{
			*iParam1 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_190(int iParam0)
{
	int iVar0;
	
	if (Local_289[iParam0 /*22*/].f_14 != 0x00000006 && Local_289[iParam0 /*22*/].f_14 != 0x00000007)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000005)
		{
			if (Local_289[iParam0 /*22*/].f_10)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000C))
				{
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_255[iVar0 /*7*/], Local_255[iVar0 /*7*/].f_3, Local_255[iVar0 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000))
					{
						iLocal_282 = 0x00000001;
						iLocal_281 = unk_0x1C0640BA9A7327B3();
						if (iVar0 == 0x00000004)
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								func_193(iParam0, 0x00000004);
							}
							else
							{
								func_191(iParam0, 0x00000004);
							}
						}
						else
						{
							func_193(iParam0, iVar0);
						}
					}
					else
					{
						func_191(iParam0, iVar0);
					}
				}
			}
			else if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_255[iVar0 /*7*/], Local_255[iVar0 /*7*/].f_3, Local_255[iVar0 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000C))
			{
				func_191(iParam0, iVar0);
			}
			iVar0++;
		}
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_255[0x00000003 /*7*/], Local_255[0x00000003 /*7*/].f_3, Local_255[0x00000003 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000))
	{
		func_193(iParam0, 0x00000003);
	}
	else
	{
		func_191(iParam0, 0x00000003);
	}
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0x00000001:
			func_185(iParam0, 0x0000000A);
			break;
		
		case 0x00000002:
			func_185(iParam0, 0x00000006);
			break;
		
		case 0x00000000:
			if (!bLocal_274)
			{
				func_185(iParam0, 0x00000001);
			}
			break;
		
		case 0x00000003:
			func_185(iParam0, 0x0000000E);
			break;
		
		case 0x00000004:
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x728870EB733D12A1();
				if (func_7(iVar0))
				{
					if (func_192(unk_0x134B62B726CEC8E6(iVar0)))
					{
						bLocal_273 = 0x00000001;
					}
					else
					{
						bLocal_273 = 0x00000000;
					}
					if (!unk_0x3D1053F9EB43B7AD(iVar0, Local_255[0x00000004 /*7*/], Local_255[0x00000004 /*7*/].f_3, Local_255[0x00000004 /*7*/].f_6, 0x00000000, 0x00000001, 0x00000000))
					{
						func_185(iParam0, 0x00000008);
						func_185(iParam0, 0x00000007);
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000007))
					{
						func_186(iParam0, 0x00000007);
					}
				}
				else
				{
					func_185(iParam0, 0x00000008);
					func_185(iParam0, 0x00000007);
				}
			}
			break;
		
		case 0x00000005:
			func_185(iParam0, 0x00000004);
			break;
	}
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_193(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			if ((!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000006) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000009))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A))
				{
					func_186(iParam0, 0x0000000A);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000001))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000006))
				{
					func_186(iParam0, 0x00000006);
				}
			}
			break;
		
		case 0x00000000:
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000001))
			{
				func_186(iParam0, 0x00000001);
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000E))
			{
				func_186(iParam0, 0x0000000E);
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000008))
			{
				if (unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
				{
					unk_0x5D96D8530B3D0904(&(Local_289[iParam0 /*22*/].f_F), 0x00000009);
					func_186(iParam0, 0x00000008);
				}
				else
				{
					unk_0x0674E58A79778E99(&(Local_289[iParam0 /*22*/].f_F), 0x00000009);
					func_186(iParam0, 0x00000008);
				}
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000004))
			{
				if ((!unk_0x9E834FAC6CCB49FB(Local_289[iParam0 /*22*/]) && !unk_0xC021B60D52071374(Local_289[iParam0 /*22*/])) && !unk_0xFEAA79CCC9861C2B(Local_289[iParam0 /*22*/]))
				{
					func_186(iParam0, 0x00000004);
				}
			}
			break;
	}
}

void func_194(int iParam0)
{
	if (func_153(unk_0x16F2683693E537C9(), Local_289[iParam0 /*22*/], 30f, 0x00000001))
	{
		if (func_157(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 140f, 0x00000001, 0x000000FA, 0x00000007))
		{
			Local_289[iParam0 /*22*/].f_10 = 0x00000001;
		}
		else
		{
			Local_289[iParam0 /*22*/].f_10 = 0x00000000;
		}
	}
}

void func_195(int iParam0)
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

int func_196(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
		unk_0xF947FFD8DA795A7F(iParam0, iParam4);
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

void func_197()
{
	int iVar0;
	
	func_205();
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (Local_289[iVar0 /*22*/].f_12 != 0x00000003 && Local_289[iVar0 /*22*/].f_14 != 0x00000007)
		{
			func_196(Local_289[iVar0 /*22*/], &(Local_289[iVar0 /*22*/].f_6), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
		}
		else
		{
			func_195(&(Local_289[iVar0 /*22*/].f_6));
		}
		if (func_377(Local_289[iVar0 /*22*/]))
		{
			func_199(iVar0);
			switch (Local_289[iVar0 /*22*/].f_12)
			{
				case 0x00000000:
					break;
				
				case 0x00000001:
					func_151(iVar0);
					break;
				
				case 0x00000002:
					func_198(iVar0);
					break;
				
				case 0x00000003:
					func_120(iVar0);
					break;
			}
		}
		else
		{
			if (unk_0xC844350D5D58C99A(Local_289[iVar0 /*22*/]))
			{
				if (func_7(unk_0x728870EB733D12A1()))
				{
					if (unk_0xB87D13D0C064E9D1(Local_289[iVar0 /*22*/], unk_0x728870EB733D12A1(), 0x00000001))
					{
						unk_0xE910A68AA670B4AA(Local_289[iVar0 /*22*/]);
						func_125();
					}
				}
				if (unk_0xB87D13D0C064E9D1(Local_289[iVar0 /*22*/], unk_0x16F2683693E537C9(), 0x00000001))
				{
					unk_0xE910A68AA670B4AA(Local_289[iVar0 /*22*/]);
					func_125();
				}
				Local_289[iVar0 /*22*/].f_12 = 0x00000001;
				Local_289[iVar0 /*22*/].f_15 = 0x00000000;
			}
			func_34(&(Local_289[iVar0 /*22*/].f_6));
			func_208(&(Local_289[iVar0 /*22*/]), 0x00000001, 0x00000000, 0x00000001);
		}
		iVar0++;
	}
}

void func_198(int iParam0)
{
	char* sVar0;
	float fVar1;
	
	switch (Local_289[iParam0 /*22*/].f_13)
	{
		case 0x00000001:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000009C4, 0x00000BB8)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 362.6359f, -1581.256f, 31.54774f, 358.1074f, -1586.615f, 34.29774f, 2f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_127(iParam0);
					func_125();
					return;
				}
				if (func_124(iParam0, 0x0000000C))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					if ((unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000D) && (unk_0x1C0640BA9A7327B3() - iLocal_276) > 0x000009C4) && !iLocal_466)
					{
						if (iParam0 == 0x00000000)
						{
							sVar0 = "PRA_COPST1";
						}
						else if (iParam0 == 0x00000001)
						{
							sVar0 = "PRA_COPST2";
						}
						func_121(&uLocal_294, cLocal_293, sVar0, 0x00000007, 0x00000000, 0x00000000);
						unk_0x0674E58A79778E99(&(Local_289[iParam0 /*22*/].f_F), 0x0000000D);
						unk_0x0674E58A79778E99(&(Local_289[func_150(iParam0) /*22*/].f_F), 0x0000000D);
						iLocal_466 = 0x00000001;
					}
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000005DC, 0x000007D0)
			{
				if (func_124(iParam0, 0x0000000C))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000009C4, 0x00000BB8)
			{
				if (func_124(iParam0, 0x0000000C))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000009C4, 0x00000BB8)
			{
				if (!func_153(Local_289[iParam0 /*22*/], unk_0x16F2683693E537C9(), 1.5f, 0x00000001))
				{
					unk_0x0674E58A79778E99(&(Local_289[iParam0 /*22*/].f_F), 0x00000005);
				}
				if (func_124(iParam0, 0x0000000C))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
			}
			break;
		
		case 0x00000006:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x00001388, 0x00001770)
			{
				if (func_124(iParam0, 0x0000000C))
				{
					func_134(iParam0);
					return;
				}
				else if (iLocal_277 > 0x00000000)
				{
					func_127(iParam0);
					func_125();
				}
			}
			break;
		
		case 0x00000007:
			if (unk_0x1C0640BA9A7327B3() - Local_289[iParam0 /*22*/].f_E) > unk_0x09AC81E49EA267F7(0x000009C4, 0x00000BB8)
			{
				fVar1 = unk_0x2877A0CC456B25B0(unk_0xD803B885F5E47A62());
				if (((fVar1 < 12f && !Local_289[iParam0 /*22*/].f_10) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A)) && !func_78(Local_289[iParam0 /*22*/], 0xCBCE4595))
				{
					unk_0x0674E58A79778E99(&(Local_289[iParam0 /*22*/].f_F), 0x0000000B);
				}
				if (func_124(iParam0, 0x0000000C))
				{
					func_134(iParam0);
					return;
				}
				else
				{
					Local_289[iParam0 /*22*/].f_11 = 0x00000001;
				}
			}
			break;
	}
}

void func_199(int iParam0)
{
	func_200(iParam0);
	func_184(iParam0);
	func_175(iParam0);
}

void func_200(int iParam0)
{
	func_194(iParam0);
	func_203(iParam0);
	func_190(iParam0);
	if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000001))
	{
		if ((Local_289[iParam0 /*22*/].f_14 != 0x00000006 && Local_289[iParam0 /*22*/].f_14 != 0x00000007) && !bLocal_274)
		{
			if (!bLocal_272 && func_63(Local_289[iParam0 /*22*/], Local_289[iParam0 /*22*/].f_1, 6f))
			{
				func_202(iParam0);
			}
			func_187(iParam0);
			func_201(iParam0);
		}
	}
}

void func_201(int iParam0)
{
	bool bVar0;
	
	if (!iLocal_466)
	{
		bVar0 = unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9());
		if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000D))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A))
			{
				if (Local_289[iParam0 /*22*/].f_10)
				{
					if (bVar0)
					{
						func_186(iParam0, 0x0000000D);
					}
					else
					{
						func_185(iParam0, 0x0000000D);
					}
				}
			}
		}
		else if (func_133(iParam0))
		{
			if (bVar0)
			{
				if (!func_153(unk_0x16F2683693E537C9(), Local_289[iParam0 /*22*/], 10f, 0x00000001))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A) && !unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000006))
					{
						unk_0x0674E58A79778E99(&(Local_289[iParam0 /*22*/].f_F), 0x0000000D);
					}
				}
			}
			else
			{
				func_185(iParam0, 0x0000000D);
			}
		}
	}
}

void func_202(int iParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000004);
	if (Local_289[iParam0 /*22*/].f_14 != 0x00000006 && Local_289[iParam0 /*22*/].f_14 != 0x00000007)
	{
		if (func_153(unk_0x16F2683693E537C9(), Local_289[iParam0 /*22*/], 12f, 0x00000001))
		{
			if (bVar0)
			{
				if (Local_289[iParam0 /*22*/].f_10)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000002))
					{
						func_186(iParam0, 0x00000002);
					}
				}
			}
			else
			{
				func_185(iParam0, 0x00000002);
			}
		}
		else if (bVar0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x0000000A))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_289[iParam0 /*22*/].f_F, 0x00000002))
				{
					func_186(iParam0, 0x00000002);
				}
			}
			else
			{
				func_185(iParam0, 0x00000002);
			}
		}
		else
		{
			func_185(iParam0, 0x00000002);
		}
	}
}

void func_203(int iParam0)
{
	if (!func_173(iParam0))
	{
		if (bLocal_274)
		{
			func_125();
		}
		else if (func_154(Local_289[iParam0 /*22*/], 0x00000001, 70f, 150f, 0x00000000, 0x00000001, 0x00000000, 0x00000001) || unk_0x681F21BF9F7B449B(0xFFFFFFFF, unk_0x68F4C0EC296D3901(Local_289[iParam0 /*22*/], 0x00000001), 100f))
		{
			func_125();
		}
		else if (func_204(func_150(iParam0)))
		{
			func_125();
		}
	}
}

int func_204(int iParam0)
{
	float fVar0;
	
	if (func_377(Local_289[iParam0 /*22*/]))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			fVar0 = 20f;
		}
		else
		{
			fVar0 = 3f;
		}
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), Local_289[iParam0 /*22*/], fVar0, fVar0, fVar0, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_289[iParam0 /*22*/]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_289[iParam0 /*22*/]))
			{
				if (Local_289[iParam0 /*22*/].f_10)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_205()
{
	if ((Local_289[0x00000000 /*22*/].f_12 == 0x00000001 && Local_289[0x00000001 /*22*/].f_12 == 0x00000001) && Local_289[0x00000002 /*22*/].f_12 == 0x00000001)
	{
		if ((((func_377(Local_289[0x00000000 /*22*/]) && func_377(Local_289[0x00000001 /*22*/])) && func_12(&uLocal_46, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001))) && func_63(Local_289[0x00000000 /*22*/], Local_289[0x00000000 /*22*/].f_1, 3f)) && func_63(Local_289[0x00000001 /*22*/], Local_289[0x00000001 /*22*/].f_1, 3f))
		{
			if ((func_124(0x00000000, 0x0000000F) && func_124(0x00000001, 0x0000000F)) && !iLocal_459[iLocal_462])
			{
				if (func_206(0x00000000, &(iLocal_459[iLocal_462]), sLocal_460[iLocal_462], 10f, 0x00000004))
				{
					iLocal_462++;
					if (iLocal_462 == 0x00000002)
					{
						iLocal_462 = 0x00000000;
					}
					iLocal_461 = 0x00000001;
				}
			}
		}
		else if ((func_377(Local_289[0x00000002 /*22*/]) && func_12(&uLocal_98, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001))) && func_63(Local_289[0x00000002 /*22*/], Local_289[0x00000002 /*22*/].f_1, 3f))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_289[0x00000002 /*22*/].f_F, 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Local_289[0x00000002 /*22*/].f_F, 0x00000004))
			{
				if (func_206(0x00000000, &(iLocal_459[0x00000002]), "PRA_COPTLK3", 10f, 0x00000004))
				{
					iLocal_461 = 0x00000001;
				}
			}
		}
		else if (iLocal_461 && func_103())
		{
			func_53();
			iLocal_461 = 0x00000000;
		}
	}
}

bool func_206(int iParam0, var uParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!*uParam1)
	{
		if (!func_103() && unk_0x0F1CCD77290EE12F())
		{
			if (func_131(iParam0, fParam3) && !func_66("PR_TAKBACK", 0x00000000, 0x00000000))
			{
				*uParam1 = func_207(&uLocal_294, cLocal_293, sParam2, iParam4, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
	else if (!func_131(iParam0, fParam3))
	{
		func_104();
	}
	return *uParam1;
}

int func_207(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_122(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_137(sParam2, iParam3, 0x00000000);
}

void func_208(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_209()
{
	var uVar0;
	
	func_91(&Local_290, &uVar0, &iLocal_42, &iLocal_261, &iLocal_260, vLocal_266, 0x00000000, 0x00000000, 0x41000000);
	func_118();
	func_106();
	switch (iLocal_41)
	{
		case 0x00000000:
			if (func_71(iLocal_40, bLocal_28))
			{
				func_79(&iLocal_260, Local_290, 0x00000001);
				func_67("PR_GOVEH", &iLocal_259);
				unk_0xC92DB9682A650680("FHPRA_START");
				if (unk_0x76395FF5E8D5E643(Global_9E6A[0x0000000D /*31*/]))
				{
					unk_0xC9F68C22171478B8(Global_9E6A[0x0000000D /*31*/], 0x00000001);
				}
				iLocal_479 = 0x00000000;
				unk_0x8B4C4CA774181102(2f, 10f, 0x00000004);
				iLocal_41 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000003)
			{
				if (func_377(Local_289[0x00000002 /*22*/]))
				{
					if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 371.9393f, -1604.252f, 45.603f, 399.8371f, -1627.065f, 31.75287f, 32.73f, 0x00000000, 0x00000001, 0x00000002) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
						{
							unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000003, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						}
					}
				}
			}
			if ((unk_0x39E5E51C6E21A69B(unk_0x16F2683693E537C9()) && iLocal_479 == 0x00000000) && func_132(Local_290, unk_0x16F2683693E537C9(), 0x00000001) < 100f)
			{
				unk_0x8B4C4CA774181102(7f, 7f, 0x00000004);
				iLocal_479 = 0x00000001;
			}
			if (func_7(Local_290))
			{
				if ((iLocal_42 == 0x00000001 || iLocal_42 == 0x00000002) || iLocal_42 == 0x00000003)
				{
					unk_0x8B4C4CA774181102(10f, 6f, 0x00000004);
					iLocal_41 = 0x00000002;
				}
				if (bLocal_274)
				{
					if (func_12(&uLocal_150, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
					{
						unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
					}
				}
			}
			break;
		
		case 0x00000002:
			func_34(&iLocal_260);
			func_99(0x00000000);
			break;
		
		case 0x00000003:
			if (func_7(Local_290))
			{
				unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_290, 0xFFFFFFFF);
			}
			func_36(0x00000001, 0x00000001, 0x00000001);
			iLocal_41 = 0x00000001;
			break;
	}
}

void func_210()
{
	switch (iLocal_41)
	{
		case 0x00000000:
			if (func_71(iLocal_40, 0x00000000))
			{
				func_361(0x0000004E);
				unk_0x34D79252800B23FF(0x00000001);
				unk_0x51B096AAC60548C1(0.5f);
				unk_0x745CE398A4B0A3C6(369.0115f, -1609.116f, 28.2928f, 5f, 0x00000000);
				unk_0x745CE398A4B0A3C6(Local_289[0x00000000 /*22*/].f_1, 5f, 0x00000000);
				if (func_273(unk_0x16F2683693E537C9(), 0x0000000C, 0x00000004) || func_273(unk_0x16F2683693E537C9(), 0x0000000C, 0x00000003))
				{
					bLocal_272 = 0x00000001;
				}
				func_224();
				func_222(0x0000004E);
				if (func_379())
				{
					func_219(0x00000000, 0xFFFFFFFF, 0x00000001);
					func_37(0x000001F4, 0x00000001);
					iLocal_41 = 0x00000002;
				}
				else
				{
					if (func_30(0x00000000))
					{
						func_74(unk_0x16F2683693E537C9(), 408.3364f, -1567.429f, 28.2723f, 128.2512f);
						func_211(408.3364f, -1567.429f, 28.2723f, 50f, 0x0000000C, 0x00001388, 0x00000000, 0x00000000);
						func_37(0x000001F4, 0x00000001);
					}
					iLocal_41 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			func_99(0x00000000);
			break;
	}
}

void func_211(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
				func_213(0x00000000);
			}
			if (bParam4)
			{
				func_212();
			}
			SYSTEM::WAIT(0x00000000);
		}
		if (unk_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		unk_0x51F8DBE54C75AE47(uVar0);
	}
}

void func_212()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_213(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_217(0x00000000))
		{
			func_214(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_214(int iParam0)
{
	if (func_218())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_216())
		{
			func_215(0x00000001, 0x00000001);
		}
		else
		{
			func_215(0x00000000, 0x00000000);
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
	if (!func_47())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_215(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_217(0x00000000))
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

bool func_216()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_217(int iParam0)
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

bool func_218()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_219(int iParam0, int iParam1, int iParam2)
{
	if (func_379() && func_221())
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
		func_220(0x00000000);
	}
}

void func_220(int iParam0)
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

bool func_221()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_222(int iParam0)
{
	Global_17187 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000048:
			func_223(0x00000002);
			func_223(0x00000004);
			break;
		
		case 0x00000049:
			func_223(0x00000000);
			func_223(0x00000001);
			func_223(0x00000007);
			break;
		
		case 0x0000005C:
			func_223(0x0000000A);
			func_223(0x00000009);
			func_223(0x0000000D);
			func_223(0x00000006);
			break;
		
		case 0x00000044:
			func_223(0x0000000B);
			break;
		
		case 0x0000004E:
			func_223(0x0000000E);
			break;
		
		case 0x0000004F:
			func_223(0x00000003);
			break;
		
		default:
			break;
	}
}

void func_223(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_17187, iParam0);
}

void func_224()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			func_225(iVar0, unk_0x68F4C0EC296D3901(iVar0, 0x00000001), unk_0xD9522BA9E27E1349(iVar0), 0x00000018, 0x00000000);
		}
	}
}

void func_225(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_272(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_267(iParam0, &Var0);
		if (func_11(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_260(iParam3, &Var0, vParam1, fParam2, func_266(iParam0));
		func_226(iParam3, iParam0, 0x00000000);
	}
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_257(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_246();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_245(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_227(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_227(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_228(iParam0))
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
	func_267(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_228(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_243(iParam0, 0x00000000, 0x00000000)) || func_243(iParam0, 0x00000001, 0x00000000)) || func_243(iParam0, 0x00000002, 0x00000000)) || func_266(iParam0) != 0x00000091) || func_242(iParam0)) || func_241(iParam0)) || func_240(iParam0)) || func_239(iParam0)) || !func_229(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_241(iParam0))
		{
		}
		if (func_241(iParam0))
		{
		}
		if (func_243(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_243(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_243(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_266(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_229(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_230(iParam0, 0x00000000))
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

int func_230(int iParam0, bool bParam1)
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
		if (!func_238())
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
		if ((((!func_237() && !func_236()) && !func_235()) && !func_234()) && !func_238())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_235())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_233(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_231(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_231(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_232())
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

int func_232()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_233(int iParam0)
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

int func_234()
{
	return 0x00000000;
}

int func_235()
{
	return 0x00000001;
}

int func_236()
{
	return 0x00000001;
}

int func_237()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_238()
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

int func_239(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_230(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_240(int iParam0)
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

int func_241(int iParam0)
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

int func_242(int iParam0)
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

int func_243(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_244(iParam1, iVar0, &sVar1, &iVar2))
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

int func_244(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_245(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

var func_246()
{
	var uVar0;
	
	func_256(&uVar0, unk_0x4460E481B9E33ADA());
	func_255(&uVar0, unk_0x8D199E381D262EEF());
	func_254(&uVar0, unk_0xD8A54335F18763BA());
	func_249(&uVar0, unk_0x972A296334C9D57B());
	func_248(&uVar0, unk_0x118229AD063C3C1D());
	func_247(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_247(var uParam0, int iParam1)
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

void func_248(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_253(*uParam0);
	iVar1 = func_251(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_250(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_250(int iParam0, int iParam1)
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

var func_251(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_252(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_252(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_253(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_254(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_257(var uParam0, int iParam1)
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
			uParam0->f_4 = func_258(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_258(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_258(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_258(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_258(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_258(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_258(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_258(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_258(0x00000002, 0x00000001);
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
			if (func_238())
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
			if (func_238())
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
		if (!func_11(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_11(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_11(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_258(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_259(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_259(int iParam0, var uParam1, int iParam2)
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

void func_260(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_257(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_265(iParam0);
			func_264(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_261(iParam0, 0x00000001);
		}
	}
}

void func_261(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_263(iParam0, 0x00000000))
		{
			func_262(iParam0, 0x00000001, 0x00000000);
			func_262(iParam0, 0x00000002, 0x00000000);
			func_262(iParam0, 0x00000003, 0x00000000);
			func_262(iParam0, 0x00000004, 0x00000000);
			func_262(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_262(iParam0, 0x00000000, 0x00000000);
	}
}

void func_262(int iParam0, int iParam1, bool bParam2)
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

bool func_263(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_264(var uParam0, var uParam1)
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

void func_265(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_257(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_261(iParam0, 0x00000000);
		}
	}
}

int func_266(int iParam0)
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

void func_267(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_271(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_270(uParam1->f_42))
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
		func_269(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_268(iVar0 + 1));
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

int func_268(int iParam0)
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

int func_269(int iParam0, var uParam1, var uParam2)
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

int func_270(int iParam0)
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

void func_271(var uParam0)
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

void func_272(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_265(iParam0);
	func_261(iParam0, 0x00000000);
}

int func_273(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_12A92[0x00000001 /*14*/] = { func_293(iVar0, iParam1, iParam2, 0xFFFFFFFF) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000000C)
	{
		uVar5 = { func_289(iVar0, iParam2) };
		iVar2 = 0x00000000;
		while (iVar2 <= 0x0000000E)
		{
			if ((uVar5[iVar2] != 0xFFFFFF9D && iVar2 != 0x0000000C) && iVar2 != 0x0000000E)
			{
				if (!func_273(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 0x0000000D)
					{
						uVar6 = { func_285(iVar0, uVar5[iVar2]) };
						iVar3 = 0x00000000;
						while (iVar3 <= 0x00000008)
						{
							if (!func_273(iParam0, 0x0000000E, uVar6[iVar3]))
							{
								iVar4 = 0x00000000;
								while (iVar4 <= 0x00000013)
								{
									Global_12A92[0x00000002 /*14*/] = { func_293(iVar0, 0x0000000E, iVar4, 0xFFFFFFFF) };
									if (Global_12A92[0x00000002 /*14*/].f_C == iVar3)
									{
										if (func_273(iParam0, 0x0000000E, iVar4))
										{
											if (!func_277(iVar0, iParam2, 0x0000000E, iVar4, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
											{
												return 0x00000000;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_275(iParam0, iVar2);
						Global_12A92[0x00000002 /*14*/] = { func_293(iVar0, iVar2, iVar1, 0xFFFFFFFF) };
						if (!func_277(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
						{
							return 0x00000000;
						}
					}
				}
			}
			iVar2++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar8 = { func_285(iVar0, iParam2) };
		iVar7 = 0x00000000;
		while (iVar7 <= 0x00000008)
		{
			if (!func_273(iParam0, 0x0000000E, uVar8[iVar7]))
			{
				return 0x00000000;
			}
			iVar7++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000E)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_4 || Global_12A92[0x00000001 /*14*/].f_3 == 0xFFFFFFFF))
		{
			return 0x00000001;
		}
	}
	else if (Global_12A92[0x00000001 /*14*/].f_3 == unk_0x36C584991B4C183F(iParam0, func_274(iParam1)) && Global_12A92[0x00000001 /*14*/].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_274(iParam1)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
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
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 0x0000000C || iParam1 == 0x0000000D) || iParam1 == 0x0000000E) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = func_274(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_276(iParam0, iVar1, iVar2, iParam1);
}

int func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_274(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0x00000000;
	while (iVar3 <= (iVar1 - 0x00000001))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0x00000000;
			while (iVar4 <= (iVar5 - 0x00000001))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 0xFFFFFF9D;
}

int func_277(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 0x00000001;
	}
	if (((*uParam4)[iParam2] == 0xFFFFFF9D && iParam2 != 0x0000000E) && iParam2 != 0x0000000D)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000D || (iParam2 == 0x0000000E && (*uParam4)[0x0000000D] == 0x0000001F))
	{
		if ((((((((iParam3 == 0x00000000 || iParam3 == 0x00000001) || iParam3 == 0x00000002) || iParam3 == 0x00000003) || iParam3 == 0x00000004) || iParam3 == 0x00000005) || iParam3 == 0x00000006) || iParam3 == 0x00000007) || iParam3 == 0x00000008)
		{
			return 0x00000001;
		}
	}
	if (iParam3 == 0xFFFFFF9D || uParam5->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000E)
	{
		uVar0 = { func_285(iParam0, (*uParam4)[0x0000000D]) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 0x00000001;
			}
			iVar1++;
		}
	}
	if (func_284(iParam0, iParam2, iParam3))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_283(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_282(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_278(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_283(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_282(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				if (iParam2 == 0x00000008)
				{
					if (iParam3 == 0x00000009)
					{
						if (iParam1 == 0x00000008 || iParam1 == 0x00000015)
						{
							return 0x00000001;
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
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000001A)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x00000005 && iParam3 <= 0x0000000A)
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam2 == 0x0000000E)
			{
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x0000001A && iParam3 <= 0x00000027)
					{
						return 0x00000000;
					}
				}
			}
			return 0x00000001;
		}
		else if (func_278(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000003 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (iParam2 == 0x0000000E)
		{
			if (iParam3 >= 0x0000009F && iParam3 <= 0x000000AE)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x0000000E && iParam3 == 0x00000000)
			{
				return 0x00000001;
			}
		}
		if (func_283(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_282(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000000F)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_278(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_278(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 == 0x00000010)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 == 0x00000028 || (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)) || (iParam2 >= 0x00000040 && iParam2 <= 0x0000004F))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 >= 0x00000011 && iParam2 <= 0x00000012) || (iParam2 >= 0x00000047 && iParam2 <= 0x00000056))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_279(iParam0, iParam2, 0x0000000E, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_279(iParam0, iParam2, 0x0000000E, 0x00000003), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_279(iParam0, iParam2, 0x00000001, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_279(iParam0, iParam2, 0x00000001, 0x00000003), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_279(iParam0, iParam2, 0x0000000E, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_279(iParam0, iParam2, 0x0000000E, 0x00000004), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_279(iParam0, iParam2, 0x00000001, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_279(iParam0, iParam2, 0x00000001, 0x00000004), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_279(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = (iParam1 - func_281(iParam0));
		if (iVar3 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		iVar4 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar4)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var5);
		iVar7 = 0x00000000;
		iVar8 = (iParam1 - func_280(iParam0, func_274(iParam2)));
		if (iVar8 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		if ((iParam0 == Global_12B0C.f_1A[iParam2] && iParam1 == Global_12B0C[iParam2]) && Global_12B0C.f_D[iParam2] != 0x00000000)
		{
			return Global_12B0C.f_D[iParam2];
		}
		iVar9 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_274(iParam2));
		iVar6 = 0x00000000;
		while (iVar6 < iVar9)
		{
			unk_0xC578687D5A643830(iVar6, &Var5);
			if (!unk_0x232048AB4B0E0259(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_12B0C.f_D[iParam2] = Var5.f_1;
					Global_12B0C[iParam2] = iParam1;
					Global_12B0C.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 0xFFFFFFFF;
}

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000006;
					break;
				
				case 0x00000003:
					return 0x000000B5;
					break;
				
				case 0x00000004:
					return 0x00000071;
					break;
				
				case 0x00000005:
					return 0x0000000E;
					break;
				
				case 0x00000006:
					return 0x00000063;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000018;
					break;
				
				case 0x00000009:
					return 0x00000014;
					break;
				
				case 0x0000000A:
					return 0x00000030;
					break;
				
				case 0x0000000B:
					return 0x0000002D;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000015;
					break;
				
				case 0x00000003:
					return 0x0000013E;
					break;
				
				case 0x00000004:
					return 0x00000075;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000086;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x0000004D;
					break;
				
				case 0x00000009:
					return 0x0000000C;
					break;
				
				case 0x0000000A:
					return 0x00000035;
					break;
				
				case 0x0000000B:
					return 0x0000003F;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000006;
					break;
				
				case 0x00000002:
					return 0x00000009;
					break;
				
				case 0x00000003:
					return 0x000000F2;
					break;
				
				case 0x00000004:
					return 0x00000068;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000054;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000012;
					break;
				
				case 0x00000009:
					return 0x00000011;
					break;
				
				case 0x0000000A:
					return 0x00000021;
					break;
				
				case 0x0000000B:
					return 0x00000001;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005B;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x0000005C;
					break;
				
				case 0x00000008:
					return 0x000000F1;
					break;
				
				case 0x00000009:
					return 0x0000002E;
					break;
				
				case 0x0000000A:
					return 0x00000007;
					break;
				
				case 0x0000000B:
					return 0x000000ED;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005C;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x00000037;
					break;
				
				case 0x00000008:
					return 0x00000088;
					break;
				
				case 0x00000009:
					return 0x00000024;
					break;
				
				case 0x0000000A:
					return 0x00000006;
					break;
				
				case 0x0000000B:
					return 0x00000100;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000071;
			break;
		
		case joaat("player_one"):
			return 0x000000AF;
			break;
		
		case joaat("player_two"):
			return 0x0000009B;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 0x00000147;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 0x00000147;
			break;
	}
	return 0xFFFFFF9D;
}

int func_282(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000006)
		{
			if (iParam2 == 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000009 || iParam2 == 0x00000007) || iParam2 == 0x00000017)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if ((((((((((((((((iParam2 == 0x0000000C || iParam2 == 0x0000003B) || iParam2 == 0x0000003C) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || iParam2 == 0x00000025) || iParam2 == 0x00000026) || iParam2 == 0x00000027) || iParam2 == 0x00000028) || iParam2 == 0x00000029) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C)) || iParam2 == 0x00000036) || iParam2 == 0x00000037)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x00000014)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000003 || iParam2 == 0x00000005) || iParam2 == 0x00000009)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000052 || iParam2 == 0x0000000A) || iParam2 == 0x0000001A) || iParam2 == 0x0000001B) || iParam2 == 0x0000001C) || iParam2 == 0x0000001D) || iParam2 == 0x0000001E) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || (iParam2 >= 0x00000025 && iParam2 <= 0x00000027))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000008)
		{
			if (iParam2 == 0x0000000E || iParam2 == 0x00000007)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (((iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)) || iParam2 == 0x0000000F) || iParam2 == 0x00000010)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000058 || iParam2 == 0x0000000C) || iParam2 == 0x0000002F) || iParam2 == 0x00000030) || iParam2 == 0x00000031) || iParam2 == 0x00000032) || iParam2 == 0x00000033) || iParam2 == 0x00000034) || iParam2 == 0x00000035) || iParam2 == 0x00000036) || iParam2 == 0x00000037) || iParam2 == 0x00000038) || iParam2 == 0x00000039) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_279(iParam0, iParam2, 0x00000001, 0x00000003);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_279(iParam0, iParam2, 0x00000001, 0x00000004);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_283(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x0000000E)
			{
				if ((((((((iParam2 == 0x0000003A || iParam2 == 0x0000003D) || (iParam2 >= 0x0000003E && iParam2 <= 0x00000045)) || (iParam2 >= 0x00000046 && iParam2 <= 0x0000004F)) || (iParam2 >= 0x00000050 && iParam2 <= 0x00000059)) || iParam2 == 0x0000005A) || (iParam2 >= 0x0000005B && iParam2 <= 0x00000066)) || (iParam2 >= 0x00000067 && iParam2 <= 0x0000006E)) || iParam2 == 0x0000006F)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((((iParam2 >= 0x00000053 && iParam2 <= 0x0000005C) || iParam2 == 0x0000005D) || iParam2 == 0x0000005E) || (iParam2 >= 0x0000005F && iParam2 <= 0x00000065)) || (iParam2 >= 0x00000066 && iParam2 <= 0x0000006F)) || (iParam2 >= 0x00000070 && iParam2 <= 0x00000079)) || (iParam2 >= 0x0000007A && iParam2 <= 0x00000083)) || (iParam2 >= 0x00000084 && iParam2 <= 0x0000008B)) || (iParam2 >= 0x0000008C && iParam2 <= 0x00000095)) || (iParam2 >= 0x00000096 && iParam2 <= 0x0000009C)) || iParam2 == 0x0000009D)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((iParam2 == 0x00000059 || (iParam2 >= 0x0000005A && iParam2 <= 0x00000063)) || (iParam2 >= 0x00000064 && iParam2 <= 0x0000006D)) || iParam2 == 0x0000006F) || iParam2 == 0x00000070) || (iParam2 >= 0x00000071 && iParam2 <= 0x0000007A)) || (iParam2 >= 0x0000007B && iParam2 <= 0x00000084)) || (iParam2 >= 0x00000085 && iParam2 <= 0x0000008E)) || (iParam2 >= 0x0000008F && iParam2 <= 0x00000098)) || iParam2 == 0x00000099)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_279(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_279(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
	}
	return 0x00000000;
}

int func_284(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x0000000F)
					{
						return 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000006)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000001 || iParam2 == 0x0000000A)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

struct<10> func_285(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 0x00000009;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_288(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_288(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_288(&Var1, 0x00000013, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_288(&Var1, 0x0000000E, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_288(&Var1, 0x00000012, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_288(&Var1, 0x00000000, 0x0000003B, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_288(&Var1, 0x00000000, 0x0000003C, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_288(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_288(&Var1, 0x00000000, 0x0000003C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_288(&Var1, 0x00000037, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_288(&Var1, 0x00000000, 0x00000001, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_286(&Var1, iParam0, iParam1, 0x0000000A);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_288(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_288(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_288(&Var1, 0x00000000, 0x00000052, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_288(&Var1, 0x00000000, 0x00000001, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_288(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_288(&Var1, 0x00000029, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_288(&Var1, 0x00000028, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_288(&Var1, 0x00000029, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_288(&Var1, 0x00000000, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_288(&Var1, 0x00000045, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_286(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_288(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_288(&Var1, 0x0000000B, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_288(&Var1, 0x00000011, 0x0000005A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_288(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_288(&Var1, 0x00000000, 0x00000058, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_288(&Var1, 0x00000000, 0x00000001, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_288(&Var1, 0x00000010, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_288(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_288(&Var1, 0x00000000, 0x0000007B, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_288(&Var1, 0x00000045, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_286(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_288(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_288(&Var1, 0x00000081, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_288(&Var1, 0x0000005A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_288(&Var1, 0x00000017, 0x000000FB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_288(&Var1, 0x00000024, 0x00000106, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_288(&Var1, 0x00000058, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_288(&Var1, 0x0000007D, 0x000000AF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_288(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_288(&Var1, 0x0000002C, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_288(&Var1, 0x00000034, 0x000000BD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_288(&Var1, 0x00000000, 0x00000105, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_288(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_288(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_288(&Var1, 0x00000000, 0x000000D4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_288(&Var1, 0x00000040, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_288(&Var1, 0x0000003D, 0x000000CF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_288(&Var1, 0x00000000, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_288(&Var1, 0x00000000, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_288(&Var1, 0x00000000, 0x000000E5, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_288(&Var1, 0x00000024, 0x000000F9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_288(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_288(&Var1, 0x00000000, 0x000000AE, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_288(&Var1, 0x00000023, 0x000000B4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_288(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_288(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000018:
					func_288(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_286(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_288(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_288(&Var1, 0x00000023, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_288(&Var1, 0x00000024, 0x000000B2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_288(&Var1, 0x00000035, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_288(&Var1, 0x00000026, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_288(&Var1, 0x00000025, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_288(&Var1, 0x00000071, 0x000000CB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_288(&Var1, 0x00000072, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_288(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_288(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_288(&Var1, 0x00000000, 0x000000C7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_288(&Var1, 0x00000000, 0x000000B6, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_288(&Var1, 0x00000000, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_288(&Var1, 0x0000006B, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_288(&Var1, 0x0000006D, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000143, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_288(&Var1, 0x00000077, 0x000000ED, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_288(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_288(&Var1, 0x00000072, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_288(&Var1, 0x00000023, 0x0000010C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_288(&Var1, 0x00000000, 0x0000010A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_288(&Var1, 0x0000002A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_288(&Var1, 0x0000004C, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_288(&Var1, 0x00000027, 0x000000EB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_288(&Var1, 0x00000029, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_288(&Var1, 0x0000006F, 0x000000C2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_286(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
	}
	return Var1;
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0x00000000 && iParam2 != 0xFFFFFF9D)
	{
		(*iParam0)[0x00000000] = 0x00000000;
		(*iParam0)[0x00000001] = 0x00000001;
		(*iParam0)[0x00000002] = 0x00000002;
		(*iParam0)[0x00000003] = 0x00000003;
		(*iParam0)[0x00000004] = 0x00000004;
		(*iParam0)[0x00000005] = 0x00000005;
		(*iParam0)[0x00000006] = 0x00000006;
		(*iParam0)[0x00000007] = 0x00000007;
		(*iParam0)[0x00000008] = 0x00000008;
		iVar0 = 0x00000000;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0x00000000;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 0x00000001;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 0x00000002;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 0x00000003;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 0x00000004;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar3 = 0x00000000;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar3, &vVar2) && vVar2.z != 0xFFFFFFFF)
				{
					if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
					{
						(*iParam0)[vVar2.z] = func_287(iParam1, vVar2.x, 0x0000000E, iVar0);
					}
					else if (vVar2.y != 0xFFFFFFFF)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar3)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_281(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var4);
		iVar6 = 0x00000000;
		iVar7 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_274(iParam2));
		iVar5 = 0x00000000;
		while (iVar5 < iVar7)
		{
			unk_0xC578687D5A643830(iVar5, &Var4);
			if (!unk_0x232048AB4B0E0259(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_280(iParam0, func_274(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 0xFFFFFF9D;
}

void func_288(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0x00000000] = iParam1;
	(*iParam0)[0x00000001] = iParam2;
	(*iParam0)[0x00000002] = iParam3;
	(*iParam0)[0x00000003] = iParam4;
	(*iParam0)[0x00000004] = iParam5;
	(*iParam0)[0x00000005] = iParam6;
	(*iParam0)[0x00000006] = iParam7;
	(*iParam0)[0x00000007] = iParam8;
	(*iParam0)[0x00000008] = iParam9;
}

struct<17> func_289(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 0x0000000F;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	Var1.f_10 = 0x00000000;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					if (Global_1B416.f_2378.f_63.f_3A[0x00000078])
					{
						func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					else
					{
						func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					break;
				
				case 0x00000001:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000010, 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000024, 0x00000015, 0x00000006, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000003:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000041, 0x00000024, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000004:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003D, 0x00000020, 0x00000006, 0x00000000, 0x00000000, 0x00000007, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000000], Global_1B416.f_936.f_21B.f_C8[0x00000000], 0x00000006, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000006:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005C, 0x00000048, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000008:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AB, 0x00000059, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x0000000B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000011, 0x0000000A, 0x00000004, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000017, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000045, 0x00000028, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003E, 0x00000021, 0x00000026, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000000F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003F, 0x00000022, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000004, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AE, 0x0000005D, 0x00000012, 0x00000000, 0x00000012, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004C, 0x0000002E, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x00000013:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000040, 0x00000023, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000042, 0x00000025, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000043, 0x00000026, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000044, 0x00000027, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B1, 0x0000005E, 0x00000013, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000004, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000081, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000001, 0x0000001F);
					break;
				
				case 0x00000020:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000037, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000056, 0x00000004, 0x00000014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000061, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000002, 0x0000001F);
					break;
				
				case 0x00000023:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000008, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000A, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000B, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000C, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000D, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000E, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000030:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005B, 0x00000047, 0x0000000E, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000031:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000032:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000009);
					break;
				
				case 0x00000033:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000034:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x00000048, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_290(&Var1, iParam0, iParam1, 0x00000035);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000049, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000016, 0x0000000A, 0x00000040, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x00000002:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000001], Global_1B416.f_936.f_21B.f_C8[0x00000001], 0x00000011, 0x00000002, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002D, 0x0000001F);
					break;
				
				case 0x00000003:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x0000000D, 0x00000005, 0x00000002, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000004:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x00000022, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_292(&Var1, 0xFFFFFF9D, 0x00000014, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000006:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000028, 0x0000000D, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005A, 0x00000020, 0x00000011, 0x00000001, 0x00000008, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000008:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000002, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x00000009:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000004, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000D0, 0x00000047, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000103, 0x0000000A, 0x00000023, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x0000000C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000012, 0x00000006, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x00000007, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000014, 0x00000008, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000015, 0x00000009, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000087, 0x00000028, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004A, 0x00000018, 0x00000034, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B0, 0x00000035, 0x0000001A, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000029, 0x0000001F);
					break;
				
				case 0x00000013:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A2, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004B, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000016:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E3, 0x00000035, 0x00000019, 0x00000000, 0x0000001B, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000019, 0x0000001F);
					break;
				
				case 0x00000017:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E4, 0x00000036, 0x00000019, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001A, 0x0000001F);
					break;
				
				case 0x00000018:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E5, 0x00000037, 0x00000019, 0x00000000, 0x0000001D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001B, 0x0000001F);
					break;
				
				case 0x00000019:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E6, 0x00000038, 0x00000019, 0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001C, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E7, 0x00000039, 0x00000019, 0x00000000, 0x0000001F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001D, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E8, 0x0000003A, 0x00000019, 0x00000000, 0x00000020, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001E, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E9, 0x0000003B, 0x00000019, 0x00000000, 0x00000021, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EA, 0x0000003C, 0x00000019, 0x00000000, 0x00000022, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000020, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EB, 0x0000003D, 0x00000019, 0x00000000, 0x00000023, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000021, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EC, 0x0000003E, 0x00000019, 0x00000000, 0x00000024, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000022, 0x0000001F);
					break;
				
				case 0x00000020:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000ED, 0x0000003F, 0x00000019, 0x00000000, 0x00000025, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000023, 0x0000001F);
					break;
				
				case 0x00000021:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EE, 0x00000040, 0x00000019, 0x00000000, 0x00000026, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000024, 0x0000001F);
					break;
				
				case 0x00000022:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EF, 0x00000041, 0x00000019, 0x00000000, 0x00000027, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000025, 0x0000001F);
					break;
				
				case 0x00000023:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F0, 0x00000042, 0x00000019, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000026, 0x0000001F);
					break;
				
				case 0x00000024:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x00000043, 0x00000019, 0x00000000, 0x00000029, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000027, 0x0000001F);
					break;
				
				case 0x00000025:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F2, 0x00000044, 0x00000019, 0x00000000, 0x0000002A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000028, 0x0000001F);
					break;
				
				case 0x00000026:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000104, 0x00000048, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007B, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000059, 0x00000016, 0x0000000F, 0x00000006, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000013D, 0x00000045, 0x00000011, 0x00000000, 0x00000000, 0x00000000, 0x00000033, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000002C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001E, 0x00000017, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000006A, 0x00000046, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x0000002E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000075, 0x00000018, 0x00000014, 0x00000005, 0x0000001A, 0x00000000, 0x00000034, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_290(&Var1, iParam0, iParam1, 0x0000002F);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x00000008, 0x00000002, 0x00000003, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000002:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002B, 0x00000008, 0x0000000C, 0x00000003, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000003:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000032, 0x0000000E, 0x00000008, 0x00000000, 0x0000000F, 0x00000006, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000004:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000002], Global_1B416.f_936.f_21B.f_C8[0x00000002], 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000005:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005F, 0x00000021, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x00000006:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000A, 0x00000004, 0x00000006, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000007:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000E, 0x00000004, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000008:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000035, 0x00000011, 0x0000000B, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000060, 0x00000051, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000033, 0x0000000F, 0x00000021, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005D, 0x0000001D, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000034, 0x00000010, 0x0000001E, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x0000005C, 0x00000010, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000022, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000009, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002D, 0x0000000A, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002E, 0x0000000B, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000013:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002F, 0x0000000C, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000035, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000002C, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000062, 0x00000000, 0x0000001C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x0000001F, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BE, 0x00000047, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BF, 0x00000048, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C0, 0x00000049, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C1, 0x0000004A, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C2, 0x0000004B, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C3, 0x0000004C, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C4, 0x0000004D, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C5, 0x0000004E, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000020:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C6, 0x0000004F, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C7, 0x00000050, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C8, 0x0000003E, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000023:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C9, 0x0000003F, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CA, 0x00000040, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CB, 0x00000041, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CC, 0x00000042, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CD, 0x00000043, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CE, 0x00000044, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x0000002B, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000037, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000034, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000046, 0x0000001E, 0x00000020, 0x00000006, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_290(&Var1, iParam0, iParam1, 0x00000030);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000000A, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007F, 0x00000026, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003E, 0x00000000);
					break;
				
				case 0x00000002:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x000000F8, 0x0000002D, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000090, 0x00000001);
					break;
				
				case 0x00000003:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000001F, 0x00000019, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000E7, 0x00000002);
					break;
				
				case 0x00000004:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x0000000A, 0xFFFFFF9D, 0x00000015, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000007B, 0x00000003);
					break;
				
				case 0x00000005:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000005D, 0x0000008D, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000072, 0x00000004);
					break;
				
				case 0x00000006:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000071, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000071, 0x00000005);
					break;
				
				case 0x00000007:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003D, 0x00000088, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003D, 0x00000006);
					break;
				
				case 0x00000008:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000070, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000007);
					break;
				
				case 0x00000009:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000083, 0x00000018, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000DF, 0x00000008);
					break;
				
				case 0x0000000A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000BC, 0xFFFFFF9D, 0x000000D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000009);
					break;
				
				case 0x0000000B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000A0, 0xFFFFFF9D, 0x000000D3, 0x00000000, 0x00000000, 0x00000000, 0x0000002B, 0x0000009D, 0x0000000A);
					break;
				
				case 0x0000000C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000A2, 0x000000AE, 0xFFFFFF9D, 0x000000C9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000009E, 0x0000000B);
					break;
				
				case 0x0000000D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000004, 0x000000F0, 0xFFFFFF9D, 0x00000022, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000061, 0x0000000C);
					break;
				
				case 0x0000000E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000080, 0x000000E8, 0xFFFFFF9D, 0x0000002B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000066, 0x0000000D);
					break;
				
				case 0x0000000F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x00000041, 0xFFFFFF9D, 0x000000E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x0000000E);
					break;
				
				case 0x00000010:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000041, 0x000000AC, 0xFFFFFF9D, 0x000000CA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x0000000F);
					break;
				
				case 0x00000011:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000042, 0x00000010);
					break;
				
				case 0x00000012:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000062, 0x00000050, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000057, 0x00000011);
					break;
				
				case 0x00000013:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x000000C0, 0x00000060, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000050, 0x00000012);
					break;
				
				case 0x00000014:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007C, 0x00000060, 0xFFFFFF9D, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006E, 0x00000013);
					break;
				
				case 0x00000015:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000050, 0x00000072, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000014);
					break;
				
				case 0x00000016:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x0000002B, 0x00000070, 0xFFFFFF9D, 0x00000052, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000030, 0x00000015);
					break;
				
				case 0x00000017:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000090, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000016);
					break;
				
				case 0x00000018:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003F, 0x00000026, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003F, 0x00000017);
					break;
				
				case 0x00000019:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000029, 0x00000018);
					break;
				
				default:
					func_290(&Var1, iParam0, iParam1, 0x0000001A);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000088, 0x000000F1, 0xFFFFFF9D, 0x0000002F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000015, 0x0000001F);
					break;
				
				case 0x00000002:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000001, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x000000D7, 0x00000000);
					break;
				
				case 0x00000003:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000049, 0x000000F1, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000019, 0x00000001);
					break;
				
				case 0x00000004:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000058, 0x000000D9, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000002);
					break;
				
				case 0x00000005:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000007, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000099, 0x00000003);
					break;
				
				case 0x00000006:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000008C, 0x000000F1, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000010, 0x00000004);
					break;
				
				case 0x00000007:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000008B, 0x00000070, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x0000004E, 0x00000005);
					break;
				
				case 0x00000008:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000C1, 0x00000030, 0xFFFFFF9D, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x00000006);
					break;
				
				case 0x00000009:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000072, 0x00000061, 0xFFFFFF9D, 0x00000067, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000062, 0x00000007);
					break;
				
				case 0x0000000A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000086, 0x000000EF, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000090, 0x00000008);
					break;
				
				case 0x0000000B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000098, 0x00000060, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000060, 0x00000009);
					break;
				
				case 0x0000000C:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000081, 0x00000001, 0xFFFFFF9D, 0x00000060, 0x00000000, 0x00000000, 0x00000000, 0x00000005, 0x00000078, 0x0000000A);
					break;
				
				case 0x0000000D:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000082, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000009F, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x000000D6, 0x0000000B);
					break;
				
				case 0x0000000F:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x000000E8, 0x000000D5, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x00000093, 0x0000000C);
					break;
				
				case 0x00000010:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000008, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000027, 0x0000000D);
					break;
				
				case 0x00000011:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000096, 0x000000EB, 0xFFFFFF9D, 0x0000006A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000080, 0x0000000E);
					break;
				
				case 0x00000012:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000060, 0x00000061, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000020, 0x00000072, 0x0000000F);
					break;
				
				case 0x00000013:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000030, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000059, 0x00000010);
					break;
				
				case 0x00000014:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000003E, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004E, 0x00000011);
					break;
				
				case 0x00000015:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000031, 0x00000041, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000050, 0x0000001F);
					break;
				
				case 0x00000016:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000014, 0x00000010, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x00000012);
					break;
				
				case 0x00000017:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000049, 0x000000B2, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000026, 0x0000000B, 0x00000013);
					break;
				
				case 0x00000018:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000087, 0x00000035, 0xFFFFFF9D, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x0000001D, 0x0000001B, 0x00000014);
					break;
				
				case 0x00000019:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x000000E9, 0x000000B0, 0xFFFFFF9D, 0x00000078, 0x00000000, 0x00000000, 0x00000000, 0x0000000B, 0x000000A0, 0x00000015);
					break;
				
				case 0x0000001A:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000022, 0x000000B3, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004D, 0x00000016);
					break;
				
				case 0x0000001B:
					func_292(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x00000083, 0x0000005D, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FA, 0x00000017);
					break;
				
				default:
					func_290(&Var1, iParam0, iParam1, 0x0000001C);
					break;
			}
			break;
	}
	return Var1;
}

void func_290(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0x00000000] = 0x00000000;
	(*uParam0)[0x00000002] = 0xFFFFFF9D;
	(*uParam0)[0x00000003] = 0x00000000;
	(*uParam0)[0x00000004] = 0x00000000;
	(*uParam0)[0x00000006] = 0x00000000;
	(*uParam0)[0x00000005] = 0x00000000;
	(*uParam0)[0x00000008] = 0x00000000;
	(*uParam0)[0x00000009] = 0x00000000;
	(*uParam0)[0x0000000A] = 0x00000000;
	(*uParam0)[0x00000001] = 0x00000000;
	(*uParam0)[0x00000007] = 0x00000000;
	(*uParam0)[0x0000000B] = 0x00000000;
	(*uParam0)[0x0000000D] = 0xFFFFFF9D;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
	uParam0->f_10 = 0x00000000;
	iVar0 = 0x00000000;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0x00000000;
		(*uParam0)[0x0000000D] = (0x0000000A + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 0x00000001;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 0x00000002;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 0x00000004;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0x00000000);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar4 = 0x00000000;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
				{
					if (vVar2.z == 0x0000000A)
					{
						unk_0x65C0659496B1CC14(&Var3);
						unk_0xFDEBA3FD0BF0D4AC(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 0x00000001;
						}
					}
					if (vVar2.z == 0x0000000A && uParam0->f_10)
					{
						(*uParam0)[func_291(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 0x00000001;
					}
					else
					{
						(*uParam0)[func_291(vVar2.z)] = func_287(iParam1, vVar2.x, func_291(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 0xFFFFFFFF)
				{
					(*uParam0)[func_291(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0x00000000)
		{
			(*uParam0)[0x0000000D] = 0xFFFFFF9D;
		}
		else
		{
			(*uParam0)[0x0000000D] = Var1.f_1;
		}
	}
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
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
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0x00000000] = iParam1;
	(*uParam0)[0x00000002] = iParam2;
	(*uParam0)[0x00000003] = iParam3;
	(*uParam0)[0x00000004] = iParam4;
	(*uParam0)[0x00000006] = iParam5;
	(*uParam0)[0x00000005] = iParam6;
	(*uParam0)[0x00000008] = iParam7;
	(*uParam0)[0x00000009] = iParam8;
	(*uParam0)[0x0000000A] = iParam9;
	(*uParam0)[0x00000001] = iParam10;
	(*uParam0)[0x00000007] = iParam11;
	(*uParam0)[0x0000000B] = iParam12;
	(*uParam0)[0x0000000D] = iParam13;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
}

struct<14> func_293(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_360();
	if (iParam0 == joaat("player_zero"))
	{
		func_342(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_323(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_294(iParam1, iParam2);
	}
	return Global_12A92[0x00000000 /*14*/];
}

void func_294(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_322(iParam1);
			break;
		
		case 0x00000002:
			func_321(iParam1);
			break;
		
		case 0x00000003:
			func_318(iParam1);
			break;
		
		case 0x00000004:
			func_317(iParam1);
			break;
		
		case 0x00000006:
			func_316(iParam1);
			break;
		
		case 0x00000005:
			func_315(iParam1);
			break;
		
		case 0x00000008:
			func_314(iParam1);
			break;
		
		case 0x00000009:
			func_313(iParam1);
			break;
		
		case 0x0000000A:
			func_312(iParam1);
			break;
		
		case 0x00000001:
			func_311(iParam1);
			break;
		
		case 0x00000007:
			func_310(iParam1);
			break;
		
		case 0x0000000B:
			func_309(iParam1);
			break;
		
		case 0x0000000C:
			func_308(iParam1);
			break;
		
		case 0x0000000D:
			func_307(iParam1);
			break;
		
		case 0x0000000E:
			func_295(iParam1);
			break;
	}
}

void func_295(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x000000D7;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000031;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000012;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000009B, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_296(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0x00000000;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 0x00000020);
	uParam0->f_2 = (iParam2 / 0x00000020);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_305(iParam8);
	if ((uParam0->f_2 >= 0x0000000A && uParam0->f_5 >= 0x00000000) && uParam0->f_5 < 0x00000003)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0x00000000;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000003);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000006);
		if (func_24(0x0000000E))
		{
			return;
		}
		if (iParam1 == 0x00000001)
		{
			if (unk_0x1A5A491D253EA7BA(Global_280004, 0x6CE6313B, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000007);
			}
		}
		if (iParam1 == 0x0000000C)
		{
			if (!func_303(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_303(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else if (iParam1 == 0x0000000D)
		{
		}
		else if (iParam1 == 0x0000000E)
		{
			if (!func_303(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_303(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else
		{
			if (!func_303(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_303(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
	}
	else if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		if (func_302(iParam1, uParam0->f_5, uParam0->f_2, 0x00000000, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		}
		if (func_302(iParam1, uParam0->f_5, uParam0->f_2, 0x00000001, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
		if (!func_302(iParam1, uParam0->f_5, uParam0->f_2, 0x00000002, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if ((((((((((iParam1 == 0x0000000B || iParam1 == 0x00000004) || iParam1 == 0x00000006) || iParam1 == 0x00000001) || iParam1 == 0x0000000E) || iParam1 == 0x00000002) || iParam1 == 0x00000008) || iParam1 == 0x00000009) || iParam1 == 0x0000000A) || iParam1 == 0x00000007) || iParam1 == 0x0000000C)
		{
			if (func_24(0x0000000E))
			{
				return;
			}
			iVar0 = func_299(func_301(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			}
			iVar0 = func_299(func_298(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
			}
			if (func_297(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_299(iVar1, Global_12A8F, 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
	if (iParam1 == 0x0000000E)
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
}

bool func_297(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 0x000003D2;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D3;
					break;
				
				case 0x00000003:
					*uParam2 = 0x00000595;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E3;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EB;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000596;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059E;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000005A0;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000003F3;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A1;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FB;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x00000406;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D4;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000597;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059F;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A2;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DC;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FC;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D5;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E5;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003ED;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000598;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A3;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DD;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FD;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E6;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EE;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000599;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DE;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FE;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E7;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EF;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059A;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DF;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FF;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E8;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F0;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059B;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E0;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000400;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E9;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F1;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059C;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E1;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000401;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F2;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059D;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E2;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000402;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000403;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000404;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000405;
					break;
			}
			break;
	}
	return *uParam2 != 0x000003D2;
}

int func_298(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000039F;
					break;
				
				case 0x00000003:
					return 0x00000586;
					break;
				
				case 0x00000004:
					return 0x000003AF;
					break;
				
				case 0x00000006:
					return 0x000003B7;
					break;
				
				case 0x00000008:
					return 0x00000587;
					break;
				
				case 0x00000009:
					return 0x0000058F;
					break;
				
				case 0x0000000A:
					return 0x00000591;
					break;
				
				case 0x00000001:
					return 0x000003BF;
					break;
				
				case 0x00000007:
					return 0x00000592;
					break;
				
				case 0x0000000B:
					return 0x000003A7;
					break;
				
				case 0x0000000E:
					return 0x000003C7;
					break;
				
				case 0x0000000C:
					return 0x000003D2;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A0;
					break;
				
				case 0x00000004:
					return 0x000003B0;
					break;
				
				case 0x00000006:
					return 0x000003B8;
					break;
				
				case 0x00000008:
					return 0x00000588;
					break;
				
				case 0x00000009:
					return 0x00000590;
					break;
				
				case 0x00000007:
					return 0x00000593;
					break;
				
				case 0x0000000B:
					return 0x000003A8;
					break;
				
				case 0x0000000E:
					return 0x000003C8;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A1;
					break;
				
				case 0x00000004:
					return 0x000003B1;
					break;
				
				case 0x00000006:
					return 0x000003B9;
					break;
				
				case 0x00000008:
					return 0x00000589;
					break;
				
				case 0x00000007:
					return 0x00000594;
					break;
				
				case 0x0000000B:
					return 0x000003A9;
					break;
				
				case 0x0000000E:
					return 0x000003C9;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B2;
					break;
				
				case 0x00000006:
					return 0x000003BA;
					break;
				
				case 0x00000008:
					return 0x0000058A;
					break;
				
				case 0x0000000B:
					return 0x000003AA;
					break;
				
				case 0x0000000E:
					return 0x000003CA;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B3;
					break;
				
				case 0x00000006:
					return 0x000003BB;
					break;
				
				case 0x00000008:
					return 0x0000058B;
					break;
				
				case 0x0000000B:
					return 0x000003AB;
					break;
				
				case 0x0000000E:
					return 0x000003CB;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B4;
					break;
				
				case 0x00000006:
					return 0x000003BC;
					break;
				
				case 0x00000008:
					return 0x0000058C;
					break;
				
				case 0x0000000B:
					return 0x000003AC;
					break;
				
				case 0x0000000E:
					return 0x000003CC;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B5;
					break;
				
				case 0x00000006:
					return 0x000003BD;
					break;
				
				case 0x00000008:
					return 0x0000058D;
					break;
				
				case 0x0000000B:
					return 0x000003AD;
					break;
				
				case 0x0000000E:
					return 0x000003CD;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B6;
					break;
				
				case 0x00000006:
					return 0x000003BE;
					break;
				
				case 0x00000008:
					return 0x0000058E;
					break;
				
				case 0x0000000B:
					return 0x000003AE;
					break;
				
				case 0x0000000E:
					return 0x000003CE;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003CF;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D0;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D1;
					break;
			}
			break;
	}
	return 0x000003A7;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_300(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_300(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_43();
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

int func_301(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036B;
					break;
				
				case 0x00000003:
					return 0x00000577;
					break;
				
				case 0x00000004:
					return 0x0000037B;
					break;
				
				case 0x00000006:
					return 0x00000383;
					break;
				
				case 0x00000008:
					return 0x00000578;
					break;
				
				case 0x00000009:
					return 0x00000580;
					break;
				
				case 0x0000000A:
					return 0x00000582;
					break;
				
				case 0x00000001:
					return 0x0000038B;
					break;
				
				case 0x00000007:
					return 0x00000583;
					break;
				
				case 0x0000000B:
					return 0x00000373;
					break;
				
				case 0x0000000E:
					return 0x00000393;
					break;
				
				case 0x0000000C:
					return 0x0000039E;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036C;
					break;
				
				case 0x00000004:
					return 0x0000037C;
					break;
				
				case 0x00000006:
					return 0x00000384;
					break;
				
				case 0x00000008:
					return 0x00000579;
					break;
				
				case 0x00000009:
					return 0x00000581;
					break;
				
				case 0x00000007:
					return 0x00000584;
					break;
				
				case 0x0000000B:
					return 0x00000374;
					break;
				
				case 0x0000000E:
					return 0x00000394;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036D;
					break;
				
				case 0x00000004:
					return 0x0000037D;
					break;
				
				case 0x00000006:
					return 0x00000385;
					break;
				
				case 0x00000008:
					return 0x0000057A;
					break;
				
				case 0x00000007:
					return 0x00000585;
					break;
				
				case 0x0000000B:
					return 0x00000375;
					break;
				
				case 0x0000000E:
					return 0x00000395;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037E;
					break;
				
				case 0x00000006:
					return 0x00000386;
					break;
				
				case 0x00000008:
					return 0x0000057B;
					break;
				
				case 0x0000000B:
					return 0x00000376;
					break;
				
				case 0x0000000E:
					return 0x00000396;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037F;
					break;
				
				case 0x00000006:
					return 0x00000387;
					break;
				
				case 0x00000008:
					return 0x0000057C;
					break;
				
				case 0x0000000B:
					return 0x00000377;
					break;
				
				case 0x0000000E:
					return 0x00000397;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000380;
					break;
				
				case 0x00000006:
					return 0x00000388;
					break;
				
				case 0x00000008:
					return 0x0000057D;
					break;
				
				case 0x0000000B:
					return 0x00000378;
					break;
				
				case 0x0000000E:
					return 0x00000398;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000381;
					break;
				
				case 0x00000006:
					return 0x00000389;
					break;
				
				case 0x00000008:
					return 0x0000057E;
					break;
				
				case 0x0000000B:
					return 0x00000379;
					break;
				
				case 0x0000000E:
					return 0x00000399;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000382;
					break;
				
				case 0x00000006:
					return 0x0000038A;
					break;
				
				case 0x00000008:
					return 0x0000057F;
					break;
				
				case 0x0000000B:
					return 0x0000037A;
					break;
				
				case 0x0000000E:
					return 0x0000039A;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039B;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039C;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039D;
					break;
			}
			break;
	}
	return 0x00000373;
}

int func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0x00000000)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 0x00000001)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000002)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000003)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000006)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000007)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000008)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000009)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000006)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000008)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000A)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000E)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0x00000000;
}

int func_303(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_304(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_299(iVar2, iVar0, 0x00000000);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0x00000000;
}

bool func_304(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 0x00002CF7;
	if ((bParam4 && Global_411C56) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
					
					case 0xC0235F73:
					case 0xAD93CC80:
					case 0x16FF0A8E:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000000;
						return 0x00000001;
						break;
					
					case 0xCE57FBDC:
					case 0x98CDA2F4:
					case 0x2841AD13:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000001;
						return 0x00000001;
						break;
					
					case 0x928E844A:
					case 0x8B23079F:
					case 0xF1CC4021:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000002;
						return 0x00000001;
						break;
					
					case 0xA0BA20A1:
					case 0x08C582E6:
					case 0x0409E49C:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000003;
						return 0x00000001;
						break;
					
					case 0x075EEDE1:
					case 0xFA7AE651:
					case 0xE0079C98:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000004;
						return 0x00000001;
						break;
					
					case 0x13BA0697:
					case 0xF649DDEF:
					case 0xF13E3F05:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000005;
						return 0x00000001;
						break;
					
					case 0xF77E4E20:
					case 0x633F37DC:
					case 0xCD0C76A2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000007;
						return 0x00000001;
						break;
					
					case 0x4CEE78FF:
					case 0x3C60EA1C:
					case 0xA9142EB2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000008;
						return 0x00000001;
						break;
					
					case 0x7AC28546:
					case 0x379D8CB2:
					case 0xA9497954:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x0000000B;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			}
	}
	iVar0 = 0xFFFFFFFF;
	if (bParam4)
	{
		if (Global_411C56)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000001:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006DF;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E0;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E1;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E2;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E3;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006EB;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006ED;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006EE;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006EF;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F0;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F1;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006F9;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FA;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x0000075F;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000760;
					break;
				
				case 0x00000011:
					*uParam2 = 0x0000077F;
					break;
				
				case 0x00000012:
					*uParam2 = 0x0000078D;
					break;
				
				case 0x00000013:
					*uParam2 = 0x0000078E;
					break;
				
				case 0x00000014:
					*uParam2 = 0x0000078F;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000790;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000791;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007F9;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FA;
					break;
				
				case 0x00000019:
					*uParam2 = 0x00000814;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x00000815;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000816;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000817;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000818;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000819;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x0000081A;
					break;
				
				case 0x00000020:
					*uParam2 = 0x0000081B;
					break;
				
				case 0x00000021:
					*uParam2 = 0x0000081C;
					break;
				
				case 0x00000022:
					*uParam2 = 0x0000081D;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000914;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000915;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000955;
					break;
				
				case 0x00000026:
					*uParam2 = 0x00000956;
					break;
				
				case 0x00000027:
					*uParam2 = 0x00000957;
					break;
				
				case 0x00000028:
					*uParam2 = 0x00000958;
					break;
				
				case 0x00000029:
					*uParam2 = 0x00000993;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x00000994;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x00000995;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x00000996;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x00000997;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x00000998;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x00000999;
					break;
				
				case 0x00000030:
					*uParam2 = 0x0000099A;
					break;
				
				case 0x00000031:
					*uParam2 = 0x0000099B;
					break;
				
				case 0x00000032:
					*uParam2 = 0x0000099C;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A1D;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A1E;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A1F;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A20;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A21;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A22;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A23;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A24;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A25;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A26;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A27;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C7C;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C7D;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C7E;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C7F;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C80;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C81;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E55;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E56;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E57;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E58;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E59;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E5A;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E5B;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E5C;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E5D;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E5E;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED0;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED1;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000ED2;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000ED3;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000ED4;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000ED5;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000ED6;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000ED7;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F3E;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F3F;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F40;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014D9;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014DA;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014DB;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014DC;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014DD;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014DE;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014DF;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014E0;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014E1;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014E2;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014E3;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014E4;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001512;
					break;
				
				case 0x00000066:
					*uParam2 = 0x00001513;
					break;
				
				case 0x00000067:
					*uParam2 = 0x00001514;
					break;
				
				case 0x00000068:
					*uParam2 = 0x00001515;
					break;
				
				case 0x00000069:
					*uParam2 = 0x00001516;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x00001517;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x00001518;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001519;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x0000151A;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x0000151B;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x0000151C;
					break;
				
				case 0x00000070:
					*uParam2 = 0x0000151D;
					break;
				
				case 0x00000071:
					*uParam2 = 0x0000151E;
					break;
				
				case 0x00000072:
					*uParam2 = 0x0000151F;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001520;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001521;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001522;
					break;
				
				case 0x00000076:
					*uParam2 = 0x00001523;
					break;
				
				case 0x00000077:
					*uParam2 = 0x00001524;
					break;
				
				case 0x00000078:
					*uParam2 = 0x00001525;
					break;
				
				case 0x00000079:
					*uParam2 = 0x00001526;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x00001527;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x00001528;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017EA;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017EB;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017EC;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017ED;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017EE;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017EF;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017F0;
					break;
				
				case 0x00000083:
					*uParam2 = 0x000017F1;
					break;
				
				case 0x00000084:
					*uParam2 = 0x000017F2;
					break;
				
				case 0x00000085:
					*uParam2 = 0x000017F3;
					break;
				
				case 0x00000086:
					*uParam2 = 0x000017F4;
					break;
				
				case 0x00000087:
					*uParam2 = 0x000017F5;
					break;
				
				case 0x00000088:
					*uParam2 = 0x000017F6;
					break;
				
				case 0x00000089:
					*uParam2 = 0x000017F7;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x000017F8;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001923;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001924;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001925;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001926;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001927;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001928;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001929;
					break;
				
				case 0x00000092:
					*uParam2 = 0x0000192A;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000192B;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000192C;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000192D;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000192E;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000192F;
					break;
				
				case 0x00000098:
					*uParam2 = 0x00001930;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001931;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C62;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C63;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C64;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C65;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C66;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C67;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C68;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001EC7;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001EC8;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001EC9;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ECA;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001ECB;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001ECC;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001ECD;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001ECE;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001ECF;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001ED0;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001ED1;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001ED2;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001ED3;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001ED4;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001ED5;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x0000206B;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x0000206C;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x0000206D;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x0000206E;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x0000206F;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002070;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x00002071;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x00002072;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x00002073;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x00002074;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x00002075;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x00002076;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002077;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002078;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002079;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x0000207A;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x0000207B;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x0000207C;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x0000207D;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x0000207E;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x0000207F;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002080;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x00002081;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x00002082;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x00002083;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022E8;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022E9;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EA;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022EB;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022EC;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024CB;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024CC;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024CD;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024CE;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024CF;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024D0;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024D1;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024D2;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024D3;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024D4;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024D5;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024D6;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024D7;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024D8;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024D9;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024DA;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024DB;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024DC;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024DD;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024DE;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024DF;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024E0;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024E1;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024E2;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024E3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006E5;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E6;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E7;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E8;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E9;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006F2;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006F3;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006F4;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006F5;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006F6;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F7;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F8;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006FB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FC;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x00000761;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000762;
					break;
				
				case 0x00000011:
					*uParam2 = 0x00000780;
					break;
				
				case 0x00000012:
					*uParam2 = 0x00000792;
					break;
				
				case 0x00000013:
					*uParam2 = 0x00000793;
					break;
				
				case 0x00000014:
					*uParam2 = 0x00000794;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000795;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000796;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007FB;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FC;
					break;
				
				case 0x00000019:
					*uParam2 = 0x0000081E;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x0000081F;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000820;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000821;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000822;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000823;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x00000824;
					break;
				
				case 0x00000020:
					*uParam2 = 0x00000825;
					break;
				
				case 0x00000021:
					*uParam2 = 0x00000826;
					break;
				
				case 0x00000022:
					*uParam2 = 0x00000827;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000916;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000917;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000959;
					break;
				
				case 0x00000026:
					*uParam2 = 0x0000095A;
					break;
				
				case 0x00000027:
					*uParam2 = 0x0000095B;
					break;
				
				case 0x00000028:
					*uParam2 = 0x0000095C;
					break;
				
				case 0x00000029:
					*uParam2 = 0x0000099D;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x0000099E;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x0000099F;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x000009A0;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x000009A1;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x000009A2;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x000009A3;
					break;
				
				case 0x00000030:
					*uParam2 = 0x000009A4;
					break;
				
				case 0x00000031:
					*uParam2 = 0x000009A5;
					break;
				
				case 0x00000032:
					*uParam2 = 0x000009A6;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A28;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A29;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A2A;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A2B;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A2C;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A2D;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A2E;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A2F;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A30;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A31;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A32;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C82;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C83;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C84;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C85;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C86;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C87;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E5F;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E60;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E61;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E62;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E63;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E64;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E65;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E66;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E67;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E68;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED8;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED9;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000EDA;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000EDB;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000EDC;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000EDD;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000EDE;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000EDF;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F41;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F42;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F43;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014E5;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014E6;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014E7;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014E8;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014E9;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014EA;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014EB;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014EC;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014ED;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014EE;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014EF;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014F0;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001529;
					break;
				
				case 0x00000066:
					*uParam2 = 0x0000152A;
					break;
				
				case 0x00000067:
					*uParam2 = 0x0000152B;
					break;
				
				case 0x00000068:
					*uParam2 = 0x0000152C;
					break;
				
				case 0x00000069:
					*uParam2 = 0x0000152D;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x0000152E;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x0000152F;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001530;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x00001531;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x00001532;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x00001533;
					break;
				
				case 0x00000070:
					*uParam2 = 0x00001534;
					break;
				
				case 0x00000071:
					*uParam2 = 0x00001535;
					break;
				
				case 0x00000072:
					*uParam2 = 0x00001536;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001537;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001538;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001539;
					break;
				
				case 0x00000076:
					*uParam2 = 0x0000153A;
					break;
				
				case 0x00000077:
					*uParam2 = 0x0000153B;
					break;
				
				case 0x00000078:
					*uParam2 = 0x0000153C;
					break;
				
				case 0x00000079:
					*uParam2 = 0x0000153D;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x0000153E;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x0000153F;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017F9;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017FA;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017FB;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017FC;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017FD;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017FE;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017FF;
					break;
				
				case 0x00000083:
					*uParam2 = 0x00001800;
					break;
				
				case 0x00000084:
					*uParam2 = 0x00001801;
					break;
				
				case 0x00000085:
					*uParam2 = 0x00001802;
					break;
				
				case 0x00000086:
					*uParam2 = 0x00001803;
					break;
				
				case 0x00000087:
					*uParam2 = 0x00001804;
					break;
				
				case 0x00000088:
					*uParam2 = 0x00001805;
					break;
				
				case 0x00000089:
					*uParam2 = 0x00001806;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x00001807;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001932;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001933;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001934;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001935;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001936;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001937;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001938;
					break;
				
				case 0x00000092:
					*uParam2 = 0x00001939;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000193A;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000193B;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000193C;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000193D;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000193E;
					break;
				
				case 0x00000098:
					*uParam2 = 0x0000193F;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001940;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C69;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C6A;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C6B;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C6C;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C6D;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C6E;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C6F;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001ED6;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001ED7;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001ED8;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ED9;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001EDA;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001EDB;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001EDC;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001EDD;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001EDE;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001EDF;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001EE0;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001EE1;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001EE2;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001EE3;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001EE4;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x00002084;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x00002085;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x00002086;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x00002087;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x00002088;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002089;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x0000208A;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x0000208B;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x0000208C;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x0000208D;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x0000208E;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x0000208F;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002090;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002091;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002092;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x00002093;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x00002094;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x00002095;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x00002096;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x00002097;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x00002098;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002099;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x0000209A;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x0000209B;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x0000209C;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022ED;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022EE;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EF;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022F0;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022F1;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024E4;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024E5;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024E6;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024E7;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024E8;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024E9;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024EA;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024EB;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024EC;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024ED;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024EE;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024EF;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024F0;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024F1;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024F2;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024F3;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024F4;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024F5;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024F6;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024F7;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024F8;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024F9;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024FA;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024FB;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024FC;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 0x00000020);
	return *uParam2 != 0x00002CF7;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
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
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000000;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0x00000000)
	{
		return;
	}
	iVar1 = Global_12A92[0x00000000 /*14*/].f_5;
	if (iParam0 == 0x0000000C)
	{
		iVar4 = 0x00000000;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0x00000000);
		iVar3 = 0x00000000;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_296(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0x00000000, 0x00000000, Var2.f_2, 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000001);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		func_296(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, "NO_LABEL", 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001);
	}
	else if (iParam0 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0x00000000;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar8 = 0x00000000;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0x00000000)
					{
						iVar7 = 0x00000009;
					}
					else if (Var6.f_6 == 0x00000001)
					{
						iVar7 = 0x0000000A;
					}
					else if (Var6.f_6 == 0x00000002)
					{
						iVar7 = 0x00000002;
					}
					else if (Var6.f_6 == 0x00000003)
					{
						iVar7 = 0x00000003;
					}
					else if (Var6.f_6 == 0x00000004)
					{
						iVar7 = 0x00000004;
					}
					else if (Var6.f_6 == 0x00000005)
					{
						iVar7 = 0x00000005;
					}
					else if (Var6.f_6 == 0x00000006)
					{
						iVar7 = 0x00000006;
					}
					else if (Var6.f_6 == 0x00000007)
					{
						iVar7 = 0x00000007;
					}
					else if (Var6.f_6 == 0x00000008)
					{
						iVar7 = 0x00000008;
					}
					else
					{
						iVar7 = 0xFFFFFFFF;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_296(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, 0x85C5D476, 0x00000000), iVar7, 0x00000002, Var6.f_1 != 0x00000000);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != 0xFFFFFFFF && Global_12B3B)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_296(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
			return;
		}
		iVar13 = 0x00000000;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_274(iParam0));
		iVar12 = 0x00000000;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_296(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_307(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_308(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000077;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008B;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000095;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_309(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_310(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_311(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_312(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000021, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_313(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000011, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_314(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000012, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_315(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_316(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000048;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000054, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_317(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000068, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_318(int iParam0)
{
	if (iParam0 < 0x00000088)
	{
		func_320(iParam0);
	}
	else
	{
		func_319(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_306(0x00000003, iParam0, 0x000000F2, 0xFFFFFFFF);
	}
}

void func_319(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000031;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000008;
			iVar1 = 0x000003A1;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000352;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000044C;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x000004B0;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x000004C4;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000514;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000550;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002A;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002C;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002E;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000034;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000AA0;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000CB2;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000B86;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C1C;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C4E;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000CA8;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000D16;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000D48;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000CD0;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_320(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000018;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001A;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000015E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000172;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000008;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000028;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_321(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_322(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_323(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_341(iParam1);
			break;
		
		case 0x00000002:
			func_340(iParam1);
			break;
		
		case 0x00000003:
			func_336(iParam1);
			break;
		
		case 0x00000004:
			func_335(iParam1);
			break;
		
		case 0x00000006:
			func_334(iParam1);
			break;
		
		case 0x00000005:
			func_333(iParam1);
			break;
		
		case 0x00000008:
			func_332(iParam1);
			break;
		
		case 0x00000009:
			func_331(iParam1);
			break;
		
		case 0x0000000A:
			func_330(iParam1);
			break;
		
		case 0x00000001:
			func_329(iParam1);
			break;
		
		case 0x00000007:
			func_328(iParam1);
			break;
		
		case 0x0000000B:
			func_327(iParam1);
			break;
		
		case 0x0000000C:
			func_326(iParam1);
			break;
		
		case 0x0000000D:
			func_325(iParam1);
			break;
		
		case 0x0000000E:
			func_324(iParam1);
			break;
	}
}

void func_324(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x000011EE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x00001004;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F0A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x00001482;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x000013BA;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x000009C4;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x0000079E;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F3C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000DDE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00001194;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000B86;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000070;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000073;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000007D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C6;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000DC;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000D0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x000000A0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x000000AF, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_325(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_326(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000122A;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001388;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000002F, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_327(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000031;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000003F, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_328(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_329(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_330(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_331(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000000C, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_332(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000004D, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_333(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_334(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000EB;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000086, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_335(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008C;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000094;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000009A;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000009E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000084;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000094;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000022;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000024;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000020;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000075, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_336(int iParam0)
{
	if (iParam0 < 0x0000006B)
	{
		func_339(iParam0);
	}
	else if (iParam0 < 0x000000E3)
	{
		func_338(iParam0);
	}
	else
	{
		func_337(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_306(0x00000003, iParam0, 0x0000013E, 0xFFFFFFFF);
	}
}

void func_337(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F2:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F3:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F4:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F5:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F6:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F7:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F8:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F9:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FA:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FB:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FC:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FD:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FE:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FF:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000100:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000101:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000102:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000103:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000104:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000105:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000106:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000107:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000108:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000109:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010A:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010B:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000010C:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000010D:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000010E:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000010F:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000110:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000111:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000112:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000113:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000114:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000115:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000116:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000117:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000118:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000119:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000011A:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000011B:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000011C:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000011D:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000118;
			break;
		
		case 0x0000011E:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000113;
			break;
		
		case 0x0000011F:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000120:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000121:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000122:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000123:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000127;
			break;
		
		case 0x00000124:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000125:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000126:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000127:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000128:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x000006D6;
			break;
		
		case 0x00000129:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000780;
			break;
		
		case 0x0000012A:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000012B:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x0000012C:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x000006D6;
			break;
		
		case 0x0000012D:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x000007C6;
			break;
		
		case 0x0000012E:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000012F:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000130:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000008;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000131:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000009;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000132:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000133:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000B;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000134:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000C;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000135:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000136:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000137:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000138:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004F;
			break;
		
		case 0x00000139:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004F;
			break;
		
		case 0x0000013A:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000005;
			iVar1 = 0x00000059;
			break;
		
		case 0x0000013B:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013C:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013D:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000008;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_338(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000190;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000023A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x000001D6;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000C;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000208;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000104;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000000DC;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000104;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C1C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000AF0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000BB8;
			iVar6 = 0x00000003;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_339(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000012;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000017;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001A;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x00000018;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000008B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003B;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_340(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000015, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_341(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_359(iParam1);
			break;
		
		case 0x00000002:
			func_358(iParam1);
			break;
		
		case 0x00000003:
			func_355(iParam1);
			break;
		
		case 0x00000004:
			func_354(iParam1);
			break;
		
		case 0x00000006:
			func_353(iParam1);
			break;
		
		case 0x00000005:
			func_352(iParam1);
			break;
		
		case 0x00000008:
			func_351(iParam1);
			break;
		
		case 0x00000009:
			func_350(iParam1);
			break;
		
		case 0x0000000A:
			func_349(iParam1);
			break;
		
		case 0x00000001:
			func_348(iParam1);
			break;
		
		case 0x00000007:
			func_347(iParam1);
			break;
		
		case 0x0000000B:
			func_346(iParam1);
			break;
		
		case 0x0000000C:
			func_345(iParam1);
			break;
		
		case 0x0000000D:
			func_344(iParam1);
			break;
		
		case 0x0000000E:
			func_343(iParam1);
			break;
	}
}

void func_343(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x0000000B;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000038;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000046;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000052;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000EB;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000F5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000113;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000127;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000B3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000E1;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_344(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_345(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000F3C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x000011F8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_346(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000003D4;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000041A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000044C;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000076C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x000007BC;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000834;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x00000848;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007D0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			iVar1 = 0x000008E8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			iVar1 = 0x000008FC;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000092E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			iVar1 = 0x000008E8;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000002D, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_347(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_348(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_349(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_350(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000014, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_351(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000018, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_352(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x0000000E, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_353(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000299;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000026C;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000244;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000040;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x00000038;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000048;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000063, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_354(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000036B;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002E;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_355(int iParam0)
{
	if (iParam0 < 0x0000003C)
	{
		func_357(iParam0);
	}
	else
	{
		func_356(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_306(0x00000003, iParam0, 0x000000B5, 0xFFFFFFFF);
	}
}

void func_356(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x000000BE;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000000D2;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000031;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00001356;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00001063;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C7B;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000B86;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000546;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000578;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x000004B0;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000546;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000514;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000564;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x0000053C;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000564;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000082;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000140;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_357(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000DAC;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000D2;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000D;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000136;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000003A;
			break;
		
		default:
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_358(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_359(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_306(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_296(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_360()
{
	Global_12A92[0x00000000 /*14*/].f_1 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_2 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_5 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_3 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_4 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_6 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_D = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_C = 0x00000000;
	Global_12A92[0x00000000 /*14*/] = 0x00000000;
	StringCopy(&(Global_12A92[0x00000000 /*14*/].f_8), "NO_LABEL", 16);
}

void func_361(int iParam0)
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

void func_362()
{
	func_364();
	func_363();
}

void func_363()
{
	if (unk_0x029064EA9141FCC2(385.8528f, -1629.945f, 35.29278f, 398.8063f, -1640.865f, 28f))
	{
		unk_0x1BA7FCEAFCE8D46E(iLocal_269, 0x00000000, 0x00000001, 0x00000001);
	}
	else
	{
		unk_0x1BA7FCEAFCE8D46E(iLocal_269, 0x00000001, 0x00000001, 0x00000001);
	}
}

void func_364()
{
	if (bLocal_274)
	{
		if (unk_0x029064EA9141FCC2(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 390.4927f, -1621.07f, 28.29278f, 406.0266f, -1604.358f, 35.2086f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (func_12(&uLocal_150, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)))
			{
				func_366(Global_9E6A[0x0000000D /*31*/], &fLocal_270);
				return;
			}
		}
		else
		{
			func_365(Global_9E6A[0x0000000D /*31*/], &fLocal_270);
		}
	}
	else if (unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()) || iLocal_42 == 0x00000001)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 390.4927f, -1621.07f, 28.29278f, 406.0266f, -1604.358f, 35.2086f, 15f, 0x00000000, 0x00000001, 0x00000000) || unk_0x029064EA9141FCC2(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f))
		{
			func_366(Global_9E6A[0x0000000D /*31*/], &fLocal_270);
		}
		else
		{
			func_365(Global_9E6A[0x0000000D /*31*/], &fLocal_270);
		}
	}
	else if (!unk_0x029064EA9141FCC2(387.0058f, -1641.537f, 20.4895f, 404.1412f, -1580.302f, 40.34303f))
	{
		func_365(Global_9E6A[0x0000000D /*31*/], &fLocal_270);
	}
	else
	{
		func_366(Global_9E6A[0x0000000D /*31*/], &fLocal_270);
	}
}

void func_365(int iParam0, float fParam1)
{
	if (unk_0x76395FF5E8D5E643(iParam0))
	{
		if (*fParam1 != 0f)
		{
			if (!unk_0x49083FDB78AC0509(iLocal_271))
			{
				iLocal_271 = unk_0x544B74C043CE9948(400.8628f, -1609.739f, 28.29278f, 7.5f, 2f, 9.5f, func_81(229.3746f), 0x00000000, 0x00000007);
			}
			unk_0x838CC054A9235BEC(iParam0, *fParam1, 0x00000001, 0x00000001);
			*fParam1 = (*fParam1 - (0.2f * SYSTEM::TIMESTEP()));
			if (*fParam1 <= 0f)
			{
				unk_0x1BA7FCEAFCE8D46E(iParam0, 0x00000001, 0x00000001, 0x00000000);
				unk_0xDDABC98CFF1A4C60(iLocal_271);
				*fParam1 = 0f;
			}
		}
	}
}

void func_366(int iParam0, float fParam1)
{
	if (*fParam1 != 1f)
	{
		unk_0x838CC054A9235BEC(iParam0, *fParam1, 0x00000001, 0x00000001);
		*fParam1 = (*fParam1 + (0.2f * SYSTEM::TIMESTEP()));
		if (unk_0x49083FDB78AC0509(iLocal_271))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_271);
		}
		if (*fParam1 >= 1f)
		{
			*fParam1 = 1f;
		}
	}
}

void func_367()
{
	func_368();
	if (iLocal_467)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
			func_380(0x0000001B, 0x00000001);
			iLocal_467 = 0x00000000;
		}
	}
}

void func_368()
{
	if (!iLocal_283)
	{
		if (iLocal_42 == 0x00000001 || iLocal_42 == 0x00000002)
		{
			func_56(Local_290, 0x0000028A);
			func_369(0x00000289, 0x00000000);
			iLocal_283 = 0x00000001;
		}
	}
}

void func_369(int iParam0, bool bParam1)
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

void func_370()
{
	if (!bLocal_28 && iLocal_40 != 0x00000004)
	{
		if (iLocal_40 > 0x00000000)
		{
			func_374();
			func_371();
		}
	}
}

void func_371()
{
	if (iLocal_40 != 0x00000002 && iLocal_40 != 0x00000003)
	{
		if (!func_63(unk_0x16F2683693E537C9(), 372.0053f, -1604.076f, 36.7536f, 100f) && !bLocal_287)
		{
			func_373("PR_AREAWARN", &bLocal_287);
		}
		else if (!func_63(unk_0x16F2683693E537C9(), 372.0053f, -1604.076f, 36.7536f, 170f) && bLocal_287)
		{
			func_372(0x00000003);
		}
	}
}

void func_372(int iParam0)
{
	unk_0x790015DC92C918E2();
	func_53();
	unk_0xC92DB9682A650680("FHPRA_FAIL");
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			sLocal_257 = "PR_FWRECK";
			break;
		
		case 0x00000002:
			sLocal_257 = "PR_FSTUCK";
			break;
		
		case 0x00000003:
			sLocal_257 = "PR_FLEFT";
			break;
		
		case 0x00000004:
			sLocal_257 = "PR_FLEFTV";
			break;
	}
	iLocal_40 = 0x00000004;
	iLocal_41 = 0x00000000;
}

void func_373(char* sParam0, bool bParam1)
{
	if (!*bParam1)
	{
		func_59(sParam0, 0x00001D4C, 0x00000000);
		*bParam1 = 0x00000001;
	}
}

void func_374()
{
	if (!func_7(Local_290))
	{
		func_372(0x00000001);
	}
	else
	{
		func_375();
		if (iLocal_40 == 0x00000002 || iLocal_40 == 0x00000003)
		{
			if (!func_153(unk_0x16F2683693E537C9(), Local_290, 50f, 0x00000001) && !bLocal_288)
			{
				func_373("PR_VANWARN", &bLocal_288);
			}
			else if (!func_153(unk_0x16F2683693E537C9(), Local_290, 100f, 0x00000001) && bLocal_288)
			{
				func_372(0x00000004);
			}
		}
	}
}

void func_375()
{
	if (unk_0x5B17F10380E80E5B(Local_290))
	{
		if (iLocal_268)
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_267) > 0x00001388)
			{
				func_372(0x00000002);
				return;
			}
		}
		else
		{
			iLocal_267 = unk_0x1C0640BA9A7327B3();
			iLocal_268 = 0x00000001;
		}
	}
	else
	{
		iLocal_268 = 0x00000000;
	}
	if (func_376(Local_290))
	{
		func_372(0x00000002);
	}
}

int func_376(int iParam0)
{
	if (func_7(iParam0))
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

int func_377(int iParam0)
{
	if (func_6(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_378(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_379())
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
		func_220(0x00000001);
	}
}

int func_379()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_380(int iParam0, int iParam1)
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

void func_381()
{
	func_393();
	func_391();
	func_386();
	func_385();
	func_384();
	func_382();
}

void func_382()
{
	Local_255[0x00000001 /*7*/] = { func_383(359.5238f, -1581.445f, 28.29278f, 341.1343f, -1603.052f, 40.37049f, 7.3f) };
	Local_255[0x00000002 /*7*/] = { func_383(352.2312f, -1590.471f, 28.29277f, 341.1343f, -1603.052f, 40.37049f, 6.78f) };
	Local_255[0x00000000 /*7*/] = { func_383(344.5851f, -1601.562f, 28.29278f, 342.4275f, -1604.071f, 40.29278f, 3.79f) };
	Local_255[0x00000003 /*7*/] = { func_383(345.0102f, -1604.096f, 40.6735f, 361.0914f, -1617.46f, 28.29278f, 3.33f) };
	Local_255[0x00000004 /*7*/] = { func_383(362.7986f, -1577.081f, 28.29278f, 341.1343f, -1603.052f, 40.37049f, 6.78f) };
	Local_255[0x00000005 /*7*/] = { func_383(365.9773f, -1611.556f, 28.29277f, 373.1279f, -1617.806f, 40.37049f, 19.19f) };
}

struct<7> func_383(vector3 vParam0, vector3 vParam1, float fParam2)
{
	struct<7> Var0;
	
	Var0 = { vParam0 };
	Var0.f_3 = { vParam1 };
	Var0.f_6 = fParam2;
	return Var0;
}

void func_384()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		iLocal_43[iVar0] = 0x00000000;
		iLocal_44[iVar0] = 0x00000000;
		iVar0++;
	}
	Local_254[0x00000000 /*4*/] = { 344.4447f, -1603.428f, 28.2928f };
	Local_254[0x00000000 /*4*/].f_3 = 228.9052f;
	Local_254[0x00000001 /*4*/] = { 345.9821f, -1604.801f, 28.2928f };
	Local_254[0x00000001 /*4*/].f_3 = 40.2137f;
}

void func_385()
{
	iLocal_269 = 0xA868C9CA;
	if (!unk_0x76395FF5E8D5E643(iLocal_269))
	{
		unk_0x8010B3127F058F0F(iLocal_269, joaat("prop_fnclink_03gate5"), 391.8602f, -1636.07f, 29.9744f, 0x00000001, 0x00000001, 0x00000000);
	}
	unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x0000000D /*31*/], 0x00000001, 0x00000001, 0x00000000);
	unk_0x1BA7FCEAFCE8D46E(iLocal_269, 0x00000001, 0x00000001, 0x00000000);
}

void func_386()
{
	vector3 vVar0[8];
	
	vVar0[0x00000000 /*3*/] = { 331.7678f, -1596.396f, 31.53864f };
	vVar0[0x00000001 /*3*/] = { 348.4934f, -1576.657f, 31.83304f };
	vVar0[0x00000002 /*3*/] = { 356.2655f, -1567.396f, 28.29265f };
	vVar0[0x00000003 /*3*/] = { 368.4805f, -1576.274f, 28.26307f };
	vVar0[0x00000004 /*3*/] = { 364.8242f, -1580.737f, 28.29278f };
	vVar0[0x00000005 /*3*/] = { 350.2896f, -1606.614f, 28.29278f };
	vVar0[0x00000006 /*3*/] = { 346.1393f, -1608.523f, 31.53354f };
	func_390(&uLocal_46, &vVar0, 0x00000007);
	vVar0[0x00000000 /*3*/] = { 353.657f, -1613.421f, 28.29278f };
	vVar0[0x00000001 /*3*/] = { 391.3156f, -1601.633f, 28.29278f };
	vVar0[0x00000002 /*3*/] = { 397.667f, -1607.168f, 28.29278f };
	vVar0[0x00000003 /*3*/] = { 376.649f, -1633.096f, 26.96452f };
	func_390(&uLocal_98, &vVar0, 0x00000004);
	vVar0[0x00000000 /*3*/] = { 344.0985f, -1605.154f, 28.2928f };
	vVar0[0x00000001 /*3*/] = { 365.6985f, -1580.435f, 28.2928f };
	vVar0[0x00000002 /*3*/] = { 407.9943f, -1616.259f, 28.2928f };
	vVar0[0x00000003 /*3*/] = { 387.3322f, -1641.258f, 29.0912f };
	func_390(&uLocal_150, &vVar0, 0x00000004);
	func_389(&uLocal_202);
	func_388(&uLocal_202, 408.8245f, -1616.011f, 31.7537f);
	func_388(&uLocal_202, 376.3118f, -1588.036f, 36.7534f);
	func_388(&uLocal_202, 354.1272f, -1614.819f, 31.5335f);
	func_388(&uLocal_202, 387.2971f, -1641.943f, 31.833f);
	func_387(&uLocal_202);
}

void func_387(var uParam0)
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

void func_388(var uParam0, vector3 vParam1)
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

void func_389(var uParam0)
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0x00000000;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 0x00000001;
}

void func_390(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	func_389(uParam0);
	iVar0 = 0x00000000;
	while (iVar0 <= (iParam2 - 0x00000001))
	{
		func_388(uParam0, *(uParam1[iVar0 /*3*/]));
		iVar0++;
	}
	func_387(uParam0);
}

void func_391()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = joaat("s_m_y_cop_01");
	Local_289[0x00000000 /*22*/] = { func_392(353.1191f, -1589.606f, 28.2928f, 270.0968f, iVar0) };
	Local_289[0x00000001 /*22*/] = { func_392(354.557f, -1590.549f, 28.2928f, 16.3702f, iVar0) };
	Local_289[0x00000002 /*22*/] = { func_392(369.8186f, -1611.029f, 28.3928f, 9.0837f, iVar0) };
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000002)
	{
		Local_289[iVar1 /*22*/].f_12 = 0x00000000;
		Local_289[iVar1 /*22*/].f_13 = 0x00000000;
		Local_289[iVar1 /*22*/].f_14 = 0x00000000;
		Local_289[iVar1 /*22*/].f_11 = 0x00000000;
		Local_289[iVar1 /*22*/].f_10 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 <= (0x0000000F - 0x00000001))
		{
			unk_0x0674E58A79778E99(&(Local_289[iVar1 /*22*/].f_F), iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iLocal_461 = 0x00000000;
	iLocal_462 = 0x00000000;
	sLocal_460[0x00000000] = "PRA_COPTLK1";
	sLocal_460[0x00000001] = "PRA_COPTLK2";
}

struct<22> func_392(vector3 vParam0, float fParam1, int iParam2)
{
	struct<22> Var0;
	
	Var0.f_E = 0xFFFFFFFF;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_393()
{
	Local_290 = { func_394(372.9868f, -1623.531f, 28.2928f, 321.7075f, joaat("policet")) };
	Local_291[0x00000000 /*6*/] = { func_394(400.5771f, -1618.927f, 28.2928f, 48.8115f, joaat("police3")) };
	Local_291[0x00000001 /*6*/] = { func_394(396.6843f, -1623.222f, 28.2928f, 231.3392f, joaat("police3")) };
	Local_291[0x00000002 /*6*/] = { func_394(394.3527f, -1625.337f, 28.2928f, 49.3732f, joaat("police3")) };
}

struct<6> func_394(vector3 vParam0, float fParam1, int iParam2)
{
	struct<6> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_395()
{
	unk_0xF63400DBE3303D26("COPS", &iLocal_292);
}

void func_396()
{
	unk_0x51732B934211201A(iLocal_292);
	func_407(0x00000001);
	if (unk_0x76395FF5E8D5E643(Global_9E6A[0x0000000D /*31*/]))
	{
		unk_0xC9F68C22171478B8(Global_9E6A[0x0000000D /*31*/], 0x00000000);
	}
	unk_0x838CC054A9235BEC(Global_9E6A[0x0000000D /*31*/], 0f, 0x00000001, 0x00000001);
	unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x0000000D /*31*/], 0x00000004, 0x00000001, 0x00000001);
	unk_0x1BA7FCEAFCE8D46E(iLocal_269, 0x00000000, 0x00000001, 0x00000000);
	unk_0xA4A8625CC710BC1F(iLocal_269);
	unk_0x2952D66A502EA873(iLocal_264, 0x00000000);
	func_55();
	unk_0x34D79252800B23FF(0x00000005);
	unk_0x51B096AAC60548C1(1f);
	func_406();
	unk_0x5372553242EA2414();
	func_397(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_397(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
		unk_0x536F1BE96C726C4B(372.9868f, -1623.531f, 28.2928f, 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	func_104();
	unk_0x790015DC92C918E2();
	func_405(0x00000001, 0x00000001, 0x00000001);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	func_404();
	func_33();
	func_403();
	func_402();
	func_401();
	func_400();
	if (bParam0)
	{
		if (unk_0xC844350D5D58C99A(Local_290))
		{
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_290, 0x00000000))
					{
						vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					}
				}
			}
		}
		func_2();
	}
	else
	{
		func_398();
	}
	unk_0xB8C3D2D6C4AAEF18(0x00000000);
	if (unk_0x9F4FE516EAACCFC5(iLocal_263))
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_263, 0x00000000);
	}
}

void func_398()
{
	int iVar0;
	
	unk_0x7AA3AFA47C4179D1(Local_290);
	func_93(&Local_290);
	func_399(&iLocal_262, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		func_208(&(Local_289[iVar0 /*22*/]), 0x00000001, 0x00000000, 0x00000001);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		func_93(&(Local_291[iVar0 /*6*/]));
		iVar0++;
	}
}

void func_399(int iParam0, bool bParam1)
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

void func_400()
{
}

void func_401()
{
}

void func_402()
{
}

void func_403()
{
	int iVar0;
	
	unk_0x71199B01895C6202(Local_290.f_5);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		unk_0x71199B01895C6202(Local_291[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

void func_404()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = func_116(iVar0);
		if (!unk_0xEB6A8945D1AC98A1(iVar1))
		{
			if (func_115(iVar1))
			{
				func_108(iVar1);
			}
		}
		iVar0++;
	}
}

void func_405(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = 0x00000001;
	if (unk_0x39B7A3CCD2467CAB())
	{
		while (bVar0)
		{
			bVar0 = unk_0x39B7A3CCD2467CAB();
			if (unk_0x22A8E52414415B76())
			{
				unk_0x55BE34EDDEA0AC9E(0x00000000);
			}
			if (unk_0x62A1F4500E8F07E0())
			{
				unk_0x5C8D148FC238F38A();
			}
			if (unk_0x39B7A3CCD2467CAB() && !unk_0x22A8E52414415B76())
			{
				bVar0 = 0x00000000;
			}
			SYSTEM::WAIT(0x00000000);
		}
		if (bParam0)
		{
			func_38(iParam1, iParam2, 0x00000001, 0x00000001);
		}
	}
}

void func_406()
{
	Global_17187 = 0x00000000;
}

void func_407(int iParam0)
{
	Global_17732 = iParam0;
}

void func_408()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_30(0x00000000))
	{
		if (!func_409())
		{
			iVar0 = func_29();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_16(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_21();
		}
	}
}

int func_409()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_410()
{
	func_10(475.3364f, -1409.782f, 28.3108f, 123.1614f);
	func_8(471.5946f, -1412.737f, 28.1562f, 68.5531f);
}

