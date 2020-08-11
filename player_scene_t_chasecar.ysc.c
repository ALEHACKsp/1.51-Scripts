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
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
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
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 1;
	var uLocal_100 = 0;
	var uLocal_101 = 1;
	var uLocal_102 = 0;
	var uLocal_103 = 1;
	var uLocal_104 = 0;
	var uLocal_105 = 1;
	var uLocal_106 = 0;
	var uLocal_107 = 1;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1;
	var uLocal_114 = 0;
	var uLocal_115 = 1;
	var uLocal_116 = 0;
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	var uLocal_121 = 1;
	var uLocal_122 = 0;
	var uLocal_123 = 1;
	var uLocal_124 = 0;
	var uLocal_125 = 1;
	var uLocal_126 = 0;
	var uLocal_127 = 1;
	var uLocal_128 = 0;
	var uLocal_129 = 1;
	var uLocal_130 = 0;
	var uLocal_131 = 1;
	var uLocal_132 = 0;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	var uLocal_135 = 0;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	var uLocal_140 = 0;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	var uLocal_154 = 1;
	var uLocal_155 = 0;
	var uLocal_156 = 1;
	var uLocal_157 = 0;
	var uLocal_158 = 1;
	var uLocal_159 = 0;
	var uLocal_160 = 1;
	var uLocal_161 = 0;
	var uLocal_162 = 1;
	var uLocal_163 = 0;
	var uLocal_164 = 1;
	var uLocal_165 = 0;
	var uLocal_166 = 1;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 1;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 1;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 1;
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
	var uLocal_241 = 1;
	var uLocal_242 = 0;
	var uLocal_243 = 1;
	var uLocal_244 = 0;
	var uLocal_245 = 1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 1;
	var uLocal_251 = 0;
	var uLocal_252 = 1;
	var uLocal_253 = 0;
	var uLocal_254 = 1;
	var uLocal_255 = 0;
	var uLocal_256 = 1;
	var uLocal_257 = 0;
	var uLocal_258 = 1;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1;
	var uLocal_264 = 0;
	float fLocal_265 = 0f;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 16;
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
	var uLocal_436 = -1;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1000;
	var uLocal_444 = 1000;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[4] = { 0, 0, 0, 0 };
	int iLocal_448[4] = { 0, 0, 0, 0 };
	int iLocal_449 = 0;
	int iLocal_450[4] = { 0, 0, 0, 0 };
	int iLocal_451[4] = { 0, 0, 0, 0 };
	vector3 vLocal_452[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_453[4] = { 0f, 0f, 0f, 0f };
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	vector3 vLocal_456 = { 0f, 0f, 0f };
	float fLocal_457 = 0f;
	struct<2> Local_458 = { 0, 0 } ;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461[4] = { 0, 0, 0, 0 };
	float fLocal_462 = 0f;
	float fLocal_463 = 0f;
	struct<2> Local_464 = { 0, 0 } ;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	struct<2> Local_467 = { 0, 0 } ;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	struct<4> Local_473 = { 0, 0, 0, 0 } ;
	struct<2> Local_474 = { 0, 0 } ;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	int iLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	int iLocal_480[4] = { 0, 0, 0, 0 };
	float fLocal_481[4] = { 0f, 0f, 0f, 0f };
	float fLocal_482 = 0f;
	int iLocal_483 = 0;
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
	iLocal_68 = 0x00000001;
	iLocal_75 = 0x00000001;
	iLocal_97 = 0x00000001;
	fLocal_133 = 120f;
	fLocal_134 = 0f;
	fLocal_136 = 1f;
	fLocal_137 = 0f;
	fLocal_138 = 1f;
	fLocal_139 = 30f;
	fLocal_141 = 1f;
	fLocal_142 = 5f;
	fLocal_143 = 1f;
	fLocal_144 = 1f;
	fLocal_145 = 100f;
	fLocal_146 = 100f;
	fLocal_147 = 0f;
	fLocal_148 = 7000f;
	fLocal_149 = 0f;
	fLocal_150 = 0f;
	fLocal_151 = 0.3f;
	fLocal_152 = 0.5f;
	fLocal_153 = 50f;
	iLocal_171 = 0xFFFFFFFF;
	iLocal_179 = 0xFFFFFFFF;
	iLocal_180 = 0xFFFFFFFF;
	fLocal_265 = 15f;
	iLocal_266 = 0x000C00A7;
	iLocal_268 = 0x0000013E;
	iLocal_446 = 0x00000001;
	iLocal_449 = 0x00000004;
	StringCopy(&Local_458, "null", 16);
	StringCopy(&Local_464, "null", 16);
	StringCopy(&Local_467, "null", 16);
	iLocal_470 = 0xFFFFFFFF;
	iLocal_471 = 0x00000005;
	StringCopy(&Local_473, "null", 16);
	StringCopy(&Local_474, "null", 16);
	fLocal_482 = -1f;
	iLocal_483 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_99();
	}
	SYSTEM::WAIT(0x00000000);
	func_90();
	func_89();
	func_85();
	while (iLocal_446 && func_81(0x00000004, 0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
		switch (iLocal_267)
		{
			case 0x00000000:
				if (func_80())
				{
					iLocal_267 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_79())
				{
					iLocal_267 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_2())
				{
					iLocal_267 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_1();
				break;
		}
	}
	func_99();
}

void func_1()
{
	iLocal_446 = 0x00000000;
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		func_69(iVar0, &iVar1);
		iVar0++;
	}
	if (iVar1 < 0x00000000)
	{
		if (!unk_0x991B1F0980C62628())
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000004)
			{
				if (unk_0xC844350D5D58C99A(iLocal_447[iVar2]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_447[iVar2]))
					{
						if (unk_0x8C74DE122769E1BF())
						{
							func_68(&uLocal_434, 0x00000000, 0x00000000);
							iLocal_483 = iVar1;
						}
						return 0x00000000;
					}
				}
				iVar2++;
			}
			if (unk_0x8C74DE122769E1BF())
			{
				func_68(&uLocal_434, 0x00000000, 0x00000000);
				iLocal_483 = iVar1;
			}
			return 0x00000001;
		}
		if (unk_0x8C74DE122769E1BF())
		{
			func_68(&uLocal_434, 0x00000000, 0x00000000);
			iLocal_483 = iVar1;
		}
		return 0x00000000;
	}
	if (!unk_0xEA6BC48857E0AC4C(&Local_464))
	{
		if (iLocal_483 != iVar1 || iVar1 < 0xFFFFFFFF)
		{
			func_68(&uLocal_434, 0x00000000, 0x00000000);
			iLocal_483 = iVar1;
			return 0x00000000;
		}
		fVar3 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_447[iVar1], 0x00000000), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000));
		if (fVar3 < (150f * 150f) || unk_0x8C74DE122769E1BF())
		{
			func_37(&uLocal_434, iLocal_447[iVar1], &Local_464, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			if (unk_0x8C74DE122769E1BF())
			{
				iLocal_483 = iVar1;
			}
		}
	}
	func_3(&Local_467, &iLocal_477, &iVar1);
	return 0x00000000;
}

