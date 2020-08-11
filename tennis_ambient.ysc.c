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
	var uLocal_70 = 17;
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
	var uLocal_88 = 17;
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
	float fLocal_113 = 0f;
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
	var uLocal_127 = 12;
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
	var uLocal_140 = 12;
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
	var uLocal_153 = 9;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 9;
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
	var uLocal_191 = -1;
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
	int iLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_250 = 0;
	var uLocal_251 = 3;
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
	var uLocal_299 = 4;
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
	var uLocal_364 = 2;
	var uLocal_365 = 0;
	var uLocal_366 = 4;
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
	var uLocal_432 = 4;
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
	var uLocal_503 = 12;
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
	var uLocal_684 = 3;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	vector3 vLocal_690 = { 0f, 0f, 0f };
	var uLocal_691 = 0;
#endregion

void __EntryFunction__()
{
	struct<1584> Var0;
	struct<29> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
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
	fLocal_113 = ((0.05f + 0.275f) - 0.01f);
	iLocal_233 = 0xFFFFFFFF;
	vLocal_236 = { 0.034f, 0.002f, -0.007f };
	vLocal_237 = { 70.56f, 72.36f, 67.68f };
	vLocal_238 = { 2f, -0.04f, 0.6f };
	vLocal_239 = { 3.2f, -0.04f, 0.6f };
	vLocal_240 = { 3.2f, -0.04f, -0.6f };
	vLocal_241 = { 2f, -0.04f, -0.6f };
	vLocal_242 = { -3.2f, -0.04f, 0.6f };
	vLocal_243 = { -2f, -0.04f, 0.6f };
	vLocal_244 = { -2f, -0.04f, -0.6f };
	vLocal_245 = { -3.2f, -0.04f, -0.6f };
	if (((func_338(0x0000000A) && unk_0x8A22C4C08282BF26(joaat("tennis")) == 0x00000000) || Global_175B8) && !vScriptParam_690.y)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0x752C7D5696C0D8A0(0x00000000);
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_328();
		unk_0x10FAF14A60A0DBE1();
	}
	Var0 = 0x00000002;
	Var0.f_1.f_4.f_6 = 0x00000004;
	Var0.f_1.f_23 = 0x00000004;
	Var0.f_1.f_3B = 0x00000002;
	Var0.f_1.f_3E = 0x3F000000;
	Var0.f_1.f_42 = 0x3F800000;
	Var0.f_1.f_43 = 0x3F800000;
	Var0.f_1.f_5E.f_4.f_6 = 0x00000004;
	Var0.f_1.f_5E.f_23 = 0x00000004;
	Var0.f_1.f_5E.f_3B = 0x00000002;
	Var0.f_1.f_5E.f_3E = 0x3F000000;
	Var0.f_1.f_5E.f_42 = 0x3F800000;
	Var0.f_1.f_5E.f_43 = 0x3F800000;
	Var0.f_BD.f_3 = 0x00000004;
	Var0.f_BD.f_10 = 0x00000004;
	Var0.f_BD.f_20 = 0x00000002;
	Var0.f_BD.f_27 = 0x00000003;
	Var0.f_11A = 0x0000000A;
	Var0.f_12F = 0x0000004D;
	Var0.f_217 = 0x0000004D;
	Var0.f_217.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_1 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_2 = 0xBF800000;
	Var0.f_217.f_1.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_C.f_3 = 0xFFFFFFFF;
	Var0.f_5B4 = 0x0000000A;
	Var0.f_5B4.f_1 = 0x0000000A;
	Var0.f_5B4.f_1.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B.f_B.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B.f_B.f_B.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B.f_B.f_B.f_B.f_B.f_B = 0x0000000A;
	Var0.f_5B4.f_1.f_B.f_B.f_B.f_B.f_B.f_B.f_B.f_B.f_B = 0x0000000A;
	Var0.f_623 = 0x0000000B;
	Var0.f_62F = 0x00000018;
	Var1.f_3 = 0x00000001;
	Var1.f_7 = 0x00000002;
	Var1.f_7.f_1.f_1 = 0x00000005;
	Var1.f_7.f_1.f_8.f_1 = 0x00000005;
	Var1.f_1C = 0x00000001;
	fVar2 = func_327(vScriptParam_690.y, vScriptParam_690.z, 150f);
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = (0x00000001 - iVar4);
	func_311(&Var0, &Var1, 0x00000001, iVar4, iVar5, &vScriptParam_690, joaat("a_f_y_tennis_01"), joaat("a_m_m_tennis_01"));
	while (0x00000001)
	{
		func_310(&Var0);
		if (Global_175B8)
		{
			func_306(&Var0);
		}
		if (func_305(&Var1) > 0x00000004 && func_303(&Var0, iVar4, &iVar3))
		{
			func_306(&Var0);
		}
		if (unk_0x8FE4F98FD4BE2689() && !vScriptParam_690.y)
		{
			func_306(&Var0);
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Var0.f_BD.f_37) < 5625f || vScriptParam_690.y)
			{
				func_2(&Var0, &Var1, &iVar3, iVar4, iVar5, &uVar6, vScriptParam_690.y);
			}
		}
		func_1(&(Var0.f_119));
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Var0.f_BD.f_37) > (fVar2 * fVar2))
			{
				func_306(&Var0);
			}
		}
		if ((func_338(0x0000000A) && unk_0x8A22C4C08282BF26(joaat("tennis")) == 0x00000000) && !vScriptParam_690.y)
		{
			func_306(&Var0);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(var uParam0)
{
	*uParam0++;
}

void func_2(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	var uVar17;
	char* sVar18;
	float fVar19;
	vector3 vVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	vVar1 = { 0f, 0f, 0f };
	bVar7 = (uParam0->f_679 == 0x00000001 && func_305(uParam1) == 0x00000014);
	func_290(uParam0, func_305(uParam1), *iParam2, iParam3, iParam4, bVar7);
	if (uParam0->f_679 == 0x00000001 && !bParam6)
	{
		func_289(uParam0);
	}
	if (func_288(&(uParam0->f_F7), 0x00000010))
	{
		func_287(&(uParam0->f_F7), 0x00000010);
	}
	iVar8 = func_286(&(uParam0->f_F7));
	if (func_284(uParam0, iVar8, *iParam2, func_305(uParam1)))
	{
		bVar9 = (func_305(uParam1) != 0x00000008 && func_305(uParam1) < 0x00000010);
		vVar6 = { func_283(&(uParam0->f_F7)) };
		iVar10 = func_279(&(uParam0->f_BD), &vVar6, &(uParam0->f_F7.f_A), &(uParam0->f_67A), &(uParam0->f_F7.f_4), &(uParam0->f_F7.f_16), &(uParam0->f_F7.f_5), &iVar8, bVar9, -1f, func_288(&(uParam0->f_F7), 0x00000020), 0x00000000, 0x00000000);
		if (iVar10 == 0x00000001)
		{
			func_278(&(uParam0->f_F7), 0x00000010);
		}
		else if (iVar10 == 0x00000003 || iVar10 == 0x00000002)
		{
			func_277(uParam0[0x00000000 /*94*/], 0x00008000);
			func_277(uParam0[0x00000001 /*94*/], 0x00008000);
		}
		func_276(&(uParam0->f_F7), vVar6);
		unk_0xA47B46945FF6DE74(uParam0->f_F7, func_283(&(uParam0->f_F7)), 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x37806EBF326ECEE9(uParam0->f_F7, uParam0->f_F7.f_A);
		vVar6 = { func_283(&(uParam0->f_F7)) };
	}
	else if (func_305(uParam1) > 0x00000005)
	{
		if (func_275(&(uParam0->f_F7)))
		{
			func_274(&(uParam0->f_F7));
		}
	}
	func_273(uParam0, uParam1, &iVar11, &iVar12);
	switch (func_305(uParam1))
	{
		case 0x00000000:
			if (unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				unk_0x790015DC92C918E2();
				unk_0xA47B46945FF6DE74((uParam0[iParam3 /*94*/])->f_20, func_270(&(uParam0->f_BD), func_272(uParam1), uParam0->f_67D, uParam0->f_67A, iParam3 == func_271(uParam1), iParam3), 0x00000001, 0x00000001, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), unk_0xE7D606C557C86100((uParam0[iParam3 /*94*/])->f_28, (uParam0[iParam3 /*94*/])->f_28.f_1));
				unk_0x9E632F16E887F781(uParam0->f_BD.f_1D, 50f, 0x00000000);
				func_269(uParam1, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (unk_0xEB880D98B5988D0C())
			{
				unk_0x82E51BCA72537B6C(0x000000FA);
				if (uParam0->f_679 != 0x00000001)
				{
					unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
				func_269(uParam1, 0x00000004);
			}
			break;
		
		case 0x00000004:
			if (func_268(uParam0))
			{
				if (uParam0->f_679 == 0x00000001)
				{
					func_267(uParam0, 0x00000001);
					vVar13 = { func_270(&(uParam0->f_BD), 0x00000001, uParam0->f_67D, uParam0->f_67A, 0x00000001, (uParam0[iParam3 /*94*/])->f_1) };
					func_266(uParam0[iParam3 /*94*/], unk_0x36F2404464202779(0x00000001, uParam0->f_685, vVar13, unk_0xE7D606C557C86100(uParam0->f_67A, uParam0->f_67A.f_1), 0x00000000, 0x00000000));
					unk_0x93D47DFD0AE94949((uParam0[iParam3 /*94*/])->f_20, 0xFFFFFFFF);
					unk_0xD8F6A53F4799FAFE(func_265(uParam0[iParam3 /*94*/]), (unk_0xE7D606C557C86100(uParam0->f_67A, uParam0->f_67A.f_1) + 180f));
					vVar1 = { func_270(&(uParam0->f_BD), func_272(uParam1), uParam0->f_67D, uParam0->f_67A, iParam4 == func_271(uParam1), iParam4) };
					func_266(uParam0[iParam4 /*94*/], unk_0x36F2404464202779(0x00000001, uParam0->f_684, vVar1, unk_0xE7D606C557C86100(-uParam0->f_67A, -uParam0->f_67A.f_1), 0x00000000, 0x00000000));
					unk_0x93D47DFD0AE94949((uParam0[iParam4 /*94*/])->f_20, 0xFFFFFFFF);
					unk_0xD8F6A53F4799FAFE(func_265(uParam0[iParam4 /*94*/]), unk_0xE7D606C557C86100(-uParam0->f_67A, -uParam0->f_67A.f_1));
					vVar1 = { 0f, 0f, 0f };
					func_269(uParam1, 0x00000008);
					func_264(uParam1, 0x00000000);
					func_263(uParam1, iParam3);
					(uParam0[iParam3 /*94*/])->f_21 = unk_0x7707E48765093646(joaat("prop_tennis_rack_01b"), uParam0->f_BD.f_3[0x00000003 /*3*/], 0x00000000, 0x00000000, 0x00000000);
					unk_0x4A4806F9D471E491((uParam0[iParam3 /*94*/])->f_21, 0x00000000, 0x00000000);
					(uParam0[iParam4 /*94*/])->f_21 = unk_0x7707E48765093646(joaat("prop_tennis_rack_01b"), uParam0->f_BD.f_3[0x00000002 /*3*/], 0x00000000, 0x00000000, 0x00000000);
					func_262(uParam0, iParam3, iParam4, 0x00000000, 0x00000000);
					unk_0x4A4806F9D471E491((uParam0[iParam4 /*94*/])->f_21, 0x00000000, 0x00000000);
					unk_0x4A4806F9D471E491((uParam0[iParam3 /*94*/])->f_21, 0x00000001, 0x00000000);
					unk_0x69C149C0E43FAF13((uParam0[iParam3 /*94*/])->f_21, 0x00000001);
					unk_0x4A4806F9D471E491((uParam0[iParam4 /*94*/])->f_21, 0x00000001, 0x00000000);
					unk_0x69C149C0E43FAF13((uParam0[iParam4 /*94*/])->f_21, 0x00000001);
					func_261(func_265(uParam0[iParam3 /*94*/]), 0x00000001);
					func_261(func_265(uParam0[iParam4 /*94*/]), 0x00000001);
					if (uParam0->f_BD == 0x00000000)
					{
						func_259(uParam0);
						unk_0x64F9F278AB9DCA2C(func_265(uParam0[iParam4 /*94*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(func_265(uParam0[iParam4 /*94*/]), 0x00000002, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(func_265(uParam0[iParam4 /*94*/]), 0x00000003, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(func_265(uParam0[iParam4 /*94*/]), 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(func_265(uParam0[iParam4 /*94*/]), 0x00000005, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(func_265(uParam0[iParam4 /*94*/]), 0x00000007, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			break;
		
		case 0x00000008:
			func_258(&(uParam0->f_F7));
			if (func_257(*iParam2, 0x00000001))
			{
				func_262(uParam0, iParam3, iParam4, 0x00000000, 0x00000000);
				unk_0x4A4806F9D471E491((uParam0[iParam3 /*94*/])->f_21, 0x00000001, 0x00000000);
				unk_0x4A4806F9D471E491((uParam0[iParam4 /*94*/])->f_21, 0x00000001, 0x00000000);
				func_255(iParam2, 0x00000001);
			}
			bVar14 = (unk_0x1C0640BA9A7327B3() > func_254(uParam0[iParam3 /*94*/]) && unk_0x1C0640BA9A7327B3() > func_254(uParam0[iParam4 /*94*/]));
			if ((((uParam0->f_679 != 0x00000001 && !func_257(*iParam2, 0x00400000)) && bVar14) || ((uParam0->f_679 == 0x00000001 && func_253(uParam0) > func_252(uParam0, iParam3, iParam4)) && !bParam6)) || (uParam0->f_679 == 0x00000001 && bParam6))
			{
				func_236(uParam0[iParam3 /*94*/], uParam0, func_272(uParam1), iParam3, 0x00000000, 0x00000000);
				func_236(uParam0[iParam4 /*94*/], uParam0, func_272(uParam1), iParam4, 0x00000000, 0x00000000);
				func_235(&((uParam0[iParam3 /*94*/])->f_4), 0x00000000);
				func_235(&((uParam0[iParam4 /*94*/])->f_4), 0x00000000);
				func_234(uParam0[iParam3 /*94*/], 0x0000004B);
				func_234(uParam0[iParam4 /*94*/], 0x0000004B);
				func_233(uParam0[iParam3 /*94*/]);
				func_233(uParam0[iParam4 /*94*/]);
				func_287(&(uParam0->f_F7), 0x00000020);
				func_277(uParam0[iParam3 /*94*/], 0x00000400);
				func_277(uParam0[iParam4 /*94*/], 0x00000400);
				func_277(uParam0[iParam3 /*94*/], 0x00002000);
				func_277(uParam0[iParam4 /*94*/], 0x00002000);
				func_232(uParam0->f_679, 0x00000001);
				func_255(iParam2, 0x10000000);
				func_255(iParam2, 0x00000400);
				func_255(iParam2, 0x00000040);
				func_255(iParam2, 0x00000020);
				func_255(iParam2, 0x00000200);
				func_255(iParam2, 0x00000100);
				func_255(iParam2, 0x00000008);
				func_231(uParam0, 0x00000002);
				func_231(uParam0, 0x00000020);
				func_287(&(uParam0->f_F7), 0x00000040);
				if (uParam1->f_5 != 0x0000000A)
				{
					func_264(uParam1, 0x00000000);
				}
				func_230(uParam0[iParam3 /*94*/], 0x00000000);
				func_230(uParam0[iParam4 /*94*/], 0x00000000);
				if (uParam0->f_679 != 0x00000001 && !func_229(uParam0, 0x00000001))
				{
					func_267(uParam0, 0x00000001);
				}
				bVar15 = (uParam0->f_679 == 0x00000001 || func_229(uParam0, 0x00000001));
				if (!func_228(&((uParam0[func_271(uParam1) /*94*/])->f_4), 0x00000100))
				{
					func_227(uParam0[func_271(uParam1) /*94*/], uParam0, func_272(uParam1), func_271(uParam1), uParam0->f_679 != 0x00000001, func_257(*iParam2, 0x00000001), (uParam0->f_679 != 0x00000001 && !func_229(uParam0, 0x00000001)), bVar15, 0x00000000, 0x00000000);
				}
				if (!func_228(&((uParam0[(0x00000001 - func_271(uParam1)) /*94*/])->f_4), 0x00000100))
				{
					func_218(uParam0[(0x00000001 - func_271(uParam1)) /*94*/], uParam0, func_272(uParam1), (0x00000001 - func_271(uParam1)), uParam0->f_679 != 0x00000001, bVar15, 0x00000000, !func_228(&((uParam0[(0x00000001 - func_271(uParam1)) /*94*/])->f_4), 0x00000010), 0x00000000);
				}
				func_231(uParam0, 0x00000008);
				func_269(uParam1, 0x00000014);
				func_217(&((uParam0[iParam3 /*94*/])->f_4), 0x00000100);
				func_217(&((uParam0[iParam4 /*94*/])->f_4), 0x00000100);
				func_216(&(uParam0->f_F7));
				func_215(uParam0, 0x00000000);
				func_232(uParam0->f_679, 0x00000000);
			}
			else
			{
				func_232(uParam0->f_679, 0x00000000);
			}
			break;
		
		case 0x00000009:
			func_214(uParam0, iParam4, func_271(uParam1), uParam0->f_679, func_228(&((uParam0[iParam4 /*94*/])->f_4), 0x00000100));
			if (func_229(uParam0, 0x00000004))
			{
				func_231(uParam0, 0x00000004);
			}
			if (!func_257(*iParam2, 0x00400000))
			{
				func_236(uParam0[func_271(uParam1) /*94*/], uParam0, func_272(uParam1), func_271(uParam1), 0x00000001, 0x00000000);
				func_236(uParam0[(0x00000001 - func_271(uParam1)) /*94*/], uParam0, func_272(uParam1), (0x00000001 - func_271(uParam1)), 0x00000000, 0x00000000);
			}
			func_213(uParam0[(0x00000001 - func_271(uParam1)) /*94*/], &(uParam0->f_F7));
			if ((uParam0[func_271(uParam1) /*94*/])->f_1F != 0x00000004)
			{
				if (func_199(uParam0[func_271(uParam1) /*94*/], uParam0, func_272(uParam1), &uVar17, 0x00000000))
				{
					bVar16 = 0x00000001;
				}
			}
			else
			{
				sVar18 = func_194(func_195(uParam0[func_271(uParam1) /*94*/]), "mini@tennis", "mini@tennis@female");
				if (unk_0xB4ECF989E2C1DAC8(func_265(uParam0[func_271(uParam1) /*94*/]), sVar18, "serve", 0x00000003))
				{
					if (uParam0->f_679 == 0x00000001 && unk_0xC844350D5D58C99A(uParam0->f_F7))
					{
						fVar19 = unk_0x8CA9406E01C7EE58(func_265(uParam0[func_271(uParam1) /*94*/]), sVar18, "serve");
						if (fVar19 > 0.015f && fVar19 < (0.015f * 10f))
						{
							func_193(uParam0[func_271(uParam1) /*94*/], &(uParam0->f_F7));
						}
					}
				}
				if (!func_192(0x00000001))
				{
					func_191(0x00000001);
				}
				if (func_181(uParam0, uParam1, uParam0[func_271(uParam1) /*94*/], bParam6))
				{
					bVar16 = 0x00000001;
				}
			}
			if (bVar16)
			{
				func_179(iParam2, 0x00000080);
				func_269(uParam1, 0x0000000B);
				func_178(uParam1, func_271(uParam1));
				func_177(uParam0[iParam3 /*94*/], &(uParam0->f_F7), 0x00000001);
				func_177(uParam0[iParam4 /*94*/], &(uParam0->f_F7), 0x00000001);
			}
			break;
		
		case 0x0000000A:
			func_236(uParam0[func_271(uParam1) /*94*/], uParam0, func_272(uParam1), func_271(uParam1), 0x00000000, 0x00000000);
			func_236(uParam0[(0x00000001 - func_271(uParam1)) /*94*/], uParam0, func_272(uParam1), (0x00000001 - func_271(uParam1)), 0x00000000, 0x00000000);
			func_213(uParam0[func_271(uParam1) /*94*/], &(uParam0->f_F7));
			if (func_106(uParam0[(0x00000001 - func_271(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_176(uParam1), (0x00000001 - func_271(uParam1)), func_271(uParam1), func_272(uParam1), func_175(uParam1)))
			{
				func_178(uParam1, (0x00000001 - func_271(uParam1)));
				func_255(iParam2, 0x00000080);
			}
			if (unk_0xF4CCC8CB6DE7F1AE() > func_105(&(uParam0->f_F7)) && func_104(uParam0[(0x00000001 - func_271(uParam1)) /*94*/], 0x00000100))
			{
				func_103(uParam1, func_176(uParam1));
				func_269(uParam1, 0x0000000E);
				func_102(iParam2);
				func_255(iParam2, 0x00000080);
			}
			if (func_97(&(uParam0->f_F7), func_101(uParam0), &(uParam0->f_BD.f_1D)))
			{
				if (func_96(&(uParam0->f_BD), uParam0, (uParam0[func_271(uParam1) /*94*/])->f_1, func_272(uParam1)))
				{
					func_95(&(uParam0->f_F7));
					func_269(uParam1, 0x0000000C);
				}
				else
				{
					func_102(iParam2);
					if (func_94(uParam1) == 0x00000000)
					{
						if (iParam3 == func_271(uParam1))
						{
							func_93(iParam2, 0x08000000);
						}
						else
						{
							func_93(iParam2, 0x02000000);
						}
						func_264(uParam1, 0x00000001);
						func_269(uParam1, 0x00000008);
						func_179(iParam2, 0x00002000);
						func_179(iParam2, 0x00000020);
					}
					else
					{
						func_264(uParam1, 0x00000002);
						func_103(uParam1, (0x00000001 - func_271(uParam1)));
						func_269(uParam1, 0x0000000E);
					}
				}
			}
			else if (func_176(uParam1) != func_271(uParam1))
			{
				if (iParam3 == func_271(uParam1))
				{
					func_93(iParam2, 0x04000000);
				}
				else
				{
					func_93(iParam2, 0x01000000);
				}
				func_103(uParam1, func_271(uParam1));
				func_269(uParam1, 0x0000000E);
				func_102(iParam2);
			}
			vVar6 = { func_283(&(uParam0->f_F7)) };
			if (vVar6.z < (uParam0->f_BD.f_3[0x00000000 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_BD.f_1D, func_283(&(uParam0->f_F7))) < (26.75f * 26.75f))
			{
				func_103(uParam1, (0x00000001 - func_271(uParam1)));
				func_269(uParam1, 0x0000000E);
			}
			break;
		
		case 0x0000000B:
			iVar4 = (0x00000001 - func_271(uParam1));
			func_277(uParam0[iVar4 /*94*/], 0x00008000);
			vVar3 = { func_89(&(uParam0->f_BD), func_283(&(uParam0->f_F7)), uParam0->f_F7.f_A, uParam0->f_67A, func_92(&(uParam0->f_F7)), func_91(&(uParam0->f_F7)), func_90(&(uParam0->f_F7))) };
			func_88(uParam0[iVar4 /*94*/], &vVar3);
			vVar2 = { func_87((uParam0[iVar4 /*94*/])->f_25, &(uParam0->f_BD), func_283(&(uParam0->f_F7)), uParam0->f_F7.f_A, uParam0->f_67A, func_92(&(uParam0->f_F7)), func_91(&(uParam0->f_F7)), func_90(&(uParam0->f_F7)), &fVar5) };
			func_81(&((uParam0[iVar4 /*94*/])->f_4), func_82(uParam0[iVar4 /*94*/], &(uParam0->f_12F), vVar2, uParam0->f_BD.f_1D.f_2, fVar5));
			if (!func_228(&((uParam0[iVar4 /*94*/])->f_4), 0x00000040))
			{
				func_80(&((uParam0[iVar4 /*94*/])->f_4), 0x00000040);
			}
			if (bParam6)
			{
				func_79(&((uParam0[iVar4 /*94*/])->f_4), 0f);
			}
			else
			{
				func_78(&((uParam0[iVar4 /*94*/])->f_4));
				if ((!func_228(&((uParam0[iVar4 /*94*/])->f_4), 0x00000020) && func_286(&(uParam0->f_F7)) < 0x00000001) && !func_76(vVar3, uParam0->f_BD.f_3[0x00000000 /*3*/] + uParam0->f_67D * Vector(0.5f, 0.5f, 0.5f), uParam0->f_BD.f_3[0x00000003 /*3*/] + uParam0->f_67D * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam0->f_BD))))
				{
					if (func_75(uParam0[iVar4 /*94*/]) == 0x0000004B)
					{
						func_80(&((uParam0[iVar4 /*94*/])->f_4), 0x00000020);
					}
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_1F == 0x00000004)
			{
				func_235(&((uParam0[iVar4 /*94*/])->f_4), 0x00000006);
			}
			else
			{
				func_235(&((uParam0[iVar4 /*94*/])->f_4), 0x00000001);
			}
			func_235(&((uParam0[func_271(uParam1) /*94*/])->f_4), 0x00000005);
			func_269(uParam1, 0x0000000A);
			if ((uParam0[iVar4 /*94*/])->f_1F != 0x00000004)
			{
				*uParam5 = 0f;
				uParam0->f_F7.f_1 = 0x00000000;
				func_179(iParam2, 0x20000000);
			}
			if ((uParam0[(0x00000001 - func_176(uParam1)) /*94*/])->f_1 == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else if ((uParam0[(0x00000001 - func_176(uParam1)) /*94*/])->f_1 == 0x00000001)
			{
				iVar0 = 0x00000002;
			}
			func_71(uParam0[(0x00000001 - func_176(uParam1)) /*94*/], uParam0->f_BD.f_3[iVar0 /*3*/], uParam0->f_BD.f_10[iVar0 /*3*/]);
			func_66(uParam0[(0x00000001 - func_176(uParam1)) /*94*/], func_272(uParam1));
			break;
		
		case 0x0000000C:
			vVar6 = { func_283(&(uParam0->f_F7)) };
			if (!func_64(uParam0, func_176(uParam1)))
			{
				if (func_286(&(uParam0->f_F7)) > 0x00000001)
				{
					func_103(uParam1, func_176(uParam1));
					func_102(iParam2);
				}
				else
				{
					func_103(uParam1, (0x00000001 - func_176(uParam1)));
					func_102(iParam2);
					if (func_63(uParam1) != iParam3 && uParam0->f_679 == 0x00000001)
					{
						Global_1B416.f_4E30.f_A++;
						func_60(0x0000000A, 0x00000001);
					}
					if (func_59(uParam0->f_F7.f_D, &(uParam0->f_BD), &(uParam0->f_67A), &(uParam0->f_67D)))
					{
						func_58(uParam0[(0x00000001 - func_176(uParam1)) /*94*/], 0x00000002);
					}
				}
				func_269(uParam1, 0x0000000E);
			}
			else if (vVar6.z < (uParam0->f_BD.f_3[0x00000000 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_BD.f_1D, func_283(&(uParam0->f_F7))) < (26.75f * 26.75f))
			{
				func_103(uParam1, (0x00000001 - func_176(uParam1)));
				func_269(uParam1, 0x0000000E);
				if (func_63(uParam1) != iParam3 && uParam0->f_679 != 0x00000001)
				{
					Global_1B416.f_4E30.f_A++;
					func_60(0x0000000A, 0x00000001);
				}
			}
			func_213(uParam0[func_176(uParam1) /*94*/], &(uParam0->f_F7));
			if (func_106(uParam0[(0x00000001 - func_176(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_176(uParam1), (0x00000001 - func_176(uParam1)), func_271(uParam1), func_272(uParam1), func_175(uParam1)))
			{
				func_258(&(uParam0->f_F7));
				func_178(uParam1, (0x00000001 - func_176(uParam1)));
				if ((uParam0[func_176(uParam1) /*94*/])->f_1F == 0x00000004)
				{
					func_235(&((uParam0[func_176(uParam1) /*94*/])->f_4), 0x00000005);
					func_57(uParam0[func_176(uParam1) /*94*/], &(uParam0->f_BD), uParam0->f_67D);
				}
				else
				{
					func_255(iParam2, 0x20000000);
				}
				func_255(iParam2, 0x00000080);
				func_269(uParam1, 0x0000000D);
				func_56(uParam0[iParam3 /*94*/]);
				func_56(uParam0[iParam4 /*94*/]);
			}
			else if (unk_0xF4CCC8CB6DE7F1AE() > func_105(&(uParam0->f_F7)) && func_104(uParam0[(0x00000001 - func_176(uParam1)) /*94*/], 0x00000100))
			{
				func_103(uParam1, func_176(uParam1));
				func_269(uParam1, 0x0000000E);
				func_102(iParam2);
				func_255(iParam2, 0x00000080);
			}
			func_236(uParam0[iParam3 /*94*/], uParam0, func_272(uParam1), iParam3, 0x00000000, 0x00000000);
			func_236(uParam0[iParam4 /*94*/], uParam0, func_272(uParam1), iParam4, 0x00000000, 0x00000000);
			if (uParam0->f_679 != 0x00000001)
			{
				func_53(uParam0[iParam3 /*94*/], &(uParam0->f_BD));
			}
			if ((func_228(&((uParam0[iParam3 /*94*/])->f_4), 0x00000010) && !func_228(&((uParam0[iParam4 /*94*/])->f_4), 0x00000010)) && !func_228(&((uParam0[iParam4 /*94*/])->f_4), 0x00000100))
			{
				unk_0x93D47DFD0AE94949(func_265(uParam0[iParam4 /*94*/]), 0xFFFFFFFF);
			}
			break;
		
		case 0x0000000D:
			iVar4 = (0x00000001 - func_176(uParam1));
			func_277(uParam0[iVar4 /*94*/], 0x00008000);
			vVar20 = { func_89(&(uParam0->f_BD), func_283(&(uParam0->f_F7)), uParam0->f_F7.f_A, uParam0->f_67A, func_92(&(uParam0->f_F7)), func_91(&(uParam0->f_F7)), func_90(&(uParam0->f_F7))) };
			func_88(uParam0[iVar4 /*94*/], &vVar20);
			if (!func_228(&((uParam0[iVar4 /*94*/])->f_4), 0x00000040))
			{
				func_80(&((uParam0[iVar4 /*94*/])->f_4), 0x00000040);
			}
			if (func_52(uParam0[func_176(uParam1) /*94*/]) == 0x00000002)
			{
				func_81(&((uParam0[iVar4 /*94*/])->f_4), vVar20);
			}
			else
			{
				vVar2 = { func_87((uParam0[iVar4 /*94*/])->f_25, &(uParam0->f_BD), func_283(&(uParam0->f_F7)), uParam0->f_F7.f_A, uParam0->f_67A, func_92(&(uParam0->f_F7)), func_91(&(uParam0->f_F7)), func_90(&(uParam0->f_F7)), &fVar5) };
				func_81(&((uParam0[iVar4 /*94*/])->f_4), func_82(uParam0[iVar4 /*94*/], &(uParam0->f_12F), vVar2, uParam0->f_BD.f_1D.f_2, fVar5));
			}
			if ((!func_228(&((uParam0[iVar4 /*94*/])->f_4), 0x00000020) && func_286(&(uParam0->f_F7)) < 0x00000001) && !func_76(vVar20, uParam0->f_BD.f_3[0x00000000 /*3*/] + uParam0->f_67D * Vector(0.5f, 0.5f, 0.5f), uParam0->f_BD.f_3[0x00000003 /*3*/] + uParam0->f_67D * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam0->f_BD))))
			{
				if (func_75(uParam0[iVar4 /*94*/]) == 0x0000004B)
				{
					func_80(&((uParam0[iVar4 /*94*/])->f_4), 0x00000020);
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_1F == 0x00000004)
			{
				if ((uParam0[iVar4 /*94*/])->f_1 == 0x00000000)
				{
					iVar0 = 0x00000000;
				}
				else if ((uParam0[iVar4 /*94*/])->f_1 == 0x00000001)
				{
					iVar0 = 0x00000002;
				}
				func_71(uParam0[iVar4 /*94*/], uParam0->f_BD.f_3[iVar0 /*3*/], uParam0->f_BD.f_10[iVar0 /*3*/]);
			}
			else
			{
				*uParam5 = 0f;
				uParam0->f_F7.f_1 = 0x00000000;
				func_179(iParam2, 0x20000000);
			}
			func_217(&((uParam0[iVar4 /*94*/])->f_4), 0x00000004);
			func_235(&((uParam0[iVar4 /*94*/])->f_4), 0x00000001);
			func_269(uParam1, 0x0000000C);
			break;
		
		case 0x0000000E:
			func_177(uParam0[iParam3 /*94*/], &(uParam0->f_F7), 0x00000000);
			func_177(uParam0[iParam4 /*94*/], &(uParam0->f_F7), 0x00000000);
			func_235(&((uParam0[iParam3 /*94*/])->f_4), 0x00000000);
			func_235(&((uParam0[iParam4 /*94*/])->f_4), 0x00000000);
			func_51(&(uParam1->f_7[func_63(uParam1) /*8*/]), iParam2);
			if (uParam1->f_7[func_63(uParam1) /*8*/] >= func_50(func_175(uParam1), 0x00000007, 0x00000004) && (uParam1->f_7[func_63(uParam1) /*8*/] - uParam1->f_7[(0x00000001 - func_63(uParam1)) /*8*/]) >= 0x00000002)
			{
				func_48(&(uParam1->f_7), func_49(uParam1), func_63(uParam1), (0x00000001 - func_63(uParam1)), iParam2, func_175(uParam1));
				func_269(uParam1, 0x00000012);
				func_179(iParam2, 0x00800000);
				func_47(uParam1, 0x00000000);
				if (uParam0->f_679 == 0x00000001)
				{
					func_215(uParam0, 0x00000000);
				}
				if (func_63(uParam1) == iParam3)
				{
					func_179(iParam2, 0x00100000);
					func_93(iParam2, 0x04000000);
					if ((uParam0[iParam3 /*94*/])->f_1F != 0x00000004)
					{
						func_34(0x00000002, 0x00000003);
						func_179(iParam2, 0x00000100);
					}
					if (func_33(&((uParam0[iParam4 /*94*/])->f_4)) == 0x00000002)
					{
						func_32(&((uParam0[iParam4 /*94*/])->f_4));
					}
				}
				else
				{
					func_179(iParam2, 0x00200000);
					func_93(iParam2, 0x01000000);
					if ((uParam0[iParam3 /*94*/])->f_1F != 0x00000004)
					{
						func_179(iParam2, 0x00000200);
					}
				}
			}
			else
			{
				iVar23 = func_63(uParam1);
				iVar24 = (0x00000001 - iVar23);
				iVar22 = func_49(uParam1);
				iVar21 = func_50(func_175(uParam1), 0x00000006, 0x00000003);
				if (func_175(uParam1))
				{
					func_31(uParam0, unk_0x1C0640BA9A7327B3() + 1500);
				}
				if (uParam1->f_7[iVar23 /*8*/] >= iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/])
				{
					func_179(iParam2, 0x00010000);
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] > iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/] + 1)
				{
					if (((((func_29(uParam1) == 0x00000000 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 0x00000005) && (uParam1->f_7[iVar23 /*8*/].f_1[iVar22] + 1 - uParam1->f_7[iVar24 /*8*/].f_1[iVar22]) >= 0x00000002) || func_29(uParam1) == 0x00000001) || (func_29(uParam1) == 0x00000002 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 0x00000001)) || (func_29(uParam1) == 0x00000003 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 0x00000002))
					{
						func_179(iParam2, 0x00008000);
					}
					else
					{
						func_179(iParam2, 0x00020000);
					}
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] == iVar21 && uParam1->f_7[iVar24 /*8*/] < iVar21)
				{
					func_179(iParam2, 0x00008000);
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_5 == 0x0000000A)
				{
					if (uParam1->f_2 != func_271(uParam1))
					{
						func_179(iParam2, 0x00002000);
						func_179(iParam2, 0x00000020);
						if (func_63(uParam1) == iParam3)
						{
							func_93(iParam2, 0x02000000);
						}
						else
						{
							func_93(iParam2, 0x08000000);
						}
					}
					else if (iVar23 == iParam3)
					{
						func_93(iParam2, 0x04000000);
						func_179(iParam2, 0x00040000);
						func_179(iParam2, 0x00000040);
					}
					else
					{
						func_93(iParam2, 0x01000000);
						func_179(iParam2, 0x00000400);
						func_179(iParam2, 0x00080000);
					}
				}
				else if (uParam1->f_5 == 0x0000000C)
				{
					if (iVar23 == iParam3)
					{
						func_179(iParam2, 0x00040000);
					}
					else
					{
						func_179(iParam2, 0x00080000);
					}
					func_30(iVar23, iParam3, uParam0, iParam2);
				}
				if (uParam1->f_5 == 0x0000000A && uParam1->f_2 != func_271(uParam1))
				{
					func_255(iParam2, 0x00000080);
					if (!func_257(*iParam2, 0x00002000))
					{
					}
				}
				if (func_175(uParam1))
				{
					if (unk_0xEAE0D21A50E6C7F4((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]), 0x00000000))
					{
						func_269(uParam1, 0x00000012);
					}
					else if (((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]) % 0x00000006) == 0x00000000)
					{
						func_269(uParam1, 0x00000011);
					}
					else
					{
						func_28(uParam1, (0x00000001 - func_272(uParam1)));
						func_269(uParam1, 0x00000008);
					}
				}
				else
				{
					func_28(uParam1, (0x00000001 - func_272(uParam1)));
					func_269(uParam1, 0x00000008);
					if (uParam0->f_679 == 0x00000001)
					{
						func_215(uParam0, 0x00000000);
					}
				}
			}
			if (func_228(&((uParam0[iParam3 /*94*/])->f_4), 0x00000010) || func_228(&((uParam0[iParam4 /*94*/])->f_4), 0x00000010))
			{
				func_179(iParam2, 0x10000000);
			}
			func_233(uParam0[iParam3 /*94*/]);
			func_233(uParam0[iParam4 /*94*/]);
			break;
		
		case 0x00000014:
			if (func_25(uParam0, iParam3, iParam4, func_271(uParam1), uParam0->f_679, func_229(uParam0, 0x00000001), iVar12))
			{
				func_232(uParam0->f_679, 0x00000001);
				func_269(uParam1, 0x00000009);
				func_24(&((uParam0[iParam3 /*94*/])->f_4));
				func_24(&((uParam0[iParam4 /*94*/])->f_4));
				if (func_229(uParam0, 0x00000001))
				{
					func_231(uParam0, 0x00000001);
				}
				if (func_229(uParam0, 0x00000100))
				{
					func_231(uParam0, 0x00000100);
				}
			}
			if ((func_229(uParam0, 0x00000001) && !func_229(uParam0, 0x00000004)) && iVar11 >= 0x00000002)
			{
				func_23(uParam0, 0x00000004);
				func_22(uParam0, unk_0x1C0640BA9A7327B3() + 580);
			}
			else if (((unk_0x1C0640BA9A7327B3() > func_21(uParam0) && func_229(uParam0, 0x00000004)) && unk_0xC844350D5D58C99A(uParam0->f_F7)) && !unk_0xD59B17D2DFF98E26(uParam0->f_F7))
			{
				func_267(uParam0, 0x00000001);
				func_193(uParam0[func_271(uParam1) /*94*/], &(uParam0->f_F7));
				func_287(&(uParam0->f_F7), 0x00000004);
			}
			if (func_271(uParam1) != iParam3 && unk_0xD1960163A3042274(func_265(uParam0[iParam3 /*94*/]), 0x0E763797) == 0x00000007)
			{
				func_232(uParam0->f_679, 0x00000001);
				func_236(uParam0[iParam3 /*94*/], uParam0, func_272(uParam1), iParam3, 0x00000000, 0x00000000);
				func_20(0x00000014, uParam0[iParam3 /*94*/], *iParam2, 0x00000001);
				func_213(uParam0[iParam3 /*94*/], &(uParam0->f_F7));
			}
			break;
		
		case 0x00000012:
			if (!func_175(uParam1))
			{
				if (uParam0->f_679 != 0x00000001 && (((((uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] > 0x00000005 && (uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] - uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)]) >= 0x00000002) && uParam1->f_7[iParam3 /*8*/] >= 0x00000003) || ((uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] > 0x00000005 && (uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] - uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)]) >= 0x00000002) && uParam1->f_7[iParam4 /*8*/] >= 0x00000003)) || uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] == 0x00000007) || uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] == 0x00000007))
				{
					if (func_19(uParam1) > 0x00000001)
					{
						func_18(&(uParam1->f_7), &(uParam1->f_1E), iParam2, func_19(uParam1));
					}
				}
				else if ((uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] == 0x00000006 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] == 0x00000006) && uParam0->f_679 != 0x00000001)
				{
					func_47(uParam1, 0x00000001);
					func_179(iParam2, 0x00000004);
					func_31(uParam0, unk_0x1C0640BA9A7327B3() + 1500);
				}
				if ((uParam0->f_679 != 0x00000001 && !func_175(uParam1)) && ((((((((func_29(uParam1) == 0x00000000 && uParam1->f_7[iParam3 /*8*/].f_7 > (func_19(uParam1) / 0x00000002)) || (func_29(uParam1) == 0x00000000 && uParam1->f_7[iParam4 /*8*/].f_7 > (func_19(uParam1) / 0x00000002))) || (func_29(uParam1) == 0x00000001 && uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] >= 0x00000001)) || (func_29(uParam1) == 0x00000001 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] >= 0x00000001)) || (func_29(uParam1) == 0x00000002 && uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] >= 0x00000002)) || (func_29(uParam1) == 0x00000002 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] >= 0x00000002)) || (func_29(uParam1) == 0x00000003 && uParam1->f_7[iParam3 /*8*/].f_1[func_49(uParam1)] >= 0x00000003)) || (func_29(uParam1) == 0x00000003 && uParam1->f_7[iParam4 /*8*/].f_1[func_49(uParam1)] >= 0x00000003)))
				{
					if (func_19(uParam1) > 0x00000001)
					{
						uParam1->f_1E = (uParam1->f_1E - 0x00000001);
					}
					func_261(unk_0x16F2683693E537C9(), 0x00000000);
					func_269(uParam1, 0x00000016);
					func_179(iParam2, 0x00000002);
				}
				else
				{
					func_17(&(uParam1->f_7), iParam2);
					if (func_271(uParam1) == iParam3)
					{
						func_263(uParam1, iParam4);
					}
					else if (func_271(uParam1) == iParam4)
					{
						func_263(uParam1, iParam3);
					}
					func_269(uParam1, 0x00000008);
					func_28(uParam1, 0x00000001);
					if (func_16(&(uParam1->f_7), func_49(uParam1)) && uParam0->f_679 != 0x00000001)
					{
						func_269(uParam1, 0x00000011);
					}
				}
			}
			else if (func_175(uParam1))
			{
				if (func_271(uParam1) == iParam3)
				{
					func_263(uParam1, iParam4);
				}
				else if (func_271(uParam1) == iParam4)
				{
					func_263(uParam1, iParam3);
				}
				func_269(uParam1, 0x00000008);
				func_28(uParam1, 0x00000001);
			}
			break;
		
		case 0x00000010:
			func_236(uParam0[iParam4 /*94*/], uParam0, func_272(uParam1), iParam4, 0x00000000, 0x00000000);
			func_236(uParam0[iParam3 /*94*/], uParam0, func_272(uParam1), iParam3, 0x00000000, 0x00000000);
			if ((uParam0->f_679 != 0x00000001 && !func_257(*iParam2, 0x00400000)) || uParam0->f_679 == 0x00000001)
			{
				func_269(uParam1, 0x00000008);
			}
			break;
		
		case 0x0000001C:
			break;
	}
	if ((!func_257(*iParam2, 0x00400000) && func_305(uParam1) > 0x00000006) && func_305(uParam1) < 0x00000015)
	{
		func_4(uParam0[iParam3 /*94*/], &(uParam0->f_217), uParam0->f_679);
		func_4(uParam0[iParam4 /*94*/], &(uParam0->f_217), uParam0->f_679);
	}
	func_3(uParam0);
}

