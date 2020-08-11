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
	vector3 vLocal_43 = { 0f, 0f, 0f };
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	char* sLocal_107 = NULL;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 12;
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
	var uLocal_812 = 1065353216;
	int iLocal_813 = 0;
	struct<9> Local_814 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	vector3 vLocal_819[40] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	char cLocal_824[32] = "";
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	vector3 vLocal_829 = { 0f, 0f, 0f };
	vector3 vLocal_830 = { 0f, 0f, 0f };
	vector3 vLocal_831 = { 0f, 0f, 0f };
	vector3 vLocal_832 = { 0f, 0f, 0f };
	vector3 vLocal_833 = { 0f, 0f, 0f };
	vector3 vLocal_834 = { 0f, 0f, 0f };
	vector3 vLocal_835 = { 0f, 0f, 0f };
	vector3 vLocal_836 = { 0f, 0f, 0f };
	vector3 vLocal_837 = { 0f, 0f, 0f };
	vector3 vLocal_838 = { 0f, 0f, 0f };
	int iLocal_839 = 0;
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
	iLocal_44 = unk_0xAD1355DD1E5D2D9B();
	iLocal_45 = unk_0x817B3657F78A517A();
	iLocal_69 = 0x402818AB;
	iLocal_70 = 0x402C1827;
	fLocal_73 = 0.22f;
	fLocal_74 = 50f;
	fLocal_75 = -4f;
	fLocal_76 = 4f;
	fLocal_77 = -89f;
	fLocal_78 = 89f;
	fLocal_79 = 4f;
	fLocal_82 = 0f;
	fLocal_84 = 0.4f;
	fLocal_85 = 0.6f;
	fLocal_86 = 0.201f;
	fLocal_87 = 0.351f;
	iLocal_90 = 0xFFFFFFFF;
	iLocal_105 = 0xFFFFFFFF;
	iLocal_106 = 0xFFFFFFFF;
	sLocal_107 = unk_0xF59058FCB716F903(0x00000002, 0x000000C3, 0x00000001);
	iLocal_108 = joaat("prop_taxi_meter_2");
	iLocal_110 = 0x00000003;
	iLocal_816 = 0xFFFFFFFF;
	iLocal_817 = 0x00000107;
	StringCopy(&cLocal_824, "oddjobs@taxi@driver", 32);
	vLocal_830 = { 0f, 0f, 0f };
	vLocal_831 = { 0f, 0f, 0f };
	vLocal_835 = { 0f, -0.25f, 0.55f };
	vLocal_836 = { -0.3f, 1f, 0.35f };
	vLocal_837 = { -0.01f, 0.6f, 0.24f };
	vLocal_838 = { -5f, 0f, 0f };
	if (unk_0x2EBF608FFE6CA406(0x00000042))
	{
		if (unk_0x3E653638C7A26115() == 0x00000040)
		{
			func_239(0x00000000);
		}
		else
		{
			func_239(0x00000001);
		}
		unk_0x10FAF14A60A0DBE1();
	}
	if (!func_232())
	{
		func_239(0x00000001);
	}
	while (0x00000001)
	{
		if (!func_231())
		{
			func_239(0x00000001);
		}
		if (func_230(iLocal_822))
		{
			func_239(0x00000001);
		}
		switch (iLocal_822)
		{
			case 0x00000001:
				func_65();
				break;
			
			case 0x00000002:
				func_1();
				break;
			
			case 0x00000003:
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (Global_1B05D)
		{
			Global_1B05D = 0x00000000;
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000001);
			}
			unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
			if ((iLocal_821 == 0x00000002 || iLocal_821 == 0x00000003) || iLocal_821 == 0x00000004)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_1B04D) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000001))
	{
		if (!func_2(unk_0x16F2683693E537C9(), 0xCE98FBB3) && !func_2(unk_0x16F2683693E537C9(), 0x1AE73569))
		{
			unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
		}
	}
	else
	{
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(Global_1B04E, Global_1B04D, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0x89258193691A7600(Global_1B04E, Global_1B04D, unk_0x16F2683693E537C9(), 0x00000008, 25f, 0x000C1024, 300f, 15f, 0x00000001);
					}
				}
				else if (!unk_0xE9FDA1035CFEA94F(Global_1B04E))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xF3268524E9BE6D6E(Global_1B04E, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
				}
				unk_0xFADC0A217229F6B5(Global_1B04E, 0x00000001);
				unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000000);
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
		{
			if (unk_0xC42A92762C58E1B9(Global_1B04E, Global_1B04D, 0x00000000))
			{
				if (!func_2(Global_1B04E, 0xF09B15B3))
				{
					unk_0xE072601B4380E9DF(Global_1B04E, Global_1B04D, 12f, 0x000C10AB);
				}
			}
			unk_0xFADC0A217229F6B5(Global_1B04E, 0x00000001);
			unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000000);
		}
		func_239(0x00000001);
	}
}

int func_2(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_3(int iParam0)
{
	if (func_4(iParam0))
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

int func_4(int iParam0)
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

void func_5()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x7AEFFBD77F2CF1EC(func_6()))
	{
		unk_0xF5BDC0FED0F08D25(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0x00000000)
		{
			iVar2 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar2))
			{
				unk_0xA3BF0AA5A2608191(iVar2);
				if (!unk_0x437347B10A200C4B(Global_1B04D, 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9(iVar2, Global_1B04D, 0x00000000))
					{
						unk_0x45F014B3D0466974(iVar2, Global_1B04D, 0x00000040);
					}
				}
			}
			if (iVar0 > 0x00000001)
			{
				iVar2 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					unk_0xA3BF0AA5A2608191(iVar2);
					if (!unk_0x437347B10A200C4B(Global_1B04D, 0x00000000))
					{
						if (unk_0xC42A92762C58E1B9(iVar2, Global_1B04D, 0x00000000))
						{
							unk_0x45F014B3D0466974(iVar2, Global_1B04D, 0x00000040);
						}
					}
				}
			}
		}
	}
}

int func_6()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_7()
{
	bool bVar0;
	
	if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
		{
			if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
			{
				if (!func_63())
				{
					bVar0 = 0x00000001;
					if (func_56(func_57()) >= iLocal_101)
					{
						if (bLocal_65)
						{
							if (iLocal_101 > 0x00000000)
							{
								if (fLocal_72 > 75f)
								{
									iLocal_818 = 0x00000006;
								}
								else
								{
									iLocal_818 = 0x00000005;
								}
								func_46(Global_1B04E, &iLocal_818);
								func_9(func_57(), 0x00000015, iLocal_101);
								bVar0 = 0x00000000;
							}
						}
						else if (iLocal_66 || iLocal_821 == 0x00000003)
						{
							if (iLocal_101 > 0x00000000)
							{
								iLocal_818 = 0x0000000D;
								func_46(Global_1B04E, &iLocal_818);
								func_9(func_57(), 0x00000015, iLocal_101);
								bVar0 = 0x00000000;
							}
						}
						else if (unk_0x9C66D99E63E8E24C(Global_1B04D) > 5f)
						{
							if (!func_8())
							{
								iLocal_818 = 0x0000000C;
								func_46(Global_1B04E, &iLocal_818);
								unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
								unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
							}
						}
						else
						{
							iLocal_818 = 0x0000000D;
							func_46(Global_1B04E, &iLocal_818);
							if (iLocal_101 > 0x00000000)
							{
								func_9(func_57(), 0x00000015, iLocal_101);
							}
							bVar0 = 0x00000000;
						}
					}
					if (bVar0)
					{
						if (iLocal_101 > 0x00000000)
						{
							iLocal_818 = 0x00000007;
							func_46(Global_1B04E, &iLocal_818);
							unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						}
					}
				}
			}
		}
	}
}

