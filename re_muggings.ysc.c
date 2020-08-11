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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	int iLocal_80 = 0;
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	vector3 vLocal_140 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	vector3 vLocal_142 = { 0f, 0f, 0f };
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	vector3 vLocal_626 = { 0f, 0f, 0f };
	struct<2> Local_627 = { 0, 5 } ;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
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
	iLocal_18 = 0x00000003;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	vLocal_81 = { -131.052f, -1627f, 31.1755f };
	vLocal_82 = { 287.888f, -284.603f, 52.967f };
	vLocal_83 = { -319.66f, -832.28f, 31.61f };
	vLocal_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (iLocal_46 == 0x00000005 || iLocal_46 == 0x0000000C)
		{
			func_298(0x00000019, iLocal_80);
			func_280();
		}
		else
		{
			func_280();
		}
	}
	vLocal_104 = { ScriptParam_627.f_1[0x00000000 /*3*/] };
	func_279(&uLocal_349, 0x00000003);
	func_278();
	if ((iLocal_80 == 0x00000001 && func_277(0x00000037)) && !func_276(0x00000037))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_235(vLocal_104, 0x00000019, iLocal_80, 0x00000000, 0x00000000))
	{
		func_232(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	bVar0 = 0x00000000;
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_229(&uLocal_349);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		}
		func_228(iLocal_63, &uLocal_348);
		if (unk_0x338D6FF72D84D90F() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0x00000000:
					if (func_214())
					{
						unk_0x060F249A9A3E3F4E(0x00000000);
						unk_0x28F5E4DA506AC0CA(-127.9025f, -1574.084f, 36.4128f, 10f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_130 = 0x00000001;
						iLocal_44 = 0x00000001;
					}
					else if (func_213())
					{
						func_280();
					}
					break;
				
				case 0x00000001:
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (iLocal_117 == 0x00000000)
						{
							iLocal_117 = unk_0x7D0D8317DC09FF68(0x00000065, vLocal_104, 0f);
						}
						unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
						switch (iLocal_46)
						{
							case 0x00000001:
								func_205();
								break;
							
							case 0x00000002:
								unk_0x26F63FD28070F2CE("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
								switch (iLocal_47)
								{
									case 0x00000000:
										unk_0x26F63FD28070F2CE("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
										if (unk_0xEB6A8945D1AC98A1(iLocal_61) || unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0x00000000))
										{
											bVar0 = unk_0xEB6A8945D1AC98A1(iLocal_60);
											if (!unk_0x762119754C50557A(iLocal_151))
											{
											}
											if (bVar0 == 0x00000000 && iLocal_80 == 0x00000001)
											{
												unk_0x64B1AD81046CB800(iLocal_60, 0x000001F4, 0x000003E8, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
												unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
												func_204(0x00000001);
												func_199();
											}
										}
										else
										{
											func_169();
										}
										if (iLocal_625 == 0x00000001 && bLocal_123 == 0x00000001)
										{
											iLocal_46 = 0x00000004;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 0x00000002;
										}
										break;
									
									case 0x00000002:
										unk_0x26F63FD28070F2CE("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
										func_168();
										if (iLocal_52 && !func_167())
										{
											iLocal_47 = 0x00000004;
										}
										break;
									
									case 0x00000004:
										unk_0x26F63FD28070F2CE("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
										if (func_166())
										{
											func_165();
										}
										if (bLocal_129)
										{
											iLocal_47 = 0x00000005;
										}
										if (unk_0xD1960163A3042274(iLocal_60, 0x0E763797) == 0x00000007)
										{
											unk_0xDD353D0E9C789D0E(&iLocal_103);
											unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_61, 0x00001388, 0x00000000, 0x00000002);
											unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00001388);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
											unk_0x75ABDC5F81978924(iLocal_103);
											unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
											unk_0xF82EA857DA10E0CD(&iLocal_103);
										}
										break;
									
									case 0x00000005:
										func_162();
										if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
										{
											if (unk_0xD1960163A3042274(iLocal_60, 0x0E763797) == 0x00000007)
											{
												unk_0xDD353D0E9C789D0E(&iLocal_103);
												unk_0xF96A174EE26D7588(0x00000000, iLocal_61, 0x00000000);
												unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
												unk_0x75ABDC5F81978924(iLocal_103);
												unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
												unk_0xF82EA857DA10E0CD(&iLocal_103);
											}
										}
										break;
								}
								if (func_161())
								{
									iLocal_46 = 0x0000000B;
								}
								if (bLocal_123)
								{
								}
								func_160();
								if (iLocal_47 == 0x00000000)
								{
									if (func_158())
									{
										if (iLocal_119 == 0x00000004)
										{
											if (unk_0xE4EDC4B0E92C078B(iLocal_64))
											{
												unk_0x142CC44DB769B57E(&iLocal_64);
											}
											if (unk_0xE4EDC4B0E92C078B(iLocal_63))
											{
												unk_0x142CC44DB769B57E(&iLocal_63);
											}
											if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
											{
												iLocal_65 = func_156(iLocal_151);
											}
											iLocal_46 = 0x00000004;
										}
										else
										{
											iLocal_46 = 0x00000003;
										}
									}
									if (func_155())
									{
										func_154();
									}
								}
								if (func_153())
								{
									func_152();
									func_151();
									if (unk_0x5A91F08DF773C39D(iLocal_60, vLocal_146, 7f, 7f, 7f, 0x00000000, 0x00000001, 0x00000000))
									{
										iLocal_119 = 0x00000002;
										iLocal_46 = 0x00000003;
									}
									else
									{
										iLocal_46 = 0x00000004;
									}
								}
								if (bLocal_123)
								{
									if (!unk_0x4734A6196B611C3B(iLocal_61, 0x00000000))
									{
										func_149(iLocal_64, &uLocal_118);
									}
									else if (unk_0xE4EDC4B0E92C078B(iLocal_64))
									{
										if (unk_0x8FBD6436A27198B4(iLocal_64) == 0x00000001)
										{
										}
										else
										{
											unk_0x321E019A46034F39(iLocal_64, 0x00000000);
											unk_0x61755AC17D8F538E(iLocal_64, 0x00000001);
										}
									}
								}
								if (func_148())
								{
									iLocal_46 = 0x0000000A;
								}
								break;
							
							case 0x00000004:
								unk_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
								func_147(0x00000001);
								if (func_166())
								{
									func_165();
									func_162();
								}
								if (func_161())
								{
									iLocal_46 = 0x0000000B;
								}
								func_139();
								break;
							
							case 0x00000005:
								unk_0x26F63FD28070F2CE("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
								func_147(0x00000001);
								if (!bLocal_126)
								{
									func_138(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_137();
									func_136();
									func_135();
									if (func_134())
									{
										func_133();
										func_199();
									}
									if (func_126(func_127()) < iLocal_152)
									{
										iLocal_46 = 0x0000000C;
									}
								}
								func_61();
								break;
							
							case 0x0000000A:
								unk_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
								func_60();
								break;
							
							case 0x00000003:
								func_59();
								break;
							
							case 0x0000000B:
								func_58();
								break;
							
							case 0x00000006:
								if (func_161())
								{
									iLocal_46 = 0x0000000B;
								}
								func_41();
								break;
							
							case 0x00000008:
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
									if (unk_0x12DE711B1C681E9E(iLocal_60, unk_0x16F2683693E537C9(), 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
									{
										iLocal_46 = 0x00000006;
									}
									else
									{
										func_280();
									}
								}
								break;
							
							case 0x00000009:
								unk_0x26F63FD28070F2CE("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
								if (unk_0xC844350D5D58C99A(iLocal_61))
								{
									if (unk_0xEB6A8945D1AC98A1(iLocal_61))
									{
										if (unk_0xE4EDC4B0E92C078B(iLocal_64))
										{
											unk_0x142CC44DB769B57E(&iLocal_64);
										}
										if (!unk_0xC844350D5D58C99A(iLocal_60))
										{
											if (unk_0xC844350D5D58C99A(iLocal_62))
											{
												unk_0xF690C84DADBB3551(&iLocal_62);
											}
											func_40();
											iLocal_54 = 0x00000001;
											func_139();
										}
									}
								}
								break;
							
							case 0x0000000C:
								if (unk_0xC844350D5D58C99A(iLocal_62))
								{
									unk_0xF690C84DADBB3551(&iLocal_62);
								}
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
								func_199();
								break;
							
							case 0x0000000D:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (unk_0x762119754C50557A(iLocal_151))
						{
							if (unk_0x797C48AACDB248B0(iLocal_151))
							{
								if (SYSTEM::VDIST(vLocal_146, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 150f)
								{
									func_280();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							if (iLocal_46 != 0x00000006)
							{
								if (func_38(unk_0x16F2683693E537C9(), iLocal_61, 0x00000001) > 150f && (!unk_0x0A059E0DB9253280(iLocal_61) || unk_0x03068588A1FCED1A(iLocal_61)))
								{
									func_37(&uLocal_336, 0x00000000, 0x00000000);
									iLocal_46 = 0x00000008;
								}
								else
								{
									func_4();
									func_3(iLocal_64, iLocal_61, 100f, 0x3F400000, 0x00000000);
								}
							}
						}
						else
						{
							func_37(&uLocal_336, 0x00000000, 0x00000000);
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_60))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0x00000001))
							{
								if (unk_0xC844350D5D58C99A(iLocal_62))
								{
									if (unk_0x50B5F6F3C29E9380(iLocal_62, iLocal_60))
									{
										unk_0x15AFB6CBDE990FB6(iLocal_62, 0x00000001, 0x00000001);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000) && !unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
							{
								if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_61, 0x00000001), unk_0x68F4C0EC296D3901(iLocal_60, 0x00000001), 0x00000001) > 100f && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_61, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001) < 100f)
								{
									unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									iLocal_137 = 0x00000001;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							if (iLocal_80 == 0x00000003)
							{
								if (unk_0xD1960163A3042274(iLocal_61, 0x6BA30179) != 0x00000001)
								{
									unk_0x8FB4E06C94958F84(iLocal_61);
									unk_0xF3268524E9BE6D6E(iLocal_61, iLocal_60, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0xBD453909DC26A85D(iLocal_61, 0xFFF7E7A4, 0x00000001, 0x00000000, 0x00000000);
									iLocal_124 = 0x00000001;
								}
							}
							else if (unk_0xD1960163A3042274(iLocal_61, 0x6BA30179) != 0x00000001)
							{
								unk_0x8FB4E06C94958F84(iLocal_61);
								unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xBD453909DC26A85D(iLocal_61, 0xFFF7E7A4, 0x00000001, 0x00000000, 0x00000000);
								iLocal_124 = 0x00000001;
							}
							if (unk_0xDDCA9A4E51DADA2B(iLocal_61, 0x80C40D82))
							{
								unk_0xF3268524E9BE6D6E(iLocal_61, iLocal_60, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0xBD453909DC26A85D(iLocal_61, 0xFFF7E7A4, 0x00000001, 0x00000000, 0x00000000);
								iLocal_124 = 0x00000001;
							}
							if (iLocal_80 == 0x00000001 || iLocal_80 == 0x00000004)
							{
								if (unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_319, sLocal_329, 0x00000003))
								{
									if (unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										unk_0xBD453909DC26A85D(iLocal_61, 0xFFF7E7A4, 0x00000001, 0x00000000, 0x00000000);
										iLocal_124 = 0x00000001;
									}
								}
								if (unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_319, sLocal_327, 0x00000003))
								{
									if (unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										unk_0xBD453909DC26A85D(iLocal_61, 0xFFF7E7A4, 0x00000001, 0x00000000, 0x00000000);
										iLocal_124 = 0x00000001;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_1()
{
	if (unk_0xC844350D5D58C99A(iLocal_60))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					func_280();
				}
			}
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			unk_0x142CC44DB769B57E(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_61))
		{
			func_2(&uLocal_154, 0x00000001);
			iLocal_135 = 0x00000001;
		}
	}
	if (!iLocal_136)
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			func_2(&uLocal_154, 0x00000002);
			iLocal_136 = 0x00000001;
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_4()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61) || !bLocal_109)
	{
		func_5(&uLocal_336, iLocal_61, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	}
	else
	{
		func_37(&uLocal_336, 0x00000000, 0x00000000);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_37(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_8(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_8(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_36(iVar0))
	{
		func_35();
	}
	if (func_34(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_29(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_25(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_13(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_36(iVar0))
							{
								func_12(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_11(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_36(iVar0))
						{
							func_12(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_11(0x00000001);
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
				if (func_36(sParam3))
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
						func_37(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_37(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_37(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_37(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_37(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_37(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_29(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_37(uParam0, iVar0, 0x00000000);
	}
}

void func_9(var uParam0)
{
	if (func_34(unk_0x16F2683693E537C9()))
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

int func_10(var uParam0)
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

int func_11(bool bParam0)
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

void func_12(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_13(char* sParam0)
{
	if (!func_14(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_36(sParam0)) || func_36("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_11(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_11(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_11(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_24(0x00000000))
	{
		return 0x00000000;
	}
	if (func_23())
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
	if ((func_22() || func_21(Global_440000.f_38DB3)) || func_20())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_19(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_18(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_15(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_15(int iParam0)
{
	if (iParam0 != func_17())
	{
		if (func_16(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_16(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	return 0xFFFFFFFF;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0, int iParam1)
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

var func_20()
{
	return Global_2564C8.f_11;
}

bool func_21(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_22()
{
	return Global_2564C8.f_10;
}

bool func_23()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_24(int iParam0)
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

void func_25(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_37(uParam0, 0x00000000, 0x00000000);
	}
	if (func_28(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_26())
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

bool func_26()
{
	return func_27(unk_0xD803B885F5E47A62());
}

int func_27(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_28(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_29(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_10(uParam0))
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
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_33(bParam1, bParam2, bParam3))
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
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_32(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_33(bParam1, bParam2, bParam3))
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
						if (func_31(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_30(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_30(bParam1, bParam2, bParam3))
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
					else if (func_31(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_35();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_30(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_31(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_32(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_14(bParam0, bParam1, bParam2))
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

int func_34(int iParam0)
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

void func_35()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

bool func_36(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_37(var uParam0, int iParam1, int iParam2)
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
		if (func_36(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_36(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

float func_38(int iParam0, int iParam1, bool bParam2)
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

void func_39()
{
	func_280();
}

void func_40()
{
	if (!unk_0x762119754C50557A(iLocal_151))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_61))
		{
			vLocal_146 = { unk_0xC6151A4F2BB0AC79(iLocal_61, 0x3F99999A, 0x3FC00000) };
		}
		else
		{
			vLocal_146 = { unk_0x550B1459B4642A86(unk_0x68F4C0EC296D3901(iLocal_61, 0x00000001), 1.2f, 1.5f) };
		}
		iLocal_151 = unk_0xA6FF0828D17CF374(joaat("pickup_money_wallet"), vLocal_146, iLocal_120, iLocal_152, 0x00000001, iLocal_77);
		iLocal_65 = func_156(iLocal_151);
		func_37(&uLocal_336, 0x00000000, 0x00000000);
		bLocal_58 = 0x00000001;
	}
}

void func_41()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 0x00000003))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 0x00000003))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		func_42(&uLocal_154, cLocal_85, sLocal_92, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		iLocal_128 = 0x00000001;
		unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
		SYSTEM::WAIT(0x00000000);
		func_280();
	}
}

int func_42(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_57(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_43(sParam2, iParam3, 0x00000000);
}

int func_43(char* sParam0, int iParam1, bool bParam2)
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
					func_56();
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
		if (func_55(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_54();
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
				func_52();
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
				if (func_51())
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
			if (func_50())
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
			func_49();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_48();
		func_44();
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
		func_56();
	}
	return 0x00000000;
}

void func_44()
{
	if (!func_45())
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

int func_45()
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
	if (func_46(unk_0xD803B885F5E47A62()))
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

bool func_46(int iParam0)
{
	return func_47(iParam0, 0x00000014);
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_48()
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

void func_49()
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

int func_50()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_51()
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

void func_52()
{
	if (func_53(0x0000000E))
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
		Global_4C1E = func_127();
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

bool func_53(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_54()
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

bool func_55(int iParam0, int iParam1)
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

void func_56()
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

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_58()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xA3BF0AA5A2608191(iLocal_60);
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
		if (unk_0xC844350D5D58C99A(iLocal_62))
		{
			unk_0xF690C84DADBB3551(&iLocal_62);
		}
		SYSTEM::WAIT(0x00000000);
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
		unk_0x6DAD7906B73F064D(&iLocal_60);
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_61) || unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			unk_0x142CC44DB769B57E(&iLocal_64);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
		if (unk_0x762119754C50557A(iLocal_151))
		{
			if (unk_0x797C48AACDB248B0(iLocal_151))
			{
				iLocal_54 = 0x00000001;
				func_139();
			}
			else
			{
				func_147(0x00000000);
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
}

void func_59()
{
	bool bVar0;
	
	func_139();
	if (unk_0x762119754C50557A(iLocal_151))
	{
		if (unk_0x797C48AACDB248B0(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 0x00000001)
	{
		if (!iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xA3BF0AA5A2608191(iLocal_61);
				unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (unk_0x762119754C50557A(iLocal_151))
				{
					if (unk_0x797C48AACDB248B0(iLocal_151))
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0x96167B03C5A77156(0x00000000, unk_0xE925E52ACABA4CE7(iLocal_151), 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
					}
				}
			}
			iLocal_49 = 0x00000001;
		}
	}
	if (iLocal_119 == 0x00000002)
	{
		if (!iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xA3BF0AA5A2608191(iLocal_61);
				unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
				unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000000, 0x00000001);
				unk_0x6DAD7906B73F064D(&iLocal_61);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (unk_0x762119754C50557A(iLocal_151))
				{
					if (unk_0x797C48AACDB248B0(iLocal_151))
					{
						if (unk_0x5A91F08DF773C39D(iLocal_60, unk_0xE925E52ACABA4CE7(iLocal_151), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (iLocal_80 == 0x00000003)
							{
								if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_enter", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_base", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_exit", 0x00000003))
								{
									unk_0xA3BF0AA5A2608191(iLocal_60);
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0x96167B03C5A77156(0x00000000, unk_0xE925E52ACABA4CE7(iLocal_151), 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
									iLocal_49 = 0x00000001;
								}
							}
							else if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_330, 0x00000003) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_326, 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_328, 0x00000003))
							{
								unk_0xA3BF0AA5A2608191(iLocal_60);
								unk_0xDD353D0E9C789D0E(&iLocal_103);
								unk_0x96167B03C5A77156(0x00000000, unk_0xE925E52ACABA4CE7(iLocal_151), 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
								unk_0x75ABDC5F81978924(iLocal_103);
								unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
								unk_0xF82EA857DA10E0CD(&iLocal_103);
								iLocal_49 = 0x00000001;
							}
						}
						else
						{
							bVar0 = 0x00000001;
						}
					}
					else
					{
						bVar0 = 0x00000001;
					}
				}
				else
				{
					bVar0 = 0x00000001;
				}
				if (bVar0)
				{
					if (iLocal_80 == 0x00000003)
					{
						if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_enter", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_base", 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "handsup_standing_exit", 0x00000003))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
							if (unk_0xE4EDC4B0E92C078B(iLocal_63))
							{
								unk_0x142CC44DB769B57E(&iLocal_63);
							}
							unk_0x6DAD7906B73F064D(&iLocal_60);
							iLocal_49 = 0x00000001;
							iLocal_46 = 0x00000009;
						}
					}
					else if ((!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_330, 0x00000003) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_326, 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, sLocal_328, 0x00000003))
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
						if (unk_0xE4EDC4B0E92C078B(iLocal_63))
						{
							unk_0x142CC44DB769B57E(&iLocal_63);
						}
						unk_0x6DAD7906B73F064D(&iLocal_60);
						iLocal_49 = 0x00000001;
						iLocal_46 = 0x00000009;
					}
				}
			}
		}
	}
	if (iLocal_119 == 0x00000003)
	{
		if (!iLocal_49)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xA3BF0AA5A2608191(iLocal_61);
				unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
				unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000000, 0x00000001);
				unk_0x6DAD7906B73F064D(&iLocal_61);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0xA3BF0AA5A2608191(iLocal_60);
				unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
				unk_0x6DAD7906B73F064D(&iLocal_60);
			}
			iLocal_54 = 0x00000001;
			iLocal_49 = 0x00000001;
		}
	}
	if (iLocal_119 == 0x00000001 || iLocal_119 == 0x00000002)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			if (iLocal_49)
			{
				if (unk_0x762119754C50557A(iLocal_151))
				{
					if (unk_0x797C48AACDB248B0(iLocal_151))
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_320, "pickup_low", 0x00000003))
						{
							if (unk_0x8CA9406E01C7EE58(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (unk_0x762119754C50557A(iLocal_151))
								{
									if (unk_0x797C48AACDB248B0(iLocal_151))
									{
										func_42(&uLocal_154, cLocal_85, sLocal_91, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										unk_0x40B7230FD4C59AA2(iLocal_151);
										bLocal_50 = 0x00000001;
									}
								}
							}
						}
						else if (unk_0xD1960163A3042274(iLocal_60, 0x0E763797) == 0x00000007)
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_320, "pickup_low", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
						}
					}
					else if (bLocal_50)
					{
						unk_0x6D80F1AEBA734886(iLocal_60, iLocal_152);
						unk_0x6DAD7906B73F064D(&iLocal_60);
						func_204(0x00000003);
						func_199();
					}
					else
					{
						unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
						if (unk_0xE4EDC4B0E92C078B(iLocal_63))
						{
							unk_0x142CC44DB769B57E(&iLocal_63);
						}
						unk_0x6DAD7906B73F064D(&iLocal_60);
						iLocal_49 = 0x00000001;
						iLocal_46 = 0x0000000C;
					}
				}
				else if (bLocal_50)
				{
					unk_0x6D80F1AEBA734886(iLocal_60, iLocal_152);
					unk_0x6DAD7906B73F064D(&iLocal_60);
					func_204(0x00000003);
					func_199();
				}
				else
				{
					unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
					if (unk_0xE4EDC4B0E92C078B(iLocal_63))
					{
						unk_0x142CC44DB769B57E(&iLocal_63);
					}
					unk_0x6DAD7906B73F064D(&iLocal_60);
					iLocal_49 = 0x00000001;
					iLocal_46 = 0x0000000C;
				}
			}
		}
		else
		{
			iLocal_46 = 0x00000009;
		}
	}
}

void func_60()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xA3BF0AA5A2608191(iLocal_60);
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
		unk_0x6DAD7906B73F064D(&iLocal_60);
	}
}

void func_61()
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	struct<2> Var3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	int iVar9;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				vVar7 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				iVar8 = 0x00000001;
				if (iLocal_80 == 0x00000001)
				{
					if (vVar7.z > 33.5f)
					{
						iVar8 = 0x00000000;
					}
				}
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000) && iVar8 == 0x00000001)
				{
					if (func_124(0x00000002))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						if (func_123(0x00000001, 0x00000000, 0x00000001))
						{
							if (!func_122())
							{
								if (!unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
								{
									func_114(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										while (!func_112(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fLocal_71, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000) || func_167())
										{
											unk_0x3FC8DBCC154CA56B();
											SYSTEM::WAIT(0x00000000);
										}
										if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
										{
											unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
										}
									}
									unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
									if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
									{
										unk_0x46CB381A452EF99D(iLocal_60, 0x00000000);
									}
									unk_0x3FC8DBCC154CA56B();
									unk_0x68F065432F4692FB(0x00000000);
									unk_0x850CF499433B183D(iLocal_117);
									if (unk_0x25037C66EB32B076())
									{
										func_110();
									}
									bLocal_126 = 0x00000001;
									SYSTEM::SETTIMERA(0x00000000);
								}
							}
						}
					}
				}
				else
				{
					func_108(unk_0x68F4C0EC296D3901(iLocal_60, 0x00000001), &uLocal_70, &fLocal_71);
				}
			}
			else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
				if (iLocal_45 == 0x00000002)
				{
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				unk_0xBD453909DC26A85D(iLocal_60, 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
				iLocal_127 = 0x00000001;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0x00000000:
					unk_0x3FC8DBCC154CA56B();
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							func_105(iLocal_60, &vLocal_105, &vLocal_106, cLocal_321, sLocal_323);
							if (iLocal_80 == 0x00000001)
							{
								if (vLocal_106.z > 225f && vLocal_106.z < 265f)
								{
									if (vLocal_106.z < 245f)
									{
										vLocal_106.z = 225f;
									}
									else
									{
										vLocal_106.z = 265f;
									}
								}
								else if (vLocal_106.z > 45f && vLocal_106.z < 85f)
								{
									if (vLocal_106.z < 65f)
									{
										vLocal_106.z = 45f;
									}
									else
									{
										vLocal_106.z = 85f;
									}
								}
							}
							vLocal_105.z = (vLocal_105.z + 2f);
							unk_0xE82754C349C7B581(vLocal_105, &(vLocal_105.f_2), 0x00000000, 0x00000000);
							vVar1 = { unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0f, 0x00000002) };
							vVar4 = { vVar1 - vLocal_105 };
							vVar4.z = 0f;
							fVar5 = SYSTEM::VMAG(vVar4);
							unk_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0x00000000, 0x00000000);
							fVar6 = (vLocal_105.z - vVar1.z);
							vLocal_106.x = unk_0x5D8ABF6396A76564(fVar6, fVar5);
							if (vLocal_106.x > 30f || vLocal_106.x < -30f)
							{
								vLocal_106.x = 0f;
							}
						}
						if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000))
						{
							if (!unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
							{
								iVar0 = unk_0x728870EB733D12A1();
								unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &uVar2, &Var3);
								if (unk_0x5A91F08DF773C39D(iVar0, vLocal_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(iVar0, unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0x00000000, 0x00000002), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, 0x00000000, 0x00000001, 0x00000000))
								{
									if (iLocal_80 == 0x00000001)
									{
										if (vLocal_106.z > 40f && vLocal_106.z < 220f)
										{
											vLocal_74 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											vLocal_74 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (iLocal_80 == 0x00000003)
									{
										if (vLocal_106.z > 160f && vLocal_106.z < 340f)
										{
											vLocal_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											vLocal_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (iLocal_80 == 0x00000004)
									{
										if (vLocal_106.z > 240f || vLocal_106.z < 60f)
										{
											vLocal_74 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											vLocal_74 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = unk_0xD9522BA9E27E1349(iVar0);
										vLocal_74 = { func_103(vLocal_105, unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 0x00000000, 0x00000002)) };
									}
									if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
									{
										unk_0xA47B46945FF6DE74(iVar0, vLocal_74, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
										unk_0xD8F6A53F4799FAFE(iVar0, fLocal_73);
										unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
										unk_0x05CA0E7946B27A19(iVar0, 0x00000001);
									}
								}
							}
						}
						unk_0x75CFD6AD66ADFDD1(vLocal_105, 20f, 0x00000002);
						unk_0x679C321F8CAA2CFA(vLocal_105, 20f, 0x00000000);
						unk_0x536F1BE96C726C4B(vLocal_105, 2f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
						unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000001);
						iLocal_62 = unk_0x7707E48765093646(iLocal_77, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001, 0x00000001, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x9F528B1B53FBC5D9(iLocal_62, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
						}
						iLocal_107 = unk_0xE9744DB7B8CA6965(vLocal_105, vLocal_106, 0x00000002);
						unk_0xEFC3DF9D33E248D8(iLocal_107, 0x00000000);
						iLocal_108 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000000);
						unk_0x93E9ED66DAB9FBE3(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0x327AAEE25F323797(iLocal_60);
							unk_0x915804B434753CBD(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						}
						unk_0xE3BB8E05FCEB3FBE(iLocal_108, 0x00000001);
						unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						func_42(&uLocal_154, cLocal_85, sLocal_97, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_125++;
					}
					unk_0x3FC8DBCC154CA56B();
					break;
				
				case 0x00000001:
					if ((unk_0x69DF961355195C3C(iLocal_107) && unk_0xA45992A6CE82FB43(iLocal_107) > 0.9f) || func_101(0x000003E8))
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xE3BB8E05FCEB3FBE(iLocal_108, 0x00000000);
						unk_0x9A8DDC7C522F5BF5(iLocal_108, 0x00000000);
						func_100();
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0x327AAEE25F323797(iLocal_60);
							unk_0x6D80F1AEBA734886(iLocal_60, (iLocal_152 - (iLocal_152 / 0x0000000A)));
							vVar1 = { unk_0x1BB04F10296A1C5E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 0x00000002) };
							unk_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0x00000000, 0x00000000);
							unk_0xA47B46945FF6DE74(iLocal_60, vVar1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0x11AD11297DC58CC7(iLocal_60, 0x00000000);
							vVar1 = { unk_0xEEB20D14BD38615E(cLocal_321, sLocal_323, vLocal_105, vLocal_106, 1f, 0x00000002) };
							unk_0xD8F6A53F4799FAFE(iLocal_60, vVar1.z);
							if (iLocal_80 == 0x00000004)
							{
								if (func_99(vVar1.z, 0f, 90f))
								{
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0x96167B03C5A77156(0x00000000, 38.2412f, -992.2134f, 28.4317f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_60), 0x00000001);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
								}
								else
								{
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0x96167B03C5A77156(0x00000000, 58.803f, -1067.711f, 28.4411f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_60), 0x00000001);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
								}
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&iLocal_103);
								unk_0x01E4BB5190DF7317(0x00000000, vVar1.z, 0x00000001);
								unk_0x75ABDC5F81978924(iLocal_103);
								unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
								unk_0xF82EA857DA10E0CD(&iLocal_103);
							}
							unk_0x79C43E2BAC7C696F(iLocal_60, cLocal_334, 0x3E800000);
							unk_0xBD453909DC26A85D(iLocal_60, 0xD827C3DB, 0x00000001, 0x00000000, 0x00000000);
							unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(iLocal_62))
						{
							unk_0xF690C84DADBB3551(&iLocal_62);
						}
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0x6D80F1AEBA734886(iLocal_60, (iLocal_152 - (iLocal_152 / 0x0000000A)));
							unk_0x46CB381A452EF99D(iLocal_60, 0x00000001);
						}
						iVar9 = (iLocal_152 / 0x00000064);
						iVar9 *= 90;
						SYSTEM::WAIT(0x00000000);
						unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
						func_64(func_127(), 0x00000001, iVar9);
						func_63(joaat("rc_wallets_returned"), 0x00000001);
						func_204(0x00000003);
						func_199();
					}
					else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xFFC528E4))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (unk_0x50B5F6F3C29E9380(iLocal_62, unk_0x16F2683693E537C9()))
							{
								unk_0x15AFB6CBDE990FB6(iLocal_62, 0x00000000, 0x00000001);
								if (unk_0xCED082ADD3739B9F(iLocal_60))
								{
									unk_0x9F528B1B53FBC5D9(iLocal_62, iLocal_60, unk_0x4A089F2B762B8D33(iLocal_60, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
								}
								else
								{
									unk_0x9F528B1B53FBC5D9(iLocal_62, iLocal_60, unk_0x4A089F2B762B8D33(iLocal_60, 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
								}
								if (!iLocal_59)
								{
									if (func_42(&uLocal_154, cLocal_85, sLocal_91, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62())
									{
										iLocal_59 = 0x00000001;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_91, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62())
						{
							iLocal_59 = 0x00000001;
						}
					}
					unk_0x3FC8DBCC154CA56B();
					break;
				}
		}
	}
	else
	{
		func_280();
	}
}

int func_62()
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

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	if (func_98(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_98(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_65(func_98(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(0x00000063, 0x00000001);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_76(0x00000005))
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
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_63(joaat("sp2_money_spent_property"), iParam3);
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
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_96(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_96(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_96(0x00000060, iParam3);
					break;
			}
			func_96(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
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
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
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
	func_67(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_66(0x00000000);
	}
	return 0x00000001;
}

void func_66(bool bParam0)
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

void func_67(int iParam0)
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

void func_68(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_74(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_74(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_74(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_74(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_71(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_71(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_71(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_71(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_71(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_71(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_70() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_70() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_69(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_69(int iParam0)
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

int func_70()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_72(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1407E9;
}

int func_74(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_73();
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

void func_75(int iParam0)
{
	func_96(0x0000005D, iParam0);
	func_96(0x0000001D, iParam0);
	func_96(0x0000001E, iParam0);
}

bool func_76(int iParam0)
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
		return func_78(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_78(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_78(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_78(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_77(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_77(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_77(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_77(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_77(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_77(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_70() /*10930*/].f_181E.f_A, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_72(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_73();
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

int func_81(bool bParam0)
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
		func_95(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_82(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_53(0x0000000E) && !func_94(iParam0))
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
	if (func_93(&Global_4127F1))
	{
		if (func_91(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_84(&Global_4127F1, iParam0))
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

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_53(0x0000000E) && !func_94(iParam1))
	{
		return 0x00000000;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0x00000000);
	}
	func_87(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_53(0x0000000E) && !func_94(iParam1))
	{
		return 0x00000000;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4127F0 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_50;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
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

void func_96(int iParam0, int iParam1)
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

void func_97()
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

int func_98(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_99(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 0x00000001;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_100()
{
	int iVar0;
	
	iVar0 = unk_0xAE06CCC36C49929C(0x019286A9, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0.5f, -1f, 0.5f), 0f, 0f, unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9()), 65f, 0x00000001, 0x00000002);
	unk_0xE3BB8E05FCEB3FBE(iVar0, 0x00000001);
}

int func_101(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x1C0640BA9A7327B3();
		}
		Global_1C = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_1B) > iParam0)
		{
			if (func_102())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_102()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000012) || unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_103(vector3 vParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	int iVar13;
	
	iVar5 = 0x00000000;
	iVar6 = 0x00000001;
	iVar0 = unk_0x728870EB733D12A1();
	if (!unk_0xAF6690C489CC6203(iVar0))
	{
		unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iVar0), &vVar3, &vVar4);
	unk_0x4490D017C57827E9(vParam0, 0x00000003, &vVar2, 0x00000001, 0x40400000, 0x00000000);
	if (SYSTEM::VDIST(vParam0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		vVar1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 0x00000008;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		vVar1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 0x00000008;
	}
	while (iVar5 < 0x00000008)
	{
		switch (iVar5)
		{
			case 0x00000000:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y + IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000001:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000002;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000000;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000002;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000000;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000002:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, (vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, 0f, -(vVar4.y - IntToFloat(iVar6)), 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000003:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000004;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000002;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000004;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000002;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000004:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000005:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000006;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000004;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000006;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000004;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000006:
				if (SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(vVar2, unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f)))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, (vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iVar0, -(vVar4.x - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						vVar10 = { func_104(vVar1, 0f, vVar4) };
						vVar11 = { func_104(vVar1, 0f, vVar3) };
						iVar13 = unk_0xCD02F8660C47B801(vVar10, vVar11, 0x000001FF, iVar0, 0x00000007);
						iVar5++;
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				else
				{
					iVar5 = 0x00000008;
				}
				break;
			
			case 0x00000007:
				if (unk_0x1EC301670B54C6DE(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 0x00000002)
				{
					if (iVar7 != 0x00000000)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000008;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000006;
						}
					}
					else if (unk_0x0EB28750412C3A5A(vVar1, vParam0, 0x00000001) <= 5f || unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000001) <= 5f)
					{
						if (iVar6 >= 0x00000003)
						{
							iVar6 = 0x00000001;
							iVar5 = 0x00000008;
						}
						else
						{
							iVar6++;
							iVar5 = 0x00000006;
						}
					}
					else
					{
						iVar5 = 0x00000008;
					}
				}
				break;
			
			case 0x00000008:
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return vVar1;
}

Vector3 func_104(vector3 vParam0, float fParam1, struct<2> Param2, var uParam3)
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

void func_105(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	var uVar11;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000001;
	*uParam1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	uParam2->f_2 = func_107(iParam0, unk_0x16F2683693E537C9(), 0x00000001);
	fVar3 = func_107(iParam0, unk_0x16F2683693E537C9(), 0x00000001);
	fVar4 = func_107(iParam0, unk_0x16F2683693E537C9(), 0x00000001);
	vVar10 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	if (unk_0xB4AE0788C1587752(sParam3))
	{
		vVar9 = { unk_0x1BB04F10296A1C5E(sParam3, sParam4, *uParam1, *uParam2, 0x00000000, 0x00000002) };
	}
	else
	{
		vVar9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 0x00000002)
	{
		switch (iVar0)
		{
			case 0x00000000:
				if (iVar1 > 0x00000014)
				{
					uParam2->f_2 = func_106(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), *uParam1, 0x00000001);
					*uParam1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(iParam0, 0x00000000), uParam2->f_2, vVar10) };
					iVar0 = 0x00000002;
				}
				else
				{
					iVar5 = unk_0x6D4C9F7CF124AE37(*uParam1, vVar9 + Vector(-1f, 0f, 0f), 0.5f, 0x00000011, 0x00000000, 0x00000004);
					iVar0++;
				}
				break;
			
			case 0x00000001:
				if (unk_0x1EC301670B54C6DE(iVar5, &iVar6, &vVar8, &uVar7, &uVar11) == 0x00000002)
				{
					if (iVar6 != 0x00000000)
					{
						if (vVar8.z > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 0x00000003)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), fVar4, vVar10) };
							iVar1++;
							iVar0 = 0x00000000;
						}
					}
					else
					{
						if (iVar1 > 0x00000000)
						{
							uParam2->f_2 = func_106(vVar9 + Vector(-0.75f, 0f, 0f), *uParam1, 0x00000001);
						}
						iVar0++;
					}
				}
				break;
			
			case 0x00000002:
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

float func_106(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
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

float func_107(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	return func_106(vVar0, vVar1, iParam2);
}

void func_108(vector3 vParam0, var uParam1, float fParam2)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	
	bVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - vParam0 };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_109(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fVar2, 15f))
		{
			bVar0 = 0x00000001;
		}
		vVar1 = { vParam0 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
		if (func_109(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fVar2, 15f))
		{
			bVar0 = 0x00000001;
		}
	}
	if (bVar0)
	{
		if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

int func_109(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		fVar0 = unk_0xD9522BA9E27E1349(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 0x00000001;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_110()
{
	Global_4CD7 = 0x00000000;
	func_111();
}

void func_111()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_112(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_113(iParam0);
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

void func_113(int iParam0)
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

void func_114(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_121(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_50())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_120(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_121(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_120(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_118(unk_0xD803B885F5E47A62())) && !func_116(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_115()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_118(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_115()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_117(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_73();
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

int func_118(int iParam0)
{
	if (func_116(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_119())
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

bool func_119()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_120(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_121(int iParam0)
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

int func_122()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (func_167())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC8BC75555A67090D())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					return 0x00000000;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0.95f || unk_0x30C0A7C378403357(iVar0) > 1.011f)
			{
				return 0x00000000;
			}
		}
	}
	else if (bParam1)
	{
		return 0x00000000;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_124(int iParam0)
{
	return func_36(func_125(iParam0));
}

char* func_125(int iParam0)
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

int func_126(int iParam0)
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

int func_127()
{
	func_128();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_128()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_131(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_130(unk_0x16F2683693E537C9());
			if (func_129(iVar0) && (!func_53(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_129(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_129(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_131(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_131(int iParam0)
{
	if (func_129(iParam0))
	{
		return func_132(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_132(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_133()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
		SYSTEM::WAIT(0x00000000);
	}
}

int func_134()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 3f, 3f, 3f };
	vVar1 = { -3f, -3f, -3f };
	if (unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		return 0x00000001;
	}
	else
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f), 5f, 0x00000001))
		{
			return 0x00000001;
		}
		vVar0 = { vVar0 + unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f) };
		vVar1 = { vVar1 + unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f) };
		if ((unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_smokegrenade"), 0x00000001) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_grenade"), 0x00000001)) || unk_0xBBE430A566D01EF3(vVar1, vVar0, joaat("weapon_stickybomb"), 0x00000001))
		{
			return 0x00000001;
		}
		if (unk_0x8ADFEA7B4409B2F8(unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f), 3f))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_135()
{
	if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
	{
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_60, 0x00000001)) > (fLocal_139 + 50f))
		{
			func_199();
		}
		else if (func_126(func_127()) < iLocal_152)
		{
			func_199();
		}
	}
}

void func_136()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, Global_13, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_60, 0x00000BB8, 0x00000000, 0x00000002);
			unk_0x0C8C0C840C2D1AD2(iLocal_60, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000000, 0x00000002);
		}
	}
}

void func_137()
{
	float fVar0;
	
	if (iLocal_80 == 0x00000001)
	{
		fVar0 = 13f;
	}
	if (iLocal_80 == 0x00000004)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_80 == 0x00000001 || iLocal_80 == 0x00000004)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_140, vLocal_141, fVar0, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!iLocal_131)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xF96A174EE26D7588(iLocal_60, unk_0x16F2683693E537C9(), 0x00000000);
					iLocal_131 = 0x00000001;
					iLocal_132 = 0x00000000;
				}
			}
		}
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_142, vLocal_143, fVar0, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!iLocal_132)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xF96A174EE26D7588(iLocal_60, unk_0x16F2683693E537C9(), 0x00000000);
					iLocal_132 = 0x00000001;
					iLocal_131 = 0x00000000;
				}
			}
		}
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_144, vLocal_145, fVar0, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!iLocal_133)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					iLocal_133 = 0x00000001;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
		{
			if (unk_0x12DE711B1C681E9E(iLocal_60, unk_0x16F2683693E537C9(), 25f, 25f, 5f, 0x00000000, 0x00000001, 0x00000000) && unk_0xF649DD3BF44195C7(iLocal_60, unk_0x16F2683693E537C9(), 0x00000011))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_90, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62())
				{
					if (!unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 0x00000003))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
						if (iLocal_45 == 0x00000002)
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						iLocal_134 = 0x00000001;
					}
				}
			}
		}
	}
}

void func_138(int iParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iParam0, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				SYSTEM::SETTIMERA(0x00000000);
				*uParam1++;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (!unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), fVar0))
				{
					*uParam1 = 0x00000000;
				}
			}
			break;
	}
}

void func_139()
{
	if (unk_0xEB751B41BC4080D4(iLocal_151))
	{
		if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
		{
			fLocal_139 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_60, 0x00000001));
		}
		func_63(joaat("rc_wallets_recovered"), 0x00000001);
		unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
		if (unk_0xC844350D5D58C99A(iLocal_62))
		{
			unk_0xF690C84DADBB3551(&iLocal_62);
		}
		func_142();
		func_141(&uLocal_348);
		if (unk_0xC844350D5D58C99A(iLocal_60))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0xF4CB0B98F8F79D8D(iLocal_60, 0x00000000);
			}
		}
		func_147(0x00000000);
		unk_0x40B7230FD4C59AA2(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 0x00000005;
			func_140(0x00000002);
		}
		else
		{
			iLocal_46 = 0x0000000C;
		}
	}
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_12(func_125(iParam0), 0xFFFFFFFF);
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
					func_12(func_125(iParam0), 0xFFFFFFFF);
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
					func_12(func_125(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

void func_141(var uParam0)
{
	*uParam0 = 0xFFFFFF9D;
}

void func_142()
{
	iLocal_65 = 0x00000000;
	if (!unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
		{
			iLocal_63 = func_143(iLocal_60, 0x00000000, 0x00000000);
		}
	}
}

int func_143(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_144(iParam0, bParam1, 0x00000091);
}

int func_144(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_145(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_146(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_147(bool bParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && iLocal_80 == 0x00000004)
	{
		if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 0x00000003))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
			if (bParam0)
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0xA3BF0AA5A2608191(iLocal_60);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
	}
}

int func_148()
{
	if (unk_0xC844350D5D58C99A(iLocal_62))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_62))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (unk_0x50B5F6F3C29E9380(iLocal_62, iLocal_60))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 18f, 18f, 18f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
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

void func_149(int iParam0, var uParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0x1C0640BA9A7327B3() > *uParam1 + 500)
		{
			if (unk_0x8FBD6436A27198B4(iParam0) == 0x00000001)
			{
				unk_0x321E019A46034F39(iParam0, 0x00000001);
			}
			else
			{
				unk_0x321E019A46034F39(iParam0, 0x00000000);
				unk_0x61755AC17D8F538E(iParam0, 0x00000001);
			}
			*uParam1 = unk_0x1C0640BA9A7327B3();
		}
		if (!unk_0xFEBC1E4EC9E001F0() && func_150(0x00000000))
		{
			func_140(0x00000001);
		}
	}
}

bool func_150(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B412, iParam0);
}

void func_151()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 8f, 8f, 18f, 0x00000000, 0x00000001, 0x00000000) || unk_0x0A059E0DB9253280(iLocal_60))
		{
			unk_0x790015DC92C918E2();
		}
	}
}

void func_152()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		unk_0x142CC44DB769B57E(&iLocal_64);
	}
	if (unk_0xC844350D5D58C99A(iLocal_62))
	{
		if (unk_0xD59B17D2DFF98E26(iLocal_62))
		{
			unk_0x15AFB6CBDE990FB6(iLocal_62, 0x00000001, 0x00000001);
			unk_0xF690C84DADBB3551(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (func_42(&uLocal_154, cLocal_85, sLocal_89, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62())
		{
			if (iLocal_45 == 0x00000002)
			{
				unk_0xBAFED2F6486F771A(iLocal_61, 0x00000080, 0x00000001);
				unk_0xBAFED2F6486F771A(iLocal_61, 0x00000002, 0x00000001);
				unk_0xBAFED2F6486F771A(iLocal_61, 0x00000001, 0x00000000);
				unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
		}
	}
}

int func_153()
{
	if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (bLocal_123)
			{
				return 0x00000001;
			}
		}
	}
	else if (bLocal_123)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_154()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		unk_0xA3BF0AA5A2608191(iLocal_60);
		unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
		SYSTEM::WAIT(0x00000000);
		unk_0x6DAD7906B73F064D(&iLocal_60);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		func_42(&uLocal_154, cLocal_85, sLocal_94, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		unk_0xDD353D0E9C789D0E(&iLocal_103);
		unk_0xBC43ED9FE28DB191(0x00000000);
		unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		unk_0x75ABDC5F81978924(iLocal_103);
		unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
		unk_0xF82EA857DA10E0CD(&iLocal_103);
		unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
		SYSTEM::WAIT(0x00000000);
		unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000000, 0x00000001);
		unk_0x6DAD7906B73F064D(&iLocal_61);
	}
}

int func_155()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x869EFD0BC0868856(iLocal_60))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_156(int iParam0)
{
	return func_157(iParam0);
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_146(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

int func_158()
{
	if (unk_0x762119754C50557A(iLocal_151))
	{
		if (unk_0x797C48AACDB248B0(iLocal_151))
		{
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
				{
					if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 18f, 18f, 18f, 0x00000000, 0x00000001, 0x00000000) || unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0x00000001))
						{
							SYSTEM::SETTIMERB(0x00000000);
							iLocal_119 = 0x00000001;
							return 0x00000001;
						}
					}
				}
				if (func_159())
				{
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_119 = 0x00000002;
					return 0x00000001;
				}
				if (unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (unk_0xC844350D5D58C99A(iLocal_60))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
							{
								unk_0xA3BF0AA5A2608191(iLocal_60);
								unk_0xF4CB0B98F8F79D8D(iLocal_60, 0x00000000);
							}
						}
						SYSTEM::SETTIMERB(0x00000000);
						iLocal_119 = 0x00000002;
						return 0x00000001;
					}
				}
				else if (unk_0xB87D13D0C064E9D1(iLocal_61, unk_0x16F2683693E537C9(), 0x00000001))
				{
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_119 = 0x00000002;
					if (unk_0xC844350D5D58C99A(iLocal_60))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xF4CB0B98F8F79D8D(iLocal_60, 0x00000000);
						}
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						unk_0xA3BF0AA5A2608191(iLocal_61);
						unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
						unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000000, 0x00000001);
						unk_0x6DAD7906B73F064D(&iLocal_61);
					}
					return 0x00000001;
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_60))
			{
				if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 5.3f, 5.3f, 6f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
						{
							if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0x00000000);
								iLocal_119 = 0x00000003;
								return 0x00000001;
							}
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_159()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (unk_0xE115347EA59F7B86(iLocal_61, unk_0x16F2683693E537C9()) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_61) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_61))
				{
					return 0x00000001;
				}
			}
		}
		if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
		{
			return 0x00000001;
		}
		if (unk_0x869EFD0BC0868856(iLocal_61))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_160()
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if (unk_0x03A10A5707B2BB1F(iLocal_61, 0x00000004))
				{
					if ((func_42(&uLocal_154, cLocal_85, sLocal_94, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62()) || func_62())
					{
						iLocal_57 = 0x00000001;
					}
				}
				else if ((func_42(&uLocal_154, cLocal_85, sLocal_89, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62()) || func_62())
				{
					iLocal_57 = 0x00000001;
				}
			}
		}
	}
	else if (func_159())
	{
		if ((func_42(&uLocal_154, cLocal_85, sLocal_98, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62()) || func_62())
		{
			if (unk_0x03A10A5707B2BB1F(iLocal_61, 0x00000004))
			{
				unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
			}
			else
			{
				func_152();
			}
			iLocal_56 = 0x00000001;
		}
	}
}

int func_161()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000007))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
				{
					return 0x00000001;
				}
			}
		}
		if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (unk_0x54648B774DB42A3A(iLocal_60, joaat("weapon_stungun"), 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
		if (unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0x00000001))
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f), 3f, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_162()
{
	if (iLocal_45 == 0x00000002)
	{
	}
	if (!func_167())
	{
		if (SYSTEM::TIMERA() > 0x00002710)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				if (!unk_0x7DECE00E09F41C95(iLocal_60))
				{
					func_163(iLocal_60, "GENERIC_CURSE_MED", 0x00000018);
					SYSTEM::SETTIMERA(0x00000000);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (func_38(unk_0x16F2683693E537C9(), iLocal_61, 0x00000001) > 200f)
		{
			if (!unk_0x0A059E0DB9253280(iLocal_61) || unk_0x03068588A1FCED1A(iLocal_61))
			{
				iLocal_46 = 0x00000008;
			}
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_164(iParam2), 0x00000001);
}

int func_164(int iParam0)
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

void func_165()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 0x00000003))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				iLocal_138 = 0x00000003;
				bLocal_51 = 0x00000001;
			}
			else if (unk_0xB4ECF989E2C1DAC8(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 0x00000003))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_103);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000, 0x00000002);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_103);
				unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
				unk_0xF82EA857DA10E0CD(&iLocal_103);
				iLocal_138 = 0x00000003;
				bLocal_51 = 0x00000001;
			}
			else
			{
				bLocal_51 = 0x00000001;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 7f, 7f, 7f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iLocal_60, 0x0E763797) == 0x00000001)
					{
						if (unk_0x4F1B602325013CC2(iLocal_60) == iLocal_138)
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_60, unk_0x16F2683693E537C9(), 0x00002328, 0x00000000, 0x00000002);
							func_42(&uLocal_154, cLocal_85, sLocal_88, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							bLocal_129 = 0x00000001;
							iLocal_112 = 0x00000001;
						}
					}
					else
					{
						unk_0x33CE5A9E32EA10B2(iLocal_60, 0x00000001);
						func_42(&uLocal_154, cLocal_85, sLocal_88, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000000, 0x00000002);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00001B58);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						SYSTEM::SETTIMERA(0x00000000);
						bLocal_129 = 0x00000001;
						iLocal_112 = 0x00000001;
					}
				}
			}
		}
	}
}