void func_3(var uParam0)
{
	if (unk_0xC844350D5D58C99A((uParam0[0x00000000 /*94*/])->f_21))
	{
		(uParam0[0x00000000 /*94*/])->f_2E = { unk_0x68F4C0EC296D3901((uParam0[0x00000000 /*94*/])->f_21, 0x00000001) };
	}
	if (unk_0xC844350D5D58C99A((uParam0[0x00000001 /*94*/])->f_21))
	{
		(uParam0[0x00000001 /*94*/])->f_2E = { unk_0x68F4C0EC296D3901((uParam0[0x00000001 /*94*/])->f_21, 0x00000001) };
	}
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	char* sVar7;
	
	iVar0 = func_265(uParam0);
	iVar6 = func_75(uParam0);
	if (!unk_0xEB6A8945D1AC98A1(iVar0))
	{
		sVar7 = func_194(func_195(uParam0), "mini@tennis", "mini@tennis@female");
		if (iVar6 == 0x0000004B)
		{
			if (func_104(uParam0, 0x00000020))
			{
				if (unk_0xB4ECF989E2C1DAC8(iVar0, sVar7, "idle", 0x00000003))
				{
					unk_0xFB131B855F2FD560(iVar0, sVar7, "idle", 0xC1000000);
				}
				func_277(uParam0, 0x00000020);
			}
			if (!func_104(uParam0, 0x00000080) && !func_228(&(uParam0->f_4), 0x00000004))
			{
				if (!unk_0x001220CC1F110806(func_265(uParam0)))
				{
					func_261(func_265(uParam0), 0x00000001);
				}
				func_58(uParam0, 0x00000080);
			}
		}
		else if (iVar6 == 0x0000004A)
		{
			fVar1 = 0f;
			fVar4 = 0.567f;
			fVar2 = 0.72f;
			fVar3 = 0.855f;
			sVar5 = "serve";
			if (!unk_0xB4ECF989E2C1DAC8(iVar0, sVar7, sVar5, 0x00000003))
			{
				unk_0xC6EB89C59F2AF6B8(iVar0, sVar7, sVar5, 8f, -8f, 0xFFFFFFFF, 0x00000000, fVar1, 0x00000000, 0x00000000, 0x00000000);
				func_230(uParam0, 0x00000007);
			}
			else if (unk_0x8CA9406E01C7EE58(iVar0, sVar7, sVar5) > fVar3)
			{
				unk_0xFB131B855F2FD560(iVar0, sVar7, sVar5, 0xC1000000);
				func_234(uParam0, 0x0000004B);
				if (func_104(uParam0, 0x00000004))
				{
					func_277(uParam0, 0x00000004);
				}
				if (!func_104(uParam0, 0x00000080))
				{
					func_261(func_265(uParam0), 0x00000001);
					func_58(uParam0, 0x00000080);
				}
			}
			else if (unk_0x8CA9406E01C7EE58(iVar0, sVar7, sVar5) >= fVar2)
			{
				if (!func_104(uParam0, 0x00000004))
				{
					func_58(uParam0, 0x00000004);
					func_230(uParam0, 0x00000006);
				}
			}
			else if (unk_0x8CA9406E01C7EE58(iVar0, sVar7, sVar5) > fVar4)
			{
				if (func_104(uParam0, 0x00000004))
				{
					func_277(uParam0, 0x00000004);
				}
			}
		}
		else
		{
			func_5(uParam0, iVar0, uParam1[iVar6 /*12*/], func_15(uParam0), uParam2);
		}
	}
}

void func_5(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	bool bVar0;
	char* sVar1;
	struct<8> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	bVar0 = func_195(uParam0);
	sVar1 = func_194(bVar0, "mini@tennis", "mini@tennis@female");
	Var2 = { uParam2->f_4 };
	iVar3 = func_14(uParam2->f_3);
	fVar4 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(iVar3));
	fVar5 = *uParam2;
	if (func_13(func_75(uParam0), iParam3))
	{
		fVar5 = (*uParam2 + fVar4);
		func_12(uParam0, 1f);
	}
	else
	{
		fVar6 = (uParam2->f_1 - fVar4);
		fVar7 = (uParam2->f_1 / fVar6);
		fVar7 = func_11(fVar7, 0.5f, 1.5f);
		func_12(uParam0, fVar7);
	}
	if (fVar5 > uParam2->f_1)
	{
		fVar5 = uParam2->f_1;
	}
	if (!func_104(uParam0, 0x00000400))
	{
		if (!unk_0x001220CC1F110806(func_265(uParam0)))
		{
			return;
		}
		unk_0xA3BF0AA5A2608191(iParam1);
		if (func_75(uParam0) == 0x00000048 || func_75(uParam0) == 0x00000049)
		{
			if (func_10(uParam0) != 0x00000000)
			{
				if (func_75(uParam0) == 0x00000048)
				{
					iVar8 = 0x00000000;
				}
				else if (func_75(uParam0) == 0x00000049)
				{
					iVar8 = 0x00000001;
				}
				unk_0x34247A39A3D61421(iParam1, iVar8, func_9(uParam0), func_8(uParam0), 0x3F800000, 0x00000000);
				func_7(uParam0, unk_0x1C0640BA9A7327B3() + 2871);
			}
		}
		else
		{
			unk_0x39C50C474849547D(iParam1, sVar1, &Var2, fVar5, func_6(uParam0), 0x00000000);
		}
		func_58(uParam0, 0x00000400);
		if (uParam0->f_1F != 0x00000004)
		{
			Global_1B416.f_4E30.f_C++;
		}
	}
	else if (unk_0x02689472521FD800(iParam1) || unk_0xFEE406240FD2B150(iParam1))
	{
		func_277(uParam0, 0x00000400);
		unk_0xA3BF0AA5A2608191(iParam1);
		func_234(uParam0, 0x0000004B);
		func_12(uParam0, 1f);
		if (func_104(uParam0, 0x00010000))
		{
			func_277(uParam0, 0x00010000);
		}
	}
}

var func_6(var uParam0)
{
	return uParam0->f_43;
}

void func_7(var uParam0, var uParam1)
{
	uParam0->f_4D = uParam1;
}

var func_8(var uParam0)
{
	return uParam0->f_46;
}

var func_9(var uParam0)
{
	return uParam0->f_47;
}

int func_10(var uParam0)
{
	return uParam0->f_34;
}

float func_11(float fParam0, float fParam1, float fParam2)
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

void func_12(var uParam0, float fParam1)
{
	uParam0->f_43 = fParam1;
}

int func_13(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000036)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000038)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000037)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000039)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000003B)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000003A)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_14(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) * 0.03333334f);
	fVar1 = (fVar0 / unk_0x6117725E0134737F());
	return SYSTEM::ROUND(fVar1);
}

int func_15(var uParam0)
{
	return uParam0->f_35;
}

int func_16(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < iParam1 + 1)
	{
		iVar0 = (iVar0 + (uParam0[0x00000000 /*8*/])->f_1[iVar1]);
		iVar0 = (iVar0 + (uParam0[0x00000001 /*8*/])->f_1[iVar1]);
		iVar1++;
	}
	if ((iVar0 % 0x00000002) == 0x00000000)
	{
		return 0x00000000;
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_17(var uParam0, var uParam1)
{
	(*uParam0)[0x00000000 /*8*/] = 0x00000000;
	(*uParam0)[0x00000001 /*8*/] = 0x00000000;
	func_179(uParam1, 0x00000002);
}

void func_18(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam1 + 1 < iParam3)
	{
		*uParam1++;
		(*uParam0)[0x00000000 /*8*/] = 0x00000000;
		(*uParam0)[0x00000001 /*8*/] = 0x00000000;
		(uParam0[0x00000000 /*8*/])->f_1[*uParam1] = 0x00000000;
		(uParam0[0x00000001 /*8*/])->f_1[*uParam1] = 0x00000000;
	}
	func_179(uParam2, 0x00000002);
}

int func_19(var uParam0)
{
	return uParam0->f_1C;
}

void func_20(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if ((((iParam0 > 0x00000006 && iParam0 < 0x00000016) && !func_257(uParam2, 0x00400000)) && iParam0 != 0x00000010) || iParam3)
	{
		if (unk_0xC844350D5D58C99A(func_265(uParam1)))
		{
			if (unk_0x001220CC1F110806(func_265(uParam1)))
			{
				unk_0x9DD8618CA5BF832D(func_265(uParam1), 0x00000045, 0x00000001);
			}
			unk_0x9DD8618CA5BF832D(func_265(uParam1), 0x00000066, 0x00000001);
		}
	}
}

int func_21(var uParam0)
{
	return uParam0->f_68A;
}

void func_22(var uParam0, var uParam1)
{
	uParam0->f_68A = uParam1;
}

void func_23(var uParam0, int iParam1)
{
	uParam0->f_689 = (uParam0->f_689 || iParam1);
}

void func_24(var uParam0)
{
	uParam0->f_19 = 0x00000000;
}

int func_25(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 0x00000001;
	iVar1 = func_265(uParam0[iParam1 /*94*/]);
	iVar2 = func_265(uParam0[iParam2 /*94*/]);
	if (!unk_0xEB6A8945D1AC98A1(iVar1) && unk_0xD1960163A3042274(iVar1, 0x0E763797) != 0x00000007)
	{
		if (unk_0xB4ECF989E2C1DAC8(iVar1, "mini@tennis", "idle_2_serve", 0x00000003))
		{
		}
		iVar0 = 0x00000000;
		if (unk_0x001220CC1F110806(iVar1))
		{
			func_58(uParam0[iParam1 /*94*/], 0x00004000);
		}
	}
	else if ((!unk_0xEB6A8945D1AC98A1(iVar1) && (bParam5 || iParam4 == 0x00000001)) && !func_104(uParam0[iParam1 /*94*/], 0x00002000))
	{
		if (iParam1 == iParam3)
		{
			func_27(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_261(iVar1, 0x00000001);
		unk_0xF895E10BF4C72645(iVar1, 0x00000000, 0x00000000);
		func_58(uParam0[iParam1 /*94*/], 0x00002000);
	}
	else if (func_104(uParam0[iParam1 /*94*/], 0x00002000) && iParam1 == iParam3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iVar1) && unk_0x43AB9B3158C51226(iVar1))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(iVar1), "Intro") && unk_0xB4E9220C59EBC663(iVar1))
			{
				unk_0x77CE1D0498EE13D6(iVar1, "running");
			}
		}
	}
	bVar3 = (((iParam2 != iParam3 && iParam6 >= (func_26(uParam0[iParam2 /*94*/]) - 0x00000001)) && iVar0) && 0x00000001);
	if (!unk_0xEB6A8945D1AC98A1(iVar2) && (unk_0xD1960163A3042274(iVar2, 0x0E763797) != 0x00000007 && !bVar3))
	{
		if (unk_0xB4ECF989E2C1DAC8(iVar2, "mini@tennis", "idle_2_serve", 0x00000003))
		{
		}
		if (unk_0x001220CC1F110806(iVar2))
		{
			func_58(uParam0[iParam2 /*94*/], 0x00004000);
		}
		iVar0 = 0x00000000;
	}
	else if (((!unk_0xEB6A8945D1AC98A1(iVar2) && ((bParam5 || iParam4 == 0x00000004) || iParam4 == 0x00000001)) && !func_104(uParam0[iParam2 /*94*/], 0x00002000)) && unk_0xD1960163A3042274(iVar2, 0x0E763797) == 0x00000007)
	{
		if (iParam2 == iParam3)
		{
			func_27(uParam0[iParam2 /*94*/], "TennisServeSet", 0f);
		}
		func_261(iVar2, 0x00000001);
		unk_0xF895E10BF4C72645(iVar2, 0x00000000, 0x00000000);
		func_58(uParam0[iParam2 /*94*/], 0x00002000);
	}
	else if (func_104(uParam0[iParam2 /*94*/], 0x00002000) && iParam2 == iParam3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iVar2) && unk_0x43AB9B3158C51226(iVar2))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(iVar2), "Intro") && unk_0xB4E9220C59EBC663(iVar2))
			{
				unk_0x77CE1D0498EE13D6(iVar2, "running");
			}
		}
	}
	return iVar0;
}

int func_26(var uParam0)
{
	return uParam0->f_37;
}

void func_27(var uParam0, char* sParam1, float fParam2)
{
	if (!((!unk_0xEB6A8945D1AC98A1(func_265(uParam0)) && unk_0x43AB9B3158C51226(func_265(uParam0))) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_265(uParam0)), "running")))
	{
		unk_0x312838E3386842B6(func_265(uParam0), sParam1, fParam2, 0x00000000, "mini@tennis", 0x00000004);
	}
}

void func_28(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_29(var uParam0)
{
	return uParam0->f_18;
}

void func_30(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam0 == iParam1)
	{
		if (func_228(&((uParam2[iParam1 /*94*/])->f_4), 0x00000010))
		{
			func_93(uParam3, 0x02000000);
			func_179(uParam3, 0x00000020);
		}
		else
		{
			func_93(uParam3, 0x04000000);
			func_179(uParam3, 0x00000040);
		}
	}
	else if (iParam0 != iParam1)
	{
		if (func_104(uParam2[iParam1 /*94*/], 0x00000002) || func_228(&((uParam2[iParam0 /*94*/])->f_4), 0x00000010))
		{
			func_93(uParam3, 0x08000000);
		}
		else if (!func_104(uParam2[iParam1 /*94*/], 0x00000002))
		{
			func_93(uParam3, 0x01000000);
		}
		func_179(uParam3, 0x00000400);
	}
}

void func_31(var uParam0, var uParam1)
{
	uParam0->f_68E = uParam1;
}

void func_32(var uParam0)
{
	uParam0->f_17 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
}

int func_33(var uParam0)
{
	return uParam0->f_14;
}

void func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_40();
	func_35(iVar0, iParam0, iParam1);
}

