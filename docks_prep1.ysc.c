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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	struct<2> Local_53[4];
	struct<10> Local_54[8];
	struct<5> Local_55[4];
	vector3 vLocal_56 = { 0f, 0f, 0f };
	struct<2> Local_57[9];
	struct<6> Local_58 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_59 = 0;
	var uLocal_60 = 1092616192;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	vector3 vLocal_276 = { 0f, 0f, 0f };
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	vector3 vLocal_279 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	int iLocal_281 = 0;
	vector3 vLocal_282 = { 0f, 0f, 0f };
	float fLocal_283 = 0f;
	int iLocal_284 = 0;
	vector3 vLocal_285 = { 0f, 0f, 0f };
	float fLocal_286 = 0f;
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	int iLocal_290 = 0;
	vector3 vLocal_291 = { 0f, 0f, 0f };
	float fLocal_292 = 0f;
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
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 30;
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
	var uLocal_459 = 0;
	var uLocal_460 = 10;
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
	var uLocal_511 = 10;
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
	var uLocal_582 = 20;
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
	var uLocal_651 = 0;
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
	var uLocal_683 = 20;
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
	var uLocal_784 = 30;
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
	var uLocal_860 = 0;
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
	var uLocal_874 = 0;
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
	var uLocal_888 = 0;
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
	var uLocal_902 = 0;
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
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
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
	var uLocal_965 = 5;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
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
	var uLocal_984 = 0;
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
	var uLocal_996 = 7;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
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
	var uLocal_1014 = 0;
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
	var uLocal_1029 = 0;
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
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 5;
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
	var uLocal_1059 = 0;
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
	var uLocal_1072 = 3;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 16;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 10;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 5;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 5;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 8;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 12;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 12;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 12;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 9;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 9;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 12;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 12;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 12;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 9;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 9;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 12;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 12;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 12;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 9;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 9;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 12;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 12;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 12;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 9;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 9;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 12;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 12;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 12;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 9;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 9;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 12;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 12;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 12;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 9;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 9;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 12;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 12;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 12;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 9;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 9;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 12;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 12;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 12;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 9;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 9;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	float fLocal_1958 = 0f;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	int iLocal_1962[2] = { 0, 0 };
	int iLocal_1963 = 0;
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
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	iLocal_46 = unk_0xAD1355DD1E5D2D9B();
	uLocal_47 = unk_0x817B3657F78A517A();
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	vLocal_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_261 = 0xFFFFFFFF;
	vLocal_276 = { 327.263f, -2968.799f, -3f };
	fLocal_277 = 358.5f;
	iLocal_278 = joaat("prop_dock_crane_02_ld");
	vLocal_279 = { 305.053f, -2971.395f, 4.99f };
	fLocal_280 = 90f;
	iLocal_281 = joaat("prop_dock_crane_02_cab");
	vLocal_282 = { 0f, 0f, 19.907f };
	fLocal_283 = 0f;
	iLocal_284 = joaat("prop_dock_crane_02_hook");
	vLocal_285 = { -0.005f, -22.139f, -15f };
	fLocal_286 = 0f;
	vLocal_288 = { -0.005f, -22.139f, 32.825f };
	vLocal_289 = { 0f, 0f, 0.68f };
	vLocal_291 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_1958 = 3f;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		unk_0xC92DB9682A650680("DHP1_FAIL");
		func_335();
		func_333();
		if (unk_0x39B7A3CCD2467CAB())
		{
			unk_0xFCA2A436FD40C153(0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		func_330();
	}
	unk_0x7798376279BB5369(0x00000001);
	func_325();
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_ThePortOfLSHeistPrep1", 0x00000000);
		func_324(&uLocal_309);
		func_322(&uLocal_1294);
		func_321();
		func_294();
		if (!iLocal_1956)
		{
			func_278();
			func_1();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	switch (iLocal_1952)
	{
		case 0x00000000:
			func_229();
			break;
		
		case 0x00000001:
			func_194();
			break;
		
		case 0x00000002:
			func_8();
			break;
		
		case 0x00000003:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_1953)
	{
		case 0x00000000:
			if (unk_0x757EF87A33649210())
			{
				unk_0x82E51BCA72537B6C(0x00000320);
			}
			unk_0x2FB9A57162E54BAB(180f);
			iLocal_1953++;
			break;
		
		case 0x00000001:
			if (unk_0x0F1CCD77290EE12F())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0x00000000, 0x00000000);
	func_330();
}

void func_4(bool bParam0, int iParam1)
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
		if ((func_7(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_6(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_7(0x00000000))
	{
		iVar0 = func_5();
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

int func_5()
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

int func_6(int iParam0)
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

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_8()
{
	switch (iLocal_1953)
	{
		case 0x00000000:
			if (unk_0x757EF87A33649210())
			{
				unk_0x82E51BCA72537B6C(0x00000320);
			}
			func_108(0x00000002, "STAGE 2: Drop off sub", 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			if (func_107(Local_53[0x00000000 /*2*/]))
			{
				unk_0xAA6B3A4292417750(Local_53[0x00000000 /*2*/], 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			unk_0x6EEAA5C21760E9DB(Local_53[0x00000000 /*2*/], 0x00000000);
			unk_0x6EEAA5C21760E9DB(Local_53[0x00000001 /*2*/], 0x00000000);
			unk_0x5C2EBB66AD2EA5FF(0x00000001);
			unk_0x728A83630EB6002C(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			unk_0xE3430088DE1D3440(Local_53[0x00000000 /*2*/], 0x00000000);
			unk_0x05EC10F460C3A4AF(Local_53[0x00000000 /*2*/], 0x00000000);
			unk_0x8B4C4CA774181102(0f, 10f, 0x00000004);
			iLocal_302 = 0x00000000;
			iLocal_303 = 0x00000000;
			iLocal_1953++;
			break;
		
		case 0x00000001:
			if (func_107(unk_0x16F2683693E537C9()) && func_107(Local_53[0x00000000 /*2*/]))
			{
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), 0x00000001) > 400f && !unk_0x0A059E0DB9253280(Local_53[0x00000000 /*2*/]))
				{
					func_93(0x00000009);
				}
			}
			if (func_92(unk_0x16F2683693E537C9(), 324.7653f, -2974.495f, -1.5f, 0x00000001) > 150f)
			{
				func_91(&(Local_57[0x00000007 /*2*/]), 0x00000000);
				func_91(&(Local_57[0x00000008 /*2*/]), 0x00000000);
				func_91(&(Local_57[0x00000006 /*2*/]), 0x00000000);
				func_89(&uLocal_309, joaat("prop_dock_crane_02_ld"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_cab"));
				func_89(&uLocal_309, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_302 && func_92(unk_0x16F2683693E537C9(), vLocal_52, 0x00000001) < 200f)
			{
				func_88(&uLocal_309, joaat("bison"));
				iLocal_303 = 0x00000001;
				iLocal_302 = 0x00000001;
			}
			else if (iLocal_302)
			{
				if (func_92(unk_0x16F2683693E537C9(), vLocal_52, 0x00000001) > 220f)
				{
					func_89(&uLocal_309, joaat("bison"));
					iLocal_303 = 0x00000000;
					iLocal_302 = 0x00000000;
					if (unk_0xC844350D5D58C99A(Local_53[0x00000003 /*2*/]))
					{
						unk_0xA954465BA6FDEFE2(&(Local_53[0x00000003 /*2*/]));
					}
				}
				else if (func_92(unk_0x16F2683693E537C9(), vLocal_52, 0x00000001) < 200f)
				{
					if (iLocal_303 && unk_0xB87F6CF6E5628C67(joaat("bison")))
					{
						if (!unk_0xC844350D5D58C99A(Local_53[0x00000003 /*2*/]))
						{
							Local_53[0x00000003 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, 0x00000001, 0x00000001, 0x00000000);
							unk_0x05EC10F460C3A4AF(Local_53[0x00000003 /*2*/], 0x00000000);
						}
						iLocal_303 = 0x00000000;
					}
				}
			}
			if (unk_0x50B5F6F3C29E9380(Local_53[0x00000001 /*2*/], unk_0x728870EB733D12A1()) || ((unk_0x3D1053F9EB43B7AD(Local_53[0x00000002 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0x00000000, 0x00000001, 0x00000000) && unk_0x3D1053F9EB43B7AD(Local_54[0x00000003 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0x00000000, 0x00000001, 0x00000000)) && unk_0x3D1053F9EB43B7AD(Local_53[0x00000000 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0x00000000, 0x00000001, 0x00000000)))
			{
				if (func_107(Local_53[0x00000001 /*2*/]))
				{
					unk_0xA7BCA88AFADB9DE5(Local_53[0x00000001 /*2*/], 0.5f);
				}
				if (unk_0xE4EDC4B0E92C078B(Local_58.f_5))
				{
					unk_0xA6B0C9C2D8FC9744(Local_58.f_5, 0x00000001);
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_243))
				{
					unk_0x142CC44DB769B57E(&iLocal_243);
				}
				if (iLocal_255)
				{
					unk_0x790015DC92C918E2();
					iLocal_255 = 0x00000000;
				}
				if (func_48(&Local_58, vLocal_52, 0.1f, 0.1f, 2f, 0x00000001, Local_54[0x00000003 /*10*/], 0x00000000, 0x00000000, unk_0x728870EB733D12A1(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF) || (unk_0xE4EDC4B0E92C078B(Local_58.f_5) && unk_0x3D1053F9EB43B7AD(unk_0x728870EB733D12A1(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0x00000000, 0x00000001, 0x00000000)))
				{
					unk_0xB547E3FFEB27073E();
					func_46(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 7f, 0xFFFFFFFF, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
					unk_0x05EC10F460C3A4AF(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
					unk_0x05EC10F460C3A4AF(Local_53[0x00000000 /*2*/], 0x00000000);
					unk_0x71EDC33E5A423750(Local_53[0x00000000 /*2*/], 0x0000000A);
					func_42(&Local_58, 0x00000001, 0x00000000);
					unk_0x5C2EBB66AD2EA5FF(0x00000000);
					unk_0x728A83630EB6002C(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_301 = unk_0x1C0640BA9A7327B3();
					iLocal_257 = 0x00000000;
					iLocal_1953++;
				}
			}
			else if (!unk_0x50B5F6F3C29E9380(Local_53[0x00000001 /*2*/], unk_0x728870EB733D12A1()))
			{
				func_41(&Local_58);
				if (!unk_0xE4EDC4B0E92C078B(iLocal_243))
				{
					iLocal_243 = func_38(Local_53[0x00000000 /*2*/], 0x00000000, 0x00000000);
				}
				if (!iLocal_255 && func_36())
				{
					func_35("DKP1_ATTACH", 0x00001D4C, 0x00000001);
					iLocal_255 = 0x00000001;
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (func_12(&uLocal_78, "DHP1AUD", "DHP1_END", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
				{
					unk_0xFADC0A217229F6B5(Local_54[0x00000003 /*10*/], 0x00000001);
					unk_0x0C8C0C840C2D1AD2(Local_54[0x00000003 /*10*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					unk_0xDD353D0E9C789D0E(&iLocal_244);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
					unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 3f, 1f, 0x40000000, 0x00000000);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_244);
					unk_0x78ADC381772E3D54(Local_54[0x00000003 /*10*/], iLocal_244);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					iLocal_1953++;
				}
			}
			else if ((!iLocal_252 && func_36()) && (unk_0x1C0640BA9A7327B3() - iLocal_301) > 0x00000BB8)
			{
				func_35("dkp1_EXIT", 0x00001D4C, 0x00000001);
				unk_0x8B4C4CA774181102(10f, 5f, 0x00000004);
				iLocal_252 = 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (!func_11())
			{
				if (func_107(Local_53[0x00000003 /*2*/]))
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000003 /*10*/]);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					unk_0xDD353D0E9C789D0E(&iLocal_244);
					unk_0x5B1D360B9C6F0A09(0x00000000, Local_53[0x00000003 /*2*/], 0xFFFFFFFF, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
					unk_0x132B85BCE016BCA0(0x00000000, Local_53[0x00000003 /*2*/], -189.8985f, -2622.707f, 5.0001f, 0x0000000E, 30f, 0x000C0024, 5f, 1f, 0x00000001);
					unk_0x89258193691A7600(0x00000000, Local_53[0x00000003 /*2*/], unk_0x16F2683693E537C9(), 0x00000008, 30f, 0x000C0024, 1000f, 10f, 0x00000001);
					unk_0x75ABDC5F81978924(iLocal_244);
					unk_0x78ADC381772E3D54(Local_54[0x00000003 /*10*/], iLocal_244);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
				}
				else
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000003 /*10*/]);
					unk_0xEEB67C3D0A71A47B(Local_54[0x00000003 /*10*/], vLocal_52, 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				iLocal_301 = unk_0x1C0640BA9A7327B3();
				iLocal_1953++;
			}
			break;
		
		case 0x00000004:
			if (func_10(Local_54[0x00000003 /*10*/], unk_0x16F2683693E537C9(), 0x00000001) > 70f || (unk_0x1C0640BA9A7327B3() - iLocal_301) > 0x00004E20)
			{
				func_9(&(Local_54[0x00000003 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
				func_3();
			}
			break;
	}
}

void func_9(int iParam0, bool bParam1, int iParam2, int iParam3)
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

float func_10(int iParam0, int iParam1, bool bParam2)
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

int func_11()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_13(sParam2, iParam3, 0x00000000);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
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
					func_33();
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
		if (func_32(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_31();
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
				func_23();
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
				if (func_22())
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
			if (func_21())
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
			func_20();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_19();
		func_14();
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
		func_33();
	}
	return 0x00000000;
}

void func_14()
{
	if (!func_15())
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

int func_15()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_18())
	{
		return 0x00000000;
	}
	if (func_16(unk_0xD803B885F5E47A62()))
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

bool func_16(int iParam0)
{
	return func_17(iParam0, 0x00000014);
}

bool func_17(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_18()
{
	return 0xFFFFFFFF;
}

void func_19()
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

void func_20()
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

int func_21()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_22()
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

void func_23()
{
	if (func_30(0x0000000E))
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
		Global_4C1E = func_24();
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

int func_24()
{
	func_25();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_25()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_28(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_27(unk_0x16F2683693E537C9());
			if (func_26(iVar0) && (!func_30(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_26(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_26(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_29(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_30(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_31()
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

bool func_32(int iParam0, int iParam1)
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

void func_33()
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

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_36()
{
	if (unk_0xD17F06053799A7CA())
	{
		return 0x00000000;
	}
	if (unk_0x04E6B3EAA8742BFA())
	{
		if (func_11() && !func_37())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_37()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_38(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_39(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(iParam0->f_5));
	}
}

void func_42(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001E))
	{
		bParam1 = 0x00000001;
	}
	func_41(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_45(iVar0, iParam0);
		func_44(iVar0, iParam0);
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
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar0], func_43()) && iParam0->f_11[iVar0] != unk_0x16F2683693E537C9())
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

int func_43()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_44(int iParam0, var uParam1)
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

void func_45(int iParam0, var uParam1)
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

int func_46(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_47(iParam0);
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

void func_47(int iParam0)
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

int func_48(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_49(iParam0, vParam1, vParam2, func_87(), func_87(), bParam3, 0x00000005, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0x00000000, 0x00000000, bParam17, iParam18, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x3F800000);
}

int func_49(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0x00000000] = iParam7;
	iParam0->f_11[0x00000001] = iParam8;
	iParam0->f_11[0x00000002] = iParam9;
	iParam0->f_10 = iParam7;
	func_86(iParam0);
	func_85(iParam0);
	func_84();
	if (func_68(iParam0, iParam0->f_11[0x00000000], iParam0->f_11[0x00000001], iParam0->f_11[0x00000002], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0x00000000, 0x00000000, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_67(sParam12);
		func_67(sParam13);
		func_67(sParam14);
		func_67(sParam15);
		if (unk_0x0F1CCD77290EE12F())
		{
			bVar1 = 0x00000000;
			if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000017);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000009);
					bVar1 = 0x00000001;
				}
			}
			else if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
			{
				if (func_65(iParam0, iParam21))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000009);
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				func_67(sParam16);
				func_67(sParam19);
				func_67("MORE_SEATS");
				if (bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						func_67(sParam11);
					}
					if (unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(iParam0);
					}
					if ((!func_63(iParam0, 0x00000001) && !func_62(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_59(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000000);
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						func_67("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_63(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_59(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
						}
					}
					if (!unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						if (unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							unk_0x142CC44DB769B57E(iParam0);
						}
						iParam0->f_5 = func_58(vVar3, 0x00000000);
						if (!iParam23 == 0xFFFFFFFF)
						{
							unk_0xBC8E0A7390523199(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					else if (!func_56(vVar3, unk_0xAC14F6E4B17D7835(iParam0->f_5), 0.1f, 0x00000000))
					{
						unk_0x2F9282246F89FFD1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_57(iParam0->f_5, iParam0);
						}
					}
					if (!func_63(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000002))
						{
							func_61(iParam0, sParam11, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000002);
						}
					}
					if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
					{
						if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000D))
						{
							bParam5 = 0x00000000;
						}
					}
					bVar1 = 0x00000000;
					bVar4 = 0x00000000;
					iVar5 = 0x00000000;
					if ((iParam6 == 0x00000001 || iParam6 == 0x00000003) || iParam6 == 0x00000005)
					{
						bVar4 = 0x00000001;
					}
					if (iParam6 == 0x00000002 || iParam6 == 0x00000003)
					{
						iVar5 = 0x00000001;
					}
					else if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
					{
						iVar5 = 0x00000002;
					}
					if (bParam20)
					{
						unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vParam3, vParam4, fParam28, 0x00000000, bVar4, iVar5))
						{
							bVar1 = 0x00000001;
						}
					}
					else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = 0x00000001;
					}
					if (bVar1)
					{
						bVar1 = 0x00000001;
						iVar2 = 0x00000000;
						while (iVar2 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
								{
									iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if (!unk_0xC42A92762C58E1B9(iParam0->f_11[iVar2], iVar0, 0x00000000))
									{
										bVar1 = 0x00000000;
									}
								}
								else if (iParam10 != 0x00000000)
								{
									if (!unk_0xC42A92762C58E1B9(iParam0->f_11[iVar2], iParam10, 0x00000000))
									{
										bVar1 = 0x00000000;
									}
								}
								else if (!unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar2], func_43()) || !func_54(iParam0->f_11[iVar2], 0x00000001))
								{
									bVar1 = 0x00000000;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_51(iParam0))
							{
								func_67(sParam11);
								func_67(sParam16);
								func_67(sParam12);
								func_67(sParam13);
								func_67(sParam14);
								func_67(sParam15);
								func_67("LOSE_WANTED");
								func_67("MORE_SEATS");
								func_67(sParam19);
								func_42(iParam0, 0x00000001, 0x00000000);
								return 0x00000001;
							}
						}
					}
				}
			}
			else if (unk_0xC844350D5D58C99A(iParam10))
			{
				if ((bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000016)))
				{
					func_67(sParam16);
					func_67(sParam19);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5) || unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						unk_0x142CC44DB769B57E(iParam0);
						func_67(sParam11);
					}
					if ((!func_63(iParam0, 0x00000001) && !func_62(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_61(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_59(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000000);
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						func_67("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_63(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_59(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
						}
					}
					if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
					{
						if (!unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
							{
								unk_0x142CC44DB769B57E(&(iParam0->f_5));
								func_67(sParam11);
							}
							*iParam0 = func_50(iParam10, 0x00000000, 0x00000000);
							unk_0x9D7CDDB4B55142AF(*iParam0, 0x00000002);
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_57(*iParam0, iParam0);
							}
						}
						if (!func_63(iParam0, 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_61(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
							{
								if (!unk_0x2EBF5002C6B6A06C(sParam19))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
									{
										func_61(iParam0, sParam19, 0x00000000);
										unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_61(iParam0, sParam16, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
								{
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
									{
										func_59(iParam0->f_11[0x00000000], "GET_IN_CAR", 0x00000003);
									}
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000017);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_5));
					func_67(sParam11);
				}
				if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
				{
					if (iParam21 > 0x00000000)
					{
						if (!func_63(iParam0, 0x00000002))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000D))
								{
									iVar6 = 0x00000000;
									iVar7 = 0x00000000;
									iVar2 = 0x00000000;
									while (iVar2 < 0x00000003)
									{
										if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x09AC81E49EA267F7(0x00000000, iVar6);
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar7]))
									{
										func_59(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 0x00000003);
									}
									func_61(iParam0, "MORE_SEATS", 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x0000000D);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_61(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
								{
									func_61(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
						}
					}
					else if (!func_63(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
						{
							func_61(iParam0, sParam16, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
						}
						else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
						{
							if (!unk_0x2EBF5002C6B6A06C(sParam19))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_61(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_61(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
		{
			unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
		}
		func_67(sParam11);
		func_67(sParam16);
		func_67(sParam19);
		func_67(sParam16);
		func_67("LOSE_WANTED");
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_5));
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			unk_0x142CC44DB769B57E(iParam0);
		}
	}
	unk_0x0674E58A79778E99(&(iParam0->f_D), 0x0000000B);
	unk_0x0674E58A79778E99(&(iParam0->f_D), 0x0000000C);
	return 0x00000000;
}

int func_50(int iParam0, bool bParam1, bool bParam2)
{
	return func_39(iParam0, !bParam1, bParam2);
}

int func_51(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000C))
	{
		if (func_53(unk_0x16F2683693E537C9()))
		{
			if (func_52(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
			{
				return 0x00000001;
			}
		}
	}
	else if (func_52(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_52(bool bParam0, bool bParam1, bool bParam2)
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

int func_53(int iParam0)
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

int func_54(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && iParam1)
		{
			if (func_55(unk_0x16F2683693E537C9(), iParam0))
			{
				unk_0x7C27693C5112825F(func_43(), 50f);
				return 0x00000001;
			}
		}
		else if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_43()))
		{
			unk_0x7C27693C5112825F(func_43(), 50f);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(iParam0))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam1))
				{
					if (unk_0x82CCEAB29E9451DD(iParam1, iVar0))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_56(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_57(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam1->f_6))
		{
			unk_0x661342B9651D16E2(iParam1->f_6, 0x00000000);
		}
		unk_0xB8C3D2D6C4AAEF18(0x00000000);
		unk_0x053C926E5E341906();
		iParam1->f_6 = iParam0;
		unk_0x661342B9651D16E2(iParam0, 0x00000001);
	}
}

int func_58(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_40(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_60(iParam2), 0x00000001);
}

int func_60(int iParam0)
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

void func_61(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_35(sParam1, 0x00001D4C, 0x00000001);
			}
		}
	}
	iParam0->f_A = unk_0x1C0640BA9A7327B3();
}

int func_62(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0->f_10))
	{
		if (unk_0x65636D4556D82155(iParam0->f_10))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam1 != 0x00000001 || unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0x00000001;
		}
		if (func_64(iParam0))
		{
			return 0x00000001;
		}
	}
	if (iParam1 != 0x00000002 || unk_0x04E6B3EAA8742BFA())
	{
		if (func_11() && !func_37())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 0x00000023)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_66(iVar0, uParam0, iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_66(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xD6DF381716822EFE(iParam0);
		if (iParam2 > 0x00000000)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 0x00000001)
				{
					if (!unk_0x4A43A287EB2A2B60(iParam0, 0x00000001))
					{
						return 0x00000001;
					}
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 0x00000001)
			{
				if (!unk_0x4A43A287EB2A2B60(iParam0, 0x00000001))
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_67(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		unk_0x2F23E8033F1ADDD9(sParam0);
	}
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0x00000000;
	uParam0->f_11[0x00000000] = uParam1;
	uParam0->f_11[0x00000001] = uParam2;
	uParam0->f_11[0x00000002] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0x00000000] = uParam4;
	uVar12[0x00000001] = uParam5;
	uVar12[0x00000002] = uParam6;
	uVar13[0x00000000] = uParam13;
	uVar13[0x00000001] = uParam14;
	uVar13[0x00000002] = uParam15;
	iVar6 = 0x00000001;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar7[0x00000000] = 0x00000000;
	iVar7[0x00000001] = 0x00000000;
	iVar7[0x00000002] = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001D) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001C))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					unk_0xD5EF6A937E06E46F(uParam0->f_11[iVar0], 0x00000001, 0xFFFFFFFF, 0x00000000);
				}
				if (iVar0 == 0x00000002)
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001C);
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001D) && unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001C))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
			{
				unk_0xD5EF6A937E06E46F(uParam0->f_11[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000);
			}
			if (iVar0 == 0x00000002)
			{
				unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001C);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		bVar14 = 0x00000000;
		if (!unk_0xC844350D5D58C99A(uParam0->f_15))
		{
			iVar16 = 0x00000040;
			iVar16 |= 0x00010000;
			iVar16 |= 0x00000800;
			iVar16 |= 0x00000001;
			iVar16 |= 0x00000002;
			iVar16 |= 0x00000004;
			iVar16 |= 0x00000020;
			iVar16 |= 0x00000010;
			iVar16 |= 0x00000008;
			iVar15 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 50f, 0x00000000, iVar16);
			if (unk_0xDF1306B443CD3D15(iVar15, 0x00000000))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (unk_0xDF1306B443CD3D15(uParam0->f_15, 0x00000000))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_15, 0x00000001)) < 400f)
			{
				if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) || !bParam17)
					{
						if (func_66(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
								{
									unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
									if (unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492) == 0x00000007 && !func_83(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000001);
											unk_0x5B1D360B9C6F0A09(uParam0->f_11[iVar0], uParam0->f_15, 0x0000EA60, iVar0, 1f, 0x00000001, 0x00000000);
											unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 0x00000001;
						}
						else
						{
							bVar14 = 0x00000001;
						}
					}
					else
					{
						bVar14 = 0x00000001;
					}
				}
				else
				{
					bVar14 = 0x00000001;
				}
			}
			else
			{
				bVar14 = 0x00000001;
			}
		}
		else
		{
			bVar14 = 0x00000001;
		}
		if (bVar14)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001A);
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					if (!unk_0x81A5359F25512A04(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
					}
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
					{
						if (func_81(uParam0, uParam0->f_11[iVar0], fParam8, 0x00000001))
						{
							unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_43());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		if ((!func_80(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0xC844350D5D58C99A(iParam10))
		{
			iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000D))
				{
					if (iParam16 == 0x00000004 || iParam16 == 0x00000005)
					{
					}
					if (!func_63(uParam0, 0x00000002))
					{
						iVar17 = 0x00000000;
						iVar18 = 0x00000000;
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x09AC81E49EA267F7(0x00000000, iVar17);
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar18]))
						{
							func_59(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 0x00000003);
						}
						func_61(uParam0, "MORE_SEATS", 0x00000000);
						unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000000D);
					}
				}
				bVar9 = 0x00000001;
			}
		}
		else
		{
			bVar9 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000000D);
			func_67("MORE_SEATS");
		}
		if (!unk_0xC844350D5D58C99A(iParam10))
		{
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000000]) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000001])) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000002]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001F))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !func_63(uParam0, 0x00000002))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (func_79(iVar10, uParam0))
						{
							func_61(uParam0, "CMN_VEHSUIT", 0x00000000);
							unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001F);
						}
					}
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001F);
					func_67("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
			{
				if (unk_0xBFC0798A6E3417F9(0x00000000, 0x0000004B))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_D), 0x00000015);
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
					{
						unk_0xFCCF7611216AE801(uParam0->f_11[iVar0], 0x00000001);
					}
					else
					{
						unk_0xFCCF7611216AE801(uParam0->f_11[iVar0], 0x00000000);
					}
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
							{
								if (!func_80(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (!func_78(uParam0->f_11[iVar0]))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x437347B10A200C4B(iVar10, 0x00000000))
						{
							if (unk_0x82CCEAB29E9451DD(uParam0->f_11[iVar0], iVar10))
							{
								if (unk_0x70EED0761B82965E(iVar10) && !unk_0xF79A7BCA9E38BBBC(iVar10))
								{
									vVar19 = { unk_0x68F4C0EC296D3901(iVar10, 0x00000001) };
									if (vVar19.z < -1f)
									{
										unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
									}
								}
							}
						}
					}
					bVar8 = 0x00000001;
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
					{
						if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
						{
							iVar10 = unk_0x6937EA2286828455(uParam0->f_11[iVar0], 0x00000000);
							if (!unk_0x437347B10A200C4B(iVar10, 0x00000000))
							{
								if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar10))
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00001040);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
											}
											bVar8 = 0x00000000;
										}
									}
								}
								else
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iVar20 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									}
									if (unk_0xDF1306B443CD3D15(iVar20, 0x00000000))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00001040);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
											}
											bVar8 = 0x00000000;
										}
									}
								}
							}
						}
					}
					if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
					{
						iVar21 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xC844350D5D58C99A(iVar21))
						{
							if (func_66(iVar21, uParam0, 0x00000000))
							{
								if (func_77(iVar0, uParam0) || !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001B))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
									func_44(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001B);
									}
								}
							}
							else if (!func_77(iVar0, uParam0))
							{
								if (unk_0x134B62B726CEC8E6(iVar21) == joaat("sentinel2"))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000004);
								}
								else
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000002);
								}
								func_76(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()) && !func_75(uParam0->f_11[iVar0], iParam10)) && !func_74(uParam0->f_11[iVar0], iParam10))
					{
						if (func_81(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
							{
								if (((!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007)
									{
										unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
									}
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_43());
									bVar8 = 0x00000000;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x1C0640BA9A7327B3();
								uParam0->f_1[iVar0] = func_50(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
								unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
								if (bParam9)
								{
									func_57(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0x00000000;
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
					{
						if (((func_54(uParam0->f_11[iVar0], 0x00000001) || func_75(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xDF1306B443CD3D15(iParam10, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
								func_67(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_57(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0x00000000;
						}
					}
					else if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
					{
						if (!unk_0x82CCEAB29E9451DD(uParam0->f_11[iVar0], iParam10))
						{
							if ((unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000B)) && !((bParam17 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
							{
								if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
								{
									if (!unk_0xC42A92762C58E1B9(uParam0->f_11[iVar0], iParam10, 0x00000000))
									{
										if (!func_54(uParam0->f_11[iVar0], 0x00000001))
										{
											if (func_53(uParam0->f_11[iVar0]))
											{
												iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x1AE73569);
												if (iVar11 == 0x00000007)
												{
													unk_0x75CDA8644CD3B5F5(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
									{
										if ((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007 && !func_83(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9())) && !func_73(uParam0->f_11[iVar0], 2f)) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000001);
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000A))
											{
												unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
											}
											unk_0x5B1D360B9C6F0A09(uParam0->f_11[iVar0], iParam10, 0x0000EA60, iVar0, 2f, 0x00000001, 0x00000000);
											unk_0x579B0182884711E5(uParam0->f_11[iVar0], 0x00000000);
										}
									}
									else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000))
									{
										uParam0->f_1[iVar0] = func_50(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
										unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
										iVar6 = 0x00000000;
									}
								}
							}
							else if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
							{
								if (func_81(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
										if (iVar11 == 0x00000007)
										{
											unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
										}
										unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000000);
										unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_43());
									}
								}
							}
						}
						else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
								{
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_43());
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
							{
								unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
							}
						}
						else if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_43()) && !unk_0x4E861BC5B1EDA7BD(iParam10))
						{
							unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 0x00000001;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_63(uParam0, 0x00000002))
		{
			if (iVar1 > 0x00000000)
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
						{
							if (func_78(uParam0->f_11[iVar0]) || unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0x00000000, 0x00000001, 0x00000000))
							{
								iVar1 = (iVar1 - 0x00000001);
								iVar7[iVar0] = 0x00000000;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
					{
						if (!unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0x00000000, 0x00000001, 0x00000000) && !func_78(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1C0640BA9A7327B3();
			if ((iVar5 - uParam0->f_B) > 0x000005DC || iVar3 == 0x00000001)
			{
				if (iVar1 > 0x00000000)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 0x00000001)
						{
							if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000005))
							{
								func_61(uParam0, sParam7, 0x00000000);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000005);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (iVar7[iVar0])
								{
									if (!func_72(iVar0, uParam0))
									{
										if (!unk_0x2EBF5002C6B6A06C(uVar13[iVar0]))
										{
											if (!unk_0x7F8A39872A07D2CE(uVar13[iVar0], ""))
											{
												func_70(uParam0, uVar12[iVar0], uVar13[iVar0], 0x00000000);
												func_69(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_72(iVar0, uParam0))
										{
											func_61(uParam0, uVar12[iVar0], 0x00000000);
											func_69(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0x00000000;
				}
			}
		}
		unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000000A);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_67(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_67("MORE_SEATS");
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_69(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x0000000E);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x0000000F);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000010);
			break;
	}
}

void func_70(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_71(sParam1, sParam2, 0x00001D4C, 0x00000001);
			}
		}
	}
	uParam0->f_A = unk_0x1C0640BA9A7327B3();
}

void func_71(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000001);
}

int func_72(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x0000000E);
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x0000000F);
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000010);
		
		default:
	}
	return 0x00000000;
}

int func_73(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x9C66D99E63E8E24C(iVar0) > fParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_43()))
		{
			iVar0 = unk_0x8B157DA177FBCF50(iParam0);
			if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
			{
				if (unk_0x12DE711B1C681E9E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (iVar0 == iParam1)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_75(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
			{
				if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000011);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000012);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000013);
			break;
	}
}

int func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000011);
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000012);
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000013);
		
		default:
	}
	return 0x00000000;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				iVar1 = unk_0x3C66DF04E6EA3587(iParam0);
				if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(iParam0, iVar1, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
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

int func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("bus") || unk_0x134B62B726CEC8E6(iParam0) == joaat("coach"))
		{
			iVar0 = 0x00000000;
			iVar1 = 0x00000000;
			iVar2 = 0x00000000;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xA30B8362589C124A(iParam0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0x00000000] || iVar3 == uParam1->f_11[0x00000001]) || iVar3 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xA30B8362589C124A(iParam0, 0x00000001, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0x00000000] || iVar4 == uParam1->f_11[0x00000001]) || iVar4 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xA30B8362589C124A(iParam0, 0x00000002, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0x00000000] || iVar5 == uParam1->f_11[0x00000001]) || iVar5 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_80(var uParam0)
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_66(iVar0, uParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_81(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0x0E0E6175453415CB(iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam1, 0x00000000);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0))
					{
						if (func_80(uParam0))
						{
							return 0x00000001;
						}
					}
					else if (bParam3)
					{
						return 0x00000001;
					}
				}
				else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
		else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (func_66(iVar0, uParam0, 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
						{
							if (func_82(iVar0))
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
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_82(int iParam0)
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam0);
			if (iVar0 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 0x000007D0, 0x00000800, 0x00000002);
						}
					}
				}
			}
		}
	}
}