int func_166()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 12f, 12f, 5f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_167()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_168()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = unk_0x1C0640BA9A7327B3();
			bLocal_110 = 0x00000001;
		}
		if (bLocal_110)
		{
			iLocal_115 = unk_0x1C0640BA9A7327B3();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 0x000001F4)
				{
					if (!func_167())
					{
						if (func_42(&uLocal_154, cLocal_85, sLocal_87, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62())
						{
							if (iLocal_45 == 0x00000002)
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 0x00000001)
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
								}
							}
							if (unk_0xE4EDC4B0E92C078B(iLocal_63))
							{
								unk_0x142CC44DB769B57E(&iLocal_63);
							}
							iLocal_52 = 0x00000001;
						}
					}
				}
			}
		}
	}
}

void func_169()
{
	float fVar0;
	
	if (!bLocal_53)
	{
		if (iLocal_80 == 0x00000001)
		{
			fVar0 = 1f;
		}
		if (iLocal_80 == 0x00000002)
		{
			fVar0 = 4f;
		}
		if (iLocal_80 != 0x00000002)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if (!func_196())
				{
					if (func_183())
					{
						func_280();
					}
				}
				if (func_182())
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_66))
					{
						if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
						{
							iLocal_66 = func_143(iLocal_61, 0x00000001, 0x00000000);
						}
						func_174(0x00000001);
					}
				}
				if (func_173())
				{
					func_172();
					if (iLocal_80 == 0x00000003)
					{
						if (!iLocal_55)
						{
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_61, 0x00003E80, 0x00000000, 0x00000002);
							unk_0x96167B03C5A77156(0x00000000, vLocal_79, 1f, 0x00004E20, fVar0, 0x00000004, 0x471C4000);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							iLocal_55 = 0x00000001;
						}
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_60, 0xFFFFFFFF, 0x00000000, 0x00000002);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, 0xFFFFFFFF, 0x00000200, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xE20F700AC2AFCA92(0x00000000, vLocal_79, iLocal_60, 1f, 0x00000000, 1.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
						unk_0x9BE7E7B6B488CC55(0x00000000, iLocal_60, 0xFFFFFFFF, 0x00000001);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						SYSTEM::SETTIMERA(0x00000000);
						bLocal_53 = 0x00000001;
						unk_0x51B096AAC60548C1(0f);
					}
					else
					{
						if (iLocal_80 == 0x00000001)
						{
							sLocal_93 = sLocal_93;
						}
						func_171();
						bLocal_53 = 0x00000001;
						bLocal_123 = 0x00000001;
						SYSTEM::SETTIMERA(0x00000000);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (SYSTEM::TIMERA() > 0x000003E8)
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 60f, 60f, 50f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
					{
						unk_0xF96A174EE26D7588(iLocal_60, iLocal_61, 0x00000000);
					}
					iLocal_111 = 0x00000001;
				}
				else
				{
					iLocal_111 = 0x00000001;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if (func_42(&uLocal_154, cLocal_85, sLocal_86, 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62())
				{
					unk_0xA3BF0AA5A2608191(iLocal_60);
					unk_0xDD353D0E9C789D0E(&iLocal_103);
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "handsup_standing_enter", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "handsup_standing_base", 8f, -4f, 0x00001B58, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "handsup_standing_exit", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_103);
					unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
					unk_0xF82EA857DA10E0CD(&iLocal_103);
					func_172();
					iLocal_151 = unk_0xA6FF0828D17CF374(joaat("pickup_money_purse"), unk_0x550B1459B4642A86(unk_0x68E4ADDDDCD7BDDE(iLocal_60, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_120, iLocal_152, 0x00000001, iLocal_77);
					bLocal_109 = 0x00000001;
				}
			}
		}
		if (bLocal_109)
		{
			if (unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				func_170();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0x00000000:
						vLocal_626 = { unk_0xE925E52ACABA4CE7(iLocal_151) - Vector(0f, 0f, 0.75f) };
						if (unk_0x797C48AACDB248B0(iLocal_151))
						{
							unk_0xA3BF0AA5A2608191(iLocal_61);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0xE20F700AC2AFCA92(0x00000000, vLocal_626, iLocal_60, 2f, 0x00000000, 0.1f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							iLocal_624 = unk_0x1C0640BA9A7327B3();
						}
						iLocal_623 = 0x00000001;
						break;
					
					case 0x00000001:
						if (unk_0xD1960163A3042274(iLocal_61, 0x0E763797) == 0x00000007)
						{
							vLocal_626 = { unk_0xE925E52ACABA4CE7(iLocal_151) - Vector(0f, 0f, 0.75f) };
							if (unk_0x797C48AACDB248B0(iLocal_151))
							{
								if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_61, 0x00000001), vLocal_626, 0x00000001) > 1f)
								{
									iLocal_625 = 0x00000001;
									iLocal_623 = 0x00000004;
								}
								else
								{
									unk_0xA3BF0AA5A2608191(iLocal_61);
									unk_0xDD353D0E9C789D0E(&iLocal_103);
									unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_320, "pickup_low", 8f, -4f, 0xFFFFFFFF, 0x00002020, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_103);
									unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
									unk_0xF82EA857DA10E0CD(&iLocal_103);
									iLocal_623 = 0x00000002;
								}
							}
							else
							{
								iLocal_623 = 0x00000004;
							}
						}
						if ((unk_0x1C0640BA9A7327B3() - iLocal_624) > 0x00003A98)
						{
							iLocal_625 = 0x00000001;
							iLocal_623 = 0x00000004;
						}
						break;
					
					case 0x00000002:
						if (unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (unk_0x797C48AACDB248B0(iLocal_151))
							{
								unk_0x40B7230FD4C59AA2(iLocal_151);
								iLocal_623 = 0x00000003;
							}
							else
							{
								iLocal_623 = 0x00000004;
							}
						}
						break;
					
					case 0x00000003:
						if ((unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_320, "pickup_low", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !unk_0xB4ECF989E2C1DAC8(iLocal_61, cLocal_320, "pickup_low", 0x00000003))
						{
							iLocal_623 = 0x00000004;
						}
						break;
					
					case 0x00000004:
						unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000001, 0x00000001);
						unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 50f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xF895E10BF4C72645(iLocal_61, 0x00000000, 0x00000000);
						bLocal_123 = 0x00000001;
						break;
					}
				}
			}
	}
}