void func_35(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_39(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_36(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_37(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1407E9;
}

int func_39(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_37(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_40()
{
	func_41();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_41()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_45(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_44(unk_0x16F2683693E537C9());
			if (func_43(iVar0) && (!func_42(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_43(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_42(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_43(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_45(int iParam0)
{
	if (func_43(iParam0))
	{
		return func_46(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_46(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_47(var uParam0, int iParam1)
{
	uParam0->f_1A = iParam1;
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	if ((uParam0[iParam2 /*8*/])->f_1[iParam1] == 0xFFFFFFFF)
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1] = 0x00000001;
	}
	else
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1]++;
	}
	if (((((uParam0[iParam2 /*8*/])->f_1[iParam1] > 0x00000005 && ((uParam0[iParam2 /*8*/])->f_1[iParam1] - (uParam0[iParam3 /*8*/])->f_1[iParam1]) >= 0x00000002) && (*uParam0)[iParam2 /*8*/] >= 0x00000003) && !bParam5) || bParam5)
	{
		(uParam0[iParam2 /*8*/])->f_7++;
	}
	func_179(uParam4, 0x00000002);
}

int func_49(var uParam0)
{
	return uParam0->f_1E;
}

int func_50(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_51(var uParam0, var uParam1)
{
	*uParam0++;
	func_179(uParam1, 0x00000002);
}

int func_52(var uParam0)
{
	return uParam0->f_22;
}

void func_53(var uParam0, var uParam1)
{
	vector3 vVar0;
	
	if (!func_104(uParam0, 0x00000800) && func_55(uParam0->f_25, uParam1))
	{
		if (unk_0xD1960163A3042274(func_265(uParam0), 0x2A89B8A7) != 0x00000001 && unk_0xD1960163A3042274(func_265(uParam0), 0x0E763797) != 0x00000001)
		{
			vVar0 = { uParam0->f_25 - uParam1->f_1D * Vector(0.93f, 0.93f, 0.93f) };
			unk_0x96167B03C5A77156(func_265(uParam0), uParam1->f_1D + vVar0, 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
			func_58(uParam0, 0x00000800);
			func_54("FAR_FROM_COURT", 0xFFFFFFFF);
		}
	}
	else if (func_104(uParam0, 0x00000800) && unk_0xD1960163A3042274(func_265(uParam0), 0x2A89B8A7) != 0x00000001)
	{
		func_277(uParam0, 0x00000800);
	}
}

void func_54(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_55(vector3 vParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	switch (*uParam1)
	{
		case 0x00000007:
			fVar0 = 2.031f;
			fVar1 = 2.16f;
			break;
		
		case 0x00000001:
			fVar0 = 6.955f;
			fVar1 = 1.6f;
			break;
		
		case 0x00000004:
			fVar0 = 6.715f;
			fVar1 = 2.043f;
			break;
		
		case 0x00000000:
			fVar0 = 4.8f;
			fVar1 = 2.433f;
			break;
		
		case 0x00000003:
			fVar0 = 6.1f;
			fVar1 = 2.395f;
			break;
		
		case 0x00000005:
			fVar0 = 2.9f;
			fVar1 = 2.005f;
			break;
		
		case 0x00000002:
			fVar0 = 7f;
			fVar1 = 2.533f;
			break;
		
		case 0x00000006:
			fVar0 = 7.7f;
			fVar1 = 2.775f;
			break;
		
		default:
			fVar0 = 10f;
			fVar1 = 3f;
			break;
	}
	vVar2 = { uParam1->f_3[0x00000001 /*3*/] - uParam1->f_3[0x00000000 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { uParam1->f_3[0x00000000 /*3*/] + vVar2 - uParam1->f_31 * Vector(fVar0, fVar0, fVar0) };
	vVar4 = { uParam1->f_3[0x00000003 /*3*/] + vVar2 + uParam1->f_31 * Vector(fVar0, fVar0, fVar0) };
	return !func_76(vParam0, vVar3, vVar4, (func_77(uParam1) * fVar1));
}

void func_56(var uParam0)
{
	uParam0->f_3C = 0f;
}

void func_57(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
	if (uParam0->f_4.f_14 == 0x00000002)
	{
		iVar0 = func_50(unk_0x79833B02DBD2A244(0f, 1f) < 0.5f, 0x00000000, 0x00000003);
		func_81(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
	else if (uParam0->f_4.f_14 == 0x00000000)
	{
		vVar1 = { uParam1->f_3[0x00000000 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		vVar2 = { uParam1->f_3[0x00000003 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		if (!func_76(uParam0->f_25, vVar1, vVar2, func_77(uParam1)))
		{
			vVar1 = { uParam1->f_1D - uParam0->f_28 * Vector(6f, 6f, 6f) };
			func_81(&(uParam0->f_4), vVar1);
		}
		else
		{
			func_81(&(uParam0->f_4), uParam0->f_25);
		}
	}
	else
	{
		func_81(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
}

void func_58(var uParam0, int iParam1)
{
	func_179(&(uParam0->f_2), iParam1);
}

bool func_59(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar4;
	
	vVar0 = { uParam1->f_3[0x00000000 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_3[0x00000003 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	bVar2 = func_76(vParam0, vVar0, vVar1, uParam1->f_1);
	vVar3 = { *uParam2 * Vector(0.018f, 0.018f, 0.018f) };
	fVar4 = (uParam1->f_1 * 1.038f);
	vVar0 = { vVar0 - vVar3 };
	vVar1 = { vVar1 + vVar3 };
	return (!bVar2 && func_76(vParam0, vVar0, vVar1, fVar4));
}

void func_60(int iParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		func_61(iParam0, (func_62(iParam0) + iParam1));
	}
	else
	{
		func_61(iParam0, iParam1);
	}
}

void func_61(int iParam0, int iParam1)
{
	uLocal_249[iParam0] = iParam1;
}

int func_62(int iParam0)
{
	return uLocal_249[iParam0];
}

int func_63(var uParam0)
{
	return uParam0->f_2;
}

int func_64(var uParam0, int iParam1)
{
	if (func_97(&(uParam0->f_F7), func_101(uParam0), &(uParam0->f_BD.f_1D)))
	{
		if (func_65(iParam1, uParam0, 0x00000001, 0x00000001))
		{
			func_95(&(uParam0->f_F7));
			if (func_286(&(uParam0->f_F7)) > 0x00000001)
			{
				return 0x00000000;
			}
		}
		else
		{
			func_95(&(uParam0->f_F7));
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_65(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { uParam1->f_F7.f_D };
	if (!bParam2)
	{
		vVar0 = { func_283(&(uParam1->f_F7)) };
	}
	if (bParam3)
	{
	}
	if ((uParam1[iParam0 /*94*/])->f_1 == 0x00000001)
	{
		if (bParam3)
		{
		}
		return func_76(vVar0, uParam1->f_BD.f_3[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f), uParam1->f_BD.f_20[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam1->f_BD)));
	}
	else
	{
		if (bParam3)
		{
		}
		return func_76(vVar0, uParam1->f_BD.f_3[0x00000003 /*3*/] + uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f), uParam1->f_BD.f_20[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f), func_77(&(uParam1->f_BD)));
	}
	return 0x00000000;
}

void func_66(var uParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_69(uParam0->f_2B, func_70(&(uParam0->f_4)) - uParam0->f_25);
	if (fVar0 > 0f && iParam1 == 0x00000001)
	{
		func_68(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 0x00000001)
	{
		func_67(&(uParam0->f_4));
	}
	else if (fVar0 > 0f && iParam1 == 0x00000000)
	{
		func_67(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 0x00000000)
	{
		func_68(&(uParam0->f_4));
	}
}

void func_67(var uParam0)
{
	uParam0->f_17 = (uParam0->f_17 - 0.5f);
	uParam0->f_17 = func_11(uParam0->f_17, -1.5f, 1.5f);
}

void func_68(var uParam0)
{
	uParam0->f_17 = (uParam0->f_17 + 0.5f);
	uParam0->f_17 = func_11(uParam0->f_17, -1.5f, 1.5f);
}

float func_69(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_70(var uParam0)
{
	return *uParam0;
}

void func_71(var uParam0, vector3 vParam1, vector3 vParam2)
{
	if (func_69(uParam0->f_2B, func_70(&(uParam0->f_4)) - uParam0->f_25) > 0f)
	{
		func_74(&(uParam0->f_4));
	}
	else
	{
		func_73(&(uParam0->f_4));
	}
	if (func_69(uParam0->f_28, func_70(&(uParam0->f_4)) - uParam0->f_25) > 0f)
	{
		func_72(&(uParam0->f_4), 0x00000000);
	}
	else
	{
		func_72(&(uParam0->f_4), 0x00000001);
	}
	uParam0->f_4.f_6[0x00000000 /*3*/] = { vParam1 + uParam0->f_28 * Vector(1f, 1f, 1f) + uParam0->f_28 * Vector(uParam0->f_4.f_16, uParam0->f_4.f_16, uParam0->f_4.f_16) + uParam0->f_2B * Vector(4f, 4f, 4f) + uParam0->f_2B * Vector(uParam0->f_4.f_15, uParam0->f_4.f_15, uParam0->f_4.f_15) };
	uParam0->f_4.f_6[0x00000001 /*3*/] = { vParam1 + uParam0->f_28 * Vector(8f, 8f, 8f) + uParam0->f_28 * Vector(uParam0->f_4.f_16, uParam0->f_4.f_16, uParam0->f_4.f_16) + uParam0->f_2B * Vector(2.165f, 2.165f, 2.165f) + uParam0->f_2B * Vector(uParam0->f_4.f_15, uParam0->f_4.f_15, uParam0->f_4.f_15) };
	uParam0->f_4.f_6[0x00000002 /*3*/] = { vParam1 + uParam0->f_28 * Vector(8f, 8f, 8f) + uParam0->f_28 * Vector(uParam0->f_4.f_16, uParam0->f_4.f_16, uParam0->f_4.f_16) + uParam0->f_2B * Vector(6f, 6f, 6f) + uParam0->f_2B * Vector(uParam0->f_4.f_15, uParam0->f_4.f_15, uParam0->f_4.f_15) };
	uParam0->f_4.f_6[0x00000003 /*3*/] = { vParam2 + uParam0->f_28 * Vector(0.5f, 0.5f, 0.5f) + uParam0->f_28 * Vector(uParam0->f_4.f_16, uParam0->f_4.f_16, uParam0->f_4.f_16) + uParam0->f_2B * Vector(4f, 4f, 4f) + uParam0->f_2B * Vector(uParam0->f_4.f_15, uParam0->f_4.f_15, uParam0->f_4.f_15) };
}

void func_72(var uParam0, bool bParam1)
{
	float fVar0;
	
	switch (uParam0->f_14)
	{
		case 0x00000000:
			fVar0 = 0.1f;
			break;
		
		case 0x00000001:
			fVar0 = 0.1f;
			break;
		
		case 0x00000002:
			fVar0 = 0.1f;
			break;
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	uParam0->f_16 = (uParam0->f_16 + fVar0);
	uParam0->f_16 = func_11(uParam0->f_16, -2f, 2f);
}

void func_73(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_14)
	{
		case 0x00000000:
			fVar0 = 0.5f;
			break;
		
		case 0x00000001:
			fVar0 = 0.25f;
			break;
		
		case 0x00000002:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_15 = (uParam0->f_15 - fVar0);
	uParam0->f_15 = func_11(uParam0->f_15, -2f, 2f);
}

void func_74(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_14)
	{
		case 0x00000000:
			fVar0 = 0.5f;
			break;
		
		case 0x00000001:
			fVar0 = 0.25f;
			break;
		
		case 0x00000002:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_15 = (uParam0->f_15 + fVar0);
	uParam0->f_15 = func_11(uParam0->f_15, -2f, 2f);
}

int func_75(var uParam0)
{
	return uParam0->f_24;
}

bool func_76(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vParam1.z = (vParam1.z + 30f);
	vParam2.z = (vParam2.z - 5f);
	return unk_0x0399732A9EBC368E(vParam0, vParam1, vParam2, fParam3, 0x00000000, 0x00000001);
}

float func_77(var uParam0)
{
	return uParam0->f_1;
}

void func_78(var uParam0)
{
	if (uParam0->f_14 == 0x00000000)
	{
		uParam0->f_18 = unk_0x79833B02DBD2A244(0f, 0.4f);
	}
	else if (uParam0->f_14 == 0x00000001)
	{
		uParam0->f_18 = unk_0x79833B02DBD2A244(0f, 0.2f);
	}
	else if (uParam0->f_14 == 0x00000002)
	{
		uParam0->f_18 = unk_0x79833B02DBD2A244(0f, 0.01f);
	}
}

void func_79(var uParam0, float fParam1)
{
	uParam0->f_18 = fParam1;
}

void func_80(var uParam0, int iParam1)
{
	func_179(&(uParam0->f_19), iParam1);
}

void func_81(var uParam0, vector3 vParam1)
{
	*uParam0 = { vParam1 };
}

Vector3 func_82(var uParam0, var uParam1, vector3 vParam2, var uParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	
	iVar0 = 0x00000000;
	fVar4 = 100f;
	vVar6 = { func_86(uParam0, vParam2) };
	fVar7 = func_69(vParam2 - uParam0->f_25, uParam0->f_2B);
	bVar8 = fVar7 > 0f;
	while (iVar0 < 0x0000004B)
	{
		bVar9 = (*uParam1)[iVar0 /*3*/] > 0f;
		if (bVar8 == bVar9)
		{
			vVar1 = { func_85(uParam0, *(uParam1[iVar0 /*3*/])) };
			fVar5 = unk_0x755FF954DAE327E1(((vVar1.z + vVar6.z) - vParam2.z));
			if (fVar5 < 0.15f)
			{
				fVar5 = 0f;
			}
			fVar5 = (fVar5 + func_84(iVar0));
			vVar10 = { vParam2 - vVar1 };
			fVar11 = 0f;
			fVar12 = func_83(uParam0, vVar10, fParam4, &fVar11);
			if (fVar12 < fVar11)
			{
				fVar5 = (fVar5 + (fVar11 - fVar12));
			}
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				vVar3 = { vVar1 };
			}
		}
		iVar0++;
	}
	vVar2 = { vParam2 - vVar3 };
	vVar2.z = uParam3;
	return vVar2;
}

float func_83(var uParam0, vector3 vParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { vParam1 - uParam0->f_25 };
	*fParam3 = SYSTEM::VMAG(vVar0);
	if (*fParam3 > 5f)
	{
		vVar0 = { vVar0 * FtoV((5f / *fParam3)) };
	}
	vVar1 = { unk_0x56E9E0FD5ACCD35D(uParam0->f_20) };
	fVar2 = ((SYSTEM::VDIST(vVar0, vVar1) * 2f) / 5f);
	fVar3 = ((fParam2 * 5f) - fVar2);
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	return fVar3;
}

float func_84(int iParam0)
{
	switch (iParam0)
	{
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
			return 0.05f;
		
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			return 0.05f;
		
		case 0x00000048:
		case 0x00000049:
			return 0.4f;
		
		default:
	}
	return 0f;
}

Vector3 func_85(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { Vector(vParam1.x, vParam1.x, vParam1.x) * uParam0->f_2B };
	vVar0 = { vVar0 + Vector(vParam1.y, vParam1.y, vParam1.y) * uParam0->f_28 };
	vVar0.z = (vVar0.z + vParam1.z);
	return vVar0;
}

Vector3 func_86(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { vParam1 - uParam0->f_25 };
	fVar1 = func_69(vVar0, uParam0->f_28);
	vVar2 = { uParam0->f_28 * Vector(fVar1, fVar1, fVar1) };
	return uParam0->f_25 + vVar2;
}

Vector3 func_87(vector3 vParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, var uParam9, float fParam10)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x000000B4 && iVar1 < 0x00000002)
	{
		vVar0 = { vParam2 };
		func_279(uParam1, &vParam2, &vParam3, &uParam4, &uParam7, &iParam8, &uParam9, &iVar1, 0x00000000, 0xBF800000, 0x00000000, 0x00000000, 0x00000000);
		if (SYSTEM::VDIST(vParam0, vVar0) < SYSTEM::VDIST(vParam0, vParam2))
		{
			*fParam10 = (IntToFloat(iVar2) * unk_0x6117725E0134737F());
			return vParam2;
		}
		if (iVar1 > 0x00000000 && vParam3.z < 0f)
		{
			*fParam10 = (IntToFloat(iVar2) * unk_0x6117725E0134737F());
			return vVar0;
		}
		iVar2++;
	}
	*fParam10 = (IntToFloat(iVar2) * unk_0x6117725E0134737F());
	return vParam2;
}

void func_88(var uParam0, var uParam1)
{
	uParam0->f_31 = { *uParam1 };
}

Vector3 func_89(var uParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x000000B4)
	{
		func_279(uParam0, &vParam1, &uParam2, &uParam5, &uParam8, &iParam9, &uParam10, &iVar0, 0x00000000, 0.03333334f, 0x00000000, 0.1f, 0x00000000);
		if (iVar0 > 0x00000000)
		{
			return vParam1;
		}
		iVar1++;
	}
	return vParam1;
}

var func_90(var uParam0)
{
	return uParam0->f_5;
}

int func_91(var uParam0)
{
	return uParam0->f_16;
}

var func_92(var uParam0)
{
	return uParam0->f_4;
}

void func_93(var uParam0, int iParam1)
{
	func_255(uParam0, 0x04000000);
	func_255(uParam0, 0x08000000);
	func_255(uParam0, 0x01000000);
	func_255(uParam0, 0x02000000);
	func_179(uParam0, iParam1);
}

int func_94(var uParam0)
{
	return uParam0->f_1D;
}

void func_95(var uParam0)
{
	uParam0->f_1++;
}

int func_96(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { func_283(&(uParam1->f_F7)) };
	if (unk_0x755FF954DAE327E1((vVar0.z - uParam0->f_3[0x00000000 /*3*/].f_2)) <= 0.6f)
	{
		vVar1 = { uParam1->f_F7.f_D };
		if (iParam2 == 0x00000000)
		{
			if (iParam3 == 0x00000001)
			{
				vVar2 = { uParam0->f_20[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.25f, 0.25f, 0.25f) };
				vVar3 = { uParam0->f_10[0x00000003 /*3*/] + uParam1->f_67D * Vector(0.25f, 0.25f, 0.25f) };
			}
			else
			{
				vVar2 = { uParam0->f_20[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.75f, 0.75f, 0.75f) };
				vVar3 = { uParam0->f_10[0x00000003 /*3*/] + uParam1->f_67D * Vector(0.75f, 0.75f, 0.75f) };
			}
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam3 == 0x00000001)
			{
				vVar2 = { uParam0->f_20[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.75f, 0.75f, 0.75f) };
				vVar3 = { uParam0->f_10[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.75f, 0.75f, 0.75f) };
			}
			else
			{
				vVar2 = { uParam0->f_20[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.25f, 0.25f, 0.25f) };
				vVar3 = { uParam0->f_10[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.25f, 0.25f, 0.25f) };
			}
		}
		return func_76(vVar1, vVar2, vVar3, 4.153f);
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_97(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (unk_0xE608C809F9416F00(*uParam0) || func_288(uParam0, 0x00000010))
	{
		iVar0 = unk_0x3661263219ECFDCC(*uParam0);
		if (iVar0 == 0x07519E5D)
		{
		}
		if ((((((((((((((((((((iVar0 == 0x71AB3FEE || iVar0 == 0x46CA81E8) || iVar0 == 0x10DD5498) || iVar0 == 0x19F81600) || iVar0 == 0x2D6E26CD) || iVar0 == 0xF7503F13) || iVar0 == 0x0DF16BAB) || iVar0 == 0x82F24F47) || iVar0 == 0x1AD28269) || iVar0 == 0x53226D84) || iVar0 == 0x0781FA34) || iVar0 == 0x9F154729) || iVar0 == 0xEA34E8F8) || iVar0 == 0xD9B1CDE0) || iVar0 == 0x23500534) || iVar0 == 0x27E49616) || iVar0 == 0x4434DFE7) || iVar0 == 0xB34E900D) || iVar0 == 0x6E3DBFB8) && (iParam1 - uParam0->f_2) > 0x00000004) && iVar0 != 0x00000000)
		{
			func_100(uParam0, iParam1);
			uParam0->f_D = { func_283(uParam0) };
			func_287(uParam0, 0x00000020);
			func_287(uParam0, 0x00000010);
			return 0x00000001;
		}
		if (func_288(uParam0, 0x00000010) && (iParam1 - uParam0->f_2) > 0x00000004)
		{
			func_287(uParam0, 0x00000010);
			func_100(uParam0, iParam1);
			uParam0->f_D = { func_283(uParam0) };
			func_287(uParam0, 0x00000020);
			return 0x00000001;
		}
		if (SYSTEM::VDIST2(*uParam2, func_283(uParam0)) > (26.75f * 26.75f))
		{
			return 0x00000001;
		}
	}
	if (func_99(uParam0) > 5f)
	{
		func_98(uParam0);
		func_278(uParam0, 0x00000080);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_98(var uParam0)
{
	uParam0->f_6 = 0f;
}

float func_99(var uParam0)
{
	return uParam0->f_6;
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_101(var uParam0)
{
	return uParam0->f_119;
}

void func_102(var uParam0)
{
	func_179(uParam0, 0x00000800);
	func_179(uParam0, 0x00004000);
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_104(var uParam0, int iParam1)
{
	return func_257(uParam0->f_2, iParam1);
}

int func_105(var uParam0)
{
	return uParam0->f_3;
}

int func_106(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	int iVar28;
	
	bVar6 = (unk_0xC844350D5D58C99A(uParam1->f_F7) && !unk_0xD59B17D2DFF98E26(uParam1->f_F7));
	uVar7 = func_92(&(uParam1->f_F7));
	uVar8 = func_90(&(uParam1->f_F7));
	iVar9 = func_286(&(uParam1->f_F7));
	uVar10 = func_91(&(uParam1->f_F7));
	vVar11 = { func_283(&(uParam1->f_F7)) };
	vVar12 = { uParam1->f_F7.f_A };
	if (bVar6 && iParam3 != iParam4)
	{
		if (!func_104(uParam0, 0x00008000))
		{
			func_174(uParam0, uParam1, &vVar11, &vVar12, &uVar7, &uVar10, &uVar8, &iVar9);
		}
		else if (func_104(uParam0, 0x00008000))
		{
			func_169(uParam0, uParam1, &vVar11, &vVar12, &uVar7, &uVar10, &uVar8, &iVar9);
		}
	}
	if (func_228(&(uParam0->f_4), 0x00000020))
	{
		func_168(uParam0);
		if (func_167(uParam0) >= func_166(uParam0))
		{
			func_165(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_283(&(uParam1->f_F7)), bParam7);
			func_217(&(uParam0->f_4), 0x00000020);
			func_217(&(uParam0->f_4), 0x00000008);
			func_164(uParam0);
		}
	}
	if (uParam0->f_1F != 0x00000004 && unk_0x1C0640BA9A7327B3() > func_163(uParam0))
	{
		bVar0 = unk_0x06F8112AA79C53D9(0x00000000, 0x000000DF);
		bVar2 = unk_0x06F8112AA79C53D9(0x00000000, 0x000000E0);
		bVar3 = unk_0x06F8112AA79C53D9(0x00000000, 0x000000E1);
		bVar1 = unk_0x06F8112AA79C53D9(0x00000000, 0x000000DE);
		if (((unk_0xBFC0798A6E3417F9(0x00000000, 0x000000DF) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000E0)) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000E1)) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000DE))
		{
			if (func_162(uParam0))
			{
				func_58(uParam0, 0x00000001);
			}
			if (func_161(uParam1, uParam0, bVar6))
			{
				func_58(uParam0, 0x00000008);
			}
			vVar13 = { vVar12 };
			vVar13.z = 0f;
			vVar14 = { uParam0->f_28 };
			vVar14.z = 0f;
			if (func_69(vVar13, vVar14) < 0f)
			{
				func_58(uParam0, 0x00000010);
			}
		}
	}
	else if (unk_0x1C0640BA9A7327B3() > func_163(uParam0))
	{
		if (SYSTEM::VDIST2(func_283(&(uParam1->f_F7)), uParam0->f_25) > (0f * 0f))
		{
			func_160(uParam0, uParam1, &bVar0, &bVar1);
		}
	}
	if (((uParam0->f_1F != 0x00000004 && func_104(uParam0, 0x00000200)) && func_159(uParam0) > 0.95f) && func_75(uParam0) == 0x0000004B)
	{
		func_277(uParam0, 0x00000200);
		func_158(uParam0);
	}
	else if (func_104(uParam0, 0x00000200))
	{
		func_157(uParam0);
		if ((bVar0 || bVar2) || bVar3)
		{
			func_156(uParam0);
		}
		else
		{
			func_56(uParam0);
		}
	}
	if (((bVar0 || bVar1) || bVar2) || bVar3)
	{
		if ((func_75(uParam0) == 0x0000004B && !func_104(uParam0, 0x00000200)) && !func_104(uParam0, 0x00001000))
		{
			func_58(uParam0, 0x00000200);
			if (bVar0)
			{
				func_230(uParam0, 0x00000000);
			}
			else if (bVar1)
			{
				func_230(uParam0, 0x00000002);
			}
			else if (bVar2)
			{
				func_230(uParam0, 0x00000003);
			}
			else if (bVar3)
			{
				func_230(uParam0, 0x00000001);
			}
			if (uParam0->f_1F != 0x00000004)
			{
				vVar16 = { func_87(uParam0->f_25, &(uParam1->f_BD), func_283(&(uParam1->f_F7)), uParam1->f_F7.f_A, uParam1->f_67A, func_92(&(uParam1->f_F7)), func_91(&(uParam1->f_F7)), func_90(&(uParam1->f_F7)), &fVar15) };
				func_81(&(uParam0->f_4), func_82(uParam0, &(uParam1->f_12F), vVar16, uParam1->f_BD.f_1D.f_2, fVar15));
			}
		}
		if (uParam0->f_1F != 0x00000004 && bVar0)
		{
			if (func_104(uParam0, 0x00000001))
			{
				func_155(uParam0);
			}
		}
		else if (!bVar0)
		{
			func_154(uParam0);
		}
		if (func_153(uParam0))
		{
			unk_0x5E858A00EAFA5B24(0x00000000, 0x00000032, 0x00000055);
		}
	}
	else
	{
		if (func_104(uParam0, 0x00001000) && unk_0x1C0640BA9A7327B3() > func_163(uParam0))
		{
			func_277(uParam0, 0x00001000);
		}
		func_154(uParam0);
	}
	if (iParam3 != iParam4 && ((func_104(uParam0, 0x00000200) && uParam0->f_1F != 0x00000004) || uParam0->f_1F == 0x00000004))
	{
		if (func_152(uParam0, vVar11, bVar6))
		{
			vVar17 = { func_70(&(uParam0->f_4)) };
			iVar4 = func_150(uParam0, uParam1, &(uParam1->f_12F), &(uParam1->f_217), &(uParam1->f_62F), &vVar17, &iVar19, &uVar18);
			if ((iVar4 != 0x0000004B && iVar4 != 0x0000004C) && (uParam0->f_1F == 0x00000004 || (uParam0->f_1F != 0x00000004 && func_104(uParam0, 0x00000200))))
			{
				if (!func_228(&(uParam0->f_4), 0x00000008) && !func_228(&(uParam0->f_4), 0x00000001))
				{
					func_149(&(uParam0->f_4));
					func_234(uParam0, iVar4);
					func_148(uParam0, iVar19);
					func_80(&(uParam0->f_4), 0x00000001);
					func_147(uParam0, unk_0xF4CCC8CB6DE7F1AE() + 2);
					if (uParam0->f_1F == 0x00000004)
					{
						func_145(uParam0, &(uParam1->f_BD), uParam1[iParam3 /*94*/]);
						func_58(uParam0, 0x00000200);
					}
				}
			}
			else if (iVar4 == 0x0000004B && func_144(uParam0, uParam1[iParam3 /*94*/], &(uParam1->f_F7), uParam1->f_BD.f_1D, &fVar5))
			{
				vVar11 = { func_283(&(uParam1->f_F7)) };
				if (fVar5 > 0f)
				{
					iVar4 = func_139(uParam0, &(uParam1->f_12F), &(uParam1->f_217), &vVar11, &uVar18);
					func_234(uParam0, iVar4);
				}
				func_138(uParam0, unk_0x1C0640BA9A7327B3() + 1000);
				if (iVar4 == 0x0000004B || fVar5 <= 0f)
				{
					unk_0xA3BF0AA5A2608191(func_265(uParam0));
					func_137(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, vVar11, bParam7);
					func_277(uParam0, 0x00000200);
				}
				if (fVar5 < 5f)
				{
					iVar20 = 0x00000000;
					fVar21 = func_69(uParam1->f_62F[iVar20 /*3*/] - uParam0->f_25, uParam0->f_28);
					while (iVar20 < 0x00000017 && fVar21 > 0f)
					{
						iVar20++;
						fVar21 = func_69(uParam1->f_62F[iVar20 /*3*/] - uParam0->f_25, uParam0->f_28);
					}
					fVar22 = SYSTEM::TO_FLOAT(func_14(uParam1->f_217[iVar4 /*12*/].f_3));
					iVar23 = (SYSTEM::FLOOR((uParam1->f_217[iVar4 /*12*/].f_1 * fVar22)) - iVar20);
					func_148(uParam0, iVar23);
					func_80(&(uParam0->f_4), 0x00000001);
				}
			}
			func_81(&(uParam0->f_4), vVar17);
		}
		else if (uParam0->f_1F != 0x00000004 && func_167(uParam0) >= (func_166(uParam0) / 2f))
		{
			if (func_104(uParam0, 0x00000200))
			{
				func_165(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_283(&(uParam1->f_F7)), bParam7);
			}
		}
	}
	if (func_133(uParam0, &(uParam1->f_F7), uParam1->f_BD.f_1D, bVar6))
	{
		iVar28 = (0x00000001 - iParam4);
		vVar11 = { func_283(&(uParam1->f_F7)) };
		if (func_52(uParam0) == 0x00000002)
		{
			func_216(&(uParam1->f_F7));
			if (func_132(uParam1[iVar28 /*94*/], &(uParam1->f_BD), uParam1->f_67D))
			{
				bVar24 = 0x00000001;
			}
			else
			{
				bVar25 = 0x00000001;
				func_230(uParam0, 0x00000005);
			}
		}
		else if ((uParam0->f_1F != 0x00000004 && func_153(uParam0)) && func_162(uParam0))
		{
			func_131(uParam0);
			func_277(uParam0, 0x00000001);
			func_154(uParam0);
			bVar27 = 0x00000001;
		}
		else if (func_130(uParam0, &(uParam1->f_BD), &(uParam1->f_67D), vVar11.z, func_286(&(uParam1->f_F7))))
		{
			bVar26 = 0x00000001;
		}
		if (func_129(&(uParam1->f_F7), &(uParam1->f_BD), uParam0, uParam1[iVar28 /*94*/]))
		{
			func_278(&(uParam1->f_F7), 0x00000020);
		}
		func_107(uParam0, uParam1, iParam4, bVar26, bVar27, bVar24, bVar25);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	func_128(&iVar0, &iVar1, &iVar2, &iVar2, 0x00000001, 0x00000001);
	if (uParam0->f_1F != 0x00000004)
	{
		if (func_52(uParam0) == 0x00000001)
		{
			func_127(&(uParam1->f_F7), 0x00000001);
		}
		else if (func_52(uParam0) == 0x00000003)
		{
			func_127(&(uParam1->f_F7), 0x00000002);
		}
		else
		{
			func_216(&(uParam1->f_F7));
		}
	}
	else if ((func_52(uParam0) != 0x00000002 && func_52(uParam0) != 0x00000005) && !bParam3)
	{
		func_127(&(uParam1->f_F7), func_126(uParam0->f_4.f_14));
	}
	vVar3 = { func_120(uParam0, uParam1, iVar0, iParam2, func_283(&(uParam1->f_F7)), bParam3, bParam4, bParam5, bParam6) };
	if (unk_0xC844350D5D58C99A(uParam1->f_F7) && unk_0xD59B17D2DFF98E26(uParam1->f_F7))
	{
		unk_0x15AFB6CBDE990FB6(uParam1->f_F7, 0x00000001, 0x00000001);
	}
	func_113(uParam1, vVar3);
	func_233(uParam0);
	func_217(&(uParam0->f_4), 0x00000004);
	func_58(uParam0, 0x00001000);
	func_158(uParam0);
	func_108(uParam0, &(uParam1->f_F7), bParam3, bParam4, bParam5, bParam6);
	iVar2 = (0x00000001 - iParam2);
	func_217(&((uParam1[iVar2 /*94*/])->f_4), 0x00000002);
	func_217(&((uParam1[iVar2 /*94*/])->f_4), 0x00000001);
	func_230(uParam1[iVar2 /*94*/], 0x00000000);
	func_148(uParam0, 0x00000000);
}

void func_108(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_44(func_265(uParam0)) == 0x00000011 && unk_0x79833B02DBD2A244(0f, 1f) < 0.5f)
	{
		func_109(uParam0, "TENNIS_EXHERT", func_112(uParam0), 0x00000009);
	}
	bVar1 = (bParam5 || bParam4);
	if (bParam2 || bParam3)
	{
		if (func_91(uParam1) == 0x00000000)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_91(uParam1) == 0x00000002)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_SMASH_BACKSLICE_MASTER", "TENNIS_NPC_SMASH_BACKSLICE_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_91(uParam1) == 0x00000001)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		}
		iVar0 = 0x00000064;
	}
	else if (bVar1)
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_LOB_MASTER", "TENNIS_NPC_LOB_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		iVar0 = 0x0000003C;
	}
	else
	{
		if (func_91(uParam1) == 0x00000000)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_FOREARM_MASTER", "TENNIS_NPC_FOREARM_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_91(uParam1) == 0x00000002)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_BACKSLICE_MASTER", "TENNIS_NPC_BACKSLICE_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_91(uParam1) == 0x00000001)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_1F != 0x00000004, "TENNIS_PLYR_TOPSPIN_MASTER", "TENNIS_NPC_TOPSPIN_MASTER"), func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
		}
		iVar0 = 0x00000050;
	}
	if (uParam0->f_1F != 0x00000004)
	{
		unk_0x5E858A00EAFA5B24(0x00000000, iVar0, 0x00000100);
	}
}

void func_109(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0)))
	{
		func_110(func_265(uParam0), sParam1, &sParam2, iParam10);
	}
}

void func_110(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_111(iParam3), 0x00000000);
}

int func_111(int iParam0)
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

struct<8> func_112(var uParam0)
{
	return uParam0->f_56;
}

void func_113(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_F7))
	{
		if (uParam0->f_679 != 0x00000001 && !func_275(&(uParam0->f_F7)))
		{
			func_274(&(uParam0->f_F7));
			func_119(&(uParam0->f_F7));
		}
		uParam0->f_F7.f_A = { vParam1 };
		vVar0 = { unk_0x68F4C0EC296D3901(uParam0->f_F7, 0x00000001) };
		if (vVar0.z < uParam0->f_BD.f_1D.f_2)
		{
			vVar0.z = uParam0->f_BD.f_1D.f_2;
		}
		func_276(&(uParam0->f_F7), vVar0);
		uParam0->f_F7.f_10 = { func_283(&(uParam0->f_F7)) };
		func_118(&(uParam0->f_F7), unk_0xF4CCC8CB6DE7F1AE() + 5);
		func_117(&(uParam0->f_F7));
		func_115(&(uParam0->f_F7), 0x00000001);
		func_100(&(uParam0->f_F7), func_101(uParam0));
		func_114(uParam0->f_F7, 0x00000001);
	}
	func_287(&(uParam0->f_F7), 0x00000004);
	func_287(&(uParam0->f_F7), 0x00000010);
}

void func_114(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((unk_0x4FC40AB0ECCE6E18(iParam0) && !bParam1) || (!unk_0x4FC40AB0ECCE6E18(iParam0) && bParam1))
		{
			unk_0x4A4806F9D471E491(iParam0, bParam1, 0x00000000);
			unk_0x69C149C0E43FAF13(iParam0, bParam1);
		}
	}
}

void func_115(var uParam0, bool bParam1)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		vVar0 = { func_116(bParam1, func_283(uParam0), unk_0x68F4C0EC296D3901(*uParam0, 0x00000001)) };
	}
	uParam0->f_1B = { vVar0 };
	uParam0->f_1E = { vVar0 };
	uParam0->f_19 = 0f;
	uParam0->f_1A = 0f;
}

Vector3 func_116(bool bParam0, vector3 vParam1, vector3 vParam2)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_117(var uParam0)
{
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	func_98(uParam0);
}

void func_118(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_119(var uParam0)
{
	func_278(uParam0, 0x00000001);
}

Vector3 func_120(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	
	fVar1 = 8f;
	fVar2 = 7.2f;
	fVar3 = 5.5f;
	fVar4 = -1.5f;
	fVar5 = 0.9f;
	fVar6 = (30f * func_125(uParam0));
	fVar7 = fVar6;
	vVar8 = { vParam4 };
	vVar9 = { unk_0xE3C0A5DBED4FBAB7(vVar8, uParam1->f_BD.f_20[0x00000000 /*3*/], uParam1->f_BD.f_20[0x00000001 /*3*/], 0x00000000) };
	fVar10 = SYSTEM::VDIST(vVar8, vVar9);
	fVar11 = (SYSTEM::VMAG(uParam1->f_BD.f_3[0x00000003 /*3*/] - uParam1->f_BD.f_3[0x00000000 /*3*/]) / 2f);
	fVar12 = (fVar10 / fVar11);
	if (func_288(&(uParam1->f_F7), 0x00000040))
	{
		bParam5 = 0x00000000;
		bParam6 = 0x00000000;
		bParam7 = 0x00000001;
		func_230(uParam0, 0x00000002);
	}
	if (bParam5)
	{
		fVar6 = 45f;
		fVar1 = 15f;
		fVar2 = 0f;
		fVar3 = 7.5f;
		fVar4 = -2f;
	}
	else if (bParam6)
	{
		fVar6 = (fVar6 + 10f);
	}
	else if (bParam7)
	{
		fVar2 = 15f;
		fVar3 = 12.5f;
		fVar4 = 1.38f;
		fVar5 = func_124(8f, 15f, fVar12);
		fVar7 = 14.35f;
		fVar1 = 12.325f;
		fVar6 = func_124(15f, 30f, fVar12);
	}
	else if (bParam8)
	{
		fVar6 = 27.55f;
		fVar7 = 7f;
		fVar4 = 0f;
		fVar1 = 3f;
		fVar5 = 1.58f;
	}
	fVar13 = (vVar8.z - uParam1->f_BD.f_1D.f_2);
	fVar14 = (fVar13 / 2f);
	fVar15 = func_124(fVar6, fVar7, fVar14);
	fVar16 = func_124(fVar15, fVar6, fVar12);
	fVar17 = func_124(fVar1, fVar16, fVar12);
	fVar18 = func_124(fVar17, fVar16, fVar14);
	if (uParam0->f_1F != 0x00000004)
	{
		vVar0 = { func_123(uParam0, &(uParam1->f_BD), vVar8, iParam2) };
	}
	else
	{
		iVar19 = (0x00000001 - iParam3);
		vVar0 = { func_121(uParam0, uParam1, &(uParam1->f_F7.f_10), &((uParam1[iVar19 /*94*/])->f_25), iParam3) };
	}
	fVar20 = func_124(fVar2, fVar3, fVar12);
	fVar21 = func_124(fVar4, fVar5, fVar12);
	vVar0.z = func_124(fVar20, fVar21, fVar14);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fVar18, fVar18, fVar18) };
	return vVar0;
}

Vector3 func_121(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = func_50(uParam0->f_1 == 0x00000000, 0x00000003, 0x00000001);
	iVar1 = func_50(uParam0->f_1 == 0x00000000, 0x00000002, 0x00000000);
	iVar2 = (0x00000001 - iParam4);
	if (uParam0->f_4.f_14 == 0x00000000 || func_288(&(uParam1->f_F7), 0x00000040))
	{
		vVar4 = { FtoV(unk_0x79833B02DBD2A244(-1f, 1f)) * uParam0->f_2B };
		vVar3 = { *uParam2 + vVar4 - uParam0->f_25 };
		if (func_288(&(uParam1->f_F7), 0x00000040))
		{
			func_287(&(uParam1->f_F7), 0x00000040);
		}
	}
	else if (uParam0->f_4.f_14 == 0x00000001)
	{
		fVar5 = unk_0x79833B02DBD2A244(-0.15f, 1.15f);
		vVar8 = { uParam1->f_BD.f_3[iVar1 /*3*/] - uParam1->f_BD.f_3[iVar0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		if (SYSTEM::VDIST2(*uParam3, uParam1->f_BD.f_3[iVar0 /*3*/]) > SYSTEM::VDIST2(*uParam3, uParam1->f_BD.f_3[iVar1 /*3*/]))
		{
			vVar6 = { uParam1->f_BD.f_3[iVar0 /*3*/] };
			vVar7 = { vVar6 + vVar8 };
		}
		else
		{
			vVar6 = { uParam1->f_BD.f_3[iVar0 /*3*/] + vVar8 };
			vVar7 = { uParam1->f_BD.f_3[iVar1 /*3*/] };
		}
		vVar9 = { func_122(vVar6, vVar7, fVar5) };
		vVar3 = { vVar9 - func_283(&(uParam1->f_F7)) };
	}
	else if (uParam0->f_4.f_14 == 0x00000002)
	{
		bVar12 = 0x00000000;
		fVar13 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000000 /*3*/], *uParam3);
		fVar14 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000001 /*3*/], *uParam3);
		fVar15 = unk_0x755FF954DAE327E1((fVar13 - fVar14));
		fVar16 = func_124(0.75f, 0.05f, (fVar15 / 90f));
		fVar17 = unk_0x79833B02DBD2A244(0f, 1f);
		switch (func_52(uParam0))
		{
			case 0x00000000:
				vVar11 = { uParam0->f_28 * Vector(-1f, -1f, -1f) };
				break;
			
			case 0x00000001:
				vVar11 = { uParam0->f_28 * Vector(-2f, -2f, -2f) };
				break;
			
			case 0x00000003:
				vVar11 = { uParam0->f_28 * Vector(0f, 0f, 0f) };
				break;
		}
		if (fVar17 < fVar16 && func_228(&(uParam0->f_4), 0x00000080))
		{
			bVar12 = 0x00000001;
			func_128(&iVar18, &iVar19, &iVar19, &iVar19, 0x00000001, 0x00000001);
			if (iVar18 > 0x0000000F)
			{
				iVar19 = func_50(uParam0->f_1 == 0x00000000, 0x00000002, 0x00000000);
				vVar10 = { uParam1->f_BD.f_3[iVar19 /*3*/] + vVar11 };
			}
			else if (iVar18 < 0xFFFFFFF1)
			{
				iVar19 = func_50(uParam0->f_1 == 0x00000000, 0x00000003, 0x00000001);
				vVar10 = { uParam1->f_BD.f_3[iVar19 /*3*/] + vVar11 };
			}
			else
			{
				bVar12 = 0x00000000;
			}
		}
		if (fVar13 > fVar14 && !bVar12)
		{
			if (uParam0->f_1 == 0x00000000)
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000000 /*3*/], uParam0->f_25);
				fVar14 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000001 /*3*/], uParam0->f_25);
				if (func_65(iVar2, uParam1, 0x00000000, 0x00000000))
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000003 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000003 /*3*/] + uParam0->f_2B * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000003 /*3*/] + vVar11 };
				}
			}
			else
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000003 /*3*/], uParam0->f_25);
				fVar14 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000002 /*3*/], uParam0->f_25);
				if (func_65(iVar2, uParam1, 0x00000000, 0x00000000))
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000000 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000000 /*3*/] - uParam0->f_2B * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000000 /*3*/] + vVar11 };
				}
			}
		}
		else if (!bVar12)
		{
			if (uParam0->f_1 == 0x00000000)
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000001 /*3*/], uParam0->f_25);
				fVar14 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000000 /*3*/], uParam0->f_25);
				if (func_65(iVar2, uParam1, 0x00000000, 0x00000000))
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000002 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000002 /*3*/] - uParam0->f_2B * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000002 /*3*/] + vVar11 };
				}
			}
			else
			{
				fVar13 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000002 /*3*/], uParam0->f_25);
				fVar14 = SYSTEM::VDIST2(uParam1->f_BD.f_3[0x00000003 /*3*/], uParam0->f_25);
				if (func_65(iVar2, uParam1, 0x00000000, 0x00000000))
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000001 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000001 /*3*/] + uParam0->f_2B * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_BD.f_3[0x00000001 /*3*/] + vVar11 };
				}
			}
		}
		vVar3 = { vVar10 - func_283(&(uParam1->f_F7)) };
	}
	else
	{
		vVar3 = { *uParam2 - uParam0->f_25 };
	}
	return vVar3;
}

Vector3 func_122(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return FtoV((1f - fParam2)) * vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1;
}

