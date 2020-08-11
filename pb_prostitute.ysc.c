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
	vector3 vLocal_56 = { 0f, 0f, 0f };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
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
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	float fLocal_319 = 0f;
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
	var uLocal_337 = 15;
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
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 1;
	int iLocal_611 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	vLocal_56 = { 0f, 0f, 0f };
	iLocal_72 = 0xFFFFFFFF;
	iLocal_74 = 0xFFFFFFFF;
	iLocal_75 = 0xFFFFFFFF;
	iLocal_76 = 0xFFFFFFFF;
	iLocal_77 = 0xFFFFFFFF;
	iLocal_78 = 0xFFFFFFFF;
	iLocal_79 = 0xFFFFFFFF;
	iLocal_80 = 0xFFFFFFFF;
	iLocal_82 = 0xFFFFFFFF;
	iLocal_84 = 0xFFFFFFFF;
	iLocal_85 = 0xFFFFFFFF;
	iLocal_284 = 0xFFFFFFFF;
	fLocal_319 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_551(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if (func_550(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			unk_0x10FAF14A60A0DBE1();
		}
	}
	if (func_549(0x0000000D) || func_549(0x0000000E))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (!func_548() && !unk_0x8CD06866876216F2())
	{
		if (unk_0x2EBF608FFE6CA406(0x00000023))
		{
			func_539();
			func_538(0x00000001);
			func_533(&uLocal_337);
		}
	}
	SYSTEM::WAIT(0x00000000);
	iLocal_90 = iScriptParam_611;
	if (unk_0x8CD06866876216F2())
	{
		func_532();
		unk_0x37AD2AB54480FA6A(0x00000002, 0x00000000, unk_0xD803B885F5E47A62());
		func_527(0x00000000, 0xFFFFFFFF, 0x00000000);
		unk_0x256D93AFAE851A7A(0x00000000);
	}
	func_526();
	func_525(0x00000080);
	while (iLocal_60)
	{
		bVar0 = 0x00000001;
		func_522(&uLocal_337);
		if (func_548())
		{
			if (func_521(0x00000400))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xCCBA4C0B3BD2AB7B(unk_0x16F2683693E537C9()) && unk_0x8A83E339B374E53A(unk_0x16F2683693E537C9()))
					{
						func_525(0x00000400);
						unk_0xE7EE28867F07D06D(unk_0x16F2683693E537C9());
					}
				}
			}
			if (!func_521(0x00000400) && func_521(0x00000800))
			{
				unk_0x10FAF14A60A0DBE1();
			}
			if (!unk_0xC844350D5D58C99A(iLocal_90))
			{
				bVar0 = 0x00000000;
			}
			else if (!unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				bVar0 = 0x00000000;
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
		}
		if (!func_548() || !func_521(0x00000800))
		{
			func_514();
			if (func_548())
			{
				func_513();
				if (func_521(0x00000080))
				{
					iLocal_60 = 0x00000000;
				}
			}
			if (func_508())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0x00000000)
					{
						func_503(&uLocal_337);
					}
					func_501();
					func_499();
					switch (iLocal_285)
					{
						case 0x00000000:
							if (iLocal_284 == 0xFFFFFFFF)
							{
								if (unk_0x94C3EBF41911ED33(iLocal_90))
								{
									iLocal_284 = func_498();
								}
								else if (func_496())
								{
									iLocal_284 = 0x00000004;
								}
							}
							else if (func_491())
							{
								if (func_490())
								{
									if (func_548())
									{
										if (unk_0xAFE0D3608EDA7039(iLocal_90))
										{
											unk_0x509B8296EBA9B408(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0x00000000, 0x00000000);
										}
										else
										{
											unk_0x0C8A454B494DAA0D(iLocal_90);
										}
									}
									else
									{
										unk_0x509B8296EBA9B408(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0x00000000, 0x00000000);
									}
								}
								iLocal_285 = 0x00000001;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 0x00000001:
							if (func_488(iLocal_49, 0x00001000))
							{
								func_487();
							}
							if (func_486())
							{
								iLocal_285 = 0x00000002;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_482())
							{
								iLocal_285 = 0x00000003;
								func_480(&iLocal_49, 0x00000040);
								Global_78C8 = 0x00000001;
								func_489("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 0x00000002:
							func_98(&uLocal_337);
							break;
						
						case 0x00000003:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0x00000000);
			}
			func_1();
		}
		SYSTEM::WAIT(0x00000000);
	}
	if (func_488(iLocal_49, 0x00000002))
	{
	}
	func_489(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_539();
	func_533(&uLocal_337);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 0x00000001;
	}
	else
	{
		iLocal_60 = 0x00000000;
	}
}

void func_3()
{
	if (iLocal_286 > 0x00000000)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
			{
				if (!unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
				{
					func_97();
				}
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_91) || unk_0x437347B10A200C4B(iLocal_91, 0x00000000))
	{
		func_96(0x0000000F);
	}
	switch (iLocal_286)
	{
		case 0x00000000:
			if (!iLocal_287 == 0x00000000)
			{
				iLocal_286 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_89();
			break;
		
		case 0x00000002:
			func_88();
			break;
		
		case 0x00000003:
			func_71();
			break;
		
		case 0x00000004:
			func_62();
			break;
		
		case 0x00000005:
			func_59();
			break;
		
		case 0x00000006:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x0E763797) == 0x00000007)
				{
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 0x00002710 || !unk_0x12DE711B1C681E9E(iLocal_90, iLocal_91, 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_489("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		
		case 0x00000007:
			if (!unk_0xD1B4D22E0BA9B0C8(func_58(0x00000000), func_58(0x00000001), func_58(0x00000002), func_58(0x00000003)))
			{
				unk_0x10FEEAFF01E32639(func_58(0x00000000), func_58(0x00000001), func_58(0x00000002), func_58(0x00000003));
			}
			else
			{
				unk_0xE9362E4D600DD12A(iLocal_91, iLocal_92, vLocal_88, (unk_0xD890711CFD5AF100(iLocal_92) * 0.65f), 0x00000000, 0x00000000, 0x000C01AB, 4f, -1f);
				iLocal_286 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (SYSTEM::VDIST2(vLocal_88, unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001)) < 25f && unk_0xD1960163A3042274(iLocal_91, 0x93A5526E) != 0x00000001)
			{
				iLocal_288 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000003);
				iLocal_286 = 0x0000000B;
			}
			if (func_55(iLocal_91))
			{
				func_96(0x0000000F);
			}
			break;
		
		case 0x0000000B:
			func_4();
			break;
		
		case 0x0000000C:
			func_96(0x0000000F);
			break;
		
		case 0x0000000F:
			if (unk_0xC844350D5D58C99A(iLocal_90) && unk_0xC844350D5D58C99A(iLocal_92))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_90, iLocal_92, 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(iLocal_91, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_91, 0xCE98FBB3) != 0x00000001)
						{
							unk_0x75CDA8644CD3B5F5(iLocal_90, 0x00000000, 0x01010000);
						}
					}
				}
				else
				{
					func_2(0x00000000);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_293)
	{
		case 0x00000000:
			unk_0x058FE8022E1E3C13(iLocal_90, 0.916f);
			if (func_42(iLocal_91))
			{
				func_40(&iLocal_113);
				iLocal_293 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), unk_0x68F4C0EC296D3901(iLocal_90, 0x00000000)) < 22500f)
			{
				func_38();
			}
			func_35(iLocal_92);
			if (func_33(iLocal_91))
			{
				func_11(&uLocal_116, "pbproau", "pbpro_pic", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				func_96(0x0000000F);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x0E763797) == 0x00000007)
				{
					func_5(&iLocal_49, 0x00000200);
					iLocal_293 = 0x00000003;
				}
			}
			break;
		
		case 0x00000003:
			func_96(0x0000000F);
			break;
		
		case 0x00000005:
			func_96(0x0000000F);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002);
}

bool func_10(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_12(sParam2, iParam3, 0x00000000);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
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
					func_31();
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
		if (func_30(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_29();
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
				func_22();
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
				if (func_21())
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
			if (func_20())
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
			func_19();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_18();
		func_13();
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
		func_31();
	}
	return 0x00000000;
}

void func_13()
{
	if (!func_14())
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

int func_14()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_17())
	{
		return 0x00000000;
	}
	if (func_15(unk_0xD803B885F5E47A62()))
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

bool func_15(int iParam0)
{
	return func_16(iParam0, 0x00000014);
}

bool func_16(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_17()
{
	return 0xFFFFFFFF;
}

void func_18()
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

void func_19()
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

int func_20()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_21()
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

void func_22()
{
	if (func_549(0x0000000E))
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
		Global_4C1E = func_23();
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

int func_23()
{
	func_24();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_24()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_27(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_26(unk_0x16F2683693E537C9());
			if (func_25(iVar0) && (!func_549(0x0000000E) || Global_1AFFD))
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

void func_29()
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

bool func_30(int iParam0, int iParam1)
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

void func_31()
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_33(int iParam0)
{
	if (func_34())
	{
		if (!unk_0x6FAACDB2BF63CD65(unk_0x134B62B726CEC8E6(iParam0), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_34()
{
	if (Global_5551)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_35(int iParam0)
{
	if (iLocal_288 != 0x00000001 && iLocal_288 != 0x00000002)
	{
		return;
	}
	if (func_37())
	{
		func_36(&iParam0);
	}
}

void func_36(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
	{
		vVar0 = { 0f, 0f, -0.1f };
		vVar1 = { 0f, 0f, 0f };
		unk_0xDFC6BA855748EB10(*uParam0, 0x00000001, vVar0, vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
	}
}

bool func_37()
{
	return unk_0xDDCA9A4E51DADA2B(iLocal_90, 0x3438B9BD);
}

void func_38()
{
	unk_0xC2127C0F64D6A3B9();
	func_39();
}

void func_39()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_40(int iParam0)
{
	func_41(iParam0, 0f);
}

void func_41(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

int func_42(int iParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sLocal_61))
	{
		sLocal_61 = func_50(iParam0, 0x00000000, 0x00000000);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752(sLocal_61))
	{
		return 0x00000000;
	}
	else
	{
		func_43(iLocal_90, func_49(), 0x00000001, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 0x00000001);
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_43(iParam0, func_49(), 0x00000000, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 0x00000001);
		}
		func_489("anim_dict has loaded, triggering anims?");
		func_480(&iLocal_49, 0x00000200);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_43(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000001);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		return;
	}
	iLocal_48 = unk_0x6C3F127AAF415E69();
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) && func_48(0x00000000, 0x00000001))
	{
		if (iLocal_48 != 0x00000004)
		{
			unk_0xA79E2388E9C0B0DB(0x00000004);
		}
	}
	bVar1 = func_47(iVar0);
	sVar2 = func_50(iParam0, 0x00000000, 0x00000000);
	if (!unk_0xB4AE0788C1587752(sVar2))
	{
		unk_0x3F423BF5B8125A50(sVar2);
	}
	else
	{
		unk_0xDD353D0E9C789D0E(&iVar3);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_44(0x00000000, bParam2, bParam1, bVar1), 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_44(0x00000001, bParam2, bParam1, bVar1), 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_44(0x00000002, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_44(0x00000003, bParam2, bParam1, bVar1), 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xC6EB89C59F2AF6B8(0x00000000, sVar2, func_44(0x00000004, bParam2, bParam1, bVar1), 4f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x75ABDC5F81978924(iVar3);
		unk_0x78ADC381772E3D54(iParam0, iVar3);
		if (bParam4)
		{
			unk_0xF82EA857DA10E0CD(&iVar3);
		}
	}
}

char* func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(0x00000012);
					}
					else
					{
						sVar0 = func_46(0x00000017);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(0x00000008);
				}
				else
				{
					sVar0 = func_46(0x0000000D);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(0x00000012);
				}
				else
				{
					sVar0 = func_45(0x00000017);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(0x00000008);
			}
			else
			{
				sVar0 = func_45(0x0000000D);
			}
			break;
		
		case 0x00000001:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(0x00000013);
					}
					else
					{
						sVar0 = func_46(0x00000018);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(0x00000009);
				}
				else
				{
					sVar0 = func_46(0x0000000E);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(0x00000013);
				}
				else
				{
					sVar0 = func_45(0x00000018);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(0x00000009);
			}
			else
			{
				sVar0 = func_45(0x0000000E);
			}
			break;
		
		case 0x00000002:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(0x00000014);
					}
					else
					{
						sVar0 = func_46(0x00000019);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(0x0000000A);
				}
				else
				{
					sVar0 = func_46(0x0000000F);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(0x00000014);
				}
				else
				{
					sVar0 = func_45(0x00000019);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(0x0000000A);
			}
			else
			{
				sVar0 = func_45(0x0000000F);
			}
			break;
		
		case 0x00000003:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(0x00000015);
					}
					else
					{
						sVar0 = func_46(0x0000001A);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(0x0000000B);
				}
				else
				{
					sVar0 = func_46(0x00000010);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(0x00000015);
				}
				else
				{
					sVar0 = func_45(0x0000001A);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(0x0000000B);
			}
			else
			{
				sVar0 = func_45(0x00000010);
			}
			break;
		
		case 0x00000004:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(0x00000016);
					}
					else
					{
						sVar0 = func_46(0x0000001B);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(0x0000000C);
				}
				else
				{
					sVar0 = func_46(0x00000011);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(0x00000016);
				}
				else
				{
					sVar0 = func_45(0x0000001B);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(0x0000000C);
			}
			else
			{
				sVar0 = func_45(0x00000011);
			}
			break;
		
		case 0x00000005:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_46(0x00000003);
				}
				else
				{
					sVar0 = func_46(0x00000002);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(0x00000003);
			}
			else
			{
				sVar0 = func_45(0x00000002);
			}
			break;
		
		case 0x00000006:
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "into_proposition_male";
			break;
		
		case 0x00000001:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 0x00000002:
			sVar0 = "proposition_loop_male";
			break;
		
		case 0x00000003:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 0x00000004:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 0x00000005:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 0x00000006:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 0x00000007:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 0x00000008:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 0x00000009:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 0x0000000A:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 0x0000000B:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 0x0000000C:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 0x0000000D:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 0x0000000E:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 0x0000000F:
			sVar0 = "sex_loop_male";
			break;
		
		case 0x00000010:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 0x00000011:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 0x00000012:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 0x00000013:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 0x00000014:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 0x00000015:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 0x00000016:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 0x00000017:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 0x00000018:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 0x00000019:
			sVar0 = "BJ_loop_male";
			break;
		
		case 0x0000001A:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 0x0000001B:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 0x00000001:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 0x00000002:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 0x00000003:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 0x00000004:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 0x00000005:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 0x00000006:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 0x00000007:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 0x00000008:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 0x00000009:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 0x0000000A:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 0x0000000B:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 0x0000000C:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 0x0000000D:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 0x0000000E:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 0x0000000F:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 0x00000010:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 0x00000011:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 0x00000012:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 0x00000013:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 0x00000014:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 0x00000015:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 0x00000016:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 0x00000017:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 0x00000018:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 0x00000019:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 0x0000001A:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 0x0000001B:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_47(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x84D77E93:
			case 0xFDB5DC9C:
			case 0xD158A20D:
			case 0x205A6F50:
			case 0x04163EC9:
			case 0x8F7B4F4E:
			case 0xE461FA3B:
			case 0x793A200A:
			case 0x93775997:
			case 0x652B6E19:
			case 0xDA1C0701:
			case 0xA95DAB1C:
			case 0x6D8780E5:
			case 0x7808B340:
			case 0x7B7DBC2F:
			case 0x7EFF5584:
			case 0xA3D7E5D4:
			case 0x47186FD7:
			case 0xED0C8CA8:
			case 0x21FA1EE8:
			case 0x48415DE9:
			case 0xF47EB4CA:
			case 0x1E6B77B1:
			case 0xC5168F32:
			case 0x49F1A7A9:
			case 0xDA9AFDA8:
			case 0x3ACDA851:
			case 0x685F9933:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

bool func_48(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (bParam0)
	{
		bVar0 = unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xA4FD7964FEE91ED8(0x00000001) == 0x00000004;
		}
	}
	return bVar0;
}

bool func_49()
{
	return iLocal_288 == 0x00000000;
}

char* func_50(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000001);
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (func_47(iVar0))
			{
				if ((!func_48(0x00000000, 0x00000001) || iParam2) && !bParam1)
				{
					return func_54();
				}
				else
				{
					return func_53();
				}
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == 0x56CDEE7D)
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_48(0x00000000, 0x00000001) || iParam2) && !bParam1)
	{
		return func_52();
	}
	return func_51();
}

char* func_51()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_55(int iParam0)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x36646919F20EAFFC(iParam0) || !func_57(iParam0, iLocal_92, 0xFFFFFFFF))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			unk_0xBAFED2F6486F771A(iParam0, 0x00030010, 0x00000001);
			if (func_56())
			{
				unk_0xEEB67C3D0A71A47B(iParam0, vVar0, 300f, 0xFFFFFFFF, 0x00000001, 0x00000001);
			}
			else if (!unk_0x437347B10A200C4B(unk_0x710D117BA581D7D2(iParam0), 0x00000000))
			{
				unk_0x6C3AE6E278DB3D0E(iParam0, unk_0x710D117BA581D7D2(iParam0), 0x00000000, 0x00000010);
			}
			else
			{
				unk_0xEEB67C3D0A71A47B(iParam0, vVar0, 300f, 0xFFFFFFFF, 0x00000001, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

int func_56()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, iParam2, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

float func_58(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001) };
	vVar1 = { vLocal_88 };
	if (iParam0 == 0x00000000)
	{
		if (vVar0.x < vVar1.x)
		{
			return (vVar0.x - 20f);
		}
		else
		{
			return (vVar1.x - 20f);
		}
	}
	if (iParam0 == 0x00000001)
	{
		if (vVar0.y < vVar1.y)
		{
			return (vVar0.y - 20f);
		}
		else
		{
			return (vVar1.y - 20f);
		}
	}
	if (iParam0 == 0x00000002)
	{
		if (vVar0.x > vVar1.x)
		{
			return (vVar0.x + 20f);
		}
		else
		{
			return (vVar1.x + 20f);
		}
	}
	if (vVar0.y > vVar1.y)
	{
		return (vVar0.y + 20f);
	}
	return (vVar1.y + 20f);
}

void func_59()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x0E763797) == 0x00000001)
				{
					if (unk_0x4F1B602325013CC2(iLocal_90) > 0x00000000)
					{
						if (unk_0xC42A92762C58E1B9(iLocal_90, iLocal_92, 0x00000000))
						{
							func_489("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							unk_0xDD353D0E9C789D0E(&iLocal_95);
							unk_0xE072601B4380E9DF(0x00000000, iLocal_92, 10f, 0x000C00AB);
							unk_0x75ABDC5F81978924(iLocal_95);
							unk_0x78ADC381772E3D54(iLocal_91, iLocal_95);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							vLocal_88 = { func_60(unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001)) };
							unk_0x3F423BF5B8125A50(func_50(iLocal_90, 0x00000000, 0x00000000));
							iLocal_286 = 0x00000007;
							iLocal_62 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		if (SYSTEM::VDIST2(vParam0, func_61(iVar1)) < SYSTEM::VDIST2(vParam0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			vVar0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 0x00000001:
			vVar0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 0x00000002:
			vVar0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 0x00000003:
			vVar0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 0x00000004:
			vVar0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 0x00000005:
			vVar0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 0x00000006:
			vVar0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 0x00000007:
			vVar0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 0x00000008:
			vVar0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 0x00000009:
			vVar0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 0x0000000A:
			vVar0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 0x0000000B:
			vVar0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 0x0000000C:
			vVar0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 0x0000000D:
			vVar0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 0x0000000E:
			vVar0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 0x0000000F:
			vVar0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 0x00000010:
			vVar0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 0x00000011:
			vVar0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 0x00000012:
			vVar0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 0x00000013:
			vVar0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 0x00000014:
			vVar0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 0x00000015:
			vVar0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 0x00000016:
			vVar0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 0x00000017:
			vVar0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 0x00000018:
			vVar0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 0x00000019:
			vVar0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 0x0000001A:
			vVar0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 0x0000001B:
			vVar0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 0x0000001C:
			vVar0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 0x0000001D:
			vVar0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 0x0000001E:
			vVar0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 0x0000001F:
			vVar0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return vVar0;
}

void func_62()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
			{
				fVar0 = unk_0x9C66D99E63E8E24C(iLocal_92);
				if (unk_0x12DE711B1C681E9E(iLocal_91, iLocal_90, 15f, 15f, 5f, 0x00000000, 0x00000001, 0x00000000) && fVar0 <= 1f)
				{
					func_69(iLocal_90);
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_548())
						{
							if (unk_0xAFE0D3608EDA7039(iLocal_91))
							{
								unk_0xBC43ED9FE28DB191(iLocal_91);
							}
						}
						else
						{
							unk_0xBC43ED9FE28DB191(iLocal_91);
						}
						iLocal_66 = unk_0x09AC81E49EA267F7(0x00000000, 0x00002710);
						if (iLocal_66 > 0x000009C4)
						{
							unk_0xA3BF0AA5A2608191(iLocal_90);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							unk_0xDD353D0E9C789D0E(&iLocal_95);
							unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_92, 0xFFFFFFFF, 0x00000000, 1f, 0x00800001, 0x00000000);
							unk_0x93D47DFD0AE94949(0x00000000, 0xFFFFFFFF);
							unk_0x75ABDC5F81978924(iLocal_95);
							unk_0x78ADC381772E3D54(iLocal_90, iLocal_95);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							func_489("other GIVES MONEY");
							iLocal_286 = 0x00000005;
						}
						else
						{
							func_68();
							func_63();
							if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
							{
								if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
								{
									if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
									{
										unk_0xF82EA857DA10E0CD(&iLocal_95);
										unk_0xDD353D0E9C789D0E(&iLocal_95);
										unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x000001F4, 0x000007D0));
										unk_0xE072601B4380E9DF(0x00000000, iLocal_92, 10f, 0x000C00AB);
										unk_0x75ABDC5F81978924(iLocal_95);
										unk_0x78ADC381772E3D54(iLocal_91, iLocal_95);
										unk_0xF82EA857DA10E0CD(&iLocal_95);
										iLocal_62 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
							func_489("prostitute REFUSED MONEY 2");
							if (func_548())
							{
								if (unk_0xAFE0D3608EDA7039(iLocal_91))
								{
									unk_0xBC43ED9FE28DB191(iLocal_91);
								}
							}
							else
							{
								unk_0xBC43ED9FE28DB191(iLocal_91);
							}
							iLocal_286 = 0x00000006;
						}
					}
				}
				else
				{
					if (func_548())
					{
						if (unk_0xAFE0D3608EDA7039(iLocal_91))
						{
							unk_0xBC43ED9FE28DB191(iLocal_91);
						}
					}
					else
					{
						unk_0xBC43ED9FE28DB191(iLocal_91);
					}
					func_97();
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_548())
				{
					if (unk_0xAFE0D3608EDA7039(iLocal_91))
					{
						unk_0xBC43ED9FE28DB191(iLocal_91);
					}
				}
				else
				{
					unk_0xBC43ED9FE28DB191(iLocal_91);
				}
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iLocal_90) || unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return 0x00000001;
	}
	if (!func_548())
	{
		if (unk_0x405E212DDE472467(iLocal_90, 0x00000001))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 0x471C4000, 0x00000000);
		}
		else if (func_488(iLocal_49, 0x00400000))
		{
			unk_0xDD353D0E9C789D0E(&iVar0);
			if (func_488(iLocal_73, 0x00080000))
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, func_67(iLocal_284), func_66(0x00000007), 8f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_64(0x00000001);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iLocal_90, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
			func_480(&iLocal_49, 0x00004000);
			func_40(&iLocal_107);
		}
		return 0x00000001;
	}
	if (unk_0x405E212DDE472467(iLocal_90, 0x00000001))
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 0x471C4000, 0x00000000);
			return 0x00000001;
		}
		else
		{
			unk_0x0C8A454B494DAA0D(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0x00000000:
			if (func_488(iLocal_49, 0x00400000))
			{
				iLocal_54 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_488(iLocal_73, 0x00080000))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(0x00000007), 8f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
					return 0x00000000;
				}
			}
			iLocal_54 = 0x00000002;
			break;
		
		case 0x00000002:
			if (func_488(iLocal_73, 0x00080000))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					if (unk_0xD1960163A3042274(iLocal_90, 0x87B9A382) == 0x00000007)
					{
						func_64(0x00000000);
						iLocal_54 = 0x00000003;
					}
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
				}
			}
			else if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				func_64(0x00000000);
				iLocal_54 = 0x00000003;
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 0x00000003:
			func_480(&iLocal_49, 0x00004000);
			func_40(&iLocal_107);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_64(bool bParam0)
{
	vector3 vVar0;
	
	if (((unk_0xC7441A1068F3F171(iLocal_90) || unk_0x94C3EBF41911ED33(iLocal_90)) || unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(0x00000000))) || unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(0x00000001)))
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001) };
	if (!unk_0xDB27A414FA5965A7(vVar0, func_65(0x00000000), 20f, 0x00000001) && !unk_0xDB27A414FA5965A7(vVar0, func_65(0x00000001), 20f, 0x00000001))
	{
		if (bParam0)
		{
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
		}
		else
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 0x471C4000, 0x00000000);
		}
		return;
	}
	if (!bParam0)
	{
		unk_0x4A35AD9FC803369E(iLocal_90, vVar0, 20f, 0x00000000);
	}
	else
	{
		unk_0x4A35AD9FC803369E(0x00000000, vVar0, 20f, 0x00000000);
	}
}

char* func_65(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "idle_intro";
			break;
		
		case 0x00000001:
			return "idle_a";
			break;
		
		case 0x00000002:
			return "idle_b";
			break;
		
		case 0x00000003:
			return "idle_c";
			break;
		
		case 0x00000004:
			return "idle_wait";
			break;
		
		case 0x00000005:
			return "idle_reject";
			break;
		
		case 0x00000008:
			return "idle_reject_loop_a";
			break;
		
		case 0x00000009:
			return "idle_reject_loop_b";
			break;
		
		case 0x0000000A:
			return "idle_reject_loop_c";
			break;
		
		case 0x0000000B:
			return "idle_outro";
			break;
		
		case 0x00000006:
			return "reject_2_idle";
			break;
		
		case 0x00000007:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 0x00000001:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 0x00000003:
		case 0x00000004:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 0x00000002:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		if (func_23() == 0x00000002)
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
		}
		else
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
		}
	}
}

