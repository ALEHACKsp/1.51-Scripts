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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<123> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 16;
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
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 16;
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
	struct<6> Local_414 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_415 = 0;
	var uLocal_416 = 16;
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
	struct<5> Local_581[2];
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	bool bLocal_588 = 0;
	bool bLocal_589 = 0;
	bool bLocal_590 = 0;
	bool bLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	struct<21> Local_596 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_60 = 0x00000014;
	iLocal_61 = 0x00000021;
	bLocal_588 = 0x00000001;
	bLocal_589 = 0x00000001;
	bLocal_590 = 0x00000001;
	bLocal_591 = 0x00000001;
	if (unk_0x8CD06866876216F2())
	{
		func_777(ScriptParam_596);
	}
	while (0x00000001)
	{
		func_776();
		if (func_768())
		{
			func_416(0x00000001);
		}
		if (func_413(0x00000000))
		{
			Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000003;
		}
		if (func_412(unk_0x57270EE11514DC67()) > 0xFFFFFFFF)
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		}
		switch (func_411(unk_0x57270EE11514DC67()))
		{
			case 0x00000000:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000A))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000000A);
					}
				}
				unk_0xD7992BEF7A9D109E("FMINT", 0x00000000);
				if (func_410() && unk_0x01C309A4BDFCAD82("FMINT", 0x00000000))
				{
					if (func_409() > 0x00000000)
					{
						func_408(&uLocal_249, 0x00000001, 0x00000000, "Lamar", 0x00000000, 0x00000001);
						func_407(0x00000000);
						func_406(0x00000004, 0x00000001);
						func_406(0x00000001, 0x00000001);
						func_406(0x00000000, 0x00000001);
						func_406(0x00000002, 0x00000001);
						func_406(0x00000003, 0x00000000);
						func_404(iLocal_61, 0x00000001);
						Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000002;
						if (bLocal_590)
						{
							Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0xFFFFFFFE;
						}
						else
						{
							Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0xFFFFFFFF;
						}
					}
				}
				if (func_409() == 0x00000004)
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000004;
				}
				if (func_409() == 0x00000006 && Local_581[unk_0x57270EE11514DC67() /*5*/] < 0x00000004)
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000006;
				}
				break;
			
			case 0x00000002:
				func_382();
				func_23();
				if (func_409() == 0x00000004)
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000004;
				}
				if (func_409() == 0x00000006 && Local_581[unk_0x57270EE11514DC67() /*5*/] < 0x00000004)
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000005;
				}
				break;
			
			case 0x00000004:
				Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000005;
				break;
			
			case 0x00000005:
				func_21(&(Local_414.f_5));
				if (func_20(&(Local_414.f_5)))
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000003;
				}
				break;
			
			case 0x00000003:
				func_12(iLocal_60);
				Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000006;
			
			case 0x00000006:
				func_416(0x00000000);
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_409())
			{
				case 0x00000000:
					Local_414 = 0x00000002;
					break;
				
				case 0x00000002:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_414 = 0x00000006;
					}
					break;
				
				case 0x00000006:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_588)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000001))
		{
			return 0x00000001;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (unk_0xBFF81ED3B99522C7())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000003))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000003);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000004))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
			{
				unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000004);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000005))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000003))
			{
				unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000005);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000006))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000004))
			{
				unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000006);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000007))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000005))
			{
				unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000007);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000008))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000006))
			{
				unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000008);
			}
		}
		switch (Local_414.f_2)
		{
			case 0x00000000:
				if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000003))
				{
					if (func_4(&(Local_414.f_3), &(Local_414.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_416))
					{
						unk_0x56FDC9ADE35F7DB0(unk_0xB177666FAB6F4417(Local_414.f_3), 0x00000001, 0x00000000, 0x00000000);
						Local_414.f_2 = 0x00000002;
					}
				}
				break;
			
			case 0x00000002:
				if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000004))
				{
					Local_414.f_2 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000005))
				{
					Local_414.f_2 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000006))
				{
					Local_414.f_2 = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000007))
				{
					Local_414.f_2 = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000008))
				{
					Local_414.f_2 = 0x00000006;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, vector3 vParam2, float fParam3, var uParam4)
{
	if (func_9(Global_26B66F.f_31C) && func_9(Global_26B66F.f_31D))
	{
		if (!unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (func_6(uParam0, Global_26B66F.f_31C, vParam2, fParam3, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
			{
				unk_0x4551D324905984CB(unk_0xB177666FAB6F4417(*uParam0), 0x00000001);
			}
		}
		if (!unk_0xE9F78D191AD5EDBA(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 0x00000019, Global_26B66F.f_31D, 0xFFFFFFFF, 0x00000001, 0x00000001, 0x00000001))
			{
				unk_0x11AD11297DC58CC7(unk_0x1B50683925F00106(*uParam1), 0x00000001);
				unk_0x71199B01895C6202(Global_26B66F.f_31C);
				unk_0x71199B01895C6202(Global_26B66F.f_31D);
				unk_0x120A395B0ECB8EA5(unk_0xB177666FAB6F4417(*uParam0), 0x00000000);
				unk_0x579B0182884711E5(unk_0x1B50683925F00106(*uParam1), 0x00000001);
				func_408(uParam4, 0x00000008, unk_0x1B50683925F00106(*uParam1), "FM_TAXI", 0x00000000, 0x00000001);
			}
		}
	}
	if (!unk_0xE9F78D191AD5EDBA(*uParam0) || !unk_0xE9F78D191AD5EDBA(*uParam1))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!unk_0xA3FA8B6D2780D661(0x00000001))
	{
		return 0x00000000;
	}
	if (!unk_0xE9F78D191AD5EDBA(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(unk_0xB177666FAB6F4417(iParam1), 0x00000000))
	{
		return 0x00000000;
	}
	*uParam0 = unk_0xE8C9CB886096272A(unk_0x852A19533F896693(unk_0xB177666FAB6F4417(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x1B50683925F00106(*uParam0), bParam7);
		if (unk_0xECE0BE5313FD8BDA(unk_0x1B50683925F00106(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_6(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x468C1AC3ABF95C57(iParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xE75B31D140F2F10B(0x00000001))
	{
		return 0x00000000;
	}
	fVar0 = 1.5f;
	if (iParam1 == 0xFE0A508C)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x28F5E4DA506AC0CA(vParam2, fVar0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iVar1 = unk_0x122AAB0B1D6F55AD(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (unk_0xC844350D5D58C99A(iVar1))
	{
		*uParam0 = unk_0xFBA927257CA38E95(iVar1);
		Global_26B66F.f_1974 = iVar1;
		if (unk_0xE9F78D191AD5EDBA(*uParam0))
		{
			if (bParam13)
			{
				unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			}
			unk_0x120A395B0ECB8EA5(iVar1, bParam8);
			if (unk_0xECE0BE5313FD8BDA(iVar1))
			{
				if (bParam6)
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
				}
				else
				{
					unk_0xF4F945BB00F6E31C(*uParam0, 0x00000000);
				}
				if (bParam11)
				{
					unk_0x7F379C0A8EB2F4D0(*uParam0, unk_0xD803B885F5E47A62(), 0x00000001);
				}
			}
			unk_0x750A9DEB80D6992C(iVar1, bParam7);
			unk_0x8E44A2B22BBBAFE4(iVar1, 0x00000001);
			if (bParam10)
			{
				unk_0x4CC3459AE123CD76(iVar1);
				unk_0xF50D17A63556B8D4(iVar1, 0x00000005, 0x00000005, 1f);
			}
			func_7(vParam2, fParam3, iParam1, iVar1);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_7(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_8(unk_0xD803B885F5E47A62(), vParam0, iParam2) > 0xFFFFFFFF)
	{
		if ((Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 == iParam3 && Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2D0.f_B60[0x00000001 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000002)
		{
			if (iVar0 < 0x00000001)
			{
				Global_24B2D0.f_B60[iVar0 /*6*/] = { Global_24B2D0.f_B60[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_24B2D0.f_B60[0x00000001 /*6*/] = { vParam0 };
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_3 = fParam1;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_4 = iParam2;
		Global_24B2D0.f_B60[0x00000001 /*6*/].f_5 = iParam3;
	}
}

int func_8(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > 0xFFFFFFFF)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (unk_0x755FF954DAE327E1((Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_24E4E9.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return 0xFFFFFFFF;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
		{
			if (bLocal_588)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000002))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_581[iVar0 /*5*/].f_3, 0x00000002))
					{
						unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000002);
					}
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_414.f_1, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_581[iVar0 /*5*/].f_3, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&(Local_414.f_1), 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		return;
	}
	if (!func_13(unk_0xD803B885F5E47A62()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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

bool func_15(int iParam0, bool bParam1)
{
	if (func_19() != 0x00000000)
	{
		return func_13(iParam0) != 0x00000000;
	}
	return func_16(iParam0, bParam1, 0x00000000);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
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

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_19()
{
	return Global_7830;
}

int func_20(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 0x000003E8)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_22(uParam0, 0x00000000, 0x00000000);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

void func_23()
{
	switch (func_412(unk_0x57270EE11514DC67()))
	{
		case 0xFFFFFFFE:
			func_203();
			break;
		
		case 0xFFFFFFFF:
			func_202();
			break;
		
		case 0x00000000:
			func_31();
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_587)
	{
		case 0x00000000:
			if (!func_25(iLocal_61))
			{
				unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000002);
				Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0x00000063;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 0x00000005, 0x00000001);
}

int func_26(int iParam0, int iParam1, bool bParam2)
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
		if (func_19() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_27(func_30(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_28(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1407E9;
}

int func_30(int iParam0)
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

void func_31()
{
	int iVar0;
	
	if (func_201())
	{
		if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			func_200(0x00000000);
		}
	}
	if (!func_199(&uLocal_239))
	{
		func_22(&uLocal_239, 0x00000000, 0x00000000);
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000015))
	{
		unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000015);
	}
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000003))
	{
		if (!func_199(&uLocal_237))
		{
			func_22(&uLocal_237, 0x00000000, 0x00000000);
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000015))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (func_198(&uLocal_237, 0x00000BB8, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000003);
					}
				}
			}
		}
		if (func_198(&uLocal_237, 0x00009C40, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000003);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000010))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			if (!unk_0x798A3F1296751F46())
			{
				unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000010);
				func_197(&uLocal_237);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
	{
		if (!func_199(&uLocal_243))
		{
			func_22(&uLocal_243, 0x00000000, 0x00000000);
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_583, 0x00000001))
		{
			if (func_198(&uLocal_243, 0x00002710, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&iLocal_583, 0x00000001);
				func_197(&uLocal_243);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000013))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000012))
			{
				if (!func_195() || func_198(&uLocal_237, 0x00001388, 0x00000000))
				{
					func_194(0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000012);
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F4, 0x00000000);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F3, 0x00000000);
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F2, 0x00000000);
					}
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000012))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000002))
		{
			if (unk_0x0F1CCD77290EE12F())
			{
				iVar0 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000005);
				if (func_99(&uLocal_249, 0x00000013, "FM_1AU", "FM_ICALL", iVar0, 0x00000000))
				{
					func_98(0x00000001);
					unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000002);
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000014))
					{
						func_83(0x00000013, 0x00000003, 0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000014);
					}
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
					}
				}
			}
		}
		else if (!func_82(0x00000000))
		{
			if (!func_81())
			{
				if (!func_79())
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000C))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 0x00000000, 0x00000001);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F4, 0x00000001);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F3, 0x00000001);
							unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F2, 0x00000001);
						}
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000000C);
						func_22(&uLocal_241, 0x00000000, 0x00000000);
						func_22(&uLocal_245, 0x00000000, 0x00000000);
					}
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000C))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000011))
			{
				if (!unk_0x798A3F1296751F46())
				{
					func_75();
					unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000011);
					func_197(&uLocal_237);
				}
			}
			else if (!func_195())
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000017))
				{
					if (func_198(&uLocal_245, 0x00001194, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000017);
						unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000003);
					}
				}
				if (func_198(&uLocal_241, 0x00003A98, 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000016))
					{
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000016);
					}
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000E))
					{
						unk_0x0674E58A79778E99(&iLocal_582, 0x0000000E);
					}
					if (!func_25(iLocal_61))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000D))
						{
							unk_0x0674E58A79778E99(&iLocal_582, 0x0000000D);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000019) || (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000019) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000000))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000F))
								{
									unk_0x0674E58A79778E99(&iLocal_582, 0x0000000F);
								}
								if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iLocal_61]))
								{
									func_69("GET_AMMU", 0x00000000);
									unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000000);
									unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000019);
									if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iLocal_61]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002))
										{
											unk_0x661342B9651D16E2(Global_181EC.f_EB[iLocal_61], 0x00000001);
										}
										func_404(iLocal_61, 0x00000001);
									}
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 0x00000002))
							{
								if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iLocal_61]))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000F))
									{
										unk_0x661342B9651D16E2(Global_181EC.f_EB[iLocal_61], 0x00000000);
										unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000000F);
									}
								}
							}
							else if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iLocal_61]))
							{
								if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000F))
								{
									unk_0x661342B9651D16E2(Global_181EC.f_EB[iLocal_61], 0x00000001);
									unk_0x0674E58A79778E99(&iLocal_582, 0x0000000F);
								}
							}
						}
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000000))
						{
							unk_0x0674E58A79778E99(&iLocal_582, 0x00000000);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000D))
						{
							func_69("GET_GUN", 0x00000000);
							func_68(0x00000001);
							unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000000D);
						}
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000E))
				{
					unk_0xA37A90C62806D848(0x00000001);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x00000000))
					{
						unk_0x0674E58A79778E99(&iLocal_582, 0x00000000);
					}
					if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000000D))
					{
						unk_0x0674E58A79778E99(&iLocal_582, 0x0000000D);
					}
					if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iLocal_61]))
					{
						unk_0x661342B9651D16E2(Global_181EC.f_EB[iLocal_61], 0x00000000);
						unk_0xF412DD40DE84CE72(Global_181EC.f_EB[iLocal_61], 0x00000000);
						func_404(iLocal_61, 0x00000000);
					}
					func_69("LOSE_COP", 0x00000000);
					unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000000E);
				}
			}
		}
	}
	else if (func_198(&uLocal_239, 0x000493E0, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&iLocal_582, 0x00000012);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000000))
	{
		if (((unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_pistol"), 0x00000000) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_combatpistol"), 0x00000000)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_appistol"), 0x00000000)) || unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_microsmg"), 0x00000000))
		{
			if (func_66())
			{
				func_61(0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000000);
				if (func_25(iLocal_61))
				{
				}
			}
		}
		else
		{
			func_44(0x00000190);
		}
	}
	else if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000001))
	{
		if (!func_42())
		{
			unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000001);
			func_35();
			func_34("FM_IHELP_AMMU", 0xFFFFFFFF);
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001F))
			{
				func_32(0x00000077, 0x00000001, 0xFFFFFFFF, 0x00000001);
				func_32(0x00000073, 0x00000001, 0xFFFFFFFF, 0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000001F);
			}
			func_197(&uLocal_237);
			if (bLocal_588)
			{
				if (bLocal_589)
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0x00000003;
				}
				else
				{
					Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0x00000001;
				}
			}
			else
			{
				Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0x00000063;
			}
		}
	}
}

void func_32(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_33())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_28(iParam2)];
		if (iVar0 != 0x00000000)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_33()
{
	return 0x00000001;
	return 0x00000000;
}

void func_34(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_35()
{
	if (!func_41())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_36();
}

void func_36()
{
	func_38();
	func_37(0x00000000);
}

void func_37(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 0x00000014;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0x00000000;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0x00000000;
	Global_140749.f_35 = 0x00000000;
	Global_140749.f_36 = 0x00000000;
	Global_140749.f_37 = 0xFFFFFFFF;
	Global_140749.f_38 = 0x00000000;
	Global_140749.f_3B = 0x00000000;
	if (bParam0)
	{
		return;
	}
}

void func_38()
{
	if (!func_40())
	{
	}
	if (func_41())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_39();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_39()
{
	switch (Global_140749)
	{
		case 0x00000014:
			return;
		
		case 0x00000000:
			return;
		
		case 0x00000001:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 0x00000002:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 0x00000003:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000004:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000005:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000006:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000007:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000008:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000009:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000A:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 0x0000000C:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000D:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000B:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 0x0000000E:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x0000000F:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 0x00000011:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 0x00000010:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 0x00000013:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 0x00000012:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_40()
{
	if (!func_41())
	{
		return 0x00000000;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_39();
	return unk_0xB165082A56EE6E7F();
}

int func_41()
{
	if (Global_140749 == 0x00000014)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_42()
{
	return ((((((((((func_43(0x0000001C) || func_43(0x0000001D)) || func_43(0x0000001E)) || func_43(0x0000001F)) || func_43(0x00000020)) || func_43(0x00000021)) || func_43(0x00000022)) || func_43(0x00000023)) || func_43(0x00000024)) || func_43(0x00000025)) || func_43(0x00000026));
}

int func_43(int iParam0)
{
	return func_26(iParam0, 0x00000006, 0x00000001);
}

void func_44(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = func_58(unk_0xD803B885F5E47A62());
		if (iVar0 < iParam0)
		{
			if (func_57())
			{
				func_45(0x676706D3, (iParam0 - iVar0), &uVar1, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xDACD1EB0C24D33AC((iParam0 - iVar0));
			}
		}
	}
}

void func_45(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_57())
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
				func_46(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_46(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
				func_46(uParam2, 0xBC537E0D, 0x2005D9A9, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
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
			func_46(uParam2, 0xBC537E0D, 0x562592BB, 0x57DE404E, iParam0, iParam1, iVar0, 0x00000007);
			break;
	}
}

int func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!func_57())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_29()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_53(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0x00000000, iParam6, iParam7, 0x00000001, 0x00000001);
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
			func_52(0x00000001, iParam4);
			Global_411257 = 0x00000000;
		}
		if (iParam7 & 0x00000004 != 0x00000000)
		{
			func_47(0xFFFFFFFF, iParam4, iParam6, iParam5, 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_48(iParam0);
	}
}

void func_48(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_57())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_51(iParam0))
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
		func_49(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_49(var uParam0)
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
	func_50(&(uParam0->f_E));
	func_50(&(uParam0->f_E.f_D));
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

void func_50(var uParam0)
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

int func_51(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

void func_52(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_57())
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
				func_54(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_54(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_56(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_55();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_55()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_56(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_57()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

var func_58(int iParam0)
{
	var uVar0;
	
	uVar0 = func_59(iParam0);
	return uVar0;
}

int func_59(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_60(iParam0))
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

int func_60(int iParam0)
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

void func_61(bool bParam0)
{
	func_62(0x0000001C, bParam0);
	func_62(0x0000001D, bParam0);
	func_62(0x0000001E, bParam0);
	func_62(0x0000001F, bParam0);
	func_62(0x00000020, bParam0);
	func_62(0x00000021, bParam0);
	func_62(0x00000022, bParam0);
	func_62(0x00000023, bParam0);
	func_62(0x00000024, bParam0);
	func_62(0x00000025, bParam0);
	func_62(0x00000026, bParam0);
}

void func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0x0000000E, 0x00000001))
		{
			func_65(iParam0, 0x0000000E, 0x00000001);
		}
	}
	else if (func_26(iParam0, 0x0000000E, 0x00000001))
	{
		func_63(iParam0, 0x0000000E, 0x00000001);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
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
		if (func_19() == 0x00000000)
		{
			iVar0 = func_27(func_30(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_64(func_30(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
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
		if (func_19() == 0x00000000)
		{
			iVar0 = func_27(func_30(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_64(func_30(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

bool func_66()
{
	return ((((((((((func_67(0x0000001C) || func_67(0x0000001D)) || func_67(0x0000001E)) || func_67(0x0000001F)) || func_67(0x00000020)) || func_67(0x00000021)) || func_67(0x00000022)) || func_67(0x00000023)) || func_67(0x00000024)) || func_67(0x00000025)) || func_67(0x00000026));
}

int func_67(int iParam0)
{
	return func_26(iParam0, 0x00000003, 0x00000000);
}

void func_68(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_193A64, 0x00000013))
		{
			unk_0x5D96D8530B3D0904(&Global_193A64, 0x00000013);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_193A64, 0x00000013))
	{
		unk_0x0674E58A79778E99(&Global_193A64, 0x00000013);
	}
}

void func_69(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 0x00000017)
	{
		return;
	}
	if (func_73(sParam0))
	{
		return;
	}
	func_36();
	Global_140749 = 0x00000000;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_72();
	func_71(bParam1);
	func_70();
}

void func_70()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000001);
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0x00000000);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0x00000000);
}

void func_72()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x05265C00);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_73(char* sParam0)
{
	if (!func_41())
	{
		return 0x00000000;
	}
	if (Global_140749 == 0x0000000B)
	{
		return func_74(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_74(char* sParam0)
{
	if (!func_41())
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0x00000000;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_75()
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	
	Var0 = { func_78(unk_0xD803B885F5E47A62()) };
	bVar1 = unk_0xC2F420D189FDB329();
	bVar2 = func_77(&Var0);
	if (!bVar1 && !bVar2)
	{
		func_76("HLP_TAXI3", 0x00002328);
	}
	else if (bVar1 && !bVar2)
	{
		func_76("HLP_SOC2", 0x00002328);
	}
	else if (bVar1 && bVar2)
	{
		func_76("HLP_SOC1", 0x00002328);
	}
}

void func_76(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000000, iParam1);
}

int func_77(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<13> func_78(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

bool func_79()
{
	return func_80();
}

bool func_80()
{
	return Global_14E99F.f_28 == 0x00000003;
}

int func_81()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_82(int iParam0)
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

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_1F6A = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		func_90();
		if (iParam1 == 0x00000004)
		{
			func_89(iParam0, 0x00000000, 0x00000001);
			func_89(iParam0, 0x00000001, 0x00000001);
			func_89(iParam0, 0x00000002, 0x00000001);
			func_88(iParam0, 0x00000000, 0x00000001);
			func_88(iParam0, 0x00000001, 0x00000001);
			func_88(iParam0, 0x00000002, 0x00000001);
		}
		else
		{
			if (func_87(iParam0, iParam1) == 0x00000001 && func_86(iParam0, iParam1) == 0x00000001)
			{
				bParam2 = 0x00000000;
			}
			iVar0 = iParam1;
			func_89(iParam0, iVar0, 0x00000001);
			func_88(iParam0, iVar0, 0x00000001);
		}
		if (bParam2)
		{
			if (!Global_12B4E)
			{
				if (iParam1 != 0x00000004)
				{
					if (Global_4C1E != iParam1)
					{
						Global_1F4F[iParam1 /*4*/] = { func_85(iParam0) };
						Global_1F60[iParam1] = 0x00000001;
						Global_1F65[iParam1] = iParam0;
					}
					else if (iParam0 == Global_4C1E)
					{
					}
					else
					{
						Global_1F1E[0x00000001 /*6*/] = { func_85(iParam0) };
						Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
						func_84();
					}
				}
				else
				{
					Global_1F1E[0x00000001 /*6*/] = { func_85(iParam0) };
					Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
					func_84();
				}
			}
			else
			{
				Global_1F1E[0x00000001 /*6*/] = { func_85(iParam0) };
				Global_1F1E[0x00000001 /*6*/].f_5 = iParam1;
				func_84();
			}
		}
	}
}

void func_84()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_1F6A /*29*/].f_7)), 64);
	if (Global_1F7D == 0x00000000)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_1F1E[0x00000001 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_1F1E[0x00000001 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, "", 0x00000000);
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000000);
}

struct<4> func_85(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_88(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

void func_90()
{
	if (func_97(0x0000000E))
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
		Global_4C1E = func_91();
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

var func_91()
{
	func_92();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_92()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_95(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_94(unk_0x16F2683693E537C9());
			if (func_93(iVar0) && (!func_97(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_93(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_93(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_95(int iParam0)
{
	if (func_93(iParam0))
	{
		return func_96(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_96(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_97(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000011);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_192())
	{
		return 0x00000000;
	}
	if (func_191())
	{
		return 0x00000000;
	}
	sVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0xFFFFFF9D;
	return func_100(uParam0, iParam1, sParam2, sParam3, 0x00000001, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 0xFFFFFFFF);
}

int func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 0x00000007)
	{
		return 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0x00000000;
	}
	if (unk_0x7724E025FD444F45(sParam3) > 0x0000000F)
	{
		return 0x00000000;
	}
	iVar0 = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
	iVar1 = func_190(sParam2, sParam3);
	iVar2 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		iVar2 = unk_0x12AB0310C2281427(sParam7);
	}
	if (func_189(iVar0, iVar1, iVar2))
	{
		return 0x00000001;
	}
	if (!func_185(iParam6))
	{
		return 0x00000000;
	}
	if (func_182(iVar0, iVar1, iVar2))
	{
		if (func_181())
		{
			return 0x00000000;
		}
		func_180();
		return func_107(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_106(iParam4))
	{
		return 0x00000000;
	}
	func_101(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0x00000000;
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_14E99F.f_28.f_1 = iParam0;
	Global_14E99F.f_28.f_2 = iParam1;
	Global_14E99F.f_28.f_3 = iParam2;
	StringCopy(&(Global_14E99F.f_28.f_4), sParam3, 16);
	Global_14E99F.f_28.f_8 = iParam4;
	Global_14E99F.f_28.f_9 = iParam5;
	Global_14E99F.f_28.f_E = iParam6;
	func_102(iParam4);
	func_180();
	Global_14E99F.f_28.f_D = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 0x00001B58);
}

void func_102(int iParam0)
{
	if (func_105(iParam0))
	{
		func_104();
		return;
	}
	func_103();
}

void func_103()
{
	Global_14E99F.f_28.f_A = 0x00000000;
}

void func_104()
{
	Global_14E99F.f_28.f_A = 0x00000001;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000004:
		case 0x00000005:
			return 0x00000001;
		
		case 0x00000000:
		case 0x00000001:
		case 0x00000007:
		case 0x00000008:
		case 0x00000002:
		case 0x00000003:
			return 0x00000000;
		
		default:
	}
	return 0x00000000;
}

bool func_106(int iParam0)
{
	return iParam0 > Global_14E99F.f_28.f_8;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_179();
	if (iParam6 == 0x00000005)
	{
		iParam6 = 0x00000000;
	}
	if (iParam5 == 0x00000008)
	{
		return func_176(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 0x00000004)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_173(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 0x00000001 || iParam5 == 0x00000007)
	{
		if (iParam6 == 0x00000002)
		{
			return func_176(uParam0, sParam3, sParam4);
		}
		return func_155(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 0x00000005)
	{
		return func_154(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000002)
	{
		return func_143(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000003)
	{
		return func_142(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 0x00000006)
	{
		return func_108(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0x00000000;
}

int func_108(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_141();
	bVar0 = 0x00000001;
	if (func_110(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_109(int iParam0)
{
	Global_14E99F.f_28.f_B = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam0);
	Global_14E99F.f_28.f_C = 0x00000001;
}

int func_110(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_140();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_134(iVar0);
		if (iVar1 == 0x00000000)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_14E99F.f_28.f_D))
			{
				return 0x00000000;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0x00000000;
	sVar4 = func_133(sParam5, bParam6, &iVar3);
	uVar5 = func_131(iParam7, &iVar3);
	iVar6 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = 0x00000001;
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x00000001;
	iVar11 = 0x00000000;
	if (bParam3)
	{
		iVar9 = 0x00000001;
		iVar10 = 0x00000002;
		iVar11 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000001))
		{
			iVar8 = 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000002))
	{
		iVar10 = 0x00000002;
	}
	bVar12 = 0x00000000;
	if (!iVar3 == 0x00000000 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_130(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_113();
	}
	func_141();
	func_112();
	func_111();
	return 0x00000001;
}

void func_111()
{
	Global_14E99F.f_39 = 0x00000000;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_112()
{
	Global_14E99F.f_28 = 0x00000003;
}

void func_113()
{
	unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000008);
}

int func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_115(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_115(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_4126B6 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appemail")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("appmpemail")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_129() == 0x00000000)
	{
		func_127();
		return 0x00000000;
	}
	func_126(Global_4126B5);
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/]), sParam1, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_11 = uParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_4121D4[Global_4126B5 /*104*/].f_18 = iParam2;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_19 = iParam7;
	Global_4121D4[Global_4126B5 /*104*/].f_1A = uParam8;
	Global_4121D4[Global_4126B5 /*104*/].f_1D = uParam9;
	Global_4121D4[Global_4126B5 /*104*/].f_1E = uParam12;
	Global_4121D4[Global_4126B5 /*104*/].f_1F = uParam11;
	Global_4121D4[Global_4126B5 /*104*/].f_1C = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_21), sParam4, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_32), sParam5, 64);
	Global_4121D4[Global_4126B5 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_4121D4[Global_4126B5 /*104*/].f_53), sParam15, 64);
	func_90();
	switch (iParam16)
	{
		case 0x00000003:
			Global_4121D4[Global_4126B5 /*104*/].f_63[Global_4C1E] = 0x00000001;
			break;
		
		case 0x00000000:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000000] = 0x00000001;
			break;
		
		case 0x00000002:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000002] = 0x00000001;
			break;
		
		case 0x00000001:
			Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000001] = 0x00000001;
			break;
	}
	if (iParam16 == 0x00000003)
	{
		switch (Global_4C1E)
		{
			case 0x00000000:
				func_125(0x00000000);
				break;
			
			case 0x00000001:
				func_125(0x00000001);
				break;
			
			case 0x00000002:
				func_125(0x00000002);
				break;
			
			case 0x00000003:
				func_125(0x00000003);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 0x00000001)
	{
		switch (iParam16)
		{
			case 0x00000003:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000000:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000002:
				Global_4126B6 = 0x00000001;
				break;
			
			case 0x00000001:
				Global_4126B6 = 0x00000001;
				break;
			}
	}
	Global_5572[Global_4126B5] = 0x00000000;
	if (bParam10)
	{
		func_90();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_124())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_123(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_120(0x00000001);
			func_123(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_116(uParam0, sParam1);
	return 0x00000001;
}

void func_116(var uParam0, char* sParam1)
{
	if (!func_117())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0xB9A1844D, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

int func_117()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_140())
	{
		return 0x00000000;
	}
	if (func_118(unk_0xD803B885F5E47A62()))
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

bool func_118(int iParam0)
{
	return func_119(iParam0, 0x00000014);
}

bool func_119(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_120(int iParam0)
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
	
	Global_5571 = 0x00000000;
	Global_1F19 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		Global_1EF5[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		iVar1 = 0x00000000;
		if (func_97(0x0000000E))
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar2 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar2 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_122(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000001)
							{
								iVar3 = 0x00000000;
								while (iVar3 < 0x00000023)
								{
									if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0x00000000)
									{
										if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0x00000000)
										{
											if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
											{
												Global_5571++;
											}
										}
									}
									iVar3++;
								}
								func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000007)
							{
								if (Global_12B4E)
								{
									iVar4 = 0x00000000;
									iVar4 = Global_4121D3;
									iVar5 = 0x00000000;
									while (iVar5 < 0x0000000C)
									{
										if (Global_4121D4[iVar5 /*104*/].f_18 != 0x00000000)
										{
											if (Global_4121D4[iVar5 /*104*/].f_1C == 0x00000000)
											{
												if (Global_4121D4[iVar5 /*104*/].f_63[Global_4C1E] == 0x00000001)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									switch (Global_4C1E)
									{
										case 0x00000000:
											iVar6 = Global_A66F;
											break;
										
										case 0x00000001:
											iVar6 = Global_A670;
											break;
										
										case 0x00000002:
											iVar6 = Global_A671;
											break;
										
										default:
											break;
									}
									func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_122(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_1CC2);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000002)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
								{
									iVar7 = 0x0000002A;
								}
								else
								{
									iVar7 = 0x000000FF;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_122(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar8 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar8 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_122(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000008)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_122(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 0x00000017 && unk_0x7F8A39872A07D2CE(&(Global_1CC3[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_122(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_121(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_121(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_122(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_122(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_122(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_122(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_122(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_122(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_123(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

bool func_124()
{
	return Global_14086D;
}

void func_125(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_4121D4[iParam0 /*104*/].f_12 = iVar0;
	Global_4121D4[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_4121D4[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_4121D4[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_4121D4[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_4121D4[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_127()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar2 = iVar0;
	Global_4126B5 = 0x0000000B;
	Global_4121D4[Global_4126B5 /*104*/].f_12 = 0xFFFFFFFF;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_1 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_2 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_3 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_128(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
		{
			Global_4126B5 = iVar2;
		}
		iVar2++;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_18 = 0x00000001;
}

int func_128(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_129()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4121D4[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_4126B5 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4126B5 = 0x0000000B;
	Global_4121D4[Global_4126B5 /*104*/].f_12 = 0xFFFFFFFF;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_1 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_2 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_3 = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_4121D4[iVar2 /*104*/].f_18 == 0x00000000 || Global_4121D4[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_128(Global_4121D4[iVar2 /*104*/].f_12, Global_4121D4[Global_4126B5 /*104*/].f_12))
			{
				Global_4126B5 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4126B5 == 0x0000000B)
	{
		return 0x00000000;
	}
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_4121D4[Global_4126B5 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

int func_130(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0x00000000:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 0x00000001:
			sParam16 = "NULL";
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	iVar0 = 0x00000003;
	if (func_115(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000000);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_131(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFF9D)
	{
		return 0xFFFFFF9D;
	}
	func_132(0x00000002, iParam1);
	return iParam0;
}

void func_132(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	bVar0 = 0x00000000;
	bVar1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000001:
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			bVar1 = 0x00000001;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 0x00000001:
			case 0x00000003:
				break;
			
			case 0x00000000:
				*uParam1 = 0x00000001;
				break;
			
			case 0x00000002:
				*uParam1 = 0x00000003;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 0x00000002:
			case 0x00000003:
				break;
			
			case 0x00000000:
				*uParam1 = 0x00000002;
				break;
			
			case 0x00000001:
				*uParam1 = 0x00000003;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_133(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_132(0x00000001, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x19C9F30A7697B43C(sParam0);
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_135(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_135(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_137(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_136(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_138(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_138(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_139(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_139(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_140();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

int func_140()
{
	return 0xFFFFFFFF;
}

void func_141()
{
	Global_14E99F.f_28.f_9 = 0x00000004;
}

int func_142(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_141();
	bVar0 = 0x00000000;
	return func_110(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_143(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	return func_144(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_140();
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000091)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x6E524813889AECF8(iVar0);
		iVar1 = func_134(iVar0);
		if (iVar1 == 0x00000000)
		{
			if (unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_14E99F.f_28.f_D))
			{
				return 0x00000000;
			}
		}
		Global_556A = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0x00000000;
	sVar4 = func_133(sParam5, bParam6, &iVar3);
	uVar5 = func_131(iParam7, &iVar3);
	iVar6 = 0x00000000;
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		iVar6++;
		if (!unk_0xEA6BC48857E0AC4C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x7F8A39872A07D2CE(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = 0x00000001;
	iVar8 = 0x00000000;
	iVar9 = 0x00000000;
	iVar10 = 0x00000001;
	iVar11 = 0x00000000;
	if (bParam3)
	{
		iVar9 = 0x00000001;
		iVar10 = 0x00000002;
		iVar11 = 0x00000001;
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000001))
		{
			iVar8 = 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000002))
	{
		iVar10 = 0x00000002;
	}
	bVar12 = 0x00000000;
	if (!iVar3 == 0x00000000 || !unk_0xEA6BC48857E0AC4C(sVar2))
	{
		bVar12 = func_153(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_146(iParam0, sParam2, iVar10, iVar11, 0x00000001, iVar9, 0x00000000, bVar7, iVar8, 0x00000000);
	}
	if (!bVar12)
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000000))
	{
		func_113();
	}
	func_145();
	func_112();
	func_111();
	return 0x00000001;
}

void func_145()
{
	Global_14E99F.f_28.f_9 = 0x00000003;
}

int func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_147(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_85(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_147(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_90();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_152() == 0x00000000)
	{
		func_150();
		return 0x00000000;
	}
	func_149(Global_5570);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/]), sParam1, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_11 = uParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_18 = iParam2;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_19 = iParam7;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1A = uParam8;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1D = uParam9;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1E = uParam12;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1F = uParam11;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1C = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21), sParam4, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_32), sParam5, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
		Global_1F7E = 0x00000004;
		func_125(0x00000000);
		func_125(0x00000002);
		func_125(0x00000001);
	}
	else
	{
		func_90();
		switch (iParam16)
		{
			case 0x00000003:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[Global_4C1E] = 0x00000001;
				break;
			
			case 0x00000000:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
				break;
			
			case 0x00000002:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
				break;
			
			case 0x00000001:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
				break;
		}
		if (iParam16 == 0x00000003)
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					func_125(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_125(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_125(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_125(0x00000003);
					Global_1F7E = 0x00000003;
					break;
				
				default:
					Global_1F7E = 0x00000004;
					break;
				}
			}
	}
	if (iParam7 == 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
		{
			Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
		}
		else
		{
			switch (iParam16)
			{
				case 0x00000003:
					Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000000:
					Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000002:
					Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000001:
					Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
					break;
				}
			}
	}
	Global_5572[Global_5570] = 0x00000000;
	if (bParam10)
	{
		func_90();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_124())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_123(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_120(0x00000001);
			func_123(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_148(uParam0, sParam1);
	return 0x00000001;
}

void func_148(var uParam0, char* sParam1)
{
	if (!func_117())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

void func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_1B416.f_3738[iParam0 /*104*/].f_12 = iVar0;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_151(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_151(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_5570 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000 || Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_151(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
			{
				Global_5570 = iVar2;
			}
		}
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000002)
		{
		}
		iVar2++;
	}
	if (Global_5570 == 0x00000022)
	{
		return 0x00000000;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

int func_153(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0x00000000:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 0x00000001:
			sParam16 = "NULL";
			break;
		
		case 0x00000002:
			break;
		
		default:
			break;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000003;
	if (func_147(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 0x00000001)
	{
		if (bParam11 == 0x00000001)
		{
			Global_1F7F = iParam10;
			Global_1F1E[0x00000003 /*6*/] = { func_85(iParam0) };
			Global_1F6B = iParam0;
			StringCopy(&Global_1F6C, sParam5, 64);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_154(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	func_145();
	bVar0 = 0x00000001;
	if (func_144(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_109(0x0001D4C0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_155(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
	}
	bVar0 = 0x00000000;
	iVar1 = 0x0000000C;
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000007))
	{
		iVar1 = 0x00000009;
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000004))
	{
		bVar0 = func_172(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		bVar0 = func_161(uParam0, iParam1, sParam2, sParam3, iVar1, 0x00000000, 0x00000000, 0x00000001);
	}
	if (bVar0)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000003))
		{
			func_160(0x00000001);
		}
		if (unk_0xEAE0D21A50E6C7F4(iParam4, 0x00000005))
		{
			func_159(0x00000001);
		}
		func_158();
		func_112();
		func_157();
		func_156();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_156()
{
	Global_26DB8C = 0x00000000;
}

void func_157()
{
	Global_14E99F.f_39 = 0x00000001;
	Global_14E99F.f_39.f_1 = 0x00000000;
}

void func_158()
{
	Global_14E99F.f_28.f_9 = 0x00000001;
}

void func_159(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBE, 0x00000000);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
	}
}

void func_160(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
	}
}

int func_161(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
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
	Global_280001 = 0x00000000;
	return func_162(sParam3, iParam4, bParam7);
}

int func_162(char* sParam0, int iParam1, bool bParam2)
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
					func_170();
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
		if (func_169(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_168();
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
				func_90();
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
				if (func_167())
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
			if (func_166())
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
			func_165();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_164();
		func_163();
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
		func_170();
	}
	return 0x00000000;
}

void func_163()
{
	if (!func_117())
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

void func_164()
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

void func_165()
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

int func_166()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_167()
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

void func_168()
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

bool func_169(int iParam0, int iParam1)
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

void func_170()
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

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_172(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_171(uParam0, iParam1, sParam2, iParam5, iParam6, 0x00000000);
	Global_5175 = 0x00000001;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000000;
	Global_517B = 0x00000000;
	Global_280001 = 0x00000000;
	return func_162(sParam3, iParam4, bParam7);
}

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (func_175(uParam0, iParam1, sParam2, sParam3, 0x00000009, sParam4, 0x00000000, 0x00000000, 0x00000001))
	{
		func_174();
		func_158();
		func_112();
		func_157();
		func_156();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_174()
{
	Global_553F = 0x00000000;
}

bool func_175(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_171(uParam0, iParam1, sParam2, iParam6, iParam7, 0x00000000);
	Global_5175 = 0x00000000;
	Global_514C = 0x00000001;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000001;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_514A = 0x00000000;
	Global_5179 = 0x00000001;
	Global_517B = 0x00000000;
	StringCopy(&Global_51D9, sParam5, 24);
	Global_280001 = 0x00000000;
	return func_162(sParam3, iParam4, bParam8);
}

int func_176(var uParam0, char* sParam1, char* sParam2)
{
	if (func_178(uParam0, sParam1, sParam2, 0x0000000C, 0x00000000, 0x00000000, 0x00000000))
	{
		func_177();
		func_112();
		func_157();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_177()
{
	Global_14E99F.f_28.f_9 = 0x00000002;
}

bool func_178(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_162(sParam2, iParam3, 0x00000000);
}

void func_179()
{
	Global_14E99F.f_37 = Global_14E99F.f_28.f_1;
	Global_14E99F.f_37.f_1 = Global_14E99F.f_28.f_A;
}

void func_180()
{
	Global_14E99F.f_28 = 0x00000001;
}

bool func_181()
{
	return Global_14E99F.f_28 == 0x00000001;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	if (!func_183(iParam0))
	{
		return 0x00000000;
	}
	if (Global_14E99F.f_28.f_2 != iParam1)
	{
		return 0x00000000;
	}
	if (iParam2 != 0x00000000)
	{
		if (Global_14E99F.f_28.f_3 != iParam2)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_183(int iParam0)
{
	if (!func_184())
	{
		return 0x00000000;
	}
	if (!Global_14E99F.f_28.f_1 == iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_184()
{
	if (Global_14E99F.f_28 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_185(int iParam0)
{
	if (func_188())
	{
		return 0x00000000;
	}
	if (func_80())
	{
		return 0x00000000;
	}
	if (func_82(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_1406D3.f_12 != 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_195C36 || func_187())
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(iParam0, 0x00000006))
	{
		if (func_186())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_186()
{
	return unk_0x4925CBEE5D8BE14B(unk_0x2B6E0A53779D29EA(), Global_152CC2);
}

int func_187()
{
	if (Global_40EB30.f_3AF > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_188()
{
	return func_166();
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	if (!func_80())
	{
		return 0x00000000;
	}
	return func_182(iParam0, iParam1, iParam2);
}

int func_190(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x12AB0310C2281427(&cVar0);
}

bool func_191()
{
	return Global_26D039.f_1;
}

int func_192()
{
	if (Global_14EA5B.f_2)
	{
		return 0x00000001;
	}
	return func_193();
}

bool func_193()
{
	return func_188();
}

void func_194(int iParam0)
{
	Global_26DD74.f_430 = iParam0;
}

int func_195()
{
	if (func_196("HLP_TAXI3"))
	{
		return 0x00000001;
	}
	if (func_196("HLP_SOC1"))
	{
		return 0x00000001;
	}
	if (func_196("HLP_SOC2"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_196(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_197(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_198(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_22(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_199(var uParam0)
{
	return uParam0->f_1;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000008))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000008);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000008))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000008);
	}
}

bool func_201()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000008);
}

void func_202()
{
	unk_0x82E51BCA72537B6C(0x00000320);
	if (!bLocal_590 || bLocal_591)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
		}
	}
	if (!bLocal_591)
	{
		Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0x00000000;
	}
	else
	{
		Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0x00000003;
	}
}

void func_203()
{
	if (func_207(&Local_62, &(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4)))
	{
		Local_581[unk_0x57270EE11514DC67() /*5*/].f_2 = 0xFFFFFFFF;
	}
	func_204(&Local_62);
}

void func_204(int iParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x798A3F1296751F46();
	switch (iLocal_586)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000012))
			{
				if (!func_199(&uLocal_592))
				{
					func_22(&uLocal_592, 0x00000000, 0x00000000);
				}
				if (!bVar0)
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						func_76("HLP_XP1", 0x00002328);
						func_197(&uLocal_592);
						func_22(&uLocal_592, 0x00000000, 0x00000000);
						iLocal_586++;
					}
				}
				else if (func_198(&uLocal_592, 0x00001388, 0x00000000))
				{
					iLocal_586++;
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (!bVar0)
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_76("HLP_XP2", 0x00002328);
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0x00000000, 0x00000000);
					iLocal_586++;
				}
			}
			else if (func_198(&uLocal_592, 0x00001388, 0x00000000))
			{
				iLocal_586++;
				func_197(&uLocal_592);
				func_22(&uLocal_592, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (!bVar0)
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_76("HLP_RNK1", 0x00002328);
					func_206(0x00000001);
					Global_26B66F.f_73D = 0x00000001;
					func_205(0x00000001, 0x00000000, 0xFFFFFFFF);
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0x00000000, 0x00000000);
					iLocal_586++;
				}
			}
			else if (func_198(&uLocal_592, 0x00001388, 0x00000000))
			{
				iLocal_586++;
				func_197(&uLocal_592);
				func_22(&uLocal_592, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000003:
			if (!bVar0)
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_194(0x00000000);
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						func_76("HLP_CASHXBX", 0x00002328);
					}
					else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
					{
						func_76("HLP_CASHPSN", 0x00002328);
					}
					else
					{
						func_76("HLP_CASHGEN", 0x00002328);
					}
					func_197(&uLocal_592);
					func_22(&uLocal_592, 0x00000000, 0x00000000);
					iLocal_586 = 0x00000063;
				}
			}
			else if (func_198(&uLocal_592, 0x00001388, 0x00000000))
			{
				iLocal_586 = 0x00000063;
				func_197(&uLocal_592);
				func_22(&uLocal_592, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000063:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_583, 0x00000002))
			{
				unk_0x5D96D8530B3D0904(&iLocal_583, 0x00000002);
			}
			break;
	}
}

void func_205(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam2 > 0xFFFFFFFF)
			{
				Global_150392.f_89[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x5D96D8530B3D0904(&(Global_150392.f_416), iParam0);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_150392.f_416), iParam0);
			}
			break;
	}
}

void func_206(int iParam0)
{
	Global_26B66F.f_11B3 = iParam0;
}

int func_207(int iParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000D))
	{
		if (unk_0x9F4FE516EAACCFC5(unk_0xC4648AFC94BA9ACC()))
		{
			vVar3 = { unk_0xD06724447386BC29(unk_0xC4648AFC94BA9ACC()) };
			if ((vVar3.x != 0f || vVar3.y != 0f) || vVar3.z != 0f)
			{
				unk_0xF49D1BC9EF1C3EF4(vVar3, 0f, 0f, 0f);
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000E))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000E);
				}
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000E))
	{
		unk_0x066C43E677C08D5C();
		unk_0x0674E58A79778E99(iParam0, 0x0000000E);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000151, 0x00000001);
	}
	func_381(iParam0);
	unk_0xE4EBD4F12E3C46F1(1f);
	func_375(iParam0);
	func_374(unk_0xD803B885F5E47A62());
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001F))
	{
		if (iParam0->f_6 > 0x00000000)
		{
			iParam0->f_20 = unk_0x0D1736C2E221BCEA(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (iParam0->f_20 != 0x00000000)
			{
				unk_0x0007C2367F4F23F3(iParam0->f_20);
				unk_0x5D96D8530B3D0904(iParam0, 0x0000001F);
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		switch (iParam0->f_6)
		{
			case 0x00000000:
				iParam0->f_124 = 0x00000001;
				iParam0->f_125 = 0x00000000;
				iParam0->f_127 = 0x00000000;
				iParam0->f_126 = 0x00000000;
				if (unk_0x8A22C4C08282BF26(joaat("fm_intro")) > 0x00000000)
				{
					iParam0->f_127 = 0x00000001;
					iParam0->f_126 = 0x00000001;
				}
				else if (unk_0x8A22C4C08282BF26(func_373()) > 0x00000000)
				{
					iParam0->f_127 = 0x00000001;
				}
				if (!Global_26B66F.f_73C)
				{
					Global_26B66F.f_73C = 0x00000001;
					unk_0x7F2C3F971FA7A9EA(0x00000000);
				}
				if (!func_201())
				{
					func_200(0x00000001);
				}
				if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(0x00000320);
				}
				if (!func_199(&(iParam0->f_F)))
				{
					func_22(&(iParam0->f_F), 0x00000000, 0x00000000);
				}
				unk_0xE17FDF9E3068281B(&Global_195E00);
				Global_195E01 = 0x00000000;
				Global_195E03 = 0x00000000;
				Global_195E02 = 0x00000000;
				Global_195E04 = 0x00000000;
				iParam0->f_13 = { 0f, 0f, 0f };
				if (unk_0x757EF87A33649210())
				{
					*iParam0 = 0x00000000;
					iParam0->f_4 = 0x00000000;
					iParam0->f_5 = 0x00000000;
					func_362(0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
					unk_0xB5EB44E161D3DCB8(0x00000001, 0x00000000);
					func_407(0x00000001);
					unk_0x93E3BF6DC91ADAA6(0x00000001);
					unk_0xCFC975972CBB2320("EXTRASUNNY");
					unk_0xF60E6F759DB05AEB(0x00000013, 0x00000000, 0x00000000);
					unk_0x448D99BAB1554268(0x00000001);
					func_361(0x00000000);
					unk_0x98AB0CC3E937A146(0x00000000);
					func_353(0x00000001, 0x00000000);
					func_329(0x00000001, 0x00000001);
					if (unk_0x8A22C4C08282BF26(joaat("fm_intro")) < 0x00000001 || !func_328())
					{
						if (iParam0->f_124)
						{
							if (func_327() == 0x00000000)
							{
								unk_0x0CDF80057190977A("GTAO_INTRO_MALE");
								unk_0xD37565245621B3E1(0x00000001);
							}
						}
					}
					func_320(0x0000000E, 0x00000000);
					iParam0->f_6 = 0x00000001;
					*iParam0 = 0x00000000;
					unk_0x0674E58A79778E99(iParam0, 0x00000000);
					unk_0x0674E58A79778E99(iParam0, 0x00000001);
					unk_0x0674E58A79778E99(iParam0, 0x00000002);
					unk_0x0674E58A79778E99(iParam0, 0x00000009);
					unk_0x5D96D8530B3D0904(iParam0, 0x00000007);
					iParam0->f_7A = unk_0x7D6CA5F52B3748BF(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				}
				break;
			
			case 0x00000001:
				unk_0x523BCC9DC80CD82F(joaat("frogger"));
				if (unk_0xB87F6CF6E5628C67(joaat("frogger")))
				{
					if (!iParam0->f_124 || unk_0x23239EF74F22427E())
					{
						if (func_317())
						{
							unk_0x8001939EDF757EB8(0x00000000);
							func_312(0x00000001, 0x00000001);
							unk_0x23F80404F3C4C299(0x00000000);
							unk_0xA37A90C62806D848(0x00000001);
							if (!func_193())
							{
								func_311();
							}
							func_206(0x00000000);
							func_310();
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), Global_140729, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
							unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
							unk_0x34D79252800B23FF(0x00000000);
							if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
							{
								unk_0x516E63E474722206(unk_0x023428EEA3027652(), 0f);
							}
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
							iParam0->f_6 = 0x00000002;
						}
					}
				}
				break;
			
			case 0x00000002:
				if (!unk_0x991B1F0980C62628())
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004))
					{
						if (func_309() == 0x00000041 || func_309() == 0x00000042)
						{
							unk_0x066C43E677C08D5C();
							unk_0xD67D6A3F0D653D93(754.2219f, 1226.831f, 356.5081f, func_308(-14.367f, 0f, 157.3524f), 100f, 0x00000000);
							func_197(&(iParam0->f_11));
							func_22(&(iParam0->f_11), 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(iParam0, 0x00000004);
						}
					}
					else if (unk_0x13896FDECC859926("FM_INTRO_START") && (unk_0x68367101660E33F0() || func_198(&(iParam0->f_11), 0x00001388, 0x00000000)))
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000018))
						{
							if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000007))
							{
								unk_0xC92DB9682A650680("FM_INTRO_START");
								unk_0x5D96D8530B3D0904(iParam0, 0x00000018);
								unk_0x5D96D8530B3D0904(iParam0, 0x00000015);
							}
						}
						else if (unk_0x94AE52F579E2F918() > 0x00000000)
						{
							unk_0x486B4ADE317F0689();
							unk_0xF99F2927BEBB5EE7(0x00000006);
							if (!unk_0x9F4FE516EAACCFC5(iParam0->f_7))
							{
								iParam0->f_7 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
								unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, 0x00000001);
							}
							unk_0x86F44313DFA8F00C(iParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
							unk_0x86F44313DFA8F00C(iParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 0x00001964, 0x00000000, 0x00000000, 0x00000002);
							unk_0x91F5B0244AAE6222(iParam0->f_7, "HAND_SHAKE", 0.15f);
							unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000001, 0x00000000);
							func_307(iParam0);
							unk_0x5D96D8530B3D0904(iParam0, 0x0000000B);
							if (iParam0->f_124)
							{
								unk_0x44E5AE27B5A88FC7(0x00000009, 0x00000009, 0x00000009, 0x00000009);
								unk_0x9E020FDB27CA9201();
							}
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
							if (unk_0x757EF87A33649210())
							{
								unk_0x82E51BCA72537B6C(0x00000320);
							}
							iParam0->f_6 = 0x00000006;
						}
					}
				}
				break;
			
			case 0x00000006:
				func_306(iParam0, 0x00000006);
				func_305(iParam0);
				if (func_304(iParam0, 0x00000006, 0x00000000))
				{
					unk_0xA37A90C62806D848(0x00000001);
					iParam0->f_6 = 0x00000007;
				}
				break;
			
			case 0x00000007:
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002))
				{
					unk_0xA37A90C62806D848(0x00000001);
					func_76("FMIC_INTRO2", 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
				}
				unk_0x86F44313DFA8F00C(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 0x00001770, 0x00000000, 0x00000000, 0x00000002);
				unk_0x44E5AE27B5A88FC7(0x00000009, 0x0000000D, 0x00000009, 0x0000000D);
				iParam0->f_6 = 0x00000008;
				break;
			
			case 0x00000008:
				func_306(iParam0, 0x00000008);
				if (func_305(iParam0))
				{
					func_303(iParam0);
					if (func_304(iParam0, 0x00000008, 0x00000000))
					{
						iParam0->f_6 = 0x00000009;
					}
				}
				break;
			
			case 0x00000009:
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000A))
				{
					func_302();
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000A);
				}
				unk_0x86F44313DFA8F00C(iParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 0x00001F40, 0x00000000, 0x00000000, 0x00000002);
				if (unk_0xDF1306B443CD3D15(iParam0->f_30, 0x00000000))
				{
					unk_0xE898EBD25943F331(iParam0->f_30);
					unk_0x4A4806F9D471E491(iParam0->f_30, 0x00000001, 0x00000000);
					unk_0x873BCADC75FF6D20(iParam0->f_30);
				}
				iParam0->f_6 = 0x0000000A;
				break;
			
			case 0x0000000A:
				if (unk_0xDF1306B443CD3D15(iParam0->f_30, 0x00000000))
				{
					unk_0x873BCADC75FF6D20(iParam0->f_30);
				}
				func_306(iParam0, 0x0000000A);
				if (func_301())
				{
					if (func_300(iParam0))
					{
						if (func_303(iParam0))
						{
							if (func_304(iParam0, 0x0000000A, 0x00000000))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -2870.804f, 81.4979f, 13.1957f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
								}
								fVar0 = 5000f;
								if (unk_0xDF1306B443CD3D15(iParam0->f_5C[0x00000000], 0x00000000))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_5C[0x00000000], 0x00000064, "FM_Intro_uber", 0x00000001);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_5C[0x00000000], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_5C[0x00000001], 0x00000000))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_5C[0x00000001], 0x00000065, "FM_Intro_uber", 0x00000001);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_5C[0x00000001], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_5C[0x00000002], 0x00000000))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_5C[0x00000002], 0x00000066, "FM_Intro_uber", 0x00000001);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_5C[0x00000002], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_5C[0x00000003], 0x00000000))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_5C[0x00000003], 0x00000067, "FM_Intro_uber", 0x00000001);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_5C[0x00000003], fVar0);
								}
								if (unk_0xDF1306B443CD3D15(iParam0->f_5C[0x00000004], 0x00000000))
								{
									unk_0x4D3C3C0B0DE2663E(iParam0->f_5C[0x00000004], 0x00000068, "FM_Intro_uber", 0x00000001);
									unk_0xF12C1D85AFEE8FAD(iParam0->f_5C[0x00000004], fVar0);
								}
								unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
								unk_0x82E51BCA72537B6C(0x00000320);
								iParam0->f_6 = 0x0000000E;
							}
						}
					}
				}
				break;
			
			case 0x0000000E:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					unk_0xF60E6F759DB05AEB(0x00000010, 0x00000000, 0x00000000);
					func_299(iParam0);
					func_298(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 0x3F800000);
					unk_0x10486C0590CF176C(iParam0->f_7, 0x00000001);
					unk_0xE03C71FA3398174A(iParam0->f_7);
					unk_0x9A8DDC7C522F5BF5(iParam0->f_7, 0x00000000);
					unk_0x8BC9595FD2792B5D("MP_INTRO_RACE_SCENE");
					unk_0x44E5AE27B5A88FC7(0x00000009, 0x0000000C, 0x00000009, 0x0000000C);
					func_296(iParam0, 0x0000000E);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000005))
				{
					func_76("FMIC_RACE1", 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(iParam0, 0x00000005);
				}
				func_306(iParam0, 0x0000000E);
				if (func_304(iParam0, 0x0000000E, 0x00000000))
				{
					func_295(iParam0, 23539f, 0x00000000);
					unk_0xF60E6F759DB05AEB(0x00000010, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000000F;
				}
				break;
			
			case 0x0000000F:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 0x3F800000);
					func_296(iParam0, 0x0000000F);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					func_284(iParam0);
				}
				else if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				func_306(iParam0, 0x0000000F);
				if (func_304(iParam0, 0x0000000F, 0x00000000))
				{
					func_295(iParam0, 28833.33f, 75f);
					unk_0xF60E6F759DB05AEB(0x00000010, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000010;
				}
				break;
			
			case 0x00000010:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_274(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_5C[0x00000004], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_296(iParam0, 0x00000010);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					func_284(iParam0);
				}
				else if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				func_306(iParam0, 0x00000010);
				if (func_304(iParam0, 0x00000010, 0x00000000))
				{
					func_295(iParam0, 29700f, 0x00000000);
					unk_0xF60E6F759DB05AEB(0x00000010, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000011;
				}
				break;
			
			case 0x00000011:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					unk_0x5E4E98C6D98C9C57(iParam0->f_9, 0.7f);
					func_296(iParam0, 0x00000011);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000006))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x00000006);
					func_76("FMIC_RACE2", 0xFFFFFFFF);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					func_284(iParam0);
				}
				else if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				func_306(iParam0, 0x00000011);
				if (func_304(iParam0, 0x00000011, 0x00000000))
				{
					func_295(iParam0, 36450f, 0x00000000);
					unk_0xF60E6F759DB05AEB(0x00000010, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000012;
				}
				break;
			
			case 0x00000012:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x00000012);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					func_284(iParam0);
				}
				else if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				func_306(iParam0, 0x00000012);
				if (func_273() && func_304(iParam0, 0x00000012, 0x00000000))
				{
					func_295(iParam0, 43650f, 0x00000000);
					unk_0xF60E6F759DB05AEB(0x00000010, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000013;
				}
				break;
			
			case 0x00000013:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					if (unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000002]))
					{
						unk_0xA954465BA6FDEFE2(&(iParam0->f_5C[0x00000002]));
					}
					if (unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000003]))
					{
						unk_0xA954465BA6FDEFE2(&(iParam0->f_5C[0x00000003]));
					}
					if (unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000004]))
					{
						unk_0xA954465BA6FDEFE2(&(iParam0->f_5C[0x00000004]));
					}
					func_298(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x00000013);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					func_284(iParam0);
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000006))
					{
						if (iParam0->f_20 != 0x00000000)
						{
							if (unk_0xBD307E66C0669BFC(iParam0->f_20))
							{
								if (!unk_0x437347B10A200C4B(iParam0->f_5B, 0x00000000))
								{
									unk_0xF2BFB495D7D174E8(iParam0->f_5B, iParam0->f_20, unk_0x12AB0310C2281427("GtaMloRoom001"));
								}
								unk_0x837C600ECEE8ABA2("SE_MP_GARAGE_L_RADIO", 0x00000000);
								iVar2 = 0x00000000;
								while (iVar2 < 0x00000008)
								{
									if (!unk_0x437347B10A200C4B(iParam0->f_31[iVar2], 0x00000000))
									{
										unk_0xF2BFB495D7D174E8(iParam0->f_31[iVar2], iParam0->f_20, unk_0x12AB0310C2281427("GtaMloRoom001"));
									}
									iVar2++;
								}
								unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000006);
							}
						}
					}
					if (func_283(iParam0) && func_277(iParam0))
					{
						func_275(iParam0);
					}
				}
				func_272(iParam0);
				func_271(iParam0);
				func_306(iParam0, 0x00000013);
				if (func_304(iParam0, 0x00000013, 0x00000000) && unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000C))
					{
						unk_0x0674E58A79778E99(iParam0, 0x0000000C);
					}
					iParam0->f_6 = 0x00000016;
				}
				else if (func_304(iParam0, 0x00000013, 0xFFFFEC98))
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000C))
					{
						unk_0xA37A90C62806D848(0x00000001);
						unk_0x5D96D8530B3D0904(iParam0, 0x0000000C);
					}
				}
				else if (func_304(iParam0, 0x00000013, 0xFFFFEA0E))
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
					{
						unk_0x82A772610883F395("MP_intro_logo", 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(iParam0, 0x0000001E);
					}
				}
				break;
			
			case 0x00000016:
				func_272(iParam0);
				func_271(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
				{
					if (!unk_0x9F4FE516EAACCFC5(iParam0->f_7))
					{
						iParam0->f_7 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
					}
					unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, 0x00000001);
					unk_0x86F44313DFA8F00C(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
					unk_0x86F44313DFA8F00C(iParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 0x00001770, 0x00000000, 0x00000000, 0x00000002);
					unk_0x91F5B0244AAE6222(iParam0->f_7, "HAND_SHAKE", 0.1f);
					unk_0xCFFF6D0D867C649B(iParam0->f_20, unk_0x12AB0310C2281427("GtaMloRoom001"));
					unk_0x837C600ECEE8ABA2("SE_MP_GARAGE_L_RADIO", 0x00000000);
					unk_0xF99F2927BEBB5EE7(0x00000000);
					unk_0x57E0CF9BF653D99A(iParam0->f_A, 0f);
					if (!unk_0xEB6A8945D1AC98A1(iParam0->f_5B))
					{
						unk_0xF895E10BF4C72645(iParam0->f_5B, 0x00000000, 0x00000000);
					}
					if (unk_0x562F77A7F33D2E46("MP_INTRO_RACE_SCENE"))
					{
						unk_0x8910D3D58E0132B8("MP_INTRO_RACE_SCENE");
					}
					unk_0x44E5AE27B5A88FC7(0x00000009, 0x0000000D, 0x00000009, 0x0000000D);
					func_270(iParam0);
					func_269();
					func_76("FMIC_GAR", 0xFFFFFFFF);
					iParam0->f_6 = 0x00000017;
				}
				break;
			
			case 0x00000017:
				func_272(iParam0);
				func_271(iParam0);
				func_306(iParam0, 0x00000017);
				if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				if (func_304(iParam0, 0x00000017, 0x00000000))
				{
					unk_0x86F44313DFA8F00C(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
					unk_0x86F44313DFA8F00C(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 0x00000DAC, 0x00000000, 0x00000000, 0x00000002);
					unk_0x57E0CF9BF653D99A(iParam0->f_A, 0f);
					if (!unk_0xEB6A8945D1AC98A1(iParam0->f_5B))
					{
						unk_0xF895E10BF4C72645(iParam0->f_5B, 0x00000000, 0x00000000);
					}
					func_267(iParam0, 0x00000000);
					func_267(iParam0, 0x00000001);
					func_267(iParam0, 0x00000005);
					func_267(iParam0, 0x00000006);
					iParam0->f_6 = 0x00000018;
				}
				break;
			
			case 0x00000018:
				func_272(iParam0);
				func_271(iParam0);
				func_306(iParam0, 0x00000018);
				if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				if (func_304(iParam0, 0x00000018, 0x00000000))
				{
					iParam0->f_6 = 0x0000001B;
				}
				break;
			
			case 0x0000001B:
				func_272(iParam0);
				func_271(iParam0);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1148.286f, -1639.737f, 5.106698f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0x5D96D8530B3D0904(iParam0, 0x0000000D);
				unk_0x86F44313DFA8F00C(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0x000005DC, 0x00000003, 0x00000003, 0x00000002);
				unk_0xF60E6F759DB05AEB(0x00000012, 0x00000000, 0x00000000);
				func_267(iParam0, 0x00000002);
				func_267(iParam0, 0x00000007);
				unk_0x71199B01895C6202(func_266());
				if (unk_0xC844350D5D58C99A(iParam0->f_5B))
				{
					unk_0xEBA53F35D0085654(&(iParam0->f_5B));
				}
				unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
				iParam0->f_6 = 0x0000001C;
				break;
			
			case 0x0000001C:
				func_272(iParam0);
				func_271(iParam0);
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000008))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x00000008);
				}
				if (func_283(iParam0) && func_277(iParam0))
				{
					func_275(iParam0);
				}
				func_306(iParam0, 0x0000001C);
				if ((unk_0x13896FDECC859926("FM_INTRO_DRIVE_START") && unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000003)) && func_304(iParam0, 0x0000001C, 0x00000000))
				{
					iParam0->f_6 = 0x0000001D;
				}
				break;
			
			case 0x0000001D:
				if (iParam0->f_127)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (func_263(iParam0))
						{
							unk_0x29E8331978B73E7F(0x00000000, "MP_Male_Character", 0x00000003, joaat("mp_m_freemode_01"), 0x00000000);
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_Female_Character", 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_Male_Character", 0x00000000, 0x00000000, 0x00000000);
							unk_0x29E8331978B73E7F(0x00000000, "MP_Female_Character", 0x00000003, joaat("mp_f_freemode_01"), 0x00000000);
						}
					}
				}
				else if (func_263(iParam0))
				{
					unk_0x29E8331978B73E7F(0x00000000, "MP_Male_Character", 0x00000003, joaat("mp_m_freemode_01"), 0x00000000);
				}
				else
				{
					unk_0x29E8331978B73E7F(0x00000000, "MP_Female_Character", 0x00000003, joaat("mp_f_freemode_01"), 0x00000000);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
				{
					unk_0x29E8331978B73E7F(iParam0->f_23, "LAMAR", 0x00000000, 0x00000000, 0x00000000);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
				{
					unk_0x29E8331978B73E7F(iParam0->f_22, "MP_Lamar_Car", 0x00000000, 0x00000000, 0x00000000);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_21, 0x00000000))
				{
					unk_0x4A4806F9D471E491(iParam0->f_21, 0x00000001, 0x00000000);
					unk_0x29E8331978B73E7F(iParam0->f_21, "MP_Plane", 0x00000000, 0x00000000, 0x00000000);
				}
				func_261(iParam0);
				unk_0xCD7E6F59323AEBCB("CONTRAILS", 0x00000000);
				unk_0x44E5AE27B5A88FC7(0x00000009, 0x00000009, 0x00000009, 0x00000009);
				func_76("FMIC_TENN", 0xFFFFFFFF);
				unk_0x4C902758BEA97C68(0x00000004);
				func_253(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iParam0->f_6 = 0x0000001E;
				break;
			
			case 0x0000001E:
				if (unk_0x22A8E52414415B76())
				{
					if (iParam0->f_20 != 0x00000000)
					{
						unk_0x25BB71BA267FE042(iParam0->f_20);
					}
					func_252(iParam0);
					if (iParam0->f_125)
					{
						iParam0->f_1A = (unk_0x1C0640BA9A7327B3() - iParam0->f_D);
					}
					else
					{
						iParam0->f_1A = 0x0000CD8A;
						iParam0->f_1B = 0x0000CD8A;
					}
					iParam0->f_6 = 0x0000001F;
				}
				break;
			
			case 0x0000001F:
				if (iParam0->f_127)
				{
					if (func_263(iParam0))
					{
						if (unk_0x3148AE92ED70DC30("MP_Female_Character", 0x00000000))
						{
							if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
									}
								}
							}
						}
					}
					else if (unk_0x3148AE92ED70DC30("MP_Male_Character", 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
								}
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("LAMAR", 0x00000000))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_23))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_23, 0x00000000))
							{
								unk_0x5B1D360B9C6F0A09(iParam0->f_23, iParam0->f_22, 0x00004E20, 0xFFFFFFFF, 1f, 0x00100010, 0x00000000);
								unk_0xF895E10BF4C72645(iParam0->f_23, 0x00000000, 0x00000000);
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("MP_Lamar_Car", 0x00000000))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
					{
						unk_0x56FDC9ADE35F7DB0(iParam0->f_22, 0x00000001, 0x00000001, 0x00000000);
						unk_0xA47B46945FF6DE74(iParam0->f_22, -1028.406f, -2732.782f, 19.5931f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(iParam0->f_22, -106.11f);
						func_251(iParam0, 3099.997f);
						unk_0x05CA0E7946B27A19(iParam0->f_22, 0x00000001);
					}
				}
				if (unk_0xEABED1927EFB48CA(0x00000000))
				{
					unk_0xF60E6F759DB05AEB(0x00000015, 0x00000000, 0x00000000);
					func_296(iParam0, 0x00000021);
					func_298(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001D))
				{
					if (unk_0xDED29B1D7D52D5A3() || unk_0x8F677B1F58B4741C() > 0x00000CB6)
					{
						unk_0x0674E58A79778E99(iParam0, 0x0000001D);
					}
				}
				if ((func_250(iParam0) && func_249(iParam0)) && !unk_0x22A8E52414415B76())
				{
					if (iParam0->f_125)
					{
						iParam0->f_1C = (unk_0x1C0640BA9A7327B3() - iParam0->f_D);
					}
					else
					{
						iParam0->f_1D = 0x00020E80;
						if (func_263(iParam0))
						{
							iParam0->f_1C = 0x00020E80;
						}
						else
						{
							iParam0->f_1C = 0x00020E80;
						}
					}
					unk_0xDC355804A9511111();
					unk_0x386090053886DF05();
					if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000007))
					{
						unk_0xC92DB9682A650680("FM_INTRO_DRIVE_START");
						unk_0x5D96D8530B3D0904(iParam0, 0x00000015);
					}
					if (!unk_0x154B5473FBFD0156())
					{
						unk_0x55BE34EDDEA0AC9E(0x00000000);
					}
					if (!unk_0xEAE0D21A50E6C7F4(*iParam1, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(iParam1, 0x00000001);
					}
					func_248(iParam0);
					func_247(iParam0);
					func_253(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					unk_0x0674E58A79778E99(iParam0, 0x0000000D);
					iParam0->f_6 = 0x00000021;
				}
				else
				{
					if (iParam0->f_125)
					{
						iParam0->f_D = (unk_0x1C0640BA9A7327B3() - (iParam0->f_1A + unk_0x8F677B1F58B4741C()));
					}
					if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000016))
					{
						if (unk_0x90AE01DE9DD05E85() == 0x00000001)
						{
							unk_0xF60E6F759DB05AEB(0x00000013, 0x0000003B, 0x00000000);
							unk_0x5D96D8530B3D0904(iParam0, 0x00000016);
						}
					}
					if (func_245(iParam0))
					{
						if (unk_0x90AE01DE9DD05E85() == 0x00000002)
						{
							if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000012))
							{
								unk_0x5D96D8530B3D0904(iParam0, 0x00000012);
							}
							if (unk_0x8F677B1F58B4741C() > 0x00005A6A)
							{
								if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B))
								{
									unk_0xE81656B429E5C4B5("scr_mp_plane_landing_tyre_smoke", iParam0->f_21, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x5D96D8530B3D0904(iParam0, 0x0000001B);
								}
								if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C))
								{
									unk_0xE81656B429E5C4B5("scr_mp_plane_landing_tyre_smoke", iParam0->f_21, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x5D96D8530B3D0904(iParam0, 0x0000001C);
								}
							}
							unk_0x692F7AFAFD440081(4950f);
							if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000016))
							{
								unk_0xF60E6F759DB05AEB(0x00000015, 0x00000000, 0x00000000);
								unk_0x0674E58A79778E99(iParam0, 0x00000016);
							}
							if (unk_0x8F677B1F58B4741C() > 0x00005AD6)
							{
								func_244(iParam0);
							}
						}
					}
					if (unk_0x90AE01DE9DD05E85() > 0x00000002)
					{
						func_247(iParam0);
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000016))
						{
							unk_0xF60E6F759DB05AEB(0x00000015, 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(iParam0, 0x00000016);
						}
						if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
						{
							unk_0x8F741CB9D8AB80F4(iParam0->f_22);
							unk_0x0882E3DC0C991680(iParam0->f_22, 0x00000002);
						}
					}
					iParam0->f_1F = unk_0x8F677B1F58B4741C();
				}
				break;
			
			case 0x00000021:
				if (func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000001))
					{
						if (func_304(iParam0, 0x00000021, 0xFFFFEAB6))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000001);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000002))
					{
						if (func_304(iParam0, 0x00000021, 0xFFFFEAB6))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000002);
							}
						}
					}
				}
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000001))
					{
						if (func_304(iParam0, 0x00000021, 0xFFFFEAB6))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000001);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					unk_0x8BC9595FD2792B5D("MP_INTRO_LAMAR_DRIVE_SCENE");
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000021);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000021, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000022;
				}
				break;
			
			case 0x00000022:
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000002))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000002);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_22, 0.8056f, 2.2245f, 0.5533f, 0x00000001);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_22, -0.4552f, -0.4977f, 0.5449f, 0x00000001);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33.3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, 0x00000001);
						if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000000, 0x00000000);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000001, 0x00000000);
						}
						iParam0->f_B = 0xFFFFFFFF;
						iParam0->f_B = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
						unk_0x6BE2EAE992FD7C26(iParam0->f_B, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_dside_f"));
						if (func_263(iParam0))
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.129f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.129f);
						}
						else
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, 0x00000000);
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.145f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.145f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_24, 0x00000000, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000022);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000022);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000022, 0x00000000))
				{
					func_251(iParam0, 18966.65f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000023;
				}
				break;
			
			case 0x00000023:
				if (func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000003))
					{
						if (func_304(iParam0, 0x00000022, 0x0000044C))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000003);
							}
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000004))
					{
						if (func_304(iParam0, 0x00000022, 0x0000044C))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000004);
							}
						}
					}
				}
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000003))
					{
						if (func_304(iParam0, 0x00000022, 0x000003E8))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000003);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000001, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000000, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000023);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000023);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000023, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000024;
				}
				break;
			
			case 0x00000024:
				if (func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000005))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000005);
						}
					}
				}
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000004))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000004);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000005))
					{
						if (func_304(iParam0, 0x00000024, 0xFFFFF15A))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000005);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_22, 0.8056f, 2.2245f, 0.5533f, 0x00000001);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_22, -0.4552f, -0.4977f, 0.5449f, 0x00000001);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33.3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, 0x00000001);
						if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000000, 0x00000000);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000001, 0x00000000);
						}
						iParam0->f_B = 0xFFFFFFFF;
						iParam0->f_B = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
						unk_0x6BE2EAE992FD7C26(iParam0->f_B, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_dside_f"));
						if (func_263(iParam0))
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.363f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.363f);
						}
						else
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, 0x00000000);
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.298f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.298f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_24, 0x00000000, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000024);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000024);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000024, 0x00000000))
				{
					func_251(iParam0, 42700.96f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000025;
				}
				break;
			
			case 0x00000025:
				if (func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000006))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000006);
						}
					}
				}
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000006))
					{
						if (func_304(iParam0, 0x00000024, 0x000003E8))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000006);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000001, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000000, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000025);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000025);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000025, 0x00000000))
				{
					func_251(iParam0, 51033.28f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000026;
				}
				break;
			
			case 0x00000026:
				if (func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000007))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000007);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000008))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000008);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000009))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000009);
						}
					}
				}
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000007))
					{
						if (func_304(iParam0, 0x00000025, 0x000009C4))
						{
							if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 0x00000009, 0x00000000, 0x00000000))
							{
								unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000007);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x00000026);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000026);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000026, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000027;
				}
				break;
			
			case 0x00000027:
				if (!func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000008))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000008);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x00000009))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x00000009);
						}
					}
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x0000001F))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x0000001F);
						}
					}
				}
				if (func_263(iParam0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x0000001F))
					{
						if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 0x00000009, 0x00000000, 0x00000000))
						{
							unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x0000001F);
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_22, 0.8056f, 2.2245f, 0.5533f, 0x00000001);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_22, -0.4552f, -0.4977f, 0.5449f, 0x00000001);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33.3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, 0x00000001);
						if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000000, 0x00000000);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000001, 0x00000000);
						}
						iParam0->f_B = 0xFFFFFFFF;
						iParam0->f_B = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
						unk_0x6BE2EAE992FD7C26(iParam0->f_B, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_dside_f"));
						if (func_263(iParam0))
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.811f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.811f);
						}
						else
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, 0x00000000);
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.791f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.791f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_24, 0x00000000, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000027);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000027);
				func_242(iParam0);
				if (func_304(iParam0, 0x00000027, 0x00000000))
				{
					func_251(iParam0, 85050f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000028;
				}
				break;
			
			case 0x00000028:
				if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_1, 0x0000001F))
				{
					if (func_243(&(iParam0->f_7B), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 0x00000009, 0x00000000, 0x00000000))
					{
						unk_0x5D96D8530B3D0904(&(iParam0->f_1), 0x0000001F);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					unk_0x44E5AE27B5A88FC7(0x00000009, 0x0000000C, 0x00000009, 0x0000000C);
					if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000001, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000000, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000028);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000028);
				if (func_242(iParam0) && func_304(iParam0, 0x00000028, 0x00000000))
				{
					func_251(iParam0, 116366.5f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000029;
				}
				break;
			
			case 0x00000029:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					unk_0xF60E6F759DB05AEB(0x00000000, 0x00000000, 0x00000000);
					func_298(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_296(iParam0, 0x00000029);
					unk_0x1103ADBBBB13BAC6("CONTRAILS", 0x00000000);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000029);
				if (func_304(iParam0, 0x00000029, 0x00000000))
				{
					unk_0x6B3A6ADC56C477EC(0x00000001);
					func_251(iParam0, 127166.5f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000002A;
				}
				break;
			
			case 0x0000002A:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_241(iParam0);
					func_298(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x0000002A);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x0000002A);
				if (func_304(iParam0, 0x0000002A, 0x00000000))
				{
					unk_0x6B3A6ADC56C477EC(0x00000000);
					func_251(iParam0, 170800f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000002B;
				}
				break;
			
			case 0x0000002B:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x0000002B);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x0000002B);
				if (func_304(iParam0, 0x0000002B, 0x00000000))
				{
					unk_0x44E5AE27B5A88FC7(0x00000009, 0x0000000C, 0x00000009, 0x0000000C);
					func_251(iParam0, 191799.8f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000002C;
				}
				break;
			
			case 0x0000002C:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x0000002C);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x0000002C);
				if (func_304(iParam0, 0x0000002C, 0x00000000))
				{
					func_251(iParam0, 196633.1f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000002D;
				}
				break;
			
			case 0x0000002D:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x0000002D);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x0000002D);
				if (func_304(iParam0, 0x0000002D, 0x00000000))
				{
					func_251(iParam0, 201466.5f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000002E;
				}
				break;
			
			case 0x0000002E:
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x0000002E);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x0000002E);
				if (func_304(iParam0, 0x0000002E, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x0000002F;
				}
				break;
			
			case 0x0000002F:
				func_240(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0xC5940439E4EB9A33(iParam0->f_7, iParam0->f_22, 0.8056f, 2.2245f, 0.5533f, 0x00000001);
						unk_0x1305278186D1C53E(iParam0->f_7, iParam0->f_22, -0.4552f, -0.4977f, 0.5449f, 0x00000001);
						unk_0x5818C8D5303DCCF8(iParam0->f_7, 33.3479f);
						unk_0x91F5B0244AAE6222(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						unk_0xE3BB8E05FCEB3FBE(iParam0->f_7, 0x00000001);
						if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000000, 0x00000000);
						}
						if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
						{
							unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000001, 0x00000000);
						}
						iParam0->f_B = 0xFFFFFFFF;
						iParam0->f_B = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
						unk_0x6BE2EAE992FD7C26(iParam0->f_B, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_dside_f"));
						if (func_263(iParam0))
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, unk_0xF653B9B22DA806A9(iParam0->f_22, "seat_pside_f"));
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.726f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.74f);
						}
						else
						{
							iParam0->f_C = 0xFFFFFFFF;
							iParam0->f_C = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iParam0->f_C, iParam0->f_22, 0x00000000);
							unk_0x915804B434753CBD(iParam0->f_24, iParam0->f_B, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iParam0->f_C, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x57E0CF9BF653D99A(iParam0->f_B, 0.726f);
							unk_0x57E0CF9BF653D99A(iParam0->f_C, 0.815f);
						}
						unk_0xF895E10BF4C72645(iParam0->f_24, 0x00000000, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x0000002F);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x0000002F);
				if (func_304(iParam0, 0x0000002F, 0x00000000))
				{
					func_251(iParam0, 213066.4f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000030;
				}
				break;
			
			case 0x00000030:
				func_240(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_23, 0x00000001, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(iParam0->f_24, 0x00000000))
					{
						unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000000, 0x00000000);
					}
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
					{
						unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
					func_296(iParam0, 0x00000030);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000030);
				if (func_304(iParam0, 0x00000030, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000003);
					func_239(iParam0, 10177.75f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000031;
				}
				break;
			
			case 0x00000031:
				func_240(iParam0);
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0x00000000, 0x3F800000);
					func_296(iParam0, 0x00000031);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				func_306(iParam0, 0x00000031);
				if (unk_0x13896FDECC859926("FM_INTRO_DRIVE_END") && func_304(iParam0, 0x00000031, 0x00000000))
				{
					func_237(iParam0, 4500f);
					unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
					iParam0->f_6 = 0x00000032;
				}
				break;
			
			case 0x00000032:
				func_240(iParam0);
				if (!unk_0x0F1CCD77290EE12F())
				{
					if (!unk_0x7BCE0E6DD4A1F749())
					{
						unk_0x82E51BCA72537B6C(0x000000FA);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000F))
				{
					func_298(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0x00000000, 0x3F800000);
					if (iParam0->f_124)
					{
						unk_0xF59BE6DDBCFD2F1C();
						unk_0x0674E58A79778E99(iParam0, 0x0000000B);
					}
					func_296(iParam0, 0x00000032);
					unk_0x0674E58A79778E99(iParam0, 0x0000000F);
				}
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000014))
				{
					if (func_263(iParam0))
					{
						unk_0xAE1670DD12E839C3("MP_INT_MCS_5_ALT2", 0x00000008);
					}
					else
					{
						unk_0xAE1670DD12E839C3("MP_INT_MCS_5_ALT1", 0x00000008);
					}
					if (iParam0->f_127)
					{
						if (unk_0x75EECC9B0572F772())
						{
							if (func_263(iParam0))
							{
								unk_0xCB667BE6562FEBD1("MP_Female_Character", 0x00000000, 0x00000001);
							}
							else
							{
								unk_0xCB667BE6562FEBD1("MP_1", 0x00000000, 0x00000001);
							}
						}
					}
					if (unk_0x62A1F4500E8F07E0())
					{
						unk_0x5D96D8530B3D0904(iParam0, 0x00000014);
					}
				}
				func_306(iParam0, 0x00000032);
				if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iParam0->f_22))
					{
						if (unk_0x9C66D99E63E8E24C(iParam0->f_22) < 1f)
						{
							unk_0xC55F2A0377488064(iParam0->f_22);
						}
					}
				}
				if (func_304(iParam0, 0x00000032, 0x00000000) && unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000014))
				{
					if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000015))
					{
						unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
						unk_0x0674E58A79778E99(iParam0, 0x00000015);
					}
					unk_0xC55F2A0377488064(iParam0->f_22);
					iParam0->f_6 = 0x00000033;
				}
				break;
			
			case 0x00000033:
				if (iParam0->f_127)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (func_263(iParam0))
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_Female_Character", 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MP_1", 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_23, 0x00000000))
				{
					unk_0x29E8331978B73E7F(iParam0->f_23, "LAMAR", 0x00000000, 0x00000000, 0x00000000);
				}
				if (!unk_0x437347B10A200C4B(iParam0->f_22, 0x00000000))
				{
					unk_0x29E8331978B73E7F(iParam0->f_22, "MP_Lamar_Car", 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(iParam0, 0x0000000D);
				if (unk_0x562F77A7F33D2E46("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					unk_0x8910D3D58E0132B8("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				unk_0x4C902758BEA97C68(0x00000004);
				func_253(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				iParam0->f_6 = 0x00000034;
				break;
			
			case 0x00000034:
				if (unk_0x22A8E52414415B76())
				{
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					if (iParam0->f_125)
					{
						iParam0->f_1E = (unk_0x1C0640BA9A7327B3() - iParam0->f_D);
					}
					else
					{
						iParam0->f_1E = func_236(iParam0);
					}
					iParam0->f_E = 0x00000000;
					iParam0->f_6 = 0x00000035;
				}
				break;
			
			case 0x00000035:
				if (iParam0->f_127)
				{
					if (func_263(iParam0))
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000017))
						{
							if (unk_0x3148AE92ED70DC30("MP_Female_Character", 0x00000000))
							{
								if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
								{
									unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
									vVar1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xE7D606C557C86100(vVar1.x, vVar1.y));
									unk_0x2FB9A57162E54BAB(0f);
									unk_0xEF6276132B396452(0f, 0x3F800000);
									unk_0x5D96D8530B3D0904(iParam0, 0x00000017);
								}
							}
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000017))
					{
						if (unk_0x3148AE92ED70DC30("MP_1", 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								vVar1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), unk_0xE7D606C557C86100(vVar1.x, vVar1.y));
								unk_0x2FB9A57162E54BAB(0f);
								unk_0xEF6276132B396452(0f, 0x3F800000);
								unk_0x5D96D8530B3D0904(iParam0, 0x00000017);
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("LAMAR", 0x00000000))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_23))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_23, 0x00000000))
							{
								unk_0x5B1D360B9C6F0A09(iParam0->f_23, iParam0->f_22, 0x00004E20, 0xFFFFFFFF, 1f, 0x00100010, 0x00000000);
							}
						}
					}
				}
				if (unk_0x3148AE92ED70DC30("MP_Lamar_Car", 0x00000000))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
					{
						unk_0xB9FD7450C0DAB575(iParam0->f_22, 0x40A00000);
					}
				}
				if (unk_0xEABED1927EFB48CA(0x00000000))
				{
					func_235(0x00000001);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
				}
				if (!func_234(unk_0xD803B885F5E47A62()))
				{
					func_233(0x00000001);
				}
				if (unk_0x22A8E52414415B76())
				{
					if (iParam0->f_125)
					{
						iParam0->f_D = (unk_0x1C0640BA9A7327B3() - (iParam0->f_1E + unk_0x8F677B1F58B4741C()));
					}
					switch (iParam0->f_E)
					{
						case 0x00000000:
							func_232(iParam0, 0x00000000);
							break;
						
						case 0x0000000A:
							func_232(iParam0, 0x00000001);
							break;
						
						case 0x00000014:
							func_232(iParam0, 0x00000002);
							break;
						
						case 0x0000001E:
							func_232(iParam0, 0x00000003);
							break;
						
						case 0x00000028:
							func_232(iParam0, 0x00000004);
							break;
						
						case 0x00000032:
							func_232(iParam0, 0x00000005);
							break;
						
						case 0x0000003C:
							func_232(iParam0, 0x00000006);
							break;
						
						case 0x00000046:
							func_232(iParam0, 0x00000007);
							break;
						
						case 0x00000050:
							func_232(iParam0, 0x00000008);
							break;
						
						case 0x0000005A:
							func_232(iParam0, 0x00000009);
							break;
						
						case 0x00000064:
							if (unk_0xC844350D5D58C99A(iParam0->f_24))
							{
								unk_0xEBA53F35D0085654(&(iParam0->f_24));
							}
							break;
					}
					iParam0->f_E++;
				}
				else
				{
					unk_0xDC355804A9511111();
					unk_0x386090053886DF05();
					if (!unk_0x154B5473FBFD0156())
					{
						unk_0x55BE34EDDEA0AC9E(0x00000000);
					}
					func_253(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
					unk_0x0674E58A79778E99(iParam0, 0x0000000D);
					iParam0->f_6 = 0x00000039;
				}
				break;
			
			case 0x00000037:
				if (unk_0x22A8E52414415B76())
				{
					unk_0x152C90FB9FE48DAC();
				}
				else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000011))
				{
					if (unk_0x757EF87A33649210())
					{
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(iParam0, 0x0000000D);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -195.2f, 307.1825f, 95.9455f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
						if (iParam0->f_124)
						{
							unk_0xF59BE6DDBCFD2F1C();
							unk_0x0674E58A79778E99(iParam0, 0x0000000B);
						}
						func_197(&(iParam0->f_11));
						func_22(&(iParam0->f_11), 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(iParam0, 0x00000011);
					}
					else if (!unk_0xD0BB2359EC70FC37())
					{
						unk_0x53491B90E4FD0E56(0x000000FA);
					}
				}
				else if (func_198(&(iParam0->f_11), 0x00002710, 0x00000000))
				{
					if (func_231(iParam0))
					{
						func_299(iParam0);
						func_247(iParam0);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 61.3164f);
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_23))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_23, 0x00000000))
							{
								if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
								{
									unk_0x5B1D360B9C6F0A09(iParam0->f_23, iParam0->f_22, 0x00004E20, 0xFFFFFFFF, 1f, 0x00100010, 0x00000000);
								}
							}
						}
						func_235(0x00000001);
						if (!func_234(unk_0xD803B885F5E47A62()))
						{
							func_233(0x00000001);
						}
						func_253(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF60E6F759DB05AEB(0x00000000, 0x00000000, 0x00000000);
						if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000015))
						{
							unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
							unk_0x0674E58A79778E99(iParam0, 0x00000015);
						}
						unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
						unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
						iParam0->f_6 = 0x00000039;
					}
				}
				break;
			
			case 0x00000038:
				if (unk_0x22A8E52414415B76())
				{
					unk_0x152C90FB9FE48DAC();
				}
				else if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000011))
				{
					if (unk_0x757EF87A33649210())
					{
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(iParam0, 0x0000000D);
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -195.2f, 307.1825f, 95.9455f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
						if (iParam0->f_124)
						{
							unk_0xF59BE6DDBCFD2F1C();
							unk_0x0674E58A79778E99(iParam0, 0x0000000B);
						}
						func_197(&(iParam0->f_11));
						func_22(&(iParam0->f_11), 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(iParam0, 0x00000011);
					}
					else if (!unk_0xD0BB2359EC70FC37())
					{
						unk_0x53491B90E4FD0E56(0x000000FA);
					}
				}
				else if (func_198(&(iParam0->f_11), 0x00002710, 0x00000000))
				{
					if (func_283(iParam0))
					{
						func_299(iParam0);
						func_247(iParam0);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x20641932E5104B25(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
								unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -200.8225f, 302.9014f, 95.9455f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 61.3164f);
								if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
								{
									unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), iParam0->f_22, 0x00004E20, 0x00000000, 1f, 0x00100010, 0x00000000);
								}
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(iParam0->f_23))
						{
							if (!unk_0x405E212DDE472467(iParam0->f_23, 0x00000000))
							{
								if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
								{
									unk_0x5B1D360B9C6F0A09(iParam0->f_23, iParam0->f_22, 0x00004E20, 0xFFFFFFFF, 1f, 0x00100010, 0x00000000);
								}
							}
						}
						if (!func_234(unk_0xD803B885F5E47A62()))
						{
						}
						func_253(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000015))
						{
							unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
							unk_0x0674E58A79778E99(iParam0, 0x00000015);
						}
						unk_0x82E51BCA72537B6C(0x000000FA);
						unk_0xF60E6F759DB05AEB(0x00000000, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000003);
						iParam0->f_D = (unk_0x1C0640BA9A7327B3() - func_228(iParam0, 0x00000030, 0x00000000));
						iParam0->f_125 = 0x00000001;
						func_239(iParam0, 10177.75f);
						unk_0x5D96D8530B3D0904(iParam0, 0x0000000F);
						iParam0->f_6 = 0x00000031;
					}
				}
				break;
			
			case 0x00000039:
				func_306(iParam0, 0x00000039);
				bVar4 = !iParam0->f_120;
				func_216(iParam0, bVar4, 0x00000000);
				if (iParam0->f_124)
				{
					unk_0xF59BE6DDBCFD2F1C();
					unk_0x0674E58A79778E99(iParam0, 0x0000000B);
				}
				if (!unk_0xEB6A8945D1AC98A1(iParam0->f_23))
				{
					unk_0x93D47DFD0AE94949(iParam0->f_23, 0xFFFFFFFF);
					unk_0xFADC0A217229F6B5(iParam0->f_23, 0x00000001);
				}
				unk_0x7F2C3F971FA7A9EA(0x00000001);
				if (!iParam0->f_120)
				{
					func_32(0x00000073, 0x00000001, 0xFFFFFFFF, 0x00000001);
					return 0x00000001;
				}
				break;
			
			case 0x0000003A:
				break;
			
			case 0x00000036:
				break;
			
			case 0x0000003B:
				return 0x00000001;
				break;
		}
		func_215(iParam0);
		if (!iParam0->f_123)
		{
			if (iParam0->f_125)
			{
				iParam0->f_121 = SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iParam0->f_D));
			}
			else
			{
				iParam0->f_121 = SYSTEM::TO_FLOAT(func_236(iParam0));
			}
			iParam0->f_122 = func_214(iParam0);
		}
		iParam0->f_123 = 0x00000000;
		if (iParam0->f_124 && unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000B))
		{
			if (iParam0->f_125)
			{
				unk_0x0AEDBE1D61D150AF(iParam0->f_121);
			}
			else
			{
				unk_0x0AEDBE1D61D150AF(iParam0->f_122);
			}
		}
		func_211(iParam0);
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000C))
		{
			if (func_273())
			{
				func_210();
			}
		}
		if (iParam0->f_6 > 0x00000000 && iParam0->f_6 <= 0x00000039)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x0000003C);
				}
			}
			func_208(iParam0);
			unk_0x857E3CE01DEA2D26();
			unk_0x3584F71E5CA29322(0x00000009);
			unk_0x3584F71E5CA29322(0x00000007);
			unk_0x3584F71E5CA29322(0x00000012);
			unk_0x3584F71E5CA29322(0x00000006);
			unk_0x3584F71E5CA29322(0x00000003);
			unk_0x3584F71E5CA29322(0x0000000D);
			unk_0x3584F71E5CA29322(0x00000004);
		}
		if (Global_26B66F.f_73D)
		{
			unk_0xEAB026E686C0D991(0x00000002, 0x000000BB, 0x00000001);
		}
	}
	return 0x00000000;
}

void func_208(int iParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000009))
	{
		if (iParam0->f_6 > 0x00000000)
		{
			if (!unk_0x09BE1E6DF7B80B43())
			{
				if (!unk_0xF35E2CBC969C0B53())
				{
					iVar0 = unk_0xD803B885F5E47A62() + 32;
					unk_0x804733198F0CB21A(0x00000001, iVar0);
					func_209(0x00000001);
					unk_0x5D96D8530B3D0904(iParam0, 0x00000009);
				}
			}
			else
			{
				func_209(0x00000001);
				unk_0x5D96D8530B3D0904(iParam0, 0x00000009);
			}
		}
	}
}

void func_209(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000012))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000012);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000012))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000012);
	}
}

void func_210()
{
	unk_0x6567AE843FADBA94(Global_141365, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (Global_141367 == 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(Global_141365, "SET_BIG_LOGO_VISIBLE");
		unk_0x3CAEA85DA607305E(0x00000001);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
		Global_141367 = 0x00000001;
	}
}

void func_211(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0->f_3A[iParam0->f_5A]))
	{
		if (unk_0x437347B10A200C4B(iParam0->f_3A[iParam0->f_5A], 0x00000000))
		{
		}
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0->f_3A[iParam0->f_5A], 0x00000001) };
		if (vVar0.z < -50f)
		{
			func_212(iParam0, iParam0->f_5A);
		}
	}
	iParam0->f_5A++;
	if (iParam0->f_5A >= 0x0000000F)
	{
		iParam0->f_5A = 0x00000000;
	}
}

void func_212(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_3A[iParam1]))
	{
		if (unk_0x437347B10A200C4B(uParam0->f_3A[iParam1], 0x00000000))
		{
		}
		func_213(iParam1, &vVar0, &fVar1);
		unk_0xA47B46945FF6DE74(uParam0->f_3A[iParam1], vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(uParam0->f_3A[iParam1], fVar1);
		unk_0x1E9649458B15960F(uParam0->f_3A[iParam1], 0x00000001);
		unk_0x51B954DAB1BCAF73(uParam0->f_3A[iParam1]);
		unk_0x20641932E5104B25(uParam0->f_3A[iParam1], 0x00000000, 0x00000000);
		unk_0x4A4806F9D471E491(uParam0->f_3A[iParam1], 0x00000000, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_4A[iParam1]))
	{
		if (unk_0x437347B10A200C4B(uParam0->f_4A[iParam1], 0x00000000))
		{
		}
		unk_0x4A4806F9D471E491(uParam0->f_4A[iParam1], 0x00000000, 0x00000000);
	}
}

void func_213(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 0x00000001:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 0x00000002:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 0x00000003:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 0x00000004:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 0x00000005:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 0x00000006:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 0x00000007:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 0x00000008:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 0x00000009:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 0x0000000B:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_214(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (iParam0->f_6 >= 0x0000001F && iParam0->f_6 < 0x00000021)
	{
		if (func_263(iParam0))
		{
			fVar0 = SYSTEM::TO_FLOAT((iParam0->f_1B + unk_0x8F677B1F58B4741C()));
			if (unk_0x90AE01DE9DD05E85() > 0x00000002)
			{
				fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(0x0000CD99));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = SYSTEM::TO_FLOAT((iParam0->f_1B + unk_0x8F677B1F58B4741C()));
		}
		return fVar0;
	}
	return iParam0->f_121;
}

void func_215(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001D))
	{
		unk_0x50BF1402EC7719E3(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 0x000000E2, 0x00000082, 0x0000004E, 3.999999f, 6.6f, 1f, 30f, 1f);
		unk_0x50BF1402EC7719E3(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 0x000000E2, 0x00000082, 0x0000004E, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_216(int iParam0, bool bParam1, bool bParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000000))
	{
		if (unk_0x22A8E52414415B76())
		{
			unk_0x55BE34EDDEA0AC9E(0x00000000);
		}
		unk_0x93E3BF6DC91ADAA6(0x00000000);
		if (iParam0->f_124)
		{
			unk_0xD37565245621B3E1(0x00000000);
			unk_0xF59BE6DDBCFD2F1C();
			unk_0x0674E58A79778E99(iParam0, 0x0000000B);
		}
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000000E))
		{
			unk_0x066C43E677C08D5C();
			unk_0x0674E58A79778E99(iParam0, 0x0000000E);
		}
		func_227();
		func_248(iParam0);
		func_299(iParam0);
		func_247(iParam0);
		func_269();
		func_252(iParam0);
		func_270(iParam0);
		func_226(iParam0);
		func_241(iParam0);
		unk_0xB547E3FFEB27073E();
		if (bParam2)
		{
			if (unk_0xC844350D5D58C99A(iParam0->f_22))
			{
				unk_0x046C362CF15F1935(&(iParam0->f_22));
			}
			if (unk_0xC844350D5D58C99A(iParam0->f_23))
			{
				unk_0x6DAD7906B73F064D(&(iParam0->f_23));
			}
		}
		if (unk_0xC844350D5D58C99A(iParam0->f_24))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_24));
		}
		if (!iParam0->f_120)
		{
			func_407(0x00000000);
		}
		func_224();
		func_217();
		func_253(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5413873D3F67BF93(0x00000000, 0xFFFFFFFF);
		unk_0xBEF52C1D400C0A44(0x00000001);
		if (unk_0x8CD06866876216F2())
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0xF601BB024C8F11A7(0x00000000, 0x00000001);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000015))
		{
			unk_0xC92DB9682A650680("FM_INTRO_DRIVE_END");
			unk_0x0674E58A79778E99(iParam0, 0x00000015);
		}
		unk_0x448D99BAB1554268(0x00000000);
		func_361(0x00000001);
		if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001A))
		{
			func_353(0x00000001, 0x00000000);
			unk_0x0674E58A79778E99(iParam0, 0x0000001A);
		}
		Global_2537E2.f_EA3 = 0x00000000;
		if (!unk_0x991B1F0980C62628())
		{
			unk_0x999D67A3A75B2B0A(0x00000000);
		}
		unk_0x98AB0CC3E937A146(0x00000001);
		if (bParam1)
		{
		}
		func_194(0x00000000);
		func_206(0x00000001);
		Global_26B66F.f_73D = 0x00000000;
		Global_26B66F.f_73C = 0x00000000;
		if (unk_0x562F77A7F33D2E46("MP_INTRO_RACE_SCENE"))
		{
			unk_0x8910D3D58E0132B8("MP_INTRO_RACE_SCENE");
		}
		if (unk_0x562F77A7F33D2E46("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			unk_0x8910D3D58E0132B8("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_320(0x0000000E, 0x00000001);
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x1103ADBBBB13BAC6("CONTRAILS", 0x00000000);
		unk_0xDB8844D4B7C60440(0x00000005, "FMINTRO");
		unk_0xDB8844D4B7C60440(0x00000006, "FMINTRO");
		unk_0xDB8844D4B7C60440(0x00000007, "FMINTRO");
		unk_0x8D17794CE3273D70("mp_intro_seq@");
		unk_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_radio");
		unk_0x8D17794CE3273D70("mp_intro_seq@ig_1_lamar_drive_male");
		if (unk_0xE4EDC4B0E92C078B(unk_0x023428EEA3027652()))
		{
			unk_0x516E63E474722206(unk_0x023428EEA3027652(), 0.7f);
		}
		unk_0xF91D0B1DCE756AFB(0x00000000);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 0x3F800000);
		if (unk_0x8CD06866876216F2())
		{
			unk_0xDA46A23FFDBCF876();
			unk_0x7F2C3F971FA7A9EA(0x00000001);
		}
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
		if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(0x00000320);
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x00000000);
	}
}

void func_217()
{
	func_218(0x00000000);
}

void func_218(bool bParam0)
{
	if (bParam0)
	{
		func_223();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_82(0x00000000))
		{
			func_219(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_219(int iParam0)
{
	if (func_222())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_221())
		{
			func_220(0x00000001, 0x00000001);
		}
		else
		{
			func_220(0x00000000, 0x00000000);
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
	if (!func_166())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_220(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0x00000000))
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

bool func_221()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_222()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_223()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_224()
{
	if (!Global_14073F)
	{
		return;
	}
	func_225();
}

void func_225()
{
	Global_14073F = 0x00000000;
	StringCopy(&(Global_14073F.f_1), "", 32);
	Global_14073F.f_9 = 0x00000000;
}

void func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_232(iParam0, iVar0);
		iVar0++;
	}
}

void func_227()
{
	unk_0x842F1AEB2FCC00B7(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0x00000001);
	unk_0x842F1AEB2FCC00B7(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0x00000001);
}

int func_228(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 0x0000001F)
	{
		iVar1 = 0x00000000;
		iVar2 = 0x00000006;
		iVar3 = 0x0000001C;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = iParam0->f_1D;
		}
		else
		{
			iVar1 = iParam0->f_1C;
		}
		iVar2 = 0x00000021;
		iVar3 = 0x00000039;
	}
	iVar0 = 0x00000000;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_230(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_229(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000006:
			return 0x00001477;
			break;
		
		case 0x00000008:
			return 0x000014C2;
			break;
		
		case 0x0000000A:
			return 0x0000149A;
			break;
		
		case 0x0000000E:
			return 0x00001E93;
			break;
		
		case 0x0000000F:
			return 0x00000A65;
			break;
		
		case 0x00000010:
			return 0x00000A6D;
			break;
		
		case 0x00000011:
			return 0x000009BB;
			break;
		
		case 0x00000012:
			return 0x00000D7D;
			break;
		
		case 0x00000013:
			return 0x00002BED;
			break;
		
		case 0x00000017:
			return 0x000009FD;
			break;
		
		case 0x00000018:
			return 0x0000080B;
			break;
		
		case 0x0000001C:
			return 0x000006D2;
			break;
		
		case 0x00000021:
			return 0x00001838;
			break;
		
		case 0x00000022:
			return 0x000008FC;
			break;
		
		case 0x00000023:
			return 0x00000F5D;
			break;
		
		case 0x00000024:
			return 0x00002113;
			break;
		
		case 0x00000025:
			return 0x00000FA0;
			break;
		
		case 0x00000026:
			return 0x00001DB0;
			break;
		
		case 0x00000027:
			return 0x0000125C;
			break;
		
		case 0x00000028:
			return 0x0000152D;
			break;
		
		case 0x00000029:
			return 0x00001187;
			break;
		
		case 0x0000002A:
			return 0x000011E2;
			break;
		
		case 0x0000002B:
			return 0x00001238;
			break;
		
		case 0x0000002C:
			return 0x000008C7;
			break;
		
		case 0x0000002D:
			return 0x00000920;
			break;
		
		case 0x0000002E:
			return 0x00000DC1;
			break;
		
		case 0x0000002F:
			return 0x000009CE;
			break;
		
		case 0x00000030:
			return 0x00000D7F;
			break;
		
		case 0x00000031:
			return 0x00002466;
			break;
		
		case 0x00000032:
			return 0x000007DE;
			break;
		
		case 0x00000039:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000006:
			return 0x00001477;
			break;
		
		case 0x00000008:
			return 0x000014C2;
			break;
		
		case 0x0000000A:
			return 0x0000149A;
			break;
		
		case 0x0000000E:
			return 0x00001E93;
			break;
		
		case 0x0000000F:
			return 0x00000A65;
			break;
		
		case 0x00000010:
			return 0x00000A6D;
			break;
		
		case 0x00000011:
			return 0x000009BB;
			break;
		
		case 0x00000012:
			return 0x00000D7D;
			break;
		
		case 0x00000013:
			return 0x00002BED;
			break;
		
		case 0x00000017:
			return 0x000009FD;
			break;
		
		case 0x00000018:
			return 0x0000080B;
			break;
		
		case 0x0000001C:
			return 0x000006D2;
			break;
		
		case 0x00000021:
			return 0x00001838;
			break;
		
		case 0x00000022:
			return 0x000008FC;
			break;
		
		case 0x00000023:
			return 0x00000F5D;
			break;
		
		case 0x00000024:
			return 0x00002113;
			break;
		
		case 0x00000025:
			return 0x00000FA0;
			break;
		
		case 0x00000026:
			return 0x00001DB0;
			break;
		
		case 0x00000027:
			return 0x0000125C;
			break;
		
		case 0x00000028:
			return 0x0000152D;
			break;
		
		case 0x00000029:
			return 0x00001187;
			break;
		
		case 0x0000002A:
			return 0x000011E2;
			break;
		
		case 0x0000002B:
			return 0x00001238;
			break;
		
		case 0x0000002C:
			return 0x000008C7;
			break;
		
		case 0x0000002D:
			return 0x00000920;
			break;
		
		case 0x0000002E:
			return 0x00000DC1;
			break;
		
		case 0x0000002F:
			return 0x000009CE;
			break;
		
		case 0x00000030:
			return 0x00000D7F;
			break;
		
		case 0x00000031:
			return 0x00002466;
			break;
		
		case 0x00000032:
			return 0x000007DE;
			break;
		
		case 0x00000039:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(iVar1);
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(iVar1))
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_22))
		{
			iParam0->f_22 = unk_0x122AAB0B1D6F55AD(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, 0x00000000, 0x00000000, 0x00000000);
			unk_0x5834B6B817326C89(iParam0->f_22, 0x00000001);
			unk_0x3E5CE368CD085FFA(iParam0->f_22, 0x00000000);
			unk_0xAA6B3A4292417750(iParam0->f_22, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
			unk_0x0882E3DC0C991680(iParam0->f_22, 0x00000002);
		}
		else if (!unk_0xC844350D5D58C99A(iParam0->f_23))
		{
			if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
			{
				iParam0->f_23 = unk_0x36F2404464202779(0x0000001A, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, 0x00000000, 0x00000000);
				unk_0x11AD11297DC58CC7(iParam0->f_23, 0x00000001);
				unk_0xE121AE1BBF90E186(iParam0->f_22, 0x00000001);
				unk_0xE121AE1BBF90E186(iParam0->f_23, 0x00000001);
				unk_0x6DF7BF67E86AAE86(iParam0->f_23, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
				unk_0xAA6B3A4292417750(iParam0->f_23, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0->f_22) || !unk_0xC844350D5D58C99A(iParam0->f_23))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_232(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_3A[iParam1]))
	{
		unk_0xA954465BA6FDEFE2(&(iParam0->f_3A[iParam1]));
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_4A[iParam1]))
	{
		unk_0xEBA53F35D0085654(&(iParam0->f_4A[iParam1]));
	}
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92), 0x00000016);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92), 0x00000016);
	}
}

bool func_234(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_92, 0x00000016);
}

void func_235(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000004);
	}
}

int func_236(int iParam0)
{
	if (iParam0->f_6 < 0x0000001F)
	{
		return unk_0x94AE52F579E2F918();
	}
	if (iParam0->f_6 < 0x00000021)
	{
		return (iParam0->f_1A + unk_0x8F677B1F58B4741C());
	}
	return (iParam0->f_1C + unk_0x94AE52F579E2F918());
}

void func_237(int iParam0, float fParam1)
{
	func_238(iParam0->f_22, 0x00000007, "FMINTRO", fParam1, 0x00000001);
}

void func_238(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (bParam4)
		{
			unk_0xC55F2A0377488064(iParam0);
			unk_0x4D3C3C0B0DE2663E(iParam0, iParam1, sParam2, 0x00000001);
		}
		else if (!unk_0x20D6474D5F4B9FC6(iParam0))
		{
			unk_0x4D3C3C0B0DE2663E(iParam0, iParam1, sParam2, 0x00000001);
			unk_0xEC0EA26748A1785E(iParam0, 0x00000001);
		}
		else
		{
			iVar0 = unk_0x1A2511CB22B86C17(iParam1, sParam2);
			if (unk_0x60755EFECF81FC68(iParam0) != iVar0)
			{
				unk_0x4D3C3C0B0DE2663E(iParam0, iParam1, sParam2, 0x00000001);
				unk_0xEC0EA26748A1785E(iParam0, 0x00000001);
			}
		}
		unk_0xF12C1D85AFEE8FAD(iParam0, (fParam3 - unk_0x9901AABAC4D4C590(iParam0)));
	}
}

void func_239(int iParam0, float fParam1)
{
	func_238(iParam0->f_22, 0x00000006, "FMINTRO", fParam1, 0x00000001);
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iParam0->f_128)
	{
		iVar0 = unk_0x12AB0310C2281427("ss1_rd1_03");
		iVar1 = iVar0;
		if (unk_0x3FC14104C3FD24D5(iVar1))
		{
			func_9(iVar1);
			iParam0->f_128 = 0x00000001;
		}
	}
}

void func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_25[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_25[iVar0]));
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(joaat("g_m_y_mexgoon_02"));
	unk_0x8D17794CE3273D70("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@base");
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000005))
	{
		return 0x00000001;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(joaat("g_m_y_mexgoon_02"));
		unk_0x3F423BF5B8125A50("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x3F423BF5B8125A50("amb@world_human_hang_out_street@male_a@base");
		if ((unk_0xB87F6CF6E5628C67(joaat("g_m_y_mexgoon_02")) && unk_0xB4AE0788C1587752("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && unk_0xB4AE0788C1587752("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				if (!unk_0xC844350D5D58C99A(iParam0->f_25[iVar0]))
				{
					iParam0->f_25[iVar0] = unk_0x36F2404464202779(0x00000004, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, 0x00000000, 0x00000000);
					unk_0xE121AE1BBF90E186(iParam0->f_25[iVar0], 0x00000001);
					unk_0x11AD11297DC58CC7(iParam0->f_25[iVar0], 0x00000001);
					switch (iVar0)
					{
						case 0x00000000:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, 0xFFFFFFFF, 0x00000401, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000001:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000004:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000005:
							unk_0xA47B46945FF6DE74(iParam0->f_25[iVar0], -82.0542f, -1199.264f, 26.592f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iParam0->f_25[iVar0], 76.8852f);
							unk_0x262EF6C6306BEA6C(iParam0->f_25[iVar0], joaat("weapon_assaultrifle"), 0x00000064, 0x00000001, 0x00000001);
							unk_0x1E9649458B15960F(iParam0->f_25[iVar0], 0x00000001);
							break;
						
						case 0x00000006:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000007:
							unk_0xA47B46945FF6DE74(iParam0->f_25[iVar0], -85.5161f, -1205.781f, 26.5847f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iParam0->f_25[iVar0], 87.5786f);
							unk_0x262EF6C6306BEA6C(iParam0->f_25[iVar0], joaat("weapon_assaultrifle"), 0x00000064, 0x00000001, 0x00000001);
							unk_0x1E9649458B15960F(iParam0->f_25[iVar0], 0x00000001);
							break;
						
						case 0x00000008:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						
						case 0x00000009:
							unk_0x3E8E48829F3C7624(iParam0->f_25[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, 0xFFFFFFFF, 0x00000001, 0f, 0x00000002, 0x00000000);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_25[iVar0]))
			{
				return 0x00000000;
			}
			iVar0++;
		}
		unk_0x71199B01895C6202(joaat("g_m_y_mexgoon_02"));
		unk_0x8D17794CE3273D70("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		unk_0x8D17794CE3273D70("amb@world_human_hang_out_street@male_a@base");
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000005);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_243(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_171(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_162(sParam2, iParam4, 0x00000000);
}

void func_244(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000019))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000001)
		{
			switch (iVar0)
			{
				case 0x00000000:
					vVar1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 0x00000001:
					vVar1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!unk_0xEB6A8945D1AC98A1(iParam0->f_62[iVar0]) && unk_0xDF1306B443CD3D15(iParam0->f_5C[iVar0], 0x00000000))
			{
				unk_0x1E9649458B15960F(iParam0->f_5C[iVar0], 0x00000000);
				unk_0x1AEF7184B203A58D(iParam0->f_5C[iVar0], 10f);
				unk_0xE9362E4D600DD12A(iParam0->f_62[iVar0], iParam0->f_5C[iVar0], vVar1, 5f, 0x00000000, unk_0x134B62B726CEC8E6(iParam0->f_5C[iVar0]), 0x00040000, 1f, 100f);
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x00000019);
	}
}

int func_245(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x0000000B))
	{
		return 0x00000001;
	}
	iVar3 = joaat("shamal");
	unk_0x523BCC9DC80CD82F(iVar3);
	unk_0x523BCC9DC80CD82F(func_246());
	if (unk_0xB87F6CF6E5628C67(iVar3))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000001)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_5C[iVar0]))
			{
				switch (iVar0)
				{
					case 0x00000000:
						vVar1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar2 = 149.9339f;
						break;
					
					case 0x00000001:
						vVar1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar2 = 239.9712f;
						break;
				}
				iParam0->f_5C[iVar0] = unk_0x122AAB0B1D6F55AD(iVar3, vVar1, fVar2, 0x00000000, 0x00000000, 0x00000000);
				unk_0xB9FD7450C0DAB575(iParam0->f_5C[iVar0], 0x40A00000);
				unk_0x1E9649458B15960F(iParam0->f_5C[iVar0], 0x00000001);
				unk_0x0882E3DC0C991680(iParam0->f_5C[iVar0], 0x00000002);
			}
			iVar0++;
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_5C[iVar0]))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	if (unk_0xB87F6CF6E5628C67(func_246()))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000001)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_62[iVar0]))
			{
				if (unk_0xC844350D5D58C99A(iParam0->f_5C[iVar0]))
				{
					if (unk_0xDF1306B443CD3D15(iParam0->f_5C[iVar0], 0x00000000))
					{
						iParam0->f_62[iVar0] = unk_0x852A19533F896693(iParam0->f_5C[iVar0], 0x00000004, func_246(), 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x11AD11297DC58CC7(iParam0->f_62[iVar0], 0x00000001);
						unk_0x56FDC9ADE35F7DB0(iParam0->f_5C[iVar0], 0x00000001, 0x00000001, 0x00000000);
					}
				}
			}
			iVar0++;
		}
	}
	unk_0x71199B01895C6202(iVar3);
	unk_0x71199B01895C6202(func_246());
	unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x0000000B);
	return 0x00000001;
}

int func_246()
{
	return unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9());
}

void func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_5C[iVar0]))
		{
			unk_0xA954465BA6FDEFE2(&(iParam0->f_5C[iVar0]));
		}
		if (unk_0xC844350D5D58C99A(iParam0->f_62[iVar0]))
		{
			unk_0xEBA53F35D0085654(&(iParam0->f_62[iVar0]));
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(joaat("shamal"));
	unk_0x71199B01895C6202(func_246());
}

void func_248(int iParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000002))
	{
		unk_0x71199B01895C6202(joaat("p_cs_mp_jet_01_s"));
		if (unk_0xC844350D5D58C99A(iParam0->f_21))
		{
			unk_0xF690C84DADBB3551(&(iParam0->f_21));
		}
		if (iParam0->f_126)
		{
			if (unk_0x83A8177D302E1A7E(iParam0->f_78))
			{
				unk_0xB2C7809F92540947(iParam0->f_78, 0x00000000);
			}
			if (unk_0x83A8177D302E1A7E(iParam0->f_79))
			{
				unk_0xB2C7809F92540947(iParam0->f_79, 0x00000000);
			}
			if (unk_0x25F7A4D42AF2AB93())
			{
				unk_0x29D7581AEF4440C2();
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000007)
		{
			if (unk_0xC844350D5D58C99A(iParam0->f_68[iVar0]))
			{
				unk_0xEBA53F35D0085654(&(iParam0->f_68[iVar0]));
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(iParam0->f_3), 0x00000002);
	}
}

int func_249(int iParam0)
{
	if (func_263(iParam0))
	{
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_female");
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_female") && unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 0x00000001;
		}
	}
	else
	{
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_male");
		unk_0x3F423BF5B8125A50("mp_intro_seq@ig_1_lamar_drive_radio");
		if (unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_male") && unk_0xB4AE0788C1587752("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x0000000A))
	{
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_24))
			{
				iParam0->f_24 = unk_0x36F2404464202779(0x0000001A, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, 0x00000000, 0x00000000);
				unk_0x11AD11297DC58CC7(iParam0->f_24, 0x00000001);
				unk_0xE121AE1BBF90E186(iParam0->f_24, 0x00000001);
				unk_0x4A4806F9D471E491(iParam0->f_24, 0x00000000, 0x00000000);
				unk_0x6DF7BF67E86AAE86(iParam0->f_24, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
				unk_0xAA6B3A4292417750(iParam0->f_24, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
				func_408(&(iParam0->f_7B), 0x00000001, iParam0->f_24, "Lamar", 0x00000000, 0x00000001);
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_24))
		{
			return 0x00000000;
		}
		unk_0x71199B01895C6202(iVar0);
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x0000000A);
	}
	return 0x00000001;
}

void func_251(int iParam0, float fParam1)
{
	func_238(iParam0->f_22, 0x00000005, "FMINTRO", fParam1, 0x00000000);
}

void func_252(int iParam0)
{
	int iVar0;
	
	unk_0x71199B01895C6202(func_266());
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_267(iParam0, iVar0);
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_5B))
	{
		unk_0xEBA53F35D0085654(&(iParam0->f_5B));
	}
}

void func_253(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_260(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_166())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_259(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_260(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_259(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_257(unk_0xD803B885F5E47A62())) && !func_255(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_254()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_257(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_254()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_255(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_256(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_29();
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

int func_257(int iParam0)
{
	if (func_255(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_258())
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

bool func_258()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_259(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_260(int iParam0)
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

void func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (!unk_0x437347B10A200C4B(iParam0->f_68[iVar0], 0x00000000))
		{
			unk_0xE7EE28867F07D06D(iParam0->f_68[iVar0]);
			unk_0x29E8331978B73E7F(iParam0->f_68[iVar0], func_262(iVar0), 0x00000000, 0x00000000, 0x00000040);
		}
		iVar0++;
	}
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MP_Plane_Passenger_1";
			break;
		
		case 0x00000001:
			return "MP_Plane_Passenger_2";
			break;
		
		case 0x00000002:
			return "MP_Plane_Passenger_3";
			break;
		
		case 0x00000003:
			return "MP_Plane_Passenger_4";
			break;
		
		case 0x00000004:
			return "MP_Plane_Passenger_5";
			break;
		
		case 0x00000005:
			return "MP_Plane_Passenger_6";
			break;
		
		case 0x00000006:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_263(int iParam0)
{
	if (iParam0->f_127)
	{
		return func_264();
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_264()
{
	return func_265(unk_0xD803B885F5E47A62());
}

int func_265(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_266()
{
	return joaat("s_m_y_xmech_02");
}

void func_267(int iParam0, int iParam1)
{
	unk_0x71199B01895C6202(func_268(iParam1));
	if (unk_0xC844350D5D58C99A(iParam0->f_31[iParam1]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_31[iParam1], 0x00000000))
		{
		}
		unk_0xF4D51642B898E52B(iParam0->f_31[iParam1]);
		unk_0xA954465BA6FDEFE2(&(iParam0->f_31[iParam1]));
	}
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return joaat("penumbra");
			break;
		
		case 0x00000001:
			return joaat("feltzer2");
			break;
		
		case 0x00000002:
			return joaat("coquette");
			break;
		
		case 0x00000003:
			return joaat("felon2");
			break;
		
		case 0x00000004:
			return joaat("sabregt");
			break;
		
		case 0x00000005:
			return joaat("dubsta");
			break;
		
		case 0x00000006:
			return joaat("tornado");
			break;
		
		case 0x00000007:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_269()
{
	Global_141367 = 0x00000000;
	if (unk_0x83D8570832F172A7(Global_141365))
	{
		unk_0x7E60C62A7CE58FC8(Global_141365, "SET_BIG_LOGO_VISIBLE");
		unk_0x3CAEA85DA607305E(0x00000001);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
		unk_0xE17FDF9E3068281B(&Global_141365);
	}
}

void func_270(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_5C[iVar1]))
		{
			uVar0 = iParam0->f_5C[iVar1];
			unk_0x2ABAFAE29D459CE5(&uVar0);
		}
		if (unk_0xC844350D5D58C99A(iParam0->f_62[iVar1]))
		{
			uVar0 = iParam0->f_62[iVar1];
			unk_0x2ABAFAE29D459CE5(&uVar0);
		}
		iVar1++;
	}
	unk_0x71199B01895C6202(joaat("cheetah"));
	unk_0x71199B01895C6202(joaat("monroe"));
	unk_0x71199B01895C6202(joaat("entityxf"));
	unk_0x71199B01895C6202(joaat("feltzer2"));
	unk_0xDB8844D4B7C60440(0x00000064, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(0x00000065, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(0x00000066, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(0x00000067, "FM_Intro_uber");
	unk_0xDB8844D4B7C60440(0x00000068, "FM_Intro_uber");
	unk_0x8D17794CE3273D70("mp_intro_seq@");
}

void func_271(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_31[0x00000002]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_31[0x00000002], 0x00000000))
		{
			unk_0x8F741CB9D8AB80F4(iParam0->f_31[0x00000002]);
		}
	}
	if (unk_0xC844350D5D58C99A(iParam0->f_31[0x00000004]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_31[0x00000004], 0x00000000))
		{
			unk_0x8F741CB9D8AB80F4(iParam0->f_31[0x00000004]);
		}
	}
}

void func_272(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_31[0x00000002]))
	{
		if (unk_0xDF1306B443CD3D15(iParam0->f_31[0x00000002], 0x00000000))
		{
			unk_0xF50D17A63556B8D4(iParam0->f_31[0x00000002], 0x00000004, 0x00000000, 1f);
		}
	}
}

int func_273()
{
	if (unk_0x0C4B4836B745568C())
	{
		return 0x00000000;
	}
	if (!unk_0x83D8570832F172A7(Global_141365))
	{
		Global_141365 = unk_0xB01F55A0FD1CFD49("GTAV_ONLINE");
		return 0x00000000;
	}
	return 0x00000001;
}

void func_274(int iParam0, char* sParam1, char* sParam2, int iParam3, vector3 vParam4, vector3 vParam5)
{
	if (unk_0xC844350D5D58C99A(iParam3))
	{
		if (unk_0x437347B10A200C4B(iParam3, 0x00000000))
		{
		}
		if (!unk_0x9F4FE516EAACCFC5(iParam0->f_8))
		{
			iParam0->f_8 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000000);
		}
		iParam0->f_9 = 0xFFFFFFFF;
		iParam0->f_9 = unk_0xE9744DB7B8CA6965(vParam4, vParam5, 0x00000002);
		unk_0x6BE2EAE992FD7C26(iParam0->f_9, iParam3, 0x00000000);
		unk_0x93E9ED66DAB9FBE3(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
		unk_0xE3BB8E05FCEB3FBE(iParam0->f_8, 0x00000001);
		unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000001, 0x00000000);
	}
}

void func_275(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000003))
	{
		unk_0xB210A5904CCBDC01("CONTRAILS");
		if (func_263(iParam0))
		{
			unk_0x8E590B419F1E5182("MP_INTRO_CONCAT", 0x00000067, 0x00000008);
		}
		else
		{
			unk_0x8E590B419F1E5182("MP_INTRO_CONCAT", 0x0000001F, 0x00000008);
		}
		if (unk_0x75EECC9B0572F772())
		{
			if (iParam0->f_127)
			{
				if (func_263(iParam0))
				{
					unk_0xCB667BE6562FEBD1("MP_Female_Character", 0x00000000, 0x00000001);
				}
				else
				{
					unk_0xCB667BE6562FEBD1("MP_Male_Character", 0x00000000, 0x00000001);
				}
			}
			func_276();
		}
		if (unk_0x62A1F4500E8F07E0())
		{
			unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000003);
		}
	}
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		unk_0xCB667BE6562FEBD1(func_262(iVar0), 0x00000000, 0x00000001);
		iVar0++;
	}
}

int func_277(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	vVar1 = { -1200f, -1490f, 142.385f };
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000002))
	{
		unk_0x523BCC9DC80CD82F(joaat("p_cs_mp_jet_01_s"));
		unk_0x523BCC9DC80CD82F(joaat("mp_m_freemode_01"));
		unk_0x523BCC9DC80CD82F(joaat("mp_f_freemode_01"));
		if (iParam0->f_126)
		{
			unk_0x9E5E60D8C63FD9D1();
		}
		if (((unk_0xB87F6CF6E5628C67(joaat("p_cs_mp_jet_01_s")) && unk_0xB87F6CF6E5628C67(joaat("mp_m_freemode_01"))) && unk_0xB87F6CF6E5628C67(joaat("mp_f_freemode_01"))) && (!iParam0->f_126 || unk_0x25F7A4D42AF2AB93()))
		{
			iParam0->f_21 = unk_0x7707E48765093646(joaat("p_cs_mp_jet_01_s"), vVar1, 0x00000000, 0x00000000, 0x00000000);
			unk_0x25BD67336EA4AECE(iParam0->f_21, 0x00000BB8);
			unk_0x120A395B0ECB8EA5(iParam0->f_21, 0x00000000);
			unk_0x4A4806F9D471E491(iParam0->f_21, 0x00000000, 0x00000000);
			if (iParam0->f_126)
			{
				iParam0->f_78 = unk_0xC1879030EB463216("scr_mp_intro_plane_exhaust", iParam0->f_21, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
				iParam0->f_79 = unk_0xC1879030EB463216("scr_mp_intro_plane_exhaust", iParam0->f_21, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (iParam0->f_127)
			{
				func_281(iParam0);
			}
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000007)
			{
				if (func_280(iParam0, iVar0))
				{
					iParam0->f_68[iVar0] = unk_0x36F2404464202779(0x0000001A, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0x00000000, 0x00000000);
				}
				else
				{
					iParam0->f_68[iVar0] = unk_0x36F2404464202779(0x0000001A, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, 0x00000000, 0x00000000);
				}
				if (func_279(iParam0, iVar0))
				{
					if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(unk_0x117658E336116132(iParam0->f_70[iVar0])), 0x00000000))
					{
					}
					unk_0x7237EE202FA06DBA(unk_0x9539D44F3E4492F6(unk_0x117658E336116132(iParam0->f_70[iVar0])), iParam0->f_68[iVar0]);
					unk_0xE7EE28867F07D06D(iParam0->f_68[iVar0]);
				}
				else
				{
					func_278(iParam0, iVar0);
				}
				iVar0++;
			}
			unk_0x71199B01895C6202(joaat("p_cs_mp_jet_01_s"));
			unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000002);
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_278(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x00000015, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x00000009, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x00000009, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x00000004, 0x00000008, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x0000000F, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x0000000A, 0x00000000, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
		
		case 0x00000001:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x0000000D, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x00000005, 0x00000004, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x0000000A, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x0000000A, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x0000000B, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x0000000D, 0x00000006, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x0000000A, 0x00000000, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
		
		case 0x00000002:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x0000000F, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x00000001, 0x00000004, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x00000001, 0x00000007, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x00000002, 0x00000009, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x00000006, 0x00000000, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
		
		case 0x00000003:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x0000000E, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x00000005, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x00000001, 0x00000006, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x0000000B, 0x00000005, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x00000003, 0x0000000C, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
		
		case 0x00000004:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x00000012, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x0000000F, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x0000000F, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x00000002, 0x00000005, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x00000004, 0x00000006, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x00000004, 0x00000000, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
		
		case 0x00000005:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x0000001B, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x00000007, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x0000000B, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x00000004, 0x00000008, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x0000000D, 0x0000000E, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x00000005, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x00000002, 0x00000007, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
		
		case 0x00000006:
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000000, 0x00000010, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000002, 0x0000000F, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000003, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000004, 0x00000005, 0x00000006, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000006, 0x00000002, 0x00000008, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000008, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(uParam0->f_68[iParam1], 0x0000000B, 0x00000003, 0x00000007, 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000000);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000001);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000002);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000003);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000004);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000005);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000006);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000007);
			unk_0x3BFC3B9ADD2EE7B7(uParam0->f_68[iParam1], 0x00000008);
			break;
	}
}

int func_279(var uParam0, int iParam1)
{
	if ((uParam0->f_127 && uParam0->f_70[iParam1] != 0xFFFFFFFF) && func_14(unk_0x117658E336116132(uParam0->f_70[iParam1]), 0x00000000, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_280(var uParam0, int iParam1)
{
	if (func_279(uParam0, iParam1))
	{
		return func_265(unk_0x117658E336116132(uParam0->f_70[iParam1]));
	}
	else if (((iParam1 == 0x00000003 || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_281(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000007)
	{
		uParam0->f_70[iVar1] = 0xFFFFFFFF;
		iVar1++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_14(iVar2, 0x00000000, 0x00000001))
		{
			if (unk_0xD803B885F5E47A62() != iVar2)
			{
				if (iVar0 < 0x00000004)
				{
					uParam0->f_70[func_282(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000005;
			break;
		
		case 0x00000001:
			return 0x00000006;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000004;
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
		
		case 0x00000005:
			return 0x00000003;
			break;
		
		case 0x00000006:
			return 0x00000002;
			break;
	}
	return 0x00000000;
}

int func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000009))
	{
		return 0x00000001;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x523BCC9DC80CD82F(iVar1);
	unk_0x36187931D29E5BBE(0x00000005, "FMINTRO");
	unk_0x36187931D29E5BBE(0x00000006, "FMINTRO");
	unk_0x36187931D29E5BBE(0x00000007, "FMINTRO");
	unk_0x3F423BF5B8125A50("mp_intro_seq@");
	if (((((unk_0xB87F6CF6E5628C67(iVar0) && unk_0xB87F6CF6E5628C67(iVar1)) && unk_0x3DDA6C6A285628E4(0x00000005, "FMINTRO")) && unk_0x3DDA6C6A285628E4(0x00000006, "FMINTRO")) && unk_0x3DDA6C6A285628E4(0x00000007, "FMINTRO")) && unk_0xB4AE0788C1587752("mp_intro_seq@"))
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_22))
		{
			unk_0x536F1BE96C726C4B(-1034.035f, -2730.485f, 19.0565f, 3f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			iParam0->f_22 = unk_0x122AAB0B1D6F55AD(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, 0x00000000, 0x00000000, 0x00000000);
			unk_0x5834B6B817326C89(iParam0->f_22, 0x00000001);
			unk_0x3E5CE368CD085FFA(iParam0->f_22, 0x00000000);
			unk_0xAA6B3A4292417750(iParam0->f_22, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
		}
		else if (!unk_0xC844350D5D58C99A(iParam0->f_23))
		{
			if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
			{
				iParam0->f_23 = unk_0x36F2404464202779(0x0000001A, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, 0x00000000, 0x00000000);
				unk_0x5B1D360B9C6F0A09(iParam0->f_23, iParam0->f_22, 0x00004E20, 0xFFFFFFFF, 1f, 0x00100010, 0x00000000);
				unk_0x11AD11297DC58CC7(iParam0->f_23, 0x00000001);
				unk_0xE121AE1BBF90E186(iParam0->f_22, 0x00000001);
				unk_0xE121AE1BBF90E186(iParam0->f_23, 0x00000001);
				unk_0x6DF7BF67E86AAE86(iParam0->f_23, unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()));
				unk_0xAA6B3A4292417750(iParam0->f_23, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0->f_22) || !unk_0xC844350D5D58C99A(iParam0->f_23))
	{
		return 0x00000000;
	}
	unk_0x71199B01895C6202(iVar0);
	unk_0x71199B01895C6202(iVar1);
	unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000009);
	return 0x00000001;
}

void func_284(int iParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000000))
	{
		func_294();
		func_292();
		if (func_286(iParam0))
		{
			if (func_285(iParam0))
			{
				if (!unk_0x9F4FE516EAACCFC5(iParam0->f_7))
				{
					iParam0->f_7 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
				}
				unk_0x86F44313DFA8F00C(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000008)
				{
					unk_0x71199B01895C6202(func_268(iVar0));
					iVar0++;
				}
				unk_0x71199B01895C6202(func_266());
				unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000000);
			}
		}
	}
}

int func_285(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266();
	if (!unk_0xC844350D5D58C99A(uParam0->f_5B))
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_31[0x00000002]))
		{
			if (unk_0x3FC14104C3FD24D5(iVar0))
			{
				if (unk_0xB87F6CF6E5628C67(iVar0))
				{
					if (unk_0xB4AE0788C1587752("MP_INTRO_SEQ@"))
					{
						if (!unk_0x437347B10A200C4B(uParam0->f_31[0x00000002], 0x00000000))
						{
							uParam0->f_A = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(uParam0->f_A, uParam0->f_31[0x00000002], 0x00000000);
							uParam0->f_5B = unk_0x36F2404464202779(0x00000004, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, 0x00000000, 0x00000000);
							unk_0x11AD11297DC58CC7(uParam0->f_5B, 0x00000001);
							unk_0x915804B434753CBD(uParam0->f_5B, uParam0->f_A, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 0x00000040, 0x00000000, 0x447A0000, 0x00000000);
							unk_0xC90224D9E95E5E3A(uParam0->f_A, 0x00000001);
							unk_0x1E9649458B15960F(uParam0->f_5B, 0x00000001);
							unk_0x20641932E5104B25(uParam0->f_5B, 0x00000000, 0x00000000);
							unk_0x650567883F5E3136(uParam0->f_5B, joaat("gadget_parachute"));
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000002, 0x00000000, 0x00000002, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000003, 0x00000000, 0x00000002, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000005, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
							unk_0x64F9F278AB9DCA2C(uParam0->f_5B, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000000);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000001);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000002);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000003);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000004);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000005);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000006);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000007);
							unk_0x3BFC3B9ADD2EE7B7(uParam0->f_5B, 0x00000008);
						}
					}
				}
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(uParam0->f_5B))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_286(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, 0x0000001F))
	{
		func_294();
		iVar3 = 0x00000000;
		while (iVar3 < 0x00000008)
		{
			func_291(iVar3, &vVar1, &fVar2);
			if (!func_290(vVar1, 0f, 0f, 0f, 0x00000000))
			{
				if (!unk_0xC844350D5D58C99A(uParam0->f_31[iVar3]))
				{
					iVar0 = func_268(iVar3);
					if (unk_0x3FC14104C3FD24D5(iVar0))
					{
						if (unk_0xB87F6CF6E5628C67(iVar0))
						{
							uParam0->f_31[iVar3] = unk_0x122AAB0B1D6F55AD(iVar0, vVar1, fVar2, 0x00000000, 0x00000000, 0x00000000);
							unk_0x120A395B0ECB8EA5(uParam0->f_31[iVar3], 0x00000001);
							unk_0xCCD53AC1B5D5E456(uParam0->f_31[iVar3], 0f);
							unk_0x316958DDB94DF3FC(uParam0->f_31[iVar3], 0x00000000);
							if (iVar3 == 0x00000002)
							{
								unk_0x611DFA9294B339CA(uParam0->f_31[iVar3], 0x00000004, 0x00000000, 0x00000001);
								unk_0xF50D17A63556B8D4(uParam0->f_31[iVar3], 0x00000004, 0x00000000, 1f);
							}
							func_289(uParam0, iVar3);
							func_288(uParam0, iVar3);
							unk_0x71199B01895C6202(iVar0);
						}
					}
				}
			}
			iVar3++;
		}
		iVar3 = 0x00000000;
		while (iVar3 < 0x00000008)
		{
			if (!unk_0xC844350D5D58C99A(uParam0->f_31[iVar3]))
			{
				return 0x00000000;
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2, iVar3))
			{
				if (func_287(uParam0, iVar3))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_2), iVar3);
				}
				else
				{
					return 0x00000000;
				}
			}
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iVar3], 0x00000000))
			{
				if (!unk_0x43ABECA7C10E1332(uParam0->f_31[iVar3]))
				{
					return 0x00000000;
				}
			}
			iVar3++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_2), 0x0000001F);
	}
	return 0x00000001;
}

int func_287(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000000, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000001, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000002, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000003, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000004, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000005, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000007, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000A, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000C, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000E, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000F, 0x00000004, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000017, 0x0000000B, 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000C, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000F, 0x00000003, 0x00000000);
					unk_0x73BEC6F1685574E6(uParam0->f_31[iParam1], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(uParam0->f_31[iParam1], 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000000, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000004, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000E, 0x00000005, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000F, 0x00000003, 0x00000000);
					unk_0x73BEC6F1685574E6(uParam0->f_31[iParam1], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(uParam0->f_31[iParam1], 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000F, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000017, 0x0000000B, 0x00000000);
					unk_0x73BEC6F1685574E6(uParam0->f_31[iParam1], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(uParam0->f_31[iParam1], 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000001, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000002, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000004, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000007, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000B, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000C, 0x00000002, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000D, 0x00000002, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000F, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000010, 0x00000004, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000017, 0x00000005, 0x00000000);
					unk_0x73BEC6F1685574E6(uParam0->f_31[iParam1], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(uParam0->f_31[iParam1], 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000000, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000001, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000002, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000003, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000004, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000006, 0x00000002, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000A, 0x00000003, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000E, 0x00000007, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000F, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000017, 0x00000005, 0x00000000);
					unk_0x73BEC6F1685574E6(uParam0->f_31[iParam1], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(uParam0->f_31[iParam1], 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		case 0x00000006:
			if (unk_0xDF1306B443CD3D15(uParam0->f_31[iParam1], 0x00000000))
			{
				if (unk_0x40B3F576B41FA183(uParam0->f_31[iParam1]) > 0x00000000)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000001, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000004, 0x00000001, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000008, 0x00000000, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x0000000E, 0x00000007, 0x00000000);
					unk_0xEE6A1776A67F70C1(uParam0->f_31[iParam1], 0x00000017, 0x00000000, 0x00000000);
					unk_0x73BEC6F1685574E6(uParam0->f_31[iParam1], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(uParam0->f_31[iParam1], 0x00000000);
					return 0x00000001;
				}
			}
			break;
		
		default:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_288(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000000, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000001, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000002, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000003, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000004, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000005, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000007, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x0000000A, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000017, 0x0000000B);
			break;
		
		case 0x00000001:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			break;
		
		case 0x00000002:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000000, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000004, 0x00000000);
			break;
		
		case 0x00000003:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000017, 0x0000000B);
			break;
		
		case 0x00000004:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000001, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000002, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000004, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000007, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000017, 0x00000005);
			break;
		
		case 0x00000005:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000000, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000001, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000002, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000003, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000004, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000006, 0x00000002);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x0000000A, 0x00000003);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000017, 0x00000005);
			break;
		
		case 0x00000006:
			unk_0xF95FF0A179413A39(uParam0->f_31[iParam1], 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000001, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000004, 0x00000001);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000008, 0x00000000);
			unk_0x5BD52554D5750EFF(uParam0->f_31[iParam1], 0x00000017, 0x00000000);
			break;
	}
}

void func_289(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x00000053, 0x00000086);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000086, 0x00000086);
			break;
		
		case 0x00000001:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x00000000, 0x00000000);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000000, 0x0000009C);
			break;
		
		case 0x00000002:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x00000031, 0x00000000);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000000, 0x0000009C);
			break;
		
		case 0x00000003:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x00000000, 0x00000000);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000000, 0x0000009C);
			break;
		
		case 0x00000004:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x0000002B, 0x00000005);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000000, 0x0000009C);
			break;
		
		case 0x00000005:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x00000003, 0x00000003);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000006, 0x0000009C);
			break;
		
		case 0x00000006:
			unk_0xC002508A277213DE(uParam0->f_31[iParam1], 0x00000023, 0x00000000);
			unk_0x58A0C35FA7CA6162(uParam0->f_31[iParam1], 0x00000000, 0x0000009C);
			break;
	}
}

bool func_290(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_291(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 0x00000001:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 0x00000002:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 0x00000003:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 0x00000004:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 0x00000005:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 0x00000006:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 0x00000007:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_292()
{
	unk_0x523BCC9DC80CD82F(func_266());
	unk_0x3F423BF5B8125A50(func_293());
}

char* func_293()
{
	return "MP_INTRO_SEQ@";
}

void func_294()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		unk_0x523BCC9DC80CD82F(func_268(iVar0));
		iVar0++;
	}
}

void func_295(int iParam0, float fParam1, float fParam2)
{
	func_238(iParam0->f_5C[0x00000000], 0x00000064, "FM_Intro_uber", fParam1, 0x00000000);
	func_238(iParam0->f_5C[0x00000001], 0x00000065, "FM_Intro_uber", fParam1, 0x00000000);
	func_238(iParam0->f_5C[0x00000002], 0x00000066, "FM_Intro_uber", (fParam1 + fParam2), 0x00000000);
	func_238(iParam0->f_5C[0x00000003], 0x00000067, "FM_Intro_uber", fParam1, 0x00000000);
	func_238(iParam0->f_5C[0x00000004], 0x00000068, "FM_Intro_uber", fParam1, 0x00000000);
}

void func_296(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam1)
	{
		case 0x0000000E:
			func_297(iParam0, 0x00000000, -2997.174f, 330.9234f, 14.2341f, -15.97f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000002, -2983.9f, 423.7414f, 14.4122f, -5.25f, &iVar1, 0x00000001);
			break;
		
		case 0x0000000F:
			func_297(iParam0, 0x00000001, -2622.208f, -109.3386f, 19.2643f, 39.34f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000003, -2583.95f, -143.6469f, 20.6224f, 48.89f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000007, -2552.145f, -169.0495f, 19.8664f, 60.04f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000008, -2531.474f, -174.4581f, 19.2269f, 58.09f, &iVar1, 0x00000001);
			break;
		
		case 0x00000010:
			break;
		
		case 0x00000011:
			func_297(iParam0, 0x00000000, -2420.618f, -232.2668f, 15.3525f, 57.71f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000002, -2399.709f, -249.2471f, 14.9551f, 58.19f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000004, -2568.499f, -153.4655f, 20.4075f, 54.1f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000005, -2485.392f, -198.0737f, 17.5783f, 63.83f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000006, -2469.139f, -206.5518f, 17.0201f, 60.64f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000009, -2408.733f, -238.8328f, 15.2055f, 59.84f, &iVar1, 0x00000001);
			break;
		
		case 0x00000012:
			func_297(iParam0, 0x00000001, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000003, -2075.444f, -374.131f, 11.556f, 56.66f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000007, -2160.252f, -294.0829f, 12.5163f, 163.95f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000008, -2191.429f, -335.8769f, 12.7225f, 84.71f, &iVar1, 0x00000001);
			break;
		
		case 0x00000013:
			func_297(iParam0, 0x00000000, -1833.87f, -561.7711f, 11.0989f, 48.11f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000001, -1630.587f, -685.6821f, 16.5351f, 58.23f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000002, -1668.738f, -662.7587f, 14.7925f, 60.52f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000003, -1564.946f, -738.6324f, 10.7672f, 68.32f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000004, -1706.507f, -720.8959f, 9.6281f, -132.94f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000005, -1626.756f, -769.9745f, 10.2367f, -128.8f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000006, -1782.764f, -610.5726f, 10.3008f, 52.34f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000007, -1595.258f, -733.587f, 10.8576f, 68.39f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000008, -1751.892f, -682.1017f, 9.6795f, -134.89f, &iVar1, 0x00000001);
			func_297(iParam0, 0x00000009, -1742.098f, -642.5658f, 9.8169f, 48.19f, &iVar1, 0x00000001);
			break;
		
		case 0x00000021:
			func_297(iParam0, 0x00000000, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000005, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &iVar1, 0x00000000);
			break;
		
		case 0x00000022:
			break;
		
		case 0x00000023:
			break;
		
		case 0x00000024:
			func_297(iParam0, 0x00000006, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &iVar1, 0x00000000);
			break;
		
		case 0x00000025:
			break;
		
		case 0x00000026:
			func_297(iParam0, 0x00000000, -712.0925f, -1983.516f, 25.688f, -167.99f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000001, -533.9934f, -2004.727f, 26.9085f, 58.71f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000002, -653.3551f, -2047.782f, 27.3566f, -112.14f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000003, -663.821f, -1934.85f, 27.1417f, -121.65f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000004, -656.6017f, -2009.078f, 30.0188f, -106.53f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000005, -502.696f, -2023.068f, 26.2376f, 60.2827f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000006, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000007, -624.7944f, -1960.975f, 26.29f, 237.3848f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000008, -463.0545f, -1998.255f, 36.6533f, 27.85f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000009, -473.4099f, -1950.213f, 24.7576f, 37.16f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000A, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000B, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000C, -584.929f, -1970.332f, 26.2437f, 55.8826f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000D, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000E, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &iVar1, 0x00000000);
			break;
		
		case 0x00000027:
			func_297(iParam0, 0x00000004, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000009, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &iVar1, 0x00000000);
			break;
		
		case 0x00000028:
			func_297(iParam0, 0x00000003, -270.2197f, -1499.752f, 29.4309f, -13.07f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000007, -313.1461f, -1559.589f, 24.2966f, 145.66f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000008, -301.9485f, -1550.052f, 25.5595f, 146.95f, &iVar1, 0x00000000);
			break;
		
		case 0x00000029:
			break;
		
		case 0x0000002A:
			break;
		
		case 0x0000002B:
			func_297(iParam0, 0x00000001, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000002, 214.2755f, -202.6486f, 53.5033f, 70.72f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000006, 263.1977f, -115.1292f, 69.0366f, 155.02f, &iVar1, 0x00000000);
			break;
		
		case 0x0000002C:
			func_297(iParam0, 0x00000000, 392.6941f, 239.868f, 102.5932f, 159.15f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000007, 375.2224f, 192.316f, 102.0397f, 160.4247f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000C, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &iVar1, 0x00000000);
			break;
		
		case 0x0000002D:
			func_297(iParam0, 0x00000001, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000003, 216.3894f, 211.8832f, 105.2308f, -19.82f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000004, 290.3365f, 172.6194f, 103.7313f, 67.09f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000005, 283.6507f, 155.574f, 103.264f, 252.0678f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000008, 309.5128f, 156.7439f, 103.3183f, -112.52f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000009, 249.0189f, 168.3015f, 104.5421f, -112.05f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000B, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000D, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &iVar1, 0x00000000);
			break;
		
		case 0x0000002E:
			break;
		
		case 0x0000002F:
			func_297(iParam0, 0x00000002, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000006, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000007, 211.375f, 181.7446f, 104.561f, 250.2252f, &iVar1, 0x00000000);
			break;
		
		case 0x00000030:
			break;
		
		case 0x00000031:
			func_297(iParam0, 0x00000002, -192.4192f, 249.71f, 91.7534f, -99.42f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000003, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000004, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000005, 6.5526f, 270.3987f, 108.268f, 84.5591f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000006, -124.1576f, 245.0871f, 96.1105f, -89.91f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000007, -140.9613f, 262.532f, 94.5308f, 87.51f, &iVar1, 0x00000000);
			func_297(iParam0, 0x00000009, -83.4766f, 247.5941f, 99.488f, 275.7796f, &iVar1, 0x00000000);
			func_297(iParam0, 0x0000000A, -215.5077f, 252.4543f, 91.0469f, 264.726f, &iVar1, 0x00000000);
			break;
		
		case 0x00000032:
			break;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			func_212(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_297(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_3A[iParam1], 0x00000000) && !unk_0xEB6A8945D1AC98A1(uParam0->f_4A[iParam1]))
	{
		unk_0x1E9649458B15960F(uParam0->f_3A[iParam1], 0x00000000);
		unk_0x20641932E5104B25(uParam0->f_3A[iParam1], 0x00000001, 0x00000000);
		unk_0xA47B46945FF6DE74(uParam0->f_3A[iParam1], vParam2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(uParam0->f_3A[iParam1], fParam3);
		unk_0xB9FD7450C0DAB575(uParam0->f_3A[iParam1], 0x40A00000);
		unk_0x51B954DAB1BCAF73(uParam0->f_3A[iParam1]);
		if (bParam5)
		{
			unk_0x60274E99F9B27DEA(uParam0->f_4A[iParam1], uParam0->f_3A[iParam1], 0x00000000, 0x00000001, 35f, 0x000C00AB, 5f, 5f, 0x00000001);
			unk_0x1AEF7184B203A58D(uParam0->f_3A[iParam1], 30f);
		}
		else
		{
			unk_0x60274E99F9B27DEA(uParam0->f_4A[iParam1], uParam0->f_3A[iParam1], 0x00000000, 0x00000001, 15f, 0x000C00AB, 5f, 5f, 0x00000001);
			unk_0x1AEF7184B203A58D(uParam0->f_3A[iParam1], 10f);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_4A[iParam1], 0x00000001);
		unk_0x4A4806F9D471E491(uParam0->f_3A[iParam1], 0x00000001, 0x00000000);
		unk_0x4A4806F9D471E491(uParam0->f_4A[iParam1], 0x00000001, 0x00000000);
		unk_0x5D96D8530B3D0904(iParam4, iParam1);
	}
}

void func_298(int iParam0, char* sParam1, char* sParam2, vector3 vParam3, vector3 vParam4, float fParam5, float fParam6)
{
	if (!unk_0x9F4FE516EAACCFC5(iParam0->f_8))
	{
		iParam0->f_8 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000000);
	}
	iParam0->f_9 = 0xFFFFFFFF;
	iParam0->f_9 = unk_0xE9744DB7B8CA6965(vParam3, vParam4, 0x00000002);
	unk_0x93E9ED66DAB9FBE3(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
	unk_0x57E0CF9BF653D99A(iParam0->f_9, fParam5);
	unk_0x5E4E98C6D98C9C57(iParam0->f_9, fParam6);
	unk_0xE3BB8E05FCEB3FBE(iParam0->f_8, 0x00000001);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000001, 0x00000000);
}

void func_299(int iParam0)
{
	unk_0x71199B01895C6202(joaat("frogger"));
	unk_0xDB8844D4B7C60440(0x00000008, "FMIntro");
	if (unk_0xC844350D5D58C99A(iParam0->f_30))
	{
		unk_0xA954465BA6FDEFE2(&(iParam0->f_30));
	}
}

int func_300(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000001;
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000007))
	{
		return 0x00000001;
	}
	else
	{
		func_302();
		if (!unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000000]))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("cheetah")))
			{
				iParam0->f_5C[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, 0x00000000, 0x00000000, 0x00000000);
				unk_0x3E5CE368CD085FFA(iParam0->f_5C[0x00000000], 0x00000000);
				unk_0xA22F71BBC8173C39(iParam0->f_5C[0x00000000], 0x00000000);
			}
			else
			{
				bVar0 = 0x00000000;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000001]))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("entityxf")))
			{
				iParam0->f_5C[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, 0x00000000, 0x00000000, 0x00000000);
				unk_0x3E5CE368CD085FFA(iParam0->f_5C[0x00000001], 0x00000000);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_5C[0x00000001], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				unk_0xC6A6B4DDD6DC073A(iParam0->f_5C[0x00000001], 0x00000008);
				unk_0xA22F71BBC8173C39(iParam0->f_5C[0x00000001], 0x00000000);
			}
			else
			{
				bVar0 = 0x00000000;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000002]))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("monroe")))
			{
				iParam0->f_5C[0x00000002] = unk_0x122AAB0B1D6F55AD(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, 0x00000000, 0x00000000, 0x00000000);
				unk_0x3E5CE368CD085FFA(iParam0->f_5C[0x00000002], 0x00000000);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_5C[0x00000002], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				unk_0xC6A6B4DDD6DC073A(iParam0->f_5C[0x00000002], 0x00000002);
				unk_0xA22F71BBC8173C39(iParam0->f_5C[0x00000002], 0x00000000);
			}
			else
			{
				bVar0 = 0x00000000;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000003]))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("cheetah")))
			{
				iParam0->f_5C[0x00000003] = unk_0x122AAB0B1D6F55AD(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, 0x00000000, 0x00000000, 0x00000000);
				unk_0x3E5CE368CD085FFA(iParam0->f_5C[0x00000003], 0x00000000);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_5C[0x00000003], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				unk_0xC6A6B4DDD6DC073A(iParam0->f_5C[0x00000003], 0x0000000F);
				unk_0xA22F71BBC8173C39(iParam0->f_5C[0x00000003], 0x00000000);
			}
			else
			{
				bVar0 = 0x00000000;
			}
		}
		if (!unk_0xC844350D5D58C99A(iParam0->f_5C[0x00000004]))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("feltzer2")))
			{
				iParam0->f_5C[0x00000004] = unk_0x122AAB0B1D6F55AD(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, 0x00000000, 0x00000000, 0x00000000);
				unk_0x3E5CE368CD085FFA(iParam0->f_5C[0x00000004], 0x00000000);
				unk_0xC4C7FD0EF3FEAB0B(iParam0->f_5C[0x00000004], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				unk_0xC002508A277213DE(iParam0->f_5C[0x00000004], 0x00000000, 0x00000000);
				unk_0x58A0C35FA7CA6162(iParam0->f_5C[0x00000004], 0x00000000, 0x0000009C);
				unk_0xF95FF0A179413A39(iParam0->f_5C[0x00000004], 0x00000000);
			}
			else
			{
				bVar0 = 0x00000000;
			}
		}
		else if (unk_0xDF1306B443CD3D15(iParam0->f_5C[0x00000004], 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000001))
			{
				if (unk_0x40B3F576B41FA183(iParam0->f_5C[0x00000004]) > 0x00000000)
				{
					unk_0x73BEC6F1685574E6(iParam0->f_5C[0x00000004], 0x00000016, 0x00000001);
					unk_0xA22F71BBC8173C39(iParam0->f_5C[0x00000004], 0x00000000);
					unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000001);
				}
				else
				{
					bVar0 = 0x00000000;
				}
			}
		}
		if (unk_0xB87F6CF6E5628C67(func_246()))
		{
			iVar1 = 0x00000000;
			while (iVar1 <= 0x00000004)
			{
				if (!unk_0xC844350D5D58C99A(iParam0->f_62[iVar1]))
				{
					if (unk_0xC844350D5D58C99A(iParam0->f_5C[iVar1]))
					{
						if (unk_0xDF1306B443CD3D15(iParam0->f_5C[iVar1], 0x00000000))
						{
							iParam0->f_62[iVar1] = unk_0x852A19533F896693(iParam0->f_5C[iVar1], 0x00000004, func_246(), 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x11AD11297DC58CC7(iParam0->f_62[iVar1], 0x00000001);
							unk_0x56FDC9ADE35F7DB0(iParam0->f_5C[iVar1], 0x00000001, 0x00000001, 0x00000000);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = 0x00000000;
		}
		if (bVar0)
		{
			unk_0x71199B01895C6202(joaat("cheetah"));
			unk_0x71199B01895C6202(joaat("monroe"));
			unk_0x71199B01895C6202(joaat("entityxf"));
			unk_0x71199B01895C6202(joaat("feltzer2"));
			unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000007);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_301()
{
	func_302();
	if (unk_0xB87F6CF6E5628C67(func_246()))
	{
		if (unk_0xB87F6CF6E5628C67(joaat("cheetah")))
		{
			if (unk_0xB87F6CF6E5628C67(joaat("monroe")))
			{
				if (unk_0xB87F6CF6E5628C67(joaat("entityxf")))
				{
					if (unk_0xB87F6CF6E5628C67(joaat("feltzer2")))
					{
						if (unk_0x3DDA6C6A285628E4(0x00000064, "FM_Intro_uber"))
						{
							if (unk_0x3DDA6C6A285628E4(0x00000065, "FM_Intro_uber"))
							{
								if (unk_0x3DDA6C6A285628E4(0x00000066, "FM_Intro_uber"))
								{
									if (unk_0x3DDA6C6A285628E4(0x00000067, "FM_Intro_uber"))
									{
										if (unk_0x3DDA6C6A285628E4(0x00000068, "FM_Intro_uber"))
										{
											if (unk_0xB4AE0788C1587752("mp_intro_seq@"))
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
		}
	}
	return 0x00000000;
}

void func_302()
{
	unk_0x523BCC9DC80CD82F(joaat("cheetah"));
	unk_0x523BCC9DC80CD82F(joaat("monroe"));
	unk_0x523BCC9DC80CD82F(joaat("entityxf"));
	unk_0x523BCC9DC80CD82F(joaat("feltzer2"));
	unk_0x523BCC9DC80CD82F(func_246());
	unk_0x36187931D29E5BBE(0x00000064, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(0x00000065, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(0x00000066, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(0x00000067, "FM_Intro_uber");
	unk_0x36187931D29E5BBE(0x00000068, "FM_Intro_uber");
	unk_0x3F423BF5B8125A50("mp_intro_seq@");
}

int func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000004))
	{
		return 0x00000001;
	}
	else
	{
		unk_0x523BCC9DC80CD82F(joaat("asterope"));
		unk_0x523BCC9DC80CD82F(joaat("sentinel"));
		unk_0x523BCC9DC80CD82F(func_246());
		if ((unk_0xB87F6CF6E5628C67(joaat("asterope")) && unk_0xB87F6CF6E5628C67(joaat("sentinel"))) && unk_0xB87F6CF6E5628C67(func_246()))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000F)
			{
				if (!unk_0xC844350D5D58C99A(iParam0->f_3A[iVar0]))
				{
					if (iVar0 < 0x00000007)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_213(iVar0, &vVar2, &fVar3);
					iParam0->f_3A[iVar0] = unk_0x122AAB0B1D6F55AD(iVar1, vVar2, fVar3, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6A6B4DDD6DC073A(iParam0->f_3A[iVar0], iVar0);
					unk_0xE121AE1BBF90E186(iParam0->f_3A[iVar0], 0x00000001);
					unk_0x0882E3DC0C991680(iParam0->f_3A[iVar0], 0x00000002);
					unk_0x1E9649458B15960F(iParam0->f_3A[iVar0], 0x00000001);
				}
				if (unk_0xC844350D5D58C99A(iParam0->f_3A[iVar0]))
				{
					if (!unk_0xC844350D5D58C99A(iParam0->f_4A[iVar0]))
					{
						iParam0->f_4A[iVar0] = unk_0x852A19533F896693(iParam0->f_3A[iVar0], 0x00000004, func_246(), 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xE121AE1BBF90E186(iParam0->f_4A[iVar0], 0x00000001);
						unk_0x11AD11297DC58CC7(iParam0->f_4A[iVar0], 0x00000001);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000F)
		{
			if (!unk_0xC844350D5D58C99A(iParam0->f_3A[iVar0]) || !unk_0xC844350D5D58C99A(iParam0->f_4A[iVar0]))
			{
				return 0x00000000;
			}
			iVar0++;
		}
		unk_0x71199B01895C6202(joaat("asterope"));
		unk_0x71199B01895C6202(joaat("sentinel"));
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_304(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_228(iParam0, iParam1, 0x00000000);
	if (iParam0->f_125)
	{
		if ((iParam0->f_D + iVar0) + iParam2) <= unk_0x1C0640BA9A7327B3()
		{
			return 0x00000001;
		}
	}
	else if (iVar0 + iParam2) <= func_236(iParam0)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x00000008))
	{
		return 0x00000001;
	}
	iVar0 = joaat("frogger");
	unk_0x523BCC9DC80CD82F(iVar0);
	unk_0x36187931D29E5BBE(0x00000008, "FMIntro");
	if (unk_0xB87F6CF6E5628C67(iVar0) && unk_0x3DDA6C6A285628E4(0x00000008, "FMIntro"))
	{
		if (!unk_0xC844350D5D58C99A(iParam0->f_30))
		{
			iParam0->f_30 = unk_0x122AAB0B1D6F55AD(iVar0, unk_0x87A3DA08ACDE0189(0x00000008, 0f, "FMIntro"), 0f, 0x00000000, 0x00000000, 0x00000000);
			unk_0x4D3C3C0B0DE2663E(iParam0->f_30, 0x00000008, "FMIntro", 0x00000001);
			unk_0xF12C1D85AFEE8FAD(iParam0->f_30, 5000f);
			unk_0x0AD2DA9636D01093(iParam0->f_30);
			unk_0x4A4806F9D471E491(iParam0->f_30, 0x00000000, 0x00000000);
			unk_0x71199B01895C6202(iVar0);
		}
	}
	if (!unk_0xC844350D5D58C99A(iParam0->f_30))
	{
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x00000008);
	return 0x00000001;
}

void func_306(int iParam0, int iParam1)
{
	if (func_304(iParam0, iParam1, 0x00000000))
	{
		if (iParam0->f_125)
		{
			iParam0->f_D = (unk_0x1C0640BA9A7327B3() - func_228(iParam0, iParam1, 0x00000000));
		}
		else
		{
			iParam0->f_123 = 0x00000001;
		}
	}
}

void func_307(int iParam0)
{
	iParam0->f_D = unk_0x1C0640BA9A7327B3();
}

Vector3 func_308(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

int func_309()
{
	return Global_14082C;
}

void func_310()
{
	unk_0xB5376EA942202450(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 0x00000000, 0x00000000, 0x00000000);
	unk_0xB5376EA942202450(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 0x00000000, 0x00000000, 0x00000000);
}

void func_311()
{
	func_219(0x00000000);
	func_218(0x00000001);
}

void func_312(bool bParam0, int iParam1)
{
	func_316();
	func_314(0x00000001);
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x790015DC92C918E2();
	func_253(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_313();
	func_205(0x0000000C, 0x00000001, 0xFFFFFFFF);
	func_206(0x00000000);
	unk_0x5413873D3F67BF93(0x00000001, 0xFFFFFFFF);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_314(0x00000001);
	func_260(0x00000001);
	Global_2537E2.f_EA3 = 0x00000001;
	if (bParam0)
	{
		if (!unk_0xF929B1A0A409FF93())
		{
			unk_0xF601BB024C8F11A7(0x00000001, iParam1);
		}
	}
}

void func_313()
{
	func_206(0x00000000);
	func_205(0x00000004, 0x00000001, 0xFFFFFFFF);
	func_205(0x00000006, 0x00000001, 0xFFFFFFFF);
	func_205(0x00000007, 0x00000001, 0xFFFFFFFF);
	func_205(0x00000003, 0x00000001, 0xFFFFFFFF);
	func_205(0x00000001, 0x00000001, 0xFFFFFFFF);
	func_205(0x00000002, 0x00000001, 0xFFFFFFFF);
	func_205(0x0000000B, 0x00000001, 0xFFFFFFFF);
	func_205(0x0000000D, 0x00000001, 0xFFFFFFFF);
	func_205(0x0000000E, 0x00000001, 0xFFFFFFFF);
	func_205(0x00000010, 0x00000001, 0xFFFFFFFF);
}

void func_314(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1AED2)
	{
		unk_0x2CBCC7DC0EEFF804(iVar0, iParam0);
		func_315(iVar0);
		iVar0++;
	}
}

void func_315(int iParam0)
{
	Global_1AED2[iParam0 /*28*/].f_15 = 0x00000000;
	StringCopy(&(Global_1AED2[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_1AED2[iParam0 /*28*/].f_4), "", 64);
	Global_1AED2[iParam0 /*28*/].f_17 = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_18 = { 0f, 0f, 0f };
	Global_1AED2[iParam0 /*28*/].f_1B = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_14 = 0x00000000;
	Global_1AED2[iParam0 /*28*/].f_16 = 0x00000000;
}

void func_316()
{
	Global_14073F = 0x00000001;
	StringCopy(&(Global_14073F.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_14073F.f_9 = unk_0x12AB0310C2281427(&(Global_14073F.f_1));
}

int func_317()
{
	if (unk_0x757EF87A33649210())
	{
		func_319(0x00000000);
		unk_0x9EDE7E8C5E9E3EBF();
		return 0x00000001;
	}
	if (func_318() == 0x00000003)
	{
		func_319(0x00000002);
		unk_0xBA09B5D63DC2577F(250f);
	}
	if (unk_0xBFBEA211BED040AC() >= 250f)
	{
		unk_0xBA09B5D63DC2577F(250f);
	}
	if (unk_0x6239BB021F900BC7() == 0x00000000)
	{
		unk_0xBA09B5D63DC2577F(250f);
	}
	if (unk_0xBFBEA211BED040AC() <= 0f)
	{
		func_319(0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_318()
{
	return Global_1406D3.f_13;
}

void func_319(int iParam0)
{
	if (Global_1406D3.f_13 != iParam0)
	{
		Global_1406D3.f_13 = iParam0;
	}
}

void func_320(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0x00000000;
	sVar0 = func_324(iParam0, &iVar1);
	if (!unk_0x7F8A39872A07D2CE("NONE", sVar0) && iVar1 != 0x00000000)
	{
		if (bParam1)
		{
			if (unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == iVar1)
			{
				func_323(iParam0, 0x00000001);
				return;
			}
		}
		else
		{
			if (!unk_0x13CCE7704923A895(iVar1))
			{
				return;
			}
			if (func_321(iParam0))
			{
				func_323(iParam0, 0x00000000);
			}
		}
		unk_0xD65FA6F2BAD953C8(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_321(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_322(iParam0) };
	if (Var0.f_1 != 0xFFFFFFFF && unk_0xEAE0D21A50E6C7F4(Global_9158[Var0.f_1], Var0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<2> func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	Var3 = 0xFFFFFFFF;
	Var3.f_1 = 0xFFFFFFFF;
	while (iVar1 < 0x00000007)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_323(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_322(iParam0) };
	if (Var0.f_1 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_9158[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_9158[Var0.f_1]), Var0);
	}
}

var func_324(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_325(iParam0) };
	*iParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_325(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000001:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000002:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000003:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000004:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000005:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000006:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000007:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000008:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 0x00000009:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 0x0000000A:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 0x0000000B:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000C:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000D:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000E:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000F:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000010:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000011:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000012:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000013:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000014:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000017:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000015:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000018:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000019:
			vVar1 = { func_326(0x00000001, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 0x0000001A:
			vVar1 = { func_326(0x00000002, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 0x0000001B:
			vVar1 = { func_326(0x00000003, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 0x0000001C:
			vVar1 = { func_326(0x00000004, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 0x0000001D:
			vVar1 = { func_326(0x00000005, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 0x0000001E:
			vVar1 = { func_326(0x00000006, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 0x0000001F:
			vVar1 = { func_326(0x00000007, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 0x00000020:
			Var0 = { Global_100542[0x00000022 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 0x00000021:
			vVar1 = { func_326(0x00000023, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 0x00000022:
			vVar1 = { func_326(0x00000024, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 0x00000023:
			vVar1 = { func_326(0x00000025, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 0x00000024:
			vVar1 = { func_326(0x00000026, 0x00000000) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 0x00000025:
			vVar1 = { func_326(0x00000027, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 0x00000026:
			vVar1 = { func_326(0x00000028, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 0x00000027:
			vVar1 = { func_326(0x00000029, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 0x00000028:
			vVar1 = { func_326(0x0000002A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 0x00000029:
			vVar1 = { func_326(0x0000002B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 0x0000002A:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 0x0000002B:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 0x0000002C:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 0x00000031:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 0x00000032:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 0x00000033:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 0x00000034:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 0x00000035:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 0x00000036:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 0x00000037:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 0x00000038:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 0x00000039:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 0x0000003A:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 0x0000002D:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 0x0000002E:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 0x0000002F:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000030:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003C:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003D:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003E:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003F:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000040:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000041:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000042:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000043:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000044:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000045:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000046:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000047:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000048:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000049:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004A:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004B:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004C:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004D:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004E:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004F:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000050:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000051:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000052:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000053:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000054:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000055:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000056:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000057:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000058:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000059:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005A:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005B:
			vVar1 = { func_326(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005C:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005D:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005E:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005F:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000060:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000061:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000062:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000063:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000064:
			vVar1 = { func_326(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000065:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000066:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000067:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000068:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000069:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006A:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006B:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006C:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006D:
			vVar1 = { func_326(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006E:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006F:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000070:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000071:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000072:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000073:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000074:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000075:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000076:
			vVar1 = { func_326(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000077:
			vVar1 = { func_326(0x0000005B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000078:
			vVar1 = { func_326(0x00000061, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000079:
			vVar1 = { func_326(0x00000067, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007A:
			vVar1 = { func_326(0x00000068, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007B:
			vVar1 = { func_326(0x00000069, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007C:
			vVar1 = { func_326(0x0000006A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007D:
			vVar1 = { func_326(0x0000006B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007E:
			vVar1 = { func_326(0x0000006C, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007F:
			vVar1 = { func_326(0x0000006D, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000080:
			vVar1 = { func_326(0x0000006E, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000081:
			vVar1 = { func_326(0x0000006F, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000082:
			vVar1 = { func_326(0x00000070, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000083:
			vVar1 = { func_326(0x00000071, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000084:
			vVar1 = { func_326(0x00000072, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000085:
			vVar1 = { func_326(0x00000067, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000086:
			vVar1 = { func_326(0x0000006A, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000087:
			vVar1 = { func_326(0x0000006D, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000088:
			vVar1 = { func_326(0x00000070, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000089:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008A:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008B:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008C:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008D:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008E:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008F:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000090:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000091:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000092:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000093:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000094:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000095:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000096:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000097:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000098:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000099:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009A:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009B:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009C:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009D:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009E:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009F:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A0:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A1:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A2:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A3:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A4:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A5:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A6:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A7:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A8:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A9:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AA:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AB:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AC:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AD:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AE:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AF:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B0:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B1:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B2:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B3:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B4:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B5:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B6:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B7:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B8:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B9:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BA:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BB:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BC:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BD:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BE:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BF:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C0:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C1:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C2:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C3:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C4:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 0x000000C5:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C6:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C7:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C8:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C9:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CA:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CB:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CC:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CD:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CE:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CF:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D0:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D1:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D2:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D3:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D4:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D5:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_326(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000001:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000002:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000003D:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000005:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000006:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 0x00000007:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000022:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x0000003E:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000023:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 0x00000024:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 0x00000025:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 0x00000026:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000027:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000041:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 0x00000028:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 0x00000029:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 0x0000003F:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 0x0000002A:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000002B:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000049:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 0x0000004A:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 0x0000004B:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 0x0000004C:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 0x0000004D:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 0x0000004E:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 0x0000004F:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 0x00000050:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 0x00000051:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000052:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 0x00000053:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000054:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000055:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000056:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000057:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 0x00000058:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 0x00000059:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 0x0000005A:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000067:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000068:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000069:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x0000006A:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006B:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006C:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006D:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006E:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006F:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x00000070:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000071:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000072:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_327()
{
	return Global_259091;
}

bool func_328()
{
	return Global_258C06;
}

void func_329(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_349(bParam0, 0x00000000);
	}
	func_347(0x00000000);
	func_330(0x00000042);
}

void func_330(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_309();
	if (Global_14086D)
	{
		sVar1 = func_346(iParam0);
		iVar2 = unk_0x12AB0310C2281427(sVar1);
		func_345(&Global_2594DC, 0x00000001, 0x00000000);
		unk_0x1ADDCBD29A516AA5(iVar2, 0x00000001, iVar0, iParam0, 0x00000000);
	}
	if (iParam0 == 0x00000002)
	{
		func_331();
	}
	Global_14082C = iParam0;
}

void func_331()
{
	if (Global_258BAA)
	{
		if (func_333())
		{
			unk_0x53491B90E4FD0E56(0x00000000);
			func_332();
		}
	}
}

void func_332()
{
	if (Global_258BA7)
	{
		if (!Global_258BA6)
		{
			Global_258BA6 = 0x00000001;
			Global_258BAF = unk_0x1C0640BA9A7327B3();
			Global_258BAE = 0x00000001;
		}
	}
}

int func_333()
{
	if (Global_2567E2.f_1940 && Global_258BA7)
	{
		if (func_336(0x00000000))
		{
			if (func_334() && !unk_0x757EF87A33649210())
			{
				if (((Global_2567E2.f_1956 == 0x0000007A || Global_2567E2.f_1956 == 0x0000007B) || Global_2567E2.f_1956 == 0x0000007C) || Global_2567E2.f_1956 == 0x0000007D)
				{
					return 0x00000001;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2, 0x0000001A))
				{
					return 0x00000001;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2, 0x0000001B))
				{
					return 0x00000001;
				}
				if (Global_19C0A5)
				{
					return 0x00000001;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_25, 0x00000017))
				{
					if (!func_255(unk_0xD803B885F5E47A62(), 0x00000000) && !func_258())
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_334()
{
	if (func_335() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_335()
{
	return Global_1406D3.f_12;
}

int func_336(int iParam0)
{
	if (func_343(unk_0xD803B885F5E47A62()) && unk_0xEAE0D21A50E6C7F4(Global_199459.f_4, 0x00000016))
	{
		return 0x00000000;
	}
	if (Global_14136A)
	{
		return 0x00000000;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return 0x00000000;
	}
	if (func_342())
	{
		return 0x00000000;
	}
	if ((Global_258BA8 && func_341()) || Global_258BA8 == 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_2567E2.f_1956 == 0x0000007B && Global_258BAB)
	{
		return 0x00000001;
	}
	if (Global_258BA9)
	{
		if (Global_2567E2.f_1956 == 0x0000007A)
		{
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_25, 0x00000017))
	{
		if (!func_255(unk_0xD803B885F5E47A62(), 0x00000000) && !func_258())
		{
			return 0x00000001;
		}
	}
	if (Global_258BAC)
	{
		if (iParam0 == 0x00000000)
		{
			if ((Global_2567E2.f_1956 == 0x0000007B || (Global_2567E2.f_1956 == 0x0000007C && func_339() == 0x00000001)) || Global_2567E2.f_1956 == 0x0000007D)
			{
				return 0x00000001;
			}
		}
	}
	if ((Global_2567E2.f_1940 || func_337(0xC1A00000)) && Global_258BAD)
	{
		if (iParam0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_337(float fParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_338(unk_0xD803B885F5E47A62()) };
	if (vVar0.z < fParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (!unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_338(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_339()
{
	return func_340(unk_0xD803B885F5E47A62());
}

int func_340(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

bool func_341()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

bool func_342()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

int func_343(int iParam0)
{
	if (iParam0 != func_140())
	{
		if (func_14(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_344(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000D;
			}
		}
	}
	return 0x00000000;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
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
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

void func_345(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 0x00000001;
}

char* func_346(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "TRANSITION_STATE_EMPTY";
		
		case 0x00000001:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 0x00000002:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 0x00000003:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 0x00000004:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 0x00000005:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 0x00000007:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 0x00000008:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 0x00000006:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 0x00000009:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 0x0000000F:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 0x0000000A:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 0x0000000B:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 0x0000000C:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 0x0000000D:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 0x0000000E:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 0x00000010:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 0x00000011:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 0x00000012:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 0x00000013:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 0x00000015:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 0x00000016:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 0x00000017:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 0x00000018:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 0x00000019:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 0x0000001A:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 0x0000001B:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 0x0000001D:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 0x0000001C:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 0x0000001E:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 0x0000001F:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 0x00000014:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 0x00000020:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 0x00000021:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 0x00000022:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 0x00000023:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 0x00000024:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 0x00000025:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 0x00000026:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 0x00000027:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 0x00000028:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 0x00000029:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 0x0000002A:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 0x0000002B:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 0x0000002C:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 0x0000002E:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 0x0000002F:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 0x00000030:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 0x00000031:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 0x00000032:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 0x00000033:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 0x00000034:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 0x0000002D:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 0x00000036:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 0x00000035:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 0x00000037:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 0x00000038:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 0x00000039:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 0x0000003A:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 0x0000003B:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 0x0000003C:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 0x0000003D:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 0x0000003E:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 0x0000003F:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 0x00000040:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 0x00000041:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 0x00000042:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 0x00000043:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 0x00000044:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_347(int iParam0)
{
	var uVar0;
	
	uVar0 = func_348();
	Global_14082B = iParam0;
}

var func_348()
{
	return Global_14082B;
}

void func_349(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_351(&Global_5673, bParam1);
	unk_0x23F80404F3C4C299(0x00000000);
	iVar0 = 0x00000001;
	if (bParam0)
	{
		if (iVar0 == 0x00000001)
		{
			unk_0x4422CF36C77B77E7();
			func_350(0x00000000);
			if (unk_0xC844350D5D58C99A(Global_14134B))
			{
				if (unk_0x9C77D2D0559097F0(Global_14134B, 0x00000000))
				{
					if (!unk_0xAF6690C489CC6203(Global_14134B))
					{
						unk_0x73270B3C9CC833FD(Global_14134B, 0x00000000, 0x00000000);
					}
					unk_0xEBA53F35D0085654(&Global_14134B);
				}
			}
		}
	}
}

void func_350(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		Global_2594C6 = 0x00000000;
	}
	Global_1406D3.f_12 = iParam0;
}

void func_351(var uParam0, bool bParam1)
{
	uParam0->f_F = 0x00000000;
	uParam0->f_10 = 0x00000000;
	uParam0->f_11 = 0x00000000;
	uParam0->f_12 = 0x00000000;
	uParam0->f_13 = 0x00000000;
	uParam0->f_14 = 0x00000000;
	if (unk_0x9F4FE516EAACCFC5(uParam0->f_9))
	{
		if (unk_0xFBB4F23D534EB790(uParam0->f_9))
		{
			func_352(0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(uParam0->f_9, 0x00000000);
	}
	if (!Global_A642)
	{
		unk_0x051C254DA616D646(0x00000001);
		unk_0x36629DB72EBCB78C(0f);
		unk_0x58478905E1A5347E(0f);
	}
	Global_24B2D0.f_256 = 0f;
	if (!bParam1)
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
	}
}

void func_352(int iParam0)
{
	Global_56C1 = iParam0;
}

void func_353(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_358(0x00000001, 0x00000000, 0x00000001);
	}
	else
	{
		func_354(iParam1);
	}
}

void func_354(int iParam0)
{
	func_357();
	if (iParam0 == 0x00000000)
	{
		if (unk_0x1F045D4082B1ADB2())
		{
			return;
		}
	}
	if (func_356() == 0x00000000 || unk_0x798A3F1296751F46())
	{
		func_355(0x00000001);
		unk_0x68619D16FD876EAA(0x00000000);
		unk_0x68619D16FD876EAA(0x00000000);
	}
}

void func_355(int iParam0)
{
	if (Global_1406D3.f_14 != iParam0)
	{
		Global_1406D3.f_14 = iParam0;
	}
}

int func_356()
{
	return Global_1406D3.f_14;
}

void func_357()
{
	Global_259212 = 0x00000001;
}

void func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (func_359())
	{
		return;
	}
	if ((func_356() == 0x00000001 || unk_0x798A3F1296751F46()) || iParam0)
	{
		func_355(0x00000000);
		unk_0x68619D16FD876EAA(0x00000001);
		if (!bParam1)
		{
			unk_0x68619D16FD876EAA(0x00000001);
		}
		if (bParam2)
		{
			unk_0x730943CECC025C36();
		}
	}
}

int func_359()
{
	if (func_360())
	{
		return Global_258BAE;
	}
	return 0x00000000;
}

int func_360()
{
	if (Global_258BA7)
	{
		return Global_258BA6;
	}
	return 0x00000000;
}

void func_361(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCE7D0828D683D536();
		unk_0xEF7906595D9044B8(0xFFFFFFFF);
		unk_0xD980FF3526C8CB9E(0x00000001);
		unk_0xE9B51BC60A3B47D9(0x00000001);
		unk_0xD60411959D5D930B(1f);
		unk_0xC83E7A5E408DF68C(0x00000003);
		unk_0xFF42993F8A095C58(0x00000003);
	}
	else
	{
		unk_0xE342F209E49C5314(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0x00000000, 0x00000001);
		unk_0xEF7906595D9044B8(0x00000000);
		unk_0xD980FF3526C8CB9E(0x00000000);
		unk_0xE9B51BC60A3B47D9(0x00000000);
		unk_0xD60411959D5D930B(0f);
		unk_0xC83E7A5E408DF68C(0x00000000);
		unk_0xFF42993F8A095C58(0x00000000);
	}
}

void func_362(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	func_311();
	func_218(0x00000001);
	func_206(0x00000001);
	func_205(0x0000000C, 0x00000001, 0xFFFFFFFF);
	func_372();
	unk_0xBEF52C1D400C0A44(0x00000000);
	if (bParam0)
	{
		unk_0x225FD7B8E8464E9E(unk_0xD803B885F5E47A62(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 0x00002000;
	}
	if (bParam4)
	{
		iVar0 |= 0x00000004;
	}
	if (!bParam2)
	{
		iVar0 |= 0x00004000;
	}
	if (bParam3)
	{
		iVar0 |= 0x00008000;
	}
	func_363(unk_0xD803B885F5E47A62(), 0x00000000, iVar0, 0x00000000);
	if (bParam5)
	{
		if (unk_0x82F88FD400E98881(unk_0x16F2683693E537C9()))
		{
			unk_0xDB4B1656BA06B94E(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
}

void func_363(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_371())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_334())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_255(unk_0xD803B885F5E47A62(), 0x00000000) && !func_258()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_368(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_367(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_366();
					func_365();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_367(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_364(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_364(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_365()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_366()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_367(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_368(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (bParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (bParam0 == 0x00000001)
			{
				func_370();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_255(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_369(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_369(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_370()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

int func_371()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_372()
{
	Global_56C3.f_5 = 0x00000001;
}

int func_373()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_374(int iParam0)
{
	unk_0x9DD8618CA5BF832D(unk_0x9539D44F3E4492F6(iParam0), 0x0000015A, 0x00000001);
}

void func_375(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_3, 0x0000000C))
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_3), 0x0000000C);
	}
	else
	{
		if (iParam0->f_6 > 0x0000001E)
		{
			if (!Global_195E01)
			{
				Global_195E01 = 0x00000001;
				Global_195E02 = 0x00000001;
			}
		}
		if (iParam0->f_6 > 0x0000001F)
		{
			if (unk_0x83D8570832F172A7(Global_195E00))
			{
				if (iParam0->f_5 < 0x00000017)
				{
					switch (iParam0->f_5)
					{
						case 0x00000000:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000021)
								{
									if (((unk_0xB3260A60545D3F11() == 0x00000009 || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x00000008) || unk_0xB3260A60545D3F11() == 0x0000000C)
									{
										func_380("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_380("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_379("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("artdir", "AARON GARBUT", 210f, "|", 0x00000001);
									func_377("artdir", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000021, 0xFFFFF2C2))
							{
								func_376("artdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000001:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_304(iParam0, 0x00000021, 0xFFFFF484))
								{
									func_380("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_379("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
									func_378("techdir", "ADAM FOWLER", 185f, "|", 0x00000001);
									func_377("techdir", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000021, 0xFFFFFE3E))
							{
								func_376("techdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000002:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000023)
								{
									func_380("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_379("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
									func_378("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 0x00000001);
									func_377("assartdir", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 0x00000023)
							{
								func_376("assartdir", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000003:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000024)
								{
									if (((unk_0xB3260A60545D3F11() == 0x00000009 || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x00000008) || unk_0xB3260A60545D3F11() == 0x0000000C)
									{
										func_380("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_380("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_379("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 0x00000001);
									func_378("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 0x00000001);
									func_377("asstecdir", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000024, 0xFFFFED7C))
							{
								func_376("asstecdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000004:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_304(iParam0, 0x00000024, 0xFFFFF11E))
								{
									func_380("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_379("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 0x00000001);
									func_377("leadprog", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000024, 0xFFFFFDA8))
							{
								func_376("leadprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000005:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000025)
								{
									if (((unk_0xB3260A60545D3F11() == 0x00000009 || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x00000008) || unk_0xB3260A60545D3F11() == 0x0000000C)
									{
										func_380("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_380("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_379("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
									func_378("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 0x00000001);
									func_377("senprog", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000025, 0xFFFFFABA))
							{
								func_376("senprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000006:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000026)
								{
									func_380("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_379("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
									func_378("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 0x00000001);
									func_377("prog", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000026, 0xFFFFEF20))
							{
								func_376("prog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000007:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_304(iParam0, 0x00000026, 0xFFFFF358))
								{
									if (((unk_0xB3260A60545D3F11() == 0x00000009 || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x00000008) || unk_0xB3260A60545D3F11() == 0x0000000C)
									{
										func_380("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_380("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_379("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 0x00000001);
									func_378("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 0x00000001);
									func_377("socclub", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000026, 0xFFFFFC9A))
							{
								func_376("socclub", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000008:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000027)
								{
									func_380("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_379("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 0x00000001);
									func_377("audio", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000027, 0xFFFFF9AC))
							{
								func_376("audio", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000009:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000028)
								{
									func_380("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_379("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
									func_378("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 0x00000001);
									func_377("scrlead", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000028, 0xFFFFFA42))
							{
								func_376("scrlead", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x0000000A:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000029)
								{
									func_380("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_379("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
									func_378("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 0x00000001);
									func_377("script1", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000029, 0xFFFFFB50))
							{
								func_376("script1", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x0000000B:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x0000002A)
								{
									func_380("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_379("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 0x00000001);
									func_378("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 0x00000001);
									func_377("script2", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x0000002A, 0xFFFFFAD8))
							{
								func_376("script2", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x0000000C:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x0000002B)
								{
									func_380("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_379("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 0x00000001);
									func_379("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 0x00000001);
									func_377("visdes", 0.05f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x0000002B, 0xFFFFFAD8))
							{
								func_376("visdes", 0.05f);
								iParam0->f_5++;
							}
							break;
						
						case 0x0000000D:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x0000002C)
								{
									func_380("uides", 40f, 20f, "right", 0f, 0.3f);
									func_379("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
									func_378("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 0x00000001);
									func_377("uides", 0f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x0000002D, 0xFFFFF98E))
							{
								func_376("uides", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x0000000E:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x0000002E)
								{
									func_380("concre", 0f, 20f, "left", 0f, 0.3f);
									func_379("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
									func_378("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 0x00000001);
									func_378("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 0x00000001);
									func_377("concre", 0f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x0000002E, 0xFFFFF862))
							{
								func_376("concre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x0000000F:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x0000002F)
								{
									func_380("devass", 0f, 400f, "right", 0f, 0f);
									func_379("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 0x00000001);
									func_378("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 0x00000001);
									func_377("devass", 0f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 0x0000002F)
							{
								func_376("devass", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000010:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000030)
								{
									func_380("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_379("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("qasup", "ADAM WHITING| ", 50f, "|", 0x00000001);
									func_379("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("qasup", "CHRIS THOMSON", 160f, "|", 0x00000001);
									func_377("qasup", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000030, 0xFFFFFAD8))
							{
								func_376("qasup", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000011:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 0x00000031)
								{
									func_380("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_379("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
									func_378("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 0x00000001);
									func_377("senta", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000031, 0xFFFFEC32))
							{
								func_376("senta", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000012:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_304(iParam0, 0x00000031, 0xFFFFF15A))
								{
									func_380("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_379("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
									func_378("asspro", "JOSH NEEDLEMAN", 75f, "|", 0x00000001);
									func_377("asspro", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_304(iParam0, 0x00000031, 0xFFFFFD30))
							{
								func_376("asspro", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000013:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_263(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x000009A4)
									{
										func_380("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_379("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 0x00000001);
										func_378("animdir", "ROB NELSON", 200f, "|", 0x00000001);
										func_377("animdir", 0.16f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (iParam0->f_6 >= 0x00000032)
								{
									func_380("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_379("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 0x00000001);
									func_378("animdir", "ROB NELSON", 90f, "|", 0x00000001);
									func_377("animdir", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_263(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x000017EB)
								{
									func_376("animdir", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x0000076A)
							{
								func_376("animdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000014:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_263(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0xDED29B1D7D52D5A3())
									{
										func_380("producer", 65f, 55f, "right", 0f, 0f);
										func_379("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 0x00000001);
										func_378("producer", "ANDY DUTHIE", 20f, "|", 0x00000001);
										func_377("producer", 0f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x00000994)
								{
									func_380("producer", 0f, 100f, "left", 0.3f, 0f);
									func_379("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 0x00000001);
									func_378("producer", "ANDY DUTHIE", 110f, "|", 0x00000001);
									func_377("producer", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_263(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0xDED29B1D7D52D5A3())
								{
									func_376("producer", 0f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0xDED29B1D7D52D5A3())
							{
								func_376("producer", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000015:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_263(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x000033D1)
									{
										func_380("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_379("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
										func_378("vpcre", "DAN HOUSER", 80f, "|", 0x00000001);
										func_377("vpcre", 0.16f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x00001B09)
								{
									func_380("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_379("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 0x00000001);
									func_378("vpcre", "DAN HOUSER", 80f, "|", 0x00000001);
									func_377("vpcre", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_263(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x0000423B)
								{
									func_376("vpcre", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x00002911)
							{
								func_376("vpcre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 0x00000016:
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_4, iParam0->f_5))
							{
								if (func_263(iParam0))
								{
									if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x0000469D)
									{
										Global_195E02 = 0x00000000;
										func_380("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_379("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
										func_378("execpro", "SAM HOUSER", 165f, "|", 0x00000001);
										func_377("execpro", 0.16f);
										unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x00003046)
								{
									Global_195E02 = 0x00000000;
									func_380("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_379("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 0x00000001);
									func_378("execpro", "SAM HOUSER", 190f, "|", 0x00000001);
									func_377("execpro", 0.16f);
									unk_0x5D96D8530B3D0904(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_263(iParam0))
							{
								if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x00005519)
								{
									func_376("execpro", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (unk_0x22A8E52414415B76() && unk_0x8F677B1F58B4741C() > 0x00003BE5)
							{
								func_376("execpro", 0.16f);
								iParam0->f_5++;
							}
							break;
						}
				}
				if (Global_195E02)
				{
					unk_0x6567AE843FADBA94(Global_195E00, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
				}
			}
		}
	}
}

void func_376(char* sParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(Global_195E00, "HIDE");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_377(char* sParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(Global_195E00, "SHOW_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_378(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	unk_0x7E60C62A7CE58FC8(Global_195E00, "ADD_NAMES_TO_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x7E60D21B163E9D56();
}

void func_379(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	unk_0x7E60C62A7CE58FC8(Global_195E00, "ADD_ROLE_TO_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x7E60D21B163E9D56();
}

void func_380(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	unk_0x7E60C62A7CE58FC8(Global_195E00, "SETUP_CREDIT_BLOCK");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam3);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam4);
	unk_0x7C19E5E4784BD7CF(fParam5);
	unk_0x7E60D21B163E9D56();
}

void func_381(int iParam0)
{
	if (iParam0->f_6 >= 0x00000021 && iParam0->f_6 < 0x00000033)
	{
		if (unk_0xC844350D5D58C99A(iParam0->f_22))
		{
			if (unk_0xDF1306B443CD3D15(iParam0->f_22, 0x00000000))
			{
				unk_0x97C74F2F766B9222(unk_0x68E4ADDDDCD7BDDE(iParam0->f_22, 0f, 0.25f, 0.6f), 0x000000FF, 0x000000FF, 0x000000FF, 1.5f, 0.5f);
			}
		}
	}
}

void func_382()
{
	var uVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_414.f_3))
	{
		switch (Local_414.f_2)
		{
			case 0x00000002:
				if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000001))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (func_402(Local_414.f_3))
						{
							if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x950B6492) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x950B6492) != 0x00000000)
								{
									unk_0x5B1D360B9C6F0A09(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_414.f_3), 0x00004E20, 0x00000002, 1f, 0x00000001, 0x00000000);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
							{
								if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), unk_0xB177666FAB6F4417(Local_414.f_3)))
								{
									unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000002);
									func_401(0x00000001);
								}
								else
								{
									unk_0x28F5E4DA506AC0CA(-1031.788f, -2731.816f, 19.0546f, 50f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000001:
				if (func_402(Local_414.f_3))
				{
					if (!func_400(Local_414.f_4))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001A))
						{
							if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_414.f_4), 0xB41F1A34) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_414.f_4), 0xB41F1A34) != 0x00000000)
							{
								unk_0x132B85BCE016BCA0(unk_0x1B50683925F00106(Local_414.f_4), unk_0xB177666FAB6F4417(Local_414.f_3), -663.8057f, -952.3882f, 20.2985f, 0x00000004, 15f, 0x000C40AB, 5f, 5f, 0x00000000);
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001B))
				{
					if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
					{
						if (!func_124())
						{
							if (!unk_0x798A3F1296751F46())
							{
								unk_0x53491B90E4FD0E56(0x00000320);
							}
						}
					}
					else if (unk_0x757EF87A33649210())
					{
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000001B);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000004))
				{
					if (func_389(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000))
					{
						unk_0x28F5E4DA506AC0CA(-649.4202f, -954.0247f, 20.5269f, 20f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xDC355804A9511111();
						unk_0x386090053886DF05();
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000004);
					}
				}
				break;
			
			case 0x00000004:
				if (!func_400(Local_414.f_4))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001D))
					{
						if (func_402(Local_414.f_3))
						{
							unk_0x27F3789FF35EEDF1(unk_0x1B50683925F00106(Local_414.f_4), unk_0xB177666FAB6F4417(Local_414.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0x00000000, 60f, 0x00000001);
							unk_0x82E51BCA72537B6C(0x00000320);
							unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000001D);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000005))
					{
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_414.f_4), 0xEFC8537E) == 0x00000007)
						{
							unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000005);
						}
					}
				}
				break;
			
			case 0x00000005:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xCE98FBB3) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xCE98FBB3) != 0x00000000)
						{
							unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						}
					}
					else if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000006))
					{
						unk_0x5D96D8530B3D0904(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3), 0x00000006);
						unk_0x5D96D8530B3D0904(&(Global_26B66F.f_31B), 0x00000004);
						unk_0x0674E58A79778E99(&(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4), 0x00000002);
						func_363(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
						func_388();
						func_401(0x00000000);
						func_34("HLP_TAXI", 0xFFFFFFFF);
						if (func_57())
						{
							func_45(0x92AEAB9C, 0x000000C8, &uVar0, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_385(0xFFFFFF38, 0x00000000);
							unk_0xD6F9EF2CBF17C39A(0x000000C8, 0x00000000, 0x00000000);
						}
					}
				}
				break;
			
			case 0x00000006:
				if (!func_400(Local_414.f_4))
				{
					if (func_402(Local_414.f_3))
					{
						if (unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_414.f_4), 0xF09B15B3) != 0x00000001 && unk_0xD1960163A3042274(unk_0x1B50683925F00106(Local_414.f_4), 0xF09B15B3) != 0x00000000)
						{
							unk_0xFADC0A217229F6B5(unk_0x1B50683925F00106(Local_414.f_4), 0x00000001);
							unk_0xE072601B4380E9DF(unk_0x1B50683925F00106(Local_414.f_4), unk_0xB177666FAB6F4417(Local_414.f_3), 12f, 0x000C00A7);
							func_384(&(Local_414.f_3));
							func_384(&(Local_414.f_4));
						}
					}
				}
				break;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000001))
		{
			unk_0x10FEEAFF01E32639(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001A))
			{
				unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000001A);
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001C))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
			{
				if (!func_199(&uLocal_247))
				{
					func_217();
					func_22(&uLocal_247, 0x00000000, 0x00000000);
				}
				else if (func_198(&uLocal_247, 0x00001388, 0x00000000))
				{
					if (func_178(&uLocal_416, "MPTXIAU", "MPTXI_T1", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
					{
						unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000001C);
					}
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000005))
			{
				if (func_178(&uLocal_416, "MPTXIAU", "MPTXI_AR", 0x0000000C, 0x00000000, 0x00000000, 0x00000001))
				{
					unk_0x5D96D8530B3D0904(&iLocal_582, 0x0000001E);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000006))
		{
			func_383();
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_4, 0x00000002))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
				}
			}
		}
	}
}

void func_383()
{
	Global_26E1B2.f_102 = 0x00000001;
}

void func_384(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x82692E8F6A0D7A22(&iVar0);
	}
}

void func_385(int iParam0, int iParam1)
{
	func_387(iParam0, 0x00000001, 0x00000001, 0x00000000);
	if (iParam1 == 0x00000001)
	{
		func_386(iParam0, 0x00000000);
	}
}

void func_386(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_387(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 0x00000001)
	{
		iParam1 = 0x00000001;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0x00000000)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 0x00000001)
	{
		func_386(iVar1, 0x00000000);
	}
}

void func_388()
{
	unk_0xEAB026E686C0D991(0x00000000, 0x00000016, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000024, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000020, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000022, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000023, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000021, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000001F, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000001E, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000002C, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000008D, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000008C, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000107, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000108, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000008F, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000018, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000101, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000107, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000108, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000008F, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000106, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000105, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000025, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x00000019, 0x00000001);
	unk_0xEAB026E686C0D991(0x00000000, 0x0000001A, 0x00000001);
}

int func_389(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_56C3.f_6 = 0x00000001;
	if (Global_2537E2.f_4D1 && Global_2537E2.f_4D9)
	{
		func_397(0x00000000, bParam7);
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628() && !bParam7)
	{
		if (Global_2537E2.f_4D1)
		{
			func_397(0x00000000, bParam7);
		}
		return 0x00000000;
	}
	if ((unk_0xEB880D98B5988D0C() && !bParam7) && !unk_0x0C2635BB5127C8FB())
	{
		return 0x00000000;
	}
	if (!func_396())
	{
		if (func_395(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000) && !(func_394() || func_393()))
		{
			if (((bParam7 && func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000)) && unk_0x991B1F0980C62628()) && Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_DE == 0x00000001)
			{
			}
			else if (func_309() == 0x0000001C)
			{
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2537E2.f_4D1 && !bParam9)
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
		if ((unk_0x755FF954DAE327E1((vVar1.x - vParam0.x)) < 0.2f && unk_0x755FF954DAE327E1((vVar1.y - vParam0.y)) < 0.2f) && unk_0x755FF954DAE327E1((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x755FF954DAE327E1(fVar2) < 1f)
			{
				Global_2537E2.f_4D1 = 0x00000000;
				Global_2537E2.f_4D2 = 0x00000000;
				if (unk_0x0C2635BB5127C8FB())
				{
					unk_0x5D29A7ED2621B332();
				}
				return 0x00000001;
			}
		}
	}
	if (((!vParam0.x == Global_2537E2.f_4D3 || !vParam0.y == Global_2537E2.f_4D3.f_1) || !vParam0.z == Global_2537E2.f_4D3.f_2) || !fParam1 == Global_2537E2.f_4D6)
	{
		if (Global_2537E2.f_4D1 == 0x00000001)
		{
			if (unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Global_2537E2.f_4D7) < func_392(0x00000000))
			{
				return 0x00000000;
			}
			unk_0x5D29A7ED2621B332();
			Global_2537E2.f_4D2 = 0x00000001;
		}
		else
		{
			Global_2537E2.f_4D2 = 0x00000000;
		}
		Global_2537E2.f_4D3 = { vParam0 };
		Global_2537E2.f_4D6 = fParam1;
		Global_2537E2.f_4D1 = 0x00000000;
	}
	if (!Global_2537E2.f_4D1 && !unk_0x0C2635BB5127C8FB())
	{
		if (bParam2)
		{
			bParam3 = 0x00000000;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[0x0000002C], 0x00000010))
			{
				func_391(0x00000000);
			}
			if (!unk_0xC4AEA6B98479242E(unk_0x16F2683693E537C9(), &(Global_24B2D0.f_1F3)))
			{
				Global_24B2D0.f_1F3 = 0x00000000;
			}
		}
		if (bParam2)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0x6CFEA4CFD9C496C8(iVar0))
				{
					Global_2537E2.f_4D8 = 0x00000000;
				}
			}
		}
		if (Global_2537E2.f_4D8 > 0xFFFFFFFF)
		{
			Global_2537E2.f_4D7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_4D1 = 0x00000001;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xAFE0D3608EDA7039(iVar0))
						{
							unk_0xA47B46945FF6DE74(iVar0, vParam0, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xC023D1C4BF532815(iVar0, fParam10, 0f, fParam1, 0x00000002, 0x00000001);
							}
						}
						else
						{
							unk_0x0C8A454B494DAA0D(iVar0);
						}
					}
					else
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
					}
				}
				else
				{
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fParam1);
				}
				func_397(bParam4, bParam7);
				return 0x00000001;
			}
			else
			{
				unk_0x066C43E677C08D5C();
				unk_0x28B8A2632901EC2F(unk_0xD803B885F5E47A62(), vParam0, fParam1, bParam2, bParam8, 0x00000000);
			}
			Global_2537E2.f_4D7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_4D1 = 0x00000001;
		}
	}
	if (Global_2537E2.f_4D1)
	{
		Global_56C3.f_6 = 0x00000001;
		Global_2537E2.f_4D7 = unk_0x2B6E0A53779D29EA();
		if (Global_2537E2.f_4D8 > 0xFFFFFFFF)
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
			}
			if (func_390(&(Global_2537E2.f_4D8), vParam0, fParam1, iVar0))
			{
				func_397(bParam4, bParam7);
				return 0x00000001;
			}
		}
		else
		{
			if (bParam7)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_2537E2.f_4D3) < 2f)
				{
					if (unk_0x0C2635BB5127C8FB())
					{
						unk_0x5D29A7ED2621B332();
					}
					func_397(bParam4, bParam7);
					return 0x00000001;
				}
			}
			if (!unk_0x0C2635BB5127C8FB())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						unk_0xC023D1C4BF532815(iVar0, fParam10, 0f, fParam1, 0x00000002, 0x00000001);
						Global_2537E2.f_4D9 = 0x00000001;
						return 0x00000000;
					}
				}
				func_397(bParam4, bParam7);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_390(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(Global_2537E2.f_4DA) && !unk_0x437347B10A200C4B(Global_2537E2.f_4DA, 0x00000000))
	{
		unk_0x0C8A454B494DAA0D(Global_2537E2.f_4DA);
	}
	switch (*uParam0)
	{
		case 0x00000000:
			Global_2537E2.f_4DA = iParam3;
			unk_0x0C8A454B494DAA0D(Global_2537E2.f_4DA);
			if (unk_0xAFE0D3608EDA7039(Global_2537E2.f_4DA))
			{
				if (!unk_0x437347B10A200C4B(Global_2537E2.f_4DA, 0x00000000))
				{
					unk_0xD8F6A53F4799FAFE(Global_2537E2.f_4DA, fParam2);
					unk_0xA47B46945FF6DE74(Global_2537E2.f_4DA, vParam1, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

void func_391(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_24B2D0.f_A7A;
	if ((unk_0x7E369B13C7215476() && Global_24B2D0.f_A78 == 0x00000000) && iParam0 == 0x00000000)
	{
		iVar0 = 0x000000FF;
	}
	if (!iVar0 == Global_24B2D0.f_A77)
	{
		if (!unk_0xEFFB47DC2D8F23F9())
		{
			Global_24B2D0.f_A77 = iVar0;
		}
	}
}

int func_392(bool bParam0)
{
	if (unk_0x757EF87A33649210())
	{
		return 0x00002710;
	}
	if (bParam0)
	{
		return 0x00001388;
	}
	return 0x000003E8;
}

bool func_393()
{
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x0000000C)) && Global_19DEEC == 0x00000008);
}

bool func_394()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 0x0000000C) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0x00000000));
}

int func_395(int iParam0, bool bParam1, int iParam2)
{
	if (Global_25033E[iParam0 /*421*/].f_DE == 0x00000063)
	{
		if ((iParam2 && Global_25033E[iParam0 /*421*/].f_E1 == 0x00000000) || iParam2 == 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (Global_25033E[iParam0 /*421*/].f_DE == 0x0000000D)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_396()
{
	return Global_140856;
}

void func_397(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
	}
	if (!bParam1)
	{
		unk_0x066C43E677C08D5C();
	}
	if (unk_0x0C2635BB5127C8FB())
	{
		unk_0x5D29A7ED2621B332();
	}
	func_365();
	if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0x0000000E) && !func_399())
	{
		func_398();
	}
}

void func_398()
{
	Global_26DA2B.f_52 = 0x00000001;
}

int func_399()
{
	if (!unk_0xA14BB9332558B949() && !func_396())
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_3A31D[0x00000000 /*24*/].f_11, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_400(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(iParam0));
	}
	return 0x00000001;
}

void func_401(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x0000000F))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x0000000F);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x0000000F))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x0000000F);
	}
}

int func_402(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		return !func_403(unk_0xB177666FAB6F4417(iParam0));
	}
	return 0x00000000;
}

int func_403(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
		else if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0x00000008, 0x00000000))
		{
			func_65(iParam0, 0x00000008, 0x00000000);
			func_405(iParam0);
		}
	}
	else if (func_26(iParam0, 0x00000008, 0x00000000))
	{
		func_63(iParam0, 0x00000008, 0x00000000);
		func_405(iParam0);
	}
}

void func_405(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 0x00000001;
	Global_181EC.f_B4 = 0x00000001;
}

void func_406(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_181EC.f_9[iParam0] = 0x00000001;
	}
	else
	{
		Global_181EC.f_9[iParam0] = 0x00000000;
	}
}

void func_407(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 0x00000001;
	}
	else
	{
		Global_181EC.f_8 = 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_405(iVar0);
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_409()
{
	return Local_414;
}

int func_410()
{
	return 0x00000001;
}

int func_411(int iParam0)
{
	return Local_581[iParam0 /*5*/];
}

int func_412(int iParam0)
{
	return Local_581[iParam0 /*5*/].f_2;
}

int func_413(bool bParam0)
{
	if (func_415())
	{
		if (bParam0)
		{
			if (!Global_180605 && !func_414(unk_0xD803B885F5E47A62(), 0x00000002))
			{
				unk_0x82A772610883F395("MinigameTransitionIn", 0x00000000, 0x00000001);
				func_353(0x00000000, 0x00000000);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_414(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_415()
{
	return Global_2537E2.f_2;
}

void func_416(bool bParam0)
{
	bool bVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (bLocal_588)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001F))
				{
					func_32(0x00000077, 0x00000001, 0xFFFFFFFF, 0x00000001);
					func_32(0x00000073, 0x00000001, 0xFFFFFFFF, 0x00000001);
				}
				func_733(0x00000001);
				bVar0 = 0x00000001;
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_581[unk_0x57270EE11514DC67() /*5*/].f_3, 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_582, 0x0000001F))
			{
				func_32(0x00000077, 0x00000001, 0xFFFFFFFF, 0x00000001);
				func_32(0x00000073, 0x00000001, 0xFFFFFFFF, 0x00000001);
			}
			bVar0 = 0x00000001;
		}
	}
	func_216(&Local_62, 0x00000000, bParam0);
	if (unk_0x8CD06866876216F2())
	{
		if (Global_2537E2.f_EA3)
		{
			func_726(0x00000000, 0x00000001, 0x00000000, 0x00000001);
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		func_401(0x00000000);
	}
	unk_0x2952D66A502EA873(Local_62.f_7A, 0x00000000);
	unk_0x842F1AEB2FCC00B7(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 0x00000001);
	unk_0x842F1AEB2FCC00B7(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0x00000001);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_31B), 0x00000004);
	func_98(0x00000000);
	func_61(0x00000000);
	func_725();
	func_724(iLocal_61, 0x00000000);
	func_197(&(Global_2537E2.f_F9D));
	Global_2537E2.f_F9B = 0x00000000;
	Global_2537E2.f_F9A = 0x00000000;
	Global_2537E2.f_F9C = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F4, 0x00000001);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F3, 0x00000001);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F2, 0x00000001);
	}
	if (bVar0)
	{
		func_419(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
	}
	else
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_419(0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000001);
	}
	unk_0x0674E58A79778E99(&(Global_26B66F.f_31B), 0x00000000);
	func_407(0x00000000);
	func_406(0x00000004, 0x00000000);
	func_406(0x00000001, 0x00000000);
	func_406(0x00000000, 0x00000000);
	func_406(0x00000002, 0x00000000);
	func_406(0x00000003, 0x00000000);
	func_404(iLocal_61, 0x00000000);
	func_388();
	func_35();
	if (unk_0xE4EDC4B0E92C078B(Global_181EC.f_EB[iLocal_61]))
	{
		unk_0x661342B9651D16E2(Global_181EC.f_EB[iLocal_61], 0x00000000);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_585))
	{
		unk_0x142CC44DB769B57E(&iLocal_585);
	}
	if (unk_0x8CD06866876216F2())
	{
		func_418(0x00000000);
		func_200(0x00000000);
	}
	func_417(Local_414.f_5);
}

void func_417(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Param0)) >= 0x000003E8)
		{
			unk_0x8083E47CDF768A1E();
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_418(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000005);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000005);
	}
}

void func_419(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var9;
	int iVar10;
	char* sVar11;
	struct<2> Var12;
	bool bVar13;
	int iVar14;
	
	iVar0 = unk_0xD803B885F5E47A62();
	iVar1 = Global_184507[iVar0 /*876*/];
	func_723();
	func_719();
	unk_0x554A390AA8A21EE8(0x00000000);
	func_718();
	Global_EC5D9 = 0x00000000;
	Global_1801B8 = 0x00000000;
	func_717();
	unk_0x428D9DCBB4E4492F(0x00000000);
	func_716();
	Global_C0073 = 0x00000000;
	Global_C0073.f_1 = 0x00000000;
	Global_180536 = 0x00000000;
	Global_240000 = 0x00000000;
	Global_240001 = 0x00000000;
	func_715(0x00000000);
	Global_18052B = 0x00000000;
	Global_18052A = 0x00000000;
	Global_180542 = 0x00000000;
	Global_180618 = 0x00000000;
	Global_18061E = 0x00000000;
	Global_180424 = 0x00000000;
	Global_1808C0 = 0x00000001;
	Global_1805FC = 0x00000000;
	Global_180537 = 0xFFFFFFFF;
	func_714(0x00000000);
	unk_0x0674E58A79778E99(&(Global_240006.f_1), 0x00000005);
	if (!func_713() && !func_711())
	{
		func_710();
	}
	func_709();
	func_708();
	func_707();
	func_706();
	func_705();
	if (unk_0x8CD06866876216F2())
	{
		func_704();
		func_703();
	}
	if (func_702() || !func_701())
	{
		func_700();
		func_699(0x00000001, 0x00000001, 0x00000001);
		func_698();
		func_697();
		if (iVar0 != 0xFFFFFFFF)
		{
			Global_18D38C[iVar0 /*38*/].f_1 = 0x00000000;
			Global_18D38C[iVar0 /*38*/].f_2 = 0x00000000;
			Global_18D38C[iVar0 /*38*/] = 0x00000000;
		}
	}
	func_696();
	if ((((Global_440000 != 0x00000006 && func_695(Global_440000.f_2F9AE) != 0x0000000E) && func_695(Global_440000.f_2F9AE) != 0x0000000F) && !func_341()) && !func_711())
	{
		if (func_14(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001))
		{
			if (unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
			{
				unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0x00000001);
			}
		}
	}
	Global_1801CD = 0x00000000;
	if (Global_193B22.f_9 == 0x00000004)
	{
		if (func_694(unk_0xD803B885F5E47A62()) || func_693(unk_0xD803B885F5E47A62()))
		{
			Global_1801CD = 0x00000001;
		}
	}
	func_691();
	if (func_690())
	{
		func_689();
	}
	func_688();
	Global_440000.f_30298 = 0x00000000;
	Global_193AFA.f_4 = 0x00000000;
	if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_1D, 0x00000001) && !func_687())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_E, 0x00000011))
		{
			unk_0xB72C6E8042748B1A(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x14CC404CCC1FD25C(0x00000001);
		}
		else
		{
			unk_0xB72C6E8042748B1A(unk_0xD803B885F5E47A62(), 0x00000001);
			unk_0x14CC404CCC1FD25C(0x00000000);
		}
	}
	StringCopy(&(Global_440000.f_2F9A6), "", 32);
	if (!func_711())
	{
		unk_0xB8E3919889462ACD();
		unk_0x3584F71E5CA29322(0x00000012);
		if ((bParam3 && !func_686()) && !func_685())
		{
			unk_0x3FC8DBCC154CA56B();
		}
	}
	iVar3 = 0x00000000;
	while (iVar3 <= 0x0000001F)
	{
		Global_18D1B3[iVar3] = 0x00000000;
		Global_18D192[iVar3] = 0x00000000;
		iVar3++;
	}
	if (iVar1 == 0x00000000)
	{
		unk_0x5D96D8530B3D0904(&(Global_2567E2.f_16E2), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_2567E2.f_16E2), 0x00000003);
	}
	if (iVar0 != 0xFFFFFFFF && Global_2564C8.f_239.f_A != 0x00000000)
	{
		Global_18D38C[unk_0xD803B885F5E47A62() /*38*/].f_2 = Global_2564C8.f_239.f_A;
	}
	if (func_415() || (iVar0 != 0xFFFFFFFF && Global_184507[iVar0 /*876*/].f_2DD))
	{
		if (!bParam4)
		{
			Global_440000 = 0x00000002;
			func_683();
			Global_440000 = 0x00000000;
		}
		else
		{
			func_683();
		}
		func_682();
		func_681(0x00000001, 0x00000001);
		func_699(0x00000001, 0x00000001, 0x00000000);
		if (iVar0 != 0xFFFFFFFF)
		{
			Global_18D38C[iVar0 /*38*/].f_1 = 0x00000000;
			Global_18D38C[iVar0 /*38*/].f_2 = 0x00000000;
			Global_18D38C[iVar0 /*38*/] = 0x00000000;
		}
		func_680(0x00000001);
		if (func_679())
		{
			func_678();
		}
		if (!func_17(unk_0xD803B885F5E47A62()))
		{
			func_676(0x00000004);
		}
		func_698();
		func_675(0x00000000);
		func_674();
		Global_1808B8 = 0x00000000;
	}
	if (!func_673())
	{
		func_672();
		if (func_671())
		{
			if (func_670())
			{
				func_682();
			}
		}
		func_680(0x00000001);
		if (!func_669())
		{
			Global_2567E2.f_1833 = 0x00000000;
			Global_2567E2.f_1834 = 0x00000000;
			Global_2567E2.f_1832 = 0x00000000;
			Global_2567E2.f_1831 = 0x00000000;
			Global_2567E2.f_18E3 = 0x00000000;
		}
	}
	else
	{
		func_668(unk_0xD803B885F5E47A62(), 0x00000000);
	}
	func_667((Global_193B22.f_9 != 0x00000004 && !func_673()));
	func_666((Global_193B22.f_9 != 0x00000004 && !func_673()));
	func_665((Global_193B22.f_9 != 0x00000004 && !func_673()));
	if (func_669())
	{
		Global_2567E2.f_188D = 0x00000001;
	}
	else
	{
		Global_2567E2.f_188D = 0x00000000;
	}
	if (!func_673())
	{
		if (func_669())
		{
			Global_2567E2.f_188E = 0x00000001;
		}
		else
		{
			Global_2567E2.f_188E = 0x00000000;
		}
	}
	if (func_663())
	{
		if (func_662())
		{
			Global_2567E2.f_188F = 0x00000001;
		}
		else
		{
			Global_2567E2.f_188F = 0x00000000;
		}
	}
	if (!func_713())
	{
		Global_193B3B.f_541 = 0x00000000;
	}
	if (!func_673() && !func_713())
	{
		func_681(0x00000001, Global_193B22.f_9 != 0x00000004);
		func_699(0x00000001, 0x00000001, 0x00000000);
		func_661(0x00000000);
		func_660();
		Global_1808BA = 0x00000000;
		if (iVar0 != 0xFFFFFFFF)
		{
			Global_18D38C[iVar0 /*38*/].f_1 = 0x00000000;
			Global_18D38C[iVar0 /*38*/].f_2 = 0x00000000;
			Global_18D38C[iVar0 /*38*/] = 0x00000000;
		}
	}
	func_657(0x00000001, 0xFFFFFFFF);
	if (func_656())
	{
		func_655();
	}
	if (unk_0xA14BB9332558B949())
	{
		unk_0x23060D17DC6BDA8D();
	}
	if ((!func_686() && !func_673()) && !func_685())
	{
		func_650();
	}
	Global_440000.f_30294 = 0x00000000;
	func_649();
	Global_180524 = 0xFFFFFFFF;
	Global_18D1E3 = 0xFFFFFFFF;
	Global_18D1D9 = 0xFFFFFFFF;
	Global_18D1DC = 0xFFFFFFFF;
	Global_180529 = 0x00000000;
	Global_18D1DA = 0x00000000;
	Global_180607 = 0x00000000;
	Global_1805FF = 0x00000000;
	Global_18D1E4 = 0x00000000;
	func_648(0x00000000);
	func_647();
	Global_184507[iVar0 /*876*/].f_2DD = 0x00000000;
	Global_18D1D7 = 0f;
	Global_18D1D8 = 0f;
	Global_180608 = 0x00000000;
	Global_180609 = 0xFFFFFFFF;
	func_646(0x00000000);
	Global_1805FD = 0x00000000;
	Global_180425 = 0x00000000;
	func_645();
	unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0x00000000);
	unk_0x7352ACF3368DF65F("DisableFlightMusic", 0x00000000);
	func_644(0x00000001);
	if (func_643())
	{
		func_642();
	}
	if (func_641())
	{
		if (func_639(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x981819F6C45DDB49() < 0x00000002)
			{
				func_638();
				func_637(0x00000001);
			}
			else
			{
				func_636();
			}
			if (Global_193B22.f_9 != 0xFFFFFFFF)
			{
				func_635();
			}
		}
		else if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000000)
		{
			if (Global_193B22.f_9 != 0xFFFFFFFF)
			{
				func_635();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_184507[iVar0 /*876*/].f_C6 = 0x00000000;
	if (bVar4 && !func_713())
	{
		func_634();
	}
	if (!bVar4)
	{
		func_633(0x00000000);
	}
	if ((func_632() != 0x00000027 && func_632() != 0x00000026) && !func_631())
	{
		Global_18019F = { 0f, 0f, 0f };
	}
	if (func_630() && func_254())
	{
	}
	else
	{
		func_629();
	}
	func_628();
	func_637(0x00000000);
	iVar6 = 0x00000000;
	if (!bVar4)
	{
		if (Global_193B22.f_9 == 0x00000006)
		{
			iVar6 = 0x00000001;
		}
		if (!func_627())
		{
			func_626(0x00000000, iVar6);
		}
	}
	unk_0xD65169195EE68192(0x00000000);
	if (unk_0x8CD06866876216F2())
	{
		switch (Global_193B22.f_9)
		{
			case 0x00000001:
				if (!func_625() && func_622(0x00000000) > 0x00000000)
				{
					Global_19823F[0x00000000 /*8*/].f_5 = 0x00000001;
				}
				if (!bVar4)
				{
					func_620();
					func_619();
				}
				break;
			
			case 0x00000006:
				Global_1808B8 = 0x00000000;
				if (!bVar4)
				{
					func_620();
				}
				func_619();
				Global_193B22 = 0x00000000;
				Global_193B22.f_16 = { 0f, 0f, 0f };
				Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000000;
				StringCopy(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D8), "", 24);
				Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D5 = { 0f, 0f, 0f };
				func_618(0x00000000);
				break;
			
			case 0x00000002:
				func_617(0x00000000);
				if (!func_616() || (func_616() && unk_0xEA6BC48857E0AC4C(&(Global_2564C8.f_1D))))
				{
					func_615(Global_193B22.f_10);
					func_614(Global_193B22.f_10);
				}
				iVar5 = Global_184507[iVar0 /*876*/].f_B;
				if (iVar5 != func_140())
				{
					if (unk_0x40B8C182D63932FC(iVar5))
					{
						Global_2567E2.f_16E3 = { func_78(iVar5) };
					}
					else
					{
						iVar7 = 0x00000001;
					}
				}
				else
				{
					iVar7 = 0x00000001;
				}
				if ((iVar7 && func_616()) && unk_0x0DC0B2DBBD52B0C0() == 0x00000001)
				{
					Global_2567E2.f_16E3 = { func_613() };
				}
				if (((((Global_440000.f_CE > 0x00000001 && !func_605()) && !func_604(Global_440000.f_2F9AE)) && !func_603(Global_440000.f_2F9AE)) && Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_1C > 0xFFFFFFFF) && Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_1C < 0x00000004)
				{
					func_602(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_1C);
				}
				else
				{
					func_601();
				}
				break;
			
			case 0x00000003:
				func_617(0x00000000);
				iVar2 = 0x00000001;
				func_600();
				iVar5 = Global_184507[iVar0 /*876*/].f_B;
				if (iVar5 != func_140())
				{
					if (unk_0x40B8C182D63932FC(iVar5))
					{
						Global_2567E2.f_16E3 = { func_78(iVar5) };
					}
				}
				if (((Global_440000.f_CE > 0x00000001 && !func_605()) && !func_604(Global_440000.f_2F9AE)) && !func_603(Global_440000.f_2F9AE))
				{
					func_602(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_1C);
				}
				else
				{
					func_601();
				}
				break;
			
			case 0x00000004:
				func_617(0x00000000);
				iVar2 = 0x00000001;
				if (func_599())
				{
					func_598();
				}
				else if (func_597())
				{
				}
				else
				{
					if (!(func_596() || func_669()) || !func_595())
					{
						Global_2567E2.f_1833 = 0x00000000;
						Global_2567E2.f_1834 = 0x00000000;
					}
					if (!func_595())
					{
						Global_2567E2.f_1832 = 0x00000000;
						Global_2567E2.f_1831 = 0x00000000;
					}
				}
				if (func_694(unk_0xD803B885F5E47A62()) || func_693(unk_0xD803B885F5E47A62()))
				{
					Global_C0003.f_22++;
				}
				else if (func_594())
				{
					Global_C0031.f_22++;
					if (Global_C0031.f_40 == 0x00000000)
					{
						Global_C0031.f_40 = 0x00000001;
					}
				}
				else if (func_592())
				{
					Global_198EA8.f_11++;
				}
				if (func_591(Global_440000.f_2F9AE))
				{
					if (Global_198E58.f_E == 0x00000000)
					{
						Global_198E58.f_E = 0x00000001;
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_C, 0x00000016))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_C, 0x0000000F))
					{
						func_590(Global_440000.f_3027D);
					}
					else
					{
						func_589(Global_440000.f_38015, Global_440000.f_38016);
					}
					if (Global_193B22.f_D > 0xFFFFFFFF)
					{
						unk_0xF60E6F759DB05AEB(Global_193B22.f_D, Global_193B22.f_E, 0x00000000);
					}
					else if (func_588() > 0xFFFFFFFF)
					{
						func_586(func_588(), 0x00000000);
					}
				}
				if (func_585())
				{
					Var8 = { func_584() };
					func_583(Var8);
					if (func_582() != 0xFFFFFFFF)
					{
						Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_1C = func_582();
					}
					func_581();
					func_580();
				}
				else
				{
					func_600();
				}
				if (!func_255(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					unk_0x9D57AD477C5339C8(0x00000000);
					func_368(0x00000000, 0x00000000, 0x00000001);
				}
				break;
			
			case 0x00000005:
				func_617(0x00000000);
				iVar2 = 0x00000001;
				func_600();
				break;
			
			case 0x00000008:
				if (!func_616())
				{
					func_615(Global_193B22.f_10);
				}
				break;
			
			case 0x00000009:
				func_617(0x00000000);
				iVar2 = 0x00000001;
				func_600();
				func_614(Global_440000.f_2FACD);
				Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D8 = { Global_440000.f_2FACD };
				if (func_579())
				{
					func_578();
				}
				if (!func_255(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					unk_0x9D57AD477C5339C8(0x00000000);
					func_368(0x00000000, 0x00000000, 0x00000001);
				}
				break;
			
			case 0x0000000A:
				func_558(0x0000000A, 0f, 0f, 0f, Var9);
				func_557();
				break;
		}
	}
	else
	{
		Global_1808B8 = 0x00000000;
	}
	if (iVar2 || func_693(unk_0xD803B885F5E47A62()))
	{
		if ((func_556(unk_0xD803B885F5E47A62()) || func_694(unk_0xD803B885F5E47A62())) || func_693(unk_0xD803B885F5E47A62()))
		{
			if (Global_195DED > 0x00000000)
			{
				Global_2567E2.f_1.f_B0C.f_D = Global_195DED;
				Global_2567E2.f_1.f_B0C = { Global_195DED.f_1 };
			}
		}
		else
		{
			func_555();
		}
	}
	Global_2567E2.f_1.f_34A = 0x00000000;
	unk_0x0674E58A79778E99(&Global_180429, 0x00000000);
	func_554(0x00000000);
	Global_18052E = 0x00000000;
	Global_1805F8 = 0xFFFFFFFF;
	Global_18D191 = 0x00000000;
	Global_1406B6 = 0x00000000;
	Global_193B22.f_1 = 0x00000000;
	Global_193B22.f_2 = 0x00000000;
	if (func_553() == 0x00000000)
	{
		if (Global_193B22.f_9 == 0xFFFFFFFF && bVar4 == 0x00000000)
		{
			func_545(0x00000000);
		}
		else
		{
			Global_193B22.f_9 = 0xFFFFFFFF;
		}
	}
	func_544();
	if (func_543())
	{
		func_542();
	}
	if (func_541())
	{
		func_540();
	}
	if (!unk_0xA14BB9332558B949())
	{
		unk_0x5F30A037D837553E(0x00000001);
	}
	if (func_553() == 0x00000000)
	{
		if (iParam0 && iParam2 != 0x00000005)
		{
			if (((((!func_539(Global_184507[iVar0 /*876*/]) && !func_686()) && !bVar4) && !func_396()) && !func_673()) && !func_685())
			{
				func_538(0x00000001);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_537();
	Global_193B22.f_1 = 0x00000000;
	if (!func_641())
	{
		func_536();
	}
	if (Global_184507[iVar0 /*876*/] != 0xFFFFFFFF)
	{
		iParam2 = iParam2;
		if (func_535(Global_184507[iVar0 /*876*/]))
		{
			if (unk_0x58424C49F8924842())
			{
				iVar10 = func_518(0x00000000);
				func_515(0x000004BC, 0xFFFFFFFF);
				func_510(joaat("mpply_mgame_cheat_end"), iVar10);
				if (iVar10 > 0x00000000)
				{
					func_510(joaat("mpply_activity_ended"), 0x00000001);
				}
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0xE0459E75FBA5CC92(unk_0xD803B885F5E47A62());
	}
	func_508();
	if (Global_193B22 == 0x00000000)
	{
		if (!bVar4)
		{
			Global_184507[iVar0 /*876*/].f_B = 0xFFFFFFFF;
			Global_184507[iVar0 /*876*/].f_C = 0x00000000;
		}
	}
	if (bVar4)
	{
		func_538(0x00000000);
		Global_184507[iVar0 /*876*/].f_C = 0x00000001;
		Global_184507[iVar0 /*876*/].f_B = func_507(unk_0xD803B885F5E47A62());
		unk_0x9D57AD477C5339C8(0x00000000);
		func_368(0x00000000, 0x00000000, 0x00000001);
		if (func_506())
		{
			func_504();
		}
	}
	if ((Global_184507[iVar0 /*876*/] < 0x0000000A && Global_184507[iVar0 /*876*/] != 0xFFFFFFFF) && !func_396())
	{
		if ((!unk_0xEA6BC48857E0AC4C(&(Global_184507[iVar0 /*876*/].f_93)) && Global_184507[iVar0 /*876*/] != 0x00000005) && Global_184507[iVar0 /*876*/] != 0x00000094)
		{
			func_501(&(Global_184507[iVar0 /*876*/].f_93));
		}
	}
	if (Global_184507[iVar0 /*876*/] != 0x00000006)
	{
		Global_193AED = 0x00000001;
	}
	Global_184507[iVar0 /*876*/] = 0xFFFFFFFF;
	Global_184507[iVar0 /*876*/].f_27.f_2 = 0xFFFFFFFF;
	Global_184507[iVar0 /*876*/].f_27.f_10 = 0xFFFFFFFF;
	Global_184507[iVar0 /*876*/].f_27.f_1 = 0xFFFFFFFF;
	Global_440000 = 0x00000000;
	if (!bVar4)
	{
		func_500(0x00000000);
	}
	Global_184507[iVar0 /*876*/].f_27.f_12 = 0x00000000;
	unk_0x0674E58A79778E99(&(Global_184507[unk_0x6E61BE9E61434AC1() /*876*/].f_2DB), 0x00000000);
	unk_0xF9FD1FFF80EFABE1(0x00000000, 0x00000000);
	if (iVar1 != 0x00000006 && iVar1 != 0x00000094)
	{
		unk_0xC60408C24B32AAC4();
		Global_2590A1 = 0x00000000;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_184507[iVar0 /*876*/].f_93), sVar11, 24);
		StringCopy(&(Global_184507[iVar0 /*876*/].f_99), sVar11, 24);
		func_499();
	}
	StringCopy(&(Global_18B288[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_184507[iVar0 /*876*/].f_A7), sVar11, 64);
	Global_18D38C[iVar0 /*38*/].f_1F = { Var12 };
	Global_18D38C[iVar0 /*38*/].f_21 = { Var12 };
	Global_180602 = 0x00000000;
	Global_180603 = 0x00000000;
	Global_180431 = 0xFFFFFFFF;
	bVar13 = 0x00000000;
	func_498();
	func_497();
	func_496();
	if (func_495())
	{
		func_494();
	}
	if (func_493() && unk_0xA14BB9332558B949())
	{
		func_492();
		func_363(unk_0xD803B885F5E47A62(), 0x00000000, 0x0000E004, 0x00000000);
	}
	if (func_491())
	{
		func_490();
	}
	else if (func_489())
	{
		func_490();
	}
	else if (func_488())
	{
		func_490();
	}
	else if (func_487())
	{
		func_490();
	}
	else if (func_486())
	{
		func_490();
	}
	else if (func_553())
	{
		func_490();
	}
	else if (func_485() && func_484())
	{
		func_490();
	}
	else if (func_483())
	{
		func_490();
	}
	else
	{
		func_482();
		if (!Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C && !func_713())
		{
			if (unk_0xA14BB9332558B949())
			{
				if (func_506())
				{
					func_481();
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_1C, 0x0000000A))
					{
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							Global_2567E2.f_B1E.f_C5 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
						}
					}
					func_480();
					func_698();
					func_479(0x00000006);
					func_619();
					if (bVar4)
					{
						func_675(0x00000000);
					}
				}
				func_478();
				func_477();
				func_476();
				if (Global_2567E2.f_B1E.f_4 == 0x00000002)
				{
					Global_2567E2.f_B1E.f_4 = 0x00000001;
				}
				if (func_255(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					func_475();
				}
				func_474();
				Global_2567E2.f_B1E = 0x00000000;
			}
			else
			{
				func_473();
				func_490();
			}
		}
		else
		{
			if (!func_669() && !func_713())
			{
			}
			func_473();
			func_490();
		}
	}
	if ((((((((((!func_491() && !func_472()) && !func_484()) && !func_485()) && !func_488()) && !func_489()) && !func_471()) && !func_486()) && !func_553()) && !func_487()) && !func_470())
	{
		if (!func_469())
		{
			func_468();
			func_466();
			func_465();
			func_463(0x00000001);
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x09BE1E6DF7B80B43())
		{
			if (!unk_0xF35E2CBC969C0B53())
			{
				if (!func_462())
				{
					if (!bVar13)
					{
						if (func_17(unk_0xD803B885F5E47A62()))
						{
							unk_0xB24A64FA3FB418D8();
							unk_0xC3BCD22813D59BCD();
						}
					}
				}
			}
		}
	}
	if (!func_396())
	{
		StringCopy(&(Global_440000.f_2F9B5), "", 64);
	}
	if (func_461(0x00000074, &iVar14))
	{
		func_460(iVar14);
	}
	if (func_461(0x0000007B, &iVar14))
	{
		func_460(iVar14);
	}
	if (!func_713())
	{
		func_452();
	}
	else if (func_451())
	{
		func_450();
	}
	func_449();
	if (!func_673() && !func_669())
	{
		func_448();
	}
	iVar3 = 0x00000000;
	while (iVar3 < 0x0000001B)
	{
		Global_19DA6F[iVar3] = 0xFFFFFFFF;
		Global_19DA8B[iVar3] = 0xFFFFFFFF;
		Global_19DAA7[iVar3] = 0xFFFFFFFF;
		iVar3++;
	}
	func_442();
	func_420(bParam3);
}

void func_420(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_641())
		{
		}
		else if ((((!func_673() && !func_669()) && !func_713()) && Global_193B22.f_9 != 0x00000009) && Global_193B22.f_9 != 0x00000004)
		{
			func_586(0x00000000, 0x00000001);
		}
	}
	unk_0xB547E3FFEB27073E();
	if (!func_441(unk_0xD803B885F5E47A62()) && !Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2EF)
	{
		func_440();
	}
	if (func_439())
	{
		func_438(0x00000001);
		func_437(0x00000001);
	}
	if ((((bParam0 && !func_436()) && !func_673()) && !Global_40001.f_1273) && !func_435())
	{
		unk_0x3F8ED0E306F22B54();
	}
	unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
	unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
	func_427(&uVar0, 0xFFFFFFFF);
	if ((func_19() == 0x00000000 && !func_124()) && !func_673())
	{
		if (func_426())
		{
			func_425();
		}
		else
		{
			func_422(0x446C10DC, 0x0000001C, 0x00000000);
		}
	}
	func_421(0x00000000);
}

void func_421(int iParam0)
{
	if (!Global_195C1A == iParam0)
	{
		Global_195C1A = iParam0;
	}
}

void func_422(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_424(iParam1, iParam2))
	{
		iVar0 = func_423();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_423()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000009;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (Global_258B8D[iVar1] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

int func_424(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000016)
	{
		return 0x00000001;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 0x00000003) || iParam0 == 0x0000000A) || iParam0 == 0x0000000B) || iParam0 == 0x0000001B) || iParam0 == 0x0000001C) || iParam0 == 0x0000001D) || iParam0 == 0x0000001E)
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_425()
{
	unk_0x5D96D8530B3D0904(&(Global_EA450.f_8), 0x00000016);
}

bool func_426()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 0x00000015);
}

void func_427(var uParam0, int iParam1)
{
	func_433(uParam0, iParam1);
	func_428(iParam1);
}

void func_428(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_29();
	}
	iVar0 = func_432(iParam0);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	if (func_429())
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000001))
		{
			func_32(0x00000085, 0x00000001, 0xFFFFFFFF, 0x00000001);
		}
	}
}

int func_429()
{
	if (func_431() && func_430(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_430(int iParam0)
{
	return Global_140676[iParam0];
}

var func_431()
{
	return func_430(func_29() + 1);
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_29();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000392;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000393;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000394;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000395;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000396;
			break;
	}
	return iVar0;
}

void func_433(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_29();
	}
	iVar1 = func_434(iParam1);
	iVar2 = unk_0x0A4C9A3D51EAE31F(iVar1);
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000001))
	{
		func_515(0x000004B7, iParam1);
		func_510(joaat("mpply_dm_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000001);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000002))
	{
		func_515(0x000004B9, iParam1);
		func_510(joaat("mpply_race_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000002);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000003))
	{
		func_515(0x0000045E, iParam1);
		func_510(joaat("mpply_mc_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000003);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000004))
	{
		func_515(0x000004BB, iParam1);
		func_510(joaat("mpply_mgame_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000004);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000005))
	{
		func_515(0x00000783, iParam1);
		func_510(joaat("mpply_cap_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000005);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000006))
	{
		func_515(0x00000785, iParam1);
		func_510(joaat("mpply_sur_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000006);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000007))
	{
		func_515(0x00000787, iParam1);
		func_510(joaat("mpply_lts_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000007);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000008))
	{
		func_515(0x00000789, iParam1);
		func_510(joaat("mpply_para_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000008);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x00000009))
	{
		func_515(0x000025A5, iParam1);
		func_510(0x1B8EB69E, 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x00000009);
		bVar0 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(iVar2, 0x0000001A))
	{
		func_515(0x0000078B, iParam1);
		func_510(joaat("mpply_fmevn_cheat_start"), 0x00000002);
		func_510(joaat("mpply_activity_started"), 0x00000001);
		unk_0x0674E58A79778E99(&iVar2, 0x0000001A);
		bVar0 = 0x00000001;
	}
	if (bVar0)
	{
		*uParam0 = 0x00000001;
		unk_0x25C34E9F657F1C79(iVar2, iParam1);
	}
}

int func_434(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_29();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x0000038D;
			break;
		
		case 0x00000001:
			iVar0 = 0x0000038E;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000038F;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000390;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000391;
			break;
	}
	return iVar0;
}

int func_435()
{
	if (func_694(unk_0xD803B885F5E47A62()) || func_693(unk_0xD803B885F5E47A62()))
	{
		if (func_596() || func_669())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_436()
{
	return Global_180605;
}

void func_437(int iParam0)
{
	Global_2567E2.f_18E2 = iParam0;
}

void func_438(int iParam0)
{
	Global_2567E2.f_1830 = iParam0;
}

int func_439()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000006)
	{
		if (!unk_0xEA6BC48857E0AC4C(&(Global_440000.f_2FAEC[iVar1 /*6*/])))
		{
			iVar0 = 0x00000000;
		}
		iVar1++;
	}
	return iVar0;
}

void func_440()
{
	unk_0x34D79252800B23FF(0x00000006);
	unk_0x51B096AAC60548C1(1f);
	unk_0x060F249A9A3E3F4E(0x00000001);
}

int func_441(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return Global_18D84D[iVar0 /*615*/] != 0xFFFFFFFF;
	}
	return 0x00000000;
}

void func_442()
{
	if (Global_19DEAC)
	{
		if (func_341())
		{
			if (func_447(Global_440000.f_38DB3))
			{
				switch (Global_440000.f_372EA)
				{
					case 0x00000001:
						unk_0x77ADAEFF81EAE1E4(2947.73f, -3860.622f, 142.6144f, 5f, 0x36CA862E, 0x00000000);
						break;
				}
			}
			else if (func_446(Global_440000.f_38DB3))
			{
				switch (Global_440000.f_372EA)
				{
					case 0x00000003:
						unk_0x77ADAEFF81EAE1E4(2943.765f, -3859.625f, 151.1007f, 5f, 0xE50A5FAE, 0x00000000);
						break;
				}
			}
			else if (func_445(Global_440000.f_38DB3))
			{
				switch (Global_440000.f_372EA)
				{
					case 0x00000003:
						unk_0x77ADAEFF81EAE1E4(2948.968f, -3854.075f, 150.7258f, 5f, 0xFFA77402, 0x00000000);
						break;
				}
			}
			else if (func_444(Global_440000.f_38DB3))
			{
				switch (Global_440000.f_372EA)
				{
					case 0x00000003:
						unk_0x77ADAEFF81EAE1E4(2944.726f, -3846.384f, 140f, 5f, 0x478D99E0, 0x00000000);
						unk_0x77ADAEFF81EAE1E4(2948.589f, -3859.259f, 145.6578f, 5f, 0x10AA24BF, 0x00000000);
						unk_0x77ADAEFF81EAE1E4(2950.465f, -3861.078f, 149.8605f, 5f, 0x4357EDC3, 0x00000000);
						break;
				}
			}
			else if (func_443(Global_440000.f_38DB3))
			{
				switch (Global_440000.f_372EA)
				{
					case 0x00000003:
						unk_0x77ADAEFF81EAE1E4(2943.765f, -3859.625f, 151.1007f, 5f, 0xE50A5FAE, 0x00000000);
						break;
					}
				}
		}
		Global_19DEAC = 0x00000000;
	}
}

bool func_443(int iParam0)
{
	return iParam0 == 0x0000004C;
}

bool func_444(int iParam0)
{
	return iParam0 == 0x0000004D;
}

bool func_445(int iParam0)
{
	return iParam0 == 0x00000053;
}

bool func_446(int iParam0)
{
	return iParam0 == 0x0000004A;
}

bool func_447(int iParam0)
{
	return iParam0 == 0x0000004E;
}

void func_448()
{
	Global_2564C8.f_27.f_29 = 0x00000000;
}

void func_449()
{
	Global_193B22.f_6 = 0x00000000;
}

void func_450()
{
	unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_20), 0x00000005);
}

bool func_451()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_3, 0x00000007);
}

void func_452()
{
	vector3 vVar0;
	struct<2> Var1;
	int iVar2;
	
	if (!func_458(func_459(), vVar0))
	{
		Var1 = 0x8D20BDBD;
		Var1.f_1 = unk_0xD803B885F5E47A62();
		iVar2 = func_457(0x00000001, 0x00000001);
		if (!iVar2 == 0x00000000)
		{
			func_454();
			func_453(0x00000000);
			unk_0xFB061A86A7AC749F(0x00000001, &Var1, 0x00000002, iVar2);
		}
	}
}

void func_453(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		Global_2537E2.f_E9E = unk_0x2B6E0A53779D29EA();
	}
	Global_2537E2.f_E2A = iParam0;
}

void func_454()
{
	func_456();
	func_455();
}

void func_455()
{
	struct<72> Var0;
	
	if (func_60(unk_0xD803B885F5E47A62()))
	{
		Var0.f_6 = 0x00000020;
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A = { Var0 };
	}
}

void func_456()
{
	struct<113> Var0;
	
	Var0.f_4 = 0xFFFFFFFF;
	Var0.f_7 = 0x00000020;
	Var0.f_4F = { Global_2537E2.f_E2A.f_4F };
	Var0.f_5F = { Global_2537E2.f_E2A.f_5F };
	Global_2537E2.f_E2A = { Var0 };
}

var func_457(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_14(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_255(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_458(vector3 vParam0, vector3 vParam1)
{
	if ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_459()
{
	return Global_25004E[unk_0xD803B885F5E47A62() /*10*/];
}

void func_460(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000002)
	{
		return;
	}
	if (((Global_263E89[iParam0 /*5*/].f_1 == 0xFFFFFFFF || Global_263E89[iParam0 /*5*/].f_2 == 0xFFFFFFFF) || Global_263E89[iParam0 /*5*/].f_3 == 0xFFFFFFFF) || Global_263E89[iParam0 /*5*/].f_4 == 0xFFFFFFFF)
	{
		return;
	}
	unk_0x336728A54E0DF141(Global_263E89[iParam0 /*5*/], Global_263E89[iParam0 /*5*/].f_1, Global_263E89[iParam0 /*5*/].f_2, Global_263E89[iParam0 /*5*/].f_3, Global_263E89[iParam0 /*5*/].f_4);
	Global_263E89[iParam0 /*5*/] = 0xFFFFFFFF;
	Global_263E89[iParam0 /*5*/].f_1 = 0xFFFFFFFF;
	Global_263E89[iParam0 /*5*/].f_2 = 0xFFFFFFFF;
	Global_263E89[iParam0 /*5*/].f_3 = 0xFFFFFFFF;
	Global_263E89[iParam0 /*5*/].f_4 = 0xFFFFFFFF;
}

int func_461(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (Global_263E89[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_462()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000012);
}

void func_463(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar2;
	
	Global_2567E2.f_1.f_AEE = 0x00000000;
	Global_2567E2.f_1.f_AEF = 0x00000000;
	Global_2567E2.f_1.f_B08 = 0x00000000;
	Global_2567E2.f_1.f_AF5 = 0x00000000;
	Global_2567E2.f_1.f_AF6 = 0x00000000;
	Global_2567E2.f_1.f_AF9 = 0x00000000;
	Global_2567E2.f_1.f_AFA = 0x00000000;
	Global_2567E2.f_1.f_AF8 = 0xFFFFFFFF;
	Global_2567E2.f_1.f_AFB = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		Global_2567E2.f_1.f_AFD[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_2567E2.f_1.f_B09 = 0xFFFFFFFF;
	if (bParam0)
	{
		Global_2567E2.f_1.f_B06 = 0xFFFFFFFF;
		Global_2567E2.f_1.f_B07 = 0xFFFFFFFF;
	}
	Global_2567E2.f_1.f_B1C = 0x00000000;
	func_464();
	Var1.f_21 = 0x00000002;
	Var1.f_24 = 0x00000007;
	iVar2 = 0x00000000;
	while (iVar2 <= 0x0000001F)
	{
		Global_2567E2.f_1.f_34D[iVar2 /*57*/] = { Var1 };
		iVar2++;
	}
	Global_255786.f_21 = 0xFFFFFFFF;
	Global_255786.f_22 = 0xFFFFFFFF;
}

void func_464()
{
	Global_255786.f_20 = 0x00000000;
}

void func_465()
{
	Global_2564C8.f_24F = 0x00000000;
}

void func_466()
{
	Global_2564C8.f_250 = 0x00000000;
	func_467();
}

void func_467()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 >= 0x00000000)
	{
		unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_63.f_20), 0x00000006);
	}
}

void func_468()
{
	Global_2564C8 = 0x00000000;
	Global_2564C8.f_2 = 0x00000000;
	Global_2564C8.f_3 = 0x00000000;
}

bool func_469()
{
	return Global_2564C8.f_24F;
}

bool func_470()
{
	return Global_195DE4;
}

bool func_471()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000001);
}

bool func_472()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000010);
}

void func_473()
{
	unk_0x0674E58A79778E99(&Global_2564C8, 0x00000015);
}

void func_474()
{
	Global_2567E2.f_B1E.f_22 = 0x00000001;
}

void func_475()
{
	Global_2567E2.f_1.f_B0B = 0x00000001;
}

void func_476()
{
	Global_2564C8.f_2D6 = 0x00000001;
}

void func_477()
{
	Global_2567E2.f_1.f_B0A = 0x00000001;
}

void func_478()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 0x00000015);
}

void func_479(int iParam0)
{
	Global_2567E2.f_1.f_345 = iParam0;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D4 = iParam0;
}

void func_480()
{
	struct<38> Var0;
	
	Var0 = 0x0000001F;
	Var0.f_21 = 0xFFFFFFFF;
	Var0.f_22 = 0xFFFFFFFF;
	Global_2557AC = { Var0 };
}

void func_481()
{
	Global_2567E2.f_B1E.f_1 = 0x00000001;
}

void func_482()
{
	Global_2567E2.f_B1E.f_1 = 0x00000000;
}

bool func_483()
{
	return Global_2564C8.f_268;
}

bool func_484()
{
	return Global_2564C8.f_25E;
}

bool func_485()
{
	return Global_2564C8.f_251;
}

bool func_486()
{
	return Global_2564C8.f_25A;
}

bool func_487()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000F);
}

bool func_488()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000014);
}

bool func_489()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000002);
}

void func_490()
{
	Global_2567E2.f_B1E.f_22 = 0x00000000;
}

bool func_491()
{
	return unk_0xEAE0D21A50E6C7F4(Global_EA450.f_8, 0x00000008);
}

void func_492()
{
	Global_2564C8.f_26D = 0x00000000;
}

var func_493()
{
	return Global_2564C8.f_26D;
}

void func_494()
{
	Global_2564C8.f_28C = 0x00000000;
}

bool func_495()
{
	return Global_2564C8.f_28C;
}

void func_496()
{
	Global_2567E2.f_1.f_346 = 0x00000000;
	Global_2567E2.f_1.f_347 = 0x00000000;
	Global_2567E2.f_1.f_349 = 0x00000000;
}

void func_497()
{
	unk_0x0674E58A79778E99(&Global_2564C8, 0x00000004);
}

void func_498()
{
	unk_0x0674E58A79778E99(&Global_2564C8, 0x0000001C);
}

void func_499()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x00000004);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x00000005);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x00000007);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x00000008);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x00000009);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x0000000A);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x0000000B);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x0000000C);
	unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_D.f_1), 0x0000000D);
}

void func_500(bool bParam0)
{
	unk_0x9D57AD477C5339C8(bParam0);
}

void func_501(char* sParam0)
{
	var uVar0;
	
	if ((!func_503() && func_502(0x00000078, 0xFFFFFFFF)) && !func_396())
	{
		unk_0x19E9DB708CD4C715(sParam0, &uVar0, 0x0000000D);
		if (unk_0x83F946529771616E(&uVar0, 0x0000000D))
		{
			if (unk_0x04A104F429E6CBB0(&uVar0))
			{
			}
		}
	}
}

int func_502(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_28(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_503()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if ((Global_184507[iVar0 /*876*/].f_27.f_2 == 0x0000003F || Global_184507[iVar0 /*876*/].f_27.f_2 == 0x0000003E) || Global_184507[iVar0 /*876*/].f_27.f_2 == 0x0000003D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_504()
{
	unk_0x5D96D8530B3D0904(&(Global_EA450.f_8), 0x00000008);
	func_505();
}

void func_505()
{
	Global_2564C8.f_30C = 0x00000001;
}

bool func_506()
{
	return Global_2567E2.f_B1E.f_2;
}

var func_507(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_63.f_2;
}

void func_508()
{
	if (func_509())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

bool func_509()
{
	return func_196("FM_RETRY_INV");
}

void func_510(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_514(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_513(iParam0))
	{
		func_512(iParam0, iVar0);
	}
	else
	{
		func_511(iParam0, iVar0);
	}
}

void func_511(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_512(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

int func_513(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_514(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_28(iParam1), 0x00000000);
	iVar0++;
	if (!func_517(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 0x00000001, 0x00000000);
	}
	else
	{
		func_516(iParam0, iVar0, iParam1, 0x00000001);
	}
}

void func_516(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_28(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 0x00000313:
			Global_152DD4[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000314:
			Global_152DDA[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000315:
			Global_152DE0[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000316:
			Global_152DE6[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002216:
			Global_152DEC[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000309:
			Global_152DB6[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000030A:
			Global_152DBC[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000030B:
			Global_152DC2[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000030C:
			Global_152DC8[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002218:
			Global_152DCE[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002FF:
			Global_152D98[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000300:
			Global_152D9E[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000301:
			Global_152DA4[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000302:
			Global_152DAA[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000221A:
			Global_152DB0[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002F5:
			Global_152DF2[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002F6:
			Global_152DF8[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002F7:
			Global_152DFE[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002F8:
			Global_152E04[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000221C:
			Global_152E0A[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000517:
			Global_152E10[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001C41:
			Global_152E16[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000027F:
			Global_152E1C[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000004FE:
			Global_152E22[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000754:
			Global_2775D1[0x00000000 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000008DB:
			Global_2775D1[0x00000001 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000B71:
			Global_2775D1[0x00000002 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000BF2:
			Global_2775D1[0x00000003 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002720:
			Global_277666[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002FC:
			Global_152E28[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002FD:
			Global_152E2E[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000002FE:
			Global_152E34[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000221B:
			Global_152E3A[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000004D4:
			Global_152E40[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000BED:
			Global_27761A[0x00000000 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000BEE:
			Global_27761A[0x00000001 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000BEF:
			Global_27761A[0x00000002 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000BF0:
			Global_27761A[0x00000003 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000BF1:
			Global_27761A[0x00000004 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E34:
			Global_277669[0x00000000 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E35:
			Global_277669[0x00000001 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E36:
			Global_277669[0x00000002 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E37:
			Global_277669[0x00000003 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E38:
			Global_277669[0x00000004 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E39:
			Global_277679[0x00000000 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E3A:
			Global_277679[0x00000001 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E3B:
			Global_277679[0x00000002 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E3C:
			Global_277679[0x00000003 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E3D:
			Global_277679[0x00000004 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000C95:
			Global_27761A[0x00000005 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000C9B:
			Global_2775D1[0x00000004 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E4F:
			Global_277689[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E50:
			Global_277692[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E51:
			Global_27768C[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E52:
			Global_277695[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E53:
			Global_27768F[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E54:
			Global_277698[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000E69:
			Global_27769B[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000C9D:
			Global_27761A[0x00000006 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000C9E:
			Global_2775D1[0x00000005 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000CA2:
			Global_27761A[0x00000007 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000CA0:
			Global_2775D1[0x00000006 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FB3:
			Global_27761A[0x00000008 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FB4:
			Global_2775D1[0x00000007 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FB6:
			Global_27761A[0x00000009 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FB7:
			Global_2775D1[0x00000008 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FB9:
			Global_27761A[0x0000000A /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FBA:
			Global_2775D1[0x00000009 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FBC:
			Global_27761A[0x0000000B /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00000FBD:
			Global_2775D1[0x0000000A /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000017DD:
			Global_27761A[0x0000000C /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000017DE:
			Global_2775D1[0x0000000B /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001817:
			Global_27761A[0x0000000D /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001818:
			Global_2775D1[0x0000000C /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001991:
			Global_27761A[0x0000000E /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001992:
			Global_2775D1[0x0000000D /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000199E:
			Global_27761A[0x0000000F /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000199F:
			Global_2775D1[0x0000000E /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000019A1:
			Global_27761A[0x00000010 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000019A2:
			Global_2775D1[0x0000000F /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000019A4:
			Global_27761A[0x00000011 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x000019A5:
			Global_2775D1[0x00000010 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001C73:
			Global_2775D1[0x00000011 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001C75:
			Global_2775D1[0x00000012 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001C77:
			Global_2775D1[0x00000013 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00001F4A:
			Global_2775D1[0x00000014 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000205A:
			Global_27769E[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000205B:
			Global_2776A1[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000205C:
			Global_2776A4[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000205D:
			Global_2776A7[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000205E:
			Global_2776AA[func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000205F:
			Global_2776AD[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002060:
			Global_2776B0[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002061:
			Global_2776B3[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002062:
			Global_2776B6[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002063:
			Global_2776B9[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002064:
			Global_2776BC[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002065:
			Global_2776BF[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002066:
			Global_2776C2[func_28(iParam2)] = iParam1;
			break;
		
		case 0x000022C4:
			Global_2776C5[func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002156:
			Global_2775D1[0x00000015 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002311:
			Global_27761A[0x00000017 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x0000230F:
			Global_2775D1[0x00000016 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002314:
			Global_27761A[0x00000018 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		case 0x00002312:
			Global_2775D1[0x00000017 /*3*/][func_28(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_517(int iParam0)
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

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000002;
	iVar1 = 0x00000000;
	if (Global_259029 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_534())
	{
		if (unk_0xA14BB9332558B949() || (func_533() || func_529()))
		{
			Global_258C0C = 0x00000001;
		}
	}
	Global_259029 = 0x00000000;
	if (Global_141378)
	{
		iVar0 = 0x00000001;
	}
	if (Global_258C0C)
	{
		iVar0 = 0x00000001;
	}
	if (Global_258C0B)
	{
		iVar0 = 0x00000001;
	}
	if (func_528(Global_1B04A.f_1, 0x00000020))
	{
		iVar0 = 0x00000001;
	}
	if (Global_258BBE)
	{
		iVar0 = 0x00000001;
	}
	if (func_527(0x00000200))
	{
		iVar0 = 0x00000001;
	}
	if (func_526(0x00000080))
	{
		iVar0 = 0x00000001;
	}
	if (Global_141390 == 0x00000001 && iVar1 == 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (func_396())
	{
		iVar0 = 0x00000000;
	}
	if (Global_258DF8)
	{
		iVar0 = 0x00000002;
	}
	if (iParam0 == 0x00000000)
	{
		if (!func_524())
		{
			if (Global_440000.f_30296 == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
		}
	}
	if (func_255(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		iVar0 = 0x00000000;
	}
	if (func_523())
	{
		iVar0 = 0x00000000;
	}
	if ((Global_258C0C || Global_258C0B) || Global_141378)
	{
		if (func_529())
		{
			iVar0 = 0x00000000;
		}
	}
	Global_258DF8 = 0x00000000;
	Global_258C0B = 0x00000000;
	Global_258C0C = 0x00000000;
	Global_141378 = 0x00000000;
	Global_258BBE = 0x00000000;
	func_521(&(Global_1B04A.f_1), 0x00000020);
	func_520(0x00000200);
	func_519(0x00000080);
	return iVar0;
}

void func_519(int iParam0)
{
	Global_1B083 = (Global_1B083 - (Global_1B083 && iParam0));
}

void func_520(int iParam0)
{
	Global_1B084 = (Global_1B084 - (Global_1B084 && iParam0));
}

void func_521(var uParam0, int iParam1)
{
	func_522(uParam0, iParam1);
}

void func_522(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_523()
{
	if (((Global_18061C || Global_1805FE) || func_255(unk_0xD803B885F5E47A62(), 0x00000000)) || func_254())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_524()
{
	switch (func_525())
	{
		case 0x0000000F:
		case 0x0000000E:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000C:
		case 0x0000007A:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_525()
{
	return Global_2567E2.f_1.f_B06;
}

bool func_526(int iParam0)
{
	return (Global_1B083 && iParam0) != 0x00000000;
}

bool func_527(int iParam0)
{
	return (Global_1B084 && iParam0) != 0x00000000;
}

bool func_528(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_529()
{
	if (func_532(Global_259486))
	{
		return 0x00000000;
	}
	if (func_530(unk_0xD803B885F5E47A62(), 0x00000092))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_530(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/] == iParam1)
	{
		return func_531(iParam0);
	}
	return 0x00000000;
}

int func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0x00000000);
	}
	return 0x00000000;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000083:
			if (Global_40001.f_2C7D)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000084:
			if (Global_40001.f_2C7F)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000085:
			if (Global_40001.f_2C7C)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000088:
			if (Global_40001.f_2C80)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008A:
			if (Global_40001.f_2C81)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008B:
			if (Global_40001.f_2C82)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000081:
			if (Global_40001.f_2C7E)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008C:
			if (Global_40001.f_2C83)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000008D:
			if (Global_40001.f_2C84)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000090:
			if (Global_40001.f_2C85)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000092:
			if (Global_40001.f_2C86)
			{
				return 0x00000001;
			}
			break;
		
		case 0x000000EC:
		case 0x00000096:
			break;
	}
	return 0x00000000;
}

int func_533()
{
	if (func_532(Global_259486))
	{
		return 0x00000000;
	}
	if (func_531(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_534()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1406A9, 0x00000000);
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000F:
		case 0x0000000E:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000C:
		case 0x0000007A:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_536()
{
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(unk_0xD803B885F5E47A62()), "MissionType"))
	{
		unk_0x059C92C065EF869A(unk_0x65DC8BF3D20FC442(unk_0xD803B885F5E47A62()), "MissionType");
	}
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(unk_0xD803B885F5E47A62()), "MatchId"))
	{
		unk_0x059C92C065EF869A(unk_0x65DC8BF3D20FC442(unk_0xD803B885F5E47A62()), "MatchId");
	}
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(unk_0xD803B885F5E47A62()), "TeamId"))
	{
		unk_0x059C92C065EF869A(unk_0x65DC8BF3D20FC442(unk_0xD803B885F5E47A62()), "TeamId");
	}
}

void func_537()
{
	Global_2564C8.f_255 = 0x00000000;
	unk_0x5E4A4C5AD7405138();
}

void func_538(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23)
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 = 0x00000001;
		}
	}
	else if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 = 0x00000000;
	}
}

int func_539(int iParam0)
{
	if (iParam0 == 0x00000004 || iParam0 == 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_540()
{
	Global_2564C8.f_2E4 = 0x00000000;
}

bool func_541()
{
	return Global_2564C8.f_2E4;
}

void func_542()
{
	Global_2564C8.f_2E8 = 0x00000000;
}

bool func_543()
{
	return Global_2564C8.f_2E8;
}

void func_544()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_20), 0x00000001);
}

int func_545(int iParam0)
{
	int iVar0;
	
	if (func_254())
	{
		return 0x00000001;
	}
	if (func_550())
	{
		return 0x00000001;
	}
	if (unk_0xEA6BC48857E0AC4C(&(Global_440000.f_2FACD)))
	{
		return 0x00000001;
	}
	if (func_549())
	{
		return 0x00000001;
	}
	func_548();
	unk_0xC43ACE7DB937E274();
	iVar0 = unk_0xB45EDD00181AF3F2();
	if (iParam0 == 0x00000000)
	{
		Global_193AFA++;
		unk_0x23AFD3CA3C9BE63F(iVar0, "quit", Global_193AFA);
		unk_0x23AFD3CA3C9BE63F(iVar0, "quitd", 0x00000001);
		unk_0x23AFD3CA3C9BE63F(iVar0, "ply", Global_193AFA.f_2);
		unk_0x23AFD3CA3C9BE63F(iVar0, "lp", unk_0xDD0E7998AE8AD485());
	}
	else if (iParam0 == 0x00000001 || iParam0 == 0x00000004)
	{
		Global_193B13.f_1++;
		unk_0x23AFD3CA3C9BE63F(iVar0, "quit", Global_193B13.f_1);
		unk_0x23AFD3CA3C9BE63F(iVar0, "quitd", 0x00000001);
		unk_0x23AFD3CA3C9BE63F(iVar0, "ply", Global_193B13.f_4);
		unk_0x23AFD3CA3C9BE63F(iVar0, "lp", unk_0xDD0E7998AE8AD485());
	}
	if (iParam0 == 0x00000000)
	{
		if (unk_0xBEED2BDA8CE1AFF3(&(Global_440000.f_2FACD), 0f, func_547(iParam0)))
		{
		}
	}
	else if (iParam0 == 0x00000001 || iParam0 == 0x00000004)
	{
		if (unk_0xBEED2BDA8CE1AFF3(&(Global_EA450.f_2A), 0f, func_547(iParam0)))
		{
		}
	}
	func_546();
	func_548();
	unk_0xAC460E5FBD1B246B();
	return 0x00000001;
}

void func_546()
{
	Global_193AFA = 0x00000000;
	Global_193AFA.f_2 = 0x00000000;
	Global_193AFA.f_8 = 0x00000000;
	Global_193AFA.f_3 = 0x00000000;
	Global_193AFA.f_6 = 0x00000000;
}

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "gta5mission";
		
		case 0x00000001:
			return "playlist";
		
		case 0x00000002:
			return "lifeinvaderpost";
		
		case 0x00000003:
			return "photo";
		
		case 0x00000004:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_548()
{
	if (unk_0xB45EDD00181AF3F2() != 0x00000000)
	{
		unk_0xEADC638FF742BE01();
	}
}

int func_549()
{
	if (unk_0xEB22E23C5DDDD376())
	{
		return 0x00000001;
	}
	else if (unk_0xAE6F4A4A47122354())
	{
		return 0x00000001;
	}
	else if (unk_0xC49C081F809590D9())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_550()
{
	if (!func_551())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_551()
{
	if (func_552())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_552()
{
	return Global_258DFD;
}

bool func_553()
{
	return Global_2564C8.f_27A;
}

void func_554(bool bParam0)
{
	if (bParam0)
	{
		Global_1406C3 = 0x00000001;
	}
	else
	{
		Global_1406C3 = 0x00000000;
	}
}

void func_555()
{
	Global_2567E2.f_1.f_B0C.f_D = 0x00000000;
	Global_2567E2.f_1.f_B0C = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_1 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_2 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_3 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_4 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_5 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_6 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_7 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_8 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_9 = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_A = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_B = 0x00000000;
	Global_2567E2.f_1.f_B0C.f_C = 0x00000000;
}

bool func_556(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000001;
}

void func_557()
{
	Global_2564C8.f_268 = 0x00000001;
}

void func_558(int iParam0, vector3 vParam1, struct<6> Param2)
{
	if (iParam0 == 0x00000000)
	{
		iParam0 = 0x00000001;
	}
	func_577();
	func_576();
	func_575();
	func_574();
	func_573();
	func_698();
	Global_193B22.f_9 = iParam0;
	switch (Global_193B22.f_9)
	{
		case 0x00000001:
			Global_193B22 = 0x00000000;
			Global_193B22.f_16 = { 0f, 0f, 0f };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000000;
			func_570();
			break;
		
		case 0x00000002:
			Global_193B22 = 0x00000001;
			Global_193B22.f_16 = { vParam1 };
			Global_193B22.f_10 = { Param2 };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000000;
			break;
		
		case 0x00000003:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000000 || Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000001)
			{
				func_569(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_1C);
			}
			func_568();
			Global_193B22 = 0x00000001;
			Global_193B22.f_16 = { vParam1 };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000000;
			break;
		
		case 0x00000004:
			func_567();
			func_568();
			Global_193B22 = 0x00000001;
			if (func_693(unk_0xD803B885F5E47A62()) || func_694(unk_0xD803B885F5E47A62()))
			{
				func_566(0x00000001);
			}
			if ((func_565() || func_599()) && func_585())
			{
				Global_193B22.f_10 = { func_584() };
				Param2 = { Global_193B22.f_10 };
				Global_193B22.f_16 = { func_564() };
			}
			else if (func_565() || func_599())
			{
				if (func_563())
				{
					Global_193B22.f_16 = { func_562() };
				}
				else
				{
					Global_193B22.f_16 = { vParam1 };
				}
			}
			else
			{
				Global_193B22.f_16 = { vParam1 };
			}
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000001;
			break;
		
		case 0x00000005:
			func_567();
			func_561();
			func_568();
			if (func_693(unk_0xD803B885F5E47A62()) || func_694(unk_0xD803B885F5E47A62()))
			{
				func_566(0x00000001);
			}
			Global_193B22 = 0x00000001;
			Global_193B22.f_16 = { vParam1 };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000001;
			break;
		
		case 0x00000008:
			Global_193B22 = 0x00000000;
			Global_193B22.f_16 = { vParam1 };
			Global_193B22.f_10 = { Param2 };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000000;
			break;
		
		case 0x00000009:
			func_568();
			Global_193B22 = 0x00000001;
			Global_193B22.f_16 = { vParam1 };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000001;
			break;
		
		case 0x0000000A:
			Global_193B22 = 0x00000000;
			Global_193B22.f_16 = { 0f, 0f, 0f };
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C = 0x00000000;
			break;
	}
	func_560();
	func_559();
	func_479(Global_193B22.f_9);
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D5 = { Global_193B22.f_16 };
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D8 = { Param2 };
}

void func_559()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12), 0x00000017);
}

void func_560()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12), 0x0000000C);
}

void func_561()
{
	Global_193B22.f_4 = 0x00000001;
}

Vector3 func_562()
{
	return Global_2564C8.f_27.f_1F4;
}

int func_563()
{
	if ((Global_2564C8.f_27.f_1F4 != 0f || Global_2564C8.f_27.f_1F4.f_1 != 0f) || Global_2564C8.f_27.f_1F4.f_2 != 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_564()
{
	return Global_2564C8.f_27.f_1F7;
}

var func_565()
{
	return Global_2564C8.f_27.f_39;
}

void func_566(int iParam0)
{
	Global_2567E2.f_182F = iParam0;
}

void func_567()
{
	Global_193B22.f_3 = 0x00000001;
}

void func_568()
{
	Global_193B22.f_7 = 0x00000001;
}

void func_569(var uParam0)
{
	Global_193B22.f_A = uParam0;
}

int func_570()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!unk_0x83F946529771616E(&(Global_2567E2.f_1946), 0x0000000D))
	{
		return 0x00000000;
	}
	iVar2 = unk_0xD803B885F5E47A62();
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar0 = unk_0x117658E336116132(iVar1);
		if (unk_0x40B8C182D63932FC(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_78(iVar0) };
			if (unk_0x4F18738E5BDE9AC9(&Var3, &(Global_2567E2.f_1946)) && func_572(iVar0))
			{
				func_571();
				return 0x00000001;
			}
		}
		iVar1++;
	}
	return 0x00000000;
}

void func_571()
{
	unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12), 0x00000009);
}

bool func_572(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_27.f_12, 0x00000009);
}

void func_573()
{
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_5 = 0x00000000;
}

void func_574()
{
	Global_193B22.f_A = 0xFFFFFFFF;
}

void func_575()
{
	Global_193B22.f_4 = 0x00000000;
}

void func_576()
{
	Global_193B22.f_3 = 0x00000000;
}

void func_577()
{
	Global_2567E2.f_B1E.f_2 = 0x00000001;
}

void func_578()
{
	Global_2564C8.f_239.f_E = 0x00000000;
}

bool func_579()
{
	return Global_2564C8.f_239.f_E;
}

void func_580()
{
	Global_2564C8.f_27.f_37 = 0x00000000;
}

void func_581()
{
	Global_2564C8.f_27.f_2B = 0xFFFFFFFF;
}

int func_582()
{
	return Global_2564C8.f_27.f_2B;
}

void func_583(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (unk_0xEA6BC48857E0AC4C(&uParam0))
	{
		return;
	}
	if (!Global_249A97)
	{
		return;
	}
	if (!unk_0x7F8A39872A07D2CE(&uParam0, &(Global_249A97.f_1)))
	{
		return;
	}
	Global_249AD9 = 0x00000001;
}

struct<6> func_584()
{
	return Global_2564C8.f_27.f_C;
}

bool func_585()
{
	return Global_2564C8.f_27.f_3B;
}

void func_586(int iParam0, bool bParam1)
{
	if (func_687())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				if (unk_0xBC6B615FE7247B7F())
				{
					unk_0x4A1523078340FA38();
				}
			}
			break;
		
		case 0x00000001:
			unk_0xF60E6F759DB05AEB(0x00000006, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0xF60E6F759DB05AEB(0x0000000C, 0x00000000, 0x00000000);
			break;
		
		case 0x00000003:
			if (func_587(Global_440000.f_38DB3))
			{
				unk_0xF60E6F759DB05AEB(0x00000014, 0x00000032, 0x00000000);
			}
			else
			{
				unk_0xF60E6F759DB05AEB(0x00000015, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000004:
			unk_0xF60E6F759DB05AEB(0x00000000, 0x00000000, 0x00000000);
			break;
		
		default:
			break;
	}
}

bool func_587(int iParam0)
{
	return iParam0 == 0x0000000A;
}

int func_588()
{
	return Global_193B22.f_C;
}

void func_589(var uParam0, var uParam1)
{
	Global_193B22.f_D = uParam0;
	Global_193B22.f_E = uParam1;
}

void func_590(var uParam0)
{
	Global_193B22.f_C = uParam0;
}

int func_591(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_40001.f_13A1[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_592()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_595();
	}
	return func_593(Global_440000.f_2F9AE);
}

int func_593(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000015)
	{
		if (Global_40001.f_16A6[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_594()
{
	return Global_2564C8.f_11;
}

bool func_595()
{
	return Global_2564C8.f_13;
}

bool func_596()
{
	return unk_0xEAE0D21A50E6C7F4(Global_140801, 0x00000004);
}

bool func_597()
{
	return Global_2564C8.f_F;
}

void func_598()
{
	Global_2564C8.f_27.f_38 = 0x00000001;
}

bool func_599()
{
	return Global_2564C8.f_27.f_37;
}

void func_600()
{
	if (unk_0xEA6BC48857E0AC4C(&(Global_247C10.f_4.f_3)))
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(&(Global_2497D9.f_3)))
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_2497D9.f_3), &(Global_247C10.f_4.f_3)))
		{
			Global_14045E = 0x00000000;
		}
		else
		{
			Global_14045E = 0x00000001;
		}
	}
	Global_14045F = 0x00000000;
	Global_14045F.f_1 = { Global_247C10.f_4.f_3 };
}

void func_601()
{
	Global_193B22.f_5 = 0x00000000;
	Global_193B22.f_B = 0xFFFFFFFF;
}

void func_602(var uParam0)
{
	Global_193B22.f_5 = 0x00000001;
	Global_193B22.f_B = uParam0;
}

int func_603(int iParam0)
{
	int iVar0;
	
	if (Global_440000.f_38DB3 == 0x0000002E)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000009)
	{
		if (iParam0 == Global_40001.f_23D7[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_604(int iParam0)
{
	int iVar0;
	
	if (Global_440000.f_38DB3 == 0x00000015)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_2333[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_605()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_12, 0x00000000))
	{
		return 0x00000001;
	}
	return ((((((func_612(Global_440000.f_2F9AE, 0x00000001) || func_611(Global_440000.f_2F9AE)) || func_610(Global_440000.f_2F9AE)) || func_609(Global_440000.f_2F9AE)) || func_608(Global_440000.f_38DB3)) || func_607(Global_440000.f_38DB3)) || func_606(Global_440000.f_38DB3));
}

bool func_606(int iParam0)
{
	return iParam0 == 0x00000041;
}

bool func_607(int iParam0)
{
	return iParam0 == 0x00000030;
}

bool func_608(int iParam0)
{
	return iParam0 == 0x00000008;
}

int func_609(int iParam0)
{
	int iVar0;
	
	if (Global_440000.f_38DB3 == 0x00000023)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000009)
	{
		if (iParam0 == Global_40001.f_2426[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_610(int iParam0)
{
	int iVar0;
	
	if (Global_440000.f_38DB3 == 0x0000001B)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000009)
	{
		if (iParam0 == Global_40001.f_23ED[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_611(int iParam0)
{
	int iVar0;
	
	if (Global_440000.f_38DB3 == 0x00000020)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000009)
	{
		if (iParam0 == Global_40001.f_2376[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_612(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 0x00000041)
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

struct<13> func_613()
{
	struct<13> Var0;
	
	unk_0xB6D2E6F743DD2459(&Var0, 0x0000000D);
	return Var0;
}

void func_614(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&uParam0))
	{
		return;
	}
	if (!Global_247C05)
	{
		return;
	}
	iVar0 = unk_0x12AB0310C2281427(&uParam0);
	Global_247C07 = iVar0;
	Global_247C08 = (unk_0x1C0640BA9A7327B3() + 0x0000EA60);
}

void func_615(struct<6> Param0)
{
	if (unk_0xEA6BC48857E0AC4C(&Param0))
	{
		return;
	}
	Global_14045F = 0x00000001;
	Global_14045F.f_1 = { Param0 };
}

bool func_616()
{
	return Global_2564C8.f_C;
}

void func_617(float fParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		unk_0x98805B30C708287F(fParam0);
		unk_0xE6427CB43B439AFB(0x00000000);
	}
}

void func_618(int iParam0)
{
	if (Global_265ACF != iParam0)
	{
		Global_265ACF = iParam0;
	}
}

void func_619()
{
	Global_EC6CD = 0xFFFFFFFF;
}

void func_620()
{
	func_621(-1f);
}

void func_621(float fParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		unk_0x5303496FD72AF7E7(0x00000000);
		unk_0xA4221E1CBA7E9F70(0x00000000);
		unk_0x98805B30C708287F(fParam0);
		unk_0xE6427CB43B439AFB(0x00000000);
	}
}

int func_622(int iParam0)
{
	int iVar0;
	
	if (Global_19823F[iParam0 /*8*/] == 0xFFFFFFFF)
	{
		iVar0 = func_27(func_624(iParam0), 0xFFFFFFFF, 0x00000000);
		if (iVar0 == 0xFFFFFFFF)
		{
			func_623(iParam0, 0x00000000);
			iVar0 = 0x00000000;
		}
		Global_19823F[iParam0 /*8*/] = iVar0;
	}
	return Global_19823F[iParam0 /*8*/];
}

void func_623(int iParam0, int iParam1)
{
	Global_19823F[iParam0 /*8*/] = iParam1;
	func_64(func_624(iParam0), iParam1, 0xFFFFFFFF, 0x00000001, 0x00000000);
}

int func_624(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000026FA;
		
		default:
	}
	return 0x000026FA;
}

bool func_625()
{
	return Global_440000.f_1 == 0x00000000;
}

void func_626(int iParam0, int iParam1)
{
	unk_0x45019D71A0DF8B62(iParam0);
	unk_0xED41266DE64A57FD(iParam0);
	if (unk_0x0AFBF1EF27445DFE())
	{
		unk_0x8DD29DFF932529F0(iParam1);
	}
}

bool func_627()
{
	return Global_2564C8.f_283;
}

void func_628()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000018))
	{
		unk_0x0674E58A79778E99(&Global_240006, 0x00000018);
	}
}

void func_629()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12), 0x0000000E);
}

var func_630()
{
	return Global_265ACF;
}

bool func_631()
{
	return Global_2564C8.f_2DB;
}

int func_632()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4;
}

void func_633(bool bParam0)
{
	if (bParam0)
	{
		if (Global_18052F == 0x00000000)
		{
			Global_18052F = 0x00000001;
		}
	}
	else if (Global_18052F == 0x00000001)
	{
		Global_18052F = 0x00000000;
	}
}

void func_634()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000001F)
	{
		Global_2567E2.f_1.f_34D[iVar0 /*57*/].f_2C = 0x00000000;
		Global_2567E2.f_1.f_34D[iVar0 /*57*/].f_21[0x00000000] = 0x00000000;
		iVar0++;
	}
}

int func_635()
{
	int iVar0;
	
	if (func_254())
	{
		return 0x00000001;
	}
	if (func_550())
	{
		return 0x00000001;
	}
	if (func_549())
	{
		return 0x00000001;
	}
	if (unk_0xEA6BC48857E0AC4C(&(Global_440000.f_2FACD)))
	{
		return 0x00000001;
	}
	func_548();
	unk_0xC43ACE7DB937E274();
	iVar0 = unk_0xB45EDD00181AF3F2();
	Global_193AFA.f_2++;
	if (Global_193AFA.f_2 < 0x00000001)
	{
		Global_193AFA.f_2 = 0x00000001;
	}
	unk_0x23AFD3CA3C9BE63F(iVar0, "quit", Global_193AFA);
	unk_0x23AFD3CA3C9BE63F(iVar0, "ply", Global_193AFA.f_2);
	unk_0x23AFD3CA3C9BE63F(iVar0, "plyd", 0x00000001);
	unk_0x23AFD3CA3C9BE63F(iVar0, "lp", unk_0xDD0E7998AE8AD485());
	if (unk_0xBEED2BDA8CE1AFF3(&(Global_440000.f_2FACD), -1f, func_547(0x00000000)))
	{
	}
	func_546();
	func_548();
	unk_0xAC460E5FBD1B246B();
	return 0x00000001;
}

void func_636()
{
	Global_2564C8.f_2E7 = 0x00000001;
}

void func_637(bool bParam0)
{
	if (bParam0)
	{
		unk_0x66A58F5B17597484();
	}
	else
	{
		unk_0xABC513AFBA839460();
	}
}

void func_638()
{
	Global_2564C8.f_2E6 = 0x00000001;
}

int func_639(int iParam0)
{
	switch (func_19())
	{
		case 0x00000000:
			if (!func_640(iParam0))
			{
				if (Global_184507[iParam0 /*876*/] == 0x00000002 || Global_184507[iParam0 /*876*/] == 0x00000008)
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

bool func_640(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0x00000000;
}

bool func_641()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000002);
}

void func_642()
{
	Global_2564C8.f_2E6 = 0x00000000;
}

bool func_643()
{
	return Global_2564C8.f_2E6;
}

void func_644(bool bParam0)
{
	unk_0x837C600ECEE8ABA2("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	unk_0x837C600ECEE8ABA2("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	unk_0x837C600ECEE8ABA2("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_645()
{
	Global_193B22.f_C = 0xFFFFFFFF;
	Global_193B22.f_D = 0xFFFFFFFF;
	Global_193B22.f_E = 0xFFFFFFFF;
}

void func_646(int iParam0)
{
	Global_EC6CE = iParam0;
}

void func_647()
{
	Global_18D1DE = 0x00000000;
	Global_1805FB = 0x00000004;
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		Global_180608 = 0x00000001;
	}
	else
	{
		Global_180608 = 0x00000000;
	}
}

void func_649()
{
	Global_18D1DF = 0xFFFFFFFF;
	Global_18D1E5 = 0x00000000;
	Global_18D1E0 = 0xFFFFFFFF;
}

void func_650()
{
	Global_26B66F.f_11F = 0x00000000;
	func_654(0x00000EC6, 0x00000000, 0xFFFFFFFF, 0x00000001);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_652())
		{
			unk_0x64F9F278AB9DCA2C(unk_0x16F2683693E537C9(), 0x00000005, 0x00000000, 0x00000000, 0x00000000);
			func_651();
		}
	}
}

void func_651()
{
	Global_12B33 = 0x00000000;
	Global_12B34 = 0xFFFFFFFF;
	Global_12B35 = 0xFFFFFFFF;
	Global_12B36 = 0xFFFFFFFF;
	Global_12B37 = 0xFFFFFFFF;
	Global_12B38 = 0xFFFFFFFF;
}

bool func_652()
{
	return func_653(unk_0x16F2683693E537C9());
}

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36C584991B4C183F(iParam0, 0x00000005);
	iVar1 = 0xFFFFFFFF;
	switch (unk_0x134B62B726CEC8E6(iParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 0x00000001 && iVar0 <= 0x00000013) || (iVar0 >= 0x00000015 && iVar0 <= 0x0000001D))
			{
				return 0x00000001;
			}
			iVar1 = unk_0x4F4B24509D6989D0(iParam0, 0x00000005, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000005));
			if (unk_0x1A5A491D253EA7BA(iVar1, 0x5B5D91FD, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 0x00000001 && iVar0 <= 0x00000013) || (iVar0 >= 0x00000015 && iVar0 <= 0x0000001D))
			{
				return 0x00000001;
			}
			iVar1 = unk_0x4F4B24509D6989D0(iParam0, 0x00000005, iVar0, unk_0xDADA8E1DD0D0D9D9(iParam0, 0x00000005));
			if (unk_0x1A5A491D253EA7BA(iVar1, 0x5B5D91FD, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_654(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
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

void func_655()
{
	Global_2564C8.f_2E7 = 0x00000000;
}

bool func_656()
{
	return Global_2564C8.f_2E7;
}

void func_657(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_659(&iVar0, 0x00000000, iParam1))
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
		func_658(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_658(int iParam0)
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

int func_659(var uParam0, bool bParam1, int iParam2)
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

void func_660()
{
}

void func_661(int iParam0)
{
	struct<42> Var0;
	int iVar1;
	var uVar2;
	
	Var0 = 0xFFFFFFFF;
	Var0.f_16 = 0xBF800000;
	Var0.f_17 = 0x00000003;
	Var0.f_27 = 0xFFFFFFFF;
	Var0.f_29 = 0xFFFFFFFF;
	if (Global_2564C8.f_239.f_9 == 0x00000000)
	{
		Global_193B3B.f_541 = 0x00000000;
	}
	iVar1 = 0x00000000;
	while (iVar1 <= 0x0000001F)
	{
		uVar2 = Global_193B3B[iVar1 /*42*/].f_3;
		Global_193B3B[iVar1 /*42*/] = { Var0 };
		if (func_713())
		{
			Global_193B3B[iVar1 /*42*/].f_3 = uVar2;
		}
		Global_193B3B[iVar1 /*42*/].f_1 = func_140();
		Global_193B3B[iVar1 /*42*/] = 0xFFFFFFFF;
		Global_193B3B[iVar1 /*42*/].f_2 = 0xFFFFFFFF;
		iVar1++;
	}
	if ((!func_713() && !func_673()) && iParam0)
	{
		Global_193B3B.f_543 = 0x00000000;
		Global_193B3B.f_544 = 0x00000000;
	}
}

int func_662()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		if (Global_193B3B[iVar0 /*42*/].f_1 != func_140())
		{
			if (Global_193B3B[iVar0 /*42*/].f_B > 0x00000000)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_663()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_594();
	}
	return func_664(Global_440000.f_2F9AE);
}

int func_664(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_665(bool bParam0)
{
	struct<51> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_198EA8.f_2 };
		Var0.f_E = Global_198EA8.f_E;
		Var0.f_13 = Global_198EA8.f_13;
		Var0.f_17 = Global_198EA8.f_17;
		Var0.f_19 = Global_198EA8.f_19;
		Var0.f_1E = Global_198EA8.f_1E;
		Var0.f_1A = Global_198EA8.f_1A;
		Var0.f_1B = Global_198EA8.f_1B;
		Var0.f_1C = Global_198EA8.f_1C;
		Var0.f_1D = Global_198EA8.f_1D;
		Var0.f_1F = Global_198EA8.f_1F;
		Var0.f_20 = Global_198EA8.f_20;
		Var0.f_21 = Global_198EA8.f_21;
		Var0.f_28 = Global_198EA8.f_28;
		Var0.f_2A = Global_198EA8.f_2A;
		Var0.f_32 = Global_198EA8.f_32;
		Var0.f_2E = Global_198EA8.f_2E;
	}
	Global_198EA8 = { Var0 };
}

void func_666(bool bParam0)
{
	Global_C0031.f_3 = 0x00000000;
	Global_C0031.f_4 = 0x00000000;
	Global_C0031.f_6 = 0x00000000;
	Global_C0031.f_7 = 0x00000000;
	Global_C0031.f_8 = 0x00000000;
	Global_C0031.f_9 = 0x00000000;
	Global_C0031.f_A = 0x00000000;
	Global_C0031.f_B = 0x00000000;
	Global_C0031.f_C = 0x00000000;
	Global_C0031.f_D = 0x00000000;
	Global_C0031.f_E = 0x00000000;
	Global_C0031.f_F = 0x00000000;
	Global_C0031.f_10 = 0x00000000;
	Global_C0031.f_11 = 0x00000000;
	Global_C0031.f_12 = 0x00000000;
	Global_C0031.f_14 = 0x00000000;
	if (((!func_669() && !func_599()) && Global_193B22.f_9 != 0x00000004) && !func_673())
	{
		Global_C0031.f_2B = 0x00000000;
		Global_C0031.f_2C = 0x00000000;
	}
	Global_C0031.f_16 = 0x00000000;
	Global_C0031.f_18 = 0x00000000;
	Global_C0031.f_19 = 0x00000000;
	Global_C0031.f_1C = 0x00000000;
	Global_C0031.f_1D = 0x00000000;
	Global_C0031.f_1E = 0x00000000;
	Global_C0031.f_1F = 0x00000000;
	Global_C0031.f_20 = 0x00000000;
	Global_C0031.f_21 = 0x00000000;
	Global_C0031.f_24 = 0x00000000;
	Global_C0031.f_25 = 0x00000000;
	Global_C0031.f_26 = 0x00000000;
	Global_C0031.f_27 = 0x00000000;
	Global_C0031.f_28 = 0x00000000;
	Global_C0031.f_29 = 0x00000000;
	Global_C0031.f_2A = 0x00000000;
	Global_C0031.f_23 = 0x00000000;
	Global_C0031.f_3F = 0x00000000;
	if (bParam0)
	{
		Global_C0031 = 0x00000000;
		Global_C0031.f_1 = 0x00000000;
		if ((!func_669() && !func_599()) && Global_193B22.f_9 != 0x00000004)
		{
			Global_C0031.f_2 = 0x00000000;
			Global_C0031.f_15 = 0x00000000;
		}
		Global_C0031.f_5 = 0x00000000;
		Global_C0031.f_13 = 0x00000000;
		Global_C0031.f_17 = 0x00000000;
		Global_C0031.f_1A = 0x00000000;
		Global_C0031.f_2E = 0x00000000;
		Global_C0031.f_2F = 0x00000000;
		Global_C0031.f_30 = 0x00000000;
		Global_C0031.f_32 = 0x00000000;
		Global_C0031.f_33 = 0x00000000;
		Global_C0031.f_34 = 0x00000000;
		Global_C0031.f_35 = 0x00000000;
		Global_C0031.f_36 = 0x00000000;
		Global_C0031.f_37 = 0x00000000;
	}
}

void func_667(bool bParam0)
{
	Global_C0003.f_3 = 0x00000000;
	Global_C0003.f_4 = 0x00000000;
	Global_C0003.f_6 = 0x00000000;
	Global_C0003.f_7 = 0x00000000;
	Global_C0003.f_8 = 0x00000000;
	Global_C0003.f_9 = 0x00000000;
	Global_C0003.f_A = 0x00000000;
	Global_C0003.f_B = 0x00000000;
	Global_C0003.f_C = 0x00000000;
	Global_C0003.f_D = 0x00000000;
	Global_C0003.f_E = 0x00000000;
	Global_C0003.f_F = 0x00000000;
	Global_C0003.f_10 = 0x00000000;
	Global_C0003.f_11 = 0x00000000;
	Global_C0003.f_12 = 0x00000000;
	Global_C0003.f_14 = 0x00000000;
	Global_C0003.f_15 = 0x00000000;
	Global_C0003.f_16 = 0x00000000;
	Global_C0003.f_18 = 0x00000000;
	Global_C0003.f_19 = 0x00000000;
	Global_C0003.f_1C = 0x00000000;
	Global_C0003.f_1D = 0x00000000;
	Global_C0003.f_1E = 0x00000000;
	Global_C0003.f_1F = 0x00000000;
	Global_C0003.f_20 = 0x00000000;
	Global_C0003.f_21 = 0x00000000;
	Global_C0003.f_24 = 0x00000000;
	Global_C0003.f_25 = 0x00000000;
	Global_C0003.f_26 = 0x00000000;
	Global_C0003.f_27 = 0x00000000;
	Global_C0003.f_28 = 0x00000000;
	Global_C0003.f_29 = 0x00000000;
	Global_C0003.f_2A = 0x00000000;
	Global_C0003.f_23 = 0x00000000;
	if (bParam0)
	{
		Global_C0003 = 0x00000000;
		Global_C0003.f_1 = 0x00000000;
		Global_C0003.f_2 = 0x00000000;
		Global_C0003.f_5 = 0x00000000;
		Global_C0003.f_13 = 0x00000000;
		Global_C0003.f_17 = 0x00000000;
		Global_C0003.f_1A = 0x00000000;
	}
}

void func_668(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x0674E58A79778E99(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

bool func_669()
{
	return Global_193B22.f_3;
}

bool func_670()
{
	return Global_258538.f_7;
}

bool func_671()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_27.f_4, 0x00000008);
}

void func_672()
{
	Global_2564C8.f_27.f_39 = 0x00000000;
}

bool func_673()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_27.f_4, 0x00000000);
}

void func_674()
{
	unk_0x0674E58A79778E99(&(Global_EA450.f_8), 0x00000008);
}

void func_675(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D.f_1), 0x00000000);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D.f_1), 0x00000000);
	}
}

void func_676(int iParam0)
{
	if ((unk_0x8CD06866876216F2() && !Global_140856) && !Global_140857)
	{
		if (((Global_2567E2.f_D8D != 0x00000000 && Global_2567E2.f_D8D.f_1 != 0x00000000) && Global_2567E2.f_D8D.f_2 != 0x00000000) && Global_2567E2.f_D8D.f_3 != 0x00000000)
		{
			unk_0xB2AACC7CFFE353DD(Global_2567E2.f_D8D, Global_2567E2.f_D8D.f_1, Global_2567E2.f_D8D.f_2, Global_2567E2.f_D8D.f_3, iParam0);
		}
	}
	func_677();
}

void func_677()
{
	Global_2567E2.f_D8D = 0x00000000;
	Global_2567E2.f_D8D.f_1 = 0x00000000;
	Global_2567E2.f_D8D.f_2 = 0x00000000;
	Global_2567E2.f_D8D.f_3 = 0x00000000;
}

void func_678()
{
	Global_2567E2.f_1.f_AF1 = 0x00000001;
}

bool func_679()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2567E2.f_1.f_AF9, 0x0000000C);
}

void func_680(int iParam0)
{
	if (!func_673() || iParam0)
	{
		Global_1808B7 = 0x00000000;
		Global_1808B6 = 0x00000000;
	}
}

void func_681(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar1;
	
	Global_2564C8.f_27 = 0xFFFFFFFF;
	Global_2564C8.f_27.f_40 = 0xFFFFFFFF;
	Global_2564C8.f_27.f_2 = 0xFFFFFFFF;
	Global_2564C8.f_27.f_5 = 0x00000000;
	Global_2564C8.f_27.f_28 = 0x00000000;
	Global_2564C8.f_27.f_3 = 0x00000000;
	Global_2564C8.f_27.f_4 = 0x00000000;
	Global_2564C8.f_27.f_2A = 0xFFFFFFFF;
	Global_2564C8.f_27.f_6 = { Var0 };
	Global_2564C8.f_27.f_3E = 0x00000000;
	Global_2564C8.f_27.f_8A = 0x00000000;
	Global_2564C8.f_27.f_161 = 0x00000000;
	Global_2564C8.f_27.f_3F = 0x00000000;
	Global_2564C8.f_27.f_8B = 0x00000000;
	Global_2564C8.f_27.f_162 = 0x00000000;
	Global_2564C8.f_27.f_210 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x0000000D)
	{
		Global_2564C8.f_27.f_1E5[iVar1] = 0x00000000;
		iVar1++;
	}
	Global_2564C8.f_27.f_3D = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		Global_2564C8.f_27.f_41[iVar1] = 0x00000000;
		iVar1++;
	}
	Global_2564C8.f_27.f_89 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x0000001D)
	{
		Global_2564C8.f_27.f_8C[iVar1] = 0x00000000;
		iVar1++;
	}
	Global_2564C8.f_27.f_160 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x0000000D)
	{
		Global_2564C8.f_27.f_163[iVar1] = 0x00000000;
		Global_2564C8.f_27.f_172[iVar1] = 0x00000000;
		Global_2564C8.f_27.f_190[iVar1 /*6*/] = { Var0 };
		Global_2564C8.f_27.f_181[iVar1] = 0x00000000;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_2564C8.f_27.f_2C[iVar1] = 0x00000000;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2564C8.f_27.f_1FA = 0x00000000;
			Global_2564C8.f_27.f_1FB = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000005)
			{
				Global_2564C8.f_27.f_202[iVar1] = 0xFFFFFFFF;
				Global_2564C8.f_27.f_208[iVar1] = 0xFFFFFFFF;
				iVar1++;
			}
			Global_2564C8.f_27.f_37 = 0x00000000;
			Global_2564C8.f_27.f_C = { Var0 };
			Global_2564C8.f_27.f_3B = 0x00000000;
			Global_2564C8.f_27.f_1F4 = { 0f, 0f, 0f };
			Global_2564C8.f_27.f_1F7 = { 0f, 0f, 0f };
			Global_2564C8.f_27.f_3A = 0x00000000;
			Global_2564C8.f_27.f_39 = 0x00000000;
			Global_2564C8.f_27.f_1 = 0xFFFFFFFF;
			Global_2564C8.f_27.f_20E = 0xFFFFFFFF;
		}
	}
}

void func_682()
{
	Global_258538.f_8 = 0x00000000;
	Global_258538.f_7 = 0x00000000;
}

void func_683()
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = unk_0x84F1BBE0C800DB62();
	iVar1 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_EC5D5, unk_0x2B6E0A53779D29EA()));
	unk_0x1B95DBEA868760F4(Global_440000, &(Global_440000.f_2FACD), uVar0, iVar1, Global_EC5D5.f_1);
	func_684();
}

void func_684()
{
	Global_EC5D5 = 0x00000000;
	Global_EC5D5.f_1 = 0x00000000;
}

bool func_685()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000094;
}

bool func_686()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 0x00000005;
}

int func_687()
{
	if (func_341() && unk_0xA14BB9332558B949())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_688()
{
	Global_195E30.f_6EE = 0x00000000;
}

void func_689()
{
	Global_2564C8.f_2E0 = 0x00000000;
}

bool func_690()
{
	return Global_2564C8.f_2E0;
}

void func_691()
{
	Global_4CD7 = 0x00000000;
	func_692();
}

void func_692()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

bool func_693(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000007;
}

bool func_694(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 0x00000002;
}

int func_695(int iParam0)
{
	if (iParam0 == Global_40001.f_1390[0x00000000])
	{
		return 0x00000000;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000001])
	{
		return 0x00000001;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000002])
	{
		return 0x00000002;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000003])
	{
		return 0x00000003;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000004])
	{
		return 0x00000004;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000005])
	{
		return 0x00000005;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000006])
	{
		return 0x00000006;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000007])
	{
		return 0x00000007;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000008])
	{
		return 0x00000008;
	}
	else if (iParam0 == Global_40001.f_1390[0x00000009])
	{
		return 0x00000009;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000A])
	{
		return 0x0000000A;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000B])
	{
		return 0x0000000B;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000C])
	{
		return 0x0000000C;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000D])
	{
		return 0x0000000D;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000E])
	{
		return 0x0000000E;
	}
	else if (iParam0 == Global_40001.f_1390[0x0000000F])
	{
		return 0x0000000F;
	}
	return 0xFFFFFFFF;
}

void func_696()
{
	Global_2564C8.f_258 = 0x00000000;
}

void func_697()
{
	struct<14> Var0;
	int iVar1;
	
	Var0.f_4 = 0xFFFFFFFF;
	iVar1 = unk_0xD803B885F5E47A62();
	if (iVar1 != 0xFFFFFFFF)
	{
		Global_18D38C[iVar1 /*38*/] = { Var0 };
	}
}

void func_698()
{
	Global_193B22.f_7 = 0x00000000;
}

void func_699(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2564C8.f_239.f_3 = { Var0 };
	Global_2564C8.f_239 = 0x00000000;
	Global_2564C8.f_239.f_1 = 0x00000000;
	Global_2564C8.f_239.f_C = 0x00000000;
	if (bParam0)
	{
		Global_2564C8.f_239.f_2 = 0x00000000;
		Global_2564C8.f_239.f_D = 0x00000000;
		Global_2564C8.f_239.f_E = 0x00000000;
		Global_248AD3 = 0x00000000;
		if (bParam1)
		{
			Global_2564C8.f_239.f_9 = 0x00000000;
			Global_2564C8.f_239.f_A = 0x00000000;
			Global_2564C8.f_239.f_B = 0x00000000;
			Global_2564C8.f_239.f_10 = 0xFFFFFFFF;
		}
		if (iParam2 && !unk_0xA14BB9332558B949())
		{
			Global_193B3B.f_543 = 0x00000000;
			Global_193B3B.f_544 = 0x00000000;
		}
		if (unk_0xD803B885F5E47A62() != 0xFFFFFFFF)
		{
			Global_18D38C[unk_0xD803B885F5E47A62() /*38*/].f_2 = 0x00000000;
			Global_18D38C[unk_0xD803B885F5E47A62() /*38*/] = 0x00000000;
		}
	}
}

void func_700()
{
	Global_2564C8.f_239.f_C = 0x00000000;
}

bool func_701()
{
	return Global_2564C8.f_239.f_9 > 0x00000000;
}

var func_702()
{
	return Global_2564C8.f_239.f_C;
}

void func_703()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_63.f_20), 0x0000000B);
}

void func_704()
{
	unk_0x0674E58A79778E99(&(Global_18D38C[unk_0xD803B885F5E47A62() /*38*/].f_1D), 0x00000003);
}

void func_705()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000001F)
	{
		Global_1808C4[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_706()
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (iVar0 != 0xFFFFFFFF)
	{
		Global_18D38C[iVar0 /*38*/].f_5 = 0x00000000;
	}
}

void func_707()
{
	Global_258DDC = 0x00000000;
	Global_258DDD = 0x00000000;
	Global_258DDE = 0x00000000;
	Global_258DDF = 0x00000000;
}

void func_708()
{
	Global_2564C8.f_27.f_38 = 0x00000000;
}

void func_709()
{
	Global_2564C8.f_27.f_3A = 0x00000000;
}

void func_710()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) != Global_152E83)
	{
		if (unk_0x5A0033B025D45F1B() == 0x00000000 && Global_152E83 == 0x00000003)
		{
			Global_152E83 = unk_0xA4FD7964FEE91ED8(0x00000000);
		}
		unk_0x398B6B43792F03FE(unk_0x5A0033B025D45F1B(), Global_152E83);
	}
}

int func_711()
{
	if (func_712() != 0x00000002)
	{
		return 0x00000000;
	}
	if (!func_673() && !((Global_197CEB || Global_140817) && func_565()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_712()
{
	return Global_2564C8.f_27.f_28;
}

bool func_713()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_239.f_1, 0x00000000);
}

void func_714(int iParam0)
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xA2AE78C3DF2926AF(iParam0);
	}
}

void func_715(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x6E61BE9E61434AC1();
	if (iVar0 != 0xFFFFFFFF)
	{
		if (bParam0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_CB, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_184507[iVar0 /*876*/].f_CB), 0x00000000);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_CB, 0x00000000))
		{
			unk_0x0674E58A79778E99(&(Global_184507[iVar0 /*876*/].f_CB), 0x00000000);
		}
	}
}

void func_716()
{
	unk_0x0674E58A79778E99(&(Global_2564C8.f_2), 0x0000001F);
}

void func_717()
{
	Global_2537E2.f_766.f_330 = func_140();
}

void func_718()
{
	Global_2564C8.f_310 = 0x00000000;
}

void func_719()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000004)
	{
		func_722(iVar0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		Global_197EBE.f_10F[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_721();
	func_720();
	Global_197EBE = 0x00000000;
}

void func_720()
{
	Global_197EBE.f_4 = 0x00000000;
}

void func_721()
{
	Global_197EBE.f_3 = 0x00000000;
}

void func_722(int iParam0)
{
	struct<53> Var0;
	
	Var0 = 0xFFFFFFFF;
	Var0.f_1 = 0x00000001;
	Var0.f_2 = 0x00000003;
	Var0.f_1C = 0x00000004;
	Global_197EBE.f_5[iParam0 /*53*/] = { Var0 };
}

void func_723()
{
	unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12), 0x00000014);
}

void func_724(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0x00000012, 0x00000001))
		{
			func_65(iParam0, 0x00000012, 0x00000001);
		}
	}
	else if (func_26(iParam0, 0x00000012, 0x00000001))
	{
		func_63(iParam0, 0x00000012, 0x00000001);
	}
}

void func_725()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_31B), 0x00000003);
}

void func_726(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_224();
	if (bParam0)
	{
		func_314(0x00000001);
		unk_0xA37A90C62806D848(0x00000001);
	}
	unk_0x790015DC92C918E2();
	func_217();
	unk_0x4DC7B72197441408(0x00000000);
	func_253(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, bParam2);
	func_732();
	func_205(0x0000000C, 0x00000000, 0xFFFFFFFF);
	func_206(0x00000001);
	unk_0x5413873D3F67BF93(0x00000000, 0xFFFFFFFF);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	func_731();
	unk_0xBEF52C1D400C0A44(0x00000001);
	if (unk_0x8CD06866876216F2())
	{
		if (bParam3)
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0xF601BB024C8F11A7(0x00000000, 0x00000000);
			}
		}
	}
	func_260(0x00000000);
	if (((((func_124() == 0x00000000 && func_730() == 0x00000000) && iParam1) && !func_257(unk_0xD803B885F5E47A62())) && !unk_0xEB880D98B5988D0C()) && func_334())
	{
		func_363(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
	}
	Global_2537E2.f_EA3 = 0x00000000;
	func_727();
}

void func_727()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8CD06866876216F2() && func_199(&Global_26D966))
	{
		if (!func_198(&Global_26D966, 0x00000DAC, 0x00000001) || unk_0xFD59EF2472AF72AF(unk_0xD803B885F5E47A62()))
		{
			if (!func_729())
			{
				if (unk_0x757EF87A33649210())
				{
					func_345(&Global_26D966, 0x00000001, 0x00000000);
				}
				else if (!func_255(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x76CA4A8E) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x76CA4A8E) != 0x00000000)
					{
						unk_0x946CEAB3EE0FE12A(0x00000001);
						unk_0x0ADC5FFEF2329036(unk_0xD803B885F5E47A62(), 0x00000001);
					}
					unk_0x4FB9A846E72E2F23(unk_0x16F2683693E537C9(), 0x000000FF, 0x00000000);
				}
			}
			else
			{
				func_345(&Global_26D966, 0x00000001, 0x00000000);
			}
		}
		else
		{
			if (unk_0x8CD06866876216F2())
			{
				unk_0x672BED15BAF1B335(unk_0x16F2683693E537C9());
			}
			func_197(&Global_26D966);
		}
	}
	if (Global_26D96A > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_26D96A, iVar0))
			{
				iVar1 = unk_0x117658E336116132(iVar0);
				if (func_14(iVar1, 0x00000001, 0x00000001))
				{
					func_728(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_728(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26D96A, iParam0) && unk_0x8CD06866876216F2())
	{
		if (!func_198(&(Global_26D96B[iParam0 /*2*/]), 0x00000DAC, 0x00000001) || unk_0xFD59EF2472AF72AF(iParam0))
		{
			if (!func_729())
			{
				if (unk_0x757EF87A33649210())
				{
					func_345(&(Global_26D96B[iParam0 /*2*/]), 0x00000001, 0x00000000);
				}
				else if (!func_255(iParam0, 0x00000000))
				{
					unk_0x0ADC5FFEF2329036(iParam0, 0x00000001);
					if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
					{
						unk_0x4FB9A846E72E2F23(unk_0x9539D44F3E4492F6(iParam0), 0x000000FF, 0x00000000);
					}
				}
			}
			else
			{
				func_345(&(Global_26D96B[iParam0 /*2*/]), 0x00000001, 0x00000000);
			}
		}
		else
		{
			if (!unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				unk_0x672BED15BAF1B335(unk_0x9539D44F3E4492F6(iParam0));
			}
			func_197(&(Global_26D96B[iParam0 /*2*/]));
			unk_0x0674E58A79778E99(&Global_26D96A, iParam0);
		}
	}
}

int func_729()
{
	if (unk_0x22A8E52414415B76() || unk_0xF929B1A0A409FF93())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_730()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 0x00000007);
}

void func_731()
{
	Global_56C3.f_5 = 0x00000000;
}

void func_732()
{
	func_206(0x00000001);
	func_205(0x00000004, 0x00000000, 0xFFFFFFFF);
	func_205(0x00000006, 0x00000000, 0xFFFFFFFF);
	func_205(0x00000007, 0x00000000, 0xFFFFFFFF);
	func_205(0x00000003, 0x00000000, 0xFFFFFFFF);
	func_205(0x00000001, 0x00000000, 0xFFFFFFFF);
	func_205(0x00000002, 0x00000000, 0xFFFFFFFF);
	func_205(0x0000000B, 0x00000000, 0xFFFFFFFF);
	func_205(0x0000000D, 0x00000000, 0xFFFFFFFF);
	func_205(0x0000000E, 0x00000000, 0xFFFFFFFF);
	func_205(0x00000010, 0x00000000, 0xFFFFFFFF);
}

void func_733(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1406C0)
	{
		if (!func_767())
		{
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000008)
			{
				Global_1806ED[iVar0] = 0x00000000;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_765(unk_0xD803B885F5E47A62(), bParam0);
	iVar2 = func_763(iVar1, bParam0);
	if (!func_762(0xFFFFFFFF))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000008)
		{
			Global_1806ED[iVar0] = 0x00000000;
			iVar0++;
		}
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Global_1806ED[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar4 = 0x00000000;
	while (iVar4 <= 0x000000FF)
	{
		iVar3 = func_761(iVar4);
		if (iVar2 >= iVar3 && iVar3 != 0xFFFFFFFF)
		{
			if (func_759(iVar4))
			{
				func_750(iVar4, 0x00000001);
			}
		}
		iVar4++;
	}
	func_744(func_745(0x0000003B, 0x00000000, 0x00000000), 0x00000000);
	func_742(func_745(0x00000087, 0x00000000, 0x00000000), 0x00000001);
	func_741(func_745(0x00000016, 0x00000000, 0x00000000), func_745(0x00000049, 0x00000000, 0x00000000));
	if (func_767())
	{
		if (func_502(0x0000004D, 0xFFFFFFFF))
		{
			func_740(0x00000001);
			func_739(0x00000001);
		}
	}
	if (func_738() || func_737())
	{
		func_32(0x0000004D, 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (unk_0x8CD06866876216F2())
		{
			func_734(0x0000001C, 0x00000001, 0x00000000);
			func_734(0x0000001D, 0x00000001, 0x00000000);
			func_734(0x0000001E, 0x00000001, 0x00000000);
			func_734(0x0000001F, 0x00000001, 0x00000000);
			func_734(0x00000020, 0x00000001, 0x00000000);
			func_734(0x00000021, 0x00000001, 0x00000000);
			func_734(0x00000022, 0x00000001, 0x00000000);
			func_734(0x00000023, 0x00000001, 0x00000000);
			func_734(0x00000024, 0x00000001, 0x00000000);
			func_734(0x00000025, 0x00000001, 0x00000000);
			func_734(0x00000026, 0x00000001, 0x00000000);
		}
	}
	if (func_745(0x00000015, 0x00000000, 0x00000000))
	{
		unk_0x0F30FBDF741A7E3E(0x00000000);
	}
	Global_EC6CF = 0x00000000;
}

void func_734(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0x00000000, 0x00000000))
		{
			if (iParam2 && Global_181EC.f_12[iParam0])
			{
				if (func_736(iParam0) == 0x00000003 && !func_25(iParam0))
				{
					func_735(iParam0);
					func_65(iParam0, 0x00000000, 0x00000000);
					func_63(iParam0, 0x00000001, 0x00000000);
					func_405(iParam0);
				}
				else
				{
					func_65(iParam0, 0x00000001, 0x00000000);
					func_405(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0x00000000, 0x00000000);
				func_63(iParam0, 0x00000001, 0x00000000);
				func_405(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 0x00000001, 0x00000000);
			func_405(iParam0);
		}
	}
	else if (func_26(iParam0, 0x00000000, 0x00000000))
	{
		func_63(iParam0, 0x00000000, 0x00000000);
		func_63(iParam0, 0x00000001, 0x00000000);
		func_405(iParam0);
	}
}

void func_735(int iParam0)
{
	if (Global_181EC.f_12[iParam0])
	{
		func_65(iParam0, 0x0000000A, 0x00000001);
		func_65(iParam0, 0x00000013, 0x00000001);
	}
}

int func_736(int iParam0)
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

bool func_737()
{
	return Global_140861;
}

bool func_738()
{
	return Global_140863;
}

void func_739(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_734(0x0000001C, bParam0, 0x00000000);
	func_734(0x0000001E, bParam0, 0x00000000);
	func_734(0x0000001F, bParam0, 0x00000000);
	func_734(0x00000021, bParam0, 0x00000000);
	func_734(0x00000022, bParam0, 0x00000000);
	func_734(0x00000026, bParam0, 0x00000000);
}

void func_740(bool bParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	func_734(0x0000001D, bParam0, 0x00000000);
	func_734(0x00000020, bParam0, 0x00000000);
	func_734(0x00000024, bParam0, 0x00000000);
	func_734(0x00000023, bParam0, 0x00000000);
	func_734(0x00000025, bParam0, 0x00000000);
}

void func_741(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	bVar0 = 0x00000001;
	if (bParam0)
	{
		bVar0 = 0x00000000;
	}
	func_734(0x00000000, bParam0, 0x00000001);
	func_734(0x00000001, bParam0, 0x00000001);
	func_734(0x00000002, bParam0, 0x00000001);
	func_734(0x00000003, bParam0, 0x00000001);
	func_734(0x00000004, bParam0, 0x00000001);
	func_734(0x00000005, bParam0, 0x00000001);
	func_734(0x00000006, bParam0, 0x00000001);
	func_734(0x00000007, bParam0, bVar0);
	func_734(0x00000008, bParam0, 0x00000001);
	func_734(0x00000009, bParam0, 0x00000001);
	func_734(0x0000000A, bParam0, 0x00000001);
	func_734(0x0000000B, bParam0, 0x00000001);
	func_734(0x0000000C, bParam0, bVar0);
	func_734(0x0000000D, bParam0, 0x00000001);
	func_734(0x00000015, bParam0, 0x00000001);
	func_734(0x0000000E, bParam0, 0x00000001);
	func_734(0x0000000F, bParam0, 0x00000001);
	func_734(0x00000010, bParam0, 0x00000001);
	func_734(0x00000011, bParam0, 0x00000001);
	func_734(0x00000012, bParam0, 0x00000001);
	func_734(0x00000013, bParam0, 0x00000001);
	func_734(0x00000014, bParam0, 0x00000001);
	func_734(0x00000016, bParam0, 0x00000001);
	func_734(0x00000017, bParam0, 0x00000001);
	func_734(0x00000018, bParam0, 0x00000001);
	func_734(0x00000019, bParam0, 0x00000001);
	func_734(0x0000001A, bParam0, 0x00000001);
	func_734(0x0000001B, bParam0, 0x00000001);
	func_406(0x00000001, !bParam1);
	if (!bVar0)
	{
		func_735(0x0000000C);
	}
}

void func_742(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_743(0x00000000);
	if (Global_40001.f_3F == 0x00000001 && func_745(0x00000087, 0x00000000, 0x00000000))
	{
		bParam0 = 0x00000001;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_734(0x0000002C, bParam0, 0x00000000);
	}
	if (bParam1)
	{
		if (!func_25(0x0000002C))
		{
			func_735(0x0000002C);
		}
	}
	if (bParam0)
	{
		if (func_622(0x00000000) > 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C7), 0x0000000A);
		}
	}
}

int func_743(bool bParam0)
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6BE, 0x0000001A))
		{
			iVar0 = func_27(0x000004A7, 0xFFFFFFFF, 0x00000000);
			if (!unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000017))
			{
				return 0x00000000;
			}
		}
	}
	return func_502(0x0000007A, 0xFFFFFFFF);
}

void func_744(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	uVar0 = func_743(0x00000000);
	func_734(0x00000027, bParam0, 0x00000000);
	func_734(0x00000028, bParam0, 0x00000000);
	func_734(0x00000029, bParam0, 0x00000000);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_734(0x0000002B, bParam0, 0x00000000);
		func_734(0x0000002A, bParam0, 0x00000000);
	}
	if (bParam1)
	{
		if (!func_25(0x00000027))
		{
			func_735(0x00000027);
		}
		if (!func_25(0x00000028))
		{
			func_735(0x00000028);
		}
		if (!func_25(0x00000029))
		{
			func_735(0x00000029);
		}
		if (!func_25(0x0000002A))
		{
			func_735(0x0000002A);
		}
		if (!func_25(0x0000002B))
		{
			func_735(0x0000002B);
		}
	}
}

bool func_745(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1E06 == 0x00000001)
	{
		if (iParam0 == 0x00000043)
		{
			return 0x00000001;
		}
		if (iParam0 == 0x0000004A)
		{
			return 0x00000001;
		}
		if (func_747(unk_0xD803B885F5E47A62(), 0x00000055))
		{
			if (((((iParam0 == 0x00000040 || iParam0 == 0x0000004D) || iParam0 == 0x0000003D) || iParam0 == 0x00000051) || iParam0 == 0x0000003F) || iParam0 == 0x0000003E)
			{
				return 0x00000001;
			}
		}
		if ((((((((((iParam0 == 0x00000042 || iParam0 == 0x00000074) || iParam0 == 0x00000067) || iParam0 == 0x00000068) || iParam0 == 0x00000069) || iParam0 == 0x00000077) || iParam0 == 0x00000058) || iParam0 == 0x0000004B) || iParam0 == 0x0000005F) || iParam0 == 0x00000041) || iParam0 == 0x00000062)
		{
			return 0x00000001;
		}
	}
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000001F)
	{
		if (Global_40001.f_126E == 0x00000001)
		{
			return 0x00000001;
		}
	}
	if (func_738() || func_737())
	{
		return 0x00000001;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 0x00000020);
	iVar0 = (iVar0 % 0x00000020);
	if (bParam1)
	{
		if (iParam0 == 0x00000003)
		{
			if (func_746())
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (bParam2)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1806ED[iVar1], iVar0);
}

int func_746()
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000017))
	{
		return 0x00000001;
	}
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_28(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000017);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_747(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_767())
	{
		return 0x00000000;
	}
	if (func_749())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000056)
	{
		return 0x00000001;
	}
	uVar0 = func_748(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_2DA, iVar1);
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000056:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000001;
		
		case 0x0000000C:
			return 0x00000002;
		
		case 0x0000001F:
			return 0x00000003;
		
		case 0x00000014:
			return 0x00000004;
		
		case 0x00000012:
			return 0x00000005;
		
		case 0x00000002:
			return 0x00000006;
		
		case 0x0000004C:
			return 0x00000007;
		
		case 0x00000016:
			return 0x00000008;
		
		case 0x00000035:
			return 0x00000009;
		
		case 0x00000022:
			return 0x0000000A;
		
		case 0x00000098:
			return 0x0000000B;
		
		case 0x00000055:
			return 0x0000000C;
		
		case 0x00000054:
			return 0x0000000D;
		
		case 0x00000000:
			return 0x0000000E;
		
		case 0x00000001:
			return 0x0000000F;
		
		case 0x00000099:
			return 0x00000010;
		
		case 0x00000097:
			return 0x00000011;
		
		case 0x0000000E:
			return 0x00000012;
		
		case 0x0000000F:
			return 0x00000013;
		
		case 0x00000018:
			return 0x00000014;
		
		case 0x0000001E:
			return 0x00000015;
		
		case 0x0000002E:
			return 0x00000016;
		
		case 0x0000002F:
			return 0x00000017;
		
		case 0x00000036:
			return 0x00000018;
		
		case 0x00000033:
			return 0x00000019;
		
		case 0x0000003C:
			return 0x0000001A;
		
		case 0x0000003E:
			return 0x0000001B;
		
		case 0x00000042:
			return 0x0000001C;
		
		case 0x00000045:
			return 0x0000001D;
		
		case 0x0000009A:
			return 0x0000001E;
		
		case 0x00000052:
			return 0x0000001F;
		
		case 0x0000009D:
			return 0x00000020;
		
		default:
	}
	return 0x00000001;
}

bool func_749()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000003);
}

void func_750(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		if (bParam1)
		{
			if (!func_758(0xFFFFFFFF))
			{
				if (!func_767())
				{
					return;
				}
			}
			if (!func_758(0xFFFFFFFF))
			{
				if (iParam0 == 0x0000001E)
				{
					if (!func_757() && !func_756())
					{
						return;
					}
				}
			}
			if (iParam0 == 0x0000003C)
			{
				if (!func_755())
				{
					return;
				}
			}
			if (iParam0 == 0x0000001D)
			{
				if (!func_758(0xFFFFFFFF))
				{
					if (!func_751())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 0x00000020);
		iVar0 = (iVar0 % 0x00000020);
		unk_0x5D96D8530B3D0904(&(Global_1806ED[iVar1]), iVar0);
	}
}

int func_751()
{
	int iVar0;
	
	if (func_754(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_28(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002))
	{
		func_752(0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_752(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000019))
		{
			func_753(unk_0xD803B885F5E47A62(), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000019);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000019))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E), 0x00000019);
	}
}

void func_753(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_748(iParam1);
	iVar1 = uVar0;
	unk_0x5D96D8530B3D0904(&(Global_184507[iParam0 /*876*/].f_2DA), iVar1);
}

bool func_754(int iParam0)
{
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 0x00000019);
}

int func_755()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000006))
	{
		return 0x00000001;
	}
	iVar0 = Global_152E10[func_28(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000000))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000006))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000006);
		}
		return 0x00000001;
	}
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_756()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000007);
}

int func_757()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	return func_502(0x00000079, 0xFFFFFFFF);
}

bool func_758(int iParam0)
{
	return func_502(0x0000007B, iParam0);
}

int func_759(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000017:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001E:
		case 0x00000008:
		case 0x00000020:
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000014:
		case 0x0000001B:
		case 0x0000001D:
		case 0x00000013:
		case 0x0000001F:
		case 0x0000003B:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000043:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x00000051:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005D:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x00000077:
		case 0x00000079:
		case 0x0000007A:
		case 0x0000007C:
		case 0x0000007D:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
		case 0x00000080:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x0000009C:
		case 0x00000088:
		case 0x0000008A:
		case 0x00000089:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000094:
		case 0x00000087:
		case 0x00000082:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 0x00000020);
			iVar0 = func_27(func_760(iParam0), 0xFFFFFFFF, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iVar1))
			{
				return 0x00000001;
			}
			break;
		
		default:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_760(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 0x00000020);
	switch (iVar0)
	{
		case 0x00000000:
			return 0x000004B0;
		
		case 0x00000001:
			return 0x000004B1;
		
		case 0x00000002:
			return 0x000004B2;
		
		case 0x00000003:
			return 0x000004B3;
		
		case 0x00000004:
			return 0x000004B4;
		
		case 0x00000005:
			return 0x000004B6;
		
		case 0x00000006:
			return 0x00000EE7;
		
		case 0x00000007:
			return 0x00000FB2;
		
		case 0x00000008:
			return 0x00001560;
		
		default:
	}
	return 0x000004B0;
}

int func_761(int iParam0)
{
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case 0x00000010:
		case 0x00000001:
		case 0x00000002:
		case 0x0000001C:
			return 0x00000001;
		
		case 0x00000015:
			return 0x00000002;
		
		case 0x00000016:
		case 0x00000012:
		case 0x00000011:
		case 0x00000049:
		case 0x0000001E:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000004C:
		case 0x0000000D:
		case 0x0000005A:
		case 0x00000000:
		case 0x00000063:
		case 0x00000005:
		case 0x00000020:
		case 0x0000007D:
		case 0x00000081:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
		case 0x00000086:
		case 0x00000088:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x00000090:
		case 0x00000092:
		case 0x00000089:
		case 0x00000094:
		case 0x00000087:
		case 0x000000EC:
		case 0x00000096:
			if (!func_758(0xFFFFFFFF))
			{
				return 0x00000003;
			}
			else
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
		case 0x00000066:
		case 0x0000006E:
		case 0x0000009C:
			return 0x00000005;
		
		case 0x0000000C:
		case 0x0000000B:
		case 0x0000000E:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000007A:
			return 0x00000006;
		
		case 0x00000061:
		case 0x0000006B:
			return 0x00000007;
		
		case 0x00000004:
			return 0x00000008;
		
		case 0x00000013:
			return 0x00000008;
		
		case 0x0000001D:
			return 0x0000000A;
		
		case 0x00000008:
			return 0x0000000B;
		
		case 0x0000003D:
		case 0x00000077:
		case 0x00000079:
		case 0x00000060:
		case 0x00000080:
			return 0x0000000C;
		
		case 0x00000059:
			return 0x0000000D;
		
		case 0x0000001F:
			return 0x0000000E;
		
		case 0x00000003:
		case 0x00000067:
		case 0x0000007C:
		case 0x0000007E:
		case 0x0000007F:
		case 0x0000004E:
			return 0x0000000F;
		
		case 0x0000006D:
		case 0x00000058:
			return 0x00000010;
		
		case 0x0000004A:
		case 0x00000064:
			return 0x00000011;
		
		case 0x00000006:
			return 0x00000012;
		
		case 0x00000014:
			return 0x00000013;
		
		case 0x0000003E:
		case 0x0000006C:
		case 0x00000082:
			return 0x00000014;
		
		case 0x00000041:
		case 0x0000005D:
			return 0x00000015;
		
		case 0x0000003F:
		case 0x00000068:
			return 0x00000019;
		
		case 0x0000004D:
		case 0x0000006A:
			return 0x0000001E;
		
		case 0x00000051:
		case 0x00000062:
			return 0x00000023;
		
		case 0x0000004B:
		case 0x0000005F:
			return 0x00000028;
		
		case 0x00000069:
			return 0x0000002D;
			break;
		
		case 0x00000043:
		case 0x00000040:
			return 0x00000032;
	}
	return 0xFFFFFFFF;
}

int func_762(int iParam0)
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	return func_502(0x00000077, iParam0);
}

int func_763(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_764(iParam0, 0x00000000);
}

int func_764(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_765(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_766(iParam0);
}

int func_766(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_28(0xFFFFFFFF)];
			}
			else if (func_60(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_28(0xFFFFFFFF)];
	}
	return 0x00000000;
}

int func_767()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_738())
	{
		return 0x00000001;
	}
	if (func_737())
	{
		return 0x00000001;
	}
	return func_502(0x00000078, 0xFFFFFFFF);
}

int func_768()
{
	var uVar0;
	
	func_773(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_485())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_772())
	{
		return 0x00000001;
	}
	if (func_771(0x0000009F))
	{
		if (!func_770())
		{
			return 0x00000001;
		}
	}
	if (func_771(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_769() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_769()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_769()
{
	switch (func_19())
	{
		case 0x00000000:
			return func_373();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

bool func_770()
{
	return Global_2564C8.f_256;
}

int func_771(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_772()
{
	return Global_258C08;
}

void func_773(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_774(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_774(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_14(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_775(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_775(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_776()
{
	SYSTEM::WAIT(0x00000000);
}

void func_777(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	unk_0x37AD2AB54480FA6A(0x00000002, 0x00000000, Param0.f_10);
	func_782(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_414, 0x00000007);
	unk_0x35B62793EAE9ADDF(&Local_581, 0x0000000B);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/] = 0x00000010;
	if (bLocal_590)
	{
		if (!unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(0x00000320);
		}
		if (!unk_0x09BE1E6DF7B80B43())
		{
			if (!unk_0xF35E2CBC969C0B53())
			{
				iVar0 = unk_0xD803B885F5E47A62() + 32;
				unk_0x804733198F0CB21A(0x00000001, iVar0);
				func_209(0x00000001);
			}
		}
	}
	unk_0x0BEC04ECA8485A3A(0x00000001);
	unk_0x28E5F00F131890E3(0x00000001);
	if (!func_781())
	{
		func_416(0x00000000);
	}
	unk_0x256D93AFAE851A7A(0x00000000);
	func_724(iLocal_61, 0x00000001);
	func_418(0x00000001);
	if (!bLocal_590)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			func_363(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
		}
	}
	Global_26B66F.f_6BE = 0x00000000;
	unk_0xB5376EA942202450(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 0x00000000, 0x00000000, 0x00000000);
	func_780();
	func_778();
	Local_581[unk_0x57270EE11514DC67() /*5*/] = 0x00000000;
}

void func_778()
{
	unk_0x45019D71A0DF8B62(0x00000001);
	func_779(0x00000001, 0xFFFFFFFF);
	unk_0xED41266DE64A57FD(0x00000001);
	if (func_502(0x00000085, 0xFFFFFFFF))
	{
		func_32(0x00000085, 0x00000000, 0xFFFFFFFF, 0x00000001);
	}
	Global_2564C8.f_283 = 0x00000001;
}

void func_779(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_29();
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xD5F10CECBB7D51B6(0x00000000, iParam1);
			break;
		
		default:
			iVar1 = func_432(iParam1);
			iVar0 = unk_0x0A4C9A3D51EAE31F(iVar1);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, iParam0))
			{
				unk_0x0674E58A79778E99(&iVar0, iParam0);
				unk_0xD5F10CECBB7D51B6(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
			func_32(0x00000078, 0x00000000, iParam1, 0x00000001);
			func_32(0x0000007C, 0x00000000, iParam1, 0x00000001);
			func_32(0x00000073, 0x00000000, iParam1, 0x00000001);
			func_32(0x00000077, 0x00000000, iParam1, 0x00000001);
			break;
	}
}

void func_780()
{
	unk_0xDD353D0E9C789D0E(&iLocal_584);
	unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
	unk_0x796BDF31572BB055(0x00000000, 17.0693f, -1115.935f, 28.7968f, 0x00000000);
	unk_0x75ABDC5F81978924(iLocal_584);
}

int func_781()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_485())
		{
			return 0x00000000;
		}
		if (func_771(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

int func_782(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_783();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_396())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_485())
				{
					if (!bParam2)
					{
						func_783();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_771(0x0000009D))
				{
					if (!bParam2)
					{
						func_783();
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
					func_783();
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
				func_783();
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
			func_783();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_783()
{
	unk_0x10FAF14A60A0DBE1();
}