Vector3 func_123(var uParam0, var uParam1, vector3 vParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	vector3 vVar9;
	
	vVar1 = { 0f, 0f, 0f };
	vVar2 = { 0f, 0f, 0f };
	iVar3 = func_50(uParam0->f_1 == 0x00000000, 0x00000003, 0x00000001);
	iVar4 = func_50(uParam0->f_1 == 0x00000000, 0x00000002, 0x00000000);
	vVar5 = { uParam1->f_3[0x00000001 /*3*/] - uParam1->f_3[0x00000000 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	if (!func_76(vParam2, uParam1->f_3[0x00000000 /*3*/] + vVar5, uParam1->f_3[0x00000003 /*3*/] + vVar5, func_77(uParam1)))
	{
		fVar6 = func_124(0.4f, 1f, unk_0x79833B02DBD2A244(0f, 1f));
		if (func_69(uParam0->f_2B, uParam0->f_25 - uParam1->f_3[0x00000000 /*3*/]) < 0f)
		{
			vVar1 = { uParam0->f_2B * Vector(fVar6, fVar6, fVar6) };
		}
		if (func_69(uParam0->f_2B, uParam0->f_25 - uParam1->f_3[0x00000001 /*3*/]) >= 0f)
		{
			vVar2 = { uParam0->f_2B * Vector(fVar6, fVar6, fVar6) * Vector(-1f, -1f, -1f) };
		}
	}
	vVar7 = { unk_0xE3C0A5DBED4FBAB7(uParam0->f_25, uParam1->f_3[iVar3 /*3*/], uParam1->f_3[iVar4 /*3*/], 0x00000001) };
	if (unk_0x51D1D19912234EA0(iParam3) > 0x0000000F)
	{
		if (iParam3 > 0x00000000)
		{
			fVar8 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(0x00000080));
			vVar9 = { func_122(vVar7, uParam1->f_3[iVar4 /*3*/] + vVar2, fVar8) };
		}
		else
		{
			fVar8 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(0xFFFFFF80));
			vVar9 = { func_122(vVar7, uParam1->f_3[iVar3 /*3*/] + vVar1, fVar8) };
		}
		vVar0 = { vVar9 - vParam2 };
	}
	else
	{
		vVar0 = { vVar7 - vParam2 };
	}
	return vVar0;
}

float func_124(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_125(var uParam0)
{
	return uParam0->f_42;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			if (unk_0x79833B02DBD2A244(0f, 1f) < 0.3f)
			{
				if (unk_0x79833B02DBD2A244(0f, 1f) < 0.5f)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000002;
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (unk_0x79833B02DBD2A244(0f, 1f) < 0.2f)
			{
				if (unk_0x79833B02DBD2A244(0f, 1f) < 0.6f)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000002;
				}
			}
			else
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000000;
}

void func_127(var uParam0, int iParam1)
{
	uParam0->f_16 = iParam1;
}

void func_128(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam5 == 0x00000000)
	{
		if (bParam4)
		{
			fVar0 = unk_0x4F3973434662D795(0x00000000, 0x000000DA);
			fVar1 = unk_0x4F3973434662D795(0x00000000, 0x000000DB);
			fVar2 = unk_0x4F3973434662D795(0x00000000, 0x000000DC);
			fVar3 = unk_0x4F3973434662D795(0x00000000, 0x000000DD);
		}
		else
		{
			fVar0 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x000000DA);
			fVar1 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x000000DB);
			fVar2 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x000000DC);
			fVar3 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x000000DD);
		}
	}
	else if (bParam4)
	{
		fVar0 = unk_0x659FAE9DBE6F38F5(0x00000000, 0x000000DA);
		fVar1 = unk_0x659FAE9DBE6F38F5(0x00000000, 0x000000DB);
		fVar2 = unk_0x659FAE9DBE6F38F5(0x00000000, 0x000000DC);
		fVar3 = unk_0x659FAE9DBE6F38F5(0x00000000, 0x000000DD);
	}
	else
	{
		fVar0 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x000000DA);
		fVar1 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x000000DB);
		fVar2 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x000000DC);
		fVar3 = unk_0x8A6BC5D9CAEACD0F(0x00000000, 0x000000DD);
	}
	*iParam0 = SYSTEM::ROUND((128f * fVar0));
	*iParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

int func_129(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam2->f_1F == 0x00000004)
	{
		return 0x00000000;
	}
	if (func_52(uParam3) != 0x00000002)
	{
		return 0x00000000;
	}
	if (func_52(uParam2) == 0x00000002)
	{
		return 0x00000000;
	}
	if (func_286(uParam0) >= 0x00000001)
	{
		return 0x00000000;
	}
	vVar0 = { func_283(uParam0) };
	fVar1 = (vVar0.z - uParam1->f_1D.f_2);
	if (fVar1 < 0.1f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_130(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_75(uParam0) == 0x00000048 || func_75(uParam0) == 0x00000049)
	{
		return 0x00000000;
	}
	fVar0 = (fParam3 - uParam1->f_3[0x00000000 /*3*/].f_2);
	bVar1 = (uParam0->f_1F != 0x00000004 || uParam0->f_4.f_14 > 0x00000000);
	bVar2 = iParam4 < 0x00000001;
	if (!bVar1)
	{
		return 0x00000000;
	}
	if (!bVar2)
	{
		return 0x00000000;
	}
	if (!func_132(uParam0, uParam1, *uParam2))
	{
		return 0x00000000;
	}
	if (fVar0 < 0.8f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_131(var uParam0)
{
	uParam0->f_3F = 0f;
}

bool func_132(var uParam0, var uParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar0 = { uParam1->f_10[0x00000000 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_10[0x00000003 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	uVar2 = func_76(uParam0->f_25, vVar0, vVar1, func_77(uParam1));
	return uVar2;
}

int func_133(var uParam0, var uParam1, vector3 vParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	
	if (!bParam3)
	{
		return 0x00000000;
	}
	if (func_75(uParam0) == 0x0000004B)
	{
		return 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0)) && unk_0xC7AD44C77841DD56(func_265(uParam0)))
	{
		return 0x00000000;
	}
	if (func_136(uParam0) > unk_0xF4CCC8CB6DE7F1AE())
	{
		return 0x00000000;
	}
	if (!func_104(uParam0, 0x00000400))
	{
		return 0x00000000;
	}
	if (!func_104(uParam0, 0x00000200))
	{
		return 0x00000000;
	}
	if (func_104(uParam0, 0x00000008))
	{
		return 0x00000000;
	}
	if (func_228(&(uParam0->f_4), 0x00000010))
	{
		return 0x00000000;
	}
	vVar0 = { func_283(uParam1) };
	if (func_69(uParam0->f_28, vVar0 - vParam2) > 0f)
	{
		return 0x00000000;
	}
	fVar1 = 2f;
	if (func_75(uParam0) == 0x00000048 || func_75(uParam0) == 0x00000049)
	{
		fVar1 = 0.45f;
	}
	else if (func_15(uParam0) > 0x00000005)
	{
		fVar1 = 1.5f;
	}
	fVar2 = SYSTEM::VDIST2(vVar0, func_135(uParam0));
	if (fVar2 > (fVar1 * fVar1))
	{
		return 0x00000000;
	}
	vVar3 = { func_135(uParam0) };
	vVar4 = { vVar0 - vVar3 };
	fVar5 = func_69(uParam0->f_2B, vVar4);
	fVar6 = func_69(uParam0->f_28, vVar4);
	fVar7 = func_69(0f, 0f, 1f, vVar4);
	vVar8 = { unk_0x64430C979F516F7A(func_265(uParam0), 0x0000EB95, 0f, 0f, 0f) };
	vVar9 = { vVar0 - vVar8 };
	fVar10 = func_69(uParam0->f_2B, vVar9);
	fVar11 = (unk_0x755FF954DAE327E1(fVar5) - unk_0x755FF954DAE327E1(fVar10));
	fVar11 = (fVar11 * 0.3f);
	if (!func_134(uParam0->f_21, &vVar8, &(uParam0->f_28), &vVar0, &(uParam1->f_A)))
	{
		return 0x00000000;
	}
	if (unk_0x755FF954DAE327E1(fVar5) > (0.65f + fVar11))
	{
		return 0x00000000;
	}
	if (fVar6 < -0.9f)
	{
		return 0x00000000;
	}
	if (fVar7 > 0.9f)
	{
		return 0x00000000;
	}
	func_276(uParam1, vVar0);
	unk_0xA47B46945FF6DE74(*uParam1, vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	return 0x00000001;
}

int func_134(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x61890296D3AA030F(iParam0, &uVar2, &uVar1, &vVar3, &vVar0);
		vVar0 = { vVar0 + vVar3 * Vector(0.4f, 0.4f, 0.4f) };
		fVar4 = unk_0x6117725E0134737F();
		*uParam3 = { *uParam3 + *uParam4 * Vector(fVar4, fVar4, fVar4) };
		vVar5 = { *uParam1 };
		fVar6 = func_69(*uParam3 - vVar5, *uParam2);
		bVar7 = fVar6 < 0.35f;
		if (bVar7)
		{
			fVar8 = func_69(*uParam4, *uParam2);
			if (fVar8 < 0f)
			{
				fVar9 = (fVar6 / fVar8);
				fVar9 = func_11(fVar9, 0f, fVar4);
				*uParam3 = { *uParam3 - *uParam4 * Vector(fVar9, fVar9, fVar9) };
				fVar10 = func_69(*uParam3 - vVar0, *uParam2);
				if (fVar10 < -0.1f)
				{
					*uParam3 = { *uParam3 - *uParam2 * Vector(fVar10, fVar10, fVar10) };
				}
			}
			else
			{
				*uParam3 = { *uParam3 - *uParam2 * Vector(fVar6, fVar6, fVar6) };
			}
		}
		return bVar7;
	}
	return 0x00000000;
}

Vector3 func_135(var uParam0)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_21))
	{
		unk_0xC01410D88E471560(uParam0->f_21);
		unk_0x61890296D3AA030F(uParam0->f_21, &uVar2, &uVar1, &vVar3, &vVar0);
		vVar0 = { vVar0 + vVar3 * Vector(0.4f, 0.4f, 0.4f) };
	}
	return vVar0;
}

int func_136(var uParam0)
{
	return uParam0->f_38;
}