int func_8()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (func_45(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_45(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_10(func_45(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_44();
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
					func_43(0x00000063, 0x00000001);
					func_42(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_42(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_42(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_26(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_21(0x00000005))
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
							func_42(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_42(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_42(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_21(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_42(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_42(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_42(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_42(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_42(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_42(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_42(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_42(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_42(joaat("sp2_money_spent_property"), iParam3);
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
									func_42(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_42(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_42(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_42(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_42(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_42(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_21(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_42(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_42(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_42(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_42(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_42(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_42(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_43(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_43(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_43(0x00000060, iParam3);
					break;
			}
			func_43(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_13(iVar1);
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
					func_42(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_42(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_42(joaat("sp2_total_cash_earned"), iParam3);
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
	func_12(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_11(0x00000000);
	}
	return 0x00000001;
}

void func_11(bool bParam0)
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

void func_12(int iParam0)
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

void func_13(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_19(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_19(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_19(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_19(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_16(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_16(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_16(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_16(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_16(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_16(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_15() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_15() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_14(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_14(int iParam0)
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

int func_15()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_17(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1407E9;
}

int func_19(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_18();
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

void func_20(int iParam0)
{
	func_43(0x0000005D, iParam0);
	func_43(0x0000001D, iParam0);
	func_43(0x0000001E, iParam0);
}

bool func_21(int iParam0)
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
		return func_23(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_23(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_23(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_23(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_22(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_22(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_22(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_22(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_22(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_22(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_15() /*10930*/].f_181E.f_A, iParam0);
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_17(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
	}
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)
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

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_18();
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

int func_26(bool bParam0)
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
		func_41(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_27(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_27(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_28(iParam0, iParam1);
}

int func_28(int iParam0, int iParam1)
{
	if (func_40(0x0000000E) && !func_39(iParam0))
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
	if (func_38(&Global_4127F1))
	{
		if (func_36(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_29(&Global_4127F1, iParam0))
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

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_40(0x0000000E) && !func_39(iParam1))
	{
		return 0x00000000;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0x00000000);
	}
	func_32(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_30(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_30(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_40(0x0000000E) && !func_39(iParam1))
	{
		return 0x00000000;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_31(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_31(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_34(uParam0, (Global_4127F0 - 0.5f));
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_34(var uParam0, float fParam1)
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

float func_35(var uParam0)
{
	return uParam0->f_50;
}

bool func_36(var uParam0, int iParam1)
{
	return func_37(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_37(var uParam0, int iParam1)
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

bool func_38(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_39(int iParam0)
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

bool func_40(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_41(int iParam0, int iParam1)
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

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_43(int iParam0, int iParam1)
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

void func_44()
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

int func_45(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_46(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!func_52(iParam0, 0x00000000))
		{
			if (!*iParam1 == 0x00000000)
			{
				if (*iParam1 == 0x00000001)
				{
					func_50(iParam0, "TAXID_WHERE_TO", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000002)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						func_47();
						*iParam1 = 0x00000003;
					}
				}
				else if (*iParam1 == 0x00000003)
				{
					func_50(iParam0, "TAXID_BEGIN_JOURNEY", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000004)
				{
					func_50(iParam0, "TAXID_BANTER", 0x00000018);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000005)
				{
					func_50(iParam0, "TAXID_ARRIVE_AT_DEST", 0x00000007);
					*iParam1 = 0x00000017;
				}
				else if (*iParam1 == 0x00000006)
				{
					func_50(iParam0, "TAXID_CLOSE_AS_POSS", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000007)
				{
					func_50(iParam0, "TAXID_NO_MONEY", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000009)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						bVar0 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
						if (bVar0)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
						}
						func_50(unk_0x16F2683693E537C9(), "TAXI_CHANGE_DEST", 0x00000007);
						if (bVar0)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
						}
						*iParam1 = 0x0000000A;
					}
				}
				else if (*iParam1 == 0x0000000A)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						func_47();
						*iParam1 = 0x0000000B;
					}
				}
				else if (*iParam1 == 0x0000000B)
				{
					func_50(iParam0, "TAXID_CHANGE_DEST", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x0000000C)
				{
					func_50(iParam0, "TAXID_RUN_AWAY", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x0000000D)
				{
					func_50(iParam0, "TAXID_GET_OUT_EARLY", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x0000000E)
				{
					func_50(iParam0, "TAXID_TRASHED", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x0000000F)
				{
					if (!Global_1B062)
					{
						func_50(iParam0, "TAXID_AFFORD_PART_JOURNEY", 0x00000007);
						Global_1B062 = 0x00000001;
					}
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000010)
				{
					func_50(iParam0, "TAXID_TAKE_FIRST_CAB", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000011)
				{
					*iParam1 = 0x00000012;
				}
				else if (*iParam1 == 0x00000012)
				{
					if (unk_0xEFFB47DC2D8F23F9())
					{
						SYSTEM::SETTIMERA(0x00000000);
					}
					else if (SYSTEM::TIMERA() > 0x00000FA0)
					{
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							bVar0 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
							if (bVar0)
							{
								unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
							}
							switch (unk_0xFC21F7E0F4D92523())
							{
								case 0x00000000:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_VIBE", 0x00000007);
									break;
								
								case 0x00000001:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_LRR", 0x00000007);
									break;
								
								case 0x00000002:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_JNR", 0x00000007);
									break;
								
								case 0x00000003:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_MASSIVEB", 0x00000007);
									break;
								
								case 0x00000004:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_K109", 0x00000007);
									break;
								
								case 0x00000005:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_WKTT", 0x00000007);
									break;
								
								case 0x00000006:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_LCHC", 0x00000007);
									break;
								
								case 0x00000007:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_JOURNEY", 0x00000007);
									break;
								
								case 0x00000008:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_FUSION", 0x00000007);
									break;
								
								case 0x00000009:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_BEAT", 0x00000007);
									break;
								
								case 0x0000000A:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_BROKER", 0x00000007);
									break;
								
								case 0x0000000B:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_VLADIVOSTOK", 0x00000007);
									break;
								
								case 0x0000000C:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_PLR", 0x00000007);
									break;
								
								case 0x0000000D:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_SANJUAN", 0x00000007);
									break;
								
								case 0x0000000E:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_FRANCOIS", 0x00000007);
									break;
								
								case 0x0000000F:
									func_50(unk_0x16F2683693E537C9(), "RADIO_REQ_CLASSICS", 0x00000007);
									break;
							}
							if (bVar0)
							{
								unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
							}
						}
						*iParam1 = 0x00000016;
					}
				}
				else if (*iParam1 == 0x00000013)
				{
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000014)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						bVar0 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
						if (bVar0)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
						}
						func_50(unk_0x16F2683693E537C9(), "TAXI_STEP_ON_IT", 0x00000007);
						if (bVar0)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
						}
						*iParam1 = 0x00000015;
					}
				}
				else if (*iParam1 == 0x00000015)
				{
					func_50(iParam0, "TAXID_SPEED_UP", 0x00000007);
					*iParam1 = 0x00000016;
				}
				else if (*iParam1 == 0x00000017)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						bVar0 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
						if (bVar0)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
						}
						func_50(unk_0x16F2683693E537C9(), "THANKS", 0x00000007);
						if (bVar0)
						{
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
						}
						*iParam1 = 0x00000016;
					}
				}
				else if (*iParam1 == 0x00000016)
				{
					if (!func_52(iParam0, 0x00000000))
					{
						*iParam1 = 0x00000000;
					}
				}
			}
		}
	}
}

void func_47()
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_48();
	if (!unk_0xEA6BC48857E0AC4C(sVar0))
	{
		bVar1 = unk_0x9645CD1B04C4BFD3(unk_0x16F2683693E537C9());
		if (bVar1)
		{
			unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000000);
		}
		func_50(unk_0x16F2683693E537C9(), sVar0, 0x00000007);
		if (bVar1)
		{
			unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
		}
	}
}

char* func_48()
{
	char cVar0[32];
	
	StringCopy(&cVar0, unk_0xA5A6BB5EBAD59A21(func_49(vLocal_43.x)), 32);
	if (unk_0x7F8A39872A07D2CE("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (unk_0x7F8A39872A07D2CE("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (unk_0x7F8A39872A07D2CE("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (unk_0x7F8A39872A07D2CE("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (unk_0x7F8A39872A07D2CE("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (unk_0x7F8A39872A07D2CE("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (unk_0x7F8A39872A07D2CE("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (unk_0x7F8A39872A07D2CE("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (unk_0x7F8A39872A07D2CE("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (unk_0x7F8A39872A07D2CE("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (unk_0x7F8A39872A07D2CE("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (unk_0x7F8A39872A07D2CE("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (unk_0x7F8A39872A07D2CE("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (unk_0x7F8A39872A07D2CE("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (unk_0x7F8A39872A07D2CE("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (unk_0x7F8A39872A07D2CE("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (unk_0x7F8A39872A07D2CE("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (unk_0x7F8A39872A07D2CE("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (unk_0x7F8A39872A07D2CE("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (unk_0x7F8A39872A07D2CE("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (unk_0x7F8A39872A07D2CE("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (unk_0x7F8A39872A07D2CE("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (unk_0x7F8A39872A07D2CE("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (unk_0x7F8A39872A07D2CE("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (unk_0x7F8A39872A07D2CE("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (unk_0x7F8A39872A07D2CE("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0x7F8A39872A07D2CE("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (unk_0x7F8A39872A07D2CE("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (unk_0x7F8A39872A07D2CE("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (unk_0x7F8A39872A07D2CE("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (unk_0x7F8A39872A07D2CE("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (unk_0x7F8A39872A07D2CE("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (unk_0x7F8A39872A07D2CE("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (unk_0x7F8A39872A07D2CE("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (unk_0x7F8A39872A07D2CE("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (unk_0x7F8A39872A07D2CE("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (unk_0x7F8A39872A07D2CE("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (unk_0x7F8A39872A07D2CE("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (unk_0x7F8A39872A07D2CE("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (unk_0x7F8A39872A07D2CE("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (unk_0x7F8A39872A07D2CE("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (unk_0x7F8A39872A07D2CE("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (unk_0x7F8A39872A07D2CE("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (unk_0x7F8A39872A07D2CE("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (unk_0x7F8A39872A07D2CE("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (unk_0x7F8A39872A07D2CE("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (unk_0x7F8A39872A07D2CE("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (unk_0x7F8A39872A07D2CE("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (unk_0x7F8A39872A07D2CE("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (unk_0x7F8A39872A07D2CE("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (unk_0x7F8A39872A07D2CE("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (unk_0x7F8A39872A07D2CE("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0x7F8A39872A07D2CE("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (unk_0x7F8A39872A07D2CE("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (unk_0x7F8A39872A07D2CE("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (unk_0x7F8A39872A07D2CE("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (unk_0x7F8A39872A07D2CE("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (unk_0x7F8A39872A07D2CE("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (unk_0x7F8A39872A07D2CE("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (unk_0x7F8A39872A07D2CE("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (unk_0x7F8A39872A07D2CE("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (unk_0x7F8A39872A07D2CE("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (unk_0x7F8A39872A07D2CE("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (unk_0x7F8A39872A07D2CE("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (unk_0x7F8A39872A07D2CE("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (unk_0x7F8A39872A07D2CE("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (unk_0x7F8A39872A07D2CE("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (unk_0x7F8A39872A07D2CE("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (unk_0x7F8A39872A07D2CE("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (unk_0x7F8A39872A07D2CE("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (unk_0x7F8A39872A07D2CE("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (unk_0x7F8A39872A07D2CE("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (unk_0x7F8A39872A07D2CE("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (unk_0x7F8A39872A07D2CE("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (unk_0x7F8A39872A07D2CE("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (unk_0x7F8A39872A07D2CE("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (unk_0x7F8A39872A07D2CE("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (unk_0x7F8A39872A07D2CE("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (unk_0x7F8A39872A07D2CE("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (unk_0x7F8A39872A07D2CE("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (unk_0x7F8A39872A07D2CE("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (unk_0x7F8A39872A07D2CE("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (unk_0x7F8A39872A07D2CE("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (unk_0x7F8A39872A07D2CE("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (unk_0x7F8A39872A07D2CE("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (unk_0x7F8A39872A07D2CE("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (unk_0x7F8A39872A07D2CE("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (unk_0x7F8A39872A07D2CE("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (unk_0x7F8A39872A07D2CE("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (unk_0x7F8A39872A07D2CE("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (unk_0x7F8A39872A07D2CE("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (unk_0x7F8A39872A07D2CE("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (unk_0x7F8A39872A07D2CE("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (unk_0x7F8A39872A07D2CE("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (unk_0x7F8A39872A07D2CE("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (unk_0x7F8A39872A07D2CE("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (unk_0x7F8A39872A07D2CE("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (unk_0x7F8A39872A07D2CE("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (unk_0x7F8A39872A07D2CE("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (unk_0x7F8A39872A07D2CE("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (unk_0x7F8A39872A07D2CE("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_49(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	vVar0 = { 0f, 0f, 0f };
	iVar5 = unk_0xDC7D2B8A563DB482(iParam0);
	if (iVar5 == 0x00000001)
	{
		iVar1 = unk_0x63EC65B0F6B7C26F(iParam0);
		if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iVar1, 0x00000001) };
		}
	}
	else if (iVar5 == 0x00000002)
	{
		iVar2 = unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(iParam0));
		if (!unk_0xEB6A8945D1AC98A1(iVar2))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iVar2, 0x00000001) };
		}
	}
	else if (iVar5 == 0x00000003)
	{
		iVar3 = unk_0x486F67509A82DB2D(unk_0x63EC65B0F6B7C26F(iParam0));
		if (unk_0xC844350D5D58C99A(iVar3))
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iVar3, 0x00000001) };
		}
	}
	else if (iVar5 == 0x00000004)
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(iParam0) };
	}
	else if (iVar5 == 0x00000006)
	{
		iVar4 = unk_0x17B771ED3F30E3D5(iParam0);
		if (unk_0x762119754C50557A(iVar4))
		{
			vVar0 = { unk_0xE925E52ACABA4CE7(iVar4) };
		}
	}
	else if (iVar5 == 0x00000005)
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(iParam0) };
	}
	return vVar0;
}

void func_50(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_51(iParam2), 0x00000001);
}

int func_51(int iParam0)
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

int func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x65636D4556D82155(iParam0))
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 0x00000001;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 0x00000001;
		}
	}
	if (func_53())
	{
		func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 0x00000001;
	}
	if (bParam1)
	{
		if (unk_0xD17F06053799A7CA())
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 0x00000001;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x7AEFFBD77F2CF1EC(func_6()))
		{
			unk_0xF5BDC0FED0F08D25(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0x00000000)
			{
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x9B50A0F7FCCD175C(func_6(), iVar2);
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (unk_0x65636D4556D82155(iVar0))
						{
							func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 0x00000001;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0x00000000;
}

int func_53()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_54(char* sParam0)
{
	func_55(sParam0);
}

void func_55(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, sParam0))
	{
	}
}

int func_56(int iParam0)
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

int func_57()
{
	func_58();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_61(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_60(unk_0x16F2683693E537C9());
			if (func_59(iVar0) && (!func_40(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_59(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_59(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return func_62(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_62(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_63()
{
	if (func_64(0x00000001) == func_57())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_64(int iParam0)
{
	return Global_1B416.f_6143[iParam0 /*4*/];
}

void func_65()
{
	if (func_228())
	{
		func_226();
		func_225();
		func_224();
		if (!func_221())
		{
			func_215();
		}
		func_214();
		if (iLocal_821 != 0x00000004)
		{
			func_46(Global_1B04E, &iLocal_818);
			if (iLocal_821 != 0x00000000)
			{
				if (func_212())
				{
					if (unk_0x83D8570832F172A7(iLocal_111))
					{
						func_189();
						iLocal_58 = 0x00000001;
					}
				}
				func_180();
			}
		}
		switch (iLocal_821)
		{
			case 0x00000000:
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
					{
						if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
						{
							if (!func_2(Global_1B04E, 0x81B4D53A))
							{
								unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
							}
						}
					}
				}
				if (func_179())
				{
					if (func_178() && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
					{
						func_189();
						iLocal_818 = 0x00000001;
						iLocal_820 = 0x00000000;
						Global_1B072 = 0x00000000;
						iLocal_88 = 0x00000000;
						iLocal_66 = 0x00000000;
						iLocal_56 = 0x00000000;
						iLocal_58 = 0x00000001;
						func_177();
						iLocal_821 = 0x00000001;
					}
				}
				break;
			
			case 0x00000001:
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
					{
						if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
						{
							if (!func_2(Global_1B04E, 0x81B4D53A))
							{
								unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
							}
						}
					}
				}
				func_176(&Global_1B04D, iLocal_839);
				if (func_175())
				{
					unk_0x9505C13496579D28(joaat("sp_number_of_taxis_used"), 1f);
					iLocal_58 = 0x00000001;
					iLocal_821 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_175())
				{
					func_172();
				}
				break;
			
			case 0x00000003:
				func_171();
				break;
			
			case 0x00000004:
				func_81();
				break;
		}
		func_66();
	}
	else
	{
		iLocal_822 = 0x00000002;
	}
}

void func_66()
{
	char* sVar0;
	
	if (!func_221())
	{
		if (unk_0x83D8570832F172A7(iLocal_112))
		{
			if (iLocal_821 != 0x00000000)
			{
				sVar0 = unk_0xF59058FCB716F903(0x00000002, 0x000000DA, 0x00000001);
				if (!unk_0x7F8A39872A07D2CE(sLocal_107, sVar0))
				{
					sLocal_107 = sVar0;
					iLocal_58 = 0x00000001;
				}
				if (iLocal_58)
				{
					Local_814 = { func_80() };
					func_78(&uLocal_113);
					func_77(0x00000000, 0x0000004B, "TXM_EXIT", &uLocal_113, 0x00000000, 0x00000169);
					if (iLocal_91 > 0x00000001)
					{
						func_77(0x00000002, 0x000000DA, "TXM_CDES", &uLocal_113, 0x00000000, 0x00000169);
					}
					if (!bLocal_60)
					{
						if (iLocal_91 > 0x00000000)
						{
							func_77(0x00000002, 0x000000B0, "TXM_SLCT", &uLocal_113, 0x00000000, 0x00000169);
						}
					}
					else if (iLocal_821 == 0x00000002)
					{
						func_77(0x00000002, 0x000000B1, "TXM_STOP", &uLocal_113, 0x00000000, 0x00000169);
						if (bLocal_59)
						{
							func_77(0x00000002, 0x000000B0, "TXM_SLCT", &uLocal_113, 0x00000000, 0x00000169);
						}
						if (func_76())
						{
							func_77(0x00000002, 0x000000B0, "TXM_SKIP", &uLocal_113, 0x00000000, 0x00000169);
						}
						if (!bLocal_64)
						{
							func_77(0x00000002, 0x000000B3, "TXM_HURY", &uLocal_113, 0x00000000, 0x00000169);
						}
					}
					else if (iLocal_821 == 0x00000003)
					{
						func_77(0x00000002, 0x000000B1, "TXM_STRT", &uLocal_113, 0x00000000, 0x00000169);
						if (bLocal_59)
						{
							func_77(0x00000002, 0x000000B0, "TXM_SLCT", &uLocal_113, 0x00000000, 0x00000169);
						}
					}
					iLocal_58 = 0x00000000;
				}
				unk_0x3039591AD3E735CE(unk_0x1D14FD94FCD601B4());
				unk_0x5DD950F92F816F03(0x00000000);
				func_75(0x00000001);
				func_74(0x00000001);
				func_67(&iLocal_112, &Local_814, &uLocal_113, func_73(&uLocal_113));
			}
		}
		else
		{
			iLocal_112 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
	}
	else
	{
		unk_0xE17FDF9E3068281B(&iLocal_112);
		iLocal_58 = 0x00000001;
	}
}

void func_67(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 0x00000001 || unk_0xB8E3620B82AD47D7(0x00000002))
	{
		*uParam2 = 0x00000000;
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*iParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_72(uParam2);
	}
	if (Global_141384 < 0x00000002)
	{
		func_74(0x00000001);
	}
	if (*uParam2 == 0x00000000)
	{
		if (!unk_0x83D8570832F172A7(*iParam0))
		{
			*iParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0x7526D52FFFAB1652(*iParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < uParam2->f_2B5)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B1, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_2B2, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_37;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_38;
						func_71(unk_0xF59058FCB716F903(iVar1, iVar2, 0x00000001));
						if (iVar3 < 0x00000169)
						{
							func_71(unk_0xF59058FCB716F903(iVar1, iVar3, 0x00000001));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_71(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, 0x00000001));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_70(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B3, iVar0))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0 /*57*/].f_37);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_71(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_71(&(uParam2->f_1[iVar0 /*57*/].f_10));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_70(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(0x00000000);
						unk_0x3CAEA85DA607305E(0x00000169);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_2BB);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 0x00000001;
		}
	}
	uParam2->f_2B7 = 0.05f;
	uParam2->f_2B8 = 0.045f;
	uParam2->f_2B9 = 0f;
	uParam2->f_2BA = 0f;
	if (*uParam2 == 0x00000001)
	{
		func_69(*iParam0, uParam1);
	}
	func_68();
}

void func_68()
{
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

void func_69(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0x00000000);
}

void func_70(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_71(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_72(var uParam0)
{
	uParam0->f_2B4 = 0x00000000;
}

int func_73(var uParam0)
{
	return uParam0->f_2B4;
}

void func_74(int iParam0)
{
	Global_141384 = iParam0;
}

void func_75(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

int func_76()
{
	if (iLocal_821 != 0x00000002)
	{
		return 0x00000000;
	}
	if (bLocal_59)
	{
		return 0x00000000;
	}
	if (fLocal_83 < 50f)
	{
		return 0x00000000;
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_68))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_68))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_77(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_2B5 >= 0x0000000C)
	{
		return;
	}
	iVar0 = uParam3->f_2B5;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_20), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_2B1), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_36 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_37 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_38 = iParam5;
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&(uParam3->f_2B3), iVar0);
		if (iParam5 < 0x00000169)
		{
		}
	}
	uParam3->f_2B5++;
}

void func_78(var uParam0)
{
	func_79(uParam0);
	uParam0->f_2B4 = 0x00000001;
}

void func_79(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_10), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_20), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_24 = 0x00000000;
		uParam0->f_1[iVar0 /*57*/].f_25 = 0x00000000;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_26), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0x00000002;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0x00000169;
		uParam0->f_1[iVar0 /*57*/].f_38 = 0x00000169;
		iVar0++;
	}
	uParam0->f_2AE = 0x00000000;
	uParam0->f_2AF = 0x00000000;
	uParam0->f_2B0 = 0x00000000;
	uParam0->f_2B1 = 0x00000000;
	uParam0->f_2B3 = 0x00000000;
	uParam0->f_2B2 = 0x00000000;
	uParam0->f_2B4 = 0x00000000;
	uParam0->f_2B5 = 0x00000000;
	uParam0->f_2B7 = 0f;
	uParam0->f_2B8 = 0f;
	uParam0->f_2B9 = 0f;
	uParam0->f_2BA = 0f;
	uParam0->f_2BB = 1f;
}

struct<9> func_80()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 0x000000FF;
	Var0.f_5 = 0x000000FF;
	Var0.f_6 = 0x000000FF;
	Var0.f_7 = 0x000000C8;
	Var0.f_8 = 0f;
	return Var0;
}

void func_81()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	unk_0x5EEBDFEE72949D59(0x00000000);
	unk_0x5EEBDFEE72949D59(0x00000001);
	unk_0x5EEBDFEE72949D59(0x00000002);
	switch (iLocal_823)
	{
		case 0x00000000:
			func_163(0x00000001);
			if (func_162(iLocal_89, 0x000001F4))
			{
				unk_0x53491B90E4FD0E56(0x000000FA);
				unk_0x8BC9595FD2792B5D("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_823 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (unk_0x757EF87A33649210() && unk_0x562F77A7F33D2E46("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0x3E5CE368CD085FFA(Global_1B04D, 0x00000000);
				}
				unk_0x790015DC92C918E2();
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				if (unk_0xE6CD5C6925050049("taxi"))
				{
					unk_0x683413D9B7010687("taxi");
				}
				if (unk_0xC844350D5D58C99A(iLocal_109))
				{
					unk_0xF690C84DADBB3551(&iLocal_109);
					unk_0x71199B01895C6202(iLocal_108);
				}
				if (unk_0xFBB4F23D534EB790(iLocal_68))
				{
					unk_0x4DC7B72197441408(0x00000000);
					Global_1B05E = 0x00000000;
					unk_0xE3BB8E05FCEB3FBE(iLocal_68, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					unk_0xFB452C6B9BE826C7();
					unk_0xF737A3AD8873CE16();
					unk_0xF91D0B1DCE756AFB(0x00000000);
				}
				func_160(iLocal_839);
				iLocal_89 = unk_0x1C0640BA9A7327B3();
				if (bLocal_59)
				{
					bLocal_61 = 0x00000000;
					bLocal_59 = 0x00000000;
					vLocal_43 = { vLocal_819[iLocal_92 /*3*/] };
				}
				if (!bLocal_61)
				{
					iLocal_88 = 0x00000000;
					iLocal_820 = 0x00000000;
					iLocal_823 = 0x00000002;
				}
				else
				{
					func_159();
					iLocal_823 = 0x00000003;
				}
			}
			else
			{
				unk_0x8BC9595FD2792B5D("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 0x00000002:
			if (func_126(&vLocal_43, &Global_1B054, &Global_1B05A))
			{
				func_159();
				iLocal_823 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (Global_12B5E == 0xFFFFFFFF)
			{
				func_125();
				func_124();
				func_122();
				func_118();
				func_117();
				unk_0x536F1BE96C726C4B(Global_1B054, 5f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_113(0x41700000);
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0xA47B46945FF6DE74(Global_1B04D, Global_1B054, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(Global_1B04D, Global_1B05A);
					unk_0x1E9649458B15960F(Global_1B04D, 0x00000001);
				}
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x486B4ADE317F0689();
				unk_0x536F1BE96C726C4B(Global_1B054, 5000f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75CFD6AD66ADFDD1(Global_1B054, 5000f, 0x00000000);
				unk_0x679C321F8CAA2CFA(Global_1B054, 30f, 0x00000000);
				unk_0xD7AD2803AD9697F7(Global_1B054, 5000f);
				unk_0x58B5D6A0F1D7754D(Global_1B054, 5000f);
				if (Global_175B2 != 0xFFFFFFFF)
				{
					func_112(Global_175B2, 0x00000001);
					func_111(Global_175B2);
				}
				iLocal_815 = func_110(vLocal_43.x);
				if (iLocal_815 != 0xFFFFFFFF)
				{
					func_112(iLocal_815, 0x00000001);
				}
				iLocal_57 = 0x00000000;
				iLocal_823 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (unk_0x9E632F16E887F781(Global_1B054, 4500f, 0x00000000))
			{
				iLocal_57 = 0x00000001;
				iLocal_823 = 0x00000005;
			}
			else if (func_162(iLocal_89, 0x000009C4))
			{
				iLocal_823 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			if (unk_0xEB880D98B5988D0C())
			{
				if (unk_0x68367101660E33F0())
				{
					if (iLocal_815 != 0xFFFFFFFF)
					{
						unk_0x486B4ADE317F0689();
						iLocal_57 = 0x00000000;
						func_108(iLocal_815);
						func_112(iLocal_815, 0x00000000);
					}
					iLocal_823 = 0x00000006;
				}
				else if (func_162(iLocal_89, 0x00004E20))
				{
					if (iLocal_815 != 0xFFFFFFFF)
					{
						unk_0x486B4ADE317F0689();
						iLocal_57 = 0x00000000;
						func_108(iLocal_815);
						func_112(iLocal_815, 0x00000000);
					}
					iLocal_823 = 0x00000006;
				}
			}
			else
			{
				if (iLocal_815 != 0xFFFFFFFF)
				{
					func_108(iLocal_815);
					func_112(iLocal_815, 0x00000000);
				}
				iLocal_57 = 0x00000000;
				iLocal_823 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			func_107();
			unk_0x5B12BA0B3AB525F5();
			unk_0x58EA425DFE77472C();
			unk_0xAC7897419A704C8B();
			if (iLocal_815 != 0xFFFFFFFF)
			{
				bVar1 = 0x00000001;
				if (Global_15DBC[iLocal_815 /*34*/].f_D == 0xFFFFFFFF && Global_15DBC[iLocal_815 /*34*/].f_E == 0xFFFFFFFF)
				{
					bVar1 = 0x00000000;
				}
				if (bVar1)
				{
					if (((func_57() == 0x00000000 && !unk_0xEAE0D21A50E6C7F4(Global_15DBC[iLocal_815 /*34*/].f_F, 0x00000008)) || (func_57() == 0x00000001 && !unk_0xEAE0D21A50E6C7F4(Global_15DBC[iLocal_815 /*34*/].f_F, 0x00000009))) || (func_57() == 0x00000002 && !unk_0xEAE0D21A50E6C7F4(Global_15DBC[iLocal_815 /*34*/].f_F, 0x0000000A)))
					{
						bVar1 = 0x00000000;
					}
				}
				if (bVar1)
				{
					if (func_105(Global_15DBC[iLocal_815 /*34*/].f_D, Global_15DBC[iLocal_815 /*34*/].f_E))
					{
						bVar1 = 0x00000000;
					}
				}
				if (bVar1)
				{
					unk_0x659CD9046B037C7A(Global_15DBC[iLocal_815 /*34*/].f_D, 0x00000000, 0x00000000);
				}
			}
			iLocal_105 = func_98(0x43510000, 0x00000001);
			iLocal_823 = 0x00000007;
			break;
		
		case 0x00000007:
			bVar0 = 0x00000001;
			if (func_97(iLocal_105))
			{
				bVar0 = 0x00000000;
			}
			if (!func_87(Global_1B054))
			{
				bVar0 = 0x00000000;
			}
			if (!func_86())
			{
				bVar0 = 0x00000000;
			}
			if (!unk_0x0E750251F52DCB41())
			{
				bVar0 = 0x00000000;
			}
			if (iLocal_57)
			{
				if (unk_0xEB880D98B5988D0C())
				{
					if (!unk_0x68367101660E33F0())
					{
						bVar0 = 0x00000000;
					}
				}
			}
			if (iLocal_815 != 0xFFFFFFFF && Global_175B7)
			{
				bVar0 = 0x00000000;
			}
			if (func_162(iLocal_89, 0x0000733C))
			{
				bVar0 = 0x00000001;
			}
			if (bVar0)
			{
				if (iLocal_57)
				{
					if (unk_0xEB880D98B5988D0C())
					{
						unk_0x486B4ADE317F0689();
					}
					iLocal_57 = 0x00000000;
				}
				if (iLocal_67)
				{
					iLocal_67 = 0x00000000;
					unk_0xE82754C349C7B581(Global_1B054 + Vector(100f, 0f, 0f), &fVar2, 0x00000000, 0x00000000);
					if (fVar2 > Global_1B054.f_2)
					{
						Global_1B054.f_2 = (fVar2 + 0.5f);
					}
				}
				func_113(12f);
				func_83();
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0x1E9649458B15960F(Global_1B04D, 0x00000000);
					unk_0xD8F6A53F4799FAFE(Global_1B04D, Global_1B05A);
					unk_0xA47B46945FF6DE74(Global_1B04D, Global_1B054, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xB9FD7450C0DAB575(Global_1B04D, 0x40A00000);
					unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000018, 0x00001388);
				}
				iLocal_89 = unk_0x1C0640BA9A7327B3();
				iLocal_823 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (func_162(iLocal_89, 0x000001F4))
			{
				if (unk_0x562F77A7F33D2E46("FADE_OUT_WORLD_250MS_SCENE"))
				{
					unk_0x8910D3D58E0132B8("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0x3E5CE368CD085FFA(Global_1B04D, 0x00000001);
				}
				if (!func_82())
				{
					unk_0x82E51BCA72537B6C(0x000000FA);
				}
				iLocal_823 = 0x00000009;
			}
			break;
		
		case 0x00000009:
			if (unk_0x0F1CCD77290EE12F() || func_82())
			{
				if (((!Global_175B8 && iLocal_815 != 0xFFFFFFFF) && iLocal_815 != 0x00000048) && iLocal_815 != 0x00000057)
				{
					func_111(iLocal_815);
				}
				func_163(0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000001))
					{
						unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
				}
				unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000018, 0x00001388);
				unk_0xFADC0A217229F6B5(Global_1B04E, 0x00000001);
				bLocal_65 = 0x00000001;
				iLocal_822 = 0x00000002;
				iLocal_823 = 0x0000000A;
			}
			break;
		
		case 0x0000000A:
			break;
	}
}

bool func_82()
{
	return unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D);
}

void func_83()
{
	vector3 vVar0;
	float fVar1;
	
	switch (iLocal_816)
	{
		case 0x0000005C:
			vVar0 = { func_85(0x000000E5, 0x00000000) };
			fVar1 = unk_0x0EB28750412C3A5A(Global_1B054, vVar0, 0x00000001);
			if (fVar1 < 100f)
			{
				vVar0 = { func_84(Global_1B054 - vVar0) };
				vVar0 = { (Global_1B054 + (vVar0.x * IntToFloat((0x00000064 - SYSTEM::ROUND(fVar1))))), (Global_1B054.f_1 + (vVar0.y * IntToFloat((0x00000064 - SYSTEM::ROUND(fVar1))))), Global_1B054.f_2 };
				unk_0xC55B75EFB7DDC5D6(vVar0, &Global_1B054, &Global_1B05A, 0x00000001, 0x40400000, 0x00000000);
				unk_0xA47B46945FF6DE74(Global_1B04D, Global_1B054, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(Global_1B04D, Global_1B05A);
			}
			break;
	}
}

Vector3 func_84(vector3 vParam0)
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

Vector3 func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0f, 0f, 0f;
	}
	return Global_79AA[iVar0 /*23*/][iParam1 /*3*/];
}

bool func_86()
{
	return !Global_126B1.f_229;
}

int func_87(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = func_95(vParam0);
	if (!func_94(&iLocal_50))
	{
		iLocal_49 = 0x00000000;
		func_92(&iLocal_50, 0f);
	}
	if (iVar0 == iLocal_49 || func_89(&iLocal_50) > 8f)
	{
		func_88(&iLocal_50);
		iLocal_49 = 0x00000000;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_88(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

float func_89(int iParam0)
{
	if (func_94(iParam0))
	{
		if (func_91(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_90(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_90(bool bParam0)
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

bool func_91(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

void func_92(int iParam0, float fParam1)
{
	if (!func_94(iParam0))
	{
		func_93(iParam0, fParam1);
	}
}

void func_93(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_90(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

bool func_94(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_95(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	if (func_96(0x00000000, 0x00000004))
	{
		iVar1 = 0x00000046;
		while (iVar1 <= 0x00000048)
		{
			fVar2 = SYSTEM::VDIST2(func_85(iVar1, 0x00000000), vParam0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_96(0x00000000, 0x00000000))
	{
		iVar1 = 0x0000007D;
		while (iVar1 <= 0x00000089)
		{
			fVar2 = SYSTEM::VDIST2(func_85(iVar1, 0x00000000), vParam0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_96(0x00000000, 0x0000000A))
	{
		iVar1 = 0x0000007D;
		fVar2 = SYSTEM::VDIST2(func_85(iVar1, 0x00000000), vParam0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000B || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

int func_97(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF)
	{
		if (!Global_1B085[iParam0 /*10*/].f_1)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_98(int iParam0, bool bParam1)
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
	fVar3 = iParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_59(func_57()))
		{
			iVar5 = func_104();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_99(iVar1, &Var0);
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

void func_99(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_100(uParam1, "Abigail1", func_102(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_100(uParam1, "Abigail2", func_102(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_100(uParam1, "Barry1", func_102(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_100(uParam1, "Barry2", func_102(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_100(uParam1, "Barry3", func_102(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_100(uParam1, "Barry3A", func_102(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_100(uParam1, "Barry3C", func_102(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_100(uParam1, "Barry4", func_102(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_100(uParam1, "Dreyfuss1", func_102(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_100(uParam1, "Epsilon1", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_100(uParam1, "Epsilon2", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_100(uParam1, "Epsilon3", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_100(uParam1, "Epsilon4", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_100(uParam1, "Epsilon5", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_100(uParam1, "Epsilon6", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_100(uParam1, "Epsilon7", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_100(uParam1, "Epsilon8", func_102(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_100(uParam1, "Extreme1", func_102(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_100(uParam1, "Extreme2", func_102(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_100(uParam1, "Extreme3", func_102(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_100(uParam1, "Extreme4", func_102(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_100(uParam1, "Fanatic1", func_102(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_100(uParam1, "Fanatic2", func_102(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_100(uParam1, "Fanatic3", func_102(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_100(uParam1, "Hao1", func_102(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_100(uParam1, "Hunting1", func_102(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_100(uParam1, "Hunting2", func_102(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_100(uParam1, "Josh1", func_102(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_100(uParam1, "Josh2", func_102(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_100(uParam1, "Josh3", func_102(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_100(uParam1, "Josh4", func_102(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_100(uParam1, "Maude1", func_102(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_100(uParam1, "Minute1", func_102(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_100(uParam1, "Minute2", func_102(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_100(uParam1, "Minute3", func_102(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_100(uParam1, "MrsPhilips1", func_102(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_100(uParam1, "MrsPhilips2", func_102(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_100(uParam1, "Nigel1", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_100(uParam1, "Nigel1A", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_100(uParam1, "Nigel1B", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_100(uParam1, "Nigel1C", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_100(uParam1, "Nigel1D", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_100(uParam1, "Nigel2", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_100(uParam1, "Nigel3", func_102(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_100(uParam1, "Omega1", func_102(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_100(uParam1, "Omega2", func_102(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_100(uParam1, "Paparazzo1", func_102(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_100(uParam1, "Paparazzo2", func_102(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_100(uParam1, "Paparazzo3", func_102(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_100(uParam1, "Paparazzo3A", func_102(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_100(uParam1, "Paparazzo3B", func_102(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_100(uParam1, "Paparazzo4", func_102(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_100(uParam1, "Rampage1", func_102(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_100(uParam1, "Rampage3", func_102(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_100(uParam1, "Rampage4", func_102(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_100(uParam1, "Rampage5", func_102(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_100(uParam1, "Rampage2", func_102(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_101(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_100(uParam1, "TheLastOne", func_102(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_100(uParam1, "Tonya1", func_102(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_100(uParam1, "Tonya2", func_102(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_100(uParam1, "Tonya3", func_102(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_100(uParam1, "Tonya4", func_102(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_100(uParam1, "Tonya5", func_102(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_101(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_100(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_101(int iParam0)
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

struct<2> func_102(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_103(iParam0) };
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

struct<2> func_103(int iParam0)
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

int func_104()
{
	func_58();
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

bool func_105(int iParam0, int iParam1)
{
	return func_106(unk_0xD8A54335F18763BA(), iParam0, iParam1);
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0x00000018)
	{
		iParam1 = 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000018)
	{
		iParam2 = 0x00000000;
	}
	if (iParam2 < 0x00000000 || iParam2 >= 0x00000018)
	{
		return 0x00000000;
	}
	if (iParam1 == iParam2)
	{
		return 0x00000001;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 0x00000018;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	if (!bVar0)
	{
		return 0x00000000;
	}
	iVar1 = 0x00000000;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107()
{
	Global_126B1.f_229 = 0x00000001;
	Global_126B1.f_22A = 0x00000000;
}

void func_108(int iParam0)
{
	if (func_109(iParam0))
	{
		Global_175B3 = iParam0;
		Global_175B7 = 0x00000001;
		return;
	}
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000043:
		case 0x0000005A:
		case 0x00000000:
		case 0x0000001F:
		case 0x0000001B:
		case 0x0000001C:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000038:
		case 0x00000039:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/])
		{
			if (Global_175BD[iVar0 /*17*/].f_9 != 0x00000107)
			{
				if (Global_79AA[Global_175BD[iVar0 /*17*/].f_9 /*23*/].f_13 == iParam0)
				{
					return Global_175BD[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_111(int iParam0)
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

void func_112(int iParam0, bool bParam1)
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

void func_113(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	
	if (!(((((((func_116(0x00000059) || func_116(0x00000058)) || func_116(0x0000005C)) || func_116(0x00000021)) || func_115() == 0x00000059) || func_115() == 0x00000058) || func_115() == 0x0000005C) || func_115() == 0x00000021))
	{
		return;
	}
	iVar0 = 0x00000000;
	bVar1 = 0x00000000;
	iVar2 = 0x00000001;
	vVar3 = { Global_1B054 };
	while (!bVar1 && iVar2 < 0x0000000A)
	{
		bVar1 = 0x00000001;
		if (func_114(&iVar0, vVar3, fParam0))
		{
			bVar1 = 0x00000000;
			if (unk_0x4490D017C57827E9(Global_1B054, iVar2, &vVar3, 0x00000001, 0x40400000, 0x00000000))
			{
				iVar2++;
			}
		}
	}
	if (SYSTEM::VDIST2(vVar3, Global_1B054) > 2f)
	{
		unk_0xB885EF0389689E54(vVar3, 0x00000000, &Global_1B054, 0x00000000);
	}
}

int func_114(int iParam0, vector3 vParam1, float fParam2)
{
	int iVar0[5];
	int iVar1;
	
	iVar0[0x00000000] = joaat("crusader");
	iVar0[0x00000001] = joaat("barracks");
	iVar0[0x00000002] = joaat("trash");
	iVar0[0x00000003] = joaat("boxville3");
	iVar0[0x00000004] = joaat("fbi2");
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		*iParam0 = unk_0x83C1D4B63BBD91F6(vParam1, fParam2, iVar0[iVar1], 0x00010806);
		if (*iParam0 != 0x00000000)
		{
			return 0x00000001;
		}
		iVar1++;
	}
	return 0x00000000;
}

int func_115()
{
	return Global_12C54;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_16A39[iParam0 /*2*/])
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_15D98)
	{
		if (Global_15D98[iVar0 /*5*/] != 0xFFFFFFFF)
		{
			if (Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_117()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_11F87)
	{
		switch (Global_F129[Global_11F88[iVar0 /*9*/] /*13*/])
		{
			case 0x00000001:
				Global_11F88[iVar0 /*9*/].f_3 = 0x00000003;
				break;
			
			case 0x00000004:
				if (Global_F050)
				{
					Global_11F88[iVar0 /*9*/].f_3 = 0x00000003;
				}
				break;
		}
		iVar0++;
	}
}

void func_118()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	if (iVar1 == 0x00000000)
	{
		if (iVar2 == 0x00000000)
		{
		}
	}
	fVar0 = func_121(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_1B054);
	if (bLocal_64)
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 200f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 200f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	else
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 100f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 100f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	unk_0x8B89F2ABF0EA71C1(iVar1, iVar2, 0x00000000);
	func_119((SYSTEM::TO_FLOAT((iVar1 * 60 + iVar2)) / 60f));
}

void func_119(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (func_94(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5)))
		{
			func_120(&(Global_1B416.f_46B2.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000006)
	{
		if (func_94(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/])))
		{
			func_120(&(Global_1B416.f_46B2.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x9911B88AFCF2F6D2();
}

void func_120(int iParam0, float fParam1)
{
	if (func_94(iParam0))
	{
		func_93(iParam0, (func_89(iParam0) + fParam1));
	}
}

float func_121(vector3 vParam0, vector3 vParam1)
{
	return (SYSTEM::VMAG(vParam1 - vParam0) * 1.3f);
}

void func_122()
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_121(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_1B054) / 50f) * fLocal_73) * 2.4f);
	iVar1 = (SYSTEM::FLOOR(fLocal_82) + SYSTEM::ROUND(fVar0));
	fVar0 = SYSTEM::TO_FLOAT(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = SYSTEM::ROUND(fVar0);
	iLocal_101 = (iLocal_101 + iVar1);
	fLocal_82 = (fLocal_82 + IntToFloat(iLocal_101));
	func_123();
}

void func_123()
{
	iLocal_103 = (iLocal_103 + SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
	if (iLocal_103 > 0x00001388)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0x00000000;
	}
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vLocal_833, 0x00000000) > 50f)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0x00000000;
		vLocal_833 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
	}
	iLocal_101 = SYSTEM::CEIL(fLocal_82);
	if (iLocal_101 != iLocal_102)
	{
		unk_0x7E60C62A7CE58FC8(iLocal_111, "SET_TAXI_PRICE");
		unk_0x3CAEA85DA607305E(iLocal_101);
		unk_0x7E60D21B163E9D56();
		fLocal_83 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_1B054);
		iLocal_102 = iLocal_101;
	}
}

void func_124()
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_71)
	{
		case 0x00000000:
			iVar0 = joaat("sp0_dist_as_passenger_taxi");
			break;
		
		case 0x00000001:
			iVar0 = joaat("sp1_dist_as_passenger_taxi");
			break;
		
		case 0x00000002:
			iVar0 = joaat("sp2_dist_as_passenger_taxi");
			break;
		
		default:
			if (!func_40(0x0000000E))
			{
			}
			break;
	}
	if (!func_40(0x0000000E))
	{
		fVar1 = unk_0xB4077299EB642DD2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Global_1B054);
		unk_0x9505C13496579D28(iVar0, fVar1);
	}
}

void func_125()
{
	unk_0x486B4ADE317F0689();
	if (unk_0xBD054C76E6F4158B(Global_1AF0C.f_DA))
	{
		unk_0x51F8DBE54C75AE47(Global_1AF0C.f_DA);
	}
}

int func_126(int iParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		switch (iLocal_820)
		{
			case 0x00000000:
				iLocal_110 = 0x00000003;
				vLocal_829 = { func_49(*iParam0) };
				if (unk_0xE4EDC4B0E92C078B(Global_1B052) && *iParam0 == Global_1B052)
				{
					*uParam1 = { Global_1B057 };
					*fParam2 = Global_1B05B;
					vVar0 = { vLocal_829 - *uParam1 };
					vVar0.z = 0f;
					fLocal_72 = SYSTEM::VMAG(vVar0);
					iLocal_110 = 0x00000007;
					iLocal_820 = 0x00000004;
					return 0x00000001;
				}
				else
				{
					if (func_146(vLocal_829, uParam1, fParam2))
					{
						vVar0 = { vLocal_829 - *uParam1 };
						vVar0.z = 0f;
						fLocal_72 = SYSTEM::VMAG(vVar0);
						iLocal_110 = 0x00000007;
						iLocal_820 = 0x00000004;
						return 0x00000001;
					}
					iLocal_820 = 0x00000001;
					return 0x00000000;
				}
				break;
			
			case 0x00000001:
				if (func_135(vLocal_829, uParam1, fParam2, 0x00000001))
				{
					vVar0 = { vLocal_829 - *uParam1 };
					vVar0.z = 0f;
					fLocal_72 = SYSTEM::VMAG(vVar0);
					iLocal_110 = 0x00000007;
					iLocal_820 = 0x00000004;
					return 0x00000001;
				}
				else
				{
					iLocal_88 = 0x00000000;
					iLocal_820 = 0x00000002;
					return 0x00000000;
				}
				break;
			
			case 0x00000002:
				if (unk_0xC844350D5D58C99A(Global_1B04D))
				{
					if (func_127(&Global_1B04D, unk_0x68F4C0EC296D3901(Global_1B04D, 0x00000000), vLocal_829, uParam1, fParam2, &iLocal_88, iParam0, 0x000003E8))
					{
						iLocal_820 = 0x00000003;
						return 0x00000000;
					}
					else
					{
						return 0x00000000;
					}
				}
				break;
			
			case 0x00000003:
				if (func_146(*uParam1, uParam1, fParam2))
				{
					vVar0 = { vLocal_829 - *uParam1 };
					vVar0.z = 0f;
					fLocal_72 = SYSTEM::VMAG(vVar0);
					iLocal_110 = 0x00000007;
				}
				iLocal_820 = 0x00000004;
				return 0x00000001;
				break;
			
			case 0x00000004:
				return 0x00000001;
				break;
			
			case 0x00000005:
				break;
		}
	}
	return 0x00000000;
}

int func_127(var uParam0, vector3 vParam1, vector3 vParam2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar5 = 0x00000000;
	bVar13 = 0x00000000;
	iVar14 = 0x00000001;
	if (!func_134(vParam2))
	{
		iVar14 = 0x00000009;
	}
	iVar15 = 0x00000001;
	iVar18 = *iParam5 + 2;
	iVar19 = 0x00000032;
	func_132(vParam1, vParam2, &vLocal_830, &vLocal_831, iParam7);
	if (func_131(vLocal_830, vLocal_831))
	{
		while (!bVar13 && *iParam5 < iVar18)
		{
			if (vParam2.z == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x4A13F7D4B1E239A0(vParam2, *iParam5, uParam3, fParam4, &iVar6, iVar14, fVar0, fVar1))
			{
				iVar12 = unk_0xDEC4A70C9F250662(*uParam3, 0x00000001, iVar14, 0x40400000, 0x00000000);
				if (unk_0x5DD62183BBF151CD(iVar12))
				{
					if (unk_0xC05DA9D35DAF88FD(*uParam3, 1f, 0x00000001, &uVar4, &uVar3, &iVar8, &iVar7, &fVar10, iVar15))
					{
						if (*fParam4 < 90f || *fParam4 >= 270f)
						{
							bVar17 = 0x00000001;
						}
						else
						{
							bVar17 = 0x00000000;
						}
						bVar16 = 0x00000000;
						if (bVar17)
						{
							if (iVar6 == iVar8)
							{
								bVar16 = 0x00000001;
							}
						}
						else if (iVar6 == iVar7)
						{
							bVar16 = 0x00000001;
						}
						if (fVar10 < 0f)
						{
							fVar9 = 0f;
						}
						else if (unk_0x5B33870CBB8B6AC1(iVar12) || !unk_0xD9DC3EBC8290FF92(iVar12))
						{
							fVar9 = 0f;
						}
						else
						{
							if (bVar17)
							{
								if (bVar16)
								{
									fVar9 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
								}
								else
								{
									fVar9 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
								}
								if (bVar16)
								{
									if (iVar8 > 0x00000002)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar8 - 0x00000002)) * 1f));
									}
								}
								else if (iVar8 > 0x00000001)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar8 - 0x00000001)) * 1f));
								}
							}
							else
							{
								if (bVar16)
								{
									fVar9 = (4.2f * (SYSTEM::TO_FLOAT(iVar7) * 0.5f));
								}
								else
								{
									fVar9 = (4.2f * SYSTEM::TO_FLOAT(iVar7));
								}
								if (bVar16)
								{
									if (iVar7 > 0x00000002)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar7 - 0x00000002)) * 1f));
									}
								}
								else if (iVar7 > 0x00000001)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar7 - 0x00000001)) * 1f));
								}
							}
							if (unk_0x968116EE0D84C042(*uParam3, &uVar21, &uVar20))
							{
								if (!uVar20 & 0x00000040 == 0x00000000)
								{
									fVar9 = (fVar9 + (0.9f * fVar10));
								}
								if (!uVar20 & 0x00000004 == 0x00000000)
								{
									fVar9 = (fVar9 + -0.7f);
								}
							}
						}
						fVar11 = (vParam2.z - uParam3->f_2);
						if (fVar11 < 0f)
						{
							fVar11 = (fVar11 * -1f);
						}
						if ((func_130(vParam2, *uParam3) || fVar11 < 0.5f) || func_128(uParam6))
						{
							*uParam3 = { unk_0x8A5E176FF719A014(*uParam3, *fParam4, fVar9, 0f, 0f) };
							if (unk_0xDF1306B443CD3D15(*uParam0, 0x00000000))
							{
								iVar5 = *uParam0;
							}
							if (!unk_0x9868643FAC294133(*uParam3, 3f, 3f, 3f, iVar5))
							{
								if (func_135(*uParam3, uParam3, fParam4, 0x00000001))
								{
								}
								bVar13 = 0x00000001;
							}
						}
					}
				}
			}
			*iParam5++;
			if (*iParam5 >= iVar19)
			{
				*uParam3 = { vParam2 };
				if (uParam3->f_2 == 1f)
				{
					fVar11 = 1f;
					fVar11 = unk_0x1BEC198A85CA749A((*uParam3 - 2f), (uParam3->f_1 - 2f), (*uParam3 + 2f), (uParam3->f_1 + 2f));
					if (fVar11 > 1f)
					{
						iLocal_67 = 0x00000001;
						uParam3->f_2 = fVar11;
						uParam3->f_2 = (uParam3->f_2 + 0.5f);
					}
				}
				bVar13 = 0x00000001;
			}
		}
		if (bVar13)
		{
			vVar2 = { vParam2 - *uParam3 };
			vVar2.z = 0f;
			fLocal_72 = SYSTEM::VMAG(vVar2);
			if (fLocal_72 != 0f)
			{
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_128(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*uParam0) && func_129(*uParam0) == unk_0x817B3657F78A517A())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = unk_0x301901B13DC3365B(iParam0);
	}
	return iVar0;
}

int func_130(vector3 vParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (vParam1.z - vParam0.z);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (vParam0.z <= 1f)
	{
		func_54("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 0x00000001;
	}
	fVar0 = SYSTEM::VDIST(vParam0, vParam1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_54("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 0x00000001;
	}
	return 0x00000000;
}

int func_131(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	if (unk_0xD1B4D22E0BA9B0C8(Param0, Param0.f_1, Param2, Param2.f_1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_132(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (Param2 <= Param0)
	{
		vVar0.x = Param2;
		vVar1.x = Param0;
	}
	else
	{
		vVar0.x = Param0;
		vVar1.x = Param2;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		vVar0.y = Param2.f_1;
		vVar1.y = Param0.f_1;
	}
	else
	{
		vVar0.y = Param0.f_1;
		vVar1.y = Param2.f_1;
	}
	vVar0 = { vVar0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	vVar1 = { vVar1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!func_133(vVar0, *uParam4, 0x3F000000, 0x00000000) || !func_133(vVar0, *uParam4, 0x3F000000, 0x00000000))
	{
		*uParam4 = { vVar0 };
		*uParam5 = { vVar1 };
	}
	unk_0x10FEEAFF01E32639(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

int func_133(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_134(vector3 vParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA5A6BB5EBAD59A21(vParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x7F8A39872A07D2CE("SanAnd", sVar0) || unk_0x7F8A39872A07D2CE("Alamo", sVar0)) || unk_0x7F8A39872A07D2CE("ArmyB", sVar0)) || unk_0x7F8A39872A07D2CE("BhamCa", sVar0)) || unk_0x7F8A39872A07D2CE("Baytre", sVar0)) || unk_0x7F8A39872A07D2CE("BradT", sVar0)) || unk_0x7F8A39872A07D2CE("BradP", sVar0)) || unk_0x7F8A39872A07D2CE("CANNY", sVar0)) || unk_0x7F8A39872A07D2CE("CCreak", sVar0)) || unk_0x7F8A39872A07D2CE("ChamH", sVar0)) || unk_0x7F8A39872A07D2CE("CHU", sVar0)) || unk_0x7F8A39872A07D2CE("COSI", sVar0)) || unk_0x7F8A39872A07D2CE("CMSW", sVar0)) || unk_0x7F8A39872A07D2CE("Cypre", sVar0)) || unk_0x7F8A39872A07D2CE("Desrt", sVar0)) || unk_0x7F8A39872A07D2CE("ELGorl", sVar0)) || unk_0x7F8A39872A07D2CE("Galli", sVar0)) || unk_0x7F8A39872A07D2CE("Galfish", sVar0)) || unk_0x7F8A39872A07D2CE("Harmo", sVar0)) || unk_0x7F8A39872A07D2CE("HumLab", sVar0)) || unk_0x7F8A39872A07D2CE("Jail", sVar0)) || unk_0x7F8A39872A07D2CE("LAct", sVar0)) || unk_0x7F8A39872A07D2CE("LDam", sVar0)) || unk_0x7F8A39872A07D2CE("Lago", sVar0)) || unk_0x7F8A39872A07D2CE("MTChil", sVar0)) || unk_0x7F8A39872A07D2CE("MTJose", sVar0)) || unk_0x7F8A39872A07D2CE("MTGordo", sVar0)) || unk_0x7F8A39872A07D2CE("NCHU", sVar0)) || unk_0x7F8A39872A07D2CE("Oceana", sVar0)) || unk_0x7F8A39872A07D2CE("Palmpow", sVar0)) || unk_0x7F8A39872A07D2CE("PBluff", sVar0)) || unk_0x7F8A39872A07D2CE("Paleto", sVar0)) || unk_0x7F8A39872A07D2CE("PalCov", sVar0)) || unk_0x7F8A39872A07D2CE("PalFor", sVar0)) || unk_0x7F8A39872A07D2CE("PalHigh", sVar0)) || unk_0x7F8A39872A07D2CE("RTRAK", sVar0)) || unk_0x7F8A39872A07D2CE("Rancho", sVar0)) || unk_0x7F8A39872A07D2CE("SANDY", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaH", sVar0)) || unk_0x7F8A39872A07D2CE("TongvaV", sVar0)) || unk_0x7F8A39872A07D2CE("Zenora", sVar0)) || unk_0x7F8A39872A07D2CE("Slab", sVar0)) || unk_0x7F8A39872A07D2CE("WindF", sVar0)) || unk_0x7F8A39872A07D2CE("Zancudo", sVar0)) || unk_0x7F8A39872A07D2CE("SanChia", sVar0)) || unk_0x7F8A39872A07D2CE("zQ_UAR", sVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_135(vector3 vParam0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	if (func_145(vParam0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam2 = 163.87f;
		return 0x00000001;
	}
	else if (func_145(vParam0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam2 = 0f;
		return 0x00000001;
	}
	else if (func_145(vParam0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*fParam2 = 355.3355f;
		return 0x00000001;
	}
	else if (func_145(vParam0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam2 = 94.6893f;
		return 0x00000001;
	}
	else if (func_145(vParam0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam1 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam2 = 170.0221f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam2 = 324.1257f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 416.871f, -1613.081f, 28.1401f };
		*fParam2 = 227.9333f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0x00000000, 0x00000001) && !unk_0x8CD06866876216F2())
	{
		*uParam1 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam2 = 162.2744f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vParam0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0x00000000, 0x00000001) && !unk_0x8CD06866876216F2())
	{
		*uParam1 = { -911.1597f, -2676.132f, 12.7567f };
		*fParam2 = 338.9414f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 28f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -211.8546f, -2030.771f, 26.6204f };
		*fParam2 = 154.4302f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 159f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*fParam2 = 37.8784f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 180f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -2294.945f, 376.2506f, 173.4669f };
		*fParam2 = 296.6963f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 10f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam2 = 228.7709f;
		if (unk_0x0399732A9EBC368E(vVar1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0x00000000, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			vVar2[0x00000000 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			vVar2[0x00000001 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			vVar2[0x00000002 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			vVar2[0x00000003 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			vVar2[0x00000004 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			vVar2[0x00000005 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar3 = 0xFFFFFFFF;
			fVar4 = 99999f;
			iVar6 = 0x00000000;
			while (iVar6 <= 0x00000005)
			{
				fVar5 = SYSTEM::VDIST(vVar2[iVar6 /*3*/], vVar1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { vVar2[iVar3 /*3*/] };
			if (iVar3 == 0x00000000)
			{
				*fParam2 = 234.3999f;
			}
			else if (iVar3 == 0x00000001)
			{
				*fParam2 = 232.2255f;
			}
			else if (iVar3 == 0x00000002)
			{
				*fParam2 = 228.2855f;
			}
			else if (iVar3 == 0x00000003)
			{
				*fParam2 = 231.4914f;
			}
			else if (iVar3 == 0x00000004)
			{
				*fParam2 = 230.6703f;
			}
			else if (iVar3 == 0x00000005)
			{
				*fParam2 = 228.7709f;
			}
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 330f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -411.3629f, 1174.587f, 324.6421f };
		*fParam2 = 255.2881f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0x00000000, 0x00000001))
	{
		iVar0 = (iParam3 % 0x00000008);
		switch (iVar0)
		{
			case 0x00000001:
				*uParam1 = { -1380.101f, 95.1566f, 53.5054f };
				*fParam2 = 4.555f;
				break;
			
			case 0x00000002:
				*uParam1 = { -1379.139f, 84.2472f, 53.0592f };
				*fParam2 = 6.9278f;
				break;
			
			case 0x00000003:
				*uParam1 = { -1378.427f, 74.5077f, 52.6622f };
				*fParam2 = 2.6813f;
				break;
			
			case 0x00000004:
				*uParam1 = { -1384.177f, 73.9207f, 52.7438f };
				*fParam2 = 5.542f;
				break;
			
			case 0x00000005:
				*uParam1 = { -1381.118f, 35.7838f, 52.659f };
				*fParam2 = 7.6687f;
				break;
			
			case 0x00000006:
				*uParam1 = { -1383.741f, 64.1491f, 52.6647f };
				*fParam2 = 2.5572f;
				break;
			
			case 0x00000007:
				*uParam1 = { -1382.616f, 49.6876f, 52.6585f };
				*fParam2 = 3.0185f;
				break;
			
			default:
				*uParam1 = { -1383.299f, 54.4598f, 52.6562f };
				*fParam2 = 6.2155f;
				break;
		}
		return 0x00000001;
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (unk_0x0399732A9EBC368E(vParam0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { 50.9889f, -1092.525f, 28.2152f };
					*fParam2 = 150.8833f;
					break;
				
				case 0x00000002:
					*uParam1 = { 46.7725f, -1099.751f, 28.1639f };
					*fParam2 = 149.4322f;
					break;
				
				case 0x00000003:
					*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam2 = 154.1378f;
					break;
				
				case 0x00000004:
					*uParam1 = { 38.1922f, -1113.394f, 28.1507f };
					*fParam2 = 146.3778f;
					break;
				
				case 0x00000005:
					*uParam1 = { 13.0436f, -1124.767f, 27.7359f };
					*fParam2 = 91.163f;
					break;
				
				case 0x00000006:
					*uParam1 = { 1.4336f, -1125.042f, 27.1705f };
					*fParam2 = 91.0578f;
					break;
				
				case 0x00000007:
					*uParam1 = { -11.1811f, -1125.811f, 26.3688f };
					*fParam2 = 91.866f;
					break;
				
				default:
					*uParam1 = { 21.9431f, -1124.573f, 27.9417f };
					*fParam2 = 91.6961f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
					*fParam2 = 148.7004f;
					break;
				
				case 0x00000002:
					*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
					*fParam2 = 148.7144f;
					break;
				
				case 0x00000003:
					*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
					*fParam2 = 150.0955f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
					*fParam2 = 149.5649f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
					*fParam2 = 150.7363f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
					*fParam2 = 147.2113f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1044.487f, -2525.534f, 19.079f };
					*fParam2 = 150.7597f;
					break;
				
				default:
					*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
					*fParam2 = 150.7081f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -1044.741f, -2528.786f, 12.7568f };
					*fParam2 = 150.9439f;
					break;
				
				case 0x00000002:
					*uParam1 = { -1050.763f, -2539.498f, 12.7566f };
					*fParam2 = 150.851f;
					break;
				
				case 0x00000003:
					*uParam1 = { -1054.952f, -2546.86f, 12.7566f };
					*fParam2 = 149.9285f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1060.397f, -2556.898f, 12.6066f };
					*fParam2 = 150.8244f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1020.744f, -2490.084f, 12.6396f };
					*fParam2 = 148.6134f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1076.904f, -2589.179f, 12.6858f };
					*fParam2 = 149.0112f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1026.387f, -2501.952f, 12.6923f };
					*fParam2 = 149.7553f;
					break;
				
				default:
					*uParam1 = { -1070.506f, -2578.389f, 12.6932f };
					*fParam2 = 148.5232f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -1067.846f, -2708.94f, 19.0588f };
					*fParam2 = 230.9025f;
					break;
				
				case 0x00000002:
					*uParam1 = { -1058.224f, -2716.217f, 19.06f };
					*fParam2 = 237.1285f;
					break;
				
				case 0x00000003:
					*uParam1 = { -1004.567f, -2744.797f, 19.0811f };
					*fParam2 = 255.6885f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1049.509f, -2721.58f, 19.0546f };
					*fParam2 = 242.3581f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1017.154f, -2740.117f, 19.0525f };
					*fParam2 = 243.5798f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1042.087f, -2726.077f, 19.0452f };
					*fParam2 = 240.2381f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1027.353f, -2734.462f, 19.0509f };
					*fParam2 = 239.8703f;
					break;
				
				default:
					*uParam1 = { -1033.74f, -2730.746f, 19.0521f };
					*fParam2 = 239.9237f;
					break;
			}
			return 0x00000001;
		}
		else if (unk_0x0399732A9EBC368E(vParam0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0x00000000, 0x00000001))
		{
			iVar0 = (iParam3 % 0x00000008);
			switch (iVar0)
			{
				case 0x00000001:
					*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam2 = 265.8022f;
					break;
				
				case 0x00000002:
					*uParam1 = { -980.6166f, -2748.535f, 12.757f };
					*fParam2 = 263.5472f;
					break;
				
				case 0x00000003:
					*uParam1 = { -987.6072f, -2747.273f, 12.6069f };
					*fParam2 = 257.2886f;
					break;
				
				case 0x00000004:
					*uParam1 = { -1006.815f, -2739.345f, 12.6334f };
					*fParam2 = 242.1315f;
					break;
				
				case 0x00000005:
					*uParam1 = { -1051.83f, -2713.553f, 12.6333f };
					*fParam2 = 239.9312f;
					break;
				
				case 0x00000006:
					*uParam1 = { -1041.004f, -2719.647f, 12.6402f };
					*fParam2 = 240.1081f;
					break;
				
				case 0x00000007:
					*uParam1 = { -1023.832f, -2729.465f, 12.6445f };
					*fParam2 = 239.6737f;
					break;
				
				default:
					*uParam1 = { -1012.848f, -2735.172f, 12.6656f };
					*fParam2 = 237.6545f;
					break;
			}
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0x00000000, 0x00000001))
	{
		iVar0 = (iParam3 % 0x00000008);
		switch (iVar0)
		{
			case 0x00000001:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam2 = 93.132f;
				break;
			
			case 0x00000002:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*fParam2 = 92.2581f;
				break;
			
			case 0x00000003:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam2 = 92.714f;
				break;
			
			case 0x00000004:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam2 = 92.8628f;
				break;
			
			case 0x00000005:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*fParam2 = 268.6186f;
				break;
			
			case 0x00000006:
				*uParam1 = { 844.6506f, -1010.09f, 26.9894f };
				*fParam2 = 270.076f;
				break;
			
			case 0x00000007:
				*uParam1 = { 852.2498f, -1010.132f, 27.8091f };
				*fParam2 = 269.722f;
				break;
			
			default:
				*uParam1 = { 861.4028f, -1010.025f, 28.808f };
				*fParam2 = 270.7686f;
				break;
		}
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 20f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0x00000000, 0x00000001))
	{
		iVar0 = (iParam3 % 0x00000008);
		switch (iVar0)
		{
			case 0x00000001:
				*uParam1 = { 703.2726f, -1067.7f, 21.4765f };
				*fParam2 = 181.3629f;
				break;
			
			case 0x00000002:
				*uParam1 = { 715.2089f, -1070.399f, 21.2708f };
				*fParam2 = 175.4362f;
				break;
			
			case 0x00000003:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam2 = 181.0347f;
				break;
			
			case 0x00000004:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*fParam2 = 233.169f;
				break;
			
			case 0x00000005:
				*uParam1 = { 703.807f, -1057.866f, 21.4152f };
				*fParam2 = 170.1609f;
				break;
			
			case 0x00000006:
				*uParam1 = { 708.1994f, -1048.194f, 21.216f };
				*fParam2 = 134.2729f;
				break;
			
			case 0x00000007:
				*uParam1 = { 711.1124f, -1069.423f, 21.3129f };
				*fParam2 = 177.9198f;
				break;
			
			default:
				*uParam1 = { 703.545f, -1078.718f, 21.3987f };
				*fParam2 = 180.5686f;
				break;
		}
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 31f;
	}
	if (func_142(0x00000003, vVar1))
	{
		if (func_141(vVar1, 0x00000003, 0x00000000, 0x00000000))
		{
			*uParam1 = { -1520.121f, 2731.511f, 16.6437f };
			*fParam2 = 48.1572f;
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 77.2f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*fParam2 = 255.41f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 51.1739f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 0x00000001, 0x00000001))
	{
		if (func_140(vVar1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam2 = 275.4274f;
			return 0x00000001;
		}
		if (func_140(vVar1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam2 = 275.4411f;
			return 0x00000001;
		}
		if (func_140(vVar1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam2 = 301.2981f;
			return 0x00000001;
		}
		if (func_140(vVar1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.272f, -1753.051f, 37.63976f };
			*fParam2 = 209.4354f;
			return 0x00000001;
		}
		*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
		*fParam2 = 275.4274f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 25f;
	}
	if (func_140(vVar1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x0399732A9EBC368E(vVar1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vVar1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0x00000000, 0x00000001))
		{
			*uParam1 = { -1624.445f, -976.9755f, 12.0175f };
			*fParam2 = 141.167f;
			return 0x00000001;
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 10f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*fParam2 = 216.12f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 114f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0x00000000, 0x00000001))
	{
		iVar0 = 0x00000003;
		switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
		{
			case 0x00000000:
				*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
				*fParam2 = 182.0998f;
				break;
			
			case 0x00000001:
				*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
				*fParam2 = 83.3356f;
				break;
			
			case 0x00000002:
				*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
				*fParam2 = 223.2795f;
				break;
		}
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 40f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1782.19f, 3300.076f, 40.4593f };
		*fParam2 = 142.426f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 7f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -658.2056f, -1388.789f, 9.499f };
		*fParam2 = 174.6945f;
		return 0x00000001;
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 325f;
	}
	if (SYSTEM::VDIST2(vVar1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*fParam2 = 71.6555f;
		return 0x00000001;
	}
	if (!func_138())
	{
		vVar1 = { vParam0 };
		if (vParam0.z == 1f)
		{
			vVar1.z = 36.1141f;
		}
		if (func_142(0x00000007, vVar1))
		{
			if (func_141(vVar1, 0x00000007, 0x00000000, 0x00000000))
			{
				*uParam1 = { -1012.31f, -465.1634f, 36.1141f };
				*fParam2 = 112.1485f;
				return 0x00000001;
			}
		}
	}
	vVar1 = { vParam0 };
	if (vParam0.z == 1f)
	{
		vVar1.z = 12.7091f;
	}
	if (func_142(0x00000002, vVar1))
	{
		if (func_141(vVar1, 0x00000002, 0x00000000, 0x00000000))
		{
			iVar0 = 0x00000004;
			if (!unk_0x8CD06866876216F2())
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
				{
					case 0x00000000:
						*uParam1 = { -979.95f, -2746.109f, 12.7091f };
						*fParam2 = 91.4929f;
						break;
					
					case 0x00000001:
						*uParam1 = { -1025.193f, -2728.218f, 12.6647f };
						*fParam2 = 239.0041f;
						break;
					
					case 0x00000002:
						*uParam1 = { -1051.315f, -2713.069f, 12.6676f };
						*fParam2 = 236.4666f;
						break;
					
					case 0x00000003:
						*uParam1 = { -1095.742f, -2637.871f, 12.6461f };
						*fParam2 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 0x00000008);
				switch (iVar0)
				{
					case 0x00000001:
						*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
						*fParam2 = 148.7004f;
						break;
					
					case 0x00000002:
						*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
						*fParam2 = 148.7144f;
						break;
					
					case 0x00000003:
						*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
						*fParam2 = 150.0955f;
						break;
					
					case 0x00000004:
						*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
						*fParam2 = 149.5649f;
						break;
					
					case 0x00000005:
						*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
						*fParam2 = 150.7363f;
						break;
					
					case 0x00000006:
						*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
						*fParam2 = 147.2113f;
						break;
					
					case 0x00000007:
						*uParam1 = { -1044.487f, -2525.534f, 19.079f };
						*fParam2 = 150.7597f;
						break;
					
					default:
						*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
						*fParam2 = 150.7081f;
						break;
					}
			}
			return 0x00000001;
		}
	}
	vVar7 = { -509.5746f, 4938.918f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = func_137(vParam0, vVar7);
	vVar10 = { 2450.604f, 5129.224f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = func_137(vParam0, vVar10);
	vVar1 = { vParam0 };
	bVar13 = 0x00000000;
	if (vParam0.z == 1f)
	{
		vVar1.z = 400f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 200f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (bVar13)
	{
		*uParam1 = { vVar7 };
		*fParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { vVar10 };
			*fParam2 = fVar11;
		}
		return 0x00000001;
	}
	bVar13 = 0x00000000;
	if (vParam0.z == 1f)
	{
		vVar1.z = 700f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 300f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 100f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 65f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0x00000000, 0x00000001))
	{
		bVar13 = 0x00000001;
	}
	if (bVar13)
	{
		*uParam1 = { vVar10 };
		*fParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { vVar7 };
			*fParam2 = fVar8;
		}
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 6f;
	}
	if (func_136(vVar1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x0399732A9EBC368E(vVar1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vVar1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0x00000000, 0x00000001)) || unk_0x0399732A9EBC368E(vVar1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0x00000000, 0x00000001))
		{
			iVar0 = 0x00000002;
			if (unk_0x09AC81E49EA267F7(0x00000000, iVar0) == 0x00000000)
			{
				*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam2 = 253.9545f;
			}
			else
			{
				*uParam1 = { -189.6824f, -2531.649f, 5.0031f };
				*fParam2 = 0.0408f;
			}
			return 0x00000001;
		}
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28.4f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*fParam2 = 219.4788f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28.2065f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 498.185f, -1288.535f, 28.1923f };
		*fParam2 = 181.3208f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 28.2065f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 504.1738f, -1421.251f, 28.2065f };
		*fParam2 = 83.2905f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 73f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam2 = 58.9938f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 52f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
		*fParam2 = 52.3086f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vVar1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 1134.053f, 53.1835f, 79.7553f };
		*fParam2 = 145.5134f;
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 30.6f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0x00000000, 0x00000001))
	{
		iVar0 = 0x00000002;
		if (unk_0x09AC81E49EA267F7(0x00000000, iVar0) == 0x00000000)
		{
			*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam2 = 162.0019f;
		}
		else
		{
			*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam2 = 341.8541f;
		}
		return 0x00000001;
	}
	if (vParam0.z == 1f)
	{
		vVar1.z = 33.5f;
	}
	if (unk_0x0399732A9EBC368E(vVar1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0x00000000, 0x00000001) || unk_0x0399732A9EBC368E(vVar1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0x00000000, 0x00000001))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*fParam2 = -20f;
		return 0x00000001;
	}
	else if (unk_0x0399732A9EBC368E(vVar1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*fParam2 = 160f;
		return 0x00000001;
	}
	if (unk_0x0399732A9EBC368E(vParam0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0x00000000, 0x00000001))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam2 = 140.7302f;
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_136(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(vParam0, vParam1) <= (fParam2 * fParam2);
}

float func_137(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return SYSTEM::VDIST2(Param0, Param0.f_1, 0f, Param2, Param2.f_1, 0f);
}

int func_138()
{
	int iVar0;
	
	iVar0 = func_57();
	if (iVar0 == 0x00000000)
	{
		if (func_139(0x00000041))
		{
			return 0x00000001;
		}
		if (unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) > 0x00000000)
		{
			return 0x00000001;
		}
	}
	else if (iVar0 == 0x00000001)
	{
		if (func_139(0x00000042))
		{
			return 0x00000001;
		}
	}
	else if (iVar0 == 0x00000002)
	{
		if (func_139(0x00000041))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_139(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

bool func_140(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_141(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0x00000000;
	switch (iParam1)
	{
		case 0x00000001:
			vVar0[0x00000000 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0x00000000 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0x00000000] = 171.25f;
			vVar0[0x00000001 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[0x00000001 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[0x00000001] = 132f;
			vVar0[0x00000002 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[0x00000002 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[0x00000002] = 132f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000002:
			vVar0[0x00000000 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0x00000000 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 247f;
			vVar0[0x00000001 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[0x00000001 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 149f;
			vVar0[0x00000002 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[0x00000002 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 185.5f;
			vVar0[0x00000003 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[0x00000003 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 250f;
			vVar0[0x00000004 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[0x00000004 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 193.5f;
			vVar0[0x00000005 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[0x00000005 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 234.5f;
			vVar0[0x00000006 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[0x00000006 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[0x00000006] = 16f;
			vVar0[0x00000007 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[0x00000007 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 80f;
			vVar0[0x00000008 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[0x00000008 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 142f;
			vVar0[0x00000009 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[0x00000009 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000009] = 30.75f;
			vVar0[0x0000000A /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[0x0000000A /*3*/] = { -896.3734f, -3505.715f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000A] = 150f;
			vVar0[0x0000000B /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[0x0000000B /*3*/] = { -1685.626f, -2720.364f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000B] = 29.25f;
			vVar0[0x0000000C /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[0x0000000C /*3*/] = { -1110.198f, -3493.617f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x0000000C] = 43f;
			iVar3 = 0x0000000D;
			break;
		
		case 0x00000003:
			vVar0[0x00000000 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0x00000000 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000000] = 255f;
			vVar0[0x00000001 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[0x00000001 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000001] = 180f;
			vVar0[0x00000002 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[0x00000002 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000002] = 205f;
			vVar0[0x00000003 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[0x00000003 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000003] = 86.25f;
			vVar0[0x00000004 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[0x00000004 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000004] = 150.5f;
			vVar0[0x00000005 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[0x00000005 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000005] = 140.5f;
			vVar0[0x00000006 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[0x00000006 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000006] = 90f;
			vVar0[0x00000007 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[0x00000007 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000007] = 100f;
			vVar0[0x00000008 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[0x00000008 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((0x000000FA + iParam2)) };
			fVar2[0x00000008] = 248.75f;
			vVar0[0x00000009 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[0x00000009 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[0x00000009] = 128f;
			vVar0[0x0000000A /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[0x0000000A /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[0x0000000A] = 140f;
			vVar0[0x0000000B /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[0x0000000B /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[0x0000000B] = 16f;
			vVar0[0x0000000C /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[0x0000000C /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[0x0000000C] = 214.25f;
			vVar0[0x0000000D /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[0x0000000D /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[0x0000000D] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0x00000000;
			}
			vVar1[0x00000009 /*3*/].f_2 = (vVar1[0x00000009 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000A /*3*/].f_2 = (vVar1[0x0000000A /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000B /*3*/].f_2 = (vVar1[0x0000000B /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000C /*3*/].f_2 = (vVar1[0x0000000C /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[0x0000000D /*3*/].f_2 = (vVar1[0x0000000D /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 0x0000000E;
			break;
		
		case 0x00000004:
			vVar0[0x00000000 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0x00000000 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000000] = 114f;
			vVar0[0x00000001 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[0x00000001 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000001] = 88.5f;
			vVar0[0x00000002 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[0x00000002 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000002] = 133.25f;
			vVar0[0x00000003 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[0x00000003 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000003] = 104.5f;
			vVar0[0x00000004 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[0x00000004 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000004] = 121.75f;
			vVar0[0x00000005 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[0x00000005 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000005] = 84.5f;
			vVar0[0x00000006 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[0x00000006 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000006] = 103.75f;
			vVar0[0x00000007 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[0x00000007 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000007] = 104.25f;
			vVar0[0x00000008 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[0x00000008 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000008] = 91f;
			vVar0[0x00000009 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[0x00000009 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((0x00000096 + iParam2)) };
			fVar2[0x00000009] = 51.25f;
			iVar3 = 0x0000000A;
			break;
		
		case 0x00000005:
			vVar0[0x00000000 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0x00000000 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000000] = 45.75f;
			vVar0[0x00000001 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[0x00000001 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000001] = 99f;
			vVar0[0x00000002 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[0x00000002 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((0x00000028 + iParam2)) };
			fVar2[0x00000002] = 81.5f;
			iVar3 = 0x00000003;
			break;
		
		case 0x00000006:
			vVar0[0x00000000 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0x00000000 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((0x0000000A + iParam2)) };
			fVar2[0x00000000] = 120f;
			vVar0[0x00000001 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[0x00000001 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[0x00000001] = 170f;
			vVar0[0x00000002 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[0x00000002 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[0x00000002] = 12.5f;
			vVar0[0x00000003 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[0x00000003 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[0x00000003] = 9.75f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000007:
			vVar0[0x00000000 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0x00000000 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000000] = 162f;
			vVar0[0x00000001 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[0x00000001 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000001] = 124f;
			vVar0[0x00000002 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[0x00000002 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000002] = 55f;
			vVar0[0x00000003 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[0x00000003 /*3*/] = { -1073.333f, -498.717f, IntToFloat((0x00000032 + iParam2)) };
			fVar2[0x00000003] = 142f;
			iVar3 = 0x00000004;
			break;
		
		case 0x00000008:
			vVar0[0x00000000 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0x00000000 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0x00000000] = 7.75f;
			vVar0[0x00000001 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[0x00000001 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[0x00000001] = 14.75f;
			vVar0[0x00000002 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[0x00000002 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[0x00000002] = 31.5f;
			vVar0[0x00000003 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[0x00000003 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[0x00000003] = 30.5f;
			vVar0[0x00000004 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[0x00000004 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[0x00000004] = 6.75f;
			iVar3 = 0x00000005;
			break;
	}
	iVar4 = 0x00000000;
	while (iVar4 < iVar3)
	{
		if (unk_0x0399732A9EBC368E(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, 0x00000001))
		{
			return 0x00000001;
		}
		iVar4++;
	}
	return 0x00000000;
}

bool func_142(int iParam0, vector3 vParam1)
{
	return SYSTEM::VDIST2(vParam1, func_144(iParam0)) < func_143(iParam0);
}

float func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1000000f;
			break;
		
		case 0x00000002:
			return 1000000f;
			break;
		
		case 0x00000003:
			return 1500000f;
			break;
		
		case 0x00000004:
			return 500000f;
			break;
		
		case 0x00000005:
			return 500000f;
			break;
		
		case 0x00000006:
			return 500000f;
			break;
		
		case 0x00000007:
			return 500000f;
			break;
		
		case 0x00000008:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_144(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 0x00000002:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 0x00000003:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 0x00000004:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 0x00000005:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 0x00000006:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 0x00000007:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 0x00000008:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_145(vector3 vParam0, vector3 vParam1, vector3 vParam2)
{
	if (((((vParam0.x > vParam1.x && vParam0.x < vParam2.x) && vParam0.y > vParam1.y) && vParam0.y < vParam2.y) && vParam0.z > vParam1.z) && vParam0.z < vParam2.z)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_146(vector3 vParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_158(&vParam0, &iLocal_816, &fVar0);
	func_156(&vParam0, &iLocal_106, &fVar1);
	func_153(&vParam0, &iLocal_817, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_152(iLocal_816, vParam0))
		{
			if (func_151(iLocal_816, uParam1, fParam2))
			{
				return 0x00000001;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_150(iLocal_106, vParam0))
		{
			if (func_149(iLocal_106, uParam1, fParam2))
			{
				return 0x00000001;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_148(iLocal_817, vParam0))
		{
			if (func_147(iLocal_817, uParam1, fParam2))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_147(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x0000004C:
			*uParam1 = { -1094.711f, -2641.982f, 12.7071f };
			*uParam2 = 188.2694f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { -1917.719f, 4445.75f, 38.6592f };
			*uParam2 = 45.822f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { -482.5762f, 1993.85f, 206.3482f };
			*uParam2 = 263.9373f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { -208.3305f, 4195.341f, 43.1714f };
			*uParam2 = 333.4403f;
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 1619.446f, 3820.96f, 33.9381f };
			*uParam2 = 129.6464f;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			*uParam1 = { 2045.169f, 2155.887f, 94.3423f };
			*uParam2 = 347.9475f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 2952.767f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 0x00000001;
			break;
		
		case 0x00000069:
		case 0x0000006A:
			*uParam1 = { 2119.676f, 4747.198f, 40.1793f };
			*uParam2 = 305.2213f;
			return 0x00000001;
			break;
		
		case 0x0000007D:
			*uParam1 = { -817.3487f, -1303.89f, 4.0005f };
			*uParam2 = 253.9379f;
			return 0x00000001;
			break;
		
		case 0x0000007E:
			*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 0x00000001;
			break;
		
		case 0x0000007F:
			*uParam1 = { 2414.063f, 1503.77f, 35.6614f };
			*uParam2 = 124.0994f;
			return 0x00000001;
			break;
		
		case 0x00000080:
			*uParam1 = { -203.2552f, 6536.089f, 10.0979f };
			*uParam2 = 311.0677f;
			return 0x00000001;
			break;
		
		case 0x00000081:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 0x00000001;
			break;
		
		case 0x00000083:
			*uParam1 = { -1214.252f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 0x00000001;
			break;
		
		case 0x00000084:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 0x00000001;
			break;
		
		case 0x00000086:
			*uParam1 = { -1363.183f, 4468.691f, 23.1468f };
			*uParam2 = 272.2546f;
			return 0x00000001;
			break;
		
		case 0x00000087:
			*uParam1 = { 2477.088f, 4948.677f, 44.0936f };
			*uParam2 = 49.3948f;
			return 0x00000001;
			break;
		
		case 0x00000088:
			*uParam1 = { 1047.931f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 0x00000001;
			break;
		
		case 0x0000006B:
			*uParam1 = { -1200.863f, -2049.46f, 12.9248f };
			*uParam2 = 334.965f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1960.388f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_148(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 0x0000004C:
			if (vParam1.z == 1f)
			{
				vParam1.z = 15f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1157.595f, -2726.636f, 12.94464f, -1110.794f, -2679.33f, 22.94466f, 26f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000046:
			if (vParam1.z == 1f)
			{
				vParam1.z = 38.5f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1908.065f, 4432.693f, 51.3842f, -1962.212f, 4473.8f, 22.93989f, 70f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000047:
			if (vParam1.z == 1f)
			{
				vParam1.z = 206.5f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -541.8311f, 2050.599f, 186.3904f, -499.787f, 1968.325f, 228.0183f, 70f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000049:
			if (vParam1.z == 1f)
			{
				vParam1.z = 43.1f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -179.8588f, 4216.167f, 30.26505f, -246.32f, 4226.653f, 53.77886f, 70f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000004A:
			if (vParam1.z == 1f)
			{
				vParam1.z = 34f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1634.122f, 3858.049f, 28.33912f, 1573.259f, 3800.442f, 48.35476f, 70f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000004B:
			if (vParam1.z == 1f)
			{
				vParam1.z = 94f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 2057.873f, 2059.198f, 63.88074f, 1999.045f, 2190.544f, 122.2642f, 110f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000048:
			if (vParam1.z == 1f)
			{
				vParam1.z = 40.7f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 3028.084f, 2768.167f, 57.72984f, 2944.284f, 2772.836f, 30.23068f, 85f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000069:
		case 0x0000006A:
			if (vParam1.z == 1f)
			{
				vParam1.z = 305f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 2097.951f, 4820.308f, 55.48169f, 2151.254f, 4726.398f, 31.0732f, 120f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000007D:
			if (vParam1.z == 1f)
			{
				vParam1.z = 4.7f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -763.5086f, -1297.98f, 2.000373f, -864.1372f, -1278.007f, 24.15038f, 85f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000007E:
			if (vParam1.z == 1f)
			{
				vParam1.z = 52f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000007F:
			if (vParam1.z == 1f)
			{
				vParam1.z = 35.6f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 2512.305f, 1519.462f, 28.55504f, 2380.374f, 1521.587f, 58.80984f, 90f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000080:
			if (vParam1.z == 1f)
			{
				vParam1.z = 10.0979f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -193.5583f, 6533.439f, -1.902109f, -299.2512f, 6645.049f, 20.45973f, 120f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000081:
			if (vParam1.z == 1f)
			{
				vParam1.z = 325f;
			}
			if (SYSTEM::VDIST2(vParam1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000083:
			if (vParam1.z == 1f)
			{
				vParam1.z = 133f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1171.147f, 4647.89f, 203.7937f, -1280.149f, 4457.597f, 5.653551f, 120f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000084:
			if (vParam1.z == 1f)
			{
				vParam1.z = 91.6f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -687.974f, 4499.52f, 114.781f, -826.0081f, 4496.864f, 49.88359f, 140f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000086:
			if (vParam1.z == 1f)
			{
				vParam1.z = 23f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1364.701f, 4490.626f, 49.52477f, -1367.169f, 4340.34f, -1.682158f, 100f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000087:
			if (vParam1.z == 1f)
			{
				vParam1.z = 44f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 2566.189f, 5007.007f, 97.36896f, 2491.714f, 4923.261f, 30.43494f, 80f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000088:
			if (vParam1.z == 1f)
			{
				vParam1.z = 69f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1009.917f, -163.4684f, 102.1028f, 1113.474f, -221.3295f, 49.8745f, 90f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000006B:
			if (vParam1.z == 1f)
			{
				vParam1.z = 12f;
			}
			if (SYSTEM::VDIST2(vParam1, -1230.622f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000041:
			if (vParam1.z == 1f)
			{
				vParam1.z = 47f;
			}
			if (SYSTEM::VDIST2(vParam1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_149(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000009:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { -1646.118f, 4206.743f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 0x00000001:
					*uParam1 = { -1582.89f, 4201.409f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x0000000B:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 0x00000001:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 0x00000001:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { -2934.66f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 0x00000001:
					*uParam1 = { -2842.023f, 3145.086f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { -204.0333f, 1313.973f, 303.4189f };
			*uParam2 = 126.7738f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { -906.4329f, -2694.28f, 12.8182f };
			*uParam2 = 329.3241f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1753.901f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { -1859.543f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 827.072f, 1282.288f, 359.2872f };
			*uParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -640.2675f, 6050.98f, 7.4082f };
			*uParam2 = 138.3021f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { -92.2052f, -1254.828f, 28.1682f };
			*uParam2 = 349.959f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
		case 0x0000001D:
			*uParam1 = { 569.276f, -1730.967f, 28.1277f };
			*uParam2 = 246.5764f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { -1110.088f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 67.1562f, 4560.134f, 97.8678f };
			*uParam2 = 113.412f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { -1069.076f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { -1073.129f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { -91.4237f, -1305.558f, 28.1569f };
			*uParam2 = 2.2198f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 2479.249f, 3401.234f, 48.9551f };
			*uParam2 = 35.1009f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { 1149.978f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003E:
			*uParam1 = { -27.2198f, -1467.933f, 29.8592f };
			*uParam2 = 273.1409f;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_150(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 0x00000009:
			if (vParam1.z == 1f)
			{
				vParam1.z = 83.3f;
			}
			if (SYSTEM::VDIST2(vParam1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000B:
			if (vParam1.z == 1f)
			{
				vParam1.z = 35f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000C:
			if (vParam1.z == 1f)
			{
				vParam1.z = 35f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000E:
			if (vParam1.z == 1f)
			{
				vParam1.z = 11.66f;
			}
			if (SYSTEM::VDIST2(vParam1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			if (vParam1.z == 1f)
			{
				vParam1.z = 302.86f;
			}
			if (SYSTEM::VDIST2(vParam1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000012:
			if (vParam1.z == 1f)
			{
				vParam1.z = 14.64f;
			}
			if (SYSTEM::VDIST2(vParam1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (vParam1.z == 1f)
			{
				vParam1.z = 325f;
			}
			if (SYSTEM::VDIST2(vParam1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (vParam1.z == 1f)
			{
				vParam1.z = 170.29f;
			}
			if (SYSTEM::VDIST2(vParam1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000015:
			if (vParam1.z == 1f)
			{
				vParam1.z = 44.9677f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1903.322f, -401.2384f, 19.23456f, -1844.879f, -445.7261f, 73.56197f, 115f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000016:
			if (vParam1.z == 1f)
			{
				vParam1.z = 359f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 794.2453f, 1277.443f, -100f, 833.8215f, 1277.108f, 400f, 19f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000017:
			if (vParam1.z == 1f)
			{
				vParam1.z = 5f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1015.526f, 6287.513f, -10.94449f, -761.3104f, 5895.014f, 45.33727f, 167.75f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000018:
			if (vParam1.z == 1f)
			{
				vParam1.z = 29.6f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -72.13491f, -1267.587f, 27.68361f, -72.18015f, -1256.712f, 31f, 30f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000001A:
			if (vParam1.z == 1f)
			{
				vParam1.z = 16.3f;
			}
			if (SYSTEM::VDIST2(vParam1, -683.4159f, 5841.043f, 16.3306f) < (20f * 20f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000001C:
		case 0x0000001D:
			if (vParam1.z == 1f)
			{
				vParam1.z = 29f;
			}
			if (SYSTEM::VDIST2(vParam1, 566.1639f, -1773.817f, 29f) < (50f * 50f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000001E:
			if (vParam1.z == 1f)
			{
				vParam1.z = 63.1146f;
			}
			if (SYSTEM::VDIST2(vParam1, -1103.628f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000021:
			if (vParam1.z == 1f)
			{
				vParam1.z = 100f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -21.12362f, 4518.907f, 119.7836f, 43.13283f, 4538.929f, 72.58955f, 48f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000025:
			if (vParam1.z == 1f)
			{
				vParam1.z = 67.5f;
			}
			if (SYSTEM::VDIST2(vParam1, -1099.502f, 790.2614f, 163.3998f) < (30f * 30f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000027:
			if (vParam1.z == 1f)
			{
				vParam1.z = 67.5f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1088.425f, 372.0723f, 62.75896f, -967.03f, 363.5976f, 101.3483f, 75f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000002B:
			if (vParam1.z == 1f)
			{
				vParam1.z = 28.2f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -91.45676f, -1296.975f, 26.15437f, 40.67288f, -1297.459f, 58.29368f, 110f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000002C:
			if (vParam1.z == 1f)
			{
				vParam1.z = 49.9f;
			}
			if (SYSTEM::VDIST2(vParam1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000002F:
			if (vParam1.z == 1f)
			{
				vParam1.z = 110f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -78.38029f, 285.5254f, 102.6286f, -51.1546f, 357.5217f, 122.0617f, 40f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000031:
			if (vParam1.z == 1f)
			{
				vParam1.z = 100f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 420.5196f, 116.2892f, 77.57532f, 212.2937f, 193.6794f, 131.8767f, 250f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000032:
			if (vParam1.z == 1f)
			{
				vParam1.z = 64f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1140.158f, -540.9644f, 49.99944f, 972.3716f, -535.1002f, 85.64397f, 168.25f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003E:
			if (vParam1.z == 1f)
			{
				vParam1.z = 29.6f;
			}
			if (SYSTEM::VDIST2(vParam1, -16.5304f, -1473.121f, 29.611f) < (8f * 8f))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_151(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000003:
			*uParam1 = { -1456.347f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 0x00000001;
			break;
		
		case 0x00000020:
		case 0x00000026:
			*uParam1 = { 1361.675f, -2040.575f, 51.0214f };
			*uParam2 = 281.5022f;
			return 0x00000001;
			break;
		
		case 0x00000029:
		case 0x0000002F:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { -43.9252f, -1460.432f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 0x00000001:
					*uParam1 = { 14.0313f, -1460.48f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			iVar0 = 0x00000003;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 0x00000001:
					*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 0x00000002:
					*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000018:
			iVar0 = 0x00000002;
			*uParam1 = { 1430.097f, -2588.065f, 47.0326f };
			*uParam2 = 353.6747f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 0x00000001;
			break;
		
		case 0x00000057:
			*uParam1 = { 185.1471f, -3047.229f, 4.7824f };
			*uParam2 = 163.8686f;
			return 0x00000001;
			break;
		
		case 0x0000004E:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { 504.1742f, -1652.472f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 0x00000001:
					*uParam1 = { 275.9677f, -1554.22f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x0000004F:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { 853.9595f, -1590.922f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 0x00000001:
					*uParam1 = { 847.5631f, -1559.719f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000053:
			iVar0 = 0x00000002;
			switch (unk_0x09AC81E49EA267F7(0x00000000, iVar0))
			{
				case 0x00000000:
					*uParam1 = { 2602.427f, 2852.173f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 0x00000001:
					*uParam1 = { 2686.404f, 2957.39f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x0000004C:
		case 0x00000054:
			*uParam1 = { 135.4725f, -1309.896f, 28.0485f };
			*uParam2 = 301.12f;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_152(int iParam0, vector3 vParam1)
{
	switch (iParam0)
	{
		case 0x00000003:
			if (vParam1.z == 1f)
			{
				vParam1.z = 7f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -1535.754f, -922.101f, 4.122119f, -1487.87f, -961.3929f, 26.71922f, 50f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if (vParam1.z == 1f)
			{
				vParam1.z = 40f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 53.12898f, -463.9999f, 36.9208f, 99.3761f, -329.3476f, 118.0454f, 125f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000020:
		case 0x00000026:
			if (vParam1.z == 1f)
			{
				vParam1.z = 51.0214f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1420.347f, -2036.558f, 47.36072f, 1341.11f, -2103.844f, 72.32651f, 55f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000029:
		case 0x0000002F:
			if (vParam1.z == 1f)
			{
				vParam1.z = 51.0214f;
			}
			if (SYSTEM::VDIST2(vParam1, -13.89061f, -1449.29f, 29.64636f) < (36f * 36f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000030:
			if (vParam1.z == 1f)
			{
				vParam1.z = 173.47f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -2306.98f, 435.3038f, 171.4666f, -2303.291f, 366.3199f, 179.6018f, 65.5f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000002D:
			if (vParam1.z == 1f)
			{
				vParam1.z = 114f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000018:
			if (vParam1.z == 1f)
			{
				vParam1.z = 46f;
			}
			if (SYSTEM::VDIST2(vParam1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000003C:
			if (vParam1.z == 1f)
			{
				vParam1.z = 34.5f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, -995.978f, -517.4324f, 11.37763f, -1060.725f, -547.5588f, 65.33043f, 35.75f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000056:
			if (vParam1.z == 1f)
			{
				vParam1.z = 23.18f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.4064f, 43.03712f, 53f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000057:
			if (vParam1.z == 1f)
			{
				vParam1.z = 5f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 148.8361f, -3029.146f, 4.277727f, 148.1396f, -3342.344f, 22.90379f, 97.75f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000004E:
			if (vParam1.z == 1f)
			{
				vParam1.z = 28.1893f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 446.8174f, -1691.708f, 23.28233f, 288.5565f, -1552.352f, 108.3117f, 155f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000004F:
			if (vParam1.z == 1f)
			{
				vParam1.z = 28.1893f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 910.9382f, -1749.91f, 14.50614f, 921.7415f, -1455.248f, 99.67125f, 210f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000053:
			if (vParam1.z == 1f)
			{
				vParam1.z = 37f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 2657.302f, 2974.529f, 34.53447f, 2591.657f, 2880.223f, 68.08156f, 78.75f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000004C:
		case 0x00000054:
			if (vParam1.z == 1f)
			{
				vParam1.z = 28f;
			}
			if (unk_0x0399732A9EBC368E(vParam1, 83.32325f, -1312.172f, 23.33694f, 148.383f, -1273.553f, 49.46651f, 65f, 0x00000000, 0x00000001))
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_153(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	
	iVar0 = 0x00000107;
	fVar1 = 999999f;
	iVar3 = 0x00000041;
	while (iVar3 <= 0x0000006F)
	{
		*iParam1 = iVar3;
		if (func_155(iParam1))
		{
			if (func_154(*iParam1))
			{
				vVar4 = { func_85(*iParam1, 0x00000000) };
				if (uParam0->f_2 == 1f)
				{
					vVar4.z = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, vVar4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0x0000007D;
	while (iVar3 <= 0x00000089)
	{
		*iParam1 = iVar3;
		if (func_155(iParam1))
		{
			if (func_154(*iParam1))
			{
				vVar4 = { func_85(*iParam1, 0x00000000) };
				if (uParam0->f_2 == 1f)
				{
					vVar4.z = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, vVar4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 0x00000107)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 0x00000001;
	}
	*iParam1 = 0x00000107;
	*fParam2 = 999999f;
	return 0x00000000;
}

bool func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

int func_155(var uParam0)
{
	if ((((((((((((((((((((*uParam0 == 0x00000046 || *uParam0 == 0x00000047) || *uParam0 == 0x00000049) || *uParam0 == 0x0000004A) || *uParam0 == 0x0000004B) || *uParam0 == 0x00000048) || *uParam0 == 0x0000004C) || *uParam0 == 0x00000069) || *uParam0 == 0x0000006A) || *uParam0 == 0x0000007D) || *uParam0 == 0x0000007E) || *uParam0 == 0x0000007F) || *uParam0 == 0x00000080) || *uParam0 == 0x00000081) || *uParam0 == 0x00000083) || *uParam0 == 0x00000084) || *uParam0 == 0x00000086) || *uParam0 == 0x00000087) || *uParam0 == 0x00000088) || *uParam0 == 0x0000006B) || *uParam0 == 0x00000041)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_156(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	struct<27> Var5;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 999999f;
	iVar4 = 0x00000000;
	iVar4 = 0x00000000;
	while (iVar4 < 0x0000003F)
	{
		*iParam1 = iVar4;
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[*iParam1 /*6*/], 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[*iParam1 /*6*/], 0x00000003))
		{
			func_99(*iParam1, &Var5);
			if (unk_0xEAE0D21A50E6C7F4(Var5.f_1A, func_157()))
			{
				vVar3 = { Var5.f_6 };
				if (uParam0->f_2 == 1f)
				{
					vVar3.z = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, vVar3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar4;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != 0xFFFFFFFF)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 0x00000001;
	}
	*iParam1 = 0xFFFFFFFF;
	*fParam2 = 999999f;
	return 0x00000000;
}

int func_157()
{
	if (func_40(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				return 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				return 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				return 0x00000002;
			}
			else
			{
				return 0x00000003;
			}
		}
		else
		{
			return 0x00000003;
		}
	}
	return func_57();
}

int func_158(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar4;
	
	iVar0 = 0xFFFFFFFF;
	fVar1 = 999999f;
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000008)
	{
		if (Global_175BD[iVar4 /*17*/])
		{
			if (Global_175BD[iVar4 /*17*/].f_9 != 0x00000107)
			{
				if (unk_0xE4EDC4B0E92C078B(Global_79AA[Global_175BD[iVar4 /*17*/].f_9 /*23*/].f_13))
				{
					vVar3 = { unk_0xAC14F6E4B17D7835(Global_79AA[Global_175BD[iVar4 /*17*/].f_9 /*23*/].f_13) };
					if (uParam0->f_2 == 1f)
					{
						vVar3.z = 1f;
					}
					fVar2 = SYSTEM::VDIST(*uParam0, vVar3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_175BD[iVar4 /*17*/].f_A.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar4;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != 0xFFFFFFFF)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_175BD[iVar0 /*17*/].f_5;
		return 0x00000001;
	}
	*iParam1 = 0xFFFFFFFF;
	*fParam2 = 999999f;
	return 0x00000000;
}

void func_159()
{
	if (Global_1B416.f_2378)
	{
		Global_12B5F = 0x00000001;
	}
}

void func_160(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x7AEFFBD77F2CF1EC(func_6()))
	{
		unk_0xF5BDC0FED0F08D25(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0x00000000)
		{
			if (iVar0 > 0x00000001)
			{
				iVar2 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					if (!unk_0x82CCEAB29E9451DD(iVar2, Global_1B04D))
					{
						iVar3 = 0x00000000;
						if (!unk_0xBBA8A868118C90ED(Global_1B04D, iVar3, 0x00000000))
						{
							iVar3 = func_161(&Global_1B04D);
							if (unk_0xBBA8A868118C90ED(Global_1B04D, iVar3, 0x00000000))
							{
								unk_0xA3BF0AA5A2608191(iVar2);
								unk_0xF821F915BC24D246(iVar2, Global_1B04D, iVar3);
							}
						}
						else
						{
							unk_0xA3BF0AA5A2608191(iVar2);
							unk_0xF821F915BC24D246(iVar2, Global_1B04D, iVar3);
						}
					}
				}
			}
			iVar2 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar2))
			{
				if (!unk_0x82CCEAB29E9451DD(iVar2, Global_1B04D))
				{
					unk_0xA3BF0AA5A2608191(iVar2);
					iVar3 = 0x00000001;
					if (iParam0 == 0x00000001)
					{
						iVar3 = 0x00000002;
					}
					if (!unk_0xBBA8A868118C90ED(Global_1B04D, iVar3, 0x00000000))
					{
						iVar3 = func_161(&Global_1B04D);
						if (unk_0xBBA8A868118C90ED(Global_1B04D, iVar3, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(iVar2);
							unk_0xF821F915BC24D246(iVar2, Global_1B04D, iVar3);
						}
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iVar2);
						unk_0xF821F915BC24D246(iVar2, Global_1B04D, iVar3);
					}
				}
			}
		}
	}
}

int func_161(var uParam0)
{
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		if (!unk_0x437347B10A200C4B(*uParam0, 0x00000000))
		{
			if (unk_0xBBA8A868118C90ED(*uParam0, 0x00000000, 0x00000000))
			{
				return 0x00000000;
			}
			if (unk_0xBBA8A868118C90ED(*uParam0, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
			if (unk_0xBBA8A868118C90ED(*uParam0, 0x00000002, 0x00000000))
			{
				return 0x00000002;
			}
		}
	}
	return 0xFFFFFFFE;
}

bool func_162(int iParam0, int iParam1)
{
	return (unk_0x1C0640BA9A7327B3() - iParam0) > iParam1;
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		func_170();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_169(0x00000000))
		{
			func_164(0x00000000);
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

void func_164(int iParam0)
{
	if (func_168())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_167())
		{
			func_166(0x00000001, 0x00000001);
		}
		else
		{
			func_166(0x00000000, 0x00000000);
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
	if (!func_165())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_165()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_169(0x00000000))
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

bool func_167()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_168()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_169(int iParam0)
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

void func_170()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_171()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
		{
			if (unk_0x8B38C0DAEEDB5F9C(Global_1B04D))
			{
				if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003) && !unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
				{
					if (!func_2(Global_1B04E, 0x81B4D53A))
					{
						unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
					}
					else
					{
						func_177();
					}
				}
				func_176(&Global_1B04D, iLocal_839);
			}
			else if (!func_2(Global_1B04E, 0xEFC8537E))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(Global_1B04D, 0x00000001) };
				fVar1 = unk_0xD9522BA9E27E1349(Global_1B04D);
				unk_0x27F3789FF35EEDF1(Global_1B04E, Global_1B04D, vVar0, fVar1, 0x00000003, 60f, 0x00000000);
			}
		}
	}
}

void func_172()
{
	int iVar0;
	float fVar1;
	
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			func_123();
			if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
				{
					if (func_174())
					{
						if (unk_0x9C66D99E63E8E24C(Global_1B04D) < 2f)
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000001))
								{
									unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
								}
							}
							unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000018, 0x00001388);
							unk_0xFADC0A217229F6B5(Global_1B04E, 0x00000001);
							bLocal_65 = 0x00000001;
							iLocal_822 = 0x00000002;
						}
					}
					else if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003) || unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
					{
						if (unk_0xC7E2E6167C09468B(Global_1B04E, unk_0x16F2683693E537C9()))
						{
							unk_0xBC43ED9FE28DB191(Global_1B04E);
						}
						unk_0xC6EB89C59F2AF6B8(Global_1B04E, &cLocal_824, "leanover_exit", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_exit", 0x00000003))
					{
						unk_0x8352CA08CF578D18(Global_1B04E, &cLocal_824, "leanover_exit", 1.2f);
						iLocal_90 = unk_0x1C0640BA9A7327B3();
						func_176(&Global_1B04D, iLocal_839);
					}
					else if (!func_2(Global_1B04E, 0x0E763797))
					{
						if (func_173(&iLocal_90, iLocal_839))
						{
							if (!func_2(Global_1B04E, 0x81B4D53A))
							{
								unk_0xD1F0F33C375B8446(Global_1B04E, Global_1B04D, 0x00000001, 0x000F4240);
							}
						}
						else
						{
							iLocal_56 = 0x00000000;
							if (bLocal_64)
							{
								fVar1 = 25f;
								iVar0 = iLocal_70;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_69;
							}
							unk_0xA3BF0AA5A2608191(Global_1B04E);
							unk_0xBC43ED9FE28DB191(Global_1B04E);
							unk_0x9992C3A6A1766168(Global_1B04E, 0.5f);
							unk_0xDD353D0E9C789D0E(&iLocal_813);
							unk_0xAB770AF6E04B282A(0x00000000, Global_1B04D, Global_1B054, fVar1, iVar0, 45f);
							unk_0x27F3789FF35EEDF1(0x00000000, Global_1B04D, Global_1B054, Global_1B05A, iLocal_110, 60f, 0x00000001);
							unk_0x75ABDC5F81978924(iLocal_813);
							unk_0x78ADC381772E3D54(Global_1B04E, iLocal_813);
							unk_0xF82EA857DA10E0CD(&iLocal_813);
						}
					}
				}
			}
		}
	}
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_162(*iParam0, 0x000007D0) || *iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0x7AEFFBD77F2CF1EC(func_6()))
	{
		*iParam0 = 0xFFFFFFFF;
		return 0x00000000;
	}
	unk_0xF5BDC0FED0F08D25(func_6(), &uVar1, &iVar0);
	if (iVar0 < 0x00000001)
	{
		*iParam0 = 0xFFFFFFFF;
		return 0x00000000;
	}
	bVar4 = 0x00000001;
	bVar5 = 0x00000000;
	iVar3 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000000);
	if (!unk_0xEB6A8945D1AC98A1(iVar3))
	{
		iVar6 = 0x00000001;
		if (iParam1 == 0x00000001)
		{
			iVar6 = 0x00000002;
		}
		bVar4 = 0x00000001;
		iVar2 = unk_0xA30B8362589C124A(Global_1B04D, iVar6, 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar2))
		{
			if (iVar2 == unk_0x16F2683693E537C9())
			{
				bVar4 = 0x00000000;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = 0x00000000;
			}
		}
		if (unk_0x24129324CD7C13D0(iVar3, 0x000000A7, 0x00000000))
		{
			bVar4 = 0x00000000;
		}
		if (func_2(iVar3, 0x950B6492))
		{
			bVar4 = 0x00000000;
			bVar5 = 0x00000001;
		}
		if (bVar4)
		{
			unk_0x5B1D360B9C6F0A09(iVar3, Global_1B04D, 0x00004E20, iVar6, 2f, 0x00900001, 0x00000000);
			bVar5 = 0x00000001;
		}
	}
	if (iVar0 > 0x00000001)
	{
		iVar3 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(iVar3))
		{
			bVar4 = 0x00000001;
			iVar6 = 0x00000000;
			iVar2 = unk_0xA30B8362589C124A(Global_1B04D, iVar6, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				if (iVar2 == unk_0x16F2683693E537C9())
				{
					bVar4 = 0x00000000;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = 0x00000000;
				}
			}
			if (unk_0x24129324CD7C13D0(iVar3, 0x000000A7, 0x00000000))
			{
				bVar4 = 0x00000000;
			}
			if (func_2(iVar3, 0x950B6492))
			{
				bVar4 = 0x00000000;
				bVar5 = 0x00000001;
			}
			if (bVar4)
			{
				unk_0x5B1D360B9C6F0A09(iVar3, Global_1B04D, 0x00004E20, iVar6, 2f, 0x00900001, 0x00000000);
				bVar5 = 0x00000001;
			}
		}
	}
	if (bVar5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_174()
{
	if ((unk_0x5A91F08DF773C39D(Global_1B04D, Global_1B054, 45f, 45f, 20f, 0x00000000, 0x00000001, 0x00000000) || iLocal_56) || iLocal_821 == 0x00000004)
	{
		iLocal_56 = 0x00000001;
		if (unk_0xD1960163A3042274(Global_1B04E, 0x0E763797) == 0x00000007)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_175()
{
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			return 0x00000001;
		}
		else if (func_126(&vLocal_43, &Global_1B054, &Global_1B05A))
		{
			iLocal_103 = 0x00000000;
			vLocal_833 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
			fLocal_83 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Global_1B054);
			bLocal_61 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_176(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0x7AEFFBD77F2CF1EC(func_6()))
	{
		unk_0xF5BDC0FED0F08D25(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0x00000000)
		{
			iVar2 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar2))
			{
				iVar5 = 0x00000001;
				if (iParam1 == 0x00000001)
				{
					iVar5 = 0x00000002;
				}
				bVar4 = 0x00000001;
				iVar3 = unk_0xA30B8362589C124A(*uParam0, iVar5, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar3))
				{
					if (iVar3 == unk_0x16F2683693E537C9())
					{
						bVar4 = 0x00000000;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = 0x00000000;
					}
				}
				if (unk_0x24129324CD7C13D0(iVar2, 0x000000A7, 0x00000000))
				{
					bVar4 = 0x00000000;
				}
				if (func_2(iVar2, 0x950B6492))
				{
					bVar4 = 0x00000000;
				}
				if (bVar4)
				{
					unk_0x5B1D360B9C6F0A09(iVar2, *uParam0, 0x00004E20, iVar5, 2f, 0x00900001, 0x00000000);
				}
			}
			if (iVar0 > 0x00000001)
			{
				iVar2 = unk_0x9B50A0F7FCCD175C(func_6(), 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iVar2))
				{
					bVar4 = 0x00000001;
					iVar5 = 0x00000000;
					iVar3 = unk_0xA30B8362589C124A(*uParam0, iVar5, 0x00000000);
					if (unk_0xC844350D5D58C99A(iVar3))
					{
						if (iVar3 == unk_0x16F2683693E537C9())
						{
							bVar4 = 0x00000000;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = 0x00000000;
						}
					}
					if (unk_0x24129324CD7C13D0(iVar2, 0x000000A7, 0x00000000))
					{
						bVar4 = 0x00000000;
					}
					if (func_2(iVar2, 0x950B6492))
					{
						bVar4 = 0x00000000;
					}
					if (bVar4)
					{
						unk_0x5B1D360B9C6F0A09(iVar2, *uParam0, 0x00004E20, iVar5, 2f, 0x00900001, 0x00000000);
					}
				}
			}
		}
	}
}

int func_177()
{
	if (!unk_0xEB6A8945D1AC98A1(Global_1B04E) && unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
		{
			unk_0x3F423BF5B8125A50(&cLocal_824);
			if (unk_0xB4AE0788C1587752(&cLocal_824))
			{
				if (unk_0xC7E2E6167C09468B(Global_1B04E, unk_0x16F2683693E537C9()))
				{
					unk_0xBC43ED9FE28DB191(Global_1B04E);
				}
				unk_0xDD353D0E9C789D0E(&iLocal_813);
				unk_0xC6EB89C59F2AF6B8(0x00000000, &cLocal_824, "leanover_enter", 4f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, &cLocal_824, "leanover_idle", 4f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_813);
				unk_0x78ADC381772E3D54(Global_1B04E, iLocal_813);
				unk_0xF82EA857DA10E0CD(&iLocal_813);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_178()
{
	if (unk_0xC844350D5D58C99A(iLocal_109))
	{
		return 0x00000001;
	}
	if (unk_0xC844350D5D58C99A(Global_1B04D))
	{
		if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
		{
			iLocal_109 = unk_0x7707E48765093646(iLocal_108, unk_0x68F4C0EC296D3901(Global_1B04D, 0x00000001), 0x00000001, 0x00000001, 0x00000000);
			unk_0x9F528B1B53FBC5D9(iLocal_109, Global_1B04D, unk_0xF653B9B22DA806A9(Global_1B04D, "Chassis"), vLocal_837, vLocal_838, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			unk_0x6301539B96E43BA1(Global_1B04D, 0x00000000);
			if (!unk_0xE6CD5C6925050049("taxi"))
			{
				unk_0x268029E44B2B3E36("taxi", 0x00000000);
				unk_0x064E7408AD6E15E5(unk_0x134B62B726CEC8E6(iLocal_109));
			}
			iLocal_93 = unk_0x3FF702268B97B673("taxi");
		}
	}
	return 0x00000000;
}

int func_179()
{
	unk_0x523BCC9DC80CD82F(iLocal_108);
	iLocal_111 = unk_0xB01F55A0FD1CFD49("taxi_display");
	iLocal_112 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
	unk_0x3F423BF5B8125A50(&cLocal_824);
	if (((unk_0xB87F6CF6E5628C67(iLocal_108) && unk_0x83D8570832F172A7(iLocal_111)) && unk_0x83D8570832F172A7(iLocal_112)) && unk_0xB4AE0788C1587752(&cLocal_824))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_180()
{
	if (!unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		return;
	}
	if (!unk_0x9F4FE516EAACCFC5(iLocal_68))
	{
		if (!func_188() && !func_187(0x00000008, 0xFFFFFFFF))
		{
			iLocal_68 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
			unk_0xC5940439E4EB9A33(iLocal_68, Global_1B04D, vLocal_835, 0x00000001);
			func_184();
			unk_0xA2071E69C1AE8451(iLocal_68, 0x00000001);
		}
	}
	else if (!bLocal_60 || bLocal_59)
	{
		if (!func_188() && !func_187(0x00000008, 0xFFFFFFFF))
		{
			if (!unk_0xFBB4F23D534EB790(iLocal_68))
			{
				func_183(0x00000004, 0x00000001, 0xFFFFFFFF);
				unk_0xA2071E69C1AE8451(iLocal_68, 0x00000001);
				func_182();
				unk_0xE3BB8E05FCEB3FBE(iLocal_68, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				Global_1B05E = 0x00000001;
				unk_0x4DC7B72197441408(0x00000001);
				func_184();
				iLocal_58 = 0x00000001;
			}
			else
			{
				func_184();
			}
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
		}
	}
	else if (unk_0xFBB4F23D534EB790(iLocal_68))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_68, 0x00000000);
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		Global_1B05E = 0x00000000;
		unk_0x4DC7B72197441408(0x00000000);
		unk_0xFB452C6B9BE826C7();
		unk_0xF737A3AD8873CE16();
		unk_0xF91D0B1DCE756AFB(0x00000000);
		iLocal_58 = 0x00000001;
		func_181();
	}
}

void func_181()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_91)
	{
		if (bLocal_60)
		{
			if (vLocal_43.x == vLocal_819[iVar0 /*3*/])
			{
				iLocal_92 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x7E60C62A7CE58FC8(iLocal_111, "HIGHLIGHT_DESTINATION");
	unk_0x3CAEA85DA607305E(iLocal_92);
	unk_0x7E60D21B163E9D56();
}

void func_182()
{
	vector3 vVar0;
	
	if (unk_0xE4EDC4B0E92C078B(vLocal_43.x))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(vLocal_43.x) };
		if (unk_0x9F4FE516EAACCFC5(iLocal_68) && unk_0xFBB4F23D534EB790(iLocal_68))
		{
			unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
			unk_0x3B05E4399DC8490C(0x00000000);
			unk_0xF91D0B1DCE756AFB(0x00000578);
		}
	}
}

void func_183(int iParam0, bool bParam1, int iParam2)
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

void func_184()
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_68))
	{
		func_185(Global_1B04D, &iLocal_68, vLocal_836);
		unk_0x5818C8D5303DCCF8(iLocal_68, fLocal_74);
		unk_0xDC3CC6D1845B0567(iLocal_68, 0.01f);
		unk_0xA5BCA553E7FAE465(iLocal_68, 0x00000001);
		unk_0x01861BC775A34949(0x00000001);
	}
}

void func_185(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x9F4FE516EAACCFC5(*iParam1))
		{
			vVar0 = { unk_0x835730A2D89F6093(iParam0, 0x00000002) };
			fVar3 = vVar0.y;
			vVar4 = { func_84(unk_0x68E4ADDDDCD7BDDE(Global_1B04D, vParam2) - unk_0x68E4ADDDDCD7BDDE(Global_1B04D, vLocal_835)) };
			func_186(vVar4, &fVar1, &fVar2, 0x00000001);
			unk_0x5F3CBA6EB9341C90(*iParam1, fVar1, fVar3, fVar2, 0x00000002);
		}
	}
}

void func_186(vector3 vParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	
	if (vParam0.y != 0f)
	{
		*uParam2 = unk_0x5D8ABF6396A76564(vParam0.x, vParam0.y);
	}
	else if (vParam0.x < 0f)
	{
		*uParam2 = -90f;
	}
	else
	{
		*uParam2 = 90f;
	}
	if (iParam3 == 0x00000001)
	{
		*uParam2 = (*uParam2 * -1f);
		if (*uParam2 < 0f)
		{
			*uParam2 = (*uParam2 + 360f);
		}
	}
	fVar0 = SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)));
	if (fVar0 != 0f)
	{
		*uParam1 = unk_0x5D8ABF6396A76564(vParam0.z, fVar0);
	}
	else if (vParam0.z < 0f)
	{
		*uParam1 = -90f;
	}
	else
	{
		*uParam1 = 90f;
	}
}

bool func_187(int iParam0, int iParam1)
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

bool func_188()
{
	return Global_56C1;
}

void func_189()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	int iVar6;
	
	iVar0 = 0x00000000;
	func_194();
	unk_0x7E60C62A7CE58FC8(iLocal_111, "CLEAR_TAXI_DISPLAY");
	unk_0x7E60D21B163E9D56();
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_91)
	{
		if (!unk_0xE4EDC4B0E92C078B(vLocal_819[iVar0 /*3*/]))
		{
		}
		else if (func_129(vLocal_819[iVar0 /*3*/]) == 0xFFFFFFFF)
		{
		}
		else if (func_133(unk_0xAC14F6E4B17D7835(vLocal_819[iVar0 /*3*/]), 0f, 0f, 0f, 0x3F000000, 0x00000000))
		{
		}
		else
		{
			unk_0x7E60C62A7CE58FC8(iLocal_111, "ADD_TAXI_DESTINATION");
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(unk_0x301901B13DC3365B(vLocal_819[iVar0 /*3*/]));
			unk_0xA402F6C87C08815C(unk_0x76137156E5D43335(vLocal_819[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(iVar2);
			unk_0x3CAEA85DA607305E(iVar3);
			iVar6 = func_192(vLocal_819[iVar0 /*3*/]);
			if (iVar6 == 0xFFFFFFFF)
			{
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0xC5561E751FF4B1E4(vLocal_819[iVar0 /*3*/]);
				unk_0x779B34565F4D71B1();
			}
			else
			{
				unk_0x7ACC3006A87F8B39("STRING");
				unk_0x6B012227B3921E18(func_190(iVar6));
				unk_0x779B34565F4D71B1();
			}
			if (unk_0xDC7D2B8A563DB482(vLocal_819[iVar0 /*3*/]) == 0x00000002)
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(vLocal_819[iVar0 /*3*/]))))
				{
					vVar5 = { unk_0x68F4C0EC296D3901(unk_0x940C1429253D3B1B(unk_0x63EC65B0F6B7C26F(vLocal_819[iVar0 /*3*/])), 0x00000001) };
				}
			}
			else if (unk_0xDC7D2B8A563DB482(vLocal_819[iVar0 /*3*/]) == 0x00000001)
			{
				if (unk_0xDF1306B443CD3D15(unk_0x63EC65B0F6B7C26F(vLocal_819[iVar0 /*3*/]), 0x00000000))
				{
					vVar5 = { unk_0x68F4C0EC296D3901(unk_0x63EC65B0F6B7C26F(vLocal_819[iVar0 /*3*/]), 0x00000001) };
				}
			}
			else
			{
				vVar5 = { unk_0xAC14F6E4B17D7835(vLocal_819[iVar0 /*3*/]) };
			}
			func_70(unk_0xA5A6BB5EBAD59A21(vVar5));
			if (vLocal_819[iVar0 /*3*/].f_2 == 0x00000000)
			{
				if (vLocal_819[iVar0 /*3*/].f_1 != 0x00000000)
				{
					unk_0x7ACC3006A87F8B39("STRTNM1");
					unk_0xAE3C6C08E5688EDF(vLocal_819[iVar0 /*3*/].f_1);
					unk_0x779B34565F4D71B1();
				}
			}
			else
			{
				unk_0x7ACC3006A87F8B39("STRTNM2");
				unk_0xAE3C6C08E5688EDF(vLocal_819[iVar0 /*3*/].f_1);
				unk_0xAE3C6C08E5688EDF(vLocal_819[iVar0 /*3*/].f_2);
				unk_0x779B34565F4D71B1();
			}
			unk_0x7E60D21B163E9D56();
			if (bLocal_60)
			{
				if (vLocal_43.x == vLocal_819[iVar0 /*3*/])
				{
					iLocal_92 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_60)
	{
		unk_0x7E60C62A7CE58FC8(iLocal_111, "SHOW_TAXI_DESTINATION");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_111, "HIGHLIGHT_DESTINATION");
		unk_0x3CAEA85DA607305E(iLocal_92);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(iLocal_111, "SET_TAXI_PRICE");
		unk_0x3CAEA85DA607305E(iLocal_101);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_111, "SHOW_TAXI_DESTINATION");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_111, "HIGHLIGHT_DESTINATION");
		unk_0x3CAEA85DA607305E(iLocal_92);
		unk_0x7E60D21B163E9D56();
	}
}

char* func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "SB_SAL";
			break;
		
		case 0x00000001:
			return "SB_BAR";
			break;
		
		case 0x00000002:
			return "SB_BAR";
			break;
		
		case 0x00000003:
			return "SB_BAR";
			break;
		
		case 0x00000004:
			return "SB_BAR";
			break;
		
		case 0x00000005:
			return "SB_BAR";
			break;
		
		case 0x00000006:
			return "SB_BAR";
			break;
		
		case 0x00000007:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000008:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000009:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000000A:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000000B:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000000C:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000000D:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000000E:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000000F:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000010:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000011:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000012:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000013:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000014:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000015:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000016:
			return "SB_TAT";
			break;
		
		case 0x00000017:
			return "SB_TAT";
			break;
		
		case 0x00000018:
			return "SB_TAT";
			break;
		
		case 0x00000019:
			return "SB_TAT";
			break;
		
		case 0x0000001A:
			return "SB_TAT";
			break;
		
		case 0x0000001B:
			return "SB_TAT";
			break;
		
		case 0x0000001C:
			return "SB_AMU2";
			break;
		
		case 0x0000001D:
			return "SB_AMU";
			break;
		
		case 0x0000001E:
			return "SB_AMU";
			break;
		
		case 0x0000001F:
			return "SB_AMU";
			break;
		
		case 0x00000020:
			return "SB_AMU";
			break;
		
		case 0x00000021:
			return "SB_AMU";
			break;
		
		case 0x00000022:
			return "SB_AMU";
			break;
		
		case 0x00000023:
			return "SB_AMU";
			break;
		
		case 0x00000024:
			return "SB_AMU";
			break;
		
		case 0x00000025:
			return "SB_AMU";
			break;
		
		case 0x00000026:
			return "SB_AMU2";
			break;
		
		case 0x00000027:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000028:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x00000029:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000002A:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000002B:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000002C:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000002D:
			return func_191(iParam0, 0x00000000);
			break;
		
		case 0x0000002E:
			return "SB_AMU";
			break;
		
		case 0x0000002F:
			return "SB_AMU";
			break;
		
		case 0x00000030:
			return "SB_AMU";
			break;
		
		case 0x00000031:
			return "SB_AMU";
			break;
		
		case 0x00000034:
			return "SB_AMU";
			break;
		
		case 0x00000032:
			return "SB_BAR";
			break;
		
		case 0x00000033:
			return "S_CL_BL";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "S_N_EM";
			break;
		
		case 0x00000000:
			return "S_H_01";
			break;
		
		case 0x00000001:
			return "S_H_02";
			break;
		
		case 0x00000002:
			return "S_H_03";
			break;
		
		case 0x00000003:
			return "S_H_04";
			break;
		
		case 0x00000004:
			return "S_H_05";
			break;
		
		case 0x00000005:
			return "S_H_06";
			break;
		
		case 0x00000006:
			return "S_H_07";
			break;
		
		case 0x00000007:
			return "S_CL_01";
			break;
		
		case 0x00000008:
			return "S_CL_02";
			break;
		
		case 0x00000009:
			return "S_CL_03";
			break;
		
		case 0x0000000A:
			return "S_CL_04";
			break;
		
		case 0x0000000B:
			return "S_CL_05";
			break;
		
		case 0x0000000C:
			return "S_CL_06";
			break;
		
		case 0x0000000D:
			return "S_CL_07";
			break;
		
		case 0x0000000E:
			return "S_CM_01";
			break;
		
		case 0x0000000F:
			return "S_CM_03";
			break;
		
		case 0x00000010:
			return "S_CM_04";
			break;
		
		case 0x00000011:
			return "S_CM_05";
			break;
		
		case 0x00000012:
			return "S_CH_01";
			break;
		
		case 0x00000013:
			return "S_CH_02";
			break;
		
		case 0x00000014:
			return "S_CH_03";
			break;
		
		case 0x00000015:
			return "S_CA_01";
			break;
		
		case 0x00000016:
			return "S_T_01";
			break;
		
		case 0x00000017:
			return "S_T_02";
			break;
		
		case 0x00000018:
			return "S_T_03";
			break;
		
		case 0x00000019:
			return "S_T_04";
			break;
		
		case 0x0000001A:
			return "S_T_05";
			break;
		
		case 0x0000001B:
			return "S_T_06";
			break;
		
		case 0x0000001C:
			return "S_G_01";
			break;
		
		case 0x0000001D:
			return "S_G_02";
			break;
		
		case 0x0000001E:
			return "S_G_03";
			break;
		
		case 0x0000001F:
			return "S_G_04";
			break;
		
		case 0x00000020:
			return "S_G_05";
			break;
		
		case 0x00000021:
			return "S_G_06";
			break;
		
		case 0x00000022:
			return "S_G_07";
			break;
		
		case 0x00000023:
			return "S_G_08";
			break;
		
		case 0x00000024:
			return "S_G_09";
			break;
		
		case 0x00000025:
			return "S_G_10";
			break;
		
		case 0x00000026:
			return "S_G_11";
			break;
		
		case 0x00000027:
			return "S_MO_01";
			break;
		
		case 0x00000028:
			return "S_MO_05";
			break;
		
		case 0x00000029:
			return "S_MO_06";
			break;
		
		case 0x0000002A:
			return "S_MO_07";
			break;
		
		case 0x0000002B:
			return "S_MO_08";
			break;
		
		case 0x0000002C:
			return "S_MO_09";
			break;
		
		case 0x0000002D:
			switch (iParam1)
			{
				case 0x00000004:
				case 0x00000005:
					return "S_MO_10";
				
				case 0x0000000B:
					return "S_MO_B";
				
				case 0x0000000A:
					return "S_MO_T";
				
				case 0x0000000C:
					return "S_MO_HA";
				
				case 0x0000000D:
					return "S_MO_AOC";
				
				case 0x0000000E:
					return "S_MO_AOC";
					break;
				
				case 0x0000000F:
					return "S_MO_AOC";
					break;
				
				case 0x00000010:
					return "S_MO_AOC";
					break;
				
				case 0x00000011:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 0x0000002E:
			return "S_G_12";
			break;
		
		case 0x0000002F:
			return "S_G_13";
			break;
		
		case 0x00000030:
			return "S_G_14";
			break;
		
		case 0x00000031:
			return "S_G_15";
			break;
		
		case 0x00000034:
			return "S_G_16";
			break;
		
		case 0x00000032:
			return "S_H_08";
			break;
		
		case 0x00000033:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		iVar1 = iVar0;
		iVar2 = func_193(iVar1);
		if (Global_79AA[iVar2 /*23*/].f_13 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000107;
			break;
		
		case 0x00000000:
			return 0x00000013;
			break;
		
		case 0x00000001:
			return 0x00000014;
			break;
		
		case 0x00000002:
			return 0x00000015;
			break;
		
		case 0x00000003:
			return 0x00000016;
			break;
		
		case 0x00000004:
			return 0x00000017;
			break;
		
		case 0x00000005:
			return 0x00000018;
			break;
		
		case 0x00000006:
			return 0x00000019;
			break;
		
		case 0x00000007:
			return 0x0000001A;
			break;
		
		case 0x00000008:
			return 0x0000001B;
			break;
		
		case 0x00000009:
			return 0x0000001C;
			break;
		
		case 0x0000000A:
			return 0x0000001D;
			break;
		
		case 0x0000000B:
			return 0x0000001E;
			break;
		
		case 0x0000000C:
			return 0x0000001F;
			break;
		
		case 0x0000000D:
			return 0x00000020;
			break;
		
		case 0x0000000E:
			return 0x00000021;
			break;
		
		case 0x0000000F:
			return 0x00000023;
			break;
		
		case 0x00000010:
			return 0x00000024;
			break;
		
		case 0x00000011:
			return 0x00000025;
			break;
		
		case 0x00000012:
			return 0x00000026;
			break;
		
		case 0x00000013:
			return 0x00000027;
			break;
		
		case 0x00000014:
			return 0x00000028;
			break;
		
		case 0x00000015:
			return 0x00000029;
			break;
		
		case 0x00000016:
			return 0x0000002A;
			break;
		
		case 0x00000017:
			return 0x0000002B;
			break;
		
		case 0x00000018:
			return 0x0000002C;
			break;
		
		case 0x00000019:
			return 0x0000002D;
			break;
		
		case 0x0000001A:
			return 0x0000002E;
			break;
		
		case 0x0000001B:
			return 0x0000002F;
			break;
		
		case 0x0000001C:
			return 0x00000030;
			break;
		
		case 0x0000001D:
			return 0x00000031;
			break;
		
		case 0x0000001E:
			return 0x00000032;
			break;
		
		case 0x0000001F:
			return 0x00000033;
			break;
		
		case 0x00000020:
			return 0x00000034;
			break;
		
		case 0x00000021:
			return 0x00000035;
			break;
		
		case 0x00000022:
			return 0x00000036;
			break;
		
		case 0x00000023:
			return 0x00000037;
			break;
		
		case 0x00000024:
			return 0x00000038;
			break;
		
		case 0x00000025:
			return 0x00000039;
			break;
		
		case 0x00000026:
			return 0x0000003A;
			break;
		
		case 0x00000027:
			return 0x0000003B;
			break;
		
		case 0x00000028:
			return 0x0000003C;
			break;
		
		case 0x00000029:
			return 0x0000003D;
			break;
		
		case 0x0000002A:
			return 0x0000003E;
			break;
		
		case 0x0000002B:
			return 0x0000003F;
			break;
		
		case 0x0000002C:
			return 0x00000040;
			break;
		
		case 0x0000002D:
			return 0x00000040;
			break;
		
		case 0x0000002E:
			return 0x00000030;
			break;
		
		case 0x0000002F:
			return 0x00000030;
			break;
		
		case 0x00000030:
			return 0x00000030;
			break;
		
		case 0x00000031:
			return 0x00000030;
			break;
		
		case 0x00000034:
			return 0x00000030;
			break;
		
		case 0x00000032:
			return 0x00000019;
			break;
		
		case 0x00000033:
			return 0x00000028;
			break;
		
		default:
			break;
	}
	return 0x00000107;
}

void func_194()
{
	int iVar0;
	
	iLocal_91 = 0x00000000;
	func_211();
	func_198(iLocal_44, 0x00000000);
	func_198(iLocal_45, 0x00000000);
	func_198(0x00000020, 0x00000000);
	func_198(0x0000008F, 0x00000000);
	func_198(0x00000090, 0x00000000);
	func_198(0x00000091, 0x00000000);
	func_198(0x00000092, 0x00000000);
	func_198(0x0000004E, 0x00000000);
	func_198(0x0000004F, 0x00000000);
	func_198(0x00000058, 0x00000000);
	func_198(0x0000007C, 0x00000000);
	func_198(0x00000070, 0x00000000);
	func_198(0x0000007B, 0x00000000);
	func_198(0x00000125, 0x00000000);
	func_198(0x00000056, 0x00000000);
	func_198(0x0000004D, 0x00000000);
	func_198(0x00000059, 0x00000000);
	func_198(0x0000006A, 0x00000000);
	func_198(0x0000006C, 0x00000000);
	func_198(0x00000078, 0x00000000);
	func_198(0x00000160, 0x00000000);
	func_198(0x0000006B, 0x00000000);
	func_198(0x00000060, 0x00000000);
	func_198(0x00000068, 0x00000000);
	func_198(0x00000069, 0x00000000);
	func_198(0x00000050, 0x00000000);
	func_198(0x00000071, 0x00000000);
	func_198(0x00000076, 0x00000000);
	func_198(0x000000CF, 0x00000001);
	func_198(0x000000D0, 0x00000001);
	func_198(0x000000D1, 0x00000001);
	func_198(0x000000D2, 0x00000001);
	func_198(0x000000D3, 0x00000001);
	func_198(0x000000D4, 0x00000001);
	func_198(0x000000D5, 0x00000001);
	func_198(0x000000D6, 0x00000001);
	func_198(0x00000141, 0x00000001);
	func_198(0x00000140, 0x00000001);
	func_198(0x0000013F, 0x00000001);
	func_198(0x00000142, 0x00000001);
	func_198(0x00000145, 0x00000001);
	func_198(0x00000144, 0x00000001);
	func_198(0x0000015D, 0x00000001);
	func_198(0x00000143, 0x00000001);
	func_198(0x00000146, 0x00000001);
	func_198(0x0000013D, 0x00000001);
	func_198(0x0000013E, 0x00000001);
	func_198(0x0000016B, 0x00000000);
	func_198(0x00000163, 0x00000000);
	func_198(0x00000107, 0x00000001);
	func_198(0x00000106, 0x00000001);
	func_198(0x0000010B, 0x00000001);
	func_198(0x0000010A, 0x00000001);
	func_198(0x00000109, 0x00000001);
	func_198(0x00000190, 0x00000000);
	func_198(0x0000017D, 0x00000000);
	func_198(0x00000180, 0x00000000);
	func_198(0x0000017E, 0x00000000);
	func_198(0x000000CE, 0x00000000);
	func_198(0x00000195, 0x00000000);
	func_198(0x00000181, 0x00000000);
	func_198(0x0000017F, 0x00000000);
	func_198(0x00000182, 0x00000000);
	func_198(0x00000183, 0x00000000);
	func_198(0x00000185, 0x00000000);
	func_198(0x00000184, 0x00000000);
	func_198(0x00000095, 0x00000000);
	func_198(0x00000042, 0x00000000);
	func_198(0x00000073, 0x00000000);
	func_198(0x00000072, 0x00000000);
	func_198(0x000000CD, 0x00000001);
	func_198(0x00000030, 0x00000000);
	func_198(0x00000028, 0x00000001);
	func_198(0x00000165, 0x00000001);
	func_198(0x00000164, 0x00000001);
	func_198(0x00000167, 0x00000001);
	func_198(0x0000006E, 0x00000001);
	func_198(0x0000003C, 0x00000001);
	func_198(0x00000029, 0x00000001);
	func_198(0x0000003D, 0x00000001);
	func_198(0x00000176, 0x00000001);
	func_198(0x00000177, 0x00000001);
	func_198(0x00000040, 0x00000001);
	func_198(0x000000A5, 0x00000001);
	func_198(0x000000A6, 0x00000001);
	func_198(0x000000A7, 0x00000001);
	func_198(0x000000A8, 0x00000001);
	func_198(0x000000A9, 0x00000001);
	func_198(0x000000AA, 0x00000001);
	func_198(0x000000AC, 0x00000001);
	func_198(0x00000118, 0x00000001);
	func_198(0x00000025, 0x00000001);
	func_198(0x00000093, 0x00000001);
	func_198(0x0000003E, 0x00000000);
	func_198(0x0000005F, 0x00000001);
	func_198(0x00000063, 0x00000001);
	func_198(0x00000066, 0x00000001);
	func_198(0x00000087, 0x00000001);
	func_198(0x00000067, 0x00000001);
	func_198(0x0000005A, 0x00000001);
	func_198(0x0000006D, 0x00000001);
	func_198(0x0000008D, 0x00000001);
	func_198(0x00000088, 0x00000001);
	func_198(0x0000007F, 0x00000001);
	func_198(0x0000008E, 0x00000001);
	func_198(0x00000026, 0x00000001);
	func_198(0x00000054, 0x00000001);
	func_198(0x00000077, 0x00000001);
	func_198(0x00000079, 0x00000001);
	func_198(0x0000007A, 0x00000001);
	func_198(0x00000044, 0x00000001);
	func_198(0x0000007E, 0x00000001);
	func_198(0x00000055, 0x00000001);
	func_198(0x0000008C, 0x00000001);
	func_198(0x000000C5, 0x00000001);
	func_198(0x000000A2, 0x00000001);
	func_198(0x0000013B, 0x00000001);
	func_198(0x00000047, 0x00000001);
	func_198(0x00000048, 0x00000001);
	func_198(0x000001BE, 0x00000001);
	func_198(0x000000E1, 0x00000001);
	func_198(0x00000049, 0x00000001);
	func_198(0x0000006F, 0x00000001);
	func_198(0x0000004B, 0x00000001);
	func_198(0x0000005D, 0x00000001);
	func_198(0x00000062, 0x00000001);
	func_198(0x00000075, 0x00000001);
	iLocal_94 = func_195();
	iLocal_95 = unk_0xB7B9B7C245ECD0D7();
	if (unk_0x2C1AA3A291786CDC())
	{
		if (iLocal_94 == 0x00000000)
		{
			if (unk_0xE4EDC4B0E92C078B(Global_1B051))
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000028)
				{
					if (unk_0xE4EDC4B0E92C078B(vLocal_819[iVar0 /*3*/]))
					{
						if (vLocal_819[iVar0 /*3*/] == Global_1B051)
						{
							iLocal_92 = iVar0;
							iVar0 = 0x00000028;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_1B051 == 0x00000000)
	{
		Global_1B051 = 0x00000000;
	}
	if (unk_0x2C1AA3A291786CDC())
	{
		if (!Global_1B053 == 0xFFFFFFFF)
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000028)
			{
				if (unk_0xE4EDC4B0E92C078B(vLocal_819[iVar0 /*3*/]))
				{
					if (func_129(vLocal_819[iVar0 /*3*/]) == Global_1B053)
					{
						iLocal_92 = iVar0;
						iVar0 = 0x00000028;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_1B053 == 0xFFFFFFFF)
	{
		Global_1B053 = 0xFFFFFFFF;
	}
}

int func_195()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = unk_0xCDB86175B3C461EB(iLocal_44);
	while (unk_0xE4EDC4B0E92C078B(iVar1))
	{
		if (func_197(iVar1))
		{
			if ((unk_0xDC7D2B8A563DB482(iVar1) == 0x00000004 || unk_0xDC7D2B8A563DB482(iVar1) == 0x00000006) || unk_0xDC7D2B8A563DB482(iVar1) == 0x00000003)
			{
				iVar0++;
			}
			if (unk_0xDC7D2B8A563DB482(iVar1) == 0x00000002 || unk_0xDC7D2B8A563DB482(iVar1) == 0x00000001)
			{
				if (func_196(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = unk_0x92BE25195E14900E(iLocal_44);
	}
	iVar1 = unk_0xCDB86175B3C461EB(iLocal_45);
	while (unk_0xE4EDC4B0E92C078B(iVar1))
	{
		if (func_197(iVar1))
		{
			if (unk_0xDC7D2B8A563DB482(iVar1) == 0x00000004)
			{
				iVar0++;
			}
		}
		iVar1 = unk_0x92BE25195E14900E(iLocal_45);
	}
	return iVar0;
}

int func_196(int iParam0)
{
	if (((unk_0x76137156E5D43335(iParam0) == 0x00000009 || unk_0x76137156E5D43335(iParam0) == 0x0000000B) || unk_0x76137156E5D43335(iParam0) == 0x0000000A) || unk_0x76137156E5D43335(iParam0) == 0x0000003D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		iVar0 = unk_0x67FE5316ADC6D059(iParam0);
		if (!iVar0 == 0x00000000 && !iVar0 == 0x00000001)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_198(int iParam0, bool bParam1)
{
	vector3 vVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar2 = unk_0xCDB86175B3C461EB(iParam0);
	iVar3 = 0x00000014;
	while (unk_0xE4EDC4B0E92C078B(iVar2))
	{
		if (iLocal_98 >= iVar3)
		{
			SYSTEM::WAIT(0x00000000);
			iLocal_98 = 0x00000000;
			if (!func_231())
			{
				func_239(0x00000001);
			}
			func_184();
			func_226();
			func_225();
		}
		if (iLocal_91 < 0x00000028)
		{
			if (func_197(iVar2))
			{
				if (func_210(iVar2))
				{
					if (!func_208(&iVar2))
					{
						bVar1 = 0x00000000;
						switch (iParam0)
						{
							case 0x00000020:
							case 0x0000008F:
							case 0x00000090:
							case 0x00000091:
							case 0x00000092:
							case 0x0000004E:
							case 0x0000004F:
							case 0x00000058:
							case 0x0000007C:
							case 0x00000070:
							case 0x0000007B:
							case 0x00000125:
							case 0x00000056:
							case 0x0000004D:
							case 0x00000059:
							case 0x0000006A:
							case 0x0000006C:
							case 0x00000078:
							case 0x00000160:
							case 0x0000006B:
							case 0x00000060:
							case 0x00000068:
							case 0x00000069:
							case 0x00000050:
							case 0x00000071:
							case 0x00000076:
							case 0x0000003E:
							case 0x00000190:
							case 0x0000017D:
							case 0x00000180:
							case 0x0000017E:
							case 0x000000CE:
							case 0x00000195:
							case 0x00000181:
							case 0x0000017F:
							case 0x00000182:
							case 0x00000183:
							case 0x00000185:
							case 0x00000184:
							case 0x00000095:
							case 0x00000042:
							case 0x00000073:
							case 0x00000072:
							case 0x00000030:
							case 0x00000028:
							case 0x00000165:
							case 0x00000164:
							case 0x00000167:
							case 0x0000006E:
							case 0x0000003C:
							case 0x00000029:
							case 0x0000003D:
							case 0x00000176:
							case 0x00000177:
							case 0x00000040:
							case 0x00000025:
							case 0x00000093:
							case 0x0000005F:
							case 0x00000063:
							case 0x00000066:
							case 0x00000087:
							case 0x00000067:
							case 0x0000005A:
							case 0x0000006D:
							case 0x0000008D:
							case 0x00000088:
							case 0x0000007F:
							case 0x0000008E:
							case 0x00000026:
							case 0x00000054:
							case 0x00000077:
							case 0x00000079:
							case 0x0000007A:
							case 0x00000044:
							case 0x0000007E:
							case 0x00000055:
							case 0x0000008C:
							case 0x00000047:
							case 0x00000048:
							case 0x000001BE:
							case 0x000000E1:
							case 0x00000049:
							case 0x0000006F:
							case 0x0000004B:
							case 0x0000005D:
							case 0x00000062:
							case 0x00000075:
							case 0x0000013B:
							case 0x000000C5:
							case 0x000000A2:
							case 0x000000CD:
							case 0x000000CF:
							case 0x000000D0:
							case 0x000000D1:
							case 0x000000D2:
							case 0x000000D3:
							case 0x000000D4:
							case 0x000000D5:
							case 0x000000D6:
							case 0x000000A5:
							case 0x000000A6:
							case 0x000000A7:
							case 0x000000A8:
							case 0x000000A9:
							case 0x000000AA:
							case 0x000000AC:
							case 0x00000118:
							case 0x00000163:
							case 0x00000107:
							case 0x00000106:
							case 0x0000010B:
							case 0x0000010A:
							case 0x00000109:
							case 0x00000141:
							case 0x00000140:
							case 0x0000013F:
							case 0x00000142:
							case 0x00000145:
							case 0x00000144:
							case 0x0000015D:
							case 0x00000143:
							case 0x00000146:
							case 0x0000013D:
							case 0x0000013E:
								bVar1 = 0x00000001;
								break;
							
							case 0x0000016B:
								iVar5 = func_207(&iVar2);
								if (((iVar5 == 0x00000021 || iVar5 == 0x0000005C) || iVar5 == 0x00000059) || iVar5 == 0x00000058)
								{
									bVar1 = 0x00000000;
								}
								else
								{
									bVar1 = 0x00000001;
								}
								break;
							
							default:
								bVar1 = 0x00000000;
								if (iParam0 == iLocal_45)
								{
									bVar1 = 0x00000001;
								}
								else if (iParam0 == iLocal_44)
								{
									if (func_206(&iVar2))
									{
										bVar1 = 0x00000001;
									}
								}
								break;
						}
						if (unk_0xE4EDC4B0E92C078B(Global_1B050))
						{
							if (func_129(iVar2) == iLocal_44)
							{
								if (!Global_1B050 == iVar2)
								{
									bVar1 = 0x00000000;
								}
							}
						}
						if (bVar1)
						{
							bVar1 = 0x00000000;
							if (func_197(iVar2))
							{
								iVar4 = unk_0xDC7D2B8A563DB482(iVar2);
								if (((iVar4 == 0x00000004 || iVar4 == 0x00000005) || iVar4 == 0x00000002) || iVar4 == 0x00000001)
								{
									bVar1 = 0x00000001;
								}
							}
							if (bVar1)
							{
								func_205(&iVar2, &vVar0);
								func_199(vVar0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_98++;
		iVar2 = unk_0x92BE25195E14900E(iParam0);
	}
}

void func_199(vector3 vParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (func_129(vParam0.x) == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000028)
	{
		if (func_129(vLocal_819[iVar0 /*3*/]) == func_129(vParam0.x))
		{
			iVar1 = iVar0;
			iVar0 = 0x00000028;
		}
		else if (iVar0 == iLocal_91)
		{
			iVar1 = iVar0;
			iVar0 = 0x00000028;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000028)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_91)
		{
			if (func_129(vLocal_819[iVar0 /*3*/]) == func_129(vParam0.x))
			{
				if (func_203(vParam0, vLocal_819[iVar0 /*3*/]))
				{
					if (bParam1)
					{
						func_202(vParam0, iVar0);
						iVar0 = 0x00000028;
						return;
					}
					else
					{
						func_200(vParam0, iVar0);
						iLocal_91++;
						iVar0 = 0x00000028;
						return;
					}
				}
				else if (bParam1)
				{
					iVar0 = 0x00000028;
					return;
				}
			}
			else
			{
				func_200(vParam0, iVar0);
				iLocal_91++;
				iVar0 = 0x00000028;
				return;
			}
		}
		else
		{
			func_200(vParam0, iVar0);
			iLocal_91++;
			iVar0 = 0x00000028;
			return;
		}
		iVar0++;
	}
}

void func_200(vector3 vParam0, int iParam1)
{
	func_201(iParam1);
	vLocal_819[iParam1 /*3*/] = { vParam0 };
	if (func_129(vLocal_819[iParam1 /*3*/]) == unk_0x817B3657F78A517A())
	{
		iLocal_97 = iParam1;
		vLocal_834 = { unk_0xAC14F6E4B17D7835(vLocal_819[iParam1 /*3*/]) };
	}
}

void func_201(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0x00000027;
	while (iVar0 > iParam0)
	{
		vVar1 = { vLocal_819[(iVar0 - 0x00000001) /*3*/] };
		vLocal_819[iVar0 /*3*/] = { vVar1 };
		if ((iVar0 - 0x00000001) == iLocal_97)
		{
			iLocal_97 = iVar0;
		}
		iVar0 = (iVar0 - 0x00000001);
	}
}

void func_202(vector3 vParam0, int iParam1)
{
	vLocal_819[iParam1 /*3*/] = { vParam0 };
	if (func_129(vLocal_819[iParam1 /*3*/]) == unk_0x817B3657F78A517A())
	{
		iLocal_97 = iParam1;
		vLocal_834 = { unk_0xAC14F6E4B17D7835(vLocal_819[iParam1 /*3*/]) };
	}
}

int func_203(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	if (func_204(iParam0) < func_204(iParam3))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

float func_204(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 1E+07f };
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0))
		{
			vVar0 = { func_49(iParam0) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
	}
	return SYSTEM::VMAG(vVar0);
}

void func_205(int iParam0, var uParam1)
{
	vector3 vVar0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_1B052)
	{
		vVar0 = { func_49(*uParam1) };
		unk_0xA53EC9C7DB1E3684(vVar0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		unk_0xA53EC9C7DB1E3684(Global_1B054, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = unk_0x76137156E5D43335(*iParam0);
		if (((iVar0 == 0x00000009 || iVar0 == 0x0000000B) || iVar0 == 0x0000000A) || iVar0 == 0x0000003D)
		{
			return 0x00000001;
		}
		else if ((iVar0 == 0x0000000C || iVar0 == 0x0000000E) || iVar0 == 0x0000000D)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/])
		{
			if (Global_175BD[iVar0 /*17*/].f_9 != 0x00000107)
			{
				if (unk_0xE4EDC4B0E92C078B(Global_79AA[Global_175BD[iVar0 /*17*/].f_9 /*23*/].f_13))
				{
					if (Global_79AA[Global_175BD[iVar0 /*17*/].f_9 /*23*/].f_13 == *iParam0)
					{
						return Global_175BD[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_208(int iParam0)
{
	if (!unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		return 0x00000001;
	}
	if (Global_1B04F == *iParam0)
	{
		return 0x00000001;
	}
	if (unk_0x8FBD6436A27198B4(*iParam0) == 0x00000027)
	{
		return 0x00000001;
	}
	if (func_209(unk_0xAC14F6E4B17D7835(*iParam0), 0f, 0f, 0f, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_129(*iParam0) == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_209(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_210(int iParam0)
{
	float fVar0;
	
	if (!func_129(iParam0) == iLocal_44)
	{
		fVar0 = func_204(iParam0);
		if (fVar0 > 50f)
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

void func_211()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000028)
	{
		vLocal_819[iVar0 /*3*/] = 0x00000000;
		iVar0++;
	}
	iLocal_91 = 0x00000000;
	iLocal_97 = 0xFFFFFFFF;
	vLocal_834 = { 0f, 0f, 0f };
	iLocal_98 = 0x00000000;
}

bool func_212()
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	
	bVar0 = 0x00000000;
	if (!unk_0xE4EDC4B0E92C078B(vLocal_819[iLocal_92 /*3*/]))
	{
		if (iLocal_92 != iLocal_97)
		{
			return 0x00000001;
		}
	}
	if (SYSTEM::TIMERB() > 0x000000FA)
	{
		if (!bVar0)
		{
			if (iLocal_95 != unk_0xB7B9B7C245ECD0D7())
			{
				bVar0 = 0x00000001;
			}
			iLocal_95 = unk_0xB7B9B7C245ECD0D7();
			if (iLocal_96 != func_213())
			{
				bVar0 = 0x00000001;
			}
			iLocal_96 = func_213();
		}
		if (!bVar0)
		{
			if (iLocal_97 != 0xFFFFFFFF)
			{
				if (unk_0xE4EDC4B0E92C078B(vLocal_819[iLocal_97 /*3*/]))
				{
					if (func_129(vLocal_819[iLocal_97 /*3*/]) == unk_0x817B3657F78A517A())
					{
						vVar1 = { unk_0xAC14F6E4B17D7835(vLocal_819[iLocal_97 /*3*/]) };
						if (!func_133(vVar1, vLocal_834, 0x3F000000, 0x00000000))
						{
							bVar0 = 0x00000001;
						}
					}
				}
				else
				{
					iVar2 = unk_0xCDB86175B3C461EB(unk_0x817B3657F78A517A());
					if (unk_0xE4EDC4B0E92C078B(iVar2))
					{
						vVar1 = { unk_0xAC14F6E4B17D7835(iVar2) };
						if (!func_133(vVar1, vLocal_834, 0x3F000000, 0x00000000))
						{
							bVar0 = 0x00000001;
						}
					}
				}
			}
		}
		SYSTEM::SETTIMERB(0x00000000);
	}
	return bVar0;
}

int func_213()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_3(Global_1B04D))
	{
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0xFFFFFFFF, 0x00000000))
		{
			iVar0++;
		}
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000000, 0x00000000))
		{
			iVar0++;
		}
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000001, 0x00000000))
		{
			iVar0++;
		}
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000002, 0x00000000))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_214()
{
	if (iLocal_821 != 0x00000000)
	{
		unk_0x3039591AD3E735CE(iLocal_93);
		unk_0xD9ACBBA59FD5A09E(0x00000004);
		unk_0x5DD950F92F816F03(0x00000001);
		if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
		{
			unk_0xEF45C43067063F18(iLocal_111, fLocal_86, fLocal_87, fLocal_84, fLocal_85, 0x00000000, 0x00000000, 0x00000000, 0x000000FF, 0x00000000);
		}
	}
}

void func_215()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_821 != 0x00000000)
	{
		if (iLocal_91 > 0x00000001)
		{
			func_220(&iVar0, &uVar1, &uVar2, &uVar3, 0x00000000);
			if (unk_0x91E3F625EF57450D(0x00000002))
			{
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000F1);
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000F2);
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000B4);
				unk_0x558EC149EB2BC0A2(0x00000002, 0x000000B5);
			}
			if (iVar0 > 0x0000001C || unk_0xD245978525608929(0x00000002, 0x000000B4))
			{
				if (!iLocal_62)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_219();
						}
						else
						{
							iLocal_58 = 0x00000001;
						}
						bLocal_59 = 0x00000001;
					}
					else
					{
						func_219();
					}
					iLocal_104 = unk_0x1C0640BA9A7327B3();
					iLocal_62 = 0x00000001;
				}
			}
			else
			{
				iLocal_62 = 0x00000000;
			}
			if (iVar0 < 0xFFFFFFE4 || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B5))
			{
				if (!iLocal_63)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_217();
						}
						else
						{
							iLocal_58 = 0x00000001;
						}
						bLocal_59 = 0x00000001;
					}
					else
					{
						func_217();
					}
					iLocal_104 = unk_0x1C0640BA9A7327B3();
					iLocal_63 = 0x00000001;
				}
			}
			else
			{
				iLocal_63 = 0x00000000;
			}
		}
		if (!bLocal_60)
		{
			if (iLocal_91 > 0x00000000)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B0))
				{
					if (unk_0xE4EDC4B0E92C078B(vLocal_819[iLocal_92 /*3*/]))
					{
						iLocal_818 = 0x00000002;
						vLocal_43 = { vLocal_819[iLocal_92 /*3*/] };
						iLocal_56 = 0x00000000;
						iLocal_90 = unk_0x1C0640BA9A7327B3();
						iLocal_99 = unk_0x1C0640BA9A7327B3();
						iLocal_100 = unk_0x1C0640BA9A7327B3();
						iLocal_88 = 0x00000000;
						iLocal_820 = 0x00000000;
						bLocal_60 = 0x00000001;
						iLocal_58 = 0x00000001;
						bLocal_59 = 0x00000000;
					}
				}
			}
		}
		else
		{
			unk_0xF3039DE1FDB4F6FD(0x00000000);
			if (iLocal_821 == 0x00000002)
			{
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B1))
				{
					iLocal_818 = 0x0000000D;
					iLocal_58 = 0x00000001;
					if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
					{
						unk_0xA3BF0AA5A2608191(Global_1B04E);
					}
					iLocal_821 = 0x00000003;
				}
				if (!bLocal_64)
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B3))
					{
						iLocal_818 = 0x00000014;
						bLocal_64 = 0x00000001;
						iLocal_58 = 0x00000001;
						fLocal_73 = (0.22f * 2f);
						if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
						{
							if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003))
							{
								if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
								{
									if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_exit", 0x00000003))
									{
										unk_0xA3BF0AA5A2608191(Global_1B04E);
									}
								}
							}
						}
					}
				}
				if (func_76())
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B0))
					{
						if (bLocal_61)
						{
							iLocal_58 = 0x00000001;
							iLocal_89 = unk_0x1C0640BA9A7327B3();
							iLocal_823 = 0x00000000;
							iLocal_821 = 0x00000004;
						}
					}
				}
				if (iLocal_818 == 0x00000000)
				{
					if (iLocal_99 != 0xFFFFFFFF)
					{
						if (func_162(iLocal_99, 0x000109A0))
						{
							iLocal_818 = 0x00000004;
							iLocal_99 = 0xFFFFFFFF;
						}
					}
				}
				if (iLocal_818 == 0x00000000)
				{
					if (iLocal_100 != 0xFFFFFFFF)
					{
						if (func_162(iLocal_100, 0x00001388))
						{
							if ((unk_0x06F8112AA79C53D9(0x00000002, 0x00000051) || unk_0x06F8112AA79C53D9(0x00000002, 0x00000052)) || unk_0x06F8112AA79C53D9(0x00000002, 0x00000055))
							{
								iLocal_818 = 0x00000011;
								iLocal_99 = 0xFFFFFFFF;
							}
						}
					}
				}
			}
			else if (iLocal_821 == 0x00000003)
			{
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B1))
				{
					iLocal_818 = 0x00000003;
					iLocal_58 = 0x00000001;
					iLocal_821 = 0x00000002;
				}
			}
			if (bLocal_59)
			{
				if (func_216())
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B0))
					{
						if (unk_0xE4EDC4B0E92C078B(vLocal_819[iLocal_92 /*3*/]))
						{
							iLocal_818 = 0x00000009;
							bLocal_61 = 0x00000000;
							if (iLocal_821 == 0x00000003)
							{
								iLocal_821 = 0x00000002;
							}
							iLocal_58 = 0x00000001;
							vLocal_43 = { vLocal_819[iLocal_92 /*3*/] };
							iLocal_56 = 0x00000000;
							iLocal_90 = unk_0x1C0640BA9A7327B3();
							iLocal_88 = 0x00000000;
							iLocal_820 = 0x00000000;
							if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
							{
								if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003))
								{
									if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
									{
										if (!unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_exit", 0x00000003))
										{
											unk_0xA3BF0AA5A2608191(Global_1B04E);
										}
									}
								}
							}
							iLocal_104 = unk_0x1C0640BA9A7327B3();
							bLocal_59 = 0x00000000;
						}
					}
					if (func_162(iLocal_104, 0x00000BB8))
					{
						bLocal_59 = 0x00000000;
					}
				}
			}
		}
	}
}

int func_216()
{
	if (unk_0x9F4FE516EAACCFC5(iLocal_68))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_68))
		{
			return 0x00000001;
		}
	}
	if (bLocal_59)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_217()
{
	vector3 vVar0;
	
	unk_0x7E60C62A7CE58FC8(iLocal_111, "SET_INPUT_EVENT");
	unk_0x3CAEA85DA607305E(0x00000008);
	unk_0x7E60D21B163E9D56();
	iLocal_92 = (iLocal_92 - 0x00000001);
	if (iLocal_92 < 0x00000000)
	{
		iLocal_92 = (iLocal_91 - 0x00000001);
	}
	if (unk_0xE4EDC4B0E92C078B(vLocal_819[iLocal_92 /*3*/]))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(vLocal_819[iLocal_92 /*3*/]) };
		if (!func_218(vVar0))
		{
			unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
		}
	}
}

int func_218(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_219()
{
	vector3 vVar0;
	
	unk_0x7E60C62A7CE58FC8(iLocal_111, "SET_INPUT_EVENT");
	unk_0x3CAEA85DA607305E(0x00000009);
	unk_0x7E60D21B163E9D56();
	iLocal_92++;
	if (iLocal_92 > (iLocal_91 - 0x00000001))
	{
		iLocal_92 = 0x00000000;
	}
	if (unk_0xE4EDC4B0E92C078B(vLocal_819[iLocal_92 /*3*/]))
	{
		vVar0 = { unk_0xAC14F6E4B17D7835(vLocal_819[iLocal_92 /*3*/]) };
		if (!func_218(vVar0))
		{
			unk_0xDB111A9E05F41582(vVar0.x, vVar0.y);
		}
	}
}

void func_220(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

int func_221()
{
	if (iLocal_821 == 0x00000004)
	{
		return 0x00000001;
	}
	if (func_223())
	{
		return 0x00000001;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000001;
	}
	if (func_222())
	{
		return 0x00000001;
	}
	if (func_187(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	if (func_169(0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x1A72D8C9F025E5E3())
	{
		return 0x00000001;
	}
	if (func_188())
	{
		return 0x00000001;
	}
	if (Global_12C52 || Global_12C53)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_222()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

bool func_223()
{
	return Global_12061;
}

void func_224()
{
	if (!Global_1B052 == 0x00000000)
	{
		if (!unk_0xE4EDC4B0E92C078B(Global_1B052))
		{
			Global_1B052 = 0x00000000;
		}
	}
}

void func_225()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
		unk_0x05C6848E923D332F(unk_0xD803B885F5E47A62());
		unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000002);
		unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000003);
		unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000004);
		unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x00000005);
		unk_0x0B54B0F65E7FEED7(unk_0xD803B885F5E47A62(), 0x0000000F);
	}
}

void func_226()
{
	unk_0xA2E3EDD0E119882F(0x00000000);
	unk_0xA2E3EDD0E119882F(0x00000001);
	unk_0xA2E3EDD0E119882F(0x00000002);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000063, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000064, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000010, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000011, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	func_227();
	unk_0x38C3A68D7861DCFD(0x00000000, 0x000000C8, 0x00000001);
	if (func_223() || func_169(0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
}

void func_227()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

int func_228()
{
	int iVar0;
	
	if (Global_1B04E == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
	{
		if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
		{
			if (!unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
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
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
			{
				if (func_229(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					iVar0 = unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000);
					if (!iVar0 == unk_0x16F2683693E537C9())
					{
						if (!unk_0xEB6A8945D1AC98A1(iVar0))
						{
							Global_1B05D = 0x00000001;
							unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000000);
							unk_0x3584F71E5CA29322(0x00000002);
							unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_68))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_68))
		{
			unk_0x4DC7B72197441408(0x00000000);
			Global_1B05E = 0x00000000;
		}
		unk_0xE3BB8E05FCEB3FBE(iLocal_68, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_68, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xFB452C6B9BE826C7();
		unk_0xF737A3AD8873CE16();
		unk_0xF91D0B1DCE756AFB(0x00000000);
	}
	return 0x00000000;
}

int func_229(int iParam0)
{
	if (unk_0x4906F8A34E9F4814(iParam0, joaat("taxi")))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_230(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000001;
	}
	if (func_60(unk_0x16F2683693E537C9()) != iLocal_71)
	{
		return 0x00000001;
	}
	if (!unk_0xC844350D5D58C99A(Global_1B04D))
	{
		return 0x00000001;
	}
	if (!unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		return 0x00000001;
	}
	if (!unk_0xC844350D5D58C99A(Global_1B04E))
	{
		return 0x00000001;
	}
	if (unk_0xEB6A8945D1AC98A1(Global_1B04E))
	{
		return 0x00000001;
	}
	if (iLocal_821 != 0x00000004)
	{
		if (iParam0 == 0x00000001)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				return 0x00000001;
			}
			if (((unk_0x7B5606C651AB51B5(Global_1B04D, 0x00000002, 0x00007530) || unk_0x7B5606C651AB51B5(Global_1B04D, 0x00000003, 0x00007530)) || unk_0x7B5606C651AB51B5(Global_1B04D, 0x00000000, 0x00001B58)) || unk_0x7B5606C651AB51B5(Global_1B04D, 0x00000001, 0x00001B58))
			{
				return 0x00000001;
			}
		}
		vVar0 = { unk_0x68F4C0EC296D3901(Global_1B04D, 0x00000000) };
		if (unk_0xD3DCEC81D13AAFB1(vVar0, 7f, 0x00000000))
		{
			return 0x00000001;
		}
		fVar1 = 15f;
		vVar2 = { vVar0 };
		vVar3 = { vVar2 };
		vVar2.x = (vVar2.x - fVar1);
		vVar2.y = (vVar2.y - fVar1);
		vVar2.z = (vVar2.z - fVar1);
		vVar3.x = (vVar3.x + fVar1);
		vVar3.y = (vVar3.y + fVar1);
		vVar3.z = (vVar3.z + fVar1);
		if (unk_0x723EE7F83DF1497D(vVar2, vVar3, 0x00000001))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_231()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if (Global_175B0 == 0x00000001)
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (Global_1B061)
	{
		return 0x00000000;
	}
	if (Global_4)
	{
		return 0x00000000;
	}
	if (unk_0x28CDCD4EC82F21C0())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_232()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		iLocal_95 = unk_0xB7B9B7C245ECD0D7();
		if (func_236(&iVar0, func_238(), func_237()))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000);
			func_224();
			unk_0x826505E1E441E55D(unk_0xD803B885F5E47A62(), 0x00000000);
			unk_0x3584F71E5CA29322(0x00000002);
			unk_0x33CE5A9E32EA10B2(unk_0x16F2683693E537C9(), 0x00000001);
			if (unk_0xA30B8362589C124A(iVar0, 0x00000001, 0x00000000) == unk_0x16F2683693E537C9())
			{
				iLocal_839 = 0x00000001;
			}
			else
			{
				iLocal_839 = 0x00000002;
			}
			if (func_234(&iVar0, &iVar1, 0x00000001))
			{
				vLocal_832 = { unk_0x68F4C0EC296D3901(Global_1B04D, 0x00000001) - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				vLocal_832.z = 0f;
				fLocal_72 = SYSTEM::VMAG(vLocal_832);
				iLocal_71 = func_60(unk_0x16F2683693E537C9());
				func_233();
				iLocal_96 = func_213();
				iLocal_58 = 0x00000001;
				unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
				Global_1B05D = 0x00000001;
				iLocal_821 = 0x00000000;
				iLocal_822 = 0x00000001;
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_233()
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
	{
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000001, 0x00000000))
		{
			iVar0 = unk_0xA30B8362589C124A(Global_1B04D, 0x00000001, 0x00000000);
			if (unk_0x16F2683693E537C9() != iVar0)
			{
				if (!unk_0xBFDE4EE64C4BF2D6(iVar0, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
				{
					unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
		}
		if (!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000002, 0x00000000))
		{
			iVar0 = unk_0xA30B8362589C124A(Global_1B04D, 0x00000002, 0x00000000);
			if (unk_0x16F2683693E537C9() != iVar0)
			{
				if (!unk_0xBFDE4EE64C4BF2D6(iVar0, unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
				{
					unk_0xF3268524E9BE6D6E(iVar0, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
			}
		}
	}
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	if (!*iParam0 == Global_1B04D && !Global_1B04D == 0x00000000)
	{
		func_235();
	}
	if (unk_0xC844350D5D58C99A(*iParam0) && unk_0xC844350D5D58C99A(*iParam1))
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(*iParam1))
			{
				if (unk_0x82CCEAB29E9451DD(*iParam1, *iParam0))
				{
					Global_1B04D = *iParam0;
					Global_1B04E = *iParam1;
					Global_1B05C = 0x00000001;
					if (bParam2)
					{
						unk_0x73270B3C9CC833FD(Global_1B04E, 0x00000001, 0x00000001);
						unk_0x73270B3C9CC833FD(Global_1B04D, 0x00000001, 0x00000001);
						StringCopy(&Global_1B06C, unk_0xBB0808A181D4745C(), 24);
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(Global_1B04E))
						{
							unk_0x73270B3C9CC833FD(Global_1B04E, 0x00000001, 0x00000000);
						}
						if (!unk_0xAF6690C489CC6203(Global_1B04D))
						{
							unk_0x73270B3C9CC833FD(Global_1B04D, 0x00000001, 0x00000000);
							StringCopy(&Global_1B06C, unk_0xBB0808A181D4745C(), 24);
						}
					}
					unk_0x4E885A246A9D983A(Global_1B04E, 0x000000FB, 0x00000001);
					unk_0xAFF39FB306F8E232(Global_1B04E, 0x00000005, 0x00000000);
					unk_0xAFF39FB306F8E232(Global_1B04E, 0x00000011, 0x00000001);
					unk_0xBAFED2F6486F771A(Global_1B04E, 0x00000200, 0x00000000);
					unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000001);
					unk_0x4F39CC3882DD074E(Global_1B04E, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x71EDC33E5A423750(Global_1B04D, 0x00000001);
					unk_0x4551D324905984CB(Global_1B04D, 0x00000001);
					unk_0x9A8BCD43DBDDCDCA(Global_1B04D, 0x00000000, 0x00000000);
					unk_0x490CE125A7B7CD42(Global_1B04D, 0x00000001);
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_235()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_1B04E))
	{
		if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
		{
			unk_0x4E885A246A9D983A(Global_1B04E, 0x000000FB, 0x00000000);
			unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000000);
			if (!unk_0xE9FDA1035CFEA94F(Global_1B04E) && !unk_0x4734A6196B611C3B(Global_1B04E, 0x00000000))
			{
				if (unk_0x405E212DDE472467(Global_1B04E, 0x00000000))
				{
					if (unk_0xC844350D5D58C99A(Global_1B04D))
					{
						if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
						{
							if (unk_0x82CCEAB29E9451DD(Global_1B04E, Global_1B04D))
							{
								if (unk_0xD1960163A3042274(Global_1B04E, 0xF09B15B3) != 0x00000001 && unk_0xD1960163A3042274(Global_1B04E, 0xF09B15B3) != 0x00000000)
								{
									unk_0xDD353D0E9C789D0E(&iVar0);
									if ((!unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000001, 0x00000000) || !unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000002, 0x00000000)) || !unk_0xBBA8A868118C90ED(Global_1B04D, 0x00000000, 0x00000000))
									{
										unk_0x78A77CDD64392938(0x00000000, 0x000007D0);
									}
									else
									{
										unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
									}
									unk_0xE072601B4380E9DF(0x00000000, Global_1B04D, 12f, 0x000C10AB);
									unk_0x75ABDC5F81978924(iVar0);
									unk_0x78ADC381772E3D54(Global_1B04E, iVar0);
									unk_0xF82EA857DA10E0CD(&iVar0);
								}
							}
							else
							{
								unk_0xF3268524E9BE6D6E(Global_1B04E, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
							}
						}
						else
						{
							unk_0xF3268524E9BE6D6E(Global_1B04E, unk_0x16F2683693E537C9(), 500f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
					}
				}
				else if (unk_0xD1960163A3042274(Global_1B04E, 0xBBA3B7CA) != 0x00000001 && unk_0xD1960163A3042274(Global_1B04E, 0xBBA3B7CA) != 0x00000000)
				{
					unk_0x01E4BB5190DF7317(Global_1B04E, 0x471C4000, 0x00000000);
				}
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Global_1B04E))
	{
		if (unk_0xAF6690C489CC6203(Global_1B04E))
		{
			if (unk_0x9C77D2D0559097F0(Global_1B04E, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(Global_1B04E))
				{
					unk_0xE8832A9E16A57A1F(Global_1B04E, 0x00000000, 0x00000001);
					unk_0x11AD11297DC58CC7(Global_1B04E, 0x00000000);
				}
				unk_0x6DAD7906B73F064D(&Global_1B04E);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Global_1B04D))
	{
		if (unk_0xAF6690C489CC6203(Global_1B04D))
		{
			if (unk_0x9C77D2D0559097F0(Global_1B04D, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0x4551D324905984CB(Global_1B04D, 0x00000000);
					unk_0x9A8BCD43DBDDCDCA(Global_1B04D, 0x00000001, 0x00000000);
					unk_0x490CE125A7B7CD42(Global_1B04D, 0x00000000);
				}
				unk_0x046C362CF15F1935(&Global_1B04D);
			}
		}
	}
	Global_1B04E = 0x00000000;
	Global_1B04D = 0x00000000;
	StringCopy(&Global_1B06C, "NULL", 24);
	Global_1B072 = 0xFFFFFFFF;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(*iParam0) == iParam1)
			{
				iVar0 = unk_0xA30B8362589C124A(*iParam0, 0xFFFFFFFF, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (!unk_0xEB6A8945D1AC98A1(iVar0))
					{
						if (!unk_0xE9FDA1035CFEA94F(iVar0))
						{
							if (!unk_0x4734A6196B611C3B(iVar0, 0x00000000))
							{
								if (unk_0x61C907EA8258B04D(iVar0, iParam2))
								{
									if (unk_0x10BA239D3B8FDC7F(*iParam0, 0x42B40000))
									{
										iVar1 = unk_0x9C7B8DC16535B879(*iParam0);
										if (iVar1 != 0x00000003 && iVar1 != 0x00000002)
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
	return 0x00000000;
}

int func_237()
{
	return joaat("a_m_y_stlat_01");
}

int func_238()
{
	return joaat("taxi");
}

void func_239(bool bParam0)
{
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	if (unk_0xE6CD5C6925050049("taxi"))
	{
		unk_0x683413D9B7010687("taxi");
	}
	if (unk_0x9F4FE516EAACCFC5(iLocal_68))
	{
		if (unk_0xFBB4F23D534EB790(iLocal_68))
		{
			unk_0x4DC7B72197441408(0x00000000);
		}
		unk_0xE3BB8E05FCEB3FBE(iLocal_68, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(iLocal_68, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xFB452C6B9BE826C7();
		unk_0xF737A3AD8873CE16();
		unk_0xF91D0B1DCE756AFB(0x00000000);
	}
	Global_1B05E = 0x00000000;
	if (unk_0xC844350D5D58C99A(iLocal_109))
	{
		unk_0xF690C84DADBB3551(&iLocal_109);
		unk_0x71199B01895C6202(iLocal_108);
	}
	unk_0xE17FDF9E3068281B(&iLocal_111);
	unk_0xE17FDF9E3068281B(&iLocal_112);
	if (func_240(Global_1B04E))
	{
		if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_enter", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(Global_1B04E, "leanover_enter", &cLocal_824, -2f);
		}
		else if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_idle", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(Global_1B04E, "leanover_idle", &cLocal_824, -2f);
		}
		else if (unk_0xB4ECF989E2C1DAC8(Global_1B04E, &cLocal_824, "leanover_exit", 0x00000003))
		{
			unk_0x7720CBBC7DD82563(Global_1B04E, "leanover_exit", &cLocal_824, -2f);
		}
		if (unk_0xC7E2E6167C09468B(Global_1B04E, unk_0x16F2683693E537C9()))
		{
			unk_0xBC43ED9FE28DB191(Global_1B04E);
		}
	}
	unk_0x8D17794CE3273D70(&cLocal_824);
	if (iLocal_821 == 0x00000004)
	{
		if (iLocal_823 != 0x0000000A)
		{
			if (iLocal_57)
			{
				if (unk_0xEB880D98B5988D0C())
				{
					unk_0x486B4ADE317F0689();
				}
				iLocal_57 = 0x00000000;
			}
			func_163(0x00000000);
			if (unk_0x562F77A7F33D2E46("FADE_OUT_WORLD_250MS_SCENE"))
			{
				unk_0x8910D3D58E0132B8("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (unk_0xC844350D5D58C99A(Global_1B04D))
			{
				if (unk_0xDF1306B443CD3D15(Global_1B04D, 0x00000000))
				{
					unk_0x3E5CE368CD085FFA(Global_1B04D, 0x00000001);
					unk_0x1E9649458B15960F(Global_1B04D, 0x00000000);
				}
			}
			if (bParam0)
			{
				if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
				{
					if (!unk_0x7BCE0E6DD4A1F749())
					{
						if ((!func_82() && !func_8()) && Global_181B8 != 0x0000000A)
						{
							unk_0x82E51BCA72537B6C(0x000000FA);
						}
					}
				}
			}
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_3(Global_1B04D))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), Global_1B04D, 0x00000001))
			{
				if (unk_0xA30B8362589C124A(Global_1B04D, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					if (!func_2(unk_0x16F2683693E537C9(), 0xCE98FBB3) && !func_2(unk_0x16F2683693E537C9(), 0x1AE73569))
					{
						unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
					}
				}
			}
		}
	}
	func_5();
	func_235();
	Global_1B072 = 0xFFFFFFFF;
	Global_1B05D = 0x00000000;
	Global_1B061 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

int func_240(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

