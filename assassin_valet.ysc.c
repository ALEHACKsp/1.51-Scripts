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
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<39> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_56 = 0;
	var uLocal_57 = 16;
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
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	float fLocal_230 = 0f;
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
	var uLocal_241 = 21;
	var uLocal_242 = 6;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 1132396544;
	var uLocal_249 = 1132396544;
	var uLocal_250 = 1132396544;
	var uLocal_251 = 0;
	var uLocal_252 = -1082130432;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 8;
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
	var uLocal_312 = -1;
	var uLocal_313 = 1092616192;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	bool bLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	struct<7> Local_320 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	bool bLocal_329 = 0;
	bool bLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
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
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 1;
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
	var uLocal_395 = 2;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 13;
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
	var uLocal_413 = 13;
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
	var uLocal_622 = 13;
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
	var uLocal_831 = 13;
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
	var uLocal_845 = 13;
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
	var uLocal_859 = 13;
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
	var uLocal_873 = 13;
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
	struct<55> Local_919 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933[3] = { 0, 0, 0 };
	int iLocal_934[2] = { 0, 0 };
	int iLocal_935 = 0;
	int iLocal_936[2] = { 0, 0 };
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940[2] = { 0, 0 };
	int iLocal_941[3] = { 0, 0, 0 };
	int iLocal_942[2] = { 0, 0 };
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	struct<8> Local_946[3];
	struct<8> Local_947[2];
	struct<8> Local_948[2];
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	var uLocal_951[3] = { 0, 0, 0 };
	var uLocal_952[2] = { 0, 0 };
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	var uLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	int iLocal_958 = 0;
	int iLocal_959 = 0;
	bool bLocal_960 = 0;
	int iLocal_961 = 0;
	bool bLocal_962 = 0;
	int iLocal_963 = 0;
	bool bLocal_964 = 0;
	bool bLocal_965 = 0;
	bool bLocal_966 = 0;
	bool bLocal_967 = 0;
	int iLocal_968 = 0;
	bool bLocal_969 = 0;
	bool bLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	bool bLocal_974 = 0;
	bool bLocal_975 = 0;
	bool bLocal_976 = 0;
	bool bLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = 0;
	int iLocal_983 = 0;
	bool bLocal_984 = 0;
	int iLocal_985 = 0;
	bool bLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	bool bLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	bool bLocal_992 = 0;
	int iLocal_993 = 0;
	bool bLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	bool bLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	bool bLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	bool bLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	bool bLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	var uLocal_1021[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1022 = 0;
	var uLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	int iLocal_1037 = 0;
	float fLocal_1038 = 0f;
	float fLocal_1039 = 0f;
	float fLocal_1040 = 0f;
	float fLocal_1041[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1042[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_1043 = 0f;
	float fLocal_1044 = 0f;
	float fLocal_1045[3] = { 0f, 0f, 0f };
	var uLocal_1046[3] = { 0, 0, 0 };
	float fLocal_1047 = 0f;
	float fLocal_1048 = 0f;
	float fLocal_1049 = 0f;
	int iLocal_1050 = 0;
	float fLocal_1051 = 0f;
	vector3 vLocal_1052[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1053[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1054[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1055 = { 0f, 0f, 0f };
	vector3 vLocal_1056 = { 0f, 0f, 0f };
	vector3 vLocal_1057 = { 0f, 0f, 0f };
	vector3 vLocal_1058 = { 0f, 0f, 0f };
	vector3 vLocal_1059 = { 0f, 0f, 0f };
	vector3 vLocal_1060 = { 0f, 0f, 0f };
	vector3 vLocal_1061 = { 0f, 0f, 0f };
	vector3 vLocal_1062 = { 0f, 0f, 0f };
	vector3 vLocal_1063 = { 0f, 0f, 0f };
	float fLocal_1064 = 0f;
	int iLocal_1065 = 0;
	int iLocal_1066 = 0;
	int iLocal_1067 = 0;
	int iLocal_1068 = 0;
	int iLocal_1069[2] = { 0, 0 };
	int iLocal_1070 = 0;
	int iLocal_1071[3] = { 0, 0, 0 };
	var uLocal_1072 = 0;
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080 = 0;
	int iLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	int iLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	int iLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	int iLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	int iLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	int iLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	int iLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	int iLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	int iLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	int iLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	bool bLocal_1111 = 0;
	var uLocal_1112 = 16;
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
	var uLocal_1188 = 0;
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
	var uLocal_1239 = 0;
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
	var uLocal_1265 = 0;
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
	var uLocal_1279 = -1;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 1000;
	var uLocal_1287 = 1000;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 8;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 4;
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
	var uLocal_1310 = 4;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
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
	var uLocal_1325 = 4;
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
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 4;
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
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 4;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 4;
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
	var uLocal_1385 = 4;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 4;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	vector3 vLocal_1413 = { 0f, 0f, 0f };
	float fLocal_1414 = 0f;
	vector3 vLocal_1415 = { 0f, 0f, 0f };
	float fLocal_1416 = 0f;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	vector3 vLocal_1419 = { 0f, 0f, 0f };
	vector3 vLocal_1420 = { 0f, 0f, 0f };
	vector3 vLocal_1421 = { 0f, 0f, 0f };
	vector3 vLocal_1422 = { 0f, 0f, 0f };
	int iLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	int iLocal_1426 = 0;
	struct<12> Local_1427 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_52 = unk_0xAD1355DD1E5D2D9B();
	uLocal_53 = unk_0x817B3657F78A517A();
	iLocal_228 = 0xFFFFFFFF;
	fLocal_230 = 1f;
	iLocal_337 = 0x00000064;
	iLocal_338 = 0x00000003;
	iLocal_931 = 0x00000003;
	iLocal_1030 = 0x00009088;
	iLocal_1036 = 0xFFFFFFFF;
	fLocal_1038 = 90000f;
	fLocal_1047 = 135f;
	fLocal_1049 = 0f;
	fLocal_1051 = 0f;
	vLocal_1058 = { -1162.985f, -161.715f, -38.221f };
	vLocal_1059 = { -1327.63f, -266.202f, 38.221f };
	vLocal_1060 = { -1236.661f, -197.316f, 39.6313f };
	vLocal_1061 = { -1266.027f, -218.9829f, 41.44594f };
	vLocal_1063 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1064 = 40f;
	iLocal_1073 = joaat("a_m_y_beachvesp_02");
	iLocal_1074 = joaat("fbi2");
	iLocal_1075 = joaat("s_m_m_highsec_01");
	iLocal_1076 = joaat("s_m_m_highsec_02");
	iLocal_1077 = joaat("washington");
	vLocal_1413 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1414 = 304.201f;
	vLocal_1415 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1416 = 137.9228f;
	vLocal_1419 = { -1510.733f, -935.96f, 10.90214f };
	vLocal_1420 = { 15.07491f, -0.024198f, -71.86189f };
	vLocal_1421 = { -1510.878f, -936.1155f, 9.798549f };
	vLocal_1422 = { 4.686822f, -0.024198f, -72.45972f };
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		unk_0xC92DB9682A650680("ASS1_FAIL");
		func_533(&(Global_1B416.f_4DF6.f_1), 0x00000400);
		func_531();
		func_526();
	}
	unk_0x7798376279BB5369(0x00000001);
	iLocal_938 = unk_0x16F2683693E537C9();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
	}
	if (func_525())
	{
		if (func_524())
		{
			iLocal_978 = 0x00000001;
		}
		bLocal_967 = 0x00000001;
	}
	else
	{
		bLocal_967 = 0x00000000;
	}
	func_523();
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	}
	func_522();
	iLocal_229 = 0x00000000;
	Local_55 = { func_520(iLocal_229) };
	unk_0xC05DBA7D4F88D5E5(iLocal_1075, 0x00000001);
	unk_0xC05DBA7D4F88D5E5(iLocal_1076, 0x00000001);
	unk_0x2103752056F874E1();
	if (func_525())
	{
		bLocal_330 = 0x00000001;
		iLocal_1029 = func_519();
		if (Global_16AF9)
		{
			if (iLocal_1029 <= 0x00000001)
			{
				iLocal_1029++;
			}
		}
		func_518();
		if (iLocal_1029 == 0x00000000)
		{
			if (iLocal_978)
			{
				func_516();
				while (!func_515())
				{
					SYSTEM::WAIT(0x00000000);
				}
				iVar0 = func_464(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iVar0)) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar0))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar0))) && !unk_0x56E1CD81AE700E98(iVar0))
				{
					unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
				}
				else
				{
					unk_0xA954465BA6FDEFE2(&iVar0);
				}
			}
			func_463(-1510.181f, -946.9595f, 8.2738f, 10f, 0x00000001, 0x00000000);
		}
		else if (iLocal_1029 == 0x00000001)
		{
			if (iLocal_978)
			{
				func_516();
				while (!func_515())
				{
					SYSTEM::WAIT(0x00000000);
				}
				iVar1 = func_464(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iVar1)) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar1))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar1))) && !unk_0x56E1CD81AE700E98(iVar1))
				{
					unk_0xB9FD7450C0DAB575(iVar1, 0x40A00000);
				}
				else
				{
					unk_0xA954465BA6FDEFE2(&iVar1);
				}
			}
			func_463(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 0x00000001, 0x00000000);
		}
		else if (iLocal_1029 == 0x00000002)
		{
			if (iLocal_978)
			{
				func_516();
				while (!func_515())
				{
					SYSTEM::WAIT(0x00000000);
				}
				iVar2 = func_464(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iVar2)) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(iVar2))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(iVar2))) && !unk_0x56E1CD81AE700E98(iVar2))
				{
					unk_0xB9FD7450C0DAB575(iVar2, 0x40A00000);
				}
				else
				{
					unk_0xA954465BA6FDEFE2(&iVar2);
				}
			}
			func_463(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 0x00000001, 0x00000000);
		}
	}
	while (0x00000001)
	{
		unk_0x1A6DFFFEEC27BF4F("M_ASS1", 0x00000000);
		if (iLocal_968)
		{
			if (func_462())
			{
				func_461();
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(iLocal_938))
		{
			func_454();
			if (iLocal_931 < 0x0000000A)
			{
				Local_320.f_6 = 0x00000001;
			}
			else
			{
				Local_320.f_6 = 0x00000005;
			}
			func_154();
			func_102();
			if (iLocal_983)
			{
				func_97();
			}
			if (!bLocal_966)
			{
				if (iLocal_931 >= 0x00000009 && iLocal_931 < 0x0000000B)
				{
					func_93(&uLocal_1023, &fLocal_1038, &bLocal_965, &bLocal_966);
				}
			}
			func_61();
			func_59();
			if (((iLocal_959 || bLocal_964) && iLocal_931 < 0x0000000B) || (bLocal_994 && iLocal_931 < 0x0000000B))
			{
				if (!func_58(&iLocal_1102) && iLocal_931 > 0x00000008)
				{
					func_55(&iLocal_1102);
				}
				else if (iLocal_931 < 0x00000008 || func_52(&iLocal_1102) > 5f)
				{
					if (iLocal_937 == 0x00000001)
					{
						func_37(0x00000001);
					}
					else if (iLocal_937 == 0x00000005)
					{
						func_37(0x00000005);
					}
					else
					{
						func_37(0x00000002);
					}
				}
				else if (func_52(&iLocal_1102) > 2.5f)
				{
					if (!iLocal_995)
					{
						if (!bLocal_1014)
						{
							iLocal_943 = func_36(70f, 0x00000000);
						}
						else
						{
							iLocal_943 = func_36(70f, 0x00000001);
						}
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_943))
							{
								unk_0xA3BF0AA5A2608191(iLocal_943);
								if (iLocal_937 == 0x00000001)
								{
									if (unk_0xC844350D5D58C99A(iLocal_1067))
									{
										if (!unk_0x405E212DDE472467(iLocal_943, 0x00000000))
										{
											unk_0x161356BF7864C47B(iLocal_943, iLocal_1067, iLocal_1067, 2f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
										}
									}
									if (unk_0xC844350D5D58C99A(iLocal_943) && !unk_0xEB6A8945D1AC98A1(iLocal_943))
									{
										func_34(iLocal_943, 0x00000006, "OJAvaGUARD2");
										func_33(&uLocal_1112, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 0x00000009, 0x00000000, 0x00000000);
									}
								}
								else if (iLocal_937 == 0x00000008)
								{
									if (unk_0xC844350D5D58C99A(iLocal_1065) && unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
									{
										unk_0x161356BF7864C47B(iLocal_943, iLocal_1065, iLocal_1065, 2f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
									}
									func_34(func_31(25f), 0x00000006, "OJAvaGUARD2");
									func_33(&uLocal_1112, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 0x00000009, 0x00000000, 0x00000000);
								}
								else
								{
									unk_0x9BE7E7B6B488CC55(iLocal_943, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
									func_2(iLocal_943);
								}
							}
						}
						iLocal_995 = 0x00000001;
					}
				}
			}
			func_1();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iLocal_938, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iLocal_938, 0x00000000);
		if (unk_0x134B62B726CEC8E6(iVar0) == joaat("towtruck") || unk_0x134B62B726CEC8E6(iVar0) == joaat("towtruck2"))
		{
			bLocal_969 = 0x00000001;
		}
	}
	else
	{
		bLocal_969 = 0x00000000;
	}
	if (bLocal_969)
	{
		if (unk_0x6D18156F72BE0773(iVar0, iLocal_1065))
		{
			unk_0xA1D5A8611E9DC1DD(iVar0, iLocal_1065);
		}
	}
}

void func_2(int iParam0)
{
	struct<6> Var0;
	
	if (!iLocal_1005)
	{
		if ((unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0)) && func_29(iParam0, 0x00000001) < 50f)
		{
			if (!func_28())
			{
				if (iLocal_937 == 0x00000004)
				{
					func_34(iParam0, 0x00000003, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJASva_LIMO", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (iLocal_937 == 0x00000008)
				{
					func_34(func_31(25f), 0x00000006, "OJAvaGUARD2");
					func_33(&uLocal_1112, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 0x00000009, 0x00000000, 0x00000000);
				}
				else
				{
					func_34(iParam0, 0x00000003, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJASva_GTFO3", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				}
				iLocal_1005 = 0x00000001;
			}
			else
			{
				Var0 = { func_5() };
				if (!unk_0x7F8A39872A07D2CE(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()
{
	Global_4CD7 = 0x00000000;
	func_4();
}

void func_4()
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

struct<6> func_5()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0x00000000);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_4();
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
		if (func_26(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_25();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_13();
		func_8();
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
		func_4();
	}
	return 0x00000000;
}

void func_8()
{
	if (!func_9())
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

int func_9()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_12())
	{
		return 0x00000000;
	}
	if (func_10(unk_0xD803B885F5E47A62()))
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

bool func_10(int iParam0)
{
	return func_11(iParam0, 0x00000014);
}

bool func_11(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_12()
{
	return 0xFFFFFFFF;
}

void func_13()
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

void func_14()
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

int func_15()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_16()
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

void func_17()
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
		Global_4C1E = func_18();
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

int func_18()
{
	func_19();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_19()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_22(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_21(unk_0x16F2683693E537C9());
			if (func_20(iVar0) && (!func_24(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_20(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_20(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_22(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_22(int iParam0)
{
	if (func_20(iParam0))
	{
		return func_23(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_23(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_24(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_25()
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

bool func_26(int iParam0, int iParam1)
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_28()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_29(int iParam0, bool bParam1)
{
	return func_30(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_30(int iParam0, int iParam1, bool bParam2)
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

int func_31(float fParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_941[iVar0]))
		{
			if (func_32(iLocal_941[iVar0], vLocal_1057, 0x00000001) < fParam0)
			{
				return iLocal_941[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_942[iVar0]))
		{
			if (func_32(iLocal_942[iVar0], vLocal_1057, 0x00000001) < fParam0)
			{
				return iLocal_942[iVar0];
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

float func_32(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, bParam2);
}

int func_33(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_7(sParam2, iParam4, 0x00000000);
}

void func_34(int iParam0, int iParam1, char* sParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		func_35(&uLocal_1112, iParam1, iParam0, sParam2, 0x00000000, 0x00000001);
	}
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000002)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_941[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x405E212DDE472467(iLocal_941[iVar0], 0x00000000)))
			{
				fVar1 = func_29(iLocal_941[iVar0], 0x00000001);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_941[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_942[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x405E212DDE472467(iLocal_942[iVar0], 0x00000000)))
			{
				fVar1 = func_29(iLocal_942[iVar0], 0x00000001);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_942[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iVar0]))
		{
			if (bParam1 || (!bParam1 && !unk_0x405E212DDE472467(iLocal_942[iVar0], 0x00000000)))
			{
				fVar1 = func_29(iLocal_940[iVar0], 0x00000001);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_940[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_37(int iParam0)
{
	char* sVar0;
	
	if (iLocal_968 == 0x00000000)
	{
		iLocal_937 = iParam0;
		func_3();
		unk_0x790015DC92C918E2();
		unk_0xC92DB9682A650680("ASS1_FAIL");
		if (func_51())
		{
			func_49(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			Global_181B8.f_C[0x00000000] = 0x00000001;
		}
		else
		{
			Global_181B8.f_C[0x00000000] = 0x00000000;
		}
		switch (iLocal_937)
		{
			case 0x00000000:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 0x00000001:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 0x00000002:
			case 0x00000005:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 0x00000008:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 0x00000003:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 0x00000006:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 0x00000007:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 0x00000009:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_968 = 0x00000001;
		func_47(sVar0);
		func_38(0x00000000);
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	if (Global_1B416.f_2378 || func_46(0x00000000))
	{
		iVar0 = func_45();
		if (!func_39(iVar0))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
		Global_181DC = iParam0;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_44();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_43(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_40(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_40(var uParam0, int iParam1)
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
			if (!func_42(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_41(&(uParam0->f_8F8[iVar0]));
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

void func_41(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_42(int iParam0, var uParam1, float fParam2)
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
			return func_42(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_42(0x00000008, uParam1, fParam2);
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

void func_43(int iParam0, bool bParam1)
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

void func_44()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_18())
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
			switch (func_18())
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

int func_45()
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

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_47(char* sParam0)
{
	func_533(&(Global_1B416.f_4DF6.f_1), 0x00000400);
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		func_48(sParam0);
	}
}

void func_48(char* sParam0)
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

void func_49(vector3 vParam0, float fParam1)
{
	if (func_50(Global_12C3E, 0f, 0f, 0f, 0x00000000))
	{
		Global_12C3E = { vParam0 };
		Global_12C41 = fParam1;
	}
}

bool func_50(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_51()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) || unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_52(int iParam0)
{
	if (func_58(iParam0))
	{
		if (func_54(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_53(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_53(bool bParam0)
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

bool func_54(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

void func_55(int iParam0)
{
	if (!func_58(iParam0))
	{
		func_56(iParam0);
	}
}

void func_56(int iParam0)
{
	func_57(iParam0, 0f);
}

void func_57(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_53(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

bool func_58(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

void func_59()
{
	if (func_60(&iLocal_937))
	{
		func_37(0x00000006);
	}
}

int func_60(int iParam0)
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_931 > 0x0000000B)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_939, iLocal_1065, 0x00000000))
				{
					bVar1 = 0x00000001;
				}
			}
		}
		if (bLocal_989)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (unk_0xC844350D5D58C99A(iLocal_939))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
			{
				if (func_30(iLocal_938, iLocal_939, 0x00000001) >= fVar0)
				{
					if (bVar1)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
						{
							if (unk_0x03068588A1FCED1A(iLocal_1065) || !unk_0x0A059E0DB9253280(iLocal_1065))
							{
								*iParam0 = 0x00000006;
								return 0x00000001;
							}
						}
					}
					else if (unk_0x03068588A1FCED1A(iLocal_939))
					{
						*iParam0 = 0x00000006;
						return 0x00000001;
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(iLocal_950))
				{
					if (func_30(iLocal_938, iLocal_939, 0x00000001) >= (fVar0 * 0.5f))
					{
						if (!unk_0xE14836FE7BA140D5(iLocal_950))
						{
							unk_0xF412DD40DE84CE72(iLocal_950, 0x00000001);
						}
					}
					else if (unk_0xE14836FE7BA140D5(iLocal_950))
					{
						unk_0xF412DD40DE84CE72(iLocal_950, 0x00000000);
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_61()
{
	if (unk_0xC844350D5D58C99A(iLocal_939))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
		{
			func_62(&uLocal_1277, iLocal_939, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		}
	}
}

void func_62(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_63(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_63(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_64(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_64(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_92(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_65(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_65(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
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
	if (func_91(iVar0))
	{
		func_90();
	}
	if (func_89(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
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
			if (func_84(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_81(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_70(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_91(iVar0))
							{
								func_69(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_68(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_70(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_91(iVar0))
						{
							func_69(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_68(0x00000001);
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
				if (func_91(sParam3))
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
						func_92(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_92(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_92(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_92(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_92(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_92(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_84(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_67(uParam0))
				{
					func_66(uParam0);
				}
			}
		}
	}
	else
	{
		func_92(uParam0, iVar0, 0x00000000);
	}
}

void func_66(var uParam0)
{
	if (func_89(unk_0x16F2683693E537C9()))
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

int func_67(var uParam0)
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

int func_68(bool bParam0)
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

void func_69(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_70(char* sParam0)
{
	if (!func_71(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_68(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_68(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_68(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_71(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_80(0x00000000))
	{
		return 0x00000000;
	}
	if (func_79())
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
	if ((func_78() || func_77(Global_440000.f_38DB3)) || func_76())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_75(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_74(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_72(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_72(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_73(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_73(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
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

int func_74(int iParam0, int iParam1)
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

int func_75(int iParam0, int iParam1)
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

var func_76()
{
	return Global_2564C8.f_11;
}

bool func_77(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_78()
{
	return Global_2564C8.f_10;
}

bool func_79()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_80(int iParam0)
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

void func_81(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		func_92(uParam0, 0x00000000, 0x00000000);
	}
	if (func_50(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_82())
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

bool func_82()
{
	return func_83(unk_0xD803B885F5E47A62());
}

int func_83(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_67(uParam0))
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
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_88(bParam1, bParam2, bParam3))
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
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_87(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_88(bParam1, bParam2, bParam3))
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
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_85(bParam1, bParam2, bParam3))
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
					else if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_67(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_71(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_90();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_71(bParam0, bParam1, bParam2))
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

int func_89(int iParam0)
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

void func_90()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

bool func_91(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_92(var uParam0, int iParam1, int iParam2)
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
		if (func_91(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

void func_93(var uParam0, float fParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_58(&iLocal_1099))
		{
			func_55(&iLocal_1099);
		}
		*bParam2 = 0x00000001;
	}
	if (func_58(&iLocal_1099))
	{
		fVar0 = func_52(&iLocal_1099);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 0x00000001;
		}
	}
	iLocal_1033 = SYSTEM::ROUND((*fParam1 - fVar0));
	iLocal_1033 *= 1000;
	if (iLocal_1033 < 0x0000F618)
	{
		iLocal_972 = 0x00000001;
	}
	if (iLocal_1033 < 0x0000FDE8)
	{
		iLocal_979 = 0x00000001;
	}
	if (iLocal_1033 < iLocal_1030)
	{
		iLocal_1002 = 0x00000001;
	}
	if (!unk_0xAE317D00A5A55DF6("SCRIPT\ASSASSINATION_MULTI", 0x00000000, 0xFFFFFFFF))
	{
		bLocal_1111 = 0x00000000;
	}
	else
	{
		bLocal_1111 = 0x00000001;
	}
	if (iLocal_1033 < 0x00007530)
	{
		iLocal_993 = 0x00000001;
		if (bLocal_1111)
		{
			if (func_58(&iLocal_1108))
			{
				if (func_52(&iLocal_1108) > 1f)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 0x00000001);
					func_56(&iLocal_1108);
				}
			}
			else
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 0x00000001);
				func_55(&iLocal_1108);
			}
		}
		func_94(iLocal_1033, "ASS_VA_TIMERED", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	else
	{
		func_94(iLocal_1033, "ASS_VA_TIMELEFT", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_96(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_95(0x00000007, iVar0);
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
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_95(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_97()
{
	int iVar0;
	
	switch (iLocal_1027)
	{
		case 0x00000000:
			if (!func_28())
			{
				if (!unk_0x437347B10A200C4B(iLocal_941[0x00000000], 0x00000000))
				{
					unk_0xBC43ED9FE28DB191(iLocal_941[0x00000000]);
				}
				if (!unk_0x437347B10A200C4B(iLocal_941[0x00000001], 0x00000000))
				{
					unk_0xBC43ED9FE28DB191(iLocal_941[0x00000001]);
				}
				iVar0 = func_101();
				if (bLocal_982)
				{
					if (!iLocal_998)
					{
						func_34(iVar0, 0x00000003, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_EXPLO", 0x00000009, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_998 = 0x00000001;
						}
					}
				}
				else if (!bLocal_989 && unk_0xEB6A8945D1AC98A1(iLocal_939))
				{
					if (!iLocal_998)
					{
						func_34(iVar0, 0x00000003, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_SNIPE", 0x00000009, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_998 = 0x00000001;
						}
					}
				}
				if (!func_58(&iLocal_1087))
				{
					func_55(&iLocal_1087);
				}
				else
				{
					func_56(&iLocal_1087);
				}
				iLocal_1027 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			iLocal_1027 = 0x00000002;
			break;
		
		case 0x00000002:
			if (iLocal_998 || !unk_0xEB6A8945D1AC98A1(iLocal_939))
			{
				if (!func_28() && !bLocal_982)
				{
					if (!iLocal_996)
					{
						iVar0 = func_101();
						func_34(iVar0, 0x00000003, "OJAvaGUARD");
						if (func_6(&uLocal_1112, "OJASAUD", "OJASva_LOOK", 0x00000009, 0x00000000, 0x00000000, 0x00000000))
						{
							iLocal_996 = 0x00000001;
						}
					}
					else if (!bLocal_1006 && unk_0xEB6A8945D1AC98A1(iLocal_939))
					{
						iVar0 = func_101();
						func_100(iVar0);
					}
				}
			}
			else if (bLocal_982)
			{
				if (!iLocal_998)
				{
					func_34(iVar0, 0x00000003, "OJAvaGUARD");
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_EXPLO", 0x00000009, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_998 = 0x00000001;
					}
				}
			}
			else if (!bLocal_989)
			{
				if (!iLocal_998)
				{
					func_34(iVar0, 0x00000003, "OJAvaGUARD");
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_SNIPE", 0x00000009, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_998 = 0x00000001;
					}
				}
			}
			if (func_99(iLocal_938))
			{
				fLocal_1048 = 2.5f;
			}
			else
			{
				fLocal_1048 = 5f;
			}
			if (func_58(&iLocal_1087))
			{
				if ((func_52(&iLocal_1087) > fLocal_1048 && func_98()) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					func_3();
					if (!iLocal_959)
					{
						iLocal_959 = 0x00000001;
						iLocal_1003 = 0x00000001;
					}
					iLocal_983 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			break;
	}
}

int func_98()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_941[iVar0]) && !unk_0x437347B10A200C4B(iLocal_941[iVar0], 0x00000000))
		{
			unk_0x9DD8618CA5BF832D(iLocal_941[iVar0], 0x00000055, 0x00000001);
			if (unk_0xE115347EA59F7B86(iLocal_941[iVar0], unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_942[iVar0]) && !unk_0x437347B10A200C4B(iLocal_942[iVar0], 0x00000000))
		{
			unk_0x9DD8618CA5BF832D(iLocal_942[iVar0], 0x00000055, 0x00000001);
			if (unk_0xE115347EA59F7B86(iLocal_942[iVar0], unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_940[iVar0]) && !unk_0x437347B10A200C4B(iLocal_940[iVar0], 0x00000000))
		{
			unk_0x9DD8618CA5BF832D(iLocal_940[iVar0], 0x00000055, 0x00000001);
			if (unk_0xE115347EA59F7B86(iLocal_940[iVar0], unk_0x16F2683693E537C9()))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_99(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x3D1053F9EB43B7AD(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0x00000000, 0x00000001, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_100(int iParam0)
{
	if (!bLocal_1006)
	{
		if (unk_0xC844350D5D58C99A(iLocal_939) && unk_0xEB6A8945D1AC98A1(iLocal_939))
		{
			if (!func_28())
			{
				if ((unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0)) && func_29(iParam0, 0x00000001) < 75f)
				{
					func_34(iParam0, 0x00000003, "OJAvaGUARD");
					func_6(&uLocal_1112, "OJASAUD", "OJAS_FEED", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
					bLocal_1006 = 0x00000001;
				}
			}
		}
	}
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_941[iVar1]) && !unk_0xEB6A8945D1AC98A1(iLocal_941[iVar1]))
		{
			iVar0 = iLocal_941[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0x00000000)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(iLocal_942[iVar1]) && !unk_0xEB6A8945D1AC98A1(iLocal_942[iVar1]))
			{
				iVar0 = iLocal_942[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0x00000000)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000002)
		{
			if (unk_0xC844350D5D58C99A(iLocal_940[iVar1]) && !unk_0xEB6A8945D1AC98A1(iLocal_940[iVar1]))
			{
				iVar0 = iLocal_940[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_102()
{
	func_109();
	if (!iLocal_983)
	{
		if (!iLocal_959)
		{
			if (func_103(&iLocal_937))
			{
				iLocal_959 = 0x00000001;
			}
		}
	}
}

int func_103(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_959)
	{
		if (iLocal_993 && !bLocal_962)
		{
			if (func_108(&iLocal_937))
			{
				*iParam0 = 0x00000008;
				return 0x00000001;
			}
		}
		if (unk_0x03A10A5707B2BB1F(iLocal_938, 0x00000004))
		{
			if (unk_0x168558745A6AC21E(iLocal_938))
			{
				fVar1 = func_32(unk_0x16F2683693E537C9(), -1230.599f, -196.5408f, 38.1528f, 0x00000001);
				unk_0xCAE036C45E7FC720(iLocal_938, &iVar2, 0x00000001);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (unk_0xC844350D5D58C99A(iLocal_939))
					{
						iLocal_983 = 0x00000001;
						iLocal_981 = 0x00000001;
					}
				}
				else if (fVar1 < 50f)
				{
					return 0x00000001;
				}
			}
		}
		if ((func_107(iLocal_1065) || func_106(iLocal_1065)) || (unk_0xC844350D5D58C99A(iLocal_1065) && unk_0xB87D13D0C064E9D1(iLocal_1065, iLocal_938, 0x00000001)))
		{
			return 0x00000001;
		}
		if (func_107(iLocal_1066) || (unk_0xC844350D5D58C99A(iLocal_1066) && unk_0xB87D13D0C064E9D1(iLocal_1066, iLocal_938, 0x00000001)))
		{
			return 0x00000001;
		}
		if (unk_0xC844350D5D58C99A(iLocal_1065) && !unk_0x437347B10A200C4B(iLocal_1065, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(iLocal_938, iLocal_1065, 0x00000000))
			{
				unk_0xAACF4BD59CB35944(iLocal_1065, 0x00000001);
				unk_0x13AD07790E232824(iLocal_1065);
				return 0x00000001;
			}
		}
		if (unk_0xC844350D5D58C99A(iLocal_1065))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				if (unk_0x405E212DDE472467(iLocal_938, 0x00000000))
				{
					iVar0 = unk_0x6937EA2286828455(iLocal_938, 0x00000000);
					if (unk_0x1B3D109B39CC2C89(iVar0, iLocal_1065) || (bLocal_969 && unk_0x6D18156F72BE0773(iVar0, iLocal_1065)))
					{
						*iParam0 = 0x00000004;
						return 0x00000001;
					}
				}
			}
		}
		if (iLocal_931 == 0x0000000C)
		{
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				if (func_30(iLocal_938, iLocal_1065, 0x00000001) <= 15f)
				{
					return 0x00000001;
				}
			}
		}
		if ((iLocal_933[0x00000000] == 0x00000002 || iLocal_933[0x00000001] == 0x00000002) || iLocal_933[0x00000002] == 0x00000002)
		{
			if (func_105())
			{
				return 0x00000001;
			}
		}
		if (iLocal_931 < 0x0000000B)
		{
			if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, vLocal_1063, fLocal_1064))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, vLocal_1063, fLocal_1064))
		{
			if (func_104())
			{
				iLocal_1013 = 0x00000001;
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_104()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0x00000000, 0x00000000, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0x00000000, 0x00000000, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_105()
{
	int iVar0;
	
	if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_106(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x9C7B8DC16535B879(iParam0) == 0x00000003 && unk_0x8B157DA177FBCF50(iLocal_938) == iParam0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_107(int iParam0)
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
						if (func_30(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
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

int func_108(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
	{
		if (unk_0x49FCF3B44AECBD62(unk_0x16F2683693E537C9(), iLocal_1065, joaat("weapon_stickybomb"), 0xFFFFFFFF))
		{
			if (unk_0x7DF98E52B481B6E3(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0x00000000) || unk_0x7DF98E52B481B6E3(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0x00000000))
			{
				*iParam0 = 0x00000008;
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_109()
{
	int iVar0;
	
	func_150();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_941[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_149(iLocal_941[iVar0], &(Local_946[iVar0 /*8*/]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 150f, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_942[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_149(iLocal_942[iVar0], &(Local_947[iVar0 /*8*/]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 150f, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_940[iVar0]))
		{
			if (iLocal_959 && !bLocal_992)
			{
				func_149(iLocal_940[iVar0], &(Local_948[iVar0 /*8*/]), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 150f, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iVar0]))
			{
				if (iLocal_936[iVar0] == 0x00000004)
				{
					unk_0x9DD8618CA5BF832D(iLocal_940[iVar0], 0x00000080, 0x00000001);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1024 == 0x00000000)
	{
		func_147(0x00000000);
	}
	else if (iLocal_1024 == 0x00000001)
	{
		func_147(0x00000001);
	}
	else if (iLocal_1024 == 0x00000002)
	{
		if (iLocal_931 >= 0x00000009)
		{
			func_136(0x00000000);
		}
	}
	else if (iLocal_1024 == 0x00000003)
	{
		if (iLocal_931 >= 0x00000009)
		{
			func_136(0x00000001);
		}
	}
	else if (iLocal_1024 == 0x00000004)
	{
		if (iLocal_931 >= 0x00000009)
		{
			func_136(0x00000002);
			func_135(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1024 == 0x00000005)
	{
		func_110(0x00000000);
		func_135(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1024 == 0x00000006)
	{
		func_110(0x00000001);
		func_135(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1024++;
	if (iLocal_1024 > 0x00000006)
	{
		iLocal_1024 = 0x00000000;
	}
	if (iLocal_959)
	{
		if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
		{
			unk_0x9DD8618CA5BF832D(iLocal_939, 0x00000078, 0x00000001);
		}
	}
}

void func_110(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = iLocal_942[iParam0];
	switch (iLocal_934[iParam0])
	{
		case 0x00000000:
			if (iLocal_972)
			{
				iLocal_934[iParam0] = 0x00000001;
			}
			else if (bLocal_970)
			{
				iLocal_934[iParam0] = 0x00000003;
			}
			break;
		
		case 0x00000001:
			if (unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000))
			{
				if (func_134())
				{
					if (!unk_0xDD4B920CF5E7E9EC(iLocal_1066))
					{
						if (unk_0xA30B8362589C124A(iLocal_1066, 0xFFFFFFFF, 0x00000000) == iLocal_942[iParam0])
						{
							unk_0x1B901F542DF070CF(iLocal_942[iParam0], iLocal_1066, "OJASva_104", 0x000003B4, 0x00000000, 0x00000010, 0x00000012, 6f, 0x00000000, 2f);
						}
					}
					iLocal_934[iParam0] = 0x00000002;
				}
				else
				{
					func_133(iParam0);
				}
			}
			break;
		
		case 0x00000002:
			if (unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000))
			{
				if (!unk_0xDD4B920CF5E7E9EC(iLocal_1066))
				{
					vVar1 = { unk_0x68F4C0EC296D3901(iLocal_1066, 0x00000001) };
					fVar2 = unk_0xD9522BA9E27E1349(iLocal_1066);
					iLocal_972 = 0x00000000;
					iLocal_934[iParam0] = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if (unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000))
			{
				if (!unk_0x437347B10A200C4B(iLocal_942[iParam0], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_942[iParam0], iLocal_1066, 0x00000000) && unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
					{
						if (!iLocal_959)
						{
							if (unk_0xA30B8362589C124A(iLocal_1066, 0xFFFFFFFF, 0x00000000) == iLocal_942[iParam0])
							{
								if (unk_0xD1960163A3042274(iLocal_942[iParam0], 0xB41F1A34) != 0x00000001)
								{
									unk_0x9412BCBFE7F69F94(iLocal_942[iParam0], iLocal_1066, iLocal_1065, 0xFFFFFFFF, 45f, 0x000C0225, 10f, 0xFFFFFFFF, 10f);
								}
							}
						}
						else if (unk_0xA30B8362589C124A(iLocal_1066, 0xFFFFFFFF, 0x00000000) == iLocal_942[iParam0])
						{
							if (!iLocal_973)
							{
								if (unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
								{
									if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										unk_0x6C3AE6E278DB3D0E(iVar0, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
									}
									else
									{
										iLocal_934[iParam0] = 0x00000008;
									}
								}
								else
								{
									unk_0x9412BCBFE7F69F94(iLocal_942[iParam0], iLocal_1066, iLocal_1065, 0xFFFFFFFF, 45f, 0x000C0225, 10f, 0xFFFFFFFF, 10f);
									unk_0x7CFA09F860B1FC00(iVar0, unk_0x16F2683693E537C9());
									iLocal_973 = 0x00000001;
								}
							}
						}
						else if (!bLocal_989)
						{
							if (unk_0xD1960163A3042274(iLocal_942[iParam0], 0x2E85A751) != 0x00000001)
							{
								if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									if (unk_0x9C66D99E63E8E24C(iLocal_1066) < 5f)
									{
										iLocal_934[iParam0] = 0x00000008;
									}
								}
								unk_0x6C3AE6E278DB3D0E(iVar0, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
						}
						else if (unk_0xD1960163A3042274(iLocal_942[iParam0], 0x2E85A751) != 0x00000001)
						{
							unk_0x6C3AE6E278DB3D0E(iVar0, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						}
					}
					else if (!iLocal_983)
					{
						iLocal_934[iParam0] = 0x00000008;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_58(&iLocal_1081))
			{
				func_56(&iLocal_1081);
			}
			func_130(&(iLocal_942[iParam0]));
			iLocal_934[iParam0] = 0x00000005;
			break;
		
		case 0x00000005:
			if (!func_99(iLocal_938))
			{
				if (func_52(&iLocal_1081) >= 27f || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_938, iVar0, 5f, 5f, 3f, 0x00000000, 0x00000001, 0x00000000))
						{
							func_129(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_133(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_934[iParam0] = 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (bLocal_984)
			{
				unk_0xDD353D0E9C789D0E(&uLocal_1072);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0xDBE4EC9C88839074(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x000003E8, 0x000005DC), 0x00000800, 0x00000004);
				unk_0xDBE4EC9C88839074(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x000007D0, 0x000009C4), 0x00000800, 0x00000004);
				unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), unk_0x09AC81E49EA267F7(0x00002710, 0x00002AF8), 30f, 1f, 0x40000000, 0x00000000);
				unk_0x490C8E35C60821B9(0x00000000, unk_0x16F2683693E537C9(), func_128(), 1f, 0x00000000, 0x3F000000, 0x40800000, 0x00000001, 0x00000000, 0xC6EE6B4C);
				unk_0x75ABDC5F81978924(uLocal_1072);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_942[iParam0]))
				{
					unk_0x78ADC381772E3D54(iLocal_942[iParam0], uLocal_1072);
				}
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
			}
			else
			{
				unk_0xDD353D0E9C789D0E(&uLocal_1072);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0x731C6942D48648D6(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000DAC), 0x00000001, 0x00000000);
				unk_0x731C6942D48648D6(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000DAC), 0x00000000, 0x00000000);
				unk_0x731C6942D48648D6(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000DAC), 0x00000000, 0x00000000);
				unk_0x731C6942D48648D6(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000DAC), 0x00000000, 0x00000000);
				unk_0x731C6942D48648D6(0x00000000, func_128(), 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(uLocal_1072);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_942[iParam0]))
				{
					unk_0x78ADC381772E3D54(iLocal_942[iParam0], uLocal_1072);
				}
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
			}
			iLocal_934[iParam0] = 0x00000007;
			break;
		
		case 0x00000007:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_942[iParam0]))
			{
				if (unk_0xD1960163A3042274(iLocal_942[iParam0], 0x55966344) != 0x00000001)
				{
					unk_0x161356BF7864C47B(iLocal_942[iParam0], iLocal_938, iLocal_938, 1f, 0x00000000, -1f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
				}
			}
			break;
		
		case 0x00000008:
			if (iLocal_937 != 0x00000004 && iLocal_937 != 0x00000005)
			{
				func_127(iVar0);
			}
			else
			{
				func_126(iVar0);
			}
			iLocal_934[iParam0] = 0x00000009;
			break;
		
		case 0x00000009:
			if (iParam0 == 0x00000000)
			{
				if (iLocal_937 != 0x00000004)
				{
					func_125(iLocal_1066, iVar0, 0x42480000, 0x42480000, 0x41200000);
				}
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_934[iParam0] != 0x00000006 && iLocal_934[iParam0] != 0x00000007)
			{
				iLocal_934[iParam0] = 0x00000006;
			}
		}
		else if (func_118(iVar0, iLocal_1066, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001) || func_117(iLocal_1066))
		{
			iVar3 = func_36(0x428C0000, 0x00000001);
			if (iVar3 != 0x00000000)
			{
				func_116(unk_0x68F4C0EC296D3901(iVar3, 0x00000001), 0x41700000, 0x428C0000);
			}
			if (!func_115())
			{
				iLocal_959 = 0x00000001;
			}
		}
		else if (!bLocal_962)
		{
			if (func_114(iVar0, 10f))
			{
				if (iLocal_934[iParam0] != 0x00000004 && iLocal_934[iParam0] != 0x00000005)
				{
					if (!bLocal_960)
					{
						func_112(&Local_320, 0x00000004);
						iLocal_934[iParam0] = 0x00000004;
					}
					else if (!func_99(iLocal_938))
					{
						iLocal_959 = 0x00000001;
						if (!unk_0xC844350D5D58C99A(iLocal_939))
						{
							iLocal_937 = 0x00000005;
						}
						iLocal_934[iParam0] = 0x00000008;
					}
				}
			}
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(iVar0))
	{
		if (unk_0xC42A92762C58E1B9(iVar0, iLocal_1066, 0x00000000))
		{
			if (((!unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000) || !unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000)) || iLocal_971) || !bLocal_962)
			{
				if (iLocal_934[iParam0] < 0x00000008)
				{
					iLocal_934[iParam0] = 0x00000008;
				}
			}
		}
		else if (iLocal_934[iParam0] < 0x00000008)
		{
			iLocal_934[iParam0] = 0x00000008;
		}
	}
	func_111(iVar0, uLocal_952[iParam0]);
}

void func_111(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0xE4EDC4B0E92C078B(iParam1))
			{
				unk_0x142CC44DB769B57E(&iParam1);
			}
		}
	}
}

void func_112(var uParam0, int iParam1)
{
	func_113(uParam0, iParam1);
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_114(int iParam0, float fParam1)
{
	if (!iLocal_959)
	{
		if (!func_99(iLocal_938))
		{
			if (unk_0xC844350D5D58C99A(iParam0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam0))
				{
					if (func_29(iParam0, 0x00000000) <= fParam1)
					{
						if (unk_0x7069CC4DE1EA3FAA(iParam0, iLocal_938, 120f))
						{
							if (unk_0xF649DD3BF44195C7(iParam0, iLocal_938, 0x00000011))
							{
								if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 0x00000001, 0x00000001, 0x00000000) && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 0x00000001, 0x00000001, 0x00000000))
								{
									return 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xC844350D5D58C99A(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0x12DE711B1C681E9E(iLocal_938, iParam0, 5f, 5f, 1f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(iParam0, iLocal_938, 120f))
					{
						if (unk_0xF649DD3BF44195C7(iParam0, iLocal_938, 0x00000011))
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

int func_115()
{
	if (iLocal_983 || bLocal_984)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_116(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	
	if (!unk_0xC844350D5D58C99A(iLocal_939))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iLocal_1065))
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iLocal_1065, 0x00000000) || iLocal_1013)
	{
		bLocal_982 = 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(iLocal_939))
	{
		if (((unk_0x54648B774DB42A3A(iLocal_939, joaat("weapon_sniperrifle"), 0x00000000) || unk_0x54648B774DB42A3A(iLocal_939, joaat("weapon_heavysniper"), 0x00000000)) || unk_0x54648B774DB42A3A(iLocal_939, joaat("weapon_remotesniper"), 0x00000000)) || unk_0x54648B774DB42A3A(iLocal_939, joaat("weapon_marksmanrifle"), 0x00000000))
		{
			iLocal_981 = 0x00000001;
			iLocal_932 = 0x00000001;
		}
	}
	if (iLocal_325 == 0x00000004 || iLocal_325 == 0x00000008)
	{
		if (!unk_0xDD4B920CF5E7E9EC(iLocal_1065))
		{
			fParam1 = (fParam1 * 2f);
			iVar0 = 0x00000001;
		}
	}
	if (!iLocal_959)
	{
		if ((iLocal_981 || bLocal_982) || iVar0)
		{
			fVar1 = func_32(unk_0x16F2683693E537C9(), vParam0, 0x00000001);
			if (fVar1 > fParam1)
			{
				iLocal_983 = 0x00000001;
				if (fVar1 > fParam2)
				{
					bLocal_984 = 0x00000001;
				}
			}
		}
	}
}

int func_117(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						fVar1 = unk_0x9C66D99E63E8E24C(iVar0);
						if (fVar1 > 7f)
						{
							if (unk_0x1B3D109B39CC2C89(iVar0, iParam0) || unk_0xB87D13D0C064E9D1(iVar0, iParam0, 0x00000001))
							{
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

int func_118(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_124(*uParam2, 0x00000001))
		{
			if (func_123(iParam0, uParam2))
			{
				*iParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_124(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*iParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_124(*uParam2, 0x00000004))
		{
			if (func_122(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_124(*uParam2, 0x00000008))
		{
			if (func_121(iVar0, iParam0, uParam2))
			{
				*iParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_124(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_119(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*iParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_124(*uParam2, 0x00000010))
		{
			if (func_119(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
			{
				*iParam3 = 0x00000010;
				return 0x00000001;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
		{
			*iParam3 = 0x00000010;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_316)
		{
			iLocal_317 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_316 = 0x00000001;
		}
		iLocal_318 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_319 = (iLocal_317 - iLocal_318);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
			{
				if (IntToFloat(iLocal_319) > 100f)
				{
					return 0x00000001;
				}
			}
		}
		if (bLocal_316)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (IntToFloat(iLocal_319) > 100f)
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
	if (func_120(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_29(iParam0, 0x00000001) < 1.5f)
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

int func_120(int iParam0, int iParam1)
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

int func_121(int iParam0, int iParam1, var uParam2)
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

int func_122(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0xFB275CE013F3A38C(iParam0) || func_107(iVar1))
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

int func_123(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_29(iParam0, 0x00000001) < uParam1->f_2)
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

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_125(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (func_30(iParam1, iParam0, 0x00000000) > fParam2 && func_29(iParam1, 0x00000001) < fParam3)
				{
					if (!unk_0xC42A92762C58E1B9(iParam1, iParam0, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iParam1, 0x950B6492) != 0x00000001)
						{
							unk_0x5B1D360B9C6F0A09(iParam1, iParam0, 0x00004E20, 0xFFFFFFFF, 2f, 0x00000001, 0x00000000);
						}
					}
					else if (unk_0xD1960163A3042274(iParam1, 0xB41F1A34) != 0x00000001)
					{
						unk_0x60274E99F9B27DEA(iParam1, iParam0, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 35f, 0x000C0025, -1f, -1f, 0x00000001);
						unk_0x7CFA09F860B1FC00(iParam1, unk_0x16F2683693E537C9());
					}
				}
				else if (!unk_0xC42A92762C58E1B9(iParam1, iParam0, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iParam1, 0x2E85A751) != 0x00000001)
					{
						unk_0x6C3AE6E278DB3D0E(iParam1, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					}
				}
			}
			else if (unk_0xC42A92762C58E1B9(iParam1, iParam0, 0x00000000))
			{
				if (func_29(iParam1, 0x00000001) > fParam4)
				{
					if (unk_0xD1960163A3042274(iParam1, 0xB41F1A34) != 0x00000001)
					{
						unk_0x89258193691A7600(iParam1, iParam0, unk_0x16F2683693E537C9(), 0x00000006, 35f, 0x000C0025, -1f, -1f, 0x00000001);
						unk_0x7CFA09F860B1FC00(iParam1, unk_0x16F2683693E537C9());
					}
				}
				else if (unk_0xD1960163A3042274(iParam1, 0x2E85A751) != 0x00000001)
				{
					unk_0x6C3AE6E278DB3D0E(iParam1, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				}
			}
		}
		else if (unk_0xD1960163A3042274(iParam1, 0x2E85A751) != 0x00000001)
		{
			unk_0x6C3AE6E278DB3D0E(iParam1, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
		}
	}
}

void func_126(int iParam0)
{
	var uVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iLocal_938) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			unk_0xAFF39FB306F8E232(iParam0, 0x00000003, 0x00000001);
		}
		unk_0xF82EA857DA10E0CD(&uVar0);
		unk_0xDD353D0E9C789D0E(&uVar0);
		unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000100);
		unk_0x9BE7E7B6B488CC55(0x00000000, iLocal_938, 0xFFFFFFFF, 0x00000000);
		unk_0x75ABDC5F81978924(uVar0);
		unk_0x78ADC381772E3D54(iParam0, uVar0);
		unk_0xF82EA857DA10E0CD(&uVar0);
	}
}

void func_127(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iLocal_938, 0x00000000))
	{
		if (!unk_0x405E212DDE472467(iLocal_938, 0x00000000))
		{
			if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
			{
				unk_0xAFF39FB306F8E232(iParam0, 0x00000003, 0x00000001);
			}
			unk_0xF82EA857DA10E0CD(&uLocal_1072);
			unk_0xDD353D0E9C789D0E(&uLocal_1072);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000100);
			unk_0x6C3AE6E278DB3D0E(0x00000000, iLocal_938, 0x00000000, 0x00000010);
			unk_0x75ABDC5F81978924(uLocal_1072);
			if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
			{
				unk_0x78ADC381772E3D54(iParam0, uLocal_1072);
			}
			unk_0xF82EA857DA10E0CD(&uLocal_1072);
		}
		else if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0xD1960163A3042274(iParam0, 0x2E85A751) != 0x00000001)
			{
				unk_0xA3BF0AA5A2608191(iParam0);
				unk_0x6C3AE6E278DB3D0E(iParam0, iLocal_938, 0x00000000, 0x00000010);
			}
		}
	}
}

Vector3 func_128()
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = (unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) % 0x00000003);
	switch (iVar1)
	{
		case 0x00000000:
			vVar0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 0x00000001:
			vVar0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 0x00000002:
			vVar0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return vVar0;
}

void func_129(int iParam0, vector3 vParam1)
{
	if (!iLocal_959)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (unk_0x12DE711B1C681E9E(iLocal_938, iParam0, vParam1, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iLocal_938, 160f))
				{
					if (unk_0xF649DD3BF44195C7(iParam0, iLocal_938, 0x00000011))
					{
						unk_0x161356BF7864C47B(iParam0, iLocal_938, iLocal_938, 1f, 0x00000000, -1f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
						iLocal_937 = 0x00000005;
						iLocal_959 = 0x00000001;
					}
				}
			}
			else if (!unk_0x405E212DDE472467(iParam0, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iParam0, 0xB80BFB24) != 0x00000001)
				{
					unk_0x161356BF7864C47B(iParam0, iLocal_938, iLocal_938, 1f, 0x00000000, -1f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
				}
			}
		}
	}
}

void func_130(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	
	if (iLocal_943 == 0x00000000)
	{
		iLocal_943 = func_36(70f, 0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(*iParam0))
	{
		if (!unk_0x405E212DDE472467(*iParam0, 0x00000000))
		{
			if (!iLocal_961)
			{
				if (*iParam0 == iLocal_943)
				{
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0xE185F110925D87DB(0x00000000, iLocal_938, 0x00004E20, 2f, 1f, 0x40000000, 0x00000000);
					unk_0xF96A174EE26D7588(0x00000000, iLocal_938, 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(*iParam0, uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					iLocal_961 = 0x00000001;
					vVar1 = { unk_0x68F4C0EC296D3901(*iParam0, 0x00000001) };
				}
				else if (unk_0xD1960163A3042274(*iParam0, 0x4924437D) != 0x00000001)
				{
					unk_0xF96A174EE26D7588(*iParam0, iLocal_938, 0xFFFFFFFF);
				}
			}
			else if (*iParam0 != iLocal_943)
			{
				if (unk_0xD1960163A3042274(*iParam0, 0x4924437D) != 0x00000001)
				{
					unk_0xF96A174EE26D7588(*iParam0, iLocal_938, 0xFFFFFFFF);
				}
			}
		}
		unk_0x25C5402CC10F76CD(*iParam0, 0x00000001);
		func_131();
	}
}

void func_131()
{
	int iVar0;
	
	if (!iLocal_963)
	{
		if (!bLocal_974)
		{
			if (!func_28())
			{
				iVar0 = func_36(0x428C0000, 0x00000001);
				func_34(iVar0, 0x00000003, "OJAvaGUARD");
				if (func_132())
				{
					func_6(&uLocal_1112, "OJASAUD", "OJASva_CAR", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
					iLocal_963 = 0x00000001;
				}
				else
				{
					func_33(&uLocal_1112, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 0x00000009, 0x00000000, 0x00000000);
					iLocal_963 = 0x00000001;
				}
			}
		}
	}
}

int func_132()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if (!unk_0x437347B10A200C4B(iLocal_1065, 0x00000000))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(iLocal_1065, 0x00000001) };
		}
		fVar2 = SYSTEM::VDIST2(vVar0, vVar1);
		if (fVar2 <= 25f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_133(int iParam0)
{
	int iVar0;
	
	bLocal_960 = 0x00000001;
	if (iParam0 == 0x00000000)
	{
		iVar0 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000001)
	{
		iVar0 = 0x00000000;
	}
	if (!unk_0x437347B10A200C4B(iLocal_942[iParam0], 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000))
		{
			if (!unk_0xC42A92762C58E1B9(iLocal_942[iParam0], iLocal_1066, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iLocal_942[iParam0], 0x950B6492) != 0x00000001)
				{
					unk_0x5B1D360B9C6F0A09(iLocal_942[iParam0], iLocal_1066, 0x00004E20, iVar0, 2f, 0x00000001, 0x00000000);
				}
			}
		}
	}
}

int func_134()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_942[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_942[0x00000001]))
	{
		if (unk_0xC42A92762C58E1B9(iLocal_942[0x00000000], iLocal_1066, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_942[0x00000001], iLocal_1066, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_135(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (!iLocal_959)
	{
		if (unk_0x7DF98E52B481B6E3(vParam0, vParam1, fParam2, joaat("weapon_stickybomb"), 0x00000000))
		{
			iLocal_959 = 0x00000001;
		}
	}
}

void func_136(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = iLocal_941[iParam0];
	switch (iLocal_933[iParam0])
	{
		case 0x00000000:
			if (!unk_0xEB6A8945D1AC98A1(iVar0))
			{
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
				unk_0xDD353D0E9C789D0E(&uLocal_1072);
				unk_0xB87AD42E3FA06BDE(0x00000000, vLocal_1054[iParam0 /*3*/], 1f, 0x00000000, 0x00000000, 0x000C00AB, 0xBF800000);
				unk_0xE655C47E46F9A7E4(0x00000000, fLocal_1041[iParam0], 0x00000000);
				unk_0x75ABDC5F81978924(uLocal_1072);
				unk_0x78ADC381772E3D54(iVar0, uLocal_1072);
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
				iLocal_933[iParam0] = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
				{
					if (!bLocal_994)
					{
						if (unk_0xD1960163A3042274(iVar0, 0x87B9A382) != 0x00000001 && unk_0xD1960163A3042274(iVar0, 0x0E763797) != 0x00000001)
						{
							if (unk_0x5A91F08DF773C39D(iVar0, vLocal_1054[iParam0 /*3*/], 3f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000))
							{
								func_144(iVar0, &(uLocal_1021[iParam0]), 0x00000001);
							}
							else
							{
								iLocal_933[iParam0] = 0x00000000;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!func_58(&iLocal_1081))
			{
				func_56(&iLocal_1081);
				func_130(&iVar0);
				iLocal_933[iParam0] = 0x00000002;
			}
			else if (func_52(&iLocal_1081) > fLocal_1042[iParam0] || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				func_130(&iVar0);
				iLocal_933[iParam0] = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!func_99(iLocal_938))
			{
				iLocal_987 = 0x00000001;
				if (bLocal_986)
				{
					iLocal_933[iParam0] = 0x00000004;
					break;
				}
				else if (func_52(&iLocal_1081) >= 27f && iLocal_963)
				{
					func_129(iVar0, 15f, 15f, 3f);
				}
				else if (func_52(&iLocal_1081) >= 15f)
				{
					func_142(iVar0);
				}
			}
			else
			{
				iLocal_987 = 0x00000000;
				bLocal_960 = 0x00000001;
				if (!bLocal_980)
				{
					iLocal_933[iParam0] = 0x00000000;
				}
				else
				{
					iLocal_933[iParam0] = 0x00000004;
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0xEB6A8945D1AC98A1(iVar0))
			{
				unk_0x25C5402CC10F76CD(iVar0, 0x00000001);
				unk_0x9DD8618CA5BF832D(iVar0, 0x0000003C, 0x00000001);
			}
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iVar0))
				{
					if (iParam0 == 0x00000000)
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_941[0x00000000], iLocal_941[0x00000001], 0xFFFFFFFF, 0x00000000, 0x00000002);
						if (!unk_0xC42A92762C58E1B9(iVar0, iLocal_1065, 0x00000000))
						{
							unk_0x5B1D360B9C6F0A09(iVar0, iLocal_1065, 0x00007530, 0xFFFFFFFF, 1f, 0x00000001, 0x00000000);
						}
					}
					else if (iParam0 == 0x00000001)
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_941[0x00000001], iLocal_941[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
						if (!unk_0xC42A92762C58E1B9(iVar0, iLocal_1065, 0x00000000))
						{
							unk_0x5B1D360B9C6F0A09(iVar0, iLocal_1065, 0x00007530, 0x00000000, 1f, 0x00000001, 0x00000000);
						}
					}
					else if (iParam0 == 0x00000002)
					{
						if (unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000))
						{
							if (!unk_0xC42A92762C58E1B9(iVar0, iLocal_1066, 0x00000000))
							{
								unk_0x5B1D360B9C6F0A09(iVar0, iLocal_1066, 0x00007530, 0x00000001, 1f, 0x00000001, 0x00000000);
							}
						}
					}
				}
				iLocal_933[iParam0] = 0x00000005;
			}
			else
			{
				iLocal_933[iParam0] = 0x0000000A;
			}
			break;
		
		case 0x00000005:
			if (!unk_0xEB6A8945D1AC98A1(iVar0))
			{
				unk_0x9DD8618CA5BF832D(iVar0, 0x0000003C, 0x00000001);
			}
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iVar0, 0x08F5AF9D) != 0x00000001)
				{
					if (iParam0 == 0x00000000)
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_941[iParam0], iLocal_941[0x00000001], 0xFFFFFFFF, 0x00000800, 0x00000004);
					}
					else if (iParam0 == 0x00000001)
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_941[iParam0], iLocal_941[0x00000000], 0xFFFFFFFF, 0x00000800, 0x00000004);
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				if (!func_140())
				{
					if (iLocal_959)
					{
						if (!unk_0xEB6A8945D1AC98A1(iVar0))
						{
							if (unk_0xD1960163A3042274(iVar0, 0x2E85A751) != 0x00000001)
							{
								if (func_139(iLocal_941[0x00000000]))
								{
									unk_0xBC43ED9FE28DB191(iLocal_941[0x00000000]);
								}
								if (func_139(iLocal_941[0x00000001]))
								{
									unk_0xBC43ED9FE28DB191(iLocal_941[0x00000001]);
								}
								unk_0x6C3AE6E278DB3D0E(iVar0, iLocal_938, 0x00000000, 0x00000010);
							}
						}
					}
				}
				else
				{
					iLocal_933[iParam0] = 0x00000006;
				}
			}
			else
			{
				iLocal_933[iParam0] = 0x0000000A;
			}
			if (bLocal_975)
			{
				if (iLocal_933[iParam0] != 0x0000000A && iLocal_933[iParam0] != 0x0000000B)
				{
					iLocal_933[iParam0] = 0x0000000A;
				}
			}
			break;
		
		case 0x00000006:
			if (!iLocal_959)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
				{
					if (unk_0xA30B8362589C124A(iLocal_1065, 0xFFFFFFFF, 0x00000000) == iVar0)
					{
						if (!unk_0xEB6A8945D1AC98A1(iVar0))
						{
							unk_0x56FDC9ADE35F7DB0(iLocal_1065, 0x00000001, 0x00000001, 0x00000000);
							if (func_138())
							{
								unk_0x1B901F542DF070CF(iVar0, iLocal_1065, "OJASva_101a", 0x000000B5, 0x00000000, 0x00000010, 0xFFFFFFFF, 10f, 0x00000000, 2f);
							}
							else
							{
								unk_0x1B901F542DF070CF(iVar0, iLocal_1065, "OJASva_101", 0x000000B5, 0x00000000, 0x00000000, 0xFFFFFFFF, -1f, 0x00000000, 2f);
							}
						}
					}
					iLocal_933[iParam0] = 0x00000007;
				}
			}
			else
			{
				if (func_139(iLocal_941[0x00000000]))
				{
					unk_0xBC43ED9FE28DB191(iLocal_941[0x00000000]);
				}
				if (func_139(iLocal_941[0x00000001]))
				{
					unk_0xBC43ED9FE28DB191(iLocal_941[0x00000001]);
				}
				iLocal_933[iParam0] = 0x00000007;
			}
			break;
		
		case 0x00000007:
			if (iLocal_959)
			{
				if ((unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000) && unk_0xA30B8362589C124A(iLocal_1065, 0xFFFFFFFF, 0x00000000) == iVar0) && unk_0xA30B8362589C124A(iLocal_1065, 0x00000001, 0x00000000) == iLocal_939)
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (bLocal_974 || (iLocal_988 && !unk_0xDD4B920CF5E7E9EC(iLocal_1065)))
						{
							unk_0xA3BF0AA5A2608191(iVar0);
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
								{
									if (unk_0xD1960163A3042274(iVar0, 0xB41F1A34) != 0x00000001)
									{
										unk_0x60274E99F9B27DEA(iVar0, iLocal_1065, unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000008, 35f, 0x000C0025, -1f, -1f, 0x00000001);
									}
								}
								else if (unk_0xD1960163A3042274(iVar0, 0xB41F1A34) != 0x00000001)
								{
									unk_0x89258193691A7600(iVar0, iLocal_1065, unk_0x16F2683693E537C9(), 0x00000008, 35f, 0x000C0025, -1f, -1f, 0x00000001);
								}
							}
						}
					}
				}
				else if (!unk_0xEB6A8945D1AC98A1(iVar0))
				{
					if (unk_0xD1960163A3042274(iVar0, 0x2E85A751) != 0x00000001)
					{
						unk_0x6C3AE6E278DB3D0E(iVar0, iLocal_938, 0x00000000, 0x00000010);
					}
				}
			}
			else if (bLocal_974 || (iLocal_988 && !unk_0xDD4B920CF5E7E9EC(iLocal_1065)))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
				{
					if (unk_0xA30B8362589C124A(iLocal_1065, 0xFFFFFFFF, 0x00000000) == iVar0)
					{
						if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
						{
							if (unk_0xD1960163A3042274(iVar0, 0xB41F1A34) != 0x00000001)
							{
								unk_0x132B85BCE016BCA0(iVar0, iLocal_1065, vLocal_1057, 0x00000008, 25f, 0x000C00AB, -1f, -1f, 0x00000001);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000008:
			if (bLocal_984)
			{
				unk_0xDD353D0E9C789D0E(&uLocal_1072);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0xDBE4EC9C88839074(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x000003E8, 0x000005DC), 0x00000800, 0x00000004);
				unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), unk_0x09AC81E49EA267F7(0x00003A98, 0x00003E80), 30f, 1f, 0x40000000, 0x00000000);
				unk_0x490C8E35C60821B9(0x00000000, unk_0x16F2683693E537C9(), func_128(), 1f, 0x00000000, 0x3F000000, 0x40800000, 0x00000001, 0x00000000, 0xC6EE6B4C);
				unk_0x75ABDC5F81978924(uLocal_1072);
				if (!unk_0x437347B10A200C4B(iLocal_941[iParam0], 0x00000000))
				{
					unk_0x78ADC381772E3D54(iLocal_941[iParam0], uLocal_1072);
				}
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
			}
			else
			{
				unk_0xDD353D0E9C789D0E(&uLocal_1072);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0x731C6942D48648D6(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x00000BB8, 0x00000DAC), 0x00000001, 0x00000000);
				unk_0x490C8E35C60821B9(0x00000000, unk_0x16F2683693E537C9(), func_128(), 1f, 0x00000000, 0x3F000000, 0x40800000, 0x00000001, 0x00000000, 0xC6EE6B4C);
				unk_0x75ABDC5F81978924(uLocal_1072);
				if (!unk_0x437347B10A200C4B(iLocal_941[iParam0], 0x00000000))
				{
					unk_0x78ADC381772E3D54(iLocal_941[iParam0], uLocal_1072);
				}
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
			}
			iLocal_933[iParam0] = 0x00000009;
			break;
		
		case 0x00000009:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_941[iParam0]))
			{
				if (unk_0xD1960163A3042274(iLocal_941[iParam0], 0x55966344) != 0x00000001)
				{
					unk_0x161356BF7864C47B(iLocal_941[iParam0], iLocal_938, iLocal_938, 1f, 0x00000000, -1f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
				}
			}
			break;
		
		case 0x0000000A:
			if (iLocal_937 == 0x00000004 || iLocal_937 == 0x00000005)
			{
				func_126(iVar0);
			}
			else if (iLocal_937 != 0x00000008)
			{
				func_127(iVar0);
				iLocal_933[iParam0] = 0x0000000B;
			}
			break;
		
		case 0x0000000B:
			if (iParam0 == 0x00000000)
			{
				func_125(iLocal_1065, iVar0, 0x42480000, 0x42480000, 0x41200000);
			}
			func_2(iVar0);
			func_100(iVar0);
			break;
	}
	if (iLocal_931 < 0x0000000A)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1044;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_933[iParam0] != 0x00000008 && iLocal_933[iParam0] != 0x00000009)
			{
				iLocal_933[iParam0] = 0x00000008;
			}
		}
		else if (func_137(iVar0))
		{
			iVar2 = func_36(0x428C0000, 0x00000001);
			if (iVar2 != 0x00000000)
			{
				func_116(unk_0x68F4C0EC296D3901(iVar2, 0x00000001), 0x41700000, 0x428C0000);
			}
			if (!func_115())
			{
				iLocal_959 = 0x00000001;
			}
		}
		else if (!bLocal_962)
		{
			if (func_114(iVar0, fVar1))
			{
				if ((iLocal_933[iParam0] != 0x00000003 && iLocal_933[iParam0] != 0x00000002) && !bLocal_986)
				{
					if (!bLocal_960)
					{
						func_112(&Local_320, 0x00000004);
						iLocal_933[iParam0] = 0x00000003;
					}
					else if (!func_99(iLocal_938))
					{
						iLocal_959 = 0x00000001;
						if (!unk_0xC844350D5D58C99A(iLocal_939))
						{
							iLocal_937 = 0x00000005;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_933[iParam0] != 0x0000000A && iLocal_933[iParam0] != 0x0000000B) && iLocal_933[iParam0] != 0x00000007)
	{
		iLocal_933[iParam0] = 0x0000000A;
	}
	func_111(iVar0, uLocal_951[iParam0]);
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!iLocal_959)
	{
		if (unk_0xC844350D5D58C99A(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0x405E212DDE472467(iParam0, 0x00000000))
				{
					iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
				}
				else
				{
					iVar0 = 0x00000000;
				}
			}
			if (func_118(iParam0, iVar0, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000001) || (unk_0x869EFD0BC0868856(iParam0) && func_29(iParam0, 0x00000001) < 1.5f))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_138()
{
	int iVar0;
	int iVar1[10];
	
	iLocal_1032 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &iVar1);
	iLocal_1032 = iLocal_1032;
	iLocal_1032 = iVar1;
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0xC844350D5D58C99A(iVar1[iVar0]) && !unk_0x437347B10A200C4B(iVar1[iVar0], 0x00000000))
		{
			if (unk_0x3D1053F9EB43B7AD(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
			{
				iLocal_1031++;
			}
		}
		iVar0++;
	}
	if (iLocal_1031 >= 0x00000001)
	{
		iLocal_988 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_139(int iParam0)
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

int func_140()
{
	if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
		{
			if (!iLocal_959)
			{
				if (unk_0xC42A92762C58E1B9(iLocal_939, iLocal_1065, 0x00000000) && func_141())
				{
					return 0x00000001;
				}
			}
			else if (unk_0xC42A92762C58E1B9(iLocal_939, iLocal_1065, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_141()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000001;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iVar0]))
		{
			if (!unk_0x405E212DDE472467(iLocal_940[iVar0], 0x00000000))
			{
				iVar1 = 0x00000000;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(int iParam0)
{
	switch (iLocal_1028)
	{
		case 0x00000000:
			if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
			{
				if (unk_0xD1960163A3042274(iParam0, 0x6134071B) != 0x00000001)
				{
					unk_0x9BE7E7B6B488CC55(iParam0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
				}
				func_34(iParam0, 0x00000003, "OJAvaGUARD");
				func_6(&uLocal_1112, "OJASAUD", "OJASva_FWARN", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				iLocal_963 = 0x00000001;
				iLocal_1028 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			func_143(iParam0);
			break;
	}
}

void func_143(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (func_29(iParam0, 0x00000001) < 5f)
		{
			if (unk_0xD1960163A3042274(iParam0, 0xB80BFB24) != 0x00000001 && unk_0xD1960163A3042274(iParam0, 0x6134071B) != 0x00000001)
			{
				unk_0x9BE7E7B6B488CC55(iParam0, iLocal_938, 0xFFFFFFFF, 0x00000000);
			}
		}
		else if (unk_0xD1960163A3042274(iParam0, 0xB80BFB24) != 0x00000001)
		{
			if (iParam0 == iLocal_943)
			{
				unk_0x161356BF7864C47B(iParam0, iLocal_938, iLocal_938, 1f, 0x00000000, -1f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
			}
			else if (unk_0xD1960163A3042274(iParam0, 0x6134071B) != 0x00000001)
			{
				unk_0x9BE7E7B6B488CC55(iParam0, iLocal_938, 0xFFFFFFFF, 0x00000000);
			}
		}
	}
}

void func_144(int iParam0, var uParam1, bool bParam2)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (bParam2)
		{
			func_145(iParam0, uParam1);
		}
	}
}

void func_145(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_146(0x00000000, 0x00000003, *uParam1);
	if (iVar0 == 0x00000000)
	{
		unk_0xC6EB89C59F2AF6B8(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, 0xFFFFFFFF, 0x00000001, unk_0x79833B02DBD2A244(0f, 1f), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iVar0 == 0x00000001)
	{
		unk_0xC6EB89C59F2AF6B8(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, 0xFFFFFFFF, 0x00000001, unk_0x79833B02DBD2A244(0f, 1f), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iVar0 == 0x00000002)
	{
		unk_0xC6EB89C59F2AF6B8(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, 0xFFFFFFFF, 0x00000001, unk_0x79833B02DBD2A244(0f, 1f), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iVar0 == 0x00000003)
	{
		unk_0xC6EB89C59F2AF6B8(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, 0xFFFFFFFF, 0x00000001, unk_0x79833B02DBD2A244(0f, 1f), 0x00000001, 0x00000000, 0x00000000);
	}
	*uParam1 = iVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (iParam0 == iParam1)
	{
		return 0x00000000;
	}
	iVar0 = unk_0x09AC81E49EA267F7(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 0x00000032)
	{
		iVar1++;
		iVar0 = unk_0x09AC81E49EA267F7(iParam0, iParam1);
	}
	return iVar0;
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (!unk_0xC844350D5D58C99A(iLocal_940[iParam0]))
	{
		return;
	}
	switch (iLocal_936[iParam0])
	{
		case 0x00000000:
			if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
			{
				if (!unk_0x405E212DDE472467(iLocal_939, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iParam0]))
					{
						if (iParam0 == 0x00000000)
						{
							unk_0xA8CC11FF8D2962D4(iLocal_940[iParam0], iLocal_939, 1.5f, 0f, 0f, 1f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
						}
						else if (iParam0 == 0x00000001)
						{
							if (unk_0xDF1306B443CD3D15(iLocal_1066, 0x00000000))
							{
								unk_0xDD353D0E9C789D0E(&uVar2);
								unk_0xB87AD42E3FA06BDE(0x00000000, -1222.992f, -191.0932f, 38.17538f, 1f, 0x00000000, 0x00000000, 0x000C00AB, 0xBF800000);
								unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_GUARD_STAND", 0x00000000, 0x00000000);
								unk_0x5B1D360B9C6F0A09(0x00000000, iLocal_1066, 0x00007530, 0x00000002, 1f, 0x00000001, 0x00000000);
								unk_0x75ABDC5F81978924(uVar2);
								unk_0x78ADC381772E3D54(iLocal_940[iParam0], uVar2);
								unk_0xF82EA857DA10E0CD(&uVar2);
							}
						}
						iLocal_936[iParam0] = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam0 == 0x00000000)
			{
				iVar0 = iLocal_1065;
				iVar1 = 0x00000002;
			}
			else if (iParam0 == 0x00000001)
			{
				iVar0 = iLocal_1066;
				iVar1 = 0x00000002;
			}
			if (!unk_0x437347B10A200C4B(iLocal_940[iParam0], 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(iLocal_940[iParam0], 0x00000000))
					{
						if (!unk_0xC42A92762C58E1B9(iLocal_940[iParam0], iVar0, 0x00000000))
						{
							if (unk_0x405E212DDE472467(iLocal_939, 0x00000000))
							{
								if (unk_0xD1960163A3042274(iLocal_940[iParam0], 0x950B6492) != 0x00000001)
								{
									unk_0x5B1D360B9C6F0A09(iLocal_940[iParam0], iVar0, 0x00007530, iVar1, 1f, 0x00000001, 0x00000000);
								}
							}
						}
						else
						{
							iLocal_936[iParam0] = 0x00000002;
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam0 == 0x00000000)
			{
				iVar0 = iLocal_1065;
			}
			else if (iParam0 == 0x00000001)
			{
				iVar0 = iLocal_1066;
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0x437347B10A200C4B(iLocal_940[iParam0], 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(iLocal_940[iParam0], iVar0, 0x00000000) && unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
					{
						if (iLocal_959)
						{
							if (!bLocal_989)
							{
								if (unk_0xD1960163A3042274(iLocal_940[iParam0], 0x2E85A751) != 0x00000001)
								{
									if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
									{
										if (unk_0x9C66D99E63E8E24C(iVar0) < 5f)
										{
											iLocal_936[iParam0] = 0x00000005;
										}
									}
									unk_0x6C3AE6E278DB3D0E(iLocal_940[iParam0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
								}
							}
							else if (unk_0xD1960163A3042274(iLocal_940[iParam0], 0x2E85A751) != 0x00000001)
							{
								unk_0x6C3AE6E278DB3D0E(iLocal_940[iParam0], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							}
						}
					}
					else if (!iLocal_983)
					{
						iLocal_936[iParam0] = 0x00000005;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iParam0]))
			{
				if (unk_0xACCBB8E1BDF4D6BE(iLocal_940[iParam0]))
				{
					unk_0x2ECF845953E95D1B(iLocal_940[iParam0]);
				}
			}
			if (bLocal_984)
			{
				unk_0xDD353D0E9C789D0E(&uLocal_1072);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0xDBE4EC9C88839074(0x00000000, func_128(), unk_0x09AC81E49EA267F7(0x000007D0, 0x000009C4), 0x00000800, 0x00000004);
				unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), unk_0x09AC81E49EA267F7(0x00003A98, 0x00003E80), 30f, 1f, 0x40000000, 0x00000000);
				unk_0x490C8E35C60821B9(0x00000000, unk_0x16F2683693E537C9(), func_128(), 1f, 0x00000000, 0x3F000000, 0x40800000, 0x00000001, 0x00000000, 0xC6EE6B4C);
				unk_0x75ABDC5F81978924(uLocal_1072);
				unk_0x78ADC381772E3D54(iLocal_940[iParam0], uLocal_1072);
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iParam0]))
			{
				unk_0xED253B8DDB3FFB77(iLocal_940[iParam0], vLocal_1062, 15f, 0x00000000, 0x00000000);
				unk_0x3CC33E4E9CE523F4(iLocal_940[iParam0], 0x00000001);
				unk_0xAFF39FB306F8E232(iLocal_940[iParam0], 0x00000000, 0x00000001);
				unk_0xCAF7AE54F764D5AA(iLocal_940[iParam0], 2f);
				if (!iLocal_956 && !unk_0x405E212DDE472467(iLocal_940[iParam0], 0x00000000))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_1072);
					if (unk_0xEB6A8945D1AC98A1(iLocal_939))
					{
						unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 0x000004E2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x731C6942D48648D6(0x00000000, func_128(), 0x00000BB8, 0x00000000, 0x00000001);
						unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
					}
					else
					{
						unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 0x000002BC, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xA8CC11FF8D2962D4(0x00000000, iLocal_939, 1.5f, 0f, 0f, 2f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
					}
					unk_0x75ABDC5F81978924(uLocal_1072);
					iLocal_956 = 0x00000001;
				}
				else
				{
					if (unk_0xC844350D5D58C99A(iLocal_1065) && unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
					{
						vVar4 = { unk_0xBF584557291FDD31(iLocal_1065, unk_0xF653B9B22DA806A9(iLocal_1065, "wheel_lr")) };
						vVar5 = { unk_0x68F4C0EC296D3901(iLocal_1065, 0x00000001) };
						vVar5 = { vVar4 - vVar5 };
						unk_0x5BCC146C60688877(iLocal_940[iParam0], iLocal_1065, vVar5, 1.5f, 0x00000000);
					}
					unk_0xDD353D0E9C789D0E(&uLocal_1072);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
					if (unk_0xEB6A8945D1AC98A1(iLocal_939) && !func_50(func_148(), vVar4, 0x00000000))
					{
						unk_0x4AA5B7135D59B3E5(0x00000000, vVar4, func_128(), 2f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C);
						unk_0xA1B2E0ACC3ED5113(0x00000000, vVar4, 0xFFFFFFFF, 0x00000000, 0.25f, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					}
					else
					{
						unk_0x731C6942D48648D6(0x00000000, func_128(), 0x000005DC, 0x00000001, 0x00000000);
						if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
						{
							unk_0xA8CC11FF8D2962D4(0x00000000, iLocal_939, 0f, -1.5f, 0f, 2f, 0xFFFFFFFF, 0x3DCCCCCD, 0x00000001);
						}
					}
					unk_0x75ABDC5F81978924(uLocal_1072);
				}
				if (!unk_0x437347B10A200C4B(iLocal_940[iParam0], 0x00000000))
				{
					unk_0x78ADC381772E3D54(iLocal_940[iParam0], uLocal_1072);
				}
				unk_0xF82EA857DA10E0CD(&uLocal_1072);
			}
			iLocal_936[iParam0] = 0x00000004;
			break;
		
		case 0x00000004:
			if (!unk_0x437347B10A200C4B(iLocal_940[iParam0], 0x00000000))
			{
				if (unk_0xB4ECF989E2C1DAC8(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 0x00000003))
				{
					fVar3 = unk_0x8CA9406E01C7EE58(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						unk_0x8352CA08CF578D18(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						unk_0x8352CA08CF578D18(iLocal_940[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 0x00000005:
			if (iParam0 == 0x00000000)
			{
				iVar0 = iLocal_1065;
			}
			else if (iParam0 == 0x00000001)
			{
				iVar0 = iLocal_1066;
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iParam0]))
				{
					if (unk_0x405E212DDE472467(iLocal_939, 0x00000000))
					{
						unk_0x6C3AE6E278DB3D0E(iLocal_940[iParam0], iLocal_938, 0x00000000, 0x00000010);
					}
					else
					{
						unk_0x161356BF7864C47B(iLocal_940[iParam0], iLocal_939, unk_0x16F2683693E537C9(), 3f, 0x00000001, 0.005f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
					}
				}
				iLocal_936[iParam0] = 0x00000006;
			}
			else if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(iVar0) < 5f)
				{
					func_127(iLocal_940[iParam0]);
					iLocal_936[iParam0] = 0x00000006;
				}
				else if (unk_0xD1960163A3042274(iLocal_940[iParam0], 0x2E85A751) != 0x00000001)
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_940[iParam0], iLocal_938, 0x00000000, 0x00000010);
				}
			}
			else
			{
				func_127(iLocal_940[iParam0]);
				iLocal_936[iParam0] = 0x00000006;
			}
			break;
		
		case 0x00000006:
			func_2(iLocal_940[iParam0]);
			func_100(iLocal_940[iParam0]);
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
			if (iLocal_936[iParam0] != 0x00000003 && iLocal_936[iParam0] != 0x00000004)
			{
				iLocal_936[iParam0] = 0x00000003;
			}
		}
		else if (func_137(iLocal_940[iParam0]))
		{
			iLocal_959 = 0x00000001;
		}
	}
	else if (iLocal_936[iParam0] < 0x00000005)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iParam0]))
		{
			if (unk_0xACCBB8E1BDF4D6BE(iLocal_940[iParam0]))
			{
				unk_0x2ECF845953E95D1B(iLocal_940[iParam0]);
			}
			unk_0xC62B2934118B4E1A(iLocal_940[iParam0]);
			unk_0x3CC33E4E9CE523F4(iLocal_940[iParam0], 0x00000002);
			unk_0xAFF39FB306F8E232(iLocal_940[iParam0], 0x0000000D, 0x00000001);
		}
		iLocal_936[iParam0] = 0x00000005;
	}
}

Vector3 func_148()
{
	vector3 vVar0;
	
	return vVar0;
}

int func_149(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

void func_150()
{
	var uVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iLocal_939))
	{
		vLocal_1062 = { unk_0x68F4C0EC296D3901(iLocal_939, 0x00000000) };
	}
	switch (iLocal_935)
	{
		case 0x00000000:
			if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000) && !unk_0x437347B10A200C4B(iLocal_941[0x00000000], 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(iLocal_939, iLocal_1065, 0x00000000))
					{
						if (unk_0xD1960163A3042274(iLocal_939, 0x950B6492) != 0x00000001)
						{
							if (!iLocal_959 && !iLocal_983)
							{
								unk_0x5B1D360B9C6F0A09(iLocal_939, iLocal_1065, 0x00007530, 0x00000001, 1f, 0x00000001, 0x00000000);
							}
							else
							{
								unk_0x5B1D360B9C6F0A09(iLocal_939, iLocal_1065, 0x00007530, 0x00000001, 2f, 0x00000001, 0x00000000);
							}
							if (!func_58(&iLocal_1090))
							{
								func_55(&iLocal_1090);
							}
							else
							{
								func_56(&iLocal_1090);
							}
						}
						if (!iLocal_985)
						{
							if (func_58(&iLocal_1090))
							{
								if (func_52(&iLocal_1090) > 3.5f)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
									{
										func_35(&uLocal_1112, 0x00000004, iLocal_939, "OJAva_TARGET", 0x00000000, 0x00000001);
										if (func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
										{
											iLocal_985 = 0x00000001;
										}
									}
								}
							}
						}
						if (func_153(iLocal_939))
						{
							func_3();
							iLocal_935 = 0x00000004;
						}
					}
					else
					{
						bLocal_962 = 0x00000001;
						iLocal_935 = 0x00000001;
					}
				}
				else
				{
					iLocal_935 = 0x00000004;
				}
			}
			break;
		
		case 0x00000001:
			if (!iLocal_985)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
				{
					func_35(&uLocal_1112, 0x00000004, iLocal_939, "OJAva_TARGET", 0x00000000, 0x00000001);
					if (func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						iLocal_985 = 0x00000001;
					}
				}
			}
			if (!iLocal_1004)
			{
				if (func_152())
				{
					if (func_30(iLocal_939, unk_0x16F2683693E537C9(), 0x00000001) <= 5f && !func_28())
					{
						if (func_36(25f, 0x00000001) == 0x00000000)
						{
							if (func_151())
							{
								iLocal_1004 = 0x00000001;
							}
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_939, iLocal_1065, 0x00000000))
				{
					if (unk_0xD1960163A3042274(iLocal_939, 0xCE98FBB3) != 0x00000001)
					{
						unk_0x75CDA8644CD3B5F5(iLocal_939, 0x00000000, 0x00000100);
					}
				}
				else if (!bLocal_989)
				{
					unk_0xCAF7AE54F764D5AA(iLocal_939, 2f);
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 0x000003E8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E(0x00000000, iLocal_938, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(uVar0);
					if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
					{
						unk_0x78ADC381772E3D54(iLocal_939, uVar0);
					}
					unk_0xF82EA857DA10E0CD(&uVar0);
					bLocal_989 = 0x00000001;
				}
				else if (unk_0xD1960163A3042274(iLocal_939, 0x55966344) != 0x00000001)
				{
					unk_0xF3268524E9BE6D6E(iLocal_939, iLocal_938, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				if (!iLocal_1004)
				{
					if (!func_28() && !unk_0xD17F06053799A7CA())
					{
						func_6(&uLocal_1112, "OJASAUD", "OJASva_TARG2", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
						iLocal_1004 = 0x00000001;
					}
				}
			}
			break;
	}
	if (!iLocal_959)
	{
		if (iLocal_983)
		{
		}
		else if (func_137(iLocal_939) || iLocal_1013)
		{
			iVar1 = func_36(0x428C0000, 0x00000001);
			if (iVar1 != 0x00000000)
			{
				func_116(unk_0x68F4C0EC296D3901(iVar1, 0x00000001), 0x41700000, 0x428C0000);
			}
			if (!func_115())
			{
				iLocal_959 = 0x00000001;
			}
		}
	}
}

int func_151()
{
	switch (iLocal_1034)
	{
		case 0x00000000:
			if (!func_28())
			{
				func_33(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 0x00000008, 0x00000000, 0x00000000);
				func_56(&iLocal_1090);
				iLocal_1034++;
			}
			break;
		
		case 0x00000001:
			if (!func_28() && func_52(&iLocal_1090) > 7f)
			{
				func_33(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 0x00000008, 0x00000000, 0x00000000);
				func_56(&iLocal_1090);
				iLocal_1034++;
			}
			break;
		
		case 0x00000002:
			if (!func_28() && func_52(&iLocal_1090) > 8f)
			{
				func_33(&uLocal_1112, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 0x00000008, 0x00000000, 0x00000000);
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_152()
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(iLocal_1065, 0xFFFFFFFF, 0x00000000);
		if (iVar0 == 0x00000000 || (iVar0 != 0x00000000 && unk_0xEB6A8945D1AC98A1(iVar0)))
		{
			iVar0 = unk_0xA30B8362589C124A(iLocal_1065, 0x00000000, 0x00000000);
			if (iVar0 == 0x00000000 || (iVar0 != 0x00000000 && unk_0xEB6A8945D1AC98A1(iVar0)))
			{
				iVar0 = unk_0xA30B8362589C124A(iLocal_1065, 0x00000002, 0x00000000);
				if (iVar0 == 0x00000000 || (iVar0 != 0x00000000 && unk_0xEB6A8945D1AC98A1(iVar0)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_153(int iParam0)
{
	var uVar0;
	
	if ((iLocal_959 || iLocal_983) || bLocal_984)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (func_28())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!unk_0x405E212DDE472467(iParam0, 0x00000000))
			{
				if (!bLocal_989)
				{
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 0x000003E8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E(0x00000000, iLocal_938, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(uVar0);
					if (!unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
					{
						unk_0x78ADC381772E3D54(iLocal_939, uVar0);
					}
					unk_0xF82EA857DA10E0CD(&uVar0);
					bLocal_989 = 0x00000001;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_154()
{
	if (!iLocal_990)
	{
		if (iLocal_931 > 0x0000000F)
		{
			unk_0xC92DB9682A650680("ASS1_ALERT");
			iLocal_990 = 0x00000001;
		}
	}
	if (!iLocal_991)
	{
		if (iLocal_959 && !func_28())
		{
			func_453();
			iLocal_991 = 0x00000001;
			if (!iLocal_990)
			{
				unk_0xC92DB9682A650680("ASS1_ALERT");
				iLocal_990 = 0x00000001;
			}
		}
	}
	func_452();
	switch (iLocal_931)
	{
		case 0x00000003:
			if (func_525())
			{
				iLocal_931 = 0x00000004;
				break;
			}
			func_451();
			func_449();
			break;
		
		case 0x00000004:
			if (func_525())
			{
				if (func_524())
				{
					iLocal_978 = 0x00000001;
				}
				bLocal_967 = 0x00000001;
			}
			func_448();
			func_447();
			func_446();
			func_445(0x00000001);
			func_444();
			func_533(&Local_320, 0x00000002);
			iLocal_931 = 0x00000005;
			break;
		
		case 0x00000005:
			if (func_443())
			{
				iLocal_931 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			func_442();
			func_441();
			if (bLocal_967)
			{
				if (Global_1B416.f_4DF6.f_5 != 0f)
				{
					func_57(&iLocal_1084, Global_1B416.f_4DF6.f_5);
				}
				iLocal_1029 = func_519();
				if (Global_16AF9)
				{
					if (iLocal_1029 <= 0x00000002)
					{
						iLocal_1029++;
					}
				}
				if (iLocal_1029 == 0x00000000)
				{
					func_440();
				}
				else if (iLocal_1029 == 0x00000001)
				{
					func_439();
				}
				else if (iLocal_1029 == 0x00000002)
				{
					func_435();
				}
			}
			else
			{
				if (!func_58(&iLocal_1084))
				{
					func_55(&iLocal_1084);
					Global_1B416.f_4DF6.f_5 = 0f;
				}
				iLocal_931 = 0x00000007;
			}
			break;
		
		case 0x00000007:
			func_429();
			func_414();
			break;
		
		case 0x00000008:
			func_380();
			break;
		
		case 0x00000009:
			func_429();
			func_379();
			func_288();
			break;
		
		case 0x0000000A:
			func_379();
			func_284();
			break;
		
		case 0x0000000B:
			func_270();
			func_269();
			break;
		
		case 0x0000000C:
			func_268();
			func_269();
			break;
		
		case 0x0000000D:
			func_264();
			func_269();
			break;
		
		case 0x0000000F:
			func_262();
			break;
		
		case 0x00000010:
			func_259();
			break;
		
		case 0x00000011:
			func_253();
			break;
		
		case 0x00000012:
			func_155();
			break;
	}
}

void func_155()
{
	unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
	func_156();
}

void func_156()
{
	func_252();
	switch (iLocal_1035)
	{
		case 0x00000000:
			if (!iLocal_331)
			{
				if (iLocal_932 == 0x00000001)
				{
					bLocal_329 = 0x00000001;
					func_251();
				}
				Global_1B416.f_4DF6.f_5 = func_52(&iLocal_1084);
				fLocal_326 = Global_1B416.f_4DF6.f_5;
				func_244();
				iLocal_331 = 0x00000001;
				iLocal_1035 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_1012)
			{
				unk_0x3D0B5872F36FB05C("FRANKLIN_BIG_01");
				iLocal_1012 = 0x00000001;
			}
			if (func_240(&uLocal_342, 0x00000001, 0x00000000) && unk_0x96871D785000ACAF())
			{
				func_239(&uLocal_1289, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				func_238(&uLocal_1289, "ASS_VA_CONT", 0x00000002, 0x000000D7, 0x00000001, 0x00000001, 0x00000000);
				func_238(&uLocal_1289, "ES_XPAND", 0x00000002, 0x000000D8, 0x00000001, 0x00000001, 0x00000000);
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_1035 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (func_211(&uLocal_342, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
			{
				bLocal_1010 = 0x00000001;
			}
			if (!bLocal_1010)
			{
				func_203(&uLocal_1289, 0x43480000, 0x00000001, 0x00000000, 0x00000001, 0x3F800000);
			}
			if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000D7) || unk_0xD245978525608929(0x00000002, 0x000000C8))
			{
				if (!bLocal_1010)
				{
					bLocal_1010 = 0x00000001;
					func_202(&uLocal_342);
				}
			}
			if (bLocal_1010)
			{
				if (func_211(&uLocal_342, 0x00000000, 0x3F800000, 0x00000000, 0x00000000, 0x00000000))
				{
					func_200(&uLocal_342);
					Global_1B416.f_4DF6++;
					func_199();
					func_161(Local_55);
					func_159(0x00000000, 0x00000000);
					func_157();
					func_526();
				}
			}
			break;
	}
}

void func_157()
{
	func_158();
}

int func_158()
{
	if (func_46(0x00000000))
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

void func_159(bool bParam0, int iParam1)
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
		if ((func_46(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_160(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_46(0x00000000))
	{
		iVar0 = func_45();
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

int func_160(int iParam0)
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

void func_161(struct<25> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	float fVar0;
	
	fVar0 = (1f + func_198());
	fVar0 = (fVar0 * Param0.f_17);
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00400000))
	{
		fVar0 = (fVar0 + Param0.f_18);
	}
	func_162(func_18(), 0x00000061, SYSTEM::ROUND(fVar0), 0x00000000, 0x00000000);
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_197(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_197(iParam0) == 0x00000004)
	{
		return;
	}
	func_163(func_197(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_196();
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
					func_195(0x00000063, 0x00000001);
					func_194(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_194(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_194(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_179(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_174(0x00000005))
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
							func_194(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_194(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_194(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_174(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_194(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_194(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_194(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_194(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_194(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_194(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_194(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_194(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_194(joaat("sp2_money_spent_property"), iParam3);
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
									func_194(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_194(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_194(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_194(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_194(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_194(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_174(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_194(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_194(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_194(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_194(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_194(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_194(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_173(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_195(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_195(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_195(0x00000060, iParam3);
					break;
			}
			func_195(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_166(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_166(iVar1);
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
					func_194(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_194(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_194(joaat("sp2_total_cash_earned"), iParam3);
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
	func_165(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_164(0x00000000);
	}
	return 0x00000001;
}

void func_164(bool bParam0)
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

void func_165(int iParam0)
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

void func_166(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_172(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_172(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_172(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_172(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_169(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_169(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_169(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_169(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_169(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_169(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_168() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_168() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_167(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_167(int iParam0)
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

int func_168()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_170(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_170(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_171();
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

int func_171()
{
	return Global_1407E9;
}

int func_172(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_171();
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

void func_173(int iParam0)
{
	func_195(0x0000005D, iParam0);
	func_195(0x0000001D, iParam0);
	func_195(0x0000001E, iParam0);
}

bool func_174(int iParam0)
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
		return func_176(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_176(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_176(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_176(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_175(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_175(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_175(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_175(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_175(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_175(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_168() /*10930*/].f_181E.f_A, iParam0);
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_170(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_171();
	}
	iVar1 = func_178(iParam0, iParam1);
	uVar2 = func_177(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_177(int iParam0)
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

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_171();
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

int func_179(bool bParam0)
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
		func_193(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_180(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_180(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_181(iParam0, iParam1);
}

int func_181(int iParam0, int iParam1)
{
	if (func_24(0x0000000E) && !func_192(iParam0))
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
	if (func_191(&Global_4127F1))
	{
		if (func_189(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_182(&Global_4127F1, iParam0))
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

int func_182(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_24(0x0000000E) && !func_192(iParam1))
	{
		return 0x00000000;
	}
	if (func_189(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_188(uParam0) < 0f)
	{
		func_187(uParam0, 0x00000000);
	}
	func_185(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_183(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_183(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_24(0x0000000E) && !func_192(iParam1))
	{
		return 0x00000000;
	}
	if (func_189(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_188(uParam0) < 0f)
	{
		func_187(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_184(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_184(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_185(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_186(uParam0, iVar0);
		iVar0++;
	}
	func_187(uParam0, (Global_4127F0 - 0.5f));
}

void func_186(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_187(var uParam0, float fParam1)
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

float func_188(var uParam0)
{
	return uParam0->f_50;
}

bool func_189(var uParam0, int iParam1)
{
	return func_190(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_190(var uParam0, int iParam1)
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

bool func_191(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_192(int iParam0)
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

int func_193(int iParam0, int iParam1)
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

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_195(int iParam0, int iParam1)
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

void func_196()
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

int func_197(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

float func_198()
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00002000))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00004000))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00008000))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00010000))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00020000))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00040000))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00080000))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00100000))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_124(Global_1B416.f_4DF6.f_1, 0x00200000))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_199()
{
	func_533(&(Global_1B416.f_4DF6.f_1), 0x00000800);
}

void func_200(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_46(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
			}
		}
	}
	func_201(0x00000000);
}

void func_201(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_202(var uParam0)
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0x00000000;
		uParam0->f_22E = (uParam0->f_23C - 0x00000001);
	}
}

void func_203(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_210(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_209(uParam0->f_1, 0x00000100) || (func_209(uParam0->f_1, 0x00002000) && unk_0xB8E3620B82AD47D7(0x00000002)))
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
			unk_0x1200CC973A2399C8(func_209(uParam0->f_1, 0x00001000));
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
							func_208(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_207(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_209(uParam0->f_1, 0x00001000))
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
		fVar8 = func_206(bParam4, func_206(func_209(uParam0->f_1, 0x00000020), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_205(&(uParam0->f_1), 0x00000100);
		func_204(&(uParam0->f_1), 0x00000080);
	}
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_204(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_205(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_206(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_207(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_208(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_209(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_210(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_205(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_211(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
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
	func_233(0x00000000);
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
		switch (func_21(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4())))
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
		uParam0->f_230 = (uParam0->f_230 + func_232(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_232(25f)));
		if (uParam0->f_38 > 0x00000000)
		{
			uParam0->f_230 = (uParam0->f_230 + func_232((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_232(30f) - func_232(2f)));
		}
	}
	bVar0 = 0x00000001;
	while (bVar0)
	{
		func_201(0x00000001);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_214(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_213(uParam0->f_1E, 0f, 1f);
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
		uParam0->f_223 = func_213(uParam0->f_223, 0f, 1f);
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
		uParam0->f_224 = func_213(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (unk_0xB8E3620B82AD47D7(0x00000002))
			{
				if (unk_0x83D8570832F172A7(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_212(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
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
				func_212(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0x00000000));
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
				uParam0->f_22F = func_213((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_213((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_213((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_213((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
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
				func_201(0x00000000);
			}
			return !bVar0;
		}
	}
	func_201(0x00000000);
	return 0x00000001;
}

void func_212(var uParam0, bool bParam1)
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
	func_208(unk_0xF59058FCB716F903(0x00000002, 0x000000D7, 0x00000001));
	func_207("ES_HELP");
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
		func_208(unk_0xF59058FCB716F903(0x00000002, 0x000000D8, 0x00000001));
		func_207("ES_XPAND");
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

float func_213(float fParam0, float fParam1, float fParam2)
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

void func_214(var uParam0, float fParam1, bool bParam2)
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
	fVar1 = (func_231() * 0.25f);
	if (unk_0x83D8570832F172A7(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_207(&(uParam0->f_5));
				if (uParam0->f_22C == 0x00000004)
				{
					func_230(&(uParam0->f_D));
				}
				else
				{
					func_207(&(uParam0->f_D));
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
		func_229();
		unk_0x6567AE843FADBA94(uParam0->f_1, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_232((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
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
	fVar1 = (0.3f * func_231());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 0x00000004)
	{
		fVar7 = func_228(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x33D480CCE15C991A(0x00000000) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_228(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_231()) / 2.5f);
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
						func_94((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
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
	fVar1 = (fVar1 - func_232(6f));
	fVar1 = (fVar1 + (func_232(30f) - func_232((2f * 2f))));
	fVar11 = (fVar2 - func_232((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_213((fVar11 / (0.6f * func_232(25f))), 0f, 1f);
		func_229();
		unk_0xC1032CAC14DE468A(0.5f, (fVar1 - (func_232((2f - 0.5f)) - 0.001388889f)), fVar6, func_227(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_232((2f * 0.3f)));
	if (uParam0->f_38 > 0x00000000)
	{
		fVar1 = (fVar1 + func_232((25f * 0.2f)));
	}
	iVar17 = 0x00000000;
	iVar17 = 0x00000000;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_213((fVar11 / (0.8f * func_232(25f))), 0f, 1f);
			func_224(uParam0, iVar17, (fVar1 + func_232(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_232(25f));
		if (uParam0->f_22C == 0x00000004)
		{
			if (iVar17 == (uParam0->f_240 - 0x00000001))
			{
				fVar1 = (fVar1 + func_232((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_232(2f));
					fVar12 = func_213((fVar11 / (0.6f * func_232(25f))), 0f, 1f);
					func_229();
					unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_232((2f * 0.5f))), fVar6, func_227(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
					fVar1 = (fVar1 + func_232((2f * 0.3f)));
					if (uParam0->f_38 > 0x00000000)
					{
						fVar1 = (fVar1 + func_232((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_232((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_232(2f));
			fVar12 = func_213((fVar11 / (0.6f * func_232(25f))), 0f, 1f);
			func_229();
			unk_0xC1032CAC14DE468A(0.5f, (fVar1 + func_232((2f * 0.5f))), fVar6, func_227(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0x00000000);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_232((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_231())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_213((fVar11 / (0.8f * func_232(25f))), 0f, 1f);
			unk_0x7178F32F6742C936(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_217(0x00000007, 0x00000000, 0x00000001, &fVar18, &fVar19, 0x00000000);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xB3260A60545D3F11() == 0x00000000)
			{
				fVar20 = (fVar9 + ((0.119f / func_231()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_231()) / 2.5f));
				if (uParam0->f_22C == 0x00000001)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_231()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_231()) / 2.5f));
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
			func_216(&(uParam0->f_226), fVar20, (fVar1 + func_232((2f * 2f))), 0x00000000, 0x00000000, 0x00000000);
			unk_0xF1F881BAAAFB43B1(fVar20, fVar21);
			unk_0xEEF67251E263A87F(0x00000002);
			unk_0xD3539A877EC25E86(1f, 0.4f);
			unk_0xAAE406A7DA443B93(0x00000000);
			func_229();
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
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000001:
					unk_0x070005E852D4C0E9("FO_TWO_NUM");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0x6D99DF8263D35CE5(uParam0->f_22B);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0x070005E852D4C0E9("MTPHPER_XPNO");
					unk_0x6D99DF8263D35CE5(uParam0->f_22A);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0x070005E852D4C0E9("ESDOLLA");
					unk_0xCBD015EC7E4226BC(uParam0->f_22A, 0x00000001);
					unk_0xE0026608C37C7C41(fVar20, (fVar1 + func_232((2f * 2f))), 0x00000000);
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
				fVar32 = ((fVar21 + func_215(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_232(10f)) + fVar29);
				if (uParam0->f_22C == 0xFFFFFFFF)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x539E86AE011A8B38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0x00000000);
			}
			fVar1 = (fVar1 + (func_232(30f) - 2f));
		}
	}
}

float func_215(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_216(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0xAAE406A7DA443B93(iParam3);
	unk_0x7BBAC160090910C3(iParam5);
	func_229();
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

int func_217(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_223(iParam0), 64);
	StringCopy(&cVar1, func_220(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_219())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_219())
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
		vVar7.x = (vVar7.x * (func_218(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_218(iParam0) / fVar4));
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

float func_218(int iParam0)
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

int func_219()
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

var func_220(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_222(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_221(&uVar1);
			}
		}
		else
		{
			return func_221(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_221(var uParam0)
{
	return uParam0;
}

struct<13> func_222(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_223(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_222(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_221(&uVar0);
		}
		else
		{
			return func_221(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_224(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
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
	unk_0xD3539A877EC25E86(1f, func_226(14f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7BBAC160090910C3(0x00000000);
	func_229();
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
			func_217(0x00000007, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_220(0x00000007, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_232(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000002:
			func_217(0x00000005, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_220(0x00000005, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_232(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 0x00000003:
			func_217(0x00000006, 0x00000000, 0x00000001, &fVar5, &fVar6, 0x00000000);
			unk_0x539E86AE011A8B38("CommonMenu", func_220(0x00000006, 0x00000000), (fParam4 - 0.006f), ((fParam2 + func_232(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 0x000000FF, 0x000000FF, 0x000000FF, iParam5, 0x00000000);
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
	unk_0xD3539A877EC25E86(1f, func_226(14f));
	if (uParam0->f_39[iParam1] == 0x00000005 || uParam0->f_39[iParam1] == 0x00000004)
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xF1F881BAAAFB43B1(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iParam5);
	func_225(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_225(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
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
	func_229();
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
			unk_0xD3539A877EC25E86(1f, func_226(18f));
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
			unk_0xD3539A877EC25E86(1f, func_226(14f));
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
			unk_0xD3539A877EC25E86(1f, func_226(18f));
		
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
			unk_0xD3539A877EC25E86(1f, func_226(14f));
		}
		else
		{
			unk_0xE0026608C37C7C41(fParam2, fParam3, 0x00000000);
		}
	}
}

float func_226(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_227(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

float func_228(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return (unk_0x79E367314AFBB5CA(0x00000001) / 2f);
}

void func_229()
{
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		unk_0xD9ACBBA59FD5A09E(0x00000007);
	}
	unk_0x5DD950F92F816F03(0x00000000);
}

void func_230(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

float func_231()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x0EFF6B4415DAF4A1())
	{
	}
	return fVar0;
}

float func_232(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_233(int iParam0)
{
	if (func_237())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_80(0x00000000))
		{
			func_234(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_234(int iParam0)
{
	if (func_237())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_236())
		{
			func_235(0x00000001, 0x00000001);
		}
		else
		{
			func_235(0x00000000, 0x00000000);
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
	if (!func_15())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_235(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_80(0x00000000))
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

bool func_236()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_237()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_238(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_239(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0x00000000;
	uParam0->f_7B = 0x00000000;
	if (bParam1)
	{
		func_205(&(uParam0->f_1), 0x00000020);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_205(&(uParam0->f_1), 0x00000001);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_205(&(uParam0->f_1), 0x00001000);
		}
	}
	if (bParam4)
	{
		func_205(&(uParam0->f_1), 0x00002000);
	}
}

int func_240(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_C = iParam2;
	func_243(uParam0);
	func_242(uParam0);
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
			func_241(uParam0);
		}
		else if (uParam0->f_38 != 0x00000000)
		{
			func_212(uParam0, 0x00000001);
		}
		else
		{
			func_212(uParam0, 0x00000000);
		}
	}
	Global_12C53 = 0x00000001;
	return 0x00000001;
}

void func_241(var uParam0)
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
	func_208(unk_0xF59058FCB716F903(0x00000002, 0x000000BC, 0x00000001));
	func_207("ES_HELP_TU");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000001);
	func_208(unk_0xF59058FCB716F903(0x00000002, 0x000000BB, 0x00000001));
	func_207("ES_HELP_TD");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000000);
	func_208(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001));
	func_207("ES_HELP_AB");
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x7E60D21B163E9D56();
}

void func_242(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xEEF67251E263A87F(0x00000000);
	unk_0xD3539A877EC25E86(1f, func_226(16f));
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

void func_243(var uParam0)
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

void func_244()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_331)
	{
		func_250(&uLocal_342, &Local_919, &Global_F057, 0x00000000);
		fLocal_326 = (fLocal_326 * 1000f);
		if (Global_16AF9)
		{
			func_249(&uLocal_342, 0x00000006, &(Local_919.f_C), "MTPHPERSKI", SYSTEM::FLOOR(fLocal_326), 0x00000000, 0x00000003, 0x00000000);
			func_249(&uLocal_342, 0x00000006, &(Local_919.f_18), "MTPHPERSKI", 0x00000000, 0x00000000, 0x00000003, 0x00000000);
			func_249(&uLocal_342, 0x00000006, &(Local_919.f_1E), "MTPHPERSKI", SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000000, 0x00000003, 0x00000000);
			func_248();
		}
		else
		{
			if (bLocal_330)
			{
				func_249(&uLocal_342, 0x00000006, &(Local_919.f_C), "MTPHPERRET", SYSTEM::FLOOR(fLocal_326), 0x00000000, 0x00000003, 0x00000000);
			}
			else
			{
				func_249(&uLocal_342, 0x00000009, &(Local_919.f_C), "", SYSTEM::FLOOR(fLocal_326), 0x00000000, 0x00000000, 0x00000000);
			}
			if (!unk_0xEA6BC48857E0AC4C(&(Local_919.f_12)))
			{
				if (bLocal_329)
				{
					func_249(&uLocal_342, 0x00000006, &(Local_919.f_18), "", 0x00000000, 0x00000000, 0x00000002, 0x00000000);
					func_249(&uLocal_342, 0x00000003, &(Local_919.f_1E), "", SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000000, 0x00000002, 0x00000000);
				}
				else
				{
					func_249(&uLocal_342, 0x00000006, &(Local_919.f_18), "", 0x00000000, 0x00000000, 0x00000001, 0x00000000);
					func_249(&uLocal_342, 0x00000003, &(Local_919.f_1E), "", SYSTEM::ROUND(fLocal_327), 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_249(&uLocal_342, 0x00000003, &(Local_919.f_1E), "", SYSTEM::ROUND(fLocal_327), 0x00000000, 0x00000000, 0x00000000);
			}
		}
		iVar0 = 0x00000000;
		if (Global_16AF9)
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_11F87)
			{
				if (Global_11F88[iVar1 /*9*/] >= 0x00000000 && !Global_F129[Global_11F88[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_11F88[iVar1 /*9*/].f_3 == 0x00000002)
					{
						iVar0 = 0x00000001;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 0x00000001)
		{
			iLocal_337 = 0x00000032;
			iLocal_338 = 0x00000001;
			func_247(&uLocal_342, 0x00000001, &(Local_919.f_30), iLocal_337, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
		else if (bLocal_329)
		{
			if (bLocal_330)
			{
				iLocal_337 = 0x0000004B;
				iLocal_338 = 0x00000002;
				func_247(&uLocal_342, 0x00000001, &(Local_919.f_2A), iLocal_337, 0x00000000, 0x00000000, 0x00000002, 0x00000000);
			}
			else
			{
				iLocal_337 = 0x00000064;
				iLocal_338 = 0x00000003;
				func_247(&uLocal_342, 0x00000001, &(Local_919.f_24), iLocal_337, 0x00000000, 0x00000000, 0x00000003, 0x00000000);
			}
		}
		else if (!bLocal_329 && !bLocal_330)
		{
			iLocal_337 = 0x0000004B;
			iLocal_338 = 0x00000002;
			func_247(&uLocal_342, 0x00000001, &(Local_919.f_2A), iLocal_337, 0x00000000, 0x00000000, 0x00000002, 0x00000000);
		}
		else
		{
			iLocal_337 = 0x00000032;
			iLocal_338 = 0x00000001;
			func_247(&uLocal_342, 0x00000001, &(Local_919.f_30), iLocal_337, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		}
		func_245();
		iLocal_331 = 0x00000001;
	}
}

void func_245()
{
	if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) == 0x00000001)
	{
		func_246(0x00000026, SYSTEM::FLOOR(fLocal_326), 0x00000001);
		if (bLocal_329)
		{
			func_246(0x00000027, 0x00000001, 0x00000001);
		}
		else
		{
			func_246(0x00000027, 0x00000000, 0x00000001);
		}
		if (bLocal_329)
		{
			func_246(0x00000028, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000001);
		}
		else
		{
			func_246(0x00000028, SYSTEM::ROUND(fLocal_327), 0x00000001);
		}
		func_246(0x00000029, iLocal_337, 0x00000001);
		func_246(0x0000002A, iLocal_338, 0x00000001);
	}
	else if (unk_0x8A22C4C08282BF26(joaat("assassin_multi")) == 0x00000001)
	{
		func_246(0x00000034, SYSTEM::FLOOR(fLocal_326), 0x00000001);
		if (bLocal_329)
		{
			func_246(0x00000035, 0x00000001, 0x00000001);
		}
		else
		{
			func_246(0x00000035, 0x00000000, 0x00000001);
		}
		if (bLocal_329)
		{
			func_246(0x00000038, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000001);
		}
		else
		{
			func_246(0x00000038, SYSTEM::ROUND(fLocal_327), 0x00000001);
		}
		func_246(0x00000036, iLocal_337, 0x00000001);
		func_246(0x00000037, iLocal_338, 0x00000001);
	}
	else if (unk_0x8A22C4C08282BF26(joaat("assassin_hooker")) == 0x00000001)
	{
		func_246(0x00000042, SYSTEM::FLOOR(fLocal_326), 0x00000001);
		if (bLocal_329)
		{
			func_246(0x00000043, 0x00000001, 0x00000001);
		}
		else
		{
			func_246(0x00000043, 0x00000000, 0x00000001);
		}
		if (bLocal_329)
		{
			func_246(0x00000044, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000001);
		}
		else
		{
			func_246(0x00000044, SYSTEM::ROUND(fLocal_327), 0x00000001);
		}
		func_246(0x00000045, iLocal_337, 0x00000001);
		func_246(0x00000046, iLocal_338, 0x00000001);
	}
	else if (unk_0x8A22C4C08282BF26(joaat("assassin_bus")) == 0x00000001)
	{
		func_246(0x00000051, SYSTEM::FLOOR(fLocal_326), 0x00000001);
		if (bLocal_329)
		{
			func_246(0x00000052, 0x00000001, 0x00000001);
		}
		else
		{
			func_246(0x00000052, 0x00000000, 0x00000001);
		}
		if (bLocal_329)
		{
			func_246(0x00000053, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000001);
		}
		else
		{
			func_246(0x00000053, SYSTEM::ROUND(fLocal_327), 0x00000001);
		}
		func_246(0x00000054, iLocal_337, 0x00000001);
		func_246(0x00000055, iLocal_338, 0x00000001);
	}
	else if (unk_0x8A22C4C08282BF26(joaat("assassin_construction")) == 0x00000001)
	{
		func_246(0x00000061, SYSTEM::FLOOR(fLocal_326), 0x00000001);
		if (bLocal_329)
		{
			func_246(0x00000062, 0x00000001, 0x00000001);
		}
		else
		{
			func_246(0x00000062, 0x00000000, 0x00000001);
		}
		if (bLocal_329)
		{
			func_246(0x00000063, SYSTEM::ROUND((fLocal_328 + fLocal_327)), 0x00000001);
		}
		else
		{
			func_246(0x00000063, SYSTEM::ROUND(fLocal_327), 0x00000001);
		}
		func_246(0x00000064, iLocal_337, 0x00000001);
		func_246(0x00000065, iLocal_338, 0x00000001);
	}
}

void func_246(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		if (Global_11F88[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_11F88[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_11F88[iVar0 /*9*/].f_1 = (Global_11F88[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_11F88[iVar0 /*9*/] != 0xFFFFFFFF)
	{
		if (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/] == 0x00000003)
		{
			if (Global_11F88[iVar0 /*9*/].f_1 > 0x00000001)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000001;
			}
			if (Global_11F88[iVar0 /*9*/].f_1 < 0x00000000)
			{
				Global_11F88[iVar0 /*9*/].f_1 = 0x00000000;
			}
		}
	}
}

void func_247(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
	uParam0->f_240 = iParam7;
}

void func_248()
{
	Global_16AF8 = 0x00000000;
	Global_16AF9 = 0x00000000;
}

void func_249(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_250(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0x00000000;
}

void func_251()
{
	func_533(&(Global_1B416.f_4DF6.f_1), 0x00400000);
}

void func_252()
{
	int iVar0;
	
	if (!bLocal_1000)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0x00000000))
				{
					if (unk_0x2F6DBDA9ACD7D3AB(iVar0))
					{
						if (unk_0x13896FDECC859926("ASS1_LOST"))
						{
							bLocal_1000 = 0x00000001;
						}
					}
				}
			}
		}
	}
}

void func_253()
{
	float fVar0;
	
	if (!iLocal_997)
	{
		if (!unk_0xD17F06053799A7CA())
		{
			if (!func_28())
			{
				func_258("ASS_VA_GO", 0x00001D4C, 0xFFFFFFFF);
				iLocal_997 = 0x00000001;
			}
		}
	}
	func_257(&iLocal_1009, &uLocal_1112, "OJASAUD", "OJAS_HOCOM", 0x00000009, 0x00000001, 0x00000000, 0x00000000);
	switch (iLocal_1018)
	{
		case 0x00000000:
			iLocal_1018++;
			break;
		
		case 0x00000001:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				fVar0 = func_32(unk_0x16F2683693E537C9(), vLocal_1060, 0x00000001);
				if (fVar0 > 155f && func_36(0x428C0000, 0x00000001) == 0x00000000)
				{
					bLocal_992 = 0x00000001;
					func_255();
					iLocal_1018++;
				}
				else
				{
					unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (func_36(0x428C0000, 0x00000001) == 0x00000000)
				{
					func_252();
					if (func_254())
					{
						iLocal_931 = 0x00000012;
					}
				}
			}
			else if (!iLocal_1008)
			{
				if (!func_28())
				{
					if (!unk_0xD17F06053799A7CA())
					{
						func_258("ASS_VA_LOSECOPS", 0x00001D4C, 0x00000001);
						iLocal_1018++;
						iLocal_1008 = 0x00000001;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				iLocal_1018 = 0x00000002;
			}
			break;
	}
}

int func_254()
{
	if (bLocal_1000)
	{
		unk_0xC92DB9682A650680("ASS1_LOST");
		iLocal_1001 = 0x00000001;
	}
	func_255();
	return 0x00000001;
}

void func_255()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_940[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_940[iVar0]))
			{
				func_256(&(Local_948[iVar0 /*8*/]));
				unk_0xA3BF0AA5A2608191(iLocal_940[iVar0]);
				unk_0x6DAD7906B73F064D(&(iLocal_940[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0xC844350D5D58C99A(iLocal_939))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_939))
		{
			unk_0xA3BF0AA5A2608191(iLocal_939);
			unk_0x6DAD7906B73F064D(&iLocal_939);
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iLocal_941[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_941[iVar0]))
			{
				func_256(&(Local_946[iVar0 /*8*/]));
				unk_0xA3BF0AA5A2608191(iLocal_941[iVar0]);
				unk_0x6DAD7906B73F064D(&(iLocal_941[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xC844350D5D58C99A(iLocal_942[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_942[iVar0]))
			{
				func_256(&(Local_947[iVar0 /*8*/]));
				unk_0xA3BF0AA5A2608191(iLocal_942[iVar0]);
				unk_0x6DAD7906B73F064D(&(iLocal_942[iVar0]));
			}
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(iLocal_1073);
}

void func_256(int iParam0)
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

int func_257(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_258(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_259()
{
	func_257(&iLocal_1009, &uLocal_1112, "OJASAUD", "OJAS_HOCOM", 0x00000009, 0x00000001, 0x00000000, 0x00000000);
	switch (iLocal_1018)
	{
		case 0x00000000:
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (!iLocal_1008)
				{
					if (!func_28())
					{
						if (!unk_0xD17F06053799A7CA())
						{
							func_258("ASS_VA_LOSECOPS", 0x00001D4C, 0x00000001);
							iLocal_1018++;
							iLocal_1008 = 0x00000001;
						}
					}
				}
			}
			else if (func_36(0x428C0000, 0x00000001) != 0x00000000)
			{
				if (!iLocal_997)
				{
					if (!func_28())
					{
						if (!unk_0xD17F06053799A7CA())
						{
							func_258("ASS_VA_GO", 0x00001D4C, 0xFFFFFFFF);
							iLocal_1018++;
							iLocal_997 = 0x00000001;
						}
					}
				}
			}
			else if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) && func_36(125f, 0x00000001) == 0x00000000)
			{
				iLocal_1018++;
			}
			break;
		
		case 0x00000001:
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) && func_36(125f, 0x00000001) == 0x00000000)
			{
				func_252();
				func_255();
				func_261(0x00000001);
				func_260();
				iLocal_1018++;
			}
			break;
		
		case 0x00000002:
			func_252();
			iLocal_931 = 0x00000012;
			break;
	}
}

void func_260()
{
	if (unk_0xC844350D5D58C99A(iLocal_1065))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
		{
			unk_0x71EDC33E5A423750(iLocal_1065, 0x00000001);
		}
		unk_0x046C362CF15F1935(&iLocal_1065);
	}
	if (unk_0xC844350D5D58C99A(iLocal_1066))
	{
		if (!unk_0x437347B10A200C4B(iLocal_1066, 0x00000000))
		{
			if ((unk_0x0A059E0DB9253280(iLocal_1066) && !unk_0x03068588A1FCED1A(iLocal_1066)) && !unk_0x757EF87A33649210())
			{
				unk_0x046C362CF15F1935(&iLocal_1066);
			}
			else
			{
				if (unk_0xC844350D5D58C99A(iLocal_942[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_942[0x00000000], 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(iLocal_1066, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_942[0x00000000], iLocal_1066, 0x00000000))
						{
							unk_0x327AAEE25F323797(iLocal_942[0x00000000]);
						}
					}
				}
				if (unk_0xC844350D5D58C99A(iLocal_942[0x00000001]) && !unk_0x437347B10A200C4B(iLocal_942[0x00000001], 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(iLocal_1066, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iLocal_942[0x00000001], iLocal_1066, 0x00000000))
						{
							unk_0x327AAEE25F323797(iLocal_942[0x00000001]);
						}
					}
				}
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_1066, 0x00000000))
					{
						unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
					}
				}
				unk_0x046C362CF15F1935(&iLocal_1066);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_1069[0x00000000]))
	{
		unk_0x046C362CF15F1935(&(iLocal_1069[0x00000000]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_1069[0x00000001]))
	{
		unk_0x046C362CF15F1935(&(iLocal_1069[0x00000001]));
	}
	if (unk_0xC844350D5D58C99A(iLocal_1070) && !unk_0x437347B10A200C4B(iLocal_1070, 0x00000000))
	{
		if (unk_0xAF6690C489CC6203(iLocal_1070) && unk_0x9C77D2D0559097F0(iLocal_1070, 0x00000001))
		{
			unk_0x046C362CF15F1935(&iLocal_1070);
		}
	}
}

void func_261(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_950))
		{
			unk_0x142CC44DB769B57E(&iLocal_950);
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_951[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_951[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_952[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_952[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_952[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_952[iVar0]));
		}
		iVar0++;
	}
}

void func_262()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_1058, vLocal_1059, fLocal_1047, 0x00000001, 0x00000000, 0x00000000))
	{
		bLocal_977 = 0x00000001;
	}
	else
	{
		bLocal_977 = 0x00000000;
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_950))
	{
		unk_0x142CC44DB769B57E(&iLocal_950);
	}
	unk_0x51B096AAC60548C1(0.5f);
	if (bLocal_977)
	{
		func_263();
		iLocal_931 = 0x00000011;
	}
	else
	{
		func_263();
		iLocal_931 = 0x00000010;
	}
	func_92(&uLocal_1277, 0x00000000, 0x00000000);
}

void func_263()
{
	iLocal_1018 = 0x00000000;
}

void func_264()
{
	if (!bLocal_974)
	{
		if (unk_0xC844350D5D58C99A(iLocal_1065))
		{
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				unk_0x71EDC33E5A423750(iLocal_1065, 0x00000003);
				if (func_266(iLocal_1065, 5f))
				{
					bLocal_974 = 0x00000001;
				}
			}
		}
	}
	if (!iLocal_971)
	{
		if (func_265(iLocal_1065, 0x00002710))
		{
			iLocal_971 = 0x00000001;
		}
	}
}

int func_265(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (((unk_0x7B5606C651AB51B5(iParam0, 0x00000000, iParam1) || unk_0x7B5606C651AB51B5(iParam0, 0x00000002, iParam1)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000003, iParam1)) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_266(int iParam0, float fParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (func_267(iParam0, -1217.442f, -281.5099f, 36.7495f, 0x00000001) <= fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_267(int iParam0, vector3 vParam1, bool bParam2)
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

void func_268()
{
	switch (iLocal_1018)
	{
		case 0x00000000:
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				if (func_140())
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_941[0x00000000]))
					{
						if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
						{
							if (unk_0xC42A92762C58E1B9(iLocal_941[0x00000000], iLocal_1065, 0x00000000))
							{
								bLocal_970 = 0x00000001;
								func_263();
								iLocal_931 = 0x0000000D;
							}
						}
					}
				}
			}
			break;
	}
}

void func_269()
{
	if (unk_0xC844350D5D58C99A(iLocal_939))
	{
		if (unk_0xEB6A8945D1AC98A1(iLocal_939))
		{
			if (unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
			{
				bLocal_975 = 0x00000001;
				if (unk_0xE4EDC4B0E92C078B(iLocal_950))
				{
					unk_0x142CC44DB769B57E(&iLocal_950);
				}
				func_116(vLocal_1062, 0x41700000, 0x428C0000);
			}
			unk_0x8B4C4CA774181102(3f, 2f, 0x00000003);
			func_263();
			iLocal_931 = 0x0000000F;
		}
	}
}

void func_270()
{
	func_261(0x00000000);
	func_277();
	func_275();
	func_272();
	func_271();
	func_258("ASS_VA_KILL", 0x00001D4C, 0xFFFFFFFF);
	SYSTEM::SETTIMERA(0x00000000);
	bLocal_986 = 0x00000001;
	func_263();
	iLocal_931 = 0x0000000C;
}

void func_271()
{
	unk_0x71199B01895C6202(iLocal_1075);
	unk_0x71199B01895C6202(iLocal_1076);
}

void func_272()
{
	func_274(&(Local_1427.f_4));
	func_273(&(Local_1427[0x00000000]));
	func_273(&(Local_1427[0x00000001]));
	func_273(&(Local_1427.f_8[0x00000000]));
	func_273(&(Local_1427.f_8[0x00000001]));
	func_273(&(Local_1427.f_5[0x00000000]));
	func_273(&(Local_1427.f_5[0x00000001]));
	func_273(&(Local_1427.f_3));
}

void func_273(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0x03068588A1FCED1A(*iParam0))
		{
			unk_0xEBA53F35D0085654(iParam0);
		}
		else
		{
			unk_0x6DAD7906B73F064D(iParam0);
		}
	}
}

void func_274(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0x03068588A1FCED1A(*iParam0))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_275()
{
	vector3 vVar0[2];
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iLocal_939) && !unk_0x437347B10A200C4B(iLocal_939, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_939, 0x00000001) };
		fVar2 = unk_0xD9522BA9E27E1349(iLocal_939);
	}
	vVar0[0x00000000 /*3*/] = { unk_0x8A5E176FF719A014(vVar1, fVar2, 1f, -1f, 0f) };
	vVar0[0x00000001 /*3*/] = { unk_0x8A5E176FF719A014(vVar1, fVar2, -1f, -1f, 0f) };
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000002)
	{
		if (iVar3 == 0x00000000)
		{
			iLocal_940[iVar3] = unk_0x36F2404464202779(0x0000001A, iLocal_1075, vVar0[0x00000000 /*3*/], vVar0[0x00000000 /*3*/].f_1, 38.3253f, uLocal_1046[iLocal_1022], 0x00000001, 0x00000001);
		}
		else
		{
			iLocal_940[iVar3] = unk_0x36F2404464202779(0x0000001A, iLocal_1076, vVar0[0x00000001 /*3*/], vVar0[0x00000001 /*3*/].f_1, 38.3253f, uLocal_1046[iLocal_1022], 0x00000001, 0x00000001);
		}
		unk_0xE8832A9E16A57A1F(iLocal_940[iVar3], 0x00000001, 0x00000001);
		unk_0x78ED16BE998AECC7(iLocal_940[iVar3]);
		unk_0xAFF39FB306F8E232(iLocal_940[iVar3], 0x00000003, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_940[iVar3], 0x00000017, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_940[iVar3], 0x0000001E, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_940[iVar3], 0x0000000D, 0x00000001);
		unk_0x26A6B1686E33113F(iLocal_940[iVar3], 0x00000002);
		unk_0xFADC0A217229F6B5(iLocal_940[iVar3], 0x00000001);
		func_276(iLocal_940[iVar3], 0x00000001);
		unk_0x2051F535F4A99479(iLocal_940[iVar3], 0x00000001);
		iVar3++;
	}
}

void func_276(int iParam0, bool bParam1)
{
	if (iParam0 != iLocal_939)
	{
		unk_0x262EF6C6306BEA6C(iParam0, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
	}
	if (!bParam1)
	{
		unk_0x3CC33E4E9CE523F4(iParam0, 0x00000001);
		unk_0xAFF39FB306F8E232(iParam0, 0x00000000, 0x00000001);
	}
	else
	{
		unk_0x3CC33E4E9CE523F4(iParam0, 0x00000002);
		unk_0xAFF39FB306F8E232(iParam0, 0x0000000D, 0x00000001);
	}
	unk_0x298903DD96203C2C(iParam0, 0x0000003C);
	unk_0x083F03A847B640E9(iParam0, 0x00000002);
	unk_0x11AD11297DC58CC7(iParam0, 0x00000001);
	unk_0x20EC6650986ACDC7(iParam0, 0x00000001);
	unk_0x6DF7BF67E86AAE86(iParam0, iLocal_1080);
}

void func_277()
{
	func_279();
	iLocal_1022 = unk_0x09AC81E49EA267F7(0x00000000, iLocal_1020);
	iLocal_939 = unk_0x36F2404464202779(0x0000001A, iLocal_1073, vLocal_1053[iLocal_1022 /*3*/], uLocal_1046[iLocal_1022], 0x00000001, 0x00000001);
	unk_0xE8832A9E16A57A1F(iLocal_939, 0x00000001, 0x00000001);
	unk_0x78ED16BE998AECC7(iLocal_939);
	func_276(iLocal_939, 0x00000001);
	unk_0x71199B01895C6202(iLocal_1073);
	if (!unk_0xE4EDC4B0E92C078B(iLocal_950))
	{
		iLocal_950 = func_278(iLocal_939, 0x00000000, 0x00000000);
	}
	unk_0x516E63E474722206(iLocal_950, 1f);
}

int func_278(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_206(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_206(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_206(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_279()
{
	int iVar0;
	
	iLocal_1020 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0x8E28E832BEAC3DCE(vLocal_1052[iVar0 /*3*/], 5f) && !func_283(iVar0, 6f))
		{
			vLocal_1053[iLocal_1020 /*3*/] = { vLocal_1052[iVar0 /*3*/] };
			uLocal_1046[iLocal_1020] = fLocal_1045[iVar0];
			iLocal_1020++;
		}
		iVar0++;
	}
	if (iLocal_1020 == 0x00000000)
	{
		if (func_104())
		{
			vLocal_1053[0x00000000 /*3*/] = { vLocal_1052[0x00000001 /*3*/] };
			uLocal_1046[0x00000000] = fLocal_1045[0x00000001];
			iLocal_1020++;
		}
		else if (func_282())
		{
			vLocal_1053[0x00000000 /*3*/] = { vLocal_1052[0x00000000 /*3*/] };
			uLocal_1046[0x00000000] = fLocal_1045[0x00000000];
			iLocal_1020++;
		}
		else
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (func_281(vLocal_1052[iVar0 /*3*/], 0x00000001) > 30f && !func_283(iVar0, 6f))
				{
					vLocal_1053[iLocal_1020 /*3*/] = { vLocal_1052[iVar0 /*3*/] };
					uLocal_1046[iLocal_1020] = fLocal_1045[iVar0];
					iLocal_1020++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1020 == 0x00000000)
	{
		func_280();
	}
}

void func_280()
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		fVar2 = SYSTEM::VDIST(vVar1, vLocal_1052[iVar0 /*3*/]);
		if (fVar2 > fLocal_1051)
		{
			fLocal_1051 = fVar2;
			iLocal_1050 = iVar0;
		}
		iVar0++;
	}
	vLocal_1053[0x00000000 /*3*/] = { vLocal_1052[iLocal_1050 /*3*/] };
	uLocal_1046[0x00000000] = fLocal_1045[iLocal_1050];
}

float func_281(vector3 vParam0, bool bParam1)
{
	return func_32(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam1);
}

int func_282()
{
	if (func_32(unk_0x16F2683693E537C9(), -1237.566f, -156.8824f, 39.41317f, 0x00000001) < 13f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_283(int iParam0, float fParam1)
{
	if (unk_0x558ADED8B93EA0F6(vLocal_1052[iParam0 /*3*/], fParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_284()
{
	switch (iLocal_1018)
	{
		case 0x00000000:
			if (!iLocal_987)
			{
				func_112(&Local_320, 0x00000004);
				func_287();
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_1018++;
			}
			break;
		
		case 0x00000001:
			if (((bLocal_966 && !bLocal_964) && func_286()) && func_285())
			{
				func_263();
				iLocal_931 = 0x0000000B;
			}
			break;
	}
}

int func_285()
{
	int iVar0;
	
	unk_0x523BCC9DC80CD82F(iLocal_1073);
	if (unk_0xB87F6CF6E5628C67(iLocal_1073))
	{
		iVar0 = 0x00000001;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	return iVar0;
}

int func_286()
{
	if (((unk_0xC844350D5D58C99A(iLocal_941[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_941[0x00000001])) && !unk_0xEB6A8945D1AC98A1(iLocal_941[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_941[0x00000001]))
	{
		if (unk_0xC42A92762C58E1B9(iLocal_941[0x00000000], iLocal_1065, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_941[0x00000001], iLocal_1065, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_287()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iLocal_933[iVar0] = 0x00000004;
		iVar0++;
	}
	bLocal_980 = 0x00000001;
}

void func_288()
{
	switch (iLocal_1018)
	{
		case 0x00000000:
			func_310(0x00000001, "assassin_hotel_plan_attack", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
			func_112(&Local_320, 0x00000002);
			if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
			{
				unk_0x56FDC9ADE35F7DB0(iLocal_1065, 0x00000000, 0x00000001, 0x00000000);
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_1070) && !unk_0x437347B10A200C4B(iLocal_1070, 0x00000000))
					{
						func_296(iLocal_1070);
					}
				}
			}
			func_293();
			func_292();
			unk_0xC92DB9682A650680("ASS1_START");
			unk_0x5D96D8530B3D0904(&Local_320, 0x00000004);
			func_258("ASS_VA_PLANT", 0x00001D4C, 0x00000001);
			iLocal_1018++;
			break;
		
		case 0x00000001:
			if (iLocal_993)
			{
				if (((!func_291(&iLocal_1067) && !func_290(&(iLocal_1071[0x00000000]), &bLocal_1014)) && !func_290(&(iLocal_1071[0x00000001]), &bLocal_1014)) && !func_290(&(iLocal_1071[0x00000002]), &bLocal_1014))
				{
					SYSTEM::SETTIMERA(0x00000000);
					func_263();
					iLocal_931 = 0x0000000A;
				}
				else
				{
					func_289();
				}
			}
			break;
	}
}

void func_289()
{
	iLocal_937 = 0x00000001;
	bLocal_964 = 0x00000001;
}

int func_290(var uParam0, int iParam1)
{
	if (!unk_0xC844350D5D58C99A(*uParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iLocal_1066))
	{
		return 0x00000000;
	}
	if (func_30(*uParam0, iLocal_1066, 0x00000001) <= 5f)
	{
		iLocal_1067 = *uParam0;
		*iParam1 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_291(var uParam0)
{
	vector3 vVar0;
	
	*uParam0 = unk_0x83C1D4B63BBD91F6(-1221.954f, -210.746f, 38.638f, 27f, 0x00000000, 0x00000004);
	if (((*uParam0 != 0x00000000 && *uParam0 != iLocal_1065) && *uParam0 != iLocal_1066) && *uParam0 != Local_1427.f_4)
	{
		if (unk_0xC844350D5D58C99A(*uParam0) && !unk_0x437347B10A200C4B(*uParam0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(*uParam0, 0xFFFFFFFF, 0x00000000) == 0x00000000)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(*uParam0, 0x00000001) };
				vVar0 = { vVar0 };
				return 0x00000001;
			}
		}
	}
	if (iLocal_1070 != 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_1070) && !unk_0x437347B10A200C4B(iLocal_1070, 0x00000000))
		{
			if (!func_99(iLocal_1070))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_1070, 0x00000001) };
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_292()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_941[iVar1]))
		{
			if (iVar1 == 0x00000002)
			{
				iVar0 = iLocal_1076;
			}
			else
			{
				iVar0 = iLocal_1075;
			}
			iLocal_941[iVar1] = unk_0x36F2404464202779(0x0000001A, iVar0, vLocal_1054[iVar1 /*3*/], fLocal_1041[iVar1], 0x00000001, 0x00000001);
			if (iVar1 == 0x00000000)
			{
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (iVar1 == 0x00000001)
			{
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x0000000B, 0x00000000, 0x00000002, 0x00000000);
			}
			else if (iVar1 == 0x00000002)
			{
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000003, 0x00000000, 0x00000002, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				unk_0x64F9F278AB9DCA2C(iLocal_941[iVar1], 0x0000000B, 0x00000001, 0x00000001, 0x00000000);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_941[iVar1]))
		{
			unk_0x25C5402CC10F76CD(iLocal_941[iVar1], 0x00000000);
			unk_0xFADC0A217229F6B5(iLocal_941[iVar1], 0x00000001);
			unk_0xAFF39FB306F8E232(iLocal_941[iVar1], 0x00000017, 0x00000001);
			unk_0xAFF39FB306F8E232(iLocal_941[iVar1], 0x0000001E, 0x00000000);
			unk_0x26A6B1686E33113F(iLocal_941[iVar1], 0x00000002);
			unk_0x4E885A246A9D983A(iLocal_941[iVar1], 0x00000068, 0x00000001);
			func_276(iLocal_941[iVar1], 0x00000001);
		}
		iVar1++;
	}
}

void func_293()
{
	func_295();
	func_294();
	unk_0x71199B01895C6202(iLocal_1077);
}

void func_294()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_942[iVar0]))
		{
			if (iVar0 == 0x00000000)
			{
				iLocal_942[iVar0] = unk_0x852A19533F896693(iLocal_1066, 0x0000001A, iLocal_1075, 0xFFFFFFFF, 0x00000001, 0x00000001);
			}
			else if (iVar0 == 0x00000001)
			{
				iLocal_942[iVar0] = unk_0x852A19533F896693(iLocal_1066, 0x0000001A, iLocal_1076, 0x00000000, 0x00000001, 0x00000001);
			}
			func_276(iLocal_942[iVar0], 0x00000001);
			unk_0xAFF39FB306F8E232(iLocal_942[iVar0], 0x00000003, 0x00000000);
			unk_0xAFF39FB306F8E232(iLocal_942[iVar0], 0x00000017, 0x00000001);
			unk_0xAFF39FB306F8E232(iLocal_942[iVar0], 0x0000001E, 0x00000000);
			unk_0x26A6B1686E33113F(iLocal_942[iVar0], 0x00000002);
			unk_0xFADC0A217229F6B5(iLocal_942[iVar0], 0x00000001);
		}
		iVar0++;
	}
}

void func_295()
{
	if (!unk_0xC844350D5D58C99A(iLocal_1066))
	{
		iLocal_1066 = unk_0x122AAB0B1D6F55AD(iLocal_1077, vLocal_1055, fLocal_1043, 0x00000001, 0x00000001, 0x00000000);
		unk_0xC6A6B4DDD6DC073A(iLocal_1066, 0x00000000);
	}
}

void func_296(int iParam0)
{
	func_297(&(Global_19AE3.f_B4A), &Global_19AE3, iParam0, 0x00000001);
}

int func_297(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_299(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_298(iParam2))
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

int func_298(int iParam0)
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

void func_299(var uParam0, int iParam1, int iParam2)
{
	func_305(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_302(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_301(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_300(iParam1);
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

int func_300(int iParam0)
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

int func_301(int iParam0)
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

int func_302(int iParam0, int iParam1, int iParam2)
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
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_303(iParam1, iParam2))
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

int func_303(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_20(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_304(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_304(int iParam0, var uParam1, int iParam2)
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

void func_305(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_309(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_308(uParam1->f_42))
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
		func_307(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_306(iVar0 + 1));
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

int func_306(int iParam0)
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

int func_307(int iParam0, var uParam1, var uParam2)
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

int func_308(int iParam0)
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

void func_309(var uParam0)
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

void func_310(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
		func_164(0x00000001);
		if (iParam0 <= Global_181DD)
		{
		}
		iVar1 = func_377(unk_0xBB0808A181D4745C(), 0x00000001);
		if (iVar1 != 0xFFFFFFFF && iVar1 != 0x0000005E)
		{
			Global_1B416.f_2378.f_14A[iVar1 /*6*/].f_1 = 0x00000000;
			iVar2 = func_375(iVar1);
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
			iVar4 = func_370(unk_0xBB0808A181D4745C(), 0x00000001);
			if (iVar4 != 0xFFFFFFFF)
			{
				Global_1B416.f_4889[iVar4 /*6*/].f_4 = 0x00000000;
				MemCopy(&uVar5, {func_369(iVar4)}, 0x00000004);
				unk_0x353729B0A07DC11A(&uVar5, 0x00000000, Global_181DD, iParam0);
			}
			else
			{
				iVar6 = func_368(&(Global_181B8.f_3));
				if (iVar6 > 0xFFFFFFFF)
				{
					Global_1B416.f_6195.f_4[iVar6] = 0x00000000;
				}
			}
		}
		Global_16AFA = iParam2;
		Global_181DD = iParam0;
		func_311(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x7F8A39872A07D2CE(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_181DD)
	{
	}
}

void func_311(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_312(&Global_19AE3, unk_0xBB0808A181D4745C(), iParam0, uParam1, iParam3, iParam2);
}

void func_312(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_18();
	uParam0->f_1 = func_357();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_331(&(uParam0->f_B44), 0x00000000);
		func_330(unk_0x16F2683693E537C9());
		func_323(unk_0x16F2683693E537C9(), 0x00000000);
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
		if (iVar1 == func_322())
		{
			func_318(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
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
		func_314(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_313(&(uParam0->f_BA4));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_313(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_314(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_21(iParam2);
	}
	if (func_315(iParam2, &iVar0, iParam3, iParam5))
	{
		func_297(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_297(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_315(int iParam0, var uParam1, int iParam2, int iParam3)
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
						if (func_316(*uParam1, func_18(), 0x00000001))
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

int func_316(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_317(iParam1, iVar0, &sVar1, &iVar2))
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

int func_317(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_318(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_21(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_321(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_320(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_20(iVar0))
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
			if (func_319(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_175(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_175(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_175(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_175(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_319(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_175(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_175(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_319(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_170(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_320(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
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

void func_321(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
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

int func_322()
{
	func_19();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_323(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_324(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
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

void func_324(int iParam0, var uParam1)
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
			iVar3 = func_329(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_329(iVar0));
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
					iVar2 = func_327(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_327(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_326(Var7.f_1)) && iVar9 < 0x00000033)
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
							if (!func_325(Var8.f_3))
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

int func_325(int iParam0)
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

int func_326(int iParam0)
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

int func_327(int iParam0, int iParam1)
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
				iVar1 = func_328(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_325(Var5.f_3))
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

int func_328(int iParam0, var uParam1)
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

int func_329(int iParam0)
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

void func_330(int iParam0)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (func_20(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_331(var uParam0, int iParam1)
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
		if (func_334(&iVar0))
		{
			if (func_333(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_18();
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
		else if (func_332(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_332(vector3 vParam0, char* sParam1, vector3 vParam2)
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

bool func_333(int iParam0, var uParam1, var uParam2)
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
	return !func_50(*uParam1, 0f, 0f, 0f, 0x00000000);
}

int func_334(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_356())
		{
			*uParam0 = func_340(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_339(*uParam0) && !func_335(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_335(int iParam0)
{
	return func_336(iParam0, 0x00000000, 0x00000001);
}

int func_336(int iParam0, int iParam1, bool bParam2)
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
		if (func_338() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_175(func_337(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_337(int iParam0)
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

int func_338()
{
	return Global_7830;
}

int func_339(int iParam0)
{
	return func_336(iParam0, 0x00000005, 0x00000001);
}

int func_340(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
		if (iParam1 == 0x00000006 || iParam1 == func_355(iVar0))
		{
			if (!bParam3 || func_354(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_341(iVar0, 0x00000000), 0x00000001);
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

Vector3 func_341(int iParam0, bool bParam1)
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
			return func_351(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_12())
			{
				if (func_350(Global_184466))
				{
					return func_343(0x00000002, 0x00000002);
				}
				else if (func_342(Global_184466))
				{
					return func_343(0x0000002D, 0x00000003);
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

int func_342(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_343(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_12())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_344(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_344(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_344(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_344(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_349(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_349(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_347(iParam0) };
	}
	else
	{
		Var2 = { func_346(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_345(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_345(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_345(vector3 vParam0, float fParam1)
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

struct<6> func_346(int iParam0)
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

struct<6> func_347(int iParam0)
{
	return func_348(iParam0);
}

struct<6> func_348(int iParam0)
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

int func_349(int iParam0, var uParam1)
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

int func_350(int iParam0)
{
	if (iParam0 != func_12())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_351(int iParam0)
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
			if (func_352() == 0x00000000)
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

int func_352()
{
	return func_353(unk_0xD803B885F5E47A62());
}

int func_353(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_354(int iParam0)
{
	return func_336(iParam0, 0x00000000, 0x00000000);
}

int func_355(int iParam0)
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

bool func_356()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_357()
{
	var uVar0;
	
	func_367(&uVar0, unk_0x4460E481B9E33ADA());
	func_366(&uVar0, unk_0x8D199E381D262EEF());
	func_365(&uVar0, unk_0xD8A54335F18763BA());
	func_360(&uVar0, unk_0x972A296334C9D57B());
	func_359(&uVar0, unk_0x118229AD063C3C1D());
	func_358(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_358(var uParam0, int iParam1)
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

void func_359(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_360(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_364(*uParam0);
	iVar1 = func_362(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_361(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_361(int iParam0, int iParam1)
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

var func_362(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_363(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_363(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_364(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_365(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_366(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_367(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_368(char* sParam0)
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

struct<2> func_369(int iParam0)
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

int func_370(char* sParam0, int iParam1)
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
		func_371(iVar0, &sVar1);
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

void func_371(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_372(uParam1, "Abigail1", func_374(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_372(uParam1, "Abigail2", func_374(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_372(uParam1, "Barry1", func_374(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_372(uParam1, "Barry2", func_374(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_372(uParam1, "Barry3", func_374(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_372(uParam1, "Barry3A", func_374(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_372(uParam1, "Barry3C", func_374(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_372(uParam1, "Barry4", func_374(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_372(uParam1, "Dreyfuss1", func_374(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_372(uParam1, "Epsilon1", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_372(uParam1, "Epsilon2", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_372(uParam1, "Epsilon3", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_372(uParam1, "Epsilon4", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_372(uParam1, "Epsilon5", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_372(uParam1, "Epsilon6", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_372(uParam1, "Epsilon7", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_372(uParam1, "Epsilon8", func_374(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_372(uParam1, "Extreme1", func_374(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_372(uParam1, "Extreme2", func_374(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_372(uParam1, "Extreme3", func_374(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_372(uParam1, "Extreme4", func_374(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_372(uParam1, "Fanatic1", func_374(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_372(uParam1, "Fanatic2", func_374(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_372(uParam1, "Fanatic3", func_374(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_372(uParam1, "Hao1", func_374(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_372(uParam1, "Hunting1", func_374(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_372(uParam1, "Hunting2", func_374(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_372(uParam1, "Josh1", func_374(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_372(uParam1, "Josh2", func_374(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_372(uParam1, "Josh3", func_374(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_372(uParam1, "Josh4", func_374(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_372(uParam1, "Maude1", func_374(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_372(uParam1, "Minute1", func_374(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_372(uParam1, "Minute2", func_374(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_372(uParam1, "Minute3", func_374(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_372(uParam1, "MrsPhilips1", func_374(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_372(uParam1, "MrsPhilips2", func_374(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_372(uParam1, "Nigel1", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_372(uParam1, "Nigel1A", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_372(uParam1, "Nigel1B", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_372(uParam1, "Nigel1C", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_372(uParam1, "Nigel1D", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_372(uParam1, "Nigel2", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_372(uParam1, "Nigel3", func_374(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_372(uParam1, "Omega1", func_374(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_372(uParam1, "Omega2", func_374(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_372(uParam1, "Paparazzo1", func_374(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_372(uParam1, "Paparazzo2", func_374(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_372(uParam1, "Paparazzo3", func_374(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_372(uParam1, "Paparazzo3A", func_374(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_372(uParam1, "Paparazzo3B", func_374(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_372(uParam1, "Paparazzo4", func_374(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_372(uParam1, "Rampage1", func_374(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_372(uParam1, "Rampage3", func_374(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_372(uParam1, "Rampage4", func_374(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_372(uParam1, "Rampage5", func_374(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_372(uParam1, "Rampage2", func_374(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_373(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_372(uParam1, "TheLastOne", func_374(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_372(uParam1, "Tonya1", func_374(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_372(uParam1, "Tonya2", func_374(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_372(uParam1, "Tonya3", func_374(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_372(uParam1, "Tonya4", func_374(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_372(uParam1, "Tonya5", func_374(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_373(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_372(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_373(int iParam0)
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

struct<2> func_374(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_369(iParam0) };
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

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000045:
		case 0x00000046:
			return func_376(Global_1B416.f_2378.f_63.f_CD[0x0000000A]);
			break;
		
		case 0x0000004A:
		case 0x0000004B:
			return func_376(Global_1B416.f_2378.f_63.f_CD[0x00000008]);
			break;
		
		case 0x00000054:
		case 0x00000055:
			return func_376(Global_1B416.f_2378.f_63.f_CD[0x0000000B]);
			break;
		
		case 0x0000005A:
			return func_376(Global_1B416.f_2378.f_63.f_CD[0x00000007]);
			break;
		
		case 0x0000005D:
			return func_376(Global_1B416.f_2378.f_63.f_CD[0x00000009]);
			break;
	}
	return 0x00000000;
}

int func_376(int iParam0)
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

int func_377(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_378(iVar0, 0x00000001);
	if (iVar1 == 0xFFFFFFFF && !bParam1)
	{
	}
	return iVar1;
}

int func_378(int iParam0, bool bParam1)
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

void func_379()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		}
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0x3D1053F9EB43B7AD(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0x00000000, 0x00000000, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				if (unk_0x9C66D99E63E8E24C(iVar0) <= 0.5f)
				{
					if (!func_58(&iLocal_1093))
					{
						func_55(&iLocal_1093);
					}
				}
				else if (func_58(&iLocal_1093))
				{
					func_56(&iLocal_1093);
				}
				if (func_58(&iLocal_1093))
				{
					if (func_52(&iLocal_1093) > 10f)
					{
						func_37(0x00000002);
					}
				}
			}
			else if (func_58(&iLocal_1093))
			{
				func_56(&iLocal_1093);
			}
		}
	}
}

void func_380()
{
	switch (iLocal_1018)
	{
		case 0x00000000:
			if (func_411(0x40A00000, 0x00000001) || (bLocal_976 && unk_0x07441E56330B63E3(uLocal_955)))
			{
				func_410(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, vLocal_1413, fLocal_1414, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				unk_0x28F5E4DA506AC0CA(-1220.57f, -185.96f, 38.4f, 50f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x679C321F8CAA2CFA(-1220.57f, -185.96f, 38.4f, 50f, 0x00000000);
				func_409();
				func_408();
				if (!unk_0x437347B10A200C4B(iLocal_1065, 0x00000000))
				{
					if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
					{
						unk_0x4D3C3C0B0DE2663E(iLocal_1065, 0x0000006B, "ASSOJva", 0x00000001);
						unk_0xF12C1D85AFEE8FAD(iLocal_1065, 2500f);
					}
				}
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						unk_0x3CBF2C83A68C1611(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), "OFF");
					}
				}
				iLocal_1018++;
			}
			else if (unk_0x07441E56330B63E3(uLocal_955))
			{
			}
			break;
		
		case 0x00000001:
			if (func_381())
			{
				iLocal_1019 = 0x00000000;
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				func_518();
				func_263();
				iLocal_931 = 0x00000009;
			}
			break;
	}
}

int func_381()
{
	int iVar0;
	
	switch (iLocal_1019)
	{
		case 0x00000000:
			func_407(0x00000000, 0x00000000, 0x00000001);
			func_406();
			unk_0x91F5B0244AAE6222(iLocal_1078, "HAND_SHAKE", 0.2f);
			unk_0x91F5B0244AAE6222(iLocal_1079, "HAND_SHAKE", 0.2f);
			unk_0xF1E4C781086FABC1(iLocal_1079, iLocal_1078, 0x00001770, 0x00000000, 0x00000000);
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x790015DC92C918E2();
			func_258("ASS_VA_SNIPE1", 0x00001D4C, 0x00000001);
			if (bLocal_976)
			{
				func_405();
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
			}
			else
			{
				func_396();
			}
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_1019++;
			break;
		
		case 0x00000001:
			if (!unk_0x437347B10A200C4B(iLocal_1065, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
				{
					if (SYSTEM::TIMERA() > 0x00001770)
					{
						if (unk_0x20D6474D5F4B9FC6(iLocal_1065))
						{
							unk_0xC55F2A0377488064(iLocal_1065);
						}
						unk_0x4D3C3C0B0DE2663E(iLocal_1065, 0x00000066, "ASSOJva", 0x00000001);
						unk_0xF12C1D85AFEE8FAD(iLocal_1065, 4500f);
						unk_0x9C8F7A2F15781E10(iLocal_1065, 0x00000001);
						func_258("ASS_VA_SNIPE2", 0x00001D4C, 0x00000001);
						unk_0x86F44313DFA8F00C(iLocal_1078, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
						unk_0xC9CCB807979D3AC2(iLocal_1078, 0.5f);
						unk_0x3F803BEAA6CB36A8(iLocal_1078, 7f);
						unk_0x91F5B0244AAE6222(iLocal_1078, "HAND_SHAKE", 0.2f);
						unk_0x86F44313DFA8F00C(iLocal_1079, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
						unk_0xC9CCB807979D3AC2(iLocal_1079, 0.7f);
						unk_0x3F803BEAA6CB36A8(iLocal_1079, 10f);
						unk_0x91F5B0244AAE6222(iLocal_1079, "HAND_SHAKE", 0.2f);
						unk_0xF1E4C781086FABC1(iLocal_1079, iLocal_1078, 0x000007D0, 0x00000003, 0x00000003);
						iLocal_1019++;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0x437347B10A200C4B(iLocal_1065, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
				{
					if (unk_0x9901AABAC4D4C590(iLocal_1065) >= 7000f)
					{
						unk_0x0AD2DA9636D01093(iLocal_1065);
						iLocal_1017 = 0x00000000;
						while (iLocal_1017 < 0x00000003)
						{
							if (!unk_0x437347B10A200C4B(iLocal_941[iLocal_1017], 0x00000000))
							{
								if (iLocal_1017 == 0x00000000)
								{
									iVar0 = 0x000004E2;
								}
								else if (iLocal_1017 == 0x00000001)
								{
									iVar0 = 0x00000190;
								}
								else
								{
									iVar0 = 0x00000000;
								}
								if (unk_0xD1960163A3042274(iLocal_941[iLocal_1017], 0x0E763797) != 0x00000001)
								{
									unk_0xF82EA857DA10E0CD(&uLocal_1072);
									unk_0xDD353D0E9C789D0E(&uLocal_1072);
									unk_0x75CDA8644CD3B5F5(0x00000000, iVar0, 0x00000000);
									unk_0x96167B03C5A77156(0x00000000, vLocal_1052[iLocal_1017 /*3*/], 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
									unk_0x75ABDC5F81978924(uLocal_1072);
									unk_0x78ADC381772E3D54(iLocal_941[iLocal_1017], uLocal_1072);
									unk_0xF82EA857DA10E0CD(&uLocal_1072);
								}
							}
							iLocal_1017++;
						}
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_1019++;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (SYSTEM::TIMERA() >= 0x000007D0)
			{
				if (unk_0x6C3F127AAF415E69() == 0x00000004)
				{
					unk_0x86F44313DFA8F00C(iLocal_1078, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
					unk_0x91F5B0244AAE6222(iLocal_1078, "HAND_SHAKE", 0.2f);
					unk_0x86F44313DFA8F00C(iLocal_1079, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
					unk_0x91F5B0244AAE6222(iLocal_1079, "HAND_SHAKE", 0.2f);
					unk_0xF1E4C781086FABC1(iLocal_1079, iLocal_1078, 0x00000FA0, 0x00000003, 0x00000003);
					iLocal_1037 = 0x00000FA0;
				}
				else
				{
					unk_0x86F44313DFA8F00C(iLocal_1078, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
					unk_0x91F5B0244AAE6222(iLocal_1078, "HAND_SHAKE", 0.2f);
					unk_0x86F44313DFA8F00C(iLocal_1079, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
					unk_0x91F5B0244AAE6222(iLocal_1079, "HAND_SHAKE", 0.2f);
					unk_0xF1E4C781086FABC1(iLocal_1079, iLocal_1078, 0x00000FA0, 0x00000003, 0x00000003);
					iLocal_1037 = 0x00000FA0;
				}
				SYSTEM::SETTIMERA(0x00000000);
				iLocal_1019++;
			}
			break;
		
		case 0x00000004:
			if (!iLocal_1015)
			{
				if (unk_0x6C3F127AAF415E69() == 0x00000004)
				{
					if (SYSTEM::TIMERA() >= (iLocal_1037 - 0x0000012C))
					{
						unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
						iLocal_1015 = 0x00000001;
					}
				}
			}
			if (SYSTEM::TIMERA() >= iLocal_1037)
			{
				if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
				{
					if (unk_0x20D6474D5F4B9FC6(iLocal_1065))
					{
						unk_0xC55F2A0377488064(iLocal_1065);
					}
				}
				unk_0xDB8844D4B7C60440(0x00000066, "ASSOJva");
				unk_0xDB8844D4B7C60440(0x0000006B, "ASSOJva");
				unk_0x152BCACCF710B36E(iLocal_1065, 0x00000001, 0x00000001);
				unk_0x152BCACCF710B36E(iLocal_1065, 0x00000000, 0x00000001);
				unk_0x152BCACCF710B36E(iLocal_1065, 0x00000002, 0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (unk_0x6C3F127AAF415E69() == 0x00000004)
				{
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0x04B065D07D2FB5B9(0x00000001, 0f, 0x00000001, 0x00000000);
				}
				func_386(0x00000001, 0x00000001, 0x00000001);
				return 0x00000001;
			}
			break;
	}
	if (func_384(iLocal_336))
	{
		unk_0xA37A90C62806D848(0x00000001);
		func_382(0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_382(bool bParam0)
{
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
	{
		if (unk_0x20D6474D5F4B9FC6(iLocal_1065))
		{
			unk_0xC55F2A0377488064(iLocal_1065);
		}
		unk_0xDB8844D4B7C60440(0x00000066, "ASSOJva");
		unk_0xDB8844D4B7C60440(0x0000006B, "ASSOJva");
		unk_0xA47B46945FF6DE74(iLocal_1065, vLocal_1057, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(iLocal_1065, fLocal_1040);
		unk_0x152BCACCF710B36E(iLocal_1065, 0x00000000, 0x00000001);
		unk_0x152BCACCF710B36E(iLocal_1065, 0x00000001, 0x00000001);
		unk_0x152BCACCF710B36E(iLocal_1065, 0x00000002, 0x00000001);
		unk_0x152BCACCF710B36E(iLocal_1065, 0x00000002, 0x00000001);
		iLocal_1019 = 0x00000000;
		unk_0x790015DC92C918E2();
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		func_386(0x00000001, 0x00000001, 0x00000001);
		if (bParam0)
		{
			func_383();
		}
	}
}

void func_383()
{
	unk_0x82E51BCA72537B6C(0x000003E8);
	while (!unk_0x0F1CCD77290EE12F())
	{
		SYSTEM::WAIT(0x00000000);
	}
}

int func_384(int iParam0)
{
	if (func_385() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(0x000001F4);
		while (!unk_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_234(0x00000000);
		func_3();
		return 0x00000001;
	}
	return 0x00000000;
}

int func_385()
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

void func_386(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_388(0x00000000, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	func_387(0x00000017, 0x00000000);
}

void func_387(int iParam0, bool bParam1)
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

void func_388(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_395(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_15())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_394(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_395(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_394(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_392(unk_0xD803B885F5E47A62())) && !func_390(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_389()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_392(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_389()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_390(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_391(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_391(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_171();
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

int func_392(int iParam0)
{
	if (func_390(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_393())
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

bool func_393()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_394(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_395(int iParam0)
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

void func_396()
{
	func_397(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_404(), 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1266.173f, -214.0011f, 41.4459f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 310.0126f);
	}
}

void func_397(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_398(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_398(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
				func_403(iVar0);
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
					if (func_400(iVar0, vParam0, vParam1, fParam2))
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
				if (func_316(iVar0, func_18(), 0x00000001))
				{
					bVar1 = 0x00000000;
				}
			}
			if (bVar1)
			{
				if (!func_399(vParam5))
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

int func_399(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_400(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
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
		vVar0 = { func_402(vParam1 - vParam2) };
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
		if (((((((((((((((func_401(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar3) || func_401(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar3, vVar5)) || func_401(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar4, vVar5)) || func_401(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar4)) || func_401(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar3)) || func_401(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar3, vVar5)) || func_401(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar4, vVar5)) || func_401(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar4)) || func_401(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar3)) || func_401(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar3, vVar5)) || func_401(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar4, vVar5)) || func_401(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar4)) || func_401(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar3)) || func_401(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar3, vVar5)) || func_401(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar4, vVar5)) || func_401(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_401(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
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

Vector3 func_402(vector3 vParam0)
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

void func_403(int iParam0)
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

Vector3 func_404()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_405()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_1061, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 299.4985f);
	}
	if (unk_0xC844350D5D58C99A(iLocal_1068))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_1068, 0x00000000))
		{
			unk_0x56FDC9ADE35F7DB0(iLocal_1068, 0x00000000, 0x00000001, 0x00000000);
			unk_0xA47B46945FF6DE74(iLocal_1068, -1251.873f, -256.7999f, 38.2695f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(iLocal_1068, 296.7603f);
			unk_0xB9FD7450C0DAB575(iLocal_1068, 0x40A00000);
		}
	}
}

int func_406()
{
	iLocal_336 = unk_0x1C0640BA9A7327B3();
	return iLocal_336;
}

void func_407(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_234(0x00000000);
	func_388(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_387(0x00000017, 0x00000001);
}

void func_408()
{
	if (unk_0xC844350D5D58C99A(iLocal_1065))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_1065, 0x00000000))
		{
			iLocal_1017 = 0x00000000;
			while (iLocal_1017 < 0x00000003)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_941[iLocal_1017]))
				{
					if (iLocal_1017 == 0x00000000)
					{
						iLocal_941[iLocal_1017] = unk_0x852A19533F896693(iLocal_1065, 0x0000001A, iLocal_1075, 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (iLocal_1017 == 0x00000001)
					{
						iLocal_941[iLocal_1017] = unk_0x852A19533F896693(iLocal_1065, 0x0000001A, iLocal_1075, 0x00000000, 0x00000001, 0x00000001);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000003, 0x00000000, 0x00000001, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x0000000B, 0x00000000, 0x00000002, 0x00000000);
					}
					else if (iLocal_1017 == 0x00000002)
					{
						iLocal_941[iLocal_1017] = unk_0x852A19533F896693(iLocal_1065, 0x0000001A, iLocal_1076, 0x00000001, 0x00000001, 0x00000001);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000000, 0x00000001, 0x00000002, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000003, 0x00000000, 0x00000002, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000004, 0x00000000, 0x00000001, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(iLocal_941[iLocal_1017], 0x0000000B, 0x00000001, 0x00000001, 0x00000000);
					}
				}
				iLocal_1017++;
			}
		}
	}
}

void func_409()
{
	if (!unk_0xC844350D5D58C99A(iLocal_1065))
	{
		iLocal_1065 = unk_0x122AAB0B1D6F55AD(iLocal_1074, vLocal_1056, fLocal_1039, 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(iLocal_1074);
		unk_0xF3F7BF451A720FDF(iLocal_1065, 0x00000001);
		unk_0xE8832A9E16A57A1F(iLocal_1065, 0x00000001, 0x00000001);
		unk_0xB26AC67EF006D7D4(iLocal_1065, 0x00000001);
	}
}

void func_410(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_398(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

int func_411(float fParam0, int iParam1)
{
	int iVar0;
	
	if (((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && func_412(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), fParam0, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000)) && !unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_58(&iLocal_321))
		{
			func_56(&iLocal_321);
			if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
			{
				iVar0 = unk_0x728870EB733D12A1();
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					unk_0x1AEF7184B203A58D(iVar0, 0f);
				}
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
		}
		else if (func_52(&iLocal_321) > 1f || iParam1 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_412(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_413(iParam0);
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

void func_413(int iParam0)
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

void func_414()
{
	int iVar0;
	
	switch (iLocal_1018)
	{
		case 0x00000000:
			func_428(0x000001F4);
			func_310(0x00000000, "assassin_hotel_go_to_hotel", 0x00000000, 0x00000000, 0x00000000, 0x00000001);
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				func_258("ASS_VA_LOSECOPS", 0x00001D4C, 0x00000001);
			}
			unk_0x28F5E4DA506AC0CA(-1220.57f, -185.96f, 38.4f, 50f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_1018++;
			break;
		
		case 0x00000001:
			func_427();
			if (!unk_0xC844350D5D58C99A(iLocal_1070))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
						{
							iLocal_1070 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							if (unk_0xC844350D5D58C99A(iLocal_1070) && !unk_0x437347B10A200C4B(iLocal_1070, 0x00000000))
							{
								func_296(iLocal_1070);
							}
						}
					}
				}
			}
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (!func_424())
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_949))
					{
						iLocal_949 = func_423(vLocal_1061, 0x00000001);
						unk_0xDC5B2F9D0CCE3A10(iLocal_949, "ASS_VA_DESTBLIP");
						func_422(&iLocal_949, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_958)
						{
							func_258("ASS_VA_GOHOTEL", 0x00001D4C, 0x00000001);
							iLocal_958 = 0x00000001;
						}
						else if (func_421("ASS_VA_LOSECOPS", 0x00000000, 0x00000000))
						{
							unk_0x790015DC92C918E2();
						}
					}
				}
				else if (unk_0x07441E56330B63E3(uLocal_955) && func_420())
				{
					func_419();
					func_263();
					iLocal_931 = 0x00000008;
				}
			}
			else if (!func_424())
			{
				func_418(iLocal_949, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_37(0x00000003);
			}
			func_415();
			break;
	}
}

void func_415()
{
	if (!iLocal_957)
	{
		if (func_281(vLocal_1061, 0x00000001) <= 100f)
		{
			func_417();
			uLocal_955 = unk_0x372C0B8361DDE4D6(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 0x0000000C, 0x0000007F);
			iLocal_957 = 0x00000001;
		}
	}
	else if (func_281(vLocal_1061, 0x00000001) > 120f)
	{
		if (unk_0xBD054C76E6F4158B(uLocal_955))
		{
			unk_0x51F8DBE54C75AE47(uLocal_955);
			func_271();
			iLocal_957 = 0x00000000;
		}
	}
	else if (!unk_0xBD054C76E6F4158B(uLocal_955))
	{
		if (!func_416())
		{
			iLocal_957 = 0x00000000;
		}
	}
}

int func_416()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), joaat("taxi")))
		{
			if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_417()
{
	unk_0x523BCC9DC80CD82F(iLocal_1075);
	unk_0x523BCC9DC80CD82F(iLocal_1076);
}

void func_418(int iParam0, char* sParam1)
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0))
		{
			unk_0x142CC44DB769B57E(&iParam0);
			unk_0x790015DC92C918E2();
			func_258(sParam1, 0x00001D4C, 0x00000001);
		}
	}
}

void func_419()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_949))
	{
		unk_0x142CC44DB769B57E(&iLocal_949);
	}
}

int func_420()
{
	int iVar0;
	
	func_417();
	if (unk_0xB87F6CF6E5628C67(iLocal_1075) && unk_0xB87F6CF6E5628C67(iLocal_1076))
	{
		iVar0 = 0x00000001;
	}
	else
	{
		iVar0 = 0x00000000;
	}
	return iVar0;
}

bool func_421(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_422(int iParam0, vector3 vParam1, float fParam2)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		Global_1B052 = *iParam0;
		Global_1B057 = { vParam1 };
		Global_1B05B = fParam2;
	}
}

int func_423(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_206(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

int func_424()
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	fVar0 = func_32(iLocal_938, vLocal_1061, 0x00000001);
	if (fVar0 < 200f)
	{
		func_426();
	}
	if (func_425())
	{
		if (unk_0x5A91F08DF773C39D(iLocal_938, vLocal_1061, 25f, 25f, 90f, 0x00000001, 0x00000001, 0x00000000))
		{
			iVar1 = 0x00000001;
		}
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		if ((fVar0 < 2f || unk_0x5A91F08DF773C39D(iLocal_938, vLocal_1061, 2f, 2f, 2f, 0x00000001, 0x00000001, 0x00000000)) || iVar1)
		{
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (func_425() && iVar1)
				{
					return 0x00000001;
				}
				else if (!unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_425()
{
	int iVar0;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
	{
		iLocal_1068 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		iVar0 = unk_0x134B62B726CEC8E6(iLocal_1068);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_976 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_426()
{
	var uVar0;
	
	switch (iLocal_1025)
	{
		case 0x00000000:
			unk_0x523BCC9DC80CD82F(joaat("a_m_m_bevhills_01"));
			unk_0x523BCC9DC80CD82F(joaat("a_f_m_bevhills_01"));
			unk_0x523BCC9DC80CD82F(joaat("a_f_m_bevhills_02"));
			unk_0x523BCC9DC80CD82F(joaat("a_m_y_hipster_01"));
			unk_0x523BCC9DC80CD82F(joaat("taxi"));
			unk_0x29398344B9E5B8A7("OJAS_HotelTaxi01");
			unk_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@");
			if ((((((unk_0xB87F6CF6E5628C67(joaat("a_m_m_bevhills_01")) && unk_0xB87F6CF6E5628C67(joaat("a_f_m_bevhills_01"))) && unk_0xB87F6CF6E5628C67(joaat("a_f_m_bevhills_02"))) && unk_0xB87F6CF6E5628C67(joaat("taxi"))) && unk_0xB87F6CF6E5628C67(joaat("a_m_y_hipster_01"))) && unk_0xB4AE0788C1587752("oddjobs@assassinate@hotel@")) && unk_0x1C2E18E9C63BEB77("OJAS_HotelTaxi01"))
			{
				iLocal_1025++;
			}
			break;
		
		case 0x00000001:
			Local_1427[0x00000000] = unk_0x36F2404464202779(0x00000004, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0x00000001, 0x00000001);
			Local_1427[0x00000001] = unk_0x36F2404464202779(0x00000004, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427[0x00000000], 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427[0x00000001], 0x00000001);
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x0C8C0C840C2D1AD2(0x00000000, Local_1427[0x00000001], 0xFFFFFFFF, 0x00000000, 0x00000002);
			unk_0x0B7C52F2BC1DC8EB(0x00000000, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0x00000000, 0x00000000, 0x00000001);
			unk_0x75ABDC5F81978924(uVar0);
			if (!unk_0x437347B10A200C4B(Local_1427[0x00000000], 0x00000000))
			{
				unk_0x78ADC381772E3D54(Local_1427[0x00000000], uVar0);
			}
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x0C8C0C840C2D1AD2(0x00000000, Local_1427[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
			unk_0x0B7C52F2BC1DC8EB(0x00000000, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0x00000000, 0x00000000, 0x00000001);
			unk_0x75ABDC5F81978924(uVar0);
			if (!unk_0x437347B10A200C4B(Local_1427[0x00000001], 0x00000000))
			{
				unk_0x78ADC381772E3D54(Local_1427[0x00000001], uVar0);
			}
			unk_0xF82EA857DA10E0CD(&uVar0);
			Local_1427.f_4 = unk_0x122AAB0B1D6F55AD(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xB9FD7450C0DAB575(Local_1427.f_4, 0x40A00000);
			Local_1427.f_3 = unk_0x852A19533F896693(Local_1427.f_4, 0x00000004, joaat("a_m_y_hipster_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427.f_3, 0x00000001);
			unk_0x0C8C0C840C2D1AD2(Local_1427.f_3, Local_1427[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
			Local_1427.f_8[0x00000000] = unk_0x36F2404464202779(0x00000004, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 0x00000001, 0x00000001);
			Local_1427.f_8[0x00000001] = unk_0x36F2404464202779(0x00000004, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427.f_8[0x00000000], 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427.f_8[0x00000001], 0x00000001);
			unk_0xC6EB89C59F2AF6B8(Local_1427.f_8[0x00000000], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(Local_1427.f_8[0x00000001], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Local_1427.f_5[0x00000000] = unk_0x36F2404464202779(0x00000004, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 0x00000001, 0x00000001);
			Local_1427.f_5[0x00000001] = unk_0x36F2404464202779(0x00000004, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427.f_5[0x00000000], 0x00000001);
			unk_0x11AD11297DC58CC7(Local_1427.f_5[0x00000001], 0x00000001);
			unk_0xC6EB89C59F2AF6B8(Local_1427.f_5[0x00000000], "oddjobs@assassinate@hotel@", "base", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(Local_1427.f_5[0x00000001], "oddjobs@assassinate@hotel@", "base", 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			Local_1427.f_B = 0x00000001;
			unk_0x71199B01895C6202(joaat("a_m_m_bevhills_01"));
			unk_0x71199B01895C6202(joaat("a_f_m_bevhills_01"));
			unk_0x71199B01895C6202(joaat("a_f_m_bevhills_02"));
			unk_0x71199B01895C6202(joaat("a_m_y_hipster_01"));
			unk_0x71199B01895C6202(joaat("taxi"));
			iLocal_1025++;
			break;
		
		case 0x00000002:
			break;
	}
}

void func_427()
{
	vector3 vVar0;
	
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		iLocal_1011 = 0x00000001;
		return;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	}
	if (iLocal_1011)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			fLocal_1049 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_1061);
			iLocal_1011 = 0x00000000;
		}
	}
	else if (fLocal_1049 == 0f)
	{
		fLocal_1049 = SYSTEM::VDIST(-1510.291f, -946.9932f, 8.278f, vLocal_1061);
	}
	if (SYSTEM::VDIST(vVar0, vLocal_1061) > (fLocal_1049 + 400f))
	{
		func_37(0x00000007);
	}
	else if (SYSTEM::VDIST(vVar0, vLocal_1061) > (fLocal_1049 + 200f))
	{
		if (!iLocal_1007)
		{
			func_258("ASS_VA_RHOTEL", 0x00001D4C, 0x00000001);
			iLocal_1007 = 0x00000001;
		}
	}
}

void func_428(int iParam0)
{
	if (!unk_0x0F1CCD77290EE12F())
	{
		unk_0x82E51BCA72537B6C(iParam0);
		while (!unk_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

void func_429()
{
	var uVar0;
	float fVar1;
	
	if (unk_0xC844350D5D58C99A(iLocal_944))
	{
		func_434();
		if (!unk_0xEB6A8945D1AC98A1(iLocal_944))
		{
			fVar1 = func_29(iLocal_944, 0x00000001);
			unk_0xA245D14CC59CDD36(iLocal_944, 0x00000000);
			unk_0x7D732AB707BE9152(iLocal_944, 0x00000000);
			unk_0x25C5402CC10F76CD(iLocal_944, 0x00000000);
			unk_0x5E678B691C852774(iLocal_944, 0x00000010);
			unk_0x4E885A246A9D983A(iLocal_944, 0x000000D0, 0x00000001);
			if (fVar1 < 5f)
			{
				if (func_58(&iLocal_1105))
				{
					if (!func_28())
					{
						if (func_431(&iLocal_1105, 10f))
						{
							func_35(&uLocal_1112, 0x00000003, iLocal_944, "LESTER", 0x00000000, 0x00000001);
							func_6(&uLocal_1112, "OJASAUD", "OJAS_FOLLOW", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (unk_0x03068588A1FCED1A(iLocal_944) || !unk_0x0A059E0DB9253280(iLocal_944))
				{
					func_430();
				}
			}
			switch (iLocal_1016)
			{
				case 0x00000000:
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || (unk_0xC844350D5D58C99A(iLocal_944) && unk_0xB87D13D0C064E9D1(iLocal_944, unk_0x16F2683693E537C9(), 0x00000001))) || unk_0xB87D13D0C064E9D1(iLocal_1426, unk_0x16F2683693E537C9(), 0x00000001))
						{
							if (unk_0xB87D13D0C064E9D1(iLocal_1426, unk_0x16F2683693E537C9(), 0x00000001))
							{
							}
							unk_0x79C43E2BAC7C696F(iLocal_944, "move_lester_CaneUp", 0x3E800000);
							unk_0xC6EB89C59F2AF6B8(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, 0xFFFFFFFF, 0x000C1008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_1016 = 0x00000001;
						}
					}
					break;
				
				case 0x00000001:
					if (unk_0xB4ECF989E2C1DAC8(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 0x00000003))
					{
						if (unk_0x8CA9406E01C7EE58(iLocal_944, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							unk_0xDD353D0E9C789D0E(&uVar0);
							unk_0x96167B03C5A77156(0x00000000, -1502.029f, -948.687f, 7.65061f, 1f, 0x00004E20, 1f, 0x00000001, 0x471C4000);
							unk_0x96167B03C5A77156(0x00000000, -1462.339f, -964.178f, 6.3394f, 1f, 0xFFFFFFFF, 1f, 0x00000001, 0x471C4000);
							unk_0x01E4BB5190DF7317(0x00000000, unk_0xD9522BA9E27E1349(iLocal_944), 0x00000000);
							unk_0x75ABDC5F81978924(uVar0);
							unk_0x78ADC381772E3D54(iLocal_944, uVar0);
							unk_0xF82EA857DA10E0CD(&uVar0);
							unk_0xBD453909DC26A85D(iLocal_944, 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
							iLocal_1016 = 0x00000002;
						}
					}
					break;
				
				case 0x00000002:
					break;
				}
			}
	}
}

void func_430()
{
	if (unk_0xC844350D5D58C99A(iLocal_944))
	{
		unk_0xEBA53F35D0085654(&iLocal_944);
	}
}

int func_431(int iParam0, float fParam1)
{
	if (func_433(iParam0, fParam1))
	{
		func_432(iParam0);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_432(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

int func_433(int iParam0, float fParam1)
{
	if (func_58(iParam0))
	{
		if (func_52(iParam0) > fParam1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_434()
{
	if (unk_0xC844350D5D58C99A(iLocal_944))
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_944, unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_37(0x00000009);
		}
	}
}

void func_435()
{
	unk_0xC92DB9682A650680("ASS1_STOP");
	if (!unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
	{
		func_518();
	}
	func_436(0x00000000, 0xFFFFFFFF, 0x00000001);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	iLocal_931 = 0x00000012;
	func_428(0x000001F4);
}

void func_436(int iParam0, int iParam1, int iParam2)
{
	if (func_525() && func_438())
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
		func_437(0x00000000);
	}
}

void func_437(int iParam0)
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

bool func_438()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_439()
{
	while (iLocal_1025 < 0x00000002)
	{
		func_426();
		SYSTEM::WAIT(0x00000000);
	}
	func_409();
	func_382(0x00000000);
	if (!unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
	{
		func_518();
	}
	iLocal_985 = 0x00000000;
	iLocal_1009 = 0x00000000;
	unk_0x28F5E4DA506AC0CA(-1220.57f, -185.96f, 38.4f, 50f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
	unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0xC92DB9682A650680("ASS1_RESTART1");
	while (!func_420())
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_436(0x00000000, 0xFFFFFFFF, 0x00000001);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	iLocal_931 = 0x00000009;
	func_428(0x000001F4);
}

void func_440()
{
	func_436(0x00000000, 0xFFFFFFFF, 0x00000001);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	func_428(0x000001F4);
	iLocal_931 = 0x00000007;
}

void func_441()
{
	iLocal_1069[0x00000000] = unk_0x122AAB0B1D6F55AD(iLocal_1077, -1270.045f, -251.4953f, 41.4459f, 214.63f, 0x00000001, 0x00000001, 0x00000000);
	iLocal_1069[0x00000001] = unk_0x122AAB0B1D6F55AD(iLocal_1077, -1265.199f, -218.4823f, 45.9981f, 127.85f, 0x00000001, 0x00000001, 0x00000000);
}

void func_442()
{
	iLocal_1078 = unk_0xAE06CCC36C49929C(0x019286A9, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0x00000000, 0x00000002);
	iLocal_1079 = unk_0xAE06CCC36C49929C(0x019286A9, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0x00000000, 0x00000002);
}

int func_443()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (((((((((unk_0xB87F6CF6E5628C67(iLocal_1074) && unk_0xB87F6CF6E5628C67(iLocal_1077)) && unk_0x3DDA6C6A285628E4(0x00000066, "ASSOJva")) && unk_0x3DDA6C6A285628E4(0x0000006B, "ASSOJva")) && unk_0x1C2E18E9C63BEB77("OJASva_101")) && unk_0x1C2E18E9C63BEB77("OJASva_101a")) && unk_0x1C2E18E9C63BEB77("OJASva_104")) && unk_0xB4AE0788C1587752("ODDJOBS@ASSASSINATE@GUARD")) && unk_0xB4AE0788C1587752("oddjobs@assassinate@hotel@")) && unk_0x67C1D9E5B91B2E37(0x00000003))
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

void func_444()
{
	unk_0x523BCC9DC80CD82F(iLocal_1074);
	unk_0x523BCC9DC80CD82F(iLocal_1077);
	unk_0x3F423BF5B8125A50("ODDJOBS@ASSASSINATE@GUARD");
	unk_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@");
	unk_0xD7992BEF7A9D109E("ASS_VA", 0x00000003);
	unk_0x36187931D29E5BBE(0x00000066, "ASSOJva");
	unk_0x36187931D29E5BBE(0x0000006B, "ASSOJva");
	unk_0x29398344B9E5B8A7("OJASva_101");
	unk_0x29398344B9E5B8A7("OJASva_101a");
	unk_0x29398344B9E5B8A7("OJASva_104");
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE342F209E49C5314(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0x00000000, 0x00000001);
		unk_0xF858EFDE1871B5F2(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0x00000000, 0x00000001);
	}
	else
	{
		unk_0xE342F209E49C5314(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 0x00000001, 0x00000001);
		unk_0xF5894FEB702E7E76(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0x00000001);
	}
}

void func_446()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { -1220.344f, -193.4014f, 38.1754f };
	vVar1 = { -1279.658f, -222.0533f, 41.446f };
	func_35(&uLocal_1112, 0x00000001, iLocal_938, "FRANKLIN", 0x00000000, 0x00000001);
	unk_0x51B096AAC60548C1(0.2f);
	unk_0xF63400DBE3303D26("Guards", &iLocal_1080);
	unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_1080);
	unk_0x0E2400AB9174FA81(0x00000001, iLocal_1080, 0xA49E591C);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_1080, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, iLocal_1080);
	unk_0x536F1BE96C726C4B(-1220.57f, -185.96f, 38.4f, 200f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0x10F3BFFADF2CE3DA(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	iLocal_953 = unk_0x7D6CA5F52B3748BF(vVar0 - Vector(15f, 15f, 15f), vVar0 + Vector(15f, 15f, 15f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
	iLocal_954 = unk_0x7D6CA5F52B3748BF(vVar1 - Vector(45f, 35f, 35f), vVar1 + Vector(45f, 35f, 35f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
}

void func_447()
{
	StringCopy(&Local_919, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_919.f_6), {Global_F057}, 0x00000006);
	StringCopy(&(Local_919.f_C), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_919.f_12), "ASS_VA_BASE", 24);
	StringCopy(&(Local_919.f_18), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_919.f_1E), "ASS_VA_CASH", 24);
	StringCopy(&(Local_919.f_24), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_2A), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_30), "ASS_VA_COMP", 24);
	StringCopy(&(Local_919.f_36), "ASS_VA_COMP", 24);
}

void func_448()
{
	vLocal_1055 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1043 = 260.3612f;
	vLocal_1056 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1039 = 96.8755f;
	vLocal_1057 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1040 = 201.0763f;
	fLocal_1044 = 40f;
	Local_320.f_2 = 40f;
	vLocal_1052[0x00000000 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	vLocal_1052[0x00000001 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	vLocal_1052[0x00000002 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1045[0x00000000] = 157.3177f;
	fLocal_1045[0x00000001] = 58.3594f;
	fLocal_1045[0x00000002] = 65.6443f;
	vLocal_1054[0x00000000 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	vLocal_1054[0x00000001 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	vLocal_1054[0x00000002 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	vLocal_1054[0x00000003 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	vLocal_1054[0x00000004 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1041[0x00000000] = 160.0748f;
	fLocal_1041[0x00000001] = 58.3365f;
	fLocal_1041[0x00000002] = 58.0214f;
	fLocal_1041[0x00000003] = 97.6664f;
	fLocal_1041[0x00000004] = 225.8689f;
	iLocal_1017 = 0x00000000;
	while (iLocal_1017 <= 0x00000004)
	{
		fLocal_1042[iLocal_1017] = unk_0x79833B02DBD2A244(0f, 2f);
		iLocal_1017++;
	}
	fLocal_327 = 7000f;
	fLocal_328 = 2000f;
	iLocal_937 = 0x00000000;
	iLocal_1005 = 0x00000000;
	bLocal_1006 = 0x00000000;
	iLocal_991 = 0x00000000;
	bLocal_1014 = 0x00000000;
	iLocal_1013 = 0x00000000;
}

void func_449()
{
	switch (iLocal_1018)
	{
		case 0x00000000:
			unk_0xAE1670DD12E839C3("ASS_INT_2_ALT1", 0x00000008);
			unk_0x523BCC9DC80CD82F(joaat("ig_lestercrest"));
			unk_0x523BCC9DC80CD82F(joaat("prop_cs_walking_stick"));
			unk_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@leadin");
			unk_0x3F423BF5B8125A50("oddjobs@assassinate@hotel@leaning@");
			unk_0x4E09E67A27F104A7("move_lester_CaneUp");
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			if ((((unk_0xB87F6CF6E5628C67(joaat("ig_lestercrest")) && unk_0xB87F6CF6E5628C67(joaat("prop_cs_walking_stick"))) && unk_0xB4AE0788C1587752("oddjobs@assassinate@hotel@leadin")) && unk_0xB4AE0788C1587752("oddjobs@assassinate@hotel@leaning@")) && unk_0x59F02DA2266A744C("move_lester_CaneUp"))
			{
				iLocal_1018++;
			}
			break;
		
		case 0x00000001:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_407(0x00000038, 0x00000000, 0x00000001);
				func_410(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
				unk_0x536F1BE96C726C4B(-1507.715f, -941.1313f, 8.37286f, 10f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_1415, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), fLocal_1416);
				unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, 0xFFFFFFFF, 0x00000201, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0x9F4FE516EAACCFC5(iLocal_1417))
				{
					iLocal_1417 = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_1419, vLocal_1420, 42.2032f, 0x00000001, 0x00000002);
					unk_0x91F5B0244AAE6222(iLocal_1417, "HAND_SHAKE", 0.3f);
				}
				if (!unk_0x9F4FE516EAACCFC5(iLocal_1418))
				{
					iLocal_1418 = unk_0xAE06CCC36C49929C(0x019286A9, vLocal_1421, vLocal_1422, 42.2032f, 0x00000000, 0x00000002);
					unk_0xF1E4C781086FABC1(iLocal_1418, iLocal_1417, 0x00001388, 0x00000001, 0x00000001);
					unk_0x91F5B0244AAE6222(iLocal_1417, "HAND_SHAKE", 0.3f);
				}
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (func_46(0x00000000))
				{
					unk_0x82E51BCA72537B6C(0x00000320);
				}
				iLocal_1018++;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 0x00000003))
				{
					if (!func_58(&iLocal_1423))
					{
						func_55(&iLocal_1423);
					}
				}
				if (func_58(&iLocal_1423))
				{
					if (func_52(&iLocal_1423) > 6f)
					{
						iLocal_1018++;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (func_450())
			{
				iLocal_1018++;
			}
			break;
		
		case 0x00000004:
			func_388(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "Franklin", 0x00000000, 0x00000000, 0x00000000);
			}
			unk_0x29E8331978B73E7F(iLocal_944, "Lester", 0x00000002, joaat("ig_lestercrest"), 0x00000000);
			unk_0x29E8331978B73E7F(0x00000000, "WalkingStick_Lester", 0x00000002, joaat("prop_cs_walking_stick"), 0x00000000);
			unk_0x4C902758BEA97C68(0x00000000);
			unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			iLocal_1018++;
			break;
		
		case 0x00000005:
			if (unk_0x22A8E52414415B76())
			{
				unk_0x5CAFA5DD13658DFE(0x00000000);
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				iLocal_1018++;
			}
			break;
		
		case 0x00000006:
			if (unk_0x8C74DE122769E1BF())
			{
				unk_0x29D5132FBDCF2B1E(0x00000000);
			}
			if (!unk_0xC844350D5D58C99A(iLocal_944))
			{
				if (unk_0xFD68C8258EDA648C("Lester", 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Lester", 0x00000000)))
					{
						iLocal_944 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Lester", 0x00000000));
					}
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_945))
			{
				if (unk_0xFD68C8258EDA648C("WalkingStick_Lester", 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("WalkingStick_Lester", 0x00000000)))
					{
						iLocal_945 = unk_0x6450C2A9FBA3C3BF("WalkingStick_Lester", 0x00000000);
					}
				}
			}
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			if (unk_0x3148AE92ED70DC30("Franklin", 0x00000000))
			{
			}
			if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Lester", 0x00000000)))
			{
				if (unk_0x3148AE92ED70DC30("Lester", 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_944) && !unk_0xEB6A8945D1AC98A1(iLocal_944))
					{
						unk_0xA47B46945FF6DE74(iLocal_944, -1509.458f, -948.195f, 7.75f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xD8F6A53F4799FAFE(iLocal_944, -11f);
						unk_0xC6EB89C59F2AF6B8(iLocal_944, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, 0xFFFFFFFF, 0x000C1009, 0f, 0x00000000, 0x00000001, 0x00000000);
						unk_0xF895E10BF4C72645(iLocal_944, 0x00000000, 0x00000000);
					}
				}
			}
			if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Lester", 0x00000000)))
			{
				if (unk_0x3148AE92ED70DC30("WalkingStick_Lester", 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_944) && !unk_0xEB6A8945D1AC98A1(iLocal_944))
					{
						unk_0x9F528B1B53FBC5D9(iLocal_945, iLocal_944, unk_0x4A089F2B762B8D33(iLocal_944, 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					}
				}
			}
			if (unk_0x154B5473FBFD0156() && !unk_0x22A8E52414415B76())
			{
				func_388(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_944))
				{
					unk_0xAA6B3A4292417750(iLocal_944, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x46CB381A452EF99D(iLocal_944, 0x00000001);
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				if (unk_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0x00000000);
					unk_0x82E51BCA72537B6C(0x000001F4);
				}
				func_386(0x00000001, 0x00000001, 0x00000001);
				iLocal_1018++;
			}
			break;
		
		case 0x00000007:
			func_56(&iLocal_1105);
			func_263();
			iLocal_931 = 0x00000004;
			break;
	}
}

bool func_450()
{
	bool bVar0;
	
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_12B4D)
	{
		if (!bVar0)
		{
			Global_12B4D = 0x00000001;
		}
	}
	return bVar0;
}

void func_451()
{
	if (!unk_0xC844350D5D58C99A(iLocal_1426))
	{
		iLocal_1426 = unk_0x4B72871A3BE7B474(-1510.103f, -947.7194f, 8.2332f, 5f, 0xE7ED1A59, 0x00000001, 0x00000000, 0x00000001);
	}
}

void func_452()
{
	int iVar0;
	
	if (iLocal_931 > 0x00000007)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar0 = unk_0x4EF27AB24893425F();
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						if ((iVar0 != iLocal_1071[0x00000000] && iVar0 != iLocal_1071[0x00000001]) && iVar0 != iLocal_1071[0x00000002])
						{
							if (iLocal_1036 >= 0x00000002)
							{
								iLocal_1036 = 0xFFFFFFFF;
							}
							iLocal_1071[iLocal_1036 + 1] = iVar0;
							unk_0x73270B3C9CC833FD(iLocal_1071[iLocal_1036 + 1], 0x00000001, 0x00000000);
							unk_0xD2DE0C6B4149D1D2(iLocal_1071[iLocal_1036 + 1], 0x00000000);
							iLocal_1036++;
						}
					}
				}
			}
		}
	}
}

void func_453()
{
	int iVar0;
	
	if (iLocal_1003)
	{
		iVar0 = func_36(0x428C0000, 0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(iVar0))
		{
			func_34(iVar0, 0x00000003, "OJAvaGUARD");
			func_6(&uLocal_1112, "OJASAUD", "OJASva_SPOT", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
		}
	}
}

void func_454()
{
	int iVar0;
	vector3 vVar1;
	
	if (Local_1427.f_B)
	{
		if (!bLocal_994)
		{
			if (iLocal_931 < 0x0000000A)
			{
				if (func_460())
				{
					iVar0 = func_36(0x428C0000, 0x00000001);
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iVar0, 0x00000000))
					{
						if (func_29(iVar0, 0x00000000) < 10f)
						{
							vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
							vVar1 = { vVar1 };
							func_35(&uLocal_1112, 0x00000003, iVar0, "OJAvaGuard", 0x00000000, 0x00000001);
							func_6(&uLocal_1112, "OJASAUD", "OJASva_AT_EX", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					func_459();
					bLocal_994 = 0x00000001;
				}
				if (iLocal_959)
				{
					func_459();
					bLocal_994 = 0x00000001;
				}
				else
				{
					func_458();
					func_455();
				}
			}
		}
	}
}

void func_455()
{
	if (bLocal_965)
	{
		if (IntToFloat(iLocal_1033) < (IntToFloat(iLocal_1030) - 5f))
		{
			func_457(Local_1427.f_8[0x00000000], 0x00000001);
			func_457(Local_1427.f_8[0x00000001], 0x00000001);
			func_457(Local_1427.f_5[0x00000000], 0x00000001);
			func_457(Local_1427.f_5[0x00000001], 0x00000001);
		}
		else
		{
			if ((func_29(Local_1427.f_8[0x00000000], 0x00000000) < 1f || func_29(Local_1427.f_8[0x00000001], 0x00000000) < 1f) || iLocal_963)
			{
				func_456(Local_1427.f_8[0x00000000], 0x00000001);
				func_456(Local_1427.f_8[0x00000001], 0x00000001);
			}
			if (!iLocal_963)
			{
				func_456(Local_1427.f_5[0x00000000], 0x00000000);
				func_456(Local_1427.f_5[0x00000001], 0x00000000);
			}
			else
			{
				func_456(Local_1427.f_5[0x00000000], 0x00000001);
				func_456(Local_1427.f_5[0x00000001], 0x00000001);
			}
		}
	}
}

void func_456(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000001)
		{
			if (func_29(iParam0, 0x00000000) < 1f || iParam1)
			{
				func_457(iParam0, 0x00000001);
			}
		}
	}
}

void func_457(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if ((bParam1 && unk_0xD1960163A3042274(iParam0, 0x0E763797) != 0x00000001) || !bParam1)
		{
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0xB87AD42E3FA06BDE(0x00000000, -1214.343f, -132.1107f, 40.2416f, 1f, 0x00000000, 0x00000000, 0x000C00AB, 0xBF800000);
			unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(iParam0, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
	}
}

void func_458()
{
	int iVar0;
	
	switch (iLocal_1026)
	{
		case 0x00000000:
			if (((iLocal_979 || iLocal_963) || func_29(Local_1427[0x00000000], 0x00000000) < 1f) || func_29(Local_1427[0x00000001], 0x00000000) < 1f)
			{
				if (!unk_0x437347B10A200C4B(Local_1427[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B(Local_1427[0x00000001], 0x00000000))
				{
					unk_0x0C8C0C840C2D1AD2(Local_1427[0x00000000], Local_1427[0x00000001], 0xFFFFFFFF, 0x00000000, 0x00000002);
					unk_0x0C8C0C840C2D1AD2(Local_1427[0x00000001], Local_1427[0x00000000], 0xFFFFFFFF, 0x00000000, 0x00000002);
				}
				if (((unk_0xC844350D5D58C99A(Local_1427[0x00000001]) && unk_0xC844350D5D58C99A(Local_1427.f_4)) && !unk_0xEB6A8945D1AC98A1(Local_1427[0x00000001])) && unk_0xDF1306B443CD3D15(Local_1427.f_4, 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(Local_1427[0x00000001]);
					unk_0x5B1D360B9C6F0A09(Local_1427[0x00000001], Local_1427.f_4, 0x00004E20, 0x00000002, 1f, 0x00000001, 0x00000000);
				}
				if (!func_58(&iLocal_1096))
				{
					func_55(&iLocal_1096);
				}
				iLocal_1026++;
			}
			break;
		
		case 0x00000001:
			if (!iLocal_999)
			{
				if (func_58(&iLocal_1096))
				{
					if (func_52(&iLocal_1096) > 3f)
					{
						if (((unk_0xC844350D5D58C99A(Local_1427[0x00000000]) && unk_0xC844350D5D58C99A(Local_1427.f_4)) && !unk_0xEB6A8945D1AC98A1(Local_1427[0x00000000])) && unk_0xDF1306B443CD3D15(Local_1427.f_4, 0x00000000))
						{
							if (unk_0xD1960163A3042274(Local_1427[0x00000000], 0x950B6492) != 0x00000001)
							{
								unk_0xA3BF0AA5A2608191(Local_1427[0x00000000]);
								unk_0x5B1D360B9C6F0A09(Local_1427[0x00000000], Local_1427.f_4, 0x00004E20, 0x00000001, 1f, 0x00000001, 0x00000000);
								iLocal_999 = 0x00000001;
							}
						}
					}
				}
				else
				{
					func_55(&iLocal_1096);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_1427[0x00000000]) && !unk_0xEB6A8945D1AC98A1(Local_1427[0x00000001]))
			{
				if (unk_0xC42A92762C58E1B9(Local_1427[0x00000000], Local_1427.f_4, 0x00000000) && unk_0xC42A92762C58E1B9(Local_1427[0x00000001], Local_1427.f_4, 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(Local_1427.f_3, 0x00000000) && !unk_0x437347B10A200C4B(Local_1427.f_4, 0x00000000))
					{
						unk_0xBC43ED9FE28DB191(Local_1427.f_3);
						func_56(&iLocal_1096);
					}
					iLocal_1026++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_58(&iLocal_1096))
			{
				if (func_52(&iLocal_1096) > 3f)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_1427.f_3) && unk_0xDF1306B443CD3D15(Local_1427.f_4, 0x00000000))
					{
						unk_0x1B901F542DF070CF(Local_1427.f_3, Local_1427.f_4, "OJAS_HotelTaxi01", 0x000C0035, 0x00000000, 0x00000010, 0xFFFFFFFF, 10f, 0x00000000, 2f);
						iLocal_1026++;
					}
				}
			}
			break;
		
		case 0x00000003:
			if (!unk_0x437347B10A200C4B(Local_1427.f_3, 0x00000000) && !unk_0x437347B10A200C4B(Local_1427.f_4, 0x00000000))
			{
				if (!unk_0xDD4B920CF5E7E9EC(Local_1427.f_4) || iLocal_1002)
				{
					unk_0xE072601B4380E9DF(Local_1427.f_3, Local_1427.f_4, 10f, 0x000C00AB);
					iLocal_1026++;
				}
			}
			break;
		
		case 0x00000004:
			if (iLocal_1002)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_942[0x00000000]))
				{
					iVar0 = iLocal_942[0x00000000];
				}
				else
				{
					iVar0 = func_31(25f);
				}
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!func_28())
						{
							func_34(iVar0, 0x00000005, "OJAvaGUARD");
							func_6(&uLocal_1112, "OJASAUD", "OJASva_LEAVE", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
				func_56(&iLocal_1096);
				iLocal_1026++;
			}
			break;
		
		case 0x00000005:
			break;
	}
}

void func_459()
{
	if ((unk_0xC844350D5D58C99A(Local_1427.f_3) && !unk_0x437347B10A200C4B(Local_1427.f_3, 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427.f_3, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
	if ((unk_0xC844350D5D58C99A(Local_1427[0x00000000]) && !unk_0x437347B10A200C4B(Local_1427[0x00000000], 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427[0x00000000], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xBAFED2F6486F771A(Local_1427[0x00000000], 0x00000002, 0x00000000);
	}
	if ((unk_0xC844350D5D58C99A(Local_1427[0x00000001]) && !unk_0x437347B10A200C4B(Local_1427[0x00000001], 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427[0x00000001], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0xBAFED2F6486F771A(Local_1427[0x00000001], 0x00000002, 0x00000000);
	}
	if ((unk_0xC844350D5D58C99A(Local_1427.f_8[0x00000000]) && !unk_0x437347B10A200C4B(Local_1427.f_8[0x00000000], 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427.f_8[0x00000000], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
	if ((unk_0xC844350D5D58C99A(Local_1427.f_8[0x00000001]) && !unk_0x437347B10A200C4B(Local_1427.f_8[0x00000001], 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427.f_8[0x00000001], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
	if ((unk_0xC844350D5D58C99A(Local_1427.f_5[0x00000000]) && !unk_0x437347B10A200C4B(Local_1427.f_5[0x00000000], 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427.f_5[0x00000000], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
	if ((unk_0xC844350D5D58C99A(Local_1427.f_5[0x00000001]) && !unk_0x437347B10A200C4B(Local_1427.f_5[0x00000001], 0x00000000)) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0xF3268524E9BE6D6E(Local_1427.f_5[0x00000001], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
	}
}

int func_460()
{
	if (!unk_0x437347B10A200C4B(Local_1427.f_3, 0x00000000))
	{
		if (unk_0x36646919F20EAFFC(Local_1427.f_3))
		{
			if (unk_0x710D117BA581D7D2(Local_1427.f_3) == unk_0x16F2683693E537C9())
			{
				return 0x00000001;
			}
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(Local_1427.f_4, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Local_1427.f_4, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (func_118(Local_1427[0x00000000], 0x00000000, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_118(Local_1427[0x00000001], 0x00000000, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_118(Local_1427.f_8[0x00000000], 0x00000000, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_118(Local_1427.f_8[0x00000001], 0x00000000, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_118(Local_1427.f_5[0x00000000], 0x00000000, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_118(Local_1427.f_5[0x00000001], 0x00000000, &Local_320, &iLocal_325, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_117(Local_1427.f_4))
	{
		return 0x00000001;
	}
	if (unk_0x681F21BF9F7B449B(0xFFFFFFFF, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_461()
{
	func_526();
}

int func_462()
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

void func_463(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_525())
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
		func_437(0x00000001);
	}
}

int func_464(vector3 vParam0, float fParam1)
{
	return func_465(&(Global_19AE3.f_B4A), vParam0, fParam1, 0x00000000);
}

int func_465(var uParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_514(uParam0))
	{
		if (func_50(vParam1, 0f, 0f, 0f, 0x00000000))
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
		if (func_513(uParam0))
		{
			unk_0x536F1BE96C726C4B(vParam1, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_512(vParam1, 5f, 0x00000000);
			iVar0 = unk_0x122AAB0B1D6F55AD(uParam0->f_C.f_42, vParam1, fParam2, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x08841CDB215AE18F(iVar0, vParam1, 0x00000000, 0x00000000, 0x00000001);
				}
				func_496(iVar0, &(uParam0->f_C), 0x00000000, 0x00000001);
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
							func_495(uParam0->f_B, 0x00000001);
						}
						else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar0)))
						{
							func_495(uParam0->f_B, 0x00000002);
						}
					}
					unk_0x316958DDB94DF3FC(iVar0, 0x00000000);
					unk_0x626D5ADA3EFAE431(iVar0, 0x00000000);
					unk_0x44A200C9B6E1CEA6(iVar0, 0x00000001);
					func_494(iVar0, uParam0->f_B);
				}
				else if ((!func_491(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x7F8A39872A07D2CE(unk_0xBB0808A181D4745C(), "startup_positioning"))
				{
					iVar4 = func_490(iVar0);
					if (iVar4 == 0xFFFFFFFF)
					{
						uParam0->f_A = 0x00000000;
					}
					else
					{
						func_485(iVar4);
					}
				}
				if (((Global_181B8 != 0x0000000D && Global_181B8 != 0x0000000A) && Global_181B8 != 0x0000000B) && Global_181B8 != 0x0000000C)
				{
					if (unk_0x12AB0310C2281427(&(Global_181B8.f_3)) == Global_12A8D)
					{
						if (uParam0->f_C.f_42 == Global_1B416.f_7FE8.f_45[0x00000015 /*78*/].f_42)
						{
							func_482(0x00000018, 0x00000000);
							func_485(0x00000018);
						}
					}
				}
				if (uParam0->f_9 == 0x00000001)
				{
					func_466(iVar0, uParam0->f_B);
				}
				unk_0x71199B01895C6202(uParam0->f_C.f_42);
				vVar1 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_467(iParam0))
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
	func_305(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_467(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_316(iParam0, 0x00000000, 0x00000000)) || func_316(iParam0, 0x00000001, 0x00000000)) || func_316(iParam0, 0x00000002, 0x00000000)) || func_301(iParam0) != 0x00000091) || func_481(iParam0)) || func_480(iParam0)) || func_479(iParam0)) || func_478(iParam0)) || !func_468(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_480(iParam0))
		{
		}
		if (func_480(iParam0))
		{
		}
		if (func_316(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_316(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_316(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_301(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_468(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_469(iParam0, 0x00000000))
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

int func_469(int iParam0, bool bParam1)
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
		if (!func_477())
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
		if ((((!func_476() && !func_475()) && !func_474()) && !func_473()) && !func_477())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_474())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_472(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_470(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_470(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_471())
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

int func_471()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_472(int iParam0)
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

int func_473()
{
	return 0x00000000;
}

int func_474()
{
	return 0x00000001;
}

int func_475()
{
	return 0x00000001;
}

int func_476()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_477()
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

int func_478(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_469(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_479(int iParam0)
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

int func_480(int iParam0)
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

int func_481(int iParam0)
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

void func_482(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_484(iParam0, 0x00000000))
		{
			func_483(iParam0, 0x00000001, 0x00000000);
			func_483(iParam0, 0x00000002, 0x00000000);
			func_483(iParam0, 0x00000003, 0x00000000);
			func_483(iParam0, 0x00000004, 0x00000000);
			func_483(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_483(iParam0, 0x00000000, 0x00000000);
	}
}

void func_483(int iParam0, int iParam1, bool bParam2)
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

bool func_484(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_485(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_489(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
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
			if (((((iParam0 == 0x00000018 && func_484(iParam0, 0x00000000)) && Global_12A3E.f_42 == 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] != 0x00000000) && Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] > 0x00000003) && (!func_487(0x00000000, Global_126B1.f_22B[0x00000000 /*21*/].f_C) || !func_487(0x00000001, Global_126B1.f_22B[0x00000000 /*21*/].f_C)))
			{
				func_486(&(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]), &Global_12A3E);
				Global_12A8C = Global_1B416.f_7FE8.f_15D7;
			}
			func_482(iParam0, 0x00000000);
		}
	}
}

void func_486(var uParam0, var uParam1)
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

int func_487(int iParam0, int iParam1)
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
	if (iParam0 < 0x00000000 || iParam0 >= func_488(&(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/])))
	{
		return 0x00000000;
	}
	return func_469(Global_1B416.f_7FE8.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0x00000000);
}

int func_488(var uParam0)
{
	return *uParam0;
}

int func_489(var uParam0, int iParam1)
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
			uParam0->f_4 = func_303(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_303(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_303(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_303(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_303(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_303(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_303(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_303(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_303(0x00000002, 0x00000001);
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
			if (func_477())
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
			if (func_477())
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
		if (!func_50(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
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
		if (!func_50(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_50(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_490(int iParam0)
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

int func_491(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_493(iParam0, Global_126B1.f_8B[0x00000026], 0x00000000))
			{
				func_485(0x00000026);
				return 0x00000001;
			}
			break;
		
		case 0x73920F8E:
			if (func_493(iParam0, Global_126B1.f_8B[0x0000002B], 0x00000001))
			{
				func_485(0x0000002B);
				return 0x00000001;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar1);
			iVar3 = 0x00000000;
			while (iVar3 <= (iVar2 - 0x00000001))
			{
				if (func_493(iParam0, uVar1[iVar3], 0x00000001) && func_492(unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 2136.133f, 4780.563f, 39.9702f, 5f, 0x00000000))
				{
					if ((!bParam2 || func_50(vParam1, 0f, 0f, 0f, 0x00000000)) || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(uVar1[iVar3], 0x00000001), 0x00000001) < 10f)
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
					func_485(0x0000000E);
					return 0x00000001;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000014]) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000014], 0x00000000))
			{
				if (unk_0x134B62B726CEC8E6(Global_126B1.f_1E4[0x00000014]) == joaat("swift2") && unk_0xF22DC2D0CA24A151(iParam0) == unk_0xF22DC2D0CA24A151(Global_126B1.f_1E4[0x00000014]))
				{
					func_485(0x00000014);
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_492(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_493(int iParam0, int iParam1, bool bParam2)
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

void func_494(int iParam0, int iParam1)
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

void func_495(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (iParam0 == 0x00000091 || Global_17755[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000000 || unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == func_303(iParam0, iParam1))
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

void func_496(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (!func_505(iParam0))
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
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_306(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_306(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 0x00000001;
			if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_306(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_306(iVar1 + 1));
			}
		}
		else if (uParam1->f_42 == 0x1446590A || uParam1->f_42 == 0x8B213907)
		{
			iVar2 = 0x00000001;
			while (iVar2 <= 0x00000009)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_306(iVar2)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_306(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_42 == 0x58F77553)
		{
			iVar3 = 0x00000001;
			while (iVar3 <= 0x00000006)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_306(iVar3)))
				{
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_306(iVar3));
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
					if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_306(iVar4)))
					{
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_306(iVar4));
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
		if (((unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, 0x0000000F) || func_504(iParam0)) || (((uParam1->f_3E == 0x00000000 && uParam1->f_3F == 0x00000000) && uParam1->f_40 == 0x00000000) && uParam1->f_9[0x00000014] > 0x00000000)) && func_503())
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_308(uParam1->f_42))
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
						func_502(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_502(iParam0, uParam1->f_45);
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
			func_497(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0xAFB8495D36825275(uParam1->f_42) && !unk_0xA7082C42B8809BF2(uParam1->f_42))
		{
			iVar5 = 0x00000000;
			while (iVar5 <= 0x0000000B)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam1->f_4D, func_306(iVar5 + 1)))
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

int func_497(int iParam0, var uParam1, var uParam2)
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
	if (func_501(unk_0x134B62B726CEC8E6(*iParam0), 0x00000001) && unk_0x0ECB5CA5140957AD(*iParam0, 0x00000018) != func_500(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)))
	{
		unk_0xEE6A1776A67F70C1(*iParam0, 0x00000018, func_500(*iParam0, ((*uParam1)[0x00000026] - 0x00000001)), 0x00000000);
	}
	func_499(iParam0);
	if (func_498(*iParam0))
	{
		unk_0xD5A0214B20BCBAD8(*iParam0, 0x00000001);
		unk_0x44A200C9B6E1CEA6(*iParam0, 0x00000001);
	}
	return 0x00000001;
}

int func_498(int iParam0)
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

void func_499(var uParam0)
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

int func_500(int iParam0, int iParam1)
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

int func_501(int iParam0, int iParam1)
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

void func_502(int iParam0, int iParam1)
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

bool func_503()
{
	return unk_0xC146D5FBD23C6954(0x9B328228);
}

int func_504(int iParam0)
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

int func_505(int iParam0)
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!func_511(unk_0xD803B885F5E47A62(), 0xFFFFFFFF))
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
	if (func_507(unk_0xD803B885F5E47A62()) == 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (func_506(iParam0) != 0xFFFFFFFF)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_506(int iParam0)
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

int func_507(int iParam0)
{
	if (func_510(iParam0) == 0x000000E9)
	{
		return func_508(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_508(int iParam0)
{
	if (func_509(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_509(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_510(int iParam0)
{
	if (func_509(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_73(iParam0, 0x00000001, 0x00000001))
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

void func_512(vector3 vParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (func_489(&(Global_126B1.f_22B[0x00000000 /*21*/]), iVar0))
		{
			if (unk_0x0EB28750412C3A5A(vParam0, Global_126B1.f_22B[0x00000000 /*21*/], bParam2) <= fParam1)
			{
				func_485(iVar0);
			}
		}
		iVar0++;
	}
}

int func_513(var uParam0)
{
	if (func_514(uParam0))
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

int func_514(var uParam0)
{
	if (uParam0->f_C.f_42 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_469(uParam0->f_C.f_42, 0x00000000))
	{
		return 0x00000000;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_492(*uParam0, 1694.62f, 3276.27f, 41.31f, 0x3F000000, 0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_515()
{
	return func_513(&(Global_19AE3.f_B4A));
}

void func_516()
{
	func_517(&(Global_19AE3.f_B4A));
}

void func_517(var uParam0)
{
	if (func_514(uParam0))
	{
		unk_0x523BCC9DC80CD82F(uParam0->f_C.f_42);
	}
}

void func_518()
{
	if (unk_0xBD054C76E6F4158B(uLocal_955))
	{
		unk_0x51F8DBE54C75AE47(uLocal_955);
	}
}

int func_519()
{
	if (!Global_181B8 == 0x0000000A && !Global_181B8 == 0x00000009)
	{
		return 0x00000000;
	}
	return Global_181B8.f_2;
}

struct<39> func_520(int iParam0)
{
	struct<39> Var0;
	
	if (iParam0 == 0x00000000)
	{
		Var0 = 0x00000001;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_521(0x00000000) };
		Var0.f_16 = "Assassin_Valet";
		Var0.f_17 = 7000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = 0xFFFFFFFF;
		Var0.f_19 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_1C = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_1F = 35.4714f;
		Var0.f_A = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_D = { -4.8332f, 0f, -177.1283f };
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_21 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_24 = 162.4559f;
		Var0.f_25 = 0x00000001;
	}
	else if (iParam0 == 0x00000001)
	{
		Var0 = 0x00000000;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_521(0x00000001) };
		Var0.f_16 = "Assassin_Multi";
		Var0.f_17 = 5000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = 0xFFFFFFFF;
		Var0.f_19 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_1C = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_1F = 78.0874f;
		Var0.f_A = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_D = { -13.5249f, 0f, 30.6033f };
		Var0.f_10 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_13 = { -22.5196f, 0f, -43.0435f };
		Var0.f_21 = { 0f, 0f, 0f };
		Var0.f_24 = 0f;
		Var0.f_25 = 0x00000000;
	}
	else if (iParam0 == 0x00000002)
	{
		Var0 = 0x00000000;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_521(0x00000002) };
		Var0.f_16 = "Assassin_Hooker";
		Var0.f_17 = 3000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = 0xFFFFFFFF;
		Var0.f_19 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_1C = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_1F = 140.1039f;
		Var0.f_A = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_D = { -25.1365f, 0f, 41.3912f };
		Var0.f_10 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_13 = { -16.3326f, 0f, -127.0114f };
		Var0.f_21 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_24 = 344.0112f;
		Var0.f_25 = 0x00000000;
	}
	else if (iParam0 == 0x00000003)
	{
		Var0 = 0x00000000;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_521(0x00000003) };
		Var0.f_16 = "Assassin_Bus";
		Var0.f_17 = 5000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = 0xFFFFFFFF;
		Var0.f_19 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_1C = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_1F = 1.4374f;
		Var0.f_A = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_D = { -21.2059f, 0f, -109.0176f };
		Var0.f_10 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_13 = { -27.0037f, 0f, 29.464f };
		Var0.f_21 = { 0f, 0f, 0f };
		Var0.f_24 = 0f;
		Var0.f_25 = 0x00000000;
	}
	else if (iParam0 == 0x00000004)
	{
		Var0 = 0x00000000;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_521(0x00000004) };
		Var0.f_16 = "Assassin_Construction";
		Var0.f_17 = 8000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = 0x00000001;
		Var0.f_19 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_1C = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_1F = 69.6524f;
		Var0.f_A = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_D = { -20.8953f, 0f, -132.9451f };
		Var0.f_10 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_13 = { -1.5585f, 0f, 6.9143f };
		Var0.f_21 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_24 = 287.8741f;
		Var0.f_25 = 0x00000000;
	}
	return Var0;
}

Vector3 func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 0x00000001:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 0x00000002:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 0x00000003:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 0x00000004:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_522()
{
	bool bVar0;
	
	bVar0 = func_124(Global_1B416.f_4DF6.f_1, 0x00001000);
	Global_1B416.f_4DF6.f_1 = 0x00000000;
	if (bVar0)
	{
		func_533(&(Global_1B416.f_4DF6.f_1), 0x00001000);
	}
}

void func_523()
{
}

bool func_524()
{
	return func_514(&(Global_19AE3.f_B4A));
}

int func_525()
{
	if (Global_181B8 == 0x0000000A || Global_181B8 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_526()
{
	if (func_58(&iLocal_1084))
	{
		Global_1B416.f_4DF6.f_5 = func_52(&iLocal_1084);
	}
	if (!iLocal_1001)
	{
		unk_0xC92DB9682A650680("ASS1_LOST");
	}
	unk_0x42740B44BA8D7B43("SCRIPT\ASSASSINATION_MULTI");
	func_272();
	func_255();
	func_260();
	func_261(0x00000001);
	func_419();
	func_530();
	func_445(0x00000000);
	func_3();
	if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000000]))
	{
		unk_0x73270B3C9CC833FD(Global_17409.f_1C[0x00000000], 0x00000001, 0x00000001);
		unk_0xEEEE2E5FA6F78DF0(&(Global_17409.f_1C[0x00000000]));
	}
	unk_0x2952D66A502EA873(iLocal_953, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_954, 0x00000000);
	func_518();
	func_92(&uLocal_1277, 0x00000000, 0x00000000);
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		func_528(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0xD5EF6A937E06E46F(unk_0x16F2683693E537C9(), 0x00000000, 0xFFFFFFFF, 0x00000000);
	}
	unk_0x51B096AAC60548C1(1f);
	unk_0xEFED0CD6E25037B9();
	unk_0xC05DBA7D4F88D5E5(iLocal_1075, 0x00000000);
	unk_0xC05DBA7D4F88D5E5(iLocal_1076, 0x00000000);
	func_527();
	unk_0x10FAF14A60A0DBE1();
}

void func_527()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_281(vLocal_1052[iVar0 /*3*/], 0x00000001) < 5f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1223.185f, -185.4723f, 38.1753f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000000))
		{
			if (iVar0 != 0x00000000 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_529(iParam1, iVar0))
				{
					iVar0 = 0x00000000;
				}
			}
		}
	}
	if (Global_181DD > 0x00000000)
	{
		Global_19AE3.f_15[iParam1] = iVar0;
	}
	else
	{
		Global_18F3B.f_15[iParam1] = iVar0;
	}
}

int func_529(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_181DD > 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			if (Global_19AE3.f_32C[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_19AE3.f_32C[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			if (Global_19AE3.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_19AE3.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			if (Global_18F3B.f_32C[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_18F3B.f_32C[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			if (Global_18F3B.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/] == iParam1)
			{
				if (Global_18F3B.f_32C[iParam0 /*477*/].f_DD[iVar0 /*5*/].f_1 > 0x00000000)
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

void func_530()
{
	unk_0xDB8844D4B7C60440(0x00000066, "ASSOJva");
	unk_0xDB8844D4B7C60440(0x0000006B, "ASSOJva");
	unk_0x2F3540C2227116A3("OJASva_101");
	unk_0x2F3540C2227116A3("OJASva_101a");
	unk_0x2F3540C2227116A3("OJASva_104");
}

void func_531()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_46(0x00000000))
	{
		if (!func_532())
		{
			iVar0 = func_45();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_39(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_44();
		}
	}
}

int func_532()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_533(var uParam0, int iParam1)
{
	func_534(uParam0, iParam1);
}

void func_534(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