void func_137(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam7)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;
	
	if (!func_104(uParam1, 0x00000400))
	{
		fVar0 = func_69(uParam1->f_2B, vParam6 - uParam1->f_25);
		iVar1 = func_265(uParam1);
		sVar2 = "mini@tennis";
		sVar3 = func_194(fVar0 > 0f, "react_ball_out", "react_ball_out_lt");
		bVar4 = 0x00000000;
		unk_0xA3BF0AA5A2608191(iVar1);
		unk_0x39C50C474849547D(iVar1, sVar2, sVar3, 0f, 1f, 0x00000001);
		func_58(uParam1, 0x00000400);
		func_80(&(uParam1->f_4), 0x00000010);
		func_7(uParam1, unk_0x1C0640BA9A7327B3() + 2442);
		if ((0x00000001 && !func_228(&((uParam0[iParam3 /*94*/])->f_4), 0x00000100)) && unk_0x1C0640BA9A7327B3() > func_254(uParam0[iParam3 /*94*/]))
		{
			iParam5 = (0x00000001 - iParam5);
			if (bParam7)
			{
				bVar4 = (((*uParam2)[0x00000000 /*8*/] + (*uParam2)[0x00000001 /*8*/]) + 1 % 0x00000006) == 0x00000000;
				if (unk_0xEAE0D21A50E6C7F4(((*uParam2)[0x00000000 /*8*/] + (*uParam2)[0x00000001 /*8*/]) + 1, 0x00000000) || bVar4)
				{
					iParam5 = 0x00000001;
					iParam4 = (0x00000001 - iParam4);
				}
			}
			else if (uParam0->f_679 == 0x00000001)
			{
				if (((*uParam2)[0x00000000 /*8*/] >= 0x00000004 && ((*uParam2)[0x00000000 /*8*/] - (*uParam2)[0x00000001 /*8*/]) >= 0x00000002) || ((*uParam2)[0x00000001 /*8*/] >= 0x00000004 && ((*uParam2)[0x00000001 /*8*/] - (*uParam2)[0x00000000 /*8*/]) >= 0x00000002))
				{
					iParam4 = (0x00000001 - iParam4);
				}
			}
			if (iParam3 == iParam4)
			{
				func_80(&((uParam0[iParam3 /*94*/])->f_4), 0x00000100);
				func_227(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0x00000000, 0x00000000, 0x00000000, 0x00000001, bVar4, 0x00000000);
			}
			else
			{
				func_80(&((uParam0[iParam3 /*94*/])->f_4), 0x00000100);
				func_218(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0x00000000, 0x00000001, bVar4, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_138(var uParam0, var uParam1)
{
	uParam0->f_41 = uParam1;
}

int func_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	var uVar14;
	float fVar15;
	float fVar16;
	
	iVar0 = 0x0000004B;
	fVar1 = 1000f;
	unk_0x6DE022225BD968DB(*uParam3, *uParam4, uParam0->f_25, uParam0->f_28, &fVar2);
	fVar5 = func_327(uParam0->f_1F != 0x00000004, 0.5f, 1.2f);
	if (fVar2 <= fVar5)
	{
		return 0x0000004B;
	}
	vVar6 = { *uParam4 - *uParam3 * Vector(fVar2, fVar2, fVar2) };
	vVar7 = { *uParam3 + vVar6 };
	vVar7.z = uParam3->f_2;
	fVar8 = (vVar7.z - uParam0->f_25.f_2);
	if (fVar8 > 2f)
	{
		return 0x0000004B;
	}
	iVar9 = 0x00000000;
	while (iVar9 < (0x0000004D - 0x00000001))
	{
		if (((uParam2[iVar9 /*12*/])->f_1 >= 0f && iVar9 != 0x00000048) && iVar9 != 0x00000049)
		{
			vVar3 = { func_85(uParam0, *(uParam1[iVar9 /*3*/])) };
			vVar4 = { uParam0->f_25 + vVar3 };
			fVar10 = SYSTEM::VDIST2(vVar4, vVar7);
			if (fVar10 < fVar1)
			{
				fVar1 = fVar10;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	vVar12 = { vVar7 + uParam0->f_28 };
	vVar13 = { vVar7 - uParam0->f_28 };
	if (iVar0 == 0x00000048)
	{
		iVar11 = func_143(uParam0, &vVar12, &vVar13, &vLocal_242, &vLocal_244, &vLocal_245, 0x00000000, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0x00000000)
		{
			func_142(uParam0, 0.5f);
			func_141(uParam0, 1f);
			func_140(uParam0, 0x00000002);
		}
		else
		{
			func_142(uParam0, fVar15);
			func_141(uParam0, fVar16);
			func_140(uParam0, iVar11);
			iVar0 = 0x0000004B;
		}
	}
	else if (iVar0 == 0x00000049)
	{
		iVar11 = func_143(uParam0, &vVar12, &vVar13, &vLocal_238, &vLocal_240, &vLocal_241, 0x00000001, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0x00000000)
		{
			func_142(uParam0, 0.5f);
			func_141(uParam0, 1f);
			func_140(uParam0, 0x00000002);
		}
		else
		{
			func_142(uParam0, fVar15);
			func_141(uParam0, fVar16);
			func_140(uParam0, iVar11);
			iVar0 = 0x0000004B;
		}
	}
	return iVar0;
}

void func_140(var uParam0, int iParam1)
{
	uParam0->f_34 = iParam1;
}

void func_141(var uParam0, float fParam1)
{
	uParam0->f_47 = fParam1;
}

void func_142(var uParam0, float fParam1)
{
	uParam0->f_46 = fParam1;
}

int func_143(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	
	fVar0 = 0f;
	unk_0x6DE022225BD968DB(*uParam1, *uParam2, uParam0->f_25, uParam0->f_28, &fVar0);
	if (fVar0 < 0f || fVar0 > 1f)
	{
		return 0x00000000;
	}
	vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
	vVar2 = { vVar1 - uParam0->f_25 };
	fVar3 = func_69(vVar2, uParam0->f_2B);
	if (unk_0x755FF954DAE327E1(fVar3) < 2.85f)
	{
		return 0x00000000;
	}
	uVar4 = vVar2.z;
	vVar5 = { fVar3, 0f, uVar4 };
	*fParam7 = unk_0x89AA362D00A86F72(vVar5, *uParam5, *uParam3, 0x00000000);
	*fParam8 = unk_0x89AA362D00A86F72(vVar5, func_116(bParam6, *uParam5, *uParam4), func_116(bParam6, *uParam4, *uParam5), 0x00000000);
	if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
	{
		return 0x00000000;
	}
	*uParam9 = { vVar1 };
	return 0x00000002;
}

int func_144(var uParam0, var uParam1, var uParam2, vector3 vParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	if (unk_0xD59B17D2DFF98E26(*uParam2))
	{
		return 0x00000000;
	}
	if (func_52(uParam1) == 0x00000002 && func_286(uParam2) <= 0x00000001)
	{
		return 0x00000000;
	}
	if (uParam0->f_1F != 0x00000004)
	{
		if (!func_104(uParam0, 0x00000200))
		{
			return 0x00000000;
		}
		if (SYSTEM::VDIST2(uParam0->f_25, func_283(uParam2)) > (20f * 20f))
		{
			return 0x00000000;
		}
		if (func_228(&(uParam0->f_4), 0x00000001))
		{
			return 0x00000000;
		}
		*uParam4 = 0f;
		*uParam4 = func_69(uParam0->f_28, func_283(uParam2) - uParam0->f_25);
		vVar0 = { uParam2->f_A };
		vVar1 = { func_283(uParam2) };
		vVar0.z = 0f;
		vVar1.z = vParam3.z;
		vVar2 = { vParam3 - vVar1 };
		fVar3 = func_69(vVar0, vVar2);
		if (*uParam4 > 2f && fVar3 < 0f)
		{
			return 0x00000000;
		}
		if (*uParam4 > 2f && *uParam4 < 7.6f)
		{
			return 0x00000000;
		}
		if (*uParam4 < 0.5f)
		{
			return 0x00000001;
		}
		if (((!unk_0xB9132A06AE472728(0x00000000, 0x000000DF) && !unk_0xB9132A06AE472728(0x00000000, 0x000000E0)) && !unk_0xB9132A06AE472728(0x00000000, 0x000000E1)) && !unk_0xB9132A06AE472728(0x00000000, 0x000000DE))
		{
			return 0x00000000;
		}
	}
	else
	{
		if (!func_228(&(uParam0->f_4), 0x00000040))
		{
			return 0x00000000;
		}
		if (func_228(&(uParam0->f_4), 0x00000001))
		{
			return 0x00000000;
		}
		if (func_228(&(uParam0->f_4), 0x00000010))
		{
			return 0x00000000;
		}
		fVar4 = func_69(uParam0->f_28, func_283(uParam2) - uParam0->f_25);
		if (fVar4 > 1.2f)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	if (func_33(&(uParam0->f_4)) != 0x00000002)
	{
		if (func_146(&(uParam0->f_4)) == 0x00000003)
		{
			func_230(uParam0, 0x00000000);
		}
		else if (func_146(&(uParam0->f_4)) == 0x00000004)
		{
			func_230(uParam0, 0x00000002);
		}
		else
		{
			func_230(uParam0, 0x00000000);
		}
	}
	else
	{
		vVar5 = { uParam1->f_3[0x00000001 /*3*/] - uParam1->f_3[0x00000000 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		vVar6 = { uParam1->f_3[0x00000000 /*3*/] + vVar5 };
		vVar7 = { uParam1->f_3[0x00000003 /*3*/] + vVar5 };
		fVar0 = SYSTEM::VDIST(vVar6, uParam2->f_25);
		fVar1 = SYSTEM::VDIST(vVar7, uParam2->f_25);
		fVar2 = unk_0x755FF954DAE327E1((fVar0 - fVar1));
		fVar3 = func_124(0.15f, 0.5f, (fVar2 / 570f));
		fVar4 = unk_0x79833B02DBD2A244(0f, 1f);
		if (fVar4 < fVar3)
		{
			func_230(uParam0, 0x00000002);
		}
		else
		{
			func_230(uParam0, 0x00000000);
		}
	}
}

int func_146(var uParam0)
{
	return uParam0->f_13;
}

void func_147(var uParam0, var uParam1)
{
	uParam0->f_38 = uParam1;
}

void func_148(var uParam0, int iParam1)
{
	uParam0->f_35 = iParam1;
}

void func_149(var uParam0)
{
	float fVar0;
	float fVar1;
	
	switch (func_146(uParam0))
	{
		case 0x00000003:
		case 0x00000004:
			break;
		
		default:
			fVar0 = unk_0x79833B02DBD2A244(0f, 1f);
			fVar1 = func_327(uParam0->f_14 == 0x00000002, 0.6f, 0.75f);
			if (fVar0 < fVar1)
			{
				func_235(uParam0, 0x00000003);
			}
			else
			{
				func_235(uParam0, 0x00000004);
			}
			break;
	}
}

int func_150(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	vector3 vVar28;
	vector3 vVar29;
	vector3 vVar30;
	float fVar31;
	float fVar32;
	int iVar33;
	float fVar34;
	vector3 vVar35;
	float fVar36;
	float fVar37;
	
	iVar0 = 0x0000004B;
	fVar1 = 0.75f;
	fVar2 = 100f;
	unk_0x6DE022225BD968DB(*(uParam4[0x00000000 /*3*/]), *(uParam4[0x00000001 /*3*/]), uParam0->f_25, uParam0->f_28, &fVar6);
	vVar7 = { *(uParam4[0x00000001 /*3*/]) - *(uParam4[0x00000000 /*3*/]) * Vector(fVar6, fVar6, fVar6) };
	vVar8 = { *(uParam4[0x00000000 /*3*/]) + vVar7 };
	vVar9 = { vVar8 - uParam0->f_25 };
	fVar10 = func_69(vVar9, uParam0->f_2B);
	iVar11 = 0xFFFFFFFF;
	iVar12 = 0xFFFFFFFF;
	iVar13 = 0x00000000;
	while (iVar13 < 0x0000000A)
	{
		if (iVar11 == 0xFFFFFFFF && (fVar10 - 0.2f) <= uParam1->f_623[iVar13 + 1])
		{
			iVar11 = iVar13;
		}
		if (iVar12 == 0xFFFFFFFF && (fVar10 + 0.2f) <= uParam1->f_623[iVar13 + 1])
		{
			iVar12 = iVar13;
		}
		iVar13++;
	}
	if (iVar11 == 0xFFFFFFFF)
	{
		iVar11 = func_50(fVar10 > 0f, 0x00000009, 0x00000000);
	}
	if (iVar12 == 0xFFFFFFFF)
	{
		iVar12 = func_50(fVar10 > 0f, 0x00000009, 0x00000000);
	}
	vVar15 = { uParam0->f_25 };
	iVar14 = 0x00000000;
	while (iVar14 <= 0x00000003)
	{
		iVar13 = iVar11;
		while (iVar13 <= iVar12)
		{
			iVar17 = 0x00000000;
			while (iVar17 < 0x0000000A)
			{
				iVar18 = uParam1->f_5B4[iVar13 /*11*/][iVar17];
				iVar17++;
				if ((uParam3[iVar18 /*12*/])->f_1 >= 0f)
				{
					fVar19 = ((((uParam3[iVar18 /*12*/])->f_1 - (*uParam3)[iVar18 /*12*/]) * IntToFloat((uParam3[iVar18 /*12*/])->f_3)) * 0.03333334f);
					fVar20 = ((fVar19 - uParam1->f_F7.f_21) / 0.03333334f);
					iVar21 = SYSTEM::FLOOR(fVar20);
					fVar22 = (fVar20 - SYSTEM::TO_FLOAT(iVar21));
					iVar3 = (iVar14 + iVar21) - 2;
					if (iVar3 < (*uParam4 - 0x00000002) && iVar3 >= 0x00000000)
					{
						if (iVar14 == 0x00000000 && (iVar18 == 0x00000048 || iVar18 == 0x00000049))
						{
							fVar24 = -1f;
							fVar25 = -1f;
							if (iVar18 == 0x00000048)
							{
								iVar23 = func_143(uParam0, uParam4[0x00000008 /*3*/], uParam4[0x00000009 /*3*/], &vLocal_242, &vLocal_244, &vLocal_245, 0x00000000, &fVar24, &fVar25, &vVar16);
							}
							else
							{
								iVar23 = func_143(uParam0, uParam4[0x00000008 /*3*/], uParam4[0x00000009 /*3*/], &vLocal_238, &vLocal_240, &vLocal_241, 0x00000001, &fVar24, &fVar25, &vVar16);
							}
							if (iVar23 != 0x00000000)
							{
								fVar26 = func_84(iVar18);
								if (fVar26 < fVar1)
								{
									fVar1 = fVar26;
									iVar0 = iVar18;
									func_142(uParam0, fVar24);
									func_141(uParam0, fVar25);
									func_140(uParam0, iVar23);
									vVar5 = { vVar16 };
								}
							}
						}
						else if (iVar18 != 0x00000048 && iVar18 != 0x00000049)
						{
							vVar4 = { func_85(uParam0, *(uParam2[iVar18 /*3*/])) };
							vVar27 = { vVar15 + vVar4 };
							vVar28 = { func_122(*(uParam4[iVar3 /*3*/]), *(uParam4[iVar3 + 1 /*3*/]), fVar22) };
							vVar29 = { vVar28 - vVar4 };
							vVar29.z = uParam0->f_25.f_2;
							vVar30 = { vVar27 - vVar28 };
							fVar31 = func_69(vVar30, uParam0->f_28);
							fVar32 = func_69(uParam0->f_28, func_283(&(uParam1->f_F7)) - uParam0->f_25);
							iVar33 = 0x00000000;
							while (((fVar31 > 0f && (iVar3 - iVar33) > 0x00000002) && func_151(uParam0)) && fVar32 > 0f)
							{
								iVar33++;
								vVar28 = { unk_0xE3C0A5DBED4FBAB7(vVar27, *(uParam4[(iVar3 - iVar33) /*3*/]), *(uParam4[((iVar3 - iVar33) - 0x00000001) /*3*/]), 0x00000001) };
								vVar30 = { vVar27 - vVar28 };
								fVar31 = func_69(vVar30, uParam0->f_28);
							}
							if (unk_0x755FF954DAE327E1(fVar31) > 0.3f)
							{
								fVar31 = (fVar31 * (0.3f / unk_0x755FF954DAE327E1(fVar31)));
							}
							vVar30 = { vVar30 - uParam0->f_28 * Vector(fVar31, fVar31, fVar31) };
							fVar34 = SYSTEM::VMAG(vVar30);
							if (fVar34 < 0.15f)
							{
								fVar34 = 0f;
							}
							fVar34 = (fVar34 + func_84(iVar18));
							if (fVar34 < fVar1)
							{
								vVar35 = { uParam0->f_25 - vVar28 };
								fVar36 = func_69(vVar30, vVar35);
								if (fVar36 > 0f)
								{
									if (fVar34 > 0.25f)
									{
										fVar37 = (2.5f * (fVar34 - 0.25f));
										fVar34 = (fVar34 + fVar37);
									}
								}
							}
							if (fVar34 < fVar2)
							{
								fVar2 = fVar34;
								vVar5 = { vVar28 };
							}
							if (fVar34 < fVar1)
							{
								if (iVar14 > 0x00000000)
								{
								}
								fVar1 = fVar34;
								iVar0 = iVar18;
								*uParam5 = { vVar29 };
								*uParam6 = (iVar33 - iVar14);
								vVar5 = { vVar28 };
							}
						}
					}
				}
			}
			iVar13++;
		}
		*uParam7 = { vVar5 };
		if (fVar1 <= 0.4f)
		{
			return iVar0;
		}
		if (iVar0 != 0x0000004B)
		{
			return iVar0;
		}
		if (uParam0->f_1F == 0x00000004)
		{
			return 0x0000004B;
		}
		iVar14++;
	}
	return iVar0;
}

int func_151(var uParam0)
{
	if (uParam0->f_1F == 0x00000004)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_152(var uParam0, vector3 vParam1, bool bParam2)
{
	if (!bParam2)
	{
		return 0x00000000;
	}
	if (func_75(uParam0) != 0x0000004B)
	{
		return 0x00000000;
	}
	if (SYSTEM::VDIST(uParam0->f_25, vParam1) > 100f)
	{
		return 0x00000000;
	}
	if (func_228(&(uParam0->f_4), 0x00000020))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_153(var uParam0)
{
	return uParam0->f_40 > 0.5f;
}

void func_154(var uParam0)
{
	uParam0->f_40 = 0f;
}

void func_155(var uParam0)
{
	uParam0->f_40 = (uParam0->f_40 + unk_0x6117725E0134737F());
}

void func_156(var uParam0)
{
	uParam0->f_3C = (uParam0->f_3C + unk_0x6117725E0134737F());
}

void func_157(var uParam0)
{
	uParam0->f_3D = (uParam0->f_3D + unk_0x6117725E0134737F());
}

void func_158(var uParam0)
{
	uParam0->f_3D = 0f;
}

float func_159(var uParam0)
{
	return uParam0->f_3D;
}

void func_160(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	
	*bParam2 = 0x00000000;
	*bParam3 = 0x00000000;
	switch (func_146(&(uParam0->f_4)))
	{
		case 0x00000002:
			if (unk_0xC844350D5D58C99A(uParam1->f_F7) && func_286(&(uParam1->f_F7)) > 0x00000000)
			{
				fVar0 = unk_0x79833B02DBD2A244(0f, 1f);
				fVar1 = func_327(uParam0->f_4.f_14 == 0x00000002, 0.6f, 0.75f);
				if (fVar0 < fVar1)
				{
					if (!func_228(&(uParam0->f_4), 0x00000002))
					{
						*bParam2 = 0x00000001;
						func_80(&(uParam0->f_4), 0x00000002);
					}
					func_235(&(uParam0->f_4), 0x00000003);
				}
				else
				{
					if (!func_228(&(uParam0->f_4), 0x00000002))
					{
						*bParam3 = 0x00000001;
						func_80(&(uParam0->f_4), 0x00000002);
					}
					func_235(&(uParam0->f_4), 0x00000004);
				}
			}
			break;
		
		case 0x00000003:
			*bParam2 = 0x00000001;
			break;
		
		case 0x00000004:
			*bParam3 = 0x00000001;
			break;
	}
}

int func_161(var uParam0, var uParam1, bool bParam2)
{
	if (func_69(uParam1->f_28, uParam0->f_F7.f_A) > 0f)
	{
		return 0x00000000;
	}
	if (func_69(uParam1->f_28, uParam0->f_62F[0x00000001 /*3*/] - uParam1->f_25) > 0f)
	{
		return 0x00000000;
	}
	if (func_75(uParam1) != 0x0000004B)
	{
		return 0x00000000;
	}
	if (!bParam2)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_162(var uParam0)
{
	return uParam0->f_3F > 3f;
}

int func_163(var uParam0)
{
	return uParam0->f_41;
}

void func_164(var uParam0)
{
	uParam0->f_44 = 0f;
}

int func_165(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam7)
{
	if (!func_228(&(uParam1->f_4), 0x00000020))
	{
		return 0x00000000;
	}
	if (func_228(&(uParam1->f_4), 0x00000008))
	{
		return 0x00000000;
	}
	if (func_75(uParam1) != 0x0000004B)
	{
		return 0x00000000;
	}
	func_137(uParam0, uParam1, uParam2, iParam3, iParam4, iParam5, vParam6, bParam7);
	func_235(&(uParam1->f_4), 0x00000005);
	func_80(&(uParam1->f_4), 0x00000008);
	func_217(&(uParam1->f_4), 0x00000020);
	return 0x00000001;
}

float func_166(var uParam0)
{
	return uParam0->f_45;
}

float func_167(var uParam0)
{
	return uParam0->f_44;
}

void func_168(var uParam0)
{
	uParam0->f_44 = (uParam0->f_44 + unk_0x6117725E0134737F());
}

void func_169(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	uParam1->f_F7.f_21 = (uParam1->f_F7.f_21 - unk_0x6117725E0134737F());
	while (uParam1->f_F7.f_21 <= 0f)
	{
		uParam1->f_F7.f_21 = (uParam1->f_F7.f_21 + 0.03333334f);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000016)
		{
			uParam1->f_62F[iVar0 /*3*/] = { uParam1->f_62F[iVar0 + 1 /*3*/] };
			iVar0++;
		}
		*uParam2 = { uParam1->f_62F[iVar0 /*3*/] };
		func_173(uParam0, uParam3, uParam4, uParam5, uParam6, iParam7);
		iVar1 = func_279(&(uParam1->f_BD), uParam2, uParam3, &(uParam1->f_67A), uParam4, uParam5, uParam6, iParam7, 0x00000000, 0.03333334f, 0x00000000, 0.1f, 0x00000000);
		if (iVar1 == 0x00000001)
		{
			if (func_228(&(uParam0->f_4), 0x00000020) && func_167(uParam0) == 0f)
			{
				func_164(uParam0);
				func_172(uParam0, (SYSTEM::TO_FLOAT(iVar0) * unk_0x6117725E0134737F()));
			}
		}
		if (!func_171(*uParam2))
		{
			uParam1->f_62F[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_62F[iVar0 /*3*/] = { func_283(&(uParam1->f_F7)) };
		}
		func_170(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	}
}

void func_170(var uParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	uParam0->f_4E = { vParam1 };
	uParam0->f_51 = uParam2;
	uParam0->f_52 = uParam3;
	uParam0->f_53 = uParam4;
	uParam0->f_54 = uParam5;
}

int func_171(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_172(var uParam0, float fParam1)
{
	uParam0->f_45 = fParam1;
}

void func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { uParam0->f_4E };
	*uParam2 = uParam0->f_51;
	*uParam3 = uParam0->f_52;
	*uParam4 = uParam0->f_53;
	*uParam5 = uParam0->f_54;
}

void func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000018)
	{
		iVar1 = func_279(&(uParam1->f_BD), uParam2, uParam3, &(uParam1->f_67A), uParam4, uParam5, uParam6, iParam7, 0x00000000, 0.03333334f, 0x00000000, 0.1f, 0x00000000);
		if (iVar1 == 0x00000001)
		{
			if (func_228(&(uParam0->f_4), 0x00000020) && func_167(uParam0) == 0f)
			{
				func_164(uParam0);
				func_172(uParam0, (SYSTEM::TO_FLOAT(iVar0) * unk_0x6117725E0134737F()));
			}
		}
		if (!func_171(*uParam2))
		{
			uParam1->f_62F[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_62F[iVar0 /*3*/] = { func_283(&(uParam1->f_F7)) };
		}
		iVar0++;
	}
	func_170(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	if (!func_104(uParam0, 0x00008000))
	{
		func_58(uParam0, 0x00008000);
		uParam1->f_F7.f_21 = 0.03333334f;
	}
}

bool func_175(var uParam0)
{
	return uParam0->f_1A;
}

int func_176(var uParam0)
{
	return uParam0->f_1;
}

void func_177(var uParam0, var uParam1, bool bParam2)
{
	if (unk_0xC844350D5D58C99A(*uParam1))
	{
		if (bParam2)
		{
			if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0)))
			{
				unk_0x0C8C0C840C2D1AD2(func_265(uParam0), *uParam1, 0xFFFFFFFF, 0x00000006, 0x00000002);
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0)))
		{
			unk_0xBC43ED9FE28DB191(func_265(uParam0));
		}
	}
}

void func_178(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_179(var uParam0, int iParam1)
{
	func_180(uParam0, iParam1);
}

void func_180(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_181(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (!bParam3)
	{
		if (((func_253(uParam0) > func_190(uParam1) && func_75(uParam2) == 0x0000004B) && uParam0->f_679 != 0x00000001) || (((func_253(uParam0) > func_190(uParam1) && func_75(uParam2) == 0x0000004B) && uParam0->f_679 == 0x00000001) && unk_0x0F1CCD77290EE12F()))
		{
			func_234(uParam2, 0x0000004A);
			func_215(uParam0, 0x00000000);
		}
	}
	else if (func_192(0x00000002))
	{
		func_234(uParam2, 0x0000004A);
		func_215(uParam0, 0x00000000);
	}
	if (func_104(uParam2, 0x00000004))
	{
		if (func_272(uParam1) == 0x00000001)
		{
			if (uParam2->f_1 == 0x00000000)
			{
				vVar5 = { uParam0->f_BD.f_3[0x00000003 /*3*/] + uParam2->f_2B };
				vVar6 = { uParam0->f_BD.f_3[0x00000003 /*3*/] };
			}
			else
			{
				vVar5 = { uParam0->f_BD.f_3[0x00000001 /*3*/] + uParam2->f_2B };
				vVar6 = { uParam0->f_BD.f_3[0x00000001 /*3*/] };
			}
		}
		else if (uParam2->f_1 == 0x00000000)
		{
			vVar5 = { uParam0->f_BD.f_3[0x00000002 /*3*/] - uParam2->f_2B };
			vVar6 = { uParam0->f_BD.f_3[0x00000002 /*3*/] };
		}
		else
		{
			vVar5 = { uParam0->f_BD.f_3[0x00000000 /*3*/] - uParam2->f_2B };
			vVar6 = { uParam0->f_BD.f_3[0x00000000 /*3*/] };
		}
		if (uParam0->f_679 == 0x00000001)
		{
			iVar0 = 0x00000002;
		}
		else if (uParam2->f_4.f_14 == 0x00000000)
		{
			iVar7 = unk_0x09AC81E49EA267F7(0x00000002, 0x00000006);
			iVar0 = func_50(unk_0x79833B02DBD2A244(0f, 1f) < 0.2f, 0x00000006, iVar7);
		}
		else if (uParam2->f_4.f_14 == 0x00000001)
		{
			iVar7 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000004);
			iVar0 = func_50(unk_0x79833B02DBD2A244(0f, 1f) < 0.1f, 0x00000006, iVar7);
		}
		else if (uParam2->f_4.f_14 == 0x00000002)
		{
			iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
		}
		vVar5 = { func_122(vVar6, vVar5, unk_0x79833B02DBD2A244(0f, 1f)) };
		fVar2 = func_189(uParam2->f_25, vVar5);
		fVar3 = func_189(uParam2->f_25, uParam2->f_25 + uParam2->f_28);
		fVar4 = (fVar2 - fVar3);
		if (bParam3)
		{
			iVar0 = 0x00000002;
		}
		Var1 = { uParam0->f_11A[iVar0 /*2*/] };
		*uParam2 = fVar4;
		func_230(uParam2, 0x00000006);
		if (iVar0 == 0x00000001 || iVar0 == 0x00000000)
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_679 == 0x00000001, "TENNIS_AMB_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_265(uParam2), 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, func_194(uParam0->f_679 == 0x00000001, "TENNIS_AMB_SERVE_MASTER", "TENNIS_NPC_SERVE_MASTER"), func_265(uParam2), 0x00000000, 0x00000000, 0x00000000);
		}
		unk_0x15AFB6CBDE990FB6(uParam0->f_F7, 0x00000000, 0x00000001);
		func_182(uParam0, uParam2, &Var1);
		func_277(uParam2, 0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_182(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = *uParam1;
	vVar1 = { func_183(SYSTEM::TO_FLOAT(*uParam2), SYSTEM::TO_FLOAT(uParam2->f_1), fVar0, &(uParam1->f_28), &(uParam1->f_2B)) };
	if (unk_0xC844350D5D58C99A(uParam0->f_F7))
	{
		if (uParam0->f_679 != 0x00000001 && !func_275(&(uParam0->f_F7)))
		{
			func_274(&(uParam0->f_F7));
			func_119(&(uParam0->f_F7));
		}
		uParam0->f_F7.f_A = { vVar1 };
		func_276(&(uParam0->f_F7), unk_0x68F4C0EC296D3901(uParam0->f_F7, 0x00000001));
		uParam0->f_F7.f_10 = { func_283(&(uParam0->f_F7)) };
		func_118(&(uParam0->f_F7), unk_0xF4CCC8CB6DE7F1AE() + 5);
		func_117(&(uParam0->f_F7));
		func_115(&(uParam0->f_F7), 0x00000001);
		func_114(uParam0->f_F7, 0x00000001);
	}
	func_287(&(uParam0->f_F7), 0x00000004);
}

Vector3 func_183(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_188(*uParam3) };
	func_184(&vVar0, fParam2, 0f, 0f, 1f);
	vVar1 = { func_188(*uParam4) };
	func_184(&vVar0, fParam1, vVar1);
	vVar0 = { vVar0 * Vector(fParam0, fParam0, fParam0) };
	return vVar0;
}

void func_184(var uParam0, float fParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	
	vParam2 = { func_188(vParam2) };
	fVar0 = SYSTEM::COS(fParam1);
	fVar1 = SYSTEM::SIN(fParam1);
	*uParam0 = { func_187(*uParam0, vParam2) * Vector(fVar0, fVar0, fVar0) + func_186(vParam2, *uParam0) * Vector(fVar1, fVar1, fVar1) + func_185(*uParam0, vParam2) };
}

Vector3 func_185(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 * FtoV(func_69(vParam0, vParam1)) };
	return vVar0;
}

Vector3 func_186(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_187(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 - func_185(vParam0, vParam1) };
	return vVar0;
}

Vector3 func_188(vector3 vParam0)
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

float func_189(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_190(var uParam0)
{
	return uParam0->f_1B;
}

void func_191(int iParam0)
{
	Global_1B084 = (Global_1B084 || iParam0);
}

bool func_192(int iParam0)
{
	return (Global_1B084 && iParam0) != 0x00000000;
}

void func_193(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_265(uParam0);
	if (unk_0xC844350D5D58C99A(*uParam1) && unk_0xC844350D5D58C99A(iVar0))
	{
		unk_0x9F528B1B53FBC5D9(*uParam1, iVar0, unk_0x4A089F2B762B8D33(iVar0, 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		func_114(*uParam1, 0x00000001);
	}
}

char* func_194(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_3B == 0x00000002)
	{
		iVar0 = func_265(uParam0);
		iVar1 = func_44(iVar0);
		if (iVar1 == 0x00000091)
		{
			iVar1 = func_196(iVar0);
		}
		iVar2 = unk_0x16F2683693E537C9();
		if (((iVar1 == 0x00000000 || iVar1 == 0x00000001) || iVar1 == 0x00000002) || iVar0 == iVar2)
		{
			uParam0->f_3B = 0x00000001;
		}
		else if (unk_0xCED082ADD3739B9F(iVar0) && iVar1 != 0x0000000E)
		{
			uParam0->f_3B = 0x00000001;
		}
		else
		{
			uParam0->f_3B = 0x00000000;
		}
	}
	return uParam0->f_3B == 0x00000001;
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar2 = (func_198() - 0x00000001);
		iVar0 = 0x00000003;
		while (iVar0 <= iVar2)
		{
			if (func_197(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_197(int iParam0)
{
	if (!func_43(iParam0))
	{
		return func_46(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

int func_198()
{
	if (Global_7830 == 0x00000000 || Global_7830 == 0x00000002)
	{
		return 0x000000A7;
	}
	return 0x000000A1;
}

int func_199(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(uParam1->f_F7))
	{
		func_157(uParam0);
		if ((unk_0xBFC0798A6E3417F9(0x00000000, 0x000000DF) && !bParam4) || (func_159(uParam0) > 30f && uParam1->f_679 == 0x00000004))
		{
			if ((((func_75(uParam0) == 0x0000004A && func_212(&(uParam0->f_49))) && !func_211(&(uParam0->f_49))) && func_210(&(uParam0->f_49)) > (1.1f + 1.25f)) && !func_104(uParam0, 0x00000040))
			{
				func_58(uParam0, 0x00000040);
				func_128(&iVar0, &iVar1, &iVar1, &iVar1, 0x00000001, 0x00000001);
				if (unk_0x9E6C8D8976DA0ECD(0x00000002))
				{
					iVar0 = (SYSTEM::ROUND((unk_0x4F3973434662D795(0x00000002, 0x000000EF) * 256f)) - 0x00000080);
				}
				func_209(uParam0, iVar0);
			}
			func_234(uParam0, 0x0000004A);
			if (!func_212(&(uParam0->f_49)))
			{
				func_207(&(uParam0->f_49));
			}
			if (func_211(&(uParam0->f_49)))
			{
				func_207(&(uParam0->f_49));
				func_206(&(uParam0->f_49));
			}
		}
		if (func_104(uParam0, 0x00000004))
		{
			if (func_104(uParam0, 0x00000040))
			{
				if (func_205(uParam0) > 0.965f)
				{
					*uParam3 = { uParam1->f_11A[0x00000000 /*2*/] };
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SMASH_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000001C2, 0x00000100);
					if (func_205(uParam0) >= 0.995f && 0x00000001)
					{
						func_278(&(uParam1->f_F7), 0x00000020);
						func_278(&(uParam1->f_F7), 0x00000040);
					}
				}
				else if (func_205(uParam0) > 0.9f)
				{
					*uParam3 = { uParam1->f_11A[0x00000001 /*2*/] };
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SMASH_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000000FA, 0x00000100);
				}
				else if (func_205(uParam0) > 0.7f)
				{
					*uParam3 = { uParam1->f_11A[0x00000002 /*2*/] };
					unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x00000100);
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SERVE_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_205(uParam0) > 0.45f)
				{
					*uParam3 = { uParam1->f_11A[0x00000003 /*2*/] };
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SERVE_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
					unk_0x5E858A00EAFA5B24(0x00000000, 0x00000096, 0x00000100);
				}
				else if (func_205(uParam0) > 0.2f)
				{
					*uParam3 = { uParam1->f_11A[0x00000004 /*2*/] };
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SERVE_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
					unk_0x5E858A00EAFA5B24(0x00000000, 0x00000064, 0x00000100);
				}
				else if (func_205(uParam0) >= 0f)
				{
					*uParam3 = { uParam1->f_11A[0x00000005 /*2*/] };
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SERVE_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
					unk_0x5E858A00EAFA5B24(0x00000000, 0x00000046, 0x00000100);
				}
			}
			else
			{
				*uParam3 = { uParam1->f_11A[0x00000006 /*2*/] };
				unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_PLYR_SERVE_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				unk_0x5E858A00EAFA5B24(0x00000000, 0x00000032, 0x00000100);
			}
			if (!func_203(uParam0, uParam1, iParam2, func_204(uParam0)))
			{
				*uParam3 = { uParam1->f_11A[0x00000007 /*2*/] };
			}
			unk_0x15AFB6CBDE990FB6(uParam1->f_F7, 0x00000000, 0x00000001);
			func_182(uParam1, uParam0, uParam3);
			func_200(&(uParam0->f_49));
			func_277(uParam0, 0x00000040);
			func_230(uParam0, 0x00000000);
			func_56(uParam0);
			func_158(uParam0);
			return 0x00000001;
		}
		if (func_159(uParam0) > 30f || (unk_0xBFC0798A6E3417F9(0x00000000, 0x000000DF) && !bParam4))
		{
			func_158(uParam0);
		}
	}
	return 0x00000000;
}

void func_200(int iParam0)
{
	func_201(iParam0);
}

void func_201(int iParam0)
{
	if (func_212(iParam0))
	{
		if (!func_211(iParam0))
		{
			iParam0->f_2 = (func_202(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

float func_202(bool bParam0)
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

int func_203(var uParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	
	vVar1 = { 0f, 0f, 0f };
	fVar8 = 1f;
	vVar6 = { unk_0x68F4C0EC296D3901(uParam1->f_F7, 0x00000001) };
	if (unk_0x51D1D19912234EA0(iParam3) > 0x0000007D)
	{
		fVar9 = 2.5f;
		fVar10 = 0.5f;
		fVar11 = 0.75f;
		iVar12 = 0x00000000;
	}
	else
	{
		fVar9 = 0.55f;
		fVar10 = 0f;
		fVar11 = 0f;
		iVar12 = 0x00000001;
	}
	vVar5 = { func_188(uParam1->f_67D) };
	fVar7 = ((SYSTEM::TO_FLOAT(iParam3) + 128f) / 256f);
	if (uParam0->f_1 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			vVar3 = { uParam1->f_BD.f_10[0x00000003 /*3*/] - vVar5 * Vector(fVar9, fVar9, fVar9) };
			vVar4 = { uParam1->f_BD.f_10[0x00000003 /*3*/] + uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f) + vVar5 * Vector(fVar10, fVar10, fVar10) };
			vVar1 = { func_122(vVar3, vVar4, fVar7) };
			if (func_69(uParam0->f_2B, vVar1 - vVar6) > 0f)
			{
				fVar8 = -1f;
			}
		}
		else if (iParam2 == 0x00000000)
		{
			vVar4 = { uParam1->f_BD.f_10[0x00000002 /*3*/] + vVar5 * Vector(fVar9, fVar9, fVar9) };
			vVar3 = { uParam1->f_BD.f_10[0x00000002 /*3*/] - uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f) - vVar5 * Vector(fVar11, fVar11, fVar11) };
			vVar1 = { func_122(vVar3, vVar4, fVar7) };
			if (func_69(uParam0->f_2B, vVar1 - vVar6) < 0f)
			{
				fVar8 = -1f;
			}
		}
	}
	else if (iParam2 == 0x00000001)
	{
		vVar3 = { uParam1->f_BD.f_10[0x00000001 /*3*/] + vVar5 * Vector(fVar9, fVar9, fVar9) };
		vVar4 = { uParam1->f_BD.f_10[0x00000001 /*3*/] - uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f) - vVar5 * Vector(fVar10, fVar10, fVar10) };
		vVar1 = { func_122(vVar3, vVar4, fVar7) };
		if (func_69(uParam0->f_2B, vVar1 - vVar6) > 0f)
		{
			fVar8 = -1f;
		}
	}
	else if (iParam2 == 0x00000000)
	{
		vVar4 = { uParam1->f_BD.f_10[0x00000000 /*3*/] - vVar5 * Vector(fVar9, fVar9, fVar9) };
		vVar3 = { uParam1->f_BD.f_10[0x00000000 /*3*/] + uParam1->f_67D * Vector(0.5f, 0.5f, 0.5f) + vVar5 * Vector(fVar11, fVar11, fVar11) };
		vVar1 = { func_122(vVar3, vVar4, fVar7) };
		if (func_69(uParam0->f_2B, vVar1 - vVar6) < 0f)
		{
			fVar8 = -1f;
		}
	}
	vVar1.z = uParam0->f_25.f_2;
	vVar2 = { func_188(vVar1 - vVar6) };
	fVar0 = unk_0x07AB02F3C4AE2B04(uParam0->f_28, uParam0->f_28.f_1, vVar2.x, vVar2.y);
	fVar0 = (fVar0 * fVar8);
	*uParam0 = fVar0;
	if (iParam2 == 0x00000000)
	{
		*uParam0 = (*uParam0 * -1f);
	}
	return iVar12;
}

int func_204(var uParam0)
{
	return uParam0->f_4C;
}

float func_205(var uParam0)
{
	return uParam0->f_3C;
}

void func_206(int iParam0)
{
	if (func_212(iParam0))
	{
		if (func_211(iParam0))
		{
			iParam0->f_1 = (func_202(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0674E58A79778E99(iParam0, 0x00000002);
		}
	}
}

void func_207(int iParam0)
{
	func_208(iParam0, 0f);
}

void func_208(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_202(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_209(var uParam0, int iParam1)
{
	uParam0->f_4C = iParam1;
}

float func_210(var uParam0)
{
	if (func_212(uParam0))
	{
		if (func_211(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_202(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_211(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_212(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_213(var uParam0, var uParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_1F != 0x00000004)
	{
		if (!func_228(&(uParam0->f_4), 0x00000100) && !func_228(&(uParam0->f_4), 0x00000010))
		{
			if (func_75(uParam0) == 0x0000004B)
			{
				if (((unk_0xBFC0798A6E3417F9(0x00000000, 0x000000DF) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000E0)) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000E1)) || unk_0xBFC0798A6E3417F9(0x00000000, 0x000000DE))
				{
					vVar0 = { func_283(uParam1) - uParam0->f_25 };
					fVar1 = func_69(uParam0->f_2B, vVar0);
					if (fVar1 >= 0f)
					{
						func_234(uParam0, 0x0000000D);
					}
					else
					{
						func_234(uParam0, 0x00000001);
					}
					func_148(uParam0, 0x00000000);
					func_58(uParam0, 0x00010000);
				}
			}
		}
	}
}

int func_214(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam1 /*94*/])) && unk_0xD1960163A3042274(func_265(uParam0[iParam1 /*94*/]), 0x0E763797) != 0x00000007)
	{
		return 0x00000000;
	}
	else if ((!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam1 /*94*/])) && ((bParam4 || iParam3 == 0x00000004) || iParam3 == 0x00000001)) && !func_104(uParam0[iParam1 /*94*/], 0x00002000))
	{
		if (iParam1 == iParam2)
		{
			func_27(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_261(func_265(uParam0[iParam1 /*94*/]), 0x00000001);
		unk_0xF895E10BF4C72645(func_265(uParam0[iParam1 /*94*/]), 0x00000000, 0x00000000);
		func_58(uParam0[iParam1 /*94*/], 0x00002000);
	}
	else if (func_104(uParam0[iParam1 /*94*/], 0x00002000) && iParam1 == iParam2)
	{
		if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam1 /*94*/])) && unk_0x43AB9B3158C51226(func_265(uParam0[iParam1 /*94*/])))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_265(uParam0[iParam1 /*94*/])), "Intro") && unk_0xB4E9220C59EBC663(func_265(uParam0[iParam1 /*94*/])))
			{
				unk_0x77CE1D0498EE13D6(func_265(uParam0[iParam1 /*94*/]), "running");
			}
		}
	}
	return 0x00000001;
}

void func_215(var uParam0, int iParam1)
{
	uParam0->f_688 = iParam1;
}

void func_216(var uParam0)
{
	uParam0->f_16 = 0x00000000;
}

void func_217(var uParam0, int iParam1)
{
	func_255(&(uParam0->f_19), iParam1);
}

void func_218(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	char* sVar8;
	
	if ((uParam0->f_1F != 0x00000004 && !unk_0xEB6A8945D1AC98A1(func_265(uParam0))) && !bParam5)
	{
		func_232(uParam1->f_679, 0x00000001);
	}
	if (!bParam5)
	{
		func_277(uParam0, 0x00000080);
	}
	func_217(&(uParam0->f_4), 0x00000004);
	func_217(&(uParam0->f_4), 0x00000002);
	func_234(uParam0, 0x0000004B);
	if ((uParam0->f_1F == 0x00000004 && !bParam5) && uParam1->f_679 != 0x00000001)
	{
		func_235(&(uParam0->f_4), 0x00000000);
		func_261(func_265(uParam0), 0x00000001);
	}
	switch (iParam2)
	{
		case 0x00000000:
			if (uParam0->f_1F == 0x00000004)
			{
				if (uParam0->f_1 != 0x00000000)
				{
					func_81(&(uParam0->f_4), uParam1->f_BD.f_3[0x00000002 /*3*/]);
				}
				else
				{
					func_81(&(uParam0->f_4), uParam1->f_BD.f_3[0x00000000 /*3*/]);
				}
			}
			break;
		
		case 0x00000001:
			if (uParam0->f_1F == 0x00000004)
			{
				if (uParam0->f_1 != 0x00000000)
				{
					func_81(&(uParam0->f_4), uParam1->f_BD.f_3[0x00000003 /*3*/]);
				}
				else
				{
					func_81(&(uParam0->f_4), uParam1->f_BD.f_3[0x00000001 /*3*/]);
				}
			}
			break;
	}
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_20) && uParam0->f_24 == 0x0000004B)
	{
		vVar1 = { func_270(&(uParam1->f_BD), iParam2, uParam1->f_67D, uParam1->f_67A, 0x00000000, uParam0->f_1) };
		if (uParam0->f_1F == 0x00000004)
		{
			vVar1 = { vVar1 + uParam0->f_2B * FtoV(func_226(&(uParam0->f_4))) * FtoV(func_327(iParam2 == 0x00000001, 1f, -1f)) };
		}
		if ((uParam1->f_679 != 0x00000001 && !bParam5) && !func_224(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			func_223(uParam1, iParam3, 0x00000001);
			unk_0xA47B46945FF6DE74(uParam0->f_20, vVar1, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			fVar0 = unk_0xE7D606C557C86100(-uParam1->f_67A, -uParam1->f_67A.f_1);
			if (uParam0->f_1 == 0x00000000)
			{
				fVar0 = (fVar0 + 180f);
			}
			unk_0xD8F6A53F4799FAFE(uParam0->f_20, fVar0);
		}
		else
		{
			unk_0xD8F6A53F4799FAFE(uParam0->f_20, unk_0xD9522BA9E27E1349(uParam0->f_20));
			func_58(uParam0, 0x00004000);
			fVar2 = (unk_0xE7D606C557C86100(uParam0->f_28, uParam0->f_28.f_1) + func_327(bParam6, 180f, 0f));
			vVar3 = { uParam1->f_BD.f_1D - unk_0x68F4C0EC296D3901((uParam1[iParam3 /*94*/])->f_20, 0x00000001) };
			bVar4 = func_69(vVar3, uParam0->f_28) < 0f;
			bVar5 = func_69(vVar3, uParam0->f_2B) < 0f;
			iVar6 = 0x00000000;
			func_222(uParam0, 0x00000000);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_36));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_36));
			if (!bParam6 && bParam7)
			{
				func_222(uParam0, func_26(uParam0) + 1);
				iVar6 = unk_0x09AC81E49EA267F7(0x00000320, 0x000004B0);
				unk_0xC6EB89C59F2AF6B8(0x00000000, func_194(func_195(uParam0), "mini@tennis", "mini@tennis@female"), "idle", 1.5f, -8f, iVar6, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (!bParam8)
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, "mini@tennis", "ready_2_idle", 1.5f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_222(uParam0, func_26(uParam0) + 1);
			}
			if ((bParam6 && !bVar4) || (!bParam6 && bVar4))
			{
				vVar7 = { uParam1->f_BD.f_1D + uParam0->f_2B * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar5 && (!bParam6 && bVar4))
				{
					vVar7 = { uParam1->f_BD.f_1D + uParam0->f_2B * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_220(uParam1, uParam0))
				{
					unk_0x80AA372E04ED318D(0x00000000, vVar7, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
				}
				else
				{
					unk_0x96167B03C5A77156(0x00000000, vVar7, 1f, 0x00004E20, 0.25f, 0x00000001, 0x471C4000);
				}
				func_222(uParam0, func_26(uParam0) + 1);
			}
			if (func_219(unk_0x68F4C0EC296D3901(uParam0->f_20, 0x00000001), vVar1, 0.1f))
			{
				unk_0xE655C47E46F9A7E4(0x00000000, fVar2, 0x000009C4);
				func_222(uParam0, func_26(uParam0) + 1);
			}
			else
			{
				unk_0x96167B03C5A77156(0x00000000, vVar1, 1f, 0x00004E20, 0.25f, 0x00000000, fVar2);
				func_222(uParam0, func_26(uParam0) + 1);
			}
			sVar8 = func_194(func_195(uParam0), "mini@tennis", "mini@tennis@female");
			unk_0xC6EB89C59F2AF6B8(0x00000000, sVar8, "idle_2_ready", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_222(uParam0, func_26(uParam0) + 1);
			unk_0x75ABDC5F81978924(uParam0->f_36);
			unk_0x78ADC381772E3D54(func_265(uParam0), uParam0->f_36);
			unk_0x9237814869823B3E(func_265(uParam0), "weapons@tennis@male");
			func_80(&(uParam0->f_4), 0x00000004);
		}
	}
	if (bParam4 && unk_0xC844350D5D58C99A(func_265(uParam0)))
	{
		unk_0xF895E10BF4C72645(func_265(uParam0), 0x00000000, 0x00000000);
	}
}

int func_219(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, float fParam4)
{
	if (fParam4 < 0f)
	{
		fParam4 = 0f;
	}
	if (unk_0x755FF954DAE327E1((Param0 - Param2)) <= fParam4)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_1 - Param2.f_1)) <= fParam4)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_220(var uParam0, var uParam1)
{
	if (func_221(&(uParam0->f_BD)) != 0x00000002)
	{
		return 0x00000000;
	}
	if (uParam1->f_1 != 0x00000001)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_221(var uParam0)
{
	return *uParam0;
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_37 = iParam1;
}

void func_223(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x327AAEE25F323797((uParam0[iParam1 /*94*/])->f_20);
	}
	else
	{
		unk_0xA3BF0AA5A2608191((uParam0[iParam1 /*94*/])->f_20);
	}
}

bool func_224(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_225(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_225(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_38();
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

float func_226(var uParam0)
{
	return uParam0->f_17;
}

void func_227(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar7;
	char* sVar8;
	
	if ((uParam0->f_1F != 0x00000004 && !unk_0xEB6A8945D1AC98A1(func_265(uParam0))) && !bParam7)
	{
		func_232(uParam1->f_679, 0x00000001);
	}
	func_234(uParam0, 0x0000004B);
	if (func_104(uParam0, 0x00000004))
	{
		func_277(uParam0, 0x00000004);
	}
	func_217(&(uParam0->f_4), 0x00000004);
	if (bParam6)
	{
		func_193(uParam0, &(uParam1->f_F7));
	}
	if (uParam0->f_1F == 0x00000004)
	{
		func_235(&(uParam0->f_4), 0x00000000);
		if (uParam0->f_1 != 0x00000000)
		{
			func_81(&(uParam0->f_4), uParam1->f_BD.f_3[0x00000002 /*3*/] + uParam1->f_BD.f_3[0x00000003 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
		else
		{
			func_81(&(uParam0->f_4), uParam1->f_BD.f_3[0x00000000 /*3*/] + uParam1->f_BD.f_3[0x00000001 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_20) && uParam0->f_24 == 0x0000004B)
	{
		vVar1 = { func_270(&(uParam1->f_BD), iParam2, uParam1->f_67D, uParam1->f_67A, 0x00000001, uParam0->f_1) };
		if ((uParam1->f_679 != 0x00000001 && !bParam7) && !func_224(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!((!unk_0xEB6A8945D1AC98A1(func_265(uParam0)) && unk_0x43AB9B3158C51226(func_265(uParam0))) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_265(uParam0)), "running")))
			{
				func_223(uParam1, iParam3, 0x00000001);
			}
			unk_0xA47B46945FF6DE74(uParam0->f_20, vVar1, 0x00000001, 0x00000001, 0x00000000, 0x00000001);
			fVar0 = unk_0xE7D606C557C86100(-uParam1->f_67A, -uParam1->f_67A.f_1);
			if (uParam0->f_1 == 0x00000000)
			{
				fVar0 = (fVar0 + 180f);
			}
			unk_0xD8F6A53F4799FAFE(uParam0->f_20, fVar0);
		}
		else
		{
			unk_0xD8F6A53F4799FAFE(uParam0->f_20, unk_0xD9522BA9E27E1349(uParam0->f_20));
			func_58(uParam0, 0x00004000);
			fVar2 = (unk_0xE7D606C557C86100(uParam0->f_28, uParam0->f_28.f_1) + func_327(bParam8, 180f, 0f));
			vVar3 = { uParam1->f_BD.f_1D - unk_0x68F4C0EC296D3901((uParam1[iParam3 /*94*/])->f_20, 0x00000001) };
			bVar4 = func_69(vVar3, uParam0->f_28) < 0f;
			bVar5 = func_69(vVar3, uParam0->f_2B) < 0f;
			func_222(uParam0, 0x00000000);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_36));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_36));
			if (!bParam9)
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, "mini@tennis", "ready_2_idle", 1.5f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_222(uParam0, func_26(uParam0) + 1);
			}
			if ((bParam8 && !bVar4) || (!bParam8 && bVar4))
			{
				vVar6 = { uParam1->f_BD.f_1D + uParam0->f_2B * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar5 && (!bParam8 && bVar4))
				{
					vVar6 = { uParam1->f_BD.f_1D + uParam0->f_2B * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_220(uParam1, uParam0))
				{
					unk_0x80AA372E04ED318D(0x00000000, vVar6, 1f, 0x00004E20, 0x471C4000, 0x3F000000);
				}
				else
				{
					unk_0x96167B03C5A77156(0x00000000, vVar6, 1f, 0x00004E20, 0.25f, 0x00000001, 0x471C4000);
				}
				func_222(uParam0, func_26(uParam0) + 1);
			}
			unk_0x96167B03C5A77156(0x00000000, vVar1, 1f, 0x00004E20, 0.25f, 0x00000000, fVar2);
			func_222(uParam0, func_26(uParam0) + 1);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "mini@tennis", "idle_2_serve", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_222(uParam0, func_26(uParam0) + 1);
			unk_0x75ABDC5F81978924(uParam0->f_36);
			unk_0x78ADC381772E3D54(uParam0->f_20, uParam0->f_36);
			unk_0x9237814869823B3E(uParam0->f_20, "weapons@tennis@male");
			func_80(&(uParam0->f_4), 0x00000004);
		}
	}
	if (!bParam7 && uParam1->f_679 != 0x00000001)
	{
		if (!func_228(&(uParam0->f_4), 0x00000004))
		{
			bVar7 = (uParam1->f_679 != 0x00000001 && !bParam7);
			sVar8 = func_194(bVar7, "TennisServeSet", "TennisServeSetWithIntro");
			func_27(uParam0, sVar8, 0f);
			bParam5 = bParam5;
		}
		else
		{
			func_261(func_265(uParam0), 0x00000001);
		}
	}
	if (bParam4 && unk_0xC844350D5D58C99A(func_265(uParam0)))
	{
		unk_0xF895E10BF4C72645(func_265(uParam0), 0x00000000, 0x00000000);
	}
	uParam0->f_25 = { unk_0x68F4C0EC296D3901(uParam0->f_20, 0x00000000) };
}

bool func_228(var uParam0, int iParam1)
{
	return func_257(uParam0->f_19, iParam1);
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0->f_689 && iParam1) != 0x00000000;
}

void func_230(var uParam0, int iParam1)
{
	uParam0->f_22 = iParam1;
}

void func_231(var uParam0, int iParam1)
{
	uParam0->f_689 = (uParam0->f_689 - (uParam0->f_689 && iParam1));
}

void func_232(int iParam0, bool bParam1)
{
	if (iParam0 != 0x00000001)
	{
		if (bParam1)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000000);
		}
	}
}

void func_233(var uParam0)
{
	func_217(&(uParam0->f_4), 0x00000002);
	func_217(&(uParam0->f_4), 0x00000020);
	func_217(&(uParam0->f_4), 0x00000040);
	func_217(&(uParam0->f_4), 0x00000008);
	func_217(&(uParam0->f_4), 0x00000080);
	func_217(&(uParam0->f_4), 0x00000001);
	func_217(&(uParam0->f_4), 0x00000200);
	func_277(uParam0, 0x00000010);
	func_277(uParam0, 0x00000100);
	func_277(uParam0, 0x00000008);
	func_277(uParam0, 0x00000080);
	func_277(uParam0, 0x00000002);
	func_277(uParam0, 0x00000200);
	func_277(uParam0, 0x00000004);
}

void func_234(var uParam0, int iParam1)
{
	if (uParam0->f_24 == 0x0000004B && iParam1 != 0x0000004B)
	{
		uParam0->f_24 = iParam1;
		func_277(uParam0, 0x00000080);
	}
	else if (uParam0->f_24 != 0x0000004B && iParam1 == 0x0000004B)
	{
		uParam0->f_24 = iParam1;
	}
}

void func_235(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
}

void func_236(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	if (((uParam0->f_1F != 0x00000003 && !bParam4) && !unk_0xEB6A8945D1AC98A1(func_265(uParam0))) && !unk_0x869EFD0BC0868856(func_265(uParam0)))
	{
		if ((unk_0x001220CC1F110806(func_265(uParam0)) && !func_195(uParam0)) && !func_104(uParam0, 0x00004000))
		{
			unk_0x9237814869823B3E(func_265(uParam0), "TENNIS_LOCOMOTION_FEMALE");
		}
		func_128(&iVar0, &iVar1, &uVar2, &uVar2, 0x00000001, 0x00000001);
		fVar3 = unk_0x755FF954DAE327E1(SYSTEM::TO_FLOAT(iVar0));
		if ((fVar3 > 0f || unk_0x755FF954DAE327E1(SYSTEM::TO_FLOAT(iVar1)) > 0f) && uParam0->f_1F != 0x00000004)
		{
			unk_0xDEAC6BC509D10068(func_265(uParam0), 2f);
		}
		if ((func_75(uParam0) != 0x0000004A && uParam0->f_1F != 0x00000004) && fVar3 > 15f)
		{
			func_250(uParam0, (func_251(uParam0) + unk_0x6117725E0134737F()));
		}
		else
		{
			func_250(uParam0, 0f);
		}
		if (!func_162(uParam0))
		{
			func_249(uParam0);
		}
		bVar4 = func_248(uParam0, uParam1);
		if (uParam0->f_1F != 0x00000004 && !bVar4)
		{
			func_128(&iVar0, &iVar1, &uVar2, &uVar2, 0x00000001, 0x00000001);
			func_232(uParam1->f_679, 0x00000001);
		}
		else if (!func_104(uParam0, 0x00000020))
		{
			func_239(uParam0, &iVar0, &iVar1, uParam1[(0x00000001 - iParam3) /*94*/], &(uParam1->f_F7));
			if (func_228(&(uParam0->f_4), 0x00000004) && func_228(&(uParam0->f_4), 0x00000002))
			{
				func_234(uParam0, 0x0000004B);
			}
		}
		if (uParam1->f_679 != 0x00000001)
		{
			func_238(uParam0, iVar0, iVar1);
		}
		fVar5 = func_69(uParam0->f_28, uParam1->f_F7.f_A);
		if (unk_0x001220CC1F110806(func_265(uParam0)) && fVar5 < 0f)
		{
			fVar6 = func_69(uParam0->f_2B, func_283(&(uParam1->f_F7)) - uParam0->f_25);
			unk_0x822DE639EA8CAA94(func_265(uParam0), "ForcedStopDirection", fVar6);
		}
	}
	else if (uParam0->f_1F != 0x00000003)
	{
		if (uParam0->f_1F != 0x00000004)
		{
			func_237(&fVar8, &uVar7, &uVar7, &uVar7, 0x00000001);
		}
		else
		{
			func_239(uParam0, &iVar9, &iVar10, uParam1[(0x00000001 - iParam3) /*94*/], &(uParam1->f_F7));
		}
		if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0)) && unk_0x43AB9B3158C51226(func_265(uParam0)))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_265(uParam0)), "Intro") && unk_0xB4E9220C59EBC663(func_265(uParam0)))
			{
				unk_0x77CE1D0498EE13D6(func_265(uParam0), "running");
			}
			if (uParam0->f_1 == 0x00000000 && iParam2 == 0x00000001)
			{
				vVar11 = { uParam1->f_BD.f_3[0x00000001 /*3*/] };
				fVar12 = (4.425f - 1f);
				fVar13 = 1.3f;
			}
			else if (uParam0->f_1 == 0x00000000 && iParam2 == 0x00000000)
			{
				vVar11 = { uParam1->f_BD.f_3[0x00000001 /*3*/] };
				fVar12 = 7.783f;
				fVar13 = (4.425f + 0.7f);
			}
			else if (uParam0->f_1 != 0x00000000 && iParam2 == 0x00000001)
			{
				vVar11 = { uParam1->f_BD.f_3[0x00000003 /*3*/] };
				fVar12 = (4.425f - 1f);
				fVar13 = 1.3f;
			}
			else if (uParam0->f_1 != 0x00000000 && iParam2 == 0x00000000)
			{
				vVar11 = { uParam1->f_BD.f_3[0x00000003 /*3*/] };
				fVar12 = 7.783f;
				fVar13 = (4.425f + 0.7f);
			}
			if ((fVar8 > 0.75f && SYSTEM::VDIST2(uParam0->f_25, vVar11) > (fVar13 * fVar13)) || (fVar8 < 0.25f && SYSTEM::VDIST2(uParam0->f_25, vVar11) < (fVar12 * fVar12)))
			{
				uParam0->f_3E = fVar8;
			}
			else if ((((fVar8 >= 0.25f && fVar8 <= 0.75f) || (fVar8 > 0.75f && SYSTEM::VDIST2(uParam0->f_25, vVar11) < (fVar13 * fVar13))) || (fVar8 < 0.25f && SYSTEM::VDIST2(uParam0->f_25, vVar11) > (fVar12 * fVar12))) || iParam5)
			{
				uParam0->f_3E = 0.5f;
			}
			if (unk_0xC548B0F1DC969D9B(func_265(uParam0), "IdleStarted"))
			{
				fVar14 = unk_0x79833B02DBD2A244(0f, 1f);
				StringCopy(&(uParam1->f_686), func_194(fVar14 < 0.33f, "Idle3", func_194(fVar14 < 0.66f, "Idle4", "Idle1")), 8);
			}
			unk_0xDDD27725BA343881(func_265(uParam0), &(uParam1->f_686), 0x00000001);
			unk_0xAF74FCE53CF6DDED(func_265(uParam0), "Speed", uParam0->f_3E);
		}
	}
	if (((func_75(uParam0) == 0x0000004B && unk_0xC844350D5D58C99A(uParam1->f_F7)) && unk_0xE608C809F9416F00(uParam1->f_F7)) && SYSTEM::VDIST2(uParam0->f_25, func_283(&(uParam1->f_F7))) < (0.88f * 0.88f))
	{
		func_58(uParam0, 0x00000100);
		func_278(&(uParam1->f_F7), 0x00000004);
	}
}

void func_237(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam4)
	{
		fVar0 = unk_0x4F3973434662D795(0x00000000, 0x0000001E);
		fVar1 = unk_0x4F3973434662D795(0x00000000, 0x0000001F);
		fVar2 = unk_0x4F3973434662D795(0x00000000, 0x00000001);
		fVar3 = unk_0x4F3973434662D795(0x00000000, 0x00000002);
	}
	else
	{
		fVar0 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x0000001E);
		fVar1 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x0000001F);
		fVar2 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x00000001);
		fVar3 = unk_0x4B7163B4D6E4A3C2(0x00000000, 0x00000002);
	}
	*uParam0 = ((fVar0 + 1f) / 2f);
	*uParam1 = ((fVar1 + 1f) / 2f);
	*uParam2 = ((fVar2 + 1f) / 2f);
	*uParam3 = ((fVar3 + 1f) / 2f);
}