void func_69(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (func_70(iParam0))
		{
			unk_0x9DD8618CA5BF832D(iParam0, 0x0000006D, 0x00000001);
		}
	}
}

int func_70(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if ((unk_0xB4ECF989E2C1DAC8(iParam0, func_67(iLocal_284), func_66(0x00000001), 0x00000003) || unk_0xB4ECF989E2C1DAC8(iParam0, func_67(iLocal_284), func_66(0x00000002), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_67(iLocal_284), func_66(0x00000003), 0x00000003))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_71()
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x0E763797) == 0x00000001)
				{
					if (unk_0x4F1B602325013CC2(iLocal_90) > 0x00000001)
					{
						if (unk_0x12DE711B1C681E9E(iLocal_90, iLocal_91, 20f, 20f, 10f, 0x00000000, 0x00000001, 0x00000000))
						{
							fVar0 = unk_0x9C66D99E63E8E24C(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_72(0x00000000);
								iLocal_62 = unk_0x1C0640BA9A7327B3();
								iLocal_66 = unk_0x09AC81E49EA267F7(0x00000FA0, 0x00001F40);
								func_489("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 0x00000004;
							}
						}
						else
						{
							func_489("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_548())
	{
		if (bParam0)
		{
			unk_0x2E1E5367A885F9B7(iLocal_90, "PROSTITUTE_GROUP", 0x00000000);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (func_488(iLocal_49, 0x00400000))
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
			unk_0xDD353D0E9C789D0E(&iVar1);
			unk_0xC6EB89C59F2AF6B8(0x00000000, func_67(iLocal_284), func_66(0x00000000), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, func_67(iLocal_284), func_66(iVar0), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, func_67(iLocal_284), func_66(0x00000004), 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar1);
			unk_0x78ADC381772E3D54(iLocal_90, iVar1);
			unk_0xF82EA857DA10E0CD(&iVar1);
		}
		return 0x00000001;
	}
	switch (iLocal_53)
	{
		case 0x00000000:
			if (bParam0)
			{
				unk_0x2E1E5367A885F9B7(iLocal_90, "PROSTITUTE_GROUP", 0x00000000);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_53 = 0x00000001;
			break;
		
		case 0x00000001:
			if (func_488(iLocal_49, 0x00400000))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(0x00000000), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_53 = 0x00000002;
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x87B9A382) == 0x00000007)
				{
					iVar0 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(iVar0), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_53 = 0x00000003;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 0x00000003:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x87B9A382) == 0x00000007)
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(0x00000004), 2f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_53 = 0x00000004;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 0x00000004:
			iLocal_53 = 0x00000000;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_73()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		switch (func_23())
		{
			case 0x00000000:
				if (!func_74(iLocal_90))
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				}
				break;
			
			case 0x00000001:
				if (!func_74(iLocal_90))
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				}
				break;
			
			case 0x00000002:
				if (!func_74(iLocal_90))
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				}
				else
				{
					unk_0xC8B576D6F470FFC6(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				}
				break;
			}
	}
}

bool func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)
{
	if (func_76(iParam0) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (func_23() == 0x00000000)
	{
		iVar0 = Global_1B416.f_273C.f_1[iParam0 /*11*/][0x00000000];
	}
	else if (func_23() == 0x00000001)
	{
		iVar0 = Global_1B416.f_273C.f_1[iParam0 /*11*/][0x00000001];
	}
	else if (func_23() == 0x00000002)
	{
		iVar0 = Global_1B416.f_273C.f_1[iParam0 /*11*/][0x00000002];
	}
	return iVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000008)
		{
			if (func_76(iVar0) > 0x00000000)
			{
				if ((func_83(iParam0, iVar0) && func_79(iParam0, iVar0)) && func_78(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return 0xFFFFFFFF;
}

int func_78(int iParam0, int iParam1)
{
	if (unk_0x61C907EA8258B04D(iParam0, Global_1B416.f_273C.f_1[iParam1 /*11*/].f_A))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (!func_80(iParam0, iParam1, iVar0))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

bool func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	return unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_1B416.f_273C.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return 0xFFFFFFFF;
}

int func_82(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000002;
			break;
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (!func_84(iParam0, iParam1, iVar0))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

bool func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(iParam2);
	return unk_0x36C584991B4C183F(iParam0, iVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_1B416.f_273C.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return 0xFFFFFFFF;
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000002;
			break;
	}
	return iVar0;
}

void func_87(char* sParam0)
{
	if (!unk_0x562F77A7F33D2E46(sParam0))
	{
		unk_0x8BC9595FD2792B5D(sParam0);
	}
}

void func_88()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
			{
				fVar0 = unk_0x9C66D99E63E8E24C(iLocal_92);
				if (unk_0xD1960163A3042274(iLocal_91, 0xEFC8537E) == 0x00000007 || fVar0 <= 1f)
				{
					unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_92), &vVar2, &vVar1);
					vVar3 = { vVar1 - vVar2 };
					vVar3 = { vVar3 / Vector(2f, 2f, 2f) };
					vVar4 = { unk_0x68E4ADDDDCD7BDDE(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar5 = { unk_0x68E4ADDDDCD7BDDE(iLocal_92, 0.2f, 0.2f, 0f) };
					vVar6 = { unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001) };
					if (SYSTEM::VDIST(vVar6, vVar5) < SYSTEM::VDIST(vVar6, vVar4))
					{
						vVar4 = { vVar5 };
					}
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					unk_0x96167B03C5A77156(0x00000000, vVar4.x, vVar4.y, vVar4.z, 1f, 0xFFFFFFFF, 0.5f, 0x00002000, 0x471C4000);
					unk_0xF96A174EE26D7588(0x00000000, iLocal_91, 0x00000000);
					unk_0x93D47DFD0AE94949(0x00000000, 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_90, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					func_489("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 0x00000003;
				}
				else
				{
					func_489("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()
{
	vector3 vVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_91, iLocal_92, 0x00000000))
			{
				if (func_91(&iLocal_92))
				{
					if (func_90(unk_0x68F4C0EC296D3901(iLocal_91, 0x00000001), 0x41F00000))
					{
						return;
					}
					vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001) };
					if (unk_0xDE5F9F54005367A1(vVar0, &vVar0, 0x00000008, 0x40400000, 0x00000000))
					{
						unk_0x9992C3A6A1766168(iLocal_91, 1f);
						unk_0x7D9DF2375774CFE5(iLocal_91, 0.2f);
						unk_0x66ADF7B538DC60DC(iLocal_91, 0.05f);
						unk_0x27F3789FF35EEDF1(iLocal_91, iLocal_92, vVar0, 0f, 0x00000003, 360f, 0x00000001);
						unk_0x0C8C0C840C2D1AD2(iLocal_91, iLocal_90, 0xFFFFFFFF, 0x00000800, 0x00000004);
						func_489("OTHER TOLD TO PULL OVER");
						iLocal_286 = 0x00000002;
					}
				}
				else
				{
					func_489("EXIT - Vehicle is not suitable");
					func_96(0x0000000F);
				}
			}
			else
			{
				func_489("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(0x0000000F);
			}
		}
		else
		{
			func_489("EXIT - OTHER VEHICLE DEAD");
			func_96(0x0000000F);
		}
	}
	else
	{
		func_489("EXIT - OTHER ped INJURED");
		func_96(0x0000000F);
	}
}

bool func_90(vector3 vParam0, int iParam1)
{
	if (func_548())
	{
		return unk_0x029064EA9141FCC2(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
	}
	return (unk_0x9E9FD30CF64A88A8(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || unk_0x029064EA9141FCC2(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		iVar0 = unk_0x134B62B726CEC8E6(*iParam0);
		if (func_94(iVar0, 0x00000000) && func_93(*iParam0))
		{
			if (unk_0xD6DF381716822EFE(*iParam0) > 0x00000000)
			{
				iVar1 = unk_0x2720E241B5CCF780(*iParam0);
				if (((iVar1 == 0x00000000 && unk_0xBBA8A868118C90ED(*iParam0, 0x00000000, 0x00000000)) && (!unk_0x1150BCE24B1630AC(*iParam0, 0x00000001) && !unk_0x1150BCE24B1630AC(*iParam0, 0x00000000))) || unk_0xA30B8362589C124A(*iParam0, 0x00000000, 0x00000000) == iLocal_90)
				{
					if (func_47(*iParam0))
					{
						if (!func_488(iLocal_49, 0x00008000))
						{
							func_480(&iLocal_49, 0x00008000);
							if (!func_488(iLocal_49, 0x00000008))
							{
								unk_0x4E09E67A27F104A7(func_92());
								func_480(&iLocal_49, 0x00000008);
							}
						}
					}
					else
					{
						if (func_488(iLocal_49, 0x00008000))
						{
							func_5(&iLocal_49, 0x00008000);
						}
						if (func_488(iLocal_49, 0x00000008))
						{
							if (unk_0x59F02DA2266A744C(func_92()))
							{
								unk_0x413168EF79E35C7B(func_92());
								func_5(&iLocal_49, 0x00000008);
							}
						}
					}
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

char* func_92()
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000031)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 0x00000011 && iVar1 != 0x00000012) && iVar1 != 0x00000013) && iVar1 != 0x00000014) && iVar1 != 0x00000015) && iVar1 != 0x00000016)
				{
					if (unk_0x0ECB5CA5140957AD(iParam0, iVar1) != 0xFFFFFFFF)
					{
						StringCopy(&cVar3, unk_0xAE6250B518DF3C3B(iParam0, iVar1, unk_0x0ECB5CA5140957AD(iParam0, iVar1)), 16);
						iVar2 = unk_0x12AB0310C2281427(&cVar3);
						if (iVar2 != 0x00000000)
						{
							if (iVar2 == unk_0x12AB0310C2281427("SABRE_CAG"))
							{
								return 0x00000000;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x134B62B726CEC8E6(iParam0))
		{
			case 0x9472CD24:
				if ((!unk_0xDD62D560CFE11A27(iParam0, 0x00000002) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000003)) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000004))
				{
					return 0x00000000;
				}
				break;
			
			case 0x4201A843:
				if (((!unk_0xDD62D560CFE11A27(iParam0, 0x00000002) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000003)) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000004)) && !unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
				{
					return 0x00000000;
				}
				break;
			
			case 0x98F65A5E:
				if (!unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
				{
					return 0x00000000;
				}
				break;
			
			case 0xD757D97D:
				if (unk_0x0ECB5CA5140957AD(iParam0, 0x0000000A) == 0xFFFFFFFF)
				{
					return 0x00000000;
				}
				break;
			
			case 0x665F785D:
				if (unk_0xDD62D560CFE11A27(iParam0, 0x00000001))
				{
					return 0x00000000;
				}
				break;
		}
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x84D77E93:
			case 0xD158A20D:
			case 0x205A6F50:
			case 0x04163EC9:
			case 0x8F7B4F4E:
			case 0x589D7B2F:
			case 0x8DB2A5D9:
			case 0xAC3C0E50:
			case 0xF69542B7:
			case 0xEF4E5E35:
			case 0x65FA4F90:
			case 0x632CFD0D:
			case 0x19E59D55:
			case 0x6C40A6DC:
			case 0x36CE3DC4:
			case 0x3854C58D:
			case 0x05128863:
			case 0x73950148:
			case 0x6F727ECC:
			case 0xFE512F48:
			case 0xBB736A9B:
			case 0xE461FA3B:
			case 0xD60F2985:
			case 0x0BCC84E2:
			case 0xF39668AC:
			case 0x793A200A:
			case 0x93775997:
			case 0x652B6E19:
			case 0xDA1C0701:
			case 0x8E1C66A3:
			case 0xBAF8EB5B:
			case 0x92ABFEDD:
			case 0xA95DAB1C:
			case 0x8B7ECC39:
			case 0x6D8780E5:
			case 0x7808B340:
			case 0x51EA33D0:
			case 0x54A17ED2:
			case 0xE09ACFC0:
			case 0x5FF71292:
			case 0xC62E7E2C:
			case 0x7B7DBC2F:
			case 0x58649EBC:
			case 0x7EFF5584:
			case 0xA3D7E5D4:
			case 0x5411F27D:
			case 0x47186FD7:
			case 0xB2399742:
			case 0xED0C8CA8:
			case 0x21FA1EE8:
			case 0x48415DE9:
			case 0xF47EB4CA:
			case 0x1E6B77B1:
			case 0xC5168F32:
			case 0x38E4D8B9:
			case 0x22DBE905:
			case 0x8166F17F:
			case 0x400D12F8:
			case 0x6C6BA10B:
			case 0xE9ED0B6B:
			case 0x49F1A7A9:
			case 0xDA9AFDA8:
			case 0x3ACDA851:
			case 0x919477B0:
			case 0xDBEF865B:
			case 0x685F9933:
			case 0xC4E117AC:
				return 0x00000001;
				break;
		}
		if (unk_0x1F099C9E2AE4874D(iParam0) == 0x378B2713 && unk_0x134B62B726CEC8E6(iParam0) == joaat("slamvan"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_94(int iParam0, bool bParam1)
{
	if ((((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0)) || unk_0x7D8B2A8F9EA82DB7(iParam0))
	{
		return 0x00000000;
	}
	if (func_95(iParam0))
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0x00000000;
		}
	}
	if (((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == 0x34DBA661) || iParam0 == 0xF34DFB25) || iParam0 == 0xF8C2E0E7) || iParam0 == 0x71CBEA98) || iParam0 == 0x6068AD86) || iParam0 == 0x3D7C6410) || iParam0 == 0x1DD4C0FF) || iParam0 == 0x1A861243) || iParam0 == 0xC7E55211) || iParam0 == 0xE1C03AB0) || iParam0 == 0x185E2FF3)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_95(int iParam0)
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

void func_96(int iParam0)
{
	iLocal_286 = iParam0;
}

void func_97()
{
	if (func_548())
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0xA3BF0AA5A2608191(iLocal_90);
			unk_0xBC43ED9FE28DB191(iLocal_90);
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(iLocal_90);
		unk_0xBC43ED9FE28DB191(iLocal_90);
	}
	iLocal_91 = 0x00000000;
	iLocal_92 = 0x00000000;
	unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(0x00000004), 2f, -2f, 0xFFFFFFFF, 0x00000001, unk_0x79833B02DBD2A244(0f, 0.9f), 0x00000000, 0x00000000, 0x00000000);
	func_96(0x00000000);
	iLocal_287 = 0x00000000;
	iLocal_285 = 0x00000001;
}

void func_98(var uParam0)
{
	if (!func_488(iLocal_49, 0x00000020))
	{
		iLocal_285 = 0x00000001;
	}
	if (iLocal_286 > 0x00000001 && iLocal_286 != 0x0000000C)
	{
		if (!func_488(iLocal_49, 0x02000000))
		{
			if (func_548())
			{
				if (Global_193B21 || func_472())
				{
					func_471(0x00000000);
					func_480(&iLocal_49, 0x02000000);
				}
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				if (func_488(iLocal_49, 0x00100000) || func_488(iLocal_49, 0x00002000))
				{
					func_471(0x00000000);
					func_480(&iLocal_49, 0x02000000);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0x00000000:
			if (func_488(iLocal_49, 0x00004000) || func_488(iLocal_49, 0x00800000))
			{
				if (!func_10(&iLocal_107))
				{
					func_470(&iLocal_107);
				}
				if (func_469(&iLocal_107, 25f))
				{
					func_5(&iLocal_49, 0x00004000);
					func_5(&iLocal_49, 0x00800000);
				}
			}
			else if (iLocal_287 != 0x00000000 && !func_468("PROS_NO_MONEY"))
			{
				func_64(0x00000000);
				switch (func_23())
				{
					case 0x00000000:
						func_467(&uLocal_116, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
						break;
					
					case 0x00000001:
						func_467(&uLocal_116, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
						break;
					
					case 0x00000002:
						func_467(&uLocal_116, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
						break;
				}
				iLocal_286 = 0x00000001;
			}
			else
			{
				func_466();
				iLocal_287 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			func_453(uParam0);
			break;
		
		case 0x00000002:
			func_440(uParam0);
			break;
		
		case 0x00000003:
			func_439();
			break;
		
		case 0x00000004:
			func_427(uParam0);
			break;
		
		case 0x00000005:
			func_412();
			break;
		
		case 0x00000006:
			func_411(uParam0);
			break;
		
		case 0x00000007:
			func_390();
			func_382();
			break;
		
		case 0x00000008:
			func_379();
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			if (func_548())
			{
				func_226(uParam0);
			}
			break;
		
		case 0x00000009:
			func_223();
			break;
		
		case 0x0000000A:
			func_220();
			break;
		
		case 0x0000000B:
			unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
			if (func_548())
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000001B1, 0x00000001);
				func_226(uParam0);
			}
			break;
		
		case 0x0000000C:
			func_487();
			break;
		
		case 0x0000000D:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			func_103();
			break;
		
		case 0x0000000E:
			func_102();
			break;
		
		case 0x0000000F:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)
{
	if (!func_548())
	{
		if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_101(0x00000001), 0x00000003))
		{
			return;
		}
	}
	if (func_488(iLocal_49, 0x00000010))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
			func_5(&iLocal_49, 0x00000010);
		}
	}
	if (func_488(iLocal_49, 0x00000002))
	{
		func_100(0x00000001);
		func_489("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_539();
	if (func_548())
	{
		func_533(uParam0);
	}
}

void func_100(int iParam0)
{
}

var func_101(bool bParam0)
{
	if (!func_488(iLocal_49, 0x00008000))
	{
		if (bParam0)
		{
			return func_45(0x00000006);
		}
		else
		{
			return func_45(0x00000007);
		}
	}
	if (bParam0)
	{
		return func_46(0x00000006);
	}
	return func_46(0x00000007);
}

void func_102()
{
	if (!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		if (iLocal_70 == 0x00000000)
		{
			if (func_488(iLocal_49, 0x08000000))
			{
				unk_0xBAFED2F6486F771A(iLocal_90, 0x00008000, 0x00000000);
				unk_0xBAFED2F6486F771A(iLocal_90, 0x00030010, 0x00000001);
			}
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			func_96(0x0000000F);
		}
	}
}

void func_103()
{
	switch (iLocal_294)
	{
		case 0x00000000:
			if (!unk_0x7DECE00E09F41C95(iLocal_90) || func_121(&iLocal_101) > 4f)
			{
				func_116(iLocal_90);
				if (func_76(func_77(iLocal_90)) == 0x00000001)
				{
					iLocal_294 = 0x00000002;
				}
				else
				{
					func_115(&iLocal_101);
					func_114("PROS_RESPONSE");
					iLocal_294 = 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			func_113();
			if (unk_0x7DECE00E09F41C95(iLocal_90) || func_112())
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
				func_480(&iLocal_49, 0x00000800);
			}
			else
			{
				if (!func_10(&iLocal_101))
				{
					func_40(&iLocal_101);
				}
				if (func_121(&iLocal_101) > 15f || iLocal_297 != 0x00000000)
				{
					unk_0xA37A90C62806D848(0x00000001);
					func_111();
					iLocal_294 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			if (!func_112())
			{
				iLocal_294 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			func_106(0x00000000);
			func_104();
			func_96(0x0000000F);
			break;
	}
}

int func_104()
{
	if (func_105(0x00000000))
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

bool func_105(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_106(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		if (unk_0x757EF87A33649210())
		{
			unk_0xEBA53F35D0085654(&iLocal_90);
		}
		else
		{
			func_107(iLocal_90, bParam0);
		}
	}
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_110(0x00000001), 0x00000003))
	{
		unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_101(0x00000001), 4f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				unk_0x9FD50E5122D8E89D(iParam0);
			}
		}
		else
		{
			unk_0x9FD50E5122D8E89D(iParam0);
		}
		if (func_488(iLocal_49, 0x02000000))
		{
			unk_0xA3BF0AA5A2608191(iParam0);
		}
		if (bParam1)
		{
			fVar1 = unk_0x79833B02DBD2A244(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_480(&iLocal_49, 0x08000000);
			}
		}
		if (func_488(iLocal_49, 0x08000000))
		{
			unk_0xBAFED2F6486F771A(iParam0, 0x00008000, 0x00000001);
			unk_0xF3268524E9BE6D6E(iParam0, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
		else
		{
			unk_0xBAFED2F6486F771A(iParam0, 0x00030010, 0x00000001);
			unk_0xF82EA857DA10E0CD(&iVar0);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
			if (unk_0x405E212DDE472467(iParam0, 0x00000000))
			{
				if (!unk_0x8B38C0DAEEDB5F9C(unk_0x6937EA2286828455(iParam0, 0x00000000)))
				{
					func_109(iParam0, 0x00000001);
				}
				else
				{
					if (unk_0xB4ECF989E2C1DAC8(iParam0, func_50(iParam0, 0x00000000, 0x00000000), func_110(0x00000000), 0x00000003))
					{
						if (iLocal_70 > 0x00000000)
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, func_50(iParam0, 0x00000000, 0x00000000), func_101(0x00000000), 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, func_50(iParam0, 0x00000000, 0x00000000), func_108(0x00000000), 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					func_109(iParam0, 0x00000001);
				}
			}
			unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(iParam0, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		if (func_548())
		{
			if (unk_0xFEC78493E359E4B0(iLocal_90))
			{
				if (unk_0x83F012E6200426DB(unk_0x7D3E8C4CDBD80BDF(iLocal_90)))
				{
					unk_0xFADC0A217229F6B5(iParam0, 0x00000001);
				}
			}
		}
		else
		{
			unk_0xFADC0A217229F6B5(iParam0, 0x00000001);
		}
	}
}

var func_108(bool bParam0)
{
	if (!func_488(iLocal_49, 0x00008000))
	{
		if (bParam0)
		{
			return func_45(0x00000004);
		}
		else
		{
			return func_45(0x00000005);
		}
	}
	if (bParam0)
	{
		return func_46(0x00000004);
	}
	return func_46(0x00000005);
}

void func_109(int iParam0, int iParam1)
{
	if (!unk_0x3CAA763EEC01ADF7(iParam0, unk_0x6937EA2286828455(iParam0, 0x00000000), 0x00000000, 0x00000000, 0x00000000))
	{
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x01010000);
	}
	else
	{
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, iParam1);
	}
}

var func_110(bool bParam0)
{
	if (!func_488(iLocal_49, 0x00008000))
	{
		if (bParam0)
		{
			return func_45(0x00000002);
		}
		else
		{
			return func_45(0x00000003);
		}
	}
	if (bParam0)
	{
		return func_46(0x00000002);
	}
	return func_46(0x00000003);
}

void func_111()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x000003E8);
	if ((iVar0 <= 0x0000014D && iLocal_297 == 0x00000000) || iLocal_297 == 0x00000003)
	{
		unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
	}
	else if (((iVar0 > 0x0000014D && iVar0 <= 0x0000029A) && iLocal_297 == 0x00000000) || iLocal_297 == 0x00000001)
	{
		unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
	}
	else if (iLocal_297 == 0x00000000 || iLocal_297 == 0x00000002)
	{
		unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
	}
}

int func_112()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_113()
{
	if (iLocal_297 == 0x00000000)
	{
		unk_0xF3039DE1FDB4F6FD(0x00000000);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CB);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C9);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
		if (unk_0xB9132A06AE472728(0x00000002, 0x000000CB))
		{
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
			iLocal_297 = 0x00000003;
		}
		else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
		{
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
			iLocal_297 = 0x00000001;
		}
		else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
		{
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
			iLocal_297 = 0x00000002;
		}
	}
}

void func_114(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_115(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

void func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		if (unk_0x7DECE00E09F41C95(iParam0))
		{
			unk_0x0FB22E2FED7BCC7E(iParam0);
		}
		if (!unk_0x7DECE00E09F41C95(iParam0))
		{
			func_118(iParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 < 0x00000006)
	{
		StringCopy(&vVar1, "pbpro_H", 24);
		StringIntConCat(&vVar1, iParam0 + 1, 24);
		StringConCat(&vVar1, "V", 24);
		StringIntConCat(&vVar1, iVar0, 24);
		func_11(&uLocal_116, "pbproau", &vVar1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
	}
}

void func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		func_120(&uLocal_116, 0x00000004);
		func_467(&uLocal_116, 0x00000006, iParam0, func_119(iVar0), 0x00000000, 0x00000001);
	}
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "Hooker1";
			break;
		
		case 0x00000001:
			sVar0 = "Hooker2";
			break;
		
		case 0x00000002:
			sVar0 = "Hooker3";
			break;
		
		case 0x00000003:
			sVar0 = "Hooker4";
			break;
		
		case 0x00000004:
			sVar0 = "Hooker5";
			break;
		
		case 0x00000005:
			sVar0 = "Hooker6";
			break;
		
		case 0x00000006:
			sVar0 = "Hooker7";
			break;
		
		case 0x00000007:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_120(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

float func_121(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_122(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_548())
	{
		return;
	}
	bVar0 = 0x00000000;
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0xA30B8362589C124A(iVar1, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					bVar0 = 0x00000001;
				}
				if (unk_0xA30B8362589C124A(iVar1, 0x00000000, 0x00000000) != iLocal_90)
				{
					bVar0 = 0x00000001;
				}
				if (unk_0x2720E241B5CCF780(iVar1) > 0x00000002)
				{
					bVar0 = 0x00000001;
				}
				if (bVar0)
				{
					func_123(0x00000000);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_539();
					func_533(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
		vVar0 = { unk_0x835730A2D89F6093(iLocal_93, 0x00000002) };
		unk_0x2FB9A57162E54BAB(180f);
		unk_0xEF6276132B396452((-5.5f - vVar0.x), 0x3F800000);
	}
	unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	func_124(&(Local_300[0x00000000 /*7*/]));
	func_124(&(Local_300[0x00000003 /*7*/]));
	func_124(&(Local_300[0x00000002 /*7*/]));
	func_124(&(Local_300[0x00000001 /*7*/]));
	if (func_468("PROS_CAM_TOG") || func_468("PROS_CAM_OC"))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

void func_124(var uParam0)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
	}
}

void func_125()
{
	if (unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000))
	{
		unk_0xACCB31D58716FE8F(iLocal_93, 0x00000001);
	}
	if (iLocal_293 != 0x00000005)
	{
		if ((((((!func_219(iLocal_74) && !func_219(iLocal_75)) && !func_219(iLocal_76)) && !func_219(iLocal_77)) && !func_219(iLocal_78)) && !func_219(iLocal_79)) && !func_219(iLocal_80))
		{
			if (!unk_0x0E0E6175453415CB(iLocal_90) || unk_0x688A90832774AB83(unk_0x16F2683693E537C9()))
			{
				iLocal_293 = 0x00000005;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (!unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
				{
					iLocal_293 = 0x00000005;
				}
			}
		}
	}
	unk_0x3584F71E5CA29322(0x00000002);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x00000013, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x00000025, 0x00000001);
	func_213(0x00000000);
	switch (iLocal_293)
	{
		case 0x00000000:
			if (func_548())
			{
				func_210(0x00000440, 0xFFFFFFFF);
			}
			func_40(&iLocal_113);
			func_209(func_49(), func_488(iLocal_49, 0x00008000));
			iLocal_293 = 0x00000001;
			func_489("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 0x00000001:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000030, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			func_202();
			func_195();
			func_134();
			if (!func_48(0x00000000, 0x00000001))
			{
				func_133();
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 0x00000200);
					iLocal_296 = 0x00000000;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 0x00000003)
					{
						func_130();
						iLocal_293 = 0x00000005;
					}
					else
					{
						func_129();
						unk_0xA79E2388E9C0B0DB(iLocal_48);
						iLocal_293 = 0x00000003;
					}
				}
			}
			break;
		
		case 0x00000002:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000030, 0x00000001);
			func_202();
			if (!func_48(0x00000000, 0x00000001))
			{
				func_133();
			}
			if (func_48(0x00000000, 0x00000001))
			{
				unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			}
			if (func_7(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 0x00000200);
					iLocal_296 = 0x00000000;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 0x00000003;
					if (iLocal_70 >= 0x00000003)
					{
						func_130();
						iLocal_293 = 0x00000005;
						func_115(&iLocal_98);
					}
				}
			}
			break;
		
		case 0x00000003:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			if (!unk_0x7DECE00E09F41C95(iLocal_90))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0x00000000;
				iLocal_293 = 0x00000000;
				func_128();
				unk_0xA79E2388E9C0B0DB(iLocal_48);
				iLocal_286 = 0x00000008;
			}
			break;
		
		case 0x00000005:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
			if (!unk_0x7DECE00E09F41C95(iLocal_90))
			{
				if (iLocal_70 > 0x00000000)
				{
					if (func_127(iLocal_90))
					{
						func_126();
					}
					else
					{
						func_471(0x00000000);
					}
				}
				else
				{
					func_489("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_471(0x00000001);
				}
			}
			break;
	}
}

void func_126()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		if (iLocal_70 == 0x00000000)
		{
			unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
		}
		else if (func_127(iLocal_90))
		{
			func_40(&iLocal_101);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000300);
			func_480(&iLocal_49, 0x00000800);
			iLocal_286 = 0x0000000D;
		}
	}
}