void func_170()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_63))
	{
		unk_0x142CC44DB769B57E(&iLocal_63);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		if (unk_0x762119754C50557A(iLocal_151))
		{
			iLocal_65 = func_156(iLocal_151);
		}
	}
	iLocal_46 = 0x00000004;
}

void func_171()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
	}
	if (unk_0x7069CC4DE1EA3FAA(iLocal_61, unk_0x16F2683693E537C9(), 90f))
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (iLocal_45 == 0x00000002)
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, sLocal_328, 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else if (iLocal_80 == 0x00000004)
		{
			iLocal_335 = unk_0x544B74C043CE9948(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0x00000000, 0x00000004);
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, sLocal_328, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
	}
	else
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (iLocal_45 == 0x00000002)
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, sLocal_330, 8f, -8f, 0xFFFFFFFF, 0x00000008, 0.1f, 0x00000000, 0x00000000, 0x00000000);
			unk_0x796BDF31572BB055(0x00000000, -94.8543f, -1582.686f, 30.2862f, 0x00000BB8);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else if (iLocal_80 == 0x00000004)
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
		else
		{
			unk_0xDD353D0E9C789D0E(&iLocal_103);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, sLocal_330, 8f, -4f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_a", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_b", 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_319, "agitated_loop_c", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_103);
			unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
			unk_0xF82EA857DA10E0CD(&iLocal_103);
		}
	}
}