void func_238(var uParam0, int iParam1, int iParam2)
{
	if ((unk_0x611EC47521EE9CBA() <= 0f && unk_0x3DF1113971307AEB() <= 0f) && func_75(uParam0) == 0x0000004B)
	{
		if (unk_0x755FF954DAE327E1(SYSTEM::TO_FLOAT(iParam1)) >= unk_0x755FF954DAE327E1(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam1 > 0x0000000F)
			{
				if (uParam0->f_23 != 0x00000003 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				uParam0->f_23 = 0x00000003;
			}
			else if (iParam1 < 0xFFFFFFF1)
			{
				if (uParam0->f_23 != 0x00000002 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				uParam0->f_23 = 0x00000002;
			}
			else
			{
				if (uParam0->f_23 != 0x00000004 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				uParam0->f_23 = 0x00000004;
			}
		}
		else if (unk_0x755FF954DAE327E1(SYSTEM::TO_FLOAT(iParam1)) < unk_0x755FF954DAE327E1(SYSTEM::TO_FLOAT(iParam2)))
		{
			if (iParam2 > 0x0000000F)
			{
				if (uParam0->f_23 != 0x00000001 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				uParam0->f_23 = 0x00000001;
			}
			else if (iParam2 < 0xFFFFFFF1)
			{
				if (uParam0->f_23 != 0x00000000 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				uParam0->f_23 = 0x00000000;
			}
			else
			{
				if (uParam0->f_23 != 0x00000004 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "TENNIS_FOOT_SQUEAKS_MASTER", func_265(uParam0), 0x00000000, 0x00000000, 0x00000000);
				}
				uParam0->f_23 = 0x00000004;
			}
		}
	}
}

void func_239(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	
	vVar1 = { func_70(&(uParam0->f_4)) };
	if (func_251(uParam3) > 0.5f && !func_228(&(uParam0->f_4), 0x00000080))
	{
		func_80(&(uParam0->f_4), 0x00000080);
	}
	else if (func_228(&(uParam0->f_4), 0x00000080))
	{
		func_217(&(uParam0->f_4), 0x00000080);
	}
	switch (func_146(&(uParam0->f_4)))
	{
		case 0x00000000:
			*iParam1 = 0x00000000;
			*iParam2 = 0x00000000;
			if (func_33(&(uParam0->f_4)) == 0x00000002)
			{
				func_245(uParam0, uParam3);
			}
			break;
		
		case 0x00000005:
			if (func_75(uParam0) == 0x0000004B)
			{
				vVar2 = { 0.1f, 0.1f, 0.5f };
				if (func_243(uParam0, &vVar1, &vVar2))
				{
					unk_0x80AA372E04ED318D(func_265(uParam0), vVar1, 2f, 0xFFFFFFFF, 0x471C4000, 0x3F000000);
					func_242(&(uParam0->f_4), vVar1);
					func_80(&(uParam0->f_4), 0x00000004);
					vVar0 = { vVar1 - uParam0->f_25 };
					vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
					*iParam1 = SYSTEM::ROUND((vVar0.x * 128f));
					*iParam2 = SYSTEM::ROUND((vVar0.y * 128f));
				}
				else if ((unk_0x5A91F08DF773C39D(uParam0->f_20, func_70(&(uParam0->f_4)), vVar2, 0x00000000, 0x00000001, 0x00000000) || unk_0xD1960163A3042274(func_265(uParam0), 0x7D8F4411) == 0x00000007) && !func_228(&(uParam0->f_4), 0x00000100))
				{
					func_235(&(uParam0->f_4), 0x00000000);
					func_217(&(uParam0->f_4), 0x00000004);
				}
				else if (uParam0->f_4.f_14 == 0x00000000 && !func_228(&(uParam0->f_4), 0x00000100))
				{
					func_235(&(uParam0->f_4), 0x00000000);
					func_217(&(uParam0->f_4), 0x00000004);
				}
				if (func_33(&(uParam0->f_4)) == 0x00000002)
				{
					func_245(uParam0, uParam3);
				}
			}
			break;
		
		case 0x00000006:
			if (func_241(&(uParam0->f_4)) <= 0f)
			{
				func_217(&(uParam0->f_4), 0x00000004);
				func_235(&(uParam0->f_4), 0x00000001);
			}
			func_240(&(uParam0->f_4));
			break;
		
		case 0x00000001:
			if (func_75(uParam0) == 0x0000004B)
			{
				unk_0x6DE022225BD968DB(func_283(uParam4), func_283(uParam4) + uParam4->f_A, uParam0->f_25, uParam0->f_28, &fVar3);
				vVar7 = { func_283(uParam4) - func_283(uParam4) + uParam4->f_A * Vector(fVar3, fVar3, fVar3) };
				vVar6 = { func_283(uParam4) + vVar7 };
				vVar4 = { vVar1 - uParam0->f_25 };
				fVar8 = func_69(vVar4, uParam0->f_28);
				if (!func_228(&(uParam0->f_4), 0x00000004))
				{
					if (func_52(uParam3) != 0x00000002)
					{
						if (fVar8 < 0f)
						{
							vVar9 = { uParam0->f_25 - vVar6 };
							vVar10 = { vVar6 + vVar9 * Vector(0.15f, 0.15f, 0.15f) };
							func_81(&(uParam0->f_4), vVar10);
							func_242(&(uParam0->f_4), vVar10);
							fVar8 = 0f;
						}
					}
				}
				if (func_52(uParam3) != 0x00000002)
				{
					vVar5 = { vVar6 - uParam0->f_25 };
					fVar11 = func_69(vVar4, uParam0->f_2B);
					fVar12 = func_69(vVar5, uParam0->f_2B);
					bVar13 = fVar11 > 0f;
					bVar14 = fVar12 > 0f;
					if ((SYSTEM::VDIST2(uParam0->f_25, vVar1) < 50f && bVar13 != bVar14) && fVar8 < 0f)
					{
						unk_0xA3BF0AA5A2608191(func_265(uParam0));
						func_80(&(uParam0->f_4), 0x00000004);
					}
				}
				if (((!unk_0xEB6A8945D1AC98A1(func_265(uParam0)) && !SYSTEM::VDIST2(uParam0->f_25, vVar1) <= (0f * 0f)) && !func_228(&(uParam0->f_4), 0x00000004)) && !func_104(uParam0, 0x00000400))
				{
					unk_0x80AA372E04ED318D(uParam0->f_20, func_70(&(uParam0->f_4)), 2f, 0xFFFFFFFF, 0x471C4000, 0x3F000000);
					vVar1 = { func_70(&(uParam0->f_4)) };
					func_242(&(uParam0->f_4), vVar1);
					func_80(&(uParam0->f_4), 0x00000004);
					vVar0 = { func_70(&(uParam0->f_4)) - uParam0->f_25 };
					vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
					*iParam1 = SYSTEM::ROUND((vVar0.x * 128f));
					*iParam2 = SYSTEM::ROUND((vVar0.y * 128f));
				}
				else if (SYSTEM::VDIST2(uParam0->f_25, vVar1) <= (0f * 0f) || unk_0xD1960163A3042274(func_265(uParam0), 0x7D8F4411) == 0x00000007)
				{
					func_235(&(uParam0->f_4), 0x00000002);
					func_217(&(uParam0->f_4), 0x00000004);
				}
			}
			break;
		
		case 0x00000002:
			*iParam1 = 0x00000000;
			*iParam2 = 0x00000000;
			break;
	}
}

void func_240(var uParam0)
{
	uParam0->f_18 = (uParam0->f_18 - unk_0x6117725E0134737F());
}

float func_241(var uParam0)
{
	return uParam0->f_18;
}

void func_242(var uParam0, vector3 vParam1)
{
	uParam0->f_3 = { vParam1 };
}

int func_243(var uParam0, var uParam1, var uParam2)
{
	if (func_104(uParam0, 0x00000400))
	{
		return 0x00000000;
	}
	if (func_228(&(uParam0->f_4), 0x00000100))
	{
		return 0x00000000;
	}
	if (func_228(&(uParam0->f_4), 0x00000004))
	{
		return 0x00000000;
	}
	if (func_228(&(uParam0->f_4), 0x00000010))
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(func_265(uParam0)))
	{
		return 0x00000000;
	}
	if (unk_0x5A91F08DF773C39D(uParam0->f_20, *uParam1, *uParam2, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000000;
	}
	if (!func_244(&(uParam0->f_4)))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_244(var uParam0)
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST(*uParam0, uParam0->f_3);
	if (fVar0 > 0.1f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_245(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1C0640BA9A7327B3() > func_247(&(uParam0->f_4)))
	{
		iVar0 = func_52(uParam1);
		if (iVar0 == 0x00000003 || iVar0 == 0x00000004)
		{
			func_81(&(uParam0->f_4), uParam0->f_4.f_6[0x00000000 /*3*/]);
			func_235(&(uParam0->f_4), 0x00000005);
			func_217(&(uParam0->f_4), 0x00000004);
		}
		func_246(&(uParam0->f_4), unk_0x1C0640BA9A7327B3() + 500);
	}
}

void func_246(var uParam0, var uParam1)
{
	uParam0->f_1A = uParam1;
}

int func_247(var uParam0)
{
	return uParam0->f_1A;
}

int func_248(var uParam0, var uParam1)
{
	float fVar0;
	
	if (uParam0->f_1F == 0x00000004)
	{
		return 0x00000000;
	}
	if (!func_104(uParam0, 0x00000200))
	{
		return 0x00000000;
	}
	if (func_104(uParam0, 0x00000400))
	{
		return 0x00000000;
	}
	if (!func_104(uParam0, 0x00000010))
	{
		return 0x00000000;
	}
	if (SYSTEM::VDIST2(func_70(&(uParam0->f_4)) + Vector(1f, 0f, 0f), uParam0->f_25) > (4f * 4f))
	{
		return 0x00000000;
	}
	fVar0 = func_69(uParam0->f_28, func_283(&(uParam1->f_F7)) - uParam0->f_25);
	if (fVar0 < 0f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_249(var uParam0)
{
	uParam0->f_3F = (uParam0->f_3F + unk_0x6117725E0134737F());
}

void func_250(var uParam0, float fParam1)
{
	uParam0->f_48 = fParam1;
}

float func_251(var uParam0)
{
	return uParam0->f_48;
}

int func_252(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_104(uParam0[iParam1 /*94*/], 0x00000400))
	{
		iVar0 = 0x00001388;
		if (func_75(uParam0[iParam1 /*94*/]) == 0x00000048 || func_75(uParam0[iParam1 /*94*/]) == 0x00000049)
		{
			iVar0 = 0x000009C4;
		}
	}
	if (func_104(uParam0[iParam2 /*94*/], 0x00000400))
	{
		iVar0 = 0x00001388;
		if (func_75(uParam0[iParam2 /*94*/]) == 0x00000048 || func_75(uParam0[iParam2 /*94*/]) == 0x00000049)
		{
			iVar0 = 0x000009C4;
		}
	}
	return iVar0;
}

int func_253(var uParam0)
{
	return uParam0->f_688;
}

int func_254(var uParam0)
{
	return uParam0->f_4D;
}

void func_255(var uParam0, int iParam1)
{
	func_256(uParam0, iParam1);
}

void func_256(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_257(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_258(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_259(var uParam0)
{
	func_260(&((uParam0[0x00000000 /*94*/])->f_20), 0x6F0783F5);
	func_260(&((uParam0[0x00000001 /*94*/])->f_20), 0x6F0783F5);
}

void func_260(var uParam0, int iParam1)
{
	unk_0x25C5402CC10F76CD(*uParam0, 0x00000000);
	unk_0x4E885A246A9D983A(*uParam0, 0x00000014, 0x00000001);
	unk_0x5E678B691C852774(*uParam0, 0x00000010);
	if (iParam1 != 0xFADE4843)
	{
		unk_0x6DF7BF67E86AAE86(*uParam0, iParam1);
	}
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_44(iParam0);
		if (iVar0 == 0x00000091)
		{
			iVar0 = func_196(iParam0);
		}
		iVar2 = unk_0x16F2683693E537C9();
		if (((iVar0 == 0x00000000 || iVar0 == 0x00000001) || iVar0 == 0x00000002) || iParam0 == iVar2)
		{
			iVar1 = 0x00000000;
		}
		else if (unk_0xCED082ADD3739B9F(iParam0) && iVar0 != 0x0000000E)
		{
			iVar1 = 0x00000000;
		}
		else
		{
			iVar1 = 0x00000001;
		}
		unk_0xE6F26F1601EBDDBA(iParam0, iParam1, iVar1);
	}
}

void func_262(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam1 /*94*/])) && !unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam2 /*94*/])))
	{
		if (!bParam3)
		{
			if (!bParam4)
			{
				unk_0x9F528B1B53FBC5D9((uParam0[iParam1 /*94*/])->f_21, func_265(uParam0[iParam1 /*94*/]), unk_0x4A089F2B762B8D33(func_265(uParam0[iParam1 /*94*/]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			}
			unk_0x9F528B1B53FBC5D9((uParam0[iParam2 /*94*/])->f_21, func_265(uParam0[iParam2 /*94*/]), unk_0x4A089F2B762B8D33(func_265(uParam0[iParam2 /*94*/]), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		}
		else
		{
			if (!bParam4)
			{
				unk_0x9F528B1B53FBC5D9((uParam0[iParam1 /*94*/])->f_21, func_265(uParam0[iParam1 /*94*/]), unk_0x4A089F2B762B8D33(func_265(uParam0[iParam1 /*94*/]), 0x00006F06), vLocal_236, vLocal_237, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			}
			unk_0x9F528B1B53FBC5D9((uParam0[iParam2 /*94*/])->f_21, func_265(uParam0[iParam2 /*94*/]), unk_0x4A089F2B762B8D33(func_265(uParam0[iParam2 /*94*/]), 0x00006F06), vLocal_236, vLocal_237, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
		}
	}
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_264(var uParam0, int iParam1)
{
	uParam0->f_1D = iParam1;
}

int func_265(var uParam0)
{
	return uParam0->f_20;
}

void func_266(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_267(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_F7))
	{
		if (iParam1 || !unk_0x4FC40AB0ECCE6E18(uParam0->f_F7))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_F7));
		}
		else
		{
			unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_F7));
		}
	}
	vVar0 = { uParam0->f_BD.f_1D };
	uParam0->f_F7 = unk_0x7707E48765093646(joaat("prop_tennis_ball"), vVar0, 0x00000000, 0x00000000, 0x00000000);
	unk_0x69C149C0E43FAF13(uParam0->f_F7, 0x00000001);
	unk_0xD0C5FAC38659B26F(uParam0->f_F7, 0x00000001);
	func_114(uParam0->f_F7, 0x00000000);
	unk_0x1E9649458B15960F(uParam0->f_F7, 0x00000000);
	func_276(&(uParam0->f_F7), uParam0->f_BD.f_1D);
	if (func_275(&(uParam0->f_F7)))
	{
		func_274(&(uParam0->f_F7));
	}
}

int func_268(var uParam0)
{
	if (!unk_0xAE317D00A5A55DF6("SCRIPT\Tennis", 0x00000000, 0xFFFFFFFF))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!unk_0xAE317D00A5A55DF6("SCRIPT\TENNIS_VER2_A", 0x00000000, 0xFFFFFFFF))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("prop_tennis_ball")))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(uParam0->f_684))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (uParam0->f_679 == 0x00000001 && !unk_0xB87F6CF6E5628C67(uParam0->f_685))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("prop_tennis_rack_01b")))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("mini@tennis"))
	{
		if (uParam0->f_679 != 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (uParam0->f_679 == 0x00000001)
	{
		if (!unk_0xB4AE0788C1587752("mini@tennis@female"))
		{
			if (uParam0->f_679 != 0x00000001)
			{
			}
			return 0x00000000;
		}
	}
	if (uParam0->f_679 != 0x00000001)
	{
		if (uParam0->f_679 != 0x00000001 && !unk_0xB87F6CF6E5628C67(joaat("prop_vb_34_tencrt_lighting")))
		{
			return 0x00000000;
		}
		if (uParam0->f_679 != 0x00000001 && !unk_0xB4AE0788C1587752("mini@triathlon"))
		{
		}
	}
	if (!unk_0xB4AE0788C1587752("weapons@tennis@male"))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_269(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000015 || func_305(uParam0) == 0x00000015)
	{
	}
	else if (func_305(uParam0) != iParam1)
	{
		uParam0->f_5 = func_305(uParam0);
		uParam0->f_4 = iParam1;
	}
}

Vector3 func_270(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar4 = iParam5;
	if ((bParam4 && iParam1 == 0x00000001) && iVar4 == 0x00000000)
	{
		fVar2 = 0.75f;
		fVar3 = -0.025f;
		vVar1 = { uParam0->f_3[0x00000000 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0x00000000) && iVar4 == 0x00000000)
	{
		fVar2 = 0.25f;
		fVar3 = -0.025f;
		vVar1 = { uParam0->f_3[0x00000000 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0x00000001) && iVar4 == 0x00000001)
	{
		fVar2 = 0.25f;
		fVar3 = 0.025f;
		vVar1 = { uParam0->f_3[0x00000003 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0x00000000) && iVar4 == 0x00000001)
	{
		fVar2 = 0.75f;
		fVar3 = 0.025f;
		vVar1 = { uParam0->f_3[0x00000003 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0x00000001) && iVar4 == 0x00000000)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0x00000000 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0x00000000) && iVar4 == 0x00000000)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0x00000000 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0x00000001) && iVar4 == 0x00000001)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0x00000003 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0x00000000) && iVar4 == 0x00000001)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0x00000003 /*3*/] };
	}
	vVar0 = { vVar1 + vParam2 * Vector(fVar2, fVar2, fVar2) + vParam3 * Vector(fVar3, fVar3, fVar3) };
	return vVar0;
}

int func_271(var uParam0)
{
	return *uParam0;
}

int func_272(var uParam0)
{
	return uParam0->f_3;
}

void func_273(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_271(uParam1);
	iVar1 = (0x00000001 - iVar0);
	if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iVar0 /*94*/])) && unk_0xD1960163A3042274(func_265(uParam0[iVar0 /*94*/]), 0x0E763797) == 0x00000001)
	{
		*uParam2 = unk_0x4F1B602325013CC2(func_265(uParam0[iVar0 /*94*/]));
	}
	if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iVar1 /*94*/])) && unk_0xD1960163A3042274(func_265(uParam0[iVar1 /*94*/]), 0x0E763797) == 0x00000001)
	{
		*uParam3 = unk_0x4F1B602325013CC2(func_265(uParam0[iVar1 /*94*/]));
	}
	if (func_104(uParam0[iVar0 /*94*/], 0x00004000) && *uParam2 > 0x00000000)
	{
		func_277(uParam0[iVar0 /*94*/], 0x00004000);
		func_261(func_265(uParam0[iVar0 /*94*/]), 0x00000000);
		unk_0x9237814869823B3E(func_265(uParam0[iVar0 /*94*/]), "weapons@tennis@male");
	}
	if (func_104(uParam0[iVar1 /*94*/], 0x00004000) && *uParam3 > 0x00000000)
	{
		func_277(uParam0[iVar1 /*94*/], 0x00004000);
		func_261(func_265(uParam0[iVar1 /*94*/]), 0x00000000);
		unk_0x9237814869823B3E(func_265(uParam0[iVar1 /*94*/]), "weapons@tennis@male");
	}
}

void func_274(var uParam0)
{
	if (func_275(uParam0))
	{
		unk_0xF7E25143642732EA(uParam0->f_17, 0x00000001);
		func_287(uParam0, 0x00000001);
	}
}

bool func_275(var uParam0)
{
	return unk_0x83A8177D302E1A7E(uParam0->f_17);
}

void func_276(var uParam0, vector3 vParam1)
{
	uParam0->f_7 = { vParam1 };
}

void func_277(var uParam0, int iParam1)
{
	func_255(&(uParam0->f_2), iParam1);
}

void func_278(var uParam0, int iParam1)
{
	func_179(&(uParam0->f_18), iParam1);
}

int func_279(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11, bool bParam12)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	float fVar14;
	vector3 vVar15;
	
	vVar0 = { 0f, 0f, 1f };
	fVar1 = func_327(fParam9 == -1f, unk_0x6117725E0134737F(), fParam9);
	iVar2 = 0x00000000;
	fVar3 = (fVar1 / 0.03333334f);
	vVar0 = { vVar0 * Vector(fVar3, fVar3, fVar3) };
	if (bParam10)
	{
		fVar1 = (fVar1 + (fVar1 * 0.75f));
		vVar0 = { vVar0 + vVar0 * Vector(0.75f, 0.75f, 0.75f) };
	}
	if ((*uParam5 == 0x00000001 && *uParam4 > 0.455f) && *uParam6 < 0.1f)
	{
		vVar0 = { vVar0 * Vector(-1f, -1f, -1f) };
		*uParam6 = (*uParam6 + fVar1);
		*uParam2 = { *uParam2 + vVar0 };
	}
	else if (*uParam5 == 0x00000002)
	{
		if (*uParam4 > 0.05f && *iParam7 < 0x00000001)
		{
			vVar0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(0.015f, 0.015f, 0.015f) };
			vVar0.z = 0f;
			*uParam2 = { *uParam2 + vVar0 };
		}
		else if (*iParam7 >= 0x00000001)
		{
			vVar0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(-0.1f, -0.1f, -0.1f) };
			*uParam2 = { *uParam2 + vVar0 };
			*uParam5 = 0x00000000;
		}
	}
	*uParam4 = (*uParam4 + fVar1);
	vVar4 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
	unk_0x4ADCCF23C40DC113(uParam0->f_1D + Vector(1f, 0f, 0f), uParam0->f_1D + Vector(1f, 0f, 0f) + vVar4, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
	unk_0x4ADCCF23C40DC113(uParam0->f_1D + Vector(1f, 0f, 0f), uParam0->f_1D + Vector(2f, 0f, 0f), 0x00000000, 0x000000FF, 0x00000000, 0x000000FF);
	vVar5 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	iVar2 = func_282(uParam0, uParam1, &vVar5, uParam3, &vVar7, &vVar6, fParam11);
	if (iVar2 == 0x00000002)
	{
		if (bParam8)
		{
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "TENNIS_NET_BALL_MEDIUM_MASTER", *uParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
			vVar8 = { *uParam1 + *uParam2 };
			unk_0xAE2BAF27F4FB7FE0(*uParam1, vVar8, 2f);
		}
		vVar9 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
		fVar10 = func_69(vVar9, *uParam2);
		vVar11 = { vVar9 * Vector(fVar10, fVar10, fVar10) };
		*uParam2 = { *uParam2 - vVar11 * Vector(1.4f, 1.4f, 1.4f) };
		uParam2->f_2 = (uParam2->f_2 * 0.4f);
	}
	else if (iVar2 == 0x00000003 && !bParam12)
	{
		if (bParam8)
		{
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "TENNIS_NET_BALL_SKIM_MASTER", *uParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
			vVar12 = { *uParam1 + *uParam2 };
			unk_0xAE2BAF27F4FB7FE0(*uParam1, vVar12, 2f);
		}
		*uParam1 = { vVar7 };
		*uParam2 = { *uParam2 - vVar6 * FtoV(func_69(vVar6, *uParam2)) * Vector(1.4f, 1.4f, 1.4f) };
	}
	vVar13 = { *uParam1 };
	*uParam1 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	if (uParam1->f_2 < uParam0->f_1D.f_2)
	{
		unk_0x6DE022225BD968DB(vVar13, *uParam1, uParam0->f_1D, 0f, 0f, 1f, &fVar14);
		vVar15 = { *uParam2 * Vector(fVar1, fVar1, fVar1) * Vector(fVar14, fVar14, fVar14) };
		*uParam1 = { vVar13 + vVar15 };
		uParam1->f_2 = (uParam1->f_2 + 0.05f);
		*uParam2 = { func_281(*uParam2) };
		*iParam7++;
		iVar2 = 0x00000001;
		if (bParam8 && *iParam7 == 0x00000001)
		{
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "TENNIS_CLS_BALL_HARD_MASTER", *uParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
		}
		else if ((bParam8 && *iParam7 > 0x00000001) && *iParam7 < 0x00000004)
		{
			unk_0xEB819BD1E585E9CB(0xFFFFFFFF, "TENNIS_CLS_BALL_MASTER", *uParam1, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
		}
	}
	*uParam2 = { *uParam2 + func_280(*uParam2, fVar1) };
	unk_0x00EE06C17607E306("ScriptedMotion", *uParam1, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
	return iVar2;
}

Vector3 func_280(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { 0f, 0f, -9.8f };
	fVar1 = SYSTEM::VMAG(vParam0);
	vVar2 = { -vParam0 * FtoV((fVar1 * 0.065f)) };
	vVar2 = { vVar2 + vVar0 };
	vVar2 = { vVar2 * Vector(fParam1, fParam1, fParam1) };
	return vVar2;
}

Vector3 func_281(vector3 vParam0)
{
	vParam0 = { vParam0 * Vector(1f, 1f, 1f) };
	vParam0.z = -vParam0.z;
	if (vParam0.z < 0.01f)
	{
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar7;
	
	unk_0x6DE022225BD968DB(*uParam1, *uParam2, uParam0->f_1D, *uParam3, &fVar0);
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
		fVar3 = unk_0x89AA362D00A86F72(vVar1, uParam0->f_27[0x00000000 /*3*/], uParam0->f_27[0x00000001 /*3*/], 0x00000000);
		fVar4 = unk_0x89AA362D00A86F72(vVar1, uParam0->f_27[0x00000001 /*3*/], uParam0->f_27[0x00000002 /*3*/], 0x00000000);
		if (fVar3 > 0f && fVar3 < 1f)
		{
			vVar2 = { uParam0->f_27[0x00000000 /*3*/] + uParam0->f_27[0x00000001 /*3*/] - uParam0->f_27[0x00000000 /*3*/] * Vector(fVar3, fVar3, fVar3) };
		}
		else if ((fVar4 > 0f && fVar4 < 1f) && fVar3 > 0f)
		{
			vVar2 = { uParam0->f_27[0x00000001 /*3*/] + uParam0->f_27[0x00000002 /*3*/] - uParam0->f_27[0x00000001 /*3*/] * Vector(fVar4, fVar4, fVar4) };
		}
		fVar5 = (vVar1.z - vVar2.z);
		if (fVar5 <= func_11((0.025f - fParam6), -1f, 0f))
		{
			return 0x00000002;
		}
		else if (fVar5 > 0f && fVar5 <= (0.025f - fParam6))
		{
			vVar6 = { *uParam3 / FtoV(SYSTEM::VMAG(*uParam3)) };
			if (func_69(*uParam2 - *uParam1, vVar6) > 0f)
			{
				vVar6 = { vVar6 * Vector(-1f, -1f, -1f) };
			}
			fVar7 = SYSTEM::SQRT(((0.025f * 0.025f) - (fVar5 * fVar5)));
			*uParam4 = { vVar1 + vVar6 * Vector(fVar7, fVar7, fVar7) };
			*uParam5 = { *uParam4 - vVar2 };
			*uParam5 = { *uParam5 / FtoV(SYSTEM::VMAG(*uParam5)) };
			return 0x00000003;
		}
	}
	return 0x00000000;
}

Vector3 func_283(var uParam0)
{
	return uParam0->f_7;
}

int func_284(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (iParam3 < 0x00000008)
	{
		return 0x00000000;
	}
	if (func_229(uParam0, 0x00000001))
	{
		return 0x00000000;
	}
	if (iParam1 >= 0x00000002)
	{
		return 0x00000000;
	}
	if (func_257(uParam2, 0x00400000))
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(uParam0->f_F7))
	{
		return 0x00000000;
	}
	if (unk_0xD59B17D2DFF98E26(uParam0->f_F7))
	{
		return 0x00000000;
	}
	if (!func_285(&(uParam0->f_F7), &(uParam0->f_BD), &(uParam0->f_67A), &(uParam0->f_67D)))
	{
		if (!func_288(&(uParam0->f_F7), 0x00000010))
		{
			func_278(&(uParam0->f_F7), 0x00000010);
		}
		return 0x00000000;
	}
	if (func_288(&(uParam0->f_F7), 0x00000002))
	{
		return 0x00000000;
	}
	if (func_288(&(uParam0->f_F7), 0x00000004))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_285(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { uParam1->f_3[0x00000000 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_3[0x00000003 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar2 = { *uParam2 * Vector(0.191f, 0.191f, 0.191f) };
	fVar3 = (uParam1->f_1 * 1.8f);
	vVar0 = { vVar0 - vVar2 };
	vVar1 = { vVar1 + vVar2 };
	return func_76(func_283(uParam0), vVar0, vVar1, fVar3);
}

int func_286(var uParam0)
{
	return uParam0->f_1;
}

void func_287(var uParam0, int iParam1)
{
	func_255(&(uParam0->f_18), iParam1);
}

bool func_288(var uParam0, int iParam1)
{
	return func_257(uParam0->f_18, iParam1);
}

void func_289(var uParam0)
{
	uParam0->f_683 = !uParam0->f_683;
}

void func_290(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	unk_0xA2E3EDD0E119882F(0x00000000);
	if (iParam1 >= 0x0000000C && iParam1 < 0x0000000E)
	{
		func_302(&(uParam0->f_F7));
	}
	if (uParam0->f_679 != 0x00000001)
	{
		func_292();
		if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
	}
	func_291(&(uParam0->f_F7), func_283(&(uParam0->f_F7)));
	if (!func_229(uParam0, 0x00000001))
	{
		bVar0 = !unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam3 /*94*/]));
		if (((bVar0 && !bParam5) && !func_228(&((uParam0[iParam3 /*94*/])->f_4), 0x00000100)) || ((bVar0 && func_104(uParam0[iParam3 /*94*/], 0x00002000)) && uParam0->f_679 == 0x00000001))
		{
			(uParam0[iParam3 /*94*/])->f_25 = { unk_0x68F4C0EC296D3901(func_265(uParam0[iParam3 /*94*/]), 0x00000001) };
			func_20(iParam1, uParam0[iParam3 /*94*/], uParam2, func_104(uParam0[iParam3 /*94*/], 0x00002000));
		}
		bVar0 = (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[iParam4 /*94*/])) && unk_0xC844350D5D58C99A(func_265(uParam0[iParam4 /*94*/])));
		if (((bVar0 && !bParam5) && !func_228(&((uParam0[iParam4 /*94*/])->f_4), 0x00000100)) || ((bVar0 && func_104(uParam0[iParam4 /*94*/], 0x00002000)) && uParam0->f_679 == 0x00000001))
		{
			(uParam0[iParam4 /*94*/])->f_25 = { unk_0x68F4C0EC296D3901(func_265(uParam0[iParam4 /*94*/]), 0x00000001) };
			func_20(iParam1, uParam0[iParam4 /*94*/], uParam2, func_104(uParam0[iParam4 /*94*/], 0x00002000));
		}
	}
}

