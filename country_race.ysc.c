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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<55> Local_47 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9 } ;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	char* sLocal_69 = NULL;
	char* sLocal_70 = NULL;
	char* sLocal_71 = NULL;
	char* sLocal_72 = NULL;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	var uLocal_75 = 30;
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
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	char* sLocal_113 = NULL;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_118 = { 0f, 0f, 0f };
	struct<50> Local_119[8];
	struct<50> Local_120[23];
	struct<12> Local_121[8];
	struct<11> Local_122[1];
	int iLocal_123 = 0;
	var uLocal_124 = 3;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1092616192;
	var uLocal_131 = 1101004800;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 3;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 10;
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
	struct<20> Local_209 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_210 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0 } ;
	var uLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	struct<2> Local_215 = { 0, 0 } ;
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
	var uLocal_229 = 8;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 4;
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
	var uLocal_248 = 4;
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
	var uLocal_263 = 4;
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
	var uLocal_278 = 4;
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
	var uLocal_293 = 4;
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
	var uLocal_308 = 4;
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
	var uLocal_323 = 4;
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
	var uLocal_338 = 4;
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
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
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
	var uLocal_403 = 3;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 1;
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
	var uLocal_424 = 2;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 13;
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
	var uLocal_442 = 13;
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
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
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
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 13;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 13;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 13;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 13;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 13;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	int iLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 8;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 4;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 4;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 4;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 4;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 4;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 4;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 4;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 4;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	bool bLocal_1072 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	vLocal_66 = { 1967.042f, 3116.005f, 45.8901f };
	vLocal_67 = { 1967.042f, 3116.005f, 45.8901f };
	vLocal_68 = { 1967.042f, 3116.005f, 45.8901f };
	sLocal_69 = "Stage Setup";
	sLocal_70 = "Race";
	sLocal_71 = "Complete";
	sLocal_72 = "";
	vLocal_114 = { 8.669f, -5.9084f, 0.0428f };
	iLocal_363 = unk_0x16F2683693E537C9();
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_352(0x00000001, 0x00000000, 0x00000001, 0x00000000);
	}
	func_342();
	func_333();
	while (0x00000001)
	{
		if (iLocal_212 != 0x00000003)
		{
			func_286();
		}
		switch (iLocal_212)
		{
			case 0x00000000:
				func_262();
				break;
			
			case 0x00000001:
				func_227();
				break;
			
			case 0x00000002:
				func_60();
				break;
			
			case 0x00000003:
				func_1();
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	func_53(0x00000000);
	switch (iLocal_107)
	{
		case 0x00000000:
			unk_0xF3039DE1FDB4F6FD(0x00000000);
			iLocal_107++;
			break;
		
		case 0x00000001:
			if (func_25(&uLocal_356, &uLocal_217, "CRACEFAIL", sLocal_113, &bLocal_74, 0x0000004E, 0x00000007, 0x00000001, 0x41700000, 0x00000001))
			{
				if (bLocal_74)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					func_2(0x00000001, 0x00000000);
				}
				else
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					unk_0x53491B90E4FD0E56(0x000001F4);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_107++;
				}
			}
			break;
		
		case 0x00000002:
			if (SYSTEM::TIMERA() > 0x000005DC)
			{
				func_352(0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			break;
	}
}

void func_2(int iParam0, int iParam1)
{
	unk_0x53491B90E4FD0E56(0x000001F4);
	while (!unk_0x757EF87A33649210())
	{
		unk_0x6A36BC55C7F6D023(0f);
		unk_0xD60411959D5D930B(0f);
		unk_0x1386EF28F7C0195C(0f, 0f);
		SYSTEM::WAIT(0x00000000);
	}
	func_24();
	func_352(0x00000000, 0x00000001, iParam1, 0x00000000);
	func_333();
	switch (iParam0)
	{
		case 0x00000000:
			func_23(iLocal_363, vLocal_66, 103.4f, 0x00000001, 0x00000001);
			func_22();
			break;
		
		case 0x00000001:
			func_23(iLocal_363, vLocal_67, 103.4f, 0x00000001, 0x00000001);
			func_7();
			break;
		
		case 0x00000002:
			func_23(iLocal_363, vLocal_68, 103.4f, 0x00000001, 0x00000001);
			func_6();
			break;
	}
	func_4(unk_0x68F4C0EC296D3901(iLocal_363, 0x00000001), 0x42480000, 0x0000000C, 0x00001388, 0x00000000, 0x00000000);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	func_3(0x000001F4);
}

void func_3(int iParam0)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	while (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x6A36BC55C7F6D023(0f);
		unk_0xD60411959D5D930B(0f);
		unk_0x1386EF28F7C0195C(0f, 0f);
		SYSTEM::WAIT(0x00000000);
	}
}

void func_4(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
				func_53(0x00000000);
			}
			if (bParam4)
			{
				func_5();
			}
			SYSTEM::WAIT(0x00000000);
		}
		if (unk_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		unk_0x51F8DBE54C75AE47(uVar0);
	}
}

void func_5()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_6()
{
	Local_46.f_6 = 0x00000001;
	unk_0x29398344B9E5B8A7(Local_47.f_40);
	while (!unk_0x1C2E18E9C63BEB77(Local_47.f_40))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
	{
		iLocal_365 = unk_0x728870EB733D12A1();
		unk_0x73270B3C9CC833FD(iLocal_365, 0x00000001, 0x00000000);
	}
	else
	{
		unk_0x523BCC9DC80CD82F(joaat("gauntlet"));
		while (!unk_0xB87F6CF6E5628C67(joaat("gauntlet")))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iLocal_365 = unk_0x122AAB0B1D6F55AD(joaat("gauntlet"), Local_47[0x00000005 /*3*/], Local_47.f_36[0x00000008], 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(joaat("gauntlet"));
		unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_365, 0xFFFFFFFF);
	}
	func_23(unk_0x728870EB733D12A1(), Local_47[0x00000005 /*3*/], Local_47.f_36[0x00000001], 0x00000000, 0x00000001);
	unk_0x1AEF7184B203A58D(unk_0x728870EB733D12A1(), 30f);
	iLocal_212 = 0x00000002;
}

void func_7()
{
	int iVar0;
	
	func_21(&Local_46);
	while (!func_20(&Local_46))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_12(0x000000C5, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000007)
	{
		func_9(&(Local_119[iVar0 /*50*/]), 0x00000001, 0x00000000);
		iVar0++;
	}
	if (!func_8(iLocal_365))
	{
		if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
		{
			iLocal_365 = unk_0x728870EB733D12A1();
			unk_0x73270B3C9CC833FD(iLocal_365, 0x00000001, 0x00000000);
		}
		else
		{
			unk_0x523BCC9DC80CD82F(joaat("gauntlet"));
			while (!unk_0xB87F6CF6E5628C67(joaat("gauntlet")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_365 = unk_0x122AAB0B1D6F55AD(joaat("gauntlet"), Local_47.f_1A[0x00000008 /*3*/], Local_47.f_36[0x00000008], 0x00000001, 0x00000001, 0x00000000);
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_365, 0xFFFFFFFF);
		}
	}
	else
	{
		func_23(iLocal_365, Local_47.f_1A[0x00000008 /*3*/], Local_47.f_36[0x00000008], 0x00000000, 0x00000001);
		unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_365, 0xFFFFFFFF);
	}
	unk_0x51B954DAB1BCAF73(iLocal_365);
	unk_0x71EDC33E5A423750(iLocal_365, 0x00000004);
	unk_0xE32750CAC756824F(iLocal_365, 0x00000001);
	unk_0x29398344B9E5B8A7(Local_47.f_40);
	while (!unk_0x1C2E18E9C63BEB77(Local_47.f_40))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_23(iLocal_365, Local_47.f_1A[0x00000008 /*3*/], Local_47.f_36[0x00000008], 0x00000000, 0x00000001);
	iLocal_212 = 0x00000001;
}

int func_8(int iParam0)
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

void func_9(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!uParam0->f_29)
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_3);
		if (bParam1)
		{
			while (!unk_0xB87F6CF6E5628C67(uParam0->f_3))
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
		unk_0x523BCC9DC80CD82F(uParam0->f_5.f_2);
		if (bParam1)
		{
			while (!unk_0xB87F6CF6E5628C67(uParam0->f_5.f_2))
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
		iVar0 = 0x00000000;
		if (unk_0xB87F6CF6E5628C67(uParam0->f_3) && unk_0xB87F6CF6E5628C67(uParam0->f_5.f_2))
		{
			iVar0 = 0x00000001;
		}
		if (iVar0 && (iParam2 == 0x00000000 || (iParam2 == 0x00000001 && !unk_0x8E28E832BEAC3DCE(uParam0->f_25, 2f))))
		{
			uParam0->f_5.f_3 = { uParam0->f_25 };
			uParam0->f_5.f_6 = uParam0->f_28;
			uParam0->f_5 = unk_0x122AAB0B1D6F55AD(uParam0->f_5.f_2, uParam0->f_25, uParam0->f_28, 0x00000001, 0x00000001, 0x00000000);
			unk_0x71199B01895C6202(uParam0->f_5.f_2);
			unk_0x56FDC9ADE35F7DB0(uParam0->f_5, 0x00000001, 0x00000001, 0x00000000);
			uParam0->f_5.f_7 = 0x00000001;
			*uParam0 = unk_0x852A19533F896693(uParam0->f_5, 0x0000001A, uParam0->f_3, 0xFFFFFFFF, 0x00000001, 0x00000001);
			func_11(uParam0);
			unk_0xC7A71743FA82CE83(uParam0->f_5, 0x00000001);
			if (unk_0xC844350D5D58C99A(*uParam0))
			{
				unk_0x298903DD96203C2C(*uParam0, 0x00000014);
				unk_0xEBE904C8FC460B66(*uParam0, 0x00000003);
				unk_0x083F03A847B640E9(*uParam0, 0x00000002);
				unk_0xAFF39FB306F8E232(*uParam0, 0x0000002A, 0x00000001);
				unk_0xAFF39FB306F8E232(*uParam0, 0x0000001C, 0x00000001);
				unk_0xAFF39FB306F8E232(*uParam0, 0x00000034, 0x00000001);
				unk_0xAFF39FB306F8E232(*uParam0, 0x00000023, 0x00000001);
				unk_0xAFF39FB306F8E232(*uParam0, 0x0000000E, 0x00000001);
				unk_0xAFF39FB306F8E232(*uParam0, 0x0000001D, 0x00000001);
				unk_0x3CC33E4E9CE523F4(*uParam0, 0x00000001);
				unk_0x4E885A246A9D983A(*uParam0, 0x00000119, 0x00000001);
				unk_0x4E885A246A9D983A(*uParam0, 0x00000084, 0x00000001);
				unk_0x4E885A246A9D983A(*uParam0, 0x000000BC, 0x00000001);
				unk_0x1365063FA6365BE8(*uParam0, 0x00000001);
				unk_0xFADC0A217229F6B5(*uParam0, 0x00000001);
				unk_0x5F2AA9E2843E9403(*uParam0, &(uParam0->f_2E));
				unk_0x6DF7BF67E86AAE86(*uParam0, uParam0->f_4);
				unk_0x11AD11297DC58CC7(*uParam0, 0x00000001);
				uParam0->f_2A = 0x00000000;
				uParam0->f_29 = 0x00000001;
				uParam0->f_2C = 0x00000000;
				if (uParam0->f_11.f_B == 0x00000001)
				{
					func_10(*uParam0);
				}
				unk_0x71199B01895C6202(uParam0->f_3);
			}
		}
	}
}

void func_10(int iParam0)
{
	switch (Global_1B416.f_61EC)
	{
		case 0x00000000:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000007, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000006, 0x00000000, 0x00000004, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000A, 0x00000000, 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000001, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000005, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000006, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000A, 0x00000000, 0x00000002, 0x00000000);
			break;
		
		case 0x00000003:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000006, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000004:
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000003, 0x00000000, 0x00000006, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x00000006, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(iParam0, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			break;
	}
}

void func_11(var uParam0)
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
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar3 = 0xFFFFFFFF;
	iVar4 = 0xFFFFFFFF;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0xFFFFFFFF;
	iVar7 = 0xFFFFFFFF;
	iVar8 = 0xFFFFFFFF;
	iVar9 = 0xFFFFFFFF;
	iVar10 = 0xFFFFFFFF;
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar13 = 0x00000003;
	iVar14 = 0x00000002;
	iVar15 = 0x00000002;
	iVar16 = 0x00000003;
	iVar17 = 0xFFFFFFFF;
	iVar18 = 0xFFFFFFFF;
	iVar19 = 0xFFFFFFFF;
	iVar20 = 0xFFFFFFFF;
	iVar21 = 0xFFFFFFFF;
	switch (Global_1B416.f_61EC)
	{
		case 0x00000000:
			switch (uParam0->f_11.f_B)
			{
				case 0x00000000:
					iVar0 = 0x00000006;
					iVar1 = 0x00000001;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0x00000000;
					iVar4 = 0x00000001;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0x00000000;
					iVar9 = 0x00000003;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar13 = 0x00000003;
					iVar14 = 0x00000002;
					iVar15 = 0x00000002;
					iVar16 = 0x00000003;
					iVar17 = 0x00000006;
					iVar18 = 0x00000000;
					iVar19 = 0x0000001B;
					iVar20 = 0x00000000;
					iVar21 = 0x00000078;
					break;
				
				case 0x00000002:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0x00000002;
					iVar4 = 0x00000000;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0x00000001;
					iVar8 = 0x00000000;
					iVar9 = 0xFFFFFFFF;
					iVar10 = 0x00000000;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000003;
					iVar14 = 0x00000002;
					iVar15 = 0x00000002;
					iVar16 = 0xFFFFFFFF;
					iVar17 = 0x00000001;
					iVar18 = 0x00000018;
					iVar19 = 0x00000000;
					iVar20 = 0x00000000;
					iVar21 = 0x00000084;
					unk_0xDE00FFD6DD02A48E(uParam0->f_5, 0x00000000);
					break;
				
				case 0x00000003:
					iVar0 = 0x00000000;
					iVar1 = 0x00000001;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0x00000000;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0x00000001;
					iVar11 = 0x00000000;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000002;
					iVar15 = 0x00000002;
					iVar16 = 0xFFFFFFFF;
					iVar17 = 0x0000000A;
					iVar18 = 0x00000093;
					iVar19 = 0x00000010;
					iVar20 = 0x00000014;
					iVar21 = 0x00000077;
					break;
				
				case 0x00000004:
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000001;
					iVar3 = 0x00000000;
					iVar4 = 0x00000000;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0x00000000;
					iVar8 = 0x00000000;
					iVar9 = 0x00000003;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000001;
					iVar15 = 0x00000001;
					iVar16 = 0xFFFFFFFF;
					iVar17 = 0x00000008;
					iVar18 = 0x0000003C;
					iVar19 = 0x00000071;
					iVar20 = 0x00000013;
					iVar21 = 0x00000071;
					break;
				
				case 0x00000005:
					iVar0 = 0x0000000A;
					iVar1 = 0x00000002;
					iVar2 = 0x00000001;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar13 = 0x00000002;
					iVar14 = 0x00000001;
					iVar15 = 0x00000001;
					iVar16 = 0x00000002;
					iVar17 = 0x0000000B;
					iVar18 = 0x0000008A;
					iVar19 = 0x00000000;
					iVar20 = 0x00000001;
					iVar21 = 0x0000008A;
					break;
				
				case 0x00000006:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000003;
					iVar3 = 0x00000001;
					iVar4 = 0x00000000;
					iVar5 = 0x00000001;
					iVar6 = 0x00000003;
					iVar7 = 0x00000000;
					iVar8 = 0x00000002;
					iVar9 = 0x00000001;
					iVar10 = 0x00000001;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000000;
					iVar15 = 0x00000002;
					iVar16 = 0x00000001;
					iVar17 = 0x00000017;
					iVar18 = 0x00000040;
					iVar19 = 0x0000000D;
					iVar20 = 0x0000000D;
					iVar21 = 0x00000043;
					break;
				
				case 0x00000007:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0x00000000;
					iVar8 = 0x00000002;
					iVar9 = 0x00000002;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000001;
					iVar15 = 0x00000002;
					iVar16 = 0x00000001;
					iVar17 = 0x0000000B;
					iVar18 = 0x00000027;
					iVar19 = 0x0000006B;
					iVar20 = 0x00000000;
					iVar21 = 0x0000009C;
					break;
			}
			break;
		
		case 0x00000001:
			switch (uParam0->f_11.f_B)
			{
				case 0x00000000:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x00000000;
					iVar5 = 0x00000000;
					iVar6 = 0x00000000;
					iVar7 = 0x00000000;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000002;
					iVar13 = 0x00000001;
					iVar14 = 0x00000000;
					iVar15 = 0x00000000;
					iVar16 = 0xFFFFFFFF;
					iVar17 = 0x0000000E;
					iVar18 = 0x0000000B;
					iVar19 = 0x00000024;
					iVar20 = 0x00000000;
					iVar21 = 0x00000024;
					break;
				
				case 0x00000002:
					iVar0 = 0x00000000;
					iVar1 = 0x00000004;
					iVar2 = 0x00000000;
					iVar3 = 0x00000003;
					iVar4 = 0x00000000;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0x00000000;
					iVar8 = 0x00000001;
					iVar9 = 0x00000001;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000002;
					iVar15 = 0x00000000;
					iVar16 = 0x00000003;
					iVar17 = 0x0000000C;
					iVar18 = 0x00000018;
					iVar19 = 0x00000040;
					iVar20 = 0x00000000;
					iVar21 = 0x00000018;
					break;
				
				case 0x00000003:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x00000000;
					iVar5 = 0x00000000;
					iVar6 = 0x00000000;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0xFFFFFFFF;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000003;
					iVar14 = 0x00000002;
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000017;
					iVar18 = 0x00000078;
					iVar19 = 0x00000078;
					iVar20 = 0x00000078;
					iVar21 = 0x00000078;
					break;
				
				case 0x00000004:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000003;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000003;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000001;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000001;
					iVar15 = 0x00000002;
					iVar16 = 0x00000002;
					iVar17 = 0x00000003;
					iVar18 = 0x00000028;
					iVar19 = 0x0000002A;
					iVar20 = 0x00000007;
					iVar21 = 0x0000009C;
					break;
				
				case 0x00000005:
					iVar0 = 0x00000007;
					iVar1 = 0x00000000;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0x00000000;
					iVar4 = 0x00000001;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000001;
					iVar7 = 0x00000000;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000001;
					iVar14 = 0x00000002;
					iVar15 = 0x00000000;
					iVar16 = 0xFFFFFFFF;
					iVar17 = 0x00000016;
					iVar18 = 0x0000003E;
					iVar19 = 0x0000005B;
					iVar20 = 0x00000006;
					iVar21 = 0x0000009C;
					unk_0xDE00FFD6DD02A48E(uParam0->f_5, 0x00000001);
					break;
				
				case 0x00000006:
					iVar0 = 0x00000000;
					iVar1 = 0x00000001;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000001;
					iVar7 = 0x00000001;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000002;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar13 = 0x00000002;
					iVar14 = 0x00000001;
					iVar15 = 0x00000000;
					iVar16 = 0x00000001;
					iVar17 = 0x0000000B;
					iVar18 = 0x00000032;
					iVar19 = 0x00000078;
					iVar20 = 0x00000086;
					iVar21 = 0x0000009C;
					break;
				
				case 0x00000007:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000001;
					iVar3 = 0x00000001;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0x00000000;
					iVar6 = 0x00000000;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0x00000000;
					iVar9 = 0x00000001;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000003;
					iVar14 = 0x00000002;
					iVar15 = 0x00000000;
					iVar16 = 0x00000003;
					iVar17 = 0x00000008;
					iVar18 = 0x00000024;
					iVar19 = 0x00000019;
					iVar20 = 0x00000006;
					iVar21 = 0x0000009C;
					break;
			}
			break;
		
		case 0x00000002:
			switch (uParam0->f_11.f_B)
			{
				case 0x00000000:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000001;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000003;
					iVar14 = 0x00000002;
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000007;
					iVar18 = 0x00000040;
					iVar19 = 0x00000002;
					iVar20 = 0x00000006;
					iVar21 = 0x00000002;
					break;
				
				case 0x00000002:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000002;
					iVar3 = 0x00000001;
					iVar4 = 0x00000002;
					iVar5 = 0x00000000;
					iVar6 = 0x00000002;
					iVar7 = 0x00000000;
					iVar8 = 0x00000001;
					iVar9 = 0xFFFFFFFF;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar13 = 0x00000002;
					iVar14 = 0x00000002;
					iVar15 = 0x00000001;
					iVar16 = 0x00000003;
					iVar17 = 0x00000005;
					iVar18 = 0x00000034;
					iVar19 = 0x00000005;
					iVar20 = 0x0000001A;
					iVar21 = 0x0000006A;
					break;
				
				case 0x00000003:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0x00000000;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000002;
					iVar14 = 0x00000000;
					iVar15 = 0x00000000;
					iVar16 = 0x00000001;
					iVar17 = 0x0000000F;
					iVar18 = 0x00000048;
					iVar19 = 0x00000026;
					iVar20 = 0x0000002E;
					iVar21 = 0x0000009C;
					break;
				
				case 0x00000004:
					iVar0 = 0x00000000;
					iVar1 = 0x00000001;
					iVar2 = 0x00000001;
					iVar3 = 0x00000001;
					iVar4 = 0x00000000;
					iVar5 = 0x00000000;
					iVar6 = 0x00000000;
					iVar7 = 0x00000000;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar13 = 0x00000000;
					iVar14 = 0x00000000;
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x0000000A;
					iVar18 = 0x0000003E;
					iVar19 = 0x0000007E;
					iVar20 = 0x0000000F;
					iVar21 = 0x0000007E;
					break;
				
				case 0x00000005:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000001;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000002;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar13 = 0x00000001;
					iVar14 = 0x00000001;
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x0000000B;
					iVar18 = 0x0000001D;
					iVar19 = 0x00000009;
					iVar20 = 0x00000006;
					iVar21 = 0x00000009;
					break;
				
				case 0x00000006:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000000;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000003;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000001;
					iVar14 = 0x00000000;
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x0000000F;
					iVar18 = 0x0000008F;
					iVar19 = 0x00000008;
					iVar20 = 0x00000001;
					iVar21 = 0x0000008F;
					break;
				
				case 0x00000007:
					iVar0 = 0x00000000;
					iVar1 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0x00000002;
					iVar4 = 0x00000000;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0x00000001;
					iVar7 = 0x00000000;
					iVar8 = 0xFFFFFFFF;
					iVar9 = 0x00000000;
					iVar10 = 0xFFFFFFFF;
					iVar11 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar13 = 0x00000001;
					iVar14 = 0x00000000;
					iVar15 = 0x00000000;
					iVar16 = 0x00000003;
					iVar17 = 0x00000004;
					iVar18 = 0x0000000F;
					iVar19 = 0x00000078;
					iVar20 = 0x00000078;
					iVar21 = 0x00000078;
					break;
			}
			break;
		
		case 0x00000003:
			switch (uParam0->f_11.f_B)
			{
				case 0x00000000:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar9 = 0xFFFFFFFF;
					iVar13 = 0xFFFFFFFF;
					iVar14 = 0xFFFFFFFF;
					iVar15 = 0xFFFFFFFF;
					iVar16 = 0xFFFFFFFF;
					iVar18 = 0x0000008C;
					iVar19 = 0x0000007A;
					iVar20 = 0x0000003A;
					iVar21 = 0x00000011;
					break;
				
				case 0x00000002:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar9 = 0xFFFFFFFF;
					iVar13 = 0xFFFFFFFF;
					iVar14 = 0xFFFFFFFF;
					iVar15 = 0xFFFFFFFF;
					iVar16 = 0xFFFFFFFF;
					iVar18 = 0x00000095;
					iVar19 = 0x0000007A;
					iVar20 = 0x00000072;
					iVar21 = 0x0000005C;
					break;
				
				case 0x00000003:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0x00000001;
					iVar3 = 0x00000000;
					iVar4 = 0x00000000;
					iVar5 = 0x00000000;
					iVar6 = 0x00000000;
					iVar7 = 0x00000000;
					iVar8 = 0x00000000;
					iVar12 = 0x00000002;
					iVar9 = 0x00000000;
					iVar13 = 0xFFFFFFFF;
					iVar14 = 0xFFFFFFFF;
					iVar15 = 0xFFFFFFFF;
					iVar16 = 0xFFFFFFFF;
					iVar18 = 0x0000001B;
					iVar19 = 0x00000086;
					iVar20 = 0x0000001C;
					iVar21 = 0x0000007E;
					break;
				
				case 0x00000004:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x00000000;
					iVar5 = 0x00000000;
					iVar6 = 0x00000000;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar12 = 0x00000000;
					iVar9 = 0xFFFFFFFF;
					iVar13 = 0xFFFFFFFF;
					iVar14 = 0xFFFFFFFF;
					iVar15 = 0xFFFFFFFF;
					iVar16 = 0xFFFFFFFF;
					break;
				
				case 0x00000005:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar9 = 0xFFFFFFFF;
					iVar13 = 0xFFFFFFFF;
					iVar14 = 0xFFFFFFFF;
					iVar15 = 0xFFFFFFFF;
					iVar16 = 0xFFFFFFFF;
					iVar18 = 0x00000058;
					iVar19 = 0x00000028;
					iVar20 = 0x0000000E;
					iVar21 = 0x0000007B;
					break;
				
				case 0x00000006:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar9 = 0xFFFFFFFF;
					iVar13 = 0xFFFFFFFF;
					iVar14 = 0xFFFFFFFF;
					iVar15 = 0xFFFFFFFF;
					iVar16 = 0xFFFFFFFF;
					iVar18 = 0x00000037;
					iVar19 = 0x00000028;
					iVar20 = 0x0000000E;
					iVar21 = 0x00000000;
					break;
				
				case 0x00000007:
					iVar0 = 0xFFFFFFFF;
					iVar2 = 0xFFFFFFFF;
					iVar3 = 0xFFFFFFFF;
					iVar4 = 0xFFFFFFFF;
					iVar5 = 0xFFFFFFFF;
					iVar6 = 0xFFFFFFFF;
					iVar7 = 0xFFFFFFFF;
					iVar8 = 0xFFFFFFFF;
					iVar12 = 0xFFFFFFFF;
					iVar9 = 0xFFFFFFFF;
					iVar18 = 0x00000026;
					iVar19 = 0x00000079;
					iVar20 = 0x0000007B;
					iVar21 = 0x00000084;
					break;
			}
			break;
		
		case 0x00000004:
			switch (uParam0->f_11.f_B)
			{
				case 0x00000000:
					iVar18 = 0x0000008C;
					iVar19 = 0x0000007C;
					iVar20 = 0x00000086;
					iVar21 = 0x00000059;
					break;
				
				case 0x00000001:
					iVar18 = 0x00000087;
					iVar19 = 0x00000086;
					iVar20 = 0x00000086;
					iVar21 = 0x00000079;
					break;
				
				case 0x00000002:
					break;
				
				case 0x00000003:
					iVar18 = 0x00000000;
					iVar19 = 0x00000086;
					iVar20 = 0x00000086;
					iVar21 = 0x00000000;
					break;
				
				case 0x00000004:
					iVar18 = 0x00000039;
					iVar19 = 0x00000086;
					iVar20 = 0x00000086;
					iVar21 = 0x00000043;
					break;
				
				case 0x00000005:
					break;
				
				case 0x00000006:
					iVar18 = 0x0000008D;
					iVar19 = 0x00000086;
					iVar20 = 0x00000086;
					iVar21 = 0x0000007F;
					break;
				
				case 0x00000007:
					iVar18 = 0x00000027;
					iVar19 = 0x0000005F;
					iVar20 = 0x0000007C;
					iVar21 = 0x00000058;
					break;
			}
			break;
	}
	if (uParam0->f_11.f_B == 0x00000001)
	{
		iVar16 = 0x00000003;
	}
	iVar13 = (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000B) - 0x00000001);
	iVar14 = (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000C) - 0x00000001);
	iVar15 = (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000D) - 0x00000001);
	if (func_8(uParam0->f_5))
	{
		if (unk_0x40B3F576B41FA183(uParam0->f_5) > 0x00000000)
		{
			unk_0xF95FF0A179413A39(uParam0->f_5, 0x00000000);
			if (iVar0 != 0xFFFFFFFF)
			{
				if (iVar0 < unk_0x792D3ECFF774F662(uParam0->f_5))
				{
					unk_0xC6A6B4DDD6DC073A(uParam0->f_5, iVar0);
				}
			}
			if (iVar18 != 0xFFFFFFFF || iVar19 != 0xFFFFFFFF)
			{
				unk_0xC002508A277213DE(uParam0->f_5, iVar18, iVar19);
			}
			if (iVar20 != 0xFFFFFFFF || iVar21 != 0xFFFFFFFF)
			{
				unk_0x58A0C35FA7CA6162(uParam0->f_5, iVar20, iVar21);
			}
			if (iVar1 != 0xFFFFFFFF)
			{
				unk_0x8BF0BEF985EB6D43(uParam0->f_5, iVar1);
			}
			if (iVar2 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000000) > iVar2)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000000, iVar2, 0x00000000);
				}
			}
			if (iVar3 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000001) > iVar3)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000001, iVar3, 0x00000000);
				}
			}
			if (iVar4 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000002) > iVar4)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000002, iVar4, 0x00000000);
				}
			}
			if (iVar5 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000003) > iVar5)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000003, iVar5, 0x00000000);
				}
			}
			if (iVar6 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000004) > iVar6)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000004, iVar6, 0x00000000);
				}
			}
			if (iVar7 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000005) > iVar7)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000005, iVar7, 0x00000000);
				}
			}
			if (iVar8 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000006) > iVar8)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000006, iVar8, 0x00000000);
				}
			}
			if (iVar9 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000007) > iVar9)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000007, iVar9, 0x00000000);
				}
			}
			if (iVar10 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000008) > iVar10)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000008, iVar10, 0x00000000);
				}
			}
			if (iVar11 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000009) > iVar11)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000009, iVar11, 0x00000000);
				}
			}
			if (iVar12 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000A) > iVar12)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x0000000A, iVar12, 0x00000000);
				}
			}
			if (iVar13 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000B) > iVar13)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x0000000B, iVar13, 0x00000000);
				}
			}
			if (iVar14 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000C) > iVar14)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x0000000C, iVar14, 0x00000000);
				}
			}
			if (iVar15 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000D) > iVar15)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x0000000D, iVar15, 0x00000000);
				}
			}
			if (iVar16 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x0000000F) > iVar16)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x0000000F, iVar16, 0x00000000);
				}
			}
			if (iVar17 != 0xFFFFFFFF)
			{
				if (unk_0x461CAC843A21E4B6(uParam0->f_5, 0x00000017) > iVar17)
				{
					unk_0xEE6A1776A67F70C1(uParam0->f_5, 0x00000017, iVar17, 0x00000000);
				}
			}
			unk_0x73BEC6F1685574E6(uParam0->f_5, 0x00000012, 0x00000001);
			unk_0x73BEC6F1685574E6(uParam0->f_5, 0x00000011, 0x00000001);
			unk_0x73BEC6F1685574E6(uParam0->f_5, 0x00000016, 0x00000001);
		}
		if (unk_0x587993B327460A82(uParam0->f_5, 0x00000000))
		{
			unk_0xDE00FFD6DD02A48E(uParam0->f_5, 0x00000001);
		}
	}
}