void func_85(var uParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000019))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x00000020, 0x00000000);
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x00000131, 0x00000001);
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x0000010C, 0x00000001);
					unk_0x579B0182884711E5(uParam0->f_11[iVar0], 0x00000000);
				}
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000019);
	}
}

void func_86(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
			{
				if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
				{
					unk_0xA245D14CC59CDD36(uParam0->f_11[iVar0], 0x00000000);
					unk_0x7D732AB707BE9152(uParam0->f_11[iVar0], 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
	}
}

Vector3 func_87()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0x00000000;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_3D6 = 0x00000001;
					return 0x00000001;
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 == 0xFFFFFFFF)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0x00000000)
	{
		unk_0x523BCC9DC80CD82F(iParam1);
		(*uParam0)[iVar1 /*5*/] = 0x00000001;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x1C0640BA9A7327B3();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_89(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					unk_0x71199B01895C6202(iParam1);
					func_90(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 0x00000001;
					uParam0->f_3D6 = 0x00000001;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_90(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0xFFFFFFFF;
}

void func_91(int iParam0, bool bParam1)
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

float func_92(int iParam0, vector3 vParam1, bool bParam2)
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

void func_93(int iParam0)
{
	char* sVar0;
	
	unk_0xC92DB9682A650680("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "";
			break;
		
		case 0x00000001:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 0x00000004:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 0x00000005:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 0x00000002:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 0x00000003:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 0x00000007:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 0x00000008:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 0x00000009:
			sVar0 = "dkp1_FABD";
			break;
		
		case 0x0000000A:
			sVar0 = "DKP1_FABS";
			break;
		
		case 0x0000000B:
			sVar0 = "DKP1_FABF";
			break;
		
		case 0x00000006:
			sVar0 = "cmn_tdied";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	func_98(sVar0);
	while (!func_97())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (func_96())
	{
		func_335();
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0x00000000, 0x00000000, 0x00000000))
	{
		func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_330();
	unk_0x10FAF14A60A0DBE1();
}

void func_94(vector3 vParam0, float fParam1)
{
	if (func_95(Global_12C3E, 0f, 0f, 0f, 0x00000000))
	{
		Global_12C3E = { vParam0 };
		Global_12C41 = fParam1;
	}
}

bool func_95(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_96()
{
	if (Global_181B8 == 0x00000007)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_97()
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

void func_98(char* sParam0)
{
	func_106(sParam0);
	func_99(0x00000000);
}

void func_99(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_7(0x00000000))
	{
		iVar0 = func_5();
		if (!func_100(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_105();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_104(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_101(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_101(var uParam0, int iParam1)
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
			if (!func_103(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_102(&(uParam0->f_8F8[iVar0]));
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

void func_102(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_103(int iParam0, var uParam1, float fParam2)
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
			return func_103(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_103(0x00000008, uParam1, fParam2);
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

void func_104(int iParam0, bool bParam1)
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

void func_105()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_24())
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
			switch (func_24())
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

void func_106(char* sParam0)
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

int func_107(int iParam0)
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
	}
	return 0x00000000;
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_193(0x00000001);
		if (iParam0 <= Global_181DD)
		{
		}
		iVar1 = func_191(unk_0xBB0808A181D4745C(), 0x00000001);
		if (iVar1 != 0xFFFFFFFF && iVar1 != 0x0000005E)
		{
			Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1 = 0x00000000;
			iVar2 = func_189(iVar1);
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
			iVar4 = func_184(unk_0xBB0808A181D4745C(), 0x00000001);
			if (iVar4 != 0xFFFFFFFF)
			{
				Global_1B416.f_4889[iVar4 /*6*/].f_4 = 0x00000000;
				MemCopy(&uVar5, {func_183(iVar4)}, 0x00000004);
				unk_0x353729B0A07DC11A(&uVar5, 0x00000000, Global_181DD, iParam0);
			}
			else
			{
				iVar6 = func_182(&(Global_181B8.f_3));
				if (iVar6 > 0xFFFFFFFF)
				{
					Global_1B416.f_6195.f_4[iVar6] = 0x00000000;
				}
			}
		}
		Global_16AFA = iParam2;
		Global_181DD = iParam0;
		func_109(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_181DD)
	{
	}
}

void func_109(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_110(&Global_19AE3, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_110(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_24();
	uParam0->f_1 = func_171();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_145(&(uParam0->f_B44), 0x00000000);
		func_144(unk_0x16F2683693E537C9());
		func_137(unk_0x16F2683693E537C9(), 0x00000000);
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
		if (iVar1 == func_136())
		{
			func_129(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
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
		func_112(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_111(&(uParam0->f_BA4));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_111(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_112(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_27(iParam2);
	}
	if (func_126(iParam2, &iVar0, iParam3, iParam5))
	{
		func_113(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_113(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_113(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_115(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_114(iParam2))
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

int func_114(int iParam0)
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

void func_115(var uParam0, int iParam1, int iParam2)
{
	func_121(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_118(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_117(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_116(iParam1);
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

int func_116(int iParam0)
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

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_119(iParam1, iParam2))
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

int func_119(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_26(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_120(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_120(int iParam0, var uParam1, int iParam2)
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

void func_121(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_125(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_124(uParam1->f_42))
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
		func_123(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_122(iVar0 + 1));
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

int func_122(int iParam0)
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

int func_123(int iParam0, var uParam1, var uParam2)
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

int func_124(int iParam0)
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

void func_125(var uParam0)
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

int func_126(int iParam0, var uParam1, int iParam2, int iParam3)
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
						if (func_127(*uParam1, func_24(), 0x00000001))
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

int func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_128(iParam1, iVar0, &sVar1, &iVar2))
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

int func_128(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_27(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_135(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_134(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_26(iVar0))
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
			if (func_133(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_130(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_130(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_130(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_130(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_133(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_130(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_130(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_131(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_131(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_132();
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

var func_132()
{
	return Global_1407E9;
}

int func_133(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_131(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_134(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
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

void func_135(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
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

int func_136()
{
	func_25();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_138(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
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

void func_138(int iParam0, var uParam1)
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
			iVar3 = func_143(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_143(iVar0));
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
					iVar2 = func_141(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_141(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_140(Var7.f_1)) && iVar9 < 0x00000033)
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
							if (!func_139(Var8.f_3))
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

int func_139(int iParam0)
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

int func_140(int iParam0)
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

int func_141(int iParam0, int iParam1)
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
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_139(Var5.f_3))
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

int func_142(int iParam0, var uParam1)
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

int func_143(int iParam0)
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

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (func_26(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_145(var uParam0, int iParam1)
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
		if (func_148(&iVar0))
		{
			if (func_147(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_24();
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
		else if (func_146(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_146(vector3 vParam0, char* sParam1, vector3 vParam2)
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

bool func_147(int iParam0, var uParam1, var uParam2)
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
	return !func_95(*uParam1, 0f, 0f, 0f, 0x00000000);
}

int func_148(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_170())
		{
			*uParam0 = func_154(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_153(*uParam0) && !func_149(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, 0x00000000, 0x00000001);
}

int func_150(int iParam0, int iParam1, bool bParam2)
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
		if (func_152() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_130(func_151(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_151(int iParam0)
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

int func_152()
{
	return Global_7830;
}

int func_153(int iParam0)
{
	return func_150(iParam0, 0x00000005, 0x00000001);
}

int func_154(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
		if (iParam1 == 0x00000006 || iParam1 == func_169(iVar0))
		{
			if (!bParam3 || func_168(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_155(iVar0, 0x00000000), 0x00000001);
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

Vector3 func_155(int iParam0, bool bParam1)
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
			return func_165(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_18())
			{
				if (func_164(Global_184466))
				{
					return func_157(0x00000002, 0x00000002);
				}
				else if (func_156(Global_184466))
				{
					return func_157(0x0000002D, 0x00000003);
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

int func_156(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_157(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_18())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_158(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_158(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_158(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_163(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_163(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_161(iParam0) };
	}
	else
	{
		Var2 = { func_160(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_159(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_159(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_159(vector3 vParam0, float fParam1)
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

struct<6> func_160(int iParam0)
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

struct<6> func_161(int iParam0)
{
	return func_162(iParam0);
}

struct<6> func_162(int iParam0)
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

int func_163(int iParam0, var uParam1)
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

int func_164(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_165(int iParam0)
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
			if (func_166() == 0x00000000)
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

int func_166()
{
	return func_167(unk_0xD803B885F5E47A62());
}

int func_167(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_168(int iParam0)
{
	return func_150(iParam0, 0x00000000, 0x00000000);
}

int func_169(int iParam0)
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

bool func_170()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_171()
{
	var uVar0;
	
	func_181(&uVar0, unk_0x4460E481B9E33ADA());
	func_180(&uVar0, unk_0x8D199E381D262EEF());
	func_179(&uVar0, unk_0xD8A54335F18763BA());
	func_174(&uVar0, unk_0x972A296334C9D57B());
	func_173(&uVar0, unk_0x118229AD063C3C1D());
	func_172(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_172(var uParam0, int iParam1)
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

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_175(int iParam0, int iParam1)
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

var func_176(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_177(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_179(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_182(char* sParam0)
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

struct<2> func_183(int iParam0)
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

int func_184(char* sParam0, int iParam1)
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
		func_185(iVar0, &sVar1);
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
	cVar1 = { func_183(iParam0) };
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

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000045:
		case 0x00000046:
			return func_190(Global_1B416.f_2378.f_63.f_CD[0x0000000A]);
			break;
		
		case 0x0000004A:
		case 0x0000004B:
			return func_190(Global_1B416.f_2378.f_63.f_CD[0x00000008]);
			break;
		
		case 0x00000054:
		case 0x00000055:
			return func_190(Global_1B416.f_2378.f_63.f_CD[0x0000000B]);
			break;
		
		case 0x0000005A:
			return func_190(Global_1B416.f_2378.f_63.f_CD[0x00000007]);
			break;
		
		case 0x0000005D:
			return func_190(Global_1B416.f_2378.f_63.f_CD[0x00000009]);
			break;
	}
	return 0x00000000;
}

int func_190(int iParam0)
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

int func_191(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_192(iVar0, 0x00000001);
	if (iVar1 == 0xFFFFFFFF && !bParam1)
	{
	}
	return iVar1;
}

int func_192(int iParam0, bool bParam1)
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

void func_193(bool bParam0)
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

void func_194()
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_1953)
	{
		case 0x00000000:
			func_228(&uLocal_309, "PORT_OF_LS_PREP_1");
			if (unk_0x757EF87A33649210())
			{
				unk_0x82E51BCA72537B6C(0x00000320);
			}
			func_226(&Local_58, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 0x00000001, Local_53[0x00000000 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 0x00000001, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (unk_0xB87F6CF6E5628C67(joaat("packer")) && unk_0xB87F6CF6E5628C67(joaat("armytrailer")))
			{
				func_108(0x00000001, "STAGE 1: Get to crane", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				func_225(0x0000024B, 0x00000000);
				func_224(&uLocal_78, 0x00000001, 0x00000000, "FLOYD", 0x00000000, 0x00000001);
				func_223(0x00000006, 0x00000000);
				Local_53[0x00000002 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, 0x00000001, 0x00000001, 0x00000000);
				unk_0x05EC10F460C3A4AF(Local_53[0x00000002 /*2*/], 0x00000000);
				unk_0x44A200C9B6E1CEA6(Local_53[0x00000002 /*2*/], 0x00000001);
				unk_0xC6A6B4DDD6DC073A(Local_53[0x00000002 /*2*/], 0x00000000);
				unk_0xA22F71BBC8173C39(Local_53[0x00000002 /*2*/], 0x00000000);
				Local_53[0x00000001 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC74DAD25331A5425(Local_53[0x00000002 /*2*/], Local_53[0x00000001 /*2*/], 0.5f);
				unk_0xEB82176F26E339BD(Local_53[0x00000001 /*2*/]);
				unk_0xA22F71BBC8173C39(Local_53[0x00000001 /*2*/], 0x00000000);
				unk_0x44A200C9B6E1CEA6(Local_53[0x00000001 /*2*/], 0x00000001);
				iLocal_248 = 0x00000000;
				unk_0x7D6CA5F52B3748BF(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				iLocal_257 = 0x00000001;
				unk_0x7352ACF3368DF65F("OnlyAllowScriptTriggerPoliceScanner", 0x00000000);
				iLocal_1953++;
			}
			break;
		
		case 0x00000001:
			if (func_222())
			{
				func_221(&uLocal_309, cLocal_49);
				func_221(&uLocal_309, cLocal_50);
				iLocal_261 = 0xFFFFFFFF;
				iLocal_262 = 0x00000000;
				iLocal_1953++;
			}
			break;
		
		case 0x00000002:
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000))
			{
				switch (iLocal_262)
				{
					case 0x00000000:
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							if (iLocal_261 == 0xFFFFFFFF)
							{
								iLocal_261 = unk_0x1C0640BA9A7327B3() + 5000;
							}
							if (unk_0x1C0640BA9A7327B3() > iLocal_261)
							{
								func_220("DKP1_SUBTURN", 0xFFFFFFFF);
								iLocal_262++;
							}
						}
						break;
					
					case 0x00000001:
						if (!unk_0xFEBC1E4EC9E001F0())
						{
							func_220("SUB_HELP", 0xFFFFFFFF);
							iLocal_262++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_262 == 0x00000000)
				{
					iLocal_261 = 0xFFFFFFFF;
				}
				if (unk_0xFEBC1E4EC9E001F0())
				{
					if (func_219("DKP1_SUBTURN") || func_219("SUB_HELP"))
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
				}
			}
			if (unk_0x7B5606C651AB51B5(Local_53[0x00000000 /*2*/], 0x00000003, 0x00002710))
			{
				func_93(0x00000001);
			}
			if (func_92(unk_0x16F2683693E537C9(), 324.7653f, -2974.495f, -1.5f, 0x00000001) < 150f)
			{
				if (unk_0xE3934829A331AF92("DOCKS_HEIST_PREP_1_LIFT_SUB", 0x00000000))
				{
					bLocal_306 = 0x00000001;
				}
				func_91(&(Local_57[0x00000002 /*2*/]), 0x00000000);
				func_89(&uLocal_309, joaat("prop_sub_release"));
			}
			else
			{
				unk_0xE96F19797E59AB06();
				bLocal_306 = 0x00000000;
			}
			if (func_107(Local_54[0x00000006 /*10*/]))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0x00000000, 0x00000001, 0x00000000) || unk_0xE9FDA1035CFEA94F(Local_54[0x00000006 /*10*/])) || func_10(unk_0x16F2683693E537C9(), Local_54[0x00000006 /*10*/], 0x00000001) > 100f)
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000006 /*10*/]);
					func_9(&(Local_54[0x00000006 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
				}
			}
			if (func_107(Local_54[0x00000007 /*10*/]))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0x00000000, 0x00000001, 0x00000000) || unk_0xE9FDA1035CFEA94F(Local_54[0x00000007 /*10*/])) || func_10(unk_0x16F2683693E537C9(), Local_54[0x00000007 /*10*/], 0x00000001) > 100f)
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000007 /*10*/]);
					func_9(&(Local_54[0x00000007 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
				}
			}
			if (func_107(Local_54[0x00000004 /*10*/]))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0x00000000, 0x00000001, 0x00000000) || unk_0xE9FDA1035CFEA94F(Local_54[0x00000004 /*10*/])) || func_10(unk_0x16F2683693E537C9(), Local_54[0x00000004 /*10*/], 0x00000001) > 100f)
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
					func_9(&(Local_54[0x00000004 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
				}
			}
			if (func_107(Local_54[0x00000005 /*10*/]))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0x00000000, 0x00000001, 0x00000000) || unk_0xE9FDA1035CFEA94F(Local_54[0x00000005 /*10*/])) || func_10(unk_0x16F2683693E537C9(), Local_54[0x00000005 /*10*/], 0x00000001) > 100f)
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000005 /*10*/]);
					func_9(&(Local_54[0x00000005 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
				}
			}
			if (func_226(&Local_58, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0x00000000, Local_53[0x00000000 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 0x00000001, 0x00000000, 0x00000001, 0xFFFFFFFF) || ((unk_0xE4EDC4B0E92C078B(Local_58.f_5) && unk_0x3D1053F9EB43B7AD(Local_53[0x00000000 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0x00000000, 0x00000001, 0x00000000)) && func_218(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/])))
			{
				if (func_107(Local_53[0x00000002 /*2*/]) && func_107(Local_53[0x00000001 /*2*/]))
				{
					func_217(&Local_58, 0x00000000);
					func_216(0x00000006, 0x00000000);
					unk_0xC92DB9682A650680("DHP1_STOP");
					func_215(0x00000000, 0xFFFFFFFF);
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100);
					iLocal_301 = unk_0x1C0640BA9A7327B3();
					iLocal_1953++;
				}
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000 && unk_0xE4EDC4B0E92C078B(Local_58.f_5))
			{
				unk_0x922D0EFFF8F2403B(0x00000006, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 0x000000FF, 0x000000FF, 0x00000000, 0x00000041, 0x00000000, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000003:
			if (func_82(Local_53[0x00000000 /*2*/]) || (unk_0x1C0640BA9A7327B3() - iLocal_301) > 0x00000DAC)
			{
				iLocal_293 = unk_0xAE06CCC36C49929C(0x019286A9, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0x00000000, 0x00000002);
				unk_0xE3BB8E05FCEB3FBE(iLocal_293, 0x00000001);
				unk_0x91F5B0244AAE6222(iLocal_293, "HAND_SHAKE", 0.4f);
				unk_0x86F44313DFA8F00C(iLocal_293, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 0x00001770, 0x00000001, 0x00000001, 0x00000002);
				func_209(0x00000000, 340.6675f, -2964.01f, 1.4937f, 0x00000001, 0x00000000, 0x00000001, 0x00000BB8, 0x00000000, 0x00000001);
				func_88(&uLocal_309, joaat("prop_tarp_strap"));
				unk_0xA47B46945FF6DE74(Local_53[0x00000000 /*2*/], vLocal_276, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(Local_53[0x00000000 /*2*/], fLocal_277);
				iLocal_301 = unk_0x1C0640BA9A7327B3();
				iLocal_275 = 0x00000000;
				unk_0x8B4C4CA774181102(8f, 0f, 0x00000004);
				iLocal_1953++;
			}
			else
			{
				func_46(Local_53[0x00000000 /*2*/], 7f, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000004:
			if (func_199())
			{
				iLocal_1953++;
			}
			break;
		
		case 0x00000005:
			if (unk_0x62A1F4500E8F07E0() && unk_0xB87F6CF6E5628C67(joaat("prop_tarp_strap")))
			{
				unk_0x29E8331978B73E7F(Local_53[0x00000002 /*2*/], "DockHeist_truck", 0x00000000, 0x00000000, 0x00000000);
				unk_0x29E8331978B73E7F(Local_53[0x00000000 /*2*/], "submarine", 0x00000000, joaat("submersible"), 0x00000000);
				unk_0x29E8331978B73E7F(Local_53[0x00000001 /*2*/], "dockheist_trailer", 0x00000000, joaat("armytrailer"), 0x00000000);
				unk_0x29E8331978B73E7F(0x00000000, "sub_cover", 0x00000002, joaat("prop_sub_cover_01"), 0x00000000);
				unk_0x29E8331978B73E7F(0x00000000, "Floyd", 0x00000002, joaat("ig_floyd"), 0x00000000);
				unk_0xA0A8D79ACBBD1CB8("Trevor", unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x0882E3DC0C991680(Local_53[0x00000002 /*2*/], 0x00000001);
				unk_0x05EC10F460C3A4AF(Local_53[0x00000002 /*2*/], 0x00000001);
				func_198(0x00000000);
				unk_0x420FE818E70BB523(0x00000004);
				unk_0xFCA2A436FD40C153(0x00000000, 0x00000000, 0x00000001, 0x00000000);
				unk_0x4C902758BEA97C68(0x00000000);
				iLocal_1953++;
			}
			break;
		
		case 0x00000006:
			if (unk_0x22A8E52414415B76())
			{
				if (unk_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
				{
					unk_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
				}
			}
			if (unk_0xEABED1927EFB48CA(0x00000000))
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0xBFE31971E49FA500(0x00000001);
				unk_0x8BCB70EB440DED83(0x00000001);
				unk_0xBF40D896CA4BDBE7();
			}
			if (!unk_0xC844350D5D58C99A(Local_54[0x00000003 /*10*/]))
			{
				if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Floyd", 0x00000000)))
				{
					Local_54[0x00000003 /*10*/] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Floyd", 0x00000000));
					func_224(&uLocal_78, 0x00000001, Local_54[0x00000003 /*10*/], "FLOYD", 0x00000000, 0x00000001);
					unk_0x6DF7BF67E86AAE86(Local_54[0x00000003 /*10*/], iLocal_259);
				}
			}
			if (unk_0x3148AE92ED70DC30("Trevor", 0x00000000))
			{
				iLocal_295 = 0x00000001;
			}
			if (unk_0x3148AE92ED70DC30("Floyd", 0x00000000))
			{
				iLocal_296 = 0x00000001;
			}
			if (unk_0x3148AE92ED70DC30("DockHeist_truck", 0x00000000))
			{
				unk_0x0725C805005717D6(Local_53[0x00000002 /*2*/], 0x00000001, 0x00000000, 0x00000000);
				unk_0x05CA0E7946B27A19(Local_53[0x00000002 /*2*/], 0x00000001);
				iLocal_297 = 0x00000001;
			}
			if (unk_0x3148AE92ED70DC30("DockHeist_trailer", 0x00000000))
			{
				unk_0x0725C805005717D6(Local_53[0x00000001 /*2*/], 0x00000001, 0x00000000, 0x00000000);
				iLocal_300 = 0x00000001;
			}
			if (unk_0x3148AE92ED70DC30("submarine", 0x00000000))
			{
				iLocal_298 = 0x00000001;
			}
			if (unk_0x3148AE92ED70DC30("sub_cover", 0x00000000))
			{
				iLocal_299 = 0x00000001;
			}
			else if (!unk_0xC844350D5D58C99A(Local_57[0x00000004 /*2*/]))
			{
				if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_57[0x00000004 /*2*/] = unk_0x486F67509A82DB2D(unk_0x6450C2A9FBA3C3BF("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (unk_0x1D3C627D3574B327(Local_53[0x00000002 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0x00000000)
				{
					if (unk_0x8F677B1F58B4741C() >= 0x00003778)
					{
						unk_0x0882E3DC0C991680(Local_53[0x00000002 /*2*/], 0x00000003);
					}
				}
			}
			if (((((iLocal_295 && iLocal_296) && iLocal_297) && iLocal_298) && iLocal_299) && iLocal_300)
			{
				if (unk_0x0F1CCD77290EE12F() || unk_0x8A83E339B374E53A(Local_54[0x00000003 /*10*/]))
				{
					unk_0xF821F915BC24D246(Local_54[0x00000003 /*10*/], Local_53[0x00000002 /*2*/], 0x00000000);
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_53[0x00000002 /*2*/], 0xFFFFFFFF);
					unk_0xE6F7063ADA854762(Local_53[0x00000000 /*2*/], Local_53[0x00000001 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					unk_0x05EC10F460C3A4AF(Local_53[0x00000000 /*2*/], 0x00000000);
					unk_0x05CA0E7946B27A19(Local_53[0x00000000 /*2*/], 0x00000001);
					unk_0x71EDC33E5A423750(Local_53[0x00000000 /*2*/], 0x0000000A);
					unk_0x56FDC9ADE35F7DB0(Local_53[0x00000000 /*2*/], 0x00000000, 0x00000001, 0x00000000);
					unk_0x0882E3DC0C991680(Local_53[0x00000000 /*2*/], 0x00000001);
					unk_0x3E5CE368CD085FFA(Local_53[0x00000000 /*2*/], 0x00000000);
					unk_0x9F528B1B53FBC5D9(Local_57[0x00000004 /*2*/], Local_53[0x00000001 /*2*/], 0xFFFFFFFF, vLocal_291, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					Local_57[0x00000005 /*2*/] = unk_0x7707E48765093646(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 0x00000001, 0x00000001, 0x00000000);
					unk_0x9F528B1B53FBC5D9(Local_57[0x00000005 /*2*/], Local_53[0x00000001 /*2*/], 0xFFFFFFFF, vLocal_291, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					func_197(0x00000001, 0x00000000, 0x00000000, 0x00000BB8, 0x00000000);
					func_196(&uLocal_309);
					iLocal_1953++;
				}
			}
			break;
		
		case 0x00000007:
			func_195(0x00000002);
			iLocal_1953 = 0x00000000;
			break;
	}
	if (unk_0xE4EDC4B0E92C078B(Local_58.f_5))
	{
		unk_0x661342B9651D16E2(Local_58.f_5, 0x00000000);
	}
	if (func_107(unk_0x16F2683693E537C9()) && func_107(Local_53[0x00000000 /*2*/]))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 324.7653f, -2974.495f, -1f, 0x00000001) > 2500f)
		{
			func_93(0x00000009);
		}
	}
}

int func_195(int iParam0)
{
	if (iLocal_1951 == 0x00000000)
	{
		iLocal_1954 = iParam0;
		iLocal_1951 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_196(var uParam0)
{
	if (uParam0->f_35C)
	{
		if (uParam0->f_35C.f_1)
		{
			unk_0x29D7581AEF4440C2();
			func_90(&(uParam0->f_35C));
		}
		else
		{
			uParam0->f_35C.f_2 = 0x00000001;
			uParam0->f_3D6 = 0x00000001;
		}
	}
}

void func_197(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), bParam0, iParam4);
	unk_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 0x00000001, 0x00000000, 0x00000000);
	if (!bParam1)
	{
		unk_0x5CAFA5DD13658DFE(0x00000000);
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x3E5CE368CD085FFA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
	}
}

void func_198(int iParam0)
{
	iLocal_295 = iParam0;
	iLocal_296 = iParam0;
	iLocal_297 = iParam0;
	iLocal_299 = iParam0;
	iLocal_298 = iParam0;
	iLocal_300 = iParam0;
}

int func_199()
{
	float fVar0;
	
	switch (iLocal_275)
	{
		case 0x00000000:
			func_208();
			unk_0xA47B46945FF6DE74(Local_53[0x00000000 /*2*/], vLocal_276, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(Local_53[0x00000000 /*2*/], fLocal_277);
			unk_0x1E9649458B15960F(Local_53[0x00000000 /*2*/], 0x00000001);
			iLocal_245 = unk_0xC1879030EB463216("scr_pls_sub_water_drips", Local_53[0x00000000 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9AB5B84DE011D632(iLocal_245, "flow", 1f, 0x00000000);
			unk_0xAE1670DD12E839C3("dhp1_mcs_1", 0x00000008);
			if (bLocal_306)
			{
				unk_0x7B1292B738DF9FAF();
			}
			if (unk_0xD8A54335F18763BA() >= 0x00000014 || unk_0xD8A54335F18763BA() <= 0x00000007)
			{
				unk_0x2404539258C5376B("PO1_08_sub_waterplane");
			}
			func_206(&uLocal_309, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0x00000000);
			iLocal_275++;
			break;
		
		case 0x00000001:
			vLocal_287 = { unk_0x68F4C0EC296D3901(Local_57[0x00000008 /*2*/], 0x00000001) };
			if (vLocal_287.z <= 1f)
			{
				unk_0x1E9649458B15960F(Local_53[0x00000000 /*2*/], 0x00000000);
				unk_0x86F44313DFA8F00C(iLocal_293, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_293, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 0x000030D4, 0x00000001, 0x00000001, 0x00000002);
				unk_0x9F528B1B53FBC5D9(Local_53[0x00000000 /*2*/], Local_57[0x00000008 /*2*/], 0xFFFFFFFF, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				iLocal_275++;
			}
			else
			{
				func_205(0x00000001, 2f);
			}
			break;
		
		case 0x00000002:
			vLocal_287 = { unk_0x68F4C0EC296D3901(Local_57[0x00000008 /*2*/], 0x00000001) };
			if (vLocal_287.z >= 12.5f)
			{
				unk_0x86F44313DFA8F00C(iLocal_293, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_293, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 0x00002710, 0x00000001, 0x00000001, 0x00000002);
				fLocal_292 = unk_0xE453CFFAFB33F506(iLocal_293);
				unk_0xDC3CC6D1845B0567(iLocal_293, 1.8f);
				iLocal_275++;
			}
			else
			{
				func_205(0x00000000, 1f);
			}
			break;
		
		case 0x00000003:
			if (fLocal_283 >= 40f)
			{
				unk_0x86F44313DFA8F00C(iLocal_293, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_293, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 0x00001B58, 0x00000001, 0x00000001, 0x00000002);
				unk_0xDC3CC6D1845B0567(iLocal_293, fLocal_292);
				fLocal_283 = 80f;
				unk_0x15AFB6CBDE990FB6(Local_57[0x00000007 /*2*/], 0x00000001, 0x00000001);
				unk_0x9F528B1B53FBC5D9(Local_57[0x00000007 /*2*/], Local_57[0x00000006 /*2*/], 0xFFFFFFFF, vLocal_282, 0f, 0f, fLocal_283, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				unk_0x08841CDB215AE18F(Local_57[0x00000008 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_285), 0x00000000, 0x00000000, 0x00000001);
				iLocal_1959 = unk_0x1C0640BA9A7327B3();
				iLocal_275++;
			}
			else
			{
				func_204(0x00000001, 5.5f);
			}
			break;
		
		case 0x00000004:
			if (fLocal_283 >= 108f)
			{
				unk_0xE4EBD4F12E3C46F1(1f);
				unk_0x86F44313DFA8F00C(iLocal_293, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_293, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 0x00001F40, 0x00000001, 0x00000001, 0x00000002);
				unk_0x97271F6489B78F2D(iLocal_293, 0.25f);
				unk_0x15AFB6CBDE990FB6(Local_57[0x00000007 /*2*/], 0x00000001, 0x00000001);
				unk_0x9F528B1B53FBC5D9(Local_57[0x00000007 /*2*/], Local_57[0x00000006 /*2*/], 0xFFFFFFFF, vLocal_282, 0f, 0f, fLocal_283, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				unk_0x08841CDB215AE18F(Local_57[0x00000008 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_285), 0x00000000, 0x00000000, 0x00000001);
				if (unk_0x83A8177D302E1A7E(iLocal_245))
				{
					unk_0xF7E25143642732EA(iLocal_245, 0x00000000);
				}
				iLocal_275++;
			}
			else
			{
				fVar0 = (1f - func_203((SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_1959 + 1500)) / 3000f), 0f, 1f));
				unk_0x9AB5B84DE011D632(iLocal_245, "flow", fVar0, 0x00000000);
				func_204(0x00000001, 5.5f);
			}
			break;
		
		case 0x00000005:
			unk_0xE4EBD4F12E3C46F1(1f);
			vLocal_287 = { unk_0x68F4C0EC296D3901(Local_57[0x00000008 /*2*/], 0x00000001) };
			if (vLocal_287.z <= 11f)
			{
				unk_0x15AFB6CBDE990FB6(Local_53[0x00000000 /*2*/], 0x00000001, 0x00000001);
				iLocal_275++;
			}
			else
			{
				func_205(0x00000001, 1f);
			}
			break;
		
		case 0x00000006:
			if (unk_0xE608C809F9416F00(Local_53[0x00000000 /*2*/]))
			{
				iLocal_1959 = unk_0x1C0640BA9A7327B3() + 1000;
				iLocal_275++;
			}
			break;
		
		case 0x00000007:
			if (unk_0x1C0640BA9A7327B3() > iLocal_1959)
			{
				unk_0x1E9649458B15960F(Local_57[0x00000008 /*2*/], 0x00000001);
				iLocal_275++;
			}
			else
			{
				func_204(0x00000000, 4f);
				func_205(0x00000000, 1f);
			}
			break;
		
		case 0x00000008:
			func_202(&uLocal_309);
			return 0x00000001;
			break;
	}
	if (unk_0x0F1CCD77290EE12F())
	{
		if (iLocal_275 > 0x00000000 && iLocal_275 < 0x00000005)
		{
			if (func_200(0x000003E8))
			{
				unk_0x53491B90E4FD0E56(0x00000320);
			}
		}
	}
	else if (unk_0x757EF87A33649210())
	{
		if (unk_0x83A8177D302E1A7E(iLocal_245))
		{
			unk_0xF7E25143642732EA(iLocal_245, 0x00000000);
		}
		unk_0xD7AD2803AD9697F7(unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), 30f);
		iLocal_1957 = 0x00000002;
		iLocal_1956 = 0x00000001;
	}
	return 0x00000000;
}

int func_200(int iParam0)
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
			if (func_201())
			{
				Global_1B = unk_0x1C0640BA9A7327B3();
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_201()
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

void func_202(var uParam0)
{
	if (unk_0xEB880D98B5988D0C())
	{
		unk_0x486B4ADE317F0689();
		func_90(&(uParam0->f_364));
	}
}

float func_203(float fParam0, float fParam1, float fParam2)
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

void func_204(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		fLocal_283 = (fLocal_283 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fLocal_283 = (fLocal_283 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	unk_0x15AFB6CBDE990FB6(Local_57[0x00000007 /*2*/], 0x00000001, 0x00000001);
	unk_0x9F528B1B53FBC5D9(Local_57[0x00000007 /*2*/], Local_57[0x00000006 /*2*/], 0xFFFFFFFF, vLocal_282, 0f, 0f, fLocal_283, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	unk_0x08841CDB215AE18F(Local_57[0x00000008 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_285), 0x00000000, 0x00000000, 0x00000001);
}

void func_205(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		vLocal_285.z = (vLocal_285.z - (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		vLocal_285.z = (vLocal_285.z + (fParam1 * SYSTEM::TIMESTEP()));
	}
	unk_0x08841CDB215AE18F(Local_57[0x00000008 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_285), 0x00000000, 0x00000000, 0x00000001);
}

int func_206(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_207(vParam1) || func_207(vParam2))
	{
		return 0x00000000;
	}
	if (uParam0->f_364)
	{
		if ((func_95(uParam0->f_364.f_4, vParam1, 0x00000000) && func_95(uParam0->f_364.f_7, vParam2, 0x00000000)) && uParam0->f_364.f_A == fParam3)
		{
			uParam0->f_364.f_2 = 0x00000000;
			if (!uParam0->f_364.f_1)
			{
				uParam0->f_3D6 = 0x00000001;
				return 0x00000001;
			}
			else
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
		unk_0xD67D6A3F0D653D93(vParam1, vParam2, fParam3, iParam4);
		uParam0->f_364 = 0x00000001;
		uParam0->f_364.f_3 = unk_0x1C0640BA9A7327B3();
		uParam0->f_364.f_4 = { vParam1 };
		uParam0->f_364.f_7 = { vParam2 };
		uParam0->f_364.f_A = fParam3;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_207(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_208()
{
	if (iLocal_248)
	{
		unk_0xBCD4D622B825D37C(&(Local_55[0x00000000 /*5*/]));
		unk_0xBCD4D622B825D37C(&(Local_55[0x00000001 /*5*/]));
		unk_0xBCD4D622B825D37C(&(Local_55[0x00000002 /*5*/]));
		unk_0xBCD4D622B825D37C(&(Local_55[0x00000003 /*5*/]));
		iLocal_248 = 0x00000000;
	}
}

void func_209(bool bParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), bParam0, iParam6);
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	unk_0xB3A1B75CB59FEB56(bParam2, bParam3, iParam5, 0x00000001, 0x00000000, 0x00000000);
	if (bParam4)
	{
		unk_0x679C321F8CAA2CFA(vParam1, 500f, 0x00000000);
	}
	unk_0x7800CEC090C01D4D(vParam1, 300f);
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x3E5CE368CD085FFA(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000);
	}
	if (bParam7)
	{
		func_210(0x00000000);
	}
}

void func_210(int iParam0)
{
	if (func_214())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_213())
		{
			func_211(0x00000001, 0x00000001);
		}
		else
		{
			func_211(0x00000000, 0x00000000);
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
	if (!func_21())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_211(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_212(0x00000000))
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

int func_212(int iParam0)
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

bool func_213()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_214()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_215(bool bParam0, int iParam1)
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

void func_216(int iParam0, bool bParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_78CE, iParam0))
	{
		if (!bParam1)
		{
			unk_0x0674E58A79778E99(&Global_78CE, iParam0);
			StringCopy(&(Global_78CF[iParam0 /*6*/]), "NULL", 24);
			Global_7906[iParam0] = bParam1;
		}
	}
}

void func_217(int iParam0, bool bParam1)
{
	func_42(iParam0, bParam1, 0x00000000);
}

int func_218(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0xC844350D5D58C99A(iParam1) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_219(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_220(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_221(var uParam0, char* sParam1)
{
	int iVar0;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		iVar0 = 0x00000000;
		while (iVar0 < uParam0->f_111)
		{
			if (uParam0->f_111[iVar0 /*5*/])
			{
				if (unk_0x7F8A39872A07D2CE(uParam0->f_111[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_111[iVar0 /*5*/].f_1)
					{
						unk_0x8D17794CE3273D70(sParam1);
						func_90(&(uParam0->f_111[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_111[iVar0 /*5*/].f_2 = 0x00000001;
						uParam0->f_3D6 = 0x00000001;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

int func_222()
{
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000006 /*2*/]))
	{
		Local_57[0x00000006 /*2*/] = unk_0x7707E48765093646(iLocal_278, vLocal_279, 0x00000001, 0x00000001, 0x00000000);
		unk_0xA47B46945FF6DE74(Local_57[0x00000006 /*2*/], vLocal_279, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(Local_57[0x00000006 /*2*/], fLocal_280);
		unk_0x1E9649458B15960F(Local_57[0x00000006 /*2*/], 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000007 /*2*/]))
	{
		Local_57[0x00000007 /*2*/] = unk_0x7707E48765093646(iLocal_281, unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000006 /*2*/], vLocal_282), 0x00000001, 0x00000001, 0x00000000);
	}
	if (!unk_0x50B5F6F3C29E9380(Local_57[0x00000007 /*2*/], Local_57[0x00000006 /*2*/]))
	{
		unk_0x9F528B1B53FBC5D9(Local_57[0x00000007 /*2*/], Local_57[0x00000006 /*2*/], 0xFFFFFFFF, vLocal_282, 0f, 0f, fLocal_283, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000008 /*2*/]))
	{
		Local_57[0x00000008 /*2*/] = unk_0x7707E48765093646(iLocal_284, unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_285), 0x00000001, 0x00000001, 0x00000000);
		unk_0x120A395B0ECB8EA5(Local_57[0x00000008 /*2*/], 0x00000000);
		unk_0x9F528B1B53FBC5D9(Local_57[0x00000008 /*2*/], Local_57[0x00000007 /*2*/], 0xFFFFFFFF, vLocal_285, 0f, 0f, fLocal_286, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		unk_0x15AFB6CBDE990FB6(Local_57[0x00000008 /*2*/], 0x00000001, 0x00000000);
		unk_0x1E9649458B15960F(Local_57[0x00000008 /*2*/], 0x00000001);
	}
	if (!iLocal_249)
	{
		if (unk_0x32B8283A77B4A240(Local_57[0x00000007 /*2*/]) && unk_0x32B8283A77B4A240(Local_57[0x00000008 /*2*/]))
		{
			iLocal_290 = unk_0x554477F017313FFD(unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_288), 0f, 0f, 0f, 70f, 0x00000000, -1f, 4f, 1.4f, 0x00000000, 0x00000000, 0x00000001, 1f, 0x00000000, 0x00000000);
			unk_0xD302EBC2E2F714C5(iLocal_290, 0x00000001);
			unk_0x11E7EF0C53A0210C(iLocal_290, 0x00000002);
			unk_0x3AD51BF3C6832AAD(&iLocal_290, 0x00000000);
			unk_0xE8F21A278C1048BF(iLocal_290, Local_57[0x00000007 /*2*/], Local_57[0x00000008 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000007 /*2*/], vLocal_288), unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000008 /*2*/], vLocal_289), 70f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_249 = 0x00000001;
			return 0x00000001;
		}
		if (!unk_0x32B8283A77B4A240(Local_57[0x00000007 /*2*/]))
		{
		}
		if (!unk_0x32B8283A77B4A240(Local_57[0x00000008 /*2*/]))
		{
		}
	}
	return 0x00000000;
}

void func_223(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&Global_78CE, iParam0);
	StringCopy(&(Global_78CF[iParam0 /*6*/]), unk_0xBB0808A181D4745C(), 24);
	Global_7906[iParam0] = iParam1;
}

void func_224(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_225(int iParam0, bool bParam1)
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

int func_226(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_49(iParam0, vParam1, vParam2, func_87(), func_87(), bParam3, 0x00000005, 0x00000000, 0x00000000, 0x00000000, iParam4, sParam5, func_227(), func_227(), func_227(), func_227(), sParam6, 0x00000000, bParam8, sParam7, 0x00000000, iParam9, bParam10, iParam11, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x3F800000);
}

var func_227()
{
	var uVar0;
	
	return uVar0;
}

void func_228(var uParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (unk_0x7F8A39872A07D2CE(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					unk_0x42740B44BA8D7B43(sParam1);
					func_90(&(uParam0->f_2E1[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_2E1[iVar0 /*5*/].f_2 = 0x00000001;
					uParam0->f_3D6 = 0x00000001;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	vector3 vVar1;
	
	switch (iLocal_1953)
	{
		case 0x00000000:
			if (unk_0x757EF87A33649210())
			{
				unk_0x82E51BCA72537B6C(0x00000320);
			}
			if (func_107(Local_53[0x00000000 /*2*/]))
			{
				if (!unk_0xE4EDC4B0E92C078B(Local_53[0x00000000 /*2*/].f_1))
				{
					Local_53[0x00000000 /*2*/].f_1 = func_38(Local_53[0x00000000 /*2*/], 0x00000000, 0x00000000);
				}
				vLocal_56 = { unk_0x6CAADC590F8E4F66(Local_53[0x00000000 /*2*/]) };
			}
			if (unk_0xC844350D5D58C99A(Local_57[0x00000002 /*2*/]) && !unk_0xE4EDC4B0E92C078B(iLocal_243))
			{
				iLocal_243 = func_277(Local_57[0x00000002 /*2*/]);
			}
			unk_0xDC5B2F9D0CCE3A10(iLocal_243, "SUBBTN_LABEL");
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0xC92DB9682A650680("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				unk_0xC92DB9682A650680("DHP1_START");
			}
			if (func_107(Local_54[0x00000004 /*10*/]))
			{
				unk_0x11AD11297DC58CC7(Local_54[0x00000004 /*10*/], 0x00000001);
				unk_0x8685456FA9090367(Local_54[0x00000004 /*10*/], 0x00000000);
			}
			func_276(&uLocal_309, cLocal_51);
			func_276(&uLocal_309, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_275(&uLocal_309, "PORT_OF_LS_PREP_1");
			func_35("dkp1_sub", 0x00001D4C, 0x00000001);
			iLocal_264 = 0x00000000;
			iLocal_265 = 0x00000000;
			iLocal_266 = 0x00000000;
			iLocal_268 = unk_0x1C0640BA9A7327B3();
			iLocal_269 = 0x00000000;
			iLocal_253 = 0x00000000;
			iLocal_263 = 0x00000000;
			if (iLocal_1962[0x00000000] == 0xFFFFFFFF)
			{
				iLocal_1962[0x00000000] = unk_0xD68EA767274B7444();
			}
			if (iLocal_1962[0x00000001] == 0xFFFFFFFF)
			{
				iLocal_1962[0x00000001] = unk_0xD68EA767274B7444();
			}
			iLocal_1953++;
			break;
		
		case 0x00000001:
			if (iLocal_248)
			{
				if (((!unk_0x38F46E8B62DED0D4(&(Local_55[0x00000000 /*5*/])) && !unk_0x38F46E8B62DED0D4(&(Local_55[0x00000001 /*5*/]))) && !unk_0x38F46E8B62DED0D4(&(Local_55[0x00000002 /*5*/]))) && !unk_0x38F46E8B62DED0D4(&(Local_55[0x00000003 /*5*/])))
				{
					unk_0x8829DF6BD666E49D(Local_57[0x00000000 /*2*/]);
					unk_0x8829DF6BD666E49D(Local_57[0x00000001 /*2*/]);
					if (func_107(Local_53[0x00000000 /*2*/]))
					{
						unk_0xD30E2F394BD927B3(Local_53[0x00000000 /*2*/], vLocal_56);
					}
					if (unk_0xE4EDC4B0E92C078B(iLocal_243))
					{
						unk_0x142CC44DB769B57E(&iLocal_243);
					}
					func_271(0x00000001);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_276(&uLocal_309, cLocal_49);
					unk_0xC92DB9682A650680("DHP1_RELEASED");
					unk_0xA37A90C62806D848(0x00000001);
					iLocal_301 = unk_0x1C0640BA9A7327B3();
					iLocal_1953 = 0x00000004;
				}
				func_270();
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && !func_212(0x00000000))
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033))
					{
						iLocal_293 = unk_0xAE06CCC36C49929C(0x019286A9, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 0x00000001, 0x00000002);
						unk_0x86F44313DFA8F00C(iLocal_293, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 0x00000DAC, 0x00000000, 0x00000001, 0x00000002);
						unk_0x91F5B0244AAE6222(iLocal_293, "hand_shake", 0.3f);
						func_209(0x00000000, 1249.787f, -3008.016f, 8.52751f, 0x00000001, 0x00000000, 0x00000001, 0x00000BB8, 0x00000000, 0x00000001);
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
						iLocal_246 = unk_0xE9744DB7B8CA6965(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 0x00000002);
						if (unk_0x5F596B0E13677FE9(unk_0x16F2683693E537C9()))
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_246, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 0x00000004, 0x00000000, 1000f, 0x00000002);
						}
						else
						{
							unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_246, cLocal_51, "ig_1_button", 1000f, -1.5f, 0x00000004, 0x00000000, 1000f, 0x00000002);
						}
						unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						unk_0xA37A90C62806D848(0x00000001);
						iVar0 = unk_0x83C1D4B63BBD91F6(1249.787f, -3008.016f, 8.52751f, 5f, 0x00000000, 0x00000004);
						if (func_107(iVar0))
						{
							unk_0xA47B46945FF6DE74(iVar0, 1250.333f, -3010.219f, 8.3191f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							unk_0xD8F6A53F4799FAFE(iVar0, 85.8086f);
							unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
						}
						unk_0x8B4C4CA774181102(4f, 0f, 0x00000004);
						unk_0x420FE818E70BB523(0x00000004);
						iLocal_294 = 0x00000001;
						iLocal_1953++;
					}
					else if (!func_219("DKP1_BTN"))
					{
						func_269("DKP1_BTN");
					}
				}
				else if (func_219("DKP1_BTN"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0x69DF961355195C3C(iLocal_246) || unk_0xA45992A6CE82FB43(iLocal_246) == 1f)
			{
				unk_0xBF40D896CA4BDBE7();
				unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
				unk_0x86F44313DFA8F00C(iLocal_293, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
				unk_0x86F44313DFA8F00C(iLocal_293, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 0x000006A4, 0x00000002, 0x00000002, 0x00000002);
				unk_0x97271F6489B78F2D(iLocal_293, 0.1f);
				unk_0xDEC30C89A69FEB57(Local_55[0x00000000 /*5*/], Local_53[0x00000000 /*2*/]);
				unk_0xDEC30C89A69FEB57(Local_55[0x00000001 /*5*/], Local_53[0x00000000 /*2*/]);
				unk_0xDEC30C89A69FEB57(Local_55[0x00000002 /*5*/], Local_53[0x00000000 /*2*/]);
				unk_0xDEC30C89A69FEB57(Local_55[0x00000003 /*5*/], Local_53[0x00000000 /*2*/]);
				unk_0x8829DF6BD666E49D(Local_57[0x00000000 /*2*/]);
				unk_0x8829DF6BD666E49D(Local_57[0x00000001 /*2*/]);
				if (func_107(Local_53[0x00000000 /*2*/]))
				{
					unk_0xD30E2F394BD927B3(Local_53[0x00000000 /*2*/], vLocal_56);
					unk_0xAC0C6241732E36F6(Local_53[0x00000000 /*2*/]);
				}
				iLocal_301 = unk_0x1C0640BA9A7327B3();
				unk_0xC92DB9682A650680("DHP1_RELEASED");
				unk_0xA37A90C62806D848(0x00000001);
				iLocal_294 = 0x00000001;
				iLocal_1953++;
			}
			else if (unk_0x69DF961355195C3C(iLocal_246) && unk_0xA45992A6CE82FB43(iLocal_246) >= 0.7f)
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x2A89B8A7) != 0x00000001)
				{
					unk_0x96167B03C5A77156(unk_0x16F2683693E537C9(), 1252.594f, -3008.883f, 8.3191f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_301) > 0x000005DC)
			{
				if (iLocal_294)
				{
					unk_0x86F44313DFA8F00C(iLocal_293, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0x00000000, 0x00000003, 0x00000003, 0x00000002);
					unk_0x86F44313DFA8F00C(iLocal_293, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 0x00000FA0, 0x00000003, 0x00000003, 0x00000002);
					iLocal_294 = 0x00000000;
				}
				if ((unk_0x1C0640BA9A7327B3() - iLocal_301) > 0x00001388 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_243))
					{
						unk_0x142CC44DB769B57E(&iLocal_243);
					}
					func_271(0x00000001);
					func_88(&uLocal_309, joaat("s_m_m_security_01"));
					func_276(&uLocal_309, cLocal_49);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xEF6276132B396452(0f, 0x3F800000);
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_197(0x00000001, 0x00000000, 0x00000000, 0x00000BB8, 0x00000000);
					iLocal_301 = unk_0x1C0640BA9A7327B3();
					iLocal_1953++;
				}
			}
			break;
		
		case 0x00000004:
			if (!func_268())
			{
				if (func_24() == 0x00000002)
				{
					if (!func_265(func_266(0x00000000), 0x00000000) && !func_265(func_266(0x00000001), 0x00000000))
					{
						func_264(0x0000000C);
						iLocal_1953++;
					}
					else if (func_265(func_266(0x00000000), 0x00000000) && !func_265(func_266(0x00000001), 0x00000000))
					{
						func_224(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
						func_224(&uLocal_78, 0x00000001, func_266(0x00000000), "MICHAEL", 0x00000000, 0x00000001);
						if (func_261(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 0x00000007, 0x00000000, 0x00000000))
						{
							func_264(0x0000000C);
							iLocal_1953++;
						}
					}
					else if (!func_265(func_266(0x00000000), 0x00000000) && func_265(func_266(0x00000001), 0x00000000))
					{
						func_224(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
						func_224(&uLocal_78, 0x00000002, func_266(0x00000001), "FRANKLIN", 0x00000000, 0x00000001);
						if (func_261(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 0x00000007, 0x00000000, 0x00000000))
						{
							func_264(0x0000000C);
							iLocal_1953++;
						}
					}
					else
					{
						func_224(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
						func_224(&uLocal_78, 0x00000001, func_266(0x00000000), "MICHAEL", 0x00000000, 0x00000001);
						func_224(&uLocal_78, 0x00000002, func_266(0x00000001), "FRANKLIN", 0x00000000, 0x00000001);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_BUD", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							func_264(0x0000000C);
							iLocal_1953++;
						}
					}
				}
				else if (func_36())
				{
					func_35("DKP1_SWTCH", 0x00001D4C, 0x00000001);
				}
			}
			break;
		
		case 0x00000005:
			vVar1 = { unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001) };
			if (unk_0xFC0E4F7E386C43F8(Local_53[0x00000000 /*2*/]) > 0f || vVar1.z < -0.5f)
			{
				unk_0x7DFD82B6FD730AA4(Local_55[0x00000000 /*5*/]);
				unk_0x7DFD82B6FD730AA4(Local_55[0x00000001 /*5*/]);
				unk_0x7DFD82B6FD730AA4(Local_55[0x00000002 /*5*/]);
				unk_0x7DFD82B6FD730AA4(Local_55[0x00000003 /*5*/]);
				if (iLocal_1962[0x00000000] != 0xFFFFFFFF)
				{
					unk_0x55D0A2DB35045A35(iLocal_1962[0x00000000]);
				}
				if (iLocal_1962[0x00000001] != 0xFFFFFFFF)
				{
					unk_0x55D0A2DB35045A35(iLocal_1962[0x00000001]);
				}
			}
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000))
			{
				func_230(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0x00000000, 0x00000091);
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					Local_54[0x00000006 /*10*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 0x00000001, 0x00000001);
					unk_0x262EF6C6306BEA6C(Local_54[0x00000006 /*10*/], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
					unk_0x4E885A246A9D983A(Local_54[0x00000006 /*10*/], 0x0000014A, 0x00000001);
					unk_0xE733200EEF894A35(Local_54[0x00000006 /*10*/], 0x00000001);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					unk_0xDD353D0E9C789D0E(&iLocal_244);
					unk_0x96167B03C5A77156(0x00000000, 1252.876f, -3014.035f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0x75ABDC5F81978924(iLocal_244);
					unk_0x78ADC381772E3D54(Local_54[0x00000006 /*10*/], iLocal_244);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					Local_54[0x00000007 /*10*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 0x00000001, 0x00000001);
					unk_0x4E885A246A9D983A(Local_54[0x00000007 /*10*/], 0x0000014A, 0x00000001);
					unk_0x262EF6C6306BEA6C(Local_54[0x00000007 /*10*/], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
					unk_0xE733200EEF894A35(Local_54[0x00000007 /*10*/], 0x00000001);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					unk_0xDD353D0E9C789D0E(&iLocal_244);
					unk_0x96167B03C5A77156(0x00000000, 1252.056f, -3006.94f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000002);
					unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					unk_0x75ABDC5F81978924(iLocal_244);
					unk_0x78ADC381772E3D54(Local_54[0x00000007 /*10*/], iLocal_244);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_54[0x00000005 /*10*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, 0x00000001, 0x00000001);
					unk_0x11AD11297DC58CC7(Local_54[0x00000005 /*10*/], 0x00000001);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					unk_0xDD353D0E9C789D0E(&iLocal_244);
					unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000830, 0x00000002);
					unk_0x96167B03C5A77156(0x00000000, 1252.876f, -3014.035f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xEEB67C3D0A71A47B(0x00000000, 1252.876f, -3014.035f, 8.31909f, 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_244);
					unk_0x78ADC381772E3D54(Local_54[0x00000005 /*10*/], iLocal_244);
					unk_0xF82EA857DA10E0CD(&iLocal_244);
					func_89(&uLocal_309, joaat("s_m_m_security_01"));
				}
				if (func_107(Local_54[0x00000004 /*10*/]))
				{
					unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
					unk_0xA47B46945FF6DE74(Local_54[0x00000004 /*10*/], 1229.557f, -3002.882f, 8.31909f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				else
				{
					Local_54[0x00000004 /*10*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 0x00000001, 0x00000001);
				}
				unk_0x11AD11297DC58CC7(Local_54[0x00000004 /*10*/], 0x00000001);
				unk_0x33CE5A9E32EA10B2(Local_54[0x00000004 /*10*/], 0x00000001);
				unk_0xF82EA857DA10E0CD(&iLocal_244);
				unk_0xDD353D0E9C789D0E(&iLocal_244);
				unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000830, 0x00000002);
				unk_0x96167B03C5A77156(0x00000000, 1252.994f, -3004.134f, 9.319f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_f", 8f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xEEB67C3D0A71A47B(0x00000000, 1252.994f, -3004.134f, 9.319f, 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_244);
				unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
				unk_0xF82EA857DA10E0CD(&iLocal_244);
				iLocal_305 = unk_0x1C0640BA9A7327B3();
				iLocal_308 = 0x00000000;
				iLocal_307 = 0x00000000;
				unk_0xA37A90C62806D848(0x00000001);
				unk_0xC92DB9682A650680("DHP1_SUB");
				if (unk_0xE4EDC4B0E92C078B(Local_53[0x00000000 /*2*/].f_1))
				{
					unk_0x142CC44DB769B57E(&(Local_53[0x00000000 /*2*/].f_1));
				}
				unk_0xEEEE2E5FA6F78DF0(&(Local_57[0x00000003 /*2*/]));
				unk_0xEEEE2E5FA6F78DF0(&(Local_57[0x00000000 /*2*/]));
				unk_0xEEEE2E5FA6F78DF0(&(Local_57[0x00000001 /*2*/]));
				func_89(&uLocal_309, joaat("p_amb_phone_01"));
				func_89(&uLocal_309, joaat("s_m_m_dockwork_01"));
				func_89(&uLocal_309, joaat("prop_ld_test_01"));
				func_89(&uLocal_309, joaat("prop_sub_release"));
				func_221(&uLocal_309, cLocal_51);
				unk_0x2F3540C2227116A3("docksprep1");
				unk_0x8B4C4CA774181102(15f, 10f, 0x00000004);
				func_195(0x00000001);
				iLocal_1953 = 0x00000000;
			}
			else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), 0x00000001) < 5f && !iLocal_253)
			{
				func_220("DKP1_CLIMB", 0xFFFFFFFF);
				iLocal_253 = 0x00000001;
			}
			break;
	}
	if ((!iLocal_263 && func_107(Local_53[0x00000000 /*2*/])) && unk_0x70EED0761B82965E(Local_53[0x00000000 /*2*/]))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "SUB_SPLASH", Local_53[0x00000000 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0x00000000, 0x00000000);
		iLocal_263 = 0x00000001;
	}
	if (((!iLocal_248 && unk_0xC844350D5D58C99A(Local_57[0x00000000 /*2*/])) && unk_0xC844350D5D58C99A(Local_57[0x00000001 /*2*/])) && func_107(Local_53[0x00000000 /*2*/]))
	{
		if (unk_0x32B8283A77B4A240(Local_57[0x00000000 /*2*/]) && unk_0x32B8283A77B4A240(Local_57[0x00000001 /*2*/]))
		{
			unk_0x40D76D5B1048A2B8(Local_53[0x00000000 /*2*/]);
			Local_55[0x00000000 /*5*/] = unk_0x554477F017313FFD(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1958, 0x00000001, fLocal_1958, 0.5f, 0.5f, 0x00000000, 0x00000000, 0x00000000, 10f, 0x00000001, 0x00000000);
			unk_0xE8F21A278C1048BF(Local_55[0x00000000 /*5*/], Local_57[0x00000000 /*2*/], Local_53[0x00000000 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000000 /*2*/], 0f, 0f, 0f), unk_0x68E4ADDDDCD7BDDE(Local_53[0x00000000 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_1958, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Local_55[0x00000001 /*5*/] = unk_0x554477F017313FFD(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1958, 0x00000001, fLocal_1958, 0.5f, 0.5f, 0x00000000, 0x00000000, 0x00000000, 10f, 0x00000001, 0x00000000);
			unk_0xE8F21A278C1048BF(Local_55[0x00000001 /*5*/], Local_57[0x00000000 /*2*/], Local_53[0x00000000 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000000 /*2*/], 0f, 0f, 0f), unk_0x68E4ADDDDCD7BDDE(Local_53[0x00000000 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_1958, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Local_55[0x00000002 /*5*/] = unk_0x554477F017313FFD(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1958, 0x00000001, fLocal_1958, 0.5f, 0.5f, 0x00000000, 0x00000000, 0x00000000, 10f, 0x00000001, 0x00000000);
			unk_0xE8F21A278C1048BF(Local_55[0x00000002 /*5*/], Local_57[0x00000001 /*2*/], Local_53[0x00000000 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000001 /*2*/], 0f, 0f, 0f), unk_0x68E4ADDDDCD7BDDE(Local_53[0x00000000 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_1958, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Local_55[0x00000003 /*5*/] = unk_0x554477F017313FFD(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_1958, 0x00000001, fLocal_1958, 0.5f, 0.5f, 0x00000000, 0x00000000, 0x00000000, 10f, 0x00000001, 0x00000000);
			unk_0xE8F21A278C1048BF(Local_55[0x00000003 /*5*/], Local_57[0x00000001 /*2*/], Local_53[0x00000000 /*2*/], unk_0x68E4ADDDDCD7BDDE(Local_57[0x00000001 /*2*/], 0f, 0f, 0f), unk_0x68E4ADDDDCD7BDDE(Local_53[0x00000000 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_1958, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_248 = 0x00000001;
			iLocal_250 = 0x00000000;
			unk_0xAC0C6241732E36F6(Local_53[0x00000000 /*2*/]);
			unk_0xEF3C30F70D2ED135(Local_53[0x00000000 /*2*/], 0x00000001, 0f, 0f, 0.01f, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
	}
	else if (func_107(Local_53[0x00000000 /*2*/]))
	{
		if (!iLocal_250)
		{
			unk_0xAC0C6241732E36F6(Local_53[0x00000000 /*2*/]);
			iLocal_250 = 0x00000001;
		}
		unk_0x1E9649458B15960F(Local_53[0x00000000 /*2*/], 0x00000000);
		unk_0xEF3C30F70D2ED135(Local_53[0x00000000 /*2*/], 0x00000001, 0f, 0f, 0.01f, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
	}
	if (!iLocal_251)
	{
		if (unk_0xC844350D5D58C99A(Local_57[0x00000003 /*2*/]))
		{
			if (unk_0x32B8283A77B4A240(Local_57[0x00000003 /*2*/]))
			{
				unk_0x9F528B1B53FBC5D9(Local_57[0x00000003 /*2*/], Local_54[0x00000004 /*10*/], unk_0x4A089F2B762B8D33(Local_54[0x00000004 /*10*/], 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				iLocal_251 = 0x00000001;
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Local_57[0x00000003 /*2*/]) && ((func_107(Local_54[0x00000004 /*10*/]) && unk_0xE9FDA1035CFEA94F(Local_54[0x00000004 /*10*/])) || !func_107(Local_54[0x00000004 /*10*/])))
	{
		if (func_107(Local_54[0x00000004 /*10*/]) && unk_0xB4ECF989E2C1DAC8(Local_54[0x00000004 /*10*/], cLocal_50, "cellphone_call_listen_c", 0x00000003))
		{
			unk_0xFB131B855F2FD560(Local_54[0x00000004 /*10*/], cLocal_50, "cellphone_call_listen_c", 0xC1000000);
		}
		if (unk_0xBDEB2DEEF1D23A18(Local_57[0x00000003 /*2*/]))
		{
			unk_0x15AFB6CBDE990FB6(Local_57[0x00000003 /*2*/], 0x00000001, 0x00000001);
		}
	}
	if (func_24() == 0x00000002)
	{
		if (func_107(Local_53[0x00000000 /*2*/]))
		{
			unk_0x05EC10F460C3A4AF(Local_53[0x00000000 /*2*/], 0x00000001);
		}
	}
	else if (func_107(Local_53[0x00000000 /*2*/]))
	{
		unk_0x05EC10F460C3A4AF(Local_53[0x00000000 /*2*/], 0x00000000);
	}
}

void func_230(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0xC844350D5D58C99A(Global_18F3B.f_4))
	{
		if (unk_0xDF1306B443CD3D15(Global_18F3B.f_4, 0x00000000))
		{
			if (func_260(0x00000018) != Global_18F3B.f_4)
			{
				if (iParam2 == 0x00000001)
				{
					if (func_257(unk_0x68F4C0EC296D3901(Global_18F3B.f_4, 0x00000001), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_231(Global_18F3B.f_4, vParam0, fParam1, 0x00000018, 0x00000000);
			}
		}
	}
}

void func_231(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
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
		func_256(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_121(iParam0, &Var0);
		if (func_95(vParam1, 0f, 0f, 0f, 0x00000000))
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
		func_250(iParam3, &Var0, vParam1, fParam2, func_117(iParam0));
		func_232(iParam3, iParam0, 0x00000000);
	}
}

void func_232(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_249(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
				Global_1B416.f_7FE8.f_12C1 = func_171();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_260(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_233(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_234(iParam0))
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
	func_121(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_234(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_127(iParam0, 0x00000000, 0x00000000)) || func_127(iParam0, 0x00000001, 0x00000000)) || func_127(iParam0, 0x00000002, 0x00000000)) || func_117(iParam0) != 0x00000091) || func_248(iParam0)) || func_247(iParam0)) || func_246(iParam0)) || func_245(iParam0)) || !func_235(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_247(iParam0))
		{
		}
		if (func_247(iParam0))
		{
		}
		if (func_127(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_127(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_127(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_117(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_235(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_236(iParam0, 0x00000000))
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

int func_236(int iParam0, bool bParam1)
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
		if (!func_244())
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
		if ((((!func_243() && !func_242()) && !func_241()) && !func_240()) && !func_244())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_241())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_239(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_237(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_237(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_238())
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

int func_238()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_239(int iParam0)
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

int func_240()
{
	return 0x00000000;
}

int func_241()
{
	return 0x00000001;
}

int func_242()
{
	return 0x00000001;
}

int func_243()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_244()
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

int func_245(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_236(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_246(int iParam0)
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

int func_247(int iParam0)
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

int func_248(int iParam0)
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

int func_249(var uParam0, int iParam1)
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
			uParam0->f_4 = func_119(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_119(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_119(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_119(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_119(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_119(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_119(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_119(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_119(0x00000002, 0x00000001);
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
			if (func_244())
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
			if (func_244())
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
		if (!func_95(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_95(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_95(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

void func_250(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_249(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_255(iParam0);
			func_254(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
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
			func_251(iParam0, 0x00000001);
		}
	}
}

void func_251(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_253(iParam0, 0x00000000))
		{
			func_252(iParam0, 0x00000001, 0x00000000);
			func_252(iParam0, 0x00000002, 0x00000000);
			func_252(iParam0, 0x00000003, 0x00000000);
			func_252(iParam0, 0x00000004, 0x00000000);
			func_252(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_252(iParam0, 0x00000000, 0x00000000);
	}
}

void func_252(int iParam0, int iParam1, bool bParam2)
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

bool func_253(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_254(var uParam0, var uParam1)
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

void func_255(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_249(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_251(iParam0, 0x00000000);
		}
	}
}

void func_256(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_255(iParam0);
	func_251(iParam0, 0x00000000);
}

int func_257(vector3 vParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_258(vParam0, iParam1, 0x00000001);
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

int func_258(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_259(iVar0) || iParam2 == 0x00000000)
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

bool func_259(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_260(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

bool func_261(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	func_34(uParam0, 0x00000091, sParam1, iParam7, iParam8, 0x00000000);
	if (iParam6 > 0x00000007)
	{
		if (iParam6 < 0x0000000C)
		{
			iParam6 = 0x00000007;
		}
	}
	uVar0 = 0x0000000A;
	uVar1 = 0x0000000A;
	func_263(0x00000002, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	return func_262(&uVar0, &uVar1, iParam6, 0x00000000);
}

int func_262(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam2 > Global_5147)
			{
				if (bParam3 == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
				}
				else
				{
					func_33();
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
		if (func_32(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_31();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5529 = Global_552A;
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_4FC8.f_172 = Global_5522;
		Global_5141 = Global_5142;
		Global_5143 = Global_5144;
		if (Global_5247 == 0x00000000)
		{
			Global_51DF[0x00000000 /*6*/] = { Global_51F9[0x00000000 /*6*/] };
			Global_51DF[0x00000001 /*6*/] = { Global_51F9[0x00000001 /*6*/] };
			Global_5213[0x00000000 /*6*/] = { Global_522D[0x00000000 /*6*/] };
			Global_5213[0x00000001 /*6*/] = { Global_522D[0x00000001 /*6*/] };
			Global_51EC[0x00000000 /*6*/] = { Global_5206[0x00000000 /*6*/] };
			Global_51EC[0x00000001 /*6*/] = { Global_5206[0x00000001 /*6*/] };
			Global_5220[0x00000000 /*6*/] = { Global_523A[0x00000000 /*6*/] };
			Global_5220[0x00000001 /*6*/] = { Global_523A[0x00000001 /*6*/] };
		}
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam3)
			{
				func_23();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam2 == 0x0000000D)
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
				if (func_22())
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
					if (Global_5247 == 0x00000000)
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
			}
			if (func_21())
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
			}
			func_20();
			Global_514F = bParam3;
		}
		Global_5147 = iParam2;
		if (Global_5141 > 0x00000000)
		{
			iVar0 = 0x00000000;
			while (iVar0 < Global_5141)
			{
				StringCopy(&(Global_4FC8.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_4FC8.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_4CD7 = 0x00000000;
		func_19();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam2 < Global_5147 || iParam2 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000002)
	{
	}
	else
	{
		func_33();
	}
	return 0x00000000;
}

void func_263(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_5142 = iParam0;
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	(*uParam1)[0x00000000] = uParam3;
	(*uParam2)[0x00000000] = uParam4;
	(*uParam1)[0x00000001] = uParam5;
	(*uParam2)[0x00000001] = uParam6;
	(*uParam1)[0x00000002] = iParam7;
	(*uParam2)[0x00000002] = iParam8;
	(*uParam1)[0x00000003] = iParam9;
	(*uParam2)[0x00000003] = iParam10;
	(*uParam1)[0x00000004] = iParam11;
	(*uParam2)[0x00000004] = iParam12;
	(*uParam1)[0x00000005] = iParam13;
	(*uParam2)[0x00000005] = iParam14;
	(*uParam1)[0x00000006] = iParam15;
	(*uParam2)[0x00000006] = iParam16;
}

void func_264(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_17187, iParam0);
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_27(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_266(iVar0) != iParam0)
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

int func_266(int iParam0)
{
	if (iParam0 > 0x00000003)
	{
		return 0x00000000;
	}
	if (iParam0 == func_24())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_177DE[func_267(iParam0)];
}

int func_267(int iParam0)
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

int func_268()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

void func_269(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_270()
{
	int iVar0;
	bool bVar1;
	
	iLocal_247 = 0x00000000;
	while (iLocal_247 < Local_55)
	{
		if (!unk_0x38F46E8B62DED0D4(&(Local_55[iLocal_247 /*5*/])))
		{
			if (!Local_55[iLocal_247 /*5*/].f_4)
			{
				bVar1 = 0x00000001;
			}
			iVar0++;
		}
		iLocal_247++;
	}
	if (bVar1)
	{
		if (((((!unk_0x38F46E8B62DED0D4(&(Local_55[0x00000000 /*5*/])) && !unk_0x38F46E8B62DED0D4(&(Local_55[0x00000001 /*5*/]))) && (!Local_55[0x00000000 /*5*/].f_4 || !Local_55[0x00000001 /*5*/].f_4)) || ((!unk_0x38F46E8B62DED0D4(&(Local_55[0x00000002 /*5*/])) && !unk_0x38F46E8B62DED0D4(&(Local_55[0x00000003 /*5*/]))) && (!Local_55[0x00000002 /*5*/].f_4 || !Local_55[0x00000003 /*5*/].f_4))) || iVar0 == 0x00000003) && iVar0 < 0x00000004)
		{
			if (iLocal_1963 > 0x00000000)
			{
				if (iLocal_1962[(iLocal_1963 - 0x00000001)] != 0xFFFFFFFF)
				{
					unk_0x55D0A2DB35045A35(iLocal_1962[(iLocal_1963 - 0x00000001)]);
				}
			}
			if (iLocal_1962[iLocal_1963] != 0xFFFFFFFF)
			{
				unk_0xEB819BD1E585E9CB(iLocal_1962[iLocal_1963], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_1963++;
			}
		}
		else if (iVar0 <= 0x00000002)
		{
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		iLocal_247 = 0x00000000;
		while (iLocal_247 < Local_55)
		{
			if (!unk_0x38F46E8B62DED0D4(&(Local_55[iLocal_247 /*5*/])))
			{
				if (!Local_55[iLocal_247 /*5*/].f_4)
				{
					unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				Local_55[iLocal_247 /*5*/].f_4 = 0x00000001;
			}
			iLocal_247++;
		}
		if (iVar0 >= 0x00000004)
		{
			if (iLocal_1962[0x00000000] != 0xFFFFFFFF)
			{
				unk_0x55D0A2DB35045A35(iLocal_1962[0x00000000]);
			}
			if (iLocal_1962[0x00000001] != 0xFFFFFFFF)
			{
				unk_0x55D0A2DB35045A35(iLocal_1962[0x00000001]);
			}
		}
	}
}

void func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("prop_ld_test_01"));
			func_88(&uLocal_309, joaat("prop_sub_release"));
			func_88(&uLocal_309, joaat("s_m_m_dockwork_01"));
			func_276(&uLocal_309, cLocal_50);
			func_276(&uLocal_309, cLocal_51);
			func_274(&uLocal_309, "docksprep1");
			func_88(&uLocal_309, joaat("p_amb_phone_01"));
			func_273(&uLocal_309);
			func_275(&uLocal_309, "PORT_OF_LS_PREP_1");
			break;
		
		case 0x00000001:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, iLocal_278);
			func_88(&uLocal_309, iLocal_281);
			func_88(&uLocal_309, iLocal_284);
			func_272(&uLocal_309);
			func_273(&uLocal_309);
			break;
		
		case 0x00000002:
		case 0x00000003:
			func_88(&uLocal_309, joaat("submersible"));
			func_88(&uLocal_309, joaat("packer"));
			func_88(&uLocal_309, joaat("armytrailer"));
			func_88(&uLocal_309, joaat("prop_sub_cover_01"));
			func_88(&uLocal_309, joaat("prop_tarp_strap"));
			break;
	}
}

void func_272(var uParam0)
{
	uParam0->f_35C.f_2 = 0x00000000;
	if (!uParam0->f_35C.f_1)
	{
		if (!uParam0->f_35C)
		{
			unk_0x9E5E60D8C63FD9D1();
			uParam0->f_35C = 0x00000001;
		}
		uParam0->f_3D6 = 0x00000001;
	}
}

void func_273(var uParam0)
{
	uParam0->f_360.f_2 = 0x00000000;
	if (!uParam0->f_360.f_1)
	{
		if (!uParam0->f_360)
		{
			unk_0x8C57ADF8EFD2D9A9();
			uParam0->f_360 = 0x00000001;
		}
		uParam0->f_3D6 = 0x00000001;
	}
}

int func_274(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_176)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			if (unk_0x7F8A39872A07D2CE(uParam0->f_176[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_176[iVar0 /*5*/].f_2 = 0x00000000;
				if (!uParam0->f_176[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 0x00000001;
					return 0x00000001;
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 == 0xFFFFFFFF)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0x00000000)
	{
		unk_0x29398344B9E5B8A7(sParam1);
		uParam0->f_176[iVar1 /*5*/] = 0x00000001;
		uParam0->f_176[iVar1 /*5*/].f_3 = unk_0x1C0640BA9A7327B3();
		uParam0->f_176[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_275(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (unk_0x7F8A39872A07D2CE(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_2E1[iVar0 /*5*/].f_2 = 0x00000000;
				if (!uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 0x00000001;
					return 0x00000001;
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 == 0xFFFFFFFF)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0x00000000)
	{
		unk_0xAE317D00A5A55DF6(sParam1, 0x00000000, 0xFFFFFFFF);
		uParam0->f_2E1[iVar1 /*5*/] = 0x00000001;
		uParam0->f_2E1[iVar1 /*5*/].f_3 = unk_0x1C0640BA9A7327B3();
		uParam0->f_2E1[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_276(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0x00000000;
	}
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_111)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			if (unk_0x7F8A39872A07D2CE(uParam0->f_111[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_111[iVar0 /*5*/].f_2 = 0x00000000;
				if (!uParam0->f_111[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 0x00000001;
					return 0x00000001;
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 == 0xFFFFFFFF)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0x00000000)
	{
		unk_0x3F423BF5B8125A50(sParam1);
		uParam0->f_111[iVar1 /*5*/] = 0x00000001;
		uParam0->f_111[iVar1 /*5*/].f_3 = unk_0x1C0640BA9A7327B3();
		uParam0->f_111[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_277(int iParam0)
{
	return func_39(iParam0, 0x00000001, 0x00000000);
}

void func_278()
{
	int iVar0;
	
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000008 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A(Local_54[iLocal_247 /*10*/]))
		{
			if (Local_54[iLocal_247 /*10*/] != Local_54[0x00000003 /*10*/])
			{
				if (iLocal_1952 == 0x00000000)
				{
					func_293(Local_54[iLocal_247 /*10*/], &(Local_54[iLocal_247 /*10*/].f_2), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
				}
				else if (unk_0xE4EDC4B0E92C078B(Local_54[iLocal_247 /*10*/].f_2))
				{
					unk_0x142CC44DB769B57E(&(Local_54[iLocal_247 /*10*/].f_2));
				}
			}
			if (unk_0xEB6A8945D1AC98A1(Local_54[iLocal_247 /*10*/]))
			{
				if (Local_54[iLocal_247 /*10*/] == Local_54[0x00000003 /*10*/])
				{
					func_93(0x00000007);
				}
				func_9(&(Local_54[iLocal_247 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
			}
			else if (iLocal_1952 == 0x00000002 && Local_54[iLocal_247 /*10*/] == Local_54[0x00000003 /*10*/])
			{
				if (func_10(Local_54[0x00000003 /*10*/], unk_0x16F2683693E537C9(), 0x00000001) > 300f)
				{
					func_93(0x0000000B);
				}
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000004 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A(Local_53[iLocal_247 /*2*/]))
		{
			if (!unk_0xDF1306B443CD3D15(Local_53[iLocal_247 /*2*/], 0x00000000))
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0x00000000 /*2*/])
				{
					func_93(0x00000001);
				}
				else if (Local_53[iLocal_247 /*2*/] == Local_53[0x00000002 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[0x00000001 /*2*/])
				{
					func_93(0x00000002);
				}
				else if (iLocal_247 == 0x00000003)
				{
					func_93(0x00000008);
				}
				func_292(&(Local_53[iLocal_247 /*2*/]));
			}
			else if (iLocal_257)
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0x00000000 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[0x00000001 /*2*/])
				{
					if (iLocal_1952 == 0x00000002)
					{
						if (unk_0xFC0E4F7E386C43F8(Local_53[iLocal_247 /*2*/]) > 0.5f)
						{
							func_93(0x00000005);
						}
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0x00000002 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[0x00000001 /*2*/])
				{
					if (func_291(&(Local_53[iLocal_247 /*2*/])))
					{
						func_93(0x00000003);
						func_292(&(Local_53[iLocal_247 /*2*/]));
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0x00000000 /*2*/])
				{
					if (iLocal_1952 == 0x00000001 && iLocal_1953 < 0x00000003)
					{
						if (func_291(&(Local_53[iLocal_247 /*2*/])))
						{
							func_93(0x00000004);
							func_292(&(Local_53[iLocal_247 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_247++;
	}
	if (func_107(Local_53[0x00000000 /*2*/]) && func_107(unk_0x16F2683693E537C9()))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), 0x00000001) > 750f)
		{
			func_93(0x0000000A);
		}
		else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), 0x00000001) > 700f)
		{
			if (!iLocal_254 && func_36())
			{
				func_35("DKP1_ABSUB", 0x00001D4C, 0x00000001);
				iLocal_254 = 0x00000001;
			}
		}
		else
		{
			iLocal_254 = 0x00000000;
		}
	}
	if (func_107(unk_0x16F2683693E537C9()))
	{
		func_284();
	}
	if (iLocal_1952 == 0x00000000 && iLocal_1953 > 0x00000000)
	{
		func_281();
	}
	if (iLocal_1952 == 0x00000000 || iLocal_1952 == 0x00000001)
	{
		if (func_107(Local_53[0x00000000 /*2*/]))
		{
			if (!iLocal_1960)
			{
				func_280(Local_53[0x00000000 /*2*/], 0x0000024C);
				iLocal_1960 = 0x00000001;
			}
		}
		else if (iLocal_1960)
		{
			func_280(0x00000000, 0x0000024C);
			iLocal_1960 = 0x00000000;
		}
	}
	else if (iLocal_1952 == 0x00000002)
	{
		if (func_107(Local_53[0x00000002 /*2*/]))
		{
			if (!iLocal_1961)
			{
				func_280(Local_53[0x00000002 /*2*/], 0x0000024E);
				iLocal_1961 = 0x00000001;
			}
		}
		else if (iLocal_1961)
		{
			func_280(0x00000000, 0x0000024E);
			iLocal_1961 = 0x00000000;
		}
	}
	if ((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0x00000000, 0x00000001, 0x00000000))
	{
		unk_0x3E48C1351341DC99(unk_0x12AB0310C2281427("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0x00000000, 0x00000000);
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001);
		}
		else
		{
			iVar0 = unk_0x16F2683693E537C9();
		}
		if ((!unk_0xE934758D273C899A(iVar0) && !unk_0x70EED0761B82965E(iVar0)) && (!unk_0xC844350D5D58C99A(Local_53[0x00000000 /*2*/]) || !unk_0x1B3D109B39CC2C89(iVar0, Local_53[0x00000000 /*2*/])))
		{
			if (!iLocal_256)
			{
				func_279(0x00000251);
				iLocal_256 = 0x00000001;
			}
		}
	}
	if (!iLocal_258)
	{
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0x7352ACF3368DF65F("OnlyAllowScriptTriggerPoliceScanner", 0x00000001);
			unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_258 = 0x00000001;
		}
	}
	if (unk_0x5ED715849883FAFF())
	{
		unk_0x504A4E73F2EC2E4C(Local_53[0x00000000 /*2*/]);
	}
}

void func_279(int iParam0)
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

void func_280(int iParam0, int iParam1)
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

void func_281()
{
	switch (iLocal_264)
	{
		case 0x00000000:
			if (func_107(Local_54[0x00000004 /*10*/]))
			{
				if (iLocal_269)
				{
					unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					if (unk_0x1C2E18E9C63BEB77("docksprep1"))
					{
						unk_0xF44B0E19CAC31C33(Local_54[0x00000004 /*10*/], "docksprep1", 0x00000000, 0x00000008, 0xFFFFFFFF);
					}
					else
					{
						unk_0x29398344B9E5B8A7("docksprep1");
					}
				}
			}
			iLocal_270 = 0x00000000;
			iLocal_264 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!iLocal_269)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_268) > 0x000007D0 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_54[0x00000004 /*10*/], 0x00000001), 0x00000001) < 10f)
				{
					iLocal_269 = 0x00000001;
					iLocal_264 = 0x00000000;
				}
			}
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_107(Local_54[0x00000004 /*10*/]))
				{
					if (unk_0xE115347EA59F7B86(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9()))
					{
						unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
						unk_0x0FB22E2FED7BCC7E(Local_54[0x00000004 /*10*/]);
						func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
						iLocal_264 = 0x00000002;
					}
					else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_54[0x00000004 /*10*/], 0x00000001), 0x00000001) < 12f && unk_0x2877A0CC456B25B0(unk_0xD803B885F5E47A62()) > 8.5f)
					{
						unk_0x0FB22E2FED7BCC7E(Local_54[0x00000004 /*10*/]);
						if (!func_283(Local_54[0x00000004 /*10*/], 0x574BB8F5, 0x00000001))
						{
							unk_0x796BDF31572BB055(Local_54[0x00000004 /*10*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000FA0);
							unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_54[0x00000004 /*10*/], 0x00000001), 0x00000001) < 12f && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (!func_283(Local_54[0x00000004 /*10*/], 0x574BB8F5, 0x00000001))
						{
							unk_0x796BDF31572BB055(Local_54[0x00000004 /*10*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000FA0);
							unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (((unk_0xC5767C6697467830(unk_0x16F2683693E537C9()) && (unk_0xD8A54335F18763BA() >= 0x00000013 || unk_0xD8A54335F18763BA() < 0x00000006)) && func_10(unk_0x16F2683693E537C9(), Local_54[0x00000004 /*10*/], 0x00000001) < 25f) && (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_54[0x00000004 /*10*/]) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_54[0x00000004 /*10*/])))
					{
						if (!func_283(Local_54[0x00000004 /*10*/], 0x574BB8F5, 0x00000001))
						{
							unk_0x796BDF31572BB055(Local_54[0x00000004 /*10*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000FA0);
							unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(Local_54[0x00000004 /*10*/], 0x00000001), 0x00000001) < 12f && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (!func_283(Local_54[0x00000004 /*10*/], 0x574BB8F5, 0x00000001))
						{
							unk_0x796BDF31572BB055(Local_54[0x00000004 /*10*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000FA0);
							unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
				if (iLocal_1953 > 0x00000001)
				{
					if (func_107(Local_54[0x00000004 /*10*/]))
					{
						if (unk_0x6AB6A474D29FA7D8(Local_54[0x00000004 /*10*/], Local_53[0x00000000 /*2*/]))
						{
							unk_0x0FB22E2FED7BCC7E(Local_54[0x00000004 /*10*/]);
							func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
							iLocal_264 = 0x00000003;
							iLocal_266 = 0x00000003;
							unk_0x327AAEE25F323797(Local_54[0x00000004 /*10*/]);
							unk_0x96167B03C5A77156(Local_54[0x00000004 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, -122.93f);
							iLocal_268 = unk_0x1C0640BA9A7327B3();
							iLocal_269 = 0x00000000;
						}
					}
				}
			}
			if (func_107(Local_54[0x00000004 /*10*/]))
			{
				if (!unk_0xB72E131222E66495(Local_54[0x00000004 /*10*/]))
				{
					if (iLocal_269)
					{
						if ((unk_0xD1960163A3042274(Local_54[0x00000004 /*10*/], 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(Local_54[0x00000004 /*10*/], 0x2A89B8A7) != 0x00000001) && unk_0xD1960163A3042274(Local_54[0x00000004 /*10*/], 0x574BB8F5) != 0x00000001)
						{
							if (!unk_0xB4ECF989E2C1DAC8(Local_54[0x00000004 /*10*/], cLocal_50, "cellphone_call_listen_c", 0x00000003))
							{
								unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							if (unk_0x5A91F08DF773C39D(Local_54[0x00000004 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0x1C2E18E9C63BEB77("docksprep1"))
								{
									unk_0xF44B0E19CAC31C33(Local_54[0x00000004 /*10*/], "docksprep1", 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
							}
							else if (unk_0x1C2E18E9C63BEB77("docksprep1"))
							{
								unk_0xF44B0E19CAC31C33(Local_54[0x00000004 /*10*/], "docksprep1", 0x00000000, 0x00000008, 0xFFFFFFFF);
							}
						}
					}
				}
				else
				{
					if ((unk_0x1C0640BA9A7327B3() - iLocal_272) > 0x00002710)
					{
						if (!unk_0xEB9B438EB009C4F1(Local_54[0x00000004 /*10*/]))
						{
							if (unk_0x5A91F08DF773C39D(Local_54[0x00000004 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xF2332141D3B90CF2(Local_54[0x00000004 /*10*/], 0x00000000, 0x00000000);
							}
							else if (unk_0x5A91F08DF773C39D(Local_54[0x00000004 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
							{
								unk_0xF2332141D3B90CF2(Local_54[0x00000004 /*10*/], 0x00000000, 0x00000000);
							}
						}
						else
						{
							iLocal_272 = unk_0x1C0640BA9A7327B3();
							unk_0xDAB078B1A98D9A18(Local_54[0x00000004 /*10*/], 0x00000001, 0xFFFFFFFF, 0x00000BB8);
						}
					}
					if (!unk_0x65636D4556D82155(Local_54[0x00000004 /*10*/]) && (unk_0x1C0640BA9A7327B3() - iLocal_273) > 0x00000FA0)
					{
						func_282(Local_54[0x00000004 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 0x00000003);
						iLocal_273 = unk_0x1C0640BA9A7327B3();
					}
				}
				if (((unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007C) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007D)) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007E)) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x00000076))
				{
					unk_0x0FB22E2FED7BCC7E(Local_54[0x00000004 /*10*/]);
					func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
					iLocal_264 = 0x00000003;
					iLocal_266 = 0x00000001;
					unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xF9B5DB58254657F1(Local_54[0x00000004 /*10*/], 0xFFFFFFFF, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000001);
				}
				else if (unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x00000017))
				{
					unk_0x0FB22E2FED7BCC7E(Local_54[0x00000004 /*10*/]);
					func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
					iLocal_264 = 0x00000003;
					iLocal_266 = 0x00000002;
					unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
					unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x8BE3D040D15AEA1D(Local_54[0x00000004 /*10*/], 0xFFFFFFFF);
				}
				else if (unk_0xB87D13D0C064E9D1(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9(), 0x00000001))
				{
					unk_0x0FB22E2FED7BCC7E(Local_54[0x00000004 /*10*/]);
					unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
					iLocal_264 = 0x00000003;
					iLocal_266 = 0x00000004;
				}
			}
			break;
		
		case 0x00000002:
			if (func_107(Local_54[0x00000004 /*10*/]))
			{
				if (!unk_0xC7E2E6167C09468B(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9()))
				{
					unk_0x0C8C0C840C2D1AD2(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000C20, 0x00000002);
				}
			}
			switch (iLocal_265)
			{
				case 0x00000000:
					if (func_107(Local_54[0x00000004 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE3", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_244);
							unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 4f, 0x40000000, 0x40000000, 0x00000000);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
							unk_0x75ABDC5F81978924(iLocal_244);
							unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
							unk_0xF82EA857DA10E0CD(&iLocal_244);
							unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_267 = unk_0x1C0640BA9A7327B3();
							iLocal_265 = 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_267) > 0x00000FA0)
					{
						if (func_107(Local_54[0x00000004 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SEE4", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_244);
								unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 3f, 1f, 0x40000000, 0x00000000);
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF);
								unk_0x75ABDC5F81978924(iLocal_244);
								unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
								unk_0xF82EA857DA10E0CD(&iLocal_244);
								unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								iLocal_267 = unk_0x1C0640BA9A7327B3();
								iLocal_265 = 0x00000002;
							}
						}
					}
					break;
				
				case 0x00000002:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_267) > 0x00001F40)
					{
						if (func_107(Local_54[0x00000004 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPS2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_267 = unk_0x1C0640BA9A7327B3();
								iLocal_266 = 0x00000004;
								iLocal_264 = 0x00000003;
							}
						}
					}
					break;
			}
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0x00000000, 0x00000001, 0x00000000) || !func_107(Local_54[0x00000004 /*10*/]))
			{
				iLocal_264 = 0x00000000;
			}
			unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_271, 0x00000001);
			if (func_107(Local_54[0x00000004 /*10*/]))
			{
				if ((unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007C) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007D)) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007E))
				{
					func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
					iLocal_264 = 0x00000003;
					iLocal_266 = 0x00000001;
					unk_0xF9B5DB58254657F1(Local_54[0x00000004 /*10*/], 0xFFFFFFFF, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000001);
					unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_54[0x00000004 /*10*/]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_54[0x00000004 /*10*/]))
				{
					if (unk_0x654E7ACE881E41FE(iLocal_271) != 0xD49321D4 && iLocal_271 != joaat("weapon_unarmed"))
					{
						func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
						iLocal_264 = 0x00000003;
						iLocal_266 = 0x00000001;
						unk_0x327AAEE25F323797(Local_54[0x00000004 /*10*/]);
						unk_0xF9B5DB58254657F1(Local_54[0x00000004 /*10*/], 0xFFFFFFFF, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
					}
				}
				else if (unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x00000017))
				{
					func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
					iLocal_264 = 0x00000003;
					iLocal_266 = 0x00000002;
					unk_0x8BE3D040D15AEA1D(Local_54[0x00000004 /*10*/], 0xFFFFFFFF);
					unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0xB87D13D0C064E9D1(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9(), 0x00000001))
				{
					func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
					iLocal_264 = 0x00000003;
					iLocal_266 = 0x00000004;
				}
			}
			break;
		
		case 0x00000003:
			switch (iLocal_266)
			{
				case 0x00000001:
					if (func_107(Local_54[0x00000004 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_270 = 0x00000001;
							iLocal_266 = 0x00000004;
						}
					}
					else
					{
						iLocal_269 = 0x00000001;
						iLocal_264 = 0x00000000;
					}
					break;
				
				case 0x00000002:
					if (func_107(Local_54[0x00000004 /*10*/]))
					{
						if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_270 = 0x00000001;
							iLocal_266 = 0x00000004;
						}
					}
					else
					{
						iLocal_269 = 0x00000001;
						iLocal_264 = 0x00000000;
					}
					break;
				
				case 0x00000003:
					if (func_107(Local_54[0x00000004 /*10*/]))
					{
						if (unk_0x5A91F08DF773C39D(Local_54[0x00000004 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SUB1", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_270 = 0x00000001;
								iLocal_266 = 0x00000004;
							}
						}
						if (!unk_0xE0EC712E4BE1FC42(Local_54[0x00000004 /*10*/], Local_53[0x00000000 /*2*/]))
						{
							unk_0x0C8C0C840C2D1AD2(Local_54[0x00000004 /*10*/], Local_53[0x00000000 /*2*/], 0xFFFFFFFF, 0x00000830, 0x00000002);
						}
					}
					else
					{
						iLocal_269 = 0x00000001;
						iLocal_264 = 0x00000000;
					}
					break;
				
				case 0x00000004:
					if (func_107(Local_54[0x00000004 /*10*/]))
					{
						if (!unk_0x869EFD0BC0868856(Local_54[0x00000004 /*10*/]) && !unk_0xA48EBBEA418ADC94(Local_54[0x00000004 /*10*/]))
						{
							if (func_12(&uLocal_78, "SOL1AUD", "SOL1_COPSIN2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
								unk_0xDD353D0E9C789D0E(&iLocal_244);
								unk_0xC6EB89C59F2AF6B8(0x00000000, cLocal_50, "cellphone_call_listen_c", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								if (iLocal_270)
								{
									unk_0x96167B03C5A77156(0x00000000, 1228.775f, -2923.852f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								}
								else
								{
									unk_0x96167B03C5A77156(0x00000000, 1228.775f, -2923.852f, 8.31909f, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0xA371FDC12D462090(0x00000000, 1183.287f, -2947.87f, 4.8986f, 100f, 3f, 6f);
								}
								unk_0x75ABDC5F81978924(iLocal_244);
								unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
								unk_0xF82EA857DA10E0CD(&iLocal_244);
								iLocal_267 = unk_0x1C0640BA9A7327B3();
								unk_0xC92DB9682A650680("DHP1_ATTACKED");
								iLocal_274 = 0x00000000;
								iLocal_266 = 0x00000005;
							}
						}
					}
					else
					{
						iLocal_269 = 0x00000001;
						iLocal_264 = 0x00000000;
					}
					break;
				
				case 0x00000005:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_267) > 0x00001F40)
					{
						if (!iLocal_274)
						{
							if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001)
							{
								unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
								unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
								iLocal_274 = 0x00000001;
							}
						}
						if (func_107(Local_54[0x00000004 /*10*/]))
						{
							if (iLocal_270)
							{
								if (!unk_0xE9FDA1035CFEA94F(Local_54[0x00000004 /*10*/]))
								{
									unk_0xF3268524E9BE6D6E(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								}
							}
							else if (unk_0xD1960163A3042274(Local_54[0x00000004 /*10*/], 0x370BCF53) != 0x00000001)
							{
								unk_0xA371FDC12D462090(Local_54[0x00000004 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 3f, 6f);
							}
						}
					}
					if (!iLocal_270)
					{
						unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_271, 0x00000001);
						if (func_107(Local_54[0x00000004 /*10*/]))
						{
							if ((unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007C) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007D)) || unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x0000007E))
							{
								func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
									unk_0xDD353D0E9C789D0E(&iLocal_244);
									unk_0xF9B5DB58254657F1(0x00000000, 0x00000BB8, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
									unk_0x96167B03C5A77156(0x00000000, 1228.775f, -2923.852f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_244);
									unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
									unk_0xF82EA857DA10E0CD(&iLocal_244);
									iLocal_267 = unk_0x1C0640BA9A7327B3();
									iLocal_270 = 0x00000001;
								}
							}
							else if ((unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_54[0x00000004 /*10*/]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_54[0x00000004 /*10*/])) && unk_0x7069CC4DE1EA3FAA(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9(), 160f))
							{
								if (unk_0x654E7ACE881E41FE(iLocal_271) != 0xD49321D4 && iLocal_271 != joaat("weapon_unarmed"))
								{
									func_224(&uLocal_78, 0x00000004, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
									if (func_12(&uLocal_78, "SOL1AUD", "SOL1_SCAR2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
									{
										unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
										unk_0xDD353D0E9C789D0E(&iLocal_244);
										unk_0xF9B5DB58254657F1(0x00000000, 0x00000BB8, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
										unk_0x96167B03C5A77156(0x00000000, 1228.775f, -2923.852f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
										unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										unk_0x75ABDC5F81978924(iLocal_244);
										unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
										unk_0xF82EA857DA10E0CD(&iLocal_244);
										iLocal_270 = 0x00000001;
										iLocal_267 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
							else if (unk_0xFA4CE147B4D9AEE0(Local_54[0x00000004 /*10*/], 0x00000017))
							{
								func_224(&uLocal_78, 0x00000003, Local_54[0x00000004 /*10*/], "CONSTRUCTION2", 0x00000000, 0x00000001);
								if (func_12(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
								{
									unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
									unk_0xDD353D0E9C789D0E(&iLocal_244);
									unk_0x8BE3D040D15AEA1D(0x00000000, 0xFFFFFFFF);
									unk_0x96167B03C5A77156(0x00000000, 1228.775f, -2923.852f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_244);
									unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
									unk_0xF82EA857DA10E0CD(&iLocal_244);
									iLocal_270 = 0x00000001;
								}
							}
							else if (unk_0xB87D13D0C064E9D1(Local_54[0x00000004 /*10*/], unk_0x16F2683693E537C9(), 0x00000001))
							{
								unk_0xA3BF0AA5A2608191(Local_54[0x00000004 /*10*/]);
								unk_0xDD353D0E9C789D0E(&iLocal_244);
								unk_0x96167B03C5A77156(0x00000000, 1228.775f, -2923.852f, 8.31909f, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_244);
								unk_0x78ADC381772E3D54(Local_54[0x00000004 /*10*/], iLocal_244);
								unk_0xF82EA857DA10E0CD(&iLocal_244);
								iLocal_270 = 0x00000001;
								iLocal_267 = unk_0x1C0640BA9A7327B3();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_282(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_60(iParam3), 0x00000000);
}

int func_283(int iParam0, int iParam1, bool bParam2)
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

void func_284()
{
	switch (iLocal_308)
	{
		case 0x00000000:
			switch (iLocal_307)
			{
				case 0x00000000:
					if (func_107(Local_53[0x00000000 /*2*/]))
					{
						if ((!unk_0xD17F06053799A7CA() && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
						{
							func_289();
							iLocal_305 = unk_0x1C0640BA9A7327B3();
							iLocal_307 = 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_305) > 0x00001770 && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000))
					{
						func_224(&uLocal_78, 0x00000001, 0x00000000, "FLOYD", 0x00000000, 0x00000001);
						if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TSUB", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_307 = 0x00000002;
						}
					}
					break;
				
				case 0x00000002:
					if (func_11())
					{
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000))
						{
							if (func_37())
							{
								func_288(0x00000000);
							}
						}
						else if (!func_37())
						{
							func_288(0x00000001);
						}
					}
					else
					{
						iLocal_307 = 0x00000003;
					}
					break;
				
				case 0x00000003:
					iLocal_308 = 0x00000002;
					iLocal_307 = 0x00000000;
					iLocal_305 = unk_0x1C0640BA9A7327B3();
					break;
			}
			break;
		
		case 0x00000002:
			switch (iLocal_307)
			{
				case 0x00000000:
					if ((!unk_0xD17F06053799A7CA() && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000)) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 324.7653f, -2974.495f, -1f, 0x00000001) < 110f)
					{
						func_289();
						iLocal_307 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					if (func_12(&uLocal_78, "DHP1AUD", "DHP1_APP", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_307 = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if (func_11())
					{
					}
					else
					{
						iLocal_307 = 0x00000003;
					}
					break;
				
				case 0x00000003:
					iLocal_308 = 0x00000003;
					iLocal_307 = 0x00000000;
					iLocal_305 = unk_0x1C0640BA9A7327B3();
					break;
			}
			break;
		
		case 0x00000003:
			if (func_107(Local_53[0x00000002 /*2*/]) && func_107(Local_54[0x00000003 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0x00000000:
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000002 /*2*/], 0x00000000) && unk_0xC42A92762C58E1B9(Local_54[0x00000003 /*10*/], Local_53[0x00000002 /*2*/], 0x00000000))
						{
							if (func_11())
							{
								func_289();
							}
							else
							{
								iLocal_307 = 0x00000001;
							}
						}
						break;
					
					case 0x00000001:
						func_282(Local_54[0x00000003 /*10*/], "DHP1_AIAA", "FLOYD", 0x00000018);
						iLocal_307 = 0x00000002;
						break;
					
					case 0x00000002:
						if (!unk_0x65636D4556D82155(Local_54[0x00000003 /*10*/]))
						{
							iLocal_307 = 0x00000003;
						}
						break;
					
					case 0x00000003:
						iLocal_308 = 0x00000004;
						iLocal_307 = 0x00000000;
						iLocal_305 = unk_0x1C0640BA9A7327B3();
						break;
					}
			}
			break;
		
		case 0x00000004:
			if (func_107(Local_53[0x00000002 /*2*/]) && func_107(Local_54[0x00000003 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0x00000000:
						if (((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xC42A92762C58E1B9(Local_54[0x00000003 /*10*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && unk_0x50B5F6F3C29E9380(Local_53[0x00000001 /*2*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && !unk_0xD17F06053799A7CA())
						{
							func_289();
							iLocal_305 = unk_0x1C0640BA9A7327B3();
							iLocal_307 = 0x00000001;
						}
						break;
					
					case 0x00000001:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_305) > 0x000007D0)
						{
							func_224(&uLocal_78, 0x00000001, Local_54[0x00000003 /*10*/], "FLOYD", 0x00000000, 0x00000001);
							if (func_12(&uLocal_78, "DHP1AUD", "DHP1_TRCK", 0x00000007, 0x00000000, 0x00000000, 0x00000000))
							{
								iLocal_307 = 0x00000002;
							}
						}
						break;
					
					case 0x00000002:
						if (func_11())
						{
							if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xC42A92762C58E1B9(Local_54[0x00000003 /*10*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && unk_0x50B5F6F3C29E9380(Local_53[0x00000001 /*2*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
							{
								if (func_37())
								{
									func_288(0x00000000);
								}
							}
							else if (!func_37())
							{
								func_288(0x00000001);
							}
						}
						else
						{
							iLocal_307 = 0x00000003;
						}
						break;
					
					case 0x00000003:
						iLocal_308 = 0x00000005;
						iLocal_307 = 0x00000000;
						iLocal_305 = unk_0x1C0640BA9A7327B3();
						break;
				}
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), -323.73f, -2613.702f, 5f, 0x00000001) < 60f)
				{
					func_287();
					iLocal_307 = 0x00000003;
				}
			}
			break;
		
		case 0x00000005:
			switch (iLocal_307)
			{
				case 0x00000000:
					if ((((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xC42A92762C58E1B9(Local_54[0x00000003 /*10*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && unk_0x50B5F6F3C29E9380(Local_53[0x00000001 /*2*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && !unk_0xD17F06053799A7CA()) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_289();
						iLocal_307 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					bLocal_304 = func_286();
					func_224(&uLocal_78, 0x00000001, Local_54[0x00000003 /*10*/], "FLOYD", 0x00000000, 0x00000001);
					if (bLocal_304)
					{
						if (func_285(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 0x00000007, 0x00000000, 0x00000000))
						{
							iLocal_307 = 0x00000002;
						}
					}
					else if (func_285(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 0x00000007, 0x00000000, 0x00000000))
					{
						iLocal_307 = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if (!func_11())
					{
						iLocal_307 = 0x00000003;
					}
					break;
				
				case 0x00000003:
					iLocal_308 = 0x00000006;
					iLocal_307 = 0x00000000;
					iLocal_305 = unk_0x1C0640BA9A7327B3();
					break;
			}
			break;
		
		case 0x00000006:
			switch (iLocal_307)
			{
				case 0x00000000:
					if ((((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xC42A92762C58E1B9(Local_54[0x00000003 /*10*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && unk_0x50B5F6F3C29E9380(Local_53[0x00000001 /*2*/], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000))) && !unk_0xD17F06053799A7CA()) && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001), -323.73f, -2613.702f, 5f, 0x00000001) < 40f)
					{
						func_289();
						iLocal_307 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					bLocal_304 = func_286();
					func_224(&uLocal_78, 0x00000001, Local_54[0x00000003 /*10*/], "FLOYD", 0x00000000, 0x00000001);
					if (bLocal_304)
					{
						if (func_285(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 0x00000007, 0x00000000, 0x00000000))
						{
							iLocal_307 = 0x00000002;
						}
					}
					else if (func_285(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 0x00000007, 0x00000000, 0x00000000))
					{
						iLocal_307 = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if (!func_11())
					{
						iLocal_307 = 0x00000003;
					}
					break;
				
				case 0x00000003:
					break;
			}
			break;
	}
}

bool func_285(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_13(sParam2, iParam4, 0x00000000);
}

int func_286()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_287()
{
	Global_4CD7 = 0x00000000;
	func_33();
}

void func_288(int iParam0)
{
	Global_5538 = iParam0;
}

void func_289()
{
	Global_4CD7 = 0x00000000;
	func_290();
}

void func_290()
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

int func_291(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
	{
		if (((unk_0x7B5606C651AB51B5(*uParam0, 0x00000000, 0x00001B58) || unk_0x7B5606C651AB51B5(*uParam0, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(*uParam0, 0x00000002, 0x00007530)) || unk_0x7B5606C651AB51B5(*uParam0, 0x00000001, 0x00009C40))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_292(int iParam0)
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

int func_293(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_294()
{
	vector3 vVar0;
	float fVar1;
	
	if (iLocal_1956 == 0x00000001)
	{
		if (iLocal_1951 == 0x00000000)
		{
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(0x00000320);
				}
			}
			else
			{
				func_195(iLocal_1957);
			}
		}
		else if (iLocal_1951 == 0x00000003)
		{
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			func_312();
			if (unk_0x39B7A3CCD2467CAB())
			{
				unk_0x5C8D148FC238F38A();
			}
			func_311(&uLocal_309);
			if (!func_310())
			{
				func_309(iLocal_1957, &vVar0, &fVar1);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fVar1);
				unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
				func_308(&uLocal_309, vVar0, 50f, 0x00000000);
			}
			func_271(iLocal_1952);
			while (!func_306(&uLocal_309))
			{
				SYSTEM::WAIT(0x00000000);
			}
			switch (iLocal_1952)
			{
				case 0x00000000:
					func_304();
					break;
				
				case 0x00000001:
					func_303();
					break;
				
				case 0x00000002:
					func_299();
					break;
				
				case 0x00000003:
					func_295();
					break;
			}
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			unk_0xC92DB9682A650680("DHP1_START");
			iLocal_1956 = 0x00000000;
			if (!func_310())
			{
				func_202(&uLocal_309);
			}
		}
	}
}

void func_295()
{
	if (!func_107(Local_53[0x00000000 /*2*/]))
	{
		Local_53[0x00000000 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x05EC10F460C3A4AF(Local_53[0x00000000 /*2*/], 0x00000000);
		unk_0x56FDC9ADE35F7DB0(Local_53[0x00000000 /*2*/], 0x00000000, 0x00000001, 0x00000000);
		unk_0x0882E3DC0C991680(Local_53[0x00000000 /*2*/], 0x00000001);
		unk_0x3E5CE368CD085FFA(Local_53[0x00000000 /*2*/], 0x00000001);
		unk_0xE3430088DE1D3440(Local_53[0x00000000 /*2*/], 0x00000000);
	}
	if (!func_107(Local_53[0x00000002 /*2*/]))
	{
		Local_53[0x00000002 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x05EC10F460C3A4AF(Local_53[0x00000002 /*2*/], 0x00000000);
		unk_0xC6A6B4DDD6DC073A(Local_53[0x00000002 /*2*/], 0x00000000);
		unk_0xA22F71BBC8173C39(Local_53[0x00000002 /*2*/], 0x00000000);
		unk_0x44A200C9B6E1CEA6(Local_53[0x00000002 /*2*/], 0x00000001);
	}
	if (!func_107(Local_53[0x00000001 /*2*/]))
	{
		Local_53[0x00000001 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x44A200C9B6E1CEA6(Local_53[0x00000001 /*2*/], 0x00000001);
	}
	unk_0xC74DAD25331A5425(Local_53[0x00000002 /*2*/], Local_53[0x00000001 /*2*/], 0.5f);
	unk_0xEB82176F26E339BD(Local_53[0x00000001 /*2*/]);
	unk_0xE6F7063ADA854762(Local_53[0x00000000 /*2*/], Local_53[0x00000001 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000004 /*2*/]))
	{
		Local_57[0x00000004 /*2*/] = unk_0x7707E48765093646(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x9F528B1B53FBC5D9(Local_57[0x00000004 /*2*/], Local_53[0x00000001 /*2*/], 0xFFFFFFFF, vLocal_291, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000005 /*2*/]))
	{
		Local_57[0x00000005 /*2*/] = unk_0x7707E48765093646(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x9F528B1B53FBC5D9(Local_57[0x00000005 /*2*/], Local_53[0x00000001 /*2*/], 0xFFFFFFFF, vLocal_291, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	if (func_310())
	{
		func_296(0x00000000, 0xFFFFFFFF, 0x00000001);
	}
	else
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
	}
}

void func_296(int iParam0, int iParam1, int iParam2)
{
	if (func_298() && func_310())
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
		func_297(0x00000000);
	}
}

void func_297(int iParam0)
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

int func_298()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_299()
{
	if (!func_107(Local_53[0x00000000 /*2*/]))
	{
		Local_53[0x00000000 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x6EEAA5C21760E9DB(Local_53[0x00000000 /*2*/], 0x00000000);
		unk_0x56FDC9ADE35F7DB0(Local_53[0x00000000 /*2*/], 0x00000000, 0x00000001, 0x00000000);
		unk_0x0882E3DC0C991680(Local_53[0x00000000 /*2*/], 0x00000001);
		unk_0x3E5CE368CD085FFA(Local_53[0x00000000 /*2*/], 0x00000001);
		unk_0xE3430088DE1D3440(Local_53[0x00000000 /*2*/], 0x00000000);
	}
	if (!func_107(Local_53[0x00000002 /*2*/]))
	{
		Local_53[0x00000002 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, 0x00000001, 0x00000001, 0x00000000);
		unk_0xC6A6B4DDD6DC073A(Local_53[0x00000002 /*2*/], 0x00000000);
		unk_0xA22F71BBC8173C39(Local_53[0x00000002 /*2*/], 0x00000000);
		unk_0x44A200C9B6E1CEA6(Local_53[0x00000002 /*2*/], 0x00000001);
	}
	if (!func_107(Local_53[0x00000001 /*2*/]))
	{
		Local_53[0x00000001 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x6EEAA5C21760E9DB(Local_53[0x00000001 /*2*/], 0x00000000);
		unk_0x44A200C9B6E1CEA6(Local_53[0x00000001 /*2*/], 0x00000001);
	}
	unk_0xC74DAD25331A5425(Local_53[0x00000002 /*2*/], Local_53[0x00000001 /*2*/], 0.5f);
	unk_0xEB82176F26E339BD(Local_53[0x00000001 /*2*/]);
	unk_0xE6F7063ADA854762(Local_53[0x00000000 /*2*/], Local_53[0x00000001 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000004 /*2*/]))
	{
		Local_57[0x00000004 /*2*/] = unk_0x7707E48765093646(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x9F528B1B53FBC5D9(Local_57[0x00000004 /*2*/], Local_53[0x00000001 /*2*/], 0xFFFFFFFF, vLocal_291, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000005 /*2*/]))
	{
		Local_57[0x00000005 /*2*/] = unk_0x7707E48765093646(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x9F528B1B53FBC5D9(Local_57[0x00000005 /*2*/], Local_53[0x00000001 /*2*/], 0xFFFFFFFF, vLocal_291, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	while (!func_300(&(Local_54[0x00000003 /*10*/]), 0x00000020, Local_53[0x00000002 /*2*/], 0x00000000, 0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (func_310())
	{
		func_296(Local_53[0x00000002 /*2*/], 0xFFFFFFFF, 0x00000001);
	}
	else
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_53[0x00000002 /*2*/], 0xFFFFFFFF);
	}
	unk_0x6DF7BF67E86AAE86(Local_54[0x00000003 /*10*/], iLocal_259);
	unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	iLocal_308 = 0x00000003;
	iLocal_307 = 0x00000000;
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_26(iParam1))
	{
		iVar0 = func_302(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			if (unk_0xC844350D5D58C99A(iParam2) && unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
			{
				*iParam0 = unk_0x852A19533F896693(iParam2, 0x0000001A, iVar0, iParam3, 0x00000000, 0x00000000);
				unk_0x78ED16BE998AECC7(*iParam0);
				func_301(*iParam0, iParam1);
				if (bParam4)
				{
					unk_0x71199B01895C6202(iVar0);
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_301(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000007;
	if (iParam1 == 0x00000013)
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == 0x0000000E)
	{
		iVar0 = 0x00000004;
	}
	else if (iParam1 == 0x00000011)
	{
		iVar0 = 0x00000005;
	}
	else
	{
		iVar0 = 0x00000007;
		return 0x00000000;
	}
	Global_17172[(iVar0 - 0x00000003)] = uParam0;
	return 0x00000001;
}

int func_302(int iParam0)
{
	if (!func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_303()
{
	if (!unk_0xC844350D5D58C99A(Local_53[0x00000000 /*2*/]))
	{
		Local_53[0x00000000 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x3E5CE368CD085FFA(Local_53[0x00000000 /*2*/], 0x00000001);
	}
	if (func_310())
	{
		func_296(Local_53[0x00000000 /*2*/], 0xFFFFFFFF, 0x00000001);
	}
	else
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0xFFFFFFFF);
	}
	unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	iLocal_308 = 0x00000000;
	iLocal_307 = 0x00000000;
}

void func_304()
{
	if (!unk_0xC844350D5D58C99A(Local_53[0x00000000 /*2*/]))
	{
		Local_53[0x00000000 /*2*/] = unk_0x122AAB0B1D6F55AD(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 0x00000001, 0x00000001, 0x00000000);
		func_305(Local_53[0x00000000 /*2*/], 0x00000000);
		unk_0x1E9649458B15960F(Local_53[0x00000000 /*2*/], 0x00000001);
		unk_0xE8832A9E16A57A1F(Local_53[0x00000000 /*2*/], 0x00000001, 0x00000001);
		unk_0x120A395B0ECB8EA5(Local_53[0x00000000 /*2*/], 0x00000000);
		unk_0x3E5CE368CD085FFA(Local_53[0x00000000 /*2*/], 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_54[0x00000004 /*10*/]))
	{
		Local_54[0x00000004 /*10*/] = unk_0x36F2404464202779(0x0000001A, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 0x00000001, 0x00000001);
		unk_0xC6EB89C59F2AF6B8(Local_54[0x00000004 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, 0xFFFFFFFF, 0x00000031, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0xBAFED2F6486F771A(Local_54[0x00000004 /*10*/], 0x00000200, 0x00000000);
		unk_0xAFF39FB306F8E232(Local_54[0x00000004 /*10*/], 0x00000011, 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_54[0x00000004 /*10*/], iLocal_260);
		unk_0x11AD11297DC58CC7(Local_54[0x00000004 /*10*/], 0x00000001);
		unk_0xCF443519BC24A3CB(Local_54[0x00000004 /*10*/], 45f);
		unk_0xBEC9D6BBD21A735F(Local_54[0x00000004 /*10*/], 50f);
		unk_0x8979D9784F39DF46(Local_54[0x00000004 /*10*/], -50f);
		unk_0x33CE5A9E32EA10B2(Local_54[0x00000004 /*10*/], 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000000 /*2*/]))
	{
		Local_57[0x00000000 /*2*/] = unk_0x7707E48765093646(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x1E9649458B15960F(Local_57[0x00000000 /*2*/], 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000001 /*2*/]))
	{
		Local_57[0x00000001 /*2*/] = unk_0x7707E48765093646(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, 0x00000001, 0x00000001, 0x00000000);
		unk_0x1E9649458B15960F(Local_57[0x00000001 /*2*/], 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000002 /*2*/]))
	{
		Local_57[0x00000002 /*2*/] = unk_0x7707E48765093646(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, 0x00000001, 0x00000001, 0x00000000);
		unk_0xC023D1C4BF532815(Local_57[0x00000002 /*2*/], 0f, 0f, 90f, 0x00000002, 0x00000001);
		unk_0x1E9649458B15960F(Local_57[0x00000002 /*2*/], 0x00000001);
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000003 /*2*/]))
	{
		Local_57[0x00000003 /*2*/] = unk_0x7707E48765093646(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, 0x00000001, 0x00000001, 0x00000000);
	}
	iLocal_248 = 0x00000000;
	unk_0x29398344B9E5B8A7("docksprep1");
	while (!unk_0x1C2E18E9C63BEB77("docksprep1"))
	{
		SYSTEM::WAIT(0x00000000);
	}
	unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	if (func_310())
	{
		func_296(0x00000000, 0xFFFFFFFF, 0x00000001);
	}
	else
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
	}
	iLocal_268 = unk_0x1C0640BA9A7327B3();
	iLocal_308 = 0x00000000;
	iLocal_307 = 0x00000000;
}

void func_305(var uParam0, int iParam1)
{
	Global_181B8.f_16[iParam1] = uParam0;
}

int func_306(var uParam0)
{
	if (func_307(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_307(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_3D6)
	{
		bVar0 = 0x00000001;
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000001E)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0xB87F6CF6E5628C67((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x71199B01895C6202((uParam0[iVar1 /*5*/])->f_4);
						func_90(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000014)
		{
			if (uParam0->f_111[iVar1 /*5*/])
			{
				if (!uParam0->f_111[iVar1 /*5*/].f_1)
				{
					if (unk_0xB4AE0788C1587752(uParam0->f_111[iVar1 /*5*/].f_4))
					{
						uParam0->f_111[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_111[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_111[iVar1 /*5*/].f_1)
					{
						unk_0x8D17794CE3273D70(uParam0->f_111[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_111[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000014)
		{
			if (uParam0->f_176[iVar1 /*5*/])
			{
				if (!uParam0->f_176[iVar1 /*5*/].f_1)
				{
					if (unk_0x1C2E18E9C63BEB77(uParam0->f_176[iVar1 /*5*/].f_4))
					{
						uParam0->f_176[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_176[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_176[iVar1 /*5*/].f_1)
					{
						unk_0x2F3540C2227116A3(uParam0->f_176[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_176[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (uParam0->f_290[iVar1 /*6*/])
			{
				if (!uParam0->f_290[iVar1 /*6*/].f_1)
				{
					if (unk_0x83D8570832F172A7(uParam0->f_290[iVar1 /*6*/].f_5))
					{
						uParam0->f_290[iVar1 /*6*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_290[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_290[iVar1 /*6*/].f_1)
					{
						unk_0xE17FDF9E3068281B(&(uParam0->f_290[iVar1 /*6*/].f_5));
						func_90(&(uParam0->f_290[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000001E)
		{
			if (uParam0->f_1DB[iVar1 /*6*/])
			{
				if (!uParam0->f_1DB[iVar1 /*6*/].f_1)
				{
					if (unk_0x3DDA6C6A285628E4(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4))
					{
						uParam0->f_1DB[iVar1 /*6*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_1DB[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_1DB[iVar1 /*6*/].f_1)
					{
						unk_0xDB8844D4B7C60440(uParam0->f_1DB[iVar1 /*6*/].f_5, uParam0->f_1DB[iVar1 /*6*/].f_4);
						func_90(&(uParam0->f_1DB[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000A)
		{
			if (uParam0->f_CA[iVar1 /*7*/])
			{
				if (!uParam0->f_CA[iVar1 /*7*/].f_1)
				{
					if (unk_0x1787731C4D1D6B19(uParam0->f_CA[iVar1 /*7*/].f_4))
					{
						uParam0->f_CA[iVar1 /*7*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_CA[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_CA[iVar1 /*7*/].f_1)
					{
						unk_0x2914827AC2790D54(uParam0->f_CA[iVar1 /*7*/].f_4);
						func_90(&(uParam0->f_CA[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000A)
		{
			if (uParam0->f_97[iVar1 /*5*/])
			{
				if (!uParam0->f_97[iVar1 /*5*/].f_1)
				{
					if (unk_0x1F04E7FA44219580(uParam0->f_97[iVar1 /*5*/].f_4))
					{
						uParam0->f_97[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_97[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_97[iVar1 /*5*/].f_1)
					{
						unk_0x058E3033265DBA9A(uParam0->f_97[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_97[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (uParam0->f_2E1[iVar1 /*5*/])
			{
				if (!uParam0->f_2E1[iVar1 /*5*/].f_1)
				{
					if (unk_0xAE317D00A5A55DF6(uParam0->f_2E1[iVar1 /*5*/].f_4, 0x00000000, 0xFFFFFFFF))
					{
						uParam0->f_2E1[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_2E1[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2E1[iVar1 /*5*/].f_1)
					{
						unk_0x42740B44BA8D7B43(uParam0->f_2E1[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_2E1[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (uParam0->f_2FB[iVar1 /*5*/])
			{
				if (!uParam0->f_2FB[iVar1 /*5*/].f_1)
				{
					if (unk_0xBD307E66C0669BFC(uParam0->f_2FB[iVar1 /*5*/].f_4))
					{
						uParam0->f_2FB[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_2FB[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_2FB[iVar1 /*5*/].f_1)
					{
						unk_0x25BB71BA267FE042(uParam0->f_2FB[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_2FB[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000007)
		{
			if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2AF[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_2AF[iVar1 /*7*/])
				{
					iVar2 = unk_0x60AFCA824DC1AD70(uParam0->f_2AF[iVar1 /*7*/].f_5);
					if (!uParam0->f_2AF[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 0x00000001:
							case 0x00000002:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0x00000001;
								break;
							
							case 0x00000000:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0x00000000;
								bVar0 = 0x00000000;
								break;
							
							case 0x00000003:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0x00000000;
								func_90(&(uParam0->f_2AF[iVar1 /*7*/]));
								break;
							
							case 0xFFFFFFFF:
								uParam0->f_2AF[iVar1 /*7*/].f_1 = 0x00000000;
								unk_0xBCE1F37016C0E41B(uParam0->f_2AF[iVar1 /*7*/].f_5);
								uParam0->f_2AF[iVar1 /*7*/] = 0x00000000;
								bVar0 = 0x00000000;
								break;
							}
					}
				}
				else if (unk_0xBD307E66C0669BFC(uParam0->f_2AF[iVar1 /*7*/].f_6))
				{
					uParam0->f_2AF[iVar1 /*7*/].f_5 = unk_0x112DEE377BFBC278(uParam0->f_2AF[iVar1 /*7*/].f_4);
					uParam0->f_2AF[iVar1 /*7*/].f_3 = unk_0x1C0640BA9A7327B3();
					uParam0->f_2AF[iVar1 /*7*/] = 0x00000001;
				}
				else
				{
					bVar0 = 0x00000000;
				}
				if (uParam0->f_2AF[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_2AF[iVar1 /*7*/])
					{
						if (uParam0->f_2AF[iVar1 /*7*/].f_1)
						{
							unk_0xBCE1F37016C0E41B(uParam0->f_2AF[iVar1 /*7*/].f_5);
							func_90(&(uParam0->f_2AF[iVar1 /*7*/]));
							uParam0->f_2AF[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = 0x00000000;
						}
					}
					else
					{
						func_90(&(uParam0->f_2AF[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000A)
		{
			if (uParam0->f_36F[iVar1 /*5*/])
			{
				if (!uParam0->f_36F[iVar1 /*5*/].f_1)
				{
					if (unk_0xC76EFA929F5277B9(uParam0->f_36F[iVar1 /*5*/].f_4))
					{
						uParam0->f_36F[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_36F[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_36F[iVar1 /*5*/].f_1)
					{
						unk_0x70EAF6AF279DEC61(uParam0->f_36F[iVar1 /*5*/].f_4);
						func_90(&(uParam0->f_36F[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (uParam0->f_3A2[iVar1 /*5*/])
			{
				if (!uParam0->f_3A2[iVar1 /*5*/].f_1)
				{
					if (unk_0x93776B156FD8804A(uParam0->f_3A2[iVar1 /*5*/].f_4))
					{
						uParam0->f_3A2[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_3A2[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3A2[iVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_3A2[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < uParam0->f_30B)
		{
			if (uParam0->f_30B[iVar1 /*5*/])
			{
				if (!uParam0->f_30B[iVar1 /*5*/].f_1)
				{
					if (unk_0x67C1D9E5B91B2E37(iVar1))
					{
						uParam0->f_30B[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_30B[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_30B[iVar1 /*5*/].f_1)
					{
						unk_0x11CCD0ACA866C6C5(iVar1, 0x00000001);
						func_90(&(uParam0->f_30B[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_35C)
		{
			if (!uParam0->f_35C.f_1)
			{
				if (unk_0x25F7A4D42AF2AB93())
				{
					uParam0->f_35C.f_1 = 0x00000001;
				}
				else
				{
					bVar0 = 0x00000000;
				}
			}
			if (uParam0->f_35C.f_2)
			{
				if (uParam0->f_35C.f_1)
				{
					unk_0x29D7581AEF4440C2();
					func_90(&(uParam0->f_35C));
				}
				else
				{
					bVar0 = 0x00000000;
				}
			}
		}
		if (uParam0->f_360)
		{
			if (!uParam0->f_360.f_1)
			{
				if (unk_0xEE4B5EDF70ABF498())
				{
					uParam0->f_360.f_1 = 0x00000001;
				}
				else
				{
					bVar0 = 0x00000000;
				}
			}
			if (uParam0->f_360.f_2)
			{
				if (uParam0->f_360.f_1)
				{
					unk_0xFE5EFE178CCBA358();
					func_90(&(uParam0->f_360));
				}
				else
				{
					bVar0 = 0x00000000;
				}
			}
		}
		if (uParam0->f_364 && unk_0xEB880D98B5988D0C())
		{
			if (!uParam0->f_364.f_1)
			{
				if (unk_0x68367101660E33F0())
				{
					uParam0->f_364.f_1 = 0x00000001;
					if (uParam0->f_3D7)
					{
						unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
						func_202(uParam0);
						uParam0->f_3D7 = 0x00000000;
					}
				}
				else
				{
					bVar0 = 0x00000000;
				}
			}
			if (uParam0->f_364.f_2)
			{
				unk_0x486B4ADE317F0689();
				func_90(&(uParam0->f_364));
			}
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000005)
		{
			if (uParam0->f_3BC[iVar1 /*5*/])
			{
				if (!uParam0->f_3BC[iVar1 /*5*/].f_1)
				{
					if (unk_0x27117E2CDD4D67C3(uParam0->f_3BC[iVar1 /*5*/].f_4))
					{
						uParam0->f_3BC[iVar1 /*5*/].f_1 = 0x00000001;
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
				if (uParam0->f_3BC[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_3BC[iVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_3BC[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = 0x00000000;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_3D6 = 0x00000000;
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_308(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (func_207(vParam1) || fParam2 <= 0f)
	{
		return 0x00000000;
	}
	if (uParam0->f_364)
	{
		if (func_95(uParam0->f_364.f_4, vParam1, 0x00000000) && uParam0->f_364.f_A == fParam2)
		{
			uParam0->f_364.f_2 = 0x00000000;
			if (!uParam0->f_364.f_1)
			{
				uParam0->f_3D6 = 0x00000001;
				return 0x00000001;
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	unk_0x9E632F16E887F781(vParam1, fParam2, iParam3);
	uParam0->f_364 = 0x00000001;
	uParam0->f_364.f_3 = unk_0x1C0640BA9A7327B3();
	uParam0->f_364.f_4 = { vParam1 };
	uParam0->f_364.f_7 = { 0f, 0f, 0f };
	uParam0->f_364.f_A = fParam2;
	uParam0->f_3D6 = 0x00000001;
	return 0x00000001;
}

void func_309(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 0x00000001:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 0x00000002:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 0x00000003:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

bool func_310()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_311(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (uParam0->f_97[iVar0 /*5*/])
		{
			uParam0->f_97[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (uParam0->f_CA[iVar0 /*7*/])
		{
			uParam0->f_CA[iVar0 /*7*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000014)
	{
		if (uParam0->f_111[iVar0 /*5*/])
		{
			uParam0->f_111[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000014)
	{
		if (uParam0->f_176[iVar0 /*5*/])
		{
			uParam0->f_176[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		if (uParam0->f_1DB[iVar0 /*6*/])
		{
			uParam0->f_1DB[iVar0 /*6*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (uParam0->f_290[iVar0 /*6*/])
		{
			uParam0->f_290[iVar0 /*6*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (uParam0->f_2AF[iVar0 /*7*/])
		{
			uParam0->f_2AF[iVar0 /*7*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			uParam0->f_2E1[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (uParam0->f_2FB[iVar0 /*5*/])
		{
			uParam0->f_2FB[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (uParam0->f_36F[iVar0 /*5*/])
		{
			uParam0->f_36F[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (uParam0->f_3A2[iVar0 /*5*/])
		{
			uParam0->f_3A2[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (uParam0->f_30B[iVar0 /*5*/])
		{
			uParam0->f_30B[iVar0 /*5*/].f_2 = 0x00000001;
		}
		iVar0++;
	}
	if (uParam0->f_364)
	{
		uParam0->f_364.f_2 = 0x00000001;
	}
	if (uParam0->f_35C)
	{
		uParam0->f_35C.f_2 = 0x00000001;
	}
	if (uParam0->f_360)
	{
		uParam0->f_360.f_2 = 0x00000001;
	}
}

void func_312()
{
	if (unk_0x39B7A3CCD2467CAB())
	{
		unk_0x152C90FB9FE48DAC();
		unk_0x5C8D148FC238F38A();
		while (unk_0x39B7A3CCD2467CAB())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
	func_208();
	if (func_107(Local_53[0x00000000 /*2*/]))
	{
		unk_0xD30E2F394BD927B3(Local_53[0x00000000 /*2*/], vLocal_56);
	}
	Global_17409.f_165 = 0x00000000;
	if (iLocal_249)
	{
		unk_0xBCD4D622B825D37C(&iLocal_290);
		iLocal_249 = 0x00000000;
	}
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000008 - 0x00000001))
	{
		func_320(&(Local_54[iLocal_247 /*10*/].f_2));
		if (unk_0xC844350D5D58C99A(Local_54[iLocal_247 /*10*/]) && !unk_0xEB6A8945D1AC98A1(Local_54[iLocal_247 /*10*/]))
		{
			if (unk_0x405E212DDE472467(Local_54[iLocal_247 /*10*/], 0x00000000))
			{
				unk_0x9E56B0ABD396F5CA(Local_54[iLocal_247 /*10*/], unk_0x68F4C0EC296D3901(unk_0x6937EA2286828455(Local_54[iLocal_247 /*10*/], 0x00000000), 0x00000001) + Vector(0f, -2f, 0f));
			}
			func_319(&(Local_54[iLocal_247 /*10*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000004 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A(Local_53[iLocal_247 /*2*/]))
		{
			func_318(Local_53[iLocal_247 /*2*/]);
			func_315(&(Local_53[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000009 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A(Local_57[iLocal_247 /*2*/]))
		{
			func_314(&(Local_57[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	if (unk_0x83A8177D302E1A7E(iLocal_245))
	{
		unk_0xF7E25143642732EA(iLocal_245, 0x00000000);
	}
	func_287();
	func_42(&Local_58, 0x00000001, 0x00000000);
	func_313(0x00000048);
	func_197(0x00000001, 0x00000000, 0x00000000, 0x00000BB8, 0x00000000);
	unk_0x51B096AAC60548C1(1f);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		unk_0x536F1BE96C726C4B(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 300f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	}
	unk_0x536F1BE96C726C4B(1219.186f, -2977.9f, 4.8653f, 300f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	iLocal_268 = unk_0x1C0640BA9A7327B3();
	iLocal_251 = 0x00000000;
	iLocal_269 = 0x00000000;
	iLocal_264 = 0x00000000;
	iLocal_265 = 0x00000000;
	iLocal_266 = 0x00000000;
	iLocal_307 = 0x00000000;
	iLocal_252 = 0x00000000;
	func_216(0x00000006, 0x00000000);
	if (unk_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
	{
		func_202(&uLocal_309);
		unk_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
	}
	unk_0xE96F19797E59AB06();
}

void func_313(int iParam0)
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

void func_314(int iParam0)
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

void func_315(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		if (func_317(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
			{
				if (func_316(unk_0x16F2683693E537C9()))
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
			if (func_316(unk_0x16F2683693E537C9()))
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

int func_316(int iParam0)
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

int func_317(int iParam0)
{
	if (func_316(iParam0))
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

void func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar0))
				{
					unk_0x327AAEE25F323797(iVar0);
				}
				else
				{
					unk_0xEBA53F35D0085654(&iVar0);
				}
			}
			iVar2 = unk_0xD6DF381716822EFE(iParam0);
			iVar1 = 0x00000000;
			while (iVar1 < iVar2)
			{
				if (!unk_0xBBA8A868118C90ED(iParam0, iVar1, 0x00000000))
				{
					iVar0 = unk_0xA30B8362589C124A(iParam0, iVar1, 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar0))
					{
						if (!unk_0xEB6A8945D1AC98A1(iVar0))
						{
							unk_0x327AAEE25F323797(iVar0);
						}
						else
						{
							unk_0xEBA53F35D0085654(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_319(int iParam0)
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

void func_320(int iParam0)
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

void func_321()
{
	switch (iLocal_1951)
	{
		case 0x00000001:
			iLocal_1951 = 0x00000002;
			iLocal_1953 = 0xFFFFFFFF;
			break;
		
		case 0x00000002:
			iLocal_1951 = 0x00000003;
			iLocal_1953 = 0x00000000;
			iLocal_1952 = iLocal_1954;
			break;
		
		case 0x00000003:
			iLocal_1954 = 0xFFFFFFFF;
			iLocal_1951 = 0x00000000;
			break;
		
		case 0x00000000:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_1955) > 0x000009C4)
			{
				iLocal_1955 = unk_0x1C0640BA9A7327B3();
			}
			break;
	}
}

void func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x39B7A3CCD2467CAB())
	{
		if (unk_0x75EECC9B0572F772())
		{
			iVar0 = 0x00000000;
			while (iVar0 < *uParam0)
			{
				if (!unk_0xEA6BC48857E0AC4C(uParam0[iVar0 /*82*/]))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x0000000C)
					{
						if ((uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] != 0xFFFFFFFF && (uParam0[iVar0 /*82*/])->f_11[iVar1] != 0xFFFFFFFF)
						{
							unk_0x7656EB524FEAB9B3(uParam0[iVar0 /*82*/], iVar1, (uParam0[iVar0 /*82*/])->f_11.f_D[iVar1], (uParam0[iVar0 /*82*/])->f_11[iVar1], (uParam0[iVar0 /*82*/])->f_10);
							(uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] = 0xFFFFFFFF;
							(uParam0[iVar0 /*82*/])->f_11[iVar1] = 0xFFFFFFFF;
						}
						iVar1++;
					}
					iVar2 = 0x00000000;
					while (iVar2 < 0x00000009)
					{
						if ((uParam0[iVar0 /*82*/])->f_11.f_27[iVar2] != 0xFFFFFFFF && (uParam0[iVar0 /*82*/])->f_11.f_31[iVar2] != 0xFFFFFFFF)
						{
							unk_0xA2888AACD3C45CCA(uParam0[iVar0 /*82*/], iVar2, (uParam0[iVar0 /*82*/])->f_11.f_27[iVar2], (uParam0[iVar0 /*82*/])->f_11.f_31[iVar2], (uParam0[iVar0 /*82*/])->f_10);
							(uParam0[iVar0 /*82*/])->f_11.f_27[iVar2] = 0xFFFFFFFF;
							(uParam0[iVar0 /*82*/])->f_11.f_31[iVar2] = 0xFFFFFFFF;
						}
						iVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_10 = 0x00000000;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_323(uParam0);
	}
}

void func_323(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEA6BC48857E0AC4C(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_10 = 0x00000000;
			iVar1 = 0x00000000;
			while (iVar1 < 0x0000000C)
			{
				(uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] = 0xFFFFFFFF;
				(uParam0[iVar0 /*82*/])->f_11[iVar1] = 0xFFFFFFFF;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_324(var uParam0)
{
	func_307(uParam0);
}

void func_325()
{
	vector3 vVar0;
	var uVar1;
	
	if (func_298() || func_7(0x00000000))
	{
		if (func_298())
		{
			iLocal_1957 = func_329();
			if (Global_16AF9)
			{
				iLocal_1957++;
			}
			if (iLocal_1957 >= 0x00000003)
			{
				iLocal_1957 = 0x00000003;
			}
		}
		else if (func_7(0x00000000))
		{
			iLocal_1957 = 0x00000000;
		}
		if (func_298())
		{
			func_309(iLocal_1957, &vVar0, &uVar1);
			func_328(vVar0, uVar1, 0x00000001, 0x00000000);
		}
		SYSTEM::SETTIMERA(0x00000000);
		iLocal_1956 = 0x00000001;
	}
	else
	{
		func_108(0x00000000, "STAGE 0: REACH SUB", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
		iLocal_1952 = 0x00000000;
		func_271(0x00000000);
	}
	iLocal_1953 = 0x00000000;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0xD8405188BF24D722("EXTRASUNNY");
	unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x51732B934211201A(iLocal_259);
	unk_0x51732B934211201A(iLocal_260);
	unk_0xF63400DBE3303D26("REL_BUDDY", &iLocal_259);
	unk_0xF63400DBE3303D26("rel_dock", &iLocal_260);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_260, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, iLocal_259);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_259, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_260, iLocal_260);
	if (!unk_0xC844350D5D58C99A(Local_53[0x00000000 /*2*/]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409[0x00000000]))
		{
			unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000001, 0x00000001);
			Local_53[0x00000000 /*2*/] = Global_17409[0x00000000];
			func_305(Local_53[0x00000000 /*2*/], 0x00000000);
			unk_0x3E5CE368CD085FFA(Local_53[0x00000000 /*2*/], 0x00000001);
		}
	}
	if (!unk_0xC844350D5D58C99A(Local_54[0x00000004 /*10*/]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_9[0x00000000], 0x00000001, 0x00000001);
			Local_54[0x00000004 /*10*/] = Global_17409.f_9[0x00000000];
			unk_0x6DF7BF67E86AAE86(Local_54[0x00000004 /*10*/], iLocal_260);
			unk_0x4E885A246A9D983A(Local_54[0x00000004 /*10*/], 0x000000D0, 0x00000001);
			unk_0xCF443519BC24A3CB(Local_54[0x00000004 /*10*/], 45f);
			unk_0xBEC9D6BBD21A735F(Local_54[0x00000004 /*10*/], 50f);
			unk_0x8979D9784F39DF46(Local_54[0x00000004 /*10*/], -50f);
		}
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000000 /*2*/]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000000]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_1C[0x00000000], 0x00000001, 0x00000001);
			Local_57[0x00000000 /*2*/] = Global_17409.f_1C[0x00000000];
		}
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000001 /*2*/]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000001]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_1C[0x00000001], 0x00000001, 0x00000001);
			Local_57[0x00000001 /*2*/] = Global_17409.f_1C[0x00000001];
		}
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000002 /*2*/]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000002]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_1C[0x00000002], 0x00000001, 0x00000001);
			Local_57[0x00000002 /*2*/] = Global_17409.f_1C[0x00000002];
		}
	}
	if (!unk_0xC844350D5D58C99A(Local_57[0x00000003 /*2*/]))
	{
		if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000003]))
		{
			unk_0x73270B3C9CC833FD(Global_17409.f_1C[0x00000003], 0x00000001, 0x00000001);
			Local_57[0x00000003 /*2*/] = Global_17409.f_1C[0x00000003];
		}
	}
	if (Global_17409.f_165)
	{
		if (unk_0x3D8490C463E91AC3(&(Global_17409.f_25[0x00000000])))
		{
			unk_0xA2E90B046878B38C(Global_17409.f_25[0x00000000], 0x00000001, 0x00000001);
			Local_55[0x00000000 /*5*/] = Global_17409.f_25[0x00000000];
			Global_17409.f_25[0x00000000] = 0x00000000;
		}
		if (unk_0x3D8490C463E91AC3(&(Global_17409.f_25[0x00000001])))
		{
			unk_0xA2E90B046878B38C(Global_17409.f_25[0x00000001], 0x00000001, 0x00000001);
			Local_55[0x00000001 /*5*/] = Global_17409.f_25[0x00000001];
			Global_17409.f_25[0x00000001] = 0x00000000;
		}
		if (unk_0x3D8490C463E91AC3(&(Global_17409.f_25[0x00000002])))
		{
			unk_0xA2E90B046878B38C(Global_17409.f_25[0x00000002], 0x00000001, 0x00000001);
			Local_55[0x00000002 /*5*/] = Global_17409.f_25[0x00000002];
			Global_17409.f_25[0x00000002] = 0x00000000;
		}
		if (unk_0x3D8490C463E91AC3(&(Global_17409.f_25[0x00000003])))
		{
			unk_0xA2E90B046878B38C(Global_17409.f_25[0x00000003], 0x00000001, 0x00000001);
			Local_55[0x00000003 /*5*/] = Global_17409.f_25[0x00000003];
			Global_17409.f_25[0x00000003] = 0x00000000;
		}
		iLocal_248 = 0x00000001;
	}
	else
	{
		iLocal_248 = 0x00000000;
	}
	unk_0xD7992BEF7A9D109E("DOCKP1", 0x00000000);
	while (!unk_0x67C1D9E5B91B2E37(0x00000000))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (func_107(unk_0x16F2683693E537C9()))
	{
		func_224(&uLocal_78, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	func_327(0x00000001);
	unk_0x34D79252800B23FF(0x00000002);
	unk_0x51B096AAC60548C1(0.5f);
	func_326(0x00000048);
}

void func_326(int iParam0)
{
	Global_17187 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000048:
			func_264(0x00000002);
			func_264(0x00000004);
			break;
		
		case 0x00000049:
			func_264(0x00000000);
			func_264(0x00000001);
			func_264(0x00000007);
			break;
		
		case 0x0000005C:
			func_264(0x0000000A);
			func_264(0x00000009);
			func_264(0x0000000D);
			func_264(0x00000006);
			break;
		
		case 0x00000044:
			func_264(0x0000000B);
			break;
		
		case 0x0000004E:
			func_264(0x0000000E);
			break;
		
		case 0x0000004F:
			func_264(0x00000003);
			break;
		
		default:
			break;
	}
}

void func_327(bool bParam0)
{
	if (bParam0)
	{
		Global_517D = 0x00000001;
	}
	else
	{
		Global_517D = 0x00000000;
	}
}

void func_328(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_298())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000002);
		unk_0x21387C9EECC2B220(0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		Global_181B4 = { vParam0 };
		Global_181B7 = uParam1;
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
		func_297(0x00000001);
	}
}

int func_329()
{
	if (!Global_181B8 == 0x0000000A && !Global_181B8 == 0x00000009)
	{
		return 0x00000000;
	}
	return Global_181B8.f_2;
}

void func_330()
{
	if (unk_0x39B7A3CCD2467CAB())
	{
		unk_0x152C90FB9FE48DAC();
		unk_0x5C8D148FC238F38A();
	}
	if (func_107(unk_0x16F2683693E537C9()))
	{
		if (func_107(Local_53[0x00000000 /*2*/]))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_53[0x00000000 /*2*/], 0x00000000))
			{
				unk_0x9E56B0ABD396F5CA(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(Local_53[0x00000000 /*2*/], 0x00000001) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_208();
	if (func_107(Local_53[0x00000000 /*2*/]))
	{
		unk_0xD30E2F394BD927B3(Local_53[0x00000000 /*2*/], vLocal_56);
	}
	Global_17409.f_165 = 0x00000000;
	if (iLocal_249)
	{
		unk_0xBCD4D622B825D37C(&iLocal_290);
		iLocal_249 = 0x00000000;
	}
	if (unk_0x83A8177D302E1A7E(iLocal_245))
	{
		unk_0xF7E25143642732EA(iLocal_245, 0x00000000);
	}
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000008 - 0x00000001))
	{
		if (func_107(Local_54[iLocal_247 /*10*/]))
		{
			func_320(&(Local_54[iLocal_247 /*10*/].f_2));
			if (unk_0xE4EDC4B0E92C078B(Local_54[iLocal_247 /*10*/].f_1))
			{
				unk_0x142CC44DB769B57E(&(Local_54[iLocal_247 /*10*/].f_1));
			}
			if (unk_0x16102BEDC7435774(Local_54[iLocal_247 /*10*/]))
			{
				unk_0x0A94A109271BE75A(Local_54[iLocal_247 /*10*/]);
			}
			if (Local_54[iLocal_247 /*10*/] != unk_0x16F2683693E537C9())
			{
				func_9(&(Local_54[iLocal_247 /*10*/]), 0x00000001, 0x00000000, 0x00000001);
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000004 - 0x00000001))
	{
		if (unk_0xE4EDC4B0E92C078B(Local_53[iLocal_247 /*2*/].f_1))
		{
			unk_0x142CC44DB769B57E(&(Local_53[iLocal_247 /*2*/].f_1));
		}
		if (func_107(Local_53[iLocal_247 /*2*/]))
		{
			if (iLocal_247 != 0x00000000)
			{
				func_292(&(Local_53[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	func_332(0x00000000);
	iLocal_247 = 0x00000000;
	while (iLocal_247 <= (0x00000009 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A(Local_57[iLocal_247 /*2*/]))
		{
			if (Local_57[iLocal_247 /*2*/] == Local_57[0x00000004 /*2*/] || Local_57[iLocal_247 /*2*/] == Local_57[0x00000005 /*2*/])
			{
				func_91(&(Local_57[iLocal_247 /*2*/]), 0x00000001);
			}
			else
			{
				func_314(&(Local_57[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), 0x00000001);
	unk_0x96D521DDDB9AD218();
	unk_0x51B096AAC60548C1(1f);
	unk_0x34D79252800B23FF(0x00000005);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	func_327(0x00000000);
	func_217(&Local_58, 0x00000000);
	func_331();
	if (unk_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
	{
		unk_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_331()
{
	Global_17187 = 0x00000000;
}

void func_332(bool bParam0)
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

void func_333()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_7(0x00000000))
	{
		if (!func_334())
		{
			iVar0 = func_5();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_100(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_105();
		}
	}
}

int func_334()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_335()
{
	func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