void func_291(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_288(uParam0, 0x00000001))
	{
		if (!func_275(uParam0))
		{
			uParam0->f_17 = unk_0xB055A4268B938F30("scr_tennis_ball_trail", vParam1, 0f, 0f, 0f, 1f, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
			unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0x02D205CBD211ED4F(uParam0->f_17, (SYSTEM::TO_FLOAT(iVar0) / 255f), (SYSTEM::TO_FLOAT(iVar1) / 255f), (SYSTEM::TO_FLOAT(iVar2) / 255f), 0x00000000);
			uVar3 = uVar3;
		}
		unk_0xD803566B5FEA9245(uParam0->f_17, vParam1, 0f, 0f, 0f);
	}
}

void func_292()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000024, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000000F, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000010, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000011, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000013, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000014, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000000, 0x00000001);
	unk_0x3584F71E5CA29322(0x00000002);
	unk_0x3584F71E5CA29322(0x00000013);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000001);
	unk_0x3584F71E5CA29322(0x00000012);
	unk_0x3584F71E5CA29322(0x00000003);
	unk_0x3584F71E5CA29322(0x00000004);
	if (!func_301())
	{
		func_293(0x00000001);
	}
}

void func_293(bool bParam0)
{
	if (bParam0)
	{
		func_300();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_299(0x00000000))
		{
			func_294(0x00000000);
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

void func_294(int iParam0)
{
	if (func_298())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_297())
		{
			func_296(0x00000001, 0x00000001);
		}
		else
		{
			func_296(0x00000000, 0x00000000);
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
	if (!func_295())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_295()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_296(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_299(0x00000000))
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

bool func_297()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_298()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_299(int iParam0)
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

void func_300()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

int func_301()
{
	if (Global_4C1E.f_1 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_302(var uParam0)
{
	uParam0->f_6 = (uParam0->f_6 + unk_0x6117725E0134737F());
}

int func_303(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_265(uParam0[iParam1 /*94*/]);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iVar0))
		{
			unk_0x5DA3F35E3BFDEE66(iVar0, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(func_265(uParam0[(0x00000001 - iParam1) /*94*/])))
		{
			unk_0x5DA3F35E3BFDEE66(func_265(uParam0[(0x00000001 - iParam1) /*94*/]), unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
		}
		return 0x00000001;
	}
	if (unk_0xEB6A8945D1AC98A1(iVar0))
	{
		return 0x00000001;
	}
	if (unk_0x688A90832774AB83(iVar0))
	{
		return 0x00000001;
	}
	if (unk_0x65851B2C8786EE74(iVar0))
	{
		return 0x00000001;
	}
	if ((!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0xB87D13D0C064E9D1(iVar0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0x00000001;
	}
	if (uParam0->f_679 != 0x00000001 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		func_304("TENN_WANTED", 0x00001D4C, 0x00000000);
		func_179(iParam2, 0x40000000);
		return 0x00000001;
	}
	if (unk_0x869EFD0BC0868856(iVar0))
	{
		return 0x00000001;
	}
	iVar2 = (0x00000001 - iParam1);
	iVar1 = func_265(uParam0[iVar2 /*94*/]);
	if (unk_0xEB6A8945D1AC98A1(iVar1))
	{
		return 0x00000001;
	}
	if (unk_0x688A90832774AB83(iVar1))
	{
		return 0x00000001;
	}
	if (unk_0x65851B2C8786EE74(iVar1))
	{
		return 0x00000001;
	}
	if ((!unk_0x437347B10A200C4B(iVar1, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000)) && unk_0xB87D13D0C064E9D1(iVar1, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!unk_0xC844350D5D58C99A(iVar1))
	{
		return 0x00000001;
	}
	if (unk_0x869EFD0BC0868856(iVar1))
	{
		return 0x00000001;
	}
	if (uParam0->f_679 == 0x00000001 && (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar0) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar1)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_304(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_305(var uParam0)
{
	return uParam0->f_4;
}

void func_306(var uParam0)
{
	if (unk_0xC844350D5D58C99A((uParam0[0x00000000 /*94*/])->f_21))
	{
		unk_0x15AFB6CBDE990FB6((uParam0[0x00000000 /*94*/])->f_21, 0x00000001, 0x00000001);
		unk_0xEEEE2E5FA6F78DF0(&((uParam0[0x00000000 /*94*/])->f_21));
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_F7))
	{
		unk_0x15AFB6CBDE990FB6(uParam0->f_F7, 0x00000001, 0x00000001);
		unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_F7));
	}
	if (unk_0xC844350D5D58C99A((uParam0[0x00000001 /*94*/])->f_21))
	{
		unk_0x15AFB6CBDE990FB6((uParam0[0x00000001 /*94*/])->f_21, 0x00000001, 0x00000001);
		unk_0xEEEE2E5FA6F78DF0(&((uParam0[0x00000001 /*94*/])->f_21));
	}
	unk_0x71199B01895C6202(joaat("prop_tennis_ball"));
	unk_0x71199B01895C6202(uParam0->f_684);
	unk_0x71199B01895C6202(uParam0->f_685);
	unk_0x71199B01895C6202(joaat("prop_tennis_rack_01b"));
	unk_0x8D17794CE3273D70("mini@tennis");
	unk_0x8D17794CE3273D70("mini@tennis@female");
	if (func_192(0x00000001))
	{
		func_309(0x00000001);
	}
	if (func_192(0x00000002))
	{
		func_309(0x00000002);
	}
	if (!func_307(0xFFFFFFFF))
	{
		unk_0xB72C6E8042748B1A(unk_0xD803B885F5E47A62(), 0x00000001);
	}
	else
	{
		unk_0xB72C6E8042748B1A(unk_0xD803B885F5E47A62(), 0x00000000);
	}
	if (!unk_0x437347B10A200C4B((uParam0[0x00000000 /*94*/])->f_20, 0x00000000) && !unk_0x9E834FAC6CCB49FB((uParam0[0x00000000 /*94*/])->f_20))
	{
		func_223(uParam0, 0x00000000, 0x00000001);
	}
	if (!unk_0x437347B10A200C4B((uParam0[0x00000001 /*94*/])->f_20, 0x00000000) && !unk_0x9E834FAC6CCB49FB((uParam0[0x00000001 /*94*/])->f_20))
	{
		func_223(uParam0, 0x00000001, 0x00000001);
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iVar0 = unk_0xD803B885F5E47A62();
	}
	else
	{
		iVar0 = unk_0x117658E336116132(iParam0);
	}
	if (func_224(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_308(iVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_308(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_27.f_12, 0x0000000E);
}

void func_309(int iParam0)
{
	Global_1B084 = (Global_1B084 - (Global_1B084 && iParam0));
}

void func_310(var uParam0)
{
	uParam0->f_688 = (uParam0->f_688 + SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
}

void func_311(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	uParam0->f_679 = iParam2;
	func_321(&(uParam0->f_BD), uParam0, *uParam5);
	if (iParam3 == 0x00000000)
	{
		vVar0 = { uParam0->f_67A };
		vVar1 = { uParam0->f_67D };
	}
	else if (iParam3 == 0x00000001)
	{
		vVar0 = { -uParam0->f_67A };
		vVar1 = { -uParam0->f_67D };
	}
	StringCopy(&(uParam0->f_686), "Idle1", 8);
	func_318(uParam0[iParam3 /*94*/], iParam3, 0x00000004, vVar0, vVar1);
	func_318(uParam0[iParam4 /*94*/], iParam4, 0x00000004, -vVar0, -vVar1);
	func_317(&(uParam0->f_F7));
	func_316(uParam0);
	func_315(uParam0);
	func_314(uParam0);
	func_313(&((uParam0[iParam3 /*94*/])->f_4), uParam0->f_BD.f_3[0x00000000 /*3*/], (uParam0[iParam3 /*94*/])->f_28, (uParam0[iParam3 /*94*/])->f_2B, uParam0->f_BD.f_10[0x00000000 /*3*/]);
	func_313(&((uParam0[iParam4 /*94*/])->f_4), uParam0->f_BD.f_3[0x00000002 /*3*/], (uParam0[iParam4 /*94*/])->f_28, (uParam0[iParam4 /*94*/])->f_2B, uParam0->f_BD.f_10[0x00000002 /*3*/]);
	func_312(uParam1, func_50(uParam5->f_1, uParam5->f_3, unk_0x09AC81E49EA267F7(0x000001F4, 0x00000BB8)));
	func_269(uParam1, 0x00000004);
	uParam0->f_684 = iParam6;
	uParam0->f_685 = iParam7;
	if (uParam5->f_1)
	{
		iVar2 = 0x00000000;
		uParam0->f_683 = 0x00000001;
	}
	else
	{
		iVar2 = 0x00000001;
	}
	(uParam0[iParam3 /*94*/])->f_4.f_14 = iVar2;
	(uParam0[iParam4 /*94*/])->f_4.f_14 = iVar2;
	unk_0x523BCC9DC80CD82F(joaat("prop_tennis_ball"));
	unk_0x523BCC9DC80CD82F(iParam6);
	unk_0x523BCC9DC80CD82F(iParam7);
	unk_0x523BCC9DC80CD82F(joaat("prop_tennis_rack_01b"));
	unk_0x3F423BF5B8125A50("mini@tennis");
	unk_0x3F423BF5B8125A50("mini@tennis@female");
	unk_0x3F423BF5B8125A50("weapons@tennis@male");
}

void func_312(var uParam0, var uParam1)
{
	uParam0->f_1B = uParam1;
}

void func_313(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)
{
	uParam0->f_6[0x00000000 /*3*/] = { vParam1 + vParam2 * Vector(1f, 1f, 1f) + vParam3 * Vector(4f, 4f, 4f) };
	uParam0->f_6[0x00000001 /*3*/] = { vParam1 + vParam2 * Vector(8f, 8f, 8f) + vParam3 * Vector(2.165f, 2.165f, 2.165f) };
	uParam0->f_6[0x00000002 /*3*/] = { vParam1 + vParam2 * Vector(8f, 8f, 8f) + vParam3 * Vector(6f, 6f, 6f) };
	uParam0->f_6[0x00000003 /*3*/] = { vParam4 + vParam2 * Vector(0.5f, 0.5f, 0.5f) + vParam3 * Vector(4f, 4f, 4f) };
}

void func_314(var uParam0)
{
	uParam0->f_217[0x00000003 /*12*/] = 0f;
	uParam0->f_217[0x00000003 /*12*/].f_1 = 0.167f;
	uParam0->f_217[0x00000003 /*12*/].f_2 = 0.633f;
	uParam0->f_217[0x00000003 /*12*/].f_3 = 0x00000030;
	StringCopy(&(uParam0->f_217[0x00000003 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_217[0x00000005 /*12*/] = 0f;
	uParam0->f_217[0x00000005 /*12*/].f_1 = 0.143f;
	uParam0->f_217[0x00000005 /*12*/].f_2 = 0.633f;
	uParam0->f_217[0x00000005 /*12*/].f_3 = 0x00000038;
	StringCopy(&(uParam0->f_217[0x00000005 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_217[0x00000004 /*12*/] = 0f;
	uParam0->f_217[0x00000004 /*12*/].f_1 = 0.15f;
	uParam0->f_217[0x00000004 /*12*/].f_2 = 0.633f;
	uParam0->f_217[0x00000004 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000004 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_217[0x00000000 /*12*/] = 0f;
	uParam0->f_217[0x00000000 /*12*/].f_1 = 0.14f;
	uParam0->f_217[0x00000000 /*12*/].f_2 = 0.53f;
	uParam0->f_217[0x00000000 /*12*/].f_3 = 0x0000003A;
	StringCopy(&(uParam0->f_217[0x00000000 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_217[0x00000002 /*12*/] = 0f;
	uParam0->f_217[0x00000002 /*12*/].f_1 = 0.15f;
	uParam0->f_217[0x00000002 /*12*/].f_2 = 0.535f;
	uParam0->f_217[0x00000002 /*12*/].f_3 = 0x00000036;
	StringCopy(&(uParam0->f_217[0x00000002 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_217[0x00000001 /*12*/] = 0f;
	uParam0->f_217[0x00000001 /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x00000001 /*12*/].f_2 = 0.665f;
	uParam0->f_217[0x00000001 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000001 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_217[0x00000009 /*12*/] = 0.125f;
	uParam0->f_217[0x00000009 /*12*/].f_1 = 0.167f;
	uParam0->f_217[0x00000009 /*12*/].f_2 = 0.633f;
	uParam0->f_217[0x00000009 /*12*/].f_3 = 0x00000030;
	StringCopy(&(uParam0->f_217[0x00000009 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_217[0x0000000B /*12*/] = 0.089f;
	uParam0->f_217[0x0000000B /*12*/].f_1 = 0.143f;
	uParam0->f_217[0x0000000B /*12*/].f_2 = 0.633f;
	uParam0->f_217[0x0000000B /*12*/].f_3 = 0x00000038;
	StringCopy(&(uParam0->f_217[0x0000000B /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_217[0x0000000A /*12*/] = 0.108f;
	uParam0->f_217[0x0000000A /*12*/].f_1 = 0.15f;
	uParam0->f_217[0x0000000A /*12*/].f_2 = 0.633f;
	uParam0->f_217[0x0000000A /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x0000000A /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_217[0x00000006 /*12*/] = 0.086f;
	uParam0->f_217[0x00000006 /*12*/].f_1 = 0.12f;
	uParam0->f_217[0x00000006 /*12*/].f_2 = 0.53f;
	uParam0->f_217[0x00000006 /*12*/].f_3 = 0x0000003A;
	StringCopy(&(uParam0->f_217[0x00000006 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_217[0x00000008 /*12*/] = 0.0925f;
	uParam0->f_217[0x00000008 /*12*/].f_1 = 0.15f;
	uParam0->f_217[0x00000008 /*12*/].f_2 = 0.535f;
	uParam0->f_217[0x00000008 /*12*/].f_3 = 0x00000036;
	StringCopy(&(uParam0->f_217[0x00000008 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_217[0x00000007 /*12*/] = 0.108f;
	uParam0->f_217[0x00000007 /*12*/].f_1 = 0.16f;
	uParam0->f_217[0x00000007 /*12*/].f_2 = 0.665f;
	uParam0->f_217[0x00000007 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000007 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_217[0x00000023 /*12*/] = 0f;
	uParam0->f_217[0x00000023 /*12*/].f_1 = 0.3f;
	uParam0->f_217[0x00000023 /*12*/].f_2 = 0.58f;
	uParam0->f_217[0x00000023 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000023 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_217[0x00000022 /*12*/] = 0f;
	uParam0->f_217[0x00000022 /*12*/].f_1 = 0.3f;
	uParam0->f_217[0x00000022 /*12*/].f_2 = 0.585f;
	uParam0->f_217[0x00000022 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000022 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_217[0x00000021 /*12*/] = 0f;
	uParam0->f_217[0x00000021 /*12*/].f_1 = 0.29f;
	uParam0->f_217[0x00000021 /*12*/].f_2 = 0.63f;
	uParam0->f_217[0x00000021 /*12*/].f_3 = 0x00000030;
	StringCopy(&(uParam0->f_217[0x00000021 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_217[0x00000020 /*12*/] = 0f;
	uParam0->f_217[0x00000020 /*12*/].f_1 = 0.28f;
	uParam0->f_217[0x00000020 /*12*/].f_2 = 0.708f;
	uParam0->f_217[0x00000020 /*12*/].f_3 = 0x00000032;
	StringCopy(&(uParam0->f_217[0x00000020 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_217[0x0000001F /*12*/] = 0f;
	uParam0->f_217[0x0000001F /*12*/].f_1 = 0.26f;
	uParam0->f_217[0x0000001F /*12*/].f_2 = 0.71f;
	uParam0->f_217[0x0000001F /*12*/].f_3 = 0x00000036;
	StringCopy(&(uParam0->f_217[0x0000001F /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_217[0x0000001E /*12*/] = 0f;
	uParam0->f_217[0x0000001E /*12*/].f_1 = 0.26f;
	uParam0->f_217[0x0000001E /*12*/].f_2 = 0.643f;
	uParam0->f_217[0x0000001E /*12*/].f_3 = 0x00000036;
	StringCopy(&(uParam0->f_217[0x0000001E /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_217[0x0000002F /*12*/] = 0.174f;
	uParam0->f_217[0x0000002F /*12*/].f_1 = uParam0->f_217[0x00000023 /*12*/].f_1;
	uParam0->f_217[0x0000002F /*12*/].f_2 = uParam0->f_217[0x00000023 /*12*/].f_2;
	uParam0->f_217[0x0000002F /*12*/].f_3 = uParam0->f_217[0x00000023 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x0000002F /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_217[0x0000002E /*12*/] = 0.217f;
	uParam0->f_217[0x0000002E /*12*/].f_1 = uParam0->f_217[0x00000022 /*12*/].f_1;
	uParam0->f_217[0x0000002E /*12*/].f_2 = uParam0->f_217[0x00000022 /*12*/].f_2;
	uParam0->f_217[0x0000002E /*12*/].f_3 = uParam0->f_217[0x00000022 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x0000002E /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_217[0x0000002D /*12*/] = 0.208f;
	uParam0->f_217[0x0000002D /*12*/].f_1 = uParam0->f_217[0x00000021 /*12*/].f_1;
	uParam0->f_217[0x0000002D /*12*/].f_2 = uParam0->f_217[0x00000021 /*12*/].f_2;
	uParam0->f_217[0x0000002D /*12*/].f_3 = uParam0->f_217[0x00000021 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x0000002D /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_217[0x0000002C /*12*/] = 0.12f;
	uParam0->f_217[0x0000002C /*12*/].f_1 = uParam0->f_217[0x00000020 /*12*/].f_1;
	uParam0->f_217[0x0000002C /*12*/].f_2 = uParam0->f_217[0x00000020 /*12*/].f_2;
	uParam0->f_217[0x0000002C /*12*/].f_3 = uParam0->f_217[0x00000020 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x0000002C /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_217[0x0000002B /*12*/] = 0.148f;
	uParam0->f_217[0x0000002B /*12*/].f_1 = uParam0->f_217[0x0000001F /*12*/].f_1;
	uParam0->f_217[0x0000002B /*12*/].f_2 = uParam0->f_217[0x0000001F /*12*/].f_2;
	uParam0->f_217[0x0000002B /*12*/].f_3 = uParam0->f_217[0x0000001F /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x0000002B /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_217[0x0000002A /*12*/] = 0.09f;
	uParam0->f_217[0x0000002A /*12*/].f_1 = uParam0->f_217[0x0000001E /*12*/].f_1;
	uParam0->f_217[0x0000002A /*12*/].f_2 = uParam0->f_217[0x0000001E /*12*/].f_2;
	uParam0->f_217[0x0000002A /*12*/].f_3 = uParam0->f_217[0x0000001E /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x0000002A /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_217[0x00000029 /*12*/] = 0f;
	uParam0->f_217[0x00000029 /*12*/].f_1 = 0.27f;
	uParam0->f_217[0x00000029 /*12*/].f_2 = 0.613f;
	uParam0->f_217[0x00000029 /*12*/].f_3 = 0x00000038;
	StringCopy(&(uParam0->f_217[0x00000029 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_217[0x00000028 /*12*/] = 0f;
	uParam0->f_217[0x00000028 /*12*/].f_1 = 0.27f;
	uParam0->f_217[0x00000028 /*12*/].f_2 = 0.533f;
	uParam0->f_217[0x00000028 /*12*/].f_3 = 0x00000039;
	StringCopy(&(uParam0->f_217[0x00000028 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_217[0x00000027 /*12*/] = 0f;
	uParam0->f_217[0x00000027 /*12*/].f_1 = 0.28f;
	uParam0->f_217[0x00000027 /*12*/].f_2 = 0.69f;
	uParam0->f_217[0x00000027 /*12*/].f_3 = 0x00000035;
	StringCopy(&(uParam0->f_217[0x00000027 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_217[0x00000026 /*12*/] = 0f;
	uParam0->f_217[0x00000026 /*12*/].f_1 = 0.26f;
	uParam0->f_217[0x00000026 /*12*/].f_2 = 0.665f;
	uParam0->f_217[0x00000026 /*12*/].f_3 = 0x00000039;
	StringCopy(&(uParam0->f_217[0x00000026 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_217[0x00000025 /*12*/] = 0f;
	uParam0->f_217[0x00000025 /*12*/].f_1 = 0.28f;
	uParam0->f_217[0x00000025 /*12*/].f_2 = 0.782f;
	uParam0->f_217[0x00000025 /*12*/].f_3 = 0x00000037;
	StringCopy(&(uParam0->f_217[0x00000025 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_217[0x00000024 /*12*/] = 0f;
	uParam0->f_217[0x00000024 /*12*/].f_1 = 0.24f;
	uParam0->f_217[0x00000024 /*12*/].f_2 = 0.698f;
	uParam0->f_217[0x00000024 /*12*/].f_3 = 0x0000003E;
	StringCopy(&(uParam0->f_217[0x00000024 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_217[0x00000035 /*12*/] = 0.135f;
	uParam0->f_217[0x00000035 /*12*/].f_1 = uParam0->f_217[0x00000029 /*12*/].f_1;
	uParam0->f_217[0x00000035 /*12*/].f_2 = uParam0->f_217[0x00000029 /*12*/].f_2;
	uParam0->f_217[0x00000035 /*12*/].f_3 = uParam0->f_217[0x00000029 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x00000035 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_217[0x00000034 /*12*/] = 0.173f;
	uParam0->f_217[0x00000034 /*12*/].f_1 = uParam0->f_217[0x00000028 /*12*/].f_1;
	uParam0->f_217[0x00000034 /*12*/].f_2 = uParam0->f_217[0x00000028 /*12*/].f_2;
	uParam0->f_217[0x00000034 /*12*/].f_3 = uParam0->f_217[0x00000028 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x00000034 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_217[0x00000033 /*12*/] = 0.12f;
	uParam0->f_217[0x00000033 /*12*/].f_1 = uParam0->f_217[0x00000027 /*12*/].f_1;
	uParam0->f_217[0x00000033 /*12*/].f_2 = uParam0->f_217[0x00000027 /*12*/].f_2;
	uParam0->f_217[0x00000033 /*12*/].f_3 = uParam0->f_217[0x00000027 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x00000033 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_217[0x00000032 /*12*/] = 0.148f;
	uParam0->f_217[0x00000032 /*12*/].f_1 = uParam0->f_217[0x00000026 /*12*/].f_1;
	uParam0->f_217[0x00000032 /*12*/].f_2 = uParam0->f_217[0x00000026 /*12*/].f_2;
	uParam0->f_217[0x00000032 /*12*/].f_3 = uParam0->f_217[0x00000026 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x00000032 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_217[0x00000031 /*12*/] = 0.16f;
	uParam0->f_217[0x00000031 /*12*/].f_1 = uParam0->f_217[0x00000025 /*12*/].f_1;
	uParam0->f_217[0x00000031 /*12*/].f_2 = uParam0->f_217[0x00000025 /*12*/].f_2;
	uParam0->f_217[0x00000031 /*12*/].f_3 = uParam0->f_217[0x00000025 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x00000031 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_217[0x00000030 /*12*/] = 0.155f;
	uParam0->f_217[0x00000030 /*12*/].f_1 = uParam0->f_217[0x00000024 /*12*/].f_1;
	uParam0->f_217[0x00000030 /*12*/].f_2 = uParam0->f_217[0x00000024 /*12*/].f_2;
	uParam0->f_217[0x00000030 /*12*/].f_3 = uParam0->f_217[0x00000024 /*12*/].f_3;
	StringCopy(&(uParam0->f_217[0x00000030 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_217[0x0000000F /*12*/] = 0f;
	uParam0->f_217[0x0000000F /*12*/].f_1 = 0.21f;
	uParam0->f_217[0x0000000F /*12*/].f_2 = 0.7f;
	uParam0->f_217[0x0000000F /*12*/].f_3 = 0x0000002B;
	StringCopy(&(uParam0->f_217[0x0000000F /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_217[0x00000011 /*12*/] = 0f;
	uParam0->f_217[0x00000011 /*12*/].f_1 = 0.16f;
	uParam0->f_217[0x00000011 /*12*/].f_2 = 0.67f;
	uParam0->f_217[0x00000011 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000011 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_217[0x00000010 /*12*/] = 0f;
	uParam0->f_217[0x00000010 /*12*/].f_1 = 0.18f;
	uParam0->f_217[0x00000010 /*12*/].f_2 = 0.6f;
	uParam0->f_217[0x00000010 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000010 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_217[0x00000018 /*12*/] = 0.136f;
	uParam0->f_217[0x00000018 /*12*/].f_1 = 0.21f;
	uParam0->f_217[0x00000018 /*12*/].f_2 = 0.7f;
	uParam0->f_217[0x00000018 /*12*/].f_3 = 0x0000002B;
	StringCopy(&(uParam0->f_217[0x00000018 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_217[0x0000001A /*12*/] = 0.108f;
	uParam0->f_217[0x0000001A /*12*/].f_1 = 0.16f;
	uParam0->f_217[0x0000001A /*12*/].f_2 = 0.67f;
	uParam0->f_217[0x0000001A /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x0000001A /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_217[0x00000019 /*12*/] = 0.108f;
	uParam0->f_217[0x00000019 /*12*/].f_1 = 0.18f;
	uParam0->f_217[0x00000019 /*12*/].f_2 = 0.6f;
	uParam0->f_217[0x00000019 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000019 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_217[0x00000012 /*12*/] = 0f;
	uParam0->f_217[0x00000012 /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x00000012 /*12*/].f_2 = 0.722f;
	uParam0->f_217[0x00000012 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000012 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_217[0x00000013 /*12*/] = 0f;
	uParam0->f_217[0x00000013 /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x00000013 /*12*/].f_2 = 0.614f;
	uParam0->f_217[0x00000013 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000013 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_217[0x00000014 /*12*/] = 0f;
	uParam0->f_217[0x00000014 /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x00000014 /*12*/].f_2 = 0.7f;
	uParam0->f_217[0x00000014 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000014 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_217[0x0000001B /*12*/] = 0.108f;
	uParam0->f_217[0x0000001B /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x0000001B /*12*/].f_2 = 0.722f;
	uParam0->f_217[0x0000001B /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x0000001B /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_217[0x0000001C /*12*/] = 0.108f;
	uParam0->f_217[0x0000001C /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x0000001C /*12*/].f_2 = 0.614f;
	uParam0->f_217[0x0000001C /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x0000001C /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_217[0x0000001D /*12*/] = 0.108f;
	uParam0->f_217[0x0000001D /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x0000001D /*12*/].f_2 = 0.7f;
	uParam0->f_217[0x0000001D /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x0000001D /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_217[0x0000000C /*12*/] = 0f;
	uParam0->f_217[0x0000000C /*12*/].f_1 = 0.14f;
	uParam0->f_217[0x0000000C /*12*/].f_2 = 0.615f;
	uParam0->f_217[0x0000000C /*12*/].f_3 = 0x0000003E;
	StringCopy(&(uParam0->f_217[0x0000000C /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_217[0x0000000E /*12*/] = 0f;
	uParam0->f_217[0x0000000E /*12*/].f_1 = 0.16f;
	uParam0->f_217[0x0000000E /*12*/].f_2 = 0.643f;
	uParam0->f_217[0x0000000E /*12*/].f_3 = 0x00000034;
	StringCopy(&(uParam0->f_217[0x0000000E /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_217[0x0000000D /*12*/] = 0f;
	uParam0->f_217[0x0000000D /*12*/].f_1 = 0.18f;
	uParam0->f_217[0x0000000D /*12*/].f_2 = 0.779f;
	uParam0->f_217[0x0000000D /*12*/].f_3 = 0x0000002D;
	StringCopy(&(uParam0->f_217[0x0000000D /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_217[0x00000015 /*12*/] = 0.08f;
	uParam0->f_217[0x00000015 /*12*/].f_1 = 0.14f;
	uParam0->f_217[0x00000015 /*12*/].f_2 = 0.615f;
	uParam0->f_217[0x00000015 /*12*/].f_3 = 0x0000003E;
	StringCopy(&(uParam0->f_217[0x00000015 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_217[0x00000017 /*12*/] = 0.094f;
	uParam0->f_217[0x00000017 /*12*/].f_1 = 0.16f;
	uParam0->f_217[0x00000017 /*12*/].f_2 = 0.643f;
	uParam0->f_217[0x00000017 /*12*/].f_3 = 0x00000034;
	StringCopy(&(uParam0->f_217[0x00000017 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_217[0x00000016 /*12*/] = 0.108f;
	uParam0->f_217[0x00000016 /*12*/].f_1 = 0.18f;
	uParam0->f_217[0x00000016 /*12*/].f_2 = 0.779f;
	uParam0->f_217[0x00000016 /*12*/].f_3 = 0x0000002D;
	StringCopy(&(uParam0->f_217[0x00000016 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_217[0x00000036 /*12*/] = 0.28f;
	uParam0->f_217[0x00000036 /*12*/].f_1 = 0.37f;
	uParam0->f_217[0x00000036 /*12*/].f_2 = 0.708f;
	uParam0->f_217[0x00000036 /*12*/].f_3 = 0x00000039;
	StringCopy(&(uParam0->f_217[0x00000036 /*12*/].f_4), "lunge_bh_hi", 32);
	uParam0->f_217[0x00000038 /*12*/] = 0.275f;
	uParam0->f_217[0x00000038 /*12*/].f_1 = 0.37f;
	uParam0->f_217[0x00000038 /*12*/].f_2 = 0.695f;
	uParam0->f_217[0x00000038 /*12*/].f_3 = 0x0000003A;
	StringCopy(&(uParam0->f_217[0x00000038 /*12*/].f_4), "lunge_bh_lo", 32);
	uParam0->f_217[0x00000037 /*12*/] = 0.27f;
	uParam0->f_217[0x00000037 /*12*/].f_1 = 0.37f;
	uParam0->f_217[0x00000037 /*12*/].f_2 = 0.688f;
	uParam0->f_217[0x00000037 /*12*/].f_3 = 0x0000003A;
	StringCopy(&(uParam0->f_217[0x00000037 /*12*/].f_4), "lunge_bh_mid", 32);
	uParam0->f_217[0x00000039 /*12*/] = 0.26f;
	uParam0->f_217[0x00000039 /*12*/].f_1 = 0.41f;
	uParam0->f_217[0x00000039 /*12*/].f_2 = 0.705f;
	uParam0->f_217[0x00000039 /*12*/].f_3 = 0x00000036;
	StringCopy(&(uParam0->f_217[0x00000039 /*12*/].f_4), "lunge_fh_hi", 32);
	uParam0->f_217[0x0000003B /*12*/] = 0.26f;
	uParam0->f_217[0x0000003B /*12*/].f_1 = 0.42f;
	uParam0->f_217[0x0000003B /*12*/].f_2 = 0.738f;
	uParam0->f_217[0x0000003B /*12*/].f_3 = 0x00000034;
	StringCopy(&(uParam0->f_217[0x0000003B /*12*/].f_4), "lunge_fh_lo", 32);
	uParam0->f_217[0x0000003A /*12*/] = 0.263f;
	uParam0->f_217[0x0000003A /*12*/].f_1 = 0.43f;
	uParam0->f_217[0x0000003A /*12*/].f_2 = 0.695f;
	uParam0->f_217[0x0000003A /*12*/].f_3 = 0x00000032;
	StringCopy(&(uParam0->f_217[0x0000003A /*12*/].f_4), "lunge_fh_mid", 32);
	uParam0->f_217[0x00000048 /*12*/] = 0.073f;
	uParam0->f_217[0x00000048 /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x00000048 /*12*/].f_2 = 0.77f;
	uParam0->f_217[0x00000048 /*12*/].f_3 = 0x00000066;
	StringCopy(&(uParam0->f_217[0x00000048 /*12*/].f_4), "dive_bh", 32);
	uParam0->f_217[0x00000049 /*12*/] = 0.053f;
	uParam0->f_217[0x00000049 /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x00000049 /*12*/].f_2 = 0.781f;
	uParam0->f_217[0x00000049 /*12*/].f_3 = 0x00000066;
	StringCopy(&(uParam0->f_217[0x00000049 /*12*/].f_4), "dive_fh", 32);
	uParam0->f_217[0x0000003C /*12*/] = 0f;
	uParam0->f_217[0x0000003C /*12*/].f_1 = 0.15f;
	uParam0->f_217[0x0000003C /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x0000003C /*12*/].f_3 = 0x00000041;
	StringCopy(&(uParam0->f_217[0x0000003C /*12*/].f_4), "forehand_ts_lo_far", 32);
	uParam0->f_217[0x0000003D /*12*/] = 0f;
	uParam0->f_217[0x0000003D /*12*/].f_1 = 0.17f;
	uParam0->f_217[0x0000003D /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x0000003D /*12*/].f_3 = 0x0000003A;
	StringCopy(&(uParam0->f_217[0x0000003D /*12*/].f_4), "forehand_ts_md_far", 32);
	uParam0->f_217[0x0000003E /*12*/] = 0f;
	uParam0->f_217[0x0000003E /*12*/].f_1 = 0.13f;
	uParam0->f_217[0x0000003E /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x0000003E /*12*/].f_3 = 0x0000004A;
	StringCopy(&(uParam0->f_217[0x0000003E /*12*/].f_4), "forehand_ts_hi_far", 32);
	uParam0->f_217[0x0000003F /*12*/] = 0f;
	uParam0->f_217[0x0000003F /*12*/].f_1 = 0.2f;
	uParam0->f_217[0x0000003F /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x0000003F /*12*/].f_3 = 0x00000028;
	StringCopy(&(uParam0->f_217[0x0000003F /*12*/].f_4), "close_bh_lo", 32);
	uParam0->f_217[0x00000040 /*12*/] = 0f;
	uParam0->f_217[0x00000040 /*12*/].f_1 = 0.2f;
	uParam0->f_217[0x00000040 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000040 /*12*/].f_3 = 0x00000028;
	StringCopy(&(uParam0->f_217[0x00000040 /*12*/].f_4), "close_bh_md", 32);
	uParam0->f_217[0x00000041 /*12*/] = 0f;
	uParam0->f_217[0x00000041 /*12*/].f_1 = 0.2f;
	uParam0->f_217[0x00000041 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000041 /*12*/].f_3 = 0x00000028;
	StringCopy(&(uParam0->f_217[0x00000041 /*12*/].f_4), "close_bh_hi", 32);
	uParam0->f_217[0x00000042 /*12*/] = 0f;
	uParam0->f_217[0x00000042 /*12*/].f_1 = 0.174f;
	uParam0->f_217[0x00000042 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000042 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000042 /*12*/].f_4), "close_fh_lo", 32);
	uParam0->f_217[0x00000043 /*12*/] = 0f;
	uParam0->f_217[0x00000043 /*12*/].f_1 = 0.174f;
	uParam0->f_217[0x00000043 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000043 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000043 /*12*/].f_4), "close_fh_md", 32);
	uParam0->f_217[0x00000044 /*12*/] = 0f;
	uParam0->f_217[0x00000044 /*12*/].f_1 = 0.174f;
	uParam0->f_217[0x00000044 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000044 /*12*/].f_3 = 0x0000002E;
	StringCopy(&(uParam0->f_217[0x00000044 /*12*/].f_4), "close_fh_hi", 32);
	uParam0->f_217[0x00000045 /*12*/] = 0f;
	uParam0->f_217[0x00000045 /*12*/].f_1 = 0.25f;
	uParam0->f_217[0x00000045 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000045 /*12*/].f_3 = 0x00000030;
	StringCopy(&(uParam0->f_217[0x00000045 /*12*/].f_4), "mid_bh_lo", 32);
	uParam0->f_217[0x00000046 /*12*/] = 0f;
	uParam0->f_217[0x00000046 /*12*/].f_1 = 0.231f;
	uParam0->f_217[0x00000046 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000046 /*12*/].f_3 = 0x00000034;
	StringCopy(&(uParam0->f_217[0x00000046 /*12*/].f_4), "mid_bh_md", 32);
	uParam0->f_217[0x00000047 /*12*/] = 0f;
	uParam0->f_217[0x00000047 /*12*/].f_1 = 0.231f;
	uParam0->f_217[0x00000047 /*12*/].f_2 = 0.95f;
	uParam0->f_217[0x00000047 /*12*/].f_3 = 0x00000034;
	StringCopy(&(uParam0->f_217[0x00000047 /*12*/].f_4), "mid_bh_hi", 32);
}

void func_315(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_12F[0x00000005 /*3*/] = { -0.8036f, 0.6726f, -0.6097f };
	uParam0->f_12F[0x00000004 /*3*/] = { -0.8147f, 0.6746f, -0.0154f };
	uParam0->f_12F[0x00000003 /*3*/] = { -0.8298f, 0.6483f, 0.615f };
	uParam0->f_12F[0x00000002 /*3*/] = { -0.8254f, 0.6648f, -0.6352f };
	uParam0->f_12F[0x00000001 /*3*/] = { -0.8217f, 0.6774f, -0.012f };
	uParam0->f_12F[0x00000000 /*3*/] = { -0.8072f, 0.6576f, 0.5741f };
	uParam0->f_12F[0x00000011 /*3*/] = { 0.813f, 0.6795f, -0.5939f };
	uParam0->f_12F[0x00000010 /*3*/] = { 0.8651f, 0.6928f, 0.0177f };
	uParam0->f_12F[0x0000000F /*3*/] = { 0.8592f, 0.6398f, 0.585f };
	uParam0->f_12F[0x0000000E /*3*/] = { 0.8073f, 0.6708f, -0.5718f };
	uParam0->f_12F[0x0000000D /*3*/] = { 0.831f, 0.6645f, 0.0059f };
	uParam0->f_12F[0x0000000C /*3*/] = { 0.8462f, 0.6823f, 0.6137f };
	uParam0->f_12F[0x00000012 /*3*/] = { 0.0038f, 0.571f, 1.4844f };
	uParam0->f_12F[0x00000013 /*3*/] = { -0.6106f, 0.6003f, 1.4926f };
	uParam0->f_12F[0x00000014 /*3*/] = { 0.5791f, 0.6003f, 1.4524f };
	uParam0->f_12F[0x00000023 /*3*/] = { -0.1276f, 0.6496f, -0.6081f };
	uParam0->f_12F[0x00000022 /*3*/] = { -0.1219f, 0.6858f, -0.0039f };
	uParam0->f_12F[0x00000021 /*3*/] = { -0.158f, 0.6565f, 0.5989f };
	uParam0->f_12F[0x00000020 /*3*/] = { -0.1302f, 0.6646f, -0.6002f };
	uParam0->f_12F[0x0000001F /*3*/] = { -0.1243f, 0.6686f, 0.0104f };
	uParam0->f_12F[0x0000001E /*3*/] = { -0.1614f, 0.6659f, 0.6349f };
	uParam0->f_12F[0x00000029 /*3*/] = { 0.2654f, 0.7156f, -0.6474f };
	uParam0->f_12F[0x00000028 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_12F[0x00000027 /*3*/] = { 0.2755f, 0.6588f, 0.5959f };
	uParam0->f_12F[0x00000026 /*3*/] = { 0.2617f, 0.701f, -0.6222f };
	uParam0->f_12F[0x00000025 /*3*/] = { 0.2718f, 0.6637f, -0.0077f };
	uParam0->f_12F[0x00000024 /*3*/] = { 0.269f, 0.6677f, 0.6025f };
	uParam0->f_12F[0x0000000B /*3*/] = { -0.7118f, 0.5888f, -0.6097f };
	uParam0->f_12F[0x0000000A /*3*/] = { -0.7944f, 0.5983f, -0.0154f };
	uParam0->f_12F[0x00000009 /*3*/] = { -0.7291f, 0.5708f, 0.615f };
	uParam0->f_12F[0x00000008 /*3*/] = { -0.6591f, 0.4535f, -0.6352f };
	uParam0->f_12F[0x00000007 /*3*/] = { -0.7722f, 0.6042f, -0.012f };
	uParam0->f_12F[0x00000006 /*3*/] = { -0.8057f, 0.6484f, 0.5741f };
	uParam0->f_12F[0x0000001A /*3*/] = { 0.7679f, 0.5793f, -0.5939f };
	uParam0->f_12F[0x00000019 /*3*/] = { 0.7837f, 0.616f, 0.0177f };
	uParam0->f_12F[0x00000018 /*3*/] = { 0.6994f, 0.5786f, 0.585f };
	uParam0->f_12F[0x00000017 /*3*/] = { 0.8024f, 0.5107f, -0.5718f };
	uParam0->f_12F[0x00000016 /*3*/] = { 0.8475f, 0.4297f, 0.0059f };
	uParam0->f_12F[0x00000015 /*3*/] = { 0.8012f, 0.6051f, 0.6137f };
	uParam0->f_12F[0x0000001B /*3*/] = { -0.0045f, 0.4354f, 1.4844f };
	uParam0->f_12F[0x0000001C /*3*/] = { -0.5737f, 0.4354f, 1.4926f };
	uParam0->f_12F[0x0000001D /*3*/] = { 0.5691f, 0.4354f, 1.4524f };
	uParam0->f_12F[0x0000002F /*3*/] = { -0.4511f, 0.4966f, -0.6081f };
	uParam0->f_12F[0x0000002E /*3*/] = { -0.5103f, 0.51f, -0.0039f };
	uParam0->f_12F[0x0000002D /*3*/] = { -0.4779f, 0.3857f, 0.5989f };
	uParam0->f_12F[0x0000002C /*3*/] = { -0.3778f, 0.5049f, -0.6002f };
	uParam0->f_12F[0x0000002B /*3*/] = { -0.3224f, 0.5942f, 0.0104f };
	uParam0->f_12F[0x0000002A /*3*/] = { -0.3764f, 0.6902f, 0.6349f };
	uParam0->f_12F[0x00000035 /*3*/] = { 0.4805f, 0.7156f, -0.6474f };
	uParam0->f_12F[0x00000034 /*3*/] = { 0.7625f, 0.6532f, -0.0193f };
	uParam0->f_12F[0x00000033 /*3*/] = { 0.6043f, 0.6588f, 0.5959f };
	uParam0->f_12F[0x00000032 /*3*/] = { 0.473f, 0.6992f, -0.6222f };
	uParam0->f_12F[0x00000031 /*3*/] = { 0.5413f, 0.6353f, -0.0077f };
	uParam0->f_12F[0x00000030 /*3*/] = { 0.714f, 0.6593f, 0.6025f };
	uParam0->f_12F[0x00000038 /*3*/] = { -1.3525f, 0.6005f, -0.7221f };
	uParam0->f_12F[0x00000037 /*3*/] = { -1.5755f, 0.4699f, -0.0379f };
	uParam0->f_12F[0x00000036 /*3*/] = { -1.318f, 0.4631f, 0.7024f };
	uParam0->f_12F[0x0000003B /*3*/] = { 1.9622f, 0.2122f, -0.6432f };
	uParam0->f_12F[0x0000003A /*3*/] = { 1.9598f, 0.5945f, -0.0585f };
	uParam0->f_12F[0x00000039 /*3*/] = { 1.8166f, 0.3588f, 0.7322f };
	uParam0->f_12F[0x00000049 /*3*/] = { 2.2269f, -0.0119f, 0.0417f };
	uParam0->f_12F[0x00000048 /*3*/] = { -2.2644f, -0.1467f, 0.0997f };
	uParam0->f_12F[0x0000003C /*3*/] = { 1.4174f, 0.6731f, -0.5824f };
	uParam0->f_12F[0x0000003D /*3*/] = { 1.4134f, 0.6671f, 0.0059f };
	uParam0->f_12F[0x0000003E /*3*/] = { 1.4031f, 0.6845f, 0.6133f };
	uParam0->f_12F[0x0000003F /*3*/] = { -0.1726f, 0.6642f, -0.6095f };
	uParam0->f_12F[0x00000040 /*3*/] = { -0.2261f, 0.7049f, 0.0018f };
	uParam0->f_12F[0x00000041 /*3*/] = { -0.1558f, 0.6787f, 0.6703f };
	uParam0->f_12F[0x00000042 /*3*/] = { 0.2443f, 0.6567f, -0.5885f };
	uParam0->f_12F[0x00000043 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_12F[0x00000044 /*3*/] = { 0.2594f, 0.6387f, 0.6221f };
	uParam0->f_12F[0x00000045 /*3*/] = { -0.4975f, 0.6646f, -0.6002f };
	uParam0->f_12F[0x00000046 /*3*/] = { -0.4998f, 0.6686f, 0.0104f };
	uParam0->f_12F[0x00000047 /*3*/] = { -0.4952f, 0.6659f, 0.6349f };
	uParam0->f_12F[0x0000004A /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_12F[0x0000004C /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_12F[0x0000004B /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_623[0x00000000] = -2.2644f;
	uParam0->f_623[0x00000001] = -0.826f;
	uParam0->f_623[0x00000002] = -0.6969f;
	uParam0->f_623[0x00000003] = -0.4494f;
	uParam0->f_623[0x00000004] = -0.2019f;
	uParam0->f_623[0x00000005] = 0.0456f;
	uParam0->f_623[0x00000006] = 0.2931f;
	uParam0->f_623[0x00000007] = 0.5406f;
	uParam0->f_623[0x00000008] = 0.7881f;
	uParam0->f_623[0x00000009] = 1.0356f;
	uParam0->f_623[0x0000000A] = 2.6669f;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000A)
		{
			uParam0->f_5B4[iVar0 /*11*/][iVar1] = 0x0000004B;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_5B4[0x00000000 /*11*/][0x00000000] = 0x00000003;
	uParam0->f_5B4[0x00000000 /*11*/][0x00000001] = 0x00000036;
	uParam0->f_5B4[0x00000000 /*11*/][0x00000002] = 0x00000037;
	uParam0->f_5B4[0x00000000 /*11*/][0x00000003] = 0x00000038;
	uParam0->f_5B4[0x00000000 /*11*/][0x00000004] = 0x00000048;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000000] = 0x00000000;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000001] = 0x00000001;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000002] = 0x00000002;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000003] = 0x00000004;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000004] = 0x00000005;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000005] = 0x00000006;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000006] = 0x00000007;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000007] = 0x00000009;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000008] = 0x0000000A;
	uParam0->f_5B4[0x00000001 /*11*/][0x00000009] = 0x0000000B;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000000] = 0x00000008;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000001] = 0x00000013;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000002] = 0x0000001C;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000003] = 0x0000002D;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000004] = 0x0000002E;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000005] = 0x0000002F;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000006] = 0x00000045;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000007] = 0x00000046;
	uParam0->f_5B4[0x00000002 /*11*/][0x00000008] = 0x00000047;
	uParam0->f_5B4[0x00000003 /*11*/][0x00000000] = 0x0000002A;
	uParam0->f_5B4[0x00000003 /*11*/][0x00000001] = 0x0000002B;
	uParam0->f_5B4[0x00000003 /*11*/][0x00000002] = 0x0000002C;
	uParam0->f_5B4[0x00000003 /*11*/][0x00000003] = 0x00000040;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000000] = 0x00000012;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000001] = 0x0000001B;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000002] = 0x0000001E;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000003] = 0x0000001F;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000004] = 0x00000020;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000005] = 0x00000021;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000006] = 0x00000022;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000007] = 0x00000023;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000008] = 0x0000003F;
	uParam0->f_5B4[0x00000004 /*11*/][0x00000009] = 0x00000041;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000000] = 0x00000024;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000001] = 0x00000025;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000002] = 0x00000026;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000003] = 0x00000027;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000004] = 0x00000028;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000005] = 0x00000029;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000006] = 0x00000042;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000007] = 0x00000043;
	uParam0->f_5B4[0x00000005 /*11*/][0x00000008] = 0x00000044;
	uParam0->f_5B4[0x00000006 /*11*/][0x00000000] = 0x00000032;
	uParam0->f_5B4[0x00000006 /*11*/][0x00000001] = 0x00000035;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000000] = 0x00000014;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000001] = 0x00000018;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000002] = 0x00000019;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000003] = 0x0000001A;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000004] = 0x0000001D;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000005] = 0x00000030;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000006] = 0x00000031;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000007] = 0x00000033;
	uParam0->f_5B4[0x00000007 /*11*/][0x00000008] = 0x00000034;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000000] = 0x0000000C;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000001] = 0x0000000D;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000002] = 0x0000000E;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000003] = 0x0000000F;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000004] = 0x00000010;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000005] = 0x00000011;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000006] = 0x00000015;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000007] = 0x00000016;
	uParam0->f_5B4[0x00000008 /*11*/][0x00000008] = 0x00000017;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000000] = 0x00000039;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000001] = 0x0000003A;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000002] = 0x0000003B;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000003] = 0x0000003C;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000004] = 0x0000003D;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000005] = 0x0000003E;
	uParam0->f_5B4[0x00000009 /*11*/][0x00000006] = 0x00000049;
}

void func_316(var uParam0)
{
	uParam0->f_11A[0x00000000 /*2*/] = 0x0000002D;
	uParam0->f_11A[0x00000001 /*2*/] = 0x00000028;
	uParam0->f_11A[0x00000002 /*2*/] = 0x00000023;
	uParam0->f_11A[0x00000003 /*2*/] = 0x0000001E;
	uParam0->f_11A[0x00000004 /*2*/] = 0x00000019;
	uParam0->f_11A[0x00000005 /*2*/] = 0x00000014;
	uParam0->f_11A[0x00000006 /*2*/] = 0x0000001E;
	uParam0->f_11A[0x00000007 /*2*/] = 0x00000023;
	uParam0->f_11A[0x00000008 /*2*/] = 0x00000018;
	uParam0->f_11A[0x00000009 /*2*/] = 0x0000001B;
	uParam0->f_11A[0x00000000 /*2*/].f_1 = 0x00000163;
	uParam0->f_11A[0x00000001 /*2*/].f_1 = 0x00000164;
	uParam0->f_11A[0x00000002 /*2*/].f_1 = 0x00000166;
	uParam0->f_11A[0x00000003 /*2*/].f_1 = 0x00000002;
	uParam0->f_11A[0x00000004 /*2*/].f_1 = 0x00000005;
	uParam0->f_11A[0x00000005 /*2*/].f_1 = 0x00000009;
	uParam0->f_11A[0x00000006 /*2*/].f_1 = 0x00000162;
	uParam0->f_11A[0x00000007 /*2*/].f_1 = 0x00000002;
	uParam0->f_11A[0x00000008 /*2*/].f_1 = 0x0000000F;
	uParam0->f_11A[0x00000009 /*2*/].f_1 = 0x00000004;
}

void func_317(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

void func_318(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)
{
	uParam0->f_24 = 0x0000004B;
	uParam0->f_1 = iParam1;
	uParam0->f_28 = { vParam3 / FtoV(SYSTEM::VMAG(vParam3)) };
	uParam0->f_2B = { vParam4 / FtoV(SYSTEM::VMAG(vParam4)) };
	uParam0->f_3F = (3f + 1f);
	switch (iParam2)
	{
		case 0x00000000:
			uParam0->f_1F = iParam2;
			break;
		
		case 0x00000001:
			uParam0->f_1F = iParam2;
			break;
		
		case 0x00000002:
			uParam0->f_1F = iParam2;
			break;
		
		case 0x00000003:
			uParam0->f_1F = iParam2;
			break;
		
		case 0x00000004:
			func_319(&(uParam0->f_4));
			uParam0->f_1F = iParam2;
			break;
	}
}

void func_319(var uParam0)
{
	func_235(uParam0, 0x00000000);
	func_320(uParam0, 0x00000000);
}

void func_320(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

void func_321(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	func_326(&(uParam1->f_678));
	fVar0 = 0.46f;
	fVar1 = 0.5f;
	if (uParam1->f_678 == 0x00000010 && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_3[0x00000000 /*3*/] = { -768.966f, 165.352f, 66.474f };
		uParam0->f_3[0x00000001 /*3*/] = { -777.028f, 165.364f, 66.474f };
		uParam0->f_3[0x00000002 /*3*/] = { -777.045f, 141.573f, 66.474f };
		uParam0->f_3[0x00000003 /*3*/] = { -768.972f, 141.566f, 66.475f };
		fVar1 = 0.474f;
		uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
		uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
		uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
		func_325(uParam0, SYSTEM::VMAG(uParam1->f_67D));
		uParam0->f_31 = { uParam1->f_67A / FtoV(SYSTEM::VMAG(uParam1->f_67A)) };
		uParam0->f_34 = { uParam1->f_67D / FtoV(SYSTEM::VMAG(uParam1->f_67D)) };
		uParam0->f_10[0x00000000 /*3*/] = { -768.994f, 160.238f, 66.474f };
		uParam0->f_10[0x00000001 /*3*/] = { -777.009f, 160.23f, 66.474f };
		uParam0->f_10[0x00000002 /*3*/] = { -776.999f, 146.539f, 66.474f };
		uParam0->f_10[0x00000003 /*3*/] = { -768.988f, 146.552f, 66.474f };
		uParam0->f_1D = { -773.017f, 153.584f, 66.474f };
		uParam0->f_20[0x00000000 /*3*/] = { -768.981f, 153.584f, 66.474f };
		uParam0->f_20[0x00000001 /*3*/] = { -777.006f, 153.584f, 66.474f };
		uParam0->f_27[0x00000000 /*3*/] = { uParam0->f_1D + uParam1->f_67D * Vector(-0.834f, -0.834f, -0.834f) };
		uParam0->f_27[0x00000000 /*3*/].f_2 = (uParam0->f_27[0x00000000 /*3*/].f_2 + 1.148f);
		uParam0->f_27[0x00000001 /*3*/] = { uParam0->f_1D };
		uParam0->f_27[0x00000001 /*3*/].f_2 = (uParam0->f_27[0x00000001 /*3*/].f_2 + 0.928f);
		uParam0->f_27[0x00000002 /*3*/] = { uParam0->f_1D + uParam1->f_67D * Vector(0.834f, 0.834f, 0.834f) };
		uParam0->f_27[0x00000002 /*3*/].f_2 = (uParam0->f_27[0x00000002 /*3*/].f_2 + 1.148f);
		func_324(uParam0, 0x00000000);
		func_323(uParam0, 0.43f);
		uParam0->f_37 = { -780.4614f, 156.5187f, 66.4744f };
	}
	else if (uParam1->f_678 == 0x0000000D && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
		uParam0->f_3[0x00000000 /*3*/] = { -1173.349f, -1604.72f, 3.3738f };
		uParam0->f_3[0x00000001 /*3*/] = { -1180.108f, -1609.459f, 3.3738f };
		uParam0->f_3[0x00000002 /*3*/] = { -1166.443f, -1628.969f, 3.3738f };
		uParam0->f_3[0x00000003 /*3*/] = { -1159.67f, -1624.238f, 3.3738f };
		func_322(uParam0, uParam1, 0.5f, 0.46f, 0x00000001);
		func_324(uParam0, 0x00000001);
	}
	else if (uParam1->f_678 == 0x00000013 && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { 487.5186f, -217.7697f, 52.7864f };
		uParam0->f_3[0x00000000 /*3*/] = { 479.669f, -227.811f, 52.787f };
		uParam0->f_3[0x00000001 /*3*/] = { 487.252f, -230.572f, 52.787f };
		uParam0->f_3[0x00000002 /*3*/] = { 495.403f, -208.181f, 52.787f };
		uParam0->f_3[0x00000003 /*3*/] = { 487.807f, -205.4f, 52.787f };
		func_322(uParam0, uParam1, 0.5f, 0.428f, 0x00000000);
		func_324(uParam0, 0x00000002);
	}
	else if (uParam1->f_678 == 0x00000017 && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -49.912f, 942.5634f, 231.1741f };
		uParam0->f_3[0x00000000 /*3*/] = { -54.665f, 947.136f, 231.174f };
		uParam0->f_3[0x00000001 /*3*/] = { -55.353f, 939.187f, 231.174f };
		uParam0->f_3[0x00000002 /*3*/] = { -31.706f, 937.116f, 231.174f };
		uParam0->f_3[0x00000003 /*3*/] = { -31.008f, 945.056f, 231.174f };
		func_322(uParam0, uParam1, 0.5f, 0.428f, 0x00000000);
		func_324(uParam0, 0x00000008);
	}
	else if (uParam1->f_678 == 0x00000011 && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -1225.454f, 344.8268f, 78.9859f };
		uParam0->f_3[0x00000000 /*3*/] = { -1223.264f, 351.306f, 78.9867f };
		uParam0->f_3[0x00000001 /*3*/] = { -1231.37f, 348.946f, 78.9867f };
		uParam0->f_3[0x00000002 /*3*/] = { -1224.658f, 325.996f, 78.9867f };
		uParam0->f_3[0x00000003 /*3*/] = { -1216.553f, 328.359f, 78.9867f };
		func_322(uParam0, uParam1, 0.5f, 0.46f, 0x00000001);
		func_324(uParam0, 0x00000003);
	}
	else if (uParam1->f_678 == 0x0000000F && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -1623.454f, 257.1566f, 58.5552f };
		uParam0->f_3[0x00000000 /*3*/] = { -1627.471f, 275.479f, 58.5552f };
		uParam0->f_3[0x00000001 /*3*/] = { -1634.971f, 271.977f, 58.5552f };
		uParam0->f_3[0x00000002 /*3*/] = { -1624.893f, 250.367f, 58.5552f };
		uParam0->f_3[0x00000003 /*3*/] = { -1617.398f, 253.864f, 58.5552f };
		func_322(uParam0, uParam1, 0.5f, 0.46f, 0x00000001);
		func_324(uParam0, 0x00000004);
	}
	else if (uParam1->f_678 == 0x00000012 && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -939.6168f, -1255.732f, 6.9773f };
		uParam0->f_3[0x00000001 /*3*/] = { -945.684f, -1253.143f, 6.9773f };
		uParam0->f_3[0x00000002 /*3*/] = { -933.813f, -1273.726f, 6.9773f };
		uParam0->f_3[0x00000003 /*3*/] = { -926.823f, -1269.7f, 6.9773f };
		uParam0->f_3[0x00000000 /*3*/] = { -938.693f, -1249.116f, 6.9773f };
		func_322(uParam0, uParam1, 0.5f, 0.428f, 0x00000001);
		func_324(uParam0, 0x00000005);
	}
	else if (uParam1->f_678 == 0x00000014 && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -1371.275f, -107.9437f, 49.7046f };
		uParam0->f_3[0x00000000 /*3*/] = { -1374.66f, -114.005f, 49.7046f };
		uParam0->f_3[0x00000001 /*3*/] = { -1366.627f, -113.082f, 49.7046f };
		uParam0->f_3[0x00000002 /*3*/] = { -1369.309f, -89.432f, 49.7046f };
		uParam0->f_3[0x00000003 /*3*/] = { -1377.338f, -90.342f, 49.7046f };
		func_322(uParam0, uParam1, 0.5f, 0.43f, 0x00000001);
		func_324(uParam0, 0x00000006);
	}
	else if (uParam1->f_678 == 0x0000000E && uParam1->f_679 != 0x00000001)
	{
		uParam0->f_37 = { -2869.991f, 9.2297f, 10.6083f };
		uParam0->f_3[0x00000000 /*3*/] = { -2875.503f, 5.33f, 10.6083f };
		uParam0->f_3[0x00000001 /*3*/] = { -2867.721f, 3.09f, 10.6083f };
		uParam0->f_3[0x00000002 /*3*/] = { -2861.163f, 25.966f, 10.6083f };
		uParam0->f_3[0x00000003 /*3*/] = { -2868.95f, 28.198f, 10.6083f };
		func_322(uParam0, uParam1, 0.5f, 0.458f, 0x00000001);
		func_324(uParam0, 0x00000007);
	}
	else if (uParam1->f_679 == 0x00000001)
	{
		func_324(uParam0, 0x00000009);
	}
	switch (iParam2)
	{
		case 0x00000000:
			uParam0->f_3[0x00000000 /*3*/] = { -1173.374f, -1604.762f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1180.065f, -1609.454f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1166.428f, -1628.932f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1159.739f, -1624.236f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000001:
			uParam0->f_3[0x00000000 /*3*/] = { -1157.2f, -1627.22f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1163.84f, -1632.52f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1150.21f, -1652.12f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1143.55f, -1647.38f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000002:
			uParam0->f_3[0x00000000 /*3*/] = { -1186.49f, -1613.97f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1193.2f, -1618.66f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1179.52f, -1638.12f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1172.85f, -1633.42f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000003:
			uParam0->f_3[0x00000000 /*3*/] = { -1170.43f, -1637.13f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1177.05f, -1641.73f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1163.35f, -1661.24f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1156.67f, -1656.57f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000004:
			uParam0->f_3[0x00000000 /*3*/] = { -1199.63f, -1623.2f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1206.29f, -1627.84f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1192.65f, -1647.33f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1185.96f, -1642.67f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000005:
			uParam0->f_3[0x00000000 /*3*/] = { -1183.47f, -1646.29f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1190.16f, -1650.97f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1176.48f, -1670.47f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1169.79f, -1665.81f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000006:
			uParam0->f_3[0x00000000 /*3*/] = { -1196.58f, -1655.5f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1203.27f, -1660.14f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1189.58f, -1679.62f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1182.9f, -1674.99f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000007:
			uParam0->f_3[0x00000000 /*3*/] = { -1212.78f, -1632.34f, 3.1734f };
			uParam0->f_3[0x00000001 /*3*/] = { -1219.5f, -1636.97f, 3.1734f };
			uParam0->f_3[0x00000002 /*3*/] = { -1205.75f, -1656.57f, 3.1734f };
			uParam0->f_3[0x00000003 /*3*/] = { -1199.12f, -1651.88f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 0x00000008:
			uParam0->f_3[0x00000000 /*3*/] = { -54.61f, 947f, 231.19f };
			uParam0->f_3[0x00000001 /*3*/] = { -55.26f, 939.3f, 231.19f };
			uParam0->f_3[0x00000002 /*3*/] = { -31.67f, 937.09f, 231.18f };
			uParam0->f_3[0x00000003 /*3*/] = { -31.11f, 945.09f, 231.19f };
			fVar1 = 0.5f;
			uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
			uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
			fVar0 = 0.46f;
			uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
			uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
			uParam0->f_37 = { -43.02f, 942.03f, 232.19f };
			break;
		
		default:
			break;
	}
}

void func_322(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	uParam1->f_67A = { uParam0->f_3[0x00000003 /*3*/] - uParam0->f_3[0x00000000 /*3*/] * Vector(fParam2, fParam2, fParam2) };
	uParam1->f_67D = { uParam0->f_3[0x00000001 /*3*/] - uParam0->f_3[0x00000000 /*3*/] };
	uParam1->f_680 = { func_186(uParam1->f_67D, uParam1->f_67A) };
	uParam0->f_31 = { uParam1->f_67A / FtoV(SYSTEM::VMAG(uParam1->f_67A)) };
	uParam0->f_34 = { uParam1->f_67D / FtoV(SYSTEM::VMAG(uParam1->f_67D)) };
	uParam0->f_10[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_10[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_10[0x00000002 /*3*/] = { uParam0->f_3[0x00000002 /*3*/] - uParam1->f_67A * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_10[0x00000003 /*3*/] = { uParam0->f_3[0x00000003 /*3*/] - uParam1->f_67A * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_1D = { uParam0->f_3[0x00000000 /*3*/] + uParam0->f_3[0x00000002 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_20[0x00000000 /*3*/] = { uParam0->f_3[0x00000000 /*3*/] + uParam1->f_67A };
	uParam0->f_20[0x00000001 /*3*/] = { uParam0->f_3[0x00000001 /*3*/] + uParam1->f_67A };
	func_325(uParam0, SYSTEM::VMAG(uParam1->f_67D));
	func_323(uParam0, fParam3);
	if (bParam4)
	{
		fVar0 = -0.694f;
		fVar1 = 0.693f;
		fVar2 = 1.075f;
		fVar3 = 0.87f;
	}
	else
	{
		fVar0 = -0.834f;
		fVar1 = 0.834f;
		fVar2 = 1.148f;
		fVar3 = 0.928f;
	}
	uParam0->f_27[0x00000000 /*3*/] = { uParam0->f_1D + uParam1->f_67D * Vector(fVar0, fVar0, fVar0) };
	uParam0->f_27[0x00000000 /*3*/].f_2 = (uParam0->f_27[0x00000000 /*3*/].f_2 + fVar2);
	uParam0->f_27[0x00000001 /*3*/] = { uParam0->f_1D };
	uParam0->f_27[0x00000001 /*3*/].f_2 = (uParam0->f_27[0x00000001 /*3*/].f_2 + fVar3);
	uParam0->f_27[0x00000002 /*3*/] = { uParam0->f_1D + uParam1->f_67D * Vector(fVar1, fVar1, fVar1) };
	uParam0->f_27[0x00000002 /*3*/].f_2 = (uParam0->f_27[0x00000002 /*3*/].f_2 + fVar2);
}

void func_323(var uParam0, float fParam1)
{
	uParam0->f_2 = fParam1;
}

void func_324(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_325(var uParam0, float fParam1)
{
	uParam0->f_1 = fParam1;
}

var func_326(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar3;
	
	fVar0 = 1E+08f;
	bVar3 = unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000);
	if (func_224(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		bVar3 = unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())), 0x00000000);
	}
	if (!bVar3)
	{
		if (func_224(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())), 0x00000001) };
		}
		else
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -769.058f, 165.294f, 66.474f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x00000010;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1171.28f, -1599.59f, 3.34f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x0000000D;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, 487.5186f, -217.7697f, 52.7864f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x00000013;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -49.912f, 942.5634f, 231.1741f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x00000017;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1225.454f, 344.8268f, 78.9859f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x00000011;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1623.454f, 257.1566f, 58.5552f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x0000000F;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -939.6168f, -1255.732f, 6.9773f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x00000012;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -1371.275f, -107.9437f, 49.7046f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x00000014;
		}
		fVar1 = SYSTEM::VDIST2(vVar2, -2869.991f, 9.2297f, 10.6083f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 0x0000000E;
		}
	}
	return *uParam0;
}

float func_327(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_328()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 0x00000590);
	}
	if (Global_1B416.f_2378 || func_337(0x00000000))
	{
		if (!func_336())
		{
			iVar0 = func_335();
			if (iVar0 != 0xFFFFFFFF)
			{
				if (!func_330(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000005);
				return;
			}
		}
		else
		{
			func_329();
		}
	}
}

void func_329()
{
	Global_181DB = 0x00000001;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_12C36))
		{
			switch (func_40())
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
			switch (func_40())
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

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_329();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(0x00001388);
	}
	iVar0 = Global_15D98[iParam0 /*5*/];
	iVar1 = Global_12C5B.f_6D[iVar0 /*4*/];
	func_334(iVar1, 0x00000001);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0x00000000);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	func_331(&(Global_1B416.f_936.f_21B), iVar1);
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

void func_331(var uParam0, int iParam1)
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
			if (!func_333(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_332(&(uParam0->f_8F8[iVar0]));
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

void func_332(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

int func_333(int iParam0, var uParam1, float fParam2)
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
			return func_333(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_333(0x00000008, uParam1, fParam2);
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

void func_334(int iParam0, bool bParam1)
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

int func_335()
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

int func_336()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_337(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_338(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_339(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_339(int iParam0)
{
	return func_340(iParam0, Global_A1D7);
}

int func_340(int iParam0, int iParam1)
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