int func_3(char* sParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	Var0 = { *sParam0 };
	if (func_36())
	{
		return 0x00000000;
	}
	if (!func_35(iParam1))
	{
		func_34(iParam1);
		return 0x00000000;
	}
	if (iLocal_472 >= iLocal_471)
	{
		return 0x00000000;
	}
	fVar1 = (10f + ((SYSTEM::TO_FLOAT(iLocal_472) / SYSTEM::TO_FLOAT(iLocal_471)) * 10f));
	if (!func_31(iParam1, fVar1))
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iLocal_447[*iParam2]))
	{
		*iParam2 = 0xFFFFFFFF;
		return 0x00000000;
	}
	fVar2 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_447[*iParam2], 0x00000000));
	if (fVar2 > (30f * 30f))
	{
		if (fVar2 > (150f * 150f))
		{
			if (unk_0x8C74DE122769E1BF())
			{
				func_68(&uLocal_434, 0x00000000, 0x00000000);
			}
			*iParam2 = 0xFFFFFFFF;
		}
		return 0x00000000;
	}
	if (iLocal_470 > 0x00000000)
	{
		StringIntConCat(&Var0, iLocal_470, 16);
	}
	func_30(&uLocal_269, 0x00000002, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	if (func_7(&uLocal_269, "PRSAUD", &Var0, 0x00000003, 0x00000000, 0x00000000, 0x00000000))
	{
		if (iLocal_470 > 0x00000000)
		{
			iLocal_470++;
		}
		func_4(iParam1);
		iLocal_472++;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4(int iParam0)
{
	func_5(iParam0, 0f);
}

void func_5(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_6(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

float func_6(bool bParam0)
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

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_29(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0x00000000);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_28();
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
		if (func_27(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_26();
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
				func_18();
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
				if (func_17())
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
			if (func_16())
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
			func_15();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_14();
		func_9();
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
		func_28();
	}
	return 0x00000000;
}

void func_9()
{
	if (!func_10())
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

int func_10()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_13())
	{
		return 0x00000000;
	}
	if (func_11(unk_0xD803B885F5E47A62()))
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

bool func_11(int iParam0)
{
	return func_12(iParam0, 0x00000014);
}

bool func_12(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_13()
{
	return 0xFFFFFFFF;
}

void func_14()
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

void func_15()
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

int func_16()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_17()
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

void func_18()
{
	if (func_25(0x0000000E))
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
		Global_4C1E = func_19();
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

var func_19()
{
	func_20();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_20()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_23(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_22(unk_0x16F2683693E537C9());
			if (func_21(iVar0) && (!func_25(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_21(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_21(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_23(int iParam0)
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_24(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_25(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_26()
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

bool func_27(int iParam0, int iParam1)
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

void func_28()
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

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_30(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_31(int iParam0, float fParam1)
{
	if (func_35(iParam0))
	{
		if (func_32(iParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_32(var uParam0)
{
	if (func_35(uParam0))
	{
		if (func_33(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_33(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

void func_34(int iParam0)
{
	if (!func_35(iParam0))
	{
		func_4(iParam0);
	}
}

bool func_35(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_36()
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

void func_37(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_38(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_39(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_39(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_68(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_40(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_40(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_67(iVar0))
	{
		func_66();
	}
	if (func_65(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_60(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_56(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_45(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_67(iVar0))
							{
								func_44(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_43(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_67(iVar0))
						{
							func_44(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_43(0x00000001);
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
				if (func_67(sParam3))
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
						func_68(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_68(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_68(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_68(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_68(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_68(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_60(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_42(uParam0))
				{
					func_41(uParam0);
				}
			}
		}
	}
	else
	{
		func_68(uParam0, iVar0, 0x00000000);
	}
}

void func_41(var uParam0)
{
	if (func_65(unk_0x16F2683693E537C9()))
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

int func_42(var uParam0)
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

int func_43(bool bParam0)
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

void func_44(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_45(char* sParam0)
{
	if (!func_46(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_67(sParam0)) || func_67("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_43(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_43(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_43(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_55(0x00000000))
	{
		return 0x00000000;
	}
	if (func_54())
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
	if ((func_53() || func_52(Global_440000.f_38DB3)) || func_51())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_50(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_49(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_47(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_47(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_48(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_48(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_48(int iParam0, bool bParam1, bool bParam2)
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

int func_49(int iParam0, int iParam1)
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

int func_50(int iParam0, int iParam1)
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

var func_51()
{
	return Global_2564C8.f_11;
}

bool func_52(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_53()
{
	return Global_2564C8.f_10;
}

bool func_54()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_55(int iParam0)
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

void func_56(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_68(uParam0, 0x00000000, 0x00000000);
	}
	if (func_59(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_57())
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

bool func_57()
{
	return func_58(unk_0xD803B885F5E47A62());
}

int func_58(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_59(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_60(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_63(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_63(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_64(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_42(uParam0))
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
						if (!func_64(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_63(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_63(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_64(bParam1, bParam2, bParam3))
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
					if (!func_64(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_63(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_63(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_64(bParam1, bParam2, bParam3))
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
						if (func_62(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_61(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_61(bParam1, bParam2, bParam3))
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
					else if (func_62(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_42(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_66();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_61(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_62(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_63(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_64(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
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

int func_65(int iParam0)
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

void func_66()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

bool func_67(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_68(var uParam0, int iParam1, int iParam2)
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
		if (func_67(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_67(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	switch (iLocal_480[iParam0])
	{
		case 0x00000000:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), 0xFFFFFFFF, 0xFFFFFFFE))
			{
				return 0x00000000;
			}
			func_77(iParam0, iParam1);
			if (fLocal_463 >= 0f)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_450[iParam0], 0x00000000))
				{
					if (!unk_0x20D6474D5F4B9FC6(iLocal_450[iParam0]))
					{
						unk_0x4D3C3C0B0DE2663E(iLocal_450[iParam0], iLocal_461[iParam0], &Local_458, 0x00000001);
					}
					else if (unk_0x991B1F0980C62628())
					{
						if (unk_0x00A15D69BCAA5267() == 0x00000008 && unk_0x4E12749C16E1F94A() == 0x00000000)
						{
							unk_0xF12C1D85AFEE8FAD(iLocal_450[iParam0], (fLocal_463 - unk_0x9901AABAC4D4C590(iLocal_450[iParam0])));
							iLocal_480[iParam0] = 0x00000001;
						}
					}
					else
					{
						unk_0xF12C1D85AFEE8FAD(iLocal_450[iParam0], (fLocal_463 - unk_0x9901AABAC4D4C590(iLocal_450[iParam0])));
						iLocal_480[iParam0] = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), 0xFFFFFFFF, 0xFFFFFFFE))
			{
				return 0x00000000;
			}
			if (!unk_0x82CCEAB29E9451DD(iLocal_447[iParam0], iLocal_450[iParam0]))
			{
				iLocal_480[iParam0] = 0x00000004;
				return 0x00000000;
			}
			func_77(iParam0, iParam1);
			if (unk_0x20D6474D5F4B9FC6(iLocal_450[iParam0]))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && unk_0x20D6474D5F4B9FC6(iVar0))
				{
					fLocal_481[iParam0] = 1f;
				}
				else
				{
					bVar1 = 0x00000000;
					if (!unk_0x0A5D59F37DC7E974(iLocal_447[iParam0]) == 0x00000006)
					{
						func_70(iLocal_450[iParam0], unk_0x16F2683693E537C9(), &(fLocal_481[iParam0]), 17.5f, 7.5f, 30f, 0.7f, 1.2f, 1f, bVar1);
					}
					else
					{
						fLocal_481[iParam0] = 1f;
						fVar2 = unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9());
						fVar3 = unk_0x9C66D99E63E8E24C(iLocal_450[iParam0]);
						fLocal_481[iParam0] = 1f;
						if (fVar3 > fVar2)
						{
							fLocal_481[iParam0] = (fVar2 / fVar3);
						}
					}
				}
				if (fLocal_481[iParam0] <= 0.05f)
				{
					unk_0xC55F2A0377488064(iLocal_450[iParam0]);
					return 0x00000000;
				}
				unk_0xA9FBE21EB8701B34(iLocal_450[iParam0], fLocal_481[iParam0]);
				fVar4 = (unk_0x9901AABAC4D4C590(iLocal_450[iParam0]) / unk_0x1C8FE65729F6E371(iLocal_461[iParam0], &Local_458));
				if (!unk_0xE0058AC511E68F8A(iLocal_450[iParam0]))
				{
					if (!unk_0x0A5D59F37DC7E974(iLocal_447[iParam0]) == 0x00000006)
					{
						if (unk_0x7AABDE381A013256(unk_0x68F4C0EC296D3901(iLocal_450[iParam0], 0x00000001) - Vector(1f, 1f, 1f), unk_0x68F4C0EC296D3901(iLocal_450[iParam0], 0x00000001) + Vector(1f, 1f, 1f), 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0xFCA4899C6BBAD48F(iLocal_450[iParam0], iLocal_266);
						}
					}
					else
					{
						unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
						unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
					}
				}
				if (fVar4 >= fLocal_482)
				{
					unk_0xC55F2A0377488064(iLocal_450[iParam0]);
					return 0x00000000;
				}
				if (unk_0xB87D13D0C064E9D1(iLocal_447[iParam0], unk_0x16F2683693E537C9(), 0x00000001) || unk_0xB87D13D0C064E9D1(iLocal_450[iParam0], unk_0x16F2683693E537C9(), 0x00000001))
				{
					unk_0xC55F2A0377488064(iLocal_450[iParam0]);
					return 0x00000000;
				}
				if (unk_0xE147126C9AD09A60(iLocal_450[iParam0]))
				{
					unk_0xC55F2A0377488064(iLocal_450[iParam0]);
					return 0x00000000;
				}
				if (unk_0x0A5D59F37DC7E974(iLocal_447[iParam0]) == 0x00000006)
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000)
					{
						if (unk_0xC844350D5D58C99A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) && !unk_0x20D6474D5F4B9FC6(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
						{
							unk_0xC55F2A0377488064(iLocal_450[iParam0]);
							return 0x00000000;
						}
					}
				}
			}
			else
			{
				unk_0xA3BF0AA5A2608191(iLocal_447[iParam0]);
				if (!unk_0x0A5D59F37DC7E974(iLocal_447[iParam0]) == 0x00000006)
				{
					unk_0xE072601B4380E9DF(iLocal_447[iParam0], iLocal_450[iParam0], fLocal_265, iLocal_266);
					unk_0xFADC0A217229F6B5(iLocal_447[iParam0], 0x00000001);
					if (iLocal_268 == 0x00000119)
					{
						unk_0x5DAB50E08C3C504A(iLocal_450[iParam0], 0f);
					}
					iLocal_480[iParam0] = 0x00000002;
				}
				else
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_447[iParam0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0xAFF39FB306F8E232(iLocal_447[iParam0], 0x00000001, 0x00000001);
					unk_0xFADC0A217229F6B5(iLocal_447[iParam0], 0x00000001);
					unk_0x3245169DF7F47EAF(unk_0xD803B885F5E47A62());
					unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
					iLocal_480[iParam0] = 0x00000003;
				}
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), 0xFFFFFFFF, 0xFFFFFFFE))
			{
				return 0x00000000;
			}
			func_77(iParam0, iParam1);
			if (unk_0x82CCEAB29E9451DD(iLocal_447[iParam0], iLocal_450[iParam0]))
			{
				if (unk_0xD1960163A3042274(iLocal_447[iParam0], 0xF09B15B3) != 0x00000001)
				{
					unk_0xE072601B4380E9DF(iLocal_447[iParam0], iLocal_450[iParam0], fLocal_265, iLocal_266);
				}
				else
				{
					unk_0x06736587AE5BE33B(iLocal_447[iParam0], fLocal_265);
				}
			}
			else
			{
				iLocal_480[iParam0] = 0x00000004;
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (!func_78(iLocal_447[iParam0], iLocal_450[iParam0], &(iLocal_480[iParam0]), 0xFFFFFFFF, 0xFFFFFFFE))
			{
				return 0x00000000;
			}
			func_77(iParam0, iParam1);
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0x00000000)
			{
				if (unk_0xC844350D5D58C99A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) && !unk_0x20D6474D5F4B9FC6(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())))
				{
					unk_0xA3BF0AA5A2608191(iLocal_447[iParam0]);
					unk_0x6DAD7906B73F064D(&(iLocal_447[iParam0]));
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xEB6A8945D1AC98A1(iLocal_447[iParam0]))
			{
				iLocal_480[iParam0] = 0xFFFFFFFF;
				return 0x00000000;
			}
			if (!unk_0xDF1306B443CD3D15(iLocal_450[iParam0], 0x00000000))
			{
				iLocal_480[iParam0] = 0xFFFFFFFE;
				return 0x00000000;
			}
			if (!unk_0x82CCEAB29E9451DD(iLocal_447[iParam0], iLocal_450[iParam0]))
			{
				if (!unk_0x81A5359F25512A04(iLocal_447[iParam0]))
				{
					unk_0x5B1D360B9C6F0A09(iLocal_447[iParam0], iLocal_450[iParam0], 0x00004E20, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
				}
			}
			else
			{
				iLocal_480[iParam0] = 0x00000001;
				return 0x00000000;
			}
			break;
		
		case 0xFFFFFFFF:
			break;
		
		case 0xFFFFFFFE:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_447[iParam0]))
			{
				if (unk_0xD1960163A3042274(iLocal_447[iParam0], 0x6BA30179) != 0x00000001)
				{
					unk_0x4E885A246A9D983A(iLocal_447[iParam0], 0x0000001D, 0x00000001);
					unk_0xF3268524E9BE6D6E(iLocal_447[iParam0], unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
			else
			{
				iLocal_480[iParam0] = 0xFFFFFFFF;
				return 0x00000000;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

void func_70(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!fParam4 < fParam3)
	{
		fParam4 = (fParam3 - 0.1f);
	}
	if (fParam6 > fParam8)
	{
		fParam8 = fParam6;
	}
	fVar0 = (fParam7 / fParam8);
	fVar1 = (fParam6 / fParam8);
	fVar2 = (((fParam5 - fParam3) * (1f / 0.4f)) + fParam3);
	func_71(iParam0, iParam1, uParam2, fParam8, fParam4, fParam3, fVar2, fVar0, 1f, fVar1, bParam9);
}

void func_71(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	int iVar9;
	int iVar10;
	
	if (iLocal_81 == 0x00000000)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_81 = 0x00000001;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_144;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_76(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (func_74(iParam1, iParam0))
		{
			if (unk_0x405E212DDE472467(iParam1, 0x00000000))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_73(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_72(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_82 = 0x00000001;
		}
		else if (iLocal_82)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_82 = 0x00000000;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x6117725E0134737F();
		fVar8 = ((fLocal_151 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x6117725E0134737F();
		fVar8 = ((fLocal_152 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x405E212DDE472467(iParam1, 0x00000000))
			{
				iVar9 = unk_0x6937EA2286828455(iParam1, 0x00000000);
				if (!unk_0x437347B10A200C4B(iVar9, 0x00000000))
				{
					iVar10 = unk_0x134B62B726CEC8E6(iVar9);
					if (unk_0x8E39AC3C76C8AA58(iVar10) || unk_0x7D8B2A8F9EA82DB7(iVar10))
					{
						if (unk_0xDF1306B443CD3D15(iVar9, 0x00000000))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_142 - fLocal_143));
							fVar1 = (fVar1 + fLocal_143);
							fLocal_141 = fVar1;
							if (fLocal_141 < fLocal_143)
							{
								fLocal_141 = fLocal_143;
							}
							if (fLocal_141 > fLocal_142)
							{
								fLocal_141 = fLocal_142;
							}
							unk_0x85089606511D395B(unk_0xD803B885F5E47A62(), fLocal_141);
						}
					}
				}
			}
		}
	}
}

float func_72(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		Var0 = unk_0x5045843AAD2F36F7(iParam0);
		Var0.f_1 = unk_0x580A699989F7AD54(iParam0);
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		if (unk_0x405E212DDE472467(iParam1, 0x00000000))
		{
			iVar5 = unk_0x6937EA2286828455(iParam1, 0x00000000);
			vVar3.x = unk_0x5045843AAD2F36F7(iVar5);
			vVar3.y = unk_0x580A699989F7AD54(iVar5);
		}
		else
		{
			vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
			vVar3 = { vVar2 - vVar1 };
		}
	}
	fVar4 = unk_0x07AB02F3C4AE2B04(Var0, Var0.f_1, vVar3.x, vVar3.y);
	return fVar4;
}

float func_73(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	vVar2 = { vVar1 - vVar0 };
	vVar2.z = 0f;
	fVar3 = SYSTEM::VMAG(vVar2);
	return fVar3;
}

int func_74(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iParam0, iParam1, 0x00000000))
			{
				return 0x00000000;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		vVar2 = { unk_0x68E4ADDDDCD7BDDE(iParam1, 0f, 5f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3 = { vVar1 - vVar0 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_75(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_75(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_76(int iParam0, int iParam1)
{
	struct<2> Var0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		Var0 = unk_0x5045843AAD2F36F7(iParam0);
		Var0.f_1 = unk_0x580A699989F7AD54(iParam0);
		vVar2 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar3 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	vVar1 = { vVar3 - vVar2 };
	fVar4 = unk_0x07AB02F3C4AE2B04(vVar1.x, vVar1.y, Var0, Var0.f_1);
	fVar4 = (fVar4 + -90f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	vVar1.z = 0f;
	return (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(fVar4));
}

int func_77(int iParam0, var uParam1)
{
	if (*uParam1 < 0x00000000)
	{
		*uParam1 = iParam0;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_78(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		*uParam2 = iParam3;
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!func_7(&uLocal_269, "PRSAUD", &Local_474, 0x00000003, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		else
		{
			*uParam2 = iParam3;
			func_4(&iLocal_477);
			return 0x00000000;
		}
		Local_473 = { Local_473 };
		*uParam2 = iParam3;
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
	{
		unk_0xA3BF0AA5A2608191(iParam0);
		*uParam2 = iParam4;
		return 0x00000000;
	}
	return 0x00000001;
}

int func_79()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		func_69(iVar0, &iVar1);
		iVar0++;
	}
	if (!func_36())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		if (!unk_0x20D6474D5F4B9FC6(iVar0))
		{
		}
		else
		{
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000004)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_450[iVar1], 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_447[iVar1]))
				{
					if (!unk_0xEA6BC48857E0AC4C(&Local_458) && iLocal_461[iVar1] > 0x00000000)
					{
						unk_0x4D3C3C0B0DE2663E(iLocal_450[iVar1], iLocal_461[iVar1], &Local_458, 0x00000001);
						unk_0xF12C1D85AFEE8FAD(iLocal_450[iVar1], fLocal_462);
						unk_0x60274E99F9B27DEA(iLocal_447[iVar1], iLocal_450[iVar1], 0x00000000, 0x0000000F, 20f, iLocal_266, 0.5f, 2f, 0x00000001);
						if (unk_0x0A5D59F37DC7E974(iLocal_447[iVar1]) == 0x00000006)
						{
							unk_0xAA280AF45BCCCF21(iLocal_450[iVar1], 0x00000001);
						}
					}
				}
				iVar1++;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_81(int iParam0, int iParam1)
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
		if (func_25(0x0000000E))
		{
			return 0x00000000;
		}
		if (unk_0x8F7DE34FFB67592B())
		{
			return 0x00000000;
		}
		if (!func_83(iParam0, func_84()))
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
		else if (iParam1 == func_82(Global_180A1) && iParam1 != 0x00000000)
		{
			Global_180A1 = 0x00000000;
		}
	}
	return 0x00000001;
}

int func_82(var uParam0)
{
	return uParam0;
}

bool func_83(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0x00000000;
}

int func_84()
{
	func_20();
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

void func_85()
{
	if (!unk_0x991B1F0980C62628())
	{
		if (unk_0x757EF87A33649210())
		{
			func_88();
		}
		return;
	}
	if (unk_0x19EC8D83154D7CC1() == 0x00000003)
	{
		func_88();
		return;
	}
	func_86();
	if (Global_180A3 > 0x00000000)
	{
		return;
	}
	unk_0x36B03FE02FE012AB();
}

void func_86()
{
	func_87((Global_180A3 - 0x00000001));
}

void func_87(int iParam0)
{
	Global_180A3 = iParam0;
}

void func_88()
{
	func_87(0x00000000);
}

void func_89()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0x00000000;
	bVar2 = 0x00000000;
	while (!bVar2 && iVar1 < 0x00000190)
	{
		bVar2 = 0x00000001;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			if (iLocal_448[iVar0] != 0x00000000)
			{
				unk_0x523BCC9DC80CD82F(iLocal_448[iVar0]);
				if (!unk_0xB87F6CF6E5628C67(iLocal_448[iVar0]))
				{
					unk_0x523BCC9DC80CD82F(iLocal_448[iVar0]);
					bVar2 = 0x00000000;
				}
			}
			if (iLocal_451[iVar0] != 0x00000000)
			{
				unk_0x523BCC9DC80CD82F(iLocal_451[iVar0]);
				if (!unk_0xB87F6CF6E5628C67(iLocal_451[iVar0]))
				{
					unk_0x523BCC9DC80CD82F(iLocal_451[iVar0]);
					bVar2 = 0x00000000;
				}
			}
			if (!unk_0xEA6BC48857E0AC4C(&Local_458) && iLocal_461[iVar0] > 0x00000000)
			{
				unk_0x36187931D29E5BBE(iLocal_461[iVar0], &Local_458);
				if (!unk_0x3DDA6C6A285628E4(iLocal_461[iVar0], &Local_458))
				{
					unk_0x36187931D29E5BBE(iLocal_461[iVar0], &Local_458);
					bVar2 = 0x00000000;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0x00000000);
	}
	unk_0xF63400DBE3303D26("chasecar", &iLocal_455);
	unk_0x0E2400AB9174FA81(0x00000003, iLocal_455, 0x6F0783F5);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (iLocal_451[iVar0] != 0x00000000)
		{
			unk_0x536F1BE96C726C4B(vLocal_456 + vLocal_452[iVar0 /*3*/], 20f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			iLocal_450[iVar0] = unk_0x122AAB0B1D6F55AD(iLocal_451[iVar0], vLocal_456 + vLocal_452[iVar0 /*3*/], (fLocal_457 + fLocal_453[iVar0]), 0x00000001, 0x00000001, 0x00000000);
			unk_0xC6A6B4DDD6DC073A(iLocal_450[iVar0], iLocal_454);
			unk_0x71199B01895C6202(iLocal_451[iVar0]);
			unk_0x120A395B0ECB8EA5(iLocal_450[iVar0], 0x00000001);
		}
		if (iLocal_448[iVar0] != 0x00000000)
		{
			iLocal_447[iVar0] = unk_0x852A19533F896693(iLocal_450[iVar0], iLocal_449, iLocal_448[iVar0], 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0xC743BD39A24D0583(iLocal_447[iVar0], 0x00000000);
			unk_0x71199B01895C6202(iLocal_448[iVar0]);
			unk_0x6DF7BF67E86AAE86(iLocal_447[iVar0], iLocal_455);
			unk_0x11AD11297DC58CC7(iLocal_447[iVar0], 0x00000001);
			if (iLocal_448[iVar0] == joaat("a_m_y_roadcyc_01"))
			{
				unk_0xCC095276B3DD380E(iLocal_447[iVar0], 0x00000001);
			}
			if (iLocal_449 != 0x00000006)
			{
				unk_0x3CC33E4E9CE523F4(iLocal_447[iVar0], 0x00000003);
				unk_0xAFF39FB306F8E232(iLocal_447[iVar0], 0x00000011, 0x00000001);
				unk_0xBAFED2F6486F771A(iLocal_447[iVar0], 0x00000001, 0x00000001);
				unk_0xBAFED2F6486F771A(iLocal_447[iVar0], 0x00000002, 0x00000001);
			}
		}
		iVar0++;
	}
}

void func_90()
{
	char[] cVar0[8];
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	
	iLocal_268 = Global_17F63;
	func_92(iLocal_268, &vLocal_456, &fLocal_457, &cVar0);
	func_91(iLocal_268, &Local_458, &uVar1, &fLocal_462, &fLocal_463, &uVar2, &uVar3, &uVar4);
	switch (iLocal_268)
	{
		case 0x00000119:
			vLocal_452[0x00000000 /*3*/] = { 5.5437f, 30.4559f, 0f };
			fLocal_453[0x00000000] = -4.6273f;
			iLocal_454 = 0x00000007;
			iLocal_448[0x00000000] = joaat("a_m_y_genstreet_01");
			iLocal_448[0x00000001] = 0x00000000;
			iLocal_448[0x00000002] = 0x00000000;
			iLocal_448[0x00000003] = 0x00000000;
			iLocal_449 = 0x00000004;
			iLocal_451[0x00000000] = joaat("penumbra");
			iLocal_451[0x00000001] = 0x00000000;
			iLocal_451[0x00000002] = 0x00000000;
			iLocal_451[0x00000003] = 0x00000000;
			iLocal_266 = 0x000C2024;
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0xFFFFFFFF;
			iLocal_461[0x00000002] = 0xFFFFFFFF;
			iLocal_461[0x00000003] = 0xFFFFFFFF;
			StringCopy(&Local_464, "CMN_HINT", 16);
			StringCopy(&Local_467, "PST_CHSCRaR", 16);
			StringCopy(&Local_473, "PST_CHSCRaG", 16);
			StringCopy(&Local_474, "PST_CHSCRaK", 16);
			iLocal_471 = 0x00000004;
			iLocal_470 = 0x00000001;
			fLocal_482 = 1f;
			break;
		
		case 0x0000011A:
			vLocal_452[0x00000000 /*3*/] = { -21.211f, 7.393f, 0f };
			fLocal_453[0x00000000] = 0.7266f;
			iLocal_454 = 0x00000000;
			iLocal_448[0x00000000] = joaat("a_m_y_genstreet_01");
			iLocal_448[0x00000001] = 0x00000000;
			iLocal_448[0x00000002] = 0x00000000;
			iLocal_448[0x00000002] = 0x00000000;
			iLocal_449 = 0x00000004;
			iLocal_451[0x00000000] = joaat("penumbra");
			iLocal_451[0x00000001] = 0x00000000;
			iLocal_451[0x00000002] = 0x00000000;
			iLocal_451[0x00000002] = 0x00000000;
			iLocal_266 = 0x000C0024;
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0xFFFFFFFF;
			iLocal_461[0x00000002] = 0xFFFFFFFF;
			iLocal_461[0x00000003] = 0xFFFFFFFF;
			StringCopy(&Local_464, "CMN_HINT", 16);
			StringCopy(&Local_467, "PST_CHSCRbR", 16);
			StringCopy(&Local_473, "PST_CHSCRbG", 16);
			StringCopy(&Local_474, "PST_CHSCRbK", 16);
			iLocal_471 = 0x00000003;
			iLocal_470 = 0x00000001;
			fLocal_482 = 1f;
			break;
		
		case 0x0000011B:
			vLocal_452[0x00000000 /*3*/] = { -7.9514f, -28.1131f, 1.094f };
			vLocal_452[0x00000001 /*3*/] = { -10.876f, -26.4702f, 1.1106f };
			vLocal_452[0x00000002 /*3*/] = { -13.8006f, -24.8273f, 1.1272f };
			fLocal_453[0x00000000] = 10.9603f;
			fLocal_453[0x00000001] = -0.8648f;
			fLocal_453[0x00000002] = -12.6899f;
			iLocal_454 = 0x00000000;
			iLocal_448[0x00000000] = joaat("a_m_y_roadcyc_01");
			iLocal_448[0x00000001] = joaat("a_m_y_roadcyc_01");
			iLocal_448[0x00000002] = joaat("a_m_y_roadcyc_01");
			iLocal_448[0x00000003] = 0x00000000;
			iLocal_449 = 0x00000004;
			iLocal_451[0x00000000] = joaat("tribike");
			iLocal_451[0x00000001] = joaat("tribike");
			iLocal_451[0x00000002] = joaat("tribike");
			iLocal_451[0x00000003] = 0x00000000;
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0x00000003;
			iLocal_461[0x00000002] = 0x00000004;
			iLocal_461[0x00000003] = 0xFFFFFFFF;
			StringCopy(&Local_464, "CMN_HINT", 16);
			StringCopy(&Local_467, "PST_CHSCRcR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "PST_CHSCRcK", 16);
			iLocal_471 = 0x00000003;
			iLocal_470 = 0x00000001;
			fLocal_482 = 1f;
			break;
		
		case 0x0000011C:
			vLocal_452[0x00000000 /*3*/] = { 12.7813f, 6.7387f, 0f };
			fLocal_453[0x00000000] = -2.6961f;
			iLocal_454 = 0x00000000;
			iLocal_448[0x00000000] = joaat("a_m_y_genstreet_01");
			iLocal_448[0x00000001] = 0x00000000;
			iLocal_448[0x00000002] = 0x00000000;
			iLocal_448[0x00000003] = 0x00000000;
			iLocal_449 = 0x00000004;
			iLocal_451[0x00000000] = joaat("faggio2");
			iLocal_451[0x00000001] = 0x00000000;
			iLocal_451[0x00000002] = 0x00000000;
			iLocal_451[0x00000003] = 0x00000000;
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0xFFFFFFFF;
			iLocal_461[0x00000002] = 0xFFFFFFFF;
			iLocal_461[0x00000003] = 0xFFFFFFFF;
			StringCopy(&Local_464, "CMN_HINT", 16);
			StringCopy(&Local_467, "PST_CHSCRdR", 16);
			StringCopy(&Local_473, "PST_CHSCRdG", 16);
			StringCopy(&Local_474, "PST_CHSCRdK", 16);
			iLocal_471 = 0x00000008;
			iLocal_470 = 0xFFFFFFFF;
			fLocal_482 = 0.95f;
			fLocal_265 = 10f;
			break;
		
		case 0x00000113:
			vLocal_452[0x00000000 /*3*/] = { -9.151f, -1.3167f, 0.9699f };
			vLocal_452[0x00000001 /*3*/] = { -10.4908f, 3.3092f, 0f };
			vLocal_452[0x00000002 /*3*/] = { -23.4117f, -0.3117f, 0f };
			vLocal_452[0x00000003 /*3*/] = { -20.2394f, -5.2394f, 0f };
			fLocal_453[0x00000000] = -0.3188f;
			fLocal_453[0x00000001] = unk_0x79833B02DBD2A244(-5f, 5f);
			fLocal_453[0x00000002] = unk_0x79833B02DBD2A244(-5f, 5f);
			fLocal_453[0x00000003] = unk_0x79833B02DBD2A244(-5f, 5f);
			iLocal_448[0x00000000] = joaat("s_m_y_cop_01");
			iLocal_448[0x00000001] = joaat("s_m_y_cop_01");
			iLocal_448[0x00000002] = joaat("s_m_y_cop_01");
			iLocal_448[0x00000003] = joaat("s_m_y_cop_01");
			iLocal_449 = 0x00000006;
			iLocal_451[0x00000000] = joaat("police3");
			iLocal_451[0x00000001] = joaat("police3");
			iLocal_451[0x00000002] = joaat("police3");
			iLocal_451[0x00000003] = joaat("police3");
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0x00000003;
			iLocal_461[0x00000002] = 0x00000004;
			iLocal_461[0x00000003] = 0x00000005;
			StringCopy(&Local_464, "", 16);
			StringCopy(&Local_467, "PST_POLaR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "", 16);
			iLocal_471 = 0x00000003;
			iLocal_470 = 0x00000001;
			fLocal_482 = 1f;
			break;
		
		case 0x00000114:
			vLocal_452[0x00000000 /*3*/] = { 1.5168f, -20.0085f, 0.1667f };
			vLocal_452[0x00000001 /*3*/] = { -4.9822f, -20.365f, 0.1911f };
			vLocal_452[0x00000002 /*3*/] = { -7.8196f, -18.8446f, 0f };
			vLocal_452[0x00000003 /*3*/] = { -4.3313f, -28.5564f, 0f };
			fLocal_453[0x00000000] = -3.4484f;
			fLocal_453[0x00000001] = -12.2569f;
			fLocal_453[0x00000002] = unk_0x79833B02DBD2A244(-5f, 5f);
			fLocal_453[0x00000003] = unk_0x79833B02DBD2A244(-5f, 5f);
			iLocal_448[0x00000000] = joaat("s_m_y_ranger_01");
			iLocal_448[0x00000001] = joaat("s_m_y_ranger_01");
			iLocal_448[0x00000002] = joaat("s_m_y_ranger_01");
			iLocal_448[0x00000003] = joaat("s_m_y_ranger_01");
			iLocal_449 = 0x00000006;
			iLocal_451[0x00000000] = joaat("sheriff");
			iLocal_451[0x00000001] = joaat("sheriff");
			iLocal_451[0x00000002] = joaat("pranger");
			iLocal_451[0x00000003] = joaat("pranger");
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0x00000003;
			iLocal_461[0x00000002] = 0x00000004;
			iLocal_461[0x00000003] = 0x00000005;
			StringCopy(&Local_464, "", 16);
			StringCopy(&Local_467, "PST_POLbR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "", 16);
			iLocal_471 = 0x00000005;
			iLocal_470 = 0x00000001;
			fLocal_482 = 1f;
			break;
		
		case 0x00000115:
			vLocal_452[0x00000000 /*3*/] = { -14.3569f, 0.1057f, 0f };
			vLocal_452[0x00000001 /*3*/] = { -14.8079f, 6.2547f, 0f };
			vLocal_452[0x00000002 /*3*/] = { -25.6028f, 6.8598f, 0f };
			vLocal_452[0x00000003 /*3*/] = { -27.9848f, 0.2778f, 0f };
			fLocal_453[0x00000000] = unk_0x79833B02DBD2A244(-5f, 5f);
			fLocal_453[0x00000001] = unk_0x79833B02DBD2A244(-5f, 5f);
			fLocal_453[0x00000002] = unk_0x79833B02DBD2A244(-5f, 5f);
			fLocal_453[0x00000003] = unk_0x79833B02DBD2A244(-5f, 5f);
			iLocal_448[0x00000000] = joaat("s_m_y_ranger_01");
			iLocal_448[0x00000001] = joaat("s_m_y_ranger_01");
			iLocal_448[0x00000002] = joaat("s_m_y_ranger_01");
			iLocal_448[0x00000003] = joaat("s_m_y_ranger_01");
			iLocal_449 = 0x00000006;
			iLocal_451[0x00000000] = joaat("sheriff");
			iLocal_451[0x00000001] = joaat("sheriff");
			iLocal_451[0x00000002] = joaat("pranger");
			iLocal_451[0x00000003] = joaat("pranger");
			iLocal_461[0x00000000] = 0x00000002;
			iLocal_461[0x00000001] = 0x00000003;
			iLocal_461[0x00000002] = 0x00000004;
			iLocal_461[0x00000003] = 0x00000005;
			StringCopy(&Local_464, "", 16);
			StringCopy(&Local_467, "PST_POLcR", 16);
			StringCopy(&Local_473, "", 16);
			StringCopy(&Local_474, "", 16);
			iLocal_471 = 0x00000005;
			iLocal_470 = 0x00000001;
			fLocal_482 = 1f;
			break;
		
		default:
			fVar5 = ((fLocal_457 + 90f) + unk_0x79833B02DBD2A244(-5f, 5f));
			vLocal_452[0x00000000 /*3*/] = { Vector(0f, SYSTEM::COS(fVar5), SYSTEM::SIN(fVar5)) * FtoV(unk_0x79833B02DBD2A244(15f, 25f)) };
			fLocal_453[0x00000000] = unk_0x79833B02DBD2A244(-5f, 5f);
			iLocal_454 = 0x00000000;
			iLocal_448[0x00000000] = joaat("a_m_y_genstreet_01");
			iLocal_448[0x00000001] = 0x00000000;
			iLocal_448[0x00000002] = 0x00000000;
			iLocal_448[0x00000003] = 0x00000000;
			iLocal_451[0x00000000] = joaat("penumbra");
			iLocal_451[0x00000001] = 0x00000000;
			iLocal_451[0x00000002] = 0x00000000;
			iLocal_451[0x00000003] = 0x00000000;
			iLocal_449 = 0x00000004;
			StringCopy(&Local_458, "null", 16);
			iLocal_461[0x00000000] = 0xFFFFFFFF;
			iLocal_461[0x00000001] = 0xFFFFFFFF;
			iLocal_461[0x00000002] = 0xFFFFFFFF;
			iLocal_461[0x00000003] = 0xFFFFFFFF;
			StringCopy(&Local_464, "null", 16);
			StringCopy(&Local_467, "null", 16);
			StringCopy(&Local_473, "null", 16);
			StringCopy(&Local_474, "null", 16);
			iLocal_471 = 0xFFFFFFFF;
			iLocal_470 = 0xFFFFFFFF;
			fLocal_482 = -1f;
			break;
	}
}

int func_91(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case 0x000000E7:
			StringCopy(sParam1, "lkexcile2_chase", 16);
			*uParam2 = 0x00000064;
			*uParam3 = 6500f;
			*uParam4 = 12700f;
			*uParam5 = (5000f + 12700f);
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(sParam1, "scene_m_fbi2_", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 6200f;
			*uParam5 = (5000f + 6200f);
			*uParam6 = 0.4f;
			*uParam7 = 0.8f;
			return 0x00000001;
			break;
		
		case 0x0000004C:
			StringCopy(sParam1, "scene_f_fra2_", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam5 = 8500f;
			*uParam4 = 4750f;
			*uParam6 = 0.4f;
			*uParam7 = 0.7f;
			return 0x00000001;
			break;
		
		case 0x000000AD:
			StringCopy(sParam1, "scene_m_biking", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x00000119:
			StringCopy(sParam1, "scene_t_chaseA", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 7500f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x0000011A:
			StringCopy(sParam1, "scene_t_chaseB", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 0x00000001;
			break;
		
		case 0x0000011B:
			StringCopy(sParam1, "scene_t_chaseC", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 1500f;
			*uParam5 = 10000f;
			*uParam6 = 0.9f;
			*uParam7 = 1.1f;
			return 0x00000001;
			break;
		
		case 0x0000011C:
			StringCopy(sParam1, "scene_t_chaseD", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x00000113:
			StringCopy(sParam1, "scene_t_policeA", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 10000f;
			*uParam6 = 0.5f;
			*uParam7 = 0.75f;
			return 0x00000001;
			break;
		
		case 0x00000114:
			StringCopy(sParam1, "scene_t_policeB", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
		
		case 0x00000115:
			StringCopy(sParam1, "scene_t_policeC", 16);
			*uParam2 = 0x00000001;
			*uParam3 = 1000f;
			*uParam4 = 2000f;
			*uParam5 = 5000f;
			*uParam6 = 1f;
			*uParam7 = 1f;
			return 0x00000001;
			break;
	}
	StringCopy(sParam1, "", 16);
	*uParam2 = 0xFFFFFFFF;
	*uParam3 = -1f;
	*uParam4 = -1f;
	*uParam5 = -1f;
	*uParam6 = 0f;
	*uParam7 = 0f;
	return 0x00000000;
}

int func_92(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (func_94(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 0x00000000;
				break;
			
			case 0x00000001:
				func_93(&iVar0);
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

bool func_93(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	
	iVar0 = Global_1B416.f_936.f_21B.f_10E3;
	vVar1 = { Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] };
	if (func_59(vVar1, 0f, 0f, 0f, 0x00000000))
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

int func_94(int iParam0, var uParam1, char* sParam2)
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
			func_93(&iVar1);
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
			StringCopy(sParam2, func_98(Global_1B416.f_936.f_21B.f_90A[0x00000000]), 32);
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000001];
			StringCopy(sParam2, func_98(Global_1B416.f_936.f_21B.f_90A[0x00000001]), 32);
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam1 = Global_1B416.f_936.f_21B.f_906[0x00000002];
			StringCopy(sParam2, func_98(Global_1B416.f_936.f_21B.f_90A[0x00000002]), 32);
			return 0x00000001;
			break;
		
		case 0x0000000B:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			return func_94(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000A:
			return func_94(0x00000008, uParam1, sParam2);
			break;
		
		case 0x0000000D:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000E:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000F:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000000C:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000010:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000004A:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
			return func_94(0x000000D0, uParam1, sParam2);
			break;
		
		case 0x00000018:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000043:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000019:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001A:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001B:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003B:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003C:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000026:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000029:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002A:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002B:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002C:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000002D:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000031:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000030:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000033:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000034:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000042:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000037:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000038:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000039:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003D:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003E:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x0000003F:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000040:
			if (func_97(iParam0, &vVar0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 0x00000001;
			}
			break;
		
		case 0x00000041:
			if (func_97(iParam0, &vVar0, uParam1))
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
			if (func_95(0x00000000, 0x00000019, &uVar2, &fVar3))
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
			return func_94(0x000000DE, uParam1, sParam2);
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
			return func_94(0x00000125, uParam1, sParam2);
			break;
		
		case 0x00000127:
			return func_94(0x00000124, uParam1, sParam2);
			break;
		
		case 0x0000012B:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 0x00000001;
			break;
		
		case 0x0000012C:
			return func_94(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012D:
			return func_94(0x0000012F, uParam1, sParam2);
			break;
		
		case 0x0000012E:
			return func_94(0x0000012F, uParam1, sParam2);
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

int func_95(int iParam0, int iParam1, var uParam2, var uParam3)
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
					if (func_95(0x00000000, iParam1, uParam2, uParam3))
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
					if (func_95(0x00000000, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 0x00000001;
					}
					break;
				
				case 0x00000002:
					if (func_95(0x00000000, iParam1, uParam2, uParam3))
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
					if (func_95(0x00000000, 0x00000005, uParam2, uParam3))
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
					if (func_95(0x00000001, 0x00000020, uParam2, uParam3))
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
			return func_95(iParam0, 0x0000001A, uParam2, uParam3);
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
			if (func_95(iParam0, 0x0000003B, uParam2, uParam3))
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
			if (func_95(iParam0, 0x0000002F, uParam2, uParam3))
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
					if (func_96())
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
					if (func_95(iParam0, 0x00000082, uParam2, uParam3))
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

int func_96()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_97(int iParam0, var uParam1, var uParam2)
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
			return func_97(0x00000008, uParam1, uParam2);
			break;
		
		case 0x0000000A:
			return func_97(0x00000008, uParam1, uParam2);
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

char* func_98(int iParam0)
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

void func_99()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		unk_0x6DAD7906B73F064D(&(iLocal_447[iVar0]));
		unk_0x046C362CF15F1935(&(iLocal_450[iVar0]));
		if (iLocal_448[iVar0] != 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_448[iVar0]);
		}
		if (iLocal_451[iVar0] != 0x00000000)
		{
			unk_0x71199B01895C6202(iLocal_451[iVar0]);
		}
		if (!unk_0xEA6BC48857E0AC4C(&Local_458) && iLocal_461[iVar0] > 0x00000000)
		{
			unk_0xDB8844D4B7C60440(iLocal_461[iVar0], &Local_458);
		}
		iVar0++;
	}
	func_68(&uLocal_434, 0x00000000, 0x00000000);
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