bool func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return func_76(iVar0) < 0x00000006;
}

void func_128()
{
	Global_2537E2.f_484.f_A = 0x00000001;
}

void func_129()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
	}
}

void func_130()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
	}
}

void func_131(char* sParam0)
{
	if (unk_0x562F77A7F33D2E46(sParam0))
	{
		unk_0x8910D3D58E0132B8(sParam0);
	}
}

int func_132()
{
	if (iLocal_296 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_133()
{
	unk_0xD1B833B834838C01();
	unk_0xDC355804A9511111();
}

void func_134()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (unk_0xEA6BC48857E0AC4C(func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000)))
	{
		return;
	}
	if (!unk_0xB4AE0788C1587752(func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000)))
	{
		return;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
	}
	bVar1 = func_49();
	bVar2 = func_488(iLocal_49, 0x00008000);
	if (!func_48(0x00000000, 0x00000001))
	{
		func_189(&iLocal_81);
	}
	unk_0x38C3A68D7861DCFD(0x00000002, 0x00000013, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x00000025, 0x00000001);
	func_188(0x00000017, 0x00000001);
	switch (iLocal_296)
	{
		case 0x00000000:
			func_5(&iLocal_49, 0x00000100);
			if (!func_48(0x00000000, 0x00000001))
			{
				func_183(&iLocal_81);
			}
			func_182(iLocal_90, 0x00000000);
			if (!func_548())
			{
				func_181(bVar1, bVar2);
			}
			func_180(bVar1, bVar2);
			iLocal_296 = 0x00000001;
			break;
		
		case 0x00000001:
			func_179(iLocal_74);
			if (func_219(iLocal_75))
			{
				if (!func_488(iLocal_50, 0x00000004))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_75) >= fVar0)
					{
						func_480(&iLocal_50, 0x00000004);
					}
				}
			}
			if (func_219(iLocal_74))
			{
				if (!func_488(iLocal_50, 0x00000008))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_74) >= fVar0)
					{
						func_480(&iLocal_50, 0x00000008);
					}
				}
			}
			if (func_488(iLocal_50, 0x00000004) && func_488(iLocal_50, 0x00000008))
			{
				if (!func_548())
				{
					func_177(bVar1, bVar2);
				}
				func_176(bVar1, bVar2);
				iLocal_296 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			func_179(iLocal_76);
			if (func_219(iLocal_76))
			{
				if (!func_488(iLocal_50, 0x00000010))
				{
					if (!func_548())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_76) >= fVar0)
					{
						func_480(&iLocal_50, 0x00000010);
					}
				}
			}
			if (func_488(iLocal_50, 0x00000010))
			{
				if (!func_548())
				{
					func_175(bVar1, bVar2);
				}
				func_174(bVar1, bVar2);
				iLocal_296 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			func_179(iLocal_77);
			if (func_219(iLocal_77))
			{
				if (!func_488(iLocal_50, 0x00000040))
				{
					if (!func_488(iLocal_49, 0x01000000))
					{
						if (!func_548())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) >= fVar0)
						{
							func_480(&iLocal_49, 0x01000000);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_548())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) < fVar0)
						{
							func_5(&iLocal_49, 0x01000000);
						}
					}
					if (iLocal_71 >= func_167(func_548(), func_173(), func_168()))
					{
						func_480(&iLocal_50, 0x00000040);
						func_5(&iLocal_49, 0x01000000);
					}
				}
			}
			else if (!func_488(iLocal_50, 0x00000040))
			{
				func_480(&iLocal_50, 0x00000040);
			}
			if (func_488(iLocal_50, 0x00000040))
			{
				if (!func_548())
				{
					func_166(bVar1, bVar2);
				}
				func_165(bVar1, bVar2);
				iLocal_296 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			func_179(iLocal_78);
			if (func_219(iLocal_78))
			{
				if (!func_488(iLocal_50, 0x00000100))
				{
					if (!func_548())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_78) >= fVar0)
					{
						func_480(&iLocal_50, 0x00000100);
					}
				}
			}
			else if (!func_488(iLocal_50, 0x00000100))
			{
				func_480(&iLocal_50, 0x00000100);
			}
			if (func_488(iLocal_50, 0x00000100))
			{
				if (!func_548())
				{
					func_159(bVar1, bVar2);
				}
				func_157(bVar1, bVar2);
				iLocal_296 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			func_179(iLocal_79);
			if (func_219(iLocal_79))
			{
				if (!func_488(iLocal_50, 0x00000400))
				{
					if (!func_548())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_79) >= fVar0)
					{
						func_480(&iLocal_50, 0x00000400);
					}
				}
			}
			else if (!func_488(iLocal_50, 0x00000400))
			{
				func_480(&iLocal_50, 0x00000400);
			}
			if (func_219(iLocal_80))
			{
				if (!func_488(iLocal_50, 0x00000800))
				{
					if (!func_548())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_80) >= fVar0)
					{
						func_480(&iLocal_50, 0x00000800);
					}
				}
			}
			else if (!func_488(iLocal_50, 0x00000800))
			{
				func_480(&iLocal_50, 0x00000800);
			}
			if (func_488(iLocal_50, 0x00000400) && func_488(iLocal_50, 0x00000800))
			{
				func_182(iLocal_90, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(iLocal_90, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(iLocal_296, 0x00000001, bVar1, bVar2), 4f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_182(unk_0x16F2683693E537C9(), 0xFFFFFFFF);
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(iLocal_296, 0x00000000, bVar1, bVar2), 4f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_123(0x00000001);
				iLocal_50 = 0x00000000;
				iLocal_71 = 0x00000000;
				iLocal_59 = 0x00000000;
				func_135();
				iLocal_296 = 0x00000006;
			}
			break;
	}
}

void func_135()
{
	int iVar0;
	
	if (iLocal_70 == 0x00000000 && !func_548())
	{
		if (func_26(unk_0x16F2683693E537C9()) == 0x00000000)
		{
			func_156();
		}
		func_151(0x00000128, 0x00000000, 0x00000000);
		iVar0 = func_77(iLocal_90);
		if (iVar0 > 0xFFFFFFFF)
		{
			func_150(iVar0);
		}
		else
		{
			func_142(iLocal_90);
		}
	}
	iLocal_70++;
	func_136();
}