void func_172()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_66))
	{
		unk_0x142CC44DB769B57E(&iLocal_66);
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_64))
	{
		if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
		{
			iLocal_64 = func_143(iLocal_61, 0x00000001, 0x00000000);
		}
	}
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iLocal_80 == 0x00000001)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0x00000000, 0x00000000, 0x00000000))
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iLocal_80 == 0x00000002)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_61, 0x00000001), 0x00000001) < 30f)
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iLocal_80 == 0x00000004)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar0 = 0x00000001;
		}
	}
	else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -325.7037f, -829.31f, 30.5812f, 0x00000001) < 95f)
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_174(int iParam0)
{
	if (func_176())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_175(Global_1B40B))
		{
			func_140(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_175(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_175(int iParam0)
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

int func_176()
{
	switch (func_177(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_177(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_181(0x00000000))
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
		if (!func_179(iParam2))
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
			func_178(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_178(var uParam0, int iParam1)
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

bool func_179(int iParam0)
{
	return func_180(iParam0, Global_A1D7);
}

int func_180(int iParam0, int iParam1)
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

int func_181(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_179(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_182()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iLocal_80 == 0x00000001)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0x00000000, 0x00000000, 0x00000000))
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iLocal_80 == 0x00000002)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar0 = 0x00000001;
		}
	}
	else if (iLocal_80 == 0x00000003)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -325.7037f, -829.31f, 30.5812f, 0x00000001) < 105f)
		{
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

int func_183()
{
	if (!func_179(0x00000005))
	{
		return 0x00000001;
	}
	if (func_192())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_191())
		{
			return 0x00000000;
		}
	}
	if (func_184(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_184(float fParam0, bool bParam1)
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
		if (func_129(func_127()))
		{
			iVar5 = func_190();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_185(iVar1, &Var0);
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

void func_185(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_186(uParam1, "Barry1", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_186(uParam1, "Barry2", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_186(uParam1, "Barry3", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_186(uParam1, "Barry3A", func_188(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_186(uParam1, "Barry3C", func_188(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_186(uParam1, "Barry4", func_188(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_186(uParam1, "Hao1", func_188(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_186(uParam1, "Josh1", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_186(uParam1, "Josh2", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_186(uParam1, "Josh3", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_186(uParam1, "Josh4", func_188(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_186(uParam1, "Maude1", func_188(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_186(uParam1, "Minute1", func_188(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_186(uParam1, "Minute2", func_188(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_186(uParam1, "Minute3", func_188(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_186(uParam1, "Omega1", func_188(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_186(uParam1, "Omega2", func_188(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_187(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_187(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_186(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_187(int iParam0)
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

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_189(iParam0) };
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

struct<2> func_189(int iParam0)
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

int func_190()
{
	func_128();
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

int func_191()
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

int func_192()
{
	if (func_195() && !func_191())
	{
		return 0x00000001;
	}
	if (func_194() && func_193())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_193()
{
	return Global_1B2FC > 0x00000000;
}

int func_194()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_195()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_196()
{
	if ((Global_1B40B == func_197() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_197()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_198(Var0);
	return uVar1;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_199()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x94FD98915D03BAC2(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	func_298(0x00000019, iLocal_80);
	func_203();
	func_200();
	func_280();
}

void func_200()
{
	func_201();
}

int func_201()
{
	if (func_202(0x00000000))
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

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_203()
{
	return 0x00000001;
}

void func_204(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_205()
{
	switch (iLocal_116)
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_116++;
			break;
		
		case 0x00000001:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					if (func_182())
					{
						if (!unk_0xE4EDC4B0E92C078B(iLocal_66))
						{
							if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
							{
								iLocal_66 = func_143(iLocal_61, 0x00000001, 0x00000000);
							}
							if (!func_196())
							{
								func_174(0x00000001);
							}
						}
					}
					if (func_173())
					{
						func_42(&uLocal_154, cLocal_85, "REMG2_ARG", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						func_172();
						iLocal_147 = unk_0x1C0640BA9A7327B3();
						unk_0x51B096AAC60548C1(0f);
						iLocal_150 = 0x00000001;
						iLocal_116++;
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xEEB67C3D0A71A47B(iLocal_60, vLocal_121, 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
					SYSTEM::WAIT(0x00000000);
					func_211();
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_210())
				{
					iLocal_116 = 0x00000004;
				}
				if (func_159())
				{
					iLocal_116 = 0x00000009;
				}
				if (func_209())
				{
					iLocal_116 = 0x00000006;
				}
				if (func_208())
				{
					iLocal_116 = 0x00000004;
				}
			}
			if (!func_196())
			{
				if (func_183())
				{
					func_280();
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 6f, 6f, 15f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0xE115347EA59F7B86(iLocal_61, unk_0x16F2683693E537C9()) || unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 3f, 3f, 15f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_61, 65f))
							{
								iLocal_149 = unk_0x1C0640BA9A7327B3();
								unk_0x0C8C0C840C2D1AD2(iLocal_61, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000000, 0x00000002);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								SYSTEM::SETTIMERB(0x00000000);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = unk_0x1C0640BA9A7327B3();
								unk_0x0C8C0C840C2D1AD2(iLocal_61, unk_0x16F2683693E537C9(), 0x00001B58, 0x00000000, 0x00000002);
								func_42(&uLocal_154, cLocal_85, sLocal_94, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								SYSTEM::SETTIMERB(0x00000000);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_210() || func_208())
			{
				iLocal_116 = 0x00000004;
			}
			if (func_159())
			{
				iLocal_116 = 0x00000009;
			}
			if (func_209())
			{
				iLocal_116 = 0x00000006;
			}
			break;
		
		case 0x00000003:
			if ((iLocal_148 - iLocal_149) > 0x000030D4)
			{
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
				{
					iLocal_116 = 0x00000004;
				}
			}
			if ((iLocal_148 - iLocal_149) > 0x0000157C)
			{
				if (!bLocal_113)
				{
					if (unk_0xC844350D5D58C99A(iLocal_61))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(iLocal_61, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							bLocal_113 = 0x00000001;
							if (unk_0xC844350D5D58C99A(iLocal_60))
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
									unk_0xEEB67C3D0A71A47B(iLocal_60, vLocal_121, 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
									SYSTEM::WAIT(0x00000000);
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
								{
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_63))
								{
									unk_0x142CC44DB769B57E(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 0x0000000A;
			}
			else
			{
				if (func_210())
				{
					iLocal_116 = 0x00000004;
				}
				if (func_159())
				{
					iLocal_116 = 0x00000009;
				}
				if (func_209())
				{
					iLocal_116 = 0x00000006;
				}
				if (func_207())
				{
					iLocal_116 = 0x00000009;
				}
				if (func_208())
				{
					iLocal_116 = 0x00000004;
				}
			}
			break;
		
		case 0x0000000A:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_61) || func_38(unk_0x16F2683693E537C9(), iLocal_61, 0x00000001) > 100f)
				{
					func_206();
					func_211();
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xC844350D5D58C99A(iLocal_60))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					if (!unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0x00000001))
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0xEEB67C3D0A71A47B(0x00000000, unk_0x68F4C0EC296D3901(iLocal_61, 0x00000000), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
						}
						iLocal_122 = 0x00000001;
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xF3268524E9BE6D6E(iLocal_60, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
						if (unk_0xE4EDC4B0E92C078B(iLocal_63))
						{
							unk_0x142CC44DB769B57E(&iLocal_63);
						}
					}
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					unk_0xA3BF0AA5A2608191(iLocal_61);
					unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
					if (unk_0xE4EDC4B0E92C078B(iLocal_64))
					{
						unk_0x142CC44DB769B57E(&iLocal_64);
					}
				}
			}
			if (unk_0x25037C66EB32B076())
			{
				func_110();
			}
			SYSTEM::WAIT(0x00000000);
			if (!iLocal_122)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				func_280();
			}
			break;
		
		case 0x00000005:
			if (SYSTEM::TIMERB() > 0x000000FA)
			{
				if (unk_0xC844350D5D58C99A(iLocal_61))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						unk_0xAFF39FB306F8E232(iLocal_61, 0x00000011, 0x00000001);
						unk_0x9DD8618CA5BF832D(iLocal_61, 0x0000009C, 0x00000001);
						unk_0xDD353D0E9C789D0E(&iLocal_103);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_103);
						unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
						unk_0xF82EA857DA10E0CD(&iLocal_103);
						unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
						SYSTEM::WAIT(0x00000000);
						unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000000, 0x00000001);
						unk_0x6DAD7906B73F064D(&iLocal_61);
						func_42(&uLocal_154, cLocal_85, sLocal_95, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_60))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
					{
						if (!unk_0xB87D13D0C064E9D1(iLocal_60, unk_0x16F2683693E537C9(), 0x00000001))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							iLocal_122 = 0x00000001;
						}
					}
				}
				if (!iLocal_122)
				{
					SYSTEM::WAIT(0x00000000);
					func_280();
				}
			}
			break;
		
		case 0x00000006:
			if (SYSTEM::TIMERA() > 0x000001F4)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC844350D5D58C99A(iLocal_60))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
						{
							unk_0xA3BF0AA5A2608191(iLocal_60);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000000, 0x00000002);
							unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
							unk_0x6DAD7906B73F064D(&iLocal_60);
						}
					}
					if (unk_0xC844350D5D58C99A(iLocal_61))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
						{
							func_42(&uLocal_154, cLocal_85, sLocal_96, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							unk_0xA3BF0AA5A2608191(iLocal_61);
							unk_0xDD353D0E9C789D0E(&iLocal_103);
							unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000000, 0x00000002);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
							unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_103);
							unk_0x78ADC381772E3D54(iLocal_61, iLocal_103);
							unk_0xF82EA857DA10E0CD(&iLocal_103);
							unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
						}
					}
				}
				SYSTEM::WAIT(0x00000000);
				func_280();
			}
			break;
		
		case 0x00000007:
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_116++;
			break;
		
		case 0x00000008:
			if (SYSTEM::TIMERA() > 0x000000C8)
			{
				func_211();
			}
			break;
		
		case 0x00000009:
			if (unk_0xC844350D5D58C99A(iLocal_61))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
				{
					unk_0x9DD8618CA5BF832D(iLocal_61, 0x0000009C, 0x00000001);
					unk_0x7C8478BF70C1E072(iLocal_61, 50f, 0x00000000);
					if (unk_0x25037C66EB32B076())
					{
						func_110();
					}
					SYSTEM::WAIT(0x00000000);
					func_42(&uLocal_154, cLocal_85, sLocal_94, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			if (unk_0xC844350D5D58C99A(iLocal_60))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
				{
					unk_0xA3BF0AA5A2608191(iLocal_60);
					unk_0x8BE3D040D15AEA1D(iLocal_60, 0x000007D0);
					iLocal_122 = 0x00000001;
				}
			}
			break;
	}
	if (iLocal_116 != 0x00000008 && iLocal_122)
	{
		iLocal_116 = 0x00000007;
	}
	iLocal_148 = unk_0x1C0640BA9A7327B3();
	if (iLocal_150 && !bLocal_113)
	{
		if (unk_0xC844350D5D58C99A(iLocal_61) && unk_0xC844350D5D58C99A(iLocal_61))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 0x00002EE0 && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 3f, 3f, 35f, 0x00000000, 0x00000001, 0x00000000)) && unk_0x0A059E0DB9253280(iLocal_61)) && !func_167())
				{
					if ((func_42(&uLocal_154, cLocal_85, "REMG2_FKIT", 0x00000004, 0x00000000, 0x00000000, 0x00000000) || func_62()) || func_62())
					{
						unk_0x9DD8618CA5BF832D(iLocal_61, 0x0000009C, 0x00000001);
						unk_0x2D728BBC95A0267D(iLocal_61, unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f), 0x00000000);
						unk_0xA3BF0AA5A2608191(iLocal_60);
						unk_0xD458AC1C1D29C3B4(iLocal_60, 0x00000063, 0x00000000);
						unk_0xEEB67C3D0A71A47B(iLocal_61, vLocal_121, 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
						func_280();
					}
				}
			}
		}
	}
}

void func_206()
{
	Global_4CD7 = 0x00000000;
	func_56();
}

int func_207()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60) && !unk_0xEB6A8945D1AC98A1(iLocal_61))
	{
		if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_61) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_60))
		{
			return 0x00000001;
		}
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_61, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
		{
		}
	}
	return 0x00000000;
}

int func_208()
{
	if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					return 0x00000001;
				}
			}
		}
	}
	else
	{
		return 0x00000001;
	}
	if (!unk_0x437347B10A200C4B(iLocal_61, 0x00000000))
	{
		if (func_159())
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
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

int func_209()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_60, 5.3f, 5.3f, 6f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0xF649DD3BF44195C7(iLocal_60, unk_0x16F2683693E537C9(), 0x00000011))
			{
				if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006) && !unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						if (!unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_61))
						{
							if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0x00000000);
								return 0x00000001;
							}
						}
					}
					else if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_60) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_60))
					{
						SYSTEM::SETTIMERB(0x00000000);
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_210()
{
	if (!unk_0x437347B10A200C4B(iLocal_60, 0x00000000))
	{
		if (unk_0xD3DCEC81D13AAFB1(unk_0x64430C979F516F7A(iLocal_60, 0x0000796E, 0f, 0f, 0f), 5f, 0x00000001))
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_211()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
	{
		if (!unk_0x869EFD0BC0868856(iLocal_60))
		{
			if (func_196())
			{
				if (unk_0xD1960163A3042274(iLocal_60, 0x0E763797) == 0x00000007 || unk_0xD1960163A3042274(iLocal_60, 0x1C43F4CF) == 0x00000007)
				{
					if (unk_0x25037C66EB32B076())
					{
						func_110();
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
					{
						if (!unk_0xE9FDA1035CFEA94F(iLocal_60))
						{
							unk_0xF3268524E9BE6D6E(iLocal_60, iLocal_61, 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
					}
					else if (iLocal_45 == 0x00000003)
					{
						if (!unk_0xE9FDA1035CFEA94F(iLocal_60))
						{
							unk_0xEEB67C3D0A71A47B(iLocal_60, vLocal_104, 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
					}
					unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
					SYSTEM::WAIT(0x00000000);
					func_42(&uLocal_154, cLocal_85, sLocal_91, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					SYSTEM::WAIT(0x00000000);
					if (iLocal_152 > 0x00000000)
					{
						unk_0x6D80F1AEBA734886(unk_0x16F2683693E537C9(), (iLocal_152 / 0x00000064) * 90);
						func_64(func_127(), 0x00000001, iLocal_152);
						SYSTEM::WAIT(0x00000000);
						func_212(func_127(), 0x00000001, (iLocal_152 / 0x0000000A), 0x00000000, 0x00000001);
					}
					func_204(0x00000003);
					func_199();
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_98(iParam0) == 0x00000004)
	{
		return;
	}
	func_65(func_98(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_213()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_43) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_191())
		{
			return 0x00000000;
		}
	}
	if (func_192())
	{
		return 0x00000001;
	}
	if (func_184(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_214()
{
	func_225();
	func_224(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_224(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_224(&uLocal_349, cLocal_333);
	func_224(&uLocal_349, cLocal_321);
	func_222(&uLocal_349, iLocal_75);
	func_222(&uLocal_349, iLocal_76);
	func_222(&uLocal_349, iLocal_77);
	func_224(&uLocal_349, cLocal_320);
	func_224(&uLocal_349, cLocal_319);
	func_224(&uLocal_349, cLocal_334);
	func_224(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_218(&uLocal_349))
	{
		func_215();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_215()
{
	iLocal_60 = unk_0x36F2404464202779(0x0000001A, iLocal_75, vLocal_67, fLocal_69, 0x00000001, 0x00000001);
	unk_0x11AD11297DC58CC7(iLocal_60, 0x00000001);
	unk_0x25C5402CC10F76CD(iLocal_60, 0x00000000);
	unk_0xBAFED2F6486F771A(iLocal_60, 0x00000008, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_60, 0x00000080, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_60, 0x00000200, 0x00000001);
	unk_0x33CE5A9E32EA10B2(iLocal_60, 0x00000001);
	unk_0x400A62DD9C797E1E(iLocal_60);
	unk_0x6D80F1AEBA734886(iLocal_60, 0x00000000);
	unk_0x7980D72D61BEF4D5(iLocal_60, 0x00000001);
	if (iLocal_75 == joaat("a_m_y_genstreet_01"))
	{
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
	}
	if (iLocal_75 == joaat("a_m_y_business_02"))
	{
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(iLocal_60, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0xF63400DBE3303D26("theAssailant", &iLocal_78);
	iLocal_61 = unk_0x36F2404464202779(0x0000001A, iLocal_76, vLocal_68, fLocal_72, 0x00000001, 0x00000001);
	unk_0xE8832A9E16A57A1F(iLocal_61, 0x00000001, 0x00000001);
	unk_0x11AD11297DC58CC7(iLocal_61, 0x00000001);
	unk_0xE2F0767314863BD8(iLocal_61, 0x00000001, 0x00000000);
	unk_0x262EF6C6306BEA6C(iLocal_61, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
	unk_0xAFF39FB306F8E232(iLocal_61, 0x0000000D, 0x00000000);
	unk_0xAFF39FB306F8E232(iLocal_61, 0x00000011, 0x00000000);
	unk_0x1365063FA6365BE8(iLocal_61, 0x00000001);
	unk_0x4E885A246A9D983A(iLocal_61, 0x0000002A, 0x00000001);
	unk_0x4E885A246A9D983A(iLocal_61, 0x00000089, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_61, 0x00000080, 0x00000001);
	unk_0xBAFED2F6486F771A(iLocal_61, 0x00000002, 0x00000000);
	unk_0x6DF7BF67E86AAE86(iLocal_61, iLocal_78);
	unk_0x33CE5A9E32EA10B2(iLocal_61, 0x00000001);
	if (!unk_0x2EBF5002C6B6A06C(sLocal_102))
	{
		unk_0x4F39CC3882DD074E(iLocal_60, sLocal_102);
	}
	unk_0x4F39CC3882DD074E(iLocal_61, sLocal_101);
	unk_0x0E2400AB9174FA81(0x00000002, 0x02B8FA80, iLocal_78);
	unk_0x0E2400AB9174FA81(0x00000002, 0x47033600, iLocal_78);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_78, 0x02B8FA80);
	unk_0x0E2400AB9174FA81(0x00000002, iLocal_78, 0x47033600);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_78, 0x6F0783F5);
	switch (func_127())
	{
		case 0x00000000:
			func_217(&uLocal_154, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
			break;
		
		case 0x00000001:
			func_217(&uLocal_154, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
			break;
		
		case 0x00000002:
			func_217(&uLocal_154, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			break;
	}
	func_217(&uLocal_154, 0x00000001, iLocal_61, sLocal_100, 0x00000000, 0x00000001);
	func_217(&uLocal_154, 0x00000002, iLocal_60, sLocal_99, 0x00000000, 0x00000001);
	if (iLocal_45 == 0x00000002)
	{
		unk_0xBAFED2F6486F771A(iLocal_61, 0x00000001, 0x00000000);
	}
	if (iLocal_80 == 0x00000001 || iLocal_80 == 0x00000004)
	{
		func_216();
	}
	if (iLocal_80 == 0x00000003)
	{
		vLocal_105 = { -325.4189f, -828.8596f, 31.1f };
		vLocal_106 = { 0f, 0f, 180f };
		iLocal_107 = unk_0xE9744DB7B8CA6965(vLocal_105, vLocal_106, 0x00000002);
		unk_0x915804B434753CBD(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
	}
	if (iLocal_80 == 0x00000004)
	{
		unk_0x51EA29724CE5BF82(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 0x00000001);
	}
}

void func_216()
{
	vector3 vVar0;
	
	unk_0x08841CDB215AE18F(iLocal_61, unk_0x1BB04F10296A1C5E(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0x00000000, 0x00000002), 0x00000000, 0x00000000, 0x00000001);
	vVar0 = { unk_0xEEB20D14BD38615E(cLocal_319, sLocal_325, vLocal_331, vLocal_332, 0x00000000, 0x00000002) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0xD8F6A53F4799FAFE(iLocal_61, vVar0.z);
	unk_0x08841CDB215AE18F(iLocal_60, unk_0x1BB04F10296A1C5E(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0x00000000, 0x00000002), 0x00000000, 0x00000000, 0x00000001);
	vVar0 = { unk_0xEEB20D14BD38615E(cLocal_319, sLocal_326, vLocal_331, vLocal_332, 0x00000000, 0x00000002) };
	if (vVar0.z < 0f)
	{
		vVar0.z = (vVar0.z + 360f);
	}
	unk_0xD8F6A53F4799FAFE(iLocal_60, vVar0.z);
	unk_0xC6EB89C59F2AF6B8(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_217(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_218(var uParam0)
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
			if (!func_219(uParam0[iVar0 /*18*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_10F = 0x00000000;
	return 0x00000001;
}

bool func_219(var uParam0)
{
	return func_220(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_220(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_221(iParam0))
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

int func_221(int iParam0)
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

void func_222(var uParam0, int iParam1)
{
	func_223(uParam0, 0x00000000, iParam1, "NULL", 0x00000000);
}

void func_223(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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

void func_224(var uParam0, char* sParam1)
{
	func_223(uParam0, 0x00000001, 0xFFFFFFFF, sParam1, 0x00000000);
}

void func_225()
{
	func_278();
	unk_0x5D96D8530B3D0904(&iLocal_120, 0x00000003);
	unk_0x5D96D8530B3D0904(&iLocal_120, 0x00000004);
	unk_0x5D96D8530B3D0904(&iLocal_120, 0x00000001);
	if (iLocal_80 == 0x00000001)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_227();
		iLocal_152 = 0x000000C8;
		iLocal_46 = 0x00000002;
		vLocal_121 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_75 = joaat("a_m_y_business_02");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { -138.814f, -1635.975f, 31.357f };
		fLocal_69 = 318.519f;
		vLocal_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		vLocal_331 = { vLocal_67 };
		vLocal_332 = { 0f, 0f, fLocal_69 };
		vLocal_140 = { -103.8951f, -1593.239f, 30.49198f };
		vLocal_141 = { -89.29615f, -1575.444f, 32.30938f };
		vLocal_142 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_143 = { -169.8183f, -1669.556f, 33.94173f };
		vLocal_144 = { -152.0367f, -1654.379f, 31.73599f };
		vLocal_145 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_73 = 340.0645f;
		vLocal_74 = { -151.0793f, -1650.322f, 31.6504f };
		vLocal_79 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (func_127())
		{
			case 0x00000000:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			
			case 0x00000001:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			
			case 0x00000002:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 0x00000001;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_80 == 0x00000002)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 0x00000001;
		vLocal_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("a_f_y_genhot_01");
		iLocal_76 = joaat("g_m_y_strpunk_01");
		vLocal_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		vLocal_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		vLocal_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (func_127())
		{
			case 0x00000000:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			
			case 0x00000001:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			
			case 0x00000002:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 0x00000001;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 0x00000001)
	{
		func_226();
		iLocal_152 = 0x000007D0;
		iLocal_46 = 0x00000002;
		if (iLocal_80 == 0x00000003)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			vLocal_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("a_f_y_hipster_01");
			iLocal_76 = joaat("a_m_o_tramp_01");
			vLocal_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			vLocal_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			vLocal_74 = { -322.3941f, -835.7213f, 30.6001f };
			vLocal_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (func_127())
			{
				case 0x00000000:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				
				case 0x00000001:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				
				case 0x00000002:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 0x00000001;
			cLocal_334 = "move_f@hurry@a";
		}
		if (iLocal_80 == 0x00000004)
		{
			func_226();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			vLocal_121 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_75 = joaat("a_f_m_tourist_01");
			iLocal_76 = joaat("g_m_y_armgoon_02");
			vLocal_67 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_69 = 159.1445f;
			vLocal_331 = { vLocal_67 };
			vLocal_332 = { 0f, 0f, fLocal_69 };
			vLocal_68 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			vLocal_74 = { 42.5323f, -990.353f, 28.248f };
			vLocal_140 = { 38.15186f, -1001.485f, 28.42276f };
			vLocal_141 = { 40.13669f, -995.2711f, 30.37197f };
			vLocal_142 = { 37.21758f, -1040.354f, 28.41506f };
			vLocal_143 = { 19.91492f, -1036.814f, 30.28045f };
			vLocal_144 = { 28.4511f, -1035.718f, 28.3329f };
			vLocal_145 = { 38.6536f, -1001.073f, 28.407f };
			vLocal_79 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (func_127())
			{
				case 0x00000000:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				
				case 0x00000001:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				
				case 0x00000002:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 0x00000001;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_226()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
	{
		case 0x00000000:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 0x00000001:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 0x00000002:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_227()
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
	{
		case 0x00000000:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 0x00000001:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 0x00000002:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_228(int iParam0, var uParam1)
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

void func_229(var uParam0)
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
						func_230(uParam0[iVar0 /*18*/]);
						uParam0->f_110 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_230(int iParam0)
{
	func_231(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_231(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_221(*iParam0))
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

void func_232(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_197();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_234(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_233();
}

void func_233()
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

void func_234(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_235(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_197();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_275())
		{
			return 0x00000000;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_191())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_202(0x00000000))
		{
			return 0x00000000;
		}
		if (func_192())
		{
			return 0x00000000;
		}
		if (func_274())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_129(func_127()))
		{
			if (func_184(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_273(iParam1))
		{
			return 0x00000000;
		}
		if (func_129(func_127()))
		{
			if (func_272(func_127()) == 0x00000004 || func_272(func_127()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_129(func_127()))
		{
			if (!func_271(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_270(Global_1B416.f_619E.f_2B[iParam1]))
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
		if (func_269())
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
		if (!func_260(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_179(0x00000005))
		{
			return 0x00000000;
		}
		if (func_259(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_259(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_273(0x0000001E) && !func_259(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_129(func_127()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_258(iVar4))
				{
					if (func_236(iVar2))
					{
						if (!func_28(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_127() != iVar2)
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

bool func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_237(iVar0);
}

int func_237(int iParam0)
{
	return func_238(iParam0, 0x00000001);
}

int func_238(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_258(iParam0))
	{
		return 0x00000000;
	}
	func_239(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_239(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_240(func_251(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_250(iParam0, iParam1))
	{
		iVar0 = func_249(iParam1);
		iVar1 = func_247(iParam0);
		iVar2 = (func_247(iParam0) - func_247(iParam1));
		iVar3 = (func_249(iParam0) - func_249(iParam1));
		iVar4 = (func_246(iParam0) - func_246(iParam1));
		iVar5 = (func_245(iParam0) - func_245(iParam1));
		iVar6 = (func_244(iParam0) - func_244(iParam1));
		iVar7 = (func_243(iParam0) - func_243(iParam1));
	}
	else
	{
		iVar0 = func_249(iParam0);
		iVar1 = func_247(iParam1);
		iVar2 = (func_247(iParam1) - func_247(iParam0));
		iVar3 = (func_249(iParam1) - func_249(iParam0));
		iVar4 = (func_246(iParam1) - func_246(iParam0));
		iVar5 = (func_245(iParam1) - func_245(iParam0));
		iVar6 = (func_244(iParam1) - func_244(iParam0));
		iVar7 = (func_243(iParam1) - func_243(iParam0));
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
		iVar4 = (iVar4 + func_242(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_241(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_241(float fParam0, float fParam1, float fParam2)
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

int func_242(int iParam0, int iParam1)
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

int func_243(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_244(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_245(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_246(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_247(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_248(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_248(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_249(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_250(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_258(iParam1) || !func_258(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_246(iParam0);
	iVar1 = func_246(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_245(iParam0);
	iVar1 = func_245(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_244(iParam0);
	iVar1 = func_244(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_243(iParam0);
	iVar1 = func_243(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_251()
{
	var uVar0;
	
	func_257(&uVar0, unk_0x4460E481B9E33ADA());
	func_256(&uVar0, unk_0x8D199E381D262EEF());
	func_255(&uVar0, unk_0xD8A54335F18763BA());
	func_254(&uVar0, unk_0x972A296334C9D57B());
	func_253(&uVar0, unk_0x118229AD063C3C1D());
	func_252(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_252(var uParam0, int iParam1)
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

void func_253(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_254(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249(*uParam0);
	iVar1 = func_247(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_242(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_255(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_256(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_257(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_258(int iParam0)
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
	iVar0 = func_243(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_244(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_245(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_247(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_249(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_246(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_242(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_259(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_127();
				if (!func_129(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_268()) || Global_1B05D) || Global_7832) || func_267()) || func_55(0x00000008, 0xFFFFFFFF)) || func_266()) || func_265()) || func_264()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_268()) || Global_7832) || func_267()) || func_55(0x00000008, 0xFFFFFFFF)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_268()) || Global_1B05D) || Global_7832) || func_267()) || func_55(0x00000008, 0xFFFFFFFF)) || func_264()) || func_266()) || func_265()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_268()) || Global_1B05D) || Global_7832) || func_267()) || func_55(0x00000008, 0xFFFFFFFF)) || func_266()) || func_265()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_268() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_55(0x00000008, 0xFFFFFFFF)) || func_263()) || func_262()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_55(0x00000008, 0xFFFFFFFF) || func_266()) || func_265()) || func_262()) || func_261())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_268()) || Global_7832) || func_267()) || func_55(0x00000008, 0xFFFFFFFF)) || func_265()) || func_264()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_268()) || func_265()) || Global_1B05D) || Global_7832) || func_267()) || Global_A664) || func_55(0x00000008, 0xFFFFFFFF)) || func_264()) || func_262()) || func_263()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_268()) || Global_1B05D) || Global_7832) || func_267()) || func_55(0x00000008, 0xFFFFFFFF)) || func_264()) || func_262()) || func_266()) || func_265()) || func_263())
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

var func_261()
{
	return Global_181DF.f_1;
}

int func_262()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_263()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_264()
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

bool func_265()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_266()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_267()
{
	return Global_14086D;
}

int func_268()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_269()
{
	func_52();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_270(int iParam0)
{
	return func_250(func_251(), iParam0);
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_127();
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

int func_272(int iParam0)
{
	if (!func_129(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_273(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_275())
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

int func_274()
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

int func_275()
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

bool func_276(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003);
}

bool func_277(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000000);
}

void func_278()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (SYSTEM::VDIST(vLocal_104, vLocal_81) < 20f)
		{
			iLocal_80 = 0x00000001;
			iLocal_45 = 0x00000002;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_82) < 20f)
		{
			iLocal_80 = 0x00000002;
			iLocal_45 = 0x00000003;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_83) < 20f)
		{
			iLocal_80 = 0x00000003;
			iLocal_45 = 0x00000001;
		}
		if (SYSTEM::VDIST(vLocal_104, vLocal_84) < 20f)
		{
			iLocal_80 = 0x00000004;
			iLocal_45 = 0x00000001;
		}
	}
}

void func_279(var uParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		uParam0->f_111 = iParam1;
	}
}

void func_280()
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			unk_0x71199B01895C6202(iLocal_75);
			unk_0x71199B01895C6202(iLocal_76);
			unk_0x71199B01895C6202(iLocal_77);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_61))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xF3268524E9BE6D6E(iLocal_61, unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			unk_0xFADC0A217229F6B5(iLocal_61, 0x00000001);
			if (!bLocal_58)
			{
				unk_0x6D80F1AEBA734886(iLocal_61, iLocal_152);
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_60))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_60))
			{
				unk_0x25C5402CC10F76CD(iLocal_60, 0x00000001);
				if (unk_0xD1960163A3042274(iLocal_60, 0xBBA3B7CA) == 0x00000007 && unk_0xD1960163A3042274(iLocal_60, 0x0E763797) == 0x00000007)
				{
					unk_0xDD353D0E9C789D0E(&iLocal_103);
					if (unk_0x82F88FD400E98881(iLocal_60))
					{
						unk_0xFC0863196A9340DE(0x00000000, 0x00000000);
					}
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002328, 0x00000000, 0x00000002);
					unk_0xEEB67C3D0A71A47B(0x00000000, vLocal_104, 250f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_103);
					unk_0x78ADC381772E3D54(iLocal_60, iLocal_103);
					unk_0xF82EA857DA10E0CD(&iLocal_103);
					unk_0xFADC0A217229F6B5(iLocal_60, 0x00000001);
					if (!iLocal_128 && !iLocal_122)
					{
						if (unk_0x25037C66EB32B076())
						{
							func_110();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		if (unk_0xE4EDC4B0E92C078B(iLocal_64))
		{
			unk_0x142CC44DB769B57E(&iLocal_64);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_63))
		{
			unk_0x142CC44DB769B57E(&iLocal_63);
		}
		if (unk_0xC844350D5D58C99A(iLocal_62))
		{
			unk_0xEEEE2E5FA6F78DF0(&iLocal_62);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_65))
		{
			unk_0x142CC44DB769B57E(&iLocal_65);
		}
	}
	if (iLocal_335 != 0xFFFFFFFF)
	{
		if (unk_0x49083FDB78AC0509(iLocal_335))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_335);
		}
		iLocal_335 = 0xFFFFFFFF;
	}
	if (func_196())
	{
		unk_0x060F249A9A3E3F4E(0x00000001);
		unk_0x51B096AAC60548C1(1f);
	}
	func_37(&uLocal_336, 0x00000000, 0x00000000);
	func_114(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_286(0xFFFFFFFF);
	func_281(&uLocal_349, 0x00000000);
	if (iLocal_117 != 0x00000000)
	{
		unk_0x850CF499433B183D(iLocal_117);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_281(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_283(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_282(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_10F = 0x00000000;
	uParam0->f_110 = 0xFFFFFFFF;
	uParam0->f_111 = 0x00000001;
}

void func_282(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_283(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			func_284(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_10F = 0x00000001;
}

void func_284(var uParam0)
{
	func_285(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_285(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_221(iParam0))
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

void func_286(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_197();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_196())
	{
		func_291(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_290(0x00007530);
		StringCopy(&cVar0, func_289(Global_1B40B, 0x00000001), 64);
		if (func_288(Global_1B40B) > 0x00000000)
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
	func_287(&Global_786B);
	Global_1B40C = 0x00000000;
	func_234(0xFFFFFFFF);
}

void func_287(var uParam0)
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

int func_288(int iParam0)
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

char* func_289(int iParam0, bool bParam1)
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

void func_290(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_291(int iParam0)
{
	func_292(iParam0, 0x00000000, func_297(iParam0));
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_251();
	func_295(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_294(iParam0, &uVar0);
	Var1 = { func_293(&uVar0) };
}

struct<16> func_293(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_245(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_244(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_243(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_246(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_249(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_247(*uParam0), 64);
	return Var0;
}

void func_294(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_247(*uParam0);
	iVar1 = func_249(*uParam0);
	iVar2 = func_246(*uParam0);
	iVar3 = func_245(*uParam0);
	iVar4 = func_244(*uParam0);
	iVar5 = func_243(*uParam0);
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
	iVar6 = func_242(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_242(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_296(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_257(uParam0, iParam1);
	func_256(uParam0, iParam2);
	func_255(uParam0, iParam3);
	func_253(uParam0, iParam5);
	func_254(uParam0, iParam4);
	func_252(uParam0, iParam6);
}

int func_297(int iParam0)
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

void func_298(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_197();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_288(iParam0))
	{
		func_308(iParam0, iParam1);
		if (!func_307(0x00000033))
		{
			func_304("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_190(), 0x00000000, 0x0000008A, 0x00000000);
			func_303(0x00000033);
		}
		if (func_175(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_302(iParam0, iParam1) != 0x00000142)
		{
			func_299(func_302(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_204(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_204(0x00000007);
			}
			else
			{
				func_204(0x00000001);
			}
		}
	}
}

void func_299(int iParam0, var uParam1, var uParam2)
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
		func_74((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_300();
	}
}

void func_300()
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
		func_95(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_301() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_201();
				}
			}
		}
	}
}

int func_301()
{
	return Global_7830;
}

int func_302(int iParam0, int iParam1)
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

void func_303(int iParam0)
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

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_305(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_306();
	}
}

void func_306()
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

int func_307(int iParam0)
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

void func_308(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