void func_12(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 0x000000C6)
	{
		if (Global_12B4E)
		{
			Global_2537E2.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_1B416.f_1C58.f_E3[iParam0] = iParam1;
		}
		Global_95FE[iParam0] = iParam2;
		Global_96C5[iParam0] = 0x00000001;
		func_15(iParam0, bParam3, iParam4, 0x00000000);
		func_13(iParam0, iParam1);
	}
}

void func_13(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000C:
			if (iParam1 == 0x00000000)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000047:
			if (iParam1 != 0x00000001)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000041:
			if (iParam1 == 0x00000001)
			{
				func_14(0x00000000, 0x00000000);
			}
			else
			{
				func_14(0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000000, 0x00000000);
			}
			break;
		
		case 0x000000AE:
			if (iParam1 == 0x00000002)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 0x00000025:
			if (iParam1 == 0x00000001)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0x00000000);
			}
			break;
	}
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1AEC4, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1AEC4, iParam0);
	}
	Global_1AEC3 = 0x00000001;
}

bool func_15(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_193787 = 0x00000001;
	bVar0 = 0x00000000;
	Var3.f_4 = 0x00000003;
	Var3.f_8 = 0x00000003;
	Var3.f_40 = 0x00000003;
	Var3.f_4B = 0x00000003;
	Var3.f_5B = 0x00000003;
	func_19(&Var3, iParam0);
	if (func_16())
	{
		iVar1 = Global_1B416.f_1C58.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_2537E2.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_978C[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_193787 = 0x00000001;
	}
	else
	{
		bVar5 = 0x00000001;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0x00000000)
			{
				if (Global_95FE[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var3, 0x00000001) < 200f)
				{
					bVar5 = 0x00000000;
					Global_193787 = 0x00000001;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = 0x00000000;
						Global_193787 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 0x00000005))
		{
			bVar5 = 0x00000000;
			Global_193787 = 0x00000001;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0x00000000:
					if (iVar1 == 0x00000002)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0x00000000)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0x00000000);
						}
						if (Var3.f_4[iVar2] != 0x00000000)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 0x00000001);
						}
						Global_9C38[iParam0] = 0x00000001;
					}
					bVar0 = 0x00000001;
					break;
				
				case 0x00000001:
					if (iVar1 == 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000000 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x2404539258C5376B(&(Var3.f_22));
								Global_193787 = 0x00000001;
							}
						}
					}
					else if (iVar1 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
					}
					else if (iVar1 == 0x00000002)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
					}
					Global_9B71[iParam0] = 0x00000001;
					Global_9C38[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000002:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_2A));
					if (iVar6 != 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_32)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_32)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0x00000000)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000001)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000002)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_9C38[iParam0] = 0x00000001;
					Global_9B71[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000003:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0x00000000 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0x00000000)
							{
								unk_0xCADC8175C61F28E5(uVar4, 0x00000003);
								Global_9C38[iParam0] = 0x00000001;
								bVar0 = 0x00000001;
							}
							else if (iVar1 == 0x00000001)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 0x00000006 && unk_0xD92EF3526CDA283F(uVar4) != 0x00000007) && unk_0xD92EF3526CDA283F(uVar4) != 0x00000008)
								{
									unk_0xCADC8175C61F28E5(uVar4, 0x0000000A);
									Global_9C38[iParam0] = 0x00000001;
									bVar0 = 0x00000001;
								}
							}
							else if (iVar1 == 0x00000002)
							{
								bVar0 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000004:
					if (iVar1 == 0x00000000)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[0x00000001], Var3.f_4[0x00000000], 0x00000000);
						unk_0x0674E58A79778E99(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					else if (iVar1 == 0x00000001)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0x00000000], Var3.f_4[0x00000001], 0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					bVar0 = 0x00000001;
					break;
			}
			if (bVar0)
			{
				Global_96C5[iParam0] = 0x00000000;
				Global_978C[iParam0] = iVar1;
				if (!func_16())
				{
					if (!Global_99E1[iParam0])
					{
						Global_99E1[iParam0] = 0x00000001;
						Global_9AA8++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_16()
{
	if ((func_18() == 0xFFFFFFFF || func_18() == 0x000003E7) && !func_17() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_17()
{
	return Global_7831;
}

int func_18()
{
	return Global_7830;
}

int func_19(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uParam0->f_4[iVar0] = 0x00000000;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0x00000000;
		uParam0->f_4B[iVar0] = 0x00000000;
		uParam0->f_5B[iVar0] = 0x00000000;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0x00000000;
	uParam0->f_21 = 0x00000000;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000003:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000004:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000000:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 0x00000001:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 0x00000002:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			break;
		
		case 0x00000005:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 0x000000C4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			break;
		
		case 0x00000006:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 0x00000007:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000008:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000009:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 0x0000000C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 0x0000000E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "smboat", 32);
			break;
		
		case 0x0000000F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 0x00000010:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000011:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000012:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000013:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000014:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 0x00000015:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000016:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 0x00000017:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 0x00000018:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 0x00000019:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 0x0000001A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 0x0000001B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001D:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = joaat("dt1_05_build1_h");
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001E:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF9526184;
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001F:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF4E5BC6D;
			uParam0->f_4[0x00000001] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 0x00000020:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000021:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000022:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x00000023:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 0x00000024:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 0x00000025:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			break;
		
		case 0x00000026:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000027:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000028:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x00000029:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x0000002A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x0000002F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x00000030:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000001;
			break;
		
		case 0x00000031:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 0x00000032:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 0x00000037:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 0x00000033:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 0x00000034:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000035:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000036:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000038:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x00000039:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 0x0000003D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 0x0000003E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 0x0000003F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 0x00000040:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 0x00000041:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000042:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000043:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 0x00000044:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 0x00000045:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 0x00000046:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000047:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000048:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000049:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000004C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x00000069:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000006A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 0x0000006B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 0x0000006C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 0x0000006D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 0x0000006E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 0x0000006F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x00000070:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x0000004D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000000;
			break;
		
		case 0x0000004E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0x00000000;
			break;
		
		case 0x0000004F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 0x00000050:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 0x00000071:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 0x00000072:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 0x00000073:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 0x00000057:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 0x00000058:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 0x00000059:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 0x0000005A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 0x0000005B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 0x0000005E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 0x0000005F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0x00000000] = 0x00000000;
			uParam0->f_40[0x00000001] = 0x00000001;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000068:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 0x00000067:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 0x00000066:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 0x0000005C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x0000005D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x00000076:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x00000074:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000075:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000077:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000078:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x0000007A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000079:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AA:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AB:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 0x0000007D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x000000A4:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A6:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A7:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A8:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A9:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x0000007E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x0000007F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000080:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000081:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000082:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000083:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000084:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000085:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000086:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x000000B3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x000000AE:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0x00000000;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AF:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B0:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B1:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000B4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 0x000000B5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 0x00000087:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000088:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000089:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000090:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000091:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000092:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000093:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000094:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000095:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 0x00000096:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 0x00000097:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000098:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000099:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x000000AC:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 0x000000B6:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000001;
			break;
		
		case 0x000000B7:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 0x000000B8:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 0x000000B9:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 0x000000BB:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 0x000000BA:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 0x000000BC:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 0x00000051:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 0x00000052:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 0x00000053:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 0x00000054:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 0x00000055:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 0x00000056:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 0x000000BD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 0x000000BE:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 0x000000BF:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C0:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C1:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 0x00000061:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 0x00000062:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 0x00000063:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 0x00000064:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 0x00000065:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 0x000000C3:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 0x000000C5:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 0x0000009C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A1:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A2:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A0:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x00000060:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 0x00000001;
}

bool func_20(var uParam0)
{
	return (unk_0x83D8570832F172A7(*uParam0) && unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000000, 0xFFFFFFFF));
}

void func_21(var uParam0)
{
	*uParam0 = unk_0xB01F55A0FD1CFD49("COUNTDOWN");
	unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000000, 0xFFFFFFFF);
}

void func_22()
{
	if (!func_8(iLocal_365))
	{
		if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
		{
			iLocal_365 = unk_0x728870EB733D12A1();
			unk_0x73270B3C9CC833FD(iLocal_365, 0x00000001, 0x00000000);
		}
		else
		{
			unk_0x523BCC9DC80CD82F(joaat("gauntlet"));
			while (!unk_0xB87F6CF6E5628C67(joaat("gauntlet")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_365 = unk_0x122AAB0B1D6F55AD(joaat("gauntlet"), Local_47.f_1A[0x00000008 /*3*/] + vLocal_114, Local_47.f_36[0x00000008], 0x00000001, 0x00000001, 0x00000000);
			unk_0x71199B01895C6202(joaat("gauntlet"));
			unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_365, 0xFFFFFFFF);
		}
	}
	else
	{
		func_23(iLocal_365, Local_47.f_1A[0x00000008 /*3*/] + vLocal_114, Local_47.f_36[0x00000008], 0x00000000, 0x00000001);
		unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_365, 0xFFFFFFFF);
	}
	func_23(iLocal_365, Local_47.f_1A[0x00000008 /*3*/] + vLocal_114, Local_47.f_36[0x00000008], 0x00000000, 0x00000001);
	iLocal_212 = 0x00000000;
}

int func_23(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = 0x00000000;
	if (func_8(iParam0))
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

void func_24()
{
	vector3 vVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0.x, vVar0.y, (vVar0.z + 1f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		}
	}
}

int func_25(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0x00000000:
			if (!unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(0x000009C4);
				unk_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000001);
			}
			unk_0x9A82EEAF6CA12AEE(0.2f);
			if (func_52(iParam5, 0x00000004))
			{
				if (unk_0xAE317D00A5A55DF6("generic_failed", 0x00000000, 0xFFFFFFFF))
				{
					*uParam1 = 0x00000001;
				}
			}
			else
			{
				*uParam1 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			unk_0x7E60C62A7CE58FC8(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7ACC3006A87F8B39("STRING");
			unk_0x3A820E495A7BA3E5(0x00000006);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
			func_51(sParam3);
			unk_0x3CAEA85DA607305E(0x00000064);
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7A8BB56B212464AC();
			if (func_52(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			if (!func_52(iParam5, 0x00000001))
			{
				unk_0x5EEBDFEE72949D59(0x00000000);
			}
			func_50(&(uParam1->f_A), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			func_49(&(uParam1->f_A), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
			func_49(&(uParam1->f_A), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
			if (func_52(iParam5, 0x00000004))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "MissionFailedSounds", 0x00000001);
			}
			if (func_52(iParam5, 0x00000008))
			{
				switch (func_42())
				{
					case 0x00000000:
						unk_0x82A772610883F395("MinigameEndMichael", 0x000001F4, 0x00000000);
						break;
					
					case 0x00000001:
						unk_0x82A772610883F395("MinigameEndFranklin", 0x000001F4, 0x00000000);
						break;
					
					case 0x00000002:
						unk_0x82A772610883F395("MinigameEndTrevor", 0x000001F4, 0x00000000);
						break;
					}
			}
			if (!func_41(&(uParam1->f_1)))
			{
				func_40(&(uParam1->f_1));
			}
			if (func_52(iParam5, 0x00000002))
			{
				if (!func_41(&(uParam1->f_4)))
				{
					func_40(&(uParam1->f_4));
				}
			}
			*uParam1 = 0x00000002;
			break;
		
		case 0x00000002:
			unk_0xBD706C594F6DCD4A();
			if (func_52(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam6);
			func_38(uParam0, 0x00000000, 0x00000000);
			if (!func_52(iParam5, 0x00000010) && (func_36(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x757EF87A33649210()))
			{
				func_30(&(uParam1->f_A), 0x43480000, iParam6, bParam7, 0x00000001, 0x3F800000);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
				{
					uParam1->f_8A = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_52(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_29(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_52(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_29(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			if (func_52(iParam5, 0x00000002))
			{
				if (func_36(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_52(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_29(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			func_38(uParam0, 0x00000000, 0x00000000);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_8A || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(0x000009C4);
			}
			if (func_52(iParam5, 0x00000040) && uParam1->f_8A)
			{
				unk_0x53491B90E4FD0E56(0x000001F4);
			}
			func_26(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000000);
			}
			*uParam1 = 0x00000004;
			break;
		
		case 0x00000004:
			if (func_36(&(uParam1->f_4)) <= 0.1f)
			{
				func_38(uParam0, 0x00000000, 0x00000000);
			}
			else
			{
				*uParam4 = uParam1->f_8A;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_26(int iParam0)
{
	func_27(iParam0, 0f);
}

void func_27(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_28(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

float func_28(bool bParam0)
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

void func_29(int iParam0)
{
	if (*iParam0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_7B = 0x00000000;
}

void func_30(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_35(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_52(uParam0->f_1, 0x00000100) || (func_52(uParam0->f_1, 0x00002000) && unk_0xB8E3620B82AD47D7(0x00000002)))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(func_52(uParam0->f_1, 0x00001000));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0x00000000;
		iVar6 = 0x00000000;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0x00000000:
					bVar4 = 0x00000001;
					break;
				
				case 0x00000001:
					bVar4 = unk_0x91E3F625EF57450D(0x00000002);
					break;
				
				case 0x00000002:
					bVar4 = !unk_0x91E3F625EF57450D(0x00000002);
					break;
				
				default:
					bVar4 = 0x00000000;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0x00000000;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_34(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_51(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_52(uParam0->f_1, 0x00001000))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x1200CC973A2399C8(0x00000001);
								unk_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0x00000000 /*2*/].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(0x00000000);
								unk_0x3CAEA85DA607305E(0xFFFFFFFF);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_33(bParam4, func_33(func_52(uParam0->f_1, 0x00000020), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_32(&(uParam0->f_1), 0x00000100);
		func_31(&(uParam0->f_1), 0x00000080);
	}
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_35(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_32(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_36(var uParam0)
{
	if (func_41(uParam0))
	{
		if (func_37(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_28(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_37(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

int func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_41(&(uParam0->f_2)))
	{
		func_26(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(0x0000000E);
	if (!bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	else if (bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	if (bParam1)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
		{
			return 0x00000000;
		}
	}
	if (uParam0->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_36(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_39(&(uParam0->f_2));
		return 0x00000000;
	}
	return 0x00000001;
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

void func_40(int iParam0)
{
	if (!func_41(iParam0))
	{
		func_26(iParam0);
	}
}

bool func_41(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_42()
{
	func_43();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_43()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_47(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_46(unk_0x16F2683693E537C9());
			if (func_45(iVar0) && (!func_44(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_45(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_44(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_45(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_48(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_49(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	if (iParam5 == 0x00000001)
	{
		iVar0 = 0x00000001;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 0x00000008)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0x00000000;
		uParam0->f_2[iVar1 /*15*/].f_D = 0x00000000;
		uParam0->f_2[iVar1 /*15*/].f_E = 0x00000000;
		uParam0->f_2[iVar1 /*15*/].f_3[0x00000000 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0x00000000 /*2*/].f_1 = iParam3;
		if (iParam4 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_D), 0x00000000);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_50(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0x00000000;
	uParam0->f_7B = 0x00000000;
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 0x00000020);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_32(&(uParam0->f_1), 0x00000001);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_32(&(uParam0->f_1), 0x00001000);
		}
	}
	if (bParam4)
	{
		func_32(&(uParam0->f_1), 0x00002000);
	}
}

void func_51(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_53(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_58(0x00000000))
		{
			func_54(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_54(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_57())
		{
			func_56(0x00000001, 0x00000001);
		}
		else
		{
			func_56(0x00000000, 0x00000000);
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
	if (!func_55())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_55()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_58(0x00000000))
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

bool func_57()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_58(int iParam0)
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

bool func_59()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_60()
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0x00000000:
			func_149(0x00000002, sLocal_71, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			unk_0x8BC9595FD2792B5D("STREET_RACE_OUTRO");
			iLocal_107++;
			break;
		
		case 0x00000001:
			iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1954.776f, 3149.146f, 47.0701f, 4.9054f, -0.0416f, -158.4057f, 52.4461f, 0x00000000, 0x00000002);
			iLocal_362 = unk_0xAE06CCC36C49929C(0x019286A9, 1954.776f, 3150.146f, 47.0701f, 4.9054f, -0.0416f, -158.4057f, 52.4461f, 0x00000000, 0x00000002);
			unk_0xE3BB8E05FCEB3FBE(iLocal_361, 0x00000001);
			unk_0xF1E4C781086FABC1(iLocal_362, iLocal_361, 0x000007D0, 0x00000000, 0x00000001);
			switch (func_42())
			{
				case 0x00000000:
					unk_0x82A772610883F395("MinigameEndMichael", 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x82A772610883F395("MinigameEndFranklin", 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x82A772610883F395("MinigameEndTrevor", 0x00000000, 0x00000000);
					break;
			}
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			unk_0x2FB9A57162E54BAB(0f);
			func_137(0x00000001, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000000);
			unk_0x0185A047F396C3B9(0x00000000);
			unk_0x91F5B0244AAE6222(iLocal_362, "HAND_SHAKE", 0.3f);
			unk_0x1B901F542DF070CF(iLocal_363, unk_0x6937EA2286828455(iLocal_363, 0x00000000), Local_47.f_40, 0x000C0024, 0x00000000, 0x0000001C, 0xFFFFFFFF, 30f, 0x00000001, 2f);
			if (Local_209.f_7 == 0x00000001)
			{
				unk_0x523BCC9DC80CD82F(func_136());
			}
			iLocal_107++;
			break;
		
		case 0x00000002:
			if (unk_0x9F4FE516EAACCFC5(iLocal_362))
			{
				if (!unk_0xFA06B985B30FB0FC(iLocal_362))
				{
					unk_0x9A8DDC7C522F5BF5(iLocal_361, 0x00000000);
					iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1954.776f, 3149.146f, 47.0701f, 89.5011f, -0.0416f, -158.4057f, 30f, 0x00000000, 0x00000002);
					unk_0xF1E4C781086FABC1(iLocal_361, iLocal_362, 0x00000258, 0x00000001, 0x00000001);
					unk_0xDE0127155AF9E64F(iLocal_361, 1f);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0xE0C0351D5B931E37(unk_0x6937EA2286828455(iLocal_363, 0x00000000), 10f, 0x00000001, 0x00000000);
					switch (func_42())
					{
						case 0x00000000:
							unk_0x9A1335ECD7BD117F("MinigameEndMichael");
							break;
						
						case 0x00000001:
							unk_0x9A1335ECD7BD117F("MinigameEndFranklin");
							break;
						
						case 0x00000002:
							unk_0x9A1335ECD7BD117F("MinigameEndTrevor");
							break;
					}
					unk_0x82A772610883F395("MinigameTransitionIn", 0x00000000, 0x00000001);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
					unk_0x9A8DDC7C522F5BF5(iLocal_362, 0x00000000);
					iLocal_65 = 0x00000000;
					iLocal_107++;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0x9F4FE516EAACCFC5(iLocal_361))
			{
				if (!unk_0xFA06B985B30FB0FC(iLocal_361))
				{
					iVar0 = 0x00000000;
					while (iVar0 <= 0x00000007)
					{
						func_135(&(Local_119[iVar0 /*50*/].f_1));
						func_133(&(Local_119[iVar0 /*50*/]), 0x00000001);
						func_132(&(Local_119[iVar0 /*50*/].f_5), 0x00000001);
						iVar0++;
					}
					func_12(0x000000C5, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
					iVar0 = 0x00000000;
					while (iVar0 < Local_120)
					{
						func_133(&(Local_120[iVar0 /*50*/]), 0x00000001);
						iVar0++;
					}
				}
			}
			if (func_90(Local_209, &uLocal_371, &iLocal_948, &bLocal_1072))
			{
				if (!bLocal_1072)
				{
					if (Local_209.f_7 > 0x00000001)
					{
						iLocal_107 = 0x0000000A;
					}
					else
					{
						iLocal_366 = unk_0x122AAB0B1D6F55AD(func_136(), func_89(), func_88(), 0x00000001, 0x00000001, 0x00000000);
						unk_0x71199B01895C6202(func_136());
						if (Global_1B416.f_61EC == 0x00000004)
						{
							unk_0x446EA2500F021666(iLocal_366, 0x00000000);
							unk_0xC002508A277213DE(iLocal_366, 0x0000002C, 0x00000053);
							unk_0x58A0C35FA7CA6162(iLocal_366, 0x0000006F, 0x0000006F);
						}
						iLocal_107++;
					}
				}
				else
				{
					func_2(0x00000001, 0x00000000);
				}
			}
			break;
		
		case 0x00000004:
			unk_0x5CAFA5DD13658DFE(0x00000000);
			iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1971.382f, 3108.135f, 47.2013f, 89.4758f, 0.0478f, 53.1639f, 53.3742f, 0x00000000, 0x00000002);
			unk_0xE3BB8E05FCEB3FBE(iLocal_361, 0x00000001);
			iLocal_362 = unk_0xAE06CCC36C49929C(0x019286A9, 1971.382f, 3108.135f, 47.2013f, 0.4758f, 0.0478f, 53.1639f, 53.3742f, 0x00000000, 0x00000002);
			unk_0xF1E4C781086FABC1(iLocal_362, iLocal_361, 0x00000258, 0x00000001, 0x00000001);
			unk_0x9A1335ECD7BD117F("MinigameTransitionIn");
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
			unk_0xDE0127155AF9E64F(iLocal_361, 1f);
			unk_0x91F5B0244AAE6222(iLocal_361, "HAND_SHAKE", 0.3f);
			unk_0xDE0127155AF9E64F(iLocal_362, 1f);
			unk_0x91F5B0244AAE6222(iLocal_362, "HAND_SHAKE", 0.3f);
			func_23(iLocal_365, 1967.471f, 3124.583f, 46.0038f, 186.2056f, 0x00000001, 0x00000001);
			unk_0x132B85BCE016BCA0(unk_0x16F2683693E537C9(), iLocal_365, 1968.5f, 3113.2f, 45.9001f, 0x00000004, 2f, 0x000C0025, 1f, -1f, 0x00000001);
			unk_0x17EFA7496495F972();
			unk_0x82A772610883F395("MinigameTransitionOut", 0x00000000, 0x00000000);
			unk_0x536F1BE96C726C4B(func_87(), 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			iLocal_107++;
			break;
		
		case 0x00000005:
			if (unk_0x9F4FE516EAACCFC5(iLocal_362))
			{
				if (!unk_0xFA06B985B30FB0FC(iLocal_362))
				{
					unk_0x9A8DDC7C522F5BF5(iLocal_361, 0x00000000);
					iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1971.637f, 3108.429f, 47.201f, 0.1839f, 0.0478f, 40.5043f, 40f, 0x00000000, 0x00000002);
					unk_0xF1E4C781086FABC1(iLocal_361, iLocal_362, 0x00001388, 0x00000001, 0x00000001);
					unk_0x91F5B0244AAE6222(iLocal_361, "HAND_SHAKE", 1f);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_107++;
				}
			}
			break;
		
		case 0x00000006:
			if (SYSTEM::TIMERA() > 0x0000125C)
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004 || unk_0xA4FD7964FEE91ED8(0x00000001) == 0x00000004)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
				}
				iLocal_107++;
			}
			break;
		
		case 0x00000007:
			if (unk_0x9F4FE516EAACCFC5(iLocal_361))
			{
				if (!unk_0xFA06B985B30FB0FC(iLocal_361))
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					if (unk_0xA4FD7964FEE91ED8(0x00000000) != 0x00000004 && unk_0xA4FD7964FEE91ED8(0x00000001) != 0x00000004)
					{
						unk_0x2FB9A57162E54BAB(-69.3229f);
						unk_0xEF6276132B396452(-10.5361f, 0x3F800000);
					}
					func_137(0x00000000, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000000);
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_107++;
				}
			}
			break;
		
		case 0x00000008:
			unk_0x17EFA7496495F972();
			func_63(iLocal_366, 0x00000091);
			func_62();
			unk_0x8910D3D58E0132B8("STREET_RACE_OUTRO");
			func_352(0x00000001, 0x00000000, 0x00000001, 0x00000000);
			break;
		
		case 0x0000000A:
			unk_0x5CAFA5DD13658DFE(0x00000000);
			iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1953.31f, 3139.005f, 48.1762f, 89.5003f, -0.0032f, 52.2429f, 25.3742f, 0x00000000, 0x00000002);
			unk_0xE3BB8E05FCEB3FBE(iLocal_361, 0x00000001);
			iLocal_362 = unk_0xAE06CCC36C49929C(0x019286A9, 1953.31f, 3139.005f, 48.1762f, -7.3963f, -0.0058f, 52.1179f, 45f, 0x00000000, 0x00000002);
			unk_0xF1E4C781086FABC1(iLocal_362, iLocal_361, 0x00000320, 0x00000001, 0x00000001);
			unk_0x9A1335ECD7BD117F("MinigameTransitionIn");
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Short_Transition_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
			unk_0xDE0127155AF9E64F(iLocal_361, 1f);
			unk_0x91F5B0244AAE6222(iLocal_361, "HAND_SHAKE", 0.3f);
			unk_0xDE0127155AF9E64F(iLocal_362, 1f);
			unk_0x91F5B0244AAE6222(iLocal_362, "HAND_SHAKE", 0.3f);
			func_23(iLocal_365, 1948.257f, 3142.936f, 45.8642f, 51.7219f, 0x00000001, 0x00000001);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0x82A772610883F395("MinigameTransitionOut", 0x00000000, 0x00000000);
			unk_0x536F1BE96C726C4B(func_87(), 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_107++;
			break;
		
		case 0x0000000B:
			if (SYSTEM::TIMERA() > 0x000001F4)
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000001) == 0x00000004)
				{
					if (func_8(iLocal_365))
					{
						unk_0x15518BA9F6E90C9B(unk_0x134B62B726CEC8E6(iLocal_365));
					}
					unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
				}
				iLocal_107++;
			}
			break;
		
		case 0x0000000C:
			if (SYSTEM::TIMERA() > 0x00000316)
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				if (func_8(iLocal_365))
				{
					unk_0x15518BA9F6E90C9B(unk_0x134B62B726CEC8E6(iLocal_365));
				}
				func_137(0x00000000, 0x00000000, 0x00000001, 0x000007D0, 0x00000001, 0x00000000);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_107++;
			}
			break;
		
		case 0x0000000D:
			if (SYSTEM::TIMERA() > 0x000007D0)
			{
				unk_0x17EFA7496495F972();
				func_61();
				unk_0x8910D3D58E0132B8("STREET_RACE_OUTRO");
				func_352(0x00000001, 0x00000000, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_61()
{
	Global_1B413 = 0x00000000;
}

void func_62()
{
	Global_1B413 = 0x00000001;
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_69(iParam0))
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
	func_64(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_64(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_68(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_67(uParam1->f_42))
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
		func_66(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_65(iVar0 + 1));
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

int func_65(int iParam0)
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

int func_66(int iParam0, var uParam1, var uParam2)
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

int func_67(int iParam0)
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

void func_68(var uParam0)
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

int func_69(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_85(iParam0, 0x00000000, 0x00000000)) || func_85(iParam0, 0x00000001, 0x00000000)) || func_85(iParam0, 0x00000002, 0x00000000)) || func_84(iParam0) != 0x00000091) || func_83(iParam0)) || func_82(iParam0)) || func_81(iParam0)) || func_80(iParam0)) || !func_70(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_82(iParam0))
		{
		}
		if (func_82(iParam0))
		{
		}
		if (func_85(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_85(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_85(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_84(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_70(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_71(iParam0, 0x00000000))
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

int func_71(int iParam0, bool bParam1)
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
		if (!func_79())
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
		if ((((!func_78() && !func_77()) && !func_76()) && !func_75()) && !func_79())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_76())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_74(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_72(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_72(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_73())
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

int func_73()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_74(int iParam0)
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

int func_75()
{
	return 0x00000000;
}

int func_76()
{
	return 0x00000001;
}

int func_77()
{
	return 0x00000001;
}

int func_78()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_79()
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

int func_80(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_71(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_81(int iParam0)
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

int func_82(int iParam0)
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

int func_83(int iParam0)
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

int func_84(int iParam0)
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

int func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_86(iParam1, iVar0, &sVar1, &iVar2))
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

int func_86(int iParam0, int iParam1, char* sParam2, var uParam3)
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

Vector3 func_87()
{
	return 1967.042f, 3116.005f, 45.8901f;
}

float func_88()
{
	return 194.8257f;
}

Vector3 func_89()
{
	return 1964.038f, 3114.635f, 46.1319f;
}

int func_90(struct<13> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10)
{
	int iVar0;
	struct<2> Var1;
	char cVar2[16];
	
	switch (iLocal_65)
	{
		case 0x00000000:
			func_131(uParam8);
			func_128(iParam9, 0x00000001);
			iVar0 = 0x00000000;
			switch (Param0.f_7)
			{
				case 0x00000001:
					iVar0 = 0x00000003;
					break;
				
				case 0x00000002:
					iVar0 = 0x00000002;
					break;
				
				case 0x00000003:
					iVar0 = 0x00000001;
					break;
				
				default:
					iVar0 = 0x00000000;
					break;
			}
			StringCopy(&Var1, "CRACEP", 16);
			StringIntConCat(&Var1, Param0.f_7, 16);
			StringCopy(&cVar2, "CRACETRACK", 16);
			StringIntConCat(&cVar2, Global_1B416.f_61EC + 1, 16);
			func_127(uParam8, &Var1, &cVar2, 0x00000000);
			if (Param0.f_C != 0x00000000)
			{
				func_126(uParam8, 0x00000012, "CRACETIME", "", Param0.f_C, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_1B416.f_61EC.f_1 != 0x00000000)
			{
				func_126(uParam8, 0x00000012, "CRACEBTIME", "", Global_1B416.f_61EC.f_1, 0x00000000, 0x00000000, 0x00000000);
			}
			uParam8->f_231 = 0x00000001;
			if (Param0.f_7 <= 0x00000003)
			{
				func_125(uParam8, 0x00000001, "CRACERES", Param0.f_7, 0x00000009, 0x00000001, iVar0, 0x00000000);
			}
			else
			{
				func_125(uParam8, 0x00000000, "CRACERES", Param0.f_7, 0x00000009, 0x00000001, iVar0, 0x00000000);
			}
			SYSTEM::SETTIMERB(0x00000000);
			if (Param0.f_7 <= 0x00000001)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "RACE_PLACED", "HUD_AWARDS", 0x00000001);
			}
			iLocal_65 = 0x00000001;
			func_121(uParam8, 0x00000001, 0x00000000);
			uParam8->f_236 = 0x00000001;
			break;
		
		case 0x00000001:
			unk_0x3FC8DBCC154CA56B();
			func_96(uParam8, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
			func_95(iParam9);
			if (SYSTEM::TIMERB() > 0x000007D0)
			{
				if (unk_0x91E3F625EF57450D(0x00000002))
				{
					unk_0x5D80F91A16C40CDE();
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D8))
				{
					func_94(uParam8);
					iLocal_65 = 0x00000002;
					*uParam10 = 0x00000001;
				}
				else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7))
				{
					func_94(uParam8);
					iLocal_65 = 0x00000002;
					*uParam10 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			if (func_96(uParam8, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
			{
				func_91(uParam8);
				func_29(iParam9);
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_91(var uParam0)
{
	if (uParam0->f_1 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0x00000000;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0x00000000)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0x00000000;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(0x00000000);
		uParam0->f_234 = 0x00000000;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_93(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_92(0x00000000);
}

void func_92(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_93(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_94(var uParam0)
{
	uParam0->f_232 = 0x00000000;
	uParam0->f_231 = 0x00000000;
	uParam0->f_22E = uParam0->f_23C + 500;
}

void func_95(var uParam0)
{
	func_30(uParam0, 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
}

int func_96(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xF4CCC8CB6DE7F1AE() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = unk_0xF4CCC8CB6DE7F1AE();
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0x28072FDD60CE3A6E(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000001))
		{
			uParam0->f_23F = 0x00000001;
			return 0x00000001;
		}
		if (unk_0x946BFA82EB988C81(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			uParam0->f_23F = 0x00000001;
			return 0x00000001;
		}
	}
	if (!uParam0->f_234)
	{
		if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
		{
			unk_0x31A33F7BCB08CB80(0x00000001);
			uParam0->f_234 = 0x00000001;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
	}
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000013);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x00000013, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x000000AB, 0x00000001);
	func_53(0x00000000);
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (unk_0xBB16188FFCC4B1B5() || (unk_0x757EF87A33649210() && !unk_0x7BCE0E6DD4A1F749()))
		{
			unk_0x5D80F91A16C40CDE();
		}
	}
	Global_A3FD = 0x00000001;
	if (!uParam0->f_233)
	{
		switch (func_46(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
		{
			case 0x00000001:
				unk_0x82A772610883F395("SuccessFranklin", 0x000003E8, 0x00000000);
				break;
			
			case 0x00000002:
				unk_0x82A772610883F395("SuccessTrevor", 0x000003E8, 0x00000000);
				break;
			
			default:
				unk_0x82A772610883F395("SuccessMichael", 0x000003E8, 0x00000000);
				break;
		}
		uParam0->f_233 = 0x00000001;
	}
	if (uParam0->f_22E == 0x00000000)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 0x000005DC))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_120(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_120(25f)));
		if (uParam0->f_38 > 0x00000000)
		{
			uParam0->f_230 = (uParam0->f_230 + func_120((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_120(30f) - func_120(2f)));
		}
	}
	bVar0 = 0x00000001;
	while (bVar0)
	{
		func_92(0x00000001);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_99(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_98(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 0x0000014D))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0x00000000;
					uParam0->f_236 = 0x00000000;
					uParam0->f_23D = 0.75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_98(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0x00000000)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_OUT");
			unk_0x7E60D21B163E9D56();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 0x00000001;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 0x0000014D))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_98(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0xB8E3620B82AD47D7(0x00000002))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_97(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
					}
				}
			}
		}
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D8) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0x00000000) && unk_0x83D8570832F172A7(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_235 = 0x00000001;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 0x00001388))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x7E60D21B163E9D56();
					uParam0->f_235 = 0x00000000;
					uParam0->f_23D = 0.75f;
				}
				func_97(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0x00000000)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 0x00000001;
					uParam0->f_23D = 0.75f;
					unk_0x7E60C62A7CE58FC8(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x7E60D21B163E9D56();
				}
				uParam0->f_22F = func_98((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_98((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_98((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_98((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7))
					{
						uParam0->f_231 = 0x00000000;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 0x000003E8 && uParam0->f_221)
			{
				bVar0 = 0x00000000;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0x00000000);
		}
		else
		{
			if (!bVar0)
			{
				func_92(0x00000000);
			}
			return !bVar0;
		}
	}
	func_92(0x00000000);
	return 0x00000001;
}

void func_97(var uParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_34(unk_0xF59058FCB716F903(0x00000002, 0x000000D7, 0x00000001));
	func_51("ES_HELP");
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x3CAEA85DA607305E(0x000000D7);
	}
	unk_0x7E60D21B163E9D56();
	if (bParam1)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000001);
		func_34(unk_0xF59058FCB716F903(0x00000002, 0x000000D8, 0x00000001));
		func_51("ES_XPAND");
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x3CAEA85DA607305E(0x000000D8);
		}
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

float func_98(float fParam0, float fParam1, float fParam2)
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

void func_99(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_119() * 0.25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_51(&(uParam0->f_5));
				if (uParam0->f_22C == 0x00000004)
				{
					func_118(&(uParam0->f_D));
				}
				else
				{
					func_51(&(uParam0->f_D));
				}
				if (unk_0x8CD06866876216F2())
				{
					unk_0x3CAEA85DA607305E(0x00000096);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000064);
				}
				unk_0x1200CC973A2399C8(0x00000001);
				if (uParam0->f_22C == 0x00000004)
				{
					unk_0x3CAEA85DA607305E((uParam0->f_38 - 0x00000001));
				}
				else
				{
					unk_0x3CAEA85DA607305E(uParam0->f_38);
				}
				unk_0x1200CC973A2399C8(bParam2);
				if (uParam0->f_22C == 0x00000004 || uParam0->f_22C == 0x00000003)
				{
					unk_0x3CAEA85DA607305E(0x00000002);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000045);
				}
				unk_0x7E60D21B163E9D56();
				uParam0->f_2 = 0x00000001;
			}
			if ((uParam0->f_38 > 0x00000000 && !uParam0->f_3) && uParam0->f_23C > 0x00000258)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "TRANSITION_UP");
				unk_0x7C19E5E4784BD7CF(0.15f);
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
				uParam0->f_3 = 0x00000001;
			}
		}
		func_117();
		unk_0x6567AE843FADBA94(uParam0->f_1, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_120((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_119());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 0x00000004)
	{
		fVar7 = func_116(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x33D480CCE15C991A(0x00000000) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_116(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_119()) / 2.5f);
		if ((uParam0->f_22C == 0x00000001 || uParam0->f_22C == 0x00000000) && uParam0->f_22D != 0x00000000)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 0x00000005)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D7);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D8);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C8);
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 0x00002710) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0x00000000)
				{
					uParam0->f_23A = (uParam0->f_23A * 0xFFFFFFFF);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0x00000000)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0x00000000)
					{
						func_113((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
					else
					{
						uParam0->f_23A = 0x00000000;
						uParam0->f_239 = 0x00000001;
						uParam0->f_237 = 0x00000000;
						uParam0->f_231 = 0x00000000;
						uParam0->f_232 = 0x00000000;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0x00000000;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (unk_0x757EF87A33649210())
			{
				unk_0xBD706C594F6DCD4A();
			}
			if ((uParam0->f_4 != 0x00000000 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				unk_0x3584F71E5CA29322(0x00000007);
				unk_0x3584F71E5CA29322(0x00000008);
				unk_0x3584F71E5CA29322(0x00000009);
				unk_0x3584F71E5CA29322(0x00000006);
				unk_0x6567AE843FADBA94(uParam0->f_4, 0x000000FF, 0x000000FF, 0x000000FF, iVar0, 0x00000000);
			}
			if (uParam0->f_237)
			{
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000BC, 0x00000001);
				if (unk_0xD245978525608929(0x00000002, 0x000000BC))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_237 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_232 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 0x00000003;
					uParam0->f_23A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000BB, 0x00000001);
				if (unk_0xD245978525608929(0x00000002, 0x000000BB))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_237 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_232 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 0x00000004;
					uParam0->f_23A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
				unk_0x38C3A68D7861DCFD(0x00000002, 0x000000CA, 0x00000001);
				if (unk_0xD245978525608929(0x00000002, 0x000000CA))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_237 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_232 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 0x00000002;
					uParam0->f_23A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
			}
			else if (uParam0->f_232)
			{
				unk_0x3584F71E5CA29322(0x00000007);
				unk_0x3584F71E5CA29322(0x00000008);
				unk_0x3584F71E5CA29322(0x00000009);
				unk_0x3584F71E5CA29322(0x00000006);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008E, 0x00000001);
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7) || unk_0xD245978525608929(0x00000002, 0x000000C8))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
					uParam0->f_232 = 0x00000000;
					uParam0->f_231 = 0x00000000;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000000);
				}
			}
		}
	}
	unk_0xA402F6C87C08815C(0x00000001, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, iVar0);
	unk_0xF1F881BAAAFB43B1(fVar9, fVar10);
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, 0.4f);
	fVar1 = (fVar1 - func_120(6f));
	fVar1 = (fVar1 + (func_120(30f) - func_120((2f * 2f))));
	fVar11 = (fVar2 - func_120((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_98((fVar11 / (0.6f * func_120(25f))), 0f, 1f);
		func_117();
		unk_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_120((2f - 0.5f)) - 0.001388889f)), fVar6, func_112(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_120((2f * 0.3f)));
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_120((25f * 0.2f)));
	}
	iVar17 = 0x00000000;
	iVar17 = 0x00000000;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_98((fVar11 / (0.8f * func_120(25f))), 0f, 1f);
			func_109(uParam0, iVar17, (fVar1 + func_120(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_120(25f));
		if (uParam0->f_22C == 0x00000004)
		{
			if (iVar17 == (uParam0->f_240 - 0x00000001))
			{
				fVar1 = (fVar1 + func_120((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_120(2f));
					fVar12 = func_98((fVar11 / (0.6f * func_120(25f))), 0f, 1f);
					func_117();
					unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_120((2f * 0.5f))), fVar6, func_112(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
					fVar1 = (fVar1 + func_120((2f * 0.3f)));
					if (uParam0->f_38 > 0x00000000)
					{
						fVar1 = (fVar1 + func_120((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 0x00000004)
	{
		return;
	}
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_120((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_120(2f));
			fVar12 = func_98((fVar11 / (0.6f * func_120(25f))), 0f, 1f);
			func_117();
			unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_120((2f * 0.5f))), fVar6, func_112(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_120((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_119())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_98((fVar11 / (0.8f * func_120(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_102(0x00000007, 0x00000000, 0x00000001, &fVar18, &fVar19, 0x00000000);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0x00000000)
			{
				fVar20 = (fVar9 + ((0.119f / func_119()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_119()) / 2.5f));
				if (uParam0->f_22C == 0x00000001)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_119()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_119()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0x00000000)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 0x00000003)
			{
				unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
				unk_0xEEF67251E263A87F(0x00000001);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xEEF67251E263A87F(0x00000000);
			}
			unk_0xD3539A877EC25E86(1f, 0.4f);
			func_101(&(uParam0->f_226), fVar20, (fVar1 + func_120((2f * 2f))), 0x00000000, 0x00000000, 0x00000000);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(0x00000002);
			unk_0xD3539A877EC25E86(1f, 0.4f);
			unk_0xAAE406A7DA443B93(0x00000000);
			func_117();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xF1F881BAAAFB43B1(fVar20, fVar22);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0x00000000:
					unk_0x070005E852D4C0E9("PERCENTAGE");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_120((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0x6D99DF8263D35CE5(uParam0->f_22B);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_120((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_120((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_22A, 0x00000001);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_120((2f * 2f))), 0x00000000);
					break;
			}
			if (uParam0->f_22D != 0x00000000)
			{
				iVar25 = 0x000000FF;
				iVar26 = 0x000000FF;
				iVar27 = 0x000000FF;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 0x00000001:
						unk_0xA402F6C87C08815C(0x0000006B, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 0x00000003:
						unk_0xA402F6C87C08815C(0x0000006D, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 0x00000002:
						unk_0xA402F6C87C08815C(0x0000006C, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_100(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_120(10f)) + fVar29);
				if (uParam0->f_22C == 0xFFFFFFFF)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0x00000000);
			}
			fVar1 = (fVar1 + (func_120(30f) - 2f));
		}
	}
}

float func_100(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_101(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_117();
	if (bParam4)
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(sParam0);
	}
	else
	{
		unk_0x070005E852D4C0E9(sParam0);
	}
	unk_0xE0026608C37C7C41(fParam1, fParam2, 0x00000000);
}

int func_102(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_108(iParam0), 64);
	StringCopy(&cVar1, func_105(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_104())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_104())
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
		vVar7.x = (vVar7.x * (func_103(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_103(iParam0) / fVar4));
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

float func_103(int iParam0)
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

int func_104()
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

var func_105(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_107(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_106(&uVar1);
			}
		}
		else
		{
			return func_106(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_106(var uParam0)
{
	return uParam0;
}

struct<13> func_107(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_108(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_107(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_106(&uVar0);
		}
		else
		{
			return func_106(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_109(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	unk_0xF1F881BAAAFB43B1(fParam3, fParam4);
	unk_0xEEF67251E263A87F(0x00000001);
	unk_0xD3539A877EC25E86(1f, func_111(14f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_117();
	if (uParam0->f_213[iParam1])
	{
		unk_0x070005E852D4C0E9("STRING");
		unk_0xD06AC7C87A34A6AD(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		unk_0x070005E852D4C0E9(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 0x00000010 || uParam0->f_39[iParam1] == 0x00000011)
		{
			unk_0x6D99DF8263D35CE5(uParam0->f_1E9[iParam1]);
		}
	}
	unk_0xE0026608C37C7C41(fParam3, fParam2, 0x00000000);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			func_102(0x00000007, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_105(0x00000007, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_120(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000002:
			func_102(0x00000005, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_105(0x00000005, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_120(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000003:
			func_102(0x00000006, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_105(0x00000006, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_120(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0x00000000)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 0x0000000F)
	{
		unk_0xEEF67251E263A87F(0x00000001);
	}
	else
	{
		unk_0xEEF67251E263A87F(0x00000002);
	}
	unk_0xD3539A877EC25E86(1f, func_111(14f));
	if (uParam0->f_39[iParam1] == 0x00000005 || uParam0->f_39[iParam1] == 0x00000004)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_110(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_110(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0x00000001;
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_117();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 0x0000005D;
	iVar5 = 0x000000B6;
	iVar6 = 0x000000E5;
	if (iParam5 == 0x00000004)
	{
		iVar4 = 0x000000C2;
		iVar5 = 0x00000050;
		iVar6 = 0x00000050;
	}
	switch (iParam5)
	{
		case 0x00000004:
		case 0x00000005:
			unk_0xD3539A877EC25E86(1f, func_111(18f));
			unk_0x7BBAC160090910C3(0x00000004);
			if (iParam0 < 0x00000000)
			{
				unk_0xBBA442527B4BB1A6("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((0xFFFFFFFF * iParam0), 0x00000001);
				fVar1 = unk_0x79E367314AFBB5CA(0x00000000);
			}
			else
			{
				unk_0xBBA442527B4BB1A6("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 0x00000001);
				fVar1 = unk_0x79E367314AFBB5CA(0x00000000);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 0x000000FF, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 0x000000FF, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 0x000000FF, 0x00000000);
			unk_0xD3539A877EC25E86(1f, func_111(14f));
			break;
	}
	unk_0x3A820E495A7BA3E5(iVar0);
	switch (iParam5)
	{
		case 0x0000000B:
			unk_0x070005E852D4C0E9("PERCENTAGE");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 0x00000001:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("FO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 0x00000002:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("FO_TWO_NUM");
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x00000004:
		case 0x00000005:
			unk_0xD3539A877EC25E86(1f, func_111(18f));
		
		case 0x00000003:
			if (iParam0 < 0x00000000)
			{
				unk_0x070005E852D4C0E9("ESMINDOLLA");
				unk_0xCBD015EC7E4226BC((0xFFFFFFFF * iParam0), 0x00000001);
			}
			else
			{
				unk_0x070005E852D4C0E9("ESDOLLA");
				unk_0xCBD015EC7E4226BC(iParam0, 0x00000001);
			}
			break;
		
		case 0x00000006:
			unk_0x070005E852D4C0E9(sParam4);
			break;
		
		case 0x00000007:
			unk_0x070005E852D4C0E9("STRING");
			unk_0xD06AC7C87A34A6AD(sParam4);
			break;
		
		case 0x00000008:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x0000000E);
			break;
		
		case 0x00000009:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x00000006);
			break;
		
		case 0x0000000A:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x00000807);
			break;
		
		case 0x00000012:
			unk_0x7BBAC160090910C3(0x00000005);
			unk_0x070005E852D4C0E9("STRING");
			unk_0x164431059FF80580(iParam0, 0x00000807);
			break;
		
		case 0x0000000C:
			unk_0x070005E852D4C0E9("AHD_DIST");
			unk_0x6D99DF8263D35CE5(iParam0);
			break;
		
		case 0x0000000D:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x0000000F:
		case 0x0000000E:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam0);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x00000010:
			unk_0x070005E852D4C0E9(sParam4);
			unk_0x6D99DF8263D35CE5(iParam1);
			break;
		
		case 0x00000014:
			unk_0x070005E852D4C0E9(sParam4);
			break;
	}
	if (iParam5 != 0x00000011)
	{
		if (iParam5 == 0x00000004 || iParam5 == 0x00000005)
		{
			unk_0xE0026608C37C7C41((fParam2 - (0.00078125f * 4f)), fParam3, 0x00000000);
			unk_0xD3539A877EC25E86(1f, func_111(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0x00000000);
		}
	}
}

float func_111(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_112(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_113(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_115(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_114(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = bParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_114(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_115(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

float func_116(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(0x00000001) / 2f);
}

void func_117()
{
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(0x00000007);
	}
	unk_0x5DD950F92F816F03(0x00000000);
}

void func_118(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_119()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_120(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_121(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_C = iParam2;
	func_124(uParam0);
	func_123(uParam0);
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_226), "SPR_RESULT") || (unk_0x7F8A39872A07D2CE(&(uParam0->f_226), "") && uParam0->f_38 > 0x00000000))
	{
		uParam0->f_236 = 0x00000001;
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x0D3BE1DE0262A012("MPHud", 0x00000000);
	}
	if (uParam0->f_1 == 0x00000000)
	{
		unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
		unk_0x0D3BE1DE0262A012("MPLeaderboard", 0x00000000);
		unk_0x0D3BE1DE0262A012("MPHud", 0x00000000);
		uParam0->f_1 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0x00000000;
		uParam0->f_3 = 0x00000000;
	}
	uParam0->f_4 = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
	}
	else
	{
		if (((!unk_0x83D8570832F172A7(uParam0->f_1) || !unk_0x27117E2CDD4D67C3("CommonMenu")) || !unk_0x27117E2CDD4D67C3("MPLeaderboard")) || !unk_0x27117E2CDD4D67C3("MPHud"))
		{
			return 0x00000000;
		}
		if (uParam0->f_232)
		{
			if (!unk_0x83D8570832F172A7(uParam0->f_4))
			{
				return 0x00000000;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_122(uParam0);
		}
		else if (uParam0->f_38 != 0x00000000)
		{
			func_97(uParam0, 0x00000001);
		}
		else
		{
			func_97(uParam0, 0x00000000);
		}
	}
	Global_12C53 = 0x00000001;
	return 0x00000001;
}

void func_122(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "CLEAR_ALL");
	unk_0x7E60D21B163E9D56();
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000002);
	func_34(unk_0xF59058FCB716F903(0x00000002, 0x000000BC, 0x00000001));
	func_51("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000001);
	func_34(unk_0xF59058FCB716F903(0x00000002, 0x000000BB, 0x00000001));
	func_51("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_34(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001));
	func_51("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_123(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, func_111(16f));
	if (uParam0->f_1F == 0x00000000)
	{
		if (uParam0->f_1D)
		{
			unk_0xBBA442527B4BB1A6("STRING");
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_D));
			fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
		}
		else
		{
			unk_0xBBA442527B4BB1A6(&(uParam0->f_D));
			fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
		}
	}
	else
	{
		unk_0xBBA442527B4BB1A6("STRING");
		iVar1 = 0x00000000;
		iVar2 = 0x00000000;
		iVar3 = 0x00000000;
		iVar3 = 0x00000000;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0x00000000:
					unk_0x6D99DF8263D35CE5(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 0x00000001:
					unk_0x6B012227B3921E18(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 0x00000002:
					unk_0xD06AC7C87A34A6AD(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_124(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0x00000000;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0x00000000;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0x00000000;
	uParam0->f_233 = 0x00000000;
	uParam0->f_23C = 0x00000000;
	uParam0->f_234 = 0x00000000;
	uParam0->f_235 = 0x00000000;
	uParam0->f_236 = 0x00000000;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_23E = 0x00000000;
	uParam0->f_23F = 0x00000000;
	uParam0->f_23D = 1f;
}

void func_125(var uParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = uParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

void func_126(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_38 == 0x0000000D)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = uParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_127(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0x00000000;
}

void func_128(var uParam0, bool bParam1)
{
	func_50(uParam0, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
	func_49(uParam0, "CRACECONT", 0x00000002, 0x000000D7, 0x00000001, 0x00000001, 0x00000000);
	if (bParam1)
	{
		func_49(uParam0, "CRACERET", 0x00000002, 0x000000D8, 0x00000001, 0x00000001, 0x00000000);
	}
	func_130(uParam0, 0x00000001);
	func_129(uParam0, 0x00000001);
}

void func_129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 0x00000010);
	}
	else
	{
		func_31(&(uParam0->f_1), 0x00000010);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(&(uParam0->f_1), 0x00000400);
	}
	else
	{
		func_31(&(uParam0->f_1), 0x00000400);
	}
}

void func_131(var uParam0)
{
	func_124(uParam0);
	uParam0->f_23A = 0x00000000;
	uParam0->f_1F = 0x00000000;
	uParam0->f_38 = 0x00000000;
	uParam0->f_237 = 0x00000000;
	uParam0->f_239 = 0x00000000;
}

void func_132(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			if (unk_0x20D6474D5F4B9FC6(*iParam0))
			{
				unk_0xC55F2A0377488064(*iParam0);
			}
			unk_0x1BF8B16C32704027(*iParam0, -8f, 0x00000001);
			if (unk_0xD59B17D2DFF98E26(*iParam0))
			{
				unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
			}
		}
		if (bParam1)
		{
			unk_0xA954465BA6FDEFE2(iParam0);
		}
		else
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_133(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			if (!unk_0x405E212DDE472467(*iParam0, 0x00000000) && !unk_0x81A5359F25512A04(*iParam0))
			{
				if ((unk_0x3A0342D9BFBD378D(*iParam0) || unk_0xBDEB2DEEF1D23A18(*iParam0)) || unk_0x20906E1D6BDC7044(*iParam0))
				{
					unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
				}
				unk_0x1E9649458B15960F(*iParam0, 0x00000000);
			}
			if (!unk_0x405E212DDE472467(*iParam0, 0x00000000))
			{
				unk_0x20641932E5104B25(*iParam0, 0x00000001, 0x00000000);
			}
			if (unk_0xBFDE4EE64C4BF2D6(*iParam0, func_134()))
			{
				unk_0x0A94A109271BE75A(*iParam0);
			}
			if (!bParam1)
			{
				unk_0xFADC0A217229F6B5(*iParam0, 0x00000001);
			}
		}
		if (bParam1)
		{
			unk_0xEBA53F35D0085654(iParam0);
		}
		else
		{
			unk_0x6DAD7906B73F064D(iParam0);
		}
	}
}

int func_134()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_135(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_136()
{
	switch (Global_1B416.f_61EC)
	{
		case 0x00000000:
			return joaat("stalion2");
			break;
		
		case 0x00000001:
			return joaat("gauntlet2");
			break;
		
		case 0x00000002:
			return joaat("dominator2");
			break;
		
		case 0x00000003:
			return joaat("buffalo3");
			break;
		
		case 0x00000004:
			return joaat("marshall");
			break;
	}
	return joaat("buffalo3");
}

void func_137(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam4)
	{
		unk_0x5413873D3F67BF93(bParam0, 0x00000000);
		unk_0xB3A1B75CB59FEB56(bParam0, bParam2, iParam3, 0x00000001, 0x00000000, 0x00000000);
	}
	unk_0xA37A90C62806D848(0x00000001);
	func_140(bParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_138(bParam0);
	unk_0x8BCB70EB440DED83(!bParam0);
	unk_0xBFE31971E49FA500(!bParam0);
	if (func_8(unk_0x16F2683693E537C9()))
	{
		if (bParam5)
		{
			unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), bParam0);
		}
		else if (!bParam0)
		{
			unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
		}
	}
	if (!bParam1)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), !bParam0, 0x00000000);
	}
	else if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		func_139();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_58(0x00000000))
		{
			func_54(0x00000000);
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

void func_139()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_140(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_148(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_55())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_147(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_148(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_147(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_145(unk_0xD803B885F5E47A62())) && !func_142(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_141()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_145(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_141()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_142(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_143(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_143(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_144();
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

int func_144()
{
	return Global_1407E9;
}

int func_145(int iParam0)
{
	if (func_142(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_146())
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

bool func_146()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_147(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_148(int iParam0)
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

void func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_226(0x00000001);
		if (iParam0 <= Global_181DD)
		{
		}
		iVar1 = func_224(unk_0xBB0808A181D4745C(), 0x00000001);
		if (iVar1 != 0xFFFFFFFF && iVar1 != 0x0000005E)
		{
			Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1 = 0x00000000;
			iVar2 = func_222(iVar1);
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
			iVar4 = func_217(unk_0xBB0808A181D4745C(), 0x00000001);
			if (iVar4 != 0xFFFFFFFF)
			{
				Global_1B416.f_4889[iVar4 /*6*/].f_4 = 0x00000000;
				MemCopy(&uVar5, {func_216(iVar4)}, 0x00000004);
				unk_0x353729B0A07DC11A(&uVar5, 0x00000000, Global_181DD, iParam0);
			}
			else
			{
				iVar6 = func_215(&(Global_181B8.f_3));
				if (iVar6 > 0xFFFFFFFF)
				{
					Global_1B416.f_6195.f_4[iVar6] = 0x00000000;
				}
			}
		}
		Global_16AFA = iParam2;
		Global_181DD = iParam0;
		func_150(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_181DD)
	{
	}
}

void func_150(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_151(&Global_19AE3, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_151(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_42();
	uParam0->f_1 = func_204();
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
			func_162(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
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
		func_153(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_152(&(uParam0->f_BA4));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_152(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_153(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_161(iParam2, &iVar0, iParam3, iParam5))
	{
		func_154(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_154(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_154(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_156(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_155(iParam2))
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

int func_155(int iParam0)
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

void func_156(var uParam0, int iParam1, int iParam2)
{
	func_64(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_158(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_84(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_157(iParam1);
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

int func_157(int iParam0)
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

int func_158(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_159(iParam1, iParam2))
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

int func_159(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_45(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_160(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_160(int iParam0, var uParam1, int iParam2)
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

int func_161(int iParam0, var uParam1, int iParam2, int iParam3)
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
						if (func_85(*uParam1, func_42(), 0x00000001))
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

void func_162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_46(iParam0);
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
		if (func_45(iVar0))
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
				uParam1->f_3B = func_163(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_163(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_163(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_163(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_165(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_163(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_163(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_164(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_164(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_144();
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

int func_165(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_164(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_166(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
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
	
	iVar0 = func_46(iParam0);
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
	func_43();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_169(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
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
	
	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
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
		if (func_181(&iVar0))
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
			iVar3 = func_42();
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
	return !func_180(*uParam1, 0f, 0f, 0f, 0x00000000);
}

bool func_180(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_181(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_203())
		{
			*uParam0 = func_186(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_185(*uParam0) && !func_182(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_182(int iParam0)
{
	return func_183(iParam0, 0x00000000, 0x00000001);
}

int func_183(int iParam0, int iParam1, bool bParam2)
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
		if (func_18() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_163(func_184(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_184(int iParam0)
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

int func_185(int iParam0)
{
	return func_183(iParam0, 0x00000005, 0x00000001);
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
		if (iParam1 == 0x00000006 || iParam1 == func_202(iVar0))
		{
			if (!bParam3 || func_201(iVar0))
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
			return func_198(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_197())
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
	if (iParam0 != func_197())
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
	if (Global_184466 != func_197())
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
	if (iParam0 != func_197())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_197()
{
	return 0xFFFFFFFF;
}

Vector3 func_198(int iParam0)
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
			if (func_199() == 0x00000000)
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

int func_199()
{
	return func_200(unk_0xD803B885F5E47A62());
}

int func_200(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_201(int iParam0)
{
	return func_183(iParam0, 0x00000000, 0x00000000);
}

int func_202(int iParam0)
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

bool func_203()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_204()
{
	var uVar0;
	
	func_214(&uVar0, unk_0x4460E481B9E33ADA());
	func_213(&uVar0, unk_0x8D199E381D262EEF());
	func_212(&uVar0, unk_0xD8A54335F18763BA());
	func_207(&uVar0, unk_0x972A296334C9D57B());
	func_206(&uVar0, unk_0x118229AD063C3C1D());
	func_205(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_205(var uParam0, int iParam1)
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

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_211(*uParam0);
	iVar1 = func_209(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_208(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_208(int iParam0, int iParam1)
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

int func_209(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_210(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_210(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_211(int iParam0)
{
	return iParam0 & 0x0000000F;
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_215(char* sParam0)
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

struct<2> func_216(int iParam0)
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

int func_217(char* sParam0, int iParam1)
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
		func_218(iVar0, &sVar1);
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

void func_218(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_219(uParam1, "Abigail1", func_221(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_219(uParam1, "Abigail2", func_221(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_219(uParam1, "Barry1", func_221(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_219(uParam1, "Barry2", func_221(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_219(uParam1, "Barry3", func_221(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_219(uParam1, "Barry3A", func_221(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_219(uParam1, "Barry3C", func_221(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_219(uParam1, "Barry4", func_221(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_219(uParam1, "Dreyfuss1", func_221(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_219(uParam1, "Epsilon1", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_219(uParam1, "Epsilon2", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_219(uParam1, "Epsilon3", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_219(uParam1, "Epsilon4", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_219(uParam1, "Epsilon5", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_219(uParam1, "Epsilon6", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_219(uParam1, "Epsilon7", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_219(uParam1, "Epsilon8", func_221(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_219(uParam1, "Extreme1", func_221(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_219(uParam1, "Extreme2", func_221(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_219(uParam1, "Extreme3", func_221(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_219(uParam1, "Extreme4", func_221(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_219(uParam1, "Fanatic1", func_221(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_219(uParam1, "Fanatic2", func_221(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_219(uParam1, "Fanatic3", func_221(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_219(uParam1, "Hao1", func_221(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_219(uParam1, "Hunting1", func_221(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_219(uParam1, "Hunting2", func_221(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_219(uParam1, "Josh1", func_221(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_219(uParam1, "Josh2", func_221(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_219(uParam1, "Josh3", func_221(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_219(uParam1, "Josh4", func_221(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_219(uParam1, "Maude1", func_221(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_219(uParam1, "Minute1", func_221(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_219(uParam1, "Minute2", func_221(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_219(uParam1, "Minute3", func_221(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_219(uParam1, "MrsPhilips1", func_221(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_219(uParam1, "MrsPhilips2", func_221(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_219(uParam1, "Nigel1", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_219(uParam1, "Nigel1A", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_219(uParam1, "Nigel1B", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_219(uParam1, "Nigel1C", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_219(uParam1, "Nigel1D", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_219(uParam1, "Nigel2", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_219(uParam1, "Nigel3", func_221(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_219(uParam1, "Omega1", func_221(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_219(uParam1, "Omega2", func_221(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_219(uParam1, "Paparazzo1", func_221(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_219(uParam1, "Paparazzo2", func_221(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_219(uParam1, "Paparazzo3", func_221(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_219(uParam1, "Paparazzo3A", func_221(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_219(uParam1, "Paparazzo3B", func_221(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_219(uParam1, "Paparazzo4", func_221(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_219(uParam1, "Rampage1", func_221(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_219(uParam1, "Rampage3", func_221(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_219(uParam1, "Rampage4", func_221(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_219(uParam1, "Rampage5", func_221(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_219(uParam1, "Rampage2", func_221(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_220(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_219(uParam1, "TheLastOne", func_221(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_219(uParam1, "Tonya1", func_221(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_219(uParam1, "Tonya2", func_221(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_219(uParam1, "Tonya3", func_221(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_219(uParam1, "Tonya4", func_221(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_219(uParam1, "Tonya5", func_221(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_220(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_219(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_220(int iParam0)
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

struct<2> func_221(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_216(iParam0) };
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

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000045:
		case 0x00000046:
			return func_223(Global_1B416.f_2378.f_63.f_CD[0x0000000A]);
			break;
		
		case 0x0000004A:
		case 0x0000004B:
			return func_223(Global_1B416.f_2378.f_63.f_CD[0x00000008]);
			break;
		
		case 0x00000054:
		case 0x00000055:
			return func_223(Global_1B416.f_2378.f_63.f_CD[0x0000000B]);
			break;
		
		case 0x0000005A:
			return func_223(Global_1B416.f_2378.f_63.f_CD[0x00000007]);
			break;
		
		case 0x0000005D:
			return func_223(Global_1B416.f_2378.f_63.f_CD[0x00000009]);
			break;
	}
	return 0x00000000;
}

int func_223(int iParam0)
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

int func_224(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_225(iVar0, 0x00000001);
	if (iVar1 == 0xFFFFFFFF && !bParam1)
	{
	}
	return iVar1;
}

int func_225(int iParam0, bool bParam1)
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

void func_226(bool bParam0)
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

void func_227()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_107)
	{
		case 0x00000000:
			func_149(0x00000001, sLocal_70, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
			func_3(0x000001F4);
			unk_0xAE317D00A5A55DF6("HUD_321_GO", 0x00000000, 0xFFFFFFFF);
			func_260(&(Local_46.f_1), 0x00000008);
			func_260(&(Local_46.f_1), 0x00000004);
			func_260(&(Local_46.f_1), 0x00000002);
			func_260(&(Local_46.f_1), 0x00000001);
			func_259();
			uLocal_356 = func_258();
			func_257(&uLocal_217, 0x3E99999A, 0x40000000);
			if (Global_1B416.f_61EC.f_2 < 0x00000002)
			{
				func_256("FM_IHELP_SLP", 0xFFFFFFFF);
				Global_1B416.f_61EC.f_2++;
			}
			iLocal_107++;
			break;
		
		case 0x00000001:
			unk_0xEF45C43067063F18(Local_46, 0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000064, 0x00000000);
			if (func_250(&Local_46, 0x00000001, 0x00000000, 0x00000001, 0x00000003, 0x00000001, 0x00000000, 0x00000000))
			{
				unk_0xE96F19797E59AB06();
				func_249(&Local_46);
				iLocal_110 = unk_0x1C0640BA9A7327B3();
				iLocal_107++;
			}
			if (!Local_46.f_5)
			{
				if (func_248(Local_46.f_1, 0x00000008))
				{
					Local_46.f_5 = 0x00000001;
					if (func_8(iLocal_365))
					{
						unk_0x15518BA9F6E90C9B(unk_0x134B62B726CEC8E6(iLocal_365));
					}
					func_246(&Local_210, 0x00000000, 0x00000001, 0x000007D0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0x5CAFA5DD13658DFE(0x00000000);
					if (func_8(unk_0x728870EB733D12A1()))
					{
						unk_0xE32750CAC756824F(unk_0x728870EB733D12A1(), 0x00000000);
					}
					unk_0x8BCB70EB440DED83(0x00000001);
					unk_0xBFE31971E49FA500(0x00000001);
					unk_0x8910D3D58E0132B8("RACE_INTRO_GENERIC");
					unk_0xC0FB48F966BB7D11(0x00000001);
					Local_46.f_7 = unk_0x1C0640BA9A7327B3();
					Local_209.f_A = Local_46.f_7;
					unk_0x8BC9595FD2792B5D("STREET_RACE_DURING_RACE");
					iVar0 = 0x00000000;
					while (iVar0 <= 0x00000007)
					{
						Local_119[iVar0 /*50*/].f_2B = 0x00000001;
						unk_0x2E1E5367A885F9B7(Local_119[iVar0 /*50*/].f_5, "STREET_RACE_NPC_GENERAL", 0x00000000);
						iVar0++;
					}
				}
				else if (SYSTEM::TIMERA() > 0x00000AF0 && iLocal_111 == 0x00000005)
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000001) == 0x00000004)
					{
						if (!func_245(0x00000002, &iLocal_106))
						{
							if (func_8(iLocal_365))
							{
								unk_0x15518BA9F6E90C9B(unk_0x134B62B726CEC8E6(iLocal_365));
							}
							unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
							func_244(0x00000002, &iLocal_106);
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			iVar1 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000007)
			{
				if (Local_119[iVar0 /*50*/].f_11.f_D)
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iVar1 == 0x00000008)
			{
				if (iLocal_112 == 0x00000000)
				{
					iLocal_112 = unk_0x1C0640BA9A7327B3();
				}
			}
			if (Local_209.f_D)
			{
				Local_46.f_6 = 0x00000001;
				Local_209.f_7 = Local_209.f_6;
				func_243(&Local_209);
				iLocal_107++;
			}
			if (iLocal_112 != 0x00000000 && unk_0x1C0640BA9A7327B3() > iLocal_112 + 30000)
			{
				func_242(0x00000003);
				sLocal_113 = "CRACEFAIL1";
			}
			if (func_241(unk_0x16F2683693E537C9()))
			{
				if (iLocal_369 < 0x00000000)
				{
					iLocal_369 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x000009C4, 0x00001388));
				}
				else if (unk_0x1C0640BA9A7327B3() > iLocal_369)
				{
					unk_0xCEAA091B490F8407(iLocal_370, "DISTANT_RACERS", Local_119[func_238() /*50*/].f_5, "ROAD_RACE_SOUNDSET", 0x00000000, 0x00000000);
					iLocal_369 = 0xFFFFFFFF;
				}
			}
			else if (iLocal_369 > 0x00000000)
			{
				iLocal_369 = 0xFFFFFFFF;
			}
			func_231(Local_209);
			func_228();
			break;
		
		case 0x00000003:
			unk_0x8910D3D58E0132B8("STREET_RACE_DURING_RACE");
			func_242(0x00000002);
			break;
	}
}

void func_228()
{
	if (Local_46.f_5 && !Local_46.f_6)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE))
		{
			if (unk_0x1C0640BA9A7327B3() > iLocal_110 + 500)
			{
				func_230(((unk_0x1C0640BA9A7327B3() - iLocal_110) - 0x000001F4), 0x00000BB8, "CRACEQUIT", 0x00000006, 0x00000000, 0x0000000A, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
				if (unk_0x1C0640BA9A7327B3() > iLocal_110 + 3500)
				{
					func_229("CRACEFAIL1");
				}
			}
		}
		else
		{
			iLocal_110 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_229(char* sParam0)
{
	func_242(0x00000003);
	sLocal_113 = sParam0;
}

void func_230(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_115(0x00000000, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_114(0x00000000, iVar0);
		Global_150976.f_46F[iVar0] = iParam0;
		Global_150976.f_46F.f_B[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = iParam3;
		Global_150976.f_46F.f_B7[iVar0] = iParam4;
		Global_150976.f_46F.f_D8[iVar0] = iParam5;
		Global_150976.f_46F.f_E3[iVar0 /*3*/] = fParam6;
		Global_150976.f_46F.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_150976.f_46F.f_102[iVar0] = iParam8;
		Global_150976.f_46F.f_10D[iVar0] = iParam9;
		Global_150976.f_46F.f_138[iVar0] = iParam10;
		Global_150976.f_46F.f_143[iVar0] = iParam11;
		Global_150976.f_46F.f_14E[iVar0] = iParam12;
		Global_150976.f_46F.f_159[iVar0] = iParam13;
		Global_150976.f_46A = 0x00000001;
		Global_150976.f_46F.f_164[iVar0] = iParam14;
		Global_150976.f_46F.f_16F[iVar0] = iParam15;
		Global_150976.f_46F.f_17A[iVar0] = iParam16;
		Global_150976.f_46F.f_185[iVar0] = iParam17;
		Global_150976.f_46F.f_190[iVar0] = iParam18;
		Global_150976.f_46F.f_19B[iVar0] = iParam19;
		Global_150976.f_46F.f_1A6[iVar0] = iParam20;
		Global_150976.f_46F.f_1B1[iVar0] = iParam21;
		Global_150976.f_46F.f_1BC[iVar0] = iParam22;
		Global_150976.f_46F.f_1C7[iVar0] = iParam23;
		Global_150976.f_46F.f_1D2[iVar0] = iParam24;
		Global_150976.f_46F.f_CD[iVar0] = iParam25;
		Global_150976.f_46F.f_1DD[iVar0] = iParam26;
		Global_150976.f_46F.f_1E8[iVar0] = iParam27;
		Global_150976.f_46F.f_1F3[iVar0] = iParam28;
		Global_150976.f_46F.f_1FE[iVar0] = iParam29;
		Global_150976.f_46F.f_209[iVar0] = iParam30;
		Global_150976.f_46F.f_214[iVar0] = iParam31;
		Global_150976.f_46F.f_21F[iVar0] = iParam32;
		Global_150976.f_46F.f_22A[iVar0] = iParam33;
	}
}

void func_231(struct<5> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (func_237(unk_0x16F2683693E537C9()))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000110, 0x00000001);
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x9414396734E14897(Local_47.f_40, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &iVar0);
			unk_0xEF8F639897C675D5(Local_47.f_40, iVar0, &vVar1);
			if (!unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000))
			{
				iLocal_61 = 0x00000001;
				iLocal_64 = 0x00000003;
			}
			if (!func_236("CRACESTUCK"))
			{
				if (unk_0x70EED0761B82965E(unk_0x728870EB733D12A1()))
				{
					func_235("CRACESTUCK");
					iLocal_62 = unk_0x1C0640BA9A7327B3() + 1000;
				}
				if (((unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000002, 0x00003A98) || unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00002710)) || unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001, 0x00000BB8))
				{
					func_235("CRACESTUCK");
					iLocal_62 = unk_0x1C0640BA9A7327B3() + 1000;
				}
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar1) > 900f)
				{
					func_235("CRACESTUCK");
					iLocal_62 = unk_0x1C0640BA9A7327B3() + 1000;
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_62)
			{
				if (((((!unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) && !unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000002, 0x00003A98)) && !unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003, 0x00007530)) && !unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00002710)) && !unk_0x7B5606C651AB51B5(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001, 0x00000BB8)) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vVar1) < 400f)
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
		}
	}
	if ((unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B) || unk_0x7FEE810EE9E768EB(0x00000000, 0x0000004B)) || iLocal_61 == 0x00000001)
	{
		switch (iLocal_64)
		{
			case 0x00000000:
				iLocal_63 = unk_0x1C0640BA9A7327B3();
				iLocal_64 = 0x00000001;
				break;
			
			case 0x00000001:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_63) > 0x000001F4)
				{
					iLocal_63 = unk_0x1C0640BA9A7327B3();
					iLocal_64 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				func_230((unk_0x1C0640BA9A7327B3() - iLocal_63), 0x000005DC, "RACES_RMETER", 0x00000006, 0x00000000, 0x0000000A, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
				if ((unk_0x1C0640BA9A7327B3() - iLocal_63) >= 0x000005DC)
				{
					unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
					iLocal_64 = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
				{
					if (Param0.f_4 > 0x00000000)
					{
						vVar6 = { Local_47[(Param0.f_4 - 0x00000001) /*3*/] };
					}
					else
					{
						vVar6 = { Local_47[0x00000005 /*3*/] };
					}
					unk_0x9414396734E14897(Local_47.f_40, vVar6, &iVar2);
					iVar3 = iVar2 + 1;
					unk_0x51FE1B68F2818389(Local_47.f_40, &iVar7);
					if (iVar3 >= iVar7)
					{
						iVar3 = 0x00000000;
					}
					unk_0xEF8F639897C675D5(Local_47.f_40, iVar2, &vVar4);
					unk_0xEF8F639897C675D5(Local_47.f_40, iVar3, &vVar5);
					if (!unk_0x558ADED8B93EA0F6(vVar4, 5f) || func_234(unk_0x728870EB733D12A1(), vVar4, 0x00000001) < 5f)
					{
						func_233(0x000001F4);
						func_23(unk_0x728870EB733D12A1(), vVar4, func_232(vVar4, vVar5), 0x00000000, 0x00000001);
						unk_0x51B954DAB1BCAF73(unk_0x728870EB733D12A1());
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0xFFFFFFFF);
						}
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x2FB9A57162E54BAB(0f);
						if (func_236("CRACESTUCK"))
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						func_3(0x000001F4);
						iLocal_64 = 0x00000004;
					}
				}
				break;
			
			case 0x00000004:
				if (!unk_0x06F8112AA79C53D9(0x00000000, 0x0000004B) && !unk_0x7FEE810EE9E768EB(0x00000000, 0x0000004B))
				{
					unk_0xEAB026E686C0D991(0x00000000, 0x0000004B, 0x00000001);
					iLocal_63 = 0xFFFFFFFF;
					iLocal_61 = 0x00000000;
					iLocal_64 = 0x00000000;
				}
				break;
		}
	}
	else
	{
		iLocal_63 = 0xFFFFFFFF;
		iLocal_61 = 0x00000000;
		iLocal_64 = 0x00000000;
	}
}

float func_232(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_233(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if (!unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(iParam0);
			while (!unk_0x757EF87A33649210())
			{
				unk_0x6A36BC55C7F6D023(0f);
				unk_0xD60411959D5D930B(0f);
				unk_0x1386EF28F7C0195C(0f, 0f);
				SYSTEM::WAIT(0x00000000);
			}
		}
	}
}

float func_234(int iParam0, vector3 vParam1, bool bParam2)
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

void func_235(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_236(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_237(int iParam0)
{
	if (func_8(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_238()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000007)
	{
		if (func_240(Local_119[iVar0 /*50*/].f_5))
		{
			fVar1 = func_239(unk_0x16F2683693E537C9(), Local_119[iVar0 /*50*/].f_5, 0x00000001);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

float func_239(int iParam0, int iParam1, bool bParam2)
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

int func_240(int iParam0)
{
	if (func_8(iParam0))
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

int func_241(int iParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_242(int iParam0)
{
	iLocal_107 = 0x00000000;
	iLocal_212 = iParam0;
}

void func_243(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_E))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_E));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_F))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_F));
	}
	if (uParam0->f_10 != 0x00000000)
	{
		unk_0xE223EB8FE6F8CC15(uParam0->f_10);
	}
	if (uParam0->f_11 != 0x00000000)
	{
		unk_0xE223EB8FE6F8CC15(uParam0->f_11);
	}
}

void func_244(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam1, iParam0);
}

bool func_245(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam1, iParam0);
}

void func_246(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 0x00000001)
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()), 0x00000040);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), !bParam1, 0x00000000);
	}
	if (bParam7)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xE731059548189243(unk_0x16F2683693E537C9(), 0x00000001);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 0x00000001, 0x00000000, 0x00000000);
	}
	if (bParam1)
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	else
	{
		if (unk_0x9F4FE516EAACCFC5(uParam0->f_4))
		{
			if (unk_0xFBB4F23D534EB790(uParam0->f_4))
			{
				unk_0xE3BB8E05FCEB3FBE(uParam0->f_4, 0x00000000);
			}
			unk_0x9A8DDC7C522F5BF5(uParam0->f_4, 0x00000001);
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
		}
		iVar0 = unk_0x728870EB733D12A1();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			unk_0x4A4806F9D471E491(iVar0, 0x00000001, 0x00000000);
		}
		unk_0x42740B44BA8D7B43("TIME_LAPSE");
		if (unk_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
		{
			unk_0x55D0A2DB35045A35(uParam0->f_A);
			unk_0x42740B44BA8D7B43("TIME_LAPSE");
			unk_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
		}
	}
	func_140(bParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_247();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x71592C07333285FE(uParam0->f_7, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0x71592C07333285FE(uParam0->f_8, 0x00000000, 0x00000000);
		}
	}
	if (!bParam1)
	{
		if (unk_0x757EF87A33649210())
		{
			unk_0x82E51BCA72537B6C(0x000000FA);
		}
	}
	if (!bParam1)
	{
		if (Global_1B416.f_7FE8.f_12C1 != 0xFFFFFFF1)
		{
			Global_1B416.f_7FE8.f_12C1 = func_204();
		}
	}
}

void func_247()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000023)
	{
		unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

bool func_248(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_249(int iParam0)
{
	unk_0xE17FDF9E3068281B(iParam0);
	unk_0x8C26F31DFF77D124();
}

int func_250(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	if (bParam7)
	{
		func_255(&(iParam0->f_2), 0x00000001);
	}
	if (!func_41(&(iParam0->f_2)))
	{
		func_26(&(iParam0->f_2));
	}
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	unk_0xEF45C43067063F18(*iParam0, 0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000064, 0x00000000);
	if (iParam4 > 0x00000003)
	{
		iParam4 = 0x00000003;
	}
	else if (iParam4 < 0x00000000)
	{
		iParam4 = 0x00000000;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_41(&(iParam0->f_2)))
		{
			if (func_37(&(iParam0->f_2)))
			{
				fVar3 = iParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_28(0x00000001) - iParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_39(&(iParam0->f_2));
					if (func_248(iParam0->f_1, 0x00000001))
					{
						func_253(&(iParam0->f_1), 0x00000008);
						unk_0xA402F6C87C08815C(0x00000012, &iVar5, &iVar6, &iVar7, &uVar8);
						unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
						func_51("CNTDWN_GO");
						unk_0x3CAEA85DA607305E(iVar5);
						unk_0x3CAEA85DA607305E(iVar6);
						unk_0x3CAEA85DA607305E(iVar7);
						unk_0x1200CC973A2399C8(0x00000001);
						unk_0x7E60D21B163E9D56();
						return 0x00000001;
					}
					func_26(&(iParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = iParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_36(&(iParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = 0x00000000;
	if (!func_248(iParam0->f_1, 0x00000008))
	{
		if (iVar9 >= 0xFFFFFFFD && !func_248(iParam0->f_1, 0x00000001))
		{
			func_253(&(iParam0->f_1), 0x00000001);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_252(iParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFE && !func_248(iParam0->f_1, 0x00000002))
		{
			func_253(&(iParam0->f_1), 0x00000002);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_252(iParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFF && !func_248(iParam0->f_1, 0x00000004))
		{
			func_253(&(iParam0->f_1), 0x00000004);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar0, sVar2, 0x00000001);
			func_252(iParam0, iVar9);
		}
		else if (iVar9 >= 0xFFFFFFFF && !func_248(iParam0->f_1, 0x00000010))
		{
			if (unk_0x755FF954DAE327E1((func_36(&(iParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_253(&(iParam0->f_1), 0x00000010);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar1, sVar2, 0x00000001);
				}
			}
		}
		else if (iVar9 >= 0x00000000 && !func_248(iParam0->f_1, 0x00000008))
		{
			if (!bParam5 && !bParam6)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, sVar1, sVar2, 0x00000001);
			}
			func_253(&(iParam0->f_1), 0x00000008);
			unk_0xA402F6C87C08815C(0x00000012, &iVar11, &iVar12, &iVar13, &uVar14);
			unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
			func_51("CNTDWN_GO");
			unk_0x3CAEA85DA607305E(iVar11);
			unk_0x3CAEA85DA607305E(iVar12);
			unk_0x3CAEA85DA607305E(iVar13);
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7E60D21B163E9D56();
			if (!bParam1)
			{
				bVar10 = 0x00000001;
			}
		}
	}
	else if (iVar9 == 0x00000001)
	{
		bVar10 = 0x00000001;
	}
	if ((iParam2 && func_251()) || iVar4 > 0x00000005)
	{
		bVar10 = 0x00000001;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			iParam0->f_1 = 0x00000000;
			func_39(&(iParam0->f_2));
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_251()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000012) || unk_0x06F8112AA79C53D9(0x00000002, 0x00000012))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_252(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MESSAGE");
	unk_0x3A820E495A7BA3E5(0xFFFFFFFF);
	unk_0x7ACC3006A87F8B39("NUMBER");
	unk_0x6D99DF8263D35CE5(unk_0x51D1D19912234EA0(iParam1));
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
}

void func_253(var uParam0, int iParam1)
{
	func_254(uParam0, iParam1);
}

void func_254(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_255(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(iParam0, 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(iParam0, 0x00000004);
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004))
	{
	}
}

void func_256(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_257(var uParam0, int iParam1, int iParam2)
{
	if (func_41(&(uParam0->f_1)))
	{
		func_39(&(uParam0->f_1));
	}
	if (func_41(&(uParam0->f_4)))
	{
		func_39(&(uParam0->f_4));
	}
	func_29(&(uParam0->f_A));
	uParam0->f_86 = iParam1;
	uParam0->f_87 = iParam2;
	uParam0->f_89 = 0x00000001;
	uParam0->f_88 = 0x00000000;
	*uParam0 = 0x00000000;
}

int func_258()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_259()
{
	iLocal_370 = unk_0xD68EA767274B7444();
	iLocal_369 = 0xFFFFFFFF;
}

void func_260(var uParam0, int iParam1)
{
	func_261(uParam0, iParam1);
}

void func_261(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_262()
{
	int iVar0;
	
	switch (iLocal_107)
	{
		case 0x00000000:
			func_149(0x00000000, sLocal_69, 0x00000000, 0x00000001, 0x00000000, 0x00000001);
			iLocal_111 = 0x00000000;
			iLocal_107++;
			break;
		
		case 0x00000001:
			if (func_263())
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0xE121AE1BBF90E186(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
				iVar0 = 0x00000000;
				while (iVar0 <= 0x00000007)
				{
					if (func_8(Local_119[iVar0 /*50*/]))
					{
						unk_0xE121AE1BBF90E186(Local_119[iVar0 /*50*/], 0x00000000);
					}
					if (func_8(Local_119[iVar0 /*50*/].f_5))
					{
						unk_0xE121AE1BBF90E186(Local_119[iVar0 /*50*/].f_5, 0x00000000);
					}
					iVar0++;
				}
				func_3(0x000001F4);
				iLocal_107++;
			}
			else if (func_245(0x00000000, &iLocal_106))
			{
				func_21(&Local_46);
				unk_0x29398344B9E5B8A7(Local_47.f_40);
				func_12(0x000000C5, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
				unk_0xE3934829A331AF92("STOCK_RACE_INTRO", "ROAD_RACE_SOUNDSET");
				iVar0 = 0x00000000;
				while (iVar0 <= 0x00000007)
				{
					if (func_8(Local_119[iVar0 /*50*/]))
					{
						unk_0xE121AE1BBF90E186(Local_119[iVar0 /*50*/], 0x00000001);
					}
					if (func_8(Local_119[iVar0 /*50*/].f_5))
					{
						unk_0xE121AE1BBF90E186(Local_119[iVar0 /*50*/].f_5, 0x00000001);
					}
					iVar0++;
				}
				if (!unk_0xC844350D5D58C99A(iLocal_365))
				{
					if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2f) && !unk_0x8E28E832BEAC3DCE(Local_47.f_1A[0x00000008 /*3*/], 2f))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iLocal_365 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							unk_0x73270B3C9CC833FD(iLocal_365, 0x00000001, 0x00000000);
							func_23(iLocal_365, Local_47.f_1A[0x00000008 /*3*/] + vLocal_114, Local_47.f_36[0x00000008], 0x00000000, 0x00000001);
						}
						else
						{
							unk_0x523BCC9DC80CD82F(joaat("gauntlet"));
							if (unk_0xB87F6CF6E5628C67(joaat("gauntlet")))
							{
								iLocal_365 = unk_0x122AAB0B1D6F55AD(joaat("gauntlet"), Local_47.f_1A[0x00000008 /*3*/] + vLocal_114, Local_47.f_36[0x00000008], 0x00000001, 0x00000001, 0x00000000);
							}
						}
						if (func_8(iLocal_365))
						{
							unk_0x51B954DAB1BCAF73(iLocal_365);
						}
					}
				}
				else if (func_8(iLocal_365))
				{
					if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iLocal_365))
					{
						unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_365, 0xFFFFFFFF);
					}
					if (unk_0x9C7B8DC16535B879(iLocal_365) != 0x00000004)
					{
						unk_0x71EDC33E5A423750(iLocal_365, 0x00000004);
					}
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
				}
			}
			break;
		
		case 0x00000002:
			func_242(0x00000001);
			break;
	}
}

int func_263()
{
	bool bVar0;
	int iVar1;
	
	switch (iLocal_111)
	{
		case 0x00000000:
			if (unk_0x64F604CF561734A9("TIME_LAPSE", 0x00000000, 0xFFFFFFFF))
			{
				Local_210.f_4 = unk_0x0D032838710EE57D("DEFAULT_SPLINE_CAMERA", 0x00000000);
				unk_0xB2ABBA6B919F5CE7(Local_210.f_4, 2002.693f, 3097.819f, 50.8232f, 5.4256f, 0.0276f, -170.9332f, 0x00002710, 0x00000000, 0x00000002);
				unk_0xB2ABBA6B919F5CE7(Local_210.f_4, 2002.818f, 3097.488f, 48.0966f, 7.3944f, 0.0276f, -159.5117f, 0x00002710, 0x00000000, 0x00000002);
				unk_0x5818C8D5303DCCF8(Local_210.f_4, 40f);
				unk_0xE3BB8E05FCEB3FBE(Local_210.f_4, 0x00000001);
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "TIME_LAPSE_MASTER", 0x00000000, 0x00000001);
				func_246(&Local_210, 0x00000001, 0x00000000, 0x000007D0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 1000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x8BCB70EB440DED83(0x00000000);
				unk_0xBFE31971E49FA500(0x00000000);
				SYSTEM::SETTIMERA(0x00000000);
				func_244(0x00000000, &iLocal_106);
				switch (func_42())
				{
					case 0x00000000:
						unk_0x82A772610883F395("MinigameEndMichael", 0x00001388, 0x00000000);
						break;
					
					case 0x00000001:
						unk_0x82A772610883F395("MinigameEndFranklin", 0x00001388, 0x00000000);
						break;
					
					case 0x00000002:
						unk_0x82A772610883F395("MinigameEndTrevor", 0x00001388, 0x00000000);
						break;
				}
				iLocal_111++;
			}
			break;
		
		case 0x00000001:
			if (func_269(func_285(), 0x00000000, "", "", &Local_210, 0xBF800000, 0x00000000, 0x00000001, 0x3F800000))
			{
				unk_0xBFBFE6D9F51994DB();
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_111++;
			}
			break;
		
		case 0x00000002:
			if (SYSTEM::TIMERA() > 0x000005DC)
			{
				if (func_8(iLocal_365))
				{
					unk_0xE9362E4D600DD12A(unk_0x16F2683693E537C9(), iLocal_365, Local_47.f_1A[0x00000005 /*3*/], 0.95f, 0x00000000, unk_0x134B62B726CEC8E6(iLocal_365), 0x000C0025, 3.5f, -1f);
					unk_0xA6C13961116F9033("RADIO_01_CLASS_ROCK");
				}
				if (unk_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
				{
					unk_0x55D0A2DB35045A35(Local_210.f_A);
					unk_0x42740B44BA8D7B43("TIME_LAPSE");
					unk_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
				}
				unk_0x27B495357E55D511("RADIO_01_CLASS_ROCK", 0x00000001);
				iVar1 = 0x00000000;
				while (iVar1 <= 0x00000007)
				{
					if (func_8(Local_119[iVar1 /*50*/].f_5))
					{
						unk_0xDB6256BE50B66FE6(Local_119[iVar1 /*50*/].f_5, 0x00000003);
					}
					iVar1++;
				}
				if (func_268())
				{
					vLocal_115 = { -0.7054f, 6.3148f, 2.0821f };
					vLocal_116 = { 0.9495f, 3.9011f, 2.7419f };
					vLocal_117 = { -0.567f, 2.6724f, 1.2077f };
					vLocal_118 = { 0.094f, -0.2423f, 0.7483f };
				}
				else if (func_267())
				{
					vLocal_115 = { -1.6831f, 6.0271f, 4.2228f };
					vLocal_116 = { -0.0245f, 3.5705f, 4.6855f };
					vLocal_117 = { -1.0281f, 4.6872f, 1.1868f };
					vLocal_118 = { -0.185f, 1.8112f, 1.1221f };
				}
				else
				{
					vLocal_115 = { -1.5802f, 5.8398f, 2.2274f };
					vLocal_116 = { 0.197f, 3.5006f, 2.8356f };
					vLocal_117 = { -0.6678f, 1.974f, 0.8876f };
					vLocal_118 = { 0.144f, -0.9013f, 0.417f };
				}
				iLocal_361 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
				unk_0x5818C8D5303DCCF8(iLocal_361, 40f);
				unk_0xC5940439E4EB9A33(iLocal_361, iLocal_365, vLocal_115, 0x00000001);
				unk_0x1305278186D1C53E(iLocal_361, iLocal_365, vLocal_116, 0x00000001);
				iLocal_362 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
				unk_0x5818C8D5303DCCF8(iLocal_362, 40f);
				unk_0xC5940439E4EB9A33(iLocal_362, iLocal_365, vLocal_117, 0x00000001);
				unk_0x1305278186D1C53E(iLocal_362, iLocal_365, vLocal_118, 0x00000001);
				unk_0xE3BB8E05FCEB3FBE(iLocal_361, 0x00000001);
				unk_0xF1E4C781086FABC1(iLocal_362, iLocal_361, 0x00000FA0, 0x00000001, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				unk_0x91F5B0244AAE6222(iLocal_361, "ROAD_VIBRATION_SHAKE", 0.5f);
				unk_0x91F5B0244AAE6222(iLocal_362, "ROAD_VIBRATION_SHAKE", 0.5f);
				SYSTEM::SETTIMERA(0x00000000);
				unk_0x8BC9595FD2792B5D("RACE_INTRO_GENERIC");
				if (unk_0xE3934829A331AF92("STOCK_RACE_INTRO", "ROAD_RACE_SOUNDSET"))
				{
					unk_0x7B1292B738DF9FAF();
				}
				iLocal_111++;
			}
			break;
		
		case 0x00000003:
			if (SYSTEM::TIMERA() > 0x00001770)
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1960.154f, 3125.919f, 47.8242f, -2.4987f, 0.0002f, -95.2875f, 25f, 0x00000000, 0x00000002);
				iLocal_362 = unk_0xAE06CCC36C49929C(0x019286A9, 1963.017f, 3129.43f, 47.481f, -3.0689f, 0.0002f, -114.3019f, 25f, 0x00000000, 0x00000002);
				unk_0xE3BB8E05FCEB3FBE(iLocal_361, 0x00000001);
				unk_0xF1E4C781086FABC1(iLocal_362, iLocal_361, 0x00001B58, 0x00000000, 0x00000001);
				unk_0x91F5B0244AAE6222(iLocal_361, "HAND_SHAKE", 0.1f);
				unk_0x91F5B0244AAE6222(iLocal_362, "HAND_SHAKE", 0.1f);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_111++;
			}
			break;
		
		case 0x00000004:
			if (SYSTEM::TIMERA() > 0x00001324)
			{
				if (func_266(unk_0x16F2683693E537C9(), 0x93A5526E, 0x00000001))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					if (func_8(iLocal_365))
					{
						unk_0xE32750CAC756824F(iLocal_365, 0x00000001);
					}
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				}
			}
			if (SYSTEM::TIMERA() > 0x00001B58)
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				iLocal_361 = unk_0xAE06CCC36C49929C(0x019286A9, 1990.664f, 3113.482f, 47.1558f, 0.8047f, 0.0484f, 56.7722f, 50f, 0x00000001, 0x00000002);
				iLocal_362 = unk_0xAE06CCC36C49929C(0x019286A9, unk_0x07DAF5424BC6779A(), unk_0x3B276DB863622D2E(0x00000002), unk_0xE758B7099799F42F(), 0x00000000, 0x00000002);
				unk_0xF1E4C781086FABC1(iLocal_362, iLocal_361, 0x00000FA0, 0x00000003, 0x00000001);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_111++;
			}
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			if (SYSTEM::TIMERA() > 0x00000BB8)
			{
				bVar0 = 0x00000001;
				iVar1 = 0x00000000;
				while (iVar1 <= 0x00000007)
				{
					if (!unk_0xC844350D5D58C99A(Local_119[iVar1 /*50*/]))
					{
						bVar0 = 0x00000000;
					}
					iVar1++;
				}
				if (!unk_0xC844350D5D58C99A(iLocal_365))
				{
					bVar0 = 0x00000000;
				}
				if (bVar0)
				{
					func_246(&Local_210, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					if (unk_0x562F77A7F33D2E46("TOD_SHIFT_SCENE"))
					{
						unk_0x55D0A2DB35045A35(Local_210.f_A);
						unk_0x42740B44BA8D7B43("TIME_LAPSE");
						unk_0x8910D3D58E0132B8("TOD_SHIFT_SCENE");
					}
					unk_0xA6C13961116F9033("RADIO_01_CLASS_ROCK");
					unk_0x27B495357E55D511("RADIO_01_CLASS_ROCK", 0x00000001);
					unk_0x8BC9595FD2792B5D("RACE_INTRO_GENERIC");
					unk_0x5CAFA5DD13658DFE(0x00000000);
					unk_0xE96F19797E59AB06();
					return 0x00000001;
				}
			}
			break;
	}
	if (func_264(0x000003E8))
	{
		func_233(0x000001F4);
		unk_0x71592C07333285FE(func_285(), 0x00000000, 0x00000000);
		SYSTEM::SETTIMERA(0x00000000);
		if (func_8(iLocal_365))
		{
			unk_0xE32750CAC756824F(iLocal_365, 0x00000001);
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			func_23(iLocal_365, Local_47.f_1A[0x00000008 /*3*/], Local_47.f_36[0x00000008], 0x00000001, 0x00000001);
			unk_0xB9FD7450C0DAB575(iLocal_365, 0x40A00000);
		}
		iLocal_111 = 0x00000006;
	}
	return 0x00000000;
}

int func_264(int iParam0)
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
			if (func_265())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_265()
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

int func_266(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD1960163A3042274(iParam0, iParam1);
	if (iVar0 == 0x00000001 || iVar0 == 0x00000000)
	{
		return 0x00000001;
	}
	else if (!bParam2)
	{
		if (iVar0 == 0x00000002 || iVar0 == 0x00000003)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_267()
{
	int iVar0;
	
	if (func_240(iLocal_365))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iLocal_365);
		if (iVar0 == unk_0x12AB0310C2281427("MONSTER") || iVar0 == unk_0x12AB0310C2281427("MARSHALL"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_268()
{
	int iVar0;
	
	if (func_240(iLocal_365))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iLocal_365);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("baller") || iVar0 == joaat("baller2")) || iVar0 == joaat("bison")) || iVar0 == joaat("bison2")) || iVar0 == joaat("bison3")) || iVar0 == joaat("bobcatxl")) || iVar0 == joaat("cavalcade")) || iVar0 == joaat("cavalcade2")) || iVar0 == joaat("crusader")) || iVar0 == joaat("dubsta")) || iVar0 == joaat("dubsta2")) || iVar0 == joaat("fq2")) || iVar0 == joaat("granger")) || iVar0 == joaat("gresley")) || iVar0 == joaat("landstalker")) || iVar0 == joaat("mesa")) || iVar0 == joaat("mesa2")) || iVar0 == joaat("mesa3")) || iVar0 == joaat("patriot")) || iVar0 == joaat("radi")) || iVar0 == joaat("rancherxl")) || iVar0 == joaat("rancherxl2")) || iVar0 == joaat("rebel")) || iVar0 == joaat("rocoto")) || iVar0 == joaat("sadler")) || iVar0 == joaat("sadler2")) || iVar0 == joaat("sandking")) || iVar0 == joaat("sandking2")) || iVar0 == joaat("seminole")) || iVar0 == joaat("superd")) || iVar0 == unk_0x12AB0310C2281427("huntley")) || iVar0 == unk_0x12AB0310C2281427("DUBSTA3"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_269(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0x00000000:
			*uParam4 = func_204();
			iVar5 = func_204();
			func_212(&iVar5, iParam0);
			func_213(&iVar5, iParam1);
			func_214(&iVar5, 0x00000000);
			if (func_283(*uParam4, iVar5))
			{
				func_281(&iVar5, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			}
			func_279(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_B = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_277((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			if (bParam7)
			{
				unk_0x25CDE70818786F1F(0.6f);
				unk_0x365391E40B6BA75B(0x00000000);
				unk_0x9B84ADFFC9CAC31A(0x00000000);
			}
			func_276();
			uParam4->f_A = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(uParam4->f_A, "TIME_LAPSE_MASTER", 0x00000000, 0x00000001);
			unk_0x8BC9595FD2792B5D("TOD_SHIFT_SCENE");
			func_247();
			uParam4->f_3++;
			break;
		
		case 0x00000001:
		case 0x00000002:
			if ((unk_0x9F4FE516EAACCFC5(uParam4->f_4) && unk_0xFA06B985B30FB0FC(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x9F4FE516EAACCFC5(uParam4->f_4) && unk_0xFA06B985B30FB0FC(uParam4->f_4))
				{
					fVar0 = unk_0xEDD067DFFB8D5784(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(sParam2) != 0x00000000)
						{
							unk_0x8225571BCEE038F8(sParam2, fParam8);
						}
						if (unk_0x12AB0310C2281427(sParam3) != 0x00000000)
						{
							unk_0xF1662D1948765623();
							unk_0xCD7E6F59323AEBCB(sParam3, 0x00000000);
						}
						uParam4->f_3 = 0x00000002;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_281(&iVar5, uParam4->f_B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x71592C07333285FE(func_275(iVar5), func_274(iVar5), func_273(iVar5));
				if (bParam7)
				{
					unk_0xF8041E6992430151();
				}
				unk_0x55D0A2DB35045A35(uParam4->f_A);
				unk_0x42740B44BA8D7B43("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x9B84ADFFC9CAC31A(0x00000001);
					unk_0x365391E40B6BA75B(0x00000001);
				}
				return 0x00000001;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_98(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar12));
			iVar5 = *uParam4;
			func_281(&iVar5, iVar4, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x71592C07333285FE(func_275(iVar5), func_274(iVar5), func_273(iVar5));
			if (func_272(iVar5) != unk_0x972A296334C9D57B())
			{
				unk_0xD3A9F3BA3F4248BA(func_272(iVar5), func_211(iVar5), func_209(iVar5));
			}
			func_270();
			unk_0xF99F2927BEBB5EE7(0x00000006);
			break;
	}
	return 0x00000000;
}

void func_270()
{
	unk_0xC2127C0F64D6A3B9();
	func_271();
}

void func_271()
{
	Global_56C3.f_86 = 0x00000001;
}

int func_272(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_273(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_274(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_275(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_276()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
	{
		return 0x00000000;
	}
	unk_0x3CBF2C83A68C1611(iVar0, "OFF");
	return 0x00000001;
}

void func_277(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (func_41(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5)))
		{
			func_278(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000006)
	{
		if (func_41(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/])))
		{
			func_278(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x9911B88AFCF2F6D2();
}

void func_278(int iParam0, float fParam1)
{
	if (func_41(iParam0))
	{
		func_27(iParam0, (func_36(iParam0) + fParam1));
	}
}

void func_279(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_283(iParam0, iParam1))
	{
		iVar0 = func_211(iParam1);
		iVar1 = func_209(iParam0);
		iVar2 = (func_209(iParam0) - func_209(iParam1));
		iVar3 = (func_211(iParam0) - func_211(iParam1));
		iVar4 = (func_272(iParam0) - func_272(iParam1));
		iVar5 = (func_275(iParam0) - func_275(iParam1));
		iVar6 = (func_274(iParam0) - func_274(iParam1));
		iVar7 = (func_273(iParam0) - func_273(iParam1));
	}
	else
	{
		iVar0 = func_211(iParam0);
		iVar1 = func_209(iParam1);
		iVar2 = (func_209(iParam1) - func_209(iParam0));
		iVar3 = (func_211(iParam1) - func_211(iParam0));
		iVar4 = (func_272(iParam1) - func_272(iParam0));
		iVar5 = (func_275(iParam1) - func_275(iParam0));
		iVar6 = (func_274(iParam1) - func_274(iParam0));
		iVar7 = (func_273(iParam1) - func_273(iParam0));
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
		iVar4 = (iVar4 + func_208(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_280(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_280(float fParam0, float fParam1, float fParam2)
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

void func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_209(*iParam0);
	iVar1 = func_211(*iParam0);
	iVar2 = func_272(*iParam0);
	iVar3 = func_275(*iParam0);
	iVar4 = func_274(*iParam0);
	iVar5 = func_273(*iParam0);
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
	iVar6 = func_208(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_208(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_282(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_214(uParam0, iParam1);
	func_213(uParam0, iParam2);
	func_212(uParam0, iParam3);
	func_206(uParam0, iParam5);
	func_207(uParam0, iParam4);
	func_205(uParam0, iParam6);
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_284(iParam1) || !func_284(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_209(iParam0);
	iVar1 = func_209(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_272(iParam0);
	iVar1 = func_272(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_275(iParam0);
	iVar1 = func_275(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_274(iParam0);
	iVar1 = func_274(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_273(iParam0);
	iVar1 = func_273(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_284(int iParam0)
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
	iVar0 = func_273(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_274(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_275(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_209(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_211(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_272(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_208(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_285()
{
	switch (Global_1B416.f_61EC)
	{
		case 0x00000000:
			return 0x00000014;
			break;
		
		case 0x00000001:
			return 0x00000011;
			break;
		
		case 0x00000002:
			return 0x0000000C;
			break;
		
		case 0x00000003:
			return 0x00000015;
			break;
		
		case 0x00000004:
			return 0x0000000C;
			break;
	}
	return 0x00000012;
}

void func_286()
{
	func_332();
	func_308();
	func_293();
	func_289();
	func_288(&Local_119, &Local_209);
	func_287(&uLocal_148, &uLocal_108);
	func_5();
	func_53(0x00000000);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
	unk_0x6A36BC55C7F6D023(0f);
	unk_0xD60411959D5D930B(0f);
	unk_0x1386EF28F7C0195C(0f, 0f);
}

void func_287(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (((((*uParam0)[*uParam1 /*6*/] != 0x00000000 && unk_0xC844350D5D58C99A((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0x00000000) && unk_0xC844350D5D58C99A((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (func_52((uParam0[*uParam1 /*6*/])->f_2, 0x00000002))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0x6AB6A474D29FA7D8((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = unk_0xF649DD3BF44195C7((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0x00000000;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0x00000000 || !unk_0xC844350D5D58C99A((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0x00000000 || !unk_0xC844350D5D58C99A((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0x00000000;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_1 = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_2 = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_3 = 0x00000000;
			(uParam0[iVar1 /*6*/])->f_5 = 0x00000000;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0x00000000;
		iVar1++;
	}
}

void func_288(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0x00000001;
	iVar1 = 0x00000000;
	while (iVar1 < *iParam0)
	{
		if (func_8((*iParam0)[iVar1 /*50*/]))
		{
			if ((iParam0[iVar1 /*50*/])->f_11.f_D)
			{
				iVar0++;
			}
			else if ((iParam0[iVar1 /*50*/])->f_11.f_3 > uParam1->f_3)
			{
				iVar0++;
			}
			else if ((iParam0[iVar1 /*50*/])->f_11.f_3 == uParam1->f_3)
			{
				if ((iParam0[iVar1 /*50*/])->f_11.f_2 > uParam1->f_2)
				{
					iVar0++;
				}
				else if ((iParam0[iVar1 /*50*/])->f_11.f_2 == uParam1->f_2)
				{
					fVar2 = func_234((*iParam0)[iVar1 /*50*/], Local_47[(iParam0[iVar1 /*50*/])->f_11.f_4 /*3*/], 0x00000001);
					fVar3 = func_234(unk_0x16F2683693E537C9(), Local_47[uParam1->f_4 /*3*/], 0x00000001);
					if (fVar2 < fVar3)
					{
						iVar0++;
					}
				}
			}
		}
		iVar1++;
	}
	uParam1->f_6 = iVar0;
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_120)
	{
		if (!Local_120[iVar0 /*50*/].f_2A)
		{
			if (Local_120[iVar0 /*50*/].f_29)
			{
				if (func_8(Local_120[iVar0 /*50*/]))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_120[iVar0 /*50*/], 0x00000001)) > 40000f)
					{
						func_133(&(Local_120[iVar0 /*50*/]), 0x00000001);
						Local_120[iVar0 /*50*/].f_29 = 0x00000000;
					}
				}
				else
				{
					func_133(&(Local_120[iVar0 /*50*/]), 0x00000000);
					Local_120[iVar0 /*50*/].f_2A = 0x00000001;
				}
			}
			else if (func_245(0x00000000, &iLocal_106) && !Local_46.f_6)
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_120[iVar0 /*50*/].f_25) < 22500f)
				{
					func_292(&(Local_120[iVar0 /*50*/]), 0x00000000);
				}
			}
		}
		iVar0++;
	}
	func_290(&Local_120);
}

void func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *iParam0)
	{
		if (func_8((*iParam0)[iVar0 /*50*/]))
		{
			if ((!unk_0x4734A6196B611C3B((*iParam0)[iVar0 /*50*/], 0x00000000) && !unk_0xE9FDA1035CFEA94F((*iParam0)[iVar0 /*50*/])) && !unk_0x869EFD0BC0868856((*iParam0)[iVar0 /*50*/]))
			{
				unk_0x50155CDC2C5335FC((*iParam0)[iVar0 /*50*/], 0x00000001, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF);
				if (!func_266((*iParam0)[iVar0 /*50*/], 0x0E763797, 0x00000001))
				{
					unk_0xDD353D0E9C789D0E(&((iParam0[iVar0 /*50*/])->f_2));
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x000007D0);
					unk_0x509B8296EBA9B408(0x00000000, func_291(iVar0), 0xFFFFFFFF, 0x00000001);
					unk_0x75ABDC5F81978924((iParam0[iVar0 /*50*/])->f_2);
					unk_0x78ADC381772E3D54((*iParam0)[iVar0 /*50*/], (iParam0[iVar0 /*50*/])->f_2);
					unk_0xF82EA857DA10E0CD(&((iParam0[iVar0 /*50*/])->f_2));
					(iParam0[iVar0 /*50*/])->f_2D = unk_0x1C0640BA9A7327B3();
				}
				else if (iVar0 != 0x0000000A)
				{
					if ((unk_0xD9522BA9E27E1349((*iParam0)[iVar0 /*50*/]) - func_232(unk_0x68F4C0EC296D3901((*iParam0)[iVar0 /*50*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001))) > 60f || (unk_0xD9522BA9E27E1349((*iParam0)[iVar0 /*50*/]) - func_232(unk_0x68F4C0EC296D3901((*iParam0)[iVar0 /*50*/], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001))) < -60f)
					{
						if (unk_0x1C0640BA9A7327B3() > (iParam0[iVar0 /*50*/])->f_2D + 5000)
						{
							unk_0xA3BF0AA5A2608191((*iParam0)[iVar0 /*50*/]);
						}
					}
					else if (unk_0x4F1B602325013CC2((*iParam0)[iVar0 /*50*/]) > 0x00000000)
					{
						if (unk_0x1C0640BA9A7327B3() > (iParam0[iVar0 /*50*/])->f_2D + 4000)
						{
							if ((((iVar0 == 0x00000002 || iVar0 == 0x00000005) || iVar0 == 0x00000012) || iVar0 == 0x00000007) || iVar0 == 0x0000000E)
							{
								unk_0x50155CDC2C5335FC((*iParam0)[iVar0 /*50*/], 0x00000004, unk_0x16F2683693E537C9(), 0x00000000, 0f, 0f, 0f, 0x00000000, 0x000001F4, 0x0000012C);
							}
						}
					}
				}
			}
			else if (unk_0x869EFD0BC0868856((*iParam0)[iVar0 /*50*/]))
			{
				unk_0xD458AC1C1D29C3B4((*iParam0)[iVar0 /*50*/], 0x00000000, 0x00000000);
			}
			else
			{
				func_133(iParam0[iVar0 /*50*/], 0x00000000);
			}
		}
		iVar0++;
	}
}

char* func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000003:
		case 0x00000004:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
			return "WORLD_HUMAN_CHEERING";
			break;
		
		case 0x00000002:
		case 0x00000005:
		case 0x00000012:
		case 0x00000007:
		case 0x0000000E:
			return "WORLD_HUMAN_MOBILE_FILM_SHOCKING";
			break;
		
		case 0x0000000A:
			return "WORLD_HUMAN_STAND_IMPATIENT";
			break;
	}
	return "";
}

void func_292(var uParam0, bool bParam1)
{
	if (!uParam0->f_29)
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_3);
		if (bParam1)
		{
			while (!unk_0xB87F6CF6E5628C67(uParam0->f_3))
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
		if (unk_0xB87F6CF6E5628C67(uParam0->f_3))
		{
			*uParam0 = unk_0x36F2404464202779(0x0000001A, uParam0->f_3, uParam0->f_25, uParam0->f_28, 0x00000001, 0x00000001);
			if (unk_0xC844350D5D58C99A(*uParam0))
			{
				unk_0x5F2AA9E2843E9403(*uParam0, &(uParam0->f_2E));
				uParam0->f_29 = 0x00000001;
				uParam0->f_2C = 0x00000000;
				unk_0x71199B01895C6202(uParam0->f_3);
			}
		}
	}
}

void func_293()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000007)
	{
		if (!Local_119[iVar0 /*50*/].f_2A)
		{
			if (Local_119[iVar0 /*50*/].f_29)
			{
				if (func_8(Local_119[iVar0 /*50*/]))
				{
					bVar1 = 0x00000001;
					if (iLocal_111 < 0x00000003)
					{
						bVar1 = 0x00000000;
					}
					func_297(&(Local_119[iVar0 /*50*/]), Local_209, bVar1);
					func_296();
					if (func_8(Local_119[iVar0 /*50*/].f_5))
					{
						if (!unk_0xE4EDC4B0E92C078B(Local_119[iVar0 /*50*/].f_1))
						{
							func_294(&(Local_119[iVar0 /*50*/].f_1), Local_119[iVar0 /*50*/].f_5, 0x00000001, 10f, 0x00000001);
							unk_0xDC5B2F9D0CCE3A10(Local_119[iVar0 /*50*/].f_1, "CRACEBLIP");
						}
						else
						{
							func_294(&(Local_119[iVar0 /*50*/].f_1), Local_119[iVar0 /*50*/].f_5, 0x00000001, 10f, 0x00000000);
						}
					}
				}
				else
				{
					func_133(&(Local_119[iVar0 /*50*/]), 0x00000000);
					func_135(&(Local_119[iVar0 /*50*/].f_1));
					Local_119[iVar0 /*50*/].f_2A = 0x00000001;
				}
			}
			else if (!Local_46.f_6 && func_245(0x00000000, &iLocal_106))
			{
				func_9(&(Local_119[iVar0 /*50*/]), 0x00000000, 0x00000001);
			}
		}
		iVar0++;
	}
}

void func_294(var uParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam4 == 0x00000001 && !unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		*uParam0 = func_295(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 0x00000000);
		if (bParam2)
		{
			unk_0x61755AC17D8F538E(*uParam0, 0x00000003);
			unk_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_FRIEND");
		}
		else
		{
			unk_0x61755AC17D8F538E(*uParam0, 0x00000001);
			unk_0xDC5B2F9D0CCE3A10(*uParam0, "BLIP_ENEMY");
		}
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x516E63E474722206(*uParam0, 0.7f);
		}
	}
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(*uParam0) };
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		vVar0.x = (vVar0.x + ((vVar1.x - vVar0.x) / fParam3));
		vVar0.y = (vVar0.y + ((vVar1.y - vVar0.y) / fParam3));
		vVar0.z = (vVar0.z + ((vVar1.z - vVar0.z) / fParam3));
		unk_0x2F9282246F89FFD1(*uParam0, vVar0);
	}
}

int func_295(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_33(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_296()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x1C0640BA9A7327B3() > iLocal_368)
	{
		fVar1 = 1E+07f;
		iVar3 = 0x00000000;
		while (iVar3 <= 0x00000007)
		{
			if (func_240(Local_119[iVar3 /*50*/].f_5))
			{
				fVar0 = func_239(unk_0x16F2683693E537C9(), Local_119[iVar3 /*50*/].f_5, 0x00000001);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (iLocal_367 > 0xFFFFFFFF && func_240(Local_119[iLocal_367 /*50*/].f_5))
		{
			unk_0x06FF977AA95DCCE3(Local_119[iLocal_367 /*50*/].f_5, 0x00000000);
			unk_0x2E1E5367A885F9B7(Local_119[iLocal_367 /*50*/].f_5, "STREET_RACE_NPC_GENERAL", 0x00000000);
		}
		if (func_240(Local_119[iVar2 /*50*/].f_5))
		{
			unk_0x2E1E5367A885F9B7(Local_119[iVar2 /*50*/].f_5, "STREET_RACE_NPC_CLOSEST", 0x00000000);
		}
		iLocal_367 = iVar2;
		iLocal_368 = unk_0x1C0640BA9A7327B3() + 2000;
	}
}

void func_297(var uParam0, struct<20> Param1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	vector3 vVar9;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_5) && !unk_0x437347B10A200C4B(uParam0->f_5, 0x00000000))
	{
		iVar0 = 0x00000000;
		fVar2 = func_307(*uParam0);
		if (Param1.f_4 < 0x00000006)
		{
			uParam0->f_11 = func_234(*uParam0, Local_47[uParam0->f_11.f_4 /*3*/], 0x00000001);
			if (unk_0x1C0640BA9A7327B3() > Local_46.f_7 + 7500)
			{
				if (uParam0->f_11.f_2 > Param1.f_2 + 1)
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(uParam0->f_5, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 2500f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.5f));
					}
					else if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(uParam0->f_5, 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) > 625f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.4f));
					}
					else
					{
						fVar2 = (fVar2 - (fVar2 * 0.2f));
					}
				}
				else if (uParam0->f_11.f_2 == Param1.f_2 + 1)
				{
					fVar4 = func_234(unk_0x16F2683693E537C9(), Local_47[uParam0->f_11.f_4 /*3*/], 0x00000001);
					fVar3 = (fVar4 - uParam0->f_11);
					if (fVar3 > 50f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.4f));
					}
					else if (fVar3 > 25f)
					{
						fVar2 = (fVar2 - (fVar2 * 0.2f));
					}
				}
				else if (uParam0->f_11.f_2 == Param1.f_2)
				{
					if (Param1 > uParam0->f_11)
					{
						fVar3 = (Param1 - uParam0->f_11);
						if (fVar3 > 50f)
						{
							fVar2 = (fVar2 - (fVar2 * 0.4f));
						}
						else if (fVar3 > 25f)
						{
							fVar2 = (fVar2 - (fVar2 * 0.2f));
						}
					}
					else if (Param1 < uParam0->f_11)
					{
						fVar3 = (uParam0->f_11 - Param1);
						if (fVar3 > 50f)
						{
							fVar2 = (fVar2 + (fVar2 * 1.5f));
							iVar0 = 0x00000001;
							vVar1 = { 0f, 3f, 0f };
						}
						else if (fVar3 > 25f)
						{
							fVar2 = (fVar2 + (fVar2 * 1f));
							iVar0 = 0x00000001;
							vVar1 = { 0f, 1.5f, 0f };
						}
						else if (fVar3 > 0f)
						{
							fVar2 = (fVar2 + (fVar2 * 0.5f));
						}
					}
				}
				else if (uParam0->f_11.f_2 == (Param1.f_2 - 0x00000001))
				{
					fVar5 = func_234(*uParam0, Local_47[Param1.f_4 /*3*/], 0x00000001);
					fVar3 = (fVar5 - Param1);
					if (fVar3 > 50f)
					{
						fVar2 = (fVar2 + (fVar2 * 1.5f));
						iVar0 = 0x00000001;
						vVar1 = { 0f, 3f, 0f };
					}
					else if (fVar3 > 25f)
					{
						fVar2 = (fVar2 + (fVar2 * 1f));
						iVar0 = 0x00000001;
						vVar1 = { 0f, 1.5f, 0f };
					}
					else if (fVar3 > 0f)
					{
						fVar2 = (fVar2 + (fVar2 * 0.5f));
					}
				}
				else
				{
					fVar2 = (fVar2 + (fVar2 * 1.7f));
					iVar0 = 0x00000001;
					vVar1 = { 0f, 4f, 0f };
				}
			}
			else
			{
				fVar2 = 40f;
				if (unk_0x1C0640BA9A7327B3() < Local_46.f_7 + 1000)
				{
					vVar1 = { 0f, 10f, 0f };
				}
				else
				{
					vVar1 = { 0f, 6f, 0f };
				}
				iVar0 = 0x00000001;
			}
			uParam0->f_11.f_1 = func_305(uParam0->f_11.f_1, fVar2, 0.1f, 0x00000000);
			unk_0x06736587AE5BE33B(*uParam0, uParam0->f_11.f_1);
			unk_0xE76AF7E1683414C6(*uParam0, fVar2);
		}
		switch (uParam0->f_2C)
		{
			case 0x00000000:
				if (func_41(&(Local_46.f_2)))
				{
					uParam0->f_2C++;
				}
				else if (bParam2)
				{
					if (!func_266(*uParam0, 0x0E763797, 0x00000001))
					{
						unk_0xDD353D0E9C789D0E(&(uParam0->f_2));
						unk_0x78A77CDD64392938(0x00000000, unk_0x09AC81E49EA267F7(0x000000C8, 0x000001F4));
						unk_0xD1F0F33C375B8446(0x00000000, uParam0->f_5, 0x0000001F, unk_0x09AC81E49EA267F7(0x000001F4, 0x000007D0));
						unk_0x75ABDC5F81978924(uParam0->f_2);
						unk_0x78ADC381772E3D54(*uParam0, uParam0->f_2);
						unk_0xF82EA857DA10E0CD(&(uParam0->f_2));
					}
				}
				break;
			
			case 0x00000001:
				unk_0xB8E3D4F5062815C2(uParam0->f_5, 0x00000001);
				unk_0x71EDC33E5A423750(uParam0->f_5, 0x00000002);
				unk_0x11AD11297DC58CC7(*uParam0, 0x00000001);
				unk_0xD5A0214B20BCBAD8(uParam0->f_5, 0x00000001);
				unk_0x44A200C9B6E1CEA6(uParam0->f_5, 0x00000001);
				unk_0xE8832A9E16A57A1F(uParam0->f_5, 0x00000001, 0x00000001);
				unk_0x56FDC9ADE35F7DB0(uParam0->f_5, 0x00000001, 0x00000000, 0x00000000);
				unk_0x20C16EE03790D530(uParam0->f_5, 0x00000000);
				unk_0xDD353D0E9C789D0E(&(uParam0->f_2));
				iVar6 = unk_0x09AC81E49EA267F7(0x0000044C, 0x00000514);
				unk_0x78A77CDD64392938(0x00000000, iVar6);
				iVar6 = unk_0x09AC81E49EA267F7(0x00000064, 0x000000FA);
				if (uParam0->f_11.f_B == 0x00000001)
				{
					unk_0xD1F0F33C375B8446(0x00000000, uParam0->f_5, 0x0000001E, 0x00000258);
				}
				else if (uParam0->f_11.f_B == 0x00000002)
				{
					unk_0xD1F0F33C375B8446(0x00000000, uParam0->f_5, 0x0000001E, 0x0000044C);
				}
				else if (uParam0->f_11.f_B == 0x00000005)
				{
					unk_0xD1F0F33C375B8446(0x00000000, uParam0->f_5, 0x0000001E, 0x000004B0);
				}
				else
				{
					unk_0xD1F0F33C375B8446(0x00000000, uParam0->f_5, 0x0000001E, (0x00000514 + (uParam0->f_11.f_B + 1 * iVar6)));
				}
				unk_0x75ABDC5F81978924(uParam0->f_2);
				unk_0x78ADC381772E3D54(*uParam0, uParam0->f_2);
				unk_0xF82EA857DA10E0CD(&(uParam0->f_2));
				uParam0->f_11.f_1 = func_307(*uParam0);
				uParam0->f_2C++;
				break;
			
			case 0x00000002:
				switch (uParam0->f_11.f_4)
				{
					case 0x00000005:
						if (unk_0x3D1053F9EB43B7AD(*uParam0, Local_47.f_13, Local_47.f_16, Local_47.f_19, 0x00000000, 0x00000001, 0x00000000))
						{
							uParam0->f_11.f_3++;
							uParam0->f_11.f_2++;
							uParam0->f_11.f_4 = 0x00000000;
							if (uParam0->f_11.f_3 == Local_47.f_41)
							{
								uParam0->f_11.f_D = 0x00000001;
							}
						}
						break;
					
					default:
						if (Local_46.f_5)
						{
							if (!func_266(*uParam0, 0x0E763797, 0x00000001))
							{
								unk_0xDD353D0E9C789D0E(&(uParam0->f_2));
								unk_0x1B901F542DF070CF(0x00000000, uParam0->f_5, Local_47.f_40, 0x000C0024, 0x00000000, 0x0000021C, 0xFFFFFFFF, uParam0->f_11.f_1, 0x00000001, 2f);
								unk_0x75ABDC5F81978924(uParam0->f_2);
								unk_0x78ADC381772E3D54(*uParam0, uParam0->f_2);
								unk_0xF82EA857DA10E0CD(&(uParam0->f_2));
							}
							bVar7 = 0x00000000;
							if (uParam0->f_11 < 20f)
							{
								bVar7 = 0x00000001;
							}
							unk_0x9414396734E14897(Local_47.f_40, unk_0x68F4C0EC296D3901(uParam0->f_5, 0x00000001), &iVar8);
							unk_0xEF8F639897C675D5(Local_47.f_40, iVar8, &vVar9);
							if (SYSTEM::VDIST2(vVar9, Local_47[uParam0->f_11.f_4 /*3*/]) < 400f)
							{
								bVar7 = 0x00000001;
							}
							if (bVar7)
							{
								uParam0->f_11.f_2++;
								uParam0->f_11.f_4++;
							}
						}
						else if (!func_266(*uParam0, 0x0E763797, 0x00000001) && !func_266(*uParam0, 0x93A5526E, 0x00000001))
						{
							unk_0xE9362E4D600DD12A(*uParam0, uParam0->f_5, unk_0x68E4ADDDDCD7BDDE(*uParam0, 0f, 100f, 0f), 40f, 0x00000000, uParam0->f_5.f_2, 0x000C0024, 20f, 9999f);
						}
						break;
				}
				if (func_304(uParam0))
				{
					if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(uParam0->f_5, 0x00000001), 3f))
					{
						func_303(uParam0);
					}
				}
				if (uParam0->f_11.f_B == 0x00000001)
				{
					if (func_302(uParam0, Param1))
					{
						func_301(uParam0, Param1);
					}
				}
				if (iLocal_60 > unk_0x1C0640BA9A7327B3())
				{
					unk_0x9501364A300048C6();
				}
				break;
			
			case 0x000003E7:
				break;
		}
		if (Local_46.f_5 && !Local_46.f_6)
		{
			if (iVar0 && !func_300(vVar1))
			{
				if (func_299(uParam0->f_5))
				{
					if (unk_0x1C0640BA9A7327B3() > Local_46.f_7 + 1000)
					{
						vVar1 = { vVar1 * FtoV((IntToFloat(Global_1B416.f_61EC + 1) * 0.75f)) };
					}
					unk_0xEF3C30F70D2ED135(uParam0->f_5, 0x00000000, vVar1, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				}
			}
			if ((func_298(*uParam0) && unk_0xF79A7BCA9E38BBBC(uParam0->f_5)) && !unk_0xE934758D273C899A(uParam0->f_5))
			{
				unk_0xEF3C30F70D2ED135(uParam0->f_5, 0x00000000, 0f, 0f, -10f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				unk_0x7A87719506F24773(uParam0->f_5, 2f);
			}
		}
	}
}

int func_298(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49)
{
	if ((unk_0x3D1053F9EB43B7AD(iParam0, 1863.932f, 3234.403f, 42.03159f, 1907.052f, 3184.802f, 50.18943f, 25f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(iParam0, 2249.526f, 3235.603f, 45.0114f, 2191.436f, 3247.169f, 51.67255f, 25f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(iParam0, 2276.412f, 2998.594f, 42.96453f, 2299.795f, 3059.603f, 50.52016f, 25f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_299(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	
	if (func_240(iParam0))
	{
		bVar4 = 0x00000000;
		iVar5 = 0x00000000;
		if (unk_0x9414396734E14897(Local_47.f_40, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), &iVar0))
		{
			if (unk_0xEF8F639897C675D5(Local_47.f_40, iVar0, &vVar1))
			{
				if (unk_0x51FE1B68F2818389(Local_47.f_40, &iVar2))
				{
					if (iVar0 < iVar2)
					{
						bVar4 = unk_0xEF8F639897C675D5(Local_47.f_40, iVar0 + 1, &vVar3);
					}
					else
					{
						bVar4 = unk_0xEF8F639897C675D5(Local_47.f_40, 0x00000000, &vVar3);
					}
				}
			}
		}
		if (bVar4)
		{
			if ((func_232(vVar1, vVar3) - unk_0xD9522BA9E27E1349(iParam0)) < 10f && (func_232(vVar1, vVar3) - unk_0xD9522BA9E27E1349(iParam0)) > -10f)
			{
				iVar5 = 0x00000001;
			}
		}
		if (((unk_0xF79A7BCA9E38BBBC(iParam0) && iVar5) && !unk_0xE934758D273C899A(iParam0)) && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vVar1) < 900f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_300(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_301(var uParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	vector3 vVar0;
	
	if (Param1.f_4 == 0x00000000)
	{
		vVar0 = { Local_47[0x00000004 /*3*/] };
	}
	else if (Param1.f_4 == 0x00000001)
	{
		vVar0 = { Local_47[0x00000005 /*3*/] };
	}
	else
	{
		vVar0 = { Local_47[(Param1.f_4 - 0x00000002) /*3*/] };
	}
	if (!func_300(vVar0))
	{
		if (!unk_0x8E28E832BEAC3DCE(vVar0, 3f) && !unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(uParam0->f_5, 0x00000001), 3f))
		{
			if (unk_0x1C0640BA9A7327B3() > uParam0->f_5.f_B + 2000 && uParam0->f_5.f_B != 0x00000000)
			{
				if (!unk_0x558ADED8B93EA0F6(vVar0, 4f))
				{
					if (Param1.f_4 != 0x00000000)
					{
						uParam0->f_11.f_3 = Param1.f_3;
						uParam0->f_11.f_4 = (Param1.f_4 - 0x00000001);
					}
					else
					{
						uParam0->f_11.f_3 = (Param1.f_3 - 0x00000001);
						uParam0->f_11.f_4 = 0x00000005;
					}
					uParam0->f_11.f_2 = (Param1.f_2 - 0x00000001);
					func_23(uParam0->f_5, vVar0, func_232(vVar0, Local_47[uParam0->f_11.f_4 /*3*/]), 0x00000001, 0x00000001);
					unk_0x1AEF7184B203A58D(uParam0->f_5, 20f);
					unk_0x1B901F542DF070CF(*uParam0, uParam0->f_5, Local_47.f_40, 0x000C0025, 0x00000000, 0x0000021C, 0xFFFFFFFF, uParam0->f_11.f_1, 0x00000001, 2f);
					iLocal_60 = unk_0x1C0640BA9A7327B3() + 1000;
				}
			}
		}
		else
		{
			uParam0->f_5.f_B = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_302(var uParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	if (uParam0->f_11.f_2 < (Param1.f_2 - 0x00000001) && (uParam0->f_11.f_3 != (Local_47.f_41 - 0x00000001) || (uParam0->f_11.f_3 == (Local_47.f_41 - 0x00000001) && Param1.f_4 < 0x00000004)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_303(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	unk_0x9414396734E14897(Local_47.f_40, unk_0x68F4C0EC296D3901(uParam0->f_5, 0x00000001), &iVar0);
	unk_0xEF8F639897C675D5(Local_47.f_40, iVar0, &vVar1);
	unk_0xEF8F639897C675D5(Local_47.f_40, iVar0 + 1, &vVar2);
	if (!unk_0x8E28E832BEAC3DCE(vVar1, 3f))
	{
		if (!unk_0x558ADED8B93EA0F6(vVar1, 5f) || func_234(uParam0->f_5, vVar1, 0x00000001) < 5f)
		{
			func_23(uParam0->f_5, vVar1, func_232(vVar1, vVar2), 0x00000000, 0x00000001);
			if (!unk_0xC42A92762C58E1B9(*uParam0, uParam0->f_5, 0x00000000))
			{
				unk_0xF821F915BC24D246(*uParam0, uParam0->f_5, 0xFFFFFFFF);
			}
			iLocal_60 = unk_0x1C0640BA9A7327B3() + 1000;
		}
	}
}

int func_304(var uParam0)
{
	if ((unk_0x377BE9A1BF38C7CE(uParam0->f_5) || unk_0x7B5606C651AB51B5(uParam0->f_5, 0x00000000, 0x00001B58)) || unk_0x7B5606C651AB51B5(uParam0->f_5, 0x00000001, 0x00009C40))
	{
		return 0x00000001;
	}
	if (unk_0x70EED0761B82965E(uParam0->f_5))
	{
		return 0x00000001;
	}
	if (unk_0x7B5606C651AB51B5(uParam0->f_5, 0x00000002, 0x00001B58) || unk_0x7B5606C651AB51B5(uParam0->f_5, 0x00000003, 0x00001B58))
	{
		return 0x00000001;
	}
	if (uParam0->f_11.f_4 == uParam0->f_11.f_5)
	{
		if (unk_0x1C0640BA9A7327B3() > (uParam0->f_5.f_A + 0x0000AFC8))
		{
			return 0x00000001;
		}
	}
	else
	{
		uParam0->f_5.f_A = unk_0x1C0640BA9A7327B3();
		uParam0->f_11.f_5 = uParam0->f_11.f_4;
	}
	return 0x00000000;
}

float func_305(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 0x00000001:
		case 0x00000006:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 0x00000002:
		case 0x00000007:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 0x00000003:
		case 0x00000008:
			fParam2 = ((-SYSTEM::COS(func_306((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 0x00000004:
		case 0x00000009:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0x00000000:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			fVar0 = func_305(fParam0, fParam1, fParam2, 0x00000000);
			break;
		
		case 0x00000005:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			fVar0 = func_305(fParam0, fParam1, fParam2, 0x00000005);
			break;
	}
	return fVar0;
}

float func_306(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_307(struct<18> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	float fVar0;
	
	switch (Param0.f_11.f_13)
	{
		case 0x00000000:
			fVar0 = 32f;
			break;
		
		case 0x00000001:
			fVar0 = 36f;
			break;
		
		case 0x00000002:
			fVar0 = 40f;
			break;
		
		case 0x00000003:
			fVar0 = 44f;
			break;
	}
	fVar0 = (fVar0 + IntToFloat((0x00000003 * Global_1B416.f_61EC)));
	return fVar0;
}

void func_308()
{
	if (Local_46.f_5 && !Local_46.f_6)
	{
		if (Local_209.f_4 < 0x00000006)
		{
			Local_209 = func_234(iLocal_363, Local_47[Local_209.f_4 /*3*/], 0x00000001);
		}
		switch (Local_209.f_4)
		{
			case 0x00000005:
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_47.f_13, Local_47.f_16, Local_47.f_19, 0x00000000, 0x00000001, 0x00000000))
				{
					Local_209.f_3++;
					Local_209.f_2++;
					if (Local_209.f_3 < Local_47.f_41)
					{
						Local_209.f_9 = (unk_0x1C0640BA9A7327B3() - Local_209.f_A);
						if (Local_209.f_9 < Local_209.f_8)
						{
							Local_209.f_8 = Local_209.f_9;
						}
						Local_209.f_A = unk_0x1C0640BA9A7327B3();
						Local_209.f_4 = 0x00000000;
						Local_215 = 0x00000001;
					}
					else
					{
						Local_209.f_C = (unk_0x1C0640BA9A7327B3() - Local_46.f_7);
						if (Local_209.f_C < Global_1B416.f_61EC.f_1 || Global_1B416.f_61EC.f_1 == 0x00000000)
						{
							Global_1B416.f_61EC.f_1 = Local_209.f_C;
						}
						Local_209.f_D = 0x00000001;
						Local_46.f_6 = 0x00000001;
					}
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
					func_243(&Local_209);
				}
				break;
			
			default:
				if (Local_209 < 20f)
				{
					Local_209.f_2++;
					Local_209.f_4++;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
					func_243(&Local_209);
				}
				break;
		}
		if (!Local_46.f_6)
		{
			if (!iLocal_73)
			{
				if (unk_0x1C0640BA9A7327B3() < Local_46.f_7 + 500)
				{
					if (func_299(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
					{
						if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000047))
						{
							if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))))
							{
								unk_0x26174EF2CA74767F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
							}
							iLocal_109 = unk_0x1C0640BA9A7327B3() + 2000;
							unk_0x82A772610883F395("RaceTurbo", 0x00000000, 0x00000000);
							iLocal_73 = 0x00000001;
						}
					}
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_109 || !unk_0x06F8112AA79C53D9(0x00000000, 0x00000047))
			{
				if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))))
				{
					unk_0x26174EF2CA74767F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
				}
				iLocal_73 = 0x00000000;
			}
			else
			{
				unk_0xDFC6BA855748EB10(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0f, 20f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			}
			func_331();
			func_330(&Local_215, Local_209);
			func_318((unk_0x1C0640BA9A7327B3() - Local_46.f_7), 0x00000000, "", Local_209.f_3 + 1, Local_47.f_41, "", Local_209.f_6, 0x00000009, "", 0x00000000, 0x00000001, Local_209.f_2 + 1, 0x0000001E, "", 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, "", 0x00000006, Global_1B416.f_61EC.f_1, "CRACEBTIME", (unk_0x1C0640BA9A7327B3() - Local_209.f_A), "", 0x00000000, 0x00000001, 0xFFFFFFFF, "", -1f, 0x00000001, 0x00000001, -1f, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, "", 0x00000001);
			if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000014))
			{
				if (!Global_180528)
				{
					Global_180528 = 0x00000001;
				}
			}
			else if (Global_180528)
			{
				Global_180528 = 0x00000000;
			}
			func_309(&Local_209);
		}
	}
}

void func_309(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_4 + 1;
	if (uParam0->f_4 == 0x00000005)
	{
		if (uParam0->f_3 + 1 == Local_47.f_41)
		{
			func_311(uParam0, 0x00000001, 0x00000001);
		}
		else
		{
			func_311(uParam0, 0x00000000, 0x00000001);
			func_310(uParam0, Local_47[0x00000000 /*3*/], 0x00000000);
		}
	}
	else
	{
		if (uParam0->f_2 < 0x00000001)
		{
			func_311(uParam0, 0x00000000, 0x00000000);
		}
		else
		{
			func_311(uParam0, 0x00000000, 0x00000001);
		}
		if (iVar0 == 0x00000005)
		{
			func_310(uParam0, Local_47[iVar0 /*3*/], 0x00000001);
		}
		else
		{
			func_310(uParam0, Local_47[iVar0 /*3*/], 0x00000000);
		}
	}
}

void func_310(var uParam0, vector3 vParam1, bool bParam2)
{
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_F))
	{
		uParam0->f_F = unk_0x6CC513A908911CF0(vParam1);
		unk_0xF2D30B8ACAF12A39(uParam0->f_F, 0x00000000);
		if (!bParam2)
		{
			unk_0x61755AC17D8F538E(uParam0->f_F, 0x00000005);
			unk_0x516E63E474722206(uParam0->f_F, 0.7f);
		}
		else if (uParam0->f_3 == Local_47.f_41)
		{
			unk_0xBC8E0A7390523199(uParam0->f_F, 0x00000026);
			unk_0x516E63E474722206(uParam0->f_F, 1.2f);
		}
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_F, "BLIP_CPOINT");
	}
}

void func_311(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	float fVar13;
	float fVar14;
	
	iVar9 = func_317(uParam0->f_4);
	unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xA402F6C87C08815C(0x00000086, &iVar4, &iVar5, &iVar6, &uVar7);
	iVar3 = func_316(uParam0->f_4);
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_E))
	{
		if (uParam0->f_10 != 0x00000000)
		{
			unk_0xF0B0A50DF3EA0E70(uParam0->f_10, iVar0, iVar1, iVar2, iVar3);
			unk_0xF08C5AE8AC5C7427(uParam0->f_10, iVar4, iVar5, iVar6, iVar3);
		}
	}
	else
	{
		fVar13 = (8.5f * 1.333f);
		fVar14 = 6f;
		if (uParam0->f_4 == 0x00000005)
		{
			vVar11 = { Local_47[0x00000000 /*3*/] };
		}
		else
		{
			vVar11 = { Local_47[uParam0->f_4 + 1 /*3*/] };
		}
		if (uParam0->f_4 == 0x00000000)
		{
			iVar8 = 0x00000005;
		}
		else
		{
			iVar8 = (uParam0->f_4 - 0x00000001);
		}
		vVar10 = { Local_47[uParam0->f_4 /*3*/] };
		vVar12 = { Local_47[iVar8 /*3*/] };
		vVar10.z = (vVar10.z - 1f);
		vVar12.z = (vVar12.z - 1f);
		if (iVar8 == 0x00000005)
		{
			vVar12.z = (vVar12.z - 2f);
		}
		if (uParam0->f_4 == 0x00000005)
		{
			vVar10.z = (vVar10.z - 2f);
		}
		uParam0->f_E = unk_0x6CC513A908911CF0(vVar10);
		unk_0xF2D30B8ACAF12A39(uParam0->f_E, 0x00000000);
		if (!bParam1)
		{
			unk_0x61755AC17D8F538E(uParam0->f_E, 0x00000005);
			unk_0x516E63E474722206(uParam0->f_E, 1.2f);
			unk_0x2A065371C9D96655(uParam0->f_E, 0x00000009);
			uParam0->f_10 = unk_0x1B26E47E3E30075B(iVar9, vVar10 + Vector(fVar14, 0f, 0f), vVar11, fVar13, iVar0, iVar1, iVar2, iVar3, 0x00000000);
			unk_0xF08C5AE8AC5C7427(uParam0->f_10, iVar4, iVar5, iVar6, iVar3);
			func_312(uParam0->f_10, vVar10);
		}
		else
		{
			unk_0xBC8E0A7390523199(uParam0->f_E, 0x00000026);
			unk_0x516E63E474722206(uParam0->f_E, 1.2f);
			unk_0x2A065371C9D96655(uParam0->f_E, 0x00000009);
			uParam0->f_10 = unk_0x1B26E47E3E30075B(0x0000000A, vVar10 + Vector(fVar14, 0f, 0f), vVar11, fVar13, iVar0, iVar1, iVar2, iVar3, 0x00000000);
			unk_0xF08C5AE8AC5C7427(uParam0->f_10, iVar4, iVar5, iVar6, iVar3);
			func_312(uParam0->f_10, vVar10);
		}
		if (bParam2)
		{
			iVar9 = func_317(iVar8);
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &(uParam0->f_12));
			uParam0->f_12 = 0x000000B4;
			if (uParam0->f_11 != 0x00000000)
			{
				unk_0xE223EB8FE6F8CC15(uParam0->f_11);
			}
			vVar12 = { vVar12 };
			uParam0->f_11 = unk_0x1B26E47E3E30075B(iVar9, vVar12 + Vector(fVar14, 0f, 0f), vVar10, fVar13, iVar0, iVar1, iVar2, uParam0->f_12, 0x00000000);
			func_312(uParam0->f_11, vVar12);
		}
		unk_0x39BB9CA9BC90525F(uParam0->f_10, 9.5f, 9.5f, 30f);
		unk_0x39BB9CA9BC90525F(uParam0->f_11, 9.5f, 9.5f, 30f);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_E, "BLIP_CPOINT");
	}
	if (uParam0->f_11 != 0x00000000)
	{
		uParam0->f_12 = (uParam0->f_12 - 0x0000000A);
		if (uParam0->f_12 > 0x00000000)
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xF0B0A50DF3EA0E70(uParam0->f_11, iVar0, iVar1, iVar2, uParam0->f_12);
		}
		else
		{
			unk_0xE223EB8FE6F8CC15(uParam0->f_11);
		}
	}
}

void func_312(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1[8];
	float fVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000007)
	{
		vVar1[iVar0 /*3*/] = { vParam1 + func_315(iVar0) };
		unk_0xE82754C349C7B581(vVar1[iVar0 /*3*/], &fVar2, 0x00000000, 0x00000000);
		if (fVar2 < (vParam1.z - 2f) || fVar2 > (vParam1.z + 2f))
		{
			vVar1[iVar0 /*3*/].f_2 = vParam1.z;
		}
		else
		{
			vVar1[iVar0 /*3*/].f_2 = fVar2;
		}
		iVar0++;
	}
	vVar3 = { func_313(&vVar1) };
	unk_0x94BC93E0CAEF9AB6(iParam0, vParam1 - Vector(0.3f, 0f, 0f), vVar3);
}

Vector3 func_313(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		vVar1 = { *(uParam0[iVar0 /*3*/]) };
		vVar2 = { *(uParam0[(iVar0 + 1 % *uParam0) /*3*/]) };
		vVar3.x = (vVar3.x + ((vVar1.y - vVar2.y) * (vVar1.z + vVar2.z)));
		vVar3.y = (vVar3.y + ((vVar1.z - vVar2.z) * (vVar1.x + vVar2.x)));
		vVar3.z = (vVar3.z + ((vVar1.x - vVar2.x) * (vVar1.y + vVar2.y)));
		iVar0++;
	}
	return func_314(vVar3);
}

Vector3 func_314(vector3 vParam0)
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

Vector3 func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0f, 0f, 1f;
		
		case 0x00000001:
			return (7.5f / 2f), 0f, 1f;
		
		case 0x00000002:
			return (-7.5f / 2f), 0f, 1f;
		
		case 0x00000003:
			return 0f, (7.5f / 2f), 1f;
		
		case 0x00000004:
			return 0f, (-7.5f / 2f), 1f;
		
		case 0x00000005:
			return (7.5f / 2f), (7.5f / 2f), 1f;
		
		case 0x00000006:
			return (-7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 0x00000007:
			return (7.5f / 2f), (-7.5f / 2f), 1f;
		
		case 0x00000008:
			return (-7.5f / 2f), (7.5f / 2f), 1f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_316(int iParam0)
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0x000000F0;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		fVar0 = unk_0x0EB28750412C3A5A(Local_47[iParam0 /*3*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
		if (fVar0 > 100f)
		{
			iVar1 = 0x000000F0;
		}
		else
		{
			iVar1 = SYSTEM::ROUND((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_317(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	vVar0 = { Local_47[iParam0 /*3*/] };
	if (iParam0 + 1 == 0x00000006)
	{
		vVar1 = { Local_47[0x00000000 /*3*/] };
	}
	else
	{
		vVar1 = { Local_47[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 0x00000001) >= 0x00000000)
	{
		vVar2 = { Local_47[(iParam0 - 0x00000001) /*3*/] };
	}
	vVar3 = { vVar2 - vVar0 };
	vVar4 = { vVar1 - vVar0 };
	fVar5 = unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar4.x, vVar4.y);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fLocal_30)
	{
		return 0x00000008;
	}
	else if (fVar5 < fLocal_31)
	{
		return 0x00000007;
	}
	else if (fVar5 < fLocal_32)
	{
		return 0x00000006;
	}
	else
	{
		return 0x00000006;
	}
	return 0x00000006;
}

void func_318(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, char* sParam17, int iParam18, int iParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, bool bParam24, int iParam25, char* sParam26, float fParam27, int iParam28, int iParam29, float fParam30, int iParam31, bool bParam32, int iParam33, int iParam34, char* sParam35, bool bParam36)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;
	char* sVar10;
	char* sVar11;
	
	if (bParam24)
	{
		iVar0 = 0x00000001;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	if (iParam34 != 0xFFFFFFFF)
	{
		func_113(iParam34, "TIMER_CHALLTIME", iParam9, iVar0, iParam25, 0x00000000, 0x0000000A, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	func_329();
	if (fParam27 > -1f)
	{
		func_326(0x00000000, "", iParam25, iParam28, 0x0000000A, 0x00000000, sParam26, 0x00000001, fParam27, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam15 > 0xFFFFFFFF)
	{
		sVar1 = sParam17;
		if (func_325(sVar1))
		{
			sVar1 = "TIM_DAMAGE";
		}
		func_230(iParam15, iParam16, sVar1, iParam18, iParam25, 0x0000000A, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (!bParam32 || func_324())
	{
		if (iParam6 > 0xFFFFFFFF && iParam7 > 0x00000000)
		{
			sVar2 = sParam8;
			if (func_325(sVar2))
			{
				sVar2 = "TIM_POSIT";
			}
			func_323(iParam6, iParam7, sVar2, iParam10, iParam25, 0x00000007, 0x00000000, 0x00000000, 0x00000000, iParam10, 0x00000000);
		}
	}
	if (iParam3 > 0xFFFFFFFF)
	{
		sVar3 = sParam5;
		if (func_325(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam3 = iParam3;
		iParam4 = iParam4;
		if (Global_180528)
		{
			if (func_322())
			{
				func_321(iParam3, iParam4, sVar3, iParam25, 0x00000001, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x000000FF, 0x00000000);
			}
		}
	}
	if (iParam11 > 0xFFFFFFFF && iParam12 > 0xFFFFFFFF)
	{
		sVar4 = sParam13;
		if (func_325(sVar4))
		{
			sVar4 = "TIM_CHECKPOIN";
		}
		iParam14 = iParam14;
		if (Global_180528)
		{
			func_323(iParam11, iParam12, sVar4, iParam14, iParam25, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
	}
	if (fParam30 > -1f)
	{
		sVar5 = "TIM_DISTANCE";
		sVar6 = "FMMC_LENGTHM";
		func_326(0x00000000, sVar5, 0xFFFFFFFF, 0x00000001, 0x00000007, 0x00000000, sVar6, 0x00000001, fParam30, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	if (iParam19 > 0xFFFFFFFF)
	{
		sVar7 = sParam20;
		if (func_325(sVar7))
		{
			sVar7 = "TIMER_BESLAP";
		}
	}
	if ((((Global_440000.f_127B9 != 0x00000001 && Global_440000.f_127B9 != 0x00000003) && Global_440000.f_127B9 != 0x00000005) && Global_440000.f_127B9 != 0x00000007) && Global_440000.f_127B9 != 0x00000013)
	{
		if (iParam21 > 0xFFFFFFFF)
		{
			if (!func_145(unk_0xD803B885F5E47A62()))
			{
				sVar8 = sParam22;
				if (func_325(sVar8))
				{
					sVar8 = "TIMER_CURLAP";
				}
				func_113(iParam21, sVar8, 0x00000000, 0x00000001, iParam25, iParam23, 0x00000006, 0x00000000, iParam29, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
	}
	if (func_325(sVar9))
	{
		sVar9 = func_320(iParam1);
	}
	if (!bParam36)
	{
		if ((bParam32 || Global_180528) || func_319() == 0x00000002)
		{
			if (bParam32)
			{
				if (Global_180528 && !unk_0xEA6BC48857E0AC4C(sParam35))
				{
					func_113(iParam31, sParam35, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000, iParam31 <= 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				else if (iParam31 <= 0x00000000)
				{
					func_113(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				else
				{
					func_113(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			else if (func_319() == 0x00000002 && !unk_0xEA6BC48857E0AC4C(sParam35))
			{
				func_113(iParam31, sParam35, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000, iParam31 <= 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else if (iParam31 <= 0x00000000)
			{
				func_113(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else
			{
				func_113(iParam31, sVar9, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
		}
	}
	else if (Global_180528 || func_319() == 0x00000002)
	{
		if (iParam19 <= 0x00000000)
		{
			func_113(iParam19, sParam20, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		else
		{
			func_113(iParam19, sParam20, iParam9, 0x00000001, iParam25, 0x00000000, 0x00000005, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
	}
	sVar10 = sParam2;
	if (func_325(sVar10))
	{
		sVar10 = "TIMER_TIME_RCE";
	}
	if (iParam0 > 0xFFFFFFFF)
	{
		func_113(iParam0, sVar10, iParam9, iVar0, iParam25, 0x00000000, 0x00000004, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	if (func_325(sVar11))
	{
		sVar11 = "TIMER_CHALLTIME";
	}
	iParam33 = iParam33;
}

int func_319()
{
	return Global_150392.f_44;
}

char* func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "TIMER_WORLDTIME";
			break;
		
		case 0x00000001:
			return "FRIEND_WORLDTIME";
			break;
		
		case 0x00000002:
			return "CREW_WORLDTIME";
			break;
		
		case 0x00000003:
			return "PERS_WORLDTIME";
			break;
	}
	return "";
}

void func_321(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_115(0x00000004, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_114(0x00000004, iVar0);
		Global_150976.f_CC8[iVar0] = iParam0;
		Global_150976.f_CC8.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_CC8.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_CC8.f_B7[iVar0] = iParam3;
		Global_150976.f_CC8.f_D8[iVar0] = iParam5;
		Global_150976.f_CC8.f_C2[iVar0] = iParam4;
		Global_150976.f_CC8.f_E3[iVar0] = iParam6;
		Global_150976.f_CC8.f_10E[iVar0] = iParam7;
		Global_150976.f_CC8.f_119[iVar0] = iParam8;
		Global_150976.f_CC8.f_124[iVar0] = iParam9;
		Global_150976.f_CC8.f_12F[iVar0] = iParam10;
		Global_150976.f_CC8.f_13A[iVar0] = iParam11;
		Global_150976.f_CC8.f_145[iVar0] = iParam13;
		Global_150976.f_CC8.f_150[iVar0] = iParam14;
		Global_150976.f_CC8.f_15B[iVar0] = iParam15;
		if (((iParam0 > 0x00000009 && iParam1 > 0x00000009) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_150976.f_46A = 0x00000001;
		}
	}
}

int func_322()
{
	return 0x00000001;
	return 0x00000000;
}

void func_323(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_115(0x00000005, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_114(0x00000005, iVar0);
		Global_150976.f_E2E[iVar0] = iParam0;
		Global_150976.f_E2E.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_E2E.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_E2E.f_C2[iVar0] = uParam3;
		Global_150976.f_E2E.f_B7[iVar0] = iParam4;
		Global_150976.f_E2E.f_D8[iVar0] = iParam5;
		Global_150976.f_E2E.f_E3[iVar0] = iParam6;
		Global_150976.f_E2E.f_10E[iVar0] = iParam7;
		Global_150976.f_E2E.f_119[iVar0] = iParam8;
		Global_150976.f_E2E.f_124[iVar0] = iParam9;
		Global_150976.f_E2E.f_12F[iVar0] = iParam10;
	}
}

bool func_324()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 0x00000002);
}

int func_325(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_326(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_115(0x00000006, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_114(0x00000006, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = fParam8;
		Global_150976.f_F68.f_1F1[iVar0] = iParam9;
		Global_150976.f_F68.f_1FC[iVar0] = iParam10;
		Global_150976.f_F68.f_CD[iVar0] = iParam11;
		Global_150976.f_F68.f_D8[iVar0] = iParam12;
		Global_150976.f_F68.f_E3[iVar0] = iParam13;
		Global_150976.f_F68.f_EE[iVar0] = iParam14;
		Global_150976.f_F68.f_F9[iVar0] = iParam15;
		Global_150976.f_F68.f_207[iVar0] = iParam16;
		Global_150976.f_F68.f_212[iVar0] = iParam17;
		Global_150976.f_F68.f_21D[iVar0] = iParam18;
		Global_150976.f_F68.f_228[iVar0] = iParam19;
		Global_150976.f_F68.f_233[iVar0] = iParam20;
		Global_150976.f_F68.f_23E[iVar0] = iParam21;
		Global_150976.f_F68.f_249[iVar0] = iParam22;
		Global_150976.f_F68.f_254[iVar0] = iParam23;
		Global_150976.f_F68.f_25F[iVar0] = iParam24;
		Global_150976.f_F68.f_C2[iVar0] = iParam25;
		if (iParam15 == 0x00000005 && func_328())
		{
			Global_150976.f_46A = 0x00000001;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0x00000000;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 0x00000500 && iVar4 >= 0x000003C0)
			{
				iVar2 = 0x00000001;
			}
			if (iParam0 > 0x05F5E0FF)
			{
				Global_150976.f_46E = 0x00000001;
			}
			else if (iParam0 > 0x0098967F || iVar2)
			{
				Global_150976.f_46D = 0x00000001;
			}
			else if (iParam0 > 0x000003E7)
			{
				Global_150976.f_46A = 0x00000001;
			}
			if (func_327())
			{
				Global_150976.f_46E = 0x00000001;
			}
		}
	}
}

int func_327()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 0x00000400)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_328()
{
	if (((unk_0xB3260A60545D3F11() == 0x00000008 || unk_0xB3260A60545D3F11() == 0x00000009) || unk_0xB3260A60545D3F11() == 0x0000000A) || unk_0xB3260A60545D3F11() == 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_329()
{
	char* sVar0;
	int iVar1;
	
	if ((Global_140643 == 0x00000001 || Global_14064A == 0x00000001) || Global_14063F.f_3 == 0x00000001)
	{
		if (Global_140643 == 0x00000001)
		{
			sVar0 = "HUD_SPIKES";
			iVar1 = 0x00000001;
		}
		else if (Global_14064A == 0x00000001)
		{
			switch (Global_14064A.f_1)
			{
				case 0x00000000:
					iVar1 = 0x00000002;
					sVar0 = "HUD_ROCKET";
					break;
				
				case 0x00000001:
					iVar1 = 0x00000003;
					sVar0 = "HUD_ROCKET_H";
					break;
				
				case 0x00000002:
					iVar1 = 0x00000002;
					sVar0 = "HUD_ROCKET_NH";
					break;
			}
		}
		else if (Global_14063F.f_3 == 0x00000001)
		{
			sVar0 = "HUD_BOOSTS";
			iVar1 = 0x00000004;
		}
		func_326(0x00000001, sVar0, 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, "", 0x00000000, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
	else if (Global_14065A == 0x00000001)
	{
		sVar0 = "HUD_VEH_GUN";
		iVar1 = 0x00000009;
		func_326(Global_14065A.f_1, sVar0, 0xFFFFFFFF, 0x00000001, 0x00000005, 0x00000000, "", 0x00000000, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, iVar1, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
	}
}

void func_330(int iParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (*iParam0)
	{
		case 0x00000001:
			iParam0->f_2 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
			if (unk_0x83D8570832F172A7(iParam0->f_2))
			{
				*iParam0 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			unk_0x7E60C62A7CE58FC8(iParam0->f_2, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x7ACC3006A87F8B39("BM_LAP_STR");
			unk_0x3A820E495A7BA3E5(0x00000001);
			unk_0x6B012227B3921E18("BM_LAP");
			unk_0x3A820E495A7BA3E5(0x00000001);
			unk_0x6D99DF8263D35CE5(Param1.f_3 + 1);
			unk_0x3A820E495A7BA3E5(0x00000001);
			unk_0x6D99DF8263D35CE5(Local_47.f_41);
			unk_0x779B34565F4D71B1();
			unk_0x7A8BB56B212464AC();
			iParam0->f_1 = unk_0x1C0640BA9A7327B3() + 3000;
			*iParam0 = 0x00000003;
			break;
		
		case 0x00000003:
			if (unk_0x1C0640BA9A7327B3() < (iParam0->f_1 - 0x000001F4))
			{
				if (unk_0x83D8570832F172A7(iParam0->f_2))
				{
					unk_0x6567AE843FADBA94(iParam0->f_2, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					unk_0xD9ACBBA59FD5A09E(0x00000004);
				}
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(iParam0->f_2, "SHARD_ANIM_OUT");
				unk_0x3CAEA85DA607305E(0x00000001);
				unk_0x7C19E5E4784BD7CF(0.33f);
				unk_0x7E60D21B163E9D56();
				*iParam0 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (unk_0x1C0640BA9A7327B3() < iParam0->f_1)
			{
				if (unk_0x83D8570832F172A7(iParam0->f_2))
				{
					unk_0x6567AE843FADBA94(iParam0->f_2, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					unk_0xD9ACBBA59FD5A09E(0x00000004);
				}
			}
			else
			{
				if (unk_0x83D8570832F172A7(iParam0->f_2))
				{
					unk_0xE17FDF9E3068281B(&(iParam0->f_2));
				}
				unk_0xE17FDF9E3068281B(&(iParam0->f_2));
				*iParam0 = 0x00000000;
			}
			break;
	}
}

void func_331()
{
	Global_150976.f_46A = 0x00000001;
}

void func_332()
{
	if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1688.299f, 3336.851f, 24.68442f, 2475.163f, 2991.082f, 120.0549f, 480f, 0x00000000, 0x00000001, 0x00000000))
	{
		func_242(0x00000003);
		sLocal_113 = "CRACEFAIL1";
	}
}

void func_333()
{
	iLocal_106 = 0x00000000;
	iLocal_107 = 0x00000000;
	iLocal_112 = 0x00000000;
	iLocal_109 = 0x00000000;
	iLocal_73 = 0x00000000;
	iLocal_111 = 0x00000000;
	func_341(&Local_47);
	func_340(&Local_121);
	func_339(&Local_119, &Local_121);
	func_338(&Local_120);
	func_337(&Local_122);
	func_336(&Local_209);
	func_335(&Local_46);
	func_334();
}

void func_334()
{
	Local_215 = 0x00000000;
	Local_215.f_1 = 0x00000000;
}

void func_335(int iParam0)
{
	iParam0->f_5 = 0x00000000;
	iParam0->f_6 = 0x00000000;
	iParam0->f_7 = 0x00000000;
}

void func_336(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0f;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0xFFFFFFFF;
	uParam0->f_6 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_C = 0x00000000;
	uParam0->f_D = 0x00000000;
	if (Global_1B416.f_61EC != 0x00000004)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
		if (iVar0 == 0x00000000)
		{
			uParam0->f_13 = 0x00000001;
		}
		else if (iVar0 == 0x00000001)
		{
			uParam0->f_13 = 0x00000000;
		}
		else if (iVar0 == 0x00000002)
		{
			uParam0->f_13 = 0x00000002;
		}
	}
	else
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000006);
		if (iVar0 == 0x00000000)
		{
			uParam0->f_13 = 0x00000001;
		}
		else if (iVar0 == 0x00000001 || iVar0 == 0x00000002)
		{
			uParam0->f_13 = 0x00000000;
		}
		else if ((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005)
		{
			uParam0->f_13 = 0x00000002;
		}
	}
}

void func_337(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		(iParam0[iVar0 /*11*/])->f_9 = 0x00000000;
		(iParam0[iVar0 /*11*/])->f_A = 0x00000000;
		iVar0++;
	}
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000017)
	{
		(iParam0[iVar0 /*50*/])->f_29 = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2A = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2C = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2D = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2B = 0x00000000;
		iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
		if (iVar1 == 0x00000000)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_f_y_tourist_01");
		}
		else if (iVar1 == 0x00000001)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_f_y_tourist_02");
		}
		else if (iVar1 == 0x00000002)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_m_tourist_01");
		}
		else if (iVar1 == 0x00000003)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_m_hillbilly_02");
		}
		StringCopy(&((iParam0[iVar0 /*50*/])->f_2E), "Ambient Ped ", 16);
		StringIntConCat(&((iParam0[iVar0 /*50*/])->f_2E), iVar0, 16);
		switch (iVar0)
		{
			case 0x00000000:
				(iParam0[iVar0 /*50*/])->f_25 = { 1977.843f, 3129.412f, 45.9792f };
				(iParam0[iVar0 /*50*/])->f_28 = 122.9084f;
				break;
			
			case 0x00000001:
				(iParam0[iVar0 /*50*/])->f_25 = { 1969.595f, 3115.701f, 45.8988f };
				(iParam0[iVar0 /*50*/])->f_28 = -32.152f;
				break;
			
			case 0x00000002:
				(iParam0[iVar0 /*50*/])->f_25 = { 1986.622f, 3123.347f, 46.0496f };
				(iParam0[iVar0 /*50*/])->f_28 = 143.293f;
				break;
			
			case 0x00000003:
				(iParam0[iVar0 /*50*/])->f_25 = { 1968.123f, 3117.722f, 45.9001f };
				(iParam0[iVar0 /*50*/])->f_28 = 182.6841f;
				break;
			
			case 0x00000004:
				(iParam0[iVar0 /*50*/])->f_25 = { 1866.502f, 3220.542f, 44.2959f };
				(iParam0[iVar0 /*50*/])->f_28 = 283.4628f;
				break;
			
			case 0x00000005:
				(iParam0[iVar0 /*50*/])->f_25 = { 1866.734f, 3226.219f, 44.2235f };
				(iParam0[iVar0 /*50*/])->f_28 = 253.3484f;
				break;
			
			case 0x00000006:
				(iParam0[iVar0 /*50*/])->f_25 = { 1932.064f, 3262.209f, 44.7989f };
				(iParam0[iVar0 /*50*/])->f_28 = 184.9414f;
				break;
			
			case 0x00000007:
				(iParam0[iVar0 /*50*/])->f_25 = { 1939.296f, 3269.148f, 45.2262f };
				(iParam0[iVar0 /*50*/])->f_28 = 196.2922f;
				break;
			
			case 0x00000008:
				(iParam0[iVar0 /*50*/])->f_25 = { 1936.04f, 3264.806f, 44.8089f };
				(iParam0[iVar0 /*50*/])->f_28 = 179.3959f;
				break;
			
			case 0x00000009:
				(iParam0[iVar0 /*50*/])->f_25 = { 1938.14f, 3266.329f, 44.8089f };
				(iParam0[iVar0 /*50*/])->f_28 = 208.0957f;
				break;
			
			case 0x0000000A:
				(iParam0[iVar0 /*50*/])->f_25 = { 1969.938f, 3262.41f, 44.5866f };
				(iParam0[iVar0 /*50*/])->f_28 = 135.3289f;
				break;
			
			case 0x0000000B:
				(iParam0[iVar0 /*50*/])->f_25 = { 2129.336f, 3274.596f, 45.093f };
				(iParam0[iVar0 /*50*/])->f_28 = 158.6073f;
				break;
			
			case 0x0000000C:
				(iParam0[iVar0 /*50*/])->f_25 = { 2131.781f, 3273.956f, 45.093f };
				(iParam0[iVar0 /*50*/])->f_28 = 144.4747f;
				break;
			
			case 0x0000000D:
				(iParam0[iVar0 /*50*/])->f_25 = { 2135.285f, 3273.007f, 45.1832f };
				(iParam0[iVar0 /*50*/])->f_28 = 164.2929f;
				break;
			
			case 0x0000000E:
				(iParam0[iVar0 /*50*/])->f_25 = { 2135.561f, 3274.741f, 45.6104f };
				(iParam0[iVar0 /*50*/])->f_28 = 166.3804f;
				break;
			
			case 0x0000000F:
				(iParam0[iVar0 /*50*/])->f_25 = { 2243.927f, 3247.596f, 47.1535f };
				(iParam0[iVar0 /*50*/])->f_28 = 113.5077f;
				break;
			
			case 0x00000010:
				(iParam0[iVar0 /*50*/])->f_25 = { 2242.918f, 3248.862f, 47.1472f };
				(iParam0[iVar0 /*50*/])->f_28 = 94.3813f;
				break;
			
			case 0x00000011:
				(iParam0[iVar0 /*50*/])->f_25 = { 2276.538f, 2995.181f, 44.9018f };
				(iParam0[iVar0 /*50*/])->f_28 = 343.2186f;
				break;
			
			case 0x00000012:
				(iParam0[iVar0 /*50*/])->f_25 = { 2272.339f, 2995.217f, 44.7997f };
				(iParam0[iVar0 /*50*/])->f_28 = 354.5168f;
				break;
			
			case 0x00000013:
				(iParam0[iVar0 /*50*/])->f_25 = { 2008.773f, 3110.642f, 45.9644f };
				(iParam0[iVar0 /*50*/])->f_28 = 212.1216f;
				break;
			
			case 0x00000014:
				(iParam0[iVar0 /*50*/])->f_25 = { 1993.863f, 3099.198f, 45.9635f };
				(iParam0[iVar0 /*50*/])->f_28 = 336.9819f;
				break;
			
			case 0x00000015:
				(iParam0[iVar0 /*50*/])->f_25 = { 1991.992f, 3100.387f, 45.9819f };
				(iParam0[iVar0 /*50*/])->f_28 = 332.381f;
				break;
			
			case 0x00000016:
				(iParam0[iVar0 /*50*/])->f_25 = { 1987.643f, 3102.67f, 46.0614f };
				(iParam0[iVar0 /*50*/])->f_28 = 327.4696f;
				break;
		}
		iVar0++;
	}
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		(iParam0[iVar0 /*50*/])->f_29 = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2A = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2C = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2D = 0x00000000;
		(iParam0[iVar0 /*50*/])->f_2B = 0x00000001;
		(iParam0[iVar0 /*50*/])->f_4 = iLocal_59;
		iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
		if (iVar1 == 0x00000000)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_y_motox_01");
		}
		else if (iVar1 == 0x00000001)
		{
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_y_motox_02");
		}
		iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000006);
		if (iVar1 == 0x00000000)
		{
			(iParam0[iVar0 /*50*/])->f_11.f_13 = 0x00000001;
		}
		else if (iVar1 == 0x00000001 || iVar1 == 0x00000002)
		{
			(iParam0[iVar0 /*50*/])->f_11.f_13 = 0x00000000;
		}
		else if ((iVar1 == 0x00000003 || iVar1 == 0x00000004) || iVar1 == 0x00000005)
		{
			(iParam0[iVar0 /*50*/])->f_11.f_13 = 0x00000002;
		}
		StringCopy(&((iParam0[iVar0 /*50*/])->f_2E), "Racer ", 16);
		StringIntConCat(&((iParam0[iVar0 /*50*/])->f_2E), iVar0, 16);
		(iParam0[iVar0 /*50*/])->f_5 = { *(iParam1[iVar0 /*12*/]) };
		(iParam0[iVar0 /*50*/])->f_2B = 0x00000000;
		func_336(&((iParam0[iVar0 /*50*/])->f_11));
		(iParam0[iVar0 /*50*/])->f_11.f_B = iVar0;
		(iParam0[iVar0 /*50*/])->f_25 = { Local_47.f_1A[iVar0 /*3*/] };
		(iParam0[iVar0 /*50*/])->f_28 = Local_47.f_36[iVar0];
		if (iVar0 == 0x00000001)
		{
			(iParam0[iVar0 /*50*/])->f_11.f_13 = 0x00000003;
			(iParam0[iVar0 /*50*/])->f_3 = joaat("a_m_y_motox_02");
		}
		iVar0++;
	}
}

void func_340(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		(iParam0[iVar0 /*12*/])->f_7 = 0x00000000;
		(iParam0[iVar0 /*12*/])->f_8 = 0x00000000;
		switch (Global_1B416.f_61EC)
		{
			case 0x00000000:
				switch (iVar0)
				{
					case 0x00000000:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buccaneer");
						break;
					
					case 0x00000001:
						(iParam0[iVar0 /*12*/])->f_2 = func_136();
						break;
					
					case 0x00000002:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("manana");
						break;
					
					case 0x00000003:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("tornado");
						break;
					
					case 0x00000004:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("blade");
						break;
					
					case 0x00000005:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("vigero");
						break;
					
					case 0x00000006:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("warrener");
						break;
					
					case 0x00000007:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("peyote");
						break;
				}
				break;
			
			case 0x00000001:
				switch (iVar0)
				{
					case 0x00000000:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator");
						break;
					
					case 0x00000001:
						(iParam0[iVar0 /*12*/])->f_2 = func_136();
						break;
					
					case 0x00000002:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("sabregt");
						break;
					
					case 0x00000003:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo");
						break;
					
					case 0x00000004:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("ruiner");
						break;
					
					case 0x00000005:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("coquette2");
						break;
					
					case 0x00000006:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dukes");
						break;
					
					case 0x00000007:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("phoenix");
						break;
				}
				break;
			
			case 0x00000002:
				switch (iVar0)
				{
					case 0x00000000:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("pigalle");
						break;
					
					case 0x00000001:
						(iParam0[iVar0 /*12*/])->f_2 = func_136();
						break;
					
					case 0x00000002:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("futo");
						break;
					
					case 0x00000003:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("rapidgt");
						break;
					
					case 0x00000004:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("sultan");
						break;
					
					case 0x00000005:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("phoenix");
						break;
					
					case 0x00000006:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("vigero");
						break;
					
					case 0x00000007:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("sabregt");
						break;
				}
				break;
			
			case 0x00000003:
				switch (iVar0)
				{
					case 0x00000000:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 0x00000001:
						(iParam0[iVar0 /*12*/])->f_2 = func_136();
						break;
					
					case 0x00000002:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 0x00000003:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 0x00000004:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 0x00000005:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("stalion2");
						break;
					
					case 0x00000006:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("stalion2");
						break;
					
					case 0x00000007:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
				}
				break;
			
			case 0x00000004:
				switch (iVar0)
				{
					case 0x00000000:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 0x00000001:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 0x00000002:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("stalion2");
						break;
					
					case 0x00000003:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo3");
						break;
					
					case 0x00000004:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("gauntlet2");
						break;
					
					case 0x00000005:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo3");
						break;
					
					case 0x00000006:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("dominator2");
						break;
					
					case 0x00000007:
						(iParam0[iVar0 /*12*/])->f_2 = joaat("buffalo3");
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_341(var uParam0)
{
	uParam0->f_40 = "CountryTrack2Backwards";
	uParam0->f_41 = 0x00000005;
	uParam0->f_13 = { 1952.027f, 3120.291f, 45.15582f };
	uParam0->f_16 = { 1967.819f, 3145.207f, 50.28004f };
	uParam0->f_19 = 20f;
	*(uParam0[0x00000000 /*3*/]) = { 1874f, 3219.9f, 45.4f };
	*(uParam0[0x00000001 /*3*/]) = { 2003.4f, 3300.5f, 45.7f };
	*(uParam0[0x00000002 /*3*/]) = { 2238.1f, 3239.8f, 48.1f };
	*(uParam0[0x00000003 /*3*/]) = { 2280.9f, 3007f, 46f };
	*(uParam0[0x00000004 /*3*/]) = { 2144.7f, 3034.1f, 45.4f };
	*(uParam0[0x00000005 /*3*/]) = { 1968.9f, 3127.1f, 46.9f };
	uParam0->f_1A[0x00000000 /*3*/] = { 1969.251f, 3122.565f, 46.0076f };
	uParam0->f_36[0x00000000] = 53.7102f;
	uParam0->f_1A[0x00000001 /*3*/] = { 1971f, 3125.064f, 46.036f };
	uParam0->f_36[0x00000001] = 52.6994f;
	uParam0->f_1A[0x00000002 /*3*/] = { 1972.986f, 3128.541f, 46.0069f };
	uParam0->f_36[0x00000002] = 54.9611f;
	uParam0->f_1A[0x00000003 /*3*/] = { 1975.501f, 3117.38f, 46.0271f };
	uParam0->f_36[0x00000003] = 56.1329f;
	uParam0->f_1A[0x00000004 /*3*/] = { 1977.609f, 3120.305f, 46.0576f };
	uParam0->f_36[0x00000004] = 52.8064f;
	uParam0->f_1A[0x00000005 /*3*/] = { 1979.872f, 3123.513f, 46.0285f };
	uParam0->f_36[0x00000005] = 54.0832f;
	uParam0->f_1A[0x00000006 /*3*/] = { 1981.754f, 3112.13f, 46.0491f };
	uParam0->f_36[0x00000006] = 47.3411f;
	uParam0->f_1A[0x00000007 /*3*/] = { 1984.234f, 3115.164f, 46.0766f };
	uParam0->f_36[0x00000007] = 58.6868f;
	uParam0->f_1A[0x00000008 /*3*/] = { 1986.348f, 3118.184f, 46.0478f };
	uParam0->f_36[0x00000008] = 55.8988f;
}

void func_342()
{
	if (func_351())
	{
		func_233(0x000001F4);
	}
	unk_0x9CBC55A05A07FC47(0x00000001);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0x9A82EEAF6CA12AEE(1f);
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	func_350();
	func_346(&iLocal_123, 0x00000001, 0x00000000);
	iLocal_212 = 0x00000000;
	iLocal_363 = unk_0x16F2683693E537C9();
	func_345(sLocal_72, 0x0000000B, 0x00000000);
	func_344(Local_47[0x00000000 /*3*/], 1000f);
	unk_0x7D6CA5F52B3748BF(2270.041f, 3007f, 44.1942f, 2276.215f, 3010.543f, 48.0713f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	unk_0x752C7D5696C0D8A0(0x00000001);
	unk_0xE342F209E49C5314(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0x00000000, 0x00000001);
	unk_0x21688103CC7F9B19(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0x00000000);
	func_343(0x00000001);
	unk_0xB5376EA942202450(2565.207f, 2896.662f, 29.9408f, 1654.53f, 3420.822f, 63.94006f, 470f, 0x00000000, 0x00000000, 0x00000001);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_BIKER", 0x00000000);
	unk_0xCD7D80FD792F9954("DRIVE", 0x00000000);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000000);
	unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", 0x00000000);
	unk_0xFF42993F8A095C58(0x00000000);
	unk_0x2733E1E56786AB9E(0x00000001);
	unk_0xC83E7A5E408DF68C(0x00000000);
	unk_0x3F50EAA916065520(0x00000001);
	unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x060F249A9A3E3F4E(0x00000000);
	unk_0x51B096AAC60548C1(0f);
	unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0xCE1730371ACDCCFC(0x00000001);
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(0x00000000);
	}
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
}

void func_343(int iParam0)
{
	Global_126B1.f_8A = iParam0;
}

int func_344(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	
	vVar0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0x7D6CA5F52B3748BF(vParam0 - vVar0, vParam0 + vVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_345(char* sParam0, int iParam1, bool bParam2)
{
	unk_0x23249A21DED9ADF1(sParam0, iParam1);
	if (bParam2)
	{
		while (!unk_0x67C1D9E5B91B2E37(iParam1))
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

void func_346(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001E))
	{
		bParam1 = 0x00000001;
	}
	func_349(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_348(iVar0, iParam0);
		func_347(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001F)
	{
		if (iVar0 != 0x00000008)
		{
			unk_0x0674E58A79778E99(&(iParam0->f_D), iVar0);
			unk_0x0674E58A79778E99(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
	iParam0->f_6 = 0x00000000;
	iParam0->f_C = 0x00000000;
	iParam0->f_F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar0]))
		{
			unk_0xA245D14CC59CDD36(iParam0->f_11[iVar0], 0x00000001);
			unk_0x7D732AB707BE9152(iParam0->f_11[iVar0], 0x00000001);
			if (bParam2)
			{
				unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x00000020, 0x00000001);
				unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x00000131, 0x00000000);
			}
			unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x0000010C, 0x00000000);
			if (bParam1)
			{
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar0], func_134()) && iParam0->f_11[iVar0] != unk_0x16F2683693E537C9())
				{
					unk_0x0A94A109271BE75A(iParam0->f_11[iVar0]);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001D))
			{
				unk_0xD5EF6A937E06E46F(iParam0->f_11[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000);
			}
			iParam0->f_11[iVar0] = 0x00000000;
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000001);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
		}
	}
	iParam0->f_15 = 0x00000000;
}

void func_347(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000011);
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000012);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000013);
			break;
	}
}

void func_348(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x0000000E);
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x0000000F);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000010);
			break;
	}
}

void func_349(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_5));
	}
}

void func_350()
{
	unk_0xF63400DBE3303D26("ENEMIES", &iLocal_213);
	unk_0xF63400DBE3303D26("BUDDIES", &iLocal_214);
	unk_0xF63400DBE3303D26("RACERS", &iLocal_59);
	unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_213);
	unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, iLocal_214);
	unk_0x0E2400AB9174FA81(0x000000FF, 0x6F0783F5, iLocal_59);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_214, iLocal_213);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_214, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x000000FF, iLocal_214, iLocal_59);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_213, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_213, iLocal_214);
	unk_0x0E2400AB9174FA81(0x000000FF, iLocal_213, iLocal_59);
	unk_0x0E2400AB9174FA81(0x000000FF, iLocal_59, iLocal_213);
	unk_0x0E2400AB9174FA81(0x000000FF, iLocal_59, iLocal_214);
	unk_0x0E2400AB9174FA81(0x000000FF, iLocal_59, 0x6F0783F5);
}

int func_351()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_352(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	unk_0x8C26F31DFF77D124();
	func_366(bParam1);
	func_365(bParam1, iParam2);
	func_363(bParam1);
	func_362();
	func_361();
	func_360();
	if (Local_209.f_10 != 0x00000000)
	{
		unk_0xE223EB8FE6F8CC15(Local_209.f_10);
	}
	if (Local_209.f_11 != 0x00000000)
	{
		unk_0xE223EB8FE6F8CC15(Local_209.f_11);
	}
	func_359(&uLocal_75);
	func_346(&iLocal_123, 0x00000001, 0x00000000);
	func_357();
	func_355();
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0x9A82EEAF6CA12AEE(1f);
	func_137(0x00000000, 0x00000000, 0x00000000, 0x000007D0, 0x00000001, 0x00000000);
	unk_0x225CFE81EA219E44();
	unk_0x4A4806F9D471E491(iLocal_363, 0x00000001, 0x00000000);
	func_249(&Local_46);
	func_243(&Local_209);
	if (bParam1)
	{
		unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(iLocal_363, 0x00000001), 1000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0xC0FB48F966BB7D11(0x00000001);
	if (func_8(iLocal_365))
	{
		unk_0xE32750CAC756824F(iLocal_365, 0x00000000);
	}
	unk_0x17EFA7496495F972();
	unk_0xE5305602B634A39A();
	unk_0xE96F19797E59AB06();
	if (bParam0)
	{
		unk_0xCE1730371ACDCCFC(0x00000000);
		func_354();
		unk_0x34D79252800B23FF(0x00000005);
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
		unk_0xCE7D0828D683D536();
		unk_0xFF42993F8A095C58(0x00000002);
		unk_0x2733E1E56786AB9E(0x00000000);
		unk_0xCD7D80FD792F9954("WORLD_VEHICLE_BIKER", 0x00000001);
		unk_0xCD7D80FD792F9954("DRIVE", 0x00000001);
		unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_SOLO", 0x00000001);
		unk_0xCD7D80FD792F9954("WORLD_VEHICLE_DRIVE_PASSENGERS", 0x00000001);
		unk_0xC83E7A5E408DF68C(0x00000002);
		unk_0x3F50EAA916065520(0x00000000);
		unk_0xCE1A2E36474A9D6F(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0x060F249A9A3E3F4E(0x00000001);
		unk_0x51B096AAC60548C1(1f);
		unk_0xB5376EA942202450(2565.207f, 2896.662f, 29.9408f, 1654.53f, 3420.822f, 63.94006f, 470f, 0x00000000, 0x00000001, 0x00000001);
		unk_0xCE1730371ACDCCFC(0x00000000);
		if (func_8(unk_0x728870EB733D12A1()))
		{
			unk_0x71EDC33E5A423750(unk_0x728870EB733D12A1(), 0x00000001);
			unk_0xE32750CAC756824F(unk_0x728870EB733D12A1(), 0x00000000);
		}
		unk_0x5366E40BAD8461DB(0x00000000);
		unk_0x31A33F7BCB08CB80(0x00000000);
		if (!bParam3)
		{
			func_12(0x000000C5, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_8(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
		{
			unk_0x1E9649458B15960F(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
		}
		else
		{
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
		}
		func_3(0x000001F4);
		func_353(&Global_1B414);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_353(var uParam0)
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

void func_354()
{
	unk_0x51732B934211201A(iLocal_213);
	unk_0x51732B934211201A(iLocal_214);
	unk_0x51732B934211201A(iLocal_59);
}

void func_355()
{
	Global_4CD7 = 0x00000000;
	func_356();
}

void func_356()
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

void func_357()
{
	Global_4CD7 = 0x00000000;
	func_358();
}

void func_358()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_359(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_360()
{
}

void func_361()
{
}

void func_362()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_119)
	{
		func_135(&(Local_119[iVar0 /*50*/].f_1));
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_121)
	{
		func_135(&(Local_121[iVar0 /*12*/].f_1));
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_122)
	{
		func_135(&(Local_122[iVar0 /*11*/].f_1));
		iVar0++;
	}
	func_135(&(Local_209.f_E));
	func_135(&(Local_209.f_F));
}

void func_363(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_122)
	{
		func_364(&(Local_122[iVar0 /*11*/]), bParam0);
		iVar0++;
	}
}

void func_364(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xD59B17D2DFF98E26(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		if (bParam1)
		{
			unk_0xF690C84DADBB3551(iParam0);
		}
		else
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
	}
}

void func_365(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (uParam1 && bParam0)
	{
		if (func_8(iLocal_363) && unk_0x405E212DDE472467(iLocal_363, 0x00000000))
		{
			func_24();
		}
		func_132(&iLocal_365, bParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_119)
	{
		func_132(&(Local_119[iVar0 /*50*/].f_5), bParam0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_121)
	{
		func_132(&(Local_121[iVar0 /*12*/]), bParam0);
		iVar0++;
	}
	func_132(&iLocal_364, bParam0);
	func_132(&iLocal_366, bParam0);
}

void func_366(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_119)
	{
		func_133(&(Local_119[iVar0 /*50*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_120)
	{
		func_133(&(Local_120[iVar0 /*50*/]), 0x00000001);
		iVar0++;
	}
}