void func_136()
{
	switch (func_26(unk_0x16F2683693E537C9()))
	{
		case 0x00000000:
			Global_1B416.f_273C.f_5A[0x00000000]++;
			func_137(0x00000000, 0x00000001, 0x00000001);
			break;
		
		case 0x00000001:
			Global_1B416.f_273C.f_5A[0x00000001]++;
			func_137(0x00000001, 0x00000001, 0x00000001);
			break;
		
		case 0x00000002:
			Global_1B416.f_273C.f_5A[0x00000002]++;
			func_137(0x00000002, 0x00000001, 0x00000001);
			break;
		
		case 0x00000003:
			func_137(0x00000003, 0x00000001, 0x00000001);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_141(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_138(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_139(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_140();
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

int func_140()
{
	return Global_1407E9;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_139(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	iVar0 = func_149();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	func_150(iVar0);
	unk_0x5F2AA9E2843E9403(iParam0, func_147(iVar0));
	Global_1B416.f_273C.f_1[iVar0 /*11*/].f_A = unk_0x134B62B726CEC8E6(iParam0);
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000002)
	{
		iVar1 = iVar2;
		uVar3 = func_146(iParam0, iVar1);
		func_145(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000002)
	{
		iVar4 = iVar2;
		uVar3 = func_144(iParam0, iVar4);
		func_143(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		Global_1B416.f_273C.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_144(int iParam0, int iParam1)
{
	return unk_0xDADA8E1DD0D0D9D9(iParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		Global_1B416.f_273C.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_146(int iParam0, int iParam1)
{
	return unk_0x36C584991B4C183F(iParam0, func_86(iParam1));
}

var func_147(int iParam0)
{
	return func_148(iParam0);
}

char* func_148(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "UPRO BABS";
			break;
		
		case 0x00000001:
			sVar0 = "UPRO DANA";
			break;
		
		case 0x00000002:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 0x00000003:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 0x00000004:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 0x00000005:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 0x00000006:
			sVar0 = "UPRO SASHA";
			break;
		
		case 0x00000007:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (func_76(iVar0) == 0x00000000)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_150(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (func_23() == 0x00000000)
		{
			Global_1B416.f_273C.f_1[iParam0 /*11*/][0x00000000]++;
		}
		else if (func_23() == 0x00000001)
		{
			Global_1B416.f_273C.f_1[iParam0 /*11*/][0x00000001]++;
		}
		else if (func_23() == 0x00000002)
		{
			Global_1B416.f_273C.f_1[iParam0 /*11*/][0x00000002]++;
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
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
		func_155((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_152();
	}
}

void func_152()
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
		func_154(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_153() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_104();
				}
			}
		}
	}
}

int func_153()
{
	return Global_7830;
}

int func_154(int iParam0, int iParam1)
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

int func_155(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_140();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_156()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (iVar0 < 0x00000001)
		{
			Global_173E6[iVar0] = Global_173E6[iVar0 + 1];
		}
		else
		{
			Global_173E6[iVar0] = unk_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_157(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_158(iLocal_90, iLocal_79, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000004, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
	func_158(unk_0x16F2683693E537C9(), iLocal_80, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000004, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
}

void func_158(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (func_548())
	{
		unk_0x914E6894744915F8(iParam1);
	}
	else
	{
		unk_0x915804B434753CBD(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, iParam9);
	}
}

void func_159(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_161(&iLocal_79, 0x00000001, 0x00000000, 0x00000000);
	func_160(iLocal_90, iLocal_79, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000004, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f);
	func_161(&iLocal_80, 0x00000000, 0x00000000, 0x00000000);
	func_160(unk_0x16F2683693E537C9(), iLocal_80, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000004, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f);
}

void func_160(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (func_548())
	{
		unk_0x753499827286A5DA(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0x00000000);
	}
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	*iParam0 = func_164(vVar0, 0f, 0f, 0f, bParam3, bParam2, 0x00000002);
	if (iParam1 == 0x00000000)
	{
		func_163(*iParam0, iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 0x00000001)
	{
		func_163(*iParam0, iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "seat_pside_f"));
	}
	func_162(*iParam0, vVar0, 0f, 0f, 0f, 0x00000000);
}

void func_162(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3)
{
	if (!func_548())
	{
		unk_0x83CBE93AD851E045(iParam0, vParam1, vParam2, iParam3);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		return;
	}
	if (func_548())
	{
		unk_0xF047879501228A69(iParam0, iParam1, iParam2);
	}
	else
	{
		unk_0x6BE2EAE992FD7C26(iParam0, iParam1, iParam2);
	}
}

int func_164(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (func_548())
	{
		if (bParam2)
		{
			bParam3 = 0x00000000;
		}
		iVar0 = unk_0xF66E5A439A080021(vParam0, vParam1, iParam4, bParam2, bParam3, 0x3F800000, 0x00000000, 0x3F800000);
	}
	else
	{
		iVar0 = unk_0xE9744DB7B8CA6965(vParam0, vParam1, iParam4);
		unk_0xEFC3DF9D33E248D8(iVar0, bParam2);
		unk_0xC90224D9E95E5E3A(iVar0, bParam3);
	}
	return iVar0;
}

void func_165(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_158(iLocal_90, iLocal_78, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000003, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
	func_158(unk_0x16F2683693E537C9(), iLocal_78, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000003, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
}

void func_166(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_161(&iLocal_78, 0x00000000, 0x00000000, 0x00000001);
	func_160(iLocal_90, iLocal_78, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000003, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f);
	func_160(unk_0x16F2683693E537C9(), iLocal_78, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000003, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f);
}

int func_167(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_168()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_169();
	if (iVar0 < 0x00000030)
	{
		iVar1 = 0x00000002;
	}
	else if (iVar0 >= 0x00000030 && iVar0 < 0x00000055)
	{
		iVar1 = 0x00000003;
	}
	else
	{
		iVar1 = 0x00000004;
	}
	return iVar1;
}

int func_169()
{
	if (func_548())
	{
		return func_141(0x00000041, 0xFFFFFFFF, 0x00000000);
	}
	return func_170(func_26(unk_0x16F2683693E537C9()), 0x00000001);
}

var func_170(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0, iParam1);
	unk_0x6FB46C25CCB7E6D5(iVar1, &uVar0, 0xFFFFFFFF);
	return uVar0;
}

var func_171(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_172(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam3 = 0x00000040;
					break;
				
				case 0x00000001:
					*uParam3 = 0x00000041;
					break;
				
				case 0x00000003:
					*uParam3 = 0x00000043;
					break;
				
				case 0x00000002:
					*uParam3 = 0x00000042;
					break;
				
				case 0x00000004:
					*uParam3 = 0x00000044;
					break;
				
				case 0x00000005:
					*uParam3 = 0x00000045;
					break;
				
				case 0x00000006:
					*uParam3 = 0x00000046;
					break;
				
				case 0x00000007:
					*uParam3 = 0x00000047;
					break;
			}
			break;
	}
}

int func_173()
{
	int iVar0;
	
	if (iLocal_288 != 0x00000000)
	{
		if (iLocal_59 < 0x00000002)
		{
			iVar0 = 0x00000003;
		}
		else if (iLocal_59 == 0x00000002)
		{
			iVar0 = 0x00000004;
		}
		else if (iLocal_59 == 0x00000003)
		{
			iVar0 = 0x00000005;
		}
		else
		{
			iVar0 = 0x00000006;
		}
	}
	else if (iLocal_59 < 0x00000003)
	{
		iVar0 = 0x00000002;
	}
	else
	{
		iVar0 = 0x00000003;
	}
	return iVar0;
}

void func_174(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_158(iLocal_90, iLocal_77, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000002, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
	func_158(unk_0x16F2683693E537C9(), iLocal_77, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000002, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
}

void func_175(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_161(&iLocal_77, 0x00000000, 0x00000001, 0x00000000);
	func_160(iLocal_90, iLocal_77, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000002, 0x00000001, bParam0, bParam1), 1000f, -1000f, iVar0, 0x00000000, 0x447A0000);
	func_160(unk_0x16F2683693E537C9(), iLocal_77, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000002, 0x00000000, bParam0, bParam1), 1000f, -1000f, iVar0, 0x00000000, 0x447A0000);
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_158(iLocal_90, iLocal_76, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000001, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
	func_158(unk_0x16F2683693E537C9(), iLocal_76, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000001, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f, 0x00000000);
}

void func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_161(&iLocal_76, 0x00000000, 0x00000000, 0x00000001);
	func_160(iLocal_90, iLocal_76, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000001, 0x00000001, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f);
	func_160(unk_0x16F2683693E537C9(), iLocal_76, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000001, 0x00000000, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0x00000000, 0.7f);
}

float func_178(int iParam0)
{
	float fVar0;
	
	if (func_548())
	{
		fVar0 = unk_0xA45992A6CE82FB43(unk_0xF958843510932FF6(iParam0));
	}
	else
	{
		fVar0 = unk_0xA45992A6CE82FB43(iParam0);
	}
	return fVar0;
}

void func_179(int iParam0)
{
	if (!func_219(iParam0))
	{
		return;
	}
}

void func_180(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_158(iLocal_90, iLocal_74, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000000, 0x00000001, bParam0, bParam1), 8f, -0.7f, iVar0, 0x00000000, 1000f, 0x00000000);
	func_158(unk_0x16F2683693E537C9(), iLocal_75, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000000, 0x00000000, bParam0, bParam1), 8f, -0.7f, iVar0, 0x00000000, 1000f, 0x00000000);
}

void func_181(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0x00000804;
	if (func_548())
	{
		iVar0 = 0x00000808;
	}
	func_161(&iLocal_74, 0x00000001, 0x00000000, 0x00000001);
	func_160(iLocal_90, iLocal_74, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000000, 0x00000001, bParam0, bParam1), 4f, -1000f, iVar0, 0x00000000, 0x447A0000);
	func_161(&iLocal_75, 0x00000000, 0x00000000, 0x00000001);
	func_160(unk_0x16F2683693E537C9(), iLocal_75, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_44(0x00000000, 0x00000000, bParam0, bParam1), 4f, -1000f, iVar0, 0x00000000, 0x447A0000);
}

void func_182(int iParam0, int iParam1)
{
	if (!unk_0xC42A92762C58E1B9(iParam0, iLocal_93, 0x00000000))
	{
		if (!func_548())
		{
			unk_0xF821F915BC24D246(iParam0, iLocal_93, iParam1);
		}
		else if (!unk_0xC42A92762C58E1B9(iParam0, iLocal_93, 0x00000000))
		{
			unk_0x5B1D360B9C6F0A09(iParam0, iLocal_93, 0xFFFFFFFF, iParam1, 2f, 0x00000010, 0x00000000);
		}
	}
}

void func_183(int iParam0)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	uVar0 = func_185(func_186(0x00000002), unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")));
	uVar1 = func_185(func_186(0x00000001), unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")));
	vVar2 = { unk_0x835730A2D89F6093(iLocal_93, 0x00000002) };
	fVar3 = unk_0xD9522BA9E27E1349(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - vVar2.y);
	fVar6 = (-5f - vVar2.x);
	fVar7 = (-2.5f + vVar2.x);
	fVar8 = ((0f - (0.7f * vVar2.x)) + (0.3f * vVar2.y));
	if (!unk_0x9F4FE516EAACCFC5(Local_300[0x00000002 /*7*/]))
	{
		func_184(&(Local_300[0x00000002 /*7*/]), func_186(0x00000002), fVar5, vVar2.x, uVar0, 50f);
	}
	if (!unk_0x9F4FE516EAACCFC5(Local_300[0x00000001 /*7*/]))
	{
		func_184(&(Local_300[0x00000001 /*7*/]), func_186(0x00000001), fVar8, -vVar2.y, uVar1, 37.3f);
	}
	if (!unk_0x9F4FE516EAACCFC5(Local_300[0x00000000 /*7*/]))
	{
		func_184(&(Local_300[0x00000000 /*7*/]), func_186(0x00000000), fVar6, -vVar2.y, fVar4, 50f);
	}
	if (!unk_0x9F4FE516EAACCFC5(Local_300[0x00000003 /*7*/]))
	{
		func_184(&(Local_300[0x00000003 /*7*/]), func_186(0x00000003), fVar7, vVar2.y, fVar3, 45f);
	}
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	unk_0xE3BB8E05FCEB3FBE(Local_300[*iParam0 /*7*/], 0x00000001);
}

void func_184(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	uParam0->f_1 = { vParam2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000001);
	unk_0x86F44313DFA8F00C(*uParam0, vParam1, uParam0->f_1, fParam3, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
}

float func_185(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_186(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	struct<2> Var2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
	}
	if (!unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000))
	{
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_93), &uVar1, &Var2);
	vVar3 = { unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")) };
	vVar4 = { unk_0x5293C88BD2F4DE13(iLocal_93, vVar3) };
	switch (iParam0)
	{
		case 0x00000000:
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, 0f, (Var2.f_1 + 1.4f), vVar4.z) };
			break;
		
		case 0x00000001:
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, 1.5f, (Var2.f_1 + 1.2f), (vVar4.z - 0.1f)) };
			break;
		
		case 0x00000002:
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, -3.7f, 0.7f, vVar4.z) };
			break;
		
		case 0x00000003:
			vVar0 = { func_187() };
			break;
	}
	return vVar0;
}

Vector3 func_187()
{
	vector3 vVar0;
	vector3 vVar1;
	struct<2> Var2;
	var uVar3;
	
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_93), &Var2, &uVar3);
	vVar0 = { unk_0xBF584557291FDD31(iLocal_93, unk_0xF653B9B22DA806A9(iLocal_93, "windscreen")) };
	vVar1 = { unk_0x5293C88BD2F4DE13(iLocal_93, vVar0) };
	vVar1.z = (vVar1.z + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return unk_0x68E4ADDDDCD7BDDE(iLocal_93, 0f, -unk_0x755FF954DAE327E1(Var2.f_1), vVar1.z);
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

void func_189(int iParam0)
{
	if (!unk_0x9F4FE516EAACCFC5(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!unk_0x9CF8D5C7090408A2(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	unk_0x91F5B0244AAE6222(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!unk_0x798A3F1296751F46())
	{
		func_192(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_191())
	{
		if (!func_548())
		{
			if (!func_468("PROS_CAM_OC"))
			{
				func_114("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_548())
		{
			if (!func_468("PROS_CAM_TOG"))
			{
				func_114("PROS_CAM_TOG");
			}
		}
		if ((unk_0xD245978525608929(0x00000002, 0x00000000) && !unk_0x798A3F1296751F46()) && !func_48(0x00000000, 0x00000001))
		{
			func_190(iParam0);
			unk_0xE3BB8E05FCEB3FBE(Local_300[*iParam0 /*7*/], 0x00000001);
		}
	}
}

void func_190(var uParam0)
{
	if (*uParam0 < 0x00000003)
	{
		*uParam0++;
	}
	else if (*uParam0 == 0x00000003)
	{
		*uParam0 = 0x00000000;
	}
	if (*uParam0 == 0x00000000)
	{
		if (func_488(iLocal_51, 0x00000010))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 0x00000001)
	{
		if (func_488(iLocal_51, 0x00000080))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 0x00000002)
	{
		if (func_488(iLocal_51, 0x00000040))
		{
			*uParam0++;
		}
	}
}

int func_191()
{
	if ((func_488(iLocal_51, 0x00000010) && func_488(iLocal_51, 0x00000040)) && func_488(iLocal_51, 0x00000080))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_192(var uParam0)
{
	var uVar0[4];
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	unk_0xA2E3EDD0E119882F(0x00000002);
	func_194(&(uVar0[0x00000000]), &(uVar0[0x00000001]), &(uVar0[0x00000002]), &(uVar0[0x00000003]), 0x00000000, 0x00000000);
	vVar1.z = (-(SYSTEM::TO_FLOAT(uVar0[0x00000002]) / 127f) * 10f);
	vVar1.y = ((-vVar1.z * 3f) / 10f);
	if (unk_0x89DF0B812BA6383B())
	{
		vVar1.x = ((SYSTEM::TO_FLOAT(uVar0[0x00000003]) / 127f) * 10f);
	}
	else
	{
		vVar1.x = (-(SYSTEM::TO_FLOAT(uVar0[0x00000003]) / 127f) * 10f);
	}
	fVar2 = (30f * SYSTEM::TIMESTEP());
	vVar3 = { vVar1 };
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		uParam0->f_4 = func_193((uParam0->f_4 + (vVar3.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_193((uParam0->f_4.f_1 + (vVar3.y * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_193((uParam0->f_4.f_2 + (vVar3.z * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_193((((vVar3.x - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_193((((vVar3.y - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_193((((vVar3.z - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	unk_0x5F3CBA6EB9341C90(*uParam0, uParam0->f_1 + uParam0->f_4, 0x00000002);
}

float func_193(float fParam0, float fParam1, float fParam2)
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

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DA))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DA) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DB))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DB) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DC))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DC) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DD))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DD) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
		}
	}
}

void func_195()
{
	int iVar0;
	float fVar1;
	
	if (!func_200())
	{
		if (func_199(iLocal_90))
		{
			if (!func_488(iLocal_49, 0x00000100))
			{
				unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
				unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
				if (iLocal_70 == 0x00000001)
				{
					if (!func_548())
					{
						unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 0x0000000F, 0x00000001, 0x00000000);
					}
					unk_0x5E858A00EAFA5B24(0x00000000, 0x00000FA0, 0x000000FC);
				}
				else if (iLocal_70 == 0x00000002)
				{
					if (!func_548())
					{
						unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 0x0000000A, 0x00000001, 0x00000000);
					}
					unk_0x5E858A00EAFA5B24(0x00000000, 0x00000FA0, 0x000000D2);
				}
				else
				{
					if (!func_548())
					{
						unk_0xFAE853510BD265FB(unk_0xD803B885F5E47A62(), 0x00000005, 0x00000001, 0x00000000);
					}
					unk_0x5E858A00EAFA5B24(0x00000000, 0x00000BB8, 0x000000A8);
				}
				func_480(&iLocal_49, 0x00000100);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0x00000000:
				if (unk_0xDDCA9A4E51DADA2B(iLocal_90, 0x3438B9BD))
				{
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x00000054);
					unk_0xDFC6BA855748EB10(iLocal_93, 0x00000001, 0f, 0f, -0.05f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
					func_197();
				}
				break;
			
			case 0x00000001:
			case 0x00000002:
				if (func_488(iLocal_49, 0x00008000))
				{
					if (func_548())
					{
						iVar0 = unk_0xF958843510932FF6(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (unk_0x69DF961355195C3C(iVar0))
					{
						fVar1 = unk_0xA45992A6CE82FB43(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_521(0x00000200))
							{
								unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FC);
								unk_0xDFC6BA855748EB10(iLocal_93, 0x00000001, 0f, 0f, -0.1f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
								func_197();
								func_196(0x00000200);
							}
						}
						else
						{
							func_525(0x00000200);
						}
					}
				}
				else if (unk_0xDDCA9A4E51DADA2B(iLocal_90, 0x3438B9BD))
				{
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FC);
					unk_0xDFC6BA855748EB10(iLocal_93, 0x00000001, 0f, 0f, -0.1f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
					func_197();
				}
				break;
			}
	}
}

void func_196(int iParam0)
{
	if (!func_488(iLocal_52, iParam0))
	{
		func_480(&iLocal_52, iParam0);
	}
}

void func_197()
{
	int iVar0;
	
	iVar0 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
	iVar0 = (iVar0 + (0x00000001 + iLocal_288));
	if (iVar0 > unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9());
	}
	unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar0, 0x00000000);
	func_198();
}

void func_198()
{
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		iLocal_57 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
	}
}

bool func_199(int iParam0)
{
	return (((unk_0xB4ECF989E2C1DAC8(iParam0, func_54(), func_46(0x0000000B), 0x00000003) || unk_0xB4ECF989E2C1DAC8(iParam0, func_54(), func_46(0x00000015), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_52(), func_45(0x0000000B), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(iParam0, func_52(), func_45(0x00000015), 0x00000003));
}

bool func_200()
{
	return unk_0xB4ECF989E2C1DAC8(iLocal_90, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_201(iLocal_90, func_49(), 0x00000001), 0x00000003);
}

char* func_201(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		iVar1 = unk_0x6937EA2286828455(iParam0, 0x00000001);
		if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
		{
			if (func_47(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_46(0x00000014);
					}
					else
					{
						sVar0 = func_46(0x00000019);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_46(0x0000000A);
				}
				else
				{
					sVar0 = func_46(0x0000000F);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_45(0x00000014);
				}
				else
				{
					sVar0 = func_45(0x00000019);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_45(0x0000000A);
			}
			else
			{
				sVar0 = func_45(0x0000000F);
			}
		}
	}
	return sVar0;
}

void func_202()
{
	if (!func_200())
	{
		return;
	}
	if (func_548())
	{
		func_206();
	}
	if (unk_0x7DECE00E09F41C95(iLocal_90) || unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0x09AC81E49EA267F7(0x00000000, 0x00001388) > 0x000009C4)
	{
		func_203();
	}
}

void func_203()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90) && !unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
	{
		if (iLocal_288 == 0x00000000)
		{
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_101))
		{
			func_470(&iLocal_101);
		}
		else if (func_7(&iLocal_101) > unk_0x79833B02DBD2A244(2f, 5f))
		{
			if (!func_488(iLocal_49, 0x00010000))
			{
				func_480(&iLocal_49, 0x00010000);
				unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 0x00000001);
				func_204(iLocal_289);
			}
			else
			{
				func_5(&iLocal_49, 0x00010000);
				func_40(&iLocal_101);
			}
		}
	}
}

void func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_205(unk_0xD803B885F5E47A62()))
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			}
			else
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			}
			break;
		
		case 0x00000001:
		case 0x00000002:
			if (func_205(unk_0xD803B885F5E47A62()))
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			}
			else
			{
				unk_0xC8B576D6F470FFC6(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			}
			break;
	}
}

int func_205(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000001;
	}
	return Global_25033E[iParam0 /*421*/].f_E6;
}

void func_206()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (func_207(0.4f))
	{
		func_196(0x00000004);
	}
	if (func_521(0x00000004))
	{
		if (!func_10(&iLocal_104))
		{
			func_470(&iLocal_104);
		}
		else if (func_7(&iLocal_104) > 2f)
		{
			if (!func_521(0x00000010) && !func_207(0.4f))
			{
				func_196(0x00000010);
				iLocal_59++;
			}
			else if (func_521(0x00000010))
			{
				if (!unk_0x7DECE00E09F41C95(iLocal_90))
				{
					func_525(0x00000004);
					func_525(0x00000010);
					func_40(&iLocal_104);
				}
			}
		}
	}
}

int func_207(float fParam0)
{
	float fVar0;
	
	if (func_208(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
	{
		fVar0 = unk_0x71FE9B11268C88D8(unk_0xD803B885F5E47A62());
		if (fVar0 > fParam0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_208(int iParam0, bool bParam1, bool bParam2)
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

void func_209(bool bParam0, bool bParam1)
{
	if (!func_548())
	{
		return;
	}
	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_139(iParam1), 0x00000000);
	iVar0++;
	if (!func_212(iParam0))
	{
		func_138(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_211(iParam0, iVar0, iParam1, 0x00000001);
	}
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_139(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_139(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_139(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_212(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 0x00000313:
			case 0x00000314:
			case 0x00000315:
			case 0x00000316:
			case 0x00002216:
			case 0x00000309:
			case 0x0000030A:
			case 0x0000030B:
			case 0x0000030C:
			case 0x00002218:
			case 0x000002FF:
			case 0x00000300:
			case 0x00000301:
			case 0x00000302:
			case 0x0000221A:
			case 0x000002F5:
			case 0x000002F6:
			case 0x000002F7:
			case 0x000002F8:
			case 0x0000221C:
			case 0x00000517:
			case 0x00001C41:
			case 0x0000027F:
			case 0x000004FE:
			case 0x000002FC:
			case 0x000002FD:
			case 0x000002FE:
			case 0x0000221B:
			case 0x000004D4:
			case 0x00000754:
			case 0x000008DB:
			case 0x00000B71:
			case 0x00000BF2:
			case 0x00002720:
			case 0x00000BED:
			case 0x00000BEE:
			case 0x00000BEF:
			case 0x00000BF0:
			case 0x00000BF1:
			case 0x00000CA0:
			case 0x00000CA2:
			case 0x00000E34:
			case 0x00000E35:
			case 0x00000E36:
			case 0x00000E37:
			case 0x00000E38:
			case 0x00000E39:
			case 0x00000E3A:
			case 0x00000E3B:
			case 0x00000E3C:
			case 0x00000E3D:
			case 0x00000C9B:
			case 0x00000C95:
			case 0x00000E4F:
			case 0x00000E50:
			case 0x00000E51:
			case 0x00000E52:
			case 0x00000E53:
			case 0x00000E54:
			case 0x00000E69:
			case 0x00000C9E:
			case 0x00000C9D:
			case 0x00000FB4:
			case 0x00000FB3:
			case 0x00000FB7:
			case 0x00000FB6:
			case 0x00000FBA:
			case 0x00000FB9:
			case 0x00000FBD:
			case 0x00000FBC:
			case 0x000017DE:
			case 0x000017DD:
			case 0x00001818:
			case 0x00001817:
			case 0x00001985:
			case 0x00001984:
			case 0x00001992:
			case 0x00001991:
			case 0x0000199F:
			case 0x0000199E:
			case 0x000019A2:
			case 0x000019A1:
			case 0x000019A5:
			case 0x000019A4:
			case 0x00001C73:
			case 0x00001C75:
			case 0x00001C77:
			case 0x0000205A:
			case 0x0000205B:
			case 0x0000205C:
			case 0x0000205D:
			case 0x0000205E:
			case 0x0000205F:
			case 0x00002060:
			case 0x00002061:
			case 0x00002062:
			case 0x00002063:
			case 0x00002064:
			case 0x00002065:
			case 0x00002066:
			case 0x00001F4A:
			case 0x00002156:
			case 0x0000230F:
			case 0x00002311:
			case 0x00002312:
			case 0x00002314:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
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
	if (!func_20())
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

bool func_219(int iParam0)
{
	bool bVar0;
	
	if (func_548())
	{
		bVar0 = unk_0x69DF961355195C3C(unk_0xF958843510932FF6(iParam0));
	}
	else
	{
		bVar0 = unk_0x69DF961355195C3C(iParam0);
	}
	return bVar0;
}

void func_220()
{
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(0x000003E8);
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), func_222(), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), func_221());
		func_539();
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xEBA53F35D0085654(&iLocal_90);
	}
}

float func_221()
{
	switch (func_23())
	{
		case 0x00000000:
			return 116.6356f;
			break;
		
		case 0x00000001:
			return 175.0504f;
			break;
		
		case 0x00000002:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_222()
{
	switch (func_23())
	{
		case 0x00000000:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 0x00000001:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 0x00000002:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_223()
{
	int iVar0;
	
	if (func_225(&iLocal_98, 3f) && !unk_0xFBB4F23D534EB790(iLocal_97))
	{
		iVar0 = SYSTEM::FLOOR(((func_224() - 2f) * 1000f));
		unk_0xE3BB8E05FCEB3FBE(iLocal_96, 0x00000000);
		unk_0xF1E4C781086FABC1(iLocal_97, iLocal_96, iVar0, 0x00000001, 0x00000001);
	}
	if (func_225(&iLocal_98, func_224()))
	{
		unk_0x53491B90E4FD0E56(0x000003E8);
		iLocal_286 = 0x0000000A;
	}
}

float func_224()
{
	switch (func_23())
	{
		case 0x00000000:
			return 10f;
			break;
		
		case 0x00000001:
			return 12f;
			break;
		
		case 0x00000002:
			return 10f;
			break;
	}
	return 0f;
}

int func_225(int iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_226(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		switch (iVar1)
		{
			case 0x000000B9:
				func_227(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_227(int iParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &uVar0, 0x0000000D))
	{
		func_228(&uVar0, uParam1);
	}
}

void func_228(var uParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (unk_0xE2F1E99DD161A861(*uParam0))
		{
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000) == unk_0x96A5FE5834B81CE7(*uParam0))
					{
						func_123(0x00000000);
						unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
						func_539();
						func_533(uParam1);
					}
				}
			}
		}
	}
}

void func_229(var uParam0)
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iLocal_90))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			iVar0 = unk_0x7F6DC62EA9922664(iLocal_90);
			if ((iVar0 - iLocal_58) < 0x00000000)
			{
				func_123(0x00000000);
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_230(var uParam0)
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			iVar0 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
			if ((iVar0 - iLocal_57) < 0x00000000)
			{
				func_123(0x00000000);
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_231(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vLocal_56, vVar1) >= 4f)
				{
					func_123(0x00000000);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_539();
					func_533(uParam0);
				}
			}
		}
	}
}

void func_232()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (!func_488(iLocal_49, 0x00000010))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000000);
		}
		func_480(&iLocal_49, 0x00000010);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_93))
			{
				unk_0xE32750CAC756824F(iLocal_93, 0x00000001);
				unk_0x0882E3DC0C991680(iLocal_93, 0x00000004);
				unk_0x3CE99D79C10EEA67(iLocal_93, 0x00000001);
				unk_0x9A8BCD43DBDDCDCA(iLocal_93, 0x00000000, 0x00000000);
			}
		}
		else
		{
			unk_0xE32750CAC756824F(iLocal_93, 0x00000001);
			unk_0x0882E3DC0C991680(iLocal_93, 0x00000004);
			unk_0x3CE99D79C10EEA67(iLocal_93, 0x00000001);
		}
		if (!func_378() || !unk_0xC42A92762C58E1B9(iLocal_90, iLocal_93, 0x00000000))
		{
			func_471(0x00000000);
			return;
		}
	}
	else
	{
		func_471(0x00000000);
		return;
	}
	func_213(0x00000000);
	if ((!unk_0x8B38C0DAEEDB5F9C(iLocal_93) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_488(iLocal_49, 0x00000400))
	{
		iLocal_286 = 0x00000007;
		func_376(0x00000001, 0xFFFFFFFF);
		unk_0xAE317D00A5A55DF6("SCRIPT\HUD_321_GO", 0x00000001, 0xFFFFFFFF);
		iLocal_292 = 0x00000000;
		func_489("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0x00000000;
	unk_0x3584F71E5CA29322(0x00000002);
	switch (iLocal_292)
	{
		case 0x00000000:
		case 0x00000001:
			if (func_548())
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
						{
							if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
							{
								if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
								{
									if (!unk_0xAF6690C489CC6203(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
									{
										unk_0x73270B3C9CC833FD(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000000);
									}
								}
								else
								{
									unk_0x0C8A454B494DAA0D(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
									return;
								}
							}
						}
						else
						{
							unk_0x8B1D3F9E1517FA09(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
							return;
						}
					}
				}
			}
			func_375();
			func_374();
			func_198();
			if (func_371())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_370();
				if (func_548())
				{
					func_196(0x00000002);
					if (func_548())
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
							{
								if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
								{
									unk_0xC4B4C89FC0D48108(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
									unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000004);
									unk_0x443C9A6DC182DDD5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
								}
							}
						}
					}
				}
				unk_0x9FD50E5122D8E89D(iLocal_90);
				iLocal_292 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_369(iLocal_295))
			{
				func_368(&iLocal_295);
				func_5(&iLocal_73, 0x00000002);
			}
			func_366(iLocal_90, 0x00000000);
			if (func_366(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (func_364(&sVar1, 0x00000000))
				{
					iLocal_48 = unk_0xF3545351E9CBB11F();
					iVar2 = unk_0x6C3F127AAF415E69();
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (iVar2 != 0x00000004 && iLocal_48 == 0x00000004)
						{
							unk_0xA79E2388E9C0B0DB(0x00000004);
						}
						else if (iVar2 == 0x00000004 && iLocal_48 != 0x00000004)
						{
							unk_0xA79E2388E9C0B0DB(0x00000001);
						}
					}
					func_352();
					iLocal_292 = 0x00000003;
					func_489("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_351(&sVar1, 0xFFFFFFFF);
					func_40(&iLocal_107);
					iLocal_288 = 0x00000003;
					iLocal_292 = 0x00000004;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0x798A3F1296751F46())
			{
				return;
			}
			unk_0x73591FF5CCBBB2EA(0x00000003);
			func_332();
			func_297(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			func_296(&uVar3, &iVar4, &uVar5, &uVar6, 0x00000000);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000030, 0x00000001);
			unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
			unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
			unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C9);
			iVar0 = 0x00000000;
			if (unk_0x0EFF6B4415DAF4A1())
			{
				if (unk_0x9E6C8D8976DA0ECD(0x00000002))
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000001, 0x00000001);
					unk_0x38C3A68D7861DCFD(0x00000000, 0x00000002, 0x00000001);
					unk_0xEAB026E686C0D991(0x00000000, 0x000000ED, 0x00000001);
					unk_0xEAB026E686C0D991(0x00000000, 0x000000EE, 0x00000001);
					unk_0xEAB026E686C0D991(0x00000000, 0x000000F1, 0x00000001);
					unk_0xEAB026E686C0D991(0x00000000, 0x000000F2, 0x00000001);
					func_292(0x00000000, 0x00000000, 0x00000000, 0x00000001);
					func_291(0x00000000, 0xFFFFFFFF, 0x00000001);
					if (func_290())
					{
						if (Global_4121D1 != iLocal_68)
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
							iLocal_68 = Global_4121D1;
							func_489("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 0x00000001;
						}
					}
				}
			}
			if (((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F2))) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xD245978525608929(0x00000000, 0x00000021))) || (((unk_0x0EFF6B4415DAF4A1() && !unk_0x91E3F625EF57450D(0x00000002)) && iVar4 > 0x00000064) && (unk_0x1C0640BA9A7327B3() - iLocal_87) > 0x0000012C))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
				func_489("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0x00000000;
				}
				iLocal_87 = unk_0x1C0640BA9A7327B3();
			}
			else if (((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xBFC0798A6E3417F9(0x00000002, 0x000000F1))) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xD245978525608929(0x00000000, 0x00000020))) || (((unk_0x0EFF6B4415DAF4A1() && !unk_0x91E3F625EF57450D(0x00000002)) && iVar4 < 0xFFFFFF9C) && (unk_0x1C0640BA9A7327B3() - iLocal_87) > 0x0000012C))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
				func_489("UP pressed!");
				if (iLocal_68 > 0x00000000)
				{
					iLocal_68 = (iLocal_68 - 0x00000001);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = unk_0x1C0640BA9A7327B3();
			}
			else if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9) || iVar0 == 0x00000001)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
				unk_0x3584F71E5CA29322(0x00000003);
				func_286();
				unk_0xE910A68AA670B4AA(unk_0x16F2683693E537C9());
				iLocal_292 = 0x00000004;
			}
			func_285(iLocal_68, 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			iVar7 = unk_0x9D0C7D26D7C10470(iLocal_90);
			if (iLocal_288 == 0x00000003)
			{
				func_376(0x00000001, 0xFFFFFFFF);
				func_284();
				func_283(0x00000000);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_489("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 0x00000006;
				if (iLocal_70 > 0x00000000)
				{
					if (func_127(iLocal_90))
					{
						func_126();
					}
					else
					{
						func_471(0x00000000);
					}
					return;
				}
				else
				{
					if (func_278() >= 0x00000014)
					{
						iVar7 += 20;
						func_234(0x00000014);
						unk_0x6D80F1AEBA734886(iLocal_90, iVar7);
					}
					func_471(0x00000001);
					return;
				}
			}
			if (!unk_0xB4AE0788C1587752(func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000)))
			{
			}
			else
			{
				func_376(0x00000001, 0xFFFFFFFF);
				func_284();
				if (unk_0xBB1BB44CE96CC5E3())
				{
					func_480(&iLocal_49, 0x00000400);
					iLocal_288 = 0x00000003;
					func_489("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 0x00000003)
				{
					if (func_278() > func_233(iLocal_288))
					{
						func_234(func_233(iLocal_288));
						iVar7 = (iVar7 + func_233(iLocal_288));
					}
					func_41(&iLocal_101, (14f - 4f));
					func_489("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_286 = 0x0000000B;
				}
				unk_0x6D80F1AEBA734886(iLocal_90, iVar7);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
			}
			break;
	}
}

int func_233(int iParam0)
{
	if (unk_0xBB1BB44CE96CC5E3())
	{
		if (iParam0 == 0x00000000)
		{
			return 0x00000046;
		}
		else if (iParam0 == 0x00000001)
		{
			return 0x00000046;
		}
		else if (iParam0 == 0x00000002)
		{
			return 0x00000046;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000032;
	}
	if (iParam0 == 0x00000001)
	{
		return 0x00000046;
	}
	if (iParam0 == 0x00000002)
	{
		return 0x00000064;
	}
	return 0x00000000;
}

void func_234(int iParam0)
{
	var uVar0;
	
	if (!func_548())
	{
		func_248(func_23(), 0x00000001, iParam0);
	}
	else if (!func_247())
	{
		unk_0xD189E5E11FBABB3C(iParam0, 0x00000000, 0x00000000);
	}
	else
	{
		func_235(0xAEF994E9, iParam0, &uVar0, 0x00000000, 0x00000000, 0x00000000);
	}
}

void func_235(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_247())
	{
		return;
	}
	iVar0 = 0x00000001;
	if (bParam4)
	{
		iVar0 = 0x00000004;
	}
	else if (bParam3)
	{
		iVar0 = 0x00000002;
	}
	else if (bParam5)
	{
		iVar0 = 0x00000008;
	}
	switch (iParam0)
	{
		case 0x9DEFCB5B:
		case 0xDD16A585:
		case 0xAEF994E9:
		case 0x1B14F96B:
		case 0xC571DB3D:
		case 0x61F840EB:
		case 0x847B5E8A:
		case 0x26C85CA3:
		case 0x62A4B6CC:
		case 0xCBBC5D1E:
		case 0x040E0F34:
		case 0x8180486D:
		case 0x15DAFB97:
		case 0x10E398B4:
		case 0x11611C06:
		case 0x467E2916:
		case 0xE13B1F5A:
		case 0x3DC70F44:
		case 0x108CD6EE:
		case 0x79D2BE32:
		case 0x6DA50854:
		case 0x3CF098E4:
		case 0x73AF3590:
		case 0xAD32107E:
		case 0x2A6B291E:
		case 0x6597C63C:
		case 0x5A58E3BD:
		case 0x45F48C05:
		case 0xCA5E1B40:
		case 0xD86D0371:
		case 0x48090EBA:
		case 0xDB72FD6E:
		case 0xD80064A4:
		case 0xE7BA9A2C:
		case 0xD30E80F5:
		case 0x8F9E64E9:
		case 0x7323DAB3:
		case 0x3F79E8B3:
		case 0xF54343EF:
		case 0x7F096F7D:
		case 0x601646D2:
		case 0xE1286116:
		case 0x741DADD0:
		case 0x421452FF:
		case 0x92AEAB9C:
		case 0xB62639D4:
		case 0xF2BEFF3E:
		case 0xB3E76D2C:
		case 0x5D40F1F0:
		case 0xFA3E19A3:
		case 0x2C41A631:
		case 0x7A31F111:
		case 0x978B277B:
		case 0x25CFCEFF:
		case 0x6E53C312:
		case 0x2D80114E:
		case 0x73BA02A6:
		case 0x27A4C3FB:
		case 0xB0AE4A42:
		case 0x75CD3B70:
		case 0x10077806:
		case 0x6F6E2AEA:
		case 0xEBECC7F6:
		case 0xABCC04E3:
		case 0x24D87C9E:
		case 0x3A732240:
		case 0x1A108B80:
		case 0xF7E7A848:
		case 0xC88FBB63:
		case 0xAB4EA4F8:
		case 0x98AE71E5:
		case 0x8F2EC53A:
		case 0xA3DDECA8:
		case 0x798D498F:
		case 0x17FDC07D:
		case 0xBBD76B5A:
		case 0x6405F5A6:
		case 0x31F23149:
		case 0xA4A86838:
		case 0x6C36F5BD:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_236(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0xFE249573:
		case 0xC2C5E339:
		case 0xACA75AAE:
		case 0x628502B3:
		case 0xFC8D0020:
		case 0xB77DD8B4:
		case 0xFD389995:
		case 0xEAFF75BD:
		case 0xC4F96E65:
		case 0x2195C3D1:
		case 0x676706D3:
		case 0x381AE70B:
		case 0xB94DDB9B:
		case 0x89AD02CE:
		case 0xBCD304B8:
		case 0xF97DB87A:
		case 0x129A5B6E:
		case 0x762D6BF6:
		case 0xD89979EE:
		case 0x4D8C639E:
		case 0xA174F633:
		case 0x176D9D54:
		case 0x016B1CDE:
		case 0xBFCBE6B6:
		case 0x6A22D039:
		case 0x862FB02E:
		case 0x8D682613:
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0x506A6AF5:
		case 0x60988977:
		case 0x74EC47CE:
		case 0x0C92ECEF:
		case 0xFC71898E:
		case 0x67878154:
		case 0xA87819A3:
		case 0x06A679FE:
		case 0x5AEF7C87:
		case 0x39B3A1A7:
		case 0x5E0B0A1C:
		case 0xC84D30CC:
		case 0xB8D124BE:
		case 0xF353DF93:
		case 0xCF63BF45:
		case 0x3E7AA93E:
		case 0x21ECDA63:
		case 0xCCFA5F2D:
		case 0x328CD5AA:
		case 0xFD2A7DE7:
		case 0xEE884170:
		case 0x1B9AFE05:
		case 0x5C66709A:
		case 0xF9F62A7C:
		case 0xD8630BC3:
		case 0x23C04B23:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
		case 0x50503398:
		case 0x3EBB7442:
		case 0x8107BB89:
		case 0xB6D37A76:
		case 0x6F225978:
		case 0x0CD9EBA6:
		case 0xCBC91B24:
		case 0xD4E9820B:
		case 0x53E15D9D:
		case 0xA1DC5A42:
		case 0xFE5D3D39:
		case 0x46521174:
		case 0x370A42A5:
		case 0xED97AFC1:
		case 0x23F59C7C:
		case 0xFF3F6FB2:
		case 0xED74CC1D:
		case 0x33E1D8F6:
		case 0xC5ED889C:
		case 0xFFC0D962:
		case 0xB99C11F6:
		case 0x8DACDD38:
		case 0x32537662:
		case 0x7353182D:
		case 0x6E63A5AC:
		case 0x7D1FD84C:
		case 0x7462F9E7:
		case 0xBA16F44B:
		case 0x87DF725B:
		case 0xA2228687:
		case 0xC6B7C57F:
		case 0x43ADDE78:
		case 0x4B6A869C:
		case 0xDA2AD714:
		case 0x29849CDA:
		case 0x180D054D:
		case 0xCB511DC2:
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
		case 0xDE8FA2AB:
			func_236(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
	switch (iParam0)
	{
		case 0xB001B7EB:
		case 0x9B0E293D:
		case 0x6F581424:
		case 0xD670D38D:
		case 0xB2C78A3D:
		case 0x367BBE86:
		case 0x178D16AE:
		case 0xEC365EEC:
		case 0x63A19A7F:
			if (iParam1 > 0x00000000 || Global_40001.f_6BC0)
			{
				func_236(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			}
			break;
		
		case 0x49F3549B:
		case 0x4A05F619:
		case 0xBE60A029:
		case 0xE285893D:
		case 0x314FB8B0:
		case 0x9145F938:
		case 0x653BCC2D:
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
		case 0x87B8E853:
		case 0x6374FB50:
		case 0x86DA0F67:
		case 0xB703ED29:
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
		case 0x69D9B7DA:
		case 0xCDCF2380:
			func_236(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_247())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_140()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam3 == 0x3FA29128 || iParam3 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar3 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000005)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar3 = 0x00000001;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0x00000000;
	}
	*uParam0 = 0x00000005;
	iVar4 = 0x7FFFFFFF;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_243(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 0xFFFFFFFF)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 0x00000001;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 0x00000001;
				}
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	else
	{
		if (iParam7 & 0x00000002 != 0x00000000)
		{
			Global_411257 = 0x00000001;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		if (iParam7 & 0x00000008 != 0x00000000)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 0x00000001;
			Global_41125B = iParam5;
		}
		bVar5 = 0x00000000;
		if (bVar5)
		{
			func_242(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_237(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_237(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_238(iParam0);
	}
}

void func_238(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_247())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_241(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_239(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_239(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_240(&(uParam0->f_E));
	func_240(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_240(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_241(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_242(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_247())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && iParam10)
			{
				func_244(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_244(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_246(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_245();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_245()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_246(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_247()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_248(int iParam0, int iParam1, int iParam2)
{
	if (func_277(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_277(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_249(func_277(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_276();
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
					func_275(0x00000063, 0x00000001);
					func_274(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_274(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_274(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_260(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_256(0x00000005))
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
							func_274(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_274(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_274(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_256(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_274(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_274(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_274(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_274(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_274(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_274(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_274(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_274(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_274(joaat("sp2_money_spent_property"), iParam3);
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
									func_274(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_274(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_274(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_274(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_274(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_274(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_256(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_274(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_274(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_274(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_274(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_274(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_274(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_255(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_275(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_275(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_275(0x00000060, iParam3);
					break;
			}
			func_275(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_252(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_252(iVar1);
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
					func_274(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_274(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_274(joaat("sp2_total_cash_earned"), iParam3);
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
	func_251(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_250(0x00000000);
	}
	return 0x00000001;
}

void func_250(bool bParam0)
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

void func_251(int iParam0)
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

void func_252(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_155(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_155(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_155(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_155(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_138(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_138(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_138(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_138(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_138(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_138(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_254() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_254() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_253(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_253(int iParam0)
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

int func_254()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_255(int iParam0)
{
	func_275(0x0000005D, iParam0);
	func_275(0x0000001D, iParam0);
	func_275(0x0000001E, iParam0);
}

bool func_256(int iParam0)
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
		return func_257(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_257(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_257(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_257(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_141(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_141(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_141(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_141(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_141(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_141(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_254() /*10930*/].f_181E.f_A, iParam0);
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_140();
	}
	iVar1 = func_259(iParam0, iParam1);
	uVar2 = func_258(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_258(int iParam0)
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

int func_259(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_140();
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

int func_260(bool bParam0)
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
		func_154(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_261(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_261(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_262(iParam0, iParam1);
}

int func_262(int iParam0, int iParam1)
{
	if (func_549(0x0000000E) && !func_273(iParam0))
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
	if (func_272(&Global_4127F1))
	{
		if (func_270(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_263(&Global_4127F1, iParam0))
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

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_549(0x0000000E) && !func_273(iParam1))
	{
		return 0x00000000;
	}
	if (func_270(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_269(uParam0) < 0f)
	{
		func_268(uParam0, 0x00000000);
	}
	func_266(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_264(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_549(0x0000000E) && !func_273(iParam1))
	{
		return 0x00000000;
	}
	if (func_270(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_269(uParam0) < 0f)
	{
		func_268(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_265(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_265(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_267(uParam0, iVar0);
		iVar0++;
	}
	func_268(uParam0, (Global_4127F0 - 0.5f));
}

void func_267(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_268(var uParam0, float fParam1)
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

float func_269(var uParam0)
{
	return uParam0->f_50;
}

bool func_270(var uParam0, int iParam1)
{
	return func_271(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_271(var uParam0, int iParam1)
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

bool func_272(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_273(int iParam0)
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

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_275(int iParam0, int iParam1)
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

void func_276()
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

int func_277(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_278()
{
	if (func_548())
	{
		return func_280(unk_0xD803B885F5E47A62());
	}
	return func_279(func_23());
}

int func_279(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000001:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		case 0x00000002:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &uVar0, 0xFFFFFFFF);
			return uVar0;
		
		default:
	}
	return 0x00000000;
}

var func_280(int iParam0)
{
	var uVar0;
	
	uVar0 = func_281(iParam0);
	return uVar0;
}

int func_281(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_282(iParam0))
		{
			return Global_184507[iParam0 /*876*/].f_D3.f_3;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_282(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

void func_283(int iParam0)
{
	if (unk_0xFC21F7E0F4D92523() != 0x000000FF)
	{
		unk_0x149ACFF504D36C1E(iParam0);
		unk_0xD90B263D1A6D7404(iParam0);
	}
}

void func_284()
{
	Global_56C3.f_5 = 0x00000000;
}

void func_285(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = iParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
			{
				if (Global_574E.f_13E1[iVar0] != 0x00000000)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 0x00000080)
		{
			Global_574E.f_166A++;
			iVar1 = 0x00000000;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
				{
					if (Global_574E.f_13E1[iVar0] != 0x00000000)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_286()
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 0x00000003;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_287();
		if (iLocal_289 == 0x00000000)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			unk_0xAE317D00A5A55DF6("PROSTITUTE_BLOWJOB", 0x00000000, 0xFFFFFFFF);
			iLocal_288 = 0x00000000;
		}
		else if (iLocal_289 == 0x00000001)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 0x00000001;
		}
		else if (iLocal_289 == 0x00000002)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 0x00000002;
		}
	}
}

void func_287()
{
	switch (iLocal_289)
	{
		case 0x00000000:
			func_289();
			break;
		
		case 0x00000001:
		case 0x00000002:
			func_288();
			break;
	}
}

void func_288()
{
	iLocal_46++;
	iLocal_47 = 0x00000001;
}

void func_289()
{
	iLocal_45++;
	iLocal_47 = 0x00000001;
}

int func_290()
{
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (Global_4121D1 > 0xFFFFFFFF)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000ED))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_291(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		return 0x00000000;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		unk_0xC74D8A1D346B9CCB(0x00000004);
		if (iParam0 && unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			return 0x00000001;
		}
		else
		{
			Global_4121D1 = 0xFFFFFFFF;
			return 0x00000000;
		}
	}
	if (((Global_4121D1 > 0xFFFFFFFF || Global_4121D1 == 0xFFFFFFFD) || Global_4121D1 == 0xFFFFFFFE) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(0x00000001);
		return 0x00000000;
	}
	if (Global_4121D1 == 0xFFFFFFFF && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000ED))
		{
			unk_0xC74D8A1D346B9CCB(0x00000004);
			Global_4121D1 = 0xFFFFFFFA;
			return 0x00000001;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(0x00000003);
			return 0x00000000;
		}
	}
	unk_0xC74D8A1D346B9CCB(0x00000001);
	return 0x00000000;
}

void func_292(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 0xFFFFFFFF;
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		Global_4121D1 = 0xFFFFFFFF;
		return;
	}
	unk_0xFE29D579C98536B2(0x00000001);
	fVar0 = Global_574B;
	fVar2 = (fVar0 + Global_574D);
	fVar3 = Global_574E.f_1662;
	fVar1 = (Global_574E.f_1662 - (IntToFloat(Global_574E.f_1664) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_574E.f_1664 < 0x00000001)
	{
		fVar1 = (Global_574E.f_1662 - 0.034722f);
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_295();
	if (Global_4121D1 == 0xFFFFFFFA)
	{
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
	fVar7 = Global_4121CB;
	fVar8 = Global_4121CC;
	if (Global_574E.f_1665 > Global_574E.f_1664)
	{
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= fVar3) && Global_4121CC < (fVar3 + fVar6))
		{
			Global_4121D1 = 0xFFFFFFFE;
			if (bParam3)
			{
				func_294(0x00000000);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 0xFFFFFFFD;
			if (bParam3)
			{
				func_294(0x00000000);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_574E.f_1665 == 0xFFFFFFFF)
		{
			Global_4121D1 = 0x00000000;
			iVar13 = 0x00000000;
			return;
		}
		iVar11 = 0x00000094;
		iVar12 = (iVar11 / Global_574E.f_1664);
		iVar10 = (0x00000020 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0x00000000)
			{
				unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
				unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_293(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 0x000000FF, 0x000000FF, 0x000000FF, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4121D1 = Global_574E.f_1F66[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4121D1 = 0xFFFFFFFC;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4121D1 = 0xFFFFFFFB;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4121D1 = 0xFFFFFFFC;
		return;
	}
	Global_4121D1 = 0xFFFFFFFF;
}

void func_293(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

void func_294(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 0x00000030;
	}
	else
	{
		iVar3 = 0x000000D2;
	}
	fVar0 = Global_574B;
	fVar1 = Global_574E.f_1662;
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4121D1 == 0xFFFFFFFE)
	{
		func_293(fVar0, fVar1, Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	else if (Global_4121D1 == 0xFFFFFFFD)
	{
		func_293(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 0x000000FF, 0x000000FF, 0x000000FF, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_295()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000EF);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000F0);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_296(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4F3973434662D795(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DA) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DB) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DC) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0x4B7163B4D6E4A3C2(0x00000002, 0x000000DD) * 127f));
		}
	}
}

void func_297(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_331(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_329(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_327(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0x00000000;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0x00000000);
		if (func_326())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_326())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 0x00000001)
		{
			func_322(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			Global_574E.f_177E = 0x00000001;
		}
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000002)
	{
		if (iVar5 == 0x00000001 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_321(0x0000001D), 64);
					StringCopy(&cVar64, func_318(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_293(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				func_293(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_317();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000000;
					iVar18 = 0x00000000;
					iVar14 = 0x00000000;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 0x00000002)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000003)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000001)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000008)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000005)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000006)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000007)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000009)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0x00000000);
				}
				if (Global_574E.f_1667)
				{
					func_317();
					func_315((((Global_574B + fParam5) - 0.00390625f) - func_316("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_317();
						func_315((((Global_574B + fParam5) - 0.00390625f) - func_316("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0x00000000;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0x00000000)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000CC;
				}
				func_293(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0x00000000 && Global_574E.f_129E != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_327(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_314(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_314(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_327(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_313(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_321(Global_574E.f_12A0), func_318(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_574E.f_129E > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 0xFFFFFFFF;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0x00000000 && Global_412185.f_41 != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_327(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_314(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_293(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_314(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_327(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_313(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_321(Global_412185.f_43), func_318(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_412185.f_41 > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 0xFFFFFFFF;
					}
				}
			}
			func_306(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 0x00000001 || !Global_574E.f_1660)
		{
			iVar19 = 0x00000000;
			iVar23 = 0x00000000;
			iVar20 = 0x00000000;
			iVar21 = 0x00000000;
			iVar22 = 0x00000000;
			iVar9 = 0x00000000;
			iVar10 = 0x00000000;
			iVar11 = 0x00000000;
			iVar12 = 0x00000000;
			iVar13 = 0x00000000;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 0x00000001);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0x00000000;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = 0x00000000;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = 0x00000001;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = 0x00000000;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 0x00000001) && bVar33)
				{
					iVar70 = 0x000000FF;
					iVar71 = 0x000000FF;
					iVar72 = 0x000000FF;
					iVar73 = 0x000000FF;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(0x00000001, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0x00000000);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0x00000000;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 0x00000005)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0x00000000;
						bVar53 = 0x00000000;
						if (Global_574E.f_177B[0x00000000] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000000])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000000;
							}
						}
						if (Global_574E.f_177B[0x00000001] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000001])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000001;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 0x00000004 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = 0x00000001;
						}
						else
						{
							bVar52 = 0x00000000;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0x00000000:
								break;
							
							case 0x00000001:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0x00000000;
										iVar26 = 0x00000000;
										iVar27 = 0x00000000;
										iVar28 = 0x00000000;
										iVar29 = 0x00000000;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											bVar50 = 0x00000000;
											bVar51 = 0x00000000;
											iVar14 = 0x00000000;
											while (iVar14 < 0x00000004)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
												{
													bVar51 = 0x00000001;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
												{
													bVar50 = 0x00000001;
												}
												iVar14++;
											}
											func_304(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										}
										if (iVar28 > 0x00000000)
										{
											iVar14 = 0x00000000;
											while (iVar14 < iVar28)
											{
												if (func_327(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0x00000000)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000003D)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											iVar69 = (iVar8 - 0x00000001);
											while (iVar69 >= 0x00000000)
											{
												if (Global_574E.f_13DB[iVar69] == 0x00000002)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 0xFFFFFFFF);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_327(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_321(0x0000001A), func_318(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_327(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_321(0x0000001B), func_318(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									iVar25 = 0x00000000;
									iVar26 = 0x00000000;
									iVar27 = 0x00000000;
									iVar28 = 0x00000000;
									iVar29 = 0x00000000;
									iVar31 = 0x00000000;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										bVar50 = 0x00000000;
										bVar51 = 0x00000000;
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												bVar51 = 0x00000001;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												bVar50 = 0x00000001;
											}
											iVar14++;
										}
										func_304(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_303(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0x00000000;
									while (iVar14 < 0x00000004)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000001;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000008;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000005;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000006;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000007;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000009;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 0x00000002;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 0x00000003;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar28)] == 0x0000003D)
											{
												if (func_327(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_327(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_313(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_321(Global_574E.f_1151[(iVar22 + iVar28)]), func_318(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_321(Global_574E.f_1151[(iVar22 + iVar28)]), func_318(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 0x00000004;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										if (iVar31 == 0x00000004 && Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0x00000000);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0x00000000);
											if (func_302() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_304(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(0x000000FF, 0x000000FF, 0x000000FF, 0x00000096);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0x00000000);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0x00000000);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0x00000000)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0x00000000;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000002 && Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000033) && Global_574E.f_1151[(iVar22 + iVar14)] != 0x0000003D)
											{
												if (func_327(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_327(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_313(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_321(Global_574E.f_1151[(iVar22 + iVar14)]), func_318(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_321(Global_574E.f_1151[(iVar22 + iVar14)]), func_318(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_321(Global_574E.f_1151[(iVar22 + iVar14)]), func_318(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = 0x00000001;
								iVar19++;
								iVar14 = 0x00000000;
								while (iVar14 < 0x00000004)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 0x00000002:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_304(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_303(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_327(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_321(0x0000001A), func_318(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_327(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_321(0x0000001B), func_318(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_304(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_301((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
									}
								}
								bVar39 = 0x00000001;
								iVar20++;
								break;
							
							case 0x00000003:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_304(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_303(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_327(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_327(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_321(0x0000001A), func_318(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_327(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_327(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_321(0x0000001B), func_318(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_304(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_300((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_327(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0x00000000)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_327(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_327(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_313(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_321(0x0000001A), func_318(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_327(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_327(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_313(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_321(0x0000001B), func_318(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_327(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_313(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_321(Global_574E.f_1151[iVar22]), func_318(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_299(Global_574E.f_1151[iVar22])), (fVar37 * func_299(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
											}
										}
									}
								}
								bVar39 = 0x00000001;
								iVar22++;
								break;
							
							case 0x00000005:
								bVar39 = 0x00000001;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 0x00000005)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_327(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 0x00000001;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0x00000000;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 0x00000001;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 0x00000001;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_213(0x00000000);
	}
	Global_574E.f_20BE = 0x00000000;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(0x0000000A);
	}
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000008);
	if (bParam0)
	{
		func_298(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_298(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

float func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x00000035:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_300(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_301(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_302()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_303(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000000], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000001], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
}

void func_304(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_305(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 0x00000014 && iVar1 < 0x00000014) && iVar2 < 0x00000014)
			{
				if (bParam0 == 0x00000000)
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 0x000000E6 && iVar1 > 0x000000E6) && iVar2 > 0x000000E6)
			{
				if (bParam0)
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(0x0000000E, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
		else
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0x00000000, 0x00000000, 0x00000000, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	else
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(0x00000001);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000004);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000006);
	}
	else
	{
		unk_0x7BBAC160090910C3(0x00000000);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_305(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000008;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000008;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000025;
			*uParam2 = 0x00000025;
			*uParam3 = 0x00000027;
			break;
		
		case 0x00000016:
			*uParam1 = 0x0000008C;
			*uParam2 = 0x00000092;
			*uParam3 = 0x0000009A;
			break;
		
		case 0x00000017:
			*uParam1 = 0x0000005B;
			*uParam2 = 0x0000005D;
			*uParam3 = 0x0000005E;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000051;
			*uParam2 = 0x00000054;
			*uParam3 = 0x00000059;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x000000F0;
			*uParam2 = 0x000000F0;
			*uParam3 = 0x000000F0;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000096;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0x00000026;
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000006;
			break;
		
		case 0x00000058:
			*uParam1 = 0x000000F5;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000000F;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x0000004A;
			*uParam2 = 0x00000016;
			*uParam3 = 0x00000007;
			break;
		
		case 0x00000038:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x0000003A;
			*uParam3 = 0x00000035;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000047;
			*uParam2 = 0x00000078;
			*uParam3 = 0x0000003C;
			break;
		
		case 0x00000036:
			*uParam1 = 0x0000004D;
			*uParam2 = 0x00000062;
			*uParam3 = 0x00000068;
			break;
		
		case 0x00000049:
			*uParam1 = 0x0000000E;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000006D;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000016;
			*uParam2 = 0x00000022;
			*uParam3 = 0x00000048;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x00000000;
			*uParam2 = 0x000000AE;
			*uParam3 = 0x000000EF;
			break;
		
		case 0x00000083:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000B7;
			*uParam3 = 0x00000000;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x0000008E;
			*uParam2 = 0x0000008C;
			*uParam3 = 0x00000046;
			break;
		
		case 0x00000061:
			*uParam1 = 0x0000009C;
			*uParam2 = 0x0000008D;
			*uParam3 = 0x00000071;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000091;
			*uParam2 = 0x00000073;
			*uParam3 = 0x00000047;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000062;
			*uParam2 = 0x00000044;
			*uParam3 = 0x00000028;
			break;
		
		case 0x00000064:
			*uParam1 = 0x0000007C;
			*uParam2 = 0x0000001B;
			*uParam3 = 0x00000044;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000072;
			*uParam2 = 0x0000002A;
			*uParam3 = 0x0000003F;
			break;
		
		case 0x00000088:
			*uParam1 = 0x000000F6;
			*uParam2 = 0x00000097;
			*uParam3 = 0x00000099;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000020;
			*uParam2 = 0x00000020;
			*uParam3 = 0x0000002C;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000001A;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000017;
			break;
		
		default:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000FF;
			*uParam3 = 0x000000FF;
			break;
	}
}

void func_306(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_331(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_329(bParam4, bParam8))
	{
		return;
	}
	if (func_311())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_309(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0x00000000 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0x00000000)
	{
		if (unk_0xB8E3620B82AD47D7(0x00000002))
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 0x00000169)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(0x00000002, Global_574E.f_13A2[iVar1], 0x00000001), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 0x00000020)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(0x00000002, Global_574E.f_13AF[iVar1], 0x00000001), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0x00000000;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_308(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_308(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_307(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0x00000000)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 0x00000169 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_308(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_307(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0x00000000)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(0x00000001);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 0xFFFFFFFF)
			{
				if (iParam2 > 0x00000000)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 0xFFFFFFFF)
		{
			if (iParam2 > 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 0x00000046);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000042);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
				Global_574E.f_20E1 = 0x00000001;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_574E.f_20E1 = 0x00000000;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

void func_307(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_308(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_309(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_310(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_140();
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

int func_311()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_312())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
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

int func_312()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_313(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(0x00000001, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 0x000000FF;
	switch (iParam0)
	{
		case 0x0000001C:
			*iParam2 = 0x000000C2;
			*iParam3 = 0x00000050;
			*iParam4 = 0x00000050;
			break;
		
		case 0x0000000F:
		case 0x00000004:
		case 0x00000010:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000035:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			if (bParam1)
			{
				*iParam2 = 0x00000000;
				*iParam3 = 0x00000000;
				*iParam4 = 0x00000000;
			}
			break;
		
		case 0x00000036:
			*iParam5 = 0x00000064;
			break;
		
		case 0x0000003E:
			*iParam5 = 0x00000064;
			break;
		
		case 0x00000037:
			unk_0xA402F6C87C08815C(0x00000018, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 0x000000FF;
			break;
	}
}

void func_314(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(0x00000002);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_315(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_316(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_317();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_317()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

var func_318(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_320(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_319(&uVar1);
			}
		}
		else
		{
			return func_319(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 0x00000003:
			sVar0[0x00000000] = "MP_hostCrown";
			sVar0[0x00000001] = "MP_hostCrown";
			break;
		
		case 0x00000015:
			sVar0[0x00000000] = "MP_SpecItem_Coke";
			sVar0[0x00000001] = "MP_SpecItem_Coke";
			break;
		
		case 0x00000016:
			sVar0[0x00000000] = "MP_SpecItem_Heroin";
			sVar0[0x00000001] = "MP_SpecItem_Heroin";
			break;
		
		case 0x00000017:
			sVar0[0x00000000] = "MP_SpecItem_Weed";
			sVar0[0x00000001] = "MP_SpecItem_Weed";
			break;
		
		case 0x00000018:
			sVar0[0x00000000] = "MP_SpecItem_Meth";
			sVar0[0x00000001] = "MP_SpecItem_Meth";
			break;
		
		case 0x00000019:
			sVar0[0x00000000] = "MP_SpecItem_Cash";
			sVar0[0x00000001] = "MP_SpecItem_Cash";
			break;
		
		case 0x00000001:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000002:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000004:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000006:
			sVar0[0x00000000] = "Shop_Box_CrossB";
			sVar0[0x00000001] = "Shop_Box_Cross";
			break;
		
		case 0x00000007:
			sVar0[0x00000000] = "Shop_Box_BlankB";
			sVar0[0x00000001] = "Shop_Box_Blank";
			break;
		
		case 0x00000005:
			sVar0[0x00000000] = "Shop_Box_TickB";
			sVar0[0x00000001] = "Shop_Box_Tick";
			break;
		
		case 0x00000008:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000009:
			sVar0[0x00000000] = "Shop_Clothing_Icon_B";
			sVar0[0x00000001] = "Shop_Clothing_Icon_A";
			break;
		
		case 0x0000000A:
			sVar0[0x00000000] = "Shop_GunClub_Icon_B";
			sVar0[0x00000001] = "Shop_GunClub_Icon_A";
			break;
		
		case 0x00000011:
			sVar0[0x00000000] = "Shop_Ammo_Icon_B";
			sVar0[0x00000001] = "Shop_Ammo_Icon_A";
			break;
		
		case 0x00000012:
			sVar0[0x00000000] = "Shop_Armour_Icon_B";
			sVar0[0x00000001] = "Shop_Armour_Icon_A";
			break;
		
		case 0x00000013:
			sVar0[0x00000000] = "Shop_Health_Icon_B";
			sVar0[0x00000001] = "Shop_Health_Icon_A";
			break;
		
		case 0x00000014:
			sVar0[0x00000000] = "Shop_MakeUp_Icon_B";
			sVar0[0x00000001] = "Shop_MakeUp_Icon_A";
			break;
		
		case 0x0000000B:
			sVar0[0x00000000] = "Shop_Tattoos_Icon_B";
			sVar0[0x00000001] = "Shop_Tattoos_Icon_A";
			break;
		
		case 0x0000000C:
			sVar0[0x00000000] = "Shop_Garage_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Icon_A";
			break;
		
		case 0x0000000D:
			sVar0[0x00000000] = "Shop_Garage_Bike_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 0x0000000E:
			sVar0[0x00000000] = "Shop_Barber_Icon_B";
			sVar0[0x00000001] = "Shop_Barber_Icon_A";
			break;
		
		case 0x0000000F:
			sVar0[0x00000000] = "shop_Lock";
			sVar0[0x00000001] = "shop_Lock";
			break;
		
		case 0x00000010:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x0000001A:
			sVar0[0x00000000] = "arrowleft";
			sVar0[0x00000001] = "arrowleft";
			break;
		
		case 0x0000001B:
			sVar0[0x00000000] = "arrowright";
			sVar0[0x00000001] = "arrowright";
			break;
		
		case 0x0000001C:
			sVar0[0x00000000] = "MP_AlertTriangle";
			sVar0[0x00000001] = "MP_AlertTriangle";
			break;
		
		case 0x0000001D:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x0000001F:
			sVar0[0x00000000] = "Shop_Michael_Icon_B";
			sVar0[0x00000001] = "Shop_Michael_Icon_A";
			break;
		
		case 0x00000020:
			sVar0[0x00000000] = "Shop_Franklin_Icon_B";
			sVar0[0x00000001] = "Shop_Franklin_Icon_A";
			break;
		
		case 0x00000021:
			sVar0[0x00000000] = "Shop_Trevor_Icon_B";
			sVar0[0x00000001] = "Shop_Trevor_Icon_A";
			break;
		
		case 0x00000033:
			sVar0[0x00000000] = "SaleIcon";
			sVar0[0x00000001] = "SaleIcon";
			break;
		
		case 0x00000034:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000036:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000037:
			sVar0[0x00000000] = "Shop_Lock_Arena";
			sVar0[0x00000001] = "Shop_Lock_Arena";
			break;
		
		case 0x00000038:
			sVar0[0x00000000] = "Card_Suit_Clubs";
			sVar0[0x00000001] = "Card_Suit_Clubs";
			break;
		
		case 0x00000039:
			sVar0[0x00000000] = "Card_Suit_Hearts";
			sVar0[0x00000001] = "Card_Suit_Hearts";
			break;
		
		case 0x0000003A:
			sVar0[0x00000000] = "Card_Suit_Spades";
			sVar0[0x00000001] = "Card_Suit_Spades";
			break;
		
		case 0x0000003B:
			sVar0[0x00000000] = "Card_Suit_Diamonds";
			sVar0[0x00000001] = "Card_Suit_Diamonds";
			break;
		
		case 0x0000003C:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003E:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003D:
			sVar0[0x00000000] = "Shop_Chips_A";
			sVar0[0x00000001] = "Shop_Chips_B";
			break;
		
		case 0x00000000:
			sVar0[0x00000000] = "";
			sVar0[0x00000001] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0x00000000];
	}
	return sVar0[0x00000001];
}

var func_319(var uParam0)
{
	return uParam0;
}

struct<13> func_320(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_321(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_320(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_319(&uVar0);
		}
		else
		{
			return func_319(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_322(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000001)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000001)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000001)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_325(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_325(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_324(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_327(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0x00000000)
		{
			fVar4 = func_323(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000001;
	Global_574E.f_166E = (Global_574E.f_1464 - 0x00000001);
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = iParam2;
}

float func_323(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_324(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_304(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_325(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_326()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_327(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_321(iParam0), 64);
	StringCopy(&cVar1, func_318(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_326())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_326())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_328(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_328(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 0x0000001E)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 0x0000001D && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 0x0000001E)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 0x0000001D)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

float func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000004:
		case 0x0000000B:
		case 0x0000001F:
		case 0x00000014:
		case 0x0000000F:
		case 0x0000000A:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000020:
		case 0x00000009:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x0000000E:
		case 0x00000012:
		case 0x00000013:
		case 0x00000011:
		case 0x0000001C:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003E:
			return 0.5f;
			break;
		
		case 0x0000003D:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_329(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_30(0x00000008, 0xFFFFFFFF) && func_330() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_330()
{
	return Global_14082C;
}

int func_331(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000006)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 0x00000001;
		}
		else if (Global_574E.f_1659[iVar2] == 0x00000000)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_332()
{
	if (!func_369(iLocal_295))
	{
		iLocal_295 = func_350();
		func_341(&iLocal_295, 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000001, 0x00000002), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (!func_488(iLocal_73, 0x00000002))
	{
		if (func_333(iLocal_295))
		{
			iLocal_295 = func_350();
			func_341(&iLocal_295, 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000001, 0x00000002), 0x00000000, 0x00000000, 0x00000000);
			func_480(&iLocal_73, 0x00000002);
		}
	}
	else if (func_333(iLocal_295))
	{
		func_284();
		func_471(0x00000000);
	}
}

bool func_333(int iParam0)
{
	return func_334(func_350(), iParam0);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_369(iParam1) || !func_369(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_335(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_336(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_337(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_338(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_339(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_340(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_167(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_340(*iParam0);
	iVar1 = func_339(*iParam0);
	iVar2 = func_338(*iParam0);
	iVar3 = func_337(*iParam0);
	iVar4 = func_336(*iParam0);
	iVar5 = func_335(*iParam0);
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
	iVar6 = func_349(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_349(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_342(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, iParam1);
	func_347(uParam0, iParam2);
	func_346(uParam0, iParam3);
	func_345(uParam0, iParam5);
	func_344(uParam0, iParam4);
	func_343(uParam0, iParam6);
}

void func_343(var uParam0, int iParam1)
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

void func_344(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(*uParam0);
	iVar1 = func_340(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_349(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_349(int iParam0, int iParam1)
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

int func_350()
{
	var uVar0;
	
	func_348(&uVar0, unk_0x4460E481B9E33ADA());
	func_347(&uVar0, unk_0x8D199E381D262EEF());
	func_346(&uVar0, unk_0xD8A54335F18763BA());
	func_344(&uVar0, unk_0x972A296334C9D57B());
	func_345(&uVar0, unk_0x118229AD063C3C1D());
	func_343(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_351(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_352()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_363(0x00000001);
	func_283(0x00000001);
	unk_0xBFE31971E49FA500(0x00000000);
	func_362(0x00000000, 0x00000000);
	func_361(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_360(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000001);
	func_359("PROS_OPTS");
	func_358(0x000000C9, "PROS_SELECT", 0xFFFFFFFF, 0x00000000);
	iLocal_69 = 0x00000000;
	iVar0 = func_233(0x00000000);
	iVar1 = func_233(0x00000001);
	iVar2 = func_233(0x00000002);
	if (func_278() >= iVar0)
	{
		func_322(iLocal_69, "PROS_DOLLAR", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_355(iVar0, 0x00000000);
		iLocal_283[iLocal_69] = 0x00000000;
		iLocal_69++;
	}
	if (func_278() >= iVar1 && func_354(iLocal_93))
	{
		func_322(iLocal_69, "PROS_DOLLAR", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_355(iVar1, 0x00000000);
		iLocal_283[iLocal_69] = 0x00000001;
		iLocal_69++;
	}
	if (func_278() >= iVar2 && func_354(iLocal_93))
	{
		func_322(iLocal_69, "PROS_DOLLAR", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_355(iVar2, 0x00000000);
		iLocal_283[iLocal_69] = 0x00000002;
		iLocal_69++;
	}
	func_322(iLocal_69, "PROS_QUIT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	iLocal_68 = 0x00000000;
	func_285(iLocal_68, 0x00000001, 0x00000001);
	func_353();
	iLocal_87 = unk_0x1C0640BA9A7327B3();
	iLocal_292 = 0x00000003;
}

void func_353()
{
	Global_56C3.f_5 = 0x00000001;
}

int func_354(int iParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == 0xAC33179C)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_355(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_574E.f_1466 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F >= 0x00000004)
	{
		return;
	}
	if (Global_574E.f_1670 != 0x00000001)
	{
		return;
	}
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		return;
	}
	Global_574E.f_F4E[Global_574E.f_1466] = iParam0;
	Global_574E.f_1466++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000002;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_357();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_327(0x0000001A, 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)])
		{
			Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_574E.f_166F >= Global_574E.f_166D)
		{
			fVar3 = func_356();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

float func_356()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar0] == 0x00000004)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)] != 0x00000000)
		{
			if (func_327(Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)], 0x00000001, 0x00000000, &uVar3, &fVar4, 0x00000000))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0.35f, 0x00000000))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_357()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			iVar3++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			iVar4++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000004)
		{
			iVar5++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_304(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, iVar6 > 0x00000000, 0x00000000);
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[Global_574E.f_166E /*6*/]));
	}
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[((Global_574E.f_1466 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x21994591120B91F0(Global_574E.f_104F[((Global_574E.f_1467 - iVar4) + iVar10)], Global_574E.f_10D0[((Global_574E.f_1467 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
	}
	iVar7 = 0x00000000;
	while (iVar7 < iVar5)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)] != 0x00000000)
		{
			func_327(Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)], 0x00000001, 0x00000000, &fVar1, &uVar2, 0x00000000);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_358(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_13BC), Global_574E.f_12A1);
	}
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

void func_359(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0x00000000] = iParam0;
	Global_574E.f_13C0[0x00000001] = iParam1;
	Global_574E.f_13C0[0x00000002] = iParam2;
	Global_574E.f_13C0[0x00000003] = iParam3;
	Global_574E.f_13C0[0x00000004] = iParam4;
	Global_574E.f_146A = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
}

void func_362(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0x00000000;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_F4E[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_1151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_13E1[iVar0] = 0x00000000;
		Global_574E.f_146B[iVar0] = 0x00000000;
		Global_574E.f_14EC[iVar0] = 0x00000000;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0x00000000;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_574E.f_13C0[iVar0] = 0x00000000;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0x00000000;
		Global_574E.f_13DB[iVar0] = 0x00000001;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000100)
		{
			Global_574E.f_64A[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	Global_574E = 0x00000000;
	Global_574E.f_1462 = 0x00000000;
	Global_574E.f_1463 = 0x00000000;
	Global_574E.f_1464 = 0x00000000;
	Global_574E.f_1466 = 0x00000000;
	Global_574E.f_1467 = 0x00000000;
	Global_574E.f_1468 = 0x00000000;
	Global_574E.f_1465 = 0x00000000;
	Global_574E.f_16F2 = 0x00000000;
	Global_574E.f_177E = 0x00000000;
	Global_574E.f_166B = 0x00000000;
	Global_574E.f_166A = 0x00000000;
	Global_574E.f_166C = 0x00000000;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = 0x00000000;
	Global_574E.f_129F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_12A0 = 0x00000000;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0x00000000;
	Global_412185.f_3E = 0x00000000;
	Global_412185.f_3F = 0x00000000;
	Global_412185.f_40 = 0x00000000;
	Global_412185.f_41 = 0x00000000;
	Global_412185.f_42 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_412185.f_19[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_412185.f_43 = 0x00000000;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_1670 = 0x00000000;
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = 0x00000000;
	Global_574E.f_166E = 0x00000000;
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	Global_574E.f_1469 = 0x0000000A;
	Global_574E.f_146A = 0x00000000;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0x00000000;
	Global_574E.f_1665 = 0x00000000;
	Global_574E.f_1664 = 0x00000000;
	Global_574E.f_1666 = 0x00000000;
	Global_574E.f_1667 = 0x00000000;
	Global_574E.f_1668 = 0x00000000;
	Global_574E.f_1669 = 0x00000000;
	Global_574E.f_20DD = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_574E.f_1778[iVar0] = 0xFFFFFFFF;
		Global_574E.f_177B[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0x00000000;
	Global_574E.f_13DA = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_20C8 = 0x00000000;
	Global_574E.f_20C3 = 0x00000000;
	Global_574E.f_20CD = 0x00000000;
	Global_574E.f_20D2 = 0x00000000;
	Global_574E.f_20D7 = 0x00000000;
	Global_574E.f_20D9 = 0x00000000;
	Global_574E.f_20DF = 0x00000000;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0x00000000);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

void func_363(bool bParam0)
{
	if (!bParam0)
	{
		Global_1AEC8 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_1AEC5 = bParam0;
}

int func_364(char* sParam0, int iParam1)
{
	if (func_278() < func_233(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0x00000000;
	}
	if (unk_0x8CD06866876216F2() && func_365(unk_0xD803B885F5E47A62()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0x00000000;
	}
	StringCopy(sParam0, "", 16);
	return 0x00000001;
}

int func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_366(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!unk_0xB4AE0788C1587752(func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000)))
	{
	}
	else if (!unk_0xB4ECF989E2C1DAC8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_110(bParam1), 0x00000003) && unk_0xD1960163A3042274(iParam0, 0x87B9A382) != 0x00000001)
	{
		if (func_548())
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				if (!func_205(unk_0xD803B885F5E47A62()))
				{
					iVar0 = unk_0x36C584991B4C183F(unk_0x16F2683693E537C9(), 0x00000006);
					if (!func_521(0x00000100))
					{
						func_196(0x00000100);
						iLocal_84 = iVar0;
						iLocal_85 = unk_0xDADA8E1DD0D0D9D9(unk_0x16F2683693E537C9(), 0x00000006);
						unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000006, 0x00000001, 0x00000000, 0x00000000);
						func_196(0x00000400);
					}
				}
				unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_367(bParam1), 2f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_367(bParam1), 2f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		else
		{
			unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_367(bParam1), 2f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	else
	{
		if (unk_0xB4ECF989E2C1DAC8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_367(bParam1), 0x00000003))
		{
			if (unk_0x8CA9406E01C7EE58(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_367(bParam1)) >= 0.95f)
			{
				unk_0xC6EB89C59F2AF6B8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_110(bParam1), 8f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		if (unk_0xB4ECF989E2C1DAC8(iParam0, func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000), func_110(bParam1), 0x00000003))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

var func_367(bool bParam0)
{
	if (!func_488(iLocal_49, 0x00008000))
	{
		if (bParam0)
		{
			return func_45(0x00000000);
		}
		else
		{
			return func_45(0x00000001);
		}
	}
	if (bParam0)
	{
		return func_46(0x00000000);
	}
	return func_46(0x00000001);
}

void func_368(int iParam0)
{
	*iParam0 = 0xFFFFFFF1;
}

int func_369(int iParam0)
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
	iVar0 = func_335(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_336(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_337(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_340(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_339(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_338(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_349(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_370()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	unk_0x0FB22E2FED7BCC7E(iLocal_90);
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		if (iLocal_70 < 0x00000001)
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
		}
		else
		{
			unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
		}
	}
}

int func_371()
{
	if (func_372(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0xAE317D00A5A55DF6("SCRIPT\HUD_321_GO", 0x00000001, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_372(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_331(&iVar0, 0x00000001, iParam1))
	{
		return 0x00000000;
	}
	bVar1 = 0x00000001;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009);
		Global_574E.f_15FC[iVar0] = 0x00000001;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009))
		{
			bVar1 = 0x00000000;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
	Global_574E.f_15EE[iVar0] = 0x00000001;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = 0x00000000;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0x00000000);
		Global_574E.f_15F5[iVar0] = 0x00000001;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = 0x00000000;
		}
	}
	bVar2 = 0x00000000;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_373(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_373(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0x00000000:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 0x00000001;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 0x00000002;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0x00000000;
			}
			break;
	}
	return uParam0->f_9 == 0x00000002;
}

void func_374()
{
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iLocal_90))
	{
		iLocal_58 = unk_0x7F6DC62EA9922664(iLocal_90);
	}
}

void func_375()
{
	int iVar0;
	
	if (!func_548())
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vLocal_56 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
		}
	}
}

void func_376(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_331(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_574E.f_20E1 = 0x00000000;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(0x00000009, 0x00000000);
		Global_574E.f_15FC[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0x00000000;
	}
	if (bParam0)
	{
		func_377(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_377(int iParam0)
{
	if (iParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0x00000000;
		iParam0->f_9 = 0x00000000;
	}
}

int func_378()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (!iLocal_93 == 0x00000000)
				{
					if ((unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000) && !unk_0x4E861BC5B1EDA7BD(iLocal_93)) && !unk_0x377BE9A1BF38C7CE(iLocal_93))
					{
						if (func_91(&iLocal_93))
						{
							func_5(&iLocal_49, 0x00000001);
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_379()
{
	if (iLocal_70 == 0x00000000)
	{
		if (!func_488(iLocal_51, 0x00000001) && !func_488(iLocal_51, 0x00000010))
		{
			if (func_380(0x00000000))
			{
				func_480(&iLocal_51, 0x00000001);
			}
		}
		if (!func_488(iLocal_51, 0x00000004) && !func_488(iLocal_51, 0x00000040))
		{
			if (func_380(0x00000002))
			{
				func_480(&iLocal_51, 0x00000004);
			}
		}
		if (!func_488(iLocal_51, 0x00000008) && !func_488(iLocal_51, 0x00000080))
		{
			if (func_380(0x00000001))
			{
				func_480(&iLocal_51, 0x00000008);
			}
		}
	}
}

int func_380(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	vVar0 = { func_186(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iLocal_93, 0x00000001) };
	if (iLocal_299[iParam0] == 0x00000000)
	{
		if (unk_0x134B62B726CEC8E6(iLocal_93) == 0xE99011C2)
		{
			iLocal_299[iParam0] = unk_0xD7C553FB028E03E7(vVar0, vVar1, 0.1f, 0x000001FF, iLocal_93, 0x00000003);
		}
		else if ((unk_0x134B62B726CEC8E6(iLocal_93) == joaat("casco") || unk_0x134B62B726CEC8E6(iLocal_93) == joaat("feltzer3")) || unk_0x134B62B726CEC8E6(iLocal_93) == 0x6068AD86)
		{
			iLocal_299[iParam0] = unk_0xD7C553FB028E03E7(vVar0, vVar1, 0.15f, 0x000001FF, iLocal_93, 0x00000003);
		}
		else
		{
			iLocal_299[iParam0] = unk_0xD7C553FB028E03E7(vVar0, vVar1, 0.25f, 0x000001FF, iLocal_93, 0x00000003);
		}
	}
	else
	{
		switch (unk_0x1EC301670B54C6DE(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 0x00000002:
				iLocal_299[iParam0] = 0x00000000;
				if (iVar2 != 0x00000000)
				{
					func_381(iParam0);
					return 0x00000000;
				}
				else
				{
					return 0x00000001;
				}
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000000:
				iLocal_299[iParam0] = 0x00000000;
				break;
			}
	}
	return 0x00000000;
}

void func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (!func_488(iLocal_51, 0x00000010))
			{
				func_480(&iLocal_51, 0x00000010);
				func_5(&iLocal_51, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (!func_488(iLocal_51, 0x00000080))
			{
				func_480(&iLocal_51, 0x00000080);
				func_5(&iLocal_51, 0x00000008);
			}
			break;
		
		case 0x00000002:
			if (!func_488(iLocal_51, 0x00000040))
			{
				func_480(&iLocal_51, 0x00000040);
				func_5(&iLocal_51, 0x00000004);
			}
			break;
		
		case 0x00000003:
			if (!func_488(iLocal_51, 0x00000020))
			{
				func_480(&iLocal_51, 0x00000020);
				func_5(&iLocal_51, 0x00000002);
			}
			break;
	}
}

void func_382()
{
	if (func_387() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iLocal_286 = 0x00000009;
		func_385(iLocal_90);
		func_385(unk_0x16F2683693E537C9());
		func_383();
		func_40(&iLocal_98);
	}
}

void func_383()
{
	struct<7> Var0;
	struct<7> Var1;
	
	if (!unk_0x9F4FE516EAACCFC5(iLocal_96))
	{
		iLocal_96 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000001);
	}
	if (!unk_0x9F4FE516EAACCFC5(iLocal_97))
	{
		iLocal_97 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000001);
	}
	func_384(&Var0, &Var1);
	unk_0x608A456FDD8A83D8(iLocal_96, Var0);
	unk_0x5F3CBA6EB9341C90(iLocal_96, Var0.f_3, 0x00000002);
	unk_0x5818C8D5303DCCF8(iLocal_96, Var0.f_6);
	unk_0x608A456FDD8A83D8(iLocal_97, Var1);
	unk_0x5F3CBA6EB9341C90(iLocal_97, Var1.f_3, 0x00000002);
	unk_0x5818C8D5303DCCF8(iLocal_97, Var1.f_6);
	unk_0xE3BB8E05FCEB3FBE(iLocal_96, 0x00000001);
	unk_0xE3BB8E05FCEB3FBE(iLocal_97, 0x00000000);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
}

void func_384(var uParam0, var uParam1)
{
	switch (func_23())
	{
		case 0x00000000:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 0x00000001:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 0x00000002:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_385(int iParam0)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		unk_0xF82EA857DA10E0CD(&iVar0);
		unk_0xDD353D0E9C789D0E(&iVar0);
		if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x01010000);
		}
		unk_0x96167B03C5A77156(0x00000000, func_386(), 1f, 0xFFFFFFFF, 0.5f, 0x00002000, 0x471C4000);
		unk_0x75ABDC5F81978924(iVar0);
		unk_0x78ADC381772E3D54(iParam0, iVar0);
		unk_0xF82EA857DA10E0CD(&iVar0);
	}
}

Vector3 func_386()
{
	switch (func_23())
	{
		case 0x00000000:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 0x00000001:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 0x00000002:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_387()
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_389()) < (func_388() * func_388());
}

float func_388()
{
	switch (func_23())
	{
		case 0x00000000:
			return 20.75f;
			break;
		
		case 0x00000001:
			return 10f;
			break;
		
		case 0x00000002:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_389()
{
	switch (func_23())
	{
		case 0x00000000:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 0x00000001:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 0x00000002:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_390()
{
	func_332();
	func_405();
	if (!func_10(&iLocal_101))
	{
		func_470(&iLocal_101);
	}
	if (func_404())
	{
		return;
	}
	if (!func_10(&iLocal_110))
	{
		func_470(&iLocal_110);
	}
	if (func_378() && unk_0xC42A92762C58E1B9(iLocal_90, iLocal_93, 0x00000000))
	{
		if (unk_0x8B38C0DAEEDB5F9C(iLocal_93) && unk_0xF79A7BCA9E38BBBC(iLocal_93))
		{
			if ((func_397() && !func_387()) && !func_396())
			{
				func_395();
				if (func_7(&iLocal_110) > 2.5f)
				{
					iLocal_83 = unk_0x544B74C043CE9948(unk_0x68F4C0EC296D3901(iLocal_93, 0x00000000), 40f, 40f, 40f, unk_0xD9522BA9E27E1349(iLocal_93), 0x00000000, 0x00000007);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000380);
					func_480(&iLocal_49, 0x00000800);
					iLocal_94 = 0x00000000;
					unk_0xF63400DBE3303D26("ProstituteInPlay", &iLocal_298);
					unk_0x0E2400AB9174FA81(0x00000001, iLocal_298, 0x6F0783F5);
					unk_0x6DF7BF67E86AAE86(iLocal_90, iLocal_298);
					func_489("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 0x00000400);
					iLocal_295 = 0xFFFFFFF1;
					func_128();
					func_394();
					iLocal_81 = 0x00000003;
					if (func_48(0x00000000, 0x00000001))
					{
						unk_0xF3039DE1FDB4F6FD(0x00000000);
					}
					iLocal_286 = 0x00000008;
				}
			}
			else
			{
				if ((!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()) && func_7(&iLocal_101) > 15f) && func_393())
				{
					if (!func_488(iLocal_50, 0x00001000))
					{
						func_351("PROS_SPOT", 0xFFFFFFFF);
						func_480(&iLocal_50, 0x00001000);
					}
					func_392();
					func_40(&iLocal_101);
				}
				func_40(&iLocal_110);
			}
		}
		else
		{
			func_40(&iLocal_110);
			func_391();
		}
	}
	else if (!func_387())
	{
		if (unk_0xC844350D5D58C99A(iLocal_90))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
			{
				unk_0xA3BF0AA5A2608191(iLocal_90);
			}
		}
		func_471(0x00000000);
	}
}

void func_391()
{
	iLocal_51 = 0x00000000;
	iLocal_299[0x00000000] = 0x00000000;
	iLocal_299[0x00000001] = 0x00000000;
	iLocal_299[0x00000002] = 0x00000000;
	iLocal_299[0x00000003] = 0x00000000;
}

void func_392()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	if (!unk_0x7DECE00E09F41C95(iLocal_90))
	{
		unk_0xC8B576D6F470FFC6(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
	}
}

int func_393()
{
	if (!func_488(iLocal_51, 0x00000100))
	{
		return 0x00000001;
	}
	return func_488(iLocal_51, 0x00000020);
}

void func_394()
{
	if (func_548())
	{
		unk_0x4E885A246A9D983A(iLocal_90, 0x000000E5, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_90, 0x0000001A, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_90, 0x00000073, 0x00000001);
		unk_0x11AD11297DC58CC7(iLocal_90, 0x00000001);
	}
}

void func_395()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (!func_488(iLocal_49, 0x00200000))
	{
		if (unk_0x1C0640BA9A7327B3() > iLocal_82)
		{
			if (iLocal_94 == 0x00000000)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_93, 0x00000001) };
				unk_0xE82754C349C7B581(vVar0, &fVar2, 0x00000000, 0x00000000);
				vVar0.z = (fVar2 + 0.15f);
				vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = unk_0x6D4C9F7CF124AE37(vVar0, vVar1, 2f, 0x000001FF, iLocal_93, 0x00000007);
			}
			else if (unk_0xDE23DA909EBB673C(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 0x00000002)
			{
				if (iVar4 != 0x00000000)
				{
					if ((iVar3 == 0xA9BC4217 || iVar3 == 0x72C668B6) || iVar3 == 0x7EDC5571)
					{
						func_40(&iLocal_110);
					}
				}
				iLocal_82 = unk_0x1C0640BA9A7327B3() + 1500;
				iLocal_94 = 0x00000000;
			}
		}
	}
}

int func_396()
{
	int iVar0;
	
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		if (!unk_0xBBA8A868118C90ED(iVar0, 0x00000000, 0x00000000))
		{
			if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()) || unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_397()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if (unk_0xDB27A414FA5965A7(vVar1, func_65(0x00000000), 12f, 0x00000000) || unk_0xDB27A414FA5965A7(vVar1, func_65(0x00000001), 12f, 0x00000000))
		{
			return 0x00000000;
		}
		if (func_403())
		{
			return 0x00000000;
		}
		if (func_402(iLocal_93, &vVar2))
		{
			if (!func_401(vVar2))
			{
				if (!func_400(vVar1) || func_399(vVar1))
				{
					return 0x00000000;
				}
			}
		}
		if (func_90(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), (30f * 0.5f)))
		{
			return 0x00000000;
		}
		if (!unk_0x3CAA763EEC01ADF7(iLocal_90, iLocal_93, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		unk_0x65020188A2A26D62(0x00000001);
		if (unk_0xE51E576EA6B739AC(vVar1, 20f, 0x00000001, 0x00000001, &iVar0, 0x00000000, 0x00000001, 0xFFFFFFFF))
		{
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
				{
					if (unk_0xF649DD3BF44195C7(iVar0, iLocal_93, 0x00000011))
					{
						return 0x00000000;
					}
				}
			}
			else
			{
				func_489("NO VEHICLES FOUND");
			}
		}
		iVar3 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
		if (!iVar3 == 0x00000000)
		{
			func_489("IN AN INTERIOR");
			return 0x00000000;
		}
		if (func_398())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_398()
{
	func_480(&iLocal_51, 0x00000100);
	if (!func_488(iLocal_51, 0x00000002))
	{
		if (func_380(0x00000003))
		{
			func_480(&iLocal_51, 0x00000002);
			func_5(&iLocal_51, 0x00000020);
		}
		return 0x00000001;
	}
	else
	{
		func_379();
	}
	return 0x00000000;
}

int func_399(vector3 vParam0)
{
	if (((((((((SYSTEM::VDIST(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(vParam0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || SYSTEM::VDIST(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f) || SYSTEM::VDIST(vParam0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || SYSTEM::VDIST(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || SYSTEM::VDIST(vParam0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || SYSTEM::VDIST(vParam0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || SYSTEM::VDIST(vParam0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || SYSTEM::VDIST(vParam0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || SYSTEM::VDIST(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_400(vector3 vParam0)
{
	if ((((((SYSTEM::VDIST(vParam0, -1582.782f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(vParam0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || SYSTEM::VDIST(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || SYSTEM::VDIST(vParam0, -273f, 317.8898f, 92.2549f) <= 15f) || SYSTEM::VDIST(vParam0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || SYSTEM::VDIST(vParam0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || SYSTEM::VDIST(vParam0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_480(&iLocal_49, 0x00200000);
		return 0x00000001;
	}
	func_5(&iLocal_49, 0x00200000);
	return 0x00000000;
}

int func_401(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDEC4A70C9F250662(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001, 0x00000001, 0x40400000, 0x00000000);
	unk_0x8502D8EBA9E78216(iVar0, &vParam0);
	if (unk_0xD9DC3EBC8290FF92(iVar0))
	{
		if (!unk_0x5B33870CBB8B6AC1(iVar0))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam0) > 400f)
			{
				return 0x00000001;
			}
		}
		else if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam0) > 56.25f)
		{
			return 0x00000001;
		}
	}
	else if (!unk_0x5B33870CBB8B6AC1(iVar0))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam0) > 400f)
		{
			return 0x00000001;
		}
	}
	else
	{
		iVar0 = unk_0xDEC4A70C9F250662(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001, 0x00000008, 0x40400000, 0x00000000);
		unk_0x8502D8EBA9E78216(iVar0, &vParam0);
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vParam0) > 400f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_402(int iParam0, var uParam1)
{
	vector3 vVar0[4];
	
	vVar0[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, 2f, 0f, 0f) };
	vVar0[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, -2f, 0f, 0f) };
	vVar0[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 2f, 0f) };
	vVar0[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, -2f, 0f) };
	if (unk_0xA89A37CE7C5E4A5E(vVar0[0x00000000 /*3*/], uParam1, 0x40400000, 0x00000000))
	{
		return 0x00000001;
	}
	else if (unk_0xA89A37CE7C5E4A5E(vVar0[0x00000001 /*3*/], uParam1, 0x40400000, 0x00000000))
	{
		return 0x00000001;
	}
	else if (unk_0xA89A37CE7C5E4A5E(vVar0[0x00000002 /*3*/], uParam1, 0x40400000, 0x00000000))
	{
		return 0x00000001;
	}
	else if (unk_0xA89A37CE7C5E4A5E(vVar0[0x00000003 /*3*/], uParam1, 0x40400000, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_403()
{
	return Global_12061;
}

int func_404()
{
	if (unk_0x8A22C4C08282BF26(joaat("carwash1")) > 0x00000000 || unk_0x8A22C4C08282BF26(joaat("carwash2")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_405()
{
	if (!func_488(iLocal_49, 0x00000080))
	{
		func_406(0x00000027, 0x00000001);
		func_406(0x00000028, 0x00000001);
		func_406(0x00000029, 0x00000001);
		func_406(0x0000002A, 0x00000001);
		func_406(0x0000002B, 0x00000001);
		func_406(0x0000002C, 0x00000001);
		func_480(&iLocal_49, 0x00000080);
	}
}

void func_406(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_410(iParam0, 0x00000002, 0x00000001))
		{
			func_409(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_410(iParam0, 0x00000002, 0x00000001))
	{
		func_407(iParam0, 0x00000002, 0x00000001);
	}
}

void func_407(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0x00000000)
		{
			iVar0 = func_141(func_408(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_138(func_408(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_408(int iParam0)
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

void func_409(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0x00000000)
		{
			iVar0 = func_141(func_408(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_138(func_408(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_410(int iParam0, int iParam1, bool bParam2)
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
		if (func_153() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_141(func_408(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

void func_411(var uParam0)
{
	if (func_488(iLocal_49, 0x00000002))
	{
		if (!func_63())
		{
			return;
		}
		func_100(0x00000001);
	}
	func_68();
	func_539();
	if (func_548())
	{
		func_533(uParam0);
	}
}

void func_412()
{
	if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		if (unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000) || func_488(iLocal_49, 0x00002000))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
			unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x405E212DDE472467(iLocal_90, 0x00000000))
			{
				unk_0x25BD67336EA4AECE(iLocal_90, 0x00000032);
				unk_0x8B66ED74C2DC2E98(iLocal_90, 5f);
				if (func_488(iLocal_49, 0x00000010))
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
						func_5(&iLocal_49, 0x00000010);
					}
				}
				iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(iLocal_90, iLocal_93) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_93, 0x00000000))
					{
						func_489("***** prostitute IN VEHICLE****** ");
						if (func_488(iLocal_49, 0x00000008))
						{
							if (unk_0x59F02DA2266A744C(func_92()))
							{
								if (func_426(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_425(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_424(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_423(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_422(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_421(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_420(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_419(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_418(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_417(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_416(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_415(iLocal_93))
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else
								{
									unk_0x47862685ADD36309(iLocal_90, unk_0x12AB0310C2281427("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_548())
						{
							unk_0x73270B3C9CC833FD(iLocal_90, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0x73270B3C9CC833FD(iLocal_90, 0x00000001, 0x00000001);
						}
						func_182(iLocal_90, 0x00000000);
						func_392();
						iLocal_62 = unk_0x1C0640BA9A7327B3();
						func_40(&iLocal_101);
						iLocal_286 = 0x00000007;
					}
					else
					{
						func_489("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_414(iLocal_90, unk_0x16F2683693E537C9(), 0x00000001) > 11f || func_413(20f)) || !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_93, 0x00000000))
				{
					func_115(&iLocal_107);
					if (!unk_0x405E212DDE472467(iLocal_90, 0x00000000))
					{
						unk_0xA3BF0AA5A2608191(iLocal_90);
						func_471(0x00000000);
						func_489("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(0x0000000F);
					}
				}
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000))
					{
						iLocal_93 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					}
					else if (!unk_0x3CAA763EEC01ADF7(iLocal_90, iLocal_93, 0x00000000, 0x00000000, 0x00000000))
					{
						if (!func_112())
						{
							if (!func_488(iLocal_73, 0x00000001))
							{
								func_40(&iLocal_113);
								func_480(&iLocal_73, 0x00000001);
							}
							else if (func_7(&iLocal_113) > 20f)
							{
								func_126();
								func_489("prostitute couldn't get into the car");
								iLocal_286 = 0x00000006;
							}
						}
					}
				}
			}
		}
		else if (!func_488(iLocal_73, 0x00000001))
		{
			func_489("PLAYER out of range for entering VEHICLE or wanted level");
			unk_0xA3BF0AA5A2608191(iLocal_90);
			func_96(0x0000000F);
		}
	}
}

bool func_413(float fParam0)
{
	if (!func_10(&iLocal_107))
	{
		func_40(&iLocal_107);
	}
	return func_121(&iLocal_107) > fParam0;
}

float func_414(int iParam0, int iParam1, bool bParam2)
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

int func_415(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0xDA9AFDA8:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_416(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x3ACDA851:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_417(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0xC5168F32:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_418(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x1E6B77B1:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_419(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x48415DE9:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_420(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x21FA1EE8:
			case 0xF47EB4CA:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_421(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x47186FD7:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_422(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0xA3D7E5D4:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_423(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x6D8780E5:
			case 0x7808B340:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_424(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x652B6E19:
			case 0xDA1C0701:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_425(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0xD158A20D:
			case 0xFDB5DC9C:
			case 0x7B7DBC2F:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_426(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		switch (unk_0x1F099C9E2AE4874D(iParam0))
		{
			case 0x205A6F50:
			case 0x04163EC9:
			case 0x793A200A:
			case 0x93775997:
			case 0xA95DAB1C:
			case 0x7EFF5584:
			case 0x5411F27D:
			case 0xED0C8CA8:
			case 0x49F1A7A9:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

void func_427(var uParam0)
{
	int iVar0;
	
	if (!func_436(0x00000000))
	{
		return;
	}
	if (!func_488(iLocal_49, 0x00000010))
	{
		unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000000);
		func_480(&iLocal_49, 0x00000010);
	}
	if (!func_10(&iLocal_107))
	{
		func_470(&iLocal_107);
	}
	if (func_121(&iLocal_107) >= 20f || !unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (func_488(iLocal_73, 0x00080000))
		{
			func_115(&iLocal_107);
			iLocal_286 = 0x00000006;
		}
		else if (func_435())
		{
			func_40(&iLocal_107);
			func_480(&iLocal_73, 0x00080000);
		}
	}
	func_69(iLocal_90);
	if (((unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000) || func_488(iLocal_73, 0x00000001)) && !func_217(0x00000000)) && !func_403())
	{
		if (!unk_0x3CAA763EEC01ADF7(iLocal_90, iLocal_93, 0x00000000, 0x00000000, 0x00000000))
		{
			if (!func_112())
			{
				if (!func_488(iLocal_73, 0x00000001))
				{
					func_40(&iLocal_113);
					func_480(&iLocal_73, 0x00000001);
				}
				else if (func_7(&iLocal_113) > 10f)
				{
					func_68();
					unk_0xA3BF0AA5A2608191(iLocal_90);
					func_489("prostitute couldn't get into the car");
					iLocal_286 = 0x00000006;
				}
			}
		}
		else
		{
			func_428();
		}
	}
	else if (func_468("PROS_ACCEPT"))
	{
		func_5(&iLocal_49, 0x00100000);
		func_466();
		if (func_548())
		{
			iVar0 = unk_0xD1960163A3042274(iLocal_90, 0x87B9A382);
			if (iVar0 != 0x00000001 && iVar0 != 0x00000000)
			{
				func_539();
				func_533(uParam0);
			}
		}
	}
}

void func_428()
{
	char* sVar0;
	
	if (iLocal_286 != 0x00000005 && func_364(&sVar0, 0x00000000))
	{
		func_431();
		if (func_429(iLocal_72, 0x00000001) || unk_0x1BF376CEB706080F(unk_0xD803B885F5E47A62()))
		{
			unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			func_480(&iLocal_49, 0x00002000);
			func_40(&iLocal_107);
		}
		if (func_488(iLocal_49, 0x00002000))
		{
			func_466();
			Global_78C6 = 0x00000001;
			Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_198 = 0x00000001;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x950B6492) != 0x00000001 && !unk_0xC42A92762C58E1B9(iLocal_90, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001))
				{
					unk_0x5B1D360B9C6F0A09(iLocal_90, iLocal_93, 0xFFFFFFFF, 0x00000000, 1f, 0x00800001, 0x00000000);
				}
			}
			sLocal_61 = func_50(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
			unk_0x3F423BF5B8125A50(sLocal_61);
			sLocal_61 = func_50(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
			unk_0x3F423BF5B8125A50(sLocal_61);
			func_40(&iLocal_101);
			iLocal_286 = 0x00000005;
		}
	}
}

int func_429(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_430(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_217(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

int func_430(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_431()
{
	if (Global_78C6)
	{
		if (unk_0x798A3F1296751F46())
		{
			return;
		}
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x00000033);
		if (!func_488(iLocal_49, 0x00002000))
		{
			if (iLocal_72 == 0xFFFFFFFF)
			{
				func_433(&iLocal_72, 0x00000005, "PROS_ACCEPT", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
	else if (func_432(iLocal_72, 0x00000000))
	{
		func_466();
	}
}

bool func_432(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_430(iParam0);
	if (iParam1 == 0x00000000)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_A4A7[iVar0 /*32*/].f_6)
	{
		return 0x00000000;
	}
	bVar1 = 0x00000000;
	if (!Global_A4A7[iVar0 /*32*/].f_C)
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		bVar1 = unk_0xE3789B9938DCEAE8(0x00000000);
	}
	else
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		if (Global_A4A7[iVar0 /*32*/].f_1E)
		{
			unk_0xD06AC7C87A34A6AD(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0x6B012227B3921E18(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		bVar1 = unk_0xE3789B9938DCEAE8(0x00000000);
	}
	return bVar1;
}

void func_433(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*iParam0 == 0xFFFFFFFF)
		{
			func_434(iParam0);
		}
		return;
	}
	if (!*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*iParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_434(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_430(*iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*iParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*iParam0 = 0xFFFFFFFF;
}

int func_435()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC844350D5D58C99A(iLocal_90) || unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return 0x00000001;
	}
	if (!func_548())
	{
		func_68();
		if (unk_0x405E212DDE472467(iLocal_90, 0x00000001))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 0x471C4000, 0x00000000);
		}
		else if (func_488(iLocal_49, 0x00400000))
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000008, 0x0000000B);
			unk_0xDD353D0E9C789D0E(&iVar1);
			unk_0xC6EB89C59F2AF6B8(0x00000000, func_67(iLocal_284), func_66(0x00000005), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, func_67(iLocal_284), func_66(iVar0), 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar1);
			unk_0x78ADC381772E3D54(iLocal_90, iVar1);
			unk_0xF82EA857DA10E0CD(&iVar1);
		}
		return 0x00000001;
	}
	if (unk_0x405E212DDE472467(iLocal_90, 0x00000001))
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0x01E4BB5190DF7317(iLocal_90, 0x471C4000, 0x00000000);
			return 0x00000001;
		}
		else
		{
			unk_0x0C8A454B494DAA0D(iLocal_90);
			return 0x00000000;
		}
	}
	switch (iLocal_55)
	{
		case 0x00000000:
			if (func_488(iLocal_49, 0x00400000))
			{
				func_68();
				iLocal_55 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(0x00000005), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_55 = 0x00000002;
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 0x00000002:
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				if (unk_0xD1960163A3042274(iLocal_90, 0x87B9A382) == 0x00000007)
				{
					iVar0 = unk_0x09AC81E49EA267F7(0x00000008, 0x0000000B);
					unk_0xC6EB89C59F2AF6B8(iLocal_90, func_67(iLocal_284), func_66(iVar0), 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_55 = 0x00000003;
				}
			}
			else
			{
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			break;
		
		case 0x00000003:
			iLocal_55 = 0x00000000;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_436(bool bParam0)
{
	if (unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		return 0x00000000;
	}
	if (func_488(iLocal_49, 0x00002000))
	{
	}
	if (func_414(iLocal_90, unk_0x16F2683693E537C9(), 0x00000001) > 11f)
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (func_548())
	{
		if (unk_0x2720E241B5CCF780(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 0x00000001)
		{
			return 0x00000000;
		}
	}
	if (bParam0)
	{
		if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) > 2f)
		{
			return 0x00000000;
		}
	}
	if (func_90(unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001), 0x41F00000))
	{
		if (!func_488(iLocal_50, 0x00002000) && !unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
		{
			func_351("PROS_COPS", 0xFFFFFFFF);
			func_480(&iLocal_50, 0x00002000);
		}
		return 0x00000000;
	}
	if (!func_378())
	{
		if (!func_548())
		{
			if ((!iLocal_86 && !Global_1B05D) && func_438(unk_0x16F2683693E537C9(), 0x00000000) == 0xFFFFFFFF)
			{
				func_351("PROS_CAR", 0xFFFFFFFF);
				iLocal_86 = 0x00000001;
			}
			func_437();
		}
		else if (!func_521(0x00001000))
		{
			func_351("PROS_CAR", 0xFFFFFFFF);
			func_196(0x00001000);
		}
		return 0x00000000;
	}
	return 0x00000001;
}

void func_437()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (!func_488(iLocal_49, 0x00000001))
	{
		if (!unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()) && !unk_0x7DECE00E09F41C95(iLocal_90))
		{
			unk_0xC8B576D6F470FFC6(unk_0x16F2683693E537C9(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 0x00000001);
			func_480(&iLocal_49, 0x00000001);
		}
	}
}

int func_438(int iParam0, int iParam1)
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

void func_439()
{
	if (func_436(0x00000000))
	{
		func_428();
		if (unk_0xD1960163A3042274(iLocal_90, 0x0E763797) == 0x00000007 && !func_488(iLocal_49, 0x00002000))
		{
			if (func_72(0x00000001))
			{
				func_115(&iLocal_107);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_489("prostitute proposition player VEHICLE");
				iLocal_286 = 0x00000004;
			}
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(iLocal_90);
		func_96(0x0000000F);
	}
}

void func_440(var uParam0)
{
	if (func_436(0x00000000))
	{
		func_428();
		if (unk_0xD1960163A3042274(iLocal_90, 0x0E763797) == 0x00000007 || func_488(iLocal_49, 0x00002000))
		{
			iLocal_286 = 0x00000003;
		}
		else if (func_413(20f))
		{
			func_115(&iLocal_107);
			func_471(0x00000000);
		}
		else
		{
			func_441(uParam0);
		}
	}
	else
	{
		unk_0xA3BF0AA5A2608191(iLocal_90);
		func_96(0x0000000F);
	}
}

void func_441(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (!unk_0xC844350D5D58C99A(iLocal_93))
	{
		return;
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iLocal_93), &vVar2, &vVar1);
	vVar0 = { vVar1 - vVar2 };
	vVar0 = { vVar0 / Vector(2f, 2f, 2f) };
	vVar3 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, -(vVar0.x + 0.2f), 0f, 0f) };
	vVar4 = { unk_0x68E4ADDDDCD7BDDE(iLocal_93, (vVar0.x + 0.2f), 0f, 0f) };
	vVar5 = { unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001) };
	if (SYSTEM::VDIST(vVar5, vVar4) < SYSTEM::VDIST(vVar5, vVar3))
	{
		vVar3 = { vVar4 };
	}
	if ((unk_0xD1960163A3042274(iLocal_90, 0x950B6492) != 0x00000001 || !func_488(iLocal_49, 0x00002000)) && SYSTEM::VDIST2(vLocal_89, vVar3) > 0f)
	{
		if (func_548())
		{
			if (!unk_0xAF6690C489CC6203(iLocal_90))
			{
				unk_0x73270B3C9CC833FD(iLocal_90, 0x00000000, 0x00000001);
			}
			func_451(&uLocal_281, func_67(iLocal_284));
			func_445(uParam0, 0x00000001);
			func_442(&uLocal_281, uParam0);
		}
		unk_0xDD353D0E9C789D0E(&iVar6);
		unk_0x96167B03C5A77156(0x00000000, vVar3.x, vVar3.y, vVar3.z, 1f, 0xFFFFFFFF, 1f, 0x00002000, 0x471C4000);
		unk_0x796BDF31572BB055(0x00000000, unk_0x64430C979F516F7A(unk_0x16F2683693E537C9(), 0x0000796E, 0f, 0f, 0f), 0x00000000);
		unk_0x75ABDC5F81978924(iVar6);
		unk_0x78ADC381772E3D54(iLocal_90, iVar6);
		unk_0xF82EA857DA10E0CD(&iVar6);
		vLocal_89 = { vVar3 };
	}
}

void func_442(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			func_443(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_443(var uParam0, char* sParam1)
{
	func_444(uParam0, 0x00000001, 0xFFFFFFFF, sParam1, 0x00000000);
}

void func_444(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 0x00000004)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 0x00000009)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_10F)
	{
		uParam0->f_10F = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

void func_445(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_447(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_446(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_10F = 0x00000000;
	uParam0->f_110 = 0xFFFFFFFF;
	uParam0->f_111 = 0x00000001;
}

void func_446(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_447(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			func_448(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_10F = 0x00000001;
}

void func_448(var uParam0)
{
	func_449(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_449(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_450(iParam0))
		{
			case 0x00000000:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 0x00000001:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 0x00000002:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 0x00000003:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 0x00000004:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 0x00000006:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 0x00000007:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 0x00000008:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001A));
				break;
			
			case 0x00000009:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

int func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_451(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			if (unk_0x7F8A39872A07D2CE((*uParam0)[iVar0], sParam1))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	iVar1 = func_452(uParam0);
	if (iVar1 < 0x00000000 || iVar1 >= *uParam0)
	{
		return 0x00000000;
	}
	(*uParam0)[iVar1] = sParam1;
	return 0x00000001;
}

int func_452(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (unk_0x2EBF5002C6B6A06C((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_453(var uParam0)
{
	char* sVar0;
	
	if (func_436(0x00000001))
	{
		if (!func_10(&iLocal_107))
		{
			func_470(&iLocal_107);
		}
		func_480(&iLocal_49, 0x00000004);
		Global_78C7 = 0x00000001;
		func_428();
		if (func_469(&iLocal_107, 2f) || func_488(iLocal_49, 0x00002000))
		{
			func_480(&iLocal_49, 0x00000002);
			if (func_364(&sVar0, 0x00000000))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_90, 0xFFFFFFFF, 0x00000800, 0x00000004);
				func_441(uParam0);
				func_480(&iLocal_49, 0x00000004);
				Global_78C6 = 0x00000001;
				Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_198 = 0x00000001;
				iLocal_286 = 0x00000002;
			}
			else
			{
				if (unk_0x7F8A39872A07D2CE(func_465(&sVar0), "PIM_HHIDCR"))
				{
					func_464(&sVar0, 0x00007530);
					func_462(0x00000001);
				}
				else
				{
					func_351(&sVar0, 0xFFFFFFFF);
				}
				if (!unk_0xEA6BC48857E0AC4C(&sVar0) && unk_0x7F8A39872A07D2CE(&sVar0, "PROS_NO_MONEY"))
				{
					func_454();
				}
				func_96(0x00000000);
				iLocal_287 = 0x00000000;
				func_480(&iLocal_49, 0x00800000);
				func_5(&iLocal_49, 0x00000004);
				Global_78C6 = 0x00000000;
				Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_198 = 0x00000000;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 0x00000004);
		Global_78C7 = 0x00000000;
	}
}

void func_454()
{
	if (!func_521(0x00000040))
	{
		func_455(0x00000000, 0x0000001F, 0x00000005);
		func_196(0x00000040);
	}
}

void func_455(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x4C2428CBA698034D())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() && func_459(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000))
	{
		return;
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C7) || unk_0x7FEE810EE9E768EB(0x00000002, 0x000000C7))
	{
		return;
	}
	if (unk_0x8BB17FEBE0394018() != 0x00000000)
	{
		return;
	}
	if (unk_0x798A3F1296751F46())
	{
		return;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return;
	}
	if (func_458())
	{
		return;
	}
	if (!func_456())
	{
		return;
	}
	if (unk_0x8CD06866876216F2() || iParam0)
	{
		if (!Global_181EC.f_589 && !unk_0x590766B2AF637235())
		{
			iVar0 = 0x00000012;
			UI::_SET_WARNING_MESSAGE_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			Global_259026 = iParam1;
			Global_181EC.f_589 = 0x00000001;
			Global_181EC.f_58A = iParam2;
		}
	}
}

int func_456()
{
	if (func_457())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_457()
{
	return Global_258DFD;
}

bool func_458()
{
	return Global_25908F;
}

int func_459(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_460(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_460(int iParam0)
{
	return func_461(iParam0);
}

bool func_461(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

void func_462(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
	if (iParam0 && !func_463())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

bool func_463()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

void func_464(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

char* func_465(char* sParam0)
{
	return sParam0;
}

void func_466()
{
	if (iLocal_72 != 0xFFFFFFFF)
	{
		func_434(&iLocal_72);
	}
}

void func_467(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

bool func_468(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_469(int iParam0, float fParam1)
{
	if (func_225(iParam0, fParam1))
	{
		func_115(iParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_470(int iParam0)
{
	if (!func_10(iParam0))
	{
		func_40(iParam0);
	}
}

void func_471(int iParam0)
{
	bool bVar0;
	
	func_126();
	if (iParam0 || iLocal_70 == 0x00000000)
	{
		bVar0 = 0x00000001;
		if (func_548())
		{
			bVar0 = 0x00000000;
		}
		func_106(bVar0);
		func_96(0x0000000E);
	}
	else
	{
		func_106(0x00000000);
		func_96(0x0000000F);
	}
}

int func_472()
{
	if ((((((func_479() || func_478()) || func_477()) || func_476()) || func_473()) || Global_248A6D) || Global_248A6D.f_1 != 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_473()
{
	if (func_475() || func_474())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 0x00000008;
	}
	return 0x00000000;
}

var func_474()
{
	return Global_2564C8.f_27B;
}

bool func_475()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_476()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000005);
}

bool func_477()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

bool func_478()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

var func_479()
{
	return Global_2564C8.f_256;
}

void func_480(int iParam0, int iParam1)
{
	func_481(iParam0, iParam1);
}

void func_481(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_482()
{
	if (Global_78C8)
	{
		return 0x00000000;
	}
	if (func_548())
	{
		return 0x00000000;
	}
	if (!func_485())
	{
		return 0x00000000;
	}
	if (func_483())
	{
		iLocal_287 = 0x00000004;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_483()
{
	int iVar0;
	
	iLocal_92 = unk_0x6E7D01E16ABEFABB(unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001), 15f, 0x00000000, 0x00000006);
	if (unk_0xC844350D5D58C99A(iLocal_92) && !unk_0x437347B10A200C4B(iLocal_92, 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_92, 0x00000000))
		{
			if (func_91(&iLocal_92))
			{
				iLocal_91 = unk_0xA30B8362589C124A(iLocal_92, 0xFFFFFFFF, 0x00000000);
				if (!iLocal_91 == 0x00000000)
				{
					if (func_484(&iLocal_91))
					{
						iVar0 = unk_0x134B62B726CEC8E6(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!unk_0xAF6690C489CC6203(iLocal_91))
							{
								unk_0x73270B3C9CC833FD(iLocal_91, 0x00000001, 0x00000000);
							}
							if (!unk_0xAF6690C489CC6203(iLocal_92))
							{
								unk_0x73270B3C9CC833FD(iLocal_92, 0x00000001, 0x00000000);
							}
							unk_0x11AD11297DC58CC7(iLocal_91, 0x00000001);
							unk_0xE8832A9E16A57A1F(iLocal_91, 0x00000000, 0x00000001);
							unk_0xE8832A9E16A57A1F(iLocal_92, 0x00000000, 0x00000001);
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0x00000000;
	iLocal_91 = 0x00000000;
	return 0x00000000;
}

int func_484(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(*iParam0))
	{
		if (unk_0xCED082ADD3739B9F(*iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_485()
{
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_486()
{
	if ((!func_485() || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) || func_488(iLocal_49, 0x00001000))
	{
		return 0x00000000;
	}
	if (func_488(iLocal_49, 0x00000020))
	{
		iLocal_287 = 0x00000002;
		func_100(0x00000002);
		func_489("IS_CUSTOMER_A_PLAYER is TRUE");
		return 0x00000001;
	}
	return 0x00000000;
}

void func_487()
{
	if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		if (!unk_0xE9FDA1035CFEA94F(iLocal_90))
		{
			if (unk_0xD1960163A3042274(iLocal_90, 0x6BA30179) != 0x00000001)
			{
				unk_0x11AD11297DC58CC7(iLocal_90, 0x00000000);
				unk_0xBAFED2F6486F771A(iLocal_90, 0x00030014, 0x00000001);
				unk_0x2ECF845953E95D1B(iLocal_90);
				unk_0xF3268524E9BE6D6E(iLocal_90, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000001, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_90, 0x00000001);
				func_96(0x0000000F);
			}
		}
	}
}

bool func_488(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0x00000000;
}

void func_489(char* sParam0)
{
}

int func_490()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return 0x00000000;
	}
	if (unk_0xD1960163A3042274(iLocal_90, 0x55966344) == 0x00000001)
	{
		return 0x00000000;
	}
	if (unk_0xACCBB8E1BDF4D6BE(iLocal_90))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_491()
{
	switch (iLocal_291)
	{
		case 0x00000000:
			if (!func_548())
			{
				func_451(&uLocal_281, func_67(iLocal_284));
				func_442(&uLocal_281, &uLocal_337);
				func_489("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_548())
			{
				unk_0x0BEC04ECA8485A3A(0x00000001);
				unk_0x28E5F00F131890E3(0x00000001);
				unk_0x0C8A454B494DAA0D(iLocal_90);
			}
			iLocal_291 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!func_548())
			{
				if (func_492(&uLocal_337))
				{
					func_480(&iLocal_49, 0x00400000);
					func_489("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 0x00000002;
				}
			}
			else if (func_548())
			{
				func_480(&iLocal_49, 0x00400000);
				func_489("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			iLocal_288 = 0x00000000;
			iLocal_67 = iLocal_288;
			func_5(&iLocal_49, 0x00000200);
			func_5(&iLocal_49, 0x00000400);
			iLocal_287 = 0x00000000;
			iLocal_91 = 0x00000000;
			iLocal_92 = 0x00000000;
			func_489("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 0x00000003;
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
			{
				if (!func_548())
				{
					unk_0x11AD11297DC58CC7(iLocal_90, 0x00000000);
					unk_0xC978532B427F303B(iLocal_90, 0x00000000);
					func_467(&uLocal_116, 0x00000004, iLocal_90, "Prostitutes", 0x00000000, 0x00000001);
					return 0x00000001;
				}
				else if (!unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0x0C8A454B494DAA0D(iLocal_90);
				}
				else
				{
					unk_0x11AD11297DC58CC7(iLocal_90, 0x00000000);
					func_467(&uLocal_116, 0x00000004, iLocal_90, "Prostitutes", 0x00000000, 0x00000001);
					unk_0xC978532B427F303B(iLocal_90, 0x00000000);
					unk_0xD35BB27936A678E2(iLocal_90);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_492(var uParam0)
{
	return func_493(uParam0);
}

int func_493(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_10F)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_494(uParam0[iVar0 /*18*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_10F = 0x00000000;
	return 0x00000001;
}

bool func_494(var uParam0)
{
	return func_495(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_495(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_450(iParam0))
			{
				case 0x00000000:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 0x00000001:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 0x00000002:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 0x00000003:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 0x00000004:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 0x00000005:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 0x00000006:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001B), 0xFFFFFFFF);
					break;
				
				case 0x00000007:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 0x00000008:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 0x00000009:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_496()
{
	if (unk_0x991B1F0980C62628())
	{
		if (func_23() == 0x00000000)
		{
			if (func_497(iLocal_90, 537.0014f, 119.0252f, 96.0997f, 0x00000001) <= 8f)
			{
				if (!unk_0x9C77D2D0559097F0(iLocal_90, 0x00000001))
				{
					if (func_548())
					{
						unk_0x73270B3C9CC833FD(iLocal_90, 0x00000000, 0x00000000);
					}
					else
					{
						unk_0x73270B3C9CC833FD(iLocal_90, 0x00000001, 0x00000001);
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

float func_497(int iParam0, vector3 vParam1, bool bParam2)
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

int func_498()
{
	if (unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(0x00000000)))
	{
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0x00000000;
		}
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 0x00000001;
		}
	}
	if (unk_0xD3658E8B80B4DE3E(iLocal_90, func_65(0x00000001)))
	{
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 0x00000003;
		}
		if (unk_0xE2A1BCC94B2F72B7(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 0x00000002;
		}
	}
	return 0xFFFFFFFF;
}

void func_499()
{
	if (unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		return;
	}
	if (iLocal_285 != 0x00000003 && iLocal_285 != 0x00000004)
	{
		func_500(unk_0x16F2683693E537C9());
	}
	else if (iLocal_285 == 0x00000003)
	{
		func_500(iLocal_91);
	}
}

void func_500(int iParam0)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return;
	}
	if (func_548())
	{
		if (!unk_0xAFE0D3608EDA7039(iParam0))
		{
			unk_0x0C8A454B494DAA0D(iParam0);
			return;
		}
	}
	if (func_414(iParam0, iLocal_90, 0x00000001) < 30f)
	{
		if (!unk_0xC7E2E6167C09468B(iLocal_90, iParam0))
		{
			if (func_548())
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xBC43ED9FE28DB191(iLocal_90);
					unk_0x0C8C0C840C2D1AD2(iLocal_90, iParam0, 0xFFFFFFFF, 0x00000800, 0x00000004);
				}
			}
			else
			{
				unk_0xBC43ED9FE28DB191(iLocal_90);
				unk_0x0C8C0C840C2D1AD2(iLocal_90, iParam0, 0xFFFFFFFF, 0x00000800, 0x00000004);
			}
		}
	}
	else if (unk_0xC7E2E6167C09468B(iLocal_90, iParam0))
	{
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				unk_0xBC43ED9FE28DB191(iLocal_90);
			}
		}
		else
		{
			unk_0xBC43ED9FE28DB191(iLocal_90);
		}
	}
}

void func_501()
{
	if (Global_78C6)
	{
		if (unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_90, iLocal_93, 0x00000000))
			{
				func_502();
			}
		}
		return;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iLocal_90, 0x00000000) || !unk_0xC844350D5D58C99A(iLocal_90))
	{
		if (Global_78CA != unk_0x0D0A574C76D769AC() && func_488(iLocal_49, 0x00000020))
		{
			func_5(&iLocal_49, 0x00000020);
		}
		return;
	}
	if ((SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < Global_78C9 || Global_78C9 == 0f) && iLocal_287 != 0x00000004)
	{
		Global_78C9 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
		Global_78CA = unk_0x0D0A574C76D769AC();
		func_480(&iLocal_49, 0x00000020);
	}
	else if (Global_78CA == unk_0x0D0A574C76D769AC())
	{
		Global_78C9 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
	}
	else
	{
		func_5(&iLocal_49, 0x00000020);
	}
}

void func_502()
{
	if (func_548())
	{
		if (unk_0xAFE0D3608EDA7039(iLocal_90))
		{
			unk_0x9DD8618CA5BF832D(iLocal_90, 0x00000143, 0x00000001);
		}
	}
	else
	{
		unk_0x9DD8618CA5BF832D(iLocal_90, 0x00000143, 0x00000001);
	}
}

void func_503(var uParam0)
{
	if (!iLocal_286 == 0x0000000C)
	{
		if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (func_507())
			{
				if (func_548())
				{
					func_123(0x00000000);
					unk_0xBAFED2F6486F771A(iLocal_90, 0x00030010, 0x00000001);
					if (!unk_0xAF6690C489CC6203(iLocal_90))
					{
						unk_0x73270B3C9CC833FD(iLocal_90, 0x00000001, 0x00000000);
					}
					unk_0xF3268524E9BE6D6E(iLocal_90, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_90, 0x00000001);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_539();
					func_533(uParam0);
				}
				else
				{
					func_96(0x0000000C);
				}
			}
			else if (unk_0xB87D13D0C064E9D1(iLocal_90, unk_0x16F2683693E537C9(), 0x00000001))
			{
				iLocal_65++;
				if (iLocal_65 >= 0x00000002)
				{
					func_489("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 0x0000000C;
				}
				else
				{
					func_489("prostitute BEEN HIT BY PLAYER");
					unk_0xE910A68AA670B4AA(iLocal_90);
				}
			}
			else if (func_505())
			{
				func_504();
				iLocal_286 = 0x0000000C;
			}
		}
	}
}

void func_504()
{
	if (unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		return;
	}
	unk_0x0FB22E2FED7BCC7E(iLocal_90);
	unk_0xC8B576D6F470FFC6(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 0x00000001);
}

int func_505()
{
	int iVar0;
	
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (!func_506())
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9()))
	{
		return unk_0xB9F5AD0599FD42F7(iVar0);
	}
	return 0x00000000;
}

int func_506()
{
	if (!func_548())
	{
		return 0x00000001;
	}
	else if (unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
	{
		if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
		{
			if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
			{
				if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					if (!unk_0xAF6690C489CC6203(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						unk_0x73270B3C9CC833FD(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000000);
					}
					return 0x00000001;
				}
				else
				{
					unk_0x0C8A454B494DAA0D(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
				}
			}
		}
		else
		{
			unk_0x8B1D3F9E1517FA09(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000));
		}
	}
	return 0x00000000;
}

int func_507()
{
	vector3 vVar0;
	
	if (!func_488(iLocal_49, 0x00001000))
	{
		if (func_414(iLocal_90, unk_0x16F2683693E537C9(), 0x00000001) < 30f)
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_90, 0x00000001) };
			if ((((((unk_0x72DA46B7797D51EA(0x00000058, vVar0, 30f) || unk_0x72DA46B7797D51EA(0x0000005B, vVar0, 30f)) || unk_0x72DA46B7797D51EA(0x0000005A, vVar0, 30f)) || unk_0x72DA46B7797D51EA(0x00000068, vVar0, 30f)) || unk_0x72DA46B7797D51EA(0x00000074, vVar0, 30f)) || (unk_0x72DA46B7797D51EA(0x00000072, vVar0, 30f) && !func_548())) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				if (!func_548())
				{
					unk_0x11AD11297DC58CC7(iLocal_90, 0x00000000);
				}
				func_480(&iLocal_49, 0x00001000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_508()
{
	if ((unk_0xC844350D5D58C99A(iLocal_90) && !unk_0x437347B10A200C4B(iLocal_90, 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (func_548())
		{
			if (func_550(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				func_489("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (unk_0x405E212DDE472467(iLocal_90, 0x00000000))
				{
					func_106(0x00000000);
				}
				func_96(0x0000000F);
				return 0x00000000;
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
		{
			if (!unk_0x405E212DDE472467(iLocal_90, 0x00000000))
			{
				if (!func_510(0x00000009))
				{
					if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_90, unk_0x16F2683693E537C9(), 100f, 100f, 50f, 0x00000000, 0x00000001, 0x00000000))
						{
							return 0x00000001;
						}
						else
						{
							func_489("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(0x0000000F);
						}
					}
				}
				else if (!(func_509() || unk_0x991B1F0980C62628()))
				{
					func_489("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(0x0000000F);
				}
				else
				{
					return 0x00000001;
				}
			}
			else if (iLocal_286 == 0x00000000)
			{
				func_489("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_510(0x00000009) && !func_510(0x00000005))
			{
				return 0x00000001;
			}
			else if (!(func_509() || (unk_0x991B1F0980C62628() && !func_404())))
			{
				func_489("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0x00000000);
				func_96(0x0000000F);
			}
			else
			{
				return 0x00000001;
			}
		}
		else
		{
			func_489("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_90))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_489("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0x00000000;
}

int func_509()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_510(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_511(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_511(int iParam0)
{
	return func_512(iParam0, Global_A1D7);
}

int func_512(int iParam0, int iParam1)
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

void func_513()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &Var2, 0x00000002);
			if (Var2 == 0x9299659D)
			{
				if (Var2.f_1 == unk_0xD803B885F5E47A62())
				{
					func_196(0x00000080);
				}
			}
		}
		iVar0++;
	}
}

void func_514()
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (!unk_0x2E9F2B9C010D34D9())
	{
		return;
	}
	if (unk_0x9BFC2168CB5FCF68(0x00000000, 0x00000000) != 0x00000001)
	{
		if (func_515(0x00000001, 0x00000000, 0x00000001))
		{
			if (unk_0xA108079788452A90(0x00000000) <= 0x00000001)
			{
				unk_0x0BEC04ECA8485A3A(0x00000001);
			}
		}
	}
}

bool func_515(int iParam0, bool bParam1, bool bParam2)
{
	return func_516(0x00000000, iParam0, 0x00000001, bParam1, bParam2);
}

int func_516(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0x00000000))
	{
		return 0x00000000;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_520(iParam0) - func_519(iParam0, 0x00000000)))
	{
		return 0x00000001;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_519(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_520(iParam0) - func_518(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_519(iParam0, 0x00000000));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_520(iParam0) - func_519(iParam0, 0x00000001));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0x00000003)
		{
			iVar1 = (iVar1 - func_517(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x0000000A;
			break;
		
		case 0x00000002:
			return 0x0000000A;
			break;
	}
	return 0x00000000;
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F0.f_1;
			break;
		
		case 0x00000001:
			return Global_1532F0.f_2;
			break;
		
		case 0x00000002:
			return Global_1532F0.f_3;
			break;
	}
	return 0x00000000;
}

int func_519(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0x00000000:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D1;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000001:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D2;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D3;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0x00000000);
			}
			break;
	}
	return 0x00000000;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_1532F8;
			break;
		
		case 0x00000001:
			return Global_1532F9;
			break;
		
		case 0x00000002:
			return Global_1532FA;
			break;
	}
	return 0x00000000;
}

bool func_521(int iParam0)
{
	return func_488(iLocal_52, iParam0);
}

void func_522(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_10F)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_110 + uParam0->f_111) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000F)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
					{
						func_523(uParam0[iVar0 /*18*/]);
						uParam0->f_110 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_523(int iParam0)
{
	func_524(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_524(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_450(*iParam0))
		{
			case 0x00000000:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 0x00000002:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 0x00000003:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C));
				break;
			
			case 0x00000004:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 0x00000006:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B), 0xFFFFFFFF);
				break;
			
			case 0x00000007:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 0x00000008:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 0x00000009:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
	}
}

void func_525(int iParam0)
{
	if (func_488(iLocal_52, iParam0))
	{
		func_5(&iLocal_52, iParam0);
	}
}

void func_526()
{
	func_2(0x00000000);
	if (unk_0xC844350D5D58C99A(iLocal_90))
	{
		if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
		{
			func_2(0x00000001);
		}
		else
		{
			func_489("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_489("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_2(0x00000000);
		func_489("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_527(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_530())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_529())
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_528(0x0000009D))
				{
					if (!bParam2)
					{
						func_531();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_531();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_531();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_531();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_528(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_529()
{
	return Global_2564C8.f_251;
}

bool func_530()
{
	return Global_140856;
}

void func_531()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_532()
{
	func_196(0x00000001);
}

void func_533(var uParam0)
{
	func_537();
	if (func_48(0x00000000, 0x00000001))
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		if (unk_0xAF6690C489CC6203(iLocal_90))
		{
			if ((func_548() && unk_0xD1960163A3042274(iLocal_90, 0x6BA30179) != 0x00000001) && unk_0xD1960163A3042274(iLocal_90, 0xF10822AA) != 0x00000001)
			{
				unk_0x01E4BB5190DF7317(iLocal_90, 0x471C4000, 0x00000000);
				if (unk_0xAFE0D3608EDA7039(iLocal_90))
				{
					unk_0xFADC0A217229F6B5(iLocal_90, 0x00000001);
				}
				if (unk_0xFEC78493E359E4B0(iLocal_90))
				{
					unk_0x6DAD7906B73F064D(&iLocal_90);
				}
				unk_0x0FB22E2FED7BCC7E(iLocal_90);
			}
			else
			{
				if (unk_0xFEC78493E359E4B0(iLocal_90))
				{
					unk_0x6DAD7906B73F064D(&iLocal_90);
				}
				unk_0x0FB22E2FED7BCC7E(iLocal_90);
			}
		}
	}
	iLocal_49 = 0x00000000;
	if (func_488(iLocal_49, 0x00000040))
	{
		Global_78C8 = 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_91))
	{
		unk_0xA3BF0AA5A2608191(iLocal_91);
	}
	iLocal_91 = 0x00000000;
	iLocal_287 = 0x00000000;
	if (func_488(iLocal_49, 0x00000800))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	func_5(&iLocal_49, 0x00000800);
	if (!func_536())
	{
		func_535();
	}
	if (func_548())
	{
		if (unk_0x49083FDB78AC0509(iLocal_83))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_83);
		}
	}
	iLocal_92 = 0x00000000;
	func_537();
	func_534();
	Global_78C9 = 0f;
	if (!Global_19AA29.f_11C7 && !Global_19AA29.f_11CB)
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (func_521(0x00000100))
		{
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000006, iLocal_84, iLocal_85, 0x00000000);
			func_196(0x00000400);
		}
	}
	if (func_468("PROS_ACCEPT") && !Global_78C6)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (Global_78CA == unk_0x0D0A574C76D769AC())
	{
		Global_78C6 = 0x00000000;
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_198 = 0x00000000;
	}
	func_445(uParam0, 0x00000000);
	if (func_548())
	{
		func_196(0x00000800);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_534()
{
}

void func_535()
{
	Global_2537E2.f_484.f_A = 0x00000000;
}

bool func_536()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C0A0, 0x00000003);
}

void func_537()
{
}

void func_538(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_90))
	{
		if (unk_0x405E212DDE472467(iLocal_90, 0x00000000))
		{
			if (unk_0xD1960163A3042274(iLocal_90, 0xCE98FBB3) != 0x00000001)
			{
				unk_0x75CDA8644CD3B5F5(iLocal_90, 0x00000000, 0x00010000);
			}
		}
		if (bParam0)
		{
			if (func_548())
			{
				if (unk_0xAF6690C489CC6203(iLocal_90))
				{
					if (unk_0xFEC78493E359E4B0(iLocal_90))
					{
						if (unk_0x83F012E6200426DB(unk_0x7D3E8C4CDBD80BDF(iLocal_90)))
						{
							unk_0xFADC0A217229F6B5(iLocal_90, 0x00000001);
						}
					}
				}
			}
			else
			{
				unk_0xFADC0A217229F6B5(iLocal_90, 0x00000001);
			}
		}
	}
}

void func_539()
{
	if (!func_548())
	{
		if (iLocal_286 == 0x0000000B || iLocal_286 == 0x0000000D)
		{
			return;
		}
	}
	if (!unk_0x437347B10A200C4B(iLocal_90, 0x00000000))
	{
		if (!unk_0xE9FDA1035CFEA94F(iLocal_90))
		{
			func_96(0x00000000);
			iLocal_285 = 0x00000001;
		}
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_90))
			{
				unk_0x11AD11297DC58CC7(iLocal_90, 0x00000000);
				unk_0x9FD50E5122D8E89D(iLocal_90);
			}
		}
		else
		{
			unk_0x9FD50E5122D8E89D(iLocal_90);
		}
		unk_0x06FF977AA95DCCE3(iLocal_90, 0x00000000);
	}
	if (unk_0xDF1306B443CD3D15(iLocal_93, 0x00000000) && !unk_0x437347B10A200C4B(iLocal_93, 0x00000000))
	{
		if (func_548())
		{
			if (unk_0xAFE0D3608EDA7039(iLocal_93))
			{
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C <= 0x00000000 && !unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x0000000B))
				{
					unk_0xE32750CAC756824F(iLocal_93, 0x00000000);
					unk_0x0882E3DC0C991680(iLocal_93, 0x00000003);
					unk_0x3CE99D79C10EEA67(iLocal_93, 0x00000000);
				}
				unk_0x9A8BCD43DBDDCDCA(iLocal_93, 0x00000001, 0x00000000);
			}
		}
		else
		{
			unk_0xE32750CAC756824F(iLocal_93, 0x00000000);
			unk_0x0882E3DC0C991680(iLocal_93, 0x00000003);
			unk_0x3CE99D79C10EEA67(iLocal_93, 0x00000000);
		}
	}
	func_547(iLocal_74);
	func_547(iLocal_75);
	func_547(iLocal_76);
	func_547(iLocal_77);
	func_547(iLocal_78);
	func_547(iLocal_79);
	func_547(iLocal_80);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
		if ((func_548() && iLocal_288 != 0x00000003) && func_488(iLocal_49, 0x00000800))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000001);
	}
	if (func_488(iLocal_49, 0x00000800))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	func_5(&iLocal_49, 0x00000800);
	unk_0xEAB026E686C0D991(0x00000002, 0x00000013, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000002, 0x00000025, 0x00000001);
	if (!func_536())
	{
		func_535();
	}
	iLocal_287 = 0x00000000;
	if (func_488(iLocal_49, 0x00000004))
	{
		func_5(&iLocal_49, 0x00000004);
		Global_78C6 = 0x00000000;
		Global_78C7 = 0x00000000;
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_198 = 0x00000000;
	}
	if (func_488(iLocal_49, 0x00000008))
	{
		if (unk_0x59F02DA2266A744C(func_92()))
		{
			unk_0x413168EF79E35C7B(func_92());
		}
	}
	func_546();
	func_466();
	if (((func_468("PROS_ACCEPT") || func_468("PROS_CAM_TOG")) || func_468("PROS_RESPONSE")) || func_468("PROS_CAM_OC"))
	{
		func_5(&iLocal_49, 0x00100000);
		unk_0xA37A90C62806D848(0x00000001);
	}
	func_363(0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	if (func_488(iLocal_49, 0x00000008))
	{
		if (unk_0x59F02DA2266A744C(func_92()))
		{
			unk_0x413168EF79E35C7B(func_92());
		}
	}
	func_131("PROSTITUTES_SOLICIT_SCENE");
	unk_0x8C26F31DFF77D124();
	func_123(0x00000000);
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	func_540();
	if (func_548())
	{
		if (func_521(0x00000002))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xECE0BE5313FD8BDA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					if (unk_0xAFE0D3608EDA7039(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						unk_0xC4B4C89FC0D48108(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
						unk_0x71EDC33E5A423750(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
					}
				}
			}
			else if (unk_0xECE0BE5313FD8BDA(iLocal_93))
			{
				if (unk_0xAFE0D3608EDA7039(iLocal_93))
				{
					unk_0x71EDC33E5A423750(iLocal_93, 0x00000001);
					unk_0xC4B4C89FC0D48108(iLocal_93, 0x00000000);
					unk_0x443C9A6DC182DDD5(iLocal_93, 0x00000000);
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iLocal_93);
					unk_0x71EDC33E5A423750(iLocal_93, 0x00000001);
					unk_0xC4B4C89FC0D48108(iLocal_93, 0x00000000);
					unk_0x443C9A6DC182DDD5(iLocal_93, 0x00000000);
				}
			}
		}
	}
	func_188(0x00000017, 0x00000000);
	iLocal_49 = 0x00000000;
	iLocal_51 = 0x00000000;
}

void func_540()
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	
	if (!func_545())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0x00000000 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[0x00000001 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0x00000000 /*6*/]), "SP", 24);
	StringCopy(&(Var1[0x00000001 /*6*/]), "????", 24);
	if (func_544(0x00000113, &Var1, &Var0, 0x00000002, 0xFFFFFFFF, 0x00000000, 0x00000000))
	{
		unk_0x6106B2DBBCB1AA39(0x00000083, func_543(), 0f);
		unk_0x6106B2DBBCB1AA39(0x00000075, func_542(), 0f);
		unk_0x6106B2DBBCB1AA39(0x00000076, func_541(), 0f);
	}
}

int func_541()
{
	return iLocal_46;
}

int func_542()
{
	return iLocal_45;
}

int func_543()
{
	return 0x00000000;
}

int func_544(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 0x00000004;
		Var0 = iParam0;
		if (iParam4 == 0xFFFFFFFF)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_320(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 0x00000023, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0x00000000;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 0x00000008);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_258538.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_195CCB.f_A));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 0x00000001;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0x00000000;
}

int func_545()
{
	if ((unk_0x58424C49F8924842() && unk_0x61D9362D70D2DD56()) && unk_0xE6725CC0C55B6CA1())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_546()
{
	if (func_488(iLocal_49, 0x00000080))
	{
		func_406(0x00000027, 0x00000000);
		func_406(0x00000028, 0x00000000);
		func_406(0x00000029, 0x00000000);
		func_406(0x0000002A, 0x00000000);
		func_406(0x0000002B, 0x00000000);
		func_406(0x0000002C, 0x00000000);
		func_5(&iLocal_49, 0x00000080);
	}
}

void func_547(int iParam0)
{
	if (func_548())
	{
		if (func_219(iParam0))
		{
			unk_0x45934E8E3471AAA9(iParam0);
		}
	}
}

bool func_548()
{
	return func_521(0x00000001);
}

bool func_549(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_208(iParam0, 0x00000001, 0x00000001))
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0x405E212DDE472467(iVar0, iParam1))
		{
			iVar3 = unk_0x6937EA2286828455(iVar0, 0x00000000);
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000020)
			{
				iVar2 = unk_0x117658E336116132(iVar1);
				if (func_208(iVar2, 0x00000001, 0x00000001))
				{
					if (unk_0x9539D44F3E4492F6(iVar2) != iVar0)
					{
						if (unk_0xC42A92762C58E1B9(unk_0x9539D44F3E4492F6(iVar2), iVar3, iParam1))
						{
							return 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0x00000000;
}

int func_551(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_460(iParam0))
		{
			return 0x00000001;
		}
	}
	if ((((Global_184507[iParam0 /*876*/] == 0x00000002 || Global_184507[iParam0 /*876*/] == 0x00000001) || Global_184507[iParam0 /*876*/] == 0x00000000) || Global_184507[iParam0 /*876*/] == 0x00000003) || Global_184507[iParam0 /*876*/] == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

